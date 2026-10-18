#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c5(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c4(u8* __restrict R,Cpu& c);
u32 page_6c4(Cpu& c){return body_6c4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c4004:goto L6c4004;
case 0x6c4005:c.instructions+=1;goto B6c4005;
case 0x6c400a:goto L6c400a;
case 0x6c400c:c.instructions+=2;goto B6c400c;
case 0x6c400f:c.instructions+=1;goto B6c400f;
case 0x6c4011:goto L6c4011;
case 0x6c4017:c.instructions+=2;goto B6c4017;
case 0x6c401a:c.instructions+=1;goto B6c401a;
case 0x6c401f:goto L6c401f;
case 0x6c4021:c.instructions+=2;goto B6c4021;
case 0x6c4024:c.instructions+=1;goto B6c4024;
case 0x6c402a:goto L6c402a;
case 0x6c4030:c.instructions+=8;goto B6c4030;
case 0x6c4032:c.instructions+=7;goto B6c4032;
case 0x6c4035:c.instructions+=6;goto B6c4035;
case 0x6c4038:c.instructions+=5;goto B6c4038;
case 0x6c403b:c.instructions+=4;goto B6c403b;
case 0x6c403e:c.instructions+=3;goto B6c403e;
case 0x6c4041:c.instructions+=2;goto B6c4041;
case 0x6c4043:c.instructions+=1;goto B6c4043;
case 0x6c4046:goto L6c4046;
case 0x6c4048:goto L6c4048;
case 0x6c404a:c.instructions+=1;goto B6c404a;
case 0x6c404d:goto L6c404d;
case 0x6c404f:goto L6c404f;
case 0x6c4052:c.instructions+=8;goto B6c4052;
case 0x6c4055:c.instructions+=7;goto B6c4055;
case 0x6c4058:c.instructions+=6;goto B6c4058;
case 0x6c405a:c.instructions+=5;goto B6c405a;
case 0x6c405d:c.instructions+=4;goto B6c405d;
case 0x6c4060:c.instructions+=3;goto B6c4060;
case 0x6c4067:c.instructions+=2;goto B6c4067;
case 0x6c4069:c.instructions+=1;goto B6c4069;
case 0x6c406c:goto L6c406c;
case 0x6c406e:goto L6c406e;
case 0x6c4070:c.instructions+=1;goto B6c4070;
case 0x6c4073:goto L6c4073;
case 0x6c4075:goto L6c4075;
case 0x6c4078:c.instructions+=5;goto B6c4078;
case 0x6c407a:c.instructions+=4;goto B6c407a;
case 0x6c407c:c.instructions+=3;goto B6c407c;
case 0x6c407f:c.instructions+=2;goto B6c407f;
case 0x6c4085:c.instructions+=1;goto B6c4085;
case 0x6c4088:goto L6c4088;
case 0x6c408a:goto L6c408a;
case 0x6c408c:c.instructions+=1;goto B6c408c;
case 0x6c408f:goto L6c408f;
case 0x6c4091:goto L6c4091;
case 0x6c4094:c.instructions+=13;goto B6c4094;
case 0x6c4096:c.instructions+=12;goto B6c4096;
case 0x6c4099:c.instructions+=11;goto B6c4099;
case 0x6c409c:c.instructions+=10;goto B6c409c;
case 0x6c409f:c.instructions+=9;goto B6c409f;
case 0x6c40a2:c.instructions+=8;goto B6c40a2;
case 0x6c40a5:c.instructions+=7;goto B6c40a5;
case 0x6c40a7:c.instructions+=6;goto B6c40a7;
case 0x6c40aa:c.instructions+=5;goto B6c40aa;
case 0x6c40ad:c.instructions+=4;goto B6c40ad;
case 0x6c40b0:c.instructions+=3;goto B6c40b0;
case 0x6c40b3:c.instructions+=2;goto B6c40b3;
case 0x6c40b6:c.instructions+=1;goto B6c40b6;
case 0x6c40b8:goto L6c40b8;
case 0x6c40bb:c.instructions+=2;goto B6c40bb;
case 0x6c40be:c.instructions+=1;goto B6c40be;
case 0x6c40c4:goto L6c40c4;
case 0x6c40c7:goto L6c40c7;
case 0x6c40ca:c.instructions+=1;goto B6c40ca;
case 0x6c40cc:goto L6c40cc;
case 0x6c40cf:c.instructions+=2;goto B6c40cf;
case 0x6c40d2:c.instructions+=1;goto B6c40d2;
case 0x6c40d8:goto L6c40d8;
case 0x6c40db:c.instructions+=2;goto B6c40db;
case 0x6c40dd:c.instructions+=1;goto B6c40dd;
case 0x6c40e3:goto L6c40e3;
case 0x6c40e5:c.instructions+=3;goto B6c40e5;
case 0x6c40e8:c.instructions+=2;goto B6c40e8;
case 0x6c40ea:c.instructions+=1;goto B6c40ea;
case 0x6c40ec:goto L6c40ec;
case 0x6c40ef:c.instructions+=2;goto B6c40ef;
case 0x6c40f1:c.instructions+=1;goto B6c40f1;
case 0x6c40f7:goto L6c40f7;
case 0x6c40f9:goto L6c40f9;
case 0x6c40fc:c.instructions+=2;goto B6c40fc;
case 0x6c40fe:c.instructions+=1;goto B6c40fe;
case 0x6c4103:goto L6c4103;
case 0x6c4106:c.instructions+=1;goto B6c4106;
case 0x6c4108:goto L6c4108;
case 0x6c4109:c.instructions+=8;goto B6c4109;
case 0x6c410a:c.instructions+=7;goto B6c410a;
case 0x6c410d:c.instructions+=6;goto B6c410d;
case 0x6c410e:c.instructions+=5;goto B6c410e;
case 0x6c4110:c.instructions+=4;goto B6c4110;
case 0x6c4115:c.instructions+=3;goto B6c4115;
case 0x6c411a:c.instructions+=2;goto B6c411a;
case 0x6c411b:c.instructions+=1;goto B6c411b;
case 0x6c4120:goto L6c4120;
case 0x6c4122:c.instructions+=2;goto B6c4122;
case 0x6c4125:c.instructions+=1;goto B6c4125;
case 0x6c412b:goto L6c412b;
case 0x6c412d:c.instructions+=2;goto B6c412d;
case 0x6c4130:c.instructions+=1;goto B6c4130;
case 0x6c4136:goto L6c4136;
case 0x6c413a:c.instructions+=1;goto B6c413a;
case 0x6c4140:goto L6c4140;
case 0x6c4145:goto L6c4145;
case 0x6c4147:c.instructions+=37;goto B6c4147;
case 0x6c4148:c.instructions+=36;goto B6c4148;
case 0x6c414a:c.instructions+=35;goto B6c414a;
case 0x6c4150:c.instructions+=34;goto B6c4150;
case 0x6c4151:c.instructions+=33;goto B6c4151;
case 0x6c4152:c.instructions+=32;goto B6c4152;
case 0x6c4154:c.instructions+=31;goto B6c4154;
case 0x6c415a:c.instructions+=30;goto B6c415a;
case 0x6c415c:c.instructions+=29;goto B6c415c;
case 0x6c415d:c.instructions+=28;goto B6c415d;
case 0x6c415f:c.instructions+=27;goto B6c415f;
case 0x6c4161:c.instructions+=26;goto B6c4161;
case 0x6c4167:c.instructions+=25;goto B6c4167;
case 0x6c416a:c.instructions+=24;goto B6c416a;
case 0x6c416d:c.instructions+=23;goto B6c416d;
case 0x6c4170:c.instructions+=22;goto B6c4170;
case 0x6c4173:c.instructions+=21;goto B6c4173;
case 0x6c4176:c.instructions+=20;goto B6c4176;
case 0x6c4179:c.instructions+=19;goto B6c4179;
case 0x6c417c:c.instructions+=18;goto B6c417c;
case 0x6c4183:c.instructions+=17;goto B6c4183;
case 0x6c418a:c.instructions+=16;goto B6c418a;
case 0x6c418c:c.instructions+=15;goto B6c418c;
case 0x6c418d:c.instructions+=14;goto B6c418d;
case 0x6c418e:c.instructions+=13;goto B6c418e;
case 0x6c4191:c.instructions+=12;goto B6c4191;
case 0x6c4192:c.instructions+=11;goto B6c4192;
case 0x6c4198:c.instructions+=10;goto B6c4198;
case 0x6c4199:c.instructions+=9;goto B6c4199;
case 0x6c419c:c.instructions+=8;goto B6c419c;
case 0x6c419d:c.instructions+=7;goto B6c419d;
case 0x6c41a3:c.instructions+=6;goto B6c41a3;
case 0x6c41a4:c.instructions+=5;goto B6c41a4;
case 0x6c41a9:c.instructions+=4;goto B6c41a9;
case 0x6c41aa:c.instructions+=3;goto B6c41aa;
case 0x6c41ac:c.instructions+=2;goto B6c41ac;
case 0x6c41b3:c.instructions+=1;goto B6c41b3;
case 0x6c41b8:goto L6c41b8;
case 0x6c41ba:c.instructions+=1;goto B6c41ba;
case 0x6c41bc:goto L6c41bc;
case 0x6c41bd:c.instructions+=14;goto B6c41bd;
case 0x6c41be:c.instructions+=13;goto B6c41be;
case 0x6c41c1:c.instructions+=12;goto B6c41c1;
case 0x6c41c2:c.instructions+=11;goto B6c41c2;
case 0x6c41c8:c.instructions+=10;goto B6c41c8;
case 0x6c41c9:c.instructions+=9;goto B6c41c9;
case 0x6c41cc:c.instructions+=8;goto B6c41cc;
case 0x6c41cd:c.instructions+=7;goto B6c41cd;
case 0x6c41d3:c.instructions+=6;goto B6c41d3;
case 0x6c41d4:c.instructions+=5;goto B6c41d4;
case 0x6c41d9:c.instructions+=4;goto B6c41d9;
case 0x6c41df:c.instructions+=3;goto B6c41df;
case 0x6c41e1:c.instructions+=2;goto B6c41e1;
case 0x6c41e8:c.instructions+=1;goto B6c41e8;
case 0x6c41ed:goto L6c41ed;
case 0x6c41ef:c.instructions+=1;goto B6c41ef;
case 0x6c41f5:goto L6c41f5;
case 0x6c41f9:c.instructions+=4;goto B6c41f9;
case 0x6c41ff:c.instructions+=3;goto B6c41ff;
case 0x6c4202:c.instructions+=2;goto B6c4202;
case 0x6c4208:c.instructions+=1;goto B6c4208;
case 0x6c420b:goto L6c420b;
case 0x6c420f:c.instructions+=4;goto B6c420f;
case 0x6c4215:c.instructions+=3;goto B6c4215;
case 0x6c4218:c.instructions+=2;goto B6c4218;
case 0x6c421e:c.instructions+=1;goto B6c421e;
case 0x6c4221:goto L6c4221;
case 0x6c4225:c.instructions+=2;goto B6c4225;
case 0x6c4227:c.instructions+=1;goto B6c4227;
case 0x6c422d:goto L6c422d;
case 0x6c4230:c.instructions+=8;goto B6c4230;
case 0x6c4233:c.instructions+=7;goto B6c4233;
case 0x6c4236:c.instructions+=6;goto B6c4236;
case 0x6c4239:c.instructions+=5;goto B6c4239;
case 0x6c423c:c.instructions+=4;goto B6c423c;
case 0x6c423f:c.instructions+=3;goto B6c423f;
case 0x6c4242:c.instructions+=2;goto B6c4242;
case 0x6c4245:c.instructions+=1;goto B6c4245;
case 0x6c4248:goto L6c4248;
case 0x6c424b:c.instructions+=12;goto B6c424b;
case 0x6c4252:c.instructions+=11;goto B6c4252;
case 0x6c4255:c.instructions+=10;goto B6c4255;
case 0x6c4258:c.instructions+=9;goto B6c4258;
case 0x6c425b:c.instructions+=8;goto B6c425b;
case 0x6c425d:c.instructions+=7;goto B6c425d;
case 0x6c425f:c.instructions+=6;goto B6c425f;
case 0x6c4262:c.instructions+=5;goto B6c4262;
case 0x6c4266:c.instructions+=4;goto B6c4266;
case 0x6c4269:c.instructions+=3;goto B6c4269;
case 0x6c426c:c.instructions+=2;goto B6c426c;
case 0x6c426f:c.instructions+=1;goto B6c426f;
case 0x6c4271:goto L6c4271;
case 0x6c4275:c.instructions+=1;goto B6c4275;
case 0x6c4277:goto L6c4277;
case 0x6c427b:c.instructions+=1;goto B6c427b;
case 0x6c427d:goto L6c427d;
case 0x6c4280:c.instructions+=4;goto B6c4280;
case 0x6c4283:c.instructions+=3;goto B6c4283;
case 0x6c4286:c.instructions+=2;goto B6c4286;
case 0x6c428a:c.instructions+=1;goto B6c428a;
case 0x6c428c:goto L6c428c;
case 0x6c428f:c.instructions+=4;goto B6c428f;
case 0x6c4292:c.instructions+=3;goto B6c4292;
case 0x6c4295:c.instructions+=2;goto B6c4295;
case 0x6c4299:c.instructions+=1;goto B6c4299;
case 0x6c429b:goto L6c429b;
case 0x6c429e:c.instructions+=4;goto B6c429e;
case 0x6c42a1:c.instructions+=3;goto B6c42a1;
case 0x6c42a4:c.instructions+=2;goto B6c42a4;
case 0x6c42a8:c.instructions+=1;goto B6c42a8;
case 0x6c42aa:goto L6c42aa;
case 0x6c42ad:c.instructions+=9;goto B6c42ad;
case 0x6c42b0:c.instructions+=8;goto B6c42b0;
case 0x6c42b3:c.instructions+=7;goto B6c42b3;
case 0x6c42b6:c.instructions+=6;goto B6c42b6;
case 0x6c42b9:c.instructions+=5;goto B6c42b9;
case 0x6c42bb:c.instructions+=4;goto B6c42bb;
case 0x6c42c1:c.instructions+=3;goto B6c42c1;
case 0x6c42c3:c.instructions+=2;goto B6c42c3;
case 0x6c42c6:c.instructions+=1;goto B6c42c6;
case 0x6c42c8:goto L6c42c8;
case 0x6c42cb:c.instructions+=4;goto B6c42cb;
case 0x6c42cd:c.instructions+=3;goto B6c42cd;
case 0x6c42d0:c.instructions+=2;goto B6c42d0;
case 0x6c42d2:c.instructions+=1;goto B6c42d2;
case 0x6c42d4:goto L6c42d4;
case 0x6c42d7:c.instructions+=8;goto B6c42d7;
case 0x6c42d9:c.instructions+=7;goto B6c42d9;
case 0x6c42da:c.instructions+=6;goto B6c42da;
case 0x6c42dd:c.instructions+=5;goto B6c42dd;
case 0x6c42e0:c.instructions+=4;goto B6c42e0;
case 0x6c42e3:c.instructions+=3;goto B6c42e3;
case 0x6c42e6:c.instructions+=2;goto B6c42e6;
case 0x6c42e9:c.instructions+=1;goto B6c42e9;
case 0x6c42ef:goto L6c42ef;
case 0x6c42f2:c.instructions+=1;goto B6c42f2;
case 0x6c42f4:goto L6c42f4;
case 0x6c42f7:c.instructions+=6;goto B6c42f7;
case 0x6c42f9:c.instructions+=5;goto B6c42f9;
case 0x6c42fa:c.instructions+=4;goto B6c42fa;
case 0x6c42fd:c.instructions+=3;goto B6c42fd;
case 0x6c4300:c.instructions+=2;goto B6c4300;
case 0x6c4304:c.instructions+=1;goto B6c4304;
case 0x6c430a:goto L6c430a;
case 0x6c430d:c.instructions+=4;goto B6c430d;
case 0x6c4310:c.instructions+=3;goto B6c4310;
case 0x6c4313:c.instructions+=2;goto B6c4313;
case 0x6c4317:c.instructions+=1;goto B6c4317;
case 0x6c431d:goto L6c431d;
case 0x6c431f:c.instructions+=1;goto B6c431f;
case 0x6c4320:goto L6c4320;
case 0x6c4323:c.instructions+=2;goto B6c4323;
case 0x6c4325:c.instructions+=1;goto B6c4325;
case 0x6c4327:goto L6c4327;
case 0x6c4329:c.instructions+=1;goto B6c4329;
case 0x6c432e:goto L6c432e;
case 0x6c4330:goto L6c4330;
case 0x6c4331:c.instructions+=4;goto B6c4331;
case 0x6c4332:c.instructions+=3;goto B6c4332;
case 0x6c4333:c.instructions+=2;goto B6c4333;
case 0x6c4334:c.instructions+=1;goto B6c4334;
case 0x6c4337:goto L6c4337;
case 0x6c4339:c.instructions+=1;goto B6c4339;
case 0x6c433e:goto L6c433e;
case 0x6c4340:c.instructions+=2;goto B6c4340;
case 0x6c4342:c.instructions+=1;goto B6c4342;
case 0x6c4344:goto L6c4344;
case 0x6c4346:c.instructions+=1;goto B6c4346;
case 0x6c434b:goto L6c434b;
case 0x6c434e:c.instructions+=1;goto B6c434e;
case 0x6c4350:goto L6c4350;
case 0x6c4353:goto L6c4353;
case 0x6c4356:c.instructions+=2;goto B6c4356;
case 0x6c4358:c.instructions+=1;goto B6c4358;
case 0x6c435a:goto L6c435a;
case 0x6c435f:c.instructions+=1;goto B6c435f;
case 0x6c4361:goto L6c4361;
case 0x6c4364:c.instructions+=1;goto B6c4364;
case 0x6c4366:goto L6c4366;
case 0x6c4369:c.instructions+=1;goto B6c4369;
case 0x6c436b:goto L6c436b;
case 0x6c436c:c.instructions+=7;goto B6c436c;
case 0x6c436f:c.instructions+=6;goto B6c436f;
case 0x6c4370:c.instructions+=5;goto B6c4370;
case 0x6c4371:c.instructions+=4;goto B6c4371;
case 0x6c4373:c.instructions+=3;goto B6c4373;
case 0x6c4378:c.instructions+=2;goto B6c4378;
case 0x6c437d:c.instructions+=1;goto B6c437d;
case 0x6c437f:goto L6c437f;
case 0x6c4380:c.instructions+=6;goto B6c4380;
case 0x6c4383:c.instructions+=5;goto B6c4383;
case 0x6c4384:c.instructions+=4;goto B6c4384;
case 0x6c4385:c.instructions+=3;goto B6c4385;
case 0x6c4387:c.instructions+=2;goto B6c4387;
case 0x6c438c:c.instructions+=1;goto B6c438c;
case 0x6c4391:goto L6c4391;
case 0x6c4392:c.instructions+=1;goto B6c4392;
case 0x6c4397:goto L6c4397;
case 0x6c4399:c.instructions+=2;goto B6c4399;
case 0x6c439b:c.instructions+=1;goto B6c439b;
case 0x6c439d:goto L6c439d;
case 0x6c43a3:c.instructions+=2;goto B6c43a3;
case 0x6c43a6:c.instructions+=1;goto B6c43a6;
case 0x6c43ab:goto L6c43ab;
case 0x6c43ad:c.instructions+=2;goto B6c43ad;
case 0x6c43af:c.instructions+=1;goto B6c43af;
case 0x6c43b5:goto L6c43b5;
case 0x6c43bb:c.instructions+=8;goto B6c43bb;
case 0x6c43be:c.instructions+=7;goto B6c43be;
case 0x6c43c1:c.instructions+=6;goto B6c43c1;
case 0x6c43c4:c.instructions+=5;goto B6c43c4;
case 0x6c43c6:c.instructions+=4;goto B6c43c6;
case 0x6c43c9:c.instructions+=3;goto B6c43c9;
case 0x6c43cc:c.instructions+=2;goto B6c43cc;
case 0x6c43ce:c.instructions+=1;goto B6c43ce;
case 0x6c43d1:goto L6c43d1;
case 0x6c43d3:goto L6c43d3;
case 0x6c43d5:c.instructions+=1;goto B6c43d5;
case 0x6c43d8:goto L6c43d8;
case 0x6c43da:goto L6c43da;
case 0x6c43dd:c.instructions+=3;goto B6c43dd;
case 0x6c43df:c.instructions+=2;goto B6c43df;
case 0x6c43e2:c.instructions+=1;goto B6c43e2;
case 0x6c43e8:goto L6c43e8;
case 0x6c43ea:goto L6c43ea;
case 0x6c43ec:c.instructions+=1;goto B6c43ec;
case 0x6c43ef:goto L6c43ef;
case 0x6c43f1:goto L6c43f1;
case 0x6c43f4:c.instructions+=7;goto B6c43f4;
case 0x6c43f7:c.instructions+=6;goto B6c43f7;
case 0x6c43fd:c.instructions+=5;goto B6c43fd;
case 0x6c4400:c.instructions+=4;goto B6c4400;
case 0x6c4402:c.instructions+=3;goto B6c4402;
case 0x6c4406:c.instructions+=2;goto B6c4406;
case 0x6c4408:c.instructions+=1;goto B6c4408;
case 0x6c440a:goto L6c440a;
case 0x6c440c:c.instructions+=1;goto B6c440c;
case 0x6c440e:goto L6c440e;
case 0x6c4411:goto L6c4411;
case 0x6c4413:c.instructions+=1;goto B6c4413;
case 0x6c4416:goto L6c4416;
case 0x6c4418:goto L6c4418;
case 0x6c441a:c.instructions+=1;goto B6c441a;
case 0x6c441d:goto L6c441d;
case 0x6c441f:goto L6c441f;
case 0x6c4422:c.instructions+=12;goto B6c4422;
case 0x6c4425:c.instructions+=11;goto B6c4425;
case 0x6c4428:c.instructions+=10;goto B6c4428;
case 0x6c442b:c.instructions+=9;goto B6c442b;
case 0x6c442d:c.instructions+=8;goto B6c442d;
case 0x6c4430:c.instructions+=7;goto B6c4430;
case 0x6c4433:c.instructions+=6;goto B6c4433;
case 0x6c4435:c.instructions+=5;goto B6c4435;
case 0x6c4438:c.instructions+=4;goto B6c4438;
case 0x6c443b:c.instructions+=3;goto B6c443b;
case 0x6c443e:c.instructions+=2;goto B6c443e;
case 0x6c4441:c.instructions+=1;goto B6c4441;
case 0x6c4443:goto L6c4443;
case 0x6c4446:c.instructions+=2;goto B6c4446;
case 0x6c4449:c.instructions+=1;goto B6c4449;
case 0x6c444f:goto L6c444f;
case 0x6c4452:c.instructions+=1;goto B6c4452;
case 0x6c4454:goto L6c4454;
case 0x6c4457:c.instructions+=2;goto B6c4457;
case 0x6c445a:c.instructions+=1;goto B6c445a;
case 0x6c4460:goto L6c4460;
case 0x6c4463:c.instructions+=2;goto B6c4463;
case 0x6c4465:c.instructions+=1;goto B6c4465;
case 0x6c4467:goto L6c4467;
case 0x6c446b:c.instructions+=4;goto B6c446b;
case 0x6c446d:c.instructions+=3;goto B6c446d;
case 0x6c4470:c.instructions+=2;goto B6c4470;
case 0x6c4472:c.instructions+=1;goto B6c4472;
case 0x6c4474:goto L6c4474;
case 0x6c4477:c.instructions+=2;goto B6c4477;
case 0x6c4479:c.instructions+=1;goto B6c4479;
case 0x6c447f:goto L6c447f;
case 0x6c4481:goto L6c4481;
case 0x6c4484:c.instructions+=2;goto B6c4484;
case 0x6c4486:c.instructions+=1;goto B6c4486;
case 0x6c4488:goto L6c4488;
case 0x6c4489:c.instructions+=5;goto B6c4489;
case 0x6c448c:c.instructions+=4;goto B6c448c;
case 0x6c4492:c.instructions+=3;goto B6c4492;
case 0x6c4495:c.instructions+=2;goto B6c4495;
case 0x6c4498:c.instructions+=1;goto B6c4498;
case 0x6c449d:goto L6c449d;
case 0x6c449f:c.instructions+=1;goto B6c449f;
case 0x6c44a4:goto L6c44a4;
case 0x6c44a6:c.instructions+=26;goto B6c44a6;
case 0x6c44a7:c.instructions+=25;goto B6c44a7;
case 0x6c44a9:c.instructions+=24;goto B6c44a9;
case 0x6c44af:c.instructions+=23;goto B6c44af;
case 0x6c44b0:c.instructions+=22;goto B6c44b0;
case 0x6c44b6:c.instructions+=21;goto B6c44b6;
case 0x6c44b8:c.instructions+=20;goto B6c44b8;
case 0x6c44bb:c.instructions+=19;goto B6c44bb;
case 0x6c44bd:c.instructions+=18;goto B6c44bd;
case 0x6c44c2:c.instructions+=17;goto B6c44c2;
case 0x6c44c3:c.instructions+=16;goto B6c44c3;
case 0x6c44c5:c.instructions+=15;goto B6c44c5;
case 0x6c44c7:c.instructions+=14;goto B6c44c7;
case 0x6c44ca:c.instructions+=13;goto B6c44ca;
case 0x6c44cd:c.instructions+=12;goto B6c44cd;
case 0x6c44d0:c.instructions+=11;goto B6c44d0;
case 0x6c44d1:c.instructions+=10;goto B6c44d1;
case 0x6c44d4:c.instructions+=9;goto B6c44d4;
case 0x6c44d7:c.instructions+=8;goto B6c44d7;
case 0x6c44da:c.instructions+=7;goto B6c44da;
case 0x6c44dd:c.instructions+=6;goto B6c44dd;
case 0x6c44e0:c.instructions+=5;goto B6c44e0;
case 0x6c44e7:c.instructions+=4;goto B6c44e7;
case 0x6c44ee:c.instructions+=3;goto B6c44ee;
case 0x6c44f5:c.instructions+=2;goto B6c44f5;
case 0x6c44f8:c.instructions+=1;goto B6c44f8;
case 0x6c44fe:goto L6c44fe;
case 0x6c4503:c.instructions+=2;goto B6c4503;
case 0x6c4508:c.instructions+=1;goto B6c4508;
case 0x6c450e:goto L6c450e;
case 0x6c4511:goto L6c4511;
case 0x6c4515:goto L6c4515;
case 0x6c4517:c.instructions+=5;goto B6c4517;
case 0x6c4519:c.instructions+=4;goto B6c4519;
case 0x6c451a:c.instructions+=3;goto B6c451a;
case 0x6c451d:c.instructions+=2;goto B6c451d;
case 0x6c4523:c.instructions+=1;goto B6c4523;
case 0x6c4529:goto L6c4529;
case 0x6c452b:goto L6c452b;
case 0x6c452d:c.instructions+=2;goto B6c452d;
case 0x6c452e:c.instructions+=1;goto B6c452e;
case 0x6c4534:goto L6c4534;
case 0x6c4536:goto L6c4536;
case 0x6c4538:c.instructions+=5;goto B6c4538;
case 0x6c453e:c.instructions+=4;goto B6c453e;
case 0x6c4541:c.instructions+=3;goto B6c4541;
case 0x6c4544:c.instructions+=2;goto B6c4544;
case 0x6c4547:c.instructions+=1;goto B6c4547;
case 0x6c454a:goto L6c454a;
case 0x6c454d:c.instructions+=1;goto B6c454d;
case 0x6c454f:goto L6c454f;
case 0x6c4551:c.instructions+=3;goto B6c4551;
case 0x6c4552:c.instructions+=2;goto B6c4552;
case 0x6c4555:c.instructions+=1;goto B6c4555;
case 0x6c4557:goto L6c4557;
case 0x6c455a:goto L6c455a;
case 0x6c455d:c.instructions+=9;goto B6c455d;
case 0x6c4560:c.instructions+=8;goto B6c4560;
case 0x6c4563:c.instructions+=7;goto B6c4563;
case 0x6c456a:c.instructions+=6;goto B6c456a;
case 0x6c456d:c.instructions+=5;goto B6c456d;
case 0x6c4570:c.instructions+=4;goto B6c4570;
case 0x6c4573:c.instructions+=3;goto B6c4573;
case 0x6c4575:c.instructions+=2;goto B6c4575;
case 0x6c4578:c.instructions+=1;goto B6c4578;
case 0x6c457a:goto L6c457a;
case 0x6c457d:c.instructions+=2;goto B6c457d;
case 0x6c4580:c.instructions+=1;goto B6c4580;
case 0x6c4586:goto L6c4586;
case 0x6c4589:c.instructions+=15;goto B6c4589;
case 0x6c458b:c.instructions+=14;goto B6c458b;
case 0x6c458e:c.instructions+=13;goto B6c458e;
case 0x6c4591:c.instructions+=12;goto B6c4591;
case 0x6c4594:c.instructions+=11;goto B6c4594;
case 0x6c4597:c.instructions+=10;goto B6c4597;
case 0x6c4599:c.instructions+=9;goto B6c4599;
case 0x6c459f:c.instructions+=8;goto B6c459f;
case 0x6c45a2:c.instructions+=7;goto B6c45a2;
case 0x6c45a3:c.instructions+=6;goto B6c45a3;
case 0x6c45a6:c.instructions+=5;goto B6c45a6;
case 0x6c45a7:c.instructions+=4;goto B6c45a7;
case 0x6c45aa:c.instructions+=3;goto B6c45aa;
case 0x6c45ab:c.instructions+=2;goto B6c45ab;
case 0x6c45ac:c.instructions+=1;goto B6c45ac;
case 0x6c45b1:goto L6c45b1;
case 0x6c45b3:c.instructions+=1;goto B6c45b3;
case 0x6c45b5:goto L6c45b5;
case 0x6c45b8:c.instructions+=14;goto B6c45b8;
case 0x6c45b9:c.instructions+=13;goto B6c45b9;
case 0x6c45bc:c.instructions+=12;goto B6c45bc;
case 0x6c45bf:c.instructions+=11;goto B6c45bf;
case 0x6c45c0:c.instructions+=10;goto B6c45c0;
case 0x6c45c6:c.instructions+=9;goto B6c45c6;
case 0x6c45c7:c.instructions+=8;goto B6c45c7;
case 0x6c45ca:c.instructions+=7;goto B6c45ca;
case 0x6c45cb:c.instructions+=6;goto B6c45cb;
case 0x6c45d1:c.instructions+=5;goto B6c45d1;
case 0x6c45d2:c.instructions+=4;goto B6c45d2;
case 0x6c45d8:c.instructions+=3;goto B6c45d8;
case 0x6c45d9:c.instructions+=2;goto B6c45d9;
case 0x6c45da:c.instructions+=1;goto B6c45da;
case 0x6c45df:goto L6c45df;
case 0x6c45e2:c.instructions+=1;goto B6c45e2;
case 0x6c45e4:goto L6c45e4;
case 0x6c45e7:c.instructions+=3;goto B6c45e7;
case 0x6c45e9:c.instructions+=2;goto B6c45e9;
case 0x6c45ec:c.instructions+=1;goto B6c45ec;
case 0x6c45f3:goto L6c45f3;
case 0x6c45f7:c.instructions+=2;goto B6c45f7;
case 0x6c45fa:c.instructions+=1;goto B6c45fa;
case 0x6c45fc:goto L6c45fc;
case 0x6c45ff:c.instructions+=4;goto B6c45ff;
case 0x6c4601:c.instructions+=3;goto B6c4601;
case 0x6c4604:c.instructions+=2;goto B6c4604;
case 0x6c4606:c.instructions+=1;goto B6c4606;
case 0x6c4608:goto L6c4608;
case 0x6c460b:goto L6c460b;
case 0x6c460c:c.instructions+=3;goto B6c460c;
case 0x6c460f:c.instructions+=2;goto B6c460f;
case 0x6c4612:c.instructions+=1;goto B6c4612;
case 0x6c4614:goto L6c4614;
case 0x6c4618:c.instructions+=1;goto B6c4618;
case 0x6c461a:goto L6c461a;
case 0x6c461d:c.instructions+=4;goto B6c461d;
case 0x6c4620:c.instructions+=3;goto B6c4620;
case 0x6c4623:c.instructions+=2;goto B6c4623;
case 0x6c4627:c.instructions+=1;goto B6c4627;
case 0x6c4629:goto L6c4629;
case 0x6c462b:c.instructions+=1;goto B6c462b;
case 0x6c4630:goto L6c4630;
case 0x6c4637:goto L6c4637;
case 0x6c463b:c.instructions+=1;goto B6c463b;
case 0x6c463f:goto L6c463f;
case 0x6c4643:c.instructions+=1;goto B6c4643;
case 0x6c4645:goto L6c4645;
case 0x6c4647:c.instructions+=3;goto B6c4647;
case 0x6c4648:c.instructions+=2;goto B6c4648;
case 0x6c464b:c.instructions+=1;goto B6c464b;
case 0x6c464d:goto L6c464d;
case 0x6c4650:goto L6c4650;
case 0x6c4658:c.instructions+=1;goto B6c4658;
case 0x6c465a:goto L6c465a;
case 0x6c465e:c.instructions+=2;goto B6c465e;
case 0x6c4662:c.instructions+=1;goto B6c4662;
case 0x6c4664:goto L6c4664;
case 0x6c4666:c.instructions+=2;goto B6c4666;
case 0x6c4669:c.instructions+=1;goto B6c4669;
case 0x6c466b:goto L6c466b;
case 0x6c466e:c.instructions+=2;goto B6c466e;
case 0x6c4675:c.instructions+=1;goto B6c4675;
case 0x6c4678:goto L6c4678;
case 0x6c467c:c.instructions+=2;goto B6c467c;
case 0x6c467e:c.instructions+=1;goto B6c467e;
case 0x6c4680:goto L6c4680;
case 0x6c4683:c.instructions+=4;goto B6c4683;
case 0x6c4686:c.instructions+=3;goto B6c4686;
case 0x6c4688:c.instructions+=2;goto B6c4688;
case 0x6c468b:c.instructions+=1;goto B6c468b;
case 0x6c468e:goto L6c468e;
case 0x6c4690:c.instructions+=1;goto B6c4690;
case 0x6c4692:goto L6c4692;
case 0x6c4695:c.instructions+=4;goto B6c4695;
case 0x6c4698:c.instructions+=3;goto B6c4698;
case 0x6c469b:c.instructions+=2;goto B6c469b;
case 0x6c469e:c.instructions+=1;goto B6c469e;
case 0x6c46a0:goto L6c46a0;
case 0x6c46a1:c.instructions+=2;goto B6c46a1;
case 0x6c46a4:c.instructions+=1;goto B6c46a4;
case 0x6c46a6:goto L6c46a6;
case 0x6c46a8:goto L6c46a8;
case 0x6c46af:goto L6c46af;
case 0x6c46b2:c.instructions+=3;goto B6c46b2;
case 0x6c46b5:c.instructions+=2;goto B6c46b5;
case 0x6c46b8:c.instructions+=1;goto B6c46b8;
case 0x6c46ba:goto L6c46ba;
case 0x6c46bd:c.instructions+=4;goto B6c46bd;
case 0x6c46c0:c.instructions+=3;goto B6c46c0;
case 0x6c46c3:c.instructions+=2;goto B6c46c3;
case 0x6c46c7:c.instructions+=1;goto B6c46c7;
case 0x6c46cd:goto L6c46cd;
case 0x6c46cf:c.instructions+=2;goto B6c46cf;
case 0x6c46d2:c.instructions+=1;goto B6c46d2;
case 0x6c46d8:goto L6c46d8;
case 0x6c46db:c.instructions+=1;goto B6c46db;
case 0x6c46e1:goto L6c46e1;
case 0x6c46e4:c.instructions+=2;goto B6c46e4;
case 0x6c46e7:c.instructions+=1;goto B6c46e7;
case 0x6c46ed:goto L6c46ed;
case 0x6c46f0:c.instructions+=6;goto B6c46f0;
case 0x6c46f7:c.instructions+=5;goto B6c46f7;
case 0x6c46fa:c.instructions+=4;goto B6c46fa;
case 0x6c46fe:c.instructions+=3;goto B6c46fe;
case 0x6c4700:c.instructions+=2;goto B6c4700;
case 0x6c4703:c.instructions+=1;goto B6c4703;
case 0x6c4709:goto L6c4709;
case 0x6c470c:c.instructions+=3;goto B6c470c;
case 0x6c470f:c.instructions+=2;goto B6c470f;
case 0x6c4711:c.instructions+=1;goto B6c4711;
case 0x6c4717:goto L6c4717;
case 0x6c471a:c.instructions+=3;goto B6c471a;
case 0x6c471d:c.instructions+=2;goto B6c471d;
case 0x6c4720:c.instructions+=1;goto B6c4720;
case 0x6c4723:goto L6c4723;
case 0x6c4726:c.instructions+=3;goto B6c4726;
case 0x6c4728:c.instructions+=2;goto B6c4728;
case 0x6c472a:c.instructions+=1;goto B6c472a;
case 0x6c472c:goto L6c472c;
case 0x6c472f:c.instructions+=1;goto B6c472f;
case 0x6c4731:goto L6c4731;
case 0x6c4734:c.instructions+=3;goto B6c4734;
case 0x6c4738:c.instructions+=2;goto B6c4738;
case 0x6c473a:c.instructions+=1;goto B6c473a;
case 0x6c473c:goto L6c473c;
case 0x6c473f:c.instructions+=6;goto B6c473f;
case 0x6c4746:c.instructions+=5;goto B6c4746;
case 0x6c4749:c.instructions+=4;goto B6c4749;
case 0x6c474c:c.instructions+=3;goto B6c474c;
case 0x6c474f:c.instructions+=2;goto B6c474f;
case 0x6c4752:c.instructions+=1;goto B6c4752;
case 0x6c4755:goto L6c4755;
case 0x6c4757:c.instructions+=2;goto B6c4757;
case 0x6c4759:c.instructions+=1;goto B6c4759;
case 0x6c475b:goto L6c475b;
case 0x6c475e:c.instructions+=4;goto B6c475e;
case 0x6c4761:c.instructions+=3;goto B6c4761;
case 0x6c4764:c.instructions+=2;goto B6c4764;
case 0x6c4767:c.instructions+=1;goto B6c4767;
case 0x6c4769:goto L6c4769;
case 0x6c4770:goto L6c4770;
case 0x6c4773:c.instructions+=2;goto B6c4773;
case 0x6c4776:c.instructions+=1;goto B6c4776;
case 0x6c4778:goto L6c4778;
case 0x6c477a:c.instructions+=1;goto B6c477a;
case 0x6c477c:goto L6c477c;
case 0x6c4780:goto L6c4780;
case 0x6c4784:c.instructions+=1;goto B6c4784;
case 0x6c4786:goto L6c4786;
case 0x6c4788:goto L6c4788;
case 0x6c478f:c.instructions+=1;goto B6c478f;
case 0x6c4791:goto L6c4791;
case 0x6c4795:goto L6c4795;
case 0x6c4796:c.instructions+=2;goto B6c4796;
case 0x6c4799:c.instructions+=1;goto B6c4799;
case 0x6c479b:goto L6c479b;
case 0x6c479f:c.instructions+=1;goto B6c479f;
case 0x6c47a1:goto L6c47a1;
case 0x6c47a8:goto L6c47a8;
case 0x6c47ac:c.instructions+=2;goto B6c47ac;
case 0x6c47af:c.instructions+=1;goto B6c47af;
case 0x6c47b5:goto L6c47b5;
case 0x6c47b8:c.instructions+=3;goto B6c47b8;
case 0x6c47bb:c.instructions+=2;goto B6c47bb;
case 0x6c47be:c.instructions+=1;goto B6c47be;
case 0x6c47c4:goto L6c47c4;
case 0x6c47c7:c.instructions+=3;goto B6c47c7;
case 0x6c47ca:c.instructions+=2;goto B6c47ca;
case 0x6c47cd:c.instructions+=1;goto B6c47cd;
case 0x6c47d3:goto L6c47d3;
case 0x6c47d5:goto L6c47d5;
case 0x6c47d8:goto L6c47d8;
case 0x6c47db:c.instructions+=3;goto B6c47db;
case 0x6c47e2:c.instructions+=2;goto B6c47e2;
case 0x6c47e5:c.instructions+=1;goto B6c47e5;
case 0x6c47e7:goto L6c47e7;
case 0x6c47e9:c.instructions+=2;goto B6c47e9;
case 0x6c47ec:c.instructions+=1;goto B6c47ec;
case 0x6c47ee:goto L6c47ee;
case 0x6c47f1:c.instructions+=3;goto B6c47f1;
case 0x6c47f4:c.instructions+=2;goto B6c47f4;
case 0x6c47f7:c.instructions+=1;goto B6c47f7;
case 0x6c47fa:goto L6c47fa;
case 0x6c4801:c.instructions+=3;goto B6c4801;
case 0x6c4804:c.instructions+=2;goto B6c4804;
case 0x6c4806:c.instructions+=1;goto B6c4806;
case 0x6c4808:goto L6c4808;
case 0x6c480b:c.instructions+=1;goto B6c480b;
case 0x6c480e:goto L6c480e;
case 0x6c4810:c.instructions+=2;goto B6c4810;
case 0x6c4812:c.instructions+=1;goto B6c4812;
case 0x6c4814:goto L6c4814;
case 0x6c4817:c.instructions+=2;goto B6c4817;
case 0x6c481a:c.instructions+=1;goto B6c481a;
case 0x6c481c:goto L6c481c;
case 0x6c4823:goto L6c4823;
case 0x6c4826:c.instructions+=2;goto B6c4826;
case 0x6c4829:c.instructions+=1;goto B6c4829;
case 0x6c482b:goto L6c482b;
case 0x6c482c:c.instructions+=2;goto B6c482c;
case 0x6c482f:c.instructions+=1;goto B6c482f;
case 0x6c4831:goto L6c4831;
case 0x6c4834:c.instructions+=2;goto B6c4834;
case 0x6c4838:c.instructions+=1;goto B6c4838;
case 0x6c483a:goto L6c483a;
case 0x6c483e:c.instructions+=1;goto B6c483e;
case 0x6c4840:goto L6c4840;
case 0x6c4843:c.instructions+=2;goto B6c4843;
case 0x6c4847:c.instructions+=1;goto B6c4847;
case 0x6c484d:goto L6c484d;
case 0x6c4851:c.instructions+=1;goto B6c4851;
case 0x6c4853:goto L6c4853;
case 0x6c4856:c.instructions+=2;goto B6c4856;
case 0x6c485a:c.instructions+=1;goto B6c485a;
case 0x6c4860:goto L6c4860;
case 0x6c4862:goto L6c4862;
case 0x6c4865:c.instructions+=6;goto B6c4865;
case 0x6c4868:c.instructions+=5;goto B6c4868;
case 0x6c486a:c.instructions+=4;goto B6c486a;
case 0x6c486c:c.instructions+=3;goto B6c486c;
case 0x6c486f:c.instructions+=2;goto B6c486f;
case 0x6c4875:c.instructions+=1;goto B6c4875;
case 0x6c487b:goto L6c487b;
case 0x6c487d:goto L6c487d;
case 0x6c487f:c.instructions+=1;goto B6c487f;
case 0x6c4882:goto L6c4882;
case 0x6c4884:goto L6c4884;
case 0x6c488b:c.instructions+=4;goto B6c488b;
case 0x6c488e:c.instructions+=3;goto B6c488e;
case 0x6c488f:c.instructions+=2;goto B6c488f;
case 0x6c4892:c.instructions+=1;goto B6c4892;
case 0x6c4894:goto L6c4894;
case 0x6c489b:c.instructions+=2;goto B6c489b;
case 0x6c489e:c.instructions+=1;goto B6c489e;
case 0x6c48a0:goto L6c48a0;
case 0x6c48a7:c.instructions+=2;goto B6c48a7;
case 0x6c48aa:c.instructions+=1;goto B6c48aa;
case 0x6c48ac:goto L6c48ac;
case 0x6c48b3:goto L6c48b3;
case 0x6c48b6:c.instructions+=2;goto B6c48b6;
case 0x6c48bb:c.instructions+=1;goto B6c48bb;
case 0x6c48bd:goto L6c48bd;
case 0x6c48c1:goto L6c48c1;
case 0x6c48c4:c.instructions+=2;goto B6c48c4;
case 0x6c48c7:c.instructions+=1;goto B6c48c7;
case 0x6c48cd:goto L6c48cd;
case 0x6c48d0:c.instructions+=8;goto B6c48d0;
case 0x6c48d6:c.instructions+=7;goto B6c48d6;
case 0x6c48d9:c.instructions+=6;goto B6c48d9;
case 0x6c48db:c.instructions+=5;goto B6c48db;
case 0x6c48dd:c.instructions+=4;goto B6c48dd;
case 0x6c48e3:c.instructions+=3;goto B6c48e3;
case 0x6c48e6:c.instructions+=2;goto B6c48e6;
case 0x6c48e9:c.instructions+=1;goto B6c48e9;
case 0x6c48eb:goto L6c48eb;
case 0x6c48f0:c.instructions+=2;goto B6c48f0;
case 0x6c48f5:c.instructions+=1;goto B6c48f5;
case 0x6c48f7:goto L6c48f7;
case 0x6c48f9:c.instructions+=2;goto B6c48f9;
case 0x6c48fa:c.instructions+=1;goto B6c48fa;
case 0x6c48ff:goto L6c48ff;
case 0x6c4902:c.instructions+=3;goto B6c4902;
case 0x6c4906:c.instructions+=2;goto B6c4906;
case 0x6c4909:c.instructions+=1;goto B6c4909;
case 0x6c490c:goto L6c490c;
case 0x6c4910:goto L6c4910;
case 0x6c4913:c.instructions+=4;goto B6c4913;
case 0x6c4915:c.instructions+=3;goto B6c4915;
case 0x6c4918:c.instructions+=2;goto B6c4918;
case 0x6c491e:c.instructions+=1;goto B6c491e;
case 0x6c4924:goto L6c4924;
case 0x6c4926:goto L6c4926;
case 0x6c4928:c.instructions+=1;goto B6c4928;
case 0x6c492b:goto L6c492b;
case 0x6c492d:goto L6c492d;
case 0x6c492f:c.instructions+=3;goto B6c492f;
case 0x6c4930:c.instructions+=2;goto B6c4930;
case 0x6c4933:c.instructions+=1;goto B6c4933;
case 0x6c4939:goto L6c4939;
case 0x6c493b:goto L6c493b;
case 0x6c493d:c.instructions+=2;goto B6c493d;
case 0x6c493e:c.instructions+=1;goto B6c493e;
case 0x6c4944:goto L6c4944;
case 0x6c4946:goto L6c4946;
case 0x6c4949:c.instructions+=4;goto B6c4949;
case 0x6c494b:c.instructions+=3;goto B6c494b;
case 0x6c494e:c.instructions+=2;goto B6c494e;
case 0x6c4951:c.instructions+=1;goto B6c4951;
case 0x6c4954:goto L6c4954;
case 0x6c4958:c.instructions+=1;goto B6c4958;
case 0x6c495a:goto L6c495a;
case 0x6c495c:c.instructions+=3;goto B6c495c;
case 0x6c495d:c.instructions+=2;goto B6c495d;
case 0x6c4960:c.instructions+=1;goto B6c4960;
case 0x6c4962:goto L6c4962;
case 0x6c4965:goto L6c4965;
case 0x6c4968:c.instructions+=9;goto B6c4968;
case 0x6c496b:c.instructions+=8;goto B6c496b;
case 0x6c496e:c.instructions+=7;goto B6c496e;
case 0x6c4975:c.instructions+=6;goto B6c4975;
case 0x6c4978:c.instructions+=5;goto B6c4978;
case 0x6c497b:c.instructions+=4;goto B6c497b;
case 0x6c497e:c.instructions+=3;goto B6c497e;
case 0x6c4980:c.instructions+=2;goto B6c4980;
case 0x6c4983:c.instructions+=1;goto B6c4983;
case 0x6c4985:goto L6c4985;
case 0x6c4988:c.instructions+=2;goto B6c4988;
case 0x6c498b:c.instructions+=1;goto B6c498b;
case 0x6c4991:goto L6c4991;
case 0x6c4994:c.instructions+=15;goto B6c4994;
case 0x6c4996:c.instructions+=14;goto B6c4996;
case 0x6c4999:c.instructions+=13;goto B6c4999;
case 0x6c499c:c.instructions+=12;goto B6c499c;
case 0x6c499f:c.instructions+=11;goto B6c499f;
case 0x6c49a2:c.instructions+=10;goto B6c49a2;
case 0x6c49a4:c.instructions+=9;goto B6c49a4;
case 0x6c49aa:c.instructions+=8;goto B6c49aa;
case 0x6c49ad:c.instructions+=7;goto B6c49ad;
case 0x6c49ae:c.instructions+=6;goto B6c49ae;
case 0x6c49b1:c.instructions+=5;goto B6c49b1;
case 0x6c49b2:c.instructions+=4;goto B6c49b2;
case 0x6c49b5:c.instructions+=3;goto B6c49b5;
case 0x6c49b6:c.instructions+=2;goto B6c49b6;
case 0x6c49b7:c.instructions+=1;goto B6c49b7;
case 0x6c49bc:goto L6c49bc;
case 0x6c49be:c.instructions+=1;goto B6c49be;
case 0x6c49c0:goto L6c49c0;
case 0x6c49c3:c.instructions+=14;goto B6c49c3;
case 0x6c49c4:c.instructions+=13;goto B6c49c4;
case 0x6c49c7:c.instructions+=12;goto B6c49c7;
case 0x6c49ca:c.instructions+=11;goto B6c49ca;
case 0x6c49cb:c.instructions+=10;goto B6c49cb;
case 0x6c49d1:c.instructions+=9;goto B6c49d1;
case 0x6c49d2:c.instructions+=8;goto B6c49d2;
case 0x6c49d5:c.instructions+=7;goto B6c49d5;
case 0x6c49d6:c.instructions+=6;goto B6c49d6;
case 0x6c49dc:c.instructions+=5;goto B6c49dc;
case 0x6c49dd:c.instructions+=4;goto B6c49dd;
case 0x6c49e3:c.instructions+=3;goto B6c49e3;
case 0x6c49e4:c.instructions+=2;goto B6c49e4;
case 0x6c49e5:c.instructions+=1;goto B6c49e5;
case 0x6c49ea:goto L6c49ea;
case 0x6c49ed:c.instructions+=1;goto B6c49ed;
case 0x6c49ef:goto L6c49ef;
case 0x6c49f2:c.instructions+=3;goto B6c49f2;
case 0x6c49f4:c.instructions+=2;goto B6c49f4;
case 0x6c49f7:c.instructions+=1;goto B6c49f7;
case 0x6c49fe:goto L6c49fe;
case 0x6c4a02:c.instructions+=2;goto B6c4a02;
case 0x6c4a05:c.instructions+=1;goto B6c4a05;
case 0x6c4a07:goto L6c4a07;
case 0x6c4a0a:c.instructions+=3;goto B6c4a0a;
case 0x6c4a0d:c.instructions+=2;goto B6c4a0d;
case 0x6c4a0f:c.instructions+=1;goto B6c4a0f;
case 0x6c4a11:goto L6c4a11;
case 0x6c4a14:goto L6c4a14;
case 0x6c4a15:c.instructions+=3;goto B6c4a15;
case 0x6c4a18:c.instructions+=2;goto B6c4a18;
case 0x6c4a1b:c.instructions+=1;goto B6c4a1b;
case 0x6c4a1d:goto L6c4a1d;
case 0x6c4a21:c.instructions+=1;goto B6c4a21;
case 0x6c4a23:goto L6c4a23;
case 0x6c4a26:c.instructions+=3;goto B6c4a26;
case 0x6c4a29:c.instructions+=2;goto B6c4a29;
case 0x6c4a2d:c.instructions+=1;goto B6c4a2d;
case 0x6c4a33:goto L6c4a33;
case 0x6c4a35:goto L6c4a35;
case 0x6c4a3c:goto L6c4a3c;
case 0x6c4a40:c.instructions+=1;goto B6c4a40;
case 0x6c4a44:goto L6c4a44;
case 0x6c4a48:c.instructions+=1;goto B6c4a48;
case 0x6c4a4a:goto L6c4a4a;
case 0x6c4a4c:c.instructions+=3;goto B6c4a4c;
case 0x6c4a4d:c.instructions+=2;goto B6c4a4d;
case 0x6c4a50:c.instructions+=1;goto B6c4a50;
case 0x6c4a52:goto L6c4a52;
case 0x6c4a55:goto L6c4a55;
case 0x6c4a5d:c.instructions+=1;goto B6c4a5d;
case 0x6c4a5f:goto L6c4a5f;
case 0x6c4a63:c.instructions+=2;goto B6c4a63;
case 0x6c4a67:c.instructions+=1;goto B6c4a67;
case 0x6c4a69:goto L6c4a69;
case 0x6c4a6b:c.instructions+=2;goto B6c4a6b;
case 0x6c4a6e:c.instructions+=1;goto B6c4a6e;
case 0x6c4a70:goto L6c4a70;
case 0x6c4a73:c.instructions+=2;goto B6c4a73;
case 0x6c4a7a:c.instructions+=1;goto B6c4a7a;
case 0x6c4a7d:goto L6c4a7d;
case 0x6c4a81:c.instructions+=2;goto B6c4a81;
case 0x6c4a83:c.instructions+=1;goto B6c4a83;
case 0x6c4a85:goto L6c4a85;
case 0x6c4a88:c.instructions+=5;goto B6c4a88;
case 0x6c4a8b:c.instructions+=4;goto B6c4a8b;
case 0x6c4a8e:c.instructions+=3;goto B6c4a8e;
case 0x6c4a90:c.instructions+=2;goto B6c4a90;
case 0x6c4a93:c.instructions+=1;goto B6c4a93;
case 0x6c4a96:goto L6c4a96;
case 0x6c4a98:c.instructions+=1;goto B6c4a98;
case 0x6c4a9a:goto L6c4a9a;
case 0x6c4a9d:c.instructions+=3;goto B6c4a9d;
case 0x6c4aa0:c.instructions+=2;goto B6c4aa0;
case 0x6c4aa3:c.instructions+=1;goto B6c4aa3;
case 0x6c4aa5:goto L6c4aa5;
case 0x6c4aa6:c.instructions+=2;goto B6c4aa6;
case 0x6c4aa9:c.instructions+=1;goto B6c4aa9;
case 0x6c4aab:goto L6c4aab;
case 0x6c4aad:goto L6c4aad;
case 0x6c4ab4:goto L6c4ab4;
case 0x6c4ab7:c.instructions+=3;goto B6c4ab7;
case 0x6c4aba:c.instructions+=2;goto B6c4aba;
case 0x6c4abd:c.instructions+=1;goto B6c4abd;
case 0x6c4abf:goto L6c4abf;
case 0x6c4ac2:c.instructions+=4;goto B6c4ac2;
case 0x6c4ac5:c.instructions+=3;goto B6c4ac5;
case 0x6c4ac8:c.instructions+=2;goto B6c4ac8;
case 0x6c4acc:c.instructions+=1;goto B6c4acc;
case 0x6c4ad2:goto L6c4ad2;
case 0x6c4ad4:c.instructions+=2;goto B6c4ad4;
case 0x6c4ad7:c.instructions+=1;goto B6c4ad7;
case 0x6c4add:goto L6c4add;
case 0x6c4ae0:c.instructions+=1;goto B6c4ae0;
case 0x6c4ae6:goto L6c4ae6;
case 0x6c4ae8:c.instructions+=3;goto B6c4ae8;
case 0x6c4aeb:c.instructions+=2;goto B6c4aeb;
case 0x6c4aee:c.instructions+=1;goto B6c4aee;
case 0x6c4af4:goto L6c4af4;
case 0x6c4afb:c.instructions+=5;goto B6c4afb;
case 0x6c4afe:c.instructions+=4;goto B6c4afe;
case 0x6c4b00:c.instructions+=3;goto B6c4b00;
case 0x6c4b03:c.instructions+=2;goto B6c4b03;
case 0x6c4b06:c.instructions+=1;goto B6c4b06;
case 0x6c4b0c:goto L6c4b0c;
case 0x6c4b0f:c.instructions+=3;goto B6c4b0f;
case 0x6c4b12:c.instructions+=2;goto B6c4b12;
case 0x6c4b14:c.instructions+=1;goto B6c4b14;
case 0x6c4b1a:goto L6c4b1a;
case 0x6c4b1d:c.instructions+=2;goto B6c4b1d;
case 0x6c4b20:c.instructions+=1;goto B6c4b20;
case 0x6c4b23:goto L6c4b23;
case 0x6c4b25:c.instructions+=2;goto B6c4b25;
case 0x6c4b27:c.instructions+=1;goto B6c4b27;
case 0x6c4b29:goto L6c4b29;
case 0x6c4b2b:c.instructions+=1;goto B6c4b2b;
case 0x6c4b2d:goto L6c4b2d;
case 0x6c4b30:c.instructions+=3;goto B6c4b30;
case 0x6c4b32:c.instructions+=2;goto B6c4b32;
case 0x6c4b35:c.instructions+=1;goto B6c4b35;
case 0x6c4b37:goto L6c4b37;
case 0x6c4b3a:c.instructions+=6;goto B6c4b3a;
case 0x6c4b41:c.instructions+=5;goto B6c4b41;
case 0x6c4b44:c.instructions+=4;goto B6c4b44;
case 0x6c4b47:c.instructions+=3;goto B6c4b47;
case 0x6c4b4a:c.instructions+=2;goto B6c4b4a;
case 0x6c4b4d:c.instructions+=1;goto B6c4b4d;
case 0x6c4b4f:goto L6c4b4f;
case 0x6c4b51:c.instructions+=2;goto B6c4b51;
case 0x6c4b53:c.instructions+=1;goto B6c4b53;
case 0x6c4b55:goto L6c4b55;
case 0x6c4b58:c.instructions+=5;goto B6c4b58;
case 0x6c4b5b:c.instructions+=4;goto B6c4b5b;
case 0x6c4b5e:c.instructions+=3;goto B6c4b5e;
case 0x6c4b60:c.instructions+=2;goto B6c4b60;
case 0x6c4b63:c.instructions+=1;goto B6c4b63;
case 0x6c4b65:goto L6c4b65;
case 0x6c4b6c:goto L6c4b6c;
case 0x6c4b6f:c.instructions+=2;goto B6c4b6f;
case 0x6c4b70:c.instructions+=1;goto B6c4b70;
case 0x6c4b72:goto L6c4b72;
case 0x6c4b75:c.instructions+=1;goto B6c4b75;
case 0x6c4b77:goto L6c4b77;
case 0x6c4b79:c.instructions+=1;goto B6c4b79;
case 0x6c4b7b:goto L6c4b7b;
case 0x6c4b7e:goto L6c4b7e;
case 0x6c4b80:c.instructions+=1;goto B6c4b80;
case 0x6c4b82:goto L6c4b82;
case 0x6c4b84:goto L6c4b84;
case 0x6c4b8b:c.instructions+=1;goto B6c4b8b;
case 0x6c4b8d:goto L6c4b8d;
case 0x6c4b8f:goto L6c4b8f;
case 0x6c4b90:c.instructions+=2;goto B6c4b90;
case 0x6c4b93:c.instructions+=1;goto B6c4b93;
case 0x6c4b95:goto L6c4b95;
case 0x6c4b97:c.instructions+=1;goto B6c4b97;
case 0x6c4b99:goto L6c4b99;
case 0x6c4ba0:goto L6c4ba0;
case 0x6c4ba3:c.instructions+=4;goto B6c4ba3;
case 0x6c4ba6:c.instructions+=3;goto B6c4ba6;
case 0x6c4ba9:c.instructions+=2;goto B6c4ba9;
case 0x6c4bac:c.instructions+=1;goto B6c4bac;
case 0x6c4bb2:goto L6c4bb2;
case 0x6c4bb5:c.instructions+=3;goto B6c4bb5;
case 0x6c4bb8:c.instructions+=2;goto B6c4bb8;
case 0x6c4bbb:c.instructions+=1;goto B6c4bbb;
case 0x6c4bc1:goto L6c4bc1;
case 0x6c4bc4:c.instructions+=4;goto B6c4bc4;
case 0x6c4bc5:c.instructions+=3;goto B6c4bc5;
case 0x6c4bc8:c.instructions+=2;goto B6c4bc8;
case 0x6c4bcb:c.instructions+=1;goto B6c4bcb;
case 0x6c4bd1:goto L6c4bd1;
case 0x6c4bd4:goto L6c4bd4;
case 0x6c4bd7:c.instructions+=3;goto B6c4bd7;
case 0x6c4bde:c.instructions+=2;goto B6c4bde;
case 0x6c4be1:c.instructions+=1;goto B6c4be1;
case 0x6c4be3:goto L6c4be3;
case 0x6c4be5:c.instructions+=2;goto B6c4be5;
case 0x6c4be8:c.instructions+=1;goto B6c4be8;
case 0x6c4bea:goto L6c4bea;
case 0x6c4bed:c.instructions+=2;goto B6c4bed;
case 0x6c4bf0:c.instructions+=1;goto B6c4bf0;
case 0x6c4bf3:goto L6c4bf3;
case 0x6c4bfa:c.instructions+=3;goto B6c4bfa;
case 0x6c4bfd:c.instructions+=2;goto B6c4bfd;
case 0x6c4bff:c.instructions+=1;goto B6c4bff;
case 0x6c4c01:goto L6c4c01;
case 0x6c4c04:goto L6c4c04;
case 0x6c4c06:c.instructions+=2;goto B6c4c06;
case 0x6c4c08:c.instructions+=1;goto B6c4c08;
case 0x6c4c0a:goto L6c4c0a;
case 0x6c4c0d:c.instructions+=1;goto B6c4c0d;
case 0x6c4c0f:goto L6c4c0f;
case 0x6c4c16:goto L6c4c16;
case 0x6c4c19:c.instructions+=2;goto B6c4c19;
case 0x6c4c1a:c.instructions+=1;goto B6c4c1a;
case 0x6c4c1c:goto L6c4c1c;
case 0x6c4c1d:c.instructions+=2;goto B6c4c1d;
case 0x6c4c20:c.instructions+=1;goto B6c4c20;
case 0x6c4c22:goto L6c4c22;
case 0x6c4c25:c.instructions+=2;goto B6c4c25;
case 0x6c4c29:c.instructions+=1;goto B6c4c29;
case 0x6c4c2b:goto L6c4c2b;
case 0x6c4c2f:c.instructions+=1;goto B6c4c2f;
case 0x6c4c31:goto L6c4c31;
case 0x6c4c34:c.instructions+=2;goto B6c4c34;
case 0x6c4c38:c.instructions+=1;goto B6c4c38;
case 0x6c4c3e:goto L6c4c3e;
case 0x6c4c42:c.instructions+=1;goto B6c4c42;
case 0x6c4c44:goto L6c4c44;
case 0x6c4c47:c.instructions+=2;goto B6c4c47;
case 0x6c4c4b:c.instructions+=1;goto B6c4c4b;
case 0x6c4c51:goto L6c4c51;
case 0x6c4c53:goto L6c4c53;
case 0x6c4c56:c.instructions+=7;goto B6c4c56;
case 0x6c4c58:c.instructions+=6;goto B6c4c58;
case 0x6c4c5b:c.instructions+=5;goto B6c4c5b;
case 0x6c4c5d:c.instructions+=4;goto B6c4c5d;
case 0x6c4c5f:c.instructions+=3;goto B6c4c5f;
case 0x6c4c62:c.instructions+=2;goto B6c4c62;
case 0x6c4c68:c.instructions+=1;goto B6c4c68;
case 0x6c4c6e:goto L6c4c6e;
case 0x6c4c70:goto L6c4c70;
case 0x6c4c72:c.instructions+=1;goto B6c4c72;
case 0x6c4c75:goto L6c4c75;
case 0x6c4c77:goto L6c4c77;
case 0x6c4c7a:c.instructions+=4;goto B6c4c7a;
case 0x6c4c7b:c.instructions+=3;goto B6c4c7b;
case 0x6c4c82:c.instructions+=2;goto B6c4c82;
case 0x6c4c85:c.instructions+=1;goto B6c4c85;
case 0x6c4c87:goto L6c4c87;
case 0x6c4c8e:c.instructions+=2;goto B6c4c8e;
case 0x6c4c91:c.instructions+=1;goto B6c4c91;
case 0x6c4c93:goto L6c4c93;
case 0x6c4c9a:c.instructions+=2;goto B6c4c9a;
case 0x6c4c9d:c.instructions+=1;goto B6c4c9d;
case 0x6c4c9f:goto L6c4c9f;
case 0x6c4ca6:goto L6c4ca6;
case 0x6c4ca9:c.instructions+=2;goto B6c4ca9;
case 0x6c4cae:c.instructions+=1;goto B6c4cae;
case 0x6c4cb0:goto L6c4cb0;
case 0x6c4cb4:goto L6c4cb4;
case 0x6c4cb7:goto L6c4cb7;
case 0x6c4cbe:goto L6c4cbe;
case 0x6c4cc0:c.instructions+=1;goto B6c4cc0;
case 0x6c4cc6:goto L6c4cc6;
case 0x6c4cc9:c.instructions+=2;goto B6c4cc9;
case 0x6c4ccc:c.instructions+=1;goto B6c4ccc;
case 0x6c4cd2:goto L6c4cd2;
case 0x6c4cd6:c.instructions+=2;goto B6c4cd6;
case 0x6c4cda:c.instructions+=1;goto B6c4cda;
case 0x6c4cdc:goto L6c4cdc;
case 0x6c4cdf:c.instructions+=5;goto B6c4cdf;
case 0x6c4ce2:c.instructions+=4;goto B6c4ce2;
case 0x6c4ce5:c.instructions+=3;goto B6c4ce5;
case 0x6c4ce8:c.instructions+=2;goto B6c4ce8;
case 0x6c4cea:c.instructions+=1;goto B6c4cea;
case 0x6c4ced:goto L6c4ced;
case 0x6c4cef:c.instructions+=5;goto B6c4cef;
case 0x6c4cf2:c.instructions+=4;goto B6c4cf2;
case 0x6c4cf5:c.instructions+=3;goto B6c4cf5;
case 0x6c4cf8:c.instructions+=2;goto B6c4cf8;
case 0x6c4cfc:c.instructions+=1;goto B6c4cfc;
case 0x6c4cfe:goto L6c4cfe;
case 0x6c4d02:c.instructions+=1;goto B6c4d02;
case 0x6c4d04:goto L6c4d04;
case 0x6c4d07:c.instructions+=5;goto B6c4d07;
case 0x6c4d0a:c.instructions+=4;goto B6c4d0a;
case 0x6c4d0c:c.instructions+=3;goto B6c4d0c;
case 0x6c4d0e:c.instructions+=2;goto B6c4d0e;
case 0x6c4d11:c.instructions+=1;goto B6c4d11;
case 0x6c4d13:goto L6c4d13;
case 0x6c4d1a:goto L6c4d1a;
case 0x6c4d1d:c.instructions+=2;goto B6c4d1d;
case 0x6c4d20:c.instructions+=1;goto B6c4d20;
case 0x6c4d22:goto L6c4d22;
case 0x6c4d26:c.instructions+=1;goto B6c4d26;
case 0x6c4d28:goto L6c4d28;
case 0x6c4d2b:c.instructions+=3;goto B6c4d2b;
case 0x6c4d2e:c.instructions+=2;goto B6c4d2e;
case 0x6c4d32:c.instructions+=1;goto B6c4d32;
case 0x6c4d34:goto L6c4d34;
case 0x6c4d37:c.instructions+=1;goto B6c4d37;
case 0x6c4d39:goto L6c4d39;
case 0x6c4d3c:c.instructions+=4;goto B6c4d3c;
case 0x6c4d3f:c.instructions+=3;goto B6c4d3f;
case 0x6c4d45:c.instructions+=2;goto B6c4d45;
case 0x6c4d47:c.instructions+=1;goto B6c4d47;
case 0x6c4d4a:goto L6c4d4a;
case 0x6c4d4c:c.instructions+=3;goto B6c4d4c;
case 0x6c4d4f:c.instructions+=2;goto B6c4d4f;
case 0x6c4d52:c.instructions+=1;goto B6c4d52;
case 0x6c4d54:goto L6c4d54;
case 0x6c4d57:c.instructions+=2;goto B6c4d57;
case 0x6c4d5a:c.instructions+=1;goto B6c4d5a;
case 0x6c4d5d:goto L6c4d5d;
case 0x6c4d64:c.instructions+=5;goto B6c4d64;
case 0x6c4d67:c.instructions+=4;goto B6c4d67;
case 0x6c4d6a:c.instructions+=3;goto B6c4d6a;
case 0x6c4d6d:c.instructions+=2;goto B6c4d6d;
case 0x6c4d71:c.instructions+=1;goto B6c4d71;
case 0x6c4d73:goto L6c4d73;
case 0x6c4d77:c.instructions+=1;goto B6c4d77;
case 0x6c4d79:goto L6c4d79;
case 0x6c4d7c:c.instructions+=5;goto B6c4d7c;
case 0x6c4d7f:c.instructions+=4;goto B6c4d7f;
case 0x6c4d81:c.instructions+=3;goto B6c4d81;
case 0x6c4d83:c.instructions+=2;goto B6c4d83;
case 0x6c4d86:c.instructions+=1;goto B6c4d86;
case 0x6c4d88:goto L6c4d88;
case 0x6c4d8f:goto L6c4d8f;
case 0x6c4d90:c.instructions+=2;goto B6c4d90;
case 0x6c4d93:c.instructions+=1;goto B6c4d93;
case 0x6c4d95:goto L6c4d95;
case 0x6c4d99:c.instructions+=1;goto B6c4d99;
case 0x6c4d9b:goto L6c4d9b;
case 0x6c4d9d:c.instructions+=1;goto B6c4d9d;
case 0x6c4da0:goto L6c4da0;
case 0x6c4da2:c.instructions+=2;goto B6c4da2;
case 0x6c4da4:c.instructions+=1;goto B6c4da4;
case 0x6c4daa:goto L6c4daa;
case 0x6c4dad:c.instructions+=1;goto B6c4dad;
case 0x6c4daf:goto L6c4daf;
case 0x6c4db2:c.instructions+=2;goto B6c4db2;
case 0x6c4db5:c.instructions+=1;goto B6c4db5;
case 0x6c4db8:goto L6c4db8;
case 0x6c4dbb:c.instructions+=4;goto B6c4dbb;
case 0x6c4dbe:c.instructions+=3;goto B6c4dbe;
case 0x6c4dc0:c.instructions+=2;goto B6c4dc0;
case 0x6c4dc2:c.instructions+=1;goto B6c4dc2;
case 0x6c4dc4:goto L6c4dc4;
case 0x6c4dc7:goto L6c4dc7;
case 0x6c4dcb:c.instructions+=1;goto B6c4dcb;
case 0x6c4dcd:goto L6c4dcd;
case 0x6c4dce:c.instructions+=2;goto B6c4dce;
case 0x6c4dd0:c.instructions+=1;goto B6c4dd0;
case 0x6c4dd2:goto L6c4dd2;
case 0x6c4dd5:goto L6c4dd5;
case 0x6c4dd7:c.instructions+=1;goto B6c4dd7;
case 0x6c4dd9:goto L6c4dd9;
case 0x6c4ddc:c.instructions+=2;goto B6c4ddc;
case 0x6c4de0:c.instructions+=1;goto B6c4de0;
case 0x6c4de1:goto L6c4de1;
case 0x6c4de2:c.instructions+=2;goto B6c4de2;
case 0x6c4de5:c.instructions+=1;goto B6c4de5;
case 0x6c4de7:goto L6c4de7;
case 0x6c4dea:goto L6c4dea;
case 0x6c4ded:c.instructions+=1;goto B6c4ded;
case 0x6c4df2:goto L6c4df2;
case 0x6c4df5:c.instructions+=12;goto B6c4df5;
case 0x6c4dfb:c.instructions+=11;goto B6c4dfb;
case 0x6c4dfd:c.instructions+=10;goto B6c4dfd;
case 0x6c4e00:c.instructions+=9;goto B6c4e00;
case 0x6c4e02:c.instructions+=8;goto B6c4e02;
case 0x6c4e07:c.instructions+=7;goto B6c4e07;
case 0x6c4e09:c.instructions+=6;goto B6c4e09;
case 0x6c4e0c:c.instructions+=5;goto B6c4e0c;
case 0x6c4e0f:c.instructions+=4;goto B6c4e0f;
case 0x6c4e12:c.instructions+=3;goto B6c4e12;
case 0x6c4e15:c.instructions+=2;goto B6c4e15;
case 0x6c4e1c:c.instructions+=1;goto B6c4e1c;
case 0x6c4e22:goto L6c4e22;
case 0x6c4e27:c.instructions+=2;goto B6c4e27;
case 0x6c4e2c:c.instructions+=1;goto B6c4e2c;
case 0x6c4e32:goto L6c4e32;
case 0x6c4e35:c.instructions+=9;goto B6c4e35;
case 0x6c4e39:c.instructions+=8;goto B6c4e39;
case 0x6c4e3c:c.instructions+=7;goto B6c4e3c;
case 0x6c4e3f:c.instructions+=6;goto B6c4e3f;
case 0x6c4e43:c.instructions+=5;goto B6c4e43;
case 0x6c4e46:c.instructions+=4;goto B6c4e46;
case 0x6c4e48:c.instructions+=3;goto B6c4e48;
case 0x6c4e4b:c.instructions+=2;goto B6c4e4b;
case 0x6c4e51:c.instructions+=1;goto B6c4e51;
case 0x6c4e57:goto L6c4e57;
case 0x6c4e59:goto L6c4e59;
case 0x6c4e5b:c.instructions+=1;goto B6c4e5b;
case 0x6c4e5e:goto L6c4e5e;
case 0x6c4e60:goto L6c4e60;
case 0x6c4e62:c.instructions+=3;goto B6c4e62;
case 0x6c4e63:c.instructions+=2;goto B6c4e63;
case 0x6c4e66:c.instructions+=1;goto B6c4e66;
case 0x6c4e6c:goto L6c4e6c;
case 0x6c4e6e:goto L6c4e6e;
case 0x6c4e70:c.instructions+=2;goto B6c4e70;
case 0x6c4e71:c.instructions+=1;goto B6c4e71;
case 0x6c4e77:goto L6c4e77;
case 0x6c4e79:goto L6c4e79;
case 0x6c4e7c:c.instructions+=4;goto B6c4e7c;
case 0x6c4e7e:c.instructions+=3;goto B6c4e7e;
case 0x6c4e81:c.instructions+=2;goto B6c4e81;
case 0x6c4e84:c.instructions+=1;goto B6c4e84;
case 0x6c4e87:goto L6c4e87;
case 0x6c4e8b:c.instructions+=1;goto B6c4e8b;
case 0x6c4e8d:goto L6c4e8d;
case 0x6c4e8f:c.instructions+=3;goto B6c4e8f;
case 0x6c4e90:c.instructions+=2;goto B6c4e90;
case 0x6c4e93:c.instructions+=1;goto B6c4e93;
case 0x6c4e95:goto L6c4e95;
case 0x6c4e98:goto L6c4e98;
case 0x6c4e9b:c.instructions+=9;goto B6c4e9b;
case 0x6c4e9e:c.instructions+=8;goto B6c4e9e;
case 0x6c4ea1:c.instructions+=7;goto B6c4ea1;
case 0x6c4ea8:c.instructions+=6;goto B6c4ea8;
case 0x6c4eab:c.instructions+=5;goto B6c4eab;
case 0x6c4eae:c.instructions+=4;goto B6c4eae;
case 0x6c4eb1:c.instructions+=3;goto B6c4eb1;
case 0x6c4eb3:c.instructions+=2;goto B6c4eb3;
case 0x6c4eb6:c.instructions+=1;goto B6c4eb6;
case 0x6c4eb8:goto L6c4eb8;
case 0x6c4ebb:c.instructions+=2;goto B6c4ebb;
case 0x6c4ebe:c.instructions+=1;goto B6c4ebe;
case 0x6c4ec4:goto L6c4ec4;
case 0x6c4ec7:c.instructions+=15;goto B6c4ec7;
case 0x6c4ec9:c.instructions+=14;goto B6c4ec9;
case 0x6c4ecc:c.instructions+=13;goto B6c4ecc;
case 0x6c4ecf:c.instructions+=12;goto B6c4ecf;
case 0x6c4ed2:c.instructions+=11;goto B6c4ed2;
case 0x6c4ed5:c.instructions+=10;goto B6c4ed5;
case 0x6c4ed7:c.instructions+=9;goto B6c4ed7;
case 0x6c4edd:c.instructions+=8;goto B6c4edd;
case 0x6c4ee0:c.instructions+=7;goto B6c4ee0;
case 0x6c4ee1:c.instructions+=6;goto B6c4ee1;
case 0x6c4ee4:c.instructions+=5;goto B6c4ee4;
case 0x6c4ee5:c.instructions+=4;goto B6c4ee5;
case 0x6c4ee8:c.instructions+=3;goto B6c4ee8;
case 0x6c4ee9:c.instructions+=2;goto B6c4ee9;
case 0x6c4eea:c.instructions+=1;goto B6c4eea;
case 0x6c4eef:goto L6c4eef;
case 0x6c4ef1:c.instructions+=1;goto B6c4ef1;
case 0x6c4ef3:goto L6c4ef3;
case 0x6c4ef6:c.instructions+=14;goto B6c4ef6;
case 0x6c4ef7:c.instructions+=13;goto B6c4ef7;
case 0x6c4efa:c.instructions+=12;goto B6c4efa;
case 0x6c4efd:c.instructions+=11;goto B6c4efd;
case 0x6c4efe:c.instructions+=10;goto B6c4efe;
case 0x6c4f04:c.instructions+=9;goto B6c4f04;
case 0x6c4f05:c.instructions+=8;goto B6c4f05;
case 0x6c4f08:c.instructions+=7;goto B6c4f08;
case 0x6c4f09:c.instructions+=6;goto B6c4f09;
case 0x6c4f0f:c.instructions+=5;goto B6c4f0f;
case 0x6c4f10:c.instructions+=4;goto B6c4f10;
case 0x6c4f16:c.instructions+=3;goto B6c4f16;
case 0x6c4f17:c.instructions+=2;goto B6c4f17;
case 0x6c4f18:c.instructions+=1;goto B6c4f18;
case 0x6c4f1d:goto L6c4f1d;
case 0x6c4f20:c.instructions+=1;goto B6c4f20;
case 0x6c4f22:goto L6c4f22;
case 0x6c4f25:c.instructions+=3;goto B6c4f25;
case 0x6c4f27:c.instructions+=2;goto B6c4f27;
case 0x6c4f2a:c.instructions+=1;goto B6c4f2a;
case 0x6c4f31:goto L6c4f31;
case 0x6c4f35:c.instructions+=2;goto B6c4f35;
case 0x6c4f38:c.instructions+=1;goto B6c4f38;
case 0x6c4f3a:goto L6c4f3a;
case 0x6c4f3d:c.instructions+=3;goto B6c4f3d;
case 0x6c4f40:c.instructions+=2;goto B6c4f40;
case 0x6c4f42:c.instructions+=1;goto B6c4f42;
case 0x6c4f44:goto L6c4f44;
case 0x6c4f47:goto L6c4f47;
case 0x6c4f48:c.instructions+=3;goto B6c4f48;
case 0x6c4f4b:c.instructions+=2;goto B6c4f4b;
case 0x6c4f4e:c.instructions+=1;goto B6c4f4e;
case 0x6c4f50:goto L6c4f50;
case 0x6c4f54:c.instructions+=1;goto B6c4f54;
case 0x6c4f56:goto L6c4f56;
case 0x6c4f59:c.instructions+=3;goto B6c4f59;
case 0x6c4f5c:c.instructions+=2;goto B6c4f5c;
case 0x6c4f60:c.instructions+=1;goto B6c4f60;
case 0x6c4f66:goto L6c4f66;
case 0x6c4f68:goto L6c4f68;
case 0x6c4f6f:goto L6c4f6f;
case 0x6c4f73:c.instructions+=1;goto B6c4f73;
case 0x6c4f77:goto L6c4f77;
case 0x6c4f7b:c.instructions+=1;goto B6c4f7b;
case 0x6c4f7d:goto L6c4f7d;
case 0x6c4f7f:c.instructions+=3;goto B6c4f7f;
case 0x6c4f80:c.instructions+=2;goto B6c4f80;
case 0x6c4f83:c.instructions+=1;goto B6c4f83;
case 0x6c4f85:goto L6c4f85;
case 0x6c4f88:goto L6c4f88;
case 0x6c4f90:c.instructions+=1;goto B6c4f90;
case 0x6c4f92:goto L6c4f92;
case 0x6c4f96:c.instructions+=2;goto B6c4f96;
case 0x6c4f9a:c.instructions+=1;goto B6c4f9a;
case 0x6c4f9c:goto L6c4f9c;
case 0x6c4f9e:c.instructions+=2;goto B6c4f9e;
case 0x6c4fa1:c.instructions+=1;goto B6c4fa1;
case 0x6c4fa3:goto L6c4fa3;
case 0x6c4fa6:c.instructions+=2;goto B6c4fa6;
case 0x6c4fad:c.instructions+=1;goto B6c4fad;
case 0x6c4fb0:goto L6c4fb0;
case 0x6c4fb4:c.instructions+=2;goto B6c4fb4;
case 0x6c4fb6:c.instructions+=1;goto B6c4fb6;
case 0x6c4fb8:goto L6c4fb8;
case 0x6c4fbb:c.instructions+=5;goto B6c4fbb;
case 0x6c4fbe:c.instructions+=4;goto B6c4fbe;
case 0x6c4fc1:c.instructions+=3;goto B6c4fc1;
case 0x6c4fc3:c.instructions+=2;goto B6c4fc3;
case 0x6c4fc6:c.instructions+=1;goto B6c4fc6;
case 0x6c4fc9:goto L6c4fc9;
case 0x6c4fcb:c.instructions+=1;goto B6c4fcb;
case 0x6c4fcd:goto L6c4fcd;
case 0x6c4fd0:c.instructions+=3;goto B6c4fd0;
case 0x6c4fd3:c.instructions+=2;goto B6c4fd3;
case 0x6c4fd6:c.instructions+=1;goto B6c4fd6;
case 0x6c4fd8:goto L6c4fd8;
case 0x6c4fd9:c.instructions+=2;goto B6c4fd9;
case 0x6c4fdc:c.instructions+=1;goto B6c4fdc;
case 0x6c4fde:goto L6c4fde;
case 0x6c4fe0:goto L6c4fe0;
case 0x6c4fe7:goto L6c4fe7;
case 0x6c4fea:c.instructions+=3;goto B6c4fea;
case 0x6c4fed:c.instructions+=2;goto B6c4fed;
case 0x6c4ff0:c.instructions+=1;goto B6c4ff0;
case 0x6c4ff2:goto L6c4ff2;
case 0x6c4ff5:c.instructions+=4;goto B6c4ff5;
case 0x6c4ff8:c.instructions+=3;goto B6c4ff8;
case 0x6c4ffb:c.instructions+=2;goto B6c4ffb;
case 0x6c4fff:c.instructions+=1;goto B6c4fff;
default:missing_instruction(c.pc);}
B6c4004:L6c4004:{c.instructions+=2;NFSU2_TR(0x6c4004);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4005:{NFSU2_TR(0x6c4005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c400aull));
TAIL_STATIC(0x699362u,699);
}
B6c400a:L6c400a:{c.instructions+=3;NFSU2_TR(0x6c400a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6c400c:{NFSU2_TR(0x6c400c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c400f:{NFSU2_TR(0x6c400f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c3f95u,6c3);}
}
B6c4011:L6c4011:{c.instructions+=3;NFSU2_TR(0x6c4011);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c4017:{NFSU2_TR(0x6c4017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c401a:{NFSU2_TR(0x6c401a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c401full));
TAIL_STATIC(0x698eb3u,698);
}
B6c401f:L6c401f:{c.instructions+=3;NFSU2_TR(0x6c401f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c4021:{NFSU2_TR(0x6c4021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4024:{NFSU2_TR(0x6c4024);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c3f95u,6c3);}
}
B6c402a:L6c402a:{c.instructions+=9;NFSU2_TR(0x6c402a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4030:{NFSU2_TR(0x6c4030);
__builtin_memmove((R+4),(R+24),4);
}
B6c4032:{NFSU2_TR(0x6c4032);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c4035:{NFSU2_TR(0x6c4035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4038:{NFSU2_TR(0x6c4038);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c403b:{NFSU2_TR(0x6c403b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c403e:{NFSU2_TR(0x6c403e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4041:{NFSU2_TR(0x6c4041);
__builtin_memmove((R+8),(R+4),4);
}
B6c4043:{NFSU2_TR(0x6c4043);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4046:L6c4046:{c.instructions+=1;NFSU2_TR(0x6c4046);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c4048;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4046u);}goto L6c4046;}
}
B6c4048:L6c4048:{c.instructions+=2;NFSU2_TR(0x6c4048);
__builtin_memmove((R+4),(R+8),4);
}
B6c404a:{NFSU2_TR(0x6c404a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c404d:L6c404d:{c.instructions+=1;NFSU2_TR(0x6c404d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c404f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c404du);}goto L6c404d;}
}
B6c404f:L6c404f:{c.instructions+=9;NFSU2_TR(0x6c404f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4052:{NFSU2_TR(0x6c4052);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4055:{NFSU2_TR(0x6c4055);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4058:{NFSU2_TR(0x6c4058);
__builtin_memmove((R+8),(R+4),4);
}
B6c405a:{NFSU2_TR(0x6c405a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c405d:{NFSU2_TR(0x6c405d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4060:{NFSU2_TR(0x6c4060);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff1cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6c4067:{NFSU2_TR(0x6c4067);
__builtin_memmove((R+8),(R+4),4);
}
B6c4069:{NFSU2_TR(0x6c4069);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c406c:L6c406c:{c.instructions+=1;NFSU2_TR(0x6c406c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c406e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c406cu);}goto L6c406c;}
}
B6c406e:L6c406e:{c.instructions+=2;NFSU2_TR(0x6c406e);
__builtin_memmove((R+4),(R+8),4);
}
B6c4070:{NFSU2_TR(0x6c4070);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c4073:L6c4073:{c.instructions+=1;NFSU2_TR(0x6c4073);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c4075;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4073u);}goto L6c4073;}
}
B6c4075:L6c4075:{c.instructions+=6;NFSU2_TR(0x6c4075);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4078:{NFSU2_TR(0x6c4078);
__builtin_memmove((R+4),(R+8),4);
}
B6c407a:{NFSU2_TR(0x6c407a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6c407c:{NFSU2_TR(0x6c407c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c407f:{NFSU2_TR(0x6c407f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c4085:{NFSU2_TR(0x6c4085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B6c4088:L6c4088:{c.instructions+=1;NFSU2_TR(0x6c4088);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c408a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4088u);}goto L6c4088;}
}
B6c408a:L6c408a:{c.instructions+=2;NFSU2_TR(0x6c408a);
__builtin_memmove((R+4),(R+8),4);
}
B6c408c:{NFSU2_TR(0x6c408c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c408f:L6c408f:{c.instructions+=1;NFSU2_TR(0x6c408f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c4091;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c408fu);}goto L6c408f;}
}
B6c4091:L6c4091:{c.instructions+=14;NFSU2_TR(0x6c4091);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4094:{NFSU2_TR(0x6c4094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c4096:{NFSU2_TR(0x6c4096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4099:{NFSU2_TR(0x6c4099);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c409c:{NFSU2_TR(0x6c409c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c409f:{NFSU2_TR(0x6c409f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c40a2:{NFSU2_TR(0x6c40a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c40a5:{NFSU2_TR(0x6c40a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c40a7:{NFSU2_TR(0x6c40a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c40aa:{NFSU2_TR(0x6c40aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c40ad:{NFSU2_TR(0x6c40ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c40b0:{NFSU2_TR(0x6c40b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c40b3:{NFSU2_TR(0x6c40b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c40b6:{NFSU2_TR(0x6c40b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c40c7;}}
}
B6c40b8:L6c40b8:{c.instructions+=3;NFSU2_TR(0x6c40b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c40bb:{NFSU2_TR(0x6c40bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c40be:{NFSU2_TR(0x6c40be);
if(r1(R+518)){TAIL_STATIC(0x6c3f8eu,6c3);}
}
B6c40c4:L6c40c4:{c.instructions+=1;NFSU2_TR(0x6c40c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c40c7:L6c40c7:{c.instructions+=2;NFSU2_TR(0x6c40c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c40ca:{NFSU2_TR(0x6c40ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c40d8;}}
}
B6c40cc:L6c40cc:{c.instructions+=3;NFSU2_TR(0x6c40cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c40cf:{NFSU2_TR(0x6c40cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c40d2:{NFSU2_TR(0x6c40d2);
if(r1(R+518)){TAIL_STATIC(0x6c3f8eu,6c3);}
}
B6c40d8:L6c40d8:{c.instructions+=3;NFSU2_TR(0x6c40d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c40db:{NFSU2_TR(0x6c40db);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c40dd:{NFSU2_TR(0x6c40dd);
if(r1(R+518)){TAIL_STATIC(0x6c3dc7u,6c3);}
}
B6c40e3:L6c40e3:{c.instructions+=4;NFSU2_TR(0x6c40e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c40e5:{NFSU2_TR(0x6c40e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c40e8:{NFSU2_TR(0x6c40e8);
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
B6c40ea:{NFSU2_TR(0x6c40ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c40f9;}}
}
B6c40ec:L6c40ec:{c.instructions+=3;NFSU2_TR(0x6c40ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c40ef:{NFSU2_TR(0x6c40ef);
__builtin_memmove((R+4),(R+0),4);
}
B6c40f1:{NFSU2_TR(0x6c40f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c40f7:L6c40f7:{c.instructions+=1;NFSU2_TR(0x6c40f7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c40f9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c40f7u);}goto L6c40f7;}
}
B6c40f9:L6c40f9:{c.instructions+=3;NFSU2_TR(0x6c40f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c40fc:{NFSU2_TR(0x6c40fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c40fe:{NFSU2_TR(0x6c40fe);
TAIL_STATIC(0x6c3fa3u,6c3);
}
B6c4103:L6c4103:{c.instructions+=2;NFSU2_TR(0x6c4103);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4106:{NFSU2_TR(0x6c4106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4136;}}
}
B6c4108:L6c4108:{c.instructions+=9;NFSU2_TR(0x6c4108);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4109:{NFSU2_TR(0x6c4109);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c410a:{NFSU2_TR(0x6c410a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c410d:{NFSU2_TR(0x6c410d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c410e:{NFSU2_TR(0x6c410e);
__builtin_memmove((R+0),(R+24),4);
}
B6c4110:{NFSU2_TR(0x6c4110);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c4115:{NFSU2_TR(0x6c4115);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70b00000ull))));
}
B6c411a:{NFSU2_TR(0x6c411a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c411b:{NFSU2_TR(0x6c411b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c4120ull));
TAIL_STATIC(0x699362u,699);
}
B6c4120:L6c4120:{c.instructions+=3;NFSU2_TR(0x6c4120);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6c4122:{NFSU2_TR(0x6c4122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4125:{NFSU2_TR(0x6c4125);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c3f95u,6c3);}
}
B6c412b:L6c412b:{c.instructions+=3;NFSU2_TR(0x6c412b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c412d:{NFSU2_TR(0x6c412d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4130:{NFSU2_TR(0x6c4130);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c3feau,6c3);}
}
B6c4136:L6c4136:{c.instructions+=2;NFSU2_TR(0x6c4136);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c413a:{NFSU2_TR(0x6c413a);
if(r1(R+518)){TAIL_STATIC(0x6c3fefu,6c3);}
}
B6c4140:L6c4140:{c.instructions+=1;NFSU2_TR(0x6c4140);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4011u);}goto L6c4011;}
}
B6c4145:L6c4145:{c.instructions+=38;NFSU2_TR(0x6c4145);
__builtin_memmove((R+28),(R+28),4);
}
B6c4147:{NFSU2_TR(0x6c4147);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4148:{NFSU2_TR(0x6c4148);
__builtin_memmove((R+20),(R+16),4);
}
B6c414a:{NFSU2_TR(0x6c414a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x134ull))));
}
B6c4150:{NFSU2_TR(0x6c4150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4151:{NFSU2_TR(0x6c4151);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4152:{NFSU2_TR(0x6c4152);
__builtin_memmove((R+24),(R+4),4);
}
B6c4154:{NFSU2_TR(0x6c4154);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c415a:{NFSU2_TR(0x6c415a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c415c:{NFSU2_TR(0x6c415c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c415d:{NFSU2_TR(0x6c415d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c415f:{NFSU2_TR(0x6c415f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c4161:{NFSU2_TR(0x6c4161);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6c4167:{NFSU2_TR(0x6c4167);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c416a:{NFSU2_TR(0x6c416a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c416d:{NFSU2_TR(0x6c416d);
__builtin_memmove((R+4),(R+518),1);
}
B6c4170:{NFSU2_TR(0x6c4170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4173:{NFSU2_TR(0x6c4173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4176:{NFSU2_TR(0x6c4176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4179:{NFSU2_TR(0x6c4179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c417c:{NFSU2_TR(0x6c417c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4183:{NFSU2_TR(0x6c4183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c418a:{NFSU2_TR(0x6c418a);
__builtin_memmove((R+28),(R+4),4);
}
B6c418c:{NFSU2_TR(0x6c418c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c418d:{NFSU2_TR(0x6c418d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c418e:{NFSU2_TR(0x6c418e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c4191:{NFSU2_TR(0x6c4191);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4192:{NFSU2_TR(0x6c4192);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c4198:{NFSU2_TR(0x6c4198);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4199:{NFSU2_TR(0x6c4199);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c419c:{NFSU2_TR(0x6c419c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c419d:{NFSU2_TR(0x6c419d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c41a3:{NFSU2_TR(0x6c41a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41a4:{NFSU2_TR(0x6c41a4);
u8 U[4];
w4(U+0,u32(0x7bda60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41a9:{NFSU2_TR(0x6c41a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41aa:{NFSU2_TR(0x6c41aa);
__builtin_memmove((R+4),(R+24),4);
}
B6c41ac:{NFSU2_TR(0x6c41ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c41b3:{NFSU2_TR(0x6c41b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c41b8ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c41b8:L6c41b8:{c.instructions+=2;NFSU2_TR(0x6c41b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c41ba:{NFSU2_TR(0x6c41ba);
if(r1(R+518)){{goto L6c41f5;}}
}
B6c41bc:L6c41bc:{c.instructions+=15;NFSU2_TR(0x6c41bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41bd:{NFSU2_TR(0x6c41bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41be:{NFSU2_TR(0x6c41be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c41c1:{NFSU2_TR(0x6c41c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41c2:{NFSU2_TR(0x6c41c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c41c8:{NFSU2_TR(0x6c41c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41c9:{NFSU2_TR(0x6c41c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c41cc:{NFSU2_TR(0x6c41cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41cd:{NFSU2_TR(0x6c41cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c41d3:{NFSU2_TR(0x6c41d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41d4:{NFSU2_TR(0x6c41d4);
u8 U[4];
w4(U+0,u32(0x7bdae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c41d9:{NFSU2_TR(0x6c41d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c41df:{NFSU2_TR(0x6c41df);
__builtin_memmove((R+4),(R+24),4);
}
B6c41e1:{NFSU2_TR(0x6c41e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c41e8:{NFSU2_TR(0x6c41e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c41edull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c41ed:L6c41ed:{c.instructions+=2;NFSU2_TR(0x6c41ed);
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
B6c41ef:{NFSU2_TR(0x6c41ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4330;}}
}
B6c41f5:L6c41f5:{c.instructions+=5;NFSU2_TR(0x6c41f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c41f9:{NFSU2_TR(0x6c41f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c41ff:{NFSU2_TR(0x6c41ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4202:{NFSU2_TR(0x6c4202);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4208:{NFSU2_TR(0x6c4208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c420b:L6c420b:{c.instructions+=5;NFSU2_TR(0x6c420b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c420f:{NFSU2_TR(0x6c420f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4215:{NFSU2_TR(0x6c4215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4218:{NFSU2_TR(0x6c4218);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c421e:{NFSU2_TR(0x6c421e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4221:L6c4221:{c.instructions+=3;NFSU2_TR(0x6c4221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4225:{NFSU2_TR(0x6c4225);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4227:{NFSU2_TR(0x6c4227);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c42ef;}}
}
B6c422d:L6c422d:{c.instructions+=9;NFSU2_TR(0x6c422d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4230:{NFSU2_TR(0x6c4230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4233:{NFSU2_TR(0x6c4233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4236:{NFSU2_TR(0x6c4236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4239:{NFSU2_TR(0x6c4239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c423c:{NFSU2_TR(0x6c423c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c423f:{NFSU2_TR(0x6c423f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4242:{NFSU2_TR(0x6c4242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4245:{NFSU2_TR(0x6c4245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4248:L6c4248:{c.instructions+=13;NFSU2_TR(0x6c4248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c424b:{NFSU2_TR(0x6c424b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff0cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c4252:{NFSU2_TR(0x6c4252);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c4255:{NFSU2_TR(0x6c4255);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4258:{NFSU2_TR(0x6c4258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c425b:{NFSU2_TR(0x6c425b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c425d:{NFSU2_TR(0x6c425d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c425f:{NFSU2_TR(0x6c425f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4262:{NFSU2_TR(0x6c4262);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4266:{NFSU2_TR(0x6c4266);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4269:{NFSU2_TR(0x6c4269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c426c:{NFSU2_TR(0x6c426c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c426f:{NFSU2_TR(0x6c426f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c42ef;}}
}
B6c4271:L6c4271:{c.instructions+=2;NFSU2_TR(0x6c4271);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4275:{NFSU2_TR(0x6c4275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c42ef;}}
}
B6c4277:L6c4277:{c.instructions+=2;NFSU2_TR(0x6c4277);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c427b:{NFSU2_TR(0x6c427b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c42ef;}}
}
B6c427d:L6c427d:{c.instructions+=5;NFSU2_TR(0x6c427d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4280:{NFSU2_TR(0x6c4280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4283:{NFSU2_TR(0x6c4283);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4286:{NFSU2_TR(0x6c4286);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c428a:{NFSU2_TR(0x6c428a);
if(r1(R+518)){{goto L6c42ef;}}
}
B6c428c:L6c428c:{c.instructions+=5;NFSU2_TR(0x6c428c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c428f:{NFSU2_TR(0x6c428f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4292:{NFSU2_TR(0x6c4292);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4295:{NFSU2_TR(0x6c4295);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c4299:{NFSU2_TR(0x6c4299);
if(r1(R+518)){{goto L6c42ef;}}
}
B6c429b:L6c429b:{c.instructions+=5;NFSU2_TR(0x6c429b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c429e:{NFSU2_TR(0x6c429e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c42a1:{NFSU2_TR(0x6c42a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c42a4:{NFSU2_TR(0x6c42a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c42a8:{NFSU2_TR(0x6c42a8);
if(r1(R+518)){{goto L6c42ef;}}
}
B6c42aa:L6c42aa:{c.instructions+=10;NFSU2_TR(0x6c42aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c42ad:{NFSU2_TR(0x6c42ad);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c42b0:{NFSU2_TR(0x6c42b0);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B6c42b3:{NFSU2_TR(0x6c42b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c42b6:{NFSU2_TR(0x6c42b6);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B6c42b9:{NFSU2_TR(0x6c42b9);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B6c42bb:{NFSU2_TR(0x6c42bb);
{u32 ea_=u32(u32(8122816u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6c42c1:{NFSU2_TR(0x6c42c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c42c3:{NFSU2_TR(0x6c42c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6c42c6:{NFSU2_TR(0x6c42c6);
if(r1(R+518)){{goto L6c42ef;}}
}
B6c42c8:L6c42c8:{c.instructions+=5;NFSU2_TR(0x6c42c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c42cb:{NFSU2_TR(0x6c42cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c42cd:{NFSU2_TR(0x6c42cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c42d0:{NFSU2_TR(0x6c42d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c42d2:{NFSU2_TR(0x6c42d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c42ef;}}
}
B6c42d4:L6c42d4:{c.instructions+=9;NFSU2_TR(0x6c42d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c42d7:{NFSU2_TR(0x6c42d7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c42d9:{NFSU2_TR(0x6c42d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c42da:{NFSU2_TR(0x6c42da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c42dd:{NFSU2_TR(0x6c42dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c42e0:{NFSU2_TR(0x6c42e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c42e3:{NFSU2_TR(0x6c42e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c42e6:{NFSU2_TR(0x6c42e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c42e9:{NFSU2_TR(0x6c42e9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4248u);}goto L6c4248;}}
}
B6c42ef:L6c42ef:{c.instructions+=2;NFSU2_TR(0x6c42ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c42f2:{NFSU2_TR(0x6c42f2);
if(r1(R+518)){{goto L6c4337;}}
}
B6c42f4:L6c42f4:{c.instructions+=7;NFSU2_TR(0x6c42f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c42f7:{NFSU2_TR(0x6c42f7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c42f9:{NFSU2_TR(0x6c42f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c42fa:{NFSU2_TR(0x6c42fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c42fd:{NFSU2_TR(0x6c42fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4300:{NFSU2_TR(0x6c4300);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4304:{NFSU2_TR(0x6c4304);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4221u);}goto L6c4221;}}
}
B6c430a:L6c430a:{c.instructions+=5;NFSU2_TR(0x6c430a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c430d:{NFSU2_TR(0x6c430d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4310:{NFSU2_TR(0x6c4310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4313:{NFSU2_TR(0x6c4313);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4317:{NFSU2_TR(0x6c4317);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c420bu);}goto L6c420b;}}
}
B6c431d:L6c431d:{c.instructions+=2;NFSU2_TR(0x6c431d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c431f:{NFSU2_TR(0x6c431f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c4320:L6c4320:{c.instructions+=3;NFSU2_TR(0x6c4320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4323:{NFSU2_TR(0x6c4323);
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
B6c4325:{NFSU2_TR(0x6c4325);
if(r1(R+518)){{goto L6c432e;}}
}
B6c4327:L6c4327:{c.instructions+=2;NFSU2_TR(0x6c4327);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4329:{NFSU2_TR(0x6c4329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c432eull));
TAIL_STATIC(0x6739efu,673);
}
B6c432e:L6c432e:{c.instructions+=1;NFSU2_TR(0x6c432e);
__builtin_memmove((R+0),(R+28),4);
}
B6c4330:L6c4330:{c.instructions+=5;NFSU2_TR(0x6c4330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4331:{NFSU2_TR(0x6c4331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c4332:{NFSU2_TR(0x6c4332);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c4333:{NFSU2_TR(0x6c4333);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c4334:{NFSU2_TR(0x6c4334);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c4337:L6c4337:{c.instructions+=2;NFSU2_TR(0x6c4337);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4339:{NFSU2_TR(0x6c4339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c433eull));
TAIL_STATIC(0x699317u,699);
}
B6c433e:L6c433e:{c.instructions+=3;NFSU2_TR(0x6c433e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c4340:{NFSU2_TR(0x6c4340);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4342:{NFSU2_TR(0x6c4342);
if(r1(R+518)){{goto L6c4350;}}
}
B6c4344:L6c4344:{c.instructions+=2;NFSU2_TR(0x6c4344);
__builtin_memmove((R+4),(R+0),4);
}
B6c4346:{NFSU2_TR(0x6c4346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c434bull));
TAIL_STATIC(0x698e7du,698);
}
B6c434b:L6c434b:{c.instructions+=2;NFSU2_TR(0x6c434b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c434e:{NFSU2_TR(0x6c434e);
{goto L6c4353;}
}
B6c4350:L6c4350:{c.instructions+=1;NFSU2_TR(0x6c4350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4353:L6c4353:{c.instructions+=3;NFSU2_TR(0x6c4353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4356:{NFSU2_TR(0x6c4356);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6c4358:{NFSU2_TR(0x6c4358);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4361;}}
}
B6c435a:L6c435a:{c.instructions+=2;NFSU2_TR(0x6c435a);
w4(R+28,u32(0x8007000eull));
}
B6c435f:{NFSU2_TR(0x6c435f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c432eu);}goto L6c432e;}
}
B6c4361:L6c4361:{c.instructions+=2;NFSU2_TR(0x6c4361);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4364:{NFSU2_TR(0x6c4364);
if(r1(R+518)){{goto L6c437f;}}
}
B6c4366:L6c4366:{c.instructions+=2;NFSU2_TR(0x6c4366);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4369:{NFSU2_TR(0x6c4369);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c431du);}goto L6c431d;}}
}
B6c436b:L6c436b:{c.instructions+=8;NFSU2_TR(0x6c436b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c436c:{NFSU2_TR(0x6c436c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c436f:{NFSU2_TR(0x6c436f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4370:{NFSU2_TR(0x6c4370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4371:{NFSU2_TR(0x6c4371);
__builtin_memmove((R+0),(R+12),4);
}
B6c4373:{NFSU2_TR(0x6c4373);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c4378:{NFSU2_TR(0x6c4378);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70c00000ull))));
}
B6c437d:{NFSU2_TR(0x6c437d);
{goto L6c4391;}
}
B6c437f:L6c437f:{c.instructions+=7;NFSU2_TR(0x6c437f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4380:{NFSU2_TR(0x6c4380);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c4383:{NFSU2_TR(0x6c4383);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4384:{NFSU2_TR(0x6c4384);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4385:{NFSU2_TR(0x6c4385);
__builtin_memmove((R+0),(R+12),4);
}
B6c4387:{NFSU2_TR(0x6c4387);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c438c:{NFSU2_TR(0x6c438c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70b00000ull))));
}
B6c4391:L6c4391:{c.instructions+=2;NFSU2_TR(0x6c4391);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4392:{NFSU2_TR(0x6c4392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c4397ull));
TAIL_STATIC(0x699362u,699);
}
B6c4397:L6c4397:{c.instructions+=3;NFSU2_TR(0x6c4397);
__builtin_memmove((R+28),(R+0),4);
}
B6c4399:{NFSU2_TR(0x6c4399);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c439b:{NFSU2_TR(0x6c439b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4320u);}goto L6c4320;}}
}
B6c439d:L6c439d:{c.instructions+=3;NFSU2_TR(0x6c439d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c43a3:{NFSU2_TR(0x6c43a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c43a6:{NFSU2_TR(0x6c43a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c43abull));
TAIL_STATIC(0x698eb3u,698);
}
B6c43ab:L6c43ab:{c.instructions+=3;NFSU2_TR(0x6c43ab);
__builtin_memmove((R+28),(R+0),4);
}
B6c43ad:{NFSU2_TR(0x6c43ad);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c43af:{NFSU2_TR(0x6c43af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4320u);}goto L6c4320;}}
}
B6c43b5:L6c43b5:{c.instructions+=9;NFSU2_TR(0x6c43b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c43bb:{NFSU2_TR(0x6c43bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c43be:{NFSU2_TR(0x6c43be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c43c1:{NFSU2_TR(0x6c43c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c43c4:{NFSU2_TR(0x6c43c4);
__builtin_memmove((R+4),(R+12),4);
}
B6c43c6:{NFSU2_TR(0x6c43c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c43c9:{NFSU2_TR(0x6c43c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c43cc:{NFSU2_TR(0x6c43cc);
__builtin_memmove((R+8),(R+4),4);
}
B6c43ce:{NFSU2_TR(0x6c43ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c43d1:L6c43d1:{c.instructions+=1;NFSU2_TR(0x6c43d1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c43d3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c43d1u);}goto L6c43d1;}
}
B6c43d3:L6c43d3:{c.instructions+=2;NFSU2_TR(0x6c43d3);
__builtin_memmove((R+4),(R+8),4);
}
B6c43d5:{NFSU2_TR(0x6c43d5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c43d8:L6c43d8:{c.instructions+=1;NFSU2_TR(0x6c43d8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c43da;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c43d8u);}goto L6c43d8;}
}
B6c43da:L6c43da:{c.instructions+=4;NFSU2_TR(0x6c43da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c43dd:{NFSU2_TR(0x6c43dd);
__builtin_memmove((R+4),(R+8),4);
}
B6c43df:{NFSU2_TR(0x6c43df);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c43e2:{NFSU2_TR(0x6c43e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c43e8:L6c43e8:{c.instructions+=1;NFSU2_TR(0x6c43e8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c43ea;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c43e8u);}goto L6c43e8;}
}
B6c43ea:L6c43ea:{c.instructions+=2;NFSU2_TR(0x6c43ea);
__builtin_memmove((R+4),(R+8),4);
}
B6c43ec:{NFSU2_TR(0x6c43ec);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c43ef:L6c43ef:{c.instructions+=1;NFSU2_TR(0x6c43ef);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c43f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c43efu);}goto L6c43ef;}
}
B6c43f1:L6c43f1:{c.instructions+=8;NFSU2_TR(0x6c43f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c43f4:{NFSU2_TR(0x6c43f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c43f7:{NFSU2_TR(0x6c43f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c43fd:{NFSU2_TR(0x6c43fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c4400:{NFSU2_TR(0x6c4400);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6c4402:{NFSU2_TR(0x6c4402);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4406:{NFSU2_TR(0x6c4406);
__builtin_memmove((R+4),(R+8),4);
}
B6c4408:{NFSU2_TR(0x6c4408);
if(r1(R+518)){{goto L6c440e;}}
}
B6c440a:L6c440a:{c.instructions+=2;NFSU2_TR(0x6c440a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6c440c:{NFSU2_TR(0x6c440c);
{goto L6c4411;}
}
B6c440e:L6c440e:{c.instructions+=1;NFSU2_TR(0x6c440e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6c4411:L6c4411:{c.instructions+=2;NFSU2_TR(0x6c4411);
__builtin_memmove((R+12),(R+4),4);
}
B6c4413:{NFSU2_TR(0x6c4413);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4416:L6c4416:{c.instructions+=1;NFSU2_TR(0x6c4416);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c4418;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4416u);}goto L6c4416;}
}
B6c4418:L6c4418:{c.instructions+=2;NFSU2_TR(0x6c4418);
__builtin_memmove((R+4),(R+12),4);
}
B6c441a:{NFSU2_TR(0x6c441a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c441d:L6c441d:{c.instructions+=1;NFSU2_TR(0x6c441d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c441f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c441du);}goto L6c441d;}
}
B6c441f:L6c441f:{c.instructions+=13;NFSU2_TR(0x6c441f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c4422:{NFSU2_TR(0x6c4422);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c4425:{NFSU2_TR(0x6c4425);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4428:{NFSU2_TR(0x6c4428);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c442b:{NFSU2_TR(0x6c442b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c442d:{NFSU2_TR(0x6c442d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c4430:{NFSU2_TR(0x6c4430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4433:{NFSU2_TR(0x6c4433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c4435:{NFSU2_TR(0x6c4435);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4438:{NFSU2_TR(0x6c4438);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c443b:{NFSU2_TR(0x6c443b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c443e:{NFSU2_TR(0x6c443e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4441:{NFSU2_TR(0x6c4441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c444f;}}
}
B6c4443:L6c4443:{c.instructions+=3;NFSU2_TR(0x6c4443);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4446:{NFSU2_TR(0x6c4446);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4449:{NFSU2_TR(0x6c4449);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c431du);}goto L6c431d;}}
}
B6c444f:L6c444f:{c.instructions+=2;NFSU2_TR(0x6c444f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4452:{NFSU2_TR(0x6c4452);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4460;}}
}
B6c4454:L6c4454:{c.instructions+=3;NFSU2_TR(0x6c4454);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4457:{NFSU2_TR(0x6c4457);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c445a:{NFSU2_TR(0x6c445a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c431du);}goto L6c431d;}}
}
B6c4460:L6c4460:{c.instructions+=3;NFSU2_TR(0x6c4460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4463:{NFSU2_TR(0x6c4463);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4465:{NFSU2_TR(0x6c4465);
if(r1(R+518)){{goto L6c4488;}}
}
B6c4467:L6c4467:{c.instructions+=5;NFSU2_TR(0x6c4467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c446b:{NFSU2_TR(0x6c446b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c446d:{NFSU2_TR(0x6c446d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4470:{NFSU2_TR(0x6c4470);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4472:{NFSU2_TR(0x6c4472);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4481;}}
}
B6c4474:L6c4474:{c.instructions+=3;NFSU2_TR(0x6c4474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4477:{NFSU2_TR(0x6c4477);
__builtin_memmove((R+4),(R+0),4);
}
B6c4479:{NFSU2_TR(0x6c4479);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c447f:L6c447f:{c.instructions+=1;NFSU2_TR(0x6c447f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c4481;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c447fu);}goto L6c447f;}
}
B6c4481:L6c4481:{c.instructions+=3;NFSU2_TR(0x6c4481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4484:{NFSU2_TR(0x6c4484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c4486:{NFSU2_TR(0x6c4486);
{goto L6c449d;}
}
B6c4488:L6c4488:{c.instructions+=6;NFSU2_TR(0x6c4488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4489:{NFSU2_TR(0x6c4489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c448c:{NFSU2_TR(0x6c448c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4492:{NFSU2_TR(0x6c4492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4495:{NFSU2_TR(0x6c4495);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c4498:{NFSU2_TR(0x6c4498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c449dull));
TAIL_STATIC(0x6995c1u,699);
}
B6c449d:L6c449d:{c.instructions+=2;NFSU2_TR(0x6c449d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c449f:{NFSU2_TR(0x6c449f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4320u);}goto L6c4320;}
}
B6c44a4:L6c44a4:{c.instructions+=27;NFSU2_TR(0x6c44a4);
__builtin_memmove((R+28),(R+28),4);
}
B6c44a6:{NFSU2_TR(0x6c44a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c44a7:{NFSU2_TR(0x6c44a7);
__builtin_memmove((R+20),(R+16),4);
}
B6c44a9:{NFSU2_TR(0x6c44a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2ccull))));
}
B6c44af:{NFSU2_TR(0x6c44af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c44b0:{NFSU2_TR(0x6c44b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c44b6:{NFSU2_TR(0x6c44b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c44b8:{NFSU2_TR(0x6c44b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44bb:{NFSU2_TR(0x6c44bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c44bd:{NFSU2_TR(0x6c44bd);
w4(R+8,u32(0xfffffull));
}
B6c44c2:{NFSU2_TR(0x6c44c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c44c3:{NFSU2_TR(0x6c44c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c44c5:{NFSU2_TR(0x6c44c5);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6c44c7:{NFSU2_TR(0x6c44c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44ca:{NFSU2_TR(0x6c44ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c44cd:{NFSU2_TR(0x6c44cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c44d0:{NFSU2_TR(0x6c44d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c44d1:{NFSU2_TR(0x6c44d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44d4:{NFSU2_TR(0x6c44d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44d7:{NFSU2_TR(0x6c44d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44da:{NFSU2_TR(0x6c44da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44dd:{NFSU2_TR(0x6c44dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44e0:{NFSU2_TR(0x6c44e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c44e7:{NFSU2_TR(0x6c44e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c44ee:{NFSU2_TR(0x6c44ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c44f5:{NFSU2_TR(0x6c44f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c44f8:{NFSU2_TR(0x6c44f8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c48cd;}}
}
B6c44fe:L6c44fe:{c.instructions+=3;NFSU2_TR(0x6c44fe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c4503:{NFSU2_TR(0x6c4503);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4508:{NFSU2_TR(0x6c4508);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c48cd;}}
}
B6c450e:L6c450e:{c.instructions+=1;NFSU2_TR(0x6c450e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4511:L6c4511:{c.instructions+=1;NFSU2_TR(0x6c4511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4515:L6c4515:{c.instructions+=6;NFSU2_TR(0x6c4515);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c4517:{NFSU2_TR(0x6c4517);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4519:{NFSU2_TR(0x6c4519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c451a:{NFSU2_TR(0x6c451a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c451d:{NFSU2_TR(0x6c451d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4523:{NFSU2_TR(0x6c4523);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4529:L6c4529:{c.instructions+=1;NFSU2_TR(0x6c4529);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c452b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4529u);}goto L6c4529;}
}
B6c452b:L6c452b:{c.instructions+=3;NFSU2_TR(0x6c452b);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c452d:{NFSU2_TR(0x6c452d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c452e:{NFSU2_TR(0x6c452e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4534:L6c4534:{c.instructions+=1;NFSU2_TR(0x6c4534);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c4536;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4534u);}goto L6c4534;}
}
B6c4536:L6c4536:{c.instructions+=6;NFSU2_TR(0x6c4536);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c4538:{NFSU2_TR(0x6c4538);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c453e:{NFSU2_TR(0x6c453e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4541:{NFSU2_TR(0x6c4541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4544:{NFSU2_TR(0x6c4544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4547:{NFSU2_TR(0x6c4547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c454a:L6c454a:{c.instructions+=2;NFSU2_TR(0x6c454a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c454d:{NFSU2_TR(0x6c454d);
if(r1(R+518)){{goto L6c4557;}}
}
B6c454f:L6c454f:{c.instructions+=4;NFSU2_TR(0x6c454f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c4551:{NFSU2_TR(0x6c4551);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c4552:{NFSU2_TR(0x6c4552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c4555:{NFSU2_TR(0x6c4555);
{goto L6c455a;}
}
B6c4557:L6c4557:{c.instructions+=1;NFSU2_TR(0x6c4557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c455a:L6c455a:{c.instructions+=10;NFSU2_TR(0x6c455a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c455d:{NFSU2_TR(0x6c455d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c4560:{NFSU2_TR(0x6c4560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4563:{NFSU2_TR(0x6c4563);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd9acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c456a:{NFSU2_TR(0x6c456a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c456d:{NFSU2_TR(0x6c456d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4570:{NFSU2_TR(0x6c4570);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c4573:{NFSU2_TR(0x6c4573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c4575:{NFSU2_TR(0x6c4575);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4578:{NFSU2_TR(0x6c4578);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c45e4;}}
}
B6c457a:L6c457a:{c.instructions+=3;NFSU2_TR(0x6c457a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c457d:{NFSU2_TR(0x6c457d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4580:{NFSU2_TR(0x6c4580);
if(r1(R+518)){{goto L6c4630;}}
}
B6c4586:L6c4586:{c.instructions+=16;NFSU2_TR(0x6c4586);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4589:{NFSU2_TR(0x6c4589);
__builtin_memmove((R+24),(R+4),4);
}
B6c458b:{NFSU2_TR(0x6c458b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c458e:{NFSU2_TR(0x6c458e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4591:{NFSU2_TR(0x6c4591);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4594:{NFSU2_TR(0x6c4594);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4597:{NFSU2_TR(0x6c4597);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4599:{NFSU2_TR(0x6c4599);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd9b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c459f:{NFSU2_TR(0x6c459f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c45a2:{NFSU2_TR(0x6c45a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45a3:{NFSU2_TR(0x6c45a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c45a6:{NFSU2_TR(0x6c45a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45a7:{NFSU2_TR(0x6c45a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c45aa:{NFSU2_TR(0x6c45aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45ab:{NFSU2_TR(0x6c45ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45ac:{NFSU2_TR(0x6c45ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c45b1ull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6c45b1:L6c45b1:{c.instructions+=2;NFSU2_TR(0x6c45b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c45b3:{NFSU2_TR(0x6c45b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4630;}}
}
B6c45b5:L6c45b5:{c.instructions+=15;NFSU2_TR(0x6c45b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c45b8:{NFSU2_TR(0x6c45b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45b9:{NFSU2_TR(0x6c45b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c45bc:{NFSU2_TR(0x6c45bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c45bf:{NFSU2_TR(0x6c45bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45c0:{NFSU2_TR(0x6c45c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c45c6:{NFSU2_TR(0x6c45c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45c7:{NFSU2_TR(0x6c45c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c45ca:{NFSU2_TR(0x6c45ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45cb:{NFSU2_TR(0x6c45cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c45d1:{NFSU2_TR(0x6c45d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45d2:{NFSU2_TR(0x6c45d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd9a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c45d8:{NFSU2_TR(0x6c45d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45d9:{NFSU2_TR(0x6c45d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c45da:{NFSU2_TR(0x6c45da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c45dfull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c45df:L6c45df:{c.instructions+=2;NFSU2_TR(0x6c45df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c45e2:{NFSU2_TR(0x6c45e2);
{goto L6c4614;}
}
B6c45e4:L6c45e4:{c.instructions+=4;NFSU2_TR(0x6c45e4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c45e7:{NFSU2_TR(0x6c45e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c45e9:{NFSU2_TR(0x6c45e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c45ec:{NFSU2_TR(0x6c45ec);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c45f3:L6c45f3:{c.instructions+=3;NFSU2_TR(0x6c45f3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c45f7:{NFSU2_TR(0x6c45f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c45fa:{NFSU2_TR(0x6c45fa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c4608;}}
}
B6c45fc:L6c45fc:{c.instructions+=5;NFSU2_TR(0x6c45fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c45ff:{NFSU2_TR(0x6c45ff);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6c4601:{NFSU2_TR(0x6c4601);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c4604:{NFSU2_TR(0x6c4604);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c4606:{NFSU2_TR(0x6c4606);
{goto L6c460b;}
}
B6c4608:L6c4608:{c.instructions+=1;NFSU2_TR(0x6c4608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c460b:L6c460b:{c.instructions+=4;NFSU2_TR(0x6c460b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c460c:{NFSU2_TR(0x6c460c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c460f:{NFSU2_TR(0x6c460f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c4612:{NFSU2_TR(0x6c4612);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c45f3u);}goto L6c45f3;}}
}
B6c4614:L6c4614:{c.instructions+=2;NFSU2_TR(0x6c4614);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4618:{NFSU2_TR(0x6c4618);
if(r1(R+518)){{goto L6c4637;}}
}
B6c461a:L6c461a:{c.instructions+=5;NFSU2_TR(0x6c461a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c461d:{NFSU2_TR(0x6c461d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4620:{NFSU2_TR(0x6c4620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4623:{NFSU2_TR(0x6c4623);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4627:{NFSU2_TR(0x6c4627);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c4637;}}
}
B6c4629:L6c4629:{c.instructions+=2;NFSU2_TR(0x6c4629);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c462b:{NFSU2_TR(0x6c462b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c454au);}goto L6c454a;}
}
B6c4630:L6c4630:{c.instructions+=1;NFSU2_TR(0x6c4630);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4637:L6c4637:{c.instructions+=2;NFSU2_TR(0x6c4637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c463b:{NFSU2_TR(0x6c463b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c463f:L6c463f:{c.instructions+=2;NFSU2_TR(0x6c463f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4643:{NFSU2_TR(0x6c4643);
if(r1(R+518)){{goto L6c464d;}}
}
B6c4645:L6c4645:{c.instructions+=4;NFSU2_TR(0x6c4645);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c4647:{NFSU2_TR(0x6c4647);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c4648:{NFSU2_TR(0x6c4648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c464b:{NFSU2_TR(0x6c464b);
{goto L6c4650;}
}
B6c464d:L6c464d:{c.instructions+=1;NFSU2_TR(0x6c464d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4650:L6c4650:{c.instructions+=2;NFSU2_TR(0x6c4650);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd9acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6c4658:{NFSU2_TR(0x6c4658);
if(r1(R+512)){{goto L6c46ba;}}
}
B6c465a:L6c465a:{c.instructions+=3;NFSU2_TR(0x6c465a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c465e:{NFSU2_TR(0x6c465e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4662:{NFSU2_TR(0x6c4662);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c46ba;}}
}
B6c4664:L6c4664:{c.instructions+=3;NFSU2_TR(0x6c4664);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c4666:{NFSU2_TR(0x6c4666);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4669:{NFSU2_TR(0x6c4669);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c46af;}}
}
B6c466b:L6c466b:{c.instructions+=3;NFSU2_TR(0x6c466b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c466e:{NFSU2_TR(0x6c466e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c4675:{NFSU2_TR(0x6c4675);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4678:L6c4678:{c.instructions+=3;NFSU2_TR(0x6c4678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c467c:{NFSU2_TR(0x6c467c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c467e:{NFSU2_TR(0x6c467e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c46a0;}}
}
B6c4680:L6c4680:{c.instructions+=5;NFSU2_TR(0x6c4680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4683:{NFSU2_TR(0x6c4683);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4686:{NFSU2_TR(0x6c4686);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6c4688:{NFSU2_TR(0x6c4688);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c468b:{NFSU2_TR(0x6c468b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c468e:L6c468e:{c.instructions+=2;NFSU2_TR(0x6c468e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c4690:{NFSU2_TR(0x6c4690);
if(r1(R+518)){{goto L6c46a8;}}
}
B6c4692:L6c4692:{c.instructions+=5;NFSU2_TR(0x6c4692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4695:{NFSU2_TR(0x6c4695);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4698:{NFSU2_TR(0x6c4698);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c469b:{NFSU2_TR(0x6c469b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6c469e:{NFSU2_TR(0x6c469e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c468eu);}goto L6c468e;}}
}
B6c46a0:L6c46a0:{c.instructions+=3;NFSU2_TR(0x6c46a0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c46a1:{NFSU2_TR(0x6c46a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c46a4:{NFSU2_TR(0x6c46a4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4678u);}goto L6c4678;}}
}
B6c46a6:L6c46a6:{c.instructions+=1;NFSU2_TR(0x6c46a6);
{goto L6c46af;}
}
B6c46a8:L6c46a8:{c.instructions+=1;NFSU2_TR(0x6c46a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c46af:L6c46af:{c.instructions+=4;NFSU2_TR(0x6c46af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c46b2:{NFSU2_TR(0x6c46b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c46b5:{NFSU2_TR(0x6c46b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c46b8:{NFSU2_TR(0x6c46b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4664u);}goto L6c4664;}}
}
B6c46ba:L6c46ba:{c.instructions+=5;NFSU2_TR(0x6c46ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c46bd:{NFSU2_TR(0x6c46bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c46c0:{NFSU2_TR(0x6c46c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c46c3:{NFSU2_TR(0x6c46c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c46c7:{NFSU2_TR(0x6c46c7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c463fu);}goto L6c463f;}}
}
B6c46cd:L6c46cd:{c.instructions+=3;NFSU2_TR(0x6c46cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c46cf:{NFSU2_TR(0x6c46cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c46d2:{NFSU2_TR(0x6c46d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4840;}}
}
B6c46d8:L6c46d8:{c.instructions+=2;NFSU2_TR(0x6c46d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c46db:{NFSU2_TR(0x6c46db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4862;}}
}
B6c46e1:L6c46e1:{c.instructions+=3;NFSU2_TR(0x6c46e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c46e4:{NFSU2_TR(0x6c46e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c46e7:{NFSU2_TR(0x6c46e7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c47d5;}}
}
B6c46ed:L6c46ed:{c.instructions+=7;NFSU2_TR(0x6c46ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c46f0:{NFSU2_TR(0x6c46f0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c46f7:{NFSU2_TR(0x6c46f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c46fa:{NFSU2_TR(0x6c46fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c46fe:{NFSU2_TR(0x6c46fe);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4700:{NFSU2_TR(0x6c4700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4703:{NFSU2_TR(0x6c4703);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c47c4;}}
}
B6c4709:L6c4709:{c.instructions+=4;NFSU2_TR(0x6c4709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c470c:{NFSU2_TR(0x6c470c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c470f:{NFSU2_TR(0x6c470f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4711:{NFSU2_TR(0x6c4711);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c47b5;}}
}
B6c4717:L6c4717:{c.instructions+=4;NFSU2_TR(0x6c4717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c471a:{NFSU2_TR(0x6c471a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c471d:{NFSU2_TR(0x6c471d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4720:{NFSU2_TR(0x6c4720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4723:L6c4723:{c.instructions+=4;NFSU2_TR(0x6c4723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4726:{NFSU2_TR(0x6c4726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c4728:{NFSU2_TR(0x6c4728);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c472a:{NFSU2_TR(0x6c472a);
if(r1(R+518)){{goto L6c47a8;}}
}
B6c472c:L6c472c:{c.instructions+=2;NFSU2_TR(0x6c472c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c472f:{NFSU2_TR(0x6c472f);
if(r1(R+518)){{goto L6c47a8;}}
}
B6c4731:L6c4731:{c.instructions+=4;NFSU2_TR(0x6c4731);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4734:{NFSU2_TR(0x6c4734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4738:{NFSU2_TR(0x6c4738);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c473a:{NFSU2_TR(0x6c473a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4778;}}
}
B6c473c:L6c473c:{c.instructions+=7;NFSU2_TR(0x6c473c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c473f:{NFSU2_TR(0x6c473f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c4746:{NFSU2_TR(0x6c4746);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4749:{NFSU2_TR(0x6c4749);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c474c:{NFSU2_TR(0x6c474c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c474f:{NFSU2_TR(0x6c474f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4752:{NFSU2_TR(0x6c4752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4755:L6c4755:{c.instructions+=3;NFSU2_TR(0x6c4755);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c4757:{NFSU2_TR(0x6c4757);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4759:{NFSU2_TR(0x6c4759);
if(r1(R+518)){{goto L6c4769;}}
}
B6c475b:L6c475b:{c.instructions+=5;NFSU2_TR(0x6c475b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c475e:{NFSU2_TR(0x6c475e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4761:{NFSU2_TR(0x6c4761);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4764:{NFSU2_TR(0x6c4764);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4767:{NFSU2_TR(0x6c4767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4770;}}
}
B6c4769:L6c4769:{c.instructions+=1;NFSU2_TR(0x6c4769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4770:L6c4770:{c.instructions+=3;NFSU2_TR(0x6c4770);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c4773:{NFSU2_TR(0x6c4773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4776:{NFSU2_TR(0x6c4776);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4755u);}goto L6c4755;}}
}
B6c4778:L6c4778:{c.instructions+=2;NFSU2_TR(0x6c4778);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c477a:{NFSU2_TR(0x6c477a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4780;}}
}
B6c477c:L6c477c:{c.instructions+=1;NFSU2_TR(0x6c477c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4780:L6c4780:{c.instructions+=2;NFSU2_TR(0x6c4780);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4784:{NFSU2_TR(0x6c4784);
if(r1(R+518)){{goto L6c47a8;}}
}
B6c4786:L6c4786:{c.instructions+=1;NFSU2_TR(0x6c4786);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c4788:L6c4788:{c.instructions+=2;NFSU2_TR(0x6c4788);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c478f:{NFSU2_TR(0x6c478f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4795;}}
}
B6c4791:L6c4791:{c.instructions+=1;NFSU2_TR(0x6c4791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4795:L6c4795:{c.instructions+=3;NFSU2_TR(0x6c4795);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c4796:{NFSU2_TR(0x6c4796);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c4799:{NFSU2_TR(0x6c4799);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4788u);}goto L6c4788;}}
}
B6c479b:L6c479b:{c.instructions+=2;NFSU2_TR(0x6c479b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c479f:{NFSU2_TR(0x6c479f);
if(r1(R+518)){{goto L6c47a8;}}
}
B6c47a1:L6c47a1:{c.instructions+=1;NFSU2_TR(0x6c47a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c47a8:L6c47a8:{c.instructions+=3;NFSU2_TR(0x6c47a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c47ac:{NFSU2_TR(0x6c47ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c47af:{NFSU2_TR(0x6c47af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4723u);}goto L6c4723;}}
}
B6c47b5:L6c47b5:{c.instructions+=4;NFSU2_TR(0x6c47b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c47b8:{NFSU2_TR(0x6c47b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c47bb:{NFSU2_TR(0x6c47bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c47be:{NFSU2_TR(0x6c47be);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4709u);}goto L6c4709;}}
}
B6c47c4:L6c47c4:{c.instructions+=4;NFSU2_TR(0x6c47c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c47c7:{NFSU2_TR(0x6c47c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c47ca:{NFSU2_TR(0x6c47ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c47cd:{NFSU2_TR(0x6c47cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c46edu);}goto L6c46ed;}}
}
B6c47d3:L6c47d3:{c.instructions+=1;NFSU2_TR(0x6c47d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c47d5:L6c47d5:{c.instructions+=1;NFSU2_TR(0x6c47d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c47d8:L6c47d8:{c.instructions+=4;NFSU2_TR(0x6c47d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c47db:{NFSU2_TR(0x6c47db);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6c47e2:{NFSU2_TR(0x6c47e2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c47e5:{NFSU2_TR(0x6c47e5);
if(r1(R+518)){{goto L6c4831;}}
}
B6c47e7:L6c47e7:{c.instructions+=3;NFSU2_TR(0x6c47e7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c47e9:{NFSU2_TR(0x6c47e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c47ec:{NFSU2_TR(0x6c47ec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4831;}}
}
B6c47ee:L6c47ee:{c.instructions+=4;NFSU2_TR(0x6c47ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c47f1:{NFSU2_TR(0x6c47f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c47f4:{NFSU2_TR(0x6c47f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c47f7:{NFSU2_TR(0x6c47f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c47fa:L6c47fa:{c.instructions+=4;NFSU2_TR(0x6c47fa);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c4801:{NFSU2_TR(0x6c4801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4804:{NFSU2_TR(0x6c4804);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4806:{NFSU2_TR(0x6c4806);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c482b;}}
}
B6c4808:L6c4808:{c.instructions+=2;NFSU2_TR(0x6c4808);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c480b:{NFSU2_TR(0x6c480b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c480e:L6c480e:{c.instructions+=3;NFSU2_TR(0x6c480e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c4810:{NFSU2_TR(0x6c4810);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4812:{NFSU2_TR(0x6c4812);
if(r1(R+518)){{goto L6c481c;}}
}
B6c4814:L6c4814:{c.instructions+=3;NFSU2_TR(0x6c4814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4817:{NFSU2_TR(0x6c4817);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c481a:{NFSU2_TR(0x6c481a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4823;}}
}
B6c481c:L6c481c:{c.instructions+=1;NFSU2_TR(0x6c481c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4823:L6c4823:{c.instructions+=3;NFSU2_TR(0x6c4823);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c4826:{NFSU2_TR(0x6c4826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4829:{NFSU2_TR(0x6c4829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c480eu);}goto L6c480e;}}
}
B6c482b:L6c482b:{c.instructions+=3;NFSU2_TR(0x6c482b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c482c:{NFSU2_TR(0x6c482c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c482f:{NFSU2_TR(0x6c482f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c47fau);}goto L6c47fa;}}
}
B6c4831:L6c4831:{c.instructions+=3;NFSU2_TR(0x6c4831);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4834:{NFSU2_TR(0x6c4834);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c4838:{NFSU2_TR(0x6c4838);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c47d8u);}goto L6c47d8;}}
}
B6c483a:L6c483a:{c.instructions+=2;NFSU2_TR(0x6c483a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c483e:{NFSU2_TR(0x6c483e);
if(r1(R+518)){{goto L6c4862;}}
}
B6c4840:L6c4840:{c.instructions+=3;NFSU2_TR(0x6c4840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4843:{NFSU2_TR(0x6c4843);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4847:{NFSU2_TR(0x6c4847);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4515u);}goto L6c4515;}}
}
B6c484d:L6c484d:{c.instructions+=2;NFSU2_TR(0x6c484d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4851:{NFSU2_TR(0x6c4851);
if(r1(R+518)){{goto L6c4862;}}
}
B6c4853:L6c4853:{c.instructions+=3;NFSU2_TR(0x6c4853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4856:{NFSU2_TR(0x6c4856);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c485a:{NFSU2_TR(0x6c485a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4511u);}goto L6c4511;}}
}
B6c4860:L6c4860:{c.instructions+=1;NFSU2_TR(0x6c4860);
{goto L6c48c1;}
}
B6c4862:L6c4862:{c.instructions+=7;NFSU2_TR(0x6c4862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4865:{NFSU2_TR(0x6c4865);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c4868:{NFSU2_TR(0x6c4868);
__builtin_memmove((R+4),(R+0),4);
}
B6c486a:{NFSU2_TR(0x6c486a);
__builtin_memmove((R+8),(R+4),4);
}
B6c486c:{NFSU2_TR(0x6c486c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c486f:{NFSU2_TR(0x6c486f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c4875:{NFSU2_TR(0x6c4875);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c487b:L6c487b:{c.instructions+=1;NFSU2_TR(0x6c487b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c487d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c487bu);}goto L6c487b;}
}
B6c487d:L6c487d:{c.instructions+=2;NFSU2_TR(0x6c487d);
__builtin_memmove((R+4),(R+8),4);
}
B6c487f:{NFSU2_TR(0x6c487f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c4882:L6c4882:{c.instructions+=1;NFSU2_TR(0x6c4882);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c4884;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4882u);}goto L6c4882;}
}
B6c4884:L6c4884:{c.instructions+=5;NFSU2_TR(0x6c4884);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c488b:{NFSU2_TR(0x6c488b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c488e:{NFSU2_TR(0x6c488e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c488f:{NFSU2_TR(0x6c488f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4892:{NFSU2_TR(0x6c4892);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c4894:L6c4894:{c.instructions+=3;NFSU2_TR(0x6c4894);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c489b:{NFSU2_TR(0x6c489b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c489e:{NFSU2_TR(0x6c489e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c48ac;}}
}
B6c48a0:L6c48a0:{c.instructions+=3;NFSU2_TR(0x6c48a0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c48a7:{NFSU2_TR(0x6c48a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c48aa:{NFSU2_TR(0x6c48aa);
if(r1(R+518)){{goto L6c48b3;}}
}
B6c48ac:L6c48ac:{c.instructions+=1;NFSU2_TR(0x6c48ac);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c48b3:L6c48b3:{c.instructions+=3;NFSU2_TR(0x6c48b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c48b6:{NFSU2_TR(0x6c48b6);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c48bb:{NFSU2_TR(0x6c48bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4894u);}goto L6c4894;}}
}
B6c48bd:L6c48bd:{c.instructions+=1;NFSU2_TR(0x6c48bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c48c1:L6c48c1:{c.instructions+=3;NFSU2_TR(0x6c48c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c48c4:{NFSU2_TR(0x6c48c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c48c7:{NFSU2_TR(0x6c48c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4cbe;}}
}
B6c48cd:L6c48cd:{c.instructions+=9;NFSU2_TR(0x6c48cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c48d0:{NFSU2_TR(0x6c48d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c48d6:{NFSU2_TR(0x6c48d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c48d9:{NFSU2_TR(0x6c48d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c48db:{NFSU2_TR(0x6c48db);
__builtin_memmove((R+4),(R+0),4);
}
B6c48dd:{NFSU2_TR(0x6c48dd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c48e3:{NFSU2_TR(0x6c48e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c48e6:{NFSU2_TR(0x6c48e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c48e9:{NFSU2_TR(0x6c48e9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c48f7;}}
}
B6c48eb:L6c48eb:{c.instructions+=3;NFSU2_TR(0x6c48eb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c48f0:{NFSU2_TR(0x6c48f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c48f5:{NFSU2_TR(0x6c48f5);
if(r1(R+518)){{goto L6c48ff;}}
}
B6c48f7:L6c48f7:{c.instructions+=3;NFSU2_TR(0x6c48f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c48f9:{NFSU2_TR(0x6c48f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c48fa:{NFSU2_TR(0x6c48fa);
{goto L6c4cb7;}
}
B6c48ff:L6c48ff:{c.instructions+=4;NFSU2_TR(0x6c48ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4902:{NFSU2_TR(0x6c4902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4906:{NFSU2_TR(0x6c4906);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c4909:{NFSU2_TR(0x6c4909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c490c:L6c490c:{c.instructions+=1;NFSU2_TR(0x6c490c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4910:L6c4910:{c.instructions+=5;NFSU2_TR(0x6c4910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4913:{NFSU2_TR(0x6c4913);
__builtin_memmove((R+0),(R+4),4);
}
B6c4915:{NFSU2_TR(0x6c4915);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4918:{NFSU2_TR(0x6c4918);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c491e:{NFSU2_TR(0x6c491e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4924:L6c4924:{c.instructions+=1;NFSU2_TR(0x6c4924);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c4926;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4924u);}goto L6c4924;}
}
B6c4926:L6c4926:{c.instructions+=2;NFSU2_TR(0x6c4926);
__builtin_memmove((R+4),(R+0),4);
}
B6c4928:{NFSU2_TR(0x6c4928);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c492b:L6c492b:{c.instructions+=1;NFSU2_TR(0x6c492b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c492d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c492bu);}goto L6c492b;}
}
B6c492d:L6c492d:{c.instructions+=4;NFSU2_TR(0x6c492d);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c492f:{NFSU2_TR(0x6c492f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c4930:{NFSU2_TR(0x6c4930);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c4933:{NFSU2_TR(0x6c4933);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4939:L6c4939:{c.instructions+=1;NFSU2_TR(0x6c4939);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c493b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4939u);}goto L6c4939;}
}
B6c493b:L6c493b:{c.instructions+=3;NFSU2_TR(0x6c493b);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c493d:{NFSU2_TR(0x6c493d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c493e:{NFSU2_TR(0x6c493e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4944:L6c4944:{c.instructions+=1;NFSU2_TR(0x6c4944);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c4946;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4944u);}goto L6c4944;}
}
B6c4946:L6c4946:{c.instructions+=5;NFSU2_TR(0x6c4946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4949:{NFSU2_TR(0x6c4949);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c494b:{NFSU2_TR(0x6c494b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c494e:{NFSU2_TR(0x6c494e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4951:{NFSU2_TR(0x6c4951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4954:L6c4954:{c.instructions+=2;NFSU2_TR(0x6c4954);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4958:{NFSU2_TR(0x6c4958);
if(r1(R+518)){{goto L6c4962;}}
}
B6c495a:L6c495a:{c.instructions+=4;NFSU2_TR(0x6c495a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c495c:{NFSU2_TR(0x6c495c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c495d:{NFSU2_TR(0x6c495d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c4960:{NFSU2_TR(0x6c4960);
{goto L6c4965;}
}
B6c4962:L6c4962:{c.instructions+=1;NFSU2_TR(0x6c4962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4965:L6c4965:{c.instructions+=10;NFSU2_TR(0x6c4965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4968:{NFSU2_TR(0x6c4968);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c496b:{NFSU2_TR(0x6c496b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c496e:{NFSU2_TR(0x6c496e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd94cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c4975:{NFSU2_TR(0x6c4975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c4978:{NFSU2_TR(0x6c4978);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c497b:{NFSU2_TR(0x6c497b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c497e:{NFSU2_TR(0x6c497e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c4980:{NFSU2_TR(0x6c4980);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4983:{NFSU2_TR(0x6c4983);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c49ef;}}
}
B6c4985:L6c4985:{c.instructions+=3;NFSU2_TR(0x6c4985);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4988:{NFSU2_TR(0x6c4988);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c498b:{NFSU2_TR(0x6c498b);
if(r1(R+518)){{goto L6c4a35;}}
}
B6c4991:L6c4991:{c.instructions+=16;NFSU2_TR(0x6c4991);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4994:{NFSU2_TR(0x6c4994);
__builtin_memmove((R+24),(R+4),4);
}
B6c4996:{NFSU2_TR(0x6c4996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4999:{NFSU2_TR(0x6c4999);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c499c:{NFSU2_TR(0x6c499c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c499f:{NFSU2_TR(0x6c499f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c49a2:{NFSU2_TR(0x6c49a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49a4:{NFSU2_TR(0x6c49a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c49aa:{NFSU2_TR(0x6c49aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c49ad:{NFSU2_TR(0x6c49ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49ae:{NFSU2_TR(0x6c49ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c49b1:{NFSU2_TR(0x6c49b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49b2:{NFSU2_TR(0x6c49b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c49b5:{NFSU2_TR(0x6c49b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49b6:{NFSU2_TR(0x6c49b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49b7:{NFSU2_TR(0x6c49b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c49bcull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6c49bc:L6c49bc:{c.instructions+=2;NFSU2_TR(0x6c49bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c49be:{NFSU2_TR(0x6c49be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4a35;}}
}
B6c49c0:L6c49c0:{c.instructions+=15;NFSU2_TR(0x6c49c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c49c3:{NFSU2_TR(0x6c49c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49c4:{NFSU2_TR(0x6c49c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c49c7:{NFSU2_TR(0x6c49c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c49ca:{NFSU2_TR(0x6c49ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49cb:{NFSU2_TR(0x6c49cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c49d1:{NFSU2_TR(0x6c49d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49d2:{NFSU2_TR(0x6c49d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c49d5:{NFSU2_TR(0x6c49d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49d6:{NFSU2_TR(0x6c49d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c49dc:{NFSU2_TR(0x6c49dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49dd:{NFSU2_TR(0x6c49dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd940ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c49e3:{NFSU2_TR(0x6c49e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49e4:{NFSU2_TR(0x6c49e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c49e5:{NFSU2_TR(0x6c49e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c49eaull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c49ea:L6c49ea:{c.instructions+=2;NFSU2_TR(0x6c49ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c49ed:{NFSU2_TR(0x6c49ed);
{goto L6c4a1d;}
}
B6c49ef:L6c49ef:{c.instructions+=4;NFSU2_TR(0x6c49ef);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c49f2:{NFSU2_TR(0x6c49f2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c49f4:{NFSU2_TR(0x6c49f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c49f7:{NFSU2_TR(0x6c49f7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c49fe:L6c49fe:{c.instructions+=3;NFSU2_TR(0x6c49fe);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c4a02:{NFSU2_TR(0x6c4a02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c4a05:{NFSU2_TR(0x6c4a05);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c4a11;}}
}
B6c4a07:L6c4a07:{c.instructions+=4;NFSU2_TR(0x6c4a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c4a0a:{NFSU2_TR(0x6c4a0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4a0d:{NFSU2_TR(0x6c4a0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c4a0f:{NFSU2_TR(0x6c4a0f);
{goto L6c4a14;}
}
B6c4a11:L6c4a11:{c.instructions+=1;NFSU2_TR(0x6c4a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c4a14:L6c4a14:{c.instructions+=4;NFSU2_TR(0x6c4a14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c4a15:{NFSU2_TR(0x6c4a15);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c4a18:{NFSU2_TR(0x6c4a18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c4a1b:{NFSU2_TR(0x6c4a1b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c49feu);}goto L6c49fe;}}
}
B6c4a1d:L6c4a1d:{c.instructions+=2;NFSU2_TR(0x6c4a1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4a21:{NFSU2_TR(0x6c4a21);
if(r1(R+518)){{goto L6c4a3c;}}
}
B6c4a23:L6c4a23:{c.instructions+=4;NFSU2_TR(0x6c4a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4a26:{NFSU2_TR(0x6c4a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6c4a29:{NFSU2_TR(0x6c4a29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4a2d:{NFSU2_TR(0x6c4a2d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4954u);}goto L6c4954;}}
}
B6c4a33:L6c4a33:{c.instructions+=1;NFSU2_TR(0x6c4a33);
{goto L6c4a3c;}
}
B6c4a35:L6c4a35:{c.instructions+=1;NFSU2_TR(0x6c4a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4a3c:L6c4a3c:{c.instructions+=2;NFSU2_TR(0x6c4a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4a40:{NFSU2_TR(0x6c4a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4a44:L6c4a44:{c.instructions+=2;NFSU2_TR(0x6c4a44);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4a48:{NFSU2_TR(0x6c4a48);
if(r1(R+518)){{goto L6c4a52;}}
}
B6c4a4a:L6c4a4a:{c.instructions+=4;NFSU2_TR(0x6c4a4a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c4a4c:{NFSU2_TR(0x6c4a4c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c4a4d:{NFSU2_TR(0x6c4a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c4a50:{NFSU2_TR(0x6c4a50);
{goto L6c4a55;}
}
B6c4a52:L6c4a52:{c.instructions+=1;NFSU2_TR(0x6c4a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4a55:L6c4a55:{c.instructions+=2;NFSU2_TR(0x6c4a55);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd94cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6c4a5d:{NFSU2_TR(0x6c4a5d);
if(r1(R+512)){{goto L6c4abf;}}
}
B6c4a5f:L6c4a5f:{c.instructions+=3;NFSU2_TR(0x6c4a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4a63:{NFSU2_TR(0x6c4a63);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4a67:{NFSU2_TR(0x6c4a67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4abf;}}
}
B6c4a69:L6c4a69:{c.instructions+=3;NFSU2_TR(0x6c4a69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c4a6b:{NFSU2_TR(0x6c4a6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4a6e:{NFSU2_TR(0x6c4a6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4ab4;}}
}
B6c4a70:L6c4a70:{c.instructions+=3;NFSU2_TR(0x6c4a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4a73:{NFSU2_TR(0x6c4a73);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c4a7a:{NFSU2_TR(0x6c4a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4a7d:L6c4a7d:{c.instructions+=3;NFSU2_TR(0x6c4a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4a81:{NFSU2_TR(0x6c4a81);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4a83:{NFSU2_TR(0x6c4a83);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4aa5;}}
}
B6c4a85:L6c4a85:{c.instructions+=6;NFSU2_TR(0x6c4a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4a88:{NFSU2_TR(0x6c4a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4a8b:{NFSU2_TR(0x6c4a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4a8e:{NFSU2_TR(0x6c4a8e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6c4a90:{NFSU2_TR(0x6c4a90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c4a93:{NFSU2_TR(0x6c4a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4a96:L6c4a96:{c.instructions+=2;NFSU2_TR(0x6c4a96);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c4a98:{NFSU2_TR(0x6c4a98);
if(r1(R+518)){{goto L6c4aad;}}
}
B6c4a9a:L6c4a9a:{c.instructions+=4;NFSU2_TR(0x6c4a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4a9d:{NFSU2_TR(0x6c4a9d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c4aa0:{NFSU2_TR(0x6c4aa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c4aa3:{NFSU2_TR(0x6c4aa3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4a96u);}goto L6c4a96;}}
}
B6c4aa5:L6c4aa5:{c.instructions+=3;NFSU2_TR(0x6c4aa5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c4aa6:{NFSU2_TR(0x6c4aa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c4aa9:{NFSU2_TR(0x6c4aa9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4a7du);}goto L6c4a7d;}}
}
B6c4aab:L6c4aab:{c.instructions+=1;NFSU2_TR(0x6c4aab);
{goto L6c4ab4;}
}
B6c4aad:L6c4aad:{c.instructions+=1;NFSU2_TR(0x6c4aad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ab4:L6c4ab4:{c.instructions+=4;NFSU2_TR(0x6c4ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ab7:{NFSU2_TR(0x6c4ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4aba:{NFSU2_TR(0x6c4aba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c4abd:{NFSU2_TR(0x6c4abd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4a69u);}goto L6c4a69;}}
}
B6c4abf:L6c4abf:{c.instructions+=5;NFSU2_TR(0x6c4abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4ac2:{NFSU2_TR(0x6c4ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ac5:{NFSU2_TR(0x6c4ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ac8:{NFSU2_TR(0x6c4ac8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4acc:{NFSU2_TR(0x6c4acc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4a44u);}goto L6c4a44;}}
}
B6c4ad2:L6c4ad2:{c.instructions+=3;NFSU2_TR(0x6c4ad2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c4ad4:{NFSU2_TR(0x6c4ad4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4ad7:{NFSU2_TR(0x6c4ad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4c31;}}
}
B6c4add:L6c4add:{c.instructions+=2;NFSU2_TR(0x6c4add);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4ae0:{NFSU2_TR(0x6c4ae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4c53;}}
}
B6c4ae6:L6c4ae6:{c.instructions+=4;NFSU2_TR(0x6c4ae6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c4ae8:{NFSU2_TR(0x6c4ae8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4aeb:{NFSU2_TR(0x6c4aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4aee:{NFSU2_TR(0x6c4aee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4bd1;}}
}
B6c4af4:L6c4af4:{c.instructions+=6;NFSU2_TR(0x6c4af4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c4afb:{NFSU2_TR(0x6c4afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4afe:{NFSU2_TR(0x6c4afe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4b00:{NFSU2_TR(0x6c4b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4b03:{NFSU2_TR(0x6c4b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4b06:{NFSU2_TR(0x6c4b06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4bc1;}}
}
B6c4b0c:L6c4b0c:{c.instructions+=4;NFSU2_TR(0x6c4b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4b0f:{NFSU2_TR(0x6c4b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4b12:{NFSU2_TR(0x6c4b12);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4b14:{NFSU2_TR(0x6c4b14);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4bb2;}}
}
B6c4b1a:L6c4b1a:{c.instructions+=3;NFSU2_TR(0x6c4b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4b1d:{NFSU2_TR(0x6c4b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4b20:{NFSU2_TR(0x6c4b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4b23:L6c4b23:{c.instructions+=3;NFSU2_TR(0x6c4b23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c4b25:{NFSU2_TR(0x6c4b25);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4b27:{NFSU2_TR(0x6c4b27);
if(r1(R+518)){{goto L6c4ba0;}}
}
B6c4b29:L6c4b29:{c.instructions+=2;NFSU2_TR(0x6c4b29);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c4b2b:{NFSU2_TR(0x6c4b2b);
if(r1(R+518)){{goto L6c4ba0;}}
}
B6c4b2d:L6c4b2d:{c.instructions+=4;NFSU2_TR(0x6c4b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4b30:{NFSU2_TR(0x6c4b30);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4b32:{NFSU2_TR(0x6c4b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4b35:{NFSU2_TR(0x6c4b35);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4b72;}}
}
B6c4b37:L6c4b37:{c.instructions+=7;NFSU2_TR(0x6c4b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4b3a:{NFSU2_TR(0x6c4b3a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c4b41:{NFSU2_TR(0x6c4b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4b44:{NFSU2_TR(0x6c4b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4b47:{NFSU2_TR(0x6c4b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c4b4a:{NFSU2_TR(0x6c4b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4b4d:{NFSU2_TR(0x6c4b4d);
__builtin_memmove((R+0),(R+28),4);
}
B6c4b4f:L6c4b4f:{c.instructions+=3;NFSU2_TR(0x6c4b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c4b51:{NFSU2_TR(0x6c4b51);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4b53:{NFSU2_TR(0x6c4b53);
if(r1(R+518)){{goto L6c4b65;}}
}
B6c4b55:L6c4b55:{c.instructions+=6;NFSU2_TR(0x6c4b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4b58:{NFSU2_TR(0x6c4b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4b5b:{NFSU2_TR(0x6c4b5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4b5e:{NFSU2_TR(0x6c4b5e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c4b60:{NFSU2_TR(0x6c4b60);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4b63:{NFSU2_TR(0x6c4b63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4b6c;}}
}
B6c4b65:L6c4b65:{c.instructions+=1;NFSU2_TR(0x6c4b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4b6c:L6c4b6c:{c.instructions+=3;NFSU2_TR(0x6c4b6c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c4b6f:{NFSU2_TR(0x6c4b6f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c4b70:{NFSU2_TR(0x6c4b70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4b4fu);}goto L6c4b4f;}}
}
B6c4b72:L6c4b72:{c.instructions+=2;NFSU2_TR(0x6c4b72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4b75:{NFSU2_TR(0x6c4b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4b7b;}}
}
B6c4b77:L6c4b77:{c.instructions+=2;NFSU2_TR(0x6c4b77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c4b79:{NFSU2_TR(0x6c4b79);
{goto L6c4b7e;}
}
B6c4b7b:L6c4b7b:{c.instructions+=1;NFSU2_TR(0x6c4b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4b7e:L6c4b7e:{c.instructions+=2;NFSU2_TR(0x6c4b7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4b80:{NFSU2_TR(0x6c4b80);
if(r1(R+518)){{goto L6c4ba0;}}
}
B6c4b82:L6c4b82:{c.instructions+=1;NFSU2_TR(0x6c4b82);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c4b84:L6c4b84:{c.instructions+=2;NFSU2_TR(0x6c4b84);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c4b8b:{NFSU2_TR(0x6c4b8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4b8f;}}
}
B6c4b8d:L6c4b8d:{c.instructions+=1;NFSU2_TR(0x6c4b8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c4b8f:L6c4b8f:{c.instructions+=3;NFSU2_TR(0x6c4b8f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c4b90:{NFSU2_TR(0x6c4b90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c4b93:{NFSU2_TR(0x6c4b93);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4b84u);}goto L6c4b84;}}
}
B6c4b95:L6c4b95:{c.instructions+=2;NFSU2_TR(0x6c4b95);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4b97:{NFSU2_TR(0x6c4b97);
if(r1(R+518)){{goto L6c4ba0;}}
}
B6c4b99:L6c4b99:{c.instructions+=1;NFSU2_TR(0x6c4b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ba0:L6c4ba0:{c.instructions+=5;NFSU2_TR(0x6c4ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4ba3:{NFSU2_TR(0x6c4ba3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c4ba6:{NFSU2_TR(0x6c4ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4ba9:{NFSU2_TR(0x6c4ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4bac:{NFSU2_TR(0x6c4bac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4b23u);}goto L6c4b23;}}
}
B6c4bb2:L6c4bb2:{c.instructions+=4;NFSU2_TR(0x6c4bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4bb5:{NFSU2_TR(0x6c4bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4bb8:{NFSU2_TR(0x6c4bb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c4bbb:{NFSU2_TR(0x6c4bbb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4b0cu);}goto L6c4b0c;}}
}
B6c4bc1:L6c4bc1:{c.instructions+=5;NFSU2_TR(0x6c4bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4bc4:{NFSU2_TR(0x6c4bc4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c4bc5:{NFSU2_TR(0x6c4bc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c4bc8:{NFSU2_TR(0x6c4bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4bcb:{NFSU2_TR(0x6c4bcb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4af4u);}goto L6c4af4;}}
}
B6c4bd1:L6c4bd1:{c.instructions+=1;NFSU2_TR(0x6c4bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4bd4:L6c4bd4:{c.instructions+=4;NFSU2_TR(0x6c4bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4bd7:{NFSU2_TR(0x6c4bd7);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c4bde:{NFSU2_TR(0x6c4bde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4be1:{NFSU2_TR(0x6c4be1);
if(r1(R+518)){{goto L6c4c22;}}
}
B6c4be3:L6c4be3:{c.instructions+=3;NFSU2_TR(0x6c4be3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c4be5:{NFSU2_TR(0x6c4be5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4be8:{NFSU2_TR(0x6c4be8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4c22;}}
}
B6c4bea:L6c4bea:{c.instructions+=3;NFSU2_TR(0x6c4bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4bed:{NFSU2_TR(0x6c4bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4bf0:{NFSU2_TR(0x6c4bf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c4bf3:L6c4bf3:{c.instructions+=4;NFSU2_TR(0x6c4bf3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c4bfa:{NFSU2_TR(0x6c4bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4bfd:{NFSU2_TR(0x6c4bfd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4bff:{NFSU2_TR(0x6c4bff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4c1c;}}
}
B6c4c01:L6c4c01:{c.instructions+=1;NFSU2_TR(0x6c4c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4c04:L6c4c04:{c.instructions+=3;NFSU2_TR(0x6c4c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c4c06:{NFSU2_TR(0x6c4c06);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4c08:{NFSU2_TR(0x6c4c08);
if(r1(R+518)){{goto L6c4c0f;}}
}
B6c4c0a:L6c4c0a:{c.instructions+=2;NFSU2_TR(0x6c4c0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4c0d:{NFSU2_TR(0x6c4c0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4c16;}}
}
B6c4c0f:L6c4c0f:{c.instructions+=1;NFSU2_TR(0x6c4c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4c16:L6c4c16:{c.instructions+=3;NFSU2_TR(0x6c4c16);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c4c19:{NFSU2_TR(0x6c4c19);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c4c1a:{NFSU2_TR(0x6c4c1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4c04u);}goto L6c4c04;}}
}
B6c4c1c:L6c4c1c:{c.instructions+=3;NFSU2_TR(0x6c4c1c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c4c1d:{NFSU2_TR(0x6c4c1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c4c20:{NFSU2_TR(0x6c4c20);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4bf3u);}goto L6c4bf3;}}
}
B6c4c22:L6c4c22:{c.instructions+=3;NFSU2_TR(0x6c4c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4c25:{NFSU2_TR(0x6c4c25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c4c29:{NFSU2_TR(0x6c4c29);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4bd4u);}goto L6c4bd4;}}
}
B6c4c2b:L6c4c2b:{c.instructions+=2;NFSU2_TR(0x6c4c2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4c2f:{NFSU2_TR(0x6c4c2f);
if(r1(R+518)){{goto L6c4c53;}}
}
B6c4c31:L6c4c31:{c.instructions+=3;NFSU2_TR(0x6c4c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4c34:{NFSU2_TR(0x6c4c34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4c38:{NFSU2_TR(0x6c4c38);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4910u);}goto L6c4910;}}
}
B6c4c3e:L6c4c3e:{c.instructions+=2;NFSU2_TR(0x6c4c3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4c42:{NFSU2_TR(0x6c4c42);
if(r1(R+518)){{goto L6c4c53;}}
}
B6c4c44:L6c4c44:{c.instructions+=3;NFSU2_TR(0x6c4c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4c47:{NFSU2_TR(0x6c4c47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c4c4b:{NFSU2_TR(0x6c4c4b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c490cu);}goto L6c490c;}}
}
B6c4c51:L6c4c51:{c.instructions+=1;NFSU2_TR(0x6c4c51);
{goto L6c4cb4;}
}
B6c4c53:L6c4c53:{c.instructions+=8;NFSU2_TR(0x6c4c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4c56:{NFSU2_TR(0x6c4c56);
__builtin_memmove((R+0),(R+8),4);
}
B6c4c58:{NFSU2_TR(0x6c4c58);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c4c5b:{NFSU2_TR(0x6c4c5b);
__builtin_memmove((R+4),(R+0),4);
}
B6c4c5d:{NFSU2_TR(0x6c4c5d);
__builtin_memmove((R+12),(R+4),4);
}
B6c4c5f:{NFSU2_TR(0x6c4c5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4c62:{NFSU2_TR(0x6c4c62);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c4c68:{NFSU2_TR(0x6c4c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4c6e:L6c4c6e:{c.instructions+=1;NFSU2_TR(0x6c4c6e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c4c70;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4c6eu);}goto L6c4c6e;}
}
B6c4c70:L6c4c70:{c.instructions+=2;NFSU2_TR(0x6c4c70);
__builtin_memmove((R+4),(R+12),4);
}
B6c4c72:{NFSU2_TR(0x6c4c72);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c4c75:L6c4c75:{c.instructions+=1;NFSU2_TR(0x6c4c75);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c4c77;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4c75u);}goto L6c4c75;}
}
B6c4c77:L6c4c77:{c.instructions+=5;NFSU2_TR(0x6c4c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4c7a:{NFSU2_TR(0x6c4c7a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c4c7b:{NFSU2_TR(0x6c4c7b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c4c82:{NFSU2_TR(0x6c4c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4c85:{NFSU2_TR(0x6c4c85);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c4c87:L6c4c87:{c.instructions+=3;NFSU2_TR(0x6c4c87);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c4c8e:{NFSU2_TR(0x6c4c8e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4c91:{NFSU2_TR(0x6c4c91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4c9f;}}
}
B6c4c93:L6c4c93:{c.instructions+=3;NFSU2_TR(0x6c4c93);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c4c9a:{NFSU2_TR(0x6c4c9a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4c9d:{NFSU2_TR(0x6c4c9d);
if(r1(R+518)){{goto L6c4ca6;}}
}
B6c4c9f:L6c4c9f:{c.instructions+=1;NFSU2_TR(0x6c4c9f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c4ca6:L6c4ca6:{c.instructions+=3;NFSU2_TR(0x6c4ca6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c4ca9:{NFSU2_TR(0x6c4ca9);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c4cae:{NFSU2_TR(0x6c4cae);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4c87u);}goto L6c4c87;}}
}
B6c4cb0:L6c4cb0:{c.instructions+=1;NFSU2_TR(0x6c4cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4cb4:L6c4cb4:{c.instructions+=1;NFSU2_TR(0x6c4cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4cb7:L6c4cb7:{c.instructions+=1;NFSU2_TR(0x6c4cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4cbe:L6c4cbe:{c.instructions+=2;NFSU2_TR(0x6c4cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4cc0:{NFSU2_TR(0x6c4cc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4df2;}}
}
B6c4cc6:L6c4cc6:{c.instructions+=3;NFSU2_TR(0x6c4cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4cc9:{NFSU2_TR(0x6c4cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ccc:{NFSU2_TR(0x6c4ccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4cd2:L6c4cd2:{c.instructions+=3;NFSU2_TR(0x6c4cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4cd6:{NFSU2_TR(0x6c4cd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4cda:{NFSU2_TR(0x6c4cda);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4d39;}}
}
B6c4cdc:L6c4cdc:{c.instructions+=6;NFSU2_TR(0x6c4cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4cdf:{NFSU2_TR(0x6c4cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4ce2:{NFSU2_TR(0x6c4ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4ce5:{NFSU2_TR(0x6c4ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4ce8:{NFSU2_TR(0x6c4ce8);
__builtin_memmove((R+24),(R+28),4);
}
B6c4cea:{NFSU2_TR(0x6c4cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ced:L6c4ced:{c.instructions+=6;NFSU2_TR(0x6c4ced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c4cef:{NFSU2_TR(0x6c4cef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4cf2:{NFSU2_TR(0x6c4cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4cf5:{NFSU2_TR(0x6c4cf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c4cf8:{NFSU2_TR(0x6c4cf8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c4cfc:{NFSU2_TR(0x6c4cfc);
if(r1(R+518)){{goto L6c4d13;}}
}
B6c4cfe:L6c4cfe:{c.instructions+=2;NFSU2_TR(0x6c4cfe);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4d02:{NFSU2_TR(0x6c4d02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4d13;}}
}
B6c4d04:L6c4d04:{c.instructions+=6;NFSU2_TR(0x6c4d04);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6c4d07:{NFSU2_TR(0x6c4d07);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c4d0a:{NFSU2_TR(0x6c4d0a);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c4d0c:{NFSU2_TR(0x6c4d0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c4d0e:{NFSU2_TR(0x6c4d0e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c4d11:{NFSU2_TR(0x6c4d11);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c4d1a;}}
}
B6c4d13:L6c4d13:{c.instructions+=1;NFSU2_TR(0x6c4d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4d1a:L6c4d1a:{c.instructions+=3;NFSU2_TR(0x6c4d1a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6c4d1d:{NFSU2_TR(0x6c4d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4d20:{NFSU2_TR(0x6c4d20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4cedu);}goto L6c4ced;}}
}
B6c4d22:L6c4d22:{c.instructions+=2;NFSU2_TR(0x6c4d22);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4d26:{NFSU2_TR(0x6c4d26);
if(r1(R+518)){{goto L6c4d39;}}
}
B6c4d28:L6c4d28:{c.instructions+=4;NFSU2_TR(0x6c4d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4d2b:{NFSU2_TR(0x6c4d2b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6c4d2e:{NFSU2_TR(0x6c4d2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c4d32:{NFSU2_TR(0x6c4d32);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4cd2u);}goto L6c4cd2;}}
}
B6c4d34:L6c4d34:{c.instructions+=2;NFSU2_TR(0x6c4d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4d37:{NFSU2_TR(0x6c4d37);
{goto L6c4d4a;}
}
B6c4d39:L6c4d39:{c.instructions+=5;NFSU2_TR(0x6c4d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4d3c:{NFSU2_TR(0x6c4d3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c4d3f:{NFSU2_TR(0x6c4d3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe94ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c4d45:{NFSU2_TR(0x6c4d45);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B6c4d47:{NFSU2_TR(0x6c4d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4d4a:L6c4d4a:{c.instructions+=4;NFSU2_TR(0x6c4d4a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c4d4c:{NFSU2_TR(0x6c4d4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4d4f:{NFSU2_TR(0x6c4d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4d52:{NFSU2_TR(0x6c4d52);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4da0;}}
}
B6c4d54:L6c4d54:{c.instructions+=3;NFSU2_TR(0x6c4d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4d57:{NFSU2_TR(0x6c4d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4d5a:{NFSU2_TR(0x6c4d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c4d5d:L6c4d5d:{c.instructions+=6;NFSU2_TR(0x6c4d5d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c4d64:{NFSU2_TR(0x6c4d64);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4d67:{NFSU2_TR(0x6c4d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4d6a:{NFSU2_TR(0x6c4d6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4d6d:{NFSU2_TR(0x6c4d6d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c4d71:{NFSU2_TR(0x6c4d71);
if(r1(R+518)){{goto L6c4d8f;}}
}
B6c4d73:L6c4d73:{c.instructions+=2;NFSU2_TR(0x6c4d73);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4d77:{NFSU2_TR(0x6c4d77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4d8f;}}
}
B6c4d79:L6c4d79:{c.instructions+=6;NFSU2_TR(0x6c4d79);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6c4d7c:{NFSU2_TR(0x6c4d7c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c4d7f:{NFSU2_TR(0x6c4d7f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c4d81:{NFSU2_TR(0x6c4d81);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c4d83:{NFSU2_TR(0x6c4d83);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c4d86:{NFSU2_TR(0x6c4d86);
if(r1(R+514)){{goto L6c4d8f;}}
}
B6c4d88:L6c4d88:{c.instructions+=1;NFSU2_TR(0x6c4d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4d8f:L6c4d8f:{c.instructions+=3;NFSU2_TR(0x6c4d8f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c4d90:{NFSU2_TR(0x6c4d90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c4d93:{NFSU2_TR(0x6c4d93);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4d5du);}goto L6c4d5d;}}
}
B6c4d95:L6c4d95:{c.instructions+=2;NFSU2_TR(0x6c4d95);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4d99:{NFSU2_TR(0x6c4d99);
if(r1(R+518)){{goto L6c4da0;}}
}
B6c4d9b:L6c4d9b:{c.instructions+=2;NFSU2_TR(0x6c4d9b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c4d9d:{NFSU2_TR(0x6c4d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4da0:L6c4da0:{c.instructions+=3;NFSU2_TR(0x6c4da0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c4da2:{NFSU2_TR(0x6c4da2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4da4:{NFSU2_TR(0x6c4da4);
if(r1(R+518)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c4daa:L6c4daa:{c.instructions+=2;NFSU2_TR(0x6c4daa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4dad:{NFSU2_TR(0x6c4dad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4dea;}}
}
B6c4daf:L6c4daf:{c.instructions+=3;NFSU2_TR(0x6c4daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4db2:{NFSU2_TR(0x6c4db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c4db5:{NFSU2_TR(0x6c4db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4db8:L6c4db8:{c.instructions+=5;NFSU2_TR(0x6c4db8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4dbb:{NFSU2_TR(0x6c4dbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4dbe:{NFSU2_TR(0x6c4dbe);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c4dc0:{NFSU2_TR(0x6c4dc0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4dc2:{NFSU2_TR(0x6c4dc2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4dd5;}}
}
B6c4dc4:L6c4dc4:{c.instructions+=1;NFSU2_TR(0x6c4dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4dc7:L6c4dc7:{c.instructions+=2;NFSU2_TR(0x6c4dc7);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+12))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c4dcb:{NFSU2_TR(0x6c4dcb);
if(r1(R+518)){{goto L6c4dd2;}}
}
B6c4dcd:L6c4dcd:{c.instructions+=3;NFSU2_TR(0x6c4dcd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c4dce:{NFSU2_TR(0x6c4dce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6c4dd0:{NFSU2_TR(0x6c4dd0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4dc7u);}goto L6c4dc7;}}
}
B6c4dd2:L6c4dd2:{c.instructions+=1;NFSU2_TR(0x6c4dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4dd5:L6c4dd5:{c.instructions+=2;NFSU2_TR(0x6c4dd5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4dd7:{NFSU2_TR(0x6c4dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4de1;}}
}
B6c4dd9:L6c4dd9:{c.instructions+=3;NFSU2_TR(0x6c4dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4ddc:{NFSU2_TR(0x6c4ddc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c4de0:{NFSU2_TR(0x6c4de0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c4de1:L6c4de1:{c.instructions+=3;NFSU2_TR(0x6c4de1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c4de2:{NFSU2_TR(0x6c4de2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c4de5:{NFSU2_TR(0x6c4de5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4db8u);}goto L6c4db8;}}
}
B6c4de7:L6c4de7:{c.instructions+=1;NFSU2_TR(0x6c4de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4dea:L6c4dea:{c.instructions+=2;NFSU2_TR(0x6c4dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ded:{NFSU2_TR(0x6c4ded);
TAIL_STATIC(0x6c5f7cu,6c5);
}
B6c4df2:L6c4df2:{c.instructions+=13;NFSU2_TR(0x6c4df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4df5:{NFSU2_TR(0x6c4df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4dfb:{NFSU2_TR(0x6c4dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c4dfd:{NFSU2_TR(0x6c4dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e00:{NFSU2_TR(0x6c4e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c4e02:{NFSU2_TR(0x6c4e02);
w4(R+8,u32(0xfffffull));
}
B6c4e07:{NFSU2_TR(0x6c4e07);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6c4e09:{NFSU2_TR(0x6c4e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e0c:{NFSU2_TR(0x6c4e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e0f:{NFSU2_TR(0x6c4e0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4e12:{NFSU2_TR(0x6c4e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e15:{NFSU2_TR(0x6c4e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e1c:{NFSU2_TR(0x6c4e1c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6c51f3u,6c5);}
}
B6c4e22:L6c4e22:{c.instructions+=3;NFSU2_TR(0x6c4e22);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c4e27:{NFSU2_TR(0x6c4e27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4e2c:{NFSU2_TR(0x6c4e2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c51f3u,6c5);}
}
B6c4e32:L6c4e32:{c.instructions+=10;NFSU2_TR(0x6c4e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4e35:{NFSU2_TR(0x6c4e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e39:{NFSU2_TR(0x6c4e39);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c4e3c:{NFSU2_TR(0x6c4e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e3f:{NFSU2_TR(0x6c4e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e43:{NFSU2_TR(0x6c4e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4e46:{NFSU2_TR(0x6c4e46);
__builtin_memmove((R+0),(R+4),4);
}
B6c4e48:{NFSU2_TR(0x6c4e48);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4e4b:{NFSU2_TR(0x6c4e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c4e51:{NFSU2_TR(0x6c4e51);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4e57:L6c4e57:{c.instructions+=1;NFSU2_TR(0x6c4e57);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c4e59;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4e57u);}goto L6c4e57;}
}
B6c4e59:L6c4e59:{c.instructions+=2;NFSU2_TR(0x6c4e59);
__builtin_memmove((R+4),(R+0),4);
}
B6c4e5b:{NFSU2_TR(0x6c4e5b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c4e5e:L6c4e5e:{c.instructions+=1;NFSU2_TR(0x6c4e5e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c4e60;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4e5eu);}goto L6c4e5e;}
}
B6c4e60:L6c4e60:{c.instructions+=4;NFSU2_TR(0x6c4e60);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4e62:{NFSU2_TR(0x6c4e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c4e63:{NFSU2_TR(0x6c4e63);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c4e66:{NFSU2_TR(0x6c4e66);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4e6c:L6c4e6c:{c.instructions+=1;NFSU2_TR(0x6c4e6c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c4e6e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4e6cu);}goto L6c4e6c;}
}
B6c4e6e:L6c4e6e:{c.instructions+=3;NFSU2_TR(0x6c4e6e);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4e70:{NFSU2_TR(0x6c4e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c4e71:{NFSU2_TR(0x6c4e71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c4e77:L6c4e77:{c.instructions+=1;NFSU2_TR(0x6c4e77);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c4e79;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4e77u);}goto L6c4e77;}
}
B6c4e79:L6c4e79:{c.instructions+=5;NFSU2_TR(0x6c4e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4e7c:{NFSU2_TR(0x6c4e7c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c4e7e:{NFSU2_TR(0x6c4e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e81:{NFSU2_TR(0x6c4e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e84:{NFSU2_TR(0x6c4e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4e87:L6c4e87:{c.instructions+=2;NFSU2_TR(0x6c4e87);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4e8b:{NFSU2_TR(0x6c4e8b);
if(r1(R+518)){{goto L6c4e95;}}
}
B6c4e8d:L6c4e8d:{c.instructions+=4;NFSU2_TR(0x6c4e8d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c4e8f:{NFSU2_TR(0x6c4e8f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c4e90:{NFSU2_TR(0x6c4e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c4e93:{NFSU2_TR(0x6c4e93);
{goto L6c4e98;}
}
B6c4e95:L6c4e95:{c.instructions+=1;NFSU2_TR(0x6c4e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4e98:L6c4e98:{c.instructions+=10;NFSU2_TR(0x6c4e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4e9b:{NFSU2_TR(0x6c4e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c4e9e:{NFSU2_TR(0x6c4e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4ea1:{NFSU2_TR(0x6c4ea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd74cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c4ea8:{NFSU2_TR(0x6c4ea8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c4eab:{NFSU2_TR(0x6c4eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c4eae:{NFSU2_TR(0x6c4eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c4eb1:{NFSU2_TR(0x6c4eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c4eb3:{NFSU2_TR(0x6c4eb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4eb6:{NFSU2_TR(0x6c4eb6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c4f22;}}
}
B6c4eb8:L6c4eb8:{c.instructions+=3;NFSU2_TR(0x6c4eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4ebb:{NFSU2_TR(0x6c4ebb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c4ebe:{NFSU2_TR(0x6c4ebe);
if(r1(R+518)){{goto L6c4f68;}}
}
B6c4ec4:L6c4ec4:{c.instructions+=16;NFSU2_TR(0x6c4ec4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4ec7:{NFSU2_TR(0x6c4ec7);
__builtin_memmove((R+24),(R+4),4);
}
B6c4ec9:{NFSU2_TR(0x6c4ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4ecc:{NFSU2_TR(0x6c4ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4ecf:{NFSU2_TR(0x6c4ecf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c4ed2:{NFSU2_TR(0x6c4ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4ed5:{NFSU2_TR(0x6c4ed5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4ed7:{NFSU2_TR(0x6c4ed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd758ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c4edd:{NFSU2_TR(0x6c4edd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4ee0:{NFSU2_TR(0x6c4ee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4ee1:{NFSU2_TR(0x6c4ee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4ee4:{NFSU2_TR(0x6c4ee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4ee5:{NFSU2_TR(0x6c4ee5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c4ee8:{NFSU2_TR(0x6c4ee8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4ee9:{NFSU2_TR(0x6c4ee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4eea:{NFSU2_TR(0x6c4eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c4eefull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6c4eef:L6c4eef:{c.instructions+=2;NFSU2_TR(0x6c4eef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4ef1:{NFSU2_TR(0x6c4ef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c4f68;}}
}
B6c4ef3:L6c4ef3:{c.instructions+=15;NFSU2_TR(0x6c4ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4ef6:{NFSU2_TR(0x6c4ef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4ef7:{NFSU2_TR(0x6c4ef7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c4efa:{NFSU2_TR(0x6c4efa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4efd:{NFSU2_TR(0x6c4efd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4efe:{NFSU2_TR(0x6c4efe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4f04:{NFSU2_TR(0x6c4f04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4f05:{NFSU2_TR(0x6c4f05);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4f08:{NFSU2_TR(0x6c4f08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4f09:{NFSU2_TR(0x6c4f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4f0f:{NFSU2_TR(0x6c4f0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4f10:{NFSU2_TR(0x6c4f10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd740ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c4f16:{NFSU2_TR(0x6c4f16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4f17:{NFSU2_TR(0x6c4f17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c4f18:{NFSU2_TR(0x6c4f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c4f1dull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c4f1d:L6c4f1d:{c.instructions+=2;NFSU2_TR(0x6c4f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c4f20:{NFSU2_TR(0x6c4f20);
{goto L6c4f50;}
}
B6c4f22:L6c4f22:{c.instructions+=4;NFSU2_TR(0x6c4f22);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c4f25:{NFSU2_TR(0x6c4f25);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c4f27:{NFSU2_TR(0x6c4f27);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c4f2a:{NFSU2_TR(0x6c4f2a);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c4f31:L6c4f31:{c.instructions+=3;NFSU2_TR(0x6c4f31);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c4f35:{NFSU2_TR(0x6c4f35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c4f38:{NFSU2_TR(0x6c4f38);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c4f44;}}
}
B6c4f3a:L6c4f3a:{c.instructions+=4;NFSU2_TR(0x6c4f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c4f3d:{NFSU2_TR(0x6c4f3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c4f40:{NFSU2_TR(0x6c4f40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c4f42:{NFSU2_TR(0x6c4f42);
{goto L6c4f47;}
}
B6c4f44:L6c4f44:{c.instructions+=1;NFSU2_TR(0x6c4f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c4f47:L6c4f47:{c.instructions+=4;NFSU2_TR(0x6c4f47);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c4f48:{NFSU2_TR(0x6c4f48);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c4f4b:{NFSU2_TR(0x6c4f4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c4f4e:{NFSU2_TR(0x6c4f4e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4f31u);}goto L6c4f31;}}
}
B6c4f50:L6c4f50:{c.instructions+=2;NFSU2_TR(0x6c4f50);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4f54:{NFSU2_TR(0x6c4f54);
if(r1(R+518)){{goto L6c4f6f;}}
}
B6c4f56:L6c4f56:{c.instructions+=4;NFSU2_TR(0x6c4f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4f59:{NFSU2_TR(0x6c4f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6c4f5c:{NFSU2_TR(0x6c4f5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6c4f60:{NFSU2_TR(0x6c4f60);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4e87u);}goto L6c4e87;}}
}
B6c4f66:L6c4f66:{c.instructions+=1;NFSU2_TR(0x6c4f66);
{goto L6c4f6f;}
}
B6c4f68:L6c4f68:{c.instructions+=1;NFSU2_TR(0x6c4f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4f6f:L6c4f6f:{c.instructions+=2;NFSU2_TR(0x6c4f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4f73:{NFSU2_TR(0x6c4f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4f77:L6c4f77:{c.instructions+=2;NFSU2_TR(0x6c4f77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4f7b:{NFSU2_TR(0x6c4f7b);
if(r1(R+518)){{goto L6c4f85;}}
}
B6c4f7d:L6c4f7d:{c.instructions+=4;NFSU2_TR(0x6c4f7d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c4f7f:{NFSU2_TR(0x6c4f7f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c4f80:{NFSU2_TR(0x6c4f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c4f83:{NFSU2_TR(0x6c4f83);
{goto L6c4f88;}
}
B6c4f85:L6c4f85:{c.instructions+=1;NFSU2_TR(0x6c4f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4f88:L6c4f88:{c.instructions+=2;NFSU2_TR(0x6c4f88);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd74cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6c4f90:{NFSU2_TR(0x6c4f90);
if(r1(R+512)){{goto L6c4ff2;}}
}
B6c4f92:L6c4f92:{c.instructions+=3;NFSU2_TR(0x6c4f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4f96:{NFSU2_TR(0x6c4f96);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4f9a:{NFSU2_TR(0x6c4f9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4ff2;}}
}
B6c4f9c:L6c4f9c:{c.instructions+=3;NFSU2_TR(0x6c4f9c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c4f9e:{NFSU2_TR(0x6c4f9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c4fa1:{NFSU2_TR(0x6c4fa1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4fe7;}}
}
B6c4fa3:L6c4fa3:{c.instructions+=3;NFSU2_TR(0x6c4fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4fa6:{NFSU2_TR(0x6c4fa6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c4fad:{NFSU2_TR(0x6c4fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c4fb0:L6c4fb0:{c.instructions+=3;NFSU2_TR(0x6c4fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4fb4:{NFSU2_TR(0x6c4fb4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c4fb6:{NFSU2_TR(0x6c4fb6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c4fd8;}}
}
B6c4fb8:L6c4fb8:{c.instructions+=6;NFSU2_TR(0x6c4fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4fbb:{NFSU2_TR(0x6c4fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4fbe:{NFSU2_TR(0x6c4fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4fc1:{NFSU2_TR(0x6c4fc1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6c4fc3:{NFSU2_TR(0x6c4fc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c4fc6:{NFSU2_TR(0x6c4fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c4fc9:L6c4fc9:{c.instructions+=2;NFSU2_TR(0x6c4fc9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c4fcb:{NFSU2_TR(0x6c4fcb);
if(r1(R+518)){{goto L6c4fe0;}}
}
B6c4fcd:L6c4fcd:{c.instructions+=4;NFSU2_TR(0x6c4fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4fd0:{NFSU2_TR(0x6c4fd0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c4fd3:{NFSU2_TR(0x6c4fd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c4fd6:{NFSU2_TR(0x6c4fd6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4fc9u);}goto L6c4fc9;}}
}
B6c4fd8:L6c4fd8:{c.instructions+=3;NFSU2_TR(0x6c4fd8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c4fd9:{NFSU2_TR(0x6c4fd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c4fdc:{NFSU2_TR(0x6c4fdc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4fb0u);}goto L6c4fb0;}}
}
B6c4fde:L6c4fde:{c.instructions+=1;NFSU2_TR(0x6c4fde);
{goto L6c4fe7;}
}
B6c4fe0:L6c4fe0:{c.instructions+=1;NFSU2_TR(0x6c4fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4fe7:L6c4fe7:{c.instructions+=4;NFSU2_TR(0x6c4fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4fea:{NFSU2_TR(0x6c4fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4fed:{NFSU2_TR(0x6c4fed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c4ff0:{NFSU2_TR(0x6c4ff0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4f9cu);}goto L6c4f9c;}}
}
B6c4ff2:L6c4ff2:{c.instructions+=5;NFSU2_TR(0x6c4ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c4ff5:{NFSU2_TR(0x6c4ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ff8:{NFSU2_TR(0x6c4ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c4ffb:{NFSU2_TR(0x6c4ffb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6c4fff:{NFSU2_TR(0x6c4fff);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c4f77u);}goto L6c4f77;}}
TAIL_STATIC(0x6c5005u,6c5);
}
XIT:NFSU2_TR_EXIT(0x6c4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
