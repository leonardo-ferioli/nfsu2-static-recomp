#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6f3(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 page_6f4(Cpu& c){return body_6f4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f4005:goto L6f4005;
case 0x6f4007:c.instructions+=9;goto B6f4007;
case 0x6f4008:c.instructions+=8;goto B6f4008;
case 0x6f400a:c.instructions+=7;goto B6f400a;
case 0x6f400c:c.instructions+=6;goto B6f400c;
case 0x6f400d:c.instructions+=5;goto B6f400d;
case 0x6f4013:c.instructions+=4;goto B6f4013;
case 0x6f4015:c.instructions+=3;goto B6f4015;
case 0x6f4016:c.instructions+=2;goto B6f4016;
case 0x6f4017:c.instructions+=1;goto B6f4017;
case 0x6f401a:goto L6f401a;
case 0x6f401c:c.instructions+=1;goto B6f401c;
case 0x6f401e:goto L6f401e;
case 0x6f4020:goto L6f4020;
case 0x6f4023:c.instructions+=3;goto B6f4023;
case 0x6f4026:c.instructions+=2;goto B6f4026;
case 0x6f402c:c.instructions+=1;goto B6f402c;
case 0x6f402e:goto L6f402e;
case 0x6f402f:c.instructions+=4;goto B6f402f;
case 0x6f4030:c.instructions+=3;goto B6f4030;
case 0x6f4031:c.instructions+=2;goto B6f4031;
case 0x6f4032:c.instructions+=1;goto B6f4032;
case 0x6f4040:goto L6f4040;
case 0x6f4046:c.instructions+=6;goto B6f4046;
case 0x6f4047:c.instructions+=5;goto B6f4047;
case 0x6f4049:c.instructions+=4;goto B6f4049;
case 0x6f404c:c.instructions+=3;goto B6f404c;
case 0x6f404d:c.instructions+=2;goto B6f404d;
case 0x6f4052:c.instructions+=1;goto B6f4052;
case 0x6f4054:goto L6f4054;
case 0x6f405b:c.instructions+=1;goto B6f405b;
case 0x6f405d:goto L6f405d;
case 0x6f405f:c.instructions+=1;goto B6f405f;
case 0x6f4061:goto L6f4061;
case 0x6f4063:goto L6f4063;
case 0x6f4069:c.instructions+=11;goto B6f4069;
case 0x6f406c:c.instructions+=10;goto B6f406c;
case 0x6f406e:c.instructions+=9;goto B6f406e;
case 0x6f4071:c.instructions+=8;goto B6f4071;
case 0x6f4073:c.instructions+=7;goto B6f4073;
case 0x6f4079:c.instructions+=6;goto B6f4079;
case 0x6f407a:c.instructions+=5;goto B6f407a;
case 0x6f407c:c.instructions+=4;goto B6f407c;
case 0x6f4082:c.instructions+=3;goto B6f4082;
case 0x6f4088:c.instructions+=2;goto B6f4088;
case 0x6f408e:c.instructions+=1;goto B6f408e;
case 0x6f4090:goto L6f4090;
case 0x6f4092:c.instructions+=3;goto B6f4092;
case 0x6f4098:c.instructions+=2;goto B6f4098;
case 0x6f409e:c.instructions+=1;goto B6f409e;
case 0x6f40a0:goto L6f40a0;
case 0x6f40a6:c.instructions+=1;goto B6f40a6;
case 0x6f40ac:goto L6f40ac;
case 0x6f40b2:c.instructions+=2;goto B6f40b2;
case 0x6f40b3:c.instructions+=1;goto B6f40b3;
case 0x6f40b9:goto L6f40b9;
case 0x6f40bf:c.instructions+=1;goto B6f40bf;
case 0x6f40c5:goto L6f40c5;
case 0x6f40cb:c.instructions+=1;goto B6f40cb;
case 0x6f40cd:goto L6f40cd;
case 0x6f40d3:goto L6f40d3;
case 0x6f40d9:c.instructions+=1;goto B6f40d9;
case 0x6f40db:goto L6f40db;
case 0x6f40e1:goto L6f40e1;
case 0x6f40e7:c.instructions+=1;goto B6f40e7;
case 0x6f40e9:goto L6f40e9;
case 0x6f40ef:goto L6f40ef;
case 0x6f40f5:c.instructions+=1;goto B6f40f5;
case 0x6f40fb:goto L6f40fb;
case 0x6f4101:c.instructions+=1;goto B6f4101;
case 0x6f4107:goto L6f4107;
case 0x6f410c:goto L6f410c;
case 0x6f4112:c.instructions+=1;goto B6f4112;
case 0x6f4118:goto L6f4118;
case 0x6f411d:goto L6f411d;
case 0x6f411f:c.instructions+=2;goto B6f411f;
case 0x6f4125:c.instructions+=1;goto B6f4125;
case 0x6f412b:goto L6f412b;
case 0x6f412e:c.instructions+=1;goto B6f412e;
case 0x6f4134:goto L6f4134;
case 0x6f4137:c.instructions+=1;goto B6f4137;
case 0x6f413d:goto L6f413d;
case 0x6f4142:goto L6f4142;
case 0x6f4148:c.instructions+=1;goto B6f4148;
case 0x6f414a:goto L6f414a;
case 0x6f414c:goto L6f414c;
case 0x6f4152:c.instructions+=1;goto B6f4152;
case 0x6f4154:goto L6f4154;
case 0x6f415a:c.instructions+=1;goto B6f415a;
case 0x6f4160:goto L6f4160;
case 0x6f4166:c.instructions+=1;goto B6f4166;
case 0x6f416c:goto L6f416c;
case 0x6f4172:c.instructions+=5;goto B6f4172;
case 0x6f4178:c.instructions+=4;goto B6f4178;
case 0x6f4179:c.instructions+=3;goto B6f4179;
case 0x6f417f:c.instructions+=2;goto B6f417f;
case 0x6f4180:c.instructions+=1;goto B6f4180;
case 0x6f4181:goto L6f4181;
case 0x6f4187:c.instructions+=1;goto B6f4187;
case 0x6f418d:goto L6f418d;
case 0x6f4193:c.instructions+=6;goto B6f4193;
case 0x6f4199:c.instructions+=5;goto B6f4199;
case 0x6f419c:c.instructions+=4;goto B6f419c;
case 0x6f419d:c.instructions+=3;goto B6f419d;
case 0x6f41a3:c.instructions+=2;goto B6f41a3;
case 0x6f41a4:c.instructions+=1;goto B6f41a4;
case 0x6f41a5:goto L6f41a5;
case 0x6f41ab:c.instructions+=1;goto B6f41ab;
case 0x6f41b1:goto L6f41b1;
case 0x6f41b7:c.instructions+=1;goto B6f41b7;
case 0x6f41bd:goto L6f41bd;
case 0x6f41c3:c.instructions+=1;goto B6f41c3;
case 0x6f41c9:goto L6f41c9;
case 0x6f41cf:c.instructions+=5;goto B6f41cf;
case 0x6f41d1:c.instructions+=4;goto B6f41d1;
case 0x6f41d2:c.instructions+=3;goto B6f41d2;
case 0x6f41d8:c.instructions+=2;goto B6f41d8;
case 0x6f41d9:c.instructions+=1;goto B6f41d9;
case 0x6f41da:goto L6f41da;
case 0x6f41e0:c.instructions+=1;goto B6f41e0;
case 0x6f41e6:goto L6f41e6;
case 0x6f41e8:goto L6f41e8;
case 0x6f41ee:c.instructions+=1;goto B6f41ee;
case 0x6f41f0:goto L6f41f0;
case 0x6f41f6:goto L6f41f6;
case 0x6f41fc:c.instructions+=1;goto B6f41fc;
case 0x6f41fe:goto L6f41fe;
case 0x6f4200:goto L6f4200;
case 0x6f4206:c.instructions+=1;goto B6f4206;
case 0x6f420c:goto L6f420c;
case 0x6f4212:c.instructions+=1;goto B6f4212;
case 0x6f4218:goto L6f4218;
case 0x6f421e:c.instructions+=1;goto B6f421e;
case 0x6f4224:goto L6f4224;
case 0x6f422a:c.instructions+=3;goto B6f422a;
case 0x6f422b:c.instructions+=2;goto B6f422b;
case 0x6f422c:c.instructions+=1;goto B6f422c;
case 0x6f422d:goto L6f422d;
case 0x6f4233:c.instructions+=6;goto B6f4233;
case 0x6f4239:c.instructions+=5;goto B6f4239;
case 0x6f423b:c.instructions+=4;goto B6f423b;
case 0x6f423c:c.instructions+=3;goto B6f423c;
case 0x6f4242:c.instructions+=2;goto B6f4242;
case 0x6f4243:c.instructions+=1;goto B6f4243;
case 0x6f4244:goto L6f4244;
case 0x6f424a:c.instructions+=1;goto B6f424a;
case 0x6f4250:goto L6f4250;
case 0x6f4256:c.instructions+=5;goto B6f4256;
case 0x6f4258:c.instructions+=4;goto B6f4258;
case 0x6f4259:c.instructions+=3;goto B6f4259;
case 0x6f425f:c.instructions+=2;goto B6f425f;
case 0x6f4260:c.instructions+=1;goto B6f4260;
case 0x6f4261:goto L6f4261;
case 0x6f4267:c.instructions+=1;goto B6f4267;
case 0x6f4269:goto L6f4269;
case 0x6f426f:c.instructions+=1;goto B6f426f;
case 0x6f4271:goto L6f4271;
case 0x6f4277:c.instructions+=1;goto B6f4277;
case 0x6f427d:goto L6f427d;
case 0x6f4283:c.instructions+=1;goto B6f4283;
case 0x6f4289:goto L6f4289;
case 0x6f428a:c.instructions+=2;goto B6f428a;
case 0x6f428b:c.instructions+=1;goto B6f428b;
case 0x6f428c:goto L6f428c;
case 0x6f4292:c.instructions+=2;goto B6f4292;
case 0x6f4299:c.instructions+=1;goto B6f4299;
case 0x6f429e:goto L6f429e;
case 0x6f42a4:c.instructions+=1;goto B6f42a4;
case 0x6f42aa:goto L6f42aa;
case 0x6f42b0:c.instructions+=2;goto B6f42b0;
case 0x6f42b7:c.instructions+=1;goto B6f42b7;
case 0x6f42bc:goto L6f42bc;
case 0x6f42c2:c.instructions+=1;goto B6f42c2;
case 0x6f42c4:goto L6f42c4;
case 0x6f42ca:c.instructions+=1;goto B6f42ca;
case 0x6f42cc:goto L6f42cc;
case 0x6f42d2:c.instructions+=1;goto B6f42d2;
case 0x6f42d8:goto L6f42d8;
case 0x6f42de:c.instructions+=1;goto B6f42de;
case 0x6f42e4:goto L6f42e4;
case 0x6f42ea:c.instructions+=1;goto B6f42ea;
case 0x6f42ec:goto L6f42ec;
case 0x6f42f2:c.instructions+=3;goto B6f42f2;
case 0x6f42f3:c.instructions+=2;goto B6f42f3;
case 0x6f42f4:c.instructions+=1;goto B6f42f4;
case 0x6f42f5:goto L6f42f5;
case 0x6f42fb:c.instructions+=6;goto B6f42fb;
case 0x6f42fe:c.instructions+=5;goto B6f42fe;
case 0x6f4301:c.instructions+=4;goto B6f4301;
case 0x6f4302:c.instructions+=3;goto B6f4302;
case 0x6f4308:c.instructions+=2;goto B6f4308;
case 0x6f4309:c.instructions+=1;goto B6f4309;
case 0x6f430a:goto L6f430a;
case 0x6f4310:c.instructions+=1;goto B6f4310;
case 0x6f4316:goto L6f4316;
case 0x6f431c:c.instructions+=1;goto B6f431c;
case 0x6f431e:goto L6f431e;
case 0x6f4324:c.instructions+=1;goto B6f4324;
case 0x6f432a:goto L6f432a;
case 0x6f4330:c.instructions+=1;goto B6f4330;
case 0x6f4332:goto L6f4332;
case 0x6f4338:c.instructions+=1;goto B6f4338;
case 0x6f433a:goto L6f433a;
case 0x6f4340:c.instructions+=1;goto B6f4340;
case 0x6f4342:goto L6f4342;
case 0x6f4348:c.instructions+=1;goto B6f4348;
case 0x6f434a:goto L6f434a;
case 0x6f4350:c.instructions+=1;goto B6f4350;
case 0x6f4352:goto L6f4352;
case 0x6f4358:c.instructions+=1;goto B6f4358;
case 0x6f435a:goto L6f435a;
case 0x6f4360:c.instructions+=1;goto B6f4360;
case 0x6f4362:goto L6f4362;
case 0x6f4368:c.instructions+=1;goto B6f4368;
case 0x6f436a:goto L6f436a;
case 0x6f4370:c.instructions+=1;goto B6f4370;
case 0x6f4372:goto L6f4372;
case 0x6f4378:c.instructions+=1;goto B6f4378;
case 0x6f437a:goto L6f437a;
case 0x6f4380:goto L6f4380;
case 0x6f4386:c.instructions+=5;goto B6f4386;
case 0x6f438c:c.instructions+=4;goto B6f438c;
case 0x6f438d:c.instructions+=3;goto B6f438d;
case 0x6f4393:c.instructions+=2;goto B6f4393;
case 0x6f4394:c.instructions+=1;goto B6f4394;
case 0x6f4395:goto L6f4395;
case 0x6f439c:c.instructions+=7;goto B6f439c;
case 0x6f439d:c.instructions+=6;goto B6f439d;
case 0x6f43a3:c.instructions+=5;goto B6f43a3;
case 0x6f43a9:c.instructions+=4;goto B6f43a9;
case 0x6f43af:c.instructions+=3;goto B6f43af;
case 0x6f43b5:c.instructions+=2;goto B6f43b5;
case 0x6f43b6:c.instructions+=1;goto B6f43b6;
case 0x6f43b7:goto L6f43b7;
case 0x6f43be:goto L6f43be;
case 0x6f43bf:c.instructions+=2;goto B6f43bf;
case 0x6f43c0:c.instructions+=1;goto B6f43c0;
case 0x6f43d0:goto L6f43d0;
case 0x6f43d1:c.instructions+=10;goto B6f43d1;
case 0x6f43d3:c.instructions+=9;goto B6f43d3;
case 0x6f43d6:c.instructions+=8;goto B6f43d6;
case 0x6f43dc:c.instructions+=7;goto B6f43dc;
case 0x6f43dd:c.instructions+=6;goto B6f43dd;
case 0x6f43e0:c.instructions+=5;goto B6f43e0;
case 0x6f43e1:c.instructions+=4;goto B6f43e1;
case 0x6f43e3:c.instructions+=3;goto B6f43e3;
case 0x6f43e5:c.instructions+=2;goto B6f43e5;
case 0x6f43ea:c.instructions+=1;goto B6f43ea;
case 0x6f43ef:goto L6f43ef;
case 0x6f43f1:goto L6f43f1;
case 0x6f43f5:c.instructions+=6;goto B6f43f5;
case 0x6f43f9:c.instructions+=5;goto B6f43f9;
case 0x6f43fd:c.instructions+=4;goto B6f43fd;
case 0x6f4402:c.instructions+=3;goto B6f4402;
case 0x6f4406:c.instructions+=2;goto B6f4406;
case 0x6f440e:c.instructions+=1;goto B6f440e;
case 0x6f4412:goto L6f4412;
case 0x6f4414:goto L6f4414;
case 0x6f4419:c.instructions+=2;goto B6f4419;
case 0x6f441e:c.instructions+=1;goto B6f441e;
case 0x6f4420:goto L6f4420;
case 0x6f4423:c.instructions+=2;goto B6f4423;
case 0x6f4425:c.instructions+=1;goto B6f4425;
case 0x6f4427:goto L6f4427;
case 0x6f442c:c.instructions+=2;goto B6f442c;
case 0x6f442d:c.instructions+=1;goto B6f442d;
case 0x6f4432:goto L6f4432;
case 0x6f4435:goto L6f4435;
case 0x6f4437:c.instructions+=5;goto B6f4437;
case 0x6f4438:c.instructions+=4;goto B6f4438;
case 0x6f4439:c.instructions+=3;goto B6f4439;
case 0x6f443b:c.instructions+=2;goto B6f443b;
case 0x6f443c:c.instructions+=1;goto B6f443c;
case 0x6f443d:goto L6f443d;
case 0x6f443f:c.instructions+=4;goto B6f443f;
case 0x6f4443:c.instructions+=3;goto B6f4443;
case 0x6f4444:c.instructions+=2;goto B6f4444;
case 0x6f4445:c.instructions+=1;goto B6f4445;
case 0x6f4448:goto L6f4448;
case 0x6f444a:c.instructions+=1;goto B6f444a;
case 0x6f444c:goto L6f444c;
case 0x6f444f:c.instructions+=2;goto B6f444f;
case 0x6f4451:c.instructions+=1;goto B6f4451;
case 0x6f4457:goto L6f4457;
case 0x6f4458:c.instructions+=3;goto B6f4458;
case 0x6f445d:c.instructions+=2;goto B6f445d;
case 0x6f445e:c.instructions+=1;goto B6f445e;
case 0x6f4463:goto L6f4463;
case 0x6f4466:c.instructions+=6;goto B6f4466;
case 0x6f4468:c.instructions+=5;goto B6f4468;
case 0x6f4469:c.instructions+=4;goto B6f4469;
case 0x6f446a:c.instructions+=3;goto B6f446a;
case 0x6f446c:c.instructions+=2;goto B6f446c;
case 0x6f446d:c.instructions+=1;goto B6f446d;
case 0x6f446e:goto L6f446e;
case 0x6f4472:c.instructions+=3;goto B6f4472;
case 0x6f4474:c.instructions+=2;goto B6f4474;
case 0x6f4475:c.instructions+=1;goto B6f4475;
case 0x6f4478:goto L6f4478;
case 0x6f447a:c.instructions+=4;goto B6f447a;
case 0x6f447e:c.instructions+=3;goto B6f447e;
case 0x6f447f:c.instructions+=2;goto B6f447f;
case 0x6f4480:c.instructions+=1;goto B6f4480;
case 0x6f4483:goto L6f4483;
case 0x6f4485:c.instructions+=1;goto B6f4485;
case 0x6f4487:goto L6f4487;
case 0x6f448a:c.instructions+=2;goto B6f448a;
case 0x6f448c:c.instructions+=1;goto B6f448c;
case 0x6f4492:goto L6f4492;
case 0x6f4493:c.instructions+=3;goto B6f4493;
case 0x6f4498:c.instructions+=2;goto B6f4498;
case 0x6f4499:c.instructions+=1;goto B6f4499;
case 0x6f449e:goto L6f449e;
case 0x6f44a1:c.instructions+=6;goto B6f44a1;
case 0x6f44a3:c.instructions+=5;goto B6f44a3;
case 0x6f44a4:c.instructions+=4;goto B6f44a4;
case 0x6f44a5:c.instructions+=3;goto B6f44a5;
case 0x6f44a7:c.instructions+=2;goto B6f44a7;
case 0x6f44a8:c.instructions+=1;goto B6f44a8;
case 0x6f44a9:goto L6f44a9;
case 0x6f44ad:c.instructions+=9;goto B6f44ad;
case 0x6f44b1:c.instructions+=8;goto B6f44b1;
case 0x6f44b5:c.instructions+=7;goto B6f44b5;
case 0x6f44b6:c.instructions+=6;goto B6f44b6;
case 0x6f44b8:c.instructions+=5;goto B6f44b8;
case 0x6f44b9:c.instructions+=4;goto B6f44b9;
case 0x6f44be:c.instructions+=3;goto B6f44be;
case 0x6f44c0:c.instructions+=2;goto B6f44c0;
case 0x6f44c1:c.instructions+=1;goto B6f44c1;
case 0x6f44c4:goto L6f44c4;
case 0x6f44c6:c.instructions+=1;goto B6f44c6;
case 0x6f44c8:goto L6f44c8;
case 0x6f44cb:c.instructions+=2;goto B6f44cb;
case 0x6f44cd:c.instructions+=1;goto B6f44cd;
case 0x6f44d3:goto L6f44d3;
case 0x6f44d4:c.instructions+=3;goto B6f44d4;
case 0x6f44d9:c.instructions+=2;goto B6f44d9;
case 0x6f44da:c.instructions+=1;goto B6f44da;
case 0x6f44df:goto L6f44df;
case 0x6f44e2:c.instructions+=6;goto B6f44e2;
case 0x6f44e4:c.instructions+=5;goto B6f44e4;
case 0x6f44e5:c.instructions+=4;goto B6f44e5;
case 0x6f44e6:c.instructions+=3;goto B6f44e6;
case 0x6f44e8:c.instructions+=2;goto B6f44e8;
case 0x6f44e9:c.instructions+=1;goto B6f44e9;
case 0x6f44ea:goto L6f44ea;
case 0x6f44f1:c.instructions+=9;goto B6f44f1;
case 0x6f44f8:c.instructions+=8;goto B6f44f8;
case 0x6f44fd:c.instructions+=7;goto B6f44fd;
case 0x6f4503:c.instructions+=6;goto B6f4503;
case 0x6f4508:c.instructions+=5;goto B6f4508;
case 0x6f450b:c.instructions+=4;goto B6f450b;
case 0x6f450d:c.instructions+=3;goto B6f450d;
case 0x6f4512:c.instructions+=2;goto B6f4512;
case 0x6f4514:c.instructions+=1;goto B6f4514;
case 0x6f4520:goto L6f4520;
case 0x6f4527:c.instructions+=4;goto B6f4527;
case 0x6f452d:c.instructions+=3;goto B6f452d;
case 0x6f452e:c.instructions+=2;goto B6f452e;
case 0x6f4530:c.instructions+=1;goto B6f4530;
case 0x6f4532:goto L6f4532;
case 0x6f4536:c.instructions+=3;goto B6f4536;
case 0x6f453b:c.instructions+=2;goto B6f453b;
case 0x6f453c:c.instructions+=1;goto B6f453c;
case 0x6f4541:goto L6f4541;
case 0x6f4543:c.instructions+=4;goto B6f4543;
case 0x6f4546:c.instructions+=3;goto B6f4546;
case 0x6f454b:c.instructions+=2;goto B6f454b;
case 0x6f454c:c.instructions+=1;goto B6f454c;
case 0x6f454f:goto L6f454f;
case 0x6f4553:c.instructions+=3;goto B6f4553;
case 0x6f4558:c.instructions+=2;goto B6f4558;
case 0x6f4559:c.instructions+=1;goto B6f4559;
case 0x6f455e:goto L6f455e;
case 0x6f4560:c.instructions+=4;goto B6f4560;
case 0x6f4563:c.instructions+=3;goto B6f4563;
case 0x6f4568:c.instructions+=2;goto B6f4568;
case 0x6f4569:c.instructions+=1;goto B6f4569;
case 0x6f456c:goto L6f456c;
case 0x6f456e:c.instructions+=1;goto B6f456e;
case 0x6f4570:goto L6f4570;
case 0x6f4573:c.instructions+=2;goto B6f4573;
case 0x6f4575:c.instructions+=1;goto B6f4575;
case 0x6f4577:goto L6f4577;
case 0x6f4578:c.instructions+=3;goto B6f4578;
case 0x6f457d:c.instructions+=2;goto B6f457d;
case 0x6f457e:c.instructions+=1;goto B6f457e;
case 0x6f4583:goto L6f4583;
case 0x6f4586:goto L6f4586;
case 0x6f4588:c.instructions+=5;goto B6f4588;
case 0x6f4589:c.instructions+=4;goto B6f4589;
case 0x6f458a:c.instructions+=3;goto B6f458a;
case 0x6f458c:c.instructions+=2;goto B6f458c;
case 0x6f458d:c.instructions+=1;goto B6f458d;
case 0x6f458e:goto L6f458e;
case 0x6f4593:c.instructions+=1;goto B6f4593;
case 0x6f4598:goto L6f4598;
case 0x6f4599:c.instructions+=5;goto B6f4599;
case 0x6f45a3:c.instructions+=4;goto B6f45a3;
case 0x6f45a4:c.instructions+=3;goto B6f45a4;
case 0x6f45a6:c.instructions+=2;goto B6f45a6;
case 0x6f45a7:c.instructions+=1;goto B6f45a7;
case 0x6f45b0:goto L6f45b0;
case 0x6f45b1:c.instructions+=7;goto B6f45b1;
case 0x6f45b3:c.instructions+=6;goto B6f45b3;
case 0x6f45b6:c.instructions+=5;goto B6f45b6;
case 0x6f45b8:c.instructions+=4;goto B6f45b8;
case 0x6f45b9:c.instructions+=3;goto B6f45b9;
case 0x6f45ba:c.instructions+=2;goto B6f45ba;
case 0x6f45bb:c.instructions+=1;goto B6f45bb;
case 0x6f45bd:goto L6f45bd;
case 0x6f45c0:c.instructions+=1;goto B6f45c0;
case 0x6f45c3:goto L6f45c3;
case 0x6f45c7:c.instructions+=7;goto B6f45c7;
case 0x6f45c9:c.instructions+=6;goto B6f45c9;
case 0x6f45cb:c.instructions+=5;goto B6f45cb;
case 0x6f45ce:c.instructions+=4;goto B6f45ce;
case 0x6f45d2:c.instructions+=3;goto B6f45d2;
case 0x6f45d4:c.instructions+=2;goto B6f45d4;
case 0x6f45d6:c.instructions+=1;goto B6f45d6;
case 0x6f45d8:goto L6f45d8;
case 0x6f45da:c.instructions+=1;goto B6f45da;
case 0x6f45dc:goto L6f45dc;
case 0x6f45df:c.instructions+=1;goto B6f45df;
case 0x6f45e0:goto L6f45e0;
case 0x6f45e2:c.instructions+=2;goto B6f45e2;
case 0x6f45e4:c.instructions+=1;goto B6f45e4;
case 0x6f45e6:goto L6f45e6;
case 0x6f45e8:goto L6f45e8;
case 0x6f45e9:c.instructions+=4;goto B6f45e9;
case 0x6f45ea:c.instructions+=3;goto B6f45ea;
case 0x6f45eb:c.instructions+=2;goto B6f45eb;
case 0x6f45ec:c.instructions+=1;goto B6f45ec;
case 0x6f45f0:goto L6f45f0;
case 0x6f45f1:c.instructions+=8;goto B6f45f1;
case 0x6f45f3:c.instructions+=7;goto B6f45f3;
case 0x6f45f4:c.instructions+=6;goto B6f45f4;
case 0x6f45f5:c.instructions+=5;goto B6f45f5;
case 0x6f45f8:c.instructions+=4;goto B6f45f8;
case 0x6f45fc:c.instructions+=3;goto B6f45fc;
case 0x6f45fe:c.instructions+=2;goto B6f45fe;
case 0x6f4600:c.instructions+=1;goto B6f4600;
case 0x6f4602:goto L6f4602;
case 0x6f4609:c.instructions+=2;goto B6f4609;
case 0x6f460a:c.instructions+=1;goto B6f460a;
case 0x6f460c:goto L6f460c;
case 0x6f4610:c.instructions+=6;goto B6f4610;
case 0x6f4613:c.instructions+=5;goto B6f4613;
case 0x6f4617:c.instructions+=4;goto B6f4617;
case 0x6f4619:c.instructions+=3;goto B6f4619;
case 0x6f461b:c.instructions+=2;goto B6f461b;
case 0x6f461d:c.instructions+=1;goto B6f461d;
case 0x6f461f:goto L6f461f;
case 0x6f4623:goto L6f4623;
case 0x6f4627:c.instructions+=1;goto B6f4627;
case 0x6f4629:goto L6f4629;
case 0x6f462a:c.instructions+=2;goto B6f462a;
case 0x6f462c:c.instructions+=1;goto B6f462c;
case 0x6f462e:goto L6f462e;
case 0x6f4630:goto L6f4630;
case 0x6f4631:goto L6f4631;
case 0x6f4632:c.instructions+=3;goto B6f4632;
case 0x6f4633:c.instructions+=2;goto B6f4633;
case 0x6f4634:c.instructions+=1;goto B6f4634;
case 0x6f4637:goto L6f4637;
case 0x6f463a:c.instructions+=1;goto B6f463a;
case 0x6f463c:goto L6f463c;
case 0x6f463f:c.instructions+=5;goto B6f463f;
case 0x6f4642:c.instructions+=4;goto B6f4642;
case 0x6f4644:c.instructions+=3;goto B6f4644;
case 0x6f4646:c.instructions+=2;goto B6f4646;
case 0x6f4648:c.instructions+=1;goto B6f4648;
case 0x6f464a:goto L6f464a;
case 0x6f464e:c.instructions+=1;goto B6f464e;
case 0x6f4650:goto L6f4650;
case 0x6f4655:c.instructions+=1;goto B6f4655;
case 0x6f4657:goto L6f4657;
case 0x6f465d:c.instructions+=2;goto B6f465d;
case 0x6f4660:c.instructions+=1;goto B6f4660;
case 0x6f4662:goto L6f4662;
case 0x6f4663:c.instructions+=2;goto B6f4663;
case 0x6f4665:c.instructions+=1;goto B6f4665;
case 0x6f4667:goto L6f4667;
case 0x6f4668:c.instructions+=5;goto B6f4668;
case 0x6f4669:c.instructions+=4;goto B6f4669;
case 0x6f466b:c.instructions+=3;goto B6f466b;
case 0x6f466c:c.instructions+=2;goto B6f466c;
case 0x6f466d:c.instructions+=1;goto B6f466d;
case 0x6f4670:goto L6f4670;
case 0x6f4674:goto L6f4674;
case 0x6f4676:c.instructions+=1;goto B6f4676;
case 0x6f4678:goto L6f4678;
case 0x6f467c:c.instructions+=5;goto B6f467c;
case 0x6f467d:c.instructions+=4;goto B6f467d;
case 0x6f467e:c.instructions+=3;goto B6f467e;
case 0x6f467f:c.instructions+=2;goto B6f467f;
case 0x6f4680:c.instructions+=1;goto B6f4680;
case 0x6f4690:goto L6f4690;
case 0x6f4691:c.instructions+=4;goto B6f4691;
case 0x6f4693:c.instructions+=3;goto B6f4693;
case 0x6f4698:c.instructions+=2;goto B6f4698;
case 0x6f469a:c.instructions+=1;goto B6f469a;
case 0x6f469c:goto L6f469c;
case 0x6f469f:c.instructions+=2;goto B6f469f;
case 0x6f46a1:c.instructions+=1;goto B6f46a1;
case 0x6f46a3:goto L6f46a3;
case 0x6f46a4:c.instructions+=3;goto B6f46a4;
case 0x6f46a7:c.instructions+=2;goto B6f46a7;
case 0x6f46a8:c.instructions+=1;goto B6f46a8;
case 0x6f46aa:goto L6f46aa;
case 0x6f46ad:c.instructions+=4;goto B6f46ad;
case 0x6f46af:c.instructions+=3;goto B6f46af;
case 0x6f46b0:c.instructions+=2;goto B6f46b0;
case 0x6f46b1:c.instructions+=1;goto B6f46b1;
case 0x6f46b2:goto L6f46b2;
case 0x6f46b5:c.instructions+=2;goto B6f46b5;
case 0x6f46b6:c.instructions+=1;goto B6f46b6;
case 0x6f46c0:goto L6f46c0;
case 0x6f46c1:c.instructions+=4;goto B6f46c1;
case 0x6f46c3:c.instructions+=3;goto B6f46c3;
case 0x6f46c8:c.instructions+=2;goto B6f46c8;
case 0x6f46ca:c.instructions+=1;goto B6f46ca;
case 0x6f46cc:goto L6f46cc;
case 0x6f46cf:c.instructions+=2;goto B6f46cf;
case 0x6f46d1:c.instructions+=1;goto B6f46d1;
case 0x6f46d3:goto L6f46d3;
case 0x6f46d4:c.instructions+=1;goto B6f46d4;
case 0x6f46d6:goto L6f46d6;
case 0x6f46d7:c.instructions+=1;goto B6f46d7;
case 0x6f46e0:goto L6f46e0;
case 0x6f46e1:c.instructions+=10;goto B6f46e1;
case 0x6f46e3:c.instructions+=9;goto B6f46e3;
case 0x6f46e6:c.instructions+=8;goto B6f46e6;
case 0x6f46e8:c.instructions+=7;goto B6f46e8;
case 0x6f46ee:c.instructions+=6;goto B6f46ee;
case 0x6f46ef:c.instructions+=5;goto B6f46ef;
case 0x6f46f5:c.instructions+=4;goto B6f46f5;
case 0x6f46f7:c.instructions+=3;goto B6f46f7;
case 0x6f46f9:c.instructions+=2;goto B6f46f9;
case 0x6f46fa:c.instructions+=1;goto B6f46fa;
case 0x6f46fc:goto L6f46fc;
case 0x6f46ff:c.instructions+=2;goto B6f46ff;
case 0x6f4702:c.instructions+=1;goto B6f4702;
case 0x6f4704:goto L6f4704;
case 0x6f470b:c.instructions+=1;goto B6f470b;
case 0x6f4712:goto L6f4712;
case 0x6f4714:goto L6f4714;
case 0x6f4715:c.instructions+=1;goto B6f4715;
case 0x6f4730:goto L6f4730;
case 0x6f4732:c.instructions+=4;goto B6f4732;
case 0x6f4737:c.instructions+=3;goto B6f4737;
case 0x6f473a:c.instructions+=2;goto B6f473a;
case 0x6f473d:c.instructions+=1;goto B6f473d;
case 0x6f473f:goto L6f473f;
case 0x6f4746:c.instructions+=1;goto B6f4746;
case 0x6f474d:goto L6f474d;
case 0x6f4752:c.instructions+=1;goto B6f4752;
case 0x6f4753:goto L6f4753;
case 0x6f4758:c.instructions+=1;goto B6f4758;
case 0x6f4759:goto L6f4759;
case 0x6f475e:c.instructions+=1;goto B6f475e;
case 0x6f475f:goto L6f475f;
case 0x6f4764:c.instructions+=1;goto B6f4764;
case 0x6f4765:goto L6f4765;
case 0x6f4768:c.instructions+=2;goto B6f4768;
case 0x6f476b:c.instructions+=1;goto B6f476b;
case 0x6f476d:goto L6f476d;
case 0x6f4774:c.instructions+=1;goto B6f4774;
case 0x6f477b:goto L6f477b;
case 0x6f4780:c.instructions+=1;goto B6f4780;
case 0x6f4781:goto L6f4781;
case 0x6f4782:c.instructions+=1;goto B6f4782;
case 0x6f4787:goto L6f4787;
case 0x6f478a:c.instructions+=4;goto B6f478a;
case 0x6f478c:c.instructions+=3;goto B6f478c;
case 0x6f478e:c.instructions+=2;goto B6f478e;
case 0x6f4791:c.instructions+=1;goto B6f4791;
case 0x6f47e0:goto L6f47e0;
case 0x6f47e1:c.instructions+=6;goto B6f47e1;
case 0x6f47e3:c.instructions+=5;goto B6f47e3;
case 0x6f47e4:c.instructions+=4;goto B6f47e4;
case 0x6f47e6:c.instructions+=3;goto B6f47e6;
case 0x6f47e8:c.instructions+=2;goto B6f47e8;
case 0x6f47e9:c.instructions+=1;goto B6f47e9;
case 0x6f47eb:goto L6f47eb;
case 0x6f47ee:c.instructions+=1;goto B6f47ee;
case 0x6f47f0:goto L6f47f0;
case 0x6f47f2:c.instructions+=1;goto B6f47f2;
case 0x6f47f7:goto L6f47f7;
case 0x6f47f9:c.instructions+=1;goto B6f47f9;
case 0x6f47fb:goto L6f47fb;
case 0x6f47fe:c.instructions+=2;goto B6f47fe;
case 0x6f4800:c.instructions+=1;goto B6f4800;
case 0x6f4802:goto L6f4802;
case 0x6f4804:c.instructions+=1;goto B6f4804;
case 0x6f4806:goto L6f4806;
case 0x6f4807:c.instructions+=4;goto B6f4807;
case 0x6f4809:c.instructions+=3;goto B6f4809;
case 0x6f480a:c.instructions+=2;goto B6f480a;
case 0x6f480b:c.instructions+=1;goto B6f480b;
case 0x6f480e:goto L6f480e;
case 0x6f480f:c.instructions+=4;goto B6f480f;
case 0x6f4811:c.instructions+=3;goto B6f4811;
case 0x6f4812:c.instructions+=2;goto B6f4812;
case 0x6f4813:c.instructions+=1;goto B6f4813;
case 0x6f4820:goto L6f4820;
case 0x6f4822:c.instructions+=1;goto B6f4822;
case 0x6f4827:goto L6f4827;
case 0x6f4830:goto L6f4830;
case 0x6f4831:c.instructions+=2;goto B6f4831;
case 0x6f4833:c.instructions+=1;goto B6f4833;
case 0x6f4838:goto L6f4838;
case 0x6f483b:c.instructions+=1;goto B6f483b;
case 0x6f483d:goto L6f483d;
case 0x6f4840:goto L6f4840;
case 0x6f4843:c.instructions+=1;goto B6f4843;
case 0x6f4845:goto L6f4845;
case 0x6f4848:c.instructions+=1;goto B6f4848;
case 0x6f484a:goto L6f484a;
case 0x6f484f:c.instructions+=1;goto B6f484f;
case 0x6f4851:goto L6f4851;
case 0x6f4853:c.instructions+=1;goto B6f4853;
case 0x6f4858:goto L6f4858;
case 0x6f485b:c.instructions+=1;goto B6f485b;
case 0x6f485d:goto L6f485d;
case 0x6f485f:goto L6f485f;
case 0x6f4860:c.instructions+=1;goto B6f4860;
case 0x6f4862:goto L6f4862;
case 0x6f4863:c.instructions+=1;goto B6f4863;
case 0x6f4865:goto L6f4865;
case 0x6f4868:c.instructions+=1;goto B6f4868;
case 0x6f486a:goto L6f486a;
case 0x6f486d:c.instructions+=3;goto B6f486d;
case 0x6f4870:c.instructions+=2;goto B6f4870;
case 0x6f4871:c.instructions+=1;goto B6f4871;
case 0x6f4872:goto L6f4872;
case 0x6f4874:c.instructions+=2;goto B6f4874;
case 0x6f4875:c.instructions+=1;goto B6f4875;
case 0x6f4876:goto L6f4876;
case 0x6f4879:c.instructions+=3;goto B6f4879;
case 0x6f487c:c.instructions+=2;goto B6f487c;
case 0x6f487d:c.instructions+=1;goto B6f487d;
case 0x6f4880:goto L6f4880;
case 0x6f4881:c.instructions+=5;goto B6f4881;
case 0x6f4883:c.instructions+=4;goto B6f4883;
case 0x6f4886:c.instructions+=3;goto B6f4886;
case 0x6f488b:c.instructions+=2;goto B6f488b;
case 0x6f488c:c.instructions+=1;goto B6f488c;
case 0x6f4890:goto L6f4890;
case 0x6f4891:c.instructions+=38;goto B6f4891;
case 0x6f4893:c.instructions+=37;goto B6f4893;
case 0x6f4896:c.instructions+=36;goto B6f4896;
case 0x6f4899:c.instructions+=35;goto B6f4899;
case 0x6f489c:c.instructions+=34;goto B6f489c;
case 0x6f489f:c.instructions+=33;goto B6f489f;
case 0x6f48a2:c.instructions+=32;goto B6f48a2;
case 0x6f48a5:c.instructions+=31;goto B6f48a5;
case 0x6f48a8:c.instructions+=30;goto B6f48a8;
case 0x6f48ab:c.instructions+=29;goto B6f48ab;
case 0x6f48ae:c.instructions+=28;goto B6f48ae;
case 0x6f48b1:c.instructions+=27;goto B6f48b1;
case 0x6f48b4:c.instructions+=26;goto B6f48b4;
case 0x6f48b7:c.instructions+=25;goto B6f48b7;
case 0x6f48ba:c.instructions+=24;goto B6f48ba;
case 0x6f48bd:c.instructions+=23;goto B6f48bd;
case 0x6f48c0:c.instructions+=22;goto B6f48c0;
case 0x6f48c3:c.instructions+=21;goto B6f48c3;
case 0x6f48c6:c.instructions+=20;goto B6f48c6;
case 0x6f48c9:c.instructions+=19;goto B6f48c9;
case 0x6f48cc:c.instructions+=18;goto B6f48cc;
case 0x6f48cf:c.instructions+=17;goto B6f48cf;
case 0x6f48d2:c.instructions+=16;goto B6f48d2;
case 0x6f48d5:c.instructions+=15;goto B6f48d5;
case 0x6f48db:c.instructions+=14;goto B6f48db;
case 0x6f48dc:c.instructions+=13;goto B6f48dc;
case 0x6f48df:c.instructions+=12;goto B6f48df;
case 0x6f48e2:c.instructions+=11;goto B6f48e2;
case 0x6f48e9:c.instructions+=10;goto B6f48e9;
case 0x6f48f0:c.instructions+=9;goto B6f48f0;
case 0x6f48f7:c.instructions+=8;goto B6f48f7;
case 0x6f48fe:c.instructions+=7;goto B6f48fe;
case 0x6f4905:c.instructions+=6;goto B6f4905;
case 0x6f490c:c.instructions+=5;goto B6f490c;
case 0x6f4913:c.instructions+=4;goto B6f4913;
case 0x6f4916:c.instructions+=3;goto B6f4916;
case 0x6f4918:c.instructions+=2;goto B6f4918;
case 0x6f4919:c.instructions+=1;goto B6f4919;
case 0x6f491b:goto L6f491b;
case 0x6f491d:c.instructions+=2;goto B6f491d;
case 0x6f491e:c.instructions+=1;goto B6f491e;
case 0x6f4920:goto L6f4920;
case 0x6f4921:c.instructions+=7;goto B6f4921;
case 0x6f4923:c.instructions+=6;goto B6f4923;
case 0x6f4929:c.instructions+=5;goto B6f4929;
case 0x6f492c:c.instructions+=4;goto B6f492c;
case 0x6f492e:c.instructions+=3;goto B6f492e;
case 0x6f4930:c.instructions+=2;goto B6f4930;
case 0x6f4931:c.instructions+=1;goto B6f4931;
case 0x6f4934:goto L6f4934;
case 0x6f4935:c.instructions+=1;goto B6f4935;
case 0x6f4940:goto L6f4940;
case 0x6f4941:c.instructions+=6;goto B6f4941;
case 0x6f4943:c.instructions+=5;goto B6f4943;
case 0x6f4944:c.instructions+=4;goto B6f4944;
case 0x6f4947:c.instructions+=3;goto B6f4947;
case 0x6f494a:c.instructions+=2;goto B6f494a;
case 0x6f494c:c.instructions+=1;goto B6f494c;
case 0x6f494e:goto L6f494e;
case 0x6f4950:c.instructions+=1;goto B6f4950;
case 0x6f4952:goto L6f4952;
case 0x6f4953:c.instructions+=1;goto B6f4953;
case 0x6f4958:goto L6f4958;
case 0x6f495b:goto L6f495b;
case 0x6f495d:c.instructions+=2;goto B6f495d;
case 0x6f4960:c.instructions+=1;goto B6f4960;
case 0x6f4962:goto L6f4962;
case 0x6f4965:c.instructions+=2;goto B6f4965;
case 0x6f4967:c.instructions+=1;goto B6f4967;
case 0x6f4969:goto L6f4969;
case 0x6f496b:goto L6f496b;
case 0x6f496c:c.instructions+=1;goto B6f496c;
case 0x6f4971:goto L6f4971;
case 0x6f4974:goto L6f4974;
case 0x6f4976:c.instructions+=2;goto B6f4976;
case 0x6f4979:c.instructions+=1;goto B6f4979;
case 0x6f497b:goto L6f497b;
case 0x6f497c:c.instructions+=1;goto B6f497c;
case 0x6f4981:goto L6f4981;
case 0x6f4984:goto L6f4984;
case 0x6f4985:c.instructions+=2;goto B6f4985;
case 0x6f4986:c.instructions+=1;goto B6f4986;
case 0x6f4990:goto L6f4990;
case 0x6f4991:c.instructions+=6;goto B6f4991;
case 0x6f4993:c.instructions+=5;goto B6f4993;
case 0x6f4996:c.instructions+=4;goto B6f4996;
case 0x6f4999:c.instructions+=3;goto B6f4999;
case 0x6f499b:c.instructions+=2;goto B6f499b;
case 0x6f499e:c.instructions+=1;goto B6f499e;
case 0x6f49a0:goto L6f49a0;
case 0x6f49a7:goto L6f49a7;
case 0x6f49a9:goto L6f49a9;
case 0x6f49aa:c.instructions+=1;goto B6f49aa;
case 0x6f49d0:goto L6f49d0;
case 0x6f49d1:c.instructions+=5;goto B6f49d1;
case 0x6f49d3:c.instructions+=4;goto B6f49d3;
case 0x6f49d6:c.instructions+=3;goto B6f49d6;
case 0x6f49d8:c.instructions+=2;goto B6f49d8;
case 0x6f49da:c.instructions+=1;goto B6f49da;
case 0x6f49dc:goto L6f49dc;
case 0x6f49df:c.instructions+=3;goto B6f49df;
case 0x6f49e2:c.instructions+=2;goto B6f49e2;
case 0x6f49e3:c.instructions+=1;goto B6f49e3;
case 0x6f49e6:goto L6f49e6;
case 0x6f49e8:c.instructions+=5;goto B6f49e8;
case 0x6f49eb:c.instructions+=4;goto B6f49eb;
case 0x6f49ee:c.instructions+=3;goto B6f49ee;
case 0x6f49f1:c.instructions+=2;goto B6f49f1;
case 0x6f49f2:c.instructions+=1;goto B6f49f2;
case 0x6f4a00:goto L6f4a00;
case 0x6f4a02:c.instructions+=41;goto B6f4a02;
case 0x6f4a04:c.instructions+=40;goto B6f4a04;
case 0x6f4a05:c.instructions+=39;goto B6f4a05;
case 0x6f4a0a:c.instructions+=38;goto B6f4a0a;
case 0x6f4a10:c.instructions+=37;goto B6f4a10;
case 0x6f4a12:c.instructions+=36;goto B6f4a12;
case 0x6f4a15:c.instructions+=35;goto B6f4a15;
case 0x6f4a18:c.instructions+=34;goto B6f4a18;
case 0x6f4a1b:c.instructions+=33;goto B6f4a1b;
case 0x6f4a1e:c.instructions+=32;goto B6f4a1e;
case 0x6f4a21:c.instructions+=31;goto B6f4a21;
case 0x6f4a24:c.instructions+=30;goto B6f4a24;
case 0x6f4a27:c.instructions+=29;goto B6f4a27;
case 0x6f4a2a:c.instructions+=28;goto B6f4a2a;
case 0x6f4a2d:c.instructions+=27;goto B6f4a2d;
case 0x6f4a30:c.instructions+=26;goto B6f4a30;
case 0x6f4a33:c.instructions+=25;goto B6f4a33;
case 0x6f4a36:c.instructions+=24;goto B6f4a36;
case 0x6f4a39:c.instructions+=23;goto B6f4a39;
case 0x6f4a3c:c.instructions+=22;goto B6f4a3c;
case 0x6f4a3f:c.instructions+=21;goto B6f4a3f;
case 0x6f4a42:c.instructions+=20;goto B6f4a42;
case 0x6f4a45:c.instructions+=19;goto B6f4a45;
case 0x6f4a48:c.instructions+=18;goto B6f4a48;
case 0x6f4a4b:c.instructions+=17;goto B6f4a4b;
case 0x6f4a4e:c.instructions+=16;goto B6f4a4e;
case 0x6f4a51:c.instructions+=15;goto B6f4a51;
case 0x6f4a54:c.instructions+=14;goto B6f4a54;
case 0x6f4a57:c.instructions+=13;goto B6f4a57;
case 0x6f4a5a:c.instructions+=12;goto B6f4a5a;
case 0x6f4a5d:c.instructions+=11;goto B6f4a5d;
case 0x6f4a60:c.instructions+=10;goto B6f4a60;
case 0x6f4a63:c.instructions+=9;goto B6f4a63;
case 0x6f4a66:c.instructions+=8;goto B6f4a66;
case 0x6f4a69:c.instructions+=7;goto B6f4a69;
case 0x6f4a6c:c.instructions+=6;goto B6f4a6c;
case 0x6f4a6f:c.instructions+=5;goto B6f4a6f;
case 0x6f4a75:c.instructions+=4;goto B6f4a75;
case 0x6f4a7f:c.instructions+=3;goto B6f4a7f;
case 0x6f4a85:c.instructions+=2;goto B6f4a85;
case 0x6f4a8b:c.instructions+=1;goto B6f4a8b;
case 0x6f4a91:goto L6f4a91;
case 0x6f4a93:goto L6f4a93;
case 0x6f4a94:c.instructions+=1;goto B6f4a94;
case 0x6f4aa0:goto L6f4aa0;
case 0x6f4aa1:c.instructions+=2;goto B6f4aa1;
case 0x6f4aa3:c.instructions+=1;goto B6f4aa3;
case 0x6f4aa8:goto L6f4aa8;
case 0x6f4aaa:c.instructions+=2;goto B6f4aaa;
case 0x6f4aab:c.instructions+=1;goto B6f4aab;
case 0x6f4ab0:goto L6f4ab0;
case 0x6f4ab1:c.instructions+=16;goto B6f4ab1;
case 0x6f4ab3:c.instructions+=15;goto B6f4ab3;
case 0x6f4ab6:c.instructions+=14;goto B6f4ab6;
case 0x6f4ab9:c.instructions+=13;goto B6f4ab9;
case 0x6f4abc:c.instructions+=12;goto B6f4abc;
case 0x6f4abd:c.instructions+=11;goto B6f4abd;
case 0x6f4ac0:c.instructions+=10;goto B6f4ac0;
case 0x6f4ac1:c.instructions+=9;goto B6f4ac1;
case 0x6f4ac4:c.instructions+=8;goto B6f4ac4;
case 0x6f4ac6:c.instructions+=7;goto B6f4ac6;
case 0x6f4ac9:c.instructions+=6;goto B6f4ac9;
case 0x6f4aca:c.instructions+=5;goto B6f4aca;
case 0x6f4acd:c.instructions+=4;goto B6f4acd;
case 0x6f4ad0:c.instructions+=3;goto B6f4ad0;
case 0x6f4ad3:c.instructions+=2;goto B6f4ad3;
case 0x6f4ad6:c.instructions+=1;goto B6f4ad6;
case 0x6f4adc:goto L6f4adc;
case 0x6f4ade:c.instructions+=5;goto B6f4ade;
case 0x6f4ae3:c.instructions+=4;goto B6f4ae3;
case 0x6f4aea:c.instructions+=3;goto B6f4aea;
case 0x6f4aed:c.instructions+=2;goto B6f4aed;
case 0x6f4af4:c.instructions+=1;goto B6f4af4;
case 0x6f4af6:goto L6f4af6;
case 0x6f4af9:goto L6f4af9;
case 0x6f4afb:c.instructions+=1;goto B6f4afb;
case 0x6f4b01:goto L6f4b01;
case 0x6f4b07:c.instructions+=1;goto B6f4b07;
case 0x6f4b0d:goto L6f4b0d;
case 0x6f4b0f:c.instructions+=1;goto B6f4b0f;
case 0x6f4b15:goto L6f4b15;
case 0x6f4b1b:c.instructions+=1;goto B6f4b1b;
case 0x6f4b21:goto L6f4b21;
case 0x6f4b23:c.instructions+=3;goto B6f4b23;
case 0x6f4b26:c.instructions+=2;goto B6f4b26;
case 0x6f4b2b:c.instructions+=1;goto B6f4b2b;
case 0x6f4b31:goto L6f4b31;
case 0x6f4b33:c.instructions+=2;goto B6f4b33;
case 0x6f4b36:c.instructions+=1;goto B6f4b36;
case 0x6f4b3c:goto L6f4b3c;
case 0x6f4b3d:c.instructions+=1;goto B6f4b3d;
case 0x6f4b42:goto L6f4b42;
case 0x6f4b45:c.instructions+=1;goto B6f4b45;
case 0x6f4b48:goto L6f4b48;
case 0x6f4b4a:c.instructions+=2;goto B6f4b4a;
case 0x6f4b4d:c.instructions+=1;goto B6f4b4d;
case 0x6f4b4f:goto L6f4b4f;
case 0x6f4b50:c.instructions+=1;goto B6f4b50;
case 0x6f4b52:goto L6f4b52;
case 0x6f4b53:c.instructions+=1;goto B6f4b53;
case 0x6f4b55:goto L6f4b55;
case 0x6f4b58:c.instructions+=4;goto B6f4b58;
case 0x6f4b5b:c.instructions+=3;goto B6f4b5b;
case 0x6f4b5e:c.instructions+=2;goto B6f4b5e;
case 0x6f4b61:c.instructions+=1;goto B6f4b61;
case 0x6f4b63:goto L6f4b63;
case 0x6f4b66:c.instructions+=1;goto B6f4b66;
case 0x6f4b68:goto L6f4b68;
case 0x6f4b6b:c.instructions+=2;goto B6f4b6b;
case 0x6f4b6e:c.instructions+=1;goto B6f4b6e;
case 0x6f4b70:goto L6f4b70;
case 0x6f4b73:c.instructions+=2;goto B6f4b73;
case 0x6f4b75:c.instructions+=1;goto B6f4b75;
case 0x6f4b77:goto L6f4b77;
case 0x6f4b7a:c.instructions+=4;goto B6f4b7a;
case 0x6f4b7d:c.instructions+=3;goto B6f4b7d;
case 0x6f4b80:c.instructions+=2;goto B6f4b80;
case 0x6f4b83:c.instructions+=1;goto B6f4b83;
case 0x6f4b85:goto L6f4b85;
case 0x6f4b87:goto L6f4b87;
case 0x6f4b89:goto L6f4b89;
case 0x6f4b8c:c.instructions+=11;goto B6f4b8c;
case 0x6f4b8e:c.instructions+=10;goto B6f4b8e;
case 0x6f4b92:c.instructions+=9;goto B6f4b92;
case 0x6f4b95:c.instructions+=8;goto B6f4b95;
case 0x6f4b98:c.instructions+=7;goto B6f4b98;
case 0x6f4b9b:c.instructions+=6;goto B6f4b9b;
case 0x6f4b9d:c.instructions+=5;goto B6f4b9d;
case 0x6f4ba0:c.instructions+=4;goto B6f4ba0;
case 0x6f4ba2:c.instructions+=3;goto B6f4ba2;
case 0x6f4ba5:c.instructions+=2;goto B6f4ba5;
case 0x6f4ba8:c.instructions+=1;goto B6f4ba8;
case 0x6f4baa:goto L6f4baa;
case 0x6f4bab:c.instructions+=3;goto B6f4bab;
case 0x6f4bac:c.instructions+=2;goto B6f4bac;
case 0x6f4bad:c.instructions+=1;goto B6f4bad;
case 0x6f4bb2:goto L6f4bb2;
case 0x6f4bb5:c.instructions+=3;goto B6f4bb5;
case 0x6f4bb8:c.instructions+=2;goto B6f4bb8;
case 0x6f4bba:c.instructions+=1;goto B6f4bba;
case 0x6f4bbd:goto L6f4bbd;
case 0x6f4bc0:c.instructions+=1;goto B6f4bc0;
case 0x6f4bc2:goto L6f4bc2;
case 0x6f4bc4:c.instructions+=1;goto B6f4bc4;
case 0x6f4bc6:goto L6f4bc6;
case 0x6f4bc8:c.instructions+=3;goto B6f4bc8;
case 0x6f4bca:c.instructions+=2;goto B6f4bca;
case 0x6f4bcd:c.instructions+=1;goto B6f4bcd;
case 0x6f4bcf:goto L6f4bcf;
case 0x6f4bd4:goto L6f4bd4;
case 0x6f4bd7:c.instructions+=1;goto B6f4bd7;
case 0x6f4bd9:goto L6f4bd9;
case 0x6f4bde:goto L6f4bde;
case 0x6f4be1:c.instructions+=5;goto B6f4be1;
case 0x6f4be4:c.instructions+=4;goto B6f4be4;
case 0x6f4be5:c.instructions+=3;goto B6f4be5;
case 0x6f4be7:c.instructions+=2;goto B6f4be7;
case 0x6f4bea:c.instructions+=1;goto B6f4bea;
case 0x6f4bf0:goto L6f4bf0;
case 0x6f4bf3:c.instructions+=7;goto B6f4bf3;
case 0x6f4bf4:c.instructions+=6;goto B6f4bf4;
case 0x6f4bf5:c.instructions+=5;goto B6f4bf5;
case 0x6f4bf8:c.instructions+=4;goto B6f4bf8;
case 0x6f4bf9:c.instructions+=3;goto B6f4bf9;
case 0x6f4bfb:c.instructions+=2;goto B6f4bfb;
case 0x6f4bfc:c.instructions+=1;goto B6f4bfc;
case 0x6f4bfd:goto L6f4bfd;
case 0x6f4bfe:c.instructions+=6;goto B6f4bfe;
case 0x6f4bff:c.instructions+=5;goto B6f4bff;
case 0x6f4c01:c.instructions+=4;goto B6f4c01;
case 0x6f4c02:c.instructions+=3;goto B6f4c02;
case 0x6f4c04:c.instructions+=2;goto B6f4c04;
case 0x6f4c05:c.instructions+=1;goto B6f4c05;
case 0x6f4c10:goto L6f4c10;
case 0x6f4c11:c.instructions+=16;goto B6f4c11;
case 0x6f4c13:c.instructions+=15;goto B6f4c13;
case 0x6f4c16:c.instructions+=14;goto B6f4c16;
case 0x6f4c19:c.instructions+=13;goto B6f4c19;
case 0x6f4c1c:c.instructions+=12;goto B6f4c1c;
case 0x6f4c1d:c.instructions+=11;goto B6f4c1d;
case 0x6f4c22:c.instructions+=10;goto B6f4c22;
case 0x6f4c23:c.instructions+=9;goto B6f4c23;
case 0x6f4c24:c.instructions+=8;goto B6f4c24;
case 0x6f4c2b:c.instructions+=7;goto B6f4c2b;
case 0x6f4c2d:c.instructions+=6;goto B6f4c2d;
case 0x6f4c32:c.instructions+=5;goto B6f4c32;
case 0x6f4c39:c.instructions+=4;goto B6f4c39;
case 0x6f4c3c:c.instructions+=3;goto B6f4c3c;
case 0x6f4c3e:c.instructions+=2;goto B6f4c3e;
case 0x6f4c40:c.instructions+=1;goto B6f4c40;
case 0x6f4c42:goto L6f4c42;
case 0x6f4c45:c.instructions+=1;goto B6f4c45;
case 0x6f4c47:goto L6f4c47;
case 0x6f4c4a:c.instructions+=1;goto B6f4c4a;
case 0x6f4c4c:goto L6f4c4c;
case 0x6f4c4f:c.instructions+=1;goto B6f4c4f;
case 0x6f4c51:goto L6f4c51;
case 0x6f4c53:c.instructions+=5;goto B6f4c53;
case 0x6f4c56:c.instructions+=4;goto B6f4c56;
case 0x6f4c59:c.instructions+=3;goto B6f4c59;
case 0x6f4c5a:c.instructions+=2;goto B6f4c5a;
case 0x6f4c5f:c.instructions+=1;goto B6f4c5f;
case 0x6f4c61:goto L6f4c61;
case 0x6f4c66:goto L6f4c66;
case 0x6f4c69:c.instructions+=2;goto B6f4c69;
case 0x6f4c6b:c.instructions+=1;goto B6f4c6b;
case 0x6f4c6d:goto L6f4c6d;
case 0x6f4c70:c.instructions+=10;goto B6f4c70;
case 0x6f4c71:c.instructions+=9;goto B6f4c71;
case 0x6f4c74:c.instructions+=8;goto B6f4c74;
case 0x6f4c76:c.instructions+=7;goto B6f4c76;
case 0x6f4c77:c.instructions+=6;goto B6f4c77;
case 0x6f4c7a:c.instructions+=5;goto B6f4c7a;
case 0x6f4c7b:c.instructions+=4;goto B6f4c7b;
case 0x6f4c7e:c.instructions+=3;goto B6f4c7e;
case 0x6f4c7f:c.instructions+=2;goto B6f4c7f;
case 0x6f4c80:c.instructions+=1;goto B6f4c80;
case 0x6f4c81:goto L6f4c81;
case 0x6f4c82:c.instructions+=5;goto B6f4c82;
case 0x6f4c83:c.instructions+=4;goto B6f4c83;
case 0x6f4c86:c.instructions+=3;goto B6f4c86;
case 0x6f4c87:c.instructions+=2;goto B6f4c87;
case 0x6f4c88:c.instructions+=1;goto B6f4c88;
case 0x6f4c90:goto L6f4c90;
case 0x6f4c91:c.instructions+=8;goto B6f4c91;
case 0x6f4c93:c.instructions+=7;goto B6f4c93;
case 0x6f4c94:c.instructions+=6;goto B6f4c94;
case 0x6f4c95:c.instructions+=5;goto B6f4c95;
case 0x6f4c98:c.instructions+=4;goto B6f4c98;
case 0x6f4c9b:c.instructions+=3;goto B6f4c9b;
case 0x6f4c9d:c.instructions+=2;goto B6f4c9d;
case 0x6f4c9f:c.instructions+=1;goto B6f4c9f;
case 0x6f4ca1:goto L6f4ca1;
case 0x6f4ca2:c.instructions+=1;goto B6f4ca2;
case 0x6f4ca7:goto L6f4ca7;
case 0x6f4caa:c.instructions+=1;goto B6f4caa;
case 0x6f4cac:goto L6f4cac;
case 0x6f4cad:c.instructions+=3;goto B6f4cad;
case 0x6f4cb0:c.instructions+=2;goto B6f4cb0;
case 0x6f4cb3:c.instructions+=1;goto B6f4cb3;
case 0x6f4cb5:goto L6f4cb5;
case 0x6f4cb7:c.instructions+=1;goto B6f4cb7;
case 0x6f4cb9:goto L6f4cb9;
case 0x6f4cbc:c.instructions+=2;goto B6f4cbc;
case 0x6f4cbe:c.instructions+=1;goto B6f4cbe;
case 0x6f4cc0:goto L6f4cc0;
case 0x6f4cc3:c.instructions+=1;goto B6f4cc3;
case 0x6f4cc6:goto L6f4cc6;
case 0x6f4cc7:c.instructions+=1;goto B6f4cc7;
case 0x6f4ccc:goto L6f4ccc;
case 0x6f4ccf:c.instructions+=1;goto B6f4ccf;
case 0x6f4cd1:goto L6f4cd1;
case 0x6f4cd4:c.instructions+=1;goto B6f4cd4;
case 0x6f4cd6:goto L6f4cd6;
case 0x6f4cd8:c.instructions+=1;goto B6f4cd8;
case 0x6f4cda:goto L6f4cda;
case 0x6f4cdd:c.instructions+=1;goto B6f4cdd;
case 0x6f4ce0:goto L6f4ce0;
case 0x6f4ce3:goto L6f4ce3;
case 0x6f4ce6:c.instructions+=1;goto B6f4ce6;
case 0x6f4ce8:goto L6f4ce8;
case 0x6f4cea:c.instructions+=1;goto B6f4cea;
case 0x6f4cec:goto L6f4cec;
case 0x6f4cef:c.instructions+=1;goto B6f4cef;
case 0x6f4cf2:goto L6f4cf2;
case 0x6f4cf8:c.instructions+=2;goto B6f4cf8;
case 0x6f4cfc:c.instructions+=1;goto B6f4cfc;
case 0x6f4d00:goto L6f4d00;
case 0x6f4d02:c.instructions+=1;goto B6f4d02;
case 0x6f4d04:goto L6f4d04;
case 0x6f4d06:c.instructions+=1;goto B6f4d06;
case 0x6f4d08:goto L6f4d08;
case 0x6f4d09:c.instructions+=2;goto B6f4d09;
case 0x6f4d0c:c.instructions+=1;goto B6f4d0c;
case 0x6f4d0f:goto L6f4d0f;
case 0x6f4d15:c.instructions+=1;goto B6f4d15;
case 0x6f4d19:goto L6f4d19;
case 0x6f4d1c:c.instructions+=2;goto B6f4d1c;
case 0x6f4d1d:c.instructions+=1;goto B6f4d1d;
case 0x6f4d1f:goto L6f4d1f;
case 0x6f4d21:c.instructions+=1;goto B6f4d21;
case 0x6f4d23:goto L6f4d23;
case 0x6f4d24:c.instructions+=2;goto B6f4d24;
case 0x6f4d27:c.instructions+=1;goto B6f4d27;
case 0x6f4d2a:goto L6f4d2a;
case 0x6f4d30:c.instructions+=5;goto B6f4d30;
case 0x6f4d31:c.instructions+=4;goto B6f4d31;
case 0x6f4d35:c.instructions+=3;goto B6f4d35;
case 0x6f4d36:c.instructions+=2;goto B6f4d36;
case 0x6f4d37:c.instructions+=1;goto B6f4d37;
case 0x6f4d38:goto L6f4d38;
case 0x6f4d39:c.instructions+=4;goto B6f4d39;
case 0x6f4d3b:c.instructions+=3;goto B6f4d3b;
case 0x6f4d3c:c.instructions+=2;goto B6f4d3c;
case 0x6f4d3d:c.instructions+=1;goto B6f4d3d;
case 0x6f4d40:goto L6f4d40;
case 0x6f4d41:c.instructions+=46;goto B6f4d41;
case 0x6f4d43:c.instructions+=45;goto B6f4d43;
case 0x6f4d45:c.instructions+=44;goto B6f4d45;
case 0x6f4d4a:c.instructions+=43;goto B6f4d4a;
case 0x6f4d4f:c.instructions+=42;goto B6f4d4f;
case 0x6f4d51:c.instructions+=41;goto B6f4d51;
case 0x6f4d53:c.instructions+=40;goto B6f4d53;
case 0x6f4d58:c.instructions+=39;goto B6f4d58;
case 0x6f4d59:c.instructions+=38;goto B6f4d59;
case 0x6f4d5c:c.instructions+=37;goto B6f4d5c;
case 0x6f4d5d:c.instructions+=36;goto B6f4d5d;
case 0x6f4d60:c.instructions+=35;goto B6f4d60;
case 0x6f4d63:c.instructions+=34;goto B6f4d63;
case 0x6f4d66:c.instructions+=33;goto B6f4d66;
case 0x6f4d67:c.instructions+=32;goto B6f4d67;
case 0x6f4d6a:c.instructions+=31;goto B6f4d6a;
case 0x6f4d6d:c.instructions+=30;goto B6f4d6d;
case 0x6f4d6f:c.instructions+=29;goto B6f4d6f;
case 0x6f4d71:c.instructions+=28;goto B6f4d71;
case 0x6f4d74:c.instructions+=27;goto B6f4d74;
case 0x6f4d7a:c.instructions+=26;goto B6f4d7a;
case 0x6f4d7c:c.instructions+=25;goto B6f4d7c;
case 0x6f4d7f:c.instructions+=24;goto B6f4d7f;
case 0x6f4d82:c.instructions+=23;goto B6f4d82;
case 0x6f4d83:c.instructions+=22;goto B6f4d83;
case 0x6f4d84:c.instructions+=21;goto B6f4d84;
case 0x6f4d87:c.instructions+=20;goto B6f4d87;
case 0x6f4d8a:c.instructions+=19;goto B6f4d8a;
case 0x6f4d8c:c.instructions+=18;goto B6f4d8c;
case 0x6f4d8e:c.instructions+=17;goto B6f4d8e;
case 0x6f4d90:c.instructions+=16;goto B6f4d90;
case 0x6f4d93:c.instructions+=15;goto B6f4d93;
case 0x6f4d98:c.instructions+=14;goto B6f4d98;
case 0x6f4d9b:c.instructions+=13;goto B6f4d9b;
case 0x6f4d9e:c.instructions+=12;goto B6f4d9e;
case 0x6f4d9f:c.instructions+=11;goto B6f4d9f;
case 0x6f4da0:c.instructions+=10;goto B6f4da0;
case 0x6f4da3:c.instructions+=9;goto B6f4da3;
case 0x6f4da6:c.instructions+=8;goto B6f4da6;
case 0x6f4da8:c.instructions+=7;goto B6f4da8;
case 0x6f4daa:c.instructions+=6;goto B6f4daa;
case 0x6f4dac:c.instructions+=5;goto B6f4dac;
case 0x6f4daf:c.instructions+=4;goto B6f4daf;
case 0x6f4db2:c.instructions+=3;goto B6f4db2;
case 0x6f4db5:c.instructions+=2;goto B6f4db5;
case 0x6f4db6:c.instructions+=1;goto B6f4db6;
case 0x6f4dc0:goto L6f4dc0;
case 0x6f4dc1:c.instructions+=7;goto B6f4dc1;
case 0x6f4dc3:c.instructions+=6;goto B6f4dc3;
case 0x6f4dc4:c.instructions+=5;goto B6f4dc4;
case 0x6f4dc5:c.instructions+=4;goto B6f4dc5;
case 0x6f4dc8:c.instructions+=3;goto B6f4dc8;
case 0x6f4dc9:c.instructions+=2;goto B6f4dc9;
case 0x6f4dcb:c.instructions+=1;goto B6f4dcb;
case 0x6f4dd0:goto L6f4dd0;
case 0x6f4dd3:c.instructions+=22;goto B6f4dd3;
case 0x6f4dd5:c.instructions+=21;goto B6f4dd5;
case 0x6f4dd9:c.instructions+=20;goto B6f4dd9;
case 0x6f4ddb:c.instructions+=19;goto B6f4ddb;
case 0x6f4ddd:c.instructions+=18;goto B6f4ddd;
case 0x6f4de0:c.instructions+=17;goto B6f4de0;
case 0x6f4de5:c.instructions+=16;goto B6f4de5;
case 0x6f4dec:c.instructions+=15;goto B6f4dec;
case 0x6f4def:c.instructions+=14;goto B6f4def;
case 0x6f4df2:c.instructions+=13;goto B6f4df2;
case 0x6f4df5:c.instructions+=12;goto B6f4df5;
case 0x6f4df6:c.instructions+=11;goto B6f4df6;
case 0x6f4df7:c.instructions+=10;goto B6f4df7;
case 0x6f4dfd:c.instructions+=9;goto B6f4dfd;
case 0x6f4e00:c.instructions+=8;goto B6f4e00;
case 0x6f4e02:c.instructions+=7;goto B6f4e02;
case 0x6f4e08:c.instructions+=6;goto B6f4e08;
case 0x6f4e0d:c.instructions+=5;goto B6f4e0d;
case 0x6f4e0f:c.instructions+=4;goto B6f4e0f;
case 0x6f4e11:c.instructions+=3;goto B6f4e11;
case 0x6f4e17:c.instructions+=2;goto B6f4e17;
case 0x6f4e19:c.instructions+=1;goto B6f4e19;
case 0x6f4e1e:goto L6f4e1e;
case 0x6f4e21:c.instructions+=5;goto B6f4e21;
case 0x6f4e23:c.instructions+=4;goto B6f4e23;
case 0x6f4e26:c.instructions+=3;goto B6f4e26;
case 0x6f4e29:c.instructions+=2;goto B6f4e29;
case 0x6f4e2b:c.instructions+=1;goto B6f4e2b;
case 0x6f4e2d:goto L6f4e2d;
case 0x6f4e2e:c.instructions+=5;goto B6f4e2e;
case 0x6f4e31:c.instructions+=4;goto B6f4e31;
case 0x6f4e34:c.instructions+=3;goto B6f4e34;
case 0x6f4e35:c.instructions+=2;goto B6f4e35;
case 0x6f4e36:c.instructions+=1;goto B6f4e36;
case 0x6f4e39:goto L6f4e39;
case 0x6f4e3b:c.instructions+=6;goto B6f4e3b;
case 0x6f4e3c:c.instructions+=5;goto B6f4e3c;
case 0x6f4e3f:c.instructions+=4;goto B6f4e3f;
case 0x6f4e42:c.instructions+=3;goto B6f4e42;
case 0x6f4e43:c.instructions+=2;goto B6f4e43;
case 0x6f4e44:c.instructions+=1;goto B6f4e44;
case 0x6f4e50:goto L6f4e50;
case 0x6f4e51:c.instructions+=6;goto B6f4e51;
case 0x6f4e53:c.instructions+=5;goto B6f4e53;
case 0x6f4e54:c.instructions+=4;goto B6f4e54;
case 0x6f4e57:c.instructions+=3;goto B6f4e57;
case 0x6f4e58:c.instructions+=2;goto B6f4e58;
case 0x6f4e59:c.instructions+=1;goto B6f4e59;
case 0x6f4e5e:goto L6f4e5e;
case 0x6f4e61:c.instructions+=15;goto B6f4e61;
case 0x6f4e64:c.instructions+=14;goto B6f4e64;
case 0x6f4e67:c.instructions+=13;goto B6f4e67;
case 0x6f4e6a:c.instructions+=12;goto B6f4e6a;
case 0x6f4e6d:c.instructions+=11;goto B6f4e6d;
case 0x6f4e70:c.instructions+=10;goto B6f4e70;
case 0x6f4e73:c.instructions+=9;goto B6f4e73;
case 0x6f4e75:c.instructions+=8;goto B6f4e75;
case 0x6f4e78:c.instructions+=7;goto B6f4e78;
case 0x6f4e7b:c.instructions+=6;goto B6f4e7b;
case 0x6f4e7d:c.instructions+=5;goto B6f4e7d;
case 0x6f4e7e:c.instructions+=4;goto B6f4e7e;
case 0x6f4e81:c.instructions+=3;goto B6f4e81;
case 0x6f4e82:c.instructions+=2;goto B6f4e82;
case 0x6f4e85:c.instructions+=1;goto B6f4e85;
case 0x6f4e87:goto L6f4e87;
case 0x6f4e8a:c.instructions+=2;goto B6f4e8a;
case 0x6f4e8b:c.instructions+=1;goto B6f4e8b;
case 0x6f4e8e:goto L6f4e8e;
case 0x6f4e90:c.instructions+=3;goto B6f4e90;
case 0x6f4e93:c.instructions+=2;goto B6f4e93;
case 0x6f4e94:c.instructions+=1;goto B6f4e94;
case 0x6f4ea0:goto L6f4ea0;
case 0x6f4ea1:c.instructions+=5;goto B6f4ea1;
case 0x6f4ea3:c.instructions+=4;goto B6f4ea3;
case 0x6f4ea4:c.instructions+=3;goto B6f4ea4;
case 0x6f4ea7:c.instructions+=2;goto B6f4ea7;
case 0x6f4ea8:c.instructions+=1;goto B6f4ea8;
case 0x6f4ead:goto L6f4ead;
case 0x6f4eb0:c.instructions+=15;goto B6f4eb0;
case 0x6f4eb3:c.instructions+=14;goto B6f4eb3;
case 0x6f4eb6:c.instructions+=13;goto B6f4eb6;
case 0x6f4eb9:c.instructions+=12;goto B6f4eb9;
case 0x6f4ebc:c.instructions+=11;goto B6f4ebc;
case 0x6f4ebf:c.instructions+=10;goto B6f4ebf;
case 0x6f4ec2:c.instructions+=9;goto B6f4ec2;
case 0x6f4ec8:c.instructions+=8;goto B6f4ec8;
case 0x6f4ecb:c.instructions+=7;goto B6f4ecb;
case 0x6f4ece:c.instructions+=6;goto B6f4ece;
case 0x6f4ed5:c.instructions+=5;goto B6f4ed5;
case 0x6f4ed8:c.instructions+=4;goto B6f4ed8;
case 0x6f4eda:c.instructions+=3;goto B6f4eda;
case 0x6f4edc:c.instructions+=2;goto B6f4edc;
case 0x6f4ee3:c.instructions+=1;goto B6f4ee3;
case 0x6f4ee5:goto L6f4ee5;
case 0x6f4ee8:c.instructions+=4;goto B6f4ee8;
case 0x6f4eeb:c.instructions+=3;goto B6f4eeb;
case 0x6f4eec:c.instructions+=2;goto B6f4eec;
case 0x6f4eed:c.instructions+=1;goto B6f4eed;
case 0x6f4ef0:goto L6f4ef0;
case 0x6f4ef2:c.instructions+=6;goto B6f4ef2;
case 0x6f4ef5:c.instructions+=5;goto B6f4ef5;
case 0x6f4ef8:c.instructions+=4;goto B6f4ef8;
case 0x6f4efb:c.instructions+=3;goto B6f4efb;
case 0x6f4efc:c.instructions+=2;goto B6f4efc;
case 0x6f4efd:c.instructions+=1;goto B6f4efd;
case 0x6f4f00:goto L6f4f00;
case 0x6f4f01:c.instructions+=5;goto B6f4f01;
case 0x6f4f03:c.instructions+=4;goto B6f4f03;
case 0x6f4f04:c.instructions+=3;goto B6f4f04;
case 0x6f4f07:c.instructions+=2;goto B6f4f07;
case 0x6f4f08:c.instructions+=1;goto B6f4f08;
case 0x6f4f0d:goto L6f4f0d;
case 0x6f4f13:c.instructions+=5;goto B6f4f13;
case 0x6f4f16:c.instructions+=4;goto B6f4f16;
case 0x6f4f18:c.instructions+=3;goto B6f4f18;
case 0x6f4f1a:c.instructions+=2;goto B6f4f1a;
case 0x6f4f1d:c.instructions+=1;goto B6f4f1d;
case 0x6f4f1f:goto L6f4f1f;
case 0x6f4f22:c.instructions+=2;goto B6f4f22;
case 0x6f4f25:c.instructions+=1;goto B6f4f25;
case 0x6f4f27:goto L6f4f27;
case 0x6f4f29:c.instructions+=2;goto B6f4f29;
case 0x6f4f2c:c.instructions+=1;goto B6f4f2c;
case 0x6f4f2f:goto L6f4f2f;
case 0x6f4f32:c.instructions+=2;goto B6f4f32;
case 0x6f4f34:c.instructions+=1;goto B6f4f34;
case 0x6f4f36:goto L6f4f36;
case 0x6f4f37:c.instructions+=4;goto B6f4f37;
case 0x6f4f39:c.instructions+=3;goto B6f4f39;
case 0x6f4f3e:c.instructions+=2;goto B6f4f3e;
case 0x6f4f3f:c.instructions+=1;goto B6f4f3f;
case 0x6f4f44:goto L6f4f44;
case 0x6f4f47:c.instructions+=3;goto B6f4f47;
case 0x6f4f48:c.instructions+=2;goto B6f4f48;
case 0x6f4f49:c.instructions+=1;goto B6f4f49;
case 0x6f4f4c:goto L6f4f4c;
case 0x6f4f4d:c.instructions+=4;goto B6f4f4d;
case 0x6f4f4f:c.instructions+=3;goto B6f4f4f;
case 0x6f4f54:c.instructions+=2;goto B6f4f54;
case 0x6f4f55:c.instructions+=1;goto B6f4f55;
case 0x6f4f5a:goto L6f4f5a;
case 0x6f4f5d:c.instructions+=3;goto B6f4f5d;
case 0x6f4f5e:c.instructions+=2;goto B6f4f5e;
case 0x6f4f5f:c.instructions+=1;goto B6f4f5f;
case 0x6f4f70:goto L6f4f70;
case 0x6f4f71:c.instructions+=8;goto B6f4f71;
case 0x6f4f73:c.instructions+=7;goto B6f4f73;
case 0x6f4f76:c.instructions+=6;goto B6f4f76;
case 0x6f4f78:c.instructions+=5;goto B6f4f78;
case 0x6f4f7d:c.instructions+=4;goto B6f4f7d;
case 0x6f4f84:c.instructions+=3;goto B6f4f84;
case 0x6f4f86:c.instructions+=2;goto B6f4f86;
case 0x6f4f89:c.instructions+=1;goto B6f4f89;
case 0x6f4f8b:goto L6f4f8b;
case 0x6f4f8c:c.instructions+=1;goto B6f4f8c;
case 0x6f4f8e:goto L6f4f8e;
case 0x6f4f8f:c.instructions+=1;goto B6f4f8f;
case 0x6f4f91:goto L6f4f91;
case 0x6f4f94:c.instructions+=1;goto B6f4f94;
case 0x6f4f96:goto L6f4f96;
case 0x6f4f99:c.instructions+=2;goto B6f4f99;
case 0x6f4f9c:c.instructions+=1;goto B6f4f9c;
case 0x6f4f9e:goto L6f4f9e;
case 0x6f4fa5:c.instructions+=1;goto B6f4fa5;
case 0x6f4fac:goto L6f4fac;
case 0x6f4fae:c.instructions+=2;goto B6f4fae;
case 0x6f4faf:c.instructions+=1;goto B6f4faf;
case 0x6f4fb0:goto L6f4fb0;
case 0x6f4fb2:c.instructions+=2;goto B6f4fb2;
case 0x6f4fb3:c.instructions+=1;goto B6f4fb3;
case 0x6f4fe0:goto L6f4fe0;
case 0x6f4fe1:c.instructions+=8;goto B6f4fe1;
case 0x6f4fe3:c.instructions+=7;goto B6f4fe3;
case 0x6f4fe4:c.instructions+=6;goto B6f4fe4;
case 0x6f4fe5:c.instructions+=5;goto B6f4fe5;
case 0x6f4fe6:c.instructions+=4;goto B6f4fe6;
case 0x6f4fe9:c.instructions+=3;goto B6f4fe9;
case 0x6f4fea:c.instructions+=2;goto B6f4fea;
case 0x6f4fec:c.instructions+=1;goto B6f4fec;
case 0x6f4ff1:goto L6f4ff1;
case 0x6f4ff4:c.instructions+=4;goto B6f4ff4;
case 0x6f4ff6:c.instructions+=3;goto B6f4ff6;
case 0x6f4ffa:c.instructions+=2;goto B6f4ffa;
case 0x6f4ffd:c.instructions+=1;goto B6f4ffd;
default:missing_instruction(c.pc);}
B6f4005:L6f4005:{c.instructions+=10;NFSU2_TR(0x6f4005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f4007:{NFSU2_TR(0x6f4007);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4008:{NFSU2_TR(0x6f4008);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f400a:{NFSU2_TR(0x6f400a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f400c:{NFSU2_TR(0x6f400c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f400d:{NFSU2_TR(0x6f400d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4013:{NFSU2_TR(0x6f4013);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4015:{NFSU2_TR(0x6f4015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4016:{NFSU2_TR(0x6f4016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4017:{NFSU2_TR(0x6f4017);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f401aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f401a:L6f401a:{c.instructions+=2;NFSU2_TR(0x6f401a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f401c:{NFSU2_TR(0x6f401c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4020;}}
}
B6f401e:L6f401e:{c.instructions+=1;NFSU2_TR(0x6f401e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6f4020:L6f4020:{c.instructions+=4;NFSU2_TR(0x6f4020);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f4023:{NFSU2_TR(0x6f4023);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6f4026:{NFSU2_TR(0x6f4026);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x813a98ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x813a98ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x813a98ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f402c:{NFSU2_TR(0x6f402c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f3ff3u,6f3);}
}
B6f402e:L6f402e:{c.instructions+=5;NFSU2_TR(0x6f402e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f402f:{NFSU2_TR(0x6f402f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4030:{NFSU2_TR(0x6f4030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4031:{NFSU2_TR(0x6f4031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4032:{NFSU2_TR(0x6f4032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4040:L6f4040:{c.instructions+=7;NFSU2_TR(0x6f4040);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f4046:{NFSU2_TR(0x6f4046);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4047:{NFSU2_TR(0x6f4047);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f4049:{NFSU2_TR(0x6f4049);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f404c:{NFSU2_TR(0x6f404c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f404d:{NFSU2_TR(0x6f404d);
w4(R+28,u32(0x1ull));
}
B6f4052:{NFSU2_TR(0x6f4052);
if(r1(R+518)){{goto L6f4061;}}
}
B6f4054:L6f4054:{c.instructions+=2;NFSU2_TR(0x6f4054);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6f405b:{NFSU2_TR(0x6f405b);
if(r1(R+518)){{goto L6f4061;}}
}
B6f405d:L6f405d:{c.instructions+=2;NFSU2_TR(0x6f405d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f405f:{NFSU2_TR(0x6f405f);
{goto L6f4063;}
}
B6f4061:L6f4061:{c.instructions+=1;NFSU2_TR(0x6f4061);
__builtin_memmove((R+4),(R+28),4);
}
B6f4063:L6f4063:{c.instructions+=12;NFSU2_TR(0x6f4063);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4069:{NFSU2_TR(0x6f4069);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f406c:{NFSU2_TR(0x6f406c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B6f406e:{NFSU2_TR(0x6f406e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x10ull))));
}
B6f4071:{NFSU2_TR(0x6f4071);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B6f4073:{NFSU2_TR(0x6f4073);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4079:{NFSU2_TR(0x6f4079);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f407a:{NFSU2_TR(0x6f407a);
__builtin_memmove((R+20),(R+4),4);
}
B6f407c:{NFSU2_TR(0x6f407c);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff0000ull))));
}
B6f4082:{NFSU2_TR(0x6f4082);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10de0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4088:{NFSU2_TR(0x6f4088);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f408e:{NFSU2_TR(0x6f408e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f40ac;}}
}
B6f4090:L6f4090:{c.instructions+=4;NFSU2_TR(0x6f4090);
__builtin_memmove((R+20),(R+4),4);
}
B6f4092:{NFSU2_TR(0x6f4092);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffffull))));
}
B6f4098:{NFSU2_TR(0x6f4098);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
}
B6f409e:{NFSU2_TR(0x6f409e);
if(r1(R+512)){{goto L6f40ac;}}
}
B6f40a0:L6f40a0:{c.instructions+=2;NFSU2_TR(0x6f40a0);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x80ull))));
}
B6f40a6:{NFSU2_TR(0x6f40a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f40ac:L6f40ac:{c.instructions+=3;NFSU2_TR(0x6f40ac);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10de002full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10de002full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f40b2:{NFSU2_TR(0x6f40b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f40b3:{NFSU2_TR(0x6f40b3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f41da;}}
}
B6f40b9:L6f40b9:{c.instructions+=2;NFSU2_TR(0x6f40b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10de0028ull))));
}
B6f40bf:{NFSU2_TR(0x6f40bf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f4250;}}
}
B6f40c5:L6f40c5:{c.instructions+=2;NFSU2_TR(0x6f40c5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10025144ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10025144ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f40cb:{NFSU2_TR(0x6f40cb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4142;}}
}
B6f40cd:L6f40cd:{c.instructions+=1;NFSU2_TR(0x6f40cd);
if(r1(R+518)){{goto L6f416c;}}
}
B6f40d3:L6f40d3:{c.instructions+=2;NFSU2_TR(0x6f40d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10024c42ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10024c42ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f40d9:{NFSU2_TR(0x6f40d9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f411d;}}
}
B6f40db:L6f40db:{c.instructions+=1;NFSU2_TR(0x6f40db);
if(r1(R+518)){{goto L6f437a;}}
}
B6f40e1:L6f40e1:{c.instructions+=2;NFSU2_TR(0x6f40e1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10024744ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10024744ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f40e7:{NFSU2_TR(0x6f40e7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f410c;}}
}
B6f40e9:L6f40e9:{c.instructions+=1;NFSU2_TR(0x6f40e9);
if(r1(R+518)){{goto L6f437a;}}
}
B6f40ef:L6f40ef:{c.instructions+=2;NFSU2_TR(0x6f40ef);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3d00d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3d00d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3d00d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f40f5:{NFSU2_TR(0x6f40f5);
if(r1(R+518)){{goto L6f4224;}}
}
B6f40fb:L6f40fb:{c.instructions+=2;NFSU2_TR(0x6f40fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10024742ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4101:{NFSU2_TR(0x6f4101);
if(r1(R+518)){{goto L6f437a;}}
}
B6f4107:L6f4107:{c.instructions+=1;NFSU2_TR(0x6f4107);
{goto L6f432a;}
}
B6f410c:L6f410c:{c.instructions+=2;NFSU2_TR(0x6f410c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10024749ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4112:{NFSU2_TR(0x6f4112);
if(r1(R+518)){{goto L6f437a;}}
}
B6f4118:L6f4118:{c.instructions+=1;NFSU2_TR(0x6f4118);
{goto L6f432a;}
}
B6f411d:L6f411d:{c.instructions+=3;NFSU2_TR(0x6f411d);
__builtin_memmove((R+8),(R+4),4);
}
B6f411f:{NFSU2_TR(0x6f411f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x10024c44ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6f4125:{NFSU2_TR(0x6f4125);
if(r1(R+518)){{goto L6f437a;}}
}
B6f412b:L6f412b:{c.instructions+=2;NFSU2_TR(0x6f412b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6f412e:{NFSU2_TR(0x6f412e);
if(r1(R+518)){{goto L6f437a;}}
}
B6f4134:L6f4134:{c.instructions+=2;NFSU2_TR(0x6f4134);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6f4137:{NFSU2_TR(0x6f4137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f413d:L6f413d:{c.instructions+=1;NFSU2_TR(0x6f413d);
{goto L6f437a;}
}
B6f4142:L6f4142:{c.instructions+=2;NFSU2_TR(0x6f4142);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10330046ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10330046ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4148:{NFSU2_TR(0x6f4148);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f41a5;}}
}
B6f414a:L6f414a:{c.instructions+=1;NFSU2_TR(0x6f414a);
if(r1(R+518)){{goto L6f418d;}}
}
B6f414c:L6f414c:{c.instructions+=2;NFSU2_TR(0x6f414c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x102b0521ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x102b0521ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4152:{NFSU2_TR(0x6f4152);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4181;}}
}
B6f4154:L6f4154:{c.instructions+=2;NFSU2_TR(0x6f4154);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x102b0520ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x102b0520ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x102b0520ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f415a:{NFSU2_TR(0x6f415a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f43be;}}
}
B6f4160:L6f4160:{c.instructions+=2;NFSU2_TR(0x6f4160);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10025157ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4166:{NFSU2_TR(0x6f4166);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f416c:L6f416c:{c.instructions+=6;NFSU2_TR(0x6f416c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4172:{NFSU2_TR(0x6f4172);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffeffeffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4178:{NFSU2_TR(0x6f4178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4179:{NFSU2_TR(0x6f4179);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f417f:{NFSU2_TR(0x6f417f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4180:{NFSU2_TR(0x6f4180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4181:L6f4181:{c.instructions+=2;NFSU2_TR(0x6f4181);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1033002aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4187:{NFSU2_TR(0x6f4187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f418d:L6f418d:{c.instructions+=7;NFSU2_TR(0x6f418d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4193:{NFSU2_TR(0x6f4193);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4199:{NFSU2_TR(0x6f4199);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f419c:{NFSU2_TR(0x6f419c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f419d:{NFSU2_TR(0x6f419d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f41a3:{NFSU2_TR(0x6f41a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f41a4:{NFSU2_TR(0x6f41a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f41a5:L6f41a5:{c.instructions+=2;NFSU2_TR(0x6f41a5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x10396326ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10396326ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10396326ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f41ab:{NFSU2_TR(0x6f41ab);
if(r1(R+518)){{goto L6f43be;}}
}
B6f41b1:L6f41b1:{c.instructions+=2;NFSU2_TR(0x6f41b1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104c3d07ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f41b7:{NFSU2_TR(0x6f41b7);
if(r1(R+518)){{goto L6f42aa;}}
}
B6f41bd:L6f41bd:{c.instructions+=2;NFSU2_TR(0x6f41bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10de0020ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f41c3:{NFSU2_TR(0x6f41c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f41c9:L6f41c9:{c.instructions+=6;NFSU2_TR(0x6f41c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f41cf:{NFSU2_TR(0x6f41cf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f41d1:{NFSU2_TR(0x6f41d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f41d2:{NFSU2_TR(0x6f41d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f41d8:{NFSU2_TR(0x6f41d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f41d9:{NFSU2_TR(0x6f41d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f41da:L6f41da:{c.instructions+=2;NFSU2_TR(0x6f41da);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3d3d000aull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3d3d000aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f41e0:{NFSU2_TR(0x6f41e0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f42bc;}}
}
B6f41e6:L6f41e6:{c.instructions+=1;NFSU2_TR(0x6f41e6);
if(r1(R+518)){{goto L6f4250;}}
}
B6f41e8:L6f41e8:{c.instructions+=2;NFSU2_TR(0x6f41e8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x121a0003ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x121a0003ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x121a0003ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f41ee:{NFSU2_TR(0x6f41ee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4261;}}
}
B6f41f0:L6f41f0:{c.instructions+=1;NFSU2_TR(0x6f41f0);
if(r1(R+518)){{goto L6f43be;}}
}
B6f41f6:L6f41f6:{c.instructions+=2;NFSU2_TR(0x6f41f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x121a0001ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x121a0001ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f41fc:{NFSU2_TR(0x6f41fc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4244;}}
}
B6f41fe:L6f41fe:{c.instructions+=1;NFSU2_TR(0x6f41fe);
if(r1(R+518)){{goto L6f422d;}}
}
B6f4200:L6f4200:{c.instructions+=2;NFSU2_TR(0x6f4200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10de0100ull))));
}
B6f4206:{NFSU2_TR(0x6f4206);
if(r1(R+512)){{goto L6f432a;}}
}
B6f420c:L6f420c:{c.instructions+=2;NFSU2_TR(0x6f420c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x10de0103ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10de0103ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10de0103ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4212:{NFSU2_TR(0x6f4212);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f43be;}}
}
B6f4218:L6f4218:{c.instructions+=2;NFSU2_TR(0x6f4218);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x110b0004ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x110b0004ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x110b0004ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f421e:{NFSU2_TR(0x6f421e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f4224:L6f4224:{c.instructions+=4;NFSU2_TR(0x6f4224);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f422a:{NFSU2_TR(0x6f422a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f422b:{NFSU2_TR(0x6f422b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f422c:{NFSU2_TR(0x6f422c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f422d:L6f422d:{c.instructions+=7;NFSU2_TR(0x6f422d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4233:{NFSU2_TR(0x6f4233);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4239:{NFSU2_TR(0x6f4239);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f423b:{NFSU2_TR(0x6f423b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f423c:{NFSU2_TR(0x6f423c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4242:{NFSU2_TR(0x6f4242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4243:{NFSU2_TR(0x6f4243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4244:L6f4244:{c.instructions+=2;NFSU2_TR(0x6f4244);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x121a0002ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f424a:{NFSU2_TR(0x6f424a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f4250:L6f4250:{c.instructions+=6;NFSU2_TR(0x6f4250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4256:{NFSU2_TR(0x6f4256);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4258:{NFSU2_TR(0x6f4258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4259:{NFSU2_TR(0x6f4259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f425f:{NFSU2_TR(0x6f425f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4260:{NFSU2_TR(0x6f4260);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4261:L6f4261:{c.instructions+=2;NFSU2_TR(0x6f4261);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x12d20019ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12d20019ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4267:{NFSU2_TR(0x6f4267);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f429e;}}
}
B6f4269:L6f4269:{c.instructions+=2;NFSU2_TR(0x6f4269);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x12d20018ull))));
}
B6f426f:{NFSU2_TR(0x6f426f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f428c;}}
}
B6f4271:L6f4271:{c.instructions+=2;NFSU2_TR(0x6f4271);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x121a0004ull))));
}
B6f4277:{NFSU2_TR(0x6f4277);
if(r1(R+512)){{goto L6f432a;}}
}
B6f427d:L6f427d:{c.instructions+=2;NFSU2_TR(0x6f427d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x121a0005ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x121a0005ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x121a0005ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4283:{NFSU2_TR(0x6f4283);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f432a;}}
}
B6f4289:L6f4289:{c.instructions+=3;NFSU2_TR(0x6f4289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f428a:{NFSU2_TR(0x6f428a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f428b:{NFSU2_TR(0x6f428b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f428c:L6f428c:{c.instructions+=3;NFSU2_TR(0x6f428c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4292:{NFSU2_TR(0x6f4292);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x30ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f4299:{NFSU2_TR(0x6f4299);
{goto L6f4380;}
}
B6f429e:L6f429e:{c.instructions+=2;NFSU2_TR(0x6f429e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3d3d0009ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f42a4:{NFSU2_TR(0x6f42a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f42aa:L6f42aa:{c.instructions+=3;NFSU2_TR(0x6f42aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f42b0:{NFSU2_TR(0x6f42b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6f42b7:{NFSU2_TR(0x6f42b7);
{goto L6f4380;}
}
B6f42bc:L6f42bc:{c.instructions+=2;NFSU2_TR(0x6f42bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x53338a21ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x53338a21ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f42c2:{NFSU2_TR(0x6f42c2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f430a;}}
}
B6f42c4:L6f42c4:{c.instructions+=2;NFSU2_TR(0x6f42c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x53338a20ull))));
}
B6f42ca:{NFSU2_TR(0x6f42ca);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f42f5;}}
}
B6f42cc:L6f42cc:{c.instructions+=2;NFSU2_TR(0x6f42cc);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x53335631ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x53335631ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x53335631ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f42d2:{NFSU2_TR(0x6f42d2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4224u);}goto L6f4224;}}
}
B6f42d8:L6f42d8:{c.instructions+=2;NFSU2_TR(0x6f42d8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x5333883dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5333883dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5333883dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f42de:{NFSU2_TR(0x6f42de);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4224u);}goto L6f4224;}}
}
B6f42e4:L6f42e4:{c.instructions+=2;NFSU2_TR(0x6f42e4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x53338a01ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x53338a01ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x53338a01ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f42ea:{NFSU2_TR(0x6f42ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f432a;}}
}
B6f42ec:L6f42ec:{c.instructions+=4;NFSU2_TR(0x6f42ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f42f2:{NFSU2_TR(0x6f42f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f42f3:{NFSU2_TR(0x6f42f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f42f4:{NFSU2_TR(0x6f42f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f42f5:L6f42f5:{c.instructions+=7;NFSU2_TR(0x6f42f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f42fb:{NFSU2_TR(0x6f42fb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffbull))));
}
B6f42fe:{NFSU2_TR(0x6f42fe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4301:{NFSU2_TR(0x6f4301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4302:{NFSU2_TR(0x6f4302);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4308:{NFSU2_TR(0x6f4308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4309:{NFSU2_TR(0x6f4309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f430a:L6f430a:{c.instructions+=2;NFSU2_TR(0x6f430a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x53338a22ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4310:{NFSU2_TR(0x6f4310);
if(r1(R+518)){{goto L6f43b7;}}
}
B6f4316:L6f4316:{c.instructions+=2;NFSU2_TR(0x6f4316);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x53339102ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f431c:{NFSU2_TR(0x6f431c);
if(r1(R+518)){{goto L6f4395;}}
}
B6f431e:L6f431e:{c.instructions+=2;NFSU2_TR(0x6f431e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x80867800ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80867800ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80867800ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4324:{NFSU2_TR(0x6f4324);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4224u);}goto L6f4224;}}
}
B6f432a:L6f432a:{c.instructions+=2;NFSU2_TR(0x6f432a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10025041ull))));
}
B6f4330:{NFSU2_TR(0x6f4330);
if(r1(R+512)){{goto L6f433a;}}
}
B6f4332:L6f4332:{c.instructions+=2;NFSU2_TR(0x6f4332);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x100250feull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100250feull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4338:{NFSU2_TR(0x6f4338);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f4380;}}
}
B6f433a:L6f433a:{c.instructions+=2;NFSU2_TR(0x6f433a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10025241ull))));
}
B6f4340:{NFSU2_TR(0x6f4340);
if(r1(R+512)){{goto L6f434a;}}
}
B6f4342:L6f4342:{c.instructions+=2;NFSU2_TR(0x6f4342);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x100252feull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100252feull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4348:{NFSU2_TR(0x6f4348);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f4380;}}
}
B6f434a:L6f434a:{c.instructions+=2;NFSU2_TR(0x6f434a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10025341ull))));
}
B6f4350:{NFSU2_TR(0x6f4350);
if(r1(R+512)){{goto L6f435a;}}
}
B6f4352:L6f4352:{c.instructions+=2;NFSU2_TR(0x6f4352);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x100253feull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100253feull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4358:{NFSU2_TR(0x6f4358);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f4380;}}
}
B6f435a:L6f435a:{c.instructions+=2;NFSU2_TR(0x6f435a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1002474dull))));
}
B6f4360:{NFSU2_TR(0x6f4360);
if(r1(R+512)){{goto L6f436a;}}
}
B6f4362:L6f4362:{c.instructions+=2;NFSU2_TR(0x6f4362);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10024751ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10024751ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4368:{NFSU2_TR(0x6f4368);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6f437a;}}
}
B6f436a:L6f436a:{c.instructions+=2;NFSU2_TR(0x6f436a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x10024c49ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10024c49ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10024c49ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4370:{NFSU2_TR(0x6f4370);
if(r1(R+512)){{goto L6f43be;}}
}
B6f4372:L6f4372:{c.instructions+=2;NFSU2_TR(0x6f4372);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x10024c53ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10024c53ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10024c53ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4378:{NFSU2_TR(0x6f4378);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f43be;}}
}
B6f437a:L6f437a:{c.instructions+=1;NFSU2_TR(0x6f437a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4380:L6f4380:{c.instructions+=6;NFSU2_TR(0x6f4380);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4386:{NFSU2_TR(0x6f4386);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffefffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f438c:{NFSU2_TR(0x6f438c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f438d:{NFSU2_TR(0x6f438d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4393:{NFSU2_TR(0x6f4393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4394:{NFSU2_TR(0x6f4394);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4395:L6f4395:{c.instructions+=8;NFSU2_TR(0x6f4395);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x43ull))));
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
B6f439c:{NFSU2_TR(0x6f439c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f439d:{NFSU2_TR(0x6f439d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f43a3:{NFSU2_TR(0x6f43a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f43a9:{NFSU2_TR(0x6f43a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x29cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f43af:{NFSU2_TR(0x6f43af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f43b5:{NFSU2_TR(0x6f43b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f43b6:{NFSU2_TR(0x6f43b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f43b7:L6f43b7:{c.instructions+=1;NFSU2_TR(0x6f43b7);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x3ull))));
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
B6f43be:L6f43be:{c.instructions+=3;NFSU2_TR(0x6f43be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f43bf:{NFSU2_TR(0x6f43bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f43c0:{NFSU2_TR(0x6f43c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f43d0:L6f43d0:{c.instructions+=11;NFSU2_TR(0x6f43d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f43d1:{NFSU2_TR(0x6f43d1);
__builtin_memmove((R+20),(R+16),4);
}
B6f43d3:{NFSU2_TR(0x6f43d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6f43d6:{NFSU2_TR(0x6f43d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x448ull))));
}
B6f43dc:{NFSU2_TR(0x6f43dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f43dd:{NFSU2_TR(0x6f43dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f43e0:{NFSU2_TR(0x6f43e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f43e1:{NFSU2_TR(0x6f43e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f43e3:{NFSU2_TR(0x6f43e3);
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
B6f43e5:{NFSU2_TR(0x6f43e5);
w4(R+4,u32(0x6e4ull));
}
B6f43ea:{NFSU2_TR(0x6f43ea);
w4(R+28,u32(0x8ab708ull));
}
B6f43ef:L6f43ef:{c.instructions+=1;NFSU2_TR(0x6f43ef);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6f43f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f43efu);}goto L6f43ef;}
}
B6f43f1:L6f43f1:{c.instructions+=7;NFSU2_TR(0x6f43f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f43f5:{NFSU2_TR(0x6f43f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f43f9:{NFSU2_TR(0x6f43f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f43fd:{NFSU2_TR(0x6f43fd);
w4(R+4,u32(0x10bull));
}
B6f4402:{NFSU2_TR(0x6f4402);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4406:{NFSU2_TR(0x6f4406);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f440e:{NFSU2_TR(0x6f440e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4412:L6f4412:{c.instructions+=1;NFSU2_TR(0x6f4412);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6f4414;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4412u);}goto L6f4412;}
}
B6f4414:L6f4414:{c.instructions+=3;NFSU2_TR(0x6f4414);
__builtin_memmove(gp(0x8ab708),(R+0),4);
}
B6f4419:{NFSU2_TR(0x6f4419);
__builtin_memmove(gp(0x8ab918),(R+0),4);
}
B6f441e:{NFSU2_TR(0x6f441e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f443d;}}
}
B6f4420:L6f4420:{c.instructions+=3;NFSU2_TR(0x6f4420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4423:{NFSU2_TR(0x6f4423);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4425:{NFSU2_TR(0x6f4425);
if(r1(R+518)){{goto L6f4435;}}
}
B6f4427:L6f4427:{c.instructions+=3;NFSU2_TR(0x6f4427);
u8 U[4];
w4(U+0,u32(0x7c25b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f442c:{NFSU2_TR(0x6f442c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f442d:{NFSU2_TR(0x6f442d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4432ull));
TAIL_STATIC(0x75c784u,75c);
}
B6f4432:L6f4432:{c.instructions+=1;NFSU2_TR(0x6f4432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6f4435:L6f4435:{c.instructions+=6;NFSU2_TR(0x6f4435);
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
B6f4437:{NFSU2_TR(0x6f4437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4438:{NFSU2_TR(0x6f4438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4439:{NFSU2_TR(0x6f4439);
__builtin_memmove((R+16),(R+20),4);
}
B6f443b:{NFSU2_TR(0x6f443b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f443c:{NFSU2_TR(0x6f443c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f443d:L6f443d:{c.instructions+=5;NFSU2_TR(0x6f443d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f443f:{NFSU2_TR(0x6f443f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6f4443:{NFSU2_TR(0x6f4443);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4444:{NFSU2_TR(0x6f4444);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4445:{NFSU2_TR(0x6f4445);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4448ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f4448:L6f4448:{c.instructions+=2;NFSU2_TR(0x6f4448);
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
B6f444a:{NFSU2_TR(0x6f444a);
if(r1(R+518)){{goto L6f446e;}}
}
B6f444c:L6f444c:{c.instructions+=3;NFSU2_TR(0x6f444c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f444f:{NFSU2_TR(0x6f444f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4451:{NFSU2_TR(0x6f4451);
if(r1(R+518)){{goto L6f4586;}}
}
B6f4457:L6f4457:{c.instructions+=4;NFSU2_TR(0x6f4457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4458:{NFSU2_TR(0x6f4458);
u8 U[4];
w4(U+0,u32(0x7c2584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f445d:{NFSU2_TR(0x6f445d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f445e:{NFSU2_TR(0x6f445e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4463ull));
TAIL_STATIC(0x75c784u,75c);
}
B6f4463:L6f4463:{c.instructions+=7;NFSU2_TR(0x6f4463);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f4466:{NFSU2_TR(0x6f4466);
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
B6f4468:{NFSU2_TR(0x6f4468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4469:{NFSU2_TR(0x6f4469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f446a:{NFSU2_TR(0x6f446a);
__builtin_memmove((R+16),(R+20),4);
}
B6f446c:{NFSU2_TR(0x6f446c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f446d:{NFSU2_TR(0x6f446d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f446e:L6f446e:{c.instructions+=4;NFSU2_TR(0x6f446e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4472:{NFSU2_TR(0x6f4472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f4474:{NFSU2_TR(0x6f4474);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4475:{NFSU2_TR(0x6f4475);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4478ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f4478:L6f4478:{c.instructions+=5;NFSU2_TR(0x6f4478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f447a:{NFSU2_TR(0x6f447a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6f447e:{NFSU2_TR(0x6f447e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f447f:{NFSU2_TR(0x6f447f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4480:{NFSU2_TR(0x6f4480);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4483ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f4483:L6f4483:{c.instructions+=2;NFSU2_TR(0x6f4483);
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
B6f4485:{NFSU2_TR(0x6f4485);
if(r1(R+518)){{goto L6f44a9;}}
}
B6f4487:L6f4487:{c.instructions+=3;NFSU2_TR(0x6f4487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f448a:{NFSU2_TR(0x6f448a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f448c:{NFSU2_TR(0x6f448c);
if(r1(R+518)){{goto L6f4586;}}
}
B6f4492:L6f4492:{c.instructions+=4;NFSU2_TR(0x6f4492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4493:{NFSU2_TR(0x6f4493);
u8 U[4];
w4(U+0,u32(0x7c2548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4498:{NFSU2_TR(0x6f4498);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4499:{NFSU2_TR(0x6f4499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f449eull));
TAIL_STATIC(0x75c784u,75c);
}
B6f449e:L6f449e:{c.instructions+=7;NFSU2_TR(0x6f449e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f44a1:{NFSU2_TR(0x6f44a1);
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
B6f44a3:{NFSU2_TR(0x6f44a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f44a4:{NFSU2_TR(0x6f44a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f44a5:{NFSU2_TR(0x6f44a5);
__builtin_memmove((R+16),(R+20),4);
}
B6f44a7:{NFSU2_TR(0x6f44a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f44a8:{NFSU2_TR(0x6f44a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f44a9:L6f44a9:{c.instructions+=10;NFSU2_TR(0x6f44a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f44ad:{NFSU2_TR(0x6f44ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f44b1:{NFSU2_TR(0x6f44b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B6f44b5:{NFSU2_TR(0x6f44b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f44b6:{NFSU2_TR(0x6f44b6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f44b8:{NFSU2_TR(0x6f44b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f44b9:{NFSU2_TR(0x6f44b9);
__builtin_memmove(gp(0x8ab918),(R+0),4);
}
B6f44be:{NFSU2_TR(0x6f44be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f44c0:{NFSU2_TR(0x6f44c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f44c1:{NFSU2_TR(0x6f44c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f44c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f44c4:L6f44c4:{c.instructions+=2;NFSU2_TR(0x6f44c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f44c6:{NFSU2_TR(0x6f44c6);
if(r1(R+518)){{goto L6f44ea;}}
}
B6f44c8:L6f44c8:{c.instructions+=3;NFSU2_TR(0x6f44c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f44cb:{NFSU2_TR(0x6f44cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f44cd:{NFSU2_TR(0x6f44cd);
if(r1(R+518)){{goto L6f4586;}}
}
B6f44d3:L6f44d3:{c.instructions+=4;NFSU2_TR(0x6f44d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f44d4:{NFSU2_TR(0x6f44d4);
u8 U[4];
w4(U+0,u32(0x7c2514ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f44d9:{NFSU2_TR(0x6f44d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f44da:{NFSU2_TR(0x6f44da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f44dfull));
TAIL_STATIC(0x75c784u,75c);
}
B6f44df:L6f44df:{c.instructions+=7;NFSU2_TR(0x6f44df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f44e2:{NFSU2_TR(0x6f44e2);
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
B6f44e4:{NFSU2_TR(0x6f44e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f44e5:{NFSU2_TR(0x6f44e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f44e6:{NFSU2_TR(0x6f44e6);
__builtin_memmove((R+16),(R+20),4);
}
B6f44e8:{NFSU2_TR(0x6f44e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f44e9:{NFSU2_TR(0x6f44e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f44ea:L6f44ea:{c.instructions+=10;NFSU2_TR(0x6f44ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f44f1:{NFSU2_TR(0x6f44f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x42cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f44f8:{NFSU2_TR(0x6f44f8);
__builtin_memmove(gp(0x8ab914),(R+0),4);
}
B6f44fd:{NFSU2_TR(0x6f44fd);
__builtin_memmove(gp(0x8ab910),(R+4),4);
}
B6f4503:{NFSU2_TR(0x6f4503);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6f4508:{NFSU2_TR(0x6f4508);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f450b:{NFSU2_TR(0x6f450b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6f450d:{NFSU2_TR(0x6f450d);
__builtin_memmove(gp(0x8ab90c),(R+0),4);
}
B6f4512:{NFSU2_TR(0x6f4512);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f4514:{NFSU2_TR(0x6f4514);
{goto L6f4520;}
}
B6f4520:L6f4520:{c.instructions+=5;NFSU2_TR(0x6f4520);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B6f4527:{NFSU2_TR(0x6f4527);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ab70cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f452d:{NFSU2_TR(0x6f452d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f452e:{NFSU2_TR(0x6f452e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4530:{NFSU2_TR(0x6f4530);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4520u);}goto L6f4520;}}
}
B6f4532:L6f4532:{c.instructions+=4;NFSU2_TR(0x6f4532);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4536:{NFSU2_TR(0x6f4536);
u8 U[4];
w4(U+0,u32(0x8ab708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f453b:{NFSU2_TR(0x6f453b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f453c:{NFSU2_TR(0x6f453c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4541ull));
TAIL_STATIC(0x6f3ec0u,6f3);
}
B6f4541:L6f4541:{c.instructions+=5;NFSU2_TR(0x6f4541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f4543:{NFSU2_TR(0x6f4543);
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
B6f4546:{NFSU2_TR(0x6f4546);
u8 U[4];
w4(U+0,u32(0x8ab91cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f454b:{NFSU2_TR(0x6f454b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f454c:{NFSU2_TR(0x6f454c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f454full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f454f:L6f454f:{c.instructions+=4;NFSU2_TR(0x6f454f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4553:{NFSU2_TR(0x6f4553);
u8 U[4];
w4(U+0,u32(0x8ab708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4558:{NFSU2_TR(0x6f4558);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4559:{NFSU2_TR(0x6f4559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f455eull));
TAIL_STATIC(0x6f3fe0u,6f3);
}
B6f455e:L6f455e:{c.instructions+=5;NFSU2_TR(0x6f455e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f4560:{NFSU2_TR(0x6f4560);
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
B6f4563:{NFSU2_TR(0x6f4563);
u8 U[4];
w4(U+0,u32(0x8ab92cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4568:{NFSU2_TR(0x6f4568);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4569:{NFSU2_TR(0x6f4569);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f456cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f456c:L6f456c:{c.instructions+=2;NFSU2_TR(0x6f456c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f456e:{NFSU2_TR(0x6f456e);
if(r1(R+518)){{goto L6f458e;}}
}
B6f4570:L6f4570:{c.instructions+=3;NFSU2_TR(0x6f4570);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4573:{NFSU2_TR(0x6f4573);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4575:{NFSU2_TR(0x6f4575);
if(r1(R+518)){{goto L6f4586;}}
}
B6f4577:L6f4577:{c.instructions+=4;NFSU2_TR(0x6f4577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4578:{NFSU2_TR(0x6f4578);
u8 U[4];
w4(U+0,u32(0x7c24e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f457d:{NFSU2_TR(0x6f457d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f457e:{NFSU2_TR(0x6f457e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4583ull));
TAIL_STATIC(0x75c784u,75c);
}
B6f4583:L6f4583:{c.instructions+=1;NFSU2_TR(0x6f4583);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f4586:L6f4586:{c.instructions+=6;NFSU2_TR(0x6f4586);
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
B6f4588:{NFSU2_TR(0x6f4588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4589:{NFSU2_TR(0x6f4589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f458a:{NFSU2_TR(0x6f458a);
__builtin_memmove((R+16),(R+20),4);
}
B6f458c:{NFSU2_TR(0x6f458c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f458d:{NFSU2_TR(0x6f458d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f458e:L6f458e:{c.instructions+=2;NFSU2_TR(0x6f458e);
w4(R+0,u32(0x8ab708ull));
}
B6f4593:{NFSU2_TR(0x6f4593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4598ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4040u);}goto L6f4040;}
}
B6f4598:L6f4598:{c.instructions+=6;NFSU2_TR(0x6f4598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4599:{NFSU2_TR(0x6f4599);
s4(0x8ab708,u32(0x1ull));
}
B6f45a3:{NFSU2_TR(0x6f45a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f45a4:{NFSU2_TR(0x6f45a4);
__builtin_memmove((R+16),(R+20),4);
}
B6f45a6:{NFSU2_TR(0x6f45a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f45a7:{NFSU2_TR(0x6f45a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f45b0:L6f45b0:{c.instructions+=8;NFSU2_TR(0x6f45b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f45b1:{NFSU2_TR(0x6f45b1);
__builtin_memmove((R+20),(R+16),4);
}
B6f45b3:{NFSU2_TR(0x6f45b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f45b6:{NFSU2_TR(0x6f45b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f45b8:{NFSU2_TR(0x6f45b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f45b9:{NFSU2_TR(0x6f45b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f45ba:{NFSU2_TR(0x6f45ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f45bb:{NFSU2_TR(0x6f45bb);
if(r1(R+518)){{goto L6f45e6;}}
}
B6f45bd:L6f45bd:{c.instructions+=2;NFSU2_TR(0x6f45bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f45c0:{NFSU2_TR(0x6f45c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f45c3:L6f45c3:{c.instructions+=8;NFSU2_TR(0x6f45c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f45c7:{NFSU2_TR(0x6f45c7);
__builtin_memmove((R+0),(R+8),4);
}
B6f45c9:{NFSU2_TR(0x6f45c9);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6f45cb:{NFSU2_TR(0x6f45cb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f45ce:{NFSU2_TR(0x6f45ce);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6f45d2:{NFSU2_TR(0x6f45d2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6f45d4:{NFSU2_TR(0x6f45d4);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+12)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f45d6:{NFSU2_TR(0x6f45d6);
if(r1(R+518)){{goto L6f45e8;}}
}
B6f45d8:L6f45d8:{c.instructions+=2;NFSU2_TR(0x6f45d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f45da:{NFSU2_TR(0x6f45da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f45e0;}}
}
B6f45dc:L6f45dc:{c.instructions+=2;NFSU2_TR(0x6f45dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f45df:{NFSU2_TR(0x6f45df);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f45e0:L6f45e0:{c.instructions+=3;NFSU2_TR(0x6f45e0);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6f45e2:{NFSU2_TR(0x6f45e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f45e4:{NFSU2_TR(0x6f45e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f45c3u);}goto L6f45c3;}}
}
B6f45e6:L6f45e6:{c.instructions+=1;NFSU2_TR(0x6f45e6);
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
B6f45e8:L6f45e8:{c.instructions+=5;NFSU2_TR(0x6f45e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f45e9:{NFSU2_TR(0x6f45e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f45ea:{NFSU2_TR(0x6f45ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f45eb:{NFSU2_TR(0x6f45eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f45ec:{NFSU2_TR(0x6f45ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f45f0:L6f45f0:{c.instructions+=9;NFSU2_TR(0x6f45f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f45f1:{NFSU2_TR(0x6f45f1);
__builtin_memmove((R+20),(R+16),4);
}
B6f45f3:{NFSU2_TR(0x6f45f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f45f4:{NFSU2_TR(0x6f45f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f45f5:{NFSU2_TR(0x6f45f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f45f8:{NFSU2_TR(0x6f45f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f45fc:{NFSU2_TR(0x6f45fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f45fe:{NFSU2_TR(0x6f45fe);
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
B6f4600:{NFSU2_TR(0x6f4600);
if(r1(R+518)){{goto L6f4631;}}
}
B6f4602:L6f4602:{c.instructions+=3;NFSU2_TR(0x6f4602);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f4609:{NFSU2_TR(0x6f4609);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f460a:{NFSU2_TR(0x6f460a);
if(r1(R+518)){{goto L6f463c;}}
}
B6f460c:L6f460c:{c.instructions+=7;NFSU2_TR(0x6f460c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f4610:{NFSU2_TR(0x6f4610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4613:{NFSU2_TR(0x6f4613);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f4617:{NFSU2_TR(0x6f4617);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6f4619:{NFSU2_TR(0x6f4619);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f461b:{NFSU2_TR(0x6f461b);
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
B6f461d:{NFSU2_TR(0x6f461d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f4630;}}
}
B6f461f:L6f461f:{c.instructions+=1;NFSU2_TR(0x6f461f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B6f4623:L6f4623:{c.instructions+=2;NFSU2_TR(0x6f4623);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+28))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B6f4627:{NFSU2_TR(0x6f4627);
if(r1(R+518)){{goto L6f4637;}}
}
B6f4629:L6f4629:{c.instructions+=3;NFSU2_TR(0x6f4629);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f462a:{NFSU2_TR(0x6f462a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f462c:{NFSU2_TR(0x6f462c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4623u);}goto L6f4623;}}
}
B6f462e:L6f462e:{c.instructions+=1;NFSU2_TR(0x6f462e);
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
B6f4630:L6f4630:{c.instructions+=1;NFSU2_TR(0x6f4630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4631:L6f4631:{c.instructions+=4;NFSU2_TR(0x6f4631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4632:{NFSU2_TR(0x6f4632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4633:{NFSU2_TR(0x6f4633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4634:{NFSU2_TR(0x6f4634);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4637:L6f4637:{c.instructions+=2;NFSU2_TR(0x6f4637);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f463a:{NFSU2_TR(0x6f463a);
{goto L6f4674;}
}
B6f463c:L6f463c:{c.instructions+=6;NFSU2_TR(0x6f463c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f463f:{NFSU2_TR(0x6f463f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6f4642:{NFSU2_TR(0x6f4642);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6f4644:{NFSU2_TR(0x6f4644);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4646:{NFSU2_TR(0x6f4646);
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
B6f4648:{NFSU2_TR(0x6f4648);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4630u);}goto L6f4630;}}
}
B6f464a:L6f464a:{c.instructions+=2;NFSU2_TR(0x6f464a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B6f464e:{NFSU2_TR(0x6f464e);
__builtin_memmove((R+28),(R+28),4);
}
B6f4650:L6f4650:{c.instructions+=2;NFSU2_TR(0x6f4650);
u8 U[18];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(r2(R+12))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B6f4655:{NFSU2_TR(0x6f4655);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4662;}}
}
B6f4657:L6f4657:{c.instructions+=3;NFSU2_TR(0x6f4657);
u8 U[13];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+0,u16(r1(U+12)));
}
B6f465d:{NFSU2_TR(0x6f465d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+0))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6f4660:{NFSU2_TR(0x6f4660);
if(r1(R+518)){{goto L6f4670;}}
}
B6f4662:L6f4662:{c.instructions+=3;NFSU2_TR(0x6f4662);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6f4663:{NFSU2_TR(0x6f4663);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f4665:{NFSU2_TR(0x6f4665);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4650u);}goto L6f4650;}}
}
B6f4667:L6f4667:{c.instructions+=6;NFSU2_TR(0x6f4667);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4668:{NFSU2_TR(0x6f4668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4669:{NFSU2_TR(0x6f4669);
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
B6f466b:{NFSU2_TR(0x6f466b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f466c:{NFSU2_TR(0x6f466c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f466d:{NFSU2_TR(0x6f466d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4670:L6f4670:{c.instructions+=1;NFSU2_TR(0x6f4670);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f4674:L6f4674:{c.instructions+=2;NFSU2_TR(0x6f4674);
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
B6f4676:{NFSU2_TR(0x6f4676);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f462eu);}goto L6f462e;}}
}
B6f4678:L6f4678:{c.instructions+=6;NFSU2_TR(0x6f4678);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6f467c:{NFSU2_TR(0x6f467c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f467d:{NFSU2_TR(0x6f467d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f467e:{NFSU2_TR(0x6f467e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f467f:{NFSU2_TR(0x6f467f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4680:{NFSU2_TR(0x6f4680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4690:L6f4690:{c.instructions+=5;NFSU2_TR(0x6f4690);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4691:{NFSU2_TR(0x6f4691);
__builtin_memmove((R+20),(R+16),4);
}
B6f4693:{NFSU2_TR(0x6f4693);
__builtin_memmove((R+0),gp(0x8ad2b0),4);
}
B6f4698:{NFSU2_TR(0x6f4698);
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
B6f469a:{NFSU2_TR(0x6f469a);
if(r1(R+518)){{goto L6f46b2;}}
}
B6f469c:L6f469c:{c.instructions+=3;NFSU2_TR(0x6f469c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f469f:{NFSU2_TR(0x6f469f);
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
B6f46a1:{NFSU2_TR(0x6f46a1);
if(r1(R+518)){{goto L6f46b2;}}
}
B6f46a3:L6f46a3:{c.instructions+=4;NFSU2_TR(0x6f46a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f46a4:{NFSU2_TR(0x6f46a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f46a7:{NFSU2_TR(0x6f46a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f46a8:{NFSU2_TR(0x6f46a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f46aaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f46aa:L6f46aa:{c.instructions+=5;NFSU2_TR(0x6f46aa);
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
B6f46ad:{NFSU2_TR(0x6f46ad);
__builtin_memmove((R+0),(R+24),4);
}
B6f46af:{NFSU2_TR(0x6f46af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f46b0:{NFSU2_TR(0x6f46b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f46b1:{NFSU2_TR(0x6f46b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f46b2:L6f46b2:{c.instructions+=3;NFSU2_TR(0x6f46b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f46b5:{NFSU2_TR(0x6f46b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f46b6:{NFSU2_TR(0x6f46b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f46c0:L6f46c0:{c.instructions+=5;NFSU2_TR(0x6f46c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f46c1:{NFSU2_TR(0x6f46c1);
__builtin_memmove((R+20),(R+16),4);
}
B6f46c3:{NFSU2_TR(0x6f46c3);
__builtin_memmove((R+0),gp(0x8ad2b0),4);
}
B6f46c8:{NFSU2_TR(0x6f46c8);
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
B6f46ca:{NFSU2_TR(0x6f46ca);
if(r1(R+518)){{goto L6f46d6;}}
}
B6f46cc:L6f46cc:{c.instructions+=3;NFSU2_TR(0x6f46cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f46cf:{NFSU2_TR(0x6f46cf);
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
B6f46d1:{NFSU2_TR(0x6f46d1);
if(r1(R+518)){{goto L6f46d6;}}
}
B6f46d3:L6f46d3:{c.instructions+=2;NFSU2_TR(0x6f46d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f46d4:{NFSU2_TR(0x6f46d4);
{u32 t_=u32(r4(R+0));TAIL_DYNAMIC(t_);}
}
B6f46d6:L6f46d6:{c.instructions+=2;NFSU2_TR(0x6f46d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f46d7:{NFSU2_TR(0x6f46d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f46e0:L6f46e0:{c.instructions+=11;NFSU2_TR(0x6f46e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f46e1:{NFSU2_TR(0x6f46e1);
__builtin_memmove((R+20),(R+16),4);
}
B6f46e3:{NFSU2_TR(0x6f46e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f46e6:{NFSU2_TR(0x6f46e6);
__builtin_memmove((R+8),(R+4),4);
}
B6f46e8:{NFSU2_TR(0x6f46e8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B6f46ee:{NFSU2_TR(0x6f46ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f46ef:{NFSU2_TR(0x6f46ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7c25d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6f46f5:{NFSU2_TR(0x6f46f5);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6f46f7:{NFSU2_TR(0x6f46f7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f46f9:{NFSU2_TR(0x6f46f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f46fa:{NFSU2_TR(0x6f46fa);
if(r1(R+518)){{goto L6f4714;}}
}
B6f46fc:L6f46fc:{c.instructions+=3;NFSU2_TR(0x6f46fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffd7ull))));
}
B6f46ff:{NFSU2_TR(0x6f46ff);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4702:{NFSU2_TR(0x6f4702);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4712;}}
}
B6f4704:L6f4704:{c.instructions+=2;NFSU2_TR(0x6f4704);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6f4720ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f470b:{NFSU2_TR(0x6f470b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6f4718ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f4712:L6f4712:{c.instructions+=1;NFSU2_TR(0x6f4712);
w1(R+0,u8(0x1ull));
}
B6f4714:L6f4714:{c.instructions+=2;NFSU2_TR(0x6f4714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4715:{NFSU2_TR(0x6f4715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4730:L6f4730:{c.instructions+=5;NFSU2_TR(0x6f4730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f4732:{NFSU2_TR(0x6f4732);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f4737:{NFSU2_TR(0x6f4737);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffff97ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f473a:{NFSU2_TR(0x6f473a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f473d:{NFSU2_TR(0x6f473d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4765;}}
}
B6f473f:L6f473f:{c.instructions+=2;NFSU2_TR(0x6f473f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6f47a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f4746:{NFSU2_TR(0x6f4746);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6f4794ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f474d:L6f474d:{c.instructions+=2;NFSU2_TR(0x6f474d);
w4(R+0,u32(0x1ull));
}
B6f4752:{NFSU2_TR(0x6f4752);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4753:L6f4753:{c.instructions+=2;NFSU2_TR(0x6f4753);
w4(R+0,u32(0x10ull));
}
B6f4758:{NFSU2_TR(0x6f4758);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4759:L6f4759:{c.instructions+=2;NFSU2_TR(0x6f4759);
w4(R+0,u32(0x20ull));
}
B6f475e:{NFSU2_TR(0x6f475e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f475f:L6f475f:{c.instructions+=2;NFSU2_TR(0x6f475f);
w4(R+0,u32(0x80ull));
}
B6f4764:{NFSU2_TR(0x6f4764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4765:L6f4765:{c.instructions+=3;NFSU2_TR(0x6f4765);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f4768:{NFSU2_TR(0x6f4768);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f476b:{NFSU2_TR(0x6f476b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4781;}}
}
B6f476d:L6f476d:{c.instructions+=2;NFSU2_TR(0x6f476d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6f47ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6f4774:{NFSU2_TR(0x6f4774);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6f47c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f477b:L6f477b:{c.instructions+=2;NFSU2_TR(0x6f477b);
w4(R+0,u32(0x4ull));
}
B6f4780:{NFSU2_TR(0x6f4780);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4781:L6f4781:{c.instructions+=2;NFSU2_TR(0x6f4781);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4782:{NFSU2_TR(0x6f4782);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4787ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f46e0u);}goto L6f46e0;}
}
B6f4787:L6f4787:{c.instructions+=5;NFSU2_TR(0x6f4787);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f478a:{NFSU2_TR(0x6f478a);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B6f478c:{NFSU2_TR(0x6f478c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6f478e:{NFSU2_TR(0x6f478e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4791:{NFSU2_TR(0x6f4791);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f47e0:L6f47e0:{c.instructions+=7;NFSU2_TR(0x6f47e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f47e1:{NFSU2_TR(0x6f47e1);
__builtin_memmove((R+20),(R+16),4);
}
B6f47e3:{NFSU2_TR(0x6f47e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f47e4:{NFSU2_TR(0x6f47e4);
__builtin_memmove((R+24),(R+4),4);
}
B6f47e6:{NFSU2_TR(0x6f47e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f47e8:{NFSU2_TR(0x6f47e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f47e9:{NFSU2_TR(0x6f47e9);
if(r1(R+518)){{goto L6f4806;}}
}
B6f47eb:L6f47eb:{c.instructions+=2;NFSU2_TR(0x6f47eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f47ee:{NFSU2_TR(0x6f47ee);
__builtin_memmove((R+28),(R+28),4);
}
B6f47f0:L6f47f0:{c.instructions+=2;NFSU2_TR(0x6f47f0);
__builtin_memmove((R+4),(R+24),4);
}
B6f47f2:{NFSU2_TR(0x6f47f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f47f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4730u);}goto L6f4730;}
}
B6f47f7:L6f47f7:{c.instructions+=2;NFSU2_TR(0x6f47f7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6f47f9:{NFSU2_TR(0x6f47f9);
if(r1(R+518)){{goto L6f480e;}}
}
B6f47fb:L6f47fb:{c.instructions+=3;NFSU2_TR(0x6f47fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f47fe:{NFSU2_TR(0x6f47fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4800:{NFSU2_TR(0x6f4800);
if(r1(R+518)){{goto L6f4806;}}
}
B6f4802:L6f4802:{c.instructions+=2;NFSU2_TR(0x6f4802);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6f4804:{NFSU2_TR(0x6f4804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f47f0u);}goto L6f47f0;}}
}
B6f4806:L6f4806:{c.instructions+=5;NFSU2_TR(0x6f4806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4807:{NFSU2_TR(0x6f4807);
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
B6f4809:{NFSU2_TR(0x6f4809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f480a:{NFSU2_TR(0x6f480a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f480b:{NFSU2_TR(0x6f480b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f480e:L6f480e:{c.instructions+=5;NFSU2_TR(0x6f480e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f480f:{NFSU2_TR(0x6f480f);
__builtin_memmove((R+0),(R+24),4);
}
B6f4811:{NFSU2_TR(0x6f4811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4812:{NFSU2_TR(0x6f4812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4813:{NFSU2_TR(0x6f4813);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4820:L6f4820:{c.instructions+=2;NFSU2_TR(0x6f4820);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4822:{NFSU2_TR(0x6f4822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4827ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f47e0u);}goto L6f47e0;}
}
B6f4827:L6f4827:{c.instructions+=1;NFSU2_TR(0x6f4827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4830:L6f4830:{c.instructions+=3;NFSU2_TR(0x6f4830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4831:{NFSU2_TR(0x6f4831);
__builtin_memmove((R+24),(R+4),4);
}
B6f4833:{NFSU2_TR(0x6f4833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4838ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4730u);}goto L6f4730;}
}
B6f4838:L6f4838:{c.instructions+=2;NFSU2_TR(0x6f4838);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f483b:{NFSU2_TR(0x6f483b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f485d;}}
}
B6f483d:L6f483d:{c.instructions+=1;NFSU2_TR(0x6f483d);
__builtin_memmove((R+4),(R+4),4);
}
B6f4840:L6f4840:{c.instructions+=2;NFSU2_TR(0x6f4840);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4843:{NFSU2_TR(0x6f4843);
if(r1(R+518)){{goto L6f4876;}}
}
B6f4845:L6f4845:{c.instructions+=2;NFSU2_TR(0x6f4845);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x60ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4848:{NFSU2_TR(0x6f4848);
if(r1(R+518)){{goto L6f4876;}}
}
B6f484a:L6f484a:{c.instructions+=2;NFSU2_TR(0x6f484a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f484f:{NFSU2_TR(0x6f484f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4872;}}
}
B6f4851:L6f4851:{c.instructions+=2;NFSU2_TR(0x6f4851);
__builtin_memmove((R+4),(R+24),4);
}
B6f4853:{NFSU2_TR(0x6f4853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4858ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4730u);}goto L6f4730;}
}
B6f4858:L6f4858:{c.instructions+=2;NFSU2_TR(0x6f4858);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f485b:{NFSU2_TR(0x6f485b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4840u);}goto L6f4840;}}
}
B6f485d:L6f485d:{c.instructions+=1;NFSU2_TR(0x6f485d);
if(r1(R+518)){{goto L6f486a;}}
}
B6f485f:L6f485f:{c.instructions+=2;NFSU2_TR(0x6f485f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4860:{NFSU2_TR(0x6f4860);
if(r1(R+518)){{goto L6f4872;}}
}
B6f4862:L6f4862:{c.instructions+=2;NFSU2_TR(0x6f4862);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4863:{NFSU2_TR(0x6f4863);
if(r1(R+518)){{goto L6f486a;}}
}
B6f4865:L6f4865:{c.instructions+=2;NFSU2_TR(0x6f4865);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4868:{NFSU2_TR(0x6f4868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4872;}}
}
B6f486a:L6f486a:{c.instructions+=4;NFSU2_TR(0x6f486a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f486d:{NFSU2_TR(0x6f486d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4870:{NFSU2_TR(0x6f4870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4871:{NFSU2_TR(0x6f4871);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4872:L6f4872:{c.instructions+=3;NFSU2_TR(0x6f4872);
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
B6f4874:{NFSU2_TR(0x6f4874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4875:{NFSU2_TR(0x6f4875);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4876:L6f4876:{c.instructions+=4;NFSU2_TR(0x6f4876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4879:{NFSU2_TR(0x6f4879);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f487c:{NFSU2_TR(0x6f487c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f487d:{NFSU2_TR(0x6f487d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4880:L6f4880:{c.instructions+=6;NFSU2_TR(0x6f4880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4881:{NFSU2_TR(0x6f4881);
__builtin_memmove((R+20),(R+16),4);
}
B6f4883:{NFSU2_TR(0x6f4883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4886:{NFSU2_TR(0x6f4886);
__builtin_memmove(gp(0x8ad2b4),(R+0),4);
}
B6f488b:{NFSU2_TR(0x6f488b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f488c:{NFSU2_TR(0x6f488c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4890:L6f4890:{c.instructions+=39;NFSU2_TR(0x6f4890);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4891:{NFSU2_TR(0x6f4891);
__builtin_memmove((R+20),(R+16),4);
}
B6f4893:{NFSU2_TR(0x6f4893);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x48ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4896:{NFSU2_TR(0x6f4896);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4899:{NFSU2_TR(0x6f4899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f489c:{NFSU2_TR(0x6f489c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f489f:{NFSU2_TR(0x6f489f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48a2:{NFSU2_TR(0x6f48a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f48a5:{NFSU2_TR(0x6f48a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48a8:{NFSU2_TR(0x6f48a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f48ab:{NFSU2_TR(0x6f48ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48ae:{NFSU2_TR(0x6f48ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48b1:{NFSU2_TR(0x6f48b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f48b4:{NFSU2_TR(0x6f48b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48b7:{NFSU2_TR(0x6f48b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48ba:{NFSU2_TR(0x6f48ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f48bd:{NFSU2_TR(0x6f48bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f48c0:{NFSU2_TR(0x6f48c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48c3:{NFSU2_TR(0x6f48c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f48c6:{NFSU2_TR(0x6f48c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48c9:{NFSU2_TR(0x6f48c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48cc:{NFSU2_TR(0x6f48cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f48cf:{NFSU2_TR(0x6f48cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f48d2:{NFSU2_TR(0x6f48d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f48d5:{NFSU2_TR(0x6f48d5);
__builtin_memmove((R+4),gp(0x8ad2b4),4);
}
B6f48db:{NFSU2_TR(0x6f48db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f48dc:{NFSU2_TR(0x6f48dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f48df:{NFSU2_TR(0x6f48df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6f48e2:{NFSU2_TR(0x6f48e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f48e9:{NFSU2_TR(0x6f48e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f48f0:{NFSU2_TR(0x6f48f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f48f7:{NFSU2_TR(0x6f48f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f48fe:{NFSU2_TR(0x6f48fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f4905:{NFSU2_TR(0x6f4905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f490c:{NFSU2_TR(0x6f490c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f4913:{NFSU2_TR(0x6f4913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4916:{NFSU2_TR(0x6f4916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f4918:{NFSU2_TR(0x6f4918);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4919:{NFSU2_TR(0x6f4919);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f491bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6f491b:L6f491b:{c.instructions+=3;NFSU2_TR(0x6f491b);
__builtin_memmove((R+16),(R+20),4);
}
B6f491d:{NFSU2_TR(0x6f491d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f491e:{NFSU2_TR(0x6f491e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4920:L6f4920:{c.instructions+=8;NFSU2_TR(0x6f4920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4921:{NFSU2_TR(0x6f4921);
__builtin_memmove((R+20),(R+16),4);
}
B6f4923:{NFSU2_TR(0x6f4923);
__builtin_memmove((R+4),gp(0x8ad2b4),4);
}
B6f4929:{NFSU2_TR(0x6f4929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f492c:{NFSU2_TR(0x6f492c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f492e:{NFSU2_TR(0x6f492e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4930:{NFSU2_TR(0x6f4930);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4931:{NFSU2_TR(0x6f4931);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4934ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f4934:L6f4934:{c.instructions+=2;NFSU2_TR(0x6f4934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4935:{NFSU2_TR(0x6f4935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4940:L6f4940:{c.instructions+=7;NFSU2_TR(0x6f4940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4941:{NFSU2_TR(0x6f4941);
__builtin_memmove((R+20),(R+16),4);
}
B6f4943:{NFSU2_TR(0x6f4943);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4944:{NFSU2_TR(0x6f4944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4947:{NFSU2_TR(0x6f4947);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f494a:{NFSU2_TR(0x6f494a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f494c:{NFSU2_TR(0x6f494c);
if(r1(R+518)){{goto L6f495b;}}
}
B6f494e:L6f494e:{c.instructions+=2;NFSU2_TR(0x6f494e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4950:{NFSU2_TR(0x6f4950);
if(r1(R+518)){{goto L6f495b;}}
}
B6f4952:L6f4952:{c.instructions+=2;NFSU2_TR(0x6f4952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4953:{NFSU2_TR(0x6f4953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4958ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4940u);}goto L6f4940;}
}
B6f4958:L6f4958:{c.instructions+=1;NFSU2_TR(0x6f4958);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f495b:L6f495b:{c.instructions+=3;NFSU2_TR(0x6f495b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f495d:{NFSU2_TR(0x6f495d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4960:{NFSU2_TR(0x6f4960);
if(r1(R+518)){{goto L6f4974;}}
}
B6f4962:L6f4962:{c.instructions+=3;NFSU2_TR(0x6f4962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4965:{NFSU2_TR(0x6f4965);
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
B6f4967:{NFSU2_TR(0x6f4967);
if(r1(R+518)){{goto L6f496b;}}
}
B6f4969:L6f4969:{c.instructions+=1;NFSU2_TR(0x6f4969);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f496b:L6f496b:{c.instructions+=2;NFSU2_TR(0x6f496b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f496c:{NFSU2_TR(0x6f496c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4971ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4920u);}goto L6f4920;}
}
B6f4971:L6f4971:{c.instructions+=1;NFSU2_TR(0x6f4971);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f4974:L6f4974:{c.instructions+=3;NFSU2_TR(0x6f4974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f4976:{NFSU2_TR(0x6f4976);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f4979:{NFSU2_TR(0x6f4979);
if(r1(R+518)){{goto L6f4984;}}
}
B6f497b:L6f497b:{c.instructions+=2;NFSU2_TR(0x6f497b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f497c:{NFSU2_TR(0x6f497c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4981ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4920u);}goto L6f4920;}
}
B6f4981:L6f4981:{c.instructions+=1;NFSU2_TR(0x6f4981);
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
B6f4984:L6f4984:{c.instructions+=3;NFSU2_TR(0x6f4984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4985:{NFSU2_TR(0x6f4985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4986:{NFSU2_TR(0x6f4986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4990:L6f4990:{c.instructions+=7;NFSU2_TR(0x6f4990);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4991:{NFSU2_TR(0x6f4991);
__builtin_memmove((R+20),(R+16),4);
}
B6f4993:{NFSU2_TR(0x6f4993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4996:{NFSU2_TR(0x6f4996);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
}
B6f4999:{NFSU2_TR(0x6f4999);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6f499b:{NFSU2_TR(0x6f499b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6f499e:{NFSU2_TR(0x6f499e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f49a9;}}
}
B6f49a0:L6f49a0:{c.instructions+=1;NFSU2_TR(0x6f49a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6f49acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f49a7:L6f49a7:{c.instructions+=1;NFSU2_TR(0x6f49a7);
w1(R+0,u8(0x1ull));
}
B6f49a9:L6f49a9:{c.instructions+=2;NFSU2_TR(0x6f49a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f49aa:{NFSU2_TR(0x6f49aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f49d0:L6f49d0:{c.instructions+=6;NFSU2_TR(0x6f49d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f49d1:{NFSU2_TR(0x6f49d1);
__builtin_memmove((R+20),(R+16),4);
}
B6f49d3:{NFSU2_TR(0x6f49d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f49d6:{NFSU2_TR(0x6f49d6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f49d8:{NFSU2_TR(0x6f49d8);
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
B6f49da:{NFSU2_TR(0x6f49da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f49e6;}}
}
B6f49dc:L6f49dc:{c.instructions+=4;NFSU2_TR(0x6f49dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f49df:{NFSU2_TR(0x6f49df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f49e2:{NFSU2_TR(0x6f49e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f49e3:{NFSU2_TR(0x6f49e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f49e6:L6f49e6:{c.instructions+=6;NFSU2_TR(0x6f49e6);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f49e8:{NFSU2_TR(0x6f49e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f49eb:{NFSU2_TR(0x6f49eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f49ee:{NFSU2_TR(0x6f49ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f49f1:{NFSU2_TR(0x6f49f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f49f2:{NFSU2_TR(0x6f49f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4a00:L6f4a00:{c.instructions+=42;NFSU2_TR(0x6f4a00);
__builtin_memmove((R+8),(R+4),4);
}
B6f4a02:{NFSU2_TR(0x6f4a02);
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
B6f4a04:{NFSU2_TR(0x6f4a04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4a05:{NFSU2_TR(0x6f4a05);
w4(R+4,u32(0xbull));
}
B6f4a0a:{NFSU2_TR(0x6f4a0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4a10:{NFSU2_TR(0x6f4a10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6f4a12:{NFSU2_TR(0x6f4a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a15:{NFSU2_TR(0x6f4a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a18:{NFSU2_TR(0x6f4a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a1b:{NFSU2_TR(0x6f4a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a1e:{NFSU2_TR(0x6f4a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a21:{NFSU2_TR(0x6f4a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a24:{NFSU2_TR(0x6f4a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a27:{NFSU2_TR(0x6f4a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a2a:{NFSU2_TR(0x6f4a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a2d:{NFSU2_TR(0x6f4a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a30:{NFSU2_TR(0x6f4a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a33:{NFSU2_TR(0x6f4a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a36:{NFSU2_TR(0x6f4a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a39:{NFSU2_TR(0x6f4a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a3c:{NFSU2_TR(0x6f4a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a3f:{NFSU2_TR(0x6f4a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a42:{NFSU2_TR(0x6f4a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a45:{NFSU2_TR(0x6f4a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a48:{NFSU2_TR(0x6f4a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a4b:{NFSU2_TR(0x6f4a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a4e:{NFSU2_TR(0x6f4a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a51:{NFSU2_TR(0x6f4a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a54:{NFSU2_TR(0x6f4a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a57:{NFSU2_TR(0x6f4a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a5a:{NFSU2_TR(0x6f4a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a5d:{NFSU2_TR(0x6f4a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a60:{NFSU2_TR(0x6f4a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a63:{NFSU2_TR(0x6f4a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a66:{NFSU2_TR(0x6f4a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a69:{NFSU2_TR(0x6f4a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a6c:{NFSU2_TR(0x6f4a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a6f:{NFSU2_TR(0x6f4a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a75:{NFSU2_TR(0x6f4a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a7f:{NFSU2_TR(0x6f4a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a85:{NFSU2_TR(0x6f4a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a8b:{NFSU2_TR(0x6f4a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4a91:L6f4a91:{c.instructions+=1;NFSU2_TR(0x6f4a91);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6f4a93;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4a91u);}goto L6f4a91;}
}
B6f4a93:L6f4a93:{c.instructions+=2;NFSU2_TR(0x6f4a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4a94:{NFSU2_TR(0x6f4a94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4aa0:L6f4aa0:{c.instructions+=3;NFSU2_TR(0x6f4aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4aa1:{NFSU2_TR(0x6f4aa1);
__builtin_memmove((R+24),(R+4),4);
}
B6f4aa3:{NFSU2_TR(0x6f4aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4aa8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4a00u);}goto L6f4a00;}
}
B6f4aa8:L6f4aa8:{c.instructions+=3;NFSU2_TR(0x6f4aa8);
__builtin_memmove((R+0),(R+24),4);
}
B6f4aaa:{NFSU2_TR(0x6f4aaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4aab:{NFSU2_TR(0x6f4aab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4ab0:L6f4ab0:{c.instructions+=17;NFSU2_TR(0x6f4ab0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4ab1:{NFSU2_TR(0x6f4ab1);
__builtin_memmove((R+20),(R+16),4);
}
B6f4ab3:{NFSU2_TR(0x6f4ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6f4ab6:{NFSU2_TR(0x6f4ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4ab9:{NFSU2_TR(0x6f4ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4abc:{NFSU2_TR(0x6f4abc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4abd:{NFSU2_TR(0x6f4abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f4ac0:{NFSU2_TR(0x6f4ac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4ac1:{NFSU2_TR(0x6f4ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4ac4:{NFSU2_TR(0x6f4ac4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4ac6:{NFSU2_TR(0x6f4ac6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f4ac9:{NFSU2_TR(0x6f4ac9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4aca:{NFSU2_TR(0x6f4aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4acd:{NFSU2_TR(0x6f4acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ad0:{NFSU2_TR(0x6f4ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ad3:{NFSU2_TR(0x6f4ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ad6:{NFSU2_TR(0x6f4ad6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4bf0;}}
}
B6f4adc:L6f4adc:{c.instructions+=6;NFSU2_TR(0x6f4adc);
__builtin_memmove((R+0),(R+12),4);
}
B6f4ade:{NFSU2_TR(0x6f4ade);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f4ae3:{NFSU2_TR(0x6f4ae3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c28d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f4aea:{NFSU2_TR(0x6f4aea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4aed:{NFSU2_TR(0x6f4aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f4af4:{NFSU2_TR(0x6f4af4);
if(r1(R+518)){{goto L6f4af9;}}
}
B6f4af6:L6f4af6:{c.instructions+=1;NFSU2_TR(0x6f4af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4af9:L6f4af9:{c.instructions+=2;NFSU2_TR(0x6f4af9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4afb:{NFSU2_TR(0x6f4afb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f4bfd;}}
}
B6f4b01:L6f4b01:{c.instructions+=2;NFSU2_TR(0x6f4b01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4b07:{NFSU2_TR(0x6f4b07);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f4bfd;}}
}
B6f4b0d:L6f4b0d:{c.instructions+=2;NFSU2_TR(0x6f4b0d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4b0f:{NFSU2_TR(0x6f4b0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f4bfd;}}
}
B6f4b15:L6f4b15:{c.instructions+=2;NFSU2_TR(0x6f4b15);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4b1b:{NFSU2_TR(0x6f4b1b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f4bfd;}}
}
B6f4b21:L6f4b21:{c.instructions+=4;NFSU2_TR(0x6f4b21);
__builtin_memmove((R+0),(R+24),4);
}
B6f4b23:{NFSU2_TR(0x6f4b23);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f4b26:{NFSU2_TR(0x6f4b26);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4b2b:{NFSU2_TR(0x6f4b2b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f4bfd;}}
}
B6f4b31:L6f4b31:{c.instructions+=3;NFSU2_TR(0x6f4b31);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f4b33:{NFSU2_TR(0x6f4b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4b36:{NFSU2_TR(0x6f4b36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f4bf0;}}
}
B6f4b3c:L6f4b3c:{c.instructions+=2;NFSU2_TR(0x6f4b3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4b3d:{NFSU2_TR(0x6f4b3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4b42ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4990u);}goto L6f4990;}
}
B6f4b42:L6f4b42:{c.instructions+=2;NFSU2_TR(0x6f4b42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f4b45:{NFSU2_TR(0x6f4b45);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f4b48:L6f4b48:{c.instructions+=3;NFSU2_TR(0x6f4b48);
__builtin_memmove((R+0),(R+12),4);
}
B6f4b4a:{NFSU2_TR(0x6f4b4a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x60ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4b4d:{NFSU2_TR(0x6f4b4d);
if(r1(R+518)){{goto L6f4b55;}}
}
B6f4b4f:L6f4b4f:{c.instructions+=2;NFSU2_TR(0x6f4b4f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4b50:{NFSU2_TR(0x6f4b50);
if(r1(R+518)){{goto L6f4b55;}}
}
B6f4b52:L6f4b52:{c.instructions+=2;NFSU2_TR(0x6f4b52);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4b53:{NFSU2_TR(0x6f4b53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4b63;}}
}
B6f4b55:L6f4b55:{c.instructions+=5;NFSU2_TR(0x6f4b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4b58:{NFSU2_TR(0x6f4b58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f4b5b:{NFSU2_TR(0x6f4b5b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6f4b5e:{NFSU2_TR(0x6f4b5e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B6f4b61:{NFSU2_TR(0x6f4b61);
{goto L6f4b89;}
}
B6f4b63:L6f4b63:{c.instructions+=2;NFSU2_TR(0x6f4b63);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4b66:{NFSU2_TR(0x6f4b66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4b70;}}
}
B6f4b68:L6f4b68:{c.instructions+=3;NFSU2_TR(0x6f4b68);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4b6b:{NFSU2_TR(0x6f4b6b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B6f4b6e:{NFSU2_TR(0x6f4b6e);
{goto L6f4b87;}
}
B6f4b70:L6f4b70:{c.instructions+=3;NFSU2_TR(0x6f4b70);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f4b73:{NFSU2_TR(0x6f4b73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4b75:{NFSU2_TR(0x6f4b75);
if(r1(R+518)){{goto L6f4b85;}}
}
B6f4b77:L6f4b77:{c.instructions+=5;NFSU2_TR(0x6f4b77);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1full))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4b7a:{NFSU2_TR(0x6f4b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f4b7d:{NFSU2_TR(0x6f4b7d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B6f4b80:{NFSU2_TR(0x6f4b80);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B6f4b83:{NFSU2_TR(0x6f4b83);
{goto L6f4b89;}
}
B6f4b85:L6f4b85:{c.instructions+=1;NFSU2_TR(0x6f4b85);
__builtin_memmove((R+0),(R+28),4);
}
B6f4b87:L6f4b87:{c.instructions+=1;NFSU2_TR(0x6f4b87);
__builtin_memmove((R+4),(R+24),4);
}
B6f4b89:L6f4b89:{c.instructions+=12;NFSU2_TR(0x6f4b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f4b8c:{NFSU2_TR(0x6f4b8c);
__builtin_memmove((R+8),(R+0),4);
}
B6f4b8e:{NFSU2_TR(0x6f4b8e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6f4b92:{NFSU2_TR(0x6f4b92);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7ull))));
}
B6f4b95:{NFSU2_TR(0x6f4b95);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6f4b98:{NFSU2_TR(0x6f4b98);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6f4b9b:{NFSU2_TR(0x6f4b9b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B6f4b9d:{NFSU2_TR(0x6f4b9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6f4ba0:{NFSU2_TR(0x6f4ba0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4ba2:{NFSU2_TR(0x6f4ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ba5:{NFSU2_TR(0x6f4ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f4ba8:{NFSU2_TR(0x6f4ba8);
if(r1(R+518)){{goto L6f4bbd;}}
}
B6f4baa:L6f4baa:{c.instructions+=4;NFSU2_TR(0x6f4baa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4bab:{NFSU2_TR(0x6f4bab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4bac:{NFSU2_TR(0x6f4bac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4bad:{NFSU2_TR(0x6f4bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4bb2ull));
TAIL_STATIC(0x6f5500u,6f5);
}
B6f4bb2:L6f4bb2:{c.instructions+=4;NFSU2_TR(0x6f4bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4bb5:{NFSU2_TR(0x6f4bb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6f4bb8:{NFSU2_TR(0x6f4bb8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6f4bba:{NFSU2_TR(0x6f4bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4bbd:L6f4bbd:{c.instructions+=2;NFSU2_TR(0x6f4bbd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4bc0:{NFSU2_TR(0x6f4bc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4bc6;}}
}
B6f4bc2:L6f4bc2:{c.instructions+=2;NFSU2_TR(0x6f4bc2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4bc4:{NFSU2_TR(0x6f4bc4);
if(r1(R+518)){{goto L6f4bf0;}}
}
B6f4bc6:L6f4bc6:{c.instructions+=4;NFSU2_TR(0x6f4bc6);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f4bc8:{NFSU2_TR(0x6f4bc8);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B6f4bca:{NFSU2_TR(0x6f4bca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f4bcd:{NFSU2_TR(0x6f4bcd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f4bd4;}}
}
B6f4bcf:L6f4bcf:{c.instructions+=1;NFSU2_TR(0x6f4bcf);
w4(R+28,u32(0x1ull));
}
B6f4bd4:L6f4bd4:{c.instructions+=2;NFSU2_TR(0x6f4bd4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f4bd7:{NFSU2_TR(0x6f4bd7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f4bde;}}
}
B6f4bd9:L6f4bd9:{c.instructions+=1;NFSU2_TR(0x6f4bd9);
w4(R+24,u32(0x1ull));
}
B6f4bde:L6f4bde:{c.instructions+=6;NFSU2_TR(0x6f4bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4be1:{NFSU2_TR(0x6f4be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4be4:{NFSU2_TR(0x6f4be4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f4be5:{NFSU2_TR(0x6f4be5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4be7:{NFSU2_TR(0x6f4be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4bea:{NFSU2_TR(0x6f4bea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4b48u);}goto L6f4b48;}}
}
B6f4bf0:L6f4bf0:{c.instructions+=8;NFSU2_TR(0x6f4bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4bf3:{NFSU2_TR(0x6f4bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4bf4:{NFSU2_TR(0x6f4bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4bf5:{NFSU2_TR(0x6f4bf5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4bf8:{NFSU2_TR(0x6f4bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4bf9:{NFSU2_TR(0x6f4bf9);
__builtin_memmove((R+16),(R+20),4);
}
B6f4bfb:{NFSU2_TR(0x6f4bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4bfc:{NFSU2_TR(0x6f4bfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4bfd:L6f4bfd:{c.instructions+=7;NFSU2_TR(0x6f4bfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4bfe:{NFSU2_TR(0x6f4bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4bff:{NFSU2_TR(0x6f4bff);
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
B6f4c01:{NFSU2_TR(0x6f4c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4c02:{NFSU2_TR(0x6f4c02);
__builtin_memmove((R+16),(R+20),4);
}
B6f4c04:{NFSU2_TR(0x6f4c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4c05:{NFSU2_TR(0x6f4c05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4c10:L6f4c10:{c.instructions+=17;NFSU2_TR(0x6f4c10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4c11:{NFSU2_TR(0x6f4c11);
__builtin_memmove((R+20),(R+16),4);
}
B6f4c13:{NFSU2_TR(0x6f4c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4c16:{NFSU2_TR(0x6f4c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4c19:{NFSU2_TR(0x6f4c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4c1c:{NFSU2_TR(0x6f4c1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4c1d:{NFSU2_TR(0x6f4c1d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f4c22:{NFSU2_TR(0x6f4c22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4c23:{NFSU2_TR(0x6f4c23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4c24:{NFSU2_TR(0x6f4c24);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c28d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6f4c2b:{NFSU2_TR(0x6f4c2b);
__builtin_memmove((R+0),(R+8),4);
}
B6f4c2d:{NFSU2_TR(0x6f4c2d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f4c32:{NFSU2_TR(0x6f4c32);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c28d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f4c39:{NFSU2_TR(0x6f4c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4c3c:{NFSU2_TR(0x6f4c3c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f4c3e:{NFSU2_TR(0x6f4c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4c40:{NFSU2_TR(0x6f4c40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4c47;}}
}
B6f4c42:L6f4c42:{c.instructions+=2;NFSU2_TR(0x6f4c42);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x79ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4c45:{NFSU2_TR(0x6f4c45);
if(r1(R+518)){{goto L6f4c4c;}}
}
B6f4c47:L6f4c47:{c.instructions+=2;NFSU2_TR(0x6f4c47);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4c4a:{NFSU2_TR(0x6f4c4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4c66;}}
}
B6f4c4c:L6f4c4c:{c.instructions+=2;NFSU2_TR(0x6f4c4c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4c4f:{NFSU2_TR(0x6f4c4f);
if(r1(R+518)){{goto L6f4c61;}}
}
B6f4c51:L6f4c51:{c.instructions+=6;NFSU2_TR(0x6f4c51);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f4c53:{NFSU2_TR(0x6f4c53);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4c56:{NFSU2_TR(0x6f4c56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6f4c59:{NFSU2_TR(0x6f4c59);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f4c5a:{NFSU2_TR(0x6f4c5a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x100ull))));
}
B6f4c5f:{NFSU2_TR(0x6f4c5f);
{goto L6f4c66;}
}
B6f4c61:L6f4c61:{c.instructions+=1;NFSU2_TR(0x6f4c61);
w4(R+0,u32(0x10ull));
}
B6f4c66:L6f4c66:{c.instructions+=3;NFSU2_TR(0x6f4c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4c69:{NFSU2_TR(0x6f4c69);
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
B6f4c6b:{NFSU2_TR(0x6f4c6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4c81;}}
}
B6f4c6d:L6f4c6d:{c.instructions+=11;NFSU2_TR(0x6f4c6d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f4c70:{NFSU2_TR(0x6f4c70);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6f4c71:{NFSU2_TR(0x6f4c71);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B6f4c74:{NFSU2_TR(0x6f4c74);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6f4c76:{NFSU2_TR(0x6f4c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4c77:{NFSU2_TR(0x6f4c77);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6f4c7a:{NFSU2_TR(0x6f4c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4c7b:{NFSU2_TR(0x6f4c7b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4c7e:{NFSU2_TR(0x6f4c7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4c7f:{NFSU2_TR(0x6f4c7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4c80:{NFSU2_TR(0x6f4c80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4c81:L6f4c81:{c.instructions+=6;NFSU2_TR(0x6f4c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4c82:{NFSU2_TR(0x6f4c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4c83:{NFSU2_TR(0x6f4c83);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4c86:{NFSU2_TR(0x6f4c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4c87:{NFSU2_TR(0x6f4c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4c88:{NFSU2_TR(0x6f4c88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4c90:L6f4c90:{c.instructions+=9;NFSU2_TR(0x6f4c90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4c91:{NFSU2_TR(0x6f4c91);
__builtin_memmove((R+20),(R+16),4);
}
B6f4c93:{NFSU2_TR(0x6f4c93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4c94:{NFSU2_TR(0x6f4c94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4c95:{NFSU2_TR(0x6f4c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4c98:{NFSU2_TR(0x6f4c98);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f4c9b:{NFSU2_TR(0x6f4c9b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f4c9d:{NFSU2_TR(0x6f4c9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4c9f:{NFSU2_TR(0x6f4c9f);
if(r1(R+518)){{goto L6f4cac;}}
}
B6f4ca1:L6f4ca1:{c.instructions+=2;NFSU2_TR(0x6f4ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4ca2:{NFSU2_TR(0x6f4ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4ca7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4ab0u);}goto L6f4ab0;}
}
B6f4ca7:L6f4ca7:{c.instructions+=2;NFSU2_TR(0x6f4ca7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f4caa:{NFSU2_TR(0x6f4caa);
__builtin_memmove((R+24),(R+0),4);
}
B6f4cac:L6f4cac:{c.instructions+=4;NFSU2_TR(0x6f4cac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4cad:{NFSU2_TR(0x6f4cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f4cb0:{NFSU2_TR(0x6f4cb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4cb3:{NFSU2_TR(0x6f4cb3);
if(r1(R+518)){{goto L6f4cd1;}}
}
B6f4cb5:L6f4cb5:{c.instructions+=2;NFSU2_TR(0x6f4cb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4cb7:{NFSU2_TR(0x6f4cb7);
if(r1(R+518)){{goto L6f4cc6;}}
}
B6f4cb9:L6f4cb9:{c.instructions+=3;NFSU2_TR(0x6f4cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4cbc:{NFSU2_TR(0x6f4cbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4cbe:{NFSU2_TR(0x6f4cbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4cc6;}}
}
B6f4cc0:L6f4cc0:{c.instructions+=2;NFSU2_TR(0x6f4cc0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfull))));
}
B6f4cc3:{NFSU2_TR(0x6f4cc3);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f4cc6:L6f4cc6:{c.instructions+=2;NFSU2_TR(0x6f4cc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4cc7:{NFSU2_TR(0x6f4cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4cccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4c10u);}goto L6f4c10;}
}
B6f4ccc:L6f4ccc:{c.instructions+=2;NFSU2_TR(0x6f4ccc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f4ccf:{NFSU2_TR(0x6f4ccf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6f4cd1:L6f4cd1:{c.instructions+=2;NFSU2_TR(0x6f4cd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4cd4:{NFSU2_TR(0x6f4cd4);
if(r1(R+518)){{goto L6f4ce3;}}
}
B6f4cd6:L6f4cd6:{c.instructions+=2;NFSU2_TR(0x6f4cd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4cd8:{NFSU2_TR(0x6f4cd8);
if(r1(R+518)){{goto L6f4ce0;}}
}
B6f4cda:L6f4cda:{c.instructions+=2;NFSU2_TR(0x6f4cda);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfull))));
}
B6f4cdd:{NFSU2_TR(0x6f4cdd);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f4ce0:L6f4ce0:{c.instructions+=1;NFSU2_TR(0x6f4ce0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6f4ce3:L6f4ce3:{c.instructions+=2;NFSU2_TR(0x6f4ce3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f4ce6:{NFSU2_TR(0x6f4ce6);
if(r1(R+518)){{goto L6f4d00;}}
}
B6f4ce8:L6f4ce8:{c.instructions+=2;NFSU2_TR(0x6f4ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4cea:{NFSU2_TR(0x6f4cea);
if(r1(R+518)){{goto L6f4cf2;}}
}
B6f4cec:L6f4cec:{c.instructions+=2;NFSU2_TR(0x6f4cec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfull))));
}
B6f4cef:{NFSU2_TR(0x6f4cef);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f4cf2:L6f4cf2:{c.instructions+=3;NFSU2_TR(0x6f4cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4cf8:{NFSU2_TR(0x6f4cf8);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6f4cfc:{NFSU2_TR(0x6f4cfc);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f4d00:L6f4d00:{c.instructions+=2;NFSU2_TR(0x6f4d00);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6f4d02:{NFSU2_TR(0x6f4d02);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6f4d19;}}
}
B6f4d04:L6f4d04:{c.instructions+=2;NFSU2_TR(0x6f4d04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f4d06:{NFSU2_TR(0x6f4d06);
if(r1(R+518)){{goto L6f4d0f;}}
}
B6f4d08:L6f4d08:{c.instructions+=3;NFSU2_TR(0x6f4d08);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6f4d09:{NFSU2_TR(0x6f4d09);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f4d0c:{NFSU2_TR(0x6f4d0c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6f4d0f:L6f4d0f:{c.instructions+=2;NFSU2_TR(0x6f4d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4d15:{NFSU2_TR(0x6f4d15);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6f4d19:L6f4d19:{c.instructions+=3;NFSU2_TR(0x6f4d19);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f4d1c:{NFSU2_TR(0x6f4d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f4d1d:{NFSU2_TR(0x6f4d1d);
if(r1(R+518)){{goto L6f4d38;}}
}
B6f4d1f:L6f4d1f:{c.instructions+=2;NFSU2_TR(0x6f4d1f);
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
B6f4d21:{NFSU2_TR(0x6f4d21);
if(r1(R+518)){{goto L6f4d2a;}}
}
B6f4d23:L6f4d23:{c.instructions+=3;NFSU2_TR(0x6f4d23);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6f4d24:{NFSU2_TR(0x6f4d24);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B6f4d27:{NFSU2_TR(0x6f4d27);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4d2a:L6f4d2a:{c.instructions+=6;NFSU2_TR(0x6f4d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4d30:{NFSU2_TR(0x6f4d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4d31:{NFSU2_TR(0x6f4d31);
u8 U[12];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f4d35:{NFSU2_TR(0x6f4d35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4d36:{NFSU2_TR(0x6f4d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4d37:{NFSU2_TR(0x6f4d37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4d38:L6f4d38:{c.instructions+=5;NFSU2_TR(0x6f4d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4d39:{NFSU2_TR(0x6f4d39);
__builtin_memmove((R+0),(R+24),4);
}
B6f4d3b:{NFSU2_TR(0x6f4d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4d3c:{NFSU2_TR(0x6f4d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4d3d:{NFSU2_TR(0x6f4d3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4d40:L6f4d40:{c.instructions+=47;NFSU2_TR(0x6f4d40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4d41:{NFSU2_TR(0x6f4d41);
__builtin_memmove((R+20),(R+16),4);
}
B6f4d43:{NFSU2_TR(0x6f4d43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f4d45:{NFSU2_TR(0x6f4d45);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffeffull))));
}
B6f4d4a:{NFSU2_TR(0x6f4d4a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100ull))));
}
B6f4d4f:{NFSU2_TR(0x6f4d4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f4d51:{NFSU2_TR(0x6f4d51);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4d53:{NFSU2_TR(0x6f4d53);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffbffull))));
}
B6f4d58:{NFSU2_TR(0x6f4d58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4d59:{NFSU2_TR(0x6f4d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4d5c:{NFSU2_TR(0x6f4d5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4d5d:{NFSU2_TR(0x6f4d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4d60:{NFSU2_TR(0x6f4d60);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4d63:{NFSU2_TR(0x6f4d63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f4d66:{NFSU2_TR(0x6f4d66);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f4d67:{NFSU2_TR(0x6f4d67);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4ull))));
}
B6f4d6a:{NFSU2_TR(0x6f4d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f4d6d:{NFSU2_TR(0x6f4d6d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B6f4d6f:{NFSU2_TR(0x6f4d6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f4d71:{NFSU2_TR(0x6f4d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4d74:{NFSU2_TR(0x6f4d74);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffff7ffull))));
}
B6f4d7a:{NFSU2_TR(0x6f4d7a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f4d7c:{NFSU2_TR(0x6f4d7c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4d7f:{NFSU2_TR(0x6f4d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6f4d82:{NFSU2_TR(0x6f4d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4d83:{NFSU2_TR(0x6f4d83);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f4d84:{NFSU2_TR(0x6f4d84);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
}
B6f4d87:{NFSU2_TR(0x6f4d87);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f4d8a:{NFSU2_TR(0x6f4d8a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6f4d8c:{NFSU2_TR(0x6f4d8c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4d8e:{NFSU2_TR(0x6f4d8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f4d90:{NFSU2_TR(0x6f4d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4d93:{NFSU2_TR(0x6f4d93);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffdffull))));
}
B6f4d98:{NFSU2_TR(0x6f4d98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4d9b:{NFSU2_TR(0x6f4d9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f4d9e:{NFSU2_TR(0x6f4d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4d9f:{NFSU2_TR(0x6f4d9f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f4da0:{NFSU2_TR(0x6f4da0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B6f4da3:{NFSU2_TR(0x6f4da3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f4da6:{NFSU2_TR(0x6f4da6);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B6f4da8:{NFSU2_TR(0x6f4da8);
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
B6f4daa:{NFSU2_TR(0x6f4daa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f4dac:{NFSU2_TR(0x6f4dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4daf:{NFSU2_TR(0x6f4daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4db2:{NFSU2_TR(0x6f4db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4db5:{NFSU2_TR(0x6f4db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4db6:{NFSU2_TR(0x6f4db6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4dc0:L6f4dc0:{c.instructions+=8;NFSU2_TR(0x6f4dc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4dc1:{NFSU2_TR(0x6f4dc1);
__builtin_memmove((R+20),(R+16),4);
}
B6f4dc3:{NFSU2_TR(0x6f4dc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4dc4:{NFSU2_TR(0x6f4dc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4dc5:{NFSU2_TR(0x6f4dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4dc8:{NFSU2_TR(0x6f4dc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4dc9:{NFSU2_TR(0x6f4dc9);
__builtin_memmove((R+24),(R+4),4);
}
B6f4dcb:{NFSU2_TR(0x6f4dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4dd0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4d40u);}goto L6f4d40;}
}
B6f4dd0:L6f4dd0:{c.instructions+=23;NFSU2_TR(0x6f4dd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f4dd3:{NFSU2_TR(0x6f4dd3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6f4dd5:{NFSU2_TR(0x6f4dd5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f4dd9:{NFSU2_TR(0x6f4dd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f4ddb:{NFSU2_TR(0x6f4ddb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4ddd:{NFSU2_TR(0x6f4ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4de0:{NFSU2_TR(0x6f4de0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffbfffffull))));
}
B6f4de5:{NFSU2_TR(0x6f4de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f4dec:{NFSU2_TR(0x6f4dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4def:{NFSU2_TR(0x6f4def);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4df2:{NFSU2_TR(0x6f4df2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6f4df5:{NFSU2_TR(0x6f4df5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4df6:{NFSU2_TR(0x6f4df6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f4df7:{NFSU2_TR(0x6f4df7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4000ull))));
}
B6f4dfd:{NFSU2_TR(0x6f4dfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6f4e00:{NFSU2_TR(0x6f4e00);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B6f4e02:{NFSU2_TR(0x6f4e02);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfeffff00ull))));
}
B6f4e08:{NFSU2_TR(0x6f4e08);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f4e0d:{NFSU2_TR(0x6f4e0d);
__builtin_memmove((R+4),(R+8),4);
}
B6f4e0f:{NFSU2_TR(0x6f4e0f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6f4e11:{NFSU2_TR(0x6f4e11);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffull))));
}
B6f4e17:{NFSU2_TR(0x6f4e17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f4e19:{NFSU2_TR(0x6f4e19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4e1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4c10u);}goto L6f4c10;}
}
B6f4e1e:L6f4e1e:{c.instructions+=6;NFSU2_TR(0x6f4e1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f4e21:{NFSU2_TR(0x6f4e21);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4e23:{NFSU2_TR(0x6f4e23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6f4e26:{NFSU2_TR(0x6f4e26);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x20ull))));
}
B6f4e29:{NFSU2_TR(0x6f4e29);
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
B6f4e2b:{NFSU2_TR(0x6f4e2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4e39;}}
}
B6f4e2d:L6f4e2d:{c.instructions+=6;NFSU2_TR(0x6f4e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4e2e:{NFSU2_TR(0x6f4e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e31:{NFSU2_TR(0x6f4e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e34:{NFSU2_TR(0x6f4e34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4e35:{NFSU2_TR(0x6f4e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4e36:{NFSU2_TR(0x6f4e36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4e39:L6f4e39:{c.instructions+=7;NFSU2_TR(0x6f4e39);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4e3b:{NFSU2_TR(0x6f4e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4e3c:{NFSU2_TR(0x6f4e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e3f:{NFSU2_TR(0x6f4e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e42:{NFSU2_TR(0x6f4e42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4e43:{NFSU2_TR(0x6f4e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4e44:{NFSU2_TR(0x6f4e44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4e50:L6f4e50:{c.instructions+=7;NFSU2_TR(0x6f4e50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4e51:{NFSU2_TR(0x6f4e51);
__builtin_memmove((R+20),(R+16),4);
}
B6f4e53:{NFSU2_TR(0x6f4e53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4e54:{NFSU2_TR(0x6f4e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4e57:{NFSU2_TR(0x6f4e57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4e58:{NFSU2_TR(0x6f4e58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4e59:{NFSU2_TR(0x6f4e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4e5eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4d40u);}goto L6f4d40;}
}
B6f4e5e:L6f4e5e:{c.instructions+=16;NFSU2_TR(0x6f4e5e);
u8 U[1];
w1(U+0,u8(0x7aull));
s1(u32(r4(R+4)),r1(U+0));
}
B6f4e61:{NFSU2_TR(0x6f4e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4e64:{NFSU2_TR(0x6f4e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4e67:{NFSU2_TR(0x6f4e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4e6a:{NFSU2_TR(0x6f4e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4e6d:{NFSU2_TR(0x6f4e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e70:{NFSU2_TR(0x6f4e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e73:{NFSU2_TR(0x6f4e73);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4e75:{NFSU2_TR(0x6f4e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e78:{NFSU2_TR(0x6f4e78);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4e7b:{NFSU2_TR(0x6f4e7b);
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
B6f4e7d:{NFSU2_TR(0x6f4e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f4e7e:{NFSU2_TR(0x6f4e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e81:{NFSU2_TR(0x6f4e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4e82:{NFSU2_TR(0x6f4e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e85:{NFSU2_TR(0x6f4e85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4e8e;}}
}
B6f4e87:L6f4e87:{c.instructions+=3;NFSU2_TR(0x6f4e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e8a:{NFSU2_TR(0x6f4e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4e8b:{NFSU2_TR(0x6f4e8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4e8e:L6f4e8e:{c.instructions+=4;NFSU2_TR(0x6f4e8e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4e90:{NFSU2_TR(0x6f4e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4e93:{NFSU2_TR(0x6f4e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4e94:{NFSU2_TR(0x6f4e94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4ea0:L6f4ea0:{c.instructions+=6;NFSU2_TR(0x6f4ea0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4ea1:{NFSU2_TR(0x6f4ea1);
__builtin_memmove((R+20),(R+16),4);
}
B6f4ea3:{NFSU2_TR(0x6f4ea3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4ea4:{NFSU2_TR(0x6f4ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4ea7:{NFSU2_TR(0x6f4ea7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4ea8:{NFSU2_TR(0x6f4ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4eadull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4d40u);}goto L6f4d40;}
}
B6f4ead:L6f4ead:{c.instructions+=16;NFSU2_TR(0x6f4ead);
u8 U[1];
w1(U+0,u8(0x7cull));
s1(u32(r4(R+4)),r1(U+0));
}
B6f4eb0:{NFSU2_TR(0x6f4eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4eb3:{NFSU2_TR(0x6f4eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4eb6:{NFSU2_TR(0x6f4eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4eb9:{NFSU2_TR(0x6f4eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ebc:{NFSU2_TR(0x6f4ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4ebf:{NFSU2_TR(0x6f4ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ec2:{NFSU2_TR(0x6f4ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4ec8:{NFSU2_TR(0x6f4ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ecb:{NFSU2_TR(0x6f4ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f4ece:{NFSU2_TR(0x6f4ece);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6f4ed5:{NFSU2_TR(0x6f4ed5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4ed8:{NFSU2_TR(0x6f4ed8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f4eda:{NFSU2_TR(0x6f4eda);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6f4edc:{NFSU2_TR(0x6f4edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f4ee3:{NFSU2_TR(0x6f4ee3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4ef0;}}
}
B6f4ee5:L6f4ee5:{c.instructions+=5;NFSU2_TR(0x6f4ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ee8:{NFSU2_TR(0x6f4ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4eeb:{NFSU2_TR(0x6f4eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4eec:{NFSU2_TR(0x6f4eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4eed:{NFSU2_TR(0x6f4eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4ef0:L6f4ef0:{c.instructions+=7;NFSU2_TR(0x6f4ef0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6f4ef2:{NFSU2_TR(0x6f4ef2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0xffffffe0ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0xffffffe0ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffffe0ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4ef5:{NFSU2_TR(0x6f4ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ef8:{NFSU2_TR(0x6f4ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4efb:{NFSU2_TR(0x6f4efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4efc:{NFSU2_TR(0x6f4efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4efd:{NFSU2_TR(0x6f4efd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4f00:L6f4f00:{c.instructions+=6;NFSU2_TR(0x6f4f00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f01:{NFSU2_TR(0x6f4f01);
__builtin_memmove((R+20),(R+16),4);
}
B6f4f03:{NFSU2_TR(0x6f4f03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f04:{NFSU2_TR(0x6f4f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4f07:{NFSU2_TR(0x6f4f07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f08:{NFSU2_TR(0x6f4f08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4f0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4d40u);}goto L6f4d40;}
}
B6f4f0d:L6f4f0d:{c.instructions+=6;NFSU2_TR(0x6f4f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f4f13:{NFSU2_TR(0x6f4f13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4f16:{NFSU2_TR(0x6f4f16);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6f4f18:{NFSU2_TR(0x6f4f18);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4f1a:{NFSU2_TR(0x6f4f1a);
u8 U[1];
w1(U+0,u8(0x69ull));
s1(u32(r4(R+4)),r1(U+0));
}
B6f4f1d:{NFSU2_TR(0x6f4f1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4f27;}}
}
B6f4f1f:L6f4f1f:{c.instructions+=3;NFSU2_TR(0x6f4f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4f22:{NFSU2_TR(0x6f4f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4f25:{NFSU2_TR(0x6f4f25);
{goto L6f4f2f;}
}
B6f4f27:L6f4f27:{c.instructions+=3;NFSU2_TR(0x6f4f27);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6f4f29:{NFSU2_TR(0x6f4f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4f2c:{NFSU2_TR(0x6f4f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4f2f:L6f4f2f:{c.instructions+=3;NFSU2_TR(0x6f4f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f4f32:{NFSU2_TR(0x6f4f32);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4f34:{NFSU2_TR(0x6f4f34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f4f4c;}}
}
B6f4f36:L6f4f36:{c.instructions+=5;NFSU2_TR(0x6f4f36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f37:{NFSU2_TR(0x6f4f37);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f4f39:{NFSU2_TR(0x6f4f39);
u8 U[4];
w4(U+0,u32(0x7c2a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f3e:{NFSU2_TR(0x6f4f3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f3f:{NFSU2_TR(0x6f4f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4f44ull));
TAIL_STATIC(0x75c784u,75c);
}
B6f4f44:L6f4f44:{c.instructions+=4;NFSU2_TR(0x6f4f44);
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
B6f4f47:{NFSU2_TR(0x6f4f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4f48:{NFSU2_TR(0x6f4f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4f49:{NFSU2_TR(0x6f4f49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4f4c:L6f4f4c:{c.instructions+=5;NFSU2_TR(0x6f4f4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f4d:{NFSU2_TR(0x6f4f4d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6f4f4f:{NFSU2_TR(0x6f4f4f);
u8 U[4];
w4(U+0,u32(0x7c2a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f54:{NFSU2_TR(0x6f4f54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f55:{NFSU2_TR(0x6f4f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4f5aull));
TAIL_STATIC(0x75c784u,75c);
}
B6f4f5a:L6f4f5a:{c.instructions+=4;NFSU2_TR(0x6f4f5a);
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
B6f4f5d:{NFSU2_TR(0x6f4f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f4f5e:{NFSU2_TR(0x6f4f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4f5f:{NFSU2_TR(0x6f4f5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4f70:L6f4f70:{c.instructions+=9;NFSU2_TR(0x6f4f70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4f71:{NFSU2_TR(0x6f4f71);
__builtin_memmove((R+20),(R+16),4);
}
B6f4f73:{NFSU2_TR(0x6f4f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f4f76:{NFSU2_TR(0x6f4f76);
__builtin_memmove((R+0),(R+4),4);
}
B6f4f78:{NFSU2_TR(0x6f4f78);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6f4f7d:{NFSU2_TR(0x6f4f7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c28d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6f4f84:{NFSU2_TR(0x6f4f84);
__builtin_memmove((R+0),(R+4),4);
}
B6f4f86:{NFSU2_TR(0x6f4f86);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x60ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4f89:{NFSU2_TR(0x6f4f89);
if(r1(R+518)){{goto L6f4fb0;}}
}
B6f4f8b:L6f4f8b:{c.instructions+=2;NFSU2_TR(0x6f4f8b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4f8c:{NFSU2_TR(0x6f4f8c);
if(r1(R+518)){{goto L6f4fb0;}}
}
B6f4f8e:L6f4f8e:{c.instructions+=2;NFSU2_TR(0x6f4f8e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6f4f8f:{NFSU2_TR(0x6f4f8f);
if(r1(R+518)){{goto L6f4fb0;}}
}
B6f4f91:L6f4f91:{c.instructions+=2;NFSU2_TR(0x6f4f91);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f4f94:{NFSU2_TR(0x6f4f94);
if(r1(R+518)){{goto L6f4fb0;}}
}
B6f4f96:L6f4f96:{c.instructions+=3;NFSU2_TR(0x6f4f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6f4f99:{NFSU2_TR(0x6f4f99);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f4f9c:{NFSU2_TR(0x6f4f9c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6f4fb0;}}
}
B6f4f9e:L6f4f9e:{c.instructions+=2;NFSU2_TR(0x6f4f9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f4fbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f4fa5:{NFSU2_TR(0x6f4fa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6f4fb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f4fac:L6f4fac:{c.instructions+=3;NFSU2_TR(0x6f4fac);
w1(R+0,u8(0x1ull));
}
B6f4fae:{NFSU2_TR(0x6f4fae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4faf:{NFSU2_TR(0x6f4faf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4fb0:L6f4fb0:{c.instructions+=3;NFSU2_TR(0x6f4fb0);
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
B6f4fb2:{NFSU2_TR(0x6f4fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f4fb3:{NFSU2_TR(0x6f4fb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f4fe0:L6f4fe0:{c.instructions+=9;NFSU2_TR(0x6f4fe0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4fe1:{NFSU2_TR(0x6f4fe1);
__builtin_memmove((R+20),(R+16),4);
}
B6f4fe3:{NFSU2_TR(0x6f4fe3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4fe4:{NFSU2_TR(0x6f4fe4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4fe5:{NFSU2_TR(0x6f4fe5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4fe6:{NFSU2_TR(0x6f4fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f4fe9:{NFSU2_TR(0x6f4fe9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f4fea:{NFSU2_TR(0x6f4fea);
__builtin_memmove((R+24),(R+4),4);
}
B6f4fec:{NFSU2_TR(0x6f4fec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f4ff1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f4d40u);}goto L6f4d40;}
}
B6f4ff1:L6f4ff1:{c.instructions+=5;NFSU2_TR(0x6f4ff1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f4ff4:{NFSU2_TR(0x6f4ff4);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B6f4ff6:{NFSU2_TR(0x6f4ff6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f4ffa:{NFSU2_TR(0x6f4ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f4ffd:{NFSU2_TR(0x6f4ffd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
TAIL_STATIC(0x6f5001u,6f5);
}
XIT:NFSU2_TR_EXIT(0x6f4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
