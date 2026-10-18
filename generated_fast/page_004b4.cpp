#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_4b3(u8* __restrict R,Cpu& c);
u32 body_4b5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b4(u8* __restrict R,Cpu& c);
u32 page_4b4(Cpu& c){return body_4b4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b4000:goto L4b4000;
case 0x4b4003:c.instructions+=3;goto B4b4003;
case 0x4b4008:c.instructions+=2;goto B4b4008;
case 0x4b4009:c.instructions+=1;goto B4b4009;
case 0x4b400e:goto L4b400e;
case 0x4b4011:c.instructions+=2;goto B4b4011;
case 0x4b4012:c.instructions+=1;goto B4b4012;
case 0x4b4020:goto L4b4020;
case 0x4b4021:c.instructions+=5;goto B4b4021;
case 0x4b4022:c.instructions+=4;goto B4b4022;
case 0x4b4026:c.instructions+=3;goto B4b4026;
case 0x4b402c:c.instructions+=2;goto B4b402c;
case 0x4b402e:c.instructions+=1;goto B4b402e;
case 0x4b4030:goto L4b4030;
case 0x4b4036:c.instructions+=1;goto B4b4036;
case 0x4b4038:goto L4b4038;
case 0x4b4039:c.instructions+=2;goto B4b4039;
case 0x4b403e:c.instructions+=1;goto B4b403e;
case 0x4b4043:goto L4b4043;
case 0x4b4046:c.instructions+=4;goto B4b4046;
case 0x4b4048:c.instructions+=3;goto B4b4048;
case 0x4b404d:c.instructions+=2;goto B4b404d;
case 0x4b4050:c.instructions+=1;goto B4b4050;
case 0x4b4055:goto L4b4055;
case 0x4b4058:c.instructions+=1;goto B4b4058;
case 0x4b4059:goto L4b4059;
case 0x4b405e:c.instructions+=1;goto B4b405e;
case 0x4b4063:goto L4b4063;
case 0x4b4066:c.instructions+=2;goto B4b4066;
case 0x4b4068:c.instructions+=1;goto B4b4068;
case 0x4b406a:goto L4b406a;
case 0x4b406f:c.instructions+=1;goto B4b406f;
case 0x4b4074:goto L4b4074;
case 0x4b4076:c.instructions+=3;goto B4b4076;
case 0x4b407b:c.instructions+=2;goto B4b407b;
case 0x4b4081:c.instructions+=1;goto B4b4081;
case 0x4b4086:goto L4b4086;
case 0x4b408a:c.instructions+=3;goto B4b408a;
case 0x4b408b:c.instructions+=2;goto B4b408b;
case 0x4b4090:c.instructions+=1;goto B4b4090;
case 0x4b4095:goto L4b4095;
case 0x4b4097:c.instructions+=4;goto B4b4097;
case 0x4b409a:c.instructions+=3;goto B4b409a;
case 0x4b409b:c.instructions+=2;goto B4b409b;
case 0x4b409d:c.instructions+=1;goto B4b409d;
case 0x4b40a0:goto L4b40a0;
case 0x4b40a2:c.instructions+=2;goto B4b40a2;
case 0x4b40a4:c.instructions+=1;goto B4b40a4;
case 0x4b40a7:goto L4b40a7;
case 0x4b40a8:c.instructions+=2;goto B4b40a8;
case 0x4b40a9:c.instructions+=1;goto B4b40a9;
case 0x4b40b0:goto L4b40b0;
case 0x4b40b4:c.instructions+=13;goto B4b40b4;
case 0x4b40b8:c.instructions+=12;goto B4b40b8;
case 0x4b40b9:c.instructions+=11;goto B4b40b9;
case 0x4b40ba:c.instructions+=10;goto B4b40ba;
case 0x4b40be:c.instructions+=9;goto B4b40be;
case 0x4b40c0:c.instructions+=8;goto B4b40c0;
case 0x4b40c4:c.instructions+=7;goto B4b40c4;
case 0x4b40c5:c.instructions+=6;goto B4b40c5;
case 0x4b40c9:c.instructions+=5;goto B4b40c9;
case 0x4b40ca:c.instructions+=4;goto B4b40ca;
case 0x4b40cb:c.instructions+=3;goto B4b40cb;
case 0x4b40cc:c.instructions+=2;goto B4b40cc;
case 0x4b40ce:c.instructions+=1;goto B4b40ce;
case 0x4b40d3:goto L4b40d3;
case 0x4b40d9:c.instructions+=3;goto B4b40d9;
case 0x4b40db:c.instructions+=2;goto B4b40db;
case 0x4b40dc:c.instructions+=1;goto B4b40dc;
case 0x4b40e0:goto L4b40e0;
case 0x4b40e1:c.instructions+=5;goto B4b40e1;
case 0x4b40e2:c.instructions+=4;goto B4b40e2;
case 0x4b40e6:c.instructions+=3;goto B4b40e6;
case 0x4b40ec:c.instructions+=2;goto B4b40ec;
case 0x4b40ee:c.instructions+=1;goto B4b40ee;
case 0x4b40f0:goto L4b40f0;
case 0x4b40f6:c.instructions+=1;goto B4b40f6;
case 0x4b40f8:goto L4b40f8;
case 0x4b40fd:c.instructions+=2;goto B4b40fd;
case 0x4b4100:c.instructions+=1;goto B4b4100;
case 0x4b4102:goto L4b4102;
case 0x4b4107:c.instructions+=1;goto B4b4107;
case 0x4b4109:goto L4b4109;
case 0x4b410e:c.instructions+=1;goto B4b410e;
case 0x4b4113:goto L4b4113;
case 0x4b4115:goto L4b4115;
case 0x4b411a:goto L4b411a;
case 0x4b411d:c.instructions+=3;goto B4b411d;
case 0x4b411f:c.instructions+=2;goto B4b411f;
case 0x4b4121:c.instructions+=1;goto B4b4121;
case 0x4b4123:goto L4b4123;
case 0x4b4128:goto L4b4128;
case 0x4b412b:c.instructions+=5;goto B4b412b;
case 0x4b4131:c.instructions+=4;goto B4b4131;
case 0x4b4133:c.instructions+=3;goto B4b4133;
case 0x4b4134:c.instructions+=2;goto B4b4134;
case 0x4b4136:c.instructions+=1;goto B4b4136;
case 0x4b4139:goto L4b4139;
case 0x4b413b:c.instructions+=2;goto B4b413b;
case 0x4b413d:c.instructions+=1;goto B4b413d;
case 0x4b4140:goto L4b4140;
case 0x4b4141:c.instructions+=2;goto B4b4141;
case 0x4b4142:c.instructions+=1;goto B4b4142;
case 0x4b4150:goto L4b4150;
case 0x4b4151:c.instructions+=5;goto B4b4151;
case 0x4b4153:c.instructions+=4;goto B4b4153;
case 0x4b4156:c.instructions+=3;goto B4b4156;
case 0x4b415b:c.instructions+=2;goto B4b415b;
case 0x4b415c:c.instructions+=1;goto B4b415c;
case 0x4b4161:goto L4b4161;
case 0x4b4166:c.instructions+=3;goto B4b4166;
case 0x4b4169:c.instructions+=2;goto B4b4169;
case 0x4b416c:c.instructions+=1;goto B4b416c;
case 0x4b416e:goto L4b416e;
case 0x4b4173:c.instructions+=1;goto B4b4173;
case 0x4b4175:goto L4b4175;
case 0x4b417a:c.instructions+=1;goto B4b417a;
case 0x4b417f:goto L4b417f;
case 0x4b4181:goto L4b4181;
case 0x4b4186:goto L4b4186;
case 0x4b4189:c.instructions+=2;goto B4b4189;
case 0x4b418b:c.instructions+=1;goto B4b418b;
case 0x4b418d:goto L4b418d;
case 0x4b4190:c.instructions+=3;goto B4b4190;
case 0x4b4195:c.instructions+=2;goto B4b4195;
case 0x4b4196:c.instructions+=1;goto B4b4196;
case 0x4b419b:goto L4b419b;
case 0x4b419e:c.instructions+=2;goto B4b419e;
case 0x4b419f:c.instructions+=1;goto B4b419f;
case 0x4b41a0:goto L4b41a0;
case 0x4b41a3:c.instructions+=3;goto B4b41a3;
case 0x4b41a8:c.instructions+=2;goto B4b41a8;
case 0x4b41a9:c.instructions+=1;goto B4b41a9;
case 0x4b41ae:goto L4b41ae;
case 0x4b41b1:c.instructions+=2;goto B4b41b1;
case 0x4b41b2:c.instructions+=1;goto B4b41b2;
case 0x4b41c0:goto L4b41c0;
case 0x4b41c2:c.instructions+=13;goto B4b41c2;
case 0x4b41c7:c.instructions+=12;goto B4b41c7;
case 0x4b41cd:c.instructions+=11;goto B4b41cd;
case 0x4b41ce:c.instructions+=10;goto B4b41ce;
case 0x4b41d5:c.instructions+=9;goto B4b41d5;
case 0x4b41d6:c.instructions+=8;goto B4b41d6;
case 0x4b41d7:c.instructions+=7;goto B4b41d7;
case 0x4b41d8:c.instructions+=6;goto B4b41d8;
case 0x4b41da:c.instructions+=5;goto B4b41da;
case 0x4b41db:c.instructions+=4;goto B4b41db;
case 0x4b41e5:c.instructions+=3;goto B4b41e5;
case 0x4b41e7:c.instructions+=2;goto B4b41e7;
case 0x4b41ee:c.instructions+=1;goto B4b41ee;
case 0x4b41f3:goto L4b41f3;
case 0x4b41f5:c.instructions+=5;goto B4b41f5;
case 0x4b41f8:c.instructions+=4;goto B4b41f8;
case 0x4b41fc:c.instructions+=3;goto B4b41fc;
case 0x4b41fe:c.instructions+=2;goto B4b41fe;
case 0x4b4206:c.instructions+=1;goto B4b4206;
case 0x4b4208:goto L4b4208;
case 0x4b420a:c.instructions+=10;goto B4b420a;
case 0x4b4210:c.instructions+=9;goto B4b4210;
case 0x4b4211:c.instructions+=8;goto B4b4211;
case 0x4b4217:c.instructions+=7;goto B4b4217;
case 0x4b4218:c.instructions+=6;goto B4b4218;
case 0x4b421e:c.instructions+=5;goto B4b421e;
case 0x4b421f:c.instructions+=4;goto B4b421f;
case 0x4b4225:c.instructions+=3;goto B4b4225;
case 0x4b4226:c.instructions+=2;goto B4b4226;
case 0x4b4228:c.instructions+=1;goto B4b4228;
case 0x4b422d:goto L4b422d;
case 0x4b4233:c.instructions+=1;goto B4b4233;
case 0x4b4235:goto L4b4235;
case 0x4b4237:goto L4b4237;
case 0x4b4239:c.instructions+=5;goto B4b4239;
case 0x4b423c:c.instructions+=4;goto B4b423c;
case 0x4b423d:c.instructions+=3;goto B4b423d;
case 0x4b423f:c.instructions+=2;goto B4b423f;
case 0x4b4243:c.instructions+=1;goto B4b4243;
case 0x4b4248:goto L4b4248;
case 0x4b424d:c.instructions+=2;goto B4b424d;
case 0x4b4253:c.instructions+=1;goto B4b4253;
case 0x4b4258:goto L4b4258;
case 0x4b425a:c.instructions+=5;goto B4b425a;
case 0x4b425d:c.instructions+=4;goto B4b425d;
case 0x4b4261:c.instructions+=3;goto B4b4261;
case 0x4b4263:c.instructions+=2;goto B4b4263;
case 0x4b426b:c.instructions+=1;goto B4b426b;
case 0x4b426d:goto L4b426d;
case 0x4b426f:c.instructions+=13;goto B4b426f;
case 0x4b4271:c.instructions+=12;goto B4b4271;
case 0x4b4276:c.instructions+=11;goto B4b4276;
case 0x4b427c:c.instructions+=10;goto B4b427c;
case 0x4b427d:c.instructions+=9;goto B4b427d;
case 0x4b4283:c.instructions+=8;goto B4b4283;
case 0x4b4284:c.instructions+=7;goto B4b4284;
case 0x4b428a:c.instructions+=6;goto B4b428a;
case 0x4b428b:c.instructions+=5;goto B4b428b;
case 0x4b4291:c.instructions+=4;goto B4b4291;
case 0x4b4292:c.instructions+=3;goto B4b4292;
case 0x4b4294:c.instructions+=2;goto B4b4294;
case 0x4b4296:c.instructions+=1;goto B4b4296;
case 0x4b429b:goto L4b429b;
case 0x4b42a1:c.instructions+=1;goto B4b42a1;
case 0x4b42a3:goto L4b42a3;
case 0x4b42a5:goto L4b42a5;
case 0x4b42a6:c.instructions+=3;goto B4b42a6;
case 0x4b42a8:c.instructions+=2;goto B4b42a8;
case 0x4b42ac:c.instructions+=1;goto B4b42ac;
case 0x4b42b1:goto L4b42b1;
case 0x4b42b6:c.instructions+=2;goto B4b42b6;
case 0x4b42bc:c.instructions+=1;goto B4b42bc;
case 0x4b42c1:goto L4b42c1;
case 0x4b42c3:c.instructions+=5;goto B4b42c3;
case 0x4b42c6:c.instructions+=4;goto B4b42c6;
case 0x4b42ca:c.instructions+=3;goto B4b42ca;
case 0x4b42cc:c.instructions+=2;goto B4b42cc;
case 0x4b42d4:c.instructions+=1;goto B4b42d4;
case 0x4b42d6:goto L4b42d6;
case 0x4b42d8:c.instructions+=13;goto B4b42d8;
case 0x4b42da:c.instructions+=12;goto B4b42da;
case 0x4b42df:c.instructions+=11;goto B4b42df;
case 0x4b42e5:c.instructions+=10;goto B4b42e5;
case 0x4b42e6:c.instructions+=9;goto B4b42e6;
case 0x4b42ec:c.instructions+=8;goto B4b42ec;
case 0x4b42ed:c.instructions+=7;goto B4b42ed;
case 0x4b42f3:c.instructions+=6;goto B4b42f3;
case 0x4b42f4:c.instructions+=5;goto B4b42f4;
case 0x4b42fa:c.instructions+=4;goto B4b42fa;
case 0x4b42fb:c.instructions+=3;goto B4b42fb;
case 0x4b42fd:c.instructions+=2;goto B4b42fd;
case 0x4b42ff:c.instructions+=1;goto B4b42ff;
case 0x4b4304:goto L4b4304;
case 0x4b430a:c.instructions+=1;goto B4b430a;
case 0x4b430c:goto L4b430c;
case 0x4b430e:goto L4b430e;
case 0x4b430f:c.instructions+=3;goto B4b430f;
case 0x4b4311:c.instructions+=2;goto B4b4311;
case 0x4b4315:c.instructions+=1;goto B4b4315;
case 0x4b431a:goto L4b431a;
case 0x4b4320:c.instructions+=2;goto B4b4320;
case 0x4b4327:c.instructions+=1;goto B4b4327;
case 0x4b432d:goto L4b432d;
case 0x4b432f:c.instructions+=1;goto B4b432f;
case 0x4b4334:goto L4b4334;
case 0x4b4336:c.instructions+=5;goto B4b4336;
case 0x4b4339:c.instructions+=4;goto B4b4339;
case 0x4b433d:c.instructions+=3;goto B4b433d;
case 0x4b433f:c.instructions+=2;goto B4b433f;
case 0x4b4347:c.instructions+=1;goto B4b4347;
case 0x4b4349:goto L4b4349;
case 0x4b434b:c.instructions+=10;goto B4b434b;
case 0x4b4351:c.instructions+=9;goto B4b4351;
case 0x4b4352:c.instructions+=8;goto B4b4352;
case 0x4b4358:c.instructions+=7;goto B4b4358;
case 0x4b4359:c.instructions+=6;goto B4b4359;
case 0x4b435f:c.instructions+=5;goto B4b435f;
case 0x4b4360:c.instructions+=4;goto B4b4360;
case 0x4b4366:c.instructions+=3;goto B4b4366;
case 0x4b4367:c.instructions+=2;goto B4b4367;
case 0x4b4369:c.instructions+=1;goto B4b4369;
case 0x4b436e:goto L4b436e;
case 0x4b4374:c.instructions+=1;goto B4b4374;
case 0x4b4376:goto L4b4376;
case 0x4b4378:goto L4b4378;
case 0x4b437a:c.instructions+=4;goto B4b437a;
case 0x4b437b:c.instructions+=3;goto B4b437b;
case 0x4b437d:c.instructions+=2;goto B4b437d;
case 0x4b4381:c.instructions+=1;goto B4b4381;
case 0x4b4386:goto L4b4386;
case 0x4b4388:c.instructions+=1;goto B4b4388;
case 0x4b438d:goto L4b438d;
case 0x4b438f:c.instructions+=5;goto B4b438f;
case 0x4b4392:c.instructions+=4;goto B4b4392;
case 0x4b4396:c.instructions+=3;goto B4b4396;
case 0x4b4398:c.instructions+=2;goto B4b4398;
case 0x4b43a0:c.instructions+=1;goto B4b43a0;
case 0x4b43a2:goto L4b43a2;
case 0x4b43a4:c.instructions+=10;goto B4b43a4;
case 0x4b43aa:c.instructions+=9;goto B4b43aa;
case 0x4b43ab:c.instructions+=8;goto B4b43ab;
case 0x4b43b1:c.instructions+=7;goto B4b43b1;
case 0x4b43b2:c.instructions+=6;goto B4b43b2;
case 0x4b43b8:c.instructions+=5;goto B4b43b8;
case 0x4b43b9:c.instructions+=4;goto B4b43b9;
case 0x4b43bf:c.instructions+=3;goto B4b43bf;
case 0x4b43c0:c.instructions+=2;goto B4b43c0;
case 0x4b43c2:c.instructions+=1;goto B4b43c2;
case 0x4b43c7:goto L4b43c7;
case 0x4b43cd:c.instructions+=1;goto B4b43cd;
case 0x4b43cf:goto L4b43cf;
case 0x4b43d1:goto L4b43d1;
case 0x4b43d3:c.instructions+=4;goto B4b43d3;
case 0x4b43d4:c.instructions+=3;goto B4b43d4;
case 0x4b43d6:c.instructions+=2;goto B4b43d6;
case 0x4b43da:c.instructions+=1;goto B4b43da;
case 0x4b43df:goto L4b43df;
case 0x4b43e6:c.instructions+=2;goto B4b43e6;
case 0x4b43e7:c.instructions+=1;goto B4b43e7;
case 0x4b43ec:goto L4b43ec;
case 0x4b43f2:c.instructions+=4;goto B4b43f2;
case 0x4b43f5:c.instructions+=3;goto B4b43f5;
case 0x4b43f8:c.instructions+=2;goto B4b43f8;
case 0x4b43fa:c.instructions+=1;goto B4b43fa;
case 0x4b4400:goto L4b4400;
case 0x4b4407:c.instructions+=1;goto B4b4407;
case 0x4b4409:goto L4b4409;
case 0x4b4410:c.instructions+=5;goto B4b4410;
case 0x4b4412:c.instructions+=4;goto B4b4412;
case 0x4b4414:c.instructions+=3;goto B4b4414;
case 0x4b4415:c.instructions+=2;goto B4b4415;
case 0x4b441a:c.instructions+=1;goto B4b441a;
case 0x4b441f:goto L4b441f;
case 0x4b4422:c.instructions+=2;goto B4b4422;
case 0x4b4424:c.instructions+=1;goto B4b4424;
case 0x4b4426:goto L4b4426;
case 0x4b4428:c.instructions+=1;goto B4b4428;
case 0x4b442d:goto L4b442d;
case 0x4b4430:c.instructions+=4;goto B4b4430;
case 0x4b4434:c.instructions+=3;goto B4b4434;
case 0x4b4436:c.instructions+=2;goto B4b4436;
case 0x4b443e:c.instructions+=1;goto B4b443e;
case 0x4b4440:goto L4b4440;
case 0x4b4442:c.instructions+=10;goto B4b4442;
case 0x4b4448:c.instructions+=9;goto B4b4448;
case 0x4b4449:c.instructions+=8;goto B4b4449;
case 0x4b444f:c.instructions+=7;goto B4b444f;
case 0x4b4450:c.instructions+=6;goto B4b4450;
case 0x4b4456:c.instructions+=5;goto B4b4456;
case 0x4b4457:c.instructions+=4;goto B4b4457;
case 0x4b445d:c.instructions+=3;goto B4b445d;
case 0x4b445e:c.instructions+=2;goto B4b445e;
case 0x4b4460:c.instructions+=1;goto B4b4460;
case 0x4b4465:goto L4b4465;
case 0x4b4467:goto L4b4467;
case 0x4b4469:goto L4b4469;
case 0x4b446b:c.instructions+=4;goto B4b446b;
case 0x4b446c:c.instructions+=3;goto B4b446c;
case 0x4b446e:c.instructions+=2;goto B4b446e;
case 0x4b4472:c.instructions+=1;goto B4b4472;
case 0x4b4477:goto L4b4477;
case 0x4b447d:c.instructions+=1;goto B4b447d;
case 0x4b447f:goto L4b447f;
case 0x4b4485:goto L4b4485;
case 0x4b448f:goto L4b448f;
case 0x4b4492:c.instructions+=1;goto B4b4492;
case 0x4b4494:goto L4b4494;
case 0x4b4497:c.instructions+=1;goto B4b4497;
case 0x4b4499:goto L4b4499;
case 0x4b449b:c.instructions+=1;goto B4b449b;
case 0x4b449d:goto L4b449d;
case 0x4b449f:goto L4b449f;
case 0x4b44a2:c.instructions+=1;goto B4b44a2;
case 0x4b44a4:goto L4b44a4;
case 0x4b44ab:c.instructions+=1;goto B4b44ab;
case 0x4b44ad:goto L4b44ad;
case 0x4b44af:c.instructions+=1;goto B4b44af;
case 0x4b44b1:goto L4b44b1;
case 0x4b44b3:goto L4b44b3;
case 0x4b44b5:c.instructions+=1;goto B4b44b5;
case 0x4b44b7:goto L4b44b7;
case 0x4b44ba:c.instructions+=1;goto B4b44ba;
case 0x4b44bc:goto L4b44bc;
case 0x4b44be:c.instructions+=1;goto B4b44be;
case 0x4b44c0:goto L4b44c0;
case 0x4b44c2:c.instructions+=1;goto B4b44c2;
case 0x4b44c7:goto L4b44c7;
case 0x4b44ca:c.instructions+=4;goto B4b44ca;
case 0x4b44ce:c.instructions+=3;goto B4b44ce;
case 0x4b44d0:c.instructions+=2;goto B4b44d0;
case 0x4b44d8:c.instructions+=1;goto B4b44d8;
case 0x4b44da:goto L4b44da;
case 0x4b44dc:c.instructions+=10;goto B4b44dc;
case 0x4b44e2:c.instructions+=9;goto B4b44e2;
case 0x4b44e3:c.instructions+=8;goto B4b44e3;
case 0x4b44e9:c.instructions+=7;goto B4b44e9;
case 0x4b44ea:c.instructions+=6;goto B4b44ea;
case 0x4b44f0:c.instructions+=5;goto B4b44f0;
case 0x4b44f1:c.instructions+=4;goto B4b44f1;
case 0x4b44f7:c.instructions+=3;goto B4b44f7;
case 0x4b44f8:c.instructions+=2;goto B4b44f8;
case 0x4b44fa:c.instructions+=1;goto B4b44fa;
case 0x4b44ff:goto L4b44ff;
case 0x4b4501:goto L4b4501;
case 0x4b4503:goto L4b4503;
case 0x4b4505:c.instructions+=4;goto B4b4505;
case 0x4b4506:c.instructions+=3;goto B4b4506;
case 0x4b4508:c.instructions+=2;goto B4b4508;
case 0x4b450c:c.instructions+=1;goto B4b450c;
case 0x4b4511:goto L4b4511;
case 0x4b4517:c.instructions+=2;goto B4b4517;
case 0x4b451d:c.instructions+=1;goto B4b451d;
case 0x4b451f:goto L4b451f;
case 0x4b4528:goto L4b4528;
case 0x4b4532:c.instructions+=1;goto B4b4532;
case 0x4b4534:goto L4b4534;
case 0x4b4537:c.instructions+=1;goto B4b4537;
case 0x4b4539:goto L4b4539;
case 0x4b453b:c.instructions+=1;goto B4b453b;
case 0x4b4540:goto L4b4540;
case 0x4b4542:c.instructions+=5;goto B4b4542;
case 0x4b4545:c.instructions+=4;goto B4b4545;
case 0x4b4549:c.instructions+=3;goto B4b4549;
case 0x4b454b:c.instructions+=2;goto B4b454b;
case 0x4b4553:c.instructions+=1;goto B4b4553;
case 0x4b4555:goto L4b4555;
case 0x4b4557:c.instructions+=10;goto B4b4557;
case 0x4b455d:c.instructions+=9;goto B4b455d;
case 0x4b455e:c.instructions+=8;goto B4b455e;
case 0x4b4564:c.instructions+=7;goto B4b4564;
case 0x4b4565:c.instructions+=6;goto B4b4565;
case 0x4b456b:c.instructions+=5;goto B4b456b;
case 0x4b456c:c.instructions+=4;goto B4b456c;
case 0x4b4572:c.instructions+=3;goto B4b4572;
case 0x4b4573:c.instructions+=2;goto B4b4573;
case 0x4b4575:c.instructions+=1;goto B4b4575;
case 0x4b457a:goto L4b457a;
case 0x4b457c:c.instructions+=5;goto B4b457c;
case 0x4b457d:c.instructions+=4;goto B4b457d;
case 0x4b457f:c.instructions+=3;goto B4b457f;
case 0x4b4585:c.instructions+=2;goto B4b4585;
case 0x4b4589:c.instructions+=1;goto B4b4589;
case 0x4b458e:goto L4b458e;
case 0x4b4590:goto L4b4590;
case 0x4b4592:c.instructions+=5;goto B4b4592;
case 0x4b4594:c.instructions+=4;goto B4b4594;
case 0x4b4595:c.instructions+=3;goto B4b4595;
case 0x4b4597:c.instructions+=2;goto B4b4597;
case 0x4b459b:c.instructions+=1;goto B4b459b;
case 0x4b45a0:goto L4b45a0;
case 0x4b45a2:goto L4b45a2;
case 0x4b45a9:goto L4b45a9;
case 0x4b45ab:c.instructions+=1;goto B4b45ab;
case 0x4b45b0:goto L4b45b0;
case 0x4b45b3:c.instructions+=4;goto B4b45b3;
case 0x4b45b7:c.instructions+=3;goto B4b45b7;
case 0x4b45b9:c.instructions+=2;goto B4b45b9;
case 0x4b45c1:c.instructions+=1;goto B4b45c1;
case 0x4b45c3:goto L4b45c3;
case 0x4b45c5:c.instructions+=10;goto B4b45c5;
case 0x4b45cb:c.instructions+=9;goto B4b45cb;
case 0x4b45cc:c.instructions+=8;goto B4b45cc;
case 0x4b45d2:c.instructions+=7;goto B4b45d2;
case 0x4b45d3:c.instructions+=6;goto B4b45d3;
case 0x4b45d9:c.instructions+=5;goto B4b45d9;
case 0x4b45da:c.instructions+=4;goto B4b45da;
case 0x4b45e0:c.instructions+=3;goto B4b45e0;
case 0x4b45e1:c.instructions+=2;goto B4b45e1;
case 0x4b45e3:c.instructions+=1;goto B4b45e3;
case 0x4b45e8:goto L4b45e8;
case 0x4b45ea:goto L4b45ea;
case 0x4b45ec:goto L4b45ec;
case 0x4b45ee:c.instructions+=4;goto B4b45ee;
case 0x4b45ef:c.instructions+=3;goto B4b45ef;
case 0x4b45f1:c.instructions+=2;goto B4b45f1;
case 0x4b45f5:c.instructions+=1;goto B4b45f5;
case 0x4b45fa:goto L4b45fa;
case 0x4b45fc:c.instructions+=1;goto B4b45fc;
case 0x4b4601:goto L4b4601;
case 0x4b4603:c.instructions+=5;goto B4b4603;
case 0x4b4606:c.instructions+=4;goto B4b4606;
case 0x4b460a:c.instructions+=3;goto B4b460a;
case 0x4b460c:c.instructions+=2;goto B4b460c;
case 0x4b4614:c.instructions+=1;goto B4b4614;
case 0x4b4616:goto L4b4616;
case 0x4b4618:c.instructions+=10;goto B4b4618;
case 0x4b461e:c.instructions+=9;goto B4b461e;
case 0x4b461f:c.instructions+=8;goto B4b461f;
case 0x4b4625:c.instructions+=7;goto B4b4625;
case 0x4b4626:c.instructions+=6;goto B4b4626;
case 0x4b462c:c.instructions+=5;goto B4b462c;
case 0x4b462d:c.instructions+=4;goto B4b462d;
case 0x4b4633:c.instructions+=3;goto B4b4633;
case 0x4b4634:c.instructions+=2;goto B4b4634;
case 0x4b4636:c.instructions+=1;goto B4b4636;
case 0x4b463b:goto L4b463b;
case 0x4b4641:c.instructions+=1;goto B4b4641;
case 0x4b4643:goto L4b4643;
case 0x4b4645:goto L4b4645;
case 0x4b4647:c.instructions+=4;goto B4b4647;
case 0x4b4648:c.instructions+=3;goto B4b4648;
case 0x4b464a:c.instructions+=2;goto B4b464a;
case 0x4b464e:c.instructions+=1;goto B4b464e;
case 0x4b4653:goto L4b4653;
case 0x4b4655:c.instructions+=1;goto B4b4655;
case 0x4b465a:goto L4b465a;
case 0x4b465c:c.instructions+=5;goto B4b465c;
case 0x4b465f:c.instructions+=4;goto B4b465f;
case 0x4b4663:c.instructions+=3;goto B4b4663;
case 0x4b4665:c.instructions+=2;goto B4b4665;
case 0x4b466d:c.instructions+=1;goto B4b466d;
case 0x4b466f:goto L4b466f;
case 0x4b4671:c.instructions+=10;goto B4b4671;
case 0x4b4677:c.instructions+=9;goto B4b4677;
case 0x4b4678:c.instructions+=8;goto B4b4678;
case 0x4b467e:c.instructions+=7;goto B4b467e;
case 0x4b467f:c.instructions+=6;goto B4b467f;
case 0x4b4685:c.instructions+=5;goto B4b4685;
case 0x4b4686:c.instructions+=4;goto B4b4686;
case 0x4b468c:c.instructions+=3;goto B4b468c;
case 0x4b468d:c.instructions+=2;goto B4b468d;
case 0x4b468f:c.instructions+=1;goto B4b468f;
case 0x4b4694:goto L4b4694;
case 0x4b469a:c.instructions+=1;goto B4b469a;
case 0x4b469c:goto L4b469c;
case 0x4b469e:goto L4b469e;
case 0x4b46a0:c.instructions+=4;goto B4b46a0;
case 0x4b46a1:c.instructions+=3;goto B4b46a1;
case 0x4b46a3:c.instructions+=2;goto B4b46a3;
case 0x4b46a7:c.instructions+=1;goto B4b46a7;
case 0x4b46ac:goto L4b46ac;
case 0x4b46b1:c.instructions+=2;goto B4b46b1;
case 0x4b46b4:c.instructions+=1;goto B4b46b4;
case 0x4b46b6:goto L4b46b6;
case 0x4b46b9:c.instructions+=1;goto B4b46b9;
case 0x4b46bb:goto L4b46bb;
case 0x4b46bd:c.instructions+=1;goto B4b46bd;
case 0x4b46c2:goto L4b46c2;
case 0x4b46c4:c.instructions+=5;goto B4b46c4;
case 0x4b46c7:c.instructions+=4;goto B4b46c7;
case 0x4b46cb:c.instructions+=3;goto B4b46cb;
case 0x4b46cd:c.instructions+=2;goto B4b46cd;
case 0x4b46d5:c.instructions+=1;goto B4b46d5;
case 0x4b46d7:goto L4b46d7;
case 0x4b46d9:c.instructions+=10;goto B4b46d9;
case 0x4b46df:c.instructions+=9;goto B4b46df;
case 0x4b46e0:c.instructions+=8;goto B4b46e0;
case 0x4b46e6:c.instructions+=7;goto B4b46e6;
case 0x4b46e7:c.instructions+=6;goto B4b46e7;
case 0x4b46ed:c.instructions+=5;goto B4b46ed;
case 0x4b46ee:c.instructions+=4;goto B4b46ee;
case 0x4b46f4:c.instructions+=3;goto B4b46f4;
case 0x4b46f5:c.instructions+=2;goto B4b46f5;
case 0x4b46f7:c.instructions+=1;goto B4b46f7;
case 0x4b46fc:goto L4b46fc;
case 0x4b46fe:c.instructions+=5;goto B4b46fe;
case 0x4b46ff:c.instructions+=4;goto B4b46ff;
case 0x4b4701:c.instructions+=3;goto B4b4701;
case 0x4b4707:c.instructions+=2;goto B4b4707;
case 0x4b470b:c.instructions+=1;goto B4b470b;
case 0x4b4710:goto L4b4710;
case 0x4b4712:goto L4b4712;
case 0x4b4714:c.instructions+=5;goto B4b4714;
case 0x4b4716:c.instructions+=4;goto B4b4716;
case 0x4b4717:c.instructions+=3;goto B4b4717;
case 0x4b4719:c.instructions+=2;goto B4b4719;
case 0x4b471d:c.instructions+=1;goto B4b471d;
case 0x4b4722:goto L4b4722;
case 0x4b4724:goto L4b4724;
case 0x4b472b:goto L4b472b;
case 0x4b4735:c.instructions+=1;goto B4b4735;
case 0x4b4737:goto L4b4737;
case 0x4b4739:c.instructions+=1;goto B4b4739;
case 0x4b473e:goto L4b473e;
case 0x4b4740:c.instructions+=5;goto B4b4740;
case 0x4b4743:c.instructions+=4;goto B4b4743;
case 0x4b4747:c.instructions+=3;goto B4b4747;
case 0x4b4749:c.instructions+=2;goto B4b4749;
case 0x4b4751:c.instructions+=1;goto B4b4751;
case 0x4b4753:goto L4b4753;
case 0x4b4755:c.instructions+=10;goto B4b4755;
case 0x4b475b:c.instructions+=9;goto B4b475b;
case 0x4b475c:c.instructions+=8;goto B4b475c;
case 0x4b4762:c.instructions+=7;goto B4b4762;
case 0x4b4763:c.instructions+=6;goto B4b4763;
case 0x4b4769:c.instructions+=5;goto B4b4769;
case 0x4b476a:c.instructions+=4;goto B4b476a;
case 0x4b4770:c.instructions+=3;goto B4b4770;
case 0x4b4771:c.instructions+=2;goto B4b4771;
case 0x4b4773:c.instructions+=1;goto B4b4773;
case 0x4b4778:goto L4b4778;
case 0x4b477e:c.instructions+=1;goto B4b477e;
case 0x4b4780:goto L4b4780;
case 0x4b4782:goto L4b4782;
case 0x4b4784:c.instructions+=4;goto B4b4784;
case 0x4b4785:c.instructions+=3;goto B4b4785;
case 0x4b4787:c.instructions+=2;goto B4b4787;
case 0x4b478b:c.instructions+=1;goto B4b478b;
case 0x4b4790:goto L4b4790;
case 0x4b4794:c.instructions+=6;goto B4b4794;
case 0x4b4795:c.instructions+=5;goto B4b4795;
case 0x4b4796:c.instructions+=4;goto B4b4796;
case 0x4b4797:c.instructions+=3;goto B4b4797;
case 0x4b479e:c.instructions+=2;goto B4b479e;
case 0x4b47a1:c.instructions+=1;goto B4b47a1;
case 0x4b47b0:goto L4b47b0;
case 0x4b47b2:c.instructions+=10;goto B4b47b2;
case 0x4b47b7:c.instructions+=9;goto B4b47b7;
case 0x4b47bd:c.instructions+=8;goto B4b47bd;
case 0x4b47be:c.instructions+=7;goto B4b47be;
case 0x4b47c5:c.instructions+=6;goto B4b47c5;
case 0x4b47c6:c.instructions+=5;goto B4b47c6;
case 0x4b47cb:c.instructions+=4;goto B4b47cb;
case 0x4b47ce:c.instructions+=3;goto B4b47ce;
case 0x4b47cf:c.instructions+=2;goto B4b47cf;
case 0x4b47d1:c.instructions+=1;goto B4b47d1;
case 0x4b47d7:goto L4b47d7;
case 0x4b47dc:c.instructions+=1;goto B4b47dc;
case 0x4b47e2:goto L4b47e2;
case 0x4b47e7:c.instructions+=1;goto B4b47e7;
case 0x4b47ec:goto L4b47ec;
case 0x4b47ef:c.instructions+=2;goto B4b47ef;
case 0x4b47f0:c.instructions+=1;goto B4b47f0;
case 0x4b47f5:goto L4b47f5;
case 0x4b47fb:c.instructions+=3;goto B4b47fb;
case 0x4b47fe:c.instructions+=2;goto B4b47fe;
case 0x4b4801:c.instructions+=1;goto B4b4801;
case 0x4b4803:goto L4b4803;
case 0x4b480a:c.instructions+=5;goto B4b480a;
case 0x4b480c:c.instructions+=4;goto B4b480c;
case 0x4b480e:c.instructions+=3;goto B4b480e;
case 0x4b480f:c.instructions+=2;goto B4b480f;
case 0x4b4811:c.instructions+=1;goto B4b4811;
case 0x4b4816:goto L4b4816;
case 0x4b4819:c.instructions+=2;goto B4b4819;
case 0x4b481b:c.instructions+=1;goto B4b481b;
case 0x4b481d:goto L4b481d;
case 0x4b481f:c.instructions+=1;goto B4b481f;
case 0x4b4824:goto L4b4824;
case 0x4b4827:c.instructions+=4;goto B4b4827;
case 0x4b482b:c.instructions+=3;goto B4b482b;
case 0x4b482d:c.instructions+=2;goto B4b482d;
case 0x4b4835:c.instructions+=1;goto B4b4835;
case 0x4b4837:goto L4b4837;
case 0x4b4839:c.instructions+=10;goto B4b4839;
case 0x4b483f:c.instructions+=9;goto B4b483f;
case 0x4b4840:c.instructions+=8;goto B4b4840;
case 0x4b4846:c.instructions+=7;goto B4b4846;
case 0x4b4847:c.instructions+=6;goto B4b4847;
case 0x4b484d:c.instructions+=5;goto B4b484d;
case 0x4b484e:c.instructions+=4;goto B4b484e;
case 0x4b4854:c.instructions+=3;goto B4b4854;
case 0x4b4855:c.instructions+=2;goto B4b4855;
case 0x4b4857:c.instructions+=1;goto B4b4857;
case 0x4b485c:goto L4b485c;
case 0x4b485e:goto L4b485e;
case 0x4b4860:goto L4b4860;
case 0x4b4862:c.instructions+=4;goto B4b4862;
case 0x4b4863:c.instructions+=3;goto B4b4863;
case 0x4b4865:c.instructions+=2;goto B4b4865;
case 0x4b486d:c.instructions+=1;goto B4b486d;
case 0x4b4872:goto L4b4872;
case 0x4b4873:c.instructions+=2;goto B4b4873;
case 0x4b4875:c.instructions+=1;goto B4b4875;
case 0x4b487a:goto L4b487a;
case 0x4b487c:c.instructions+=5;goto B4b487c;
case 0x4b487f:c.instructions+=4;goto B4b487f;
case 0x4b4883:c.instructions+=3;goto B4b4883;
case 0x4b4885:c.instructions+=2;goto B4b4885;
case 0x4b488d:c.instructions+=1;goto B4b488d;
case 0x4b488f:goto L4b488f;
case 0x4b4891:c.instructions+=10;goto B4b4891;
case 0x4b4897:c.instructions+=9;goto B4b4897;
case 0x4b4898:c.instructions+=8;goto B4b4898;
case 0x4b489e:c.instructions+=7;goto B4b489e;
case 0x4b489f:c.instructions+=6;goto B4b489f;
case 0x4b48a5:c.instructions+=5;goto B4b48a5;
case 0x4b48a6:c.instructions+=4;goto B4b48a6;
case 0x4b48ac:c.instructions+=3;goto B4b48ac;
case 0x4b48ad:c.instructions+=2;goto B4b48ad;
case 0x4b48af:c.instructions+=1;goto B4b48af;
case 0x4b48b4:goto L4b48b4;
case 0x4b48ba:c.instructions+=1;goto B4b48ba;
case 0x4b48bc:goto L4b48bc;
case 0x4b48be:goto L4b48be;
case 0x4b48c0:c.instructions+=4;goto B4b48c0;
case 0x4b48c1:c.instructions+=3;goto B4b48c1;
case 0x4b48c3:c.instructions+=2;goto B4b48c3;
case 0x4b48cb:c.instructions+=1;goto B4b48cb;
case 0x4b48d0:goto L4b48d0;
case 0x4b48d7:c.instructions+=1;goto B4b48d7;
case 0x4b48dd:goto L4b48dd;
case 0x4b48df:c.instructions+=1;goto B4b48df;
case 0x4b48e4:goto L4b48e4;
case 0x4b48e7:c.instructions+=4;goto B4b48e7;
case 0x4b48eb:c.instructions+=3;goto B4b48eb;
case 0x4b48ed:c.instructions+=2;goto B4b48ed;
case 0x4b48f5:c.instructions+=1;goto B4b48f5;
case 0x4b48f7:goto L4b48f7;
case 0x4b48f9:c.instructions+=10;goto B4b48f9;
case 0x4b48ff:c.instructions+=9;goto B4b48ff;
case 0x4b4900:c.instructions+=8;goto B4b4900;
case 0x4b4906:c.instructions+=7;goto B4b4906;
case 0x4b4907:c.instructions+=6;goto B4b4907;
case 0x4b490d:c.instructions+=5;goto B4b490d;
case 0x4b490e:c.instructions+=4;goto B4b490e;
case 0x4b4914:c.instructions+=3;goto B4b4914;
case 0x4b4915:c.instructions+=2;goto B4b4915;
case 0x4b4917:c.instructions+=1;goto B4b4917;
case 0x4b491c:goto L4b491c;
case 0x4b491e:goto L4b491e;
case 0x4b4920:goto L4b4920;
case 0x4b4922:c.instructions+=5;goto B4b4922;
case 0x4b4925:c.instructions+=4;goto B4b4925;
case 0x4b4926:c.instructions+=3;goto B4b4926;
case 0x4b4928:c.instructions+=2;goto B4b4928;
case 0x4b492c:c.instructions+=1;goto B4b492c;
case 0x4b4931:goto L4b4931;
case 0x4b4933:c.instructions+=1;goto B4b4933;
case 0x4b4938:goto L4b4938;
case 0x4b493b:c.instructions+=4;goto B4b493b;
case 0x4b493f:c.instructions+=3;goto B4b493f;
case 0x4b4941:c.instructions+=2;goto B4b4941;
case 0x4b4949:c.instructions+=1;goto B4b4949;
case 0x4b494b:goto L4b494b;
case 0x4b494d:c.instructions+=10;goto B4b494d;
case 0x4b4953:c.instructions+=9;goto B4b4953;
case 0x4b4954:c.instructions+=8;goto B4b4954;
case 0x4b495a:c.instructions+=7;goto B4b495a;
case 0x4b495b:c.instructions+=6;goto B4b495b;
case 0x4b4961:c.instructions+=5;goto B4b4961;
case 0x4b4962:c.instructions+=4;goto B4b4962;
case 0x4b4968:c.instructions+=3;goto B4b4968;
case 0x4b4969:c.instructions+=2;goto B4b4969;
case 0x4b496b:c.instructions+=1;goto B4b496b;
case 0x4b4970:goto L4b4970;
case 0x4b4972:goto L4b4972;
case 0x4b4974:goto L4b4974;
case 0x4b4976:c.instructions+=4;goto B4b4976;
case 0x4b4977:c.instructions+=3;goto B4b4977;
case 0x4b4979:c.instructions+=2;goto B4b4979;
case 0x4b497d:c.instructions+=1;goto B4b497d;
case 0x4b4982:goto L4b4982;
case 0x4b4984:c.instructions+=1;goto B4b4984;
case 0x4b4989:goto L4b4989;
case 0x4b498b:c.instructions+=5;goto B4b498b;
case 0x4b498e:c.instructions+=4;goto B4b498e;
case 0x4b4992:c.instructions+=3;goto B4b4992;
case 0x4b4994:c.instructions+=2;goto B4b4994;
case 0x4b499c:c.instructions+=1;goto B4b499c;
case 0x4b499e:goto L4b499e;
case 0x4b49a0:c.instructions+=10;goto B4b49a0;
case 0x4b49a6:c.instructions+=9;goto B4b49a6;
case 0x4b49a7:c.instructions+=8;goto B4b49a7;
case 0x4b49ad:c.instructions+=7;goto B4b49ad;
case 0x4b49ae:c.instructions+=6;goto B4b49ae;
case 0x4b49b4:c.instructions+=5;goto B4b49b4;
case 0x4b49b5:c.instructions+=4;goto B4b49b5;
case 0x4b49bb:c.instructions+=3;goto B4b49bb;
case 0x4b49bc:c.instructions+=2;goto B4b49bc;
case 0x4b49be:c.instructions+=1;goto B4b49be;
case 0x4b49c3:goto L4b49c3;
case 0x4b49c9:c.instructions+=1;goto B4b49c9;
case 0x4b49cb:goto L4b49cb;
case 0x4b49cd:goto L4b49cd;
case 0x4b49cf:c.instructions+=4;goto B4b49cf;
case 0x4b49d0:c.instructions+=3;goto B4b49d0;
case 0x4b49d2:c.instructions+=2;goto B4b49d2;
case 0x4b49da:c.instructions+=1;goto B4b49da;
case 0x4b49df:goto L4b49df;
case 0x4b49e0:c.instructions+=5;goto B4b49e0;
case 0x4b49e1:c.instructions+=4;goto B4b49e1;
case 0x4b49e5:c.instructions+=3;goto B4b49e5;
case 0x4b49ec:c.instructions+=2;goto B4b49ec;
case 0x4b49ef:c.instructions+=1;goto B4b49ef;
case 0x4b49f0:goto L4b49f0;
case 0x4b49f2:c.instructions+=1;goto B4b49f2;
case 0x4b49f7:goto L4b49f7;
case 0x4b49fb:c.instructions+=4;goto B4b49fb;
case 0x4b49fc:c.instructions+=3;goto B4b49fc;
case 0x4b4a03:c.instructions+=2;goto B4b4a03;
case 0x4b4a06:c.instructions+=1;goto B4b4a06;
case 0x4b4a10:goto L4b4a10;
case 0x4b4a12:c.instructions+=10;goto B4b4a12;
case 0x4b4a17:c.instructions+=9;goto B4b4a17;
case 0x4b4a1d:c.instructions+=8;goto B4b4a1d;
case 0x4b4a1e:c.instructions+=7;goto B4b4a1e;
case 0x4b4a25:c.instructions+=6;goto B4b4a25;
case 0x4b4a26:c.instructions+=5;goto B4b4a26;
case 0x4b4a2b:c.instructions+=4;goto B4b4a2b;
case 0x4b4a2e:c.instructions+=3;goto B4b4a2e;
case 0x4b4a2f:c.instructions+=2;goto B4b4a2f;
case 0x4b4a31:c.instructions+=1;goto B4b4a31;
case 0x4b4a37:goto L4b4a37;
case 0x4b4a3c:c.instructions+=1;goto B4b4a3c;
case 0x4b4a42:goto L4b4a42;
case 0x4b4a47:c.instructions+=1;goto B4b4a47;
case 0x4b4a4c:goto L4b4a4c;
case 0x4b4a4f:c.instructions+=2;goto B4b4a4f;
case 0x4b4a50:c.instructions+=1;goto B4b4a50;
case 0x4b4a55:goto L4b4a55;
case 0x4b4a5b:c.instructions+=3;goto B4b4a5b;
case 0x4b4a5e:c.instructions+=2;goto B4b4a5e;
case 0x4b4a61:c.instructions+=1;goto B4b4a61;
case 0x4b4a63:goto L4b4a63;
case 0x4b4a6a:c.instructions+=5;goto B4b4a6a;
case 0x4b4a6c:c.instructions+=4;goto B4b4a6c;
case 0x4b4a6e:c.instructions+=3;goto B4b4a6e;
case 0x4b4a6f:c.instructions+=2;goto B4b4a6f;
case 0x4b4a71:c.instructions+=1;goto B4b4a71;
case 0x4b4a76:goto L4b4a76;
case 0x4b4a79:c.instructions+=2;goto B4b4a79;
case 0x4b4a7b:c.instructions+=1;goto B4b4a7b;
case 0x4b4a7d:goto L4b4a7d;
case 0x4b4a7f:c.instructions+=1;goto B4b4a7f;
case 0x4b4a84:goto L4b4a84;
case 0x4b4a87:c.instructions+=4;goto B4b4a87;
case 0x4b4a8b:c.instructions+=3;goto B4b4a8b;
case 0x4b4a8d:c.instructions+=2;goto B4b4a8d;
case 0x4b4a95:c.instructions+=1;goto B4b4a95;
case 0x4b4a97:goto L4b4a97;
case 0x4b4a99:c.instructions+=10;goto B4b4a99;
case 0x4b4a9f:c.instructions+=9;goto B4b4a9f;
case 0x4b4aa0:c.instructions+=8;goto B4b4aa0;
case 0x4b4aa6:c.instructions+=7;goto B4b4aa6;
case 0x4b4aa7:c.instructions+=6;goto B4b4aa7;
case 0x4b4aad:c.instructions+=5;goto B4b4aad;
case 0x4b4aae:c.instructions+=4;goto B4b4aae;
case 0x4b4ab4:c.instructions+=3;goto B4b4ab4;
case 0x4b4ab5:c.instructions+=2;goto B4b4ab5;
case 0x4b4ab7:c.instructions+=1;goto B4b4ab7;
case 0x4b4abc:goto L4b4abc;
case 0x4b4abe:goto L4b4abe;
case 0x4b4ac0:goto L4b4ac0;
case 0x4b4ac2:c.instructions+=4;goto B4b4ac2;
case 0x4b4ac3:c.instructions+=3;goto B4b4ac3;
case 0x4b4ac5:c.instructions+=2;goto B4b4ac5;
case 0x4b4acd:c.instructions+=1;goto B4b4acd;
case 0x4b4ad2:goto L4b4ad2;
case 0x4b4ad3:c.instructions+=2;goto B4b4ad3;
case 0x4b4ad5:c.instructions+=1;goto B4b4ad5;
case 0x4b4ada:goto L4b4ada;
case 0x4b4adc:c.instructions+=5;goto B4b4adc;
case 0x4b4adf:c.instructions+=4;goto B4b4adf;
case 0x4b4ae3:c.instructions+=3;goto B4b4ae3;
case 0x4b4ae5:c.instructions+=2;goto B4b4ae5;
case 0x4b4aed:c.instructions+=1;goto B4b4aed;
case 0x4b4aef:goto L4b4aef;
case 0x4b4af1:c.instructions+=10;goto B4b4af1;
case 0x4b4af7:c.instructions+=9;goto B4b4af7;
case 0x4b4af8:c.instructions+=8;goto B4b4af8;
case 0x4b4afe:c.instructions+=7;goto B4b4afe;
case 0x4b4aff:c.instructions+=6;goto B4b4aff;
case 0x4b4b05:c.instructions+=5;goto B4b4b05;
case 0x4b4b06:c.instructions+=4;goto B4b4b06;
case 0x4b4b0c:c.instructions+=3;goto B4b4b0c;
case 0x4b4b0d:c.instructions+=2;goto B4b4b0d;
case 0x4b4b0f:c.instructions+=1;goto B4b4b0f;
case 0x4b4b14:goto L4b4b14;
case 0x4b4b1a:c.instructions+=1;goto B4b4b1a;
case 0x4b4b1c:goto L4b4b1c;
case 0x4b4b1e:goto L4b4b1e;
case 0x4b4b20:c.instructions+=4;goto B4b4b20;
case 0x4b4b21:c.instructions+=3;goto B4b4b21;
case 0x4b4b23:c.instructions+=2;goto B4b4b23;
case 0x4b4b2b:c.instructions+=1;goto B4b4b2b;
case 0x4b4b30:goto L4b4b30;
case 0x4b4b31:c.instructions+=5;goto B4b4b31;
case 0x4b4b32:c.instructions+=4;goto B4b4b32;
case 0x4b4b36:c.instructions+=3;goto B4b4b36;
case 0x4b4b3d:c.instructions+=2;goto B4b4b3d;
case 0x4b4b40:c.instructions+=1;goto B4b4b40;
case 0x4b4b41:goto L4b4b41;
case 0x4b4b43:c.instructions+=1;goto B4b4b43;
case 0x4b4b48:goto L4b4b48;
case 0x4b4b4c:c.instructions+=4;goto B4b4b4c;
case 0x4b4b4d:c.instructions+=3;goto B4b4b4d;
case 0x4b4b54:c.instructions+=2;goto B4b4b54;
case 0x4b4b57:c.instructions+=1;goto B4b4b57;
case 0x4b4b60:goto L4b4b60;
case 0x4b4b61:c.instructions+=2;goto B4b4b61;
case 0x4b4b63:c.instructions+=1;goto B4b4b63;
case 0x4b4b68:goto L4b4b68;
case 0x4b4b6d:c.instructions+=1;goto B4b4b6d;
case 0x4b4b6f:goto L4b4b6f;
case 0x4b4b70:c.instructions+=1;goto B4b4b70;
case 0x4b4b75:goto L4b4b75;
case 0x4b4b78:goto L4b4b78;
case 0x4b4b7a:c.instructions+=2;goto B4b4b7a;
case 0x4b4b7b:c.instructions+=1;goto B4b4b7b;
case 0x4b4b80:goto L4b4b80;
case 0x4b4b81:c.instructions+=5;goto B4b4b81;
case 0x4b4b83:c.instructions+=4;goto B4b4b83;
case 0x4b4b86:c.instructions+=3;goto B4b4b86;
case 0x4b4b89:c.instructions+=2;goto B4b4b89;
case 0x4b4b8b:c.instructions+=1;goto B4b4b8b;
case 0x4b4b8d:goto L4b4b8d;
case 0x4b4b90:c.instructions+=1;goto B4b4b90;
case 0x4b4b92:goto L4b4b92;
case 0x4b4b98:goto L4b4b98;
case 0x4b4b9e:c.instructions+=3;goto B4b4b9e;
case 0x4b4ba0:c.instructions+=2;goto B4b4ba0;
case 0x4b4ba3:c.instructions+=1;goto B4b4ba3;
case 0x4b4ba5:goto L4b4ba5;
case 0x4b4ba8:c.instructions+=2;goto B4b4ba8;
case 0x4b4baa:c.instructions+=1;goto B4b4baa;
case 0x4b4bac:goto L4b4bac;
case 0x4b4baf:c.instructions+=1;goto B4b4baf;
case 0x4b4bb1:goto L4b4bb1;
case 0x4b4bb7:goto L4b4bb7;
case 0x4b4bb9:c.instructions+=1;goto B4b4bb9;
case 0x4b4bbb:goto L4b4bbb;
case 0x4b4bbf:c.instructions+=3;goto B4b4bbf;
case 0x4b4bc5:c.instructions+=2;goto B4b4bc5;
case 0x4b4bcb:c.instructions+=1;goto B4b4bcb;
case 0x4b4bd0:goto L4b4bd0;
case 0x4b4bd2:c.instructions+=4;goto B4b4bd2;
case 0x4b4bd4:c.instructions+=3;goto B4b4bd4;
case 0x4b4bd7:c.instructions+=2;goto B4b4bd7;
case 0x4b4bdb:c.instructions+=1;goto B4b4bdb;
case 0x4b4be0:goto L4b4be0;
case 0x4b4be1:c.instructions+=1;goto B4b4be1;
case 0x4b4be4:goto L4b4be4;
case 0x4b4be8:c.instructions+=3;goto B4b4be8;
case 0x4b4bef:c.instructions+=2;goto B4b4bef;
case 0x4b4bf0:c.instructions+=1;goto B4b4bf0;
case 0x4b4bf3:goto L4b4bf3;
case 0x4b4bf5:c.instructions+=3;goto B4b4bf5;
case 0x4b4bf7:c.instructions+=2;goto B4b4bf7;
case 0x4b4bfe:c.instructions+=1;goto B4b4bfe;
case 0x4b4c03:goto L4b4c03;
case 0x4b4c04:c.instructions+=1;goto B4b4c04;
case 0x4b4c10:goto L4b4c10;
case 0x4b4c11:c.instructions+=4;goto B4b4c11;
case 0x4b4c12:c.instructions+=3;goto B4b4c12;
case 0x4b4c14:c.instructions+=2;goto B4b4c14;
case 0x4b4c16:c.instructions+=1;goto B4b4c16;
case 0x4b4c1b:goto L4b4c1b;
case 0x4b4c1f:c.instructions+=3;goto B4b4c1f;
case 0x4b4c22:c.instructions+=2;goto B4b4c22;
case 0x4b4c24:c.instructions+=1;goto B4b4c24;
case 0x4b4c26:goto L4b4c26;
case 0x4b4c2a:c.instructions+=5;goto B4b4c2a;
case 0x4b4c2d:c.instructions+=4;goto B4b4c2d;
case 0x4b4c34:c.instructions+=3;goto B4b4c34;
case 0x4b4c3b:c.instructions+=2;goto B4b4c3b;
case 0x4b4c3d:c.instructions+=1;goto B4b4c3d;
case 0x4b4c3f:goto L4b4c3f;
case 0x4b4c41:goto L4b4c41;
case 0x4b4c44:c.instructions+=8;goto B4b4c44;
case 0x4b4c47:c.instructions+=7;goto B4b4c47;
case 0x4b4c49:c.instructions+=6;goto B4b4c49;
case 0x4b4c4c:c.instructions+=5;goto B4b4c4c;
case 0x4b4c4f:c.instructions+=4;goto B4b4c4f;
case 0x4b4c51:c.instructions+=3;goto B4b4c51;
case 0x4b4c56:c.instructions+=2;goto B4b4c56;
case 0x4b4c59:c.instructions+=1;goto B4b4c59;
case 0x4b4c5b:goto L4b4c5b;
case 0x4b4c60:c.instructions+=2;goto B4b4c60;
case 0x4b4c65:c.instructions+=1;goto B4b4c65;
case 0x4b4c67:goto L4b4c67;
case 0x4b4c6c:goto L4b4c6c;
case 0x4b4c73:c.instructions+=5;goto B4b4c73;
case 0x4b4c75:c.instructions+=4;goto B4b4c75;
case 0x4b4c77:c.instructions+=3;goto B4b4c77;
case 0x4b4c78:c.instructions+=2;goto B4b4c78;
case 0x4b4c79:c.instructions+=1;goto B4b4c79;
case 0x4b4c7e:goto L4b4c7e;
case 0x4b4c81:c.instructions+=8;goto B4b4c81;
case 0x4b4c83:c.instructions+=7;goto B4b4c83;
case 0x4b4c85:c.instructions+=6;goto B4b4c85;
case 0x4b4c87:c.instructions+=5;goto B4b4c87;
case 0x4b4c8a:c.instructions+=4;goto B4b4c8a;
case 0x4b4c90:c.instructions+=3;goto B4b4c90;
case 0x4b4c91:c.instructions+=2;goto B4b4c91;
case 0x4b4c92:c.instructions+=1;goto B4b4c92;
case 0x4b4ca0:goto L4b4ca0;
case 0x4b4ca1:c.instructions+=2;goto B4b4ca1;
case 0x4b4ca3:c.instructions+=1;goto B4b4ca3;
case 0x4b4ca8:goto L4b4ca8;
case 0x4b4cad:c.instructions+=1;goto B4b4cad;
case 0x4b4caf:goto L4b4caf;
case 0x4b4cb0:c.instructions+=1;goto B4b4cb0;
case 0x4b4cb5:goto L4b4cb5;
case 0x4b4cb8:goto L4b4cb8;
case 0x4b4cba:c.instructions+=2;goto B4b4cba;
case 0x4b4cbb:c.instructions+=1;goto B4b4cbb;
case 0x4b4cc0:goto L4b4cc0;
case 0x4b4cc3:c.instructions+=12;goto B4b4cc3;
case 0x4b4cc4:c.instructions+=11;goto B4b4cc4;
case 0x4b4cc5:c.instructions+=10;goto B4b4cc5;
case 0x4b4cc6:c.instructions+=9;goto B4b4cc6;
case 0x4b4cc7:c.instructions+=8;goto B4b4cc7;
case 0x4b4ccc:c.instructions+=7;goto B4b4ccc;
case 0x4b4cce:c.instructions+=6;goto B4b4cce;
case 0x4b4cd3:c.instructions+=5;goto B4b4cd3;
case 0x4b4cd8:c.instructions+=4;goto B4b4cd8;
case 0x4b4cde:c.instructions+=3;goto B4b4cde;
case 0x4b4ce1:c.instructions+=2;goto B4b4ce1;
case 0x4b4ce6:c.instructions+=1;goto B4b4ce6;
case 0x4b4ceb:goto L4b4ceb;
case 0x4b4cec:c.instructions+=2;goto B4b4cec;
case 0x4b4ced:c.instructions+=1;goto B4b4ced;
case 0x4b4cf2:goto L4b4cf2;
case 0x4b4cf5:c.instructions+=2;goto B4b4cf5;
case 0x4b4cf6:c.instructions+=1;goto B4b4cf6;
case 0x4b4cfb:goto L4b4cfb;
case 0x4b4d05:c.instructions+=4;goto B4b4d05;
case 0x4b4d0a:c.instructions+=3;goto B4b4d0a;
case 0x4b4d0d:c.instructions+=2;goto B4b4d0d;
case 0x4b4d12:c.instructions+=1;goto B4b4d12;
case 0x4b4d14:goto L4b4d14;
case 0x4b4d19:goto L4b4d19;
case 0x4b4d1c:c.instructions+=9;goto B4b4d1c;
case 0x4b4d21:c.instructions+=8;goto B4b4d21;
case 0x4b4d27:c.instructions+=7;goto B4b4d27;
case 0x4b4d2d:c.instructions+=6;goto B4b4d2d;
case 0x4b4d33:c.instructions+=5;goto B4b4d33;
case 0x4b4d39:c.instructions+=4;goto B4b4d39;
case 0x4b4d3b:c.instructions+=3;goto B4b4d3b;
case 0x4b4d41:c.instructions+=2;goto B4b4d41;
case 0x4b4d44:c.instructions+=1;goto B4b4d44;
case 0x4b4d49:goto L4b4d49;
case 0x4b4d4a:c.instructions+=2;goto B4b4d4a;
case 0x4b4d4d:c.instructions+=1;goto B4b4d4d;
case 0x4b4d4f:goto L4b4d4f;
case 0x4b4d56:goto L4b4d56;
case 0x4b4d59:c.instructions+=1;goto B4b4d59;
case 0x4b4d5b:goto L4b4d5b;
case 0x4b4d62:c.instructions+=1;goto B4b4d62;
case 0x4b4d64:goto L4b4d64;
case 0x4b4d6b:c.instructions+=1;goto B4b4d6b;
case 0x4b4d6d:goto L4b4d6d;
case 0x4b4d74:c.instructions+=1;goto B4b4d74;
case 0x4b4d76:goto L4b4d76;
case 0x4b4d7d:c.instructions+=1;goto B4b4d7d;
case 0x4b4d7f:goto L4b4d7f;
case 0x4b4d86:c.instructions+=1;goto B4b4d86;
case 0x4b4d88:goto L4b4d88;
case 0x4b4d8f:c.instructions+=1;goto B4b4d8f;
case 0x4b4d91:goto L4b4d91;
case 0x4b4d94:goto L4b4d94;
case 0x4b4d9b:c.instructions+=6;goto B4b4d9b;
case 0x4b4d9f:c.instructions+=5;goto B4b4d9f;
case 0x4b4da3:c.instructions+=4;goto B4b4da3;
case 0x4b4da7:c.instructions+=3;goto B4b4da7;
case 0x4b4dab:c.instructions+=2;goto B4b4dab;
case 0x4b4dae:c.instructions+=1;goto B4b4dae;
case 0x4b4db0:goto L4b4db0;
case 0x4b4db4:goto L4b4db4;
case 0x4b4db7:c.instructions+=3;goto B4b4db7;
case 0x4b4dbc:c.instructions+=2;goto B4b4dbc;
case 0x4b4dbd:c.instructions+=1;goto B4b4dbd;
case 0x4b4dc2:goto L4b4dc2;
case 0x4b4dc5:c.instructions+=4;goto B4b4dc5;
case 0x4b4dc8:c.instructions+=3;goto B4b4dc8;
case 0x4b4dcd:c.instructions+=2;goto B4b4dcd;
case 0x4b4dce:c.instructions+=1;goto B4b4dce;
case 0x4b4dd3:goto L4b4dd3;
case 0x4b4dd6:c.instructions+=4;goto B4b4dd6;
case 0x4b4dd9:c.instructions+=3;goto B4b4dd9;
case 0x4b4ddf:c.instructions+=2;goto B4b4ddf;
case 0x4b4de7:c.instructions+=1;goto B4b4de7;
case 0x4b4df0:goto L4b4df0;
case 0x4b4df1:c.instructions+=5;goto B4b4df1;
case 0x4b4df6:c.instructions+=4;goto B4b4df6;
case 0x4b4dfa:c.instructions+=3;goto B4b4dfa;
case 0x4b4dfc:c.instructions+=2;goto B4b4dfc;
case 0x4b4dfd:c.instructions+=1;goto B4b4dfd;
case 0x4b4e02:goto L4b4e02;
case 0x4b4e05:c.instructions+=3;goto B4b4e05;
case 0x4b4e09:c.instructions+=2;goto B4b4e09;
case 0x4b4e0a:c.instructions+=1;goto B4b4e0a;
case 0x4b4e0f:goto L4b4e0f;
case 0x4b4e10:c.instructions+=2;goto B4b4e10;
case 0x4b4e11:c.instructions+=1;goto B4b4e11;
case 0x4b4e16:goto L4b4e16;
case 0x4b4e17:c.instructions+=6;goto B4b4e17;
case 0x4b4e1c:c.instructions+=5;goto B4b4e1c;
case 0x4b4e20:c.instructions+=4;goto B4b4e20;
case 0x4b4e22:c.instructions+=3;goto B4b4e22;
case 0x4b4e23:c.instructions+=2;goto B4b4e23;
case 0x4b4e29:c.instructions+=1;goto B4b4e29;
case 0x4b4e2e:goto L4b4e2e;
case 0x4b4e31:c.instructions+=3;goto B4b4e31;
case 0x4b4e35:c.instructions+=2;goto B4b4e35;
case 0x4b4e36:c.instructions+=1;goto B4b4e36;
case 0x4b4e3b:goto L4b4e3b;
case 0x4b4e3c:c.instructions+=2;goto B4b4e3c;
case 0x4b4e3d:c.instructions+=1;goto B4b4e3d;
case 0x4b4e42:goto L4b4e42;
case 0x4b4e44:c.instructions+=7;goto B4b4e44;
case 0x4b4e48:c.instructions+=6;goto B4b4e48;
case 0x4b4e4b:c.instructions+=5;goto B4b4e4b;
case 0x4b4e4e:c.instructions+=4;goto B4b4e4e;
case 0x4b4e4f:c.instructions+=3;goto B4b4e4f;
case 0x4b4e50:c.instructions+=2;goto B4b4e50;
case 0x4b4e54:c.instructions+=1;goto B4b4e54;
case 0x4b4e56:goto L4b4e56;
case 0x4b4e5b:c.instructions+=3;goto B4b4e5b;
case 0x4b4e61:c.instructions+=2;goto B4b4e61;
case 0x4b4e69:c.instructions+=1;goto B4b4e69;
case 0x4b4e70:goto L4b4e70;
case 0x4b4e71:c.instructions+=5;goto B4b4e71;
case 0x4b4e76:c.instructions+=4;goto B4b4e76;
case 0x4b4e7a:c.instructions+=3;goto B4b4e7a;
case 0x4b4e7c:c.instructions+=2;goto B4b4e7c;
case 0x4b4e7d:c.instructions+=1;goto B4b4e7d;
case 0x4b4e82:goto L4b4e82;
case 0x4b4e85:c.instructions+=3;goto B4b4e85;
case 0x4b4e89:c.instructions+=2;goto B4b4e89;
case 0x4b4e8a:c.instructions+=1;goto B4b4e8a;
case 0x4b4e8f:goto L4b4e8f;
case 0x4b4e90:c.instructions+=2;goto B4b4e90;
case 0x4b4e91:c.instructions+=1;goto B4b4e91;
case 0x4b4e96:goto L4b4e96;
case 0x4b4e97:c.instructions+=6;goto B4b4e97;
case 0x4b4e9c:c.instructions+=5;goto B4b4e9c;
case 0x4b4ea2:c.instructions+=4;goto B4b4ea2;
case 0x4b4ea6:c.instructions+=3;goto B4b4ea6;
case 0x4b4ea8:c.instructions+=2;goto B4b4ea8;
case 0x4b4ea9:c.instructions+=1;goto B4b4ea9;
case 0x4b4eae:goto L4b4eae;
case 0x4b4eb1:c.instructions+=3;goto B4b4eb1;
case 0x4b4eb5:c.instructions+=2;goto B4b4eb5;
case 0x4b4eb6:c.instructions+=1;goto B4b4eb6;
case 0x4b4ebb:goto L4b4ebb;
case 0x4b4ebc:c.instructions+=2;goto B4b4ebc;
case 0x4b4ebd:c.instructions+=1;goto B4b4ebd;
case 0x4b4ec2:goto L4b4ec2;
case 0x4b4ec4:c.instructions+=7;goto B4b4ec4;
case 0x4b4ec8:c.instructions+=6;goto B4b4ec8;
case 0x4b4ecb:c.instructions+=5;goto B4b4ecb;
case 0x4b4ece:c.instructions+=4;goto B4b4ece;
case 0x4b4ecf:c.instructions+=3;goto B4b4ecf;
case 0x4b4ed0:c.instructions+=2;goto B4b4ed0;
case 0x4b4ed4:c.instructions+=1;goto B4b4ed4;
case 0x4b4ed6:goto L4b4ed6;
case 0x4b4edb:c.instructions+=3;goto B4b4edb;
case 0x4b4ee1:c.instructions+=2;goto B4b4ee1;
case 0x4b4ee9:c.instructions+=1;goto B4b4ee9;
case 0x4b4ef0:goto L4b4ef0;
case 0x4b4ef1:c.instructions+=5;goto B4b4ef1;
case 0x4b4ef6:c.instructions+=4;goto B4b4ef6;
case 0x4b4efa:c.instructions+=3;goto B4b4efa;
case 0x4b4efc:c.instructions+=2;goto B4b4efc;
case 0x4b4efd:c.instructions+=1;goto B4b4efd;
case 0x4b4f02:goto L4b4f02;
case 0x4b4f05:c.instructions+=3;goto B4b4f05;
case 0x4b4f09:c.instructions+=2;goto B4b4f09;
case 0x4b4f0a:c.instructions+=1;goto B4b4f0a;
case 0x4b4f0f:goto L4b4f0f;
case 0x4b4f10:c.instructions+=2;goto B4b4f10;
case 0x4b4f11:c.instructions+=1;goto B4b4f11;
case 0x4b4f16:goto L4b4f16;
case 0x4b4f17:c.instructions+=6;goto B4b4f17;
case 0x4b4f1c:c.instructions+=5;goto B4b4f1c;
case 0x4b4f20:c.instructions+=4;goto B4b4f20;
case 0x4b4f22:c.instructions+=3;goto B4b4f22;
case 0x4b4f23:c.instructions+=2;goto B4b4f23;
case 0x4b4f26:c.instructions+=1;goto B4b4f26;
case 0x4b4f2b:goto L4b4f2b;
case 0x4b4f2e:c.instructions+=3;goto B4b4f2e;
case 0x4b4f32:c.instructions+=2;goto B4b4f32;
case 0x4b4f33:c.instructions+=1;goto B4b4f33;
case 0x4b4f38:goto L4b4f38;
case 0x4b4f39:c.instructions+=2;goto B4b4f39;
case 0x4b4f3a:c.instructions+=1;goto B4b4f3a;
case 0x4b4f3f:goto L4b4f3f;
case 0x4b4f41:c.instructions+=7;goto B4b4f41;
case 0x4b4f45:c.instructions+=6;goto B4b4f45;
case 0x4b4f48:c.instructions+=5;goto B4b4f48;
case 0x4b4f4b:c.instructions+=4;goto B4b4f4b;
case 0x4b4f4c:c.instructions+=3;goto B4b4f4c;
case 0x4b4f4d:c.instructions+=2;goto B4b4f4d;
case 0x4b4f51:c.instructions+=1;goto B4b4f51;
case 0x4b4f53:goto L4b4f53;
case 0x4b4f59:c.instructions+=3;goto B4b4f59;
case 0x4b4f5e:c.instructions+=2;goto B4b4f5e;
case 0x4b4f5f:c.instructions+=1;goto B4b4f5f;
case 0x4b4f64:goto L4b4f64;
case 0x4b4f6a:c.instructions+=3;goto B4b4f6a;
case 0x4b4f6f:c.instructions+=2;goto B4b4f6f;
case 0x4b4f70:c.instructions+=1;goto B4b4f70;
case 0x4b4f75:goto L4b4f75;
case 0x4b4f7b:c.instructions+=3;goto B4b4f7b;
case 0x4b4f80:c.instructions+=2;goto B4b4f80;
case 0x4b4f81:c.instructions+=1;goto B4b4f81;
case 0x4b4f86:goto L4b4f86;
case 0x4b4f8c:c.instructions+=3;goto B4b4f8c;
case 0x4b4f91:c.instructions+=2;goto B4b4f91;
case 0x4b4f92:c.instructions+=1;goto B4b4f92;
case 0x4b4f97:goto L4b4f97;
case 0x4b4f9d:c.instructions+=3;goto B4b4f9d;
case 0x4b4fa2:c.instructions+=2;goto B4b4fa2;
case 0x4b4fa3:c.instructions+=1;goto B4b4fa3;
case 0x4b4fa8:goto L4b4fa8;
case 0x4b4fae:c.instructions+=3;goto B4b4fae;
case 0x4b4fb1:c.instructions+=2;goto B4b4fb1;
case 0x4b4fb3:c.instructions+=1;goto B4b4fb3;
case 0x4b4fb5:goto L4b4fb5;
case 0x4b4fba:goto L4b4fba;
case 0x4b4fbd:c.instructions+=1;goto B4b4fbd;
case 0x4b4fbf:goto L4b4fbf;
case 0x4b4fc2:c.instructions+=4;goto B4b4fc2;
case 0x4b4fc7:c.instructions+=3;goto B4b4fc7;
case 0x4b4fcc:c.instructions+=2;goto B4b4fcc;
case 0x4b4fcd:c.instructions+=1;goto B4b4fcd;
case 0x4b4fd2:goto L4b4fd2;
case 0x4b4fd5:c.instructions+=2;goto B4b4fd5;
case 0x4b4fd6:c.instructions+=1;goto B4b4fd6;
case 0x4b4fdb:goto L4b4fdb;
case 0x4b4fde:c.instructions+=1;goto B4b4fde;
case 0x4b4fe0:goto L4b4fe0;
case 0x4b4fe3:c.instructions+=3;goto B4b4fe3;
case 0x4b4fe8:c.instructions+=2;goto B4b4fe8;
case 0x4b4fe9:c.instructions+=1;goto B4b4fe9;
case 0x4b4fee:goto L4b4fee;
case 0x4b4fef:c.instructions+=1;goto B4b4fef;
case 0x4b4ff4:goto L4b4ff4;
case 0x4b4ff7:c.instructions+=3;goto B4b4ff7;
case 0x4b4ffc:c.instructions+=2;goto B4b4ffc;
case 0x4b4ffd:c.instructions+=1;goto B4b4ffd;
default:missing_instruction(c.pc);}
B4b4000:L4b4000:{c.instructions+=4;NFSU2_TR(0x4b4000);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b4003:{NFSU2_TR(0x4b4003);
u8 U[4];
w4(U+0,u32(0x7fd73849ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4008:{NFSU2_TR(0x4b4008);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4009:{NFSU2_TR(0x4b4009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b400eull));
TAIL_STATIC(0x50c900u,50c);
}
B4b400e:L4b400e:{c.instructions+=3;NFSU2_TR(0x4b400e);
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
B4b4011:{NFSU2_TR(0x4b4011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4012:{NFSU2_TR(0x4b4012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4020:L4b4020:{c.instructions+=6;NFSU2_TR(0x4b4020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4021:{NFSU2_TR(0x4b4021);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4022:{NFSU2_TR(0x4b4022);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b4026:{NFSU2_TR(0x4b4026);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b402c:{NFSU2_TR(0x4b402c);
__builtin_memmove((R+24),(R+4),4);
}
B4b402e:{NFSU2_TR(0x4b402e);
if(r1(R+518)){{goto L4b4038;}}
}
B4b4030:L4b4030:{c.instructions+=2;NFSU2_TR(0x4b4030);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4036:{NFSU2_TR(0x4b4036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4059;}}
}
B4b4038:L4b4038:{c.instructions+=3;NFSU2_TR(0x4b4038);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4039:{NFSU2_TR(0x4b4039);
w4(R+4,u32(0x83aab4ull));
}
B4b403e:{NFSU2_TR(0x4b403e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4043ull));
TAIL_STATIC(0x502910u,502);
}
B4b4043:L4b4043:{c.instructions+=5;NFSU2_TR(0x4b4043);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b4046:{NFSU2_TR(0x4b4046);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b4048:{NFSU2_TR(0x4b4048);
w4(R+4,u32(0x83aab4ull));
}
B4b404d:{NFSU2_TR(0x4b404d);
__builtin_memmove((R+12),(R+518),1);
}
B4b4050:{NFSU2_TR(0x4b4050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4055ull));
TAIL_STATIC(0x502910u,502);
}
B4b4055:L4b4055:{c.instructions+=2;NFSU2_TR(0x4b4055);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b4058:{NFSU2_TR(0x4b4058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b4059:L4b4059:{c.instructions+=2;NFSU2_TR(0x4b4059);
w4(R+4,u32(0x83aab4ull));
}
B4b405e:{NFSU2_TR(0x4b405e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4063ull));
TAIL_STATIC(0x502910u,502);
}
B4b4063:L4b4063:{c.instructions+=3;NFSU2_TR(0x4b4063);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b4066:{NFSU2_TR(0x4b4066);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b4068:{NFSU2_TR(0x4b4068);
if(r1(R+518)){{goto L4b4086;}}
}
B4b406a:L4b406a:{c.instructions+=2;NFSU2_TR(0x4b406a);
w4(R+4,u32(0x83aab4ull));
}
B4b406f:{NFSU2_TR(0x4b406f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4074ull));
TAIL_STATIC(0x502910u,502);
}
B4b4074:L4b4074:{c.instructions+=4;NFSU2_TR(0x4b4074);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4076:{NFSU2_TR(0x4b4076);
w4(R+4,u32(0x83aab4ull));
}
B4b407b:{NFSU2_TR(0x4b407b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w2(U+4,u16(0x3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4b4081:{NFSU2_TR(0x4b4081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4086ull));
TAIL_STATIC(0x502960u,502);
}
B4b4086:L4b4086:{c.instructions+=4;NFSU2_TR(0x4b4086);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b408a:{NFSU2_TR(0x4b408a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b408b:{NFSU2_TR(0x4b408b);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4090:{NFSU2_TR(0x4b4090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4095ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4b4095:L4b4095:{c.instructions+=5;NFSU2_TR(0x4b4095);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b4097:{NFSU2_TR(0x4b4097);
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
B4b409a:{NFSU2_TR(0x4b409a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b409b:{NFSU2_TR(0x4b409b);
__builtin_memmove((R+4),(R+24),4);
}
B4b409d:{NFSU2_TR(0x4b409d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b40a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b40a0:L4b40a0:{c.instructions+=3;NFSU2_TR(0x4b40a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b40a2:{NFSU2_TR(0x4b40a2);
__builtin_memmove((R+4),(R+24),4);
}
B4b40a4:{NFSU2_TR(0x4b40a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b40a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b40a7:L4b40a7:{c.instructions+=3;NFSU2_TR(0x4b40a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b40a8:{NFSU2_TR(0x4b40a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b40a9:{NFSU2_TR(0x4b40a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b40b0:L4b40b0:{c.instructions+=14;NFSU2_TR(0x4b40b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b40b4:{NFSU2_TR(0x4b40b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b40b8:{NFSU2_TR(0x4b40b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40b9:{NFSU2_TR(0x4b40b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40ba:{NFSU2_TR(0x4b40ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b40be:{NFSU2_TR(0x4b40be);
__builtin_memmove((R+24),(R+4),4);
}
B4b40c0:{NFSU2_TR(0x4b40c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b40c4:{NFSU2_TR(0x4b40c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40c5:{NFSU2_TR(0x4b40c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b40c9:{NFSU2_TR(0x4b40c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40ca:{NFSU2_TR(0x4b40ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40cb:{NFSU2_TR(0x4b40cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40cc:{NFSU2_TR(0x4b40cc);
__builtin_memmove((R+4),(R+24),4);
}
B4b40ce:{NFSU2_TR(0x4b40ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b40d3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b40d3:L4b40d3:{c.instructions+=4;NFSU2_TR(0x4b40d3);
u8 U[4];
w4(U+0,u32(0x791608ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b40d9:{NFSU2_TR(0x4b40d9);
__builtin_memmove((R+0),(R+24),4);
}
B4b40db:{NFSU2_TR(0x4b40db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b40dc:{NFSU2_TR(0x4b40dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b40e0:L4b40e0:{c.instructions+=6;NFSU2_TR(0x4b40e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40e1:{NFSU2_TR(0x4b40e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b40e2:{NFSU2_TR(0x4b40e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b40e6:{NFSU2_TR(0x4b40e6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b40ec:{NFSU2_TR(0x4b40ec);
__builtin_memmove((R+24),(R+4),4);
}
B4b40ee:{NFSU2_TR(0x4b40ee);
if(r1(R+518)){{goto L4b40f8;}}
}
B4b40f0:L4b40f0:{c.instructions+=2;NFSU2_TR(0x4b40f0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b40f6:{NFSU2_TR(0x4b40f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4140;}}
}
B4b40f8:L4b40f8:{c.instructions+=3;NFSU2_TR(0x4b40f8);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b40fd:{NFSU2_TR(0x4b40fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4100:{NFSU2_TR(0x4b4100);
if(r1(R+518)){{goto L4b4115;}}
}
B4b4102:L4b4102:{c.instructions+=2;NFSU2_TR(0x4b4102);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4107:{NFSU2_TR(0x4b4107);
if(r1(R+518)){{goto L4b4115;}}
}
B4b4109:L4b4109:{c.instructions+=2;NFSU2_TR(0x4b4109);
w4(R+4,u32(0x83aab4ull));
}
B4b410e:{NFSU2_TR(0x4b410e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4113ull));
TAIL_STATIC(0x502910u,502);
}
B4b4113:L4b4113:{c.instructions+=1;NFSU2_TR(0x4b4113);
{goto L4b411a;}
}
B4b4115:L4b4115:{c.instructions+=1;NFSU2_TR(0x4b4115);
w4(R+0,u32(0x8500b8ull));
}
B4b411a:L4b411a:{c.instructions+=4;NFSU2_TR(0x4b411a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b411d:{NFSU2_TR(0x4b411d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4b411f:{NFSU2_TR(0x4b411f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4b4121:{NFSU2_TR(0x4b4121);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4128;}}
}
B4b4123:L4b4123:{c.instructions+=1;NFSU2_TR(0x4b4123);
w4(R+4,u32(0x1ull));
}
B4b4128:L4b4128:{c.instructions+=6;NFSU2_TR(0x4b4128);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b412b:{NFSU2_TR(0x4b412b);
__builtin_memmove(gp(0x89e7a4),(R+4),4);
}
B4b4131:{NFSU2_TR(0x4b4131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b4133:{NFSU2_TR(0x4b4133);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4134:{NFSU2_TR(0x4b4134);
__builtin_memmove((R+4),(R+24),4);
}
B4b4136:{NFSU2_TR(0x4b4136);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4139ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b4139:L4b4139:{c.instructions+=3;NFSU2_TR(0x4b4139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b413b:{NFSU2_TR(0x4b413b);
__builtin_memmove((R+4),(R+24),4);
}
B4b413d:{NFSU2_TR(0x4b413d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4140ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b4140:L4b4140:{c.instructions+=3;NFSU2_TR(0x4b4140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b4141:{NFSU2_TR(0x4b4141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4142:{NFSU2_TR(0x4b4142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4150:L4b4150:{c.instructions+=6;NFSU2_TR(0x4b4150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4151:{NFSU2_TR(0x4b4151);
__builtin_memmove((R+24),(R+4),4);
}
B4b4153:{NFSU2_TR(0x4b4153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4156:{NFSU2_TR(0x4b4156);
u8 U[4];
w4(U+0,u32(0xa88ffeb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b415b:{NFSU2_TR(0x4b415b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b415c:{NFSU2_TR(0x4b415c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4161ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b4161:L4b4161:{c.instructions+=4;NFSU2_TR(0x4b4161);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b4166:{NFSU2_TR(0x4b4166);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b4169:{NFSU2_TR(0x4b4169);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b416c:{NFSU2_TR(0x4b416c);
if(r1(R+518)){{goto L4b4181;}}
}
B4b416e:L4b416e:{c.instructions+=2;NFSU2_TR(0x4b416e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4173:{NFSU2_TR(0x4b4173);
if(r1(R+518)){{goto L4b4181;}}
}
B4b4175:L4b4175:{c.instructions+=2;NFSU2_TR(0x4b4175);
w4(R+4,u32(0x83aab4ull));
}
B4b417a:{NFSU2_TR(0x4b417a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b417full));
TAIL_STATIC(0x502910u,502);
}
B4b417f:L4b417f:{c.instructions+=1;NFSU2_TR(0x4b417f);
{goto L4b4186;}
}
B4b4181:L4b4181:{c.instructions+=1;NFSU2_TR(0x4b4181);
w4(R+0,u32(0x8500b8ull));
}
B4b4186:L4b4186:{c.instructions+=3;NFSU2_TR(0x4b4186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4189:{NFSU2_TR(0x4b4189);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b418b:{NFSU2_TR(0x4b418b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b41a0;}}
}
B4b418d:L4b418d:{c.instructions+=4;NFSU2_TR(0x4b418d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4190:{NFSU2_TR(0x4b4190);
u8 U[4];
w4(U+0,u32(0x9e4c4648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4195:{NFSU2_TR(0x4b4195);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4196:{NFSU2_TR(0x4b4196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b419bull));
TAIL_STATIC(0x50c900u,50c);
}
B4b419b:L4b419b:{c.instructions+=3;NFSU2_TR(0x4b419b);
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
B4b419e:{NFSU2_TR(0x4b419e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b419f:{NFSU2_TR(0x4b419f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b41a0:L4b41a0:{c.instructions+=4;NFSU2_TR(0x4b41a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b41a3:{NFSU2_TR(0x4b41a3);
u8 U[4];
w4(U+0,u32(0x22f254afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41a8:{NFSU2_TR(0x4b41a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41a9:{NFSU2_TR(0x4b41a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b41aeull));
TAIL_STATIC(0x50c900u,50c);
}
B4b41ae:L4b41ae:{c.instructions+=3;NFSU2_TR(0x4b41ae);
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
B4b41b1:{NFSU2_TR(0x4b41b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b41b2:{NFSU2_TR(0x4b41b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b41c0:L4b41c0:{c.instructions+=14;NFSU2_TR(0x4b41c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41c2:{NFSU2_TR(0x4b41c2);
u8 U[4];
w4(U+0,u32(0x773084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41c7:{NFSU2_TR(0x4b41c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b41cd:{NFSU2_TR(0x4b41cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41ce:{NFSU2_TR(0x4b41ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b41d5:{NFSU2_TR(0x4b41d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41d6:{NFSU2_TR(0x4b41d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41d7:{NFSU2_TR(0x4b41d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41d8:{NFSU2_TR(0x4b41d8);
__builtin_memmove((R+24),(R+4),4);
}
B4b41da:{NFSU2_TR(0x4b41da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41db:{NFSU2_TR(0x4b41db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b41e5:{NFSU2_TR(0x4b41e5);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b41e7:{NFSU2_TR(0x4b41e7);
s1(0x85009b,u8(0x0ull));
}
B4b41ee:{NFSU2_TR(0x4b41ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b41f3ull));
TAIL_STATIC(0x575620u,575);
}
B4b41f3:L4b41f3:{c.instructions+=6;NFSU2_TR(0x4b41f3);
__builtin_memmove((R+28),(R+0),4);
}
B4b41f5:{NFSU2_TR(0x4b41f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b41f8:{NFSU2_TR(0x4b41f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b41fc:{NFSU2_TR(0x4b41fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b41fe:{NFSU2_TR(0x4b41fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4206:{NFSU2_TR(0x4b4206);
if(r1(R+518)){{goto L4b4235;}}
}
B4b4208:L4b4208:{c.instructions+=11;NFSU2_TR(0x4b4208);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b420a:{NFSU2_TR(0x4b420a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4210:{NFSU2_TR(0x4b4210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4211:{NFSU2_TR(0x4b4211);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4217:{NFSU2_TR(0x4b4217);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4218:{NFSU2_TR(0x4b4218);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b421e:{NFSU2_TR(0x4b421e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b421f:{NFSU2_TR(0x4b421f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4225:{NFSU2_TR(0x4b4225);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4226:{NFSU2_TR(0x4b4226);
__builtin_memmove((R+4),(R+28),4);
}
B4b4228:{NFSU2_TR(0x4b4228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b422dull));
TAIL_STATIC(0x51e230u,51e);
}
B4b422d:L4b422d:{c.instructions+=2;NFSU2_TR(0x4b422d);
u8 U[4];
w4(U+0,u32(0x791220ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b4233:{NFSU2_TR(0x4b4233);
{goto L4b4237;}
}
B4b4235:L4b4235:{c.instructions+=1;NFSU2_TR(0x4b4235);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b4237:L4b4237:{c.instructions+=6;NFSU2_TR(0x4b4237);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4239:{NFSU2_TR(0x4b4239);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B4b423c:{NFSU2_TR(0x4b423c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b423d:{NFSU2_TR(0x4b423d);
__builtin_memmove((R+4),(R+24),4);
}
B4b423f:{NFSU2_TR(0x4b423f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4243:{NFSU2_TR(0x4b4243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4248ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4248:L4b4248:{c.instructions+=3;NFSU2_TR(0x4b4248);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b424d:{NFSU2_TR(0x4b424d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4253:{NFSU2_TR(0x4b4253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4258ull));
TAIL_STATIC(0x575620u,575);
}
B4b4258:L4b4258:{c.instructions+=6;NFSU2_TR(0x4b4258);
__builtin_memmove((R+28),(R+0),4);
}
B4b425a:{NFSU2_TR(0x4b425a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b425d:{NFSU2_TR(0x4b425d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4261:{NFSU2_TR(0x4b4261);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4263:{NFSU2_TR(0x4b4263);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b426b:{NFSU2_TR(0x4b426b);
if(r1(R+518)){{goto L4b42a3;}}
}
B4b426d:L4b426d:{c.instructions+=14;NFSU2_TR(0x4b426d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b426f:{NFSU2_TR(0x4b426f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4271:{NFSU2_TR(0x4b4271);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4276:{NFSU2_TR(0x4b4276);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b427c:{NFSU2_TR(0x4b427c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b427d:{NFSU2_TR(0x4b427d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4283:{NFSU2_TR(0x4b4283);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4284:{NFSU2_TR(0x4b4284);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b428a:{NFSU2_TR(0x4b428a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b428b:{NFSU2_TR(0x4b428b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4291:{NFSU2_TR(0x4b4291);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4292:{NFSU2_TR(0x4b4292);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4294:{NFSU2_TR(0x4b4294);
__builtin_memmove((R+4),(R+28),4);
}
B4b4296:{NFSU2_TR(0x4b4296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b429bull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4b429b:L4b429b:{c.instructions+=2;NFSU2_TR(0x4b429b);
u8 U[4];
w4(U+0,u32(0x791268ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b42a1:{NFSU2_TR(0x4b42a1);
{goto L4b42a5;}
}
B4b42a3:L4b42a3:{c.instructions+=1;NFSU2_TR(0x4b42a3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b42a5:L4b42a5:{c.instructions+=4;NFSU2_TR(0x4b42a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42a6:{NFSU2_TR(0x4b42a6);
__builtin_memmove((R+4),(R+24),4);
}
B4b42a8:{NFSU2_TR(0x4b42a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b42ac:{NFSU2_TR(0x4b42ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b42b1ull));
TAIL_STATIC(0x54f820u,54f);
}
B4b42b1:L4b42b1:{c.instructions+=3;NFSU2_TR(0x4b42b1);
u8 U[4];
w4(U+0,u32(0x254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42b6:{NFSU2_TR(0x4b42b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b42bc:{NFSU2_TR(0x4b42bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b42c1ull));
TAIL_STATIC(0x575620u,575);
}
B4b42c1:L4b42c1:{c.instructions+=6;NFSU2_TR(0x4b42c1);
__builtin_memmove((R+28),(R+0),4);
}
B4b42c3:{NFSU2_TR(0x4b42c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b42c6:{NFSU2_TR(0x4b42c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b42ca:{NFSU2_TR(0x4b42ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b42cc:{NFSU2_TR(0x4b42cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b42d4:{NFSU2_TR(0x4b42d4);
if(r1(R+518)){{goto L4b430c;}}
}
B4b42d6:L4b42d6:{c.instructions+=14;NFSU2_TR(0x4b42d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42d8:{NFSU2_TR(0x4b42d8);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42da:{NFSU2_TR(0x4b42da);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42df:{NFSU2_TR(0x4b42df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b42e5:{NFSU2_TR(0x4b42e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42e6:{NFSU2_TR(0x4b42e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b42ec:{NFSU2_TR(0x4b42ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42ed:{NFSU2_TR(0x4b42ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b42f3:{NFSU2_TR(0x4b42f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42f4:{NFSU2_TR(0x4b42f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b42fa:{NFSU2_TR(0x4b42fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42fb:{NFSU2_TR(0x4b42fb);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b42fd:{NFSU2_TR(0x4b42fd);
__builtin_memmove((R+4),(R+28),4);
}
B4b42ff:{NFSU2_TR(0x4b42ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4304ull));
TAIL_STATIC(0x51e9e0u,51e);
}
B4b4304:L4b4304:{c.instructions+=2;NFSU2_TR(0x4b4304);
u8 U[4];
w4(U+0,u32(0x7912b0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b430a:{NFSU2_TR(0x4b430a);
{goto L4b430e;}
}
B4b430c:L4b430c:{c.instructions+=1;NFSU2_TR(0x4b430c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b430e:L4b430e:{c.instructions+=4;NFSU2_TR(0x4b430e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b430f:{NFSU2_TR(0x4b430f);
__builtin_memmove((R+4),(R+24),4);
}
B4b4311:{NFSU2_TR(0x4b4311);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4315:{NFSU2_TR(0x4b4315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b431aull));
TAIL_STATIC(0x54f820u,54f);
}
B4b431a:L4b431a:{c.instructions+=3;NFSU2_TR(0x4b431a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4320:{NFSU2_TR(0x4b4320);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4327:{NFSU2_TR(0x4b4327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b43df;}}
}
B4b432d:L4b432d:{c.instructions+=2;NFSU2_TR(0x4b432d);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b432f:{NFSU2_TR(0x4b432f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4334ull));
TAIL_STATIC(0x575620u,575);
}
B4b4334:L4b4334:{c.instructions+=6;NFSU2_TR(0x4b4334);
__builtin_memmove((R+28),(R+0),4);
}
B4b4336:{NFSU2_TR(0x4b4336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4339:{NFSU2_TR(0x4b4339);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b433d:{NFSU2_TR(0x4b433d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b433f:{NFSU2_TR(0x4b433f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4347:{NFSU2_TR(0x4b4347);
if(r1(R+518)){{goto L4b4376;}}
}
B4b4349:L4b4349:{c.instructions+=11;NFSU2_TR(0x4b4349);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b434b:{NFSU2_TR(0x4b434b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4351:{NFSU2_TR(0x4b4351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4352:{NFSU2_TR(0x4b4352);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4358:{NFSU2_TR(0x4b4358);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4359:{NFSU2_TR(0x4b4359);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b435f:{NFSU2_TR(0x4b435f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4360:{NFSU2_TR(0x4b4360);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4366:{NFSU2_TR(0x4b4366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4367:{NFSU2_TR(0x4b4367);
__builtin_memmove((R+4),(R+28),4);
}
B4b4369:{NFSU2_TR(0x4b4369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b436eull));
TAIL_STATIC(0x51e230u,51e);
}
B4b436e:L4b436e:{c.instructions+=2;NFSU2_TR(0x4b436e);
u8 U[4];
w4(U+0,u32(0x7912f0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b4374:{NFSU2_TR(0x4b4374);
{goto L4b4378;}
}
B4b4376:L4b4376:{c.instructions+=1;NFSU2_TR(0x4b4376);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b4378:L4b4378:{c.instructions+=5;NFSU2_TR(0x4b4378);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b437a:{NFSU2_TR(0x4b437a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b437b:{NFSU2_TR(0x4b437b);
__builtin_memmove((R+4),(R+24),4);
}
B4b437d:{NFSU2_TR(0x4b437d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4381:{NFSU2_TR(0x4b4381);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4386ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4386:L4b4386:{c.instructions+=2;NFSU2_TR(0x4b4386);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4388:{NFSU2_TR(0x4b4388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b438dull));
TAIL_STATIC(0x575620u,575);
}
B4b438d:L4b438d:{c.instructions+=6;NFSU2_TR(0x4b438d);
__builtin_memmove((R+28),(R+0),4);
}
B4b438f:{NFSU2_TR(0x4b438f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4392:{NFSU2_TR(0x4b4392);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4396:{NFSU2_TR(0x4b4396);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4398:{NFSU2_TR(0x4b4398);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b43a0:{NFSU2_TR(0x4b43a0);
if(r1(R+518)){{goto L4b43cf;}}
}
B4b43a2:L4b43a2:{c.instructions+=11;NFSU2_TR(0x4b43a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43a4:{NFSU2_TR(0x4b43a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b43aa:{NFSU2_TR(0x4b43aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43ab:{NFSU2_TR(0x4b43ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b43b1:{NFSU2_TR(0x4b43b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43b2:{NFSU2_TR(0x4b43b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b43b8:{NFSU2_TR(0x4b43b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43b9:{NFSU2_TR(0x4b43b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b43bf:{NFSU2_TR(0x4b43bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43c0:{NFSU2_TR(0x4b43c0);
__builtin_memmove((R+4),(R+28),4);
}
B4b43c2:{NFSU2_TR(0x4b43c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b43c7ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b43c7:L4b43c7:{c.instructions+=2;NFSU2_TR(0x4b43c7);
u8 U[4];
w4(U+0,u32(0x791338ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b43cd:{NFSU2_TR(0x4b43cd);
{goto L4b43d1;}
}
B4b43cf:L4b43cf:{c.instructions+=1;NFSU2_TR(0x4b43cf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b43d1:L4b43d1:{c.instructions+=5;NFSU2_TR(0x4b43d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43d3:{NFSU2_TR(0x4b43d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43d4:{NFSU2_TR(0x4b43d4);
__builtin_memmove((R+4),(R+24),4);
}
B4b43d6:{NFSU2_TR(0x4b43d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b43da:{NFSU2_TR(0x4b43da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b43dfull));
TAIL_STATIC(0x54f170u,54f);
}
B4b43df:L4b43df:{c.instructions+=3;NFSU2_TR(0x4b43df);
w4(R+8,u32(m2(0x8500b8)));
}
B4b43e6:{NFSU2_TR(0x4b43e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b43e7:{NFSU2_TR(0x4b43e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b43ecull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4b43ec:L4b43ec:{c.instructions+=5;NFSU2_TR(0x4b43ec);
__builtin_memmove((R+4),gp(0x850088),4);
}
B4b43f2:{NFSU2_TR(0x4b43f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b43f5:{NFSU2_TR(0x4b43f5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b43f8:{NFSU2_TR(0x4b43f8);
__builtin_memmove((R+28),(R+0),4);
}
B4b43fa:{NFSU2_TR(0x4b43fa);
if(r1(R+518)){{goto L4b4485;}}
}
B4b4400:L4b4400:{c.instructions+=2;NFSU2_TR(0x4b4400);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4b4407:{NFSU2_TR(0x4b4407);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4485;}}
}
B4b4409:L4b4409:{c.instructions+=6;NFSU2_TR(0x4b4409);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4b4410:{NFSU2_TR(0x4b4410);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4412:{NFSU2_TR(0x4b4412);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4414:{NFSU2_TR(0x4b4414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4415:{NFSU2_TR(0x4b4415);
u8 U[4];
w4(U+0,u32(0x1f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b441a:{NFSU2_TR(0x4b441a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b441full));
TAIL_STATIC(0x5156f0u,515);
}
B4b441f:L4b441f:{c.instructions+=3;NFSU2_TR(0x4b441f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b4422:{NFSU2_TR(0x4b4422);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b4424:{NFSU2_TR(0x4b4424);
if(r1(R+518)){{goto L4b447f;}}
}
B4b4426:L4b4426:{c.instructions+=2;NFSU2_TR(0x4b4426);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4428:{NFSU2_TR(0x4b4428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b442dull));
TAIL_STATIC(0x575620u,575);
}
B4b442d:L4b442d:{c.instructions+=5;NFSU2_TR(0x4b442d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4430:{NFSU2_TR(0x4b4430);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4434:{NFSU2_TR(0x4b4434);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4436:{NFSU2_TR(0x4b4436);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b443e:{NFSU2_TR(0x4b443e);
if(r1(R+518)){{goto L4b4467;}}
}
B4b4440:L4b4440:{c.instructions+=11;NFSU2_TR(0x4b4440);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4442:{NFSU2_TR(0x4b4442);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4448:{NFSU2_TR(0x4b4448);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4449:{NFSU2_TR(0x4b4449);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b444f:{NFSU2_TR(0x4b444f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4450:{NFSU2_TR(0x4b4450);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4456:{NFSU2_TR(0x4b4456);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4457:{NFSU2_TR(0x4b4457);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b445d:{NFSU2_TR(0x4b445d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b445e:{NFSU2_TR(0x4b445e);
__builtin_memmove((R+4),(R+0),4);
}
B4b4460:{NFSU2_TR(0x4b4460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4465ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b40b0u);}goto L4b40b0;}
}
B4b4465:L4b4465:{c.instructions+=1;NFSU2_TR(0x4b4465);
{goto L4b4469;}
}
B4b4467:L4b4467:{c.instructions+=1;NFSU2_TR(0x4b4467);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b4469:L4b4469:{c.instructions+=5;NFSU2_TR(0x4b4469);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b446b:{NFSU2_TR(0x4b446b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b446c:{NFSU2_TR(0x4b446c);
__builtin_memmove((R+4),(R+24),4);
}
B4b446e:{NFSU2_TR(0x4b446e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4472:{NFSU2_TR(0x4b4472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4477ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4477:L4b4477:{c.instructions+=2;NFSU2_TR(0x4b4477);
__builtin_memmove((R+4),gp(0x850088),4);
}
B4b447d:{NFSU2_TR(0x4b447d);
{goto L4b448f;}
}
B4b447f:L4b447f:{c.instructions+=1;NFSU2_TR(0x4b447f);
__builtin_memmove((R+4),gp(0x850088),4);
}
B4b4485:L4b4485:{c.instructions+=1;NFSU2_TR(0x4b4485);
s4(0x8500bc,u32(0x0ull));
}
B4b448f:L4b448f:{c.instructions+=2;NFSU2_TR(0x4b448f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4492:{NFSU2_TR(0x4b4492);
if(r1(R+518)){{goto L4b449d;}}
}
B4b4494:L4b4494:{c.instructions+=2;NFSU2_TR(0x4b4494);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4497:{NFSU2_TR(0x4b4497);
if(r1(R+518)){{goto L4b449d;}}
}
B4b4499:L4b4499:{c.instructions+=2;NFSU2_TR(0x4b4499);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4b449b:{NFSU2_TR(0x4b449b);
{goto L4b449f;}
}
B4b449d:L4b449d:{c.instructions+=1;NFSU2_TR(0x4b449d);
w1(R+8,u8(0x1ull));
}
B4b449f:L4b449f:{c.instructions+=2;NFSU2_TR(0x4b449f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b44a2:{NFSU2_TR(0x4b44a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b44b1;}}
}
B4b44a4:L4b44a4:{c.instructions+=2;NFSU2_TR(0x4b44a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b44ab:{NFSU2_TR(0x4b44ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b44b1;}}
}
B4b44ad:L4b44ad:{c.instructions+=2;NFSU2_TR(0x4b44ad);
w1(R+0,u8(0x1ull));
}
B4b44af:{NFSU2_TR(0x4b44af);
{goto L4b44b3;}
}
B4b44b1:L4b44b1:{c.instructions+=1;NFSU2_TR(0x4b44b1);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4b44b3:L4b44b3:{c.instructions+=2;NFSU2_TR(0x4b44b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b44b5:{NFSU2_TR(0x4b44b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b451f;}}
}
B4b44b7:L4b44b7:{c.instructions+=2;NFSU2_TR(0x4b44b7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b44ba:{NFSU2_TR(0x4b44ba);
if(r1(R+518)){{goto L4b451f;}}
}
B4b44bc:L4b44bc:{c.instructions+=2;NFSU2_TR(0x4b44bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b44be:{NFSU2_TR(0x4b44be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b451f;}}
}
B4b44c0:L4b44c0:{c.instructions+=2;NFSU2_TR(0x4b44c0);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b44c2:{NFSU2_TR(0x4b44c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b44c7ull));
TAIL_STATIC(0x575620u,575);
}
B4b44c7:L4b44c7:{c.instructions+=5;NFSU2_TR(0x4b44c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b44ca:{NFSU2_TR(0x4b44ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b44ce:{NFSU2_TR(0x4b44ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b44d0:{NFSU2_TR(0x4b44d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b44d8:{NFSU2_TR(0x4b44d8);
if(r1(R+518)){{goto L4b4501;}}
}
B4b44da:L4b44da:{c.instructions+=11;NFSU2_TR(0x4b44da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b44dc:{NFSU2_TR(0x4b44dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b44e2:{NFSU2_TR(0x4b44e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b44e3:{NFSU2_TR(0x4b44e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b44e9:{NFSU2_TR(0x4b44e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b44ea:{NFSU2_TR(0x4b44ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b44f0:{NFSU2_TR(0x4b44f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b44f1:{NFSU2_TR(0x4b44f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b44f7:{NFSU2_TR(0x4b44f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b44f8:{NFSU2_TR(0x4b44f8);
__builtin_memmove((R+4),(R+0),4);
}
B4b44fa:{NFSU2_TR(0x4b44fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b44ffull));
TAIL_STATIC(0x4b3e40u,4b3);
}
B4b44ff:L4b44ff:{c.instructions+=1;NFSU2_TR(0x4b44ff);
{goto L4b4503;}
}
B4b4501:L4b4501:{c.instructions+=1;NFSU2_TR(0x4b4501);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b4503:L4b4503:{c.instructions+=5;NFSU2_TR(0x4b4503);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4505:{NFSU2_TR(0x4b4505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4506:{NFSU2_TR(0x4b4506);
__builtin_memmove((R+4),(R+24),4);
}
B4b4508:{NFSU2_TR(0x4b4508);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b450c:{NFSU2_TR(0x4b450c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4511ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4511:L4b4511:{c.instructions+=3;NFSU2_TR(0x4b4511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4517:{NFSU2_TR(0x4b4517);
__builtin_memmove((R+4),gp(0x850088),4);
}
B4b451d:{NFSU2_TR(0x4b451d);
{goto L4b4528;}
}
B4b451f:L4b451f:{c.instructions+=1;NFSU2_TR(0x4b451f);
s2(0x8500ba,u16(0x1ull));
}
B4b4528:L4b4528:{c.instructions+=2;NFSU2_TR(0x4b4528);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4532:{NFSU2_TR(0x4b4532);
if(r1(R+518)){{goto L4b45a2;}}
}
B4b4534:L4b4534:{c.instructions+=2;NFSU2_TR(0x4b4534);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4537:{NFSU2_TR(0x4b4537);
if(r1(R+518)){{goto L4b45a2;}}
}
B4b4539:L4b4539:{c.instructions+=2;NFSU2_TR(0x4b4539);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b453b:{NFSU2_TR(0x4b453b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4540ull));
TAIL_STATIC(0x575620u,575);
}
B4b4540:L4b4540:{c.instructions+=6;NFSU2_TR(0x4b4540);
__builtin_memmove((R+28),(R+0),4);
}
B4b4542:{NFSU2_TR(0x4b4542);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4545:{NFSU2_TR(0x4b4545);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4549:{NFSU2_TR(0x4b4549);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b454b:{NFSU2_TR(0x4b454b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4553:{NFSU2_TR(0x4b4553);
if(r1(R+518)){{goto L4b4590;}}
}
B4b4555:L4b4555:{c.instructions+=11;NFSU2_TR(0x4b4555);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4557:{NFSU2_TR(0x4b4557);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b455d:{NFSU2_TR(0x4b455d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b455e:{NFSU2_TR(0x4b455e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4564:{NFSU2_TR(0x4b4564);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4565:{NFSU2_TR(0x4b4565);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b456b:{NFSU2_TR(0x4b456b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b456c:{NFSU2_TR(0x4b456c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4572:{NFSU2_TR(0x4b4572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4573:{NFSU2_TR(0x4b4573);
__builtin_memmove((R+4),(R+28),4);
}
B4b4575:{NFSU2_TR(0x4b4575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b457aull));
TAIL_STATIC(0x51e230u,51e);
}
B4b457a:L4b457a:{c.instructions+=6;NFSU2_TR(0x4b457a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b457c:{NFSU2_TR(0x4b457c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b457d:{NFSU2_TR(0x4b457d);
__builtin_memmove((R+4),(R+24),4);
}
B4b457f:{NFSU2_TR(0x4b457f);
u8 U[4];
w4(U+0,u32(0x791070ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b4585:{NFSU2_TR(0x4b4585);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4589:{NFSU2_TR(0x4b4589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b458eull));
TAIL_STATIC(0x54f170u,54f);
}
B4b458e:L4b458e:{c.instructions+=1;NFSU2_TR(0x4b458e);
{goto L4b45a9;}
}
B4b4590:L4b4590:{c.instructions+=6;NFSU2_TR(0x4b4590);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b4592:{NFSU2_TR(0x4b4592);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4594:{NFSU2_TR(0x4b4594);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4595:{NFSU2_TR(0x4b4595);
__builtin_memmove((R+4),(R+24),4);
}
B4b4597:{NFSU2_TR(0x4b4597);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b459b:{NFSU2_TR(0x4b459b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b45a0ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b45a0:L4b45a0:{c.instructions+=1;NFSU2_TR(0x4b45a0);
{goto L4b45a9;}
}
B4b45a2:L4b45a2:{c.instructions+=1;NFSU2_TR(0x4b45a2);
s1(0x850098,u8(0x0ull));
}
B4b45a9:L4b45a9:{c.instructions+=2;NFSU2_TR(0x4b45a9);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45ab:{NFSU2_TR(0x4b45ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b45b0ull));
TAIL_STATIC(0x575620u,575);
}
B4b45b0:L4b45b0:{c.instructions+=5;NFSU2_TR(0x4b45b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b45b3:{NFSU2_TR(0x4b45b3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b45b7:{NFSU2_TR(0x4b45b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b45b9:{NFSU2_TR(0x4b45b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b45c1:{NFSU2_TR(0x4b45c1);
if(r1(R+518)){{goto L4b45ea;}}
}
B4b45c3:L4b45c3:{c.instructions+=11;NFSU2_TR(0x4b45c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45c5:{NFSU2_TR(0x4b45c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b45cb:{NFSU2_TR(0x4b45cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45cc:{NFSU2_TR(0x4b45cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b45d2:{NFSU2_TR(0x4b45d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45d3:{NFSU2_TR(0x4b45d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b45d9:{NFSU2_TR(0x4b45d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45da:{NFSU2_TR(0x4b45da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b45e0:{NFSU2_TR(0x4b45e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45e1:{NFSU2_TR(0x4b45e1);
__builtin_memmove((R+4),(R+0),4);
}
B4b45e3:{NFSU2_TR(0x4b45e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b45e8ull));
TAIL_STATIC(0x4b3110u,4b3);
}
B4b45e8:L4b45e8:{c.instructions+=1;NFSU2_TR(0x4b45e8);
{goto L4b45ec;}
}
B4b45ea:L4b45ea:{c.instructions+=1;NFSU2_TR(0x4b45ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b45ec:L4b45ec:{c.instructions+=5;NFSU2_TR(0x4b45ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45ee:{NFSU2_TR(0x4b45ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45ef:{NFSU2_TR(0x4b45ef);
__builtin_memmove((R+4),(R+24),4);
}
B4b45f1:{NFSU2_TR(0x4b45f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b45f5:{NFSU2_TR(0x4b45f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b45faull));
TAIL_STATIC(0x54f170u,54f);
}
B4b45fa:L4b45fa:{c.instructions+=2;NFSU2_TR(0x4b45fa);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b45fc:{NFSU2_TR(0x4b45fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4601ull));
TAIL_STATIC(0x575620u,575);
}
B4b4601:L4b4601:{c.instructions+=6;NFSU2_TR(0x4b4601);
__builtin_memmove((R+28),(R+0),4);
}
B4b4603:{NFSU2_TR(0x4b4603);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4606:{NFSU2_TR(0x4b4606);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b460a:{NFSU2_TR(0x4b460a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b460c:{NFSU2_TR(0x4b460c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4614:{NFSU2_TR(0x4b4614);
if(r1(R+518)){{goto L4b4643;}}
}
B4b4616:L4b4616:{c.instructions+=11;NFSU2_TR(0x4b4616);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4618:{NFSU2_TR(0x4b4618);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b461e:{NFSU2_TR(0x4b461e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b461f:{NFSU2_TR(0x4b461f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4625:{NFSU2_TR(0x4b4625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4626:{NFSU2_TR(0x4b4626);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b462c:{NFSU2_TR(0x4b462c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b462d:{NFSU2_TR(0x4b462d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4633:{NFSU2_TR(0x4b4633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4634:{NFSU2_TR(0x4b4634);
__builtin_memmove((R+4),(R+28),4);
}
B4b4636:{NFSU2_TR(0x4b4636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b463bull));
TAIL_STATIC(0x51e230u,51e);
}
B4b463b:L4b463b:{c.instructions+=2;NFSU2_TR(0x4b463b);
u8 U[4];
w4(U+0,u32(0x791100ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b4641:{NFSU2_TR(0x4b4641);
{goto L4b4645;}
}
B4b4643:L4b4643:{c.instructions+=1;NFSU2_TR(0x4b4643);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b4645:L4b4645:{c.instructions+=5;NFSU2_TR(0x4b4645);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4647:{NFSU2_TR(0x4b4647);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4648:{NFSU2_TR(0x4b4648);
__builtin_memmove((R+4),(R+24),4);
}
B4b464a:{NFSU2_TR(0x4b464a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b464e:{NFSU2_TR(0x4b464e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4653ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4653:L4b4653:{c.instructions+=2;NFSU2_TR(0x4b4653);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4655:{NFSU2_TR(0x4b4655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b465aull));
TAIL_STATIC(0x575620u,575);
}
B4b465a:L4b465a:{c.instructions+=6;NFSU2_TR(0x4b465a);
__builtin_memmove((R+28),(R+0),4);
}
B4b465c:{NFSU2_TR(0x4b465c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b465f:{NFSU2_TR(0x4b465f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4663:{NFSU2_TR(0x4b4663);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4665:{NFSU2_TR(0x4b4665);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b466d:{NFSU2_TR(0x4b466d);
if(r1(R+518)){{goto L4b469c;}}
}
B4b466f:L4b466f:{c.instructions+=11;NFSU2_TR(0x4b466f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4671:{NFSU2_TR(0x4b4671);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4677:{NFSU2_TR(0x4b4677);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4678:{NFSU2_TR(0x4b4678);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b467e:{NFSU2_TR(0x4b467e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b467f:{NFSU2_TR(0x4b467f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4685:{NFSU2_TR(0x4b4685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4686:{NFSU2_TR(0x4b4686);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b468c:{NFSU2_TR(0x4b468c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b468d:{NFSU2_TR(0x4b468d);
__builtin_memmove((R+4),(R+28),4);
}
B4b468f:{NFSU2_TR(0x4b468f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4694ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b4694:L4b4694:{c.instructions+=2;NFSU2_TR(0x4b4694);
u8 U[4];
w4(U+0,u32(0x791148ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b469a:{NFSU2_TR(0x4b469a);
{goto L4b469e;}
}
B4b469c:L4b469c:{c.instructions+=1;NFSU2_TR(0x4b469c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b469e:L4b469e:{c.instructions+=5;NFSU2_TR(0x4b469e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46a0:{NFSU2_TR(0x4b46a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46a1:{NFSU2_TR(0x4b46a1);
__builtin_memmove((R+4),(R+24),4);
}
B4b46a3:{NFSU2_TR(0x4b46a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b46a7:{NFSU2_TR(0x4b46a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b46acull));
TAIL_STATIC(0x54f170u,54f);
}
B4b46ac:L4b46ac:{c.instructions+=3;NFSU2_TR(0x4b46ac);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4b46b1:{NFSU2_TR(0x4b46b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b46b4:{NFSU2_TR(0x4b46b4);
if(r1(R+518)){{goto L4b4724;}}
}
B4b46b6:L4b46b6:{c.instructions+=2;NFSU2_TR(0x4b46b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b46b9:{NFSU2_TR(0x4b46b9);
if(r1(R+518)){{goto L4b4724;}}
}
B4b46bb:L4b46bb:{c.instructions+=2;NFSU2_TR(0x4b46bb);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46bd:{NFSU2_TR(0x4b46bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b46c2ull));
TAIL_STATIC(0x575620u,575);
}
B4b46c2:L4b46c2:{c.instructions+=6;NFSU2_TR(0x4b46c2);
__builtin_memmove((R+28),(R+0),4);
}
B4b46c4:{NFSU2_TR(0x4b46c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b46c7:{NFSU2_TR(0x4b46c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b46cb:{NFSU2_TR(0x4b46cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b46cd:{NFSU2_TR(0x4b46cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b46d5:{NFSU2_TR(0x4b46d5);
if(r1(R+518)){{goto L4b4712;}}
}
B4b46d7:L4b46d7:{c.instructions+=11;NFSU2_TR(0x4b46d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46d9:{NFSU2_TR(0x4b46d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b46df:{NFSU2_TR(0x4b46df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46e0:{NFSU2_TR(0x4b46e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b46e6:{NFSU2_TR(0x4b46e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46e7:{NFSU2_TR(0x4b46e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b46ed:{NFSU2_TR(0x4b46ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46ee:{NFSU2_TR(0x4b46ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b46f4:{NFSU2_TR(0x4b46f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46f5:{NFSU2_TR(0x4b46f5);
__builtin_memmove((R+4),(R+28),4);
}
B4b46f7:{NFSU2_TR(0x4b46f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b46fcull));
TAIL_STATIC(0x51e230u,51e);
}
B4b46fc:L4b46fc:{c.instructions+=6;NFSU2_TR(0x4b46fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46fe:{NFSU2_TR(0x4b46fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b46ff:{NFSU2_TR(0x4b46ff);
__builtin_memmove((R+4),(R+24),4);
}
B4b4701:{NFSU2_TR(0x4b4701);
u8 U[4];
w4(U+0,u32(0x791190ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b4707:{NFSU2_TR(0x4b4707);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b470b:{NFSU2_TR(0x4b470b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4710ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4710:L4b4710:{c.instructions+=1;NFSU2_TR(0x4b4710);
{goto L4b472b;}
}
B4b4712:L4b4712:{c.instructions+=6;NFSU2_TR(0x4b4712);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b4714:{NFSU2_TR(0x4b4714);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4716:{NFSU2_TR(0x4b4716);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4717:{NFSU2_TR(0x4b4717);
__builtin_memmove((R+4),(R+24),4);
}
B4b4719:{NFSU2_TR(0x4b4719);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b471d:{NFSU2_TR(0x4b471d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4722ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4722:L4b4722:{c.instructions+=1;NFSU2_TR(0x4b4722);
{goto L4b472b;}
}
B4b4724:L4b4724:{c.instructions+=1;NFSU2_TR(0x4b4724);
s1(0x850099,u8(0x0ull));
}
B4b472b:L4b472b:{c.instructions+=2;NFSU2_TR(0x4b472b);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4735:{NFSU2_TR(0x4b4735);
if(r1(R+518)){{goto L4b4790;}}
}
B4b4737:L4b4737:{c.instructions+=2;NFSU2_TR(0x4b4737);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4739:{NFSU2_TR(0x4b4739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b473eull));
TAIL_STATIC(0x575620u,575);
}
B4b473e:L4b473e:{c.instructions+=6;NFSU2_TR(0x4b473e);
__builtin_memmove((R+28),(R+0),4);
}
B4b4740:{NFSU2_TR(0x4b4740);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4743:{NFSU2_TR(0x4b4743);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4747:{NFSU2_TR(0x4b4747);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4749:{NFSU2_TR(0x4b4749);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4751:{NFSU2_TR(0x4b4751);
if(r1(R+518)){{goto L4b4780;}}
}
B4b4753:L4b4753:{c.instructions+=11;NFSU2_TR(0x4b4753);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4755:{NFSU2_TR(0x4b4755);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b475b:{NFSU2_TR(0x4b475b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b475c:{NFSU2_TR(0x4b475c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4762:{NFSU2_TR(0x4b4762);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4763:{NFSU2_TR(0x4b4763);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4769:{NFSU2_TR(0x4b4769);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b476a:{NFSU2_TR(0x4b476a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4770:{NFSU2_TR(0x4b4770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4771:{NFSU2_TR(0x4b4771);
__builtin_memmove((R+4),(R+28),4);
}
B4b4773:{NFSU2_TR(0x4b4773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4778ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b4778:L4b4778:{c.instructions+=2;NFSU2_TR(0x4b4778);
u8 U[4];
w4(U+0,u32(0x7911d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b477e:{NFSU2_TR(0x4b477e);
{goto L4b4782;}
}
B4b4780:L4b4780:{c.instructions+=1;NFSU2_TR(0x4b4780);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b4782:L4b4782:{c.instructions+=5;NFSU2_TR(0x4b4782);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4784:{NFSU2_TR(0x4b4784);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4785:{NFSU2_TR(0x4b4785);
__builtin_memmove((R+4),(R+24),4);
}
B4b4787:{NFSU2_TR(0x4b4787);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b478b:{NFSU2_TR(0x4b478b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4790ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4790:L4b4790:{c.instructions+=7;NFSU2_TR(0x4b4790);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4794:{NFSU2_TR(0x4b4794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b4795:{NFSU2_TR(0x4b4795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4796:{NFSU2_TR(0x4b4796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b4797:{NFSU2_TR(0x4b4797);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b479e:{NFSU2_TR(0x4b479e);
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
B4b47a1:{NFSU2_TR(0x4b47a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b47b0:L4b47b0:{c.instructions+=11;NFSU2_TR(0x4b47b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b47b2:{NFSU2_TR(0x4b47b2);
u8 U[4];
w4(U+0,u32(0x774434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b47b7:{NFSU2_TR(0x4b47b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b47bd:{NFSU2_TR(0x4b47bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b47be:{NFSU2_TR(0x4b47be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b47c5:{NFSU2_TR(0x4b47c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b47c6:{NFSU2_TR(0x4b47c6);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b47cb:{NFSU2_TR(0x4b47cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b47ce:{NFSU2_TR(0x4b47ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b47cf:{NFSU2_TR(0x4b47cf);
__builtin_memmove((R+24),(R+4),4);
}
B4b47d1:{NFSU2_TR(0x4b47d1);
if(r1(R+518)){{goto L4b49f0;}}
}
B4b47d7:L4b47d7:{c.instructions+=2;NFSU2_TR(0x4b47d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b47dc:{NFSU2_TR(0x4b47dc);
if(r1(R+518)){{goto L4b49f0;}}
}
B4b47e2:L4b47e2:{c.instructions+=2;NFSU2_TR(0x4b47e2);
w4(R+4,u32(0x83aab4ull));
}
B4b47e7:{NFSU2_TR(0x4b47e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b47ecull));
TAIL_STATIC(0x502910u,502);
}
B4b47ec:L4b47ec:{c.instructions+=3;NFSU2_TR(0x4b47ec);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B4b47ef:{NFSU2_TR(0x4b47ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b47f0:{NFSU2_TR(0x4b47f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b47f5ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4b47f5:L4b47f5:{c.instructions+=4;NFSU2_TR(0x4b47f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b47fb:{NFSU2_TR(0x4b47fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b47fe:{NFSU2_TR(0x4b47fe);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4b4801:{NFSU2_TR(0x4b4801);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4872;}}
}
B4b4803:L4b4803:{c.instructions+=6;NFSU2_TR(0x4b4803);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4b480a:{NFSU2_TR(0x4b480a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b480c:{NFSU2_TR(0x4b480c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b480e:{NFSU2_TR(0x4b480e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b480f:{NFSU2_TR(0x4b480f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4811:{NFSU2_TR(0x4b4811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4816ull));
TAIL_STATIC(0x5156f0u,515);
}
B4b4816:L4b4816:{c.instructions+=3;NFSU2_TR(0x4b4816);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b4819:{NFSU2_TR(0x4b4819);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b481b:{NFSU2_TR(0x4b481b);
if(r1(R+518)){{goto L4b4872;}}
}
B4b481d:L4b481d:{c.instructions+=2;NFSU2_TR(0x4b481d);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b481f:{NFSU2_TR(0x4b481f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4824ull));
TAIL_STATIC(0x575620u,575);
}
B4b4824:L4b4824:{c.instructions+=5;NFSU2_TR(0x4b4824);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4827:{NFSU2_TR(0x4b4827);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b482b:{NFSU2_TR(0x4b482b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b482d:{NFSU2_TR(0x4b482d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4835:{NFSU2_TR(0x4b4835);
if(r1(R+518)){{goto L4b485e;}}
}
B4b4837:L4b4837:{c.instructions+=11;NFSU2_TR(0x4b4837);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4839:{NFSU2_TR(0x4b4839);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b483f:{NFSU2_TR(0x4b483f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4840:{NFSU2_TR(0x4b4840);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4846:{NFSU2_TR(0x4b4846);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4847:{NFSU2_TR(0x4b4847);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b484d:{NFSU2_TR(0x4b484d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b484e:{NFSU2_TR(0x4b484e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4854:{NFSU2_TR(0x4b4854);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4855:{NFSU2_TR(0x4b4855);
__builtin_memmove((R+4),(R+0),4);
}
B4b4857:{NFSU2_TR(0x4b4857);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b485cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b40b0u);}goto L4b40b0;}
}
B4b485c:L4b485c:{c.instructions+=1;NFSU2_TR(0x4b485c);
{goto L4b4860;}
}
B4b485e:L4b485e:{c.instructions+=1;NFSU2_TR(0x4b485e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b4860:L4b4860:{c.instructions+=5;NFSU2_TR(0x4b4860);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4862:{NFSU2_TR(0x4b4862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4863:{NFSU2_TR(0x4b4863);
__builtin_memmove((R+4),(R+24),4);
}
B4b4865:{NFSU2_TR(0x4b4865);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b486d:{NFSU2_TR(0x4b486d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4872ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4872:L4b4872:{c.instructions+=3;NFSU2_TR(0x4b4872);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4873:{NFSU2_TR(0x4b4873);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4875:{NFSU2_TR(0x4b4875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b487aull));
TAIL_STATIC(0x575620u,575);
}
B4b487a:L4b487a:{c.instructions+=6;NFSU2_TR(0x4b487a);
__builtin_memmove((R+28),(R+0),4);
}
B4b487c:{NFSU2_TR(0x4b487c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b487f:{NFSU2_TR(0x4b487f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4883:{NFSU2_TR(0x4b4883);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4885:{NFSU2_TR(0x4b4885);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b488d:{NFSU2_TR(0x4b488d);
if(r1(R+518)){{goto L4b48bc;}}
}
B4b488f:L4b488f:{c.instructions+=11;NFSU2_TR(0x4b488f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4891:{NFSU2_TR(0x4b4891);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4897:{NFSU2_TR(0x4b4897);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4898:{NFSU2_TR(0x4b4898);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b489e:{NFSU2_TR(0x4b489e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b489f:{NFSU2_TR(0x4b489f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b48a5:{NFSU2_TR(0x4b48a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b48a6:{NFSU2_TR(0x4b48a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b48ac:{NFSU2_TR(0x4b48ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b48ad:{NFSU2_TR(0x4b48ad);
__builtin_memmove((R+4),(R+28),4);
}
B4b48af:{NFSU2_TR(0x4b48af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b48b4ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b48b4:L4b48b4:{c.instructions+=2;NFSU2_TR(0x4b48b4);
u8 U[4];
w4(U+0,u32(0x791530ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b48ba:{NFSU2_TR(0x4b48ba);
{goto L4b48be;}
}
B4b48bc:L4b48bc:{c.instructions+=1;NFSU2_TR(0x4b48bc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b48be:L4b48be:{c.instructions+=5;NFSU2_TR(0x4b48be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b48c0:{NFSU2_TR(0x4b48c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b48c1:{NFSU2_TR(0x4b48c1);
__builtin_memmove((R+4),(R+24),4);
}
B4b48c3:{NFSU2_TR(0x4b48c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b48cb:{NFSU2_TR(0x4b48cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b48d0ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b48d0:L4b48d0:{c.instructions+=2;NFSU2_TR(0x4b48d0);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b48d7:{NFSU2_TR(0x4b48d7);
if(r1(R+518)){{goto L4b4982;}}
}
B4b48dd:L4b48dd:{c.instructions+=2;NFSU2_TR(0x4b48dd);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b48df:{NFSU2_TR(0x4b48df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b48e4ull));
TAIL_STATIC(0x575620u,575);
}
B4b48e4:L4b48e4:{c.instructions+=5;NFSU2_TR(0x4b48e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b48e7:{NFSU2_TR(0x4b48e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b48eb:{NFSU2_TR(0x4b48eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b48ed:{NFSU2_TR(0x4b48ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b48f5:{NFSU2_TR(0x4b48f5);
if(r1(R+518)){{goto L4b491e;}}
}
B4b48f7:L4b48f7:{c.instructions+=11;NFSU2_TR(0x4b48f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b48f9:{NFSU2_TR(0x4b48f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b48ff:{NFSU2_TR(0x4b48ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4900:{NFSU2_TR(0x4b4900);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4906:{NFSU2_TR(0x4b4906);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4907:{NFSU2_TR(0x4b4907);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b490d:{NFSU2_TR(0x4b490d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b490e:{NFSU2_TR(0x4b490e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4914:{NFSU2_TR(0x4b4914);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4915:{NFSU2_TR(0x4b4915);
__builtin_memmove((R+4),(R+0),4);
}
B4b4917:{NFSU2_TR(0x4b4917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b491cull));
TAIL_STATIC(0x4b3750u,4b3);
}
B4b491c:L4b491c:{c.instructions+=1;NFSU2_TR(0x4b491c);
{goto L4b4920;}
}
B4b491e:L4b491e:{c.instructions+=1;NFSU2_TR(0x4b491e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b4920:L4b4920:{c.instructions+=6;NFSU2_TR(0x4b4920);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4922:{NFSU2_TR(0x4b4922);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B4b4925:{NFSU2_TR(0x4b4925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4926:{NFSU2_TR(0x4b4926);
__builtin_memmove((R+4),(R+24),4);
}
B4b4928:{NFSU2_TR(0x4b4928);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b492c:{NFSU2_TR(0x4b492c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4931ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4931:L4b4931:{c.instructions+=2;NFSU2_TR(0x4b4931);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4933:{NFSU2_TR(0x4b4933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4938ull));
TAIL_STATIC(0x575620u,575);
}
B4b4938:L4b4938:{c.instructions+=5;NFSU2_TR(0x4b4938);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b493b:{NFSU2_TR(0x4b493b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b493f:{NFSU2_TR(0x4b493f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4941:{NFSU2_TR(0x4b4941);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4949:{NFSU2_TR(0x4b4949);
if(r1(R+518)){{goto L4b4972;}}
}
B4b494b:L4b494b:{c.instructions+=11;NFSU2_TR(0x4b494b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b494d:{NFSU2_TR(0x4b494d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4953:{NFSU2_TR(0x4b4953);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4954:{NFSU2_TR(0x4b4954);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b495a:{NFSU2_TR(0x4b495a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b495b:{NFSU2_TR(0x4b495b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4961:{NFSU2_TR(0x4b4961);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4962:{NFSU2_TR(0x4b4962);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4968:{NFSU2_TR(0x4b4968);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4969:{NFSU2_TR(0x4b4969);
__builtin_memmove((R+4),(R+0),4);
}
B4b496b:{NFSU2_TR(0x4b496b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4970ull));
TAIL_STATIC(0x4b3930u,4b3);
}
B4b4970:L4b4970:{c.instructions+=1;NFSU2_TR(0x4b4970);
{goto L4b4974;}
}
B4b4972:L4b4972:{c.instructions+=1;NFSU2_TR(0x4b4972);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b4974:L4b4974:{c.instructions+=5;NFSU2_TR(0x4b4974);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4976:{NFSU2_TR(0x4b4976);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4977:{NFSU2_TR(0x4b4977);
__builtin_memmove((R+4),(R+24),4);
}
B4b4979:{NFSU2_TR(0x4b4979);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b497d:{NFSU2_TR(0x4b497d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4982ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4982:L4b4982:{c.instructions+=2;NFSU2_TR(0x4b4982);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4984:{NFSU2_TR(0x4b4984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4989ull));
TAIL_STATIC(0x575620u,575);
}
B4b4989:L4b4989:{c.instructions+=6;NFSU2_TR(0x4b4989);
__builtin_memmove((R+28),(R+0),4);
}
B4b498b:{NFSU2_TR(0x4b498b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b498e:{NFSU2_TR(0x4b498e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4992:{NFSU2_TR(0x4b4992);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4994:{NFSU2_TR(0x4b4994);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b499c:{NFSU2_TR(0x4b499c);
if(r1(R+518)){{goto L4b49cb;}}
}
B4b499e:L4b499e:{c.instructions+=11;NFSU2_TR(0x4b499e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b49a0:{NFSU2_TR(0x4b49a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b49a6:{NFSU2_TR(0x4b49a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b49a7:{NFSU2_TR(0x4b49a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b49ad:{NFSU2_TR(0x4b49ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b49ae:{NFSU2_TR(0x4b49ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b49b4:{NFSU2_TR(0x4b49b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b49b5:{NFSU2_TR(0x4b49b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b49bb:{NFSU2_TR(0x4b49bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b49bc:{NFSU2_TR(0x4b49bc);
__builtin_memmove((R+4),(R+28),4);
}
B4b49be:{NFSU2_TR(0x4b49be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b49c3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b49c3:L4b49c3:{c.instructions+=2;NFSU2_TR(0x4b49c3);
u8 U[4];
w4(U+0,u32(0x791410ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b49c9:{NFSU2_TR(0x4b49c9);
{goto L4b49cd;}
}
B4b49cb:L4b49cb:{c.instructions+=1;NFSU2_TR(0x4b49cb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b49cd:L4b49cd:{c.instructions+=5;NFSU2_TR(0x4b49cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b49cf:{NFSU2_TR(0x4b49cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b49d0:{NFSU2_TR(0x4b49d0);
__builtin_memmove((R+4),(R+24),4);
}
B4b49d2:{NFSU2_TR(0x4b49d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b49da:{NFSU2_TR(0x4b49da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b49dfull));
TAIL_STATIC(0x54f170u,54f);
}
B4b49df:L4b49df:{c.instructions+=6;NFSU2_TR(0x4b49df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b49e0:{NFSU2_TR(0x4b49e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b49e1:{NFSU2_TR(0x4b49e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b49e5:{NFSU2_TR(0x4b49e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b49ec:{NFSU2_TR(0x4b49ec);
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
B4b49ef:{NFSU2_TR(0x4b49ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b49f0:L4b49f0:{c.instructions+=2;NFSU2_TR(0x4b49f0);
__builtin_memmove((R+4),(R+24),4);
}
B4b49f2:{NFSU2_TR(0x4b49f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b49f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b41c0u);}goto L4b41c0;}
}
B4b49f7:L4b49f7:{c.instructions+=5;NFSU2_TR(0x4b49f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b49fb:{NFSU2_TR(0x4b49fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b49fc:{NFSU2_TR(0x4b49fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4a03:{NFSU2_TR(0x4b4a03);
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
B4b4a06:{NFSU2_TR(0x4b4a06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4a10:L4b4a10:{c.instructions+=11;NFSU2_TR(0x4b4a10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a12:{NFSU2_TR(0x4b4a12);
u8 U[4];
w4(U+0,u32(0x7730b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a17:{NFSU2_TR(0x4b4a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4a1d:{NFSU2_TR(0x4b4a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a1e:{NFSU2_TR(0x4b4a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4a25:{NFSU2_TR(0x4b4a25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a26:{NFSU2_TR(0x4b4a26);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b4a2b:{NFSU2_TR(0x4b4a2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4a2e:{NFSU2_TR(0x4b4a2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a2f:{NFSU2_TR(0x4b4a2f);
__builtin_memmove((R+24),(R+4),4);
}
B4b4a31:{NFSU2_TR(0x4b4a31);
if(r1(R+518)){{goto L4b4b41;}}
}
B4b4a37:L4b4a37:{c.instructions+=2;NFSU2_TR(0x4b4a37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4a3c:{NFSU2_TR(0x4b4a3c);
if(r1(R+518)){{goto L4b4b41;}}
}
B4b4a42:L4b4a42:{c.instructions+=2;NFSU2_TR(0x4b4a42);
w4(R+4,u32(0x83aab4ull));
}
B4b4a47:{NFSU2_TR(0x4b4a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4a4cull));
TAIL_STATIC(0x502910u,502);
}
B4b4a4c:L4b4a4c:{c.instructions+=3;NFSU2_TR(0x4b4a4c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B4b4a4f:{NFSU2_TR(0x4b4a4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a50:{NFSU2_TR(0x4b4a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4a55ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4b4a55:L4b4a55:{c.instructions+=4;NFSU2_TR(0x4b4a55);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b4a5b:{NFSU2_TR(0x4b4a5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4a5e:{NFSU2_TR(0x4b4a5e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4b4a61:{NFSU2_TR(0x4b4a61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4ad2;}}
}
B4b4a63:L4b4a63:{c.instructions+=6;NFSU2_TR(0x4b4a63);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4b4a6a:{NFSU2_TR(0x4b4a6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a6c:{NFSU2_TR(0x4b4a6c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a6e:{NFSU2_TR(0x4b4a6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a6f:{NFSU2_TR(0x4b4a6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a71:{NFSU2_TR(0x4b4a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4a76ull));
TAIL_STATIC(0x5156f0u,515);
}
B4b4a76:L4b4a76:{c.instructions+=3;NFSU2_TR(0x4b4a76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b4a79:{NFSU2_TR(0x4b4a79);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b4a7b:{NFSU2_TR(0x4b4a7b);
if(r1(R+518)){{goto L4b4ad2;}}
}
B4b4a7d:L4b4a7d:{c.instructions+=2;NFSU2_TR(0x4b4a7d);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a7f:{NFSU2_TR(0x4b4a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4a84ull));
TAIL_STATIC(0x575620u,575);
}
B4b4a84:L4b4a84:{c.instructions+=5;NFSU2_TR(0x4b4a84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4a87:{NFSU2_TR(0x4b4a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4a8b:{NFSU2_TR(0x4b4a8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4a8d:{NFSU2_TR(0x4b4a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4a95:{NFSU2_TR(0x4b4a95);
if(r1(R+518)){{goto L4b4abe;}}
}
B4b4a97:L4b4a97:{c.instructions+=11;NFSU2_TR(0x4b4a97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4a99:{NFSU2_TR(0x4b4a99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4a9f:{NFSU2_TR(0x4b4a9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4aa0:{NFSU2_TR(0x4b4aa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4aa6:{NFSU2_TR(0x4b4aa6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4aa7:{NFSU2_TR(0x4b4aa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4aad:{NFSU2_TR(0x4b4aad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4aae:{NFSU2_TR(0x4b4aae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4ab4:{NFSU2_TR(0x4b4ab4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ab5:{NFSU2_TR(0x4b4ab5);
__builtin_memmove((R+4),(R+0),4);
}
B4b4ab7:{NFSU2_TR(0x4b4ab7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4abcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b40b0u);}goto L4b40b0;}
}
B4b4abc:L4b4abc:{c.instructions+=1;NFSU2_TR(0x4b4abc);
{goto L4b4ac0;}
}
B4b4abe:L4b4abe:{c.instructions+=1;NFSU2_TR(0x4b4abe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b4ac0:L4b4ac0:{c.instructions+=5;NFSU2_TR(0x4b4ac0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ac2:{NFSU2_TR(0x4b4ac2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ac3:{NFSU2_TR(0x4b4ac3);
__builtin_memmove((R+4),(R+24),4);
}
B4b4ac5:{NFSU2_TR(0x4b4ac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4acd:{NFSU2_TR(0x4b4acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4ad2ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4ad2:L4b4ad2:{c.instructions+=3;NFSU2_TR(0x4b4ad2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ad3:{NFSU2_TR(0x4b4ad3);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ad5:{NFSU2_TR(0x4b4ad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4adaull));
TAIL_STATIC(0x575620u,575);
}
B4b4ada:L4b4ada:{c.instructions+=6;NFSU2_TR(0x4b4ada);
__builtin_memmove((R+28),(R+0),4);
}
B4b4adc:{NFSU2_TR(0x4b4adc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4adf:{NFSU2_TR(0x4b4adf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4ae3:{NFSU2_TR(0x4b4ae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4ae5:{NFSU2_TR(0x4b4ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4aed:{NFSU2_TR(0x4b4aed);
if(r1(R+518)){{goto L4b4b1c;}}
}
B4b4aef:L4b4aef:{c.instructions+=11;NFSU2_TR(0x4b4aef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4af1:{NFSU2_TR(0x4b4af1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4af7:{NFSU2_TR(0x4b4af7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4af8:{NFSU2_TR(0x4b4af8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4afe:{NFSU2_TR(0x4b4afe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4aff:{NFSU2_TR(0x4b4aff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4b05:{NFSU2_TR(0x4b4b05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4b06:{NFSU2_TR(0x4b4b06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4b0c:{NFSU2_TR(0x4b4b0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4b0d:{NFSU2_TR(0x4b4b0d);
__builtin_memmove((R+4),(R+28),4);
}
B4b4b0f:{NFSU2_TR(0x4b4b0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4b14ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b4b14:L4b4b14:{c.instructions+=2;NFSU2_TR(0x4b4b14);
u8 U[4];
w4(U+0,u32(0x791458ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b4b1a:{NFSU2_TR(0x4b4b1a);
{goto L4b4b1e;}
}
B4b4b1c:L4b4b1c:{c.instructions+=1;NFSU2_TR(0x4b4b1c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b4b1e:L4b4b1e:{c.instructions+=5;NFSU2_TR(0x4b4b1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4b20:{NFSU2_TR(0x4b4b20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4b21:{NFSU2_TR(0x4b4b21);
__builtin_memmove((R+4),(R+24),4);
}
B4b4b23:{NFSU2_TR(0x4b4b23);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4b2b:{NFSU2_TR(0x4b4b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4b30ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b4b30:L4b4b30:{c.instructions+=6;NFSU2_TR(0x4b4b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b4b31:{NFSU2_TR(0x4b4b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4b32:{NFSU2_TR(0x4b4b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4b36:{NFSU2_TR(0x4b4b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4b3d:{NFSU2_TR(0x4b4b3d);
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
B4b4b40:{NFSU2_TR(0x4b4b40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4b41:L4b4b41:{c.instructions+=2;NFSU2_TR(0x4b4b41);
__builtin_memmove((R+4),(R+24),4);
}
B4b4b43:{NFSU2_TR(0x4b4b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4b48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b41c0u);}goto L4b41c0;}
}
B4b4b48:L4b4b48:{c.instructions+=5;NFSU2_TR(0x4b4b48);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4b4c:{NFSU2_TR(0x4b4b4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4b4d:{NFSU2_TR(0x4b4b4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4b54:{NFSU2_TR(0x4b4b54);
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
B4b4b57:{NFSU2_TR(0x4b4b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4b60:L4b4b60:{c.instructions+=3;NFSU2_TR(0x4b4b60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4b61:{NFSU2_TR(0x4b4b61);
__builtin_memmove((R+24),(R+4),4);
}
B4b4b63:{NFSU2_TR(0x4b4b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4b68ull));
TAIL_STATIC(0x4985a0u,498);
}
B4b4b68:L4b4b68:{c.instructions+=2;NFSU2_TR(0x4b4b68);
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
B4b4b6d:{NFSU2_TR(0x4b4b6d);
if(r1(R+518)){{goto L4b4b78;}}
}
B4b4b6f:L4b4b6f:{c.instructions+=2;NFSU2_TR(0x4b4b6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4b70:{NFSU2_TR(0x4b4b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4b75ull));
TAIL_STATIC(0x575630u,575);
}
B4b4b75:L4b4b75:{c.instructions+=1;NFSU2_TR(0x4b4b75);
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
B4b4b78:L4b4b78:{c.instructions+=3;NFSU2_TR(0x4b4b78);
__builtin_memmove((R+0),(R+24),4);
}
B4b4b7a:{NFSU2_TR(0x4b4b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4b7b:{NFSU2_TR(0x4b4b7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4b80:L4b4b80:{c.instructions+=6;NFSU2_TR(0x4b4b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4b81:{NFSU2_TR(0x4b4b81);
__builtin_memmove((R+24),(R+4),4);
}
B4b4b83:{NFSU2_TR(0x4b4b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4b86:{NFSU2_TR(0x4b4b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4b89:{NFSU2_TR(0x4b4b89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4b8b:{NFSU2_TR(0x4b4b8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4b92;}}
}
B4b4b8d:L4b4b8d:{c.instructions+=2;NFSU2_TR(0x4b4b8d);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b4b90:{NFSU2_TR(0x4b4b90);
{goto L4b4b98;}
}
B4b4b92:L4b4b92:{c.instructions+=1;NFSU2_TR(0x4b4b92);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b4b98:L4b4b98:{c.instructions+=4;NFSU2_TR(0x4b4b98);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4b4b9e:{NFSU2_TR(0x4b4b9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4b4ba0:{NFSU2_TR(0x4b4ba0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4b4ba3:{NFSU2_TR(0x4b4ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4b4bf3;}}
}
B4b4ba5:L4b4ba5:{c.instructions+=3;NFSU2_TR(0x4b4ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4ba8:{NFSU2_TR(0x4b4ba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4baa:{NFSU2_TR(0x4b4baa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4bb1;}}
}
B4b4bac:L4b4bac:{c.instructions+=2;NFSU2_TR(0x4b4bac);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b4baf:{NFSU2_TR(0x4b4baf);
{goto L4b4bb7;}
}
B4b4bb1:L4b4bb1:{c.instructions+=1;NFSU2_TR(0x4b4bb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b4bb7:L4b4bb7:{c.instructions+=2;NFSU2_TR(0x4b4bb7);
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
B4b4bb9:{NFSU2_TR(0x4b4bb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4be4;}}
}
B4b4bbb:L4b4bbb:{c.instructions+=4;NFSU2_TR(0x4b4bbb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4b4bbf:{NFSU2_TR(0x4b4bbf);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b4bc5:{NFSU2_TR(0x4b4bc5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b4bcb:{NFSU2_TR(0x4b4bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4bd0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4b4bd0:L4b4bd0:{c.instructions+=5;NFSU2_TR(0x4b4bd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4bd2:{NFSU2_TR(0x4b4bd2);
__builtin_memmove((R+4),(R+24),4);
}
B4b4bd4:{NFSU2_TR(0x4b4bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4bd7:{NFSU2_TR(0x4b4bd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4bdb:{NFSU2_TR(0x4b4bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4be0ull));
TAIL_STATIC(0x498630u,498);
}
B4b4be0:L4b4be0:{c.instructions+=2;NFSU2_TR(0x4b4be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4be1:{NFSU2_TR(0x4b4be1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4be4:L4b4be4:{c.instructions+=4;NFSU2_TR(0x4b4be4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4be8:{NFSU2_TR(0x4b4be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4bef:{NFSU2_TR(0x4b4bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4bf0:{NFSU2_TR(0x4b4bf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4bf3:L4b4bf3:{c.instructions+=4;NFSU2_TR(0x4b4bf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4bf5:{NFSU2_TR(0x4b4bf5);
__builtin_memmove((R+4),(R+24),4);
}
B4b4bf7:{NFSU2_TR(0x4b4bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4bfe:{NFSU2_TR(0x4b4bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4c03ull));
TAIL_STATIC(0x498630u,498);
}
B4b4c03:L4b4c03:{c.instructions+=2;NFSU2_TR(0x4b4c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4c04:{NFSU2_TR(0x4b4c04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4c10:L4b4c10:{c.instructions+=5;NFSU2_TR(0x4b4c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4c11:{NFSU2_TR(0x4b4c11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4c12:{NFSU2_TR(0x4b4c12);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4c14:{NFSU2_TR(0x4b4c14);
__builtin_memmove((R+28),(R+4),4);
}
B4b4c16:{NFSU2_TR(0x4b4c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4c1bull));
TAIL_STATIC(0x575620u,575);
}
B4b4c1b:L4b4c1b:{c.instructions+=4;NFSU2_TR(0x4b4c1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b4c1f:{NFSU2_TR(0x4b4c1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b4c22:{NFSU2_TR(0x4b4c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4c24:{NFSU2_TR(0x4b4c24);
if(r1(R+518)){{goto L4b4c3f;}}
}
B4b4c26:L4b4c26:{c.instructions+=6;NFSU2_TR(0x4b4c26);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4c2a:{NFSU2_TR(0x4b4c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4c2d:{NFSU2_TR(0x4b4c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4c34:{NFSU2_TR(0x4b4c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4c3b:{NFSU2_TR(0x4b4c3b);
__builtin_memmove((R+24),(R+0),4);
}
B4b4c3d:{NFSU2_TR(0x4b4c3d);
{goto L4b4c41;}
}
B4b4c3f:L4b4c3f:{c.instructions+=1;NFSU2_TR(0x4b4c3f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b4c41:L4b4c41:{c.instructions+=9;NFSU2_TR(0x4b4c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4c44:{NFSU2_TR(0x4b4c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4c47:{NFSU2_TR(0x4b4c47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4b4c49:{NFSU2_TR(0x4b4c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4c4c:{NFSU2_TR(0x4b4c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4c4f:{NFSU2_TR(0x4b4c4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4b4c51:{NFSU2_TR(0x4b4c51);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b4c56:{NFSU2_TR(0x4b4c56);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4c59:{NFSU2_TR(0x4b4c59);
if(r1(R+518)){{goto L4b4c67;}}
}
B4b4c5b:L4b4c5b:{c.instructions+=3;NFSU2_TR(0x4b4c5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b4c60:{NFSU2_TR(0x4b4c60);
w4(R+0,u32(0x1ull));
}
B4b4c65:{NFSU2_TR(0x4b4c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4c6c;}}
}
B4b4c67:L4b4c67:{c.instructions+=1;NFSU2_TR(0x4b4c67);
w4(R+0,u32(0x1f8ull));
}
B4b4c6c:L4b4c6c:{c.instructions+=6;NFSU2_TR(0x4b4c6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4b4c73:{NFSU2_TR(0x4b4c73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4c75:{NFSU2_TR(0x4b4c75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4c77:{NFSU2_TR(0x4b4c77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4c78:{NFSU2_TR(0x4b4c78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4c79:{NFSU2_TR(0x4b4c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4c7eull));
TAIL_STATIC(0x5156f0u,515);
}
B4b4c7e:L4b4c7e:{c.instructions+=9;NFSU2_TR(0x4b4c7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b4c81:{NFSU2_TR(0x4b4c81);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b4c83:{NFSU2_TR(0x4b4c83);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4b4c85:{NFSU2_TR(0x4b4c85);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4b4c87:{NFSU2_TR(0x4b4c87);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b4c8a:{NFSU2_TR(0x4b4c8a);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
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
B4b4c90:{NFSU2_TR(0x4b4c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b4c91:{NFSU2_TR(0x4b4c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4c92:{NFSU2_TR(0x4b4c92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4ca0:L4b4ca0:{c.instructions+=3;NFSU2_TR(0x4b4ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ca1:{NFSU2_TR(0x4b4ca1);
__builtin_memmove((R+24),(R+4),4);
}
B4b4ca3:{NFSU2_TR(0x4b4ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4ca8ull));
TAIL_STATIC(0x4989a0u,498);
}
B4b4ca8:L4b4ca8:{c.instructions+=2;NFSU2_TR(0x4b4ca8);
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
B4b4cad:{NFSU2_TR(0x4b4cad);
if(r1(R+518)){{goto L4b4cb8;}}
}
B4b4caf:L4b4caf:{c.instructions+=2;NFSU2_TR(0x4b4caf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cb0:{NFSU2_TR(0x4b4cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4cb5ull));
TAIL_STATIC(0x575630u,575);
}
B4b4cb5:L4b4cb5:{c.instructions+=1;NFSU2_TR(0x4b4cb5);
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
B4b4cb8:L4b4cb8:{c.instructions+=3;NFSU2_TR(0x4b4cb8);
__builtin_memmove((R+0),(R+24),4);
}
B4b4cba:{NFSU2_TR(0x4b4cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b4cbb:{NFSU2_TR(0x4b4cbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b4cc0:L4b4cc0:{c.instructions+=13;NFSU2_TR(0x4b4cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4b4cc3:{NFSU2_TR(0x4b4cc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cc4:{NFSU2_TR(0x4b4cc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cc5:{NFSU2_TR(0x4b4cc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cc6:{NFSU2_TR(0x4b4cc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cc7:{NFSU2_TR(0x4b4cc7);
u8 U[4];
w4(U+0,u32(0x850264ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ccc:{NFSU2_TR(0x4b4ccc);
__builtin_memmove((R+24),(R+4),4);
}
B4b4cce:{NFSU2_TR(0x4b4cce);
w4(R+20,u32(0x1ull));
}
B4b4cd3:{NFSU2_TR(0x4b4cd3);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cd8:{NFSU2_TR(0x4b4cd8);
__builtin_memmove(gp(0x836348),(R+20),4);
}
B4b4cde:{NFSU2_TR(0x4b4cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b4ce1:{NFSU2_TR(0x4b4ce1);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ce6:{NFSU2_TR(0x4b4ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4cebull));
TAIL_STATIC(0x505450u,505);
}
B4b4ceb:L4b4ceb:{c.instructions+=3;NFSU2_TR(0x4b4ceb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cec:{NFSU2_TR(0x4b4cec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ced:{NFSU2_TR(0x4b4ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4cf2ull));
TAIL_STATIC(0x537a10u,537);
}
B4b4cf2:L4b4cf2:{c.instructions+=3;NFSU2_TR(0x4b4cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b4cf5:{NFSU2_TR(0x4b4cf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4cf6:{NFSU2_TR(0x4b4cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4cfbull));
TAIL_STATIC(0x537be0u,537);
}
B4b4cfb:L4b4cfb:{c.instructions+=5;NFSU2_TR(0x4b4cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
w4(U+4,u32(0x850164ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d05:{NFSU2_TR(0x4b4d05);
__builtin_memmove((R+0),gp(0x85015c),4);
}
B4b4d0a:{NFSU2_TR(0x4b4d0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b4d0d:{NFSU2_TR(0x4b4d0d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4b4d12:{NFSU2_TR(0x4b4d12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4b4d19;}}
}
B4b4d14:L4b4d14:{c.instructions+=1;NFSU2_TR(0x4b4d14);
w4(R+0,u32(0xffull));
}
B4b4d19:L4b4d19:{c.instructions+=10;NFSU2_TR(0x4b4d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d1c:{NFSU2_TR(0x4b4d1c);
__builtin_memmove((R+0),gp(0x850150),4);
}
B4b4d21:{NFSU2_TR(0x4b4d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d27:{NFSU2_TR(0x4b4d27);
__builtin_memmove((R+4),gp(0x850154),4);
}
B4b4d2d:{NFSU2_TR(0x4b4d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d33:{NFSU2_TR(0x4b4d33);
__builtin_memmove((R+8),gp(0x850160),4);
}
B4b4d39:{NFSU2_TR(0x4b4d39);
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
B4b4d3b:{NFSU2_TR(0x4b4d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d41:{NFSU2_TR(0x4b4d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d44:{NFSU2_TR(0x4b4d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4d49ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4b4d49:L4b4d49:{c.instructions+=3;NFSU2_TR(0x4b4d49);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4b4d4a:{NFSU2_TR(0x4b4d4a);
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
B4b4d4d:{NFSU2_TR(0x4b4d4d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b4d91;}}
}
B4b4d4f:L4b4d4f:{c.instructions+=1;NFSU2_TR(0x4b4d4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4b50e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b4d56:L4b4d56:{c.instructions+=2;NFSU2_TR(0x4b4d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d59:{NFSU2_TR(0x4b4d59);
{goto L4b4d94;}
}
B4b4d5b:L4b4d5b:{c.instructions+=2;NFSU2_TR(0x4b4d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d62:{NFSU2_TR(0x4b4d62);
{goto L4b4d94;}
}
B4b4d64:L4b4d64:{c.instructions+=2;NFSU2_TR(0x4b4d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d6b:{NFSU2_TR(0x4b4d6b);
{goto L4b4d94;}
}
B4b4d6d:L4b4d6d:{c.instructions+=2;NFSU2_TR(0x4b4d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d74:{NFSU2_TR(0x4b4d74);
{goto L4b4d94;}
}
B4b4d76:L4b4d76:{c.instructions+=2;NFSU2_TR(0x4b4d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d7d:{NFSU2_TR(0x4b4d7d);
{goto L4b4d94;}
}
B4b4d7f:L4b4d7f:{c.instructions+=2;NFSU2_TR(0x4b4d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d86:{NFSU2_TR(0x4b4d86);
{goto L4b4d94;}
}
B4b4d88:L4b4d88:{c.instructions+=2;NFSU2_TR(0x4b4d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d8f:{NFSU2_TR(0x4b4d8f);
{goto L4b4d94;}
}
B4b4d91:L4b4d91:{c.instructions+=1;NFSU2_TR(0x4b4d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4d94:L4b4d94:{c.instructions+=7;NFSU2_TR(0x4b4d94);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b4d9b:{NFSU2_TR(0x4b4d9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4d9f:{NFSU2_TR(0x4b4d9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4da3:{NFSU2_TR(0x4b4da3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4da7:{NFSU2_TR(0x4b4da7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4dab:{NFSU2_TR(0x4b4dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4dae:{NFSU2_TR(0x4b4dae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4db4;}}
}
B4b4db0:L4b4db0:{c.instructions+=1;NFSU2_TR(0x4b4db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b4db4:L4b4db4:{c.instructions+=4;NFSU2_TR(0x4b4db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4db7:{NFSU2_TR(0x4b4db7);
u8 U[4];
w4(U+0,u32(0x5dfa6642ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4dbc:{NFSU2_TR(0x4b4dbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4dbd:{NFSU2_TR(0x4b4dbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4dc2ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4dc2:L4b4dc2:{c.instructions+=5;NFSU2_TR(0x4b4dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4dc5:{NFSU2_TR(0x4b4dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4dc8:{NFSU2_TR(0x4b4dc8);
u8 U[4];
w4(U+0,u32(0xa036136aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4dcd:{NFSU2_TR(0x4b4dcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4dce:{NFSU2_TR(0x4b4dce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4dd3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4dd3:L4b4dd3:{c.instructions+=5;NFSU2_TR(0x4b4dd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4b4dd6:{NFSU2_TR(0x4b4dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4dd9:{NFSU2_TR(0x4b4dd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b4ddf:{NFSU2_TR(0x4b4ddf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4de7:{NFSU2_TR(0x4b4de7);
{goto L4b4df0;}
}
B4b4df0:L4b4df0:{c.instructions+=6;NFSU2_TR(0x4b4df0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4df1:{NFSU2_TR(0x4b4df1);
u8 U[4];
w4(U+0,u32(0x791808ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4df6:{NFSU2_TR(0x4b4df6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4dfa:{NFSU2_TR(0x4b4dfa);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4dfc:{NFSU2_TR(0x4b4dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4dfd:{NFSU2_TR(0x4b4dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e02ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b4e02:L4b4e02:{c.instructions+=4;NFSU2_TR(0x4b4e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b4e05:{NFSU2_TR(0x4b4e05);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4e09:{NFSU2_TR(0x4b4e09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e0a:{NFSU2_TR(0x4b4e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e0full));
TAIL_STATIC(0x505450u,505);
}
B4b4e0f:L4b4e0f:{c.instructions+=3;NFSU2_TR(0x4b4e0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e10:{NFSU2_TR(0x4b4e10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e11:{NFSU2_TR(0x4b4e11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e16ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4e16:L4b4e16:{c.instructions+=7;NFSU2_TR(0x4b4e16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e17:{NFSU2_TR(0x4b4e17);
u8 U[4];
w4(U+0,u32(0x7917f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e1c:{NFSU2_TR(0x4b4e1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4e20:{NFSU2_TR(0x4b4e20);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e22:{NFSU2_TR(0x4b4e22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e23:{NFSU2_TR(0x4b4e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4e29:{NFSU2_TR(0x4b4e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e2eull));
TAIL_STATIC(0x50c960u,50c);
}
B4b4e2e:L4b4e2e:{c.instructions+=4;NFSU2_TR(0x4b4e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b4e31:{NFSU2_TR(0x4b4e31);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4e35:{NFSU2_TR(0x4b4e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e36:{NFSU2_TR(0x4b4e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e3bull));
TAIL_STATIC(0x505450u,505);
}
B4b4e3b:L4b4e3b:{c.instructions+=3;NFSU2_TR(0x4b4e3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e3c:{NFSU2_TR(0x4b4e3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e3d:{NFSU2_TR(0x4b4e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e42ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4e42:L4b4e42:{c.instructions+=8;NFSU2_TR(0x4b4e42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4b4e44:{NFSU2_TR(0x4b4e44);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4e48:{NFSU2_TR(0x4b4e48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B4b4e4b:{NFSU2_TR(0x4b4e4b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4b4e4e:{NFSU2_TR(0x4b4e4e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4b4e4f:{NFSU2_TR(0x4b4e4f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b4e50:{NFSU2_TR(0x4b4e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4e54:{NFSU2_TR(0x4b4e54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b4df0u);}goto L4b4df0;}}
}
B4b4e56:L4b4e56:{c.instructions+=4;NFSU2_TR(0x4b4e56);
w4(R+20,u32(0x1ull));
}
B4b4e5b:{NFSU2_TR(0x4b4e5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b4e61:{NFSU2_TR(0x4b4e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x22ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4e69:{NFSU2_TR(0x4b4e69);
__builtin_memmove((R+16),(R+16),4);
}
B4b4e70:L4b4e70:{c.instructions+=6;NFSU2_TR(0x4b4e70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e71:{NFSU2_TR(0x4b4e71);
u8 U[4];
w4(U+0,u32(0x7917e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e76:{NFSU2_TR(0x4b4e76);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4e7a:{NFSU2_TR(0x4b4e7a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e7c:{NFSU2_TR(0x4b4e7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e7d:{NFSU2_TR(0x4b4e7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e82ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b4e82:L4b4e82:{c.instructions+=4;NFSU2_TR(0x4b4e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b4e85:{NFSU2_TR(0x4b4e85);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4e89:{NFSU2_TR(0x4b4e89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e8a:{NFSU2_TR(0x4b4e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e8full));
TAIL_STATIC(0x505450u,505);
}
B4b4e8f:L4b4e8f:{c.instructions+=3;NFSU2_TR(0x4b4e8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e90:{NFSU2_TR(0x4b4e90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e91:{NFSU2_TR(0x4b4e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4e96ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4e96:L4b4e96:{c.instructions+=7;NFSU2_TR(0x4b4e96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e97:{NFSU2_TR(0x4b4e97);
u8 U[4];
w4(U+0,u32(0x7917c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4e9c:{NFSU2_TR(0x4b4e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4ea2:{NFSU2_TR(0x4b4ea2);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4ea6:{NFSU2_TR(0x4b4ea6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ea8:{NFSU2_TR(0x4b4ea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ea9:{NFSU2_TR(0x4b4ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4eaeull));
TAIL_STATIC(0x50c960u,50c);
}
B4b4eae:L4b4eae:{c.instructions+=4;NFSU2_TR(0x4b4eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b4eb1:{NFSU2_TR(0x4b4eb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4eb5:{NFSU2_TR(0x4b4eb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4eb6:{NFSU2_TR(0x4b4eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4ebbull));
TAIL_STATIC(0x505450u,505);
}
B4b4ebb:L4b4ebb:{c.instructions+=3;NFSU2_TR(0x4b4ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ebc:{NFSU2_TR(0x4b4ebc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ebd:{NFSU2_TR(0x4b4ebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4ec2ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4ec2:L4b4ec2:{c.instructions+=8;NFSU2_TR(0x4b4ec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4b4ec4:{NFSU2_TR(0x4b4ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4ec8:{NFSU2_TR(0x4b4ec8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B4b4ecb:{NFSU2_TR(0x4b4ecb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4b4ece:{NFSU2_TR(0x4b4ece);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4b4ecf:{NFSU2_TR(0x4b4ecf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b4ed0:{NFSU2_TR(0x4b4ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4ed4:{NFSU2_TR(0x4b4ed4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b4e70u);}goto L4b4e70;}}
}
B4b4ed6:L4b4ed6:{c.instructions+=4;NFSU2_TR(0x4b4ed6);
w4(R+20,u32(0x1ull));
}
B4b4edb:{NFSU2_TR(0x4b4edb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b4ee1:{NFSU2_TR(0x4b4ee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b4ee9:{NFSU2_TR(0x4b4ee9);
__builtin_memmove((R+16),(R+16),4);
}
B4b4ef0:L4b4ef0:{c.instructions+=6;NFSU2_TR(0x4b4ef0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ef1:{NFSU2_TR(0x4b4ef1);
u8 U[4];
w4(U+0,u32(0x7917b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ef6:{NFSU2_TR(0x4b4ef6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4efa:{NFSU2_TR(0x4b4efa);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4efc:{NFSU2_TR(0x4b4efc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4efd:{NFSU2_TR(0x4b4efd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f02ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b4f02:L4b4f02:{c.instructions+=4;NFSU2_TR(0x4b4f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b4f05:{NFSU2_TR(0x4b4f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b4f09:{NFSU2_TR(0x4b4f09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f0a:{NFSU2_TR(0x4b4f0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f0full));
TAIL_STATIC(0x505450u,505);
}
B4b4f0f:L4b4f0f:{c.instructions+=3;NFSU2_TR(0x4b4f0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f10:{NFSU2_TR(0x4b4f10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f11:{NFSU2_TR(0x4b4f11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f16ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4f16:L4b4f16:{c.instructions+=7;NFSU2_TR(0x4b4f16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f17:{NFSU2_TR(0x4b4f17);
u8 U[4];
w4(U+0,u32(0x7917a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f1c:{NFSU2_TR(0x4b4f1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b4f20:{NFSU2_TR(0x4b4f20);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f22:{NFSU2_TR(0x4b4f22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f23:{NFSU2_TR(0x4b4f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4f26:{NFSU2_TR(0x4b4f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f2bull));
TAIL_STATIC(0x50c960u,50c);
}
B4b4f2b:L4b4f2b:{c.instructions+=4;NFSU2_TR(0x4b4f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b4f2e:{NFSU2_TR(0x4b4f2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b4f32:{NFSU2_TR(0x4b4f32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f33:{NFSU2_TR(0x4b4f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f38ull));
TAIL_STATIC(0x505450u,505);
}
B4b4f38:L4b4f38:{c.instructions+=3;NFSU2_TR(0x4b4f38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f39:{NFSU2_TR(0x4b4f39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f3a:{NFSU2_TR(0x4b4f3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f3full));
TAIL_STATIC(0x5379c0u,537);
}
B4b4f3f:L4b4f3f:{c.instructions+=8;NFSU2_TR(0x4b4f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4b4f41:{NFSU2_TR(0x4b4f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4f45:{NFSU2_TR(0x4b4f45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B4b4f48:{NFSU2_TR(0x4b4f48);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4b4f4b:{NFSU2_TR(0x4b4f4b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4b4f4c:{NFSU2_TR(0x4b4f4c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b4f4d:{NFSU2_TR(0x4b4f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b4f51:{NFSU2_TR(0x4b4f51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b4ef0u);}goto L4b4ef0;}}
}
B4b4f53:L4b4f53:{c.instructions+=4;NFSU2_TR(0x4b4f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4f59:{NFSU2_TR(0x4b4f59);
u8 U[4];
w4(U+0,u32(0xe00af3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f5e:{NFSU2_TR(0x4b4f5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f5f:{NFSU2_TR(0x4b4f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f64ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b4f64:L4b4f64:{c.instructions+=4;NFSU2_TR(0x4b4f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4f6a:{NFSU2_TR(0x4b4f6a);
u8 U[4];
w4(U+0,u32(0xe0204f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f6f:{NFSU2_TR(0x4b4f6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f70:{NFSU2_TR(0x4b4f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f75ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b4f75:L4b4f75:{c.instructions+=4;NFSU2_TR(0x4b4f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b4f7b:{NFSU2_TR(0x4b4f7b);
u8 U[4];
w4(U+0,u32(0xe013d55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f80:{NFSU2_TR(0x4b4f80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f81:{NFSU2_TR(0x4b4f81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f86ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b4f86:L4b4f86:{c.instructions+=4;NFSU2_TR(0x4b4f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4f8c:{NFSU2_TR(0x4b4f8c);
u8 U[4];
w4(U+0,u32(0xcf4e278cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f91:{NFSU2_TR(0x4b4f91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4f92:{NFSU2_TR(0x4b4f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4f97ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b4f97:L4b4f97:{c.instructions+=4;NFSU2_TR(0x4b4f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b4f9d:{NFSU2_TR(0x4b4f9d);
u8 U[4];
w4(U+0,u32(0xcf52681aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fa2:{NFSU2_TR(0x4b4fa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fa3:{NFSU2_TR(0x4b4fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4fa8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b4fa8:L4b4fa8:{c.instructions+=4;NFSU2_TR(0x4b4fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4fae:{NFSU2_TR(0x4b4fae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4b4fb1:{NFSU2_TR(0x4b4fb1);
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
B4b4fb3:{NFSU2_TR(0x4b4fb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b4fe0;}}
}
B4b4fb5:L4b4fb5:{c.instructions+=1;NFSU2_TR(0x4b4fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4fbaull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4b4fba:L4b4fba:{c.instructions+=2;NFSU2_TR(0x4b4fba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b4fbd:{NFSU2_TR(0x4b4fbd);
if(r1(R+518)){{goto L4b4fe0;}}
}
B4b4fbf:L4b4fbf:{c.instructions+=5;NFSU2_TR(0x4b4fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4fc2:{NFSU2_TR(0x4b4fc2);
u8 U[4];
w4(U+0,u32(0xfa4c00a9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fc7:{NFSU2_TR(0x4b4fc7);
u8 U[4];
w4(U+0,u32(0xbf8ec481ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fcc:{NFSU2_TR(0x4b4fcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fcd:{NFSU2_TR(0x4b4fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4fd2ull));
TAIL_STATIC(0x537a10u,537);
}
B4b4fd2:L4b4fd2:{c.instructions+=3;NFSU2_TR(0x4b4fd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b4fd5:{NFSU2_TR(0x4b4fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fd6:{NFSU2_TR(0x4b4fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4fdbull));
TAIL_STATIC(0x50c900u,50c);
}
B4b4fdb:L4b4fdb:{c.instructions+=2;NFSU2_TR(0x4b4fdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b4fde:{NFSU2_TR(0x4b4fde);
TAIL_STATIC(0x4b501fu,4b5);
}
B4b4fe0:L4b4fe0:{c.instructions+=4;NFSU2_TR(0x4b4fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4fe3:{NFSU2_TR(0x4b4fe3);
u8 U[4];
w4(U+0,u32(0x4c913f7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fe8:{NFSU2_TR(0x4b4fe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fe9:{NFSU2_TR(0x4b4fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4feeull));
TAIL_STATIC(0x5379c0u,537);
}
B4b4fee:L4b4fee:{c.instructions+=2;NFSU2_TR(0x4b4fee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4fef:{NFSU2_TR(0x4b4fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b4ff4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b4ff4:L4b4ff4:{c.instructions+=4;NFSU2_TR(0x4b4ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b4ff7:{NFSU2_TR(0x4b4ff7);
u8 U[4];
w4(U+0,u32(0xbf8ec481ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ffc:{NFSU2_TR(0x4b4ffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b4ffd:{NFSU2_TR(0x4b4ffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5002ull));
TAIL_STATIC(0x5379c0u,537);
}
XIT:NFSU2_TR_EXIT(0x4b4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
