#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f3(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 page_5f4(Cpu& c){return body_5f4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f4000:goto L5f4000;
case 0x5f4004:c.instructions+=4;goto B5f4004;
case 0x5f400a:c.instructions+=3;goto B5f400a;
case 0x5f400c:c.instructions+=2;goto B5f400c;
case 0x5f400f:c.instructions+=1;goto B5f400f;
case 0x5f4011:goto L5f4011;
case 0x5f4014:c.instructions+=1;goto B5f4014;
case 0x5f4019:goto L5f4019;
case 0x5f401f:c.instructions+=5;goto B5f401f;
case 0x5f4021:c.instructions+=4;goto B5f4021;
case 0x5f4027:c.instructions+=3;goto B5f4027;
case 0x5f4029:c.instructions+=2;goto B5f4029;
case 0x5f402c:c.instructions+=1;goto B5f402c;
case 0x5f402e:goto L5f402e;
case 0x5f4033:c.instructions+=1;goto B5f4033;
case 0x5f4039:goto L5f4039;
case 0x5f403f:goto L5f403f;
case 0x5f4045:c.instructions+=10;goto B5f4045;
case 0x5f4047:c.instructions+=9;goto B5f4047;
case 0x5f4049:c.instructions+=8;goto B5f4049;
case 0x5f404d:c.instructions+=7;goto B5f404d;
case 0x5f4051:c.instructions+=6;goto B5f4051;
case 0x5f4057:c.instructions+=5;goto B5f4057;
case 0x5f405b:c.instructions+=4;goto B5f405b;
case 0x5f4061:c.instructions+=3;goto B5f4061;
case 0x5f4063:c.instructions+=2;goto B5f4063;
case 0x5f4066:c.instructions+=1;goto B5f4066;
case 0x5f4068:goto L5f4068;
case 0x5f406e:c.instructions+=4;goto B5f406e;
case 0x5f4074:c.instructions+=3;goto B5f4074;
case 0x5f4076:c.instructions+=2;goto B5f4076;
case 0x5f4079:c.instructions+=1;goto B5f4079;
case 0x5f407b:goto L5f407b;
case 0x5f407f:c.instructions+=4;goto B5f407f;
case 0x5f4085:c.instructions+=3;goto B5f4085;
case 0x5f4087:c.instructions+=2;goto B5f4087;
case 0x5f408a:c.instructions+=1;goto B5f408a;
case 0x5f408c:goto L5f408c;
case 0x5f4090:c.instructions+=6;goto B5f4090;
case 0x5f4096:c.instructions+=5;goto B5f4096;
case 0x5f409a:c.instructions+=4;goto B5f409a;
case 0x5f40a0:c.instructions+=3;goto B5f40a0;
case 0x5f40a2:c.instructions+=2;goto B5f40a2;
case 0x5f40a5:c.instructions+=1;goto B5f40a5;
case 0x5f40a7:goto L5f40a7;
case 0x5f40ad:goto L5f40ad;
case 0x5f40b1:c.instructions+=4;goto B5f40b1;
case 0x5f40b7:c.instructions+=3;goto B5f40b7;
case 0x5f40bc:c.instructions+=2;goto B5f40bc;
case 0x5f40c2:c.instructions+=1;goto B5f40c2;
case 0x5f40c8:goto L5f40c8;
case 0x5f40cc:c.instructions+=4;goto B5f40cc;
case 0x5f40d2:c.instructions+=3;goto B5f40d2;
case 0x5f40d4:c.instructions+=2;goto B5f40d4;
case 0x5f40d7:c.instructions+=1;goto B5f40d7;
case 0x5f40d9:goto L5f40d9;
case 0x5f40dc:c.instructions+=5;goto B5f40dc;
case 0x5f40e2:c.instructions+=4;goto B5f40e2;
case 0x5f40e8:c.instructions+=3;goto B5f40e8;
case 0x5f40ea:c.instructions+=2;goto B5f40ea;
case 0x5f40ed:c.instructions+=1;goto B5f40ed;
case 0x5f40ef:goto L5f40ef;
case 0x5f40f5:c.instructions+=1;goto B5f40f5;
case 0x5f40fb:goto L5f40fb;
case 0x5f4101:c.instructions+=3;goto B5f4101;
case 0x5f4107:c.instructions+=2;goto B5f4107;
case 0x5f410d:c.instructions+=1;goto B5f410d;
case 0x5f4112:goto L5f4112;
case 0x5f4118:c.instructions+=4;goto B5f4118;
case 0x5f411a:c.instructions+=3;goto B5f411a;
case 0x5f411c:c.instructions+=2;goto B5f411c;
case 0x5f411e:c.instructions+=1;goto B5f411e;
case 0x5f4120:goto L5f4120;
case 0x5f412a:c.instructions+=1;goto B5f412a;
case 0x5f4130:goto L5f4130;
case 0x5f4136:c.instructions+=2;goto B5f4136;
case 0x5f4138:c.instructions+=1;goto B5f4138;
case 0x5f413a:goto L5f413a;
case 0x5f413f:c.instructions+=1;goto B5f413f;
case 0x5f4141:goto L5f4141;
case 0x5f4143:c.instructions+=1;goto B5f4143;
case 0x5f4148:goto L5f4148;
case 0x5f414a:c.instructions+=1;goto B5f414a;
case 0x5f414c:goto L5f414c;
case 0x5f4152:c.instructions+=2;goto B5f4152;
case 0x5f4154:c.instructions+=1;goto B5f4154;
case 0x5f4156:goto L5f4156;
case 0x5f415b:c.instructions+=1;goto B5f415b;
case 0x5f415d:goto L5f415d;
case 0x5f415e:c.instructions+=4;goto B5f415e;
case 0x5f4168:c.instructions+=3;goto B5f4168;
case 0x5f4169:c.instructions+=2;goto B5f4169;
case 0x5f416c:c.instructions+=1;goto B5f416c;
case 0x5f416d:goto L5f416d;
case 0x5f4173:c.instructions+=2;goto B5f4173;
case 0x5f4175:c.instructions+=1;goto B5f4175;
case 0x5f4177:goto L5f4177;
case 0x5f417c:c.instructions+=1;goto B5f417c;
case 0x5f417e:goto L5f417e;
case 0x5f4184:c.instructions+=3;goto B5f4184;
case 0x5f418a:c.instructions+=2;goto B5f418a;
case 0x5f4190:c.instructions+=1;goto B5f4190;
case 0x5f4195:goto L5f4195;
case 0x5f419b:c.instructions+=2;goto B5f419b;
case 0x5f419d:c.instructions+=1;goto B5f419d;
case 0x5f419f:goto L5f419f;
case 0x5f41a9:goto L5f41a9;
case 0x5f41aa:c.instructions+=3;goto B5f41aa;
case 0x5f41ab:c.instructions+=2;goto B5f41ab;
case 0x5f41ae:c.instructions+=1;goto B5f41ae;
case 0x5f41b0:goto L5f41b0;
case 0x5f41b5:c.instructions+=2;goto B5f41b5;
case 0x5f41b7:c.instructions+=1;goto B5f41b7;
case 0x5f41b9:goto L5f41b9;
case 0x5f41be:c.instructions+=2;goto B5f41be;
case 0x5f41c0:c.instructions+=1;goto B5f41c0;
case 0x5f41c2:goto L5f41c2;
case 0x5f41c7:c.instructions+=2;goto B5f41c7;
case 0x5f41c9:c.instructions+=1;goto B5f41c9;
case 0x5f41cb:goto L5f41cb;
case 0x5f41d0:c.instructions+=2;goto B5f41d0;
case 0x5f41d3:c.instructions+=1;goto B5f41d3;
case 0x5f41d4:goto L5f41d4;
case 0x5f41d7:c.instructions+=1;goto B5f41d7;
case 0x5f41e0:goto L5f41e0;
case 0x5f41e5:c.instructions+=4;goto B5f41e5;
case 0x5f41e6:c.instructions+=3;goto B5f41e6;
case 0x5f41e7:c.instructions+=2;goto B5f41e7;
case 0x5f41e9:c.instructions+=1;goto B5f41e9;
case 0x5f41ee:goto L5f41ee;
case 0x5f41f1:c.instructions+=2;goto B5f41f1;
case 0x5f41f3:c.instructions+=1;goto B5f41f3;
case 0x5f41f5:goto L5f41f5;
case 0x5f41f9:c.instructions+=11;goto B5f41f9;
case 0x5f41fd:c.instructions+=10;goto B5f41fd;
case 0x5f4200:c.instructions+=9;goto B5f4200;
case 0x5f4203:c.instructions+=8;goto B5f4203;
case 0x5f4206:c.instructions+=7;goto B5f4206;
case 0x5f4209:c.instructions+=6;goto B5f4209;
case 0x5f420b:c.instructions+=5;goto B5f420b;
case 0x5f420e:c.instructions+=4;goto B5f420e;
case 0x5f4211:c.instructions+=3;goto B5f4211;
case 0x5f4213:c.instructions+=2;goto B5f4213;
case 0x5f4214:c.instructions+=1;goto B5f4214;
case 0x5f4217:goto L5f4217;
case 0x5f421a:c.instructions+=8;goto B5f421a;
case 0x5f421d:c.instructions+=7;goto B5f421d;
case 0x5f421f:c.instructions+=6;goto B5f421f;
case 0x5f4221:c.instructions+=5;goto B5f4221;
case 0x5f4224:c.instructions+=4;goto B5f4224;
case 0x5f4227:c.instructions+=3;goto B5f4227;
case 0x5f4229:c.instructions+=2;goto B5f4229;
case 0x5f422a:c.instructions+=1;goto B5f422a;
case 0x5f4230:goto L5f4230;
case 0x5f4234:c.instructions+=3;goto B5f4234;
case 0x5f4235:c.instructions+=2;goto B5f4235;
case 0x5f4237:c.instructions+=1;goto B5f4237;
case 0x5f423c:goto L5f423c;
case 0x5f4240:goto L5f4240;
case 0x5f4244:c.instructions+=3;goto B5f4244;
case 0x5f4245:c.instructions+=2;goto B5f4245;
case 0x5f4247:c.instructions+=1;goto B5f4247;
case 0x5f424c:goto L5f424c;
case 0x5f4250:goto L5f4250;
case 0x5f4252:c.instructions+=13;goto B5f4252;
case 0x5f4257:c.instructions+=12;goto B5f4257;
case 0x5f425d:c.instructions+=11;goto B5f425d;
case 0x5f425e:c.instructions+=10;goto B5f425e;
case 0x5f4265:c.instructions+=9;goto B5f4265;
case 0x5f4266:c.instructions+=8;goto B5f4266;
case 0x5f426b:c.instructions+=7;goto B5f426b;
case 0x5f426c:c.instructions+=6;goto B5f426c;
case 0x5f426d:c.instructions+=5;goto B5f426d;
case 0x5f4270:c.instructions+=4;goto B5f4270;
case 0x5f4272:c.instructions+=3;goto B5f4272;
case 0x5f4273:c.instructions+=2;goto B5f4273;
case 0x5f4278:c.instructions+=1;goto B5f4278;
case 0x5f427a:goto L5f427a;
case 0x5f427b:c.instructions+=2;goto B5f427b;
case 0x5f4280:c.instructions+=1;goto B5f4280;
case 0x5f4285:goto L5f4285;
case 0x5f4287:c.instructions+=1;goto B5f4287;
case 0x5f4289:goto L5f4289;
case 0x5f428c:c.instructions+=1;goto B5f428c;
case 0x5f428e:goto L5f428e;
case 0x5f4291:c.instructions+=1;goto B5f4291;
case 0x5f4293:goto L5f4293;
case 0x5f4298:c.instructions+=2;goto B5f4298;
case 0x5f429a:c.instructions+=1;goto B5f429a;
case 0x5f429c:goto L5f429c;
case 0x5f42a2:c.instructions+=2;goto B5f42a2;
case 0x5f42a7:c.instructions+=1;goto B5f42a7;
case 0x5f42ac:goto L5f42ac;
case 0x5f42af:c.instructions+=4;goto B5f42af;
case 0x5f42b3:c.instructions+=3;goto B5f42b3;
case 0x5f42b5:c.instructions+=2;goto B5f42b5;
case 0x5f42bd:c.instructions+=1;goto B5f42bd;
case 0x5f42bf:goto L5f42bf;
case 0x5f42c1:c.instructions+=3;goto B5f42c1;
case 0x5f42c2:c.instructions+=2;goto B5f42c2;
case 0x5f42c4:c.instructions+=1;goto B5f42c4;
case 0x5f42c9:goto L5f42c9;
case 0x5f42cd:goto L5f42cd;
case 0x5f42d2:c.instructions+=2;goto B5f42d2;
case 0x5f42d4:c.instructions+=1;goto B5f42d4;
case 0x5f42d6:goto L5f42d6;
case 0x5f42d7:c.instructions+=2;goto B5f42d7;
case 0x5f42dc:c.instructions+=1;goto B5f42dc;
case 0x5f42e1:goto L5f42e1;
case 0x5f42e3:c.instructions+=1;goto B5f42e3;
case 0x5f42e5:goto L5f42e5;
case 0x5f42e8:c.instructions+=1;goto B5f42e8;
case 0x5f42ea:goto L5f42ea;
case 0x5f42ed:c.instructions+=1;goto B5f42ed;
case 0x5f42ef:goto L5f42ef;
case 0x5f42f5:c.instructions+=2;goto B5f42f5;
case 0x5f42fa:c.instructions+=1;goto B5f42fa;
case 0x5f42ff:goto L5f42ff;
case 0x5f4302:c.instructions+=4;goto B5f4302;
case 0x5f4306:c.instructions+=3;goto B5f4306;
case 0x5f4308:c.instructions+=2;goto B5f4308;
case 0x5f430c:c.instructions+=1;goto B5f430c;
case 0x5f430e:goto L5f430e;
case 0x5f430f:c.instructions+=3;goto B5f430f;
case 0x5f4310:c.instructions+=2;goto B5f4310;
case 0x5f4312:c.instructions+=1;goto B5f4312;
case 0x5f4317:goto L5f4317;
case 0x5f431b:goto L5f431b;
case 0x5f4321:c.instructions+=4;goto B5f4321;
case 0x5f4323:c.instructions+=3;goto B5f4323;
case 0x5f4325:c.instructions+=2;goto B5f4325;
case 0x5f4329:c.instructions+=1;goto B5f4329;
case 0x5f432b:goto L5f432b;
case 0x5f4331:c.instructions+=1;goto B5f4331;
case 0x5f4332:goto L5f4332;
case 0x5f4339:c.instructions+=3;goto B5f4339;
case 0x5f433e:c.instructions+=2;goto B5f433e;
case 0x5f4340:c.instructions+=1;goto B5f4340;
case 0x5f4342:goto L5f4342;
case 0x5f4345:c.instructions+=5;goto B5f4345;
case 0x5f4348:c.instructions+=4;goto B5f4348;
case 0x5f434a:c.instructions+=3;goto B5f434a;
case 0x5f434e:c.instructions+=2;goto B5f434e;
case 0x5f434f:c.instructions+=1;goto B5f434f;
case 0x5f4351:goto L5f4351;
case 0x5f4354:c.instructions+=4;goto B5f4354;
case 0x5f435b:c.instructions+=3;goto B5f435b;
case 0x5f435d:c.instructions+=2;goto B5f435d;
case 0x5f435f:c.instructions+=1;goto B5f435f;
case 0x5f4364:goto L5f4364;
case 0x5f4366:c.instructions+=1;goto B5f4366;
case 0x5f4368:goto L5f4368;
case 0x5f436c:c.instructions+=2;goto B5f436c;
case 0x5f436e:c.instructions+=1;goto B5f436e;
case 0x5f4370:goto L5f4370;
case 0x5f4372:c.instructions+=2;goto B5f4372;
case 0x5f4374:c.instructions+=1;goto B5f4374;
case 0x5f4376:goto L5f4376;
case 0x5f4378:goto L5f4378;
case 0x5f4379:goto L5f4379;
case 0x5f437b:c.instructions+=1;goto B5f437b;
case 0x5f4380:goto L5f4380;
case 0x5f4386:goto L5f4386;
case 0x5f438a:c.instructions+=5;goto B5f438a;
case 0x5f4390:c.instructions+=4;goto B5f4390;
case 0x5f4391:c.instructions+=3;goto B5f4391;
case 0x5f4393:c.instructions+=2;goto B5f4393;
case 0x5f4397:c.instructions+=1;goto B5f4397;
case 0x5f4399:goto L5f4399;
case 0x5f439a:goto L5f439a;
case 0x5f439e:c.instructions+=6;goto B5f439e;
case 0x5f439f:c.instructions+=5;goto B5f439f;
case 0x5f43a0:c.instructions+=4;goto B5f43a0;
case 0x5f43a1:c.instructions+=3;goto B5f43a1;
case 0x5f43a8:c.instructions+=2;goto B5f43a8;
case 0x5f43ab:c.instructions+=1;goto B5f43ab;
case 0x5f43b0:goto L5f43b0;
case 0x5f43b4:c.instructions+=4;goto B5f43b4;
case 0x5f43b6:c.instructions+=3;goto B5f43b6;
case 0x5f43b8:c.instructions+=2;goto B5f43b8;
case 0x5f43bb:c.instructions+=1;goto B5f43bb;
case 0x5f43c0:goto L5f43c0;
case 0x5f43d0:goto L5f43d0;
case 0x5f43d4:c.instructions+=3;goto B5f43d4;
case 0x5f43d5:c.instructions+=2;goto B5f43d5;
case 0x5f43d7:c.instructions+=1;goto B5f43d7;
case 0x5f43dc:goto L5f43dc;
case 0x5f43e0:goto L5f43e0;
case 0x5f43e5:c.instructions+=4;goto B5f43e5;
case 0x5f43e6:c.instructions+=3;goto B5f43e6;
case 0x5f43e8:c.instructions+=2;goto B5f43e8;
case 0x5f43ee:c.instructions+=1;goto B5f43ee;
case 0x5f43f0:goto L5f43f0;
case 0x5f43f1:c.instructions+=1;goto B5f43f1;
case 0x5f43f6:goto L5f43f6;
case 0x5f43f9:goto L5f43f9;
case 0x5f43fb:c.instructions+=2;goto B5f43fb;
case 0x5f43fc:c.instructions+=1;goto B5f43fc;
case 0x5f4400:goto L5f4400;
case 0x5f4401:c.instructions+=6;goto B5f4401;
case 0x5f4405:c.instructions+=5;goto B5f4405;
case 0x5f4408:c.instructions+=4;goto B5f4408;
case 0x5f4409:c.instructions+=3;goto B5f4409;
case 0x5f440b:c.instructions+=2;goto B5f440b;
case 0x5f440e:c.instructions+=1;goto B5f440e;
case 0x5f4410:goto L5f4410;
case 0x5f4411:c.instructions+=3;goto B5f4411;
case 0x5f4416:c.instructions+=2;goto B5f4416;
case 0x5f4417:c.instructions+=1;goto B5f4417;
case 0x5f4418:goto L5f4418;
case 0x5f441b:c.instructions+=2;goto B5f441b;
case 0x5f441f:c.instructions+=1;goto B5f441f;
case 0x5f4421:goto L5f4421;
case 0x5f4427:c.instructions+=2;goto B5f4427;
case 0x5f4429:c.instructions+=1;goto B5f4429;
case 0x5f442b:goto L5f442b;
case 0x5f442e:c.instructions+=3;goto B5f442e;
case 0x5f4434:c.instructions+=2;goto B5f4434;
case 0x5f4436:c.instructions+=1;goto B5f4436;
case 0x5f4438:goto L5f4438;
case 0x5f443e:c.instructions+=2;goto B5f443e;
case 0x5f4440:c.instructions+=1;goto B5f4440;
case 0x5f4442:goto L5f4442;
case 0x5f4448:c.instructions+=2;goto B5f4448;
case 0x5f444a:c.instructions+=1;goto B5f444a;
case 0x5f444c:goto L5f444c;
case 0x5f4451:c.instructions+=1;goto B5f4451;
case 0x5f4453:goto L5f4453;
case 0x5f4456:c.instructions+=2;goto B5f4456;
case 0x5f4458:c.instructions+=1;goto B5f4458;
case 0x5f445b:goto L5f445b;
case 0x5f445d:c.instructions+=1;goto B5f445d;
case 0x5f445f:goto L5f445f;
case 0x5f4464:c.instructions+=2;goto B5f4464;
case 0x5f4466:c.instructions+=1;goto B5f4466;
case 0x5f4468:goto L5f4468;
case 0x5f446d:c.instructions+=2;goto B5f446d;
case 0x5f446f:c.instructions+=1;goto B5f446f;
case 0x5f4471:goto L5f4471;
case 0x5f4476:c.instructions+=1;goto B5f4476;
case 0x5f447b:goto L5f447b;
case 0x5f447d:c.instructions+=1;goto B5f447d;
case 0x5f447f:goto L5f447f;
case 0x5f4482:c.instructions+=2;goto B5f4482;
case 0x5f4485:c.instructions+=1;goto B5f4485;
case 0x5f4487:goto L5f4487;
case 0x5f448a:c.instructions+=1;goto B5f448a;
case 0x5f448c:goto L5f448c;
case 0x5f448e:c.instructions+=1;goto B5f448e;
case 0x5f4490:goto L5f4490;
case 0x5f4492:c.instructions+=1;goto B5f4492;
case 0x5f4494:goto L5f4494;
case 0x5f4499:goto L5f4499;
case 0x5f449c:c.instructions+=2;goto B5f449c;
case 0x5f44a0:c.instructions+=1;goto B5f44a0;
case 0x5f44a2:goto L5f44a2;
case 0x5f44a8:c.instructions+=2;goto B5f44a8;
case 0x5f44aa:c.instructions+=1;goto B5f44aa;
case 0x5f44ac:goto L5f44ac;
case 0x5f44b1:c.instructions+=2;goto B5f44b1;
case 0x5f44b4:c.instructions+=1;goto B5f44b4;
case 0x5f44b6:goto L5f44b6;
case 0x5f44b8:c.instructions+=3;goto B5f44b8;
case 0x5f44b9:c.instructions+=2;goto B5f44b9;
case 0x5f44ba:c.instructions+=1;goto B5f44ba;
case 0x5f44bb:goto L5f44bb;
case 0x5f44c0:c.instructions+=2;goto B5f44c0;
case 0x5f44c2:c.instructions+=1;goto B5f44c2;
case 0x5f44c4:goto L5f44c4;
case 0x5f44c9:goto L5f44c9;
case 0x5f44cb:c.instructions+=3;goto B5f44cb;
case 0x5f44cc:c.instructions+=2;goto B5f44cc;
case 0x5f44cd:c.instructions+=1;goto B5f44cd;
case 0x5f44d0:goto L5f44d0;
case 0x5f44d2:c.instructions+=16;goto B5f44d2;
case 0x5f44d7:c.instructions+=15;goto B5f44d7;
case 0x5f44dd:c.instructions+=14;goto B5f44dd;
case 0x5f44de:c.instructions+=13;goto B5f44de;
case 0x5f44e5:c.instructions+=12;goto B5f44e5;
case 0x5f44e6:c.instructions+=11;goto B5f44e6;
case 0x5f44e7:c.instructions+=10;goto B5f44e7;
case 0x5f44e8:c.instructions+=9;goto B5f44e8;
case 0x5f44ea:c.instructions+=8;goto B5f44ea;
case 0x5f44eb:c.instructions+=7;goto B5f44eb;
case 0x5f44ef:c.instructions+=6;goto B5f44ef;
case 0x5f44f5:c.instructions+=5;goto B5f44f5;
case 0x5f44f7:c.instructions+=4;goto B5f44f7;
case 0x5f44f9:c.instructions+=3;goto B5f44f9;
case 0x5f44fe:c.instructions+=2;goto B5f44fe;
case 0x5f4502:c.instructions+=1;goto B5f4502;
case 0x5f4504:goto L5f4504;
case 0x5f4506:c.instructions+=2;goto B5f4506;
case 0x5f4507:c.instructions+=1;goto B5f4507;
case 0x5f4509:goto L5f4509;
case 0x5f450c:c.instructions+=2;goto B5f450c;
case 0x5f450f:c.instructions+=1;goto B5f450f;
case 0x5f4511:goto L5f4511;
case 0x5f4517:c.instructions+=1;goto B5f4517;
case 0x5f4519:goto L5f4519;
case 0x5f4523:c.instructions+=1;goto B5f4523;
case 0x5f4529:goto L5f4529;
case 0x5f452c:c.instructions+=2;goto B5f452c;
case 0x5f452e:c.instructions+=1;goto B5f452e;
case 0x5f4530:goto L5f4530;
case 0x5f4532:c.instructions+=2;goto B5f4532;
case 0x5f4533:c.instructions+=1;goto B5f4533;
case 0x5f4535:goto L5f4535;
case 0x5f4538:c.instructions+=2;goto B5f4538;
case 0x5f453a:c.instructions+=1;goto B5f453a;
case 0x5f453c:goto L5f453c;
case 0x5f453e:c.instructions+=2;goto B5f453e;
case 0x5f453f:c.instructions+=1;goto B5f453f;
case 0x5f4541:goto L5f4541;
case 0x5f4545:c.instructions+=14;goto B5f4545;
case 0x5f454c:c.instructions+=13;goto B5f454c;
case 0x5f4550:c.instructions+=12;goto B5f4550;
case 0x5f4557:c.instructions+=11;goto B5f4557;
case 0x5f455b:c.instructions+=10;goto B5f455b;
case 0x5f4562:c.instructions+=9;goto B5f4562;
case 0x5f4566:c.instructions+=8;goto B5f4566;
case 0x5f456d:c.instructions+=7;goto B5f456d;
case 0x5f4571:c.instructions+=6;goto B5f4571;
case 0x5f4578:c.instructions+=5;goto B5f4578;
case 0x5f457c:c.instructions+=4;goto B5f457c;
case 0x5f4583:c.instructions+=3;goto B5f4583;
case 0x5f4586:c.instructions+=2;goto B5f4586;
case 0x5f4588:c.instructions+=1;goto B5f4588;
case 0x5f458a:goto L5f458a;
case 0x5f458c:c.instructions+=2;goto B5f458c;
case 0x5f458d:c.instructions+=1;goto B5f458d;
case 0x5f458f:goto L5f458f;
case 0x5f4595:c.instructions+=2;goto B5f4595;
case 0x5f4597:c.instructions+=1;goto B5f4597;
case 0x5f4599:goto L5f4599;
case 0x5f459b:c.instructions+=1;goto B5f459b;
case 0x5f45a0:goto L5f45a0;
case 0x5f45a1:c.instructions+=1;goto B5f45a1;
case 0x5f45a6:goto L5f45a6;
case 0x5f45a9:goto L5f45a9;
case 0x5f45af:c.instructions+=2;goto B5f45af;
case 0x5f45b1:c.instructions+=1;goto B5f45b1;
case 0x5f45b3:goto L5f45b3;
case 0x5f45b5:c.instructions+=1;goto B5f45b5;
case 0x5f45ba:goto L5f45ba;
case 0x5f45bb:c.instructions+=1;goto B5f45bb;
case 0x5f45c0:goto L5f45c0;
case 0x5f45c3:c.instructions+=1;goto B5f45c3;
case 0x5f45c9:goto L5f45c9;
case 0x5f45cb:c.instructions+=1;goto B5f45cb;
case 0x5f45d0:goto L5f45d0;
case 0x5f45d6:c.instructions+=1;goto B5f45d6;
case 0x5f45d8:goto L5f45d8;
case 0x5f45de:c.instructions+=2;goto B5f45de;
case 0x5f45df:c.instructions+=1;goto B5f45df;
case 0x5f45e4:goto L5f45e4;
case 0x5f45ea:goto L5f45ea;
case 0x5f45ef:c.instructions+=1;goto B5f45ef;
case 0x5f45f4:goto L5f45f4;
case 0x5f45f7:c.instructions+=4;goto B5f45f7;
case 0x5f45fa:c.instructions+=3;goto B5f45fa;
case 0x5f45fd:c.instructions+=2;goto B5f45fd;
case 0x5f4600:c.instructions+=1;goto B5f4600;
case 0x5f4602:goto L5f4602;
case 0x5f4603:c.instructions+=2;goto B5f4603;
case 0x5f4608:c.instructions+=1;goto B5f4608;
case 0x5f460d:goto L5f460d;
case 0x5f4613:c.instructions+=2;goto B5f4613;
case 0x5f4617:c.instructions+=1;goto B5f4617;
case 0x5f461c:goto L5f461c;
case 0x5f4622:c.instructions+=2;goto B5f4622;
case 0x5f462a:c.instructions+=1;goto B5f462a;
case 0x5f462f:goto L5f462f;
case 0x5f4633:c.instructions+=6;goto B5f4633;
case 0x5f4634:c.instructions+=5;goto B5f4634;
case 0x5f4635:c.instructions+=4;goto B5f4635;
case 0x5f4636:c.instructions+=3;goto B5f4636;
case 0x5f463d:c.instructions+=2;goto B5f463d;
case 0x5f4640:c.instructions+=1;goto B5f4640;
case 0x5f4650:goto L5f4650;
case 0x5f4655:c.instructions+=2;goto B5f4655;
case 0x5f4657:c.instructions+=1;goto B5f4657;
case 0x5f4659:goto L5f4659;
case 0x5f465a:c.instructions+=3;goto B5f465a;
case 0x5f465c:c.instructions+=2;goto B5f465c;
case 0x5f465e:c.instructions+=1;goto B5f465e;
case 0x5f4660:goto L5f4660;
case 0x5f4661:c.instructions+=1;goto B5f4661;
case 0x5f4665:goto L5f4665;
case 0x5f4668:c.instructions+=1;goto B5f4668;
case 0x5f466a:goto L5f466a;
case 0x5f466d:c.instructions+=2;goto B5f466d;
case 0x5f466f:c.instructions+=1;goto B5f466f;
case 0x5f4671:goto L5f4671;
case 0x5f4677:c.instructions+=2;goto B5f4677;
case 0x5f4679:c.instructions+=1;goto B5f4679;
case 0x5f467b:goto L5f467b;
case 0x5f467d:c.instructions+=1;goto B5f467d;
case 0x5f4682:goto L5f4682;
case 0x5f4685:c.instructions+=3;goto B5f4685;
case 0x5f4686:c.instructions+=2;goto B5f4686;
case 0x5f4688:c.instructions+=1;goto B5f4688;
case 0x5f468d:goto L5f468d;
case 0x5f4692:goto L5f4692;
case 0x5f4694:c.instructions+=2;goto B5f4694;
case 0x5f4696:c.instructions+=1;goto B5f4696;
case 0x5f4698:goto L5f4698;
case 0x5f4699:goto L5f4699;
case 0x5f469a:goto L5f469a;
case 0x5f46a0:goto L5f46a0;
case 0x5f46a2:c.instructions+=15;goto B5f46a2;
case 0x5f46a7:c.instructions+=14;goto B5f46a7;
case 0x5f46ad:c.instructions+=13;goto B5f46ad;
case 0x5f46ae:c.instructions+=12;goto B5f46ae;
case 0x5f46b5:c.instructions+=11;goto B5f46b5;
case 0x5f46b6:c.instructions+=10;goto B5f46b6;
case 0x5f46b7:c.instructions+=9;goto B5f46b7;
case 0x5f46b8:c.instructions+=8;goto B5f46b8;
case 0x5f46b9:c.instructions+=7;goto B5f46b9;
case 0x5f46bb:c.instructions+=6;goto B5f46bb;
case 0x5f46c1:c.instructions+=5;goto B5f46c1;
case 0x5f46c3:c.instructions+=4;goto B5f46c3;
case 0x5f46c6:c.instructions+=3;goto B5f46c6;
case 0x5f46c7:c.instructions+=2;goto B5f46c7;
case 0x5f46cc:c.instructions+=1;goto B5f46cc;
case 0x5f46ce:goto L5f46ce;
case 0x5f46d1:c.instructions+=2;goto B5f46d1;
case 0x5f46d4:c.instructions+=1;goto B5f46d4;
case 0x5f46d6:goto L5f46d6;
case 0x5f46dc:c.instructions+=1;goto B5f46dc;
case 0x5f46de:goto L5f46de;
case 0x5f46e0:c.instructions+=2;goto B5f46e0;
case 0x5f46e4:c.instructions+=1;goto B5f46e4;
case 0x5f46e6:goto L5f46e6;
case 0x5f46ea:goto L5f46ea;
case 0x5f46ed:c.instructions+=1;goto B5f46ed;
case 0x5f46f3:goto L5f46f3;
case 0x5f46f6:c.instructions+=2;goto B5f46f6;
case 0x5f46f8:c.instructions+=1;goto B5f46f8;
case 0x5f46fa:goto L5f46fa;
case 0x5f46fc:c.instructions+=2;goto B5f46fc;
case 0x5f46fd:c.instructions+=1;goto B5f46fd;
case 0x5f46ff:goto L5f46ff;
case 0x5f4703:c.instructions+=8;goto B5f4703;
case 0x5f4706:c.instructions+=7;goto B5f4706;
case 0x5f4709:c.instructions+=6;goto B5f4709;
case 0x5f4710:c.instructions+=5;goto B5f4710;
case 0x5f4714:c.instructions+=4;goto B5f4714;
case 0x5f4717:c.instructions+=3;goto B5f4717;
case 0x5f471e:c.instructions+=2;goto B5f471e;
case 0x5f4724:c.instructions+=1;goto B5f4724;
case 0x5f4726:goto L5f4726;
case 0x5f4728:c.instructions+=1;goto B5f4728;
case 0x5f472a:goto L5f472a;
case 0x5f472d:c.instructions+=1;goto B5f472d;
case 0x5f472f:goto L5f472f;
case 0x5f4732:c.instructions+=7;goto B5f4732;
case 0x5f4733:c.instructions+=6;goto B5f4733;
case 0x5f4735:c.instructions+=5;goto B5f4735;
case 0x5f4737:c.instructions+=4;goto B5f4737;
case 0x5f473a:c.instructions+=3;goto B5f473a;
case 0x5f473e:c.instructions+=2;goto B5f473e;
case 0x5f4740:c.instructions+=1;goto B5f4740;
case 0x5f4742:goto L5f4742;
case 0x5f4745:c.instructions+=1;goto B5f4745;
case 0x5f474b:goto L5f474b;
case 0x5f4752:goto L5f4752;
case 0x5f4758:c.instructions+=2;goto B5f4758;
case 0x5f4759:c.instructions+=1;goto B5f4759;
case 0x5f475e:goto L5f475e;
case 0x5f4761:c.instructions+=2;goto B5f4761;
case 0x5f4763:c.instructions+=1;goto B5f4763;
case 0x5f4765:goto L5f4765;
case 0x5f4768:c.instructions+=7;goto B5f4768;
case 0x5f476e:c.instructions+=6;goto B5f476e;
case 0x5f4771:c.instructions+=5;goto B5f4771;
case 0x5f4774:c.instructions+=4;goto B5f4774;
case 0x5f4777:c.instructions+=3;goto B5f4777;
case 0x5f477a:c.instructions+=2;goto B5f477a;
case 0x5f477d:c.instructions+=1;goto B5f477d;
case 0x5f4782:goto L5f4782;
case 0x5f4784:c.instructions+=4;goto B5f4784;
case 0x5f4787:c.instructions+=3;goto B5f4787;
case 0x5f478a:c.instructions+=2;goto B5f478a;
case 0x5f478d:c.instructions+=1;goto B5f478d;
case 0x5f4792:goto L5f4792;
case 0x5f4797:c.instructions+=1;goto B5f4797;
case 0x5f479c:goto L5f479c;
case 0x5f479e:c.instructions+=5;goto B5f479e;
case 0x5f47a1:c.instructions+=4;goto B5f47a1;
case 0x5f47a5:c.instructions+=3;goto B5f47a5;
case 0x5f47a7:c.instructions+=2;goto B5f47a7;
case 0x5f47ab:c.instructions+=1;goto B5f47ab;
case 0x5f47ad:goto L5f47ad;
case 0x5f47b0:c.instructions+=3;goto B5f47b0;
case 0x5f47b1:c.instructions+=2;goto B5f47b1;
case 0x5f47b4:c.instructions+=1;goto B5f47b4;
case 0x5f47b9:goto L5f47b9;
case 0x5f47bc:c.instructions+=7;goto B5f47bc;
case 0x5f47bf:c.instructions+=6;goto B5f47bf;
case 0x5f47c0:c.instructions+=5;goto B5f47c0;
case 0x5f47c1:c.instructions+=4;goto B5f47c1;
case 0x5f47c2:c.instructions+=3;goto B5f47c2;
case 0x5f47c3:c.instructions+=2;goto B5f47c3;
case 0x5f47c5:c.instructions+=1;goto B5f47c5;
case 0x5f47ca:goto L5f47ca;
case 0x5f47cc:goto L5f47cc;
case 0x5f47ce:goto L5f47ce;
case 0x5f47d4:c.instructions+=6;goto B5f47d4;
case 0x5f47d8:c.instructions+=5;goto B5f47d8;
case 0x5f47db:c.instructions+=4;goto B5f47db;
case 0x5f47de:c.instructions+=3;goto B5f47de;
case 0x5f47e1:c.instructions+=2;goto B5f47e1;
case 0x5f47e4:c.instructions+=1;goto B5f47e4;
case 0x5f47e9:goto L5f47e9;
case 0x5f47eb:c.instructions+=1;goto B5f47eb;
case 0x5f47f0:goto L5f47f0;
case 0x5f47f3:c.instructions+=4;goto B5f47f3;
case 0x5f47f7:c.instructions+=3;goto B5f47f7;
case 0x5f47f9:c.instructions+=2;goto B5f47f9;
case 0x5f47fd:c.instructions+=1;goto B5f47fd;
case 0x5f47ff:goto L5f47ff;
case 0x5f4800:c.instructions+=2;goto B5f4800;
case 0x5f4802:c.instructions+=1;goto B5f4802;
case 0x5f4807:goto L5f4807;
case 0x5f480a:c.instructions+=3;goto B5f480a;
case 0x5f480d:c.instructions+=2;goto B5f480d;
case 0x5f4810:c.instructions+=1;goto B5f4810;
case 0x5f4815:goto L5f4815;
case 0x5f4818:c.instructions+=4;goto B5f4818;
case 0x5f481a:c.instructions+=3;goto B5f481a;
case 0x5f481d:c.instructions+=2;goto B5f481d;
case 0x5f4820:c.instructions+=1;goto B5f4820;
case 0x5f4825:goto L5f4825;
case 0x5f482b:c.instructions+=2;goto B5f482b;
case 0x5f482c:c.instructions+=1;goto B5f482c;
case 0x5f4831:goto L5f4831;
case 0x5f4834:c.instructions+=4;goto B5f4834;
case 0x5f4838:c.instructions+=3;goto B5f4838;
case 0x5f483a:c.instructions+=2;goto B5f483a;
case 0x5f4842:c.instructions+=1;goto B5f4842;
case 0x5f4844:goto L5f4844;
case 0x5f4847:c.instructions+=8;goto B5f4847;
case 0x5f484a:c.instructions+=7;goto B5f484a;
case 0x5f484b:c.instructions+=6;goto B5f484b;
case 0x5f484e:c.instructions+=5;goto B5f484e;
case 0x5f484f:c.instructions+=4;goto B5f484f;
case 0x5f4850:c.instructions+=3;goto B5f4850;
case 0x5f4851:c.instructions+=2;goto B5f4851;
case 0x5f4853:c.instructions+=1;goto B5f4853;
case 0x5f4858:goto L5f4858;
case 0x5f485b:c.instructions+=3;goto B5f485b;
case 0x5f485e:c.instructions+=2;goto B5f485e;
case 0x5f4861:c.instructions+=1;goto B5f4861;
case 0x5f4866:goto L5f4866;
case 0x5f4869:c.instructions+=4;goto B5f4869;
case 0x5f486b:c.instructions+=3;goto B5f486b;
case 0x5f486e:c.instructions+=2;goto B5f486e;
case 0x5f4871:c.instructions+=1;goto B5f4871;
case 0x5f4873:goto L5f4873;
case 0x5f4875:c.instructions+=1;goto B5f4875;
case 0x5f487a:goto L5f487a;
case 0x5f487d:c.instructions+=4;goto B5f487d;
case 0x5f4881:c.instructions+=3;goto B5f4881;
case 0x5f4883:c.instructions+=2;goto B5f4883;
case 0x5f488b:c.instructions+=1;goto B5f488b;
case 0x5f488d:goto L5f488d;
case 0x5f488e:c.instructions+=2;goto B5f488e;
case 0x5f4890:c.instructions+=1;goto B5f4890;
case 0x5f4895:goto L5f4895;
case 0x5f4898:c.instructions+=3;goto B5f4898;
case 0x5f489b:c.instructions+=2;goto B5f489b;
case 0x5f489e:c.instructions+=1;goto B5f489e;
case 0x5f48a0:goto L5f48a0;
case 0x5f48a2:c.instructions+=4;goto B5f48a2;
case 0x5f48a5:c.instructions+=3;goto B5f48a5;
case 0x5f48a8:c.instructions+=2;goto B5f48a8;
case 0x5f48ab:c.instructions+=1;goto B5f48ab;
case 0x5f48ad:goto L5f48ad;
case 0x5f48ae:c.instructions+=2;goto B5f48ae;
case 0x5f48b3:c.instructions+=1;goto B5f48b3;
case 0x5f48b8:goto L5f48b8;
case 0x5f48bb:c.instructions+=4;goto B5f48bb;
case 0x5f48bf:c.instructions+=3;goto B5f48bf;
case 0x5f48c1:c.instructions+=2;goto B5f48c1;
case 0x5f48c9:c.instructions+=1;goto B5f48c9;
case 0x5f48cb:goto L5f48cb;
case 0x5f48ce:c.instructions+=8;goto B5f48ce;
case 0x5f48d1:c.instructions+=7;goto B5f48d1;
case 0x5f48d2:c.instructions+=6;goto B5f48d2;
case 0x5f48d5:c.instructions+=5;goto B5f48d5;
case 0x5f48d6:c.instructions+=4;goto B5f48d6;
case 0x5f48d7:c.instructions+=3;goto B5f48d7;
case 0x5f48d8:c.instructions+=2;goto B5f48d8;
case 0x5f48da:c.instructions+=1;goto B5f48da;
case 0x5f48df:goto L5f48df;
case 0x5f48e1:goto L5f48e1;
case 0x5f48e3:goto L5f48e3;
case 0x5f48e6:c.instructions+=2;goto B5f48e6;
case 0x5f48e9:c.instructions+=1;goto B5f48e9;
case 0x5f48ec:goto L5f48ec;
case 0x5f48f4:goto L5f48f4;
case 0x5f48f7:c.instructions+=2;goto B5f48f7;
case 0x5f48fa:c.instructions+=1;goto B5f48fa;
case 0x5f48ff:goto L5f48ff;
case 0x5f4902:c.instructions+=8;goto B5f4902;
case 0x5f4905:c.instructions+=7;goto B5f4905;
case 0x5f4908:c.instructions+=6;goto B5f4908;
case 0x5f490c:c.instructions+=5;goto B5f490c;
case 0x5f490f:c.instructions+=4;goto B5f490f;
case 0x5f4916:c.instructions+=3;goto B5f4916;
case 0x5f491a:c.instructions+=2;goto B5f491a;
case 0x5f491d:c.instructions+=1;goto B5f491d;
case 0x5f4924:goto L5f4924;
case 0x5f4928:c.instructions+=7;goto B5f4928;
case 0x5f4929:c.instructions+=6;goto B5f4929;
case 0x5f492a:c.instructions+=5;goto B5f492a;
case 0x5f492b:c.instructions+=4;goto B5f492b;
case 0x5f492c:c.instructions+=3;goto B5f492c;
case 0x5f4933:c.instructions+=2;goto B5f4933;
case 0x5f4936:c.instructions+=1;goto B5f4936;
case 0x5f4960:goto L5f4960;
case 0x5f4963:c.instructions+=2;goto B5f4963;
case 0x5f4965:c.instructions+=1;goto B5f4965;
case 0x5f4967:goto L5f4967;
case 0x5f496b:c.instructions+=5;goto B5f496b;
case 0x5f496d:c.instructions+=4;goto B5f496d;
case 0x5f496f:c.instructions+=3;goto B5f496f;
case 0x5f4970:c.instructions+=2;goto B5f4970;
case 0x5f4972:c.instructions+=1;goto B5f4972;
case 0x5f4975:goto L5f4975;
case 0x5f4978:goto L5f4978;
case 0x5f497b:c.instructions+=2;goto B5f497b;
case 0x5f497e:c.instructions+=1;goto B5f497e;
case 0x5f4980:goto L5f4980;
case 0x5f4983:c.instructions+=1;goto B5f4983;
case 0x5f4985:goto L5f4985;
case 0x5f4988:c.instructions+=3;goto B5f4988;
case 0x5f498a:c.instructions+=2;goto B5f498a;
case 0x5f4992:c.instructions+=1;goto B5f4992;
case 0x5f4994:goto L5f4994;
case 0x5f499c:goto L5f499c;
case 0x5f49b0:goto L5f49b0;
case 0x5f49b5:c.instructions+=2;goto B5f49b5;
case 0x5f49b7:c.instructions+=1;goto B5f49b7;
case 0x5f49b9:goto L5f49b9;
case 0x5f49be:c.instructions+=2;goto B5f49be;
case 0x5f49c0:c.instructions+=1;goto B5f49c0;
case 0x5f49c2:goto L5f49c2;
case 0x5f49c7:c.instructions+=1;goto B5f49c7;
case 0x5f49c9:goto L5f49c9;
case 0x5f49ce:c.instructions+=2;goto B5f49ce;
case 0x5f49d0:c.instructions+=1;goto B5f49d0;
case 0x5f49d2:goto L5f49d2;
case 0x5f49d7:goto L5f49d7;
case 0x5f49dc:c.instructions+=2;goto B5f49dc;
case 0x5f49de:c.instructions+=1;goto B5f49de;
case 0x5f49e0:goto L5f49e0;
case 0x5f49e2:c.instructions+=2;goto B5f49e2;
case 0x5f49e4:c.instructions+=1;goto B5f49e4;
case 0x5f49e9:goto L5f49e9;
case 0x5f49ec:goto L5f49ec;
case 0x5f49f0:goto L5f49f0;
case 0x5f49f1:c.instructions+=31;goto B5f49f1;
case 0x5f49f3:c.instructions+=30;goto B5f49f3;
case 0x5f49f6:c.instructions+=29;goto B5f49f6;
case 0x5f49fc:c.instructions+=28;goto B5f49fc;
case 0x5f49ff:c.instructions+=27;goto B5f49ff;
case 0x5f4a00:c.instructions+=26;goto B5f4a00;
case 0x5f4a01:c.instructions+=25;goto B5f4a01;
case 0x5f4a02:c.instructions+=24;goto B5f4a02;
case 0x5f4a04:c.instructions+=23;goto B5f4a04;
case 0x5f4a05:c.instructions+=22;goto B5f4a05;
case 0x5f4a09:c.instructions+=21;goto B5f4a09;
case 0x5f4a0a:c.instructions+=20;goto B5f4a0a;
case 0x5f4a0e:c.instructions+=19;goto B5f4a0e;
case 0x5f4a0f:c.instructions+=18;goto B5f4a0f;
case 0x5f4a16:c.instructions+=17;goto B5f4a16;
case 0x5f4a1e:c.instructions+=16;goto B5f4a1e;
case 0x5f4a26:c.instructions+=15;goto B5f4a26;
case 0x5f4a2e:c.instructions+=14;goto B5f4a2e;
case 0x5f4a36:c.instructions+=13;goto B5f4a36;
case 0x5f4a3e:c.instructions+=12;goto B5f4a3e;
case 0x5f4a46:c.instructions+=11;goto B5f4a46;
case 0x5f4a4e:c.instructions+=10;goto B5f4a4e;
case 0x5f4a56:c.instructions+=9;goto B5f4a56;
case 0x5f4a5e:c.instructions+=8;goto B5f4a5e;
case 0x5f4a66:c.instructions+=7;goto B5f4a66;
case 0x5f4a6e:c.instructions+=6;goto B5f4a6e;
case 0x5f4a76:c.instructions+=5;goto B5f4a76;
case 0x5f4a7e:c.instructions+=4;goto B5f4a7e;
case 0x5f4a86:c.instructions+=3;goto B5f4a86;
case 0x5f4a8e:c.instructions+=2;goto B5f4a8e;
case 0x5f4a96:c.instructions+=1;goto B5f4a96;
case 0x5f4a9b:goto L5f4a9b;
case 0x5f4a9e:c.instructions+=147;goto B5f4a9e;
case 0x5f4aa1:c.instructions+=146;goto B5f4aa1;
case 0x5f4aa3:c.instructions+=145;goto B5f4aa3;
case 0x5f4aa6:c.instructions+=144;goto B5f4aa6;
case 0x5f4aa9:c.instructions+=143;goto B5f4aa9;
case 0x5f4aad:c.instructions+=142;goto B5f4aad;
case 0x5f4ab1:c.instructions+=141;goto B5f4ab1;
case 0x5f4ab9:c.instructions+=140;goto B5f4ab9;
case 0x5f4abd:c.instructions+=139;goto B5f4abd;
case 0x5f4ac1:c.instructions+=138;goto B5f4ac1;
case 0x5f4ac4:c.instructions+=137;goto B5f4ac4;
case 0x5f4ac7:c.instructions+=136;goto B5f4ac7;
case 0x5f4acb:c.instructions+=135;goto B5f4acb;
case 0x5f4ace:c.instructions+=134;goto B5f4ace;
case 0x5f4ad0:c.instructions+=133;goto B5f4ad0;
case 0x5f4ad4:c.instructions+=132;goto B5f4ad4;
case 0x5f4ad7:c.instructions+=131;goto B5f4ad7;
case 0x5f4ad9:c.instructions+=130;goto B5f4ad9;
case 0x5f4add:c.instructions+=129;goto B5f4add;
case 0x5f4ae1:c.instructions+=128;goto B5f4ae1;
case 0x5f4ae4:c.instructions+=127;goto B5f4ae4;
case 0x5f4ae8:c.instructions+=126;goto B5f4ae8;
case 0x5f4aeb:c.instructions+=125;goto B5f4aeb;
case 0x5f4aed:c.instructions+=124;goto B5f4aed;
case 0x5f4af1:c.instructions+=123;goto B5f4af1;
case 0x5f4af4:c.instructions+=122;goto B5f4af4;
case 0x5f4af6:c.instructions+=121;goto B5f4af6;
case 0x5f4afa:c.instructions+=120;goto B5f4afa;
case 0x5f4afe:c.instructions+=119;goto B5f4afe;
case 0x5f4b01:c.instructions+=118;goto B5f4b01;
case 0x5f4b05:c.instructions+=117;goto B5f4b05;
case 0x5f4b08:c.instructions+=116;goto B5f4b08;
case 0x5f4b0a:c.instructions+=115;goto B5f4b0a;
case 0x5f4b0e:c.instructions+=114;goto B5f4b0e;
case 0x5f4b11:c.instructions+=113;goto B5f4b11;
case 0x5f4b13:c.instructions+=112;goto B5f4b13;
case 0x5f4b17:c.instructions+=111;goto B5f4b17;
case 0x5f4b1b:c.instructions+=110;goto B5f4b1b;
case 0x5f4b1f:c.instructions+=109;goto B5f4b1f;
case 0x5f4b21:c.instructions+=108;goto B5f4b21;
case 0x5f4b28:c.instructions+=107;goto B5f4b28;
case 0x5f4b2f:c.instructions+=106;goto B5f4b2f;
case 0x5f4b36:c.instructions+=105;goto B5f4b36;
case 0x5f4b3a:c.instructions+=104;goto B5f4b3a;
case 0x5f4b3d:c.instructions+=103;goto B5f4b3d;
case 0x5f4b41:c.instructions+=102;goto B5f4b41;
case 0x5f4b44:c.instructions+=101;goto B5f4b44;
case 0x5f4b46:c.instructions+=100;goto B5f4b46;
case 0x5f4b4a:c.instructions+=99;goto B5f4b4a;
case 0x5f4b4d:c.instructions+=98;goto B5f4b4d;
case 0x5f4b4f:c.instructions+=97;goto B5f4b4f;
case 0x5f4b53:c.instructions+=96;goto B5f4b53;
case 0x5f4b57:c.instructions+=95;goto B5f4b57;
case 0x5f4b5a:c.instructions+=94;goto B5f4b5a;
case 0x5f4b5e:c.instructions+=93;goto B5f4b5e;
case 0x5f4b61:c.instructions+=92;goto B5f4b61;
case 0x5f4b63:c.instructions+=91;goto B5f4b63;
case 0x5f4b67:c.instructions+=90;goto B5f4b67;
case 0x5f4b6a:c.instructions+=89;goto B5f4b6a;
case 0x5f4b6c:c.instructions+=88;goto B5f4b6c;
case 0x5f4b70:c.instructions+=87;goto B5f4b70;
case 0x5f4b74:c.instructions+=86;goto B5f4b74;
case 0x5f4b77:c.instructions+=85;goto B5f4b77;
case 0x5f4b7b:c.instructions+=84;goto B5f4b7b;
case 0x5f4b7e:c.instructions+=83;goto B5f4b7e;
case 0x5f4b80:c.instructions+=82;goto B5f4b80;
case 0x5f4b84:c.instructions+=81;goto B5f4b84;
case 0x5f4b87:c.instructions+=80;goto B5f4b87;
case 0x5f4b89:c.instructions+=79;goto B5f4b89;
case 0x5f4b8d:c.instructions+=78;goto B5f4b8d;
case 0x5f4b91:c.instructions+=77;goto B5f4b91;
case 0x5f4b95:c.instructions+=76;goto B5f4b95;
case 0x5f4b97:c.instructions+=75;goto B5f4b97;
case 0x5f4b9e:c.instructions+=74;goto B5f4b9e;
case 0x5f4ba5:c.instructions+=73;goto B5f4ba5;
case 0x5f4bac:c.instructions+=72;goto B5f4bac;
case 0x5f4bb0:c.instructions+=71;goto B5f4bb0;
case 0x5f4bb3:c.instructions+=70;goto B5f4bb3;
case 0x5f4bb7:c.instructions+=69;goto B5f4bb7;
case 0x5f4bba:c.instructions+=68;goto B5f4bba;
case 0x5f4bbc:c.instructions+=67;goto B5f4bbc;
case 0x5f4bc0:c.instructions+=66;goto B5f4bc0;
case 0x5f4bc3:c.instructions+=65;goto B5f4bc3;
case 0x5f4bc5:c.instructions+=64;goto B5f4bc5;
case 0x5f4bc9:c.instructions+=63;goto B5f4bc9;
case 0x5f4bcd:c.instructions+=62;goto B5f4bcd;
case 0x5f4bd0:c.instructions+=61;goto B5f4bd0;
case 0x5f4bd4:c.instructions+=60;goto B5f4bd4;
case 0x5f4bd7:c.instructions+=59;goto B5f4bd7;
case 0x5f4bd9:c.instructions+=58;goto B5f4bd9;
case 0x5f4bdd:c.instructions+=57;goto B5f4bdd;
case 0x5f4be0:c.instructions+=56;goto B5f4be0;
case 0x5f4be2:c.instructions+=55;goto B5f4be2;
case 0x5f4be6:c.instructions+=54;goto B5f4be6;
case 0x5f4bea:c.instructions+=53;goto B5f4bea;
case 0x5f4bed:c.instructions+=52;goto B5f4bed;
case 0x5f4bf1:c.instructions+=51;goto B5f4bf1;
case 0x5f4bf4:c.instructions+=50;goto B5f4bf4;
case 0x5f4bf6:c.instructions+=49;goto B5f4bf6;
case 0x5f4bfa:c.instructions+=48;goto B5f4bfa;
case 0x5f4bfd:c.instructions+=47;goto B5f4bfd;
case 0x5f4bff:c.instructions+=46;goto B5f4bff;
case 0x5f4c03:c.instructions+=45;goto B5f4c03;
case 0x5f4c07:c.instructions+=44;goto B5f4c07;
case 0x5f4c0b:c.instructions+=43;goto B5f4c0b;
case 0x5f4c0d:c.instructions+=42;goto B5f4c0d;
case 0x5f4c14:c.instructions+=41;goto B5f4c14;
case 0x5f4c1b:c.instructions+=40;goto B5f4c1b;
case 0x5f4c22:c.instructions+=39;goto B5f4c22;
case 0x5f4c26:c.instructions+=38;goto B5f4c26;
case 0x5f4c2c:c.instructions+=37;goto B5f4c2c;
case 0x5f4c30:c.instructions+=36;goto B5f4c30;
case 0x5f4c36:c.instructions+=35;goto B5f4c36;
case 0x5f4c38:c.instructions+=34;goto B5f4c38;
case 0x5f4c3c:c.instructions+=33;goto B5f4c3c;
case 0x5f4c42:c.instructions+=32;goto B5f4c42;
case 0x5f4c44:c.instructions+=31;goto B5f4c44;
case 0x5f4c48:c.instructions+=30;goto B5f4c48;
case 0x5f4c4c:c.instructions+=29;goto B5f4c4c;
case 0x5f4c52:c.instructions+=28;goto B5f4c52;
case 0x5f4c56:c.instructions+=27;goto B5f4c56;
case 0x5f4c5c:c.instructions+=26;goto B5f4c5c;
case 0x5f4c5e:c.instructions+=25;goto B5f4c5e;
case 0x5f4c62:c.instructions+=24;goto B5f4c62;
case 0x5f4c68:c.instructions+=23;goto B5f4c68;
case 0x5f4c6a:c.instructions+=22;goto B5f4c6a;
case 0x5f4c6e:c.instructions+=21;goto B5f4c6e;
case 0x5f4c72:c.instructions+=20;goto B5f4c72;
case 0x5f4c78:c.instructions+=19;goto B5f4c78;
case 0x5f4c7c:c.instructions+=18;goto B5f4c7c;
case 0x5f4c82:c.instructions+=17;goto B5f4c82;
case 0x5f4c84:c.instructions+=16;goto B5f4c84;
case 0x5f4c88:c.instructions+=15;goto B5f4c88;
case 0x5f4c8e:c.instructions+=14;goto B5f4c8e;
case 0x5f4c90:c.instructions+=13;goto B5f4c90;
case 0x5f4c98:c.instructions+=12;goto B5f4c98;
case 0x5f4ca0:c.instructions+=11;goto B5f4ca0;
case 0x5f4ca2:c.instructions+=10;goto B5f4ca2;
case 0x5f4ca4:c.instructions+=9;goto B5f4ca4;
case 0x5f4cab:c.instructions+=8;goto B5f4cab;
case 0x5f4caf:c.instructions+=7;goto B5f4caf;
case 0x5f4cb3:c.instructions+=6;goto B5f4cb3;
case 0x5f4cb7:c.instructions+=5;goto B5f4cb7;
case 0x5f4cb9:c.instructions+=4;goto B5f4cb9;
case 0x5f4cc0:c.instructions+=3;goto B5f4cc0;
case 0x5f4cc7:c.instructions+=2;goto B5f4cc7;
case 0x5f4cce:c.instructions+=1;goto B5f4cce;
case 0x5f4cd0:goto L5f4cd0;
case 0x5f4cd4:c.instructions+=7;goto B5f4cd4;
case 0x5f4cd5:c.instructions+=6;goto B5f4cd5;
case 0x5f4cd7:c.instructions+=5;goto B5f4cd7;
case 0x5f4cd9:c.instructions+=4;goto B5f4cd9;
case 0x5f4cdc:c.instructions+=3;goto B5f4cdc;
case 0x5f4cdd:c.instructions+=2;goto B5f4cdd;
case 0x5f4ce0:c.instructions+=1;goto B5f4ce0;
case 0x5f4ce5:goto L5f4ce5;
case 0x5f4ce9:c.instructions+=15;goto B5f4ce9;
case 0x5f4cec:c.instructions+=14;goto B5f4cec;
case 0x5f4cf0:c.instructions+=13;goto B5f4cf0;
case 0x5f4cf2:c.instructions+=12;goto B5f4cf2;
case 0x5f4cf5:c.instructions+=11;goto B5f4cf5;
case 0x5f4cf9:c.instructions+=10;goto B5f4cf9;
case 0x5f4cfc:c.instructions+=9;goto B5f4cfc;
case 0x5f4d00:c.instructions+=8;goto B5f4d00;
case 0x5f4d02:c.instructions+=7;goto B5f4d02;
case 0x5f4d05:c.instructions+=6;goto B5f4d05;
case 0x5f4d0b:c.instructions+=5;goto B5f4d0b;
case 0x5f4d0f:c.instructions+=4;goto B5f4d0f;
case 0x5f4d12:c.instructions+=3;goto B5f4d12;
case 0x5f4d16:c.instructions+=2;goto B5f4d16;
case 0x5f4d1a:c.instructions+=1;goto B5f4d1a;
case 0x5f4d1c:goto L5f4d1c;
case 0x5f4d1e:c.instructions+=18;goto B5f4d1e;
case 0x5f4d22:c.instructions+=17;goto B5f4d22;
case 0x5f4d26:c.instructions+=16;goto B5f4d26;
case 0x5f4d2a:c.instructions+=15;goto B5f4d2a;
case 0x5f4d2e:c.instructions+=14;goto B5f4d2e;
case 0x5f4d35:c.instructions+=13;goto B5f4d35;
case 0x5f4d39:c.instructions+=12;goto B5f4d39;
case 0x5f4d40:c.instructions+=11;goto B5f4d40;
case 0x5f4d44:c.instructions+=10;goto B5f4d44;
case 0x5f4d4b:c.instructions+=9;goto B5f4d4b;
case 0x5f4d4f:c.instructions+=8;goto B5f4d4f;
case 0x5f4d56:c.instructions+=7;goto B5f4d56;
case 0x5f4d5a:c.instructions+=6;goto B5f4d5a;
case 0x5f4d61:c.instructions+=5;goto B5f4d61;
case 0x5f4d65:c.instructions+=4;goto B5f4d65;
case 0x5f4d6c:c.instructions+=3;goto B5f4d6c;
case 0x5f4d73:c.instructions+=2;goto B5f4d73;
case 0x5f4d7a:c.instructions+=1;goto B5f4d7a;
case 0x5f4d80:goto L5f4d80;
case 0x5f4d82:c.instructions+=62;goto B5f4d82;
case 0x5f4d89:c.instructions+=61;goto B5f4d89;
case 0x5f4d90:c.instructions+=60;goto B5f4d90;
case 0x5f4d91:c.instructions+=59;goto B5f4d91;
case 0x5f4d98:c.instructions+=58;goto B5f4d98;
case 0x5f4d9f:c.instructions+=57;goto B5f4d9f;
case 0x5f4da6:c.instructions+=56;goto B5f4da6;
case 0x5f4dad:c.instructions+=55;goto B5f4dad;
case 0x5f4db4:c.instructions+=54;goto B5f4db4;
case 0x5f4dbb:c.instructions+=53;goto B5f4dbb;
case 0x5f4dc2:c.instructions+=52;goto B5f4dc2;
case 0x5f4dc9:c.instructions+=51;goto B5f4dc9;
case 0x5f4dd0:c.instructions+=50;goto B5f4dd0;
case 0x5f4dd7:c.instructions+=49;goto B5f4dd7;
case 0x5f4dde:c.instructions+=48;goto B5f4dde;
case 0x5f4de5:c.instructions+=47;goto B5f4de5;
case 0x5f4dec:c.instructions+=46;goto B5f4dec;
case 0x5f4df3:c.instructions+=45;goto B5f4df3;
case 0x5f4dfa:c.instructions+=44;goto B5f4dfa;
case 0x5f4e01:c.instructions+=43;goto B5f4e01;
case 0x5f4e08:c.instructions+=42;goto B5f4e08;
case 0x5f4e0f:c.instructions+=41;goto B5f4e0f;
case 0x5f4e16:c.instructions+=40;goto B5f4e16;
case 0x5f4e1d:c.instructions+=39;goto B5f4e1d;
case 0x5f4e24:c.instructions+=38;goto B5f4e24;
case 0x5f4e2b:c.instructions+=37;goto B5f4e2b;
case 0x5f4e32:c.instructions+=36;goto B5f4e32;
case 0x5f4e39:c.instructions+=35;goto B5f4e39;
case 0x5f4e40:c.instructions+=34;goto B5f4e40;
case 0x5f4e47:c.instructions+=33;goto B5f4e47;
case 0x5f4e4b:c.instructions+=32;goto B5f4e4b;
case 0x5f4e52:c.instructions+=31;goto B5f4e52;
case 0x5f4e59:c.instructions+=30;goto B5f4e59;
case 0x5f4e5d:c.instructions+=29;goto B5f4e5d;
case 0x5f4e64:c.instructions+=28;goto B5f4e64;
case 0x5f4e6b:c.instructions+=27;goto B5f4e6b;
case 0x5f4e6f:c.instructions+=26;goto B5f4e6f;
case 0x5f4e71:c.instructions+=25;goto B5f4e71;
case 0x5f4e78:c.instructions+=24;goto B5f4e78;
case 0x5f4e7f:c.instructions+=23;goto B5f4e7f;
case 0x5f4e86:c.instructions+=22;goto B5f4e86;
case 0x5f4e8d:c.instructions+=21;goto B5f4e8d;
case 0x5f4e94:c.instructions+=20;goto B5f4e94;
case 0x5f4e9b:c.instructions+=19;goto B5f4e9b;
case 0x5f4e9d:c.instructions+=18;goto B5f4e9d;
case 0x5f4ea4:c.instructions+=17;goto B5f4ea4;
case 0x5f4eab:c.instructions+=16;goto B5f4eab;
case 0x5f4eb2:c.instructions+=15;goto B5f4eb2;
case 0x5f4eb9:c.instructions+=14;goto B5f4eb9;
case 0x5f4eba:c.instructions+=13;goto B5f4eba;
case 0x5f4ebe:c.instructions+=12;goto B5f4ebe;
case 0x5f4ec5:c.instructions+=11;goto B5f4ec5;
case 0x5f4ec9:c.instructions+=10;goto B5f4ec9;
case 0x5f4ed0:c.instructions+=9;goto B5f4ed0;
case 0x5f4ed4:c.instructions+=8;goto B5f4ed4;
case 0x5f4edb:c.instructions+=7;goto B5f4edb;
case 0x5f4ee2:c.instructions+=6;goto B5f4ee2;
case 0x5f4ee9:c.instructions+=5;goto B5f4ee9;
case 0x5f4eeb:c.instructions+=4;goto B5f4eeb;
case 0x5f4ef2:c.instructions+=3;goto B5f4ef2;
case 0x5f4ef9:c.instructions+=2;goto B5f4ef9;
case 0x5f4f00:c.instructions+=1;goto B5f4f00;
case 0x5f4f05:goto L5f4f05;
case 0x5f4f0c:c.instructions+=4;goto B5f4f0c;
case 0x5f4f0d:c.instructions+=3;goto B5f4f0d;
case 0x5f4f14:c.instructions+=2;goto B5f4f14;
case 0x5f4f15:c.instructions+=1;goto B5f4f15;
case 0x5f4f1a:goto L5f4f1a;
case 0x5f4f21:c.instructions+=6;goto B5f4f21;
case 0x5f4f22:c.instructions+=5;goto B5f4f22;
case 0x5f4f29:c.instructions+=4;goto B5f4f29;
case 0x5f4f2a:c.instructions+=3;goto B5f4f2a;
case 0x5f4f31:c.instructions+=2;goto B5f4f31;
case 0x5f4f32:c.instructions+=1;goto B5f4f32;
case 0x5f4f37:goto L5f4f37;
case 0x5f4f3e:c.instructions+=5;goto B5f4f3e;
case 0x5f4f41:c.instructions+=4;goto B5f4f41;
case 0x5f4f43:c.instructions+=3;goto B5f4f43;
case 0x5f4f46:c.instructions+=2;goto B5f4f46;
case 0x5f4f48:c.instructions+=1;goto B5f4f48;
case 0x5f4f4a:goto L5f4f4a;
case 0x5f4f4c:c.instructions+=1;goto B5f4f4c;
case 0x5f4f4f:goto L5f4f4f;
case 0x5f4f51:c.instructions+=1;goto B5f4f51;
case 0x5f4f53:goto L5f4f53;
case 0x5f4f56:c.instructions+=2;goto B5f4f56;
case 0x5f4f58:c.instructions+=1;goto B5f4f58;
case 0x5f4f5b:goto L5f4f5b;
case 0x5f4f60:c.instructions+=1;goto B5f4f60;
case 0x5f4f62:goto L5f4f62;
case 0x5f4f65:goto L5f4f65;
case 0x5f4f69:c.instructions+=14;goto B5f4f69;
case 0x5f4f6f:c.instructions+=13;goto B5f4f6f;
case 0x5f4f72:c.instructions+=12;goto B5f4f72;
case 0x5f4f75:c.instructions+=11;goto B5f4f75;
case 0x5f4f7c:c.instructions+=10;goto B5f4f7c;
case 0x5f4f7e:c.instructions+=9;goto B5f4f7e;
case 0x5f4f80:c.instructions+=8;goto B5f4f80;
case 0x5f4f82:c.instructions+=7;goto B5f4f82;
case 0x5f4f84:c.instructions+=6;goto B5f4f84;
case 0x5f4f88:c.instructions+=5;goto B5f4f88;
case 0x5f4f8e:c.instructions+=4;goto B5f4f8e;
case 0x5f4f90:c.instructions+=3;goto B5f4f90;
case 0x5f4f93:c.instructions+=2;goto B5f4f93;
case 0x5f4f9a:c.instructions+=1;goto B5f4f9a;
case 0x5f4f9c:goto L5f4f9c;
case 0x5f4f9e:goto L5f4f9e;
case 0x5f4fa1:c.instructions+=24;goto B5f4fa1;
case 0x5f4fa8:c.instructions+=23;goto B5f4fa8;
case 0x5f4faf:c.instructions+=22;goto B5f4faf;
case 0x5f4fb1:c.instructions+=21;goto B5f4fb1;
case 0x5f4fb8:c.instructions+=20;goto B5f4fb8;
case 0x5f4fbb:c.instructions+=19;goto B5f4fbb;
case 0x5f4fbe:c.instructions+=18;goto B5f4fbe;
case 0x5f4fc5:c.instructions+=17;goto B5f4fc5;
case 0x5f4fc8:c.instructions+=16;goto B5f4fc8;
case 0x5f4fcb:c.instructions+=15;goto B5f4fcb;
case 0x5f4fd2:c.instructions+=14;goto B5f4fd2;
case 0x5f4fd5:c.instructions+=13;goto B5f4fd5;
case 0x5f4fdc:c.instructions+=12;goto B5f4fdc;
case 0x5f4fdf:c.instructions+=11;goto B5f4fdf;
case 0x5f4fe6:c.instructions+=10;goto B5f4fe6;
case 0x5f4fe9:c.instructions+=9;goto B5f4fe9;
case 0x5f4fec:c.instructions+=8;goto B5f4fec;
case 0x5f4fed:c.instructions+=7;goto B5f4fed;
case 0x5f4ff0:c.instructions+=6;goto B5f4ff0;
case 0x5f4ff7:c.instructions+=5;goto B5f4ff7;
case 0x5f4ff8:c.instructions+=4;goto B5f4ff8;
case 0x5f4ffb:c.instructions+=3;goto B5f4ffb;
case 0x5f4ffe:c.instructions+=2;goto B5f4ffe;
case 0x5f4fff:c.instructions+=1;goto B5f4fff;
default:missing_instruction(c.pc);}
B5f4000:L5f4000:{c.instructions+=5;NFSU2_TR(0x5f4000);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4004:{NFSU2_TR(0x5f4004);
{u32 ea_=u32(u32(8017308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f400a:{NFSU2_TR(0x5f400a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f400c:{NFSU2_TR(0x5f400c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f400f:{NFSU2_TR(0x5f400f);
if(r1(R+514)){{goto L5f403f;}}
}
B5f4011:L5f4011:{c.instructions+=2;NFSU2_TR(0x5f4011);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5f4014:{NFSU2_TR(0x5f4014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4019ull));
TAIL_STATIC(0x591d90u,591);
}
B5f4019:L5f4019:{c.instructions+=6;NFSU2_TR(0x5f4019);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f401f:{NFSU2_TR(0x5f401f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f4021:{NFSU2_TR(0x5f4021);
{u32 ea_=u32(u32(8017288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f4027:{NFSU2_TR(0x5f4027);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f4029:{NFSU2_TR(0x5f4029);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f402c:{NFSU2_TR(0x5f402c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4039;}}
}
B5f402e:L5f402e:{c.instructions+=2;NFSU2_TR(0x5f402e);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f4033:{NFSU2_TR(0x5f4033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4039:L5f4039:{c.instructions+=1;NFSU2_TR(0x5f4039);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B5f403f:L5f403f:{c.instructions+=11;NFSU2_TR(0x5f403f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4045:{NFSU2_TR(0x5f4045);
__builtin_memmove((R+4),(R+28),4);
}
B5f4047:{NFSU2_TR(0x5f4047);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5f4049:{NFSU2_TR(0x5f4049);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f404d:{NFSU2_TR(0x5f404d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f4051:{NFSU2_TR(0x5f4051);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4057:{NFSU2_TR(0x5f4057);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f405b:{NFSU2_TR(0x5f405b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f4061:{NFSU2_TR(0x5f4061);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f4063:{NFSU2_TR(0x5f4063);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f4066:{NFSU2_TR(0x5f4066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f40c8;}}
}
B5f4068:L5f4068:{c.instructions+=5;NFSU2_TR(0x5f4068);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f406e:{NFSU2_TR(0x5f406e);
{u32 ea_=u32(u32(8017304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f4074:{NFSU2_TR(0x5f4074);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f4076:{NFSU2_TR(0x5f4076);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f4079:{NFSU2_TR(0x5f4079);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f40ad;}}
}
B5f407b:L5f407b:{c.instructions+=5;NFSU2_TR(0x5f407b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f407f:{NFSU2_TR(0x5f407f);
{u32 ea_=u32(u32(8017308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f4085:{NFSU2_TR(0x5f4085);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f4087:{NFSU2_TR(0x5f4087);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f408a:{NFSU2_TR(0x5f408a);
if(r1(R+514)){{goto L5f40ad;}}
}
B5f408c:L5f408c:{c.instructions+=7;NFSU2_TR(0x5f408c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4090:{NFSU2_TR(0x5f4090);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4096:{NFSU2_TR(0x5f4096);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f409a:{NFSU2_TR(0x5f409a);
{u32 ea_=u32(u32(8017292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f40a0:{NFSU2_TR(0x5f40a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f40a2:{NFSU2_TR(0x5f40a2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f40a5:{NFSU2_TR(0x5f40a5);
if(r1(R+514)){{goto L5f40ad;}}
}
B5f40a7:L5f40a7:{c.instructions+=1;NFSU2_TR(0x5f40a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f40ad:L5f40ad:{c.instructions+=5;NFSU2_TR(0x5f40ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f40b1:{NFSU2_TR(0x5f40b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f40b7:{NFSU2_TR(0x5f40b7);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f40bc:{NFSU2_TR(0x5f40bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f40c2:{NFSU2_TR(0x5f40c2);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B5f40c8:L5f40c8:{c.instructions+=5;NFSU2_TR(0x5f40c8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f40cc:{NFSU2_TR(0x5f40cc);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f40d2:{NFSU2_TR(0x5f40d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f40d4:{NFSU2_TR(0x5f40d4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f40d7:{NFSU2_TR(0x5f40d7);
if(r1(R+514)){{goto L5f40fb;}}
}
B5f40d9:L5f40d9:{c.instructions+=6;NFSU2_TR(0x5f40d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f40dc:{NFSU2_TR(0x5f40dc);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f40e2:{NFSU2_TR(0x5f40e2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f40e8:{NFSU2_TR(0x5f40e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f40ea:{NFSU2_TR(0x5f40ea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f40ed:{NFSU2_TR(0x5f40ed);
if(r1(R+514)){{goto L5f40fb;}}
}
B5f40ef:L5f40ef:{c.instructions+=2;NFSU2_TR(0x5f40ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f40f5:{NFSU2_TR(0x5f40f5);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B5f40fb:L5f40fb:{c.instructions+=4;NFSU2_TR(0x5f40fb);
{u32 ea_=u32(u32(8017300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4101:{NFSU2_TR(0x5f4101);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4107:{NFSU2_TR(0x5f4107);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f410d:{NFSU2_TR(0x5f410d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4112ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f4112:L5f4112:{c.instructions+=5;NFSU2_TR(0x5f4112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4118:{NFSU2_TR(0x5f4118);
__builtin_memmove((R+8),(R+28),4);
}
B5f411a:{NFSU2_TR(0x5f411a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B5f411c:{NFSU2_TR(0x5f411c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f411e:{NFSU2_TR(0x5f411e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f4130;}}
}
B5f4120:L5f4120:{c.instructions+=2;NFSU2_TR(0x5f4120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f412a:{NFSU2_TR(0x5f412a);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B5f4130:L5f4130:{c.instructions+=3;NFSU2_TR(0x5f4130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4136:{NFSU2_TR(0x5f4136);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4138:{NFSU2_TR(0x5f4138);
if(r1(R+518)){{goto L5f416d;}}
}
B5f413a:L5f413a:{c.instructions+=2;NFSU2_TR(0x5f413a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f413f:{NFSU2_TR(0x5f413f);
if(r1(R+518)){{goto L5f416d;}}
}
B5f4141:L5f4141:{c.instructions+=2;NFSU2_TR(0x5f4141);
__builtin_memmove((R+4),(R+24),4);
}
B5f4143:{NFSU2_TR(0x5f4143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4148ull));
TAIL_STATIC(0x5f3f00u,5f3);
}
B5f4148:L5f4148:{c.instructions+=2;NFSU2_TR(0x5f4148);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f414a:{NFSU2_TR(0x5f414a);
if(r1(R+518)){{goto L5f416d;}}
}
B5f414c:L5f414c:{c.instructions+=3;NFSU2_TR(0x5f414c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4152:{NFSU2_TR(0x5f4152);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4154:{NFSU2_TR(0x5f4154);
if(r1(R+518)){{goto L5f415d;}}
}
B5f4156:L5f4156:{c.instructions+=2;NFSU2_TR(0x5f4156);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f415b:{NFSU2_TR(0x5f415b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f41a9;}}
}
B5f415d:L5f415d:{c.instructions+=5;NFSU2_TR(0x5f415d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f415e:{NFSU2_TR(0x5f415e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4168:{NFSU2_TR(0x5f4168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f4169:{NFSU2_TR(0x5f4169);
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
B5f416c:{NFSU2_TR(0x5f416c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f416d:L5f416d:{c.instructions+=3;NFSU2_TR(0x5f416d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4173:{NFSU2_TR(0x5f4173);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4175:{NFSU2_TR(0x5f4175);
if(r1(R+518)){{goto L5f41a9;}}
}
B5f4177:L5f4177:{c.instructions+=2;NFSU2_TR(0x5f4177);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f417c:{NFSU2_TR(0x5f417c);
if(r1(R+518)){{goto L5f41a9;}}
}
B5f417e:L5f417e:{c.instructions+=4;NFSU2_TR(0x5f417e);
{u32 ea_=u32(u32(8017296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4184:{NFSU2_TR(0x5f4184);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f418a:{NFSU2_TR(0x5f418a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4190:{NFSU2_TR(0x5f4190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4195ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f4195:L5f4195:{c.instructions+=3;NFSU2_TR(0x5f4195);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B5f419b:{NFSU2_TR(0x5f419b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f419d:{NFSU2_TR(0x5f419d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f41a9;}}
}
B5f419f:L5f419f:{c.instructions+=1;NFSU2_TR(0x5f419f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f41a9:L5f41a9:{c.instructions+=4;NFSU2_TR(0x5f41a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f41aa:{NFSU2_TR(0x5f41aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f41ab:{NFSU2_TR(0x5f41ab);
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
B5f41ae:{NFSU2_TR(0x5f41ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f41b0:L5f41b0:{c.instructions+=3;NFSU2_TR(0x5f41b0);
__builtin_memmove((R+0),gp(0x89cf69),1);
}
B5f41b5:{NFSU2_TR(0x5f41b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f41b7:{NFSU2_TR(0x5f41b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f41cb;}}
}
B5f41b9:L5f41b9:{c.instructions+=3;NFSU2_TR(0x5f41b9);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5f41be:{NFSU2_TR(0x5f41be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f41c0:{NFSU2_TR(0x5f41c0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f41cb;}}
}
B5f41c2:L5f41c2:{c.instructions+=3;NFSU2_TR(0x5f41c2);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5f41c7:{NFSU2_TR(0x5f41c7);
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
B5f41c9:{NFSU2_TR(0x5f41c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f41d4;}}
}
B5f41cb:L5f41cb:{c.instructions+=3;NFSU2_TR(0x5f41cb);
__builtin_memmove((R+0),gp(0x89cf4c),4);
}
B5f41d0:{NFSU2_TR(0x5f41d0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x12ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x12ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f41d3:{NFSU2_TR(0x5f41d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f41d4:L5f41d4:{c.instructions+=2;NFSU2_TR(0x5f41d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f41d7:{NFSU2_TR(0x5f41d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f41e0:L5f41e0:{c.instructions+=5;NFSU2_TR(0x5f41e0);
__builtin_memmove((R+0),gp(0x8900dc),4);
}
B5f41e5:{NFSU2_TR(0x5f41e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f41e6:{NFSU2_TR(0x5f41e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f41e7:{NFSU2_TR(0x5f41e7);
__builtin_memmove((R+24),(R+4),4);
}
B5f41e9:{NFSU2_TR(0x5f41e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f41eeull));
TAIL_STATIC(0x440e50u,440);
}
B5f41ee:L5f41ee:{c.instructions+=3;NFSU2_TR(0x5f41ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f41f1:{NFSU2_TR(0x5f41f1);
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
B5f41f3:{NFSU2_TR(0x5f41f3);
if(r1(R+518)){{goto L5f4217;}}
}
B5f41f5:L5f41f5:{c.instructions+=12;NFSU2_TR(0x5f41f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f41f9:{NFSU2_TR(0x5f41f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f41fd:{NFSU2_TR(0x5f41fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4200:{NFSU2_TR(0x5f4200);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4203:{NFSU2_TR(0x5f4203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4206:{NFSU2_TR(0x5f4206);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f4209:{NFSU2_TR(0x5f4209);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5f420b:{NFSU2_TR(0x5f420b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f420e:{NFSU2_TR(0x5f420e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4211:{NFSU2_TR(0x5f4211);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f4213:{NFSU2_TR(0x5f4213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f4214:{NFSU2_TR(0x5f4214);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4217:L5f4217:{c.instructions+=9;NFSU2_TR(0x5f4217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f421a:{NFSU2_TR(0x5f421a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f421d:{NFSU2_TR(0x5f421d);
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
B5f421f:{NFSU2_TR(0x5f421f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5f4221:{NFSU2_TR(0x5f4221);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4224:{NFSU2_TR(0x5f4224);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4227:{NFSU2_TR(0x5f4227);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f4229:{NFSU2_TR(0x5f4229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f422a:{NFSU2_TR(0x5f422a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4230:L5f4230:{c.instructions+=4;NFSU2_TR(0x5f4230);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4234:{NFSU2_TR(0x5f4234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4235:{NFSU2_TR(0x5f4235);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4237:{NFSU2_TR(0x5f4237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f423cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f41e0u);}goto L5f41e0;}
}
B5f423c:L5f423c:{c.instructions+=1;NFSU2_TR(0x5f423c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4240:L5f4240:{c.instructions+=4;NFSU2_TR(0x5f4240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4244:{NFSU2_TR(0x5f4244);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4245:{NFSU2_TR(0x5f4245);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4247:{NFSU2_TR(0x5f4247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f424cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f41e0u);}goto L5f41e0;}
}
B5f424c:L5f424c:{c.instructions+=1;NFSU2_TR(0x5f424c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4250:L5f4250:{c.instructions+=14;NFSU2_TR(0x5f4250);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4252:{NFSU2_TR(0x5f4252);
u8 U[4];
w4(U+0,u32(0x779b08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4257:{NFSU2_TR(0x5f4257);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f425d:{NFSU2_TR(0x5f425d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f425e:{NFSU2_TR(0x5f425e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4265:{NFSU2_TR(0x5f4265);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4266:{NFSU2_TR(0x5f4266);
__builtin_memmove((R+0),gp(0x89e808),4);
}
B5f426b:{NFSU2_TR(0x5f426b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f426c:{NFSU2_TR(0x5f426c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f426d:{NFSU2_TR(0x5f426d);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B5f4270:{NFSU2_TR(0x5f4270);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4272:{NFSU2_TR(0x5f4272);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4273:{NFSU2_TR(0x5f4273);
w4(R+28,u32(0x1ull));
}
B5f4278:{NFSU2_TR(0x5f4278);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f4293;}}
}
B5f427a:L5f427a:{c.instructions+=3;NFSU2_TR(0x5f427a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f427b:{NFSU2_TR(0x5f427b);
w4(R+4,u32(0x89e7a0ull));
}
B5f4280:{NFSU2_TR(0x5f4280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4285ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5f4285:L5f4285:{c.instructions+=2;NFSU2_TR(0x5f4285);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4287:{NFSU2_TR(0x5f4287);
if(r1(R+518)){{goto L5f4293;}}
}
B5f4289:L5f4289:{c.instructions+=2;NFSU2_TR(0x5f4289);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f428c:{NFSU2_TR(0x5f428c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4293;}}
}
B5f428e:L5f428e:{c.instructions+=2;NFSU2_TR(0x5f428e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f4291:{NFSU2_TR(0x5f4291);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f429c;}}
}
B5f4293:L5f4293:{c.instructions+=3;NFSU2_TR(0x5f4293);
__builtin_memmove((R+0),gp(0x89e7ac),1);
}
B5f4298:{NFSU2_TR(0x5f4298);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f429a:{NFSU2_TR(0x5f429a);
if(r1(R+518)){{goto L5f42cd;}}
}
B5f429c:L5f429c:{c.instructions+=3;NFSU2_TR(0x5f429c);
__builtin_memmove((R+24),gp(0x89e7e8),4);
}
B5f42a2:{NFSU2_TR(0x5f42a2);
u8 U[4];
w4(U+0,u32(0x9c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f42a7:{NFSU2_TR(0x5f42a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f42acull));
TAIL_STATIC(0x575620u,575);
}
B5f42ac:L5f42ac:{c.instructions+=5;NFSU2_TR(0x5f42ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f42af:{NFSU2_TR(0x5f42af);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f42b3:{NFSU2_TR(0x5f42b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f42b5:{NFSU2_TR(0x5f42b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f42bd:{NFSU2_TR(0x5f42bd);
if(r1(R+518)){{goto L5f42c9;}}
}
B5f42bf:L5f42bf:{c.instructions+=4;NFSU2_TR(0x5f42bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f42c1:{NFSU2_TR(0x5f42c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f42c2:{NFSU2_TR(0x5f42c2);
__builtin_memmove((R+4),(R+0),4);
}
B5f42c4:{NFSU2_TR(0x5f42c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f42c9ull));
TAIL_STATIC(0x5f1670u,5f1);
}
B5f42c9:L5f42c9:{c.instructions+=1;NFSU2_TR(0x5f42c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f42cd:L5f42cd:{c.instructions+=3;NFSU2_TR(0x5f42cd);
__builtin_memmove((R+0),gp(0x89e80c),4);
}
B5f42d2:{NFSU2_TR(0x5f42d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f42d4:{NFSU2_TR(0x5f42d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f431b;}}
}
B5f42d6:L5f42d6:{c.instructions+=3;NFSU2_TR(0x5f42d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f42d7:{NFSU2_TR(0x5f42d7);
w4(R+4,u32(0x89e7a0ull));
}
B5f42dc:{NFSU2_TR(0x5f42dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f42e1ull));
TAIL_STATIC(0x5ed920u,5ed);
}
B5f42e1:L5f42e1:{c.instructions+=2;NFSU2_TR(0x5f42e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f42e3:{NFSU2_TR(0x5f42e3);
if(r1(R+518)){{goto L5f431b;}}
}
B5f42e5:L5f42e5:{c.instructions+=2;NFSU2_TR(0x5f42e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f42e8:{NFSU2_TR(0x5f42e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f431b;}}
}
B5f42ea:L5f42ea:{c.instructions+=2;NFSU2_TR(0x5f42ea);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5f42ed:{NFSU2_TR(0x5f42ed);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5f431b;}}
}
B5f42ef:L5f42ef:{c.instructions+=3;NFSU2_TR(0x5f42ef);
__builtin_memmove((R+24),gp(0x89e7ec),4);
}
B5f42f5:{NFSU2_TR(0x5f42f5);
u8 U[4];
w4(U+0,u32(0x9c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f42fa:{NFSU2_TR(0x5f42fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f42ffull));
TAIL_STATIC(0x575620u,575);
}
B5f42ff:L5f42ff:{c.instructions+=5;NFSU2_TR(0x5f42ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f4302:{NFSU2_TR(0x5f4302);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4306:{NFSU2_TR(0x5f4306);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4308:{NFSU2_TR(0x5f4308);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f430c:{NFSU2_TR(0x5f430c);
if(r1(R+518)){{goto L5f4317;}}
}
B5f430e:L5f430e:{c.instructions+=4;NFSU2_TR(0x5f430e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f430f:{NFSU2_TR(0x5f430f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4310:{NFSU2_TR(0x5f4310);
__builtin_memmove((R+4),(R+0),4);
}
B5f4312:{NFSU2_TR(0x5f4312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4317ull));
TAIL_STATIC(0x5f1670u,5f1);
}
B5f4317:L5f4317:{c.instructions+=1;NFSU2_TR(0x5f4317);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f431b:L5f431b:{c.instructions+=5;NFSU2_TR(0x5f431b);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B5f4321:{NFSU2_TR(0x5f4321);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f4323:{NFSU2_TR(0x5f4323);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4325:{NFSU2_TR(0x5f4325);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4329:{NFSU2_TR(0x5f4329);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f439a;}}
}
B5f432b:L5f432b:{c.instructions+=2;NFSU2_TR(0x5f432b);
__builtin_memmove((R+12),gp(0x890080),4);
}
B5f4331:{NFSU2_TR(0x5f4331);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4332:L5f4332:{c.instructions+=4;NFSU2_TR(0x5f4332);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5f4339:{NFSU2_TR(0x5f4339);
__builtin_memmove((R+0),gp(0x89e7ac),1);
}
B5f433e:{NFSU2_TR(0x5f433e);
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
B5f4340:{NFSU2_TR(0x5f4340);
if(r1(R+518)){{goto L5f4351;}}
}
B5f4342:L5f4342:{c.instructions+=6;NFSU2_TR(0x5f4342);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4345:{NFSU2_TR(0x5f4345);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4348:{NFSU2_TR(0x5f4348);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5f434a:{NFSU2_TR(0x5f434a);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f434e:{NFSU2_TR(0x5f434e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f434f:{NFSU2_TR(0x5f434f);
{goto L5f4379;}
}
B5f4351:L5f4351:{c.instructions+=5;NFSU2_TR(0x5f4351);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4354:{NFSU2_TR(0x5f4354);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e808ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B5f435b:{NFSU2_TR(0x5f435b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f435d:{NFSU2_TR(0x5f435d);
__builtin_memmove((R+4),(R+12),4);
}
B5f435f:{NFSU2_TR(0x5f435f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4364ull));
TAIL_STATIC(0x502fd0u,502);
}
B5f4364:L5f4364:{c.instructions+=2;NFSU2_TR(0x5f4364);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4366:{NFSU2_TR(0x5f4366);
if(r1(R+518)){{goto L5f4386;}}
}
B5f4368:L5f4368:{c.instructions+=3;NFSU2_TR(0x5f4368);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5f436c:{NFSU2_TR(0x5f436c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f436e:{NFSU2_TR(0x5f436e);
if(r1(R+518)){{goto L5f4378;}}
}
B5f4370:L5f4370:{c.instructions+=3;NFSU2_TR(0x5f4370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f4372:{NFSU2_TR(0x5f4372);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4374:{NFSU2_TR(0x5f4374);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f4368u);}goto L5f4368;}}
}
B5f4376:L5f4376:{c.instructions+=1;NFSU2_TR(0x5f4376);
{goto L5f4386;}
}
B5f4378:L5f4378:{c.instructions+=1;NFSU2_TR(0x5f4378);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4379:L5f4379:{c.instructions+=2;NFSU2_TR(0x5f4379);
__builtin_memmove((R+4),(R+28),4);
}
B5f437b:{NFSU2_TR(0x5f437b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4380ull));
TAIL_STATIC(0x5f3e10u,5f3);
}
B5f4380:L5f4380:{c.instructions+=1;NFSU2_TR(0x5f4380);
__builtin_memmove((R+12),gp(0x890080),4);
}
B5f4386:L5f4386:{c.instructions+=6;NFSU2_TR(0x5f4386);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f438a:{NFSU2_TR(0x5f438a);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B5f4390:{NFSU2_TR(0x5f4390);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f4391:{NFSU2_TR(0x5f4391);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f4393:{NFSU2_TR(0x5f4393);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4397:{NFSU2_TR(0x5f4397);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f4332u);}goto L5f4332;}}
}
B5f4399:L5f4399:{c.instructions+=1;NFSU2_TR(0x5f4399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f439a:L5f439a:{c.instructions+=7;NFSU2_TR(0x5f439a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f439e:{NFSU2_TR(0x5f439e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f439f:{NFSU2_TR(0x5f439f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f43a0:{NFSU2_TR(0x5f43a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f43a1:{NFSU2_TR(0x5f43a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f43a8:{NFSU2_TR(0x5f43a8);
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
B5f43ab:{NFSU2_TR(0x5f43ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f43b0:L5f43b0:{c.instructions+=5;NFSU2_TR(0x5f43b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f43b4:{NFSU2_TR(0x5f43b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f43b6:{NFSU2_TR(0x5f43b6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f43b8:{NFSU2_TR(0x5f43b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f43bb:{NFSU2_TR(0x5f43bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f43c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f41e0u);}goto L5f41e0;}
}
B5f43c0:L5f43c0:{c.instructions+=1;NFSU2_TR(0x5f43c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f43d0:L5f43d0:{c.instructions+=4;NFSU2_TR(0x5f43d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f43d4:{NFSU2_TR(0x5f43d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f43d5:{NFSU2_TR(0x5f43d5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f43d7:{NFSU2_TR(0x5f43d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f43dcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f41e0u);}goto L5f41e0;}
}
B5f43dc:L5f43dc:{c.instructions+=1;NFSU2_TR(0x5f43dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f43e0:L5f43e0:{c.instructions+=5;NFSU2_TR(0x5f43e0);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B5f43e5:{NFSU2_TR(0x5f43e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f43e6:{NFSU2_TR(0x5f43e6);
__builtin_memmove((R+24),(R+4),4);
}
B5f43e8:{NFSU2_TR(0x5f43e8);
u8 U[4];
w4(U+0,u32(0x7a5c90ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5f43ee:{NFSU2_TR(0x5f43ee);
if(r1(R+518)){{goto L5f43f9;}}
}
B5f43f0:L5f43f0:{c.instructions+=2;NFSU2_TR(0x5f43f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f43f1:{NFSU2_TR(0x5f43f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f43f6ull));
TAIL_STATIC(0x575630u,575);
}
B5f43f6:L5f43f6:{c.instructions+=1;NFSU2_TR(0x5f43f6);
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
B5f43f9:L5f43f9:{c.instructions+=3;NFSU2_TR(0x5f43f9);
__builtin_memmove((R+0),(R+24),4);
}
B5f43fb:{NFSU2_TR(0x5f43fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f43fc:{NFSU2_TR(0x5f43fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4400:L5f4400:{c.instructions+=7;NFSU2_TR(0x5f4400);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4401:{NFSU2_TR(0x5f4401);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f4405:{NFSU2_TR(0x5f4405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4408:{NFSU2_TR(0x5f4408);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4409:{NFSU2_TR(0x5f4409);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f440b:{NFSU2_TR(0x5f440b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f440e:{NFSU2_TR(0x5f440e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4418;}}
}
B5f4410:L5f4410:{c.instructions+=4;NFSU2_TR(0x5f4410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f4411:{NFSU2_TR(0x5f4411);
w4(R+0,u32(0x2ull));
}
B5f4416:{NFSU2_TR(0x5f4416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f4417:{NFSU2_TR(0x5f4417);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4418:L5f4418:{c.instructions+=3;NFSU2_TR(0x5f4418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f441b:{NFSU2_TR(0x5f441b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f441f:{NFSU2_TR(0x5f441f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4442;}}
}
B5f4421:L5f4421:{c.instructions+=3;NFSU2_TR(0x5f4421);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f4427:{NFSU2_TR(0x5f4427);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f4429:{NFSU2_TR(0x5f4429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f444c;}}
}
B5f442b:L5f442b:{c.instructions+=4;NFSU2_TR(0x5f442b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f442e:{NFSU2_TR(0x5f442e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f4434:{NFSU2_TR(0x5f4434);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f4436:{NFSU2_TR(0x5f4436);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4442;}}
}
B5f4438:L5f4438:{c.instructions+=3;NFSU2_TR(0x5f4438);
__builtin_memmove((R+4),gp(0x89008c),4);
}
B5f443e:{NFSU2_TR(0x5f443e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4440:{NFSU2_TR(0x5f4440);
if(r1(R+518)){{goto L5f4494;}}
}
B5f4442:L5f4442:{c.instructions+=3;NFSU2_TR(0x5f4442);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f4448:{NFSU2_TR(0x5f4448);
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
B5f444a:{NFSU2_TR(0x5f444a);
if(r1(R+518)){{goto L5f4453;}}
}
B5f444c:L5f444c:{c.instructions+=2;NFSU2_TR(0x5f444c);
w4(R+28,u32(0x3ull));
}
B5f4451:{NFSU2_TR(0x5f4451);
{goto L5f4499;}
}
B5f4453:L5f4453:{c.instructions+=3;NFSU2_TR(0x5f4453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4456:{NFSU2_TR(0x5f4456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f4458:{NFSU2_TR(0x5f4458);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f445bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f445b:L5f445b:{c.instructions+=2;NFSU2_TR(0x5f445b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f445d:{NFSU2_TR(0x5f445d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4494;}}
}
B5f445f:L5f445f:{c.instructions+=3;NFSU2_TR(0x5f445f);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5f4464:{NFSU2_TR(0x5f4464);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f4466:{NFSU2_TR(0x5f4466);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4494;}}
}
B5f4468:L5f4468:{c.instructions+=3;NFSU2_TR(0x5f4468);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5f446d:{NFSU2_TR(0x5f446d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f446f:{NFSU2_TR(0x5f446f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4494;}}
}
B5f4471:L5f4471:{c.instructions+=2;NFSU2_TR(0x5f4471);
w4(R+4,u32(0x89e7a0ull));
}
B5f4476:{NFSU2_TR(0x5f4476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f447bull));
TAIL_STATIC(0x401950u,401);
}
B5f447b:L5f447b:{c.instructions+=2;NFSU2_TR(0x5f447b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f447d:{NFSU2_TR(0x5f447d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4494;}}
}
B5f447f:L5f447f:{c.instructions+=3;NFSU2_TR(0x5f447f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4482:{NFSU2_TR(0x5f4482);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4485:{NFSU2_TR(0x5f4485);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f444cu);}goto L5f444c;}}
}
B5f4487:L5f4487:{c.instructions+=2;NFSU2_TR(0x5f4487);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f448a:{NFSU2_TR(0x5f448a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f444cu);}goto L5f444c;}}
}
B5f448c:L5f448c:{c.instructions+=2;NFSU2_TR(0x5f448c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f448e:{NFSU2_TR(0x5f448e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4499;}}
}
B5f4490:L5f4490:{c.instructions+=2;NFSU2_TR(0x5f4490);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f4492:{NFSU2_TR(0x5f4492);
{goto L5f4499;}
}
B5f4494:L5f4494:{c.instructions+=1;NFSU2_TR(0x5f4494);
w4(R+28,u32(0x1ull));
}
B5f4499:L5f4499:{c.instructions+=3;NFSU2_TR(0x5f4499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f449c:{NFSU2_TR(0x5f449c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f44a0:{NFSU2_TR(0x5f44a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f44bb;}}
}
B5f44a2:L5f44a2:{c.instructions+=3;NFSU2_TR(0x5f44a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f44a8:{NFSU2_TR(0x5f44a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f44aa:{NFSU2_TR(0x5f44aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f44bb;}}
}
B5f44ac:L5f44ac:{c.instructions+=3;NFSU2_TR(0x5f44ac);
__builtin_memmove((R+0),gp(0x8021ac),4);
}
B5f44b1:{NFSU2_TR(0x5f44b1);
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
B5f44b4:{NFSU2_TR(0x5f44b4);
if(r1(R+518)){{goto L5f44c9;}}
}
B5f44b6:L5f44b6:{c.instructions+=4;NFSU2_TR(0x5f44b6);
__builtin_memmove((R+28),(R+0),4);
}
B5f44b8:{NFSU2_TR(0x5f44b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f44b9:{NFSU2_TR(0x5f44b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f44ba:{NFSU2_TR(0x5f44ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f44bb:L5f44bb:{c.instructions+=3;NFSU2_TR(0x5f44bb);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B5f44c0:{NFSU2_TR(0x5f44c0);
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
B5f44c2:{NFSU2_TR(0x5f44c2);
if(r1(R+518)){{goto L5f44c9;}}
}
B5f44c4:L5f44c4:{c.instructions+=1;NFSU2_TR(0x5f44c4);
w4(R+28,u32(0x1ull));
}
B5f44c9:L5f44c9:{c.instructions+=4;NFSU2_TR(0x5f44c9);
__builtin_memmove((R+0),(R+28),4);
}
B5f44cb:{NFSU2_TR(0x5f44cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f44cc:{NFSU2_TR(0x5f44cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f44cd:{NFSU2_TR(0x5f44cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f44d0:L5f44d0:{c.instructions+=17;NFSU2_TR(0x5f44d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f44d2:{NFSU2_TR(0x5f44d2);
u8 U[4];
w4(U+0,u32(0x779b3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f44d7:{NFSU2_TR(0x5f44d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f44dd:{NFSU2_TR(0x5f44dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f44de:{NFSU2_TR(0x5f44de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f44e5:{NFSU2_TR(0x5f44e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f44e6:{NFSU2_TR(0x5f44e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f44e7:{NFSU2_TR(0x5f44e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f44e8:{NFSU2_TR(0x5f44e8);
__builtin_memmove((R+24),(R+4),4);
}
B5f44ea:{NFSU2_TR(0x5f44ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f44eb:{NFSU2_TR(0x5f44eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f44ef:{NFSU2_TR(0x5f44ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f44f5:{NFSU2_TR(0x5f44f5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f44f7:{NFSU2_TR(0x5f44f7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5f44f9:{NFSU2_TR(0x5f44f9);
w4(R+28,u32(0x1ull));
}
B5f44fe:{NFSU2_TR(0x5f44fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4502:{NFSU2_TR(0x5f4502);
if(r1(R+518)){{goto L5f4509;}}
}
B5f4504:L5f4504:{c.instructions+=3;NFSU2_TR(0x5f4504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f4506:{NFSU2_TR(0x5f4506);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4507:{NFSU2_TR(0x5f4507);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4509ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f4509:L5f4509:{c.instructions+=3;NFSU2_TR(0x5f4509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f450c:{NFSU2_TR(0x5f450c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f450f:{NFSU2_TR(0x5f450f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4529;}}
}
B5f4511:L5f4511:{c.instructions+=2;NFSU2_TR(0x5f4511);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5f4517:{NFSU2_TR(0x5f4517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4529;}}
}
B5f4519:L5f4519:{c.instructions+=2;NFSU2_TR(0x5f4519);
s4(0x8021b0,u32(0xffffffffull));
}
B5f4523:{NFSU2_TR(0x5f4523);
__builtin_memmove(gp(0x8900e8),(R+12),4);
}
B5f4529:L5f4529:{c.instructions+=3;NFSU2_TR(0x5f4529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f452c:{NFSU2_TR(0x5f452c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5f452e:{NFSU2_TR(0x5f452e);
if(r1(R+518)){{goto L5f4535;}}
}
B5f4530:L5f4530:{c.instructions+=3;NFSU2_TR(0x5f4530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f4532:{NFSU2_TR(0x5f4532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4533:{NFSU2_TR(0x5f4533);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4535ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f4535:L5f4535:{c.instructions+=3;NFSU2_TR(0x5f4535);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4538:{NFSU2_TR(0x5f4538);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5f453a:{NFSU2_TR(0x5f453a);
if(r1(R+518)){{goto L5f4541;}}
}
B5f453c:L5f453c:{c.instructions+=3;NFSU2_TR(0x5f453c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f453e:{NFSU2_TR(0x5f453e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f453f:{NFSU2_TR(0x5f453f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4541ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f4541:L5f4541:{c.instructions+=15;NFSU2_TR(0x5f4541);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5f4545:{NFSU2_TR(0x5f4545);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ccf8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f454c:{NFSU2_TR(0x5f454c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f4550:{NFSU2_TR(0x5f4550);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cd50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f4557:{NFSU2_TR(0x5f4557);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5f455b:{NFSU2_TR(0x5f455b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cda8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f4562:{NFSU2_TR(0x5f4562);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5f4566:{NFSU2_TR(0x5f4566);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f456d:{NFSU2_TR(0x5f456d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f4571:{NFSU2_TR(0x5f4571);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f4578:{NFSU2_TR(0x5f4578);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5f457c:{NFSU2_TR(0x5f457c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ceb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f4583:{NFSU2_TR(0x5f4583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4586:{NFSU2_TR(0x5f4586);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5f4588:{NFSU2_TR(0x5f4588);
if(r1(R+518)){{goto L5f458f;}}
}
B5f458a:L5f458a:{c.instructions+=3;NFSU2_TR(0x5f458a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f458c:{NFSU2_TR(0x5f458c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f458d:{NFSU2_TR(0x5f458d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f458full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f458f:L5f458f:{c.instructions+=3;NFSU2_TR(0x5f458f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f4595:{NFSU2_TR(0x5f4595);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4597:{NFSU2_TR(0x5f4597);
if(r1(R+518)){{goto L5f45a9;}}
}
B5f4599:L5f4599:{c.instructions+=2;NFSU2_TR(0x5f4599);
__builtin_memmove((R+4),(R+28),4);
}
B5f459b:{NFSU2_TR(0x5f459b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f45a0ull));
TAIL_STATIC(0x63a550u,63a);
}
B5f45a0:L5f45a0:{c.instructions+=2;NFSU2_TR(0x5f45a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f45a1:{NFSU2_TR(0x5f45a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f45a6ull));
TAIL_STATIC(0x575630u,575);
}
B5f45a6:L5f45a6:{c.instructions+=1;NFSU2_TR(0x5f45a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f45a9:L5f45a9:{c.instructions+=3;NFSU2_TR(0x5f45a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f45af:{NFSU2_TR(0x5f45af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f45b1:{NFSU2_TR(0x5f45b1);
if(r1(R+518)){{goto L5f45c9;}}
}
B5f45b3:L5f45b3:{c.instructions+=2;NFSU2_TR(0x5f45b3);
__builtin_memmove((R+4),(R+28),4);
}
B5f45b5:{NFSU2_TR(0x5f45b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f45baull));
TAIL_STATIC(0x63a440u,63a);
}
B5f45ba:L5f45ba:{c.instructions+=2;NFSU2_TR(0x5f45ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f45bb:{NFSU2_TR(0x5f45bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f45c0ull));
TAIL_STATIC(0x575630u,575);
}
B5f45c0:L5f45c0:{c.instructions+=2;NFSU2_TR(0x5f45c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f45c3:{NFSU2_TR(0x5f45c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f45c9:L5f45c9:{c.instructions+=2;NFSU2_TR(0x5f45c9);
__builtin_memmove((R+4),(R+24),4);
}
B5f45cb:{NFSU2_TR(0x5f45cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f45d0ull));
TAIL_STATIC(0x63a610u,63a);
}
B5f45d0:L5f45d0:{c.instructions+=2;NFSU2_TR(0x5f45d0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
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
B5f45d6:{NFSU2_TR(0x5f45d6);
if(r1(R+518)){{goto L5f45ea;}}
}
B5f45d8:L5f45d8:{c.instructions+=3;NFSU2_TR(0x5f45d8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5f45de:{NFSU2_TR(0x5f45de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f45df:{NFSU2_TR(0x5f45df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f45e4ull));
TAIL_STATIC(0x469160u,469);
}
B5f45e4:L5f45e4:{c.instructions+=1;NFSU2_TR(0x5f45e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f45ea:L5f45ea:{c.instructions+=2;NFSU2_TR(0x5f45ea);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f45ef:{NFSU2_TR(0x5f45ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f45f4ull));
TAIL_STATIC(0x5e5390u,5e5);
}
B5f45f4:L5f45f4:{c.instructions+=5;NFSU2_TR(0x5f45f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f45f7:{NFSU2_TR(0x5f45f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f45fa:{NFSU2_TR(0x5f45fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f45fd:{NFSU2_TR(0x5f45fd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f4600:{NFSU2_TR(0x5f4600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f460d;}}
}
B5f4602:L5f4602:{c.instructions+=3;NFSU2_TR(0x5f4602);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4603:{NFSU2_TR(0x5f4603);
w4(R+4,u32(0x81e810ull));
}
B5f4608:{NFSU2_TR(0x5f4608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f460dull));
TAIL_STATIC(0x41ac40u,41a);
}
B5f460d:L5f460d:{c.instructions+=3;NFSU2_TR(0x5f460d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f4613:{NFSU2_TR(0x5f4613);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f4617:{NFSU2_TR(0x5f4617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f461cull));
TAIL_STATIC(0x4022c0u,402);
}
B5f461c:L5f461c:{c.instructions+=3;NFSU2_TR(0x5f461c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f4622:{NFSU2_TR(0x5f4622);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f462a:{NFSU2_TR(0x5f462a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f462full));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5f462f:L5f462f:{c.instructions+=7;NFSU2_TR(0x5f462f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4633:{NFSU2_TR(0x5f4633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f4634:{NFSU2_TR(0x5f4634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f4635:{NFSU2_TR(0x5f4635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f4636:{NFSU2_TR(0x5f4636);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f463d:{NFSU2_TR(0x5f463d);
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
B5f4640:{NFSU2_TR(0x5f4640);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4650:L5f4650:{c.instructions+=3;NFSU2_TR(0x5f4650);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5f4655:{NFSU2_TR(0x5f4655);
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
B5f4657:{NFSU2_TR(0x5f4657);
if(r1(R+518)){{goto L5f469a;}}
}
B5f4659:L5f4659:{c.instructions+=4;NFSU2_TR(0x5f4659);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f465a:{NFSU2_TR(0x5f465a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f465c:{NFSU2_TR(0x5f465c);
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
B5f465e:{NFSU2_TR(0x5f465e);
if(r1(R+518)){{goto L5f4699;}}
}
B5f4660:L5f4660:{c.instructions+=2;NFSU2_TR(0x5f4660);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4661:{NFSU2_TR(0x5f4661);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f4665:L5f4665:{c.instructions+=2;NFSU2_TR(0x5f4665);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4668:{NFSU2_TR(0x5f4668);
if(r1(R+518)){{goto L5f4671;}}
}
B5f466a:L5f466a:{c.instructions+=3;NFSU2_TR(0x5f466a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f466d:{NFSU2_TR(0x5f466d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f466f:{NFSU2_TR(0x5f466f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4692;}}
}
B5f4671:L5f4671:{c.instructions+=3;NFSU2_TR(0x5f4671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4677:{NFSU2_TR(0x5f4677);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f4679:{NFSU2_TR(0x5f4679);
if(r1(R+518)){{goto L5f4682;}}
}
B5f467b:L5f467b:{c.instructions+=2;NFSU2_TR(0x5f467b);
__builtin_memmove((R+4),(R+24),4);
}
B5f467d:{NFSU2_TR(0x5f467d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4682ull));
TAIL_STATIC(0x63a610u,63a);
}
B5f4682:L5f4682:{c.instructions+=4;NFSU2_TR(0x5f4682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4685:{NFSU2_TR(0x5f4685);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4686:{NFSU2_TR(0x5f4686);
__builtin_memmove((R+4),(R+24),4);
}
B5f4688:{NFSU2_TR(0x5f4688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f468dull));
TAIL_STATIC(0x63a5a0u,63a);
}
B5f468d:L5f468d:{c.instructions+=1;NFSU2_TR(0x5f468d);
__builtin_memmove((R+0),gp(0x890080),4);
}
B5f4692:L5f4692:{c.instructions+=3;NFSU2_TR(0x5f4692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f4694:{NFSU2_TR(0x5f4694);
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
B5f4696:{NFSU2_TR(0x5f4696);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f4665u);}goto L5f4665;}}
}
B5f4698:L5f4698:{c.instructions+=1;NFSU2_TR(0x5f4698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f4699:L5f4699:{c.instructions+=1;NFSU2_TR(0x5f4699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f469a:L5f469a:{c.instructions+=1;NFSU2_TR(0x5f469a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f46a0:L5f46a0:{c.instructions+=16;NFSU2_TR(0x5f46a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46a2:{NFSU2_TR(0x5f46a2);
u8 U[4];
w4(U+0,u32(0x779ba2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46a7:{NFSU2_TR(0x5f46a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f46ad:{NFSU2_TR(0x5f46ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46ae:{NFSU2_TR(0x5f46ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f46b5:{NFSU2_TR(0x5f46b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46b6:{NFSU2_TR(0x5f46b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46b7:{NFSU2_TR(0x5f46b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46b8:{NFSU2_TR(0x5f46b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46b9:{NFSU2_TR(0x5f46b9);
__builtin_memmove((R+24),(R+4),4);
}
B5f46bb:{NFSU2_TR(0x5f46bb);
__builtin_memmove((R+4),gp(0x8021ac),4);
}
B5f46c1:{NFSU2_TR(0x5f46c1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f46c3:{NFSU2_TR(0x5f46c3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f46c6:{NFSU2_TR(0x5f46c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46c7:{NFSU2_TR(0x5f46c7);
w4(R+20,u32(0x1ull));
}
B5f46cc:{NFSU2_TR(0x5f46cc);
if(r1(R+518)){{goto L5f46e6;}}
}
B5f46ce:L5f46ce:{c.instructions+=3;NFSU2_TR(0x5f46ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f46d1:{NFSU2_TR(0x5f46d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f46d4:{NFSU2_TR(0x5f46d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f46e6;}}
}
B5f46d6:L5f46d6:{c.instructions+=2;NFSU2_TR(0x5f46d6);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5f46dc:{NFSU2_TR(0x5f46dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f46e6;}}
}
B5f46de:L5f46de:{c.instructions+=3;NFSU2_TR(0x5f46de);
__builtin_memmove((R+28),(R+4),4);
}
B5f46e0:{NFSU2_TR(0x5f46e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f46e4:{NFSU2_TR(0x5f46e4);
{goto L5f46ea;}
}
B5f46e6:L5f46e6:{c.instructions+=1;NFSU2_TR(0x5f46e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f46ea:L5f46ea:{c.instructions+=2;NFSU2_TR(0x5f46ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f46ed:{NFSU2_TR(0x5f46ed);
if(r1(R+518)){{goto L5f4924;}}
}
B5f46f3:L5f46f3:{c.instructions+=3;NFSU2_TR(0x5f46f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f46f6:{NFSU2_TR(0x5f46f6);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5f46f8:{NFSU2_TR(0x5f46f8);
if(r1(R+518)){{goto L5f46ff;}}
}
B5f46fa:L5f46fa:{c.instructions+=3;NFSU2_TR(0x5f46fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f46fc:{NFSU2_TR(0x5f46fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f46fd:{NFSU2_TR(0x5f46fd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f46ffull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f46ff:L5f46ff:{c.instructions+=9;NFSU2_TR(0x5f46ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5f4703:{NFSU2_TR(0x5f4703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4706:{NFSU2_TR(0x5f4706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4709:{NFSU2_TR(0x5f4709);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cd50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f4710:{NFSU2_TR(0x5f4710);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f4714:{NFSU2_TR(0x5f4714);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4717:{NFSU2_TR(0x5f4717);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cda8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f471e:{NFSU2_TR(0x5f471e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5f4724:{NFSU2_TR(0x5f4724);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f4742;}}
}
B5f4726:L5f4726:{c.instructions+=2;NFSU2_TR(0x5f4726);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4728:{NFSU2_TR(0x5f4728);
if(r1(R+518)){{goto L5f4742;}}
}
B5f472a:L5f472a:{c.instructions+=2;NFSU2_TR(0x5f472a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f472d:{NFSU2_TR(0x5f472d);
if(r1(R+518)){{goto L5f4742;}}
}
B5f472f:L5f472f:{c.instructions+=8;NFSU2_TR(0x5f472f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4732:{NFSU2_TR(0x5f4732);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5f4733:{NFSU2_TR(0x5f4733);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5f4735:{NFSU2_TR(0x5f4735);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5f4737:{NFSU2_TR(0x5f4737);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f473a:{NFSU2_TR(0x5f473a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f473e:{NFSU2_TR(0x5f473e);
__builtin_memmove((R+28),(R+0),4);
}
B5f4740:{NFSU2_TR(0x5f4740);
{goto L5f474b;}
}
B5f4742:L5f4742:{c.instructions+=2;NFSU2_TR(0x5f4742);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5f4745:{NFSU2_TR(0x5f4745);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5f48f4;}}
}
B5f474b:L5f474b:{c.instructions+=1;NFSU2_TR(0x5f474b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5f493cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f4752:L5f4752:{c.instructions+=3;NFSU2_TR(0x5f4752);
__builtin_memmove((R+4),gp(0x86b304),4);
}
B5f4758:{NFSU2_TR(0x5f4758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4759:{NFSU2_TR(0x5f4759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f475eull));
TAIL_STATIC(0x440e50u,440);
}
B5f475e:L5f475e:{c.instructions+=3;NFSU2_TR(0x5f475e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f4761:{NFSU2_TR(0x5f4761);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4763:{NFSU2_TR(0x5f4763);
if(r1(R+518)){{goto L5f4782;}}
}
B5f4765:L5f4765:{c.instructions+=8;NFSU2_TR(0x5f4765);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4768:{NFSU2_TR(0x5f4768);
u8 U[4];
w4(U+0,u32(0x7a5bb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5f476e:{NFSU2_TR(0x5f476e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f4771:{NFSU2_TR(0x5f4771);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4774:{NFSU2_TR(0x5f4774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4777:{NFSU2_TR(0x5f4777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f477a:{NFSU2_TR(0x5f477a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f477d:{NFSU2_TR(0x5f477d);
{goto L5f48f4;}
}
B5f4782:L5f4782:{c.instructions+=5;NFSU2_TR(0x5f4782);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f4784:{NFSU2_TR(0x5f4784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4787:{NFSU2_TR(0x5f4787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f478a:{NFSU2_TR(0x5f478a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f478d:{NFSU2_TR(0x5f478d);
{goto L5f48f4;}
}
B5f4792:L5f4792:{c.instructions+=2;NFSU2_TR(0x5f4792);
u8 U[4];
w4(U+0,u32(0x130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4797:{NFSU2_TR(0x5f4797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f479cull));
TAIL_STATIC(0x575620u,575);
}
B5f479c:L5f479c:{c.instructions+=6;NFSU2_TR(0x5f479c);
__builtin_memmove((R+28),(R+0),4);
}
B5f479e:{NFSU2_TR(0x5f479e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f47a1:{NFSU2_TR(0x5f47a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f47a5:{NFSU2_TR(0x5f47a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f47a7:{NFSU2_TR(0x5f47a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f47ab:{NFSU2_TR(0x5f47ab);
if(r1(R+518)){{goto L5f47cc;}}
}
B5f47ad:L5f47ad:{c.instructions+=4;NFSU2_TR(0x5f47ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f47b0:{NFSU2_TR(0x5f47b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f47b1:{NFSU2_TR(0x5f47b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f47b4:{NFSU2_TR(0x5f47b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f47b9ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B5f47b9:L5f47b9:{c.instructions+=8;NFSU2_TR(0x5f47b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f47bc:{NFSU2_TR(0x5f47bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f47bf:{NFSU2_TR(0x5f47bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f47c0:{NFSU2_TR(0x5f47c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f47c1:{NFSU2_TR(0x5f47c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f47c2:{NFSU2_TR(0x5f47c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f47c3:{NFSU2_TR(0x5f47c3);
__builtin_memmove((R+4),(R+28),4);
}
B5f47c5:{NFSU2_TR(0x5f47c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f47caull));
TAIL_STATIC(0x5b5cc0u,5b5);
}
B5f47ca:L5f47ca:{c.instructions+=1;NFSU2_TR(0x5f47ca);
{goto L5f47ce;}
}
B5f47cc:L5f47cc:{c.instructions+=1;NFSU2_TR(0x5f47cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f47ce:L5f47ce:{c.instructions+=7;NFSU2_TR(0x5f47ce);
{u32 ea_=u32(r4(R+24)+u32(1240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f47d4:{NFSU2_TR(0x5f47d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f47d8:{NFSU2_TR(0x5f47d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f47db:{NFSU2_TR(0x5f47db);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f47de:{NFSU2_TR(0x5f47de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f47e1:{NFSU2_TR(0x5f47e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f47e4:{NFSU2_TR(0x5f47e4);
{goto L5f48ec;}
}
B5f47e9:L5f47e9:{c.instructions+=2;NFSU2_TR(0x5f47e9);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f47eb:{NFSU2_TR(0x5f47eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f47f0ull));
TAIL_STATIC(0x575620u,575);
}
B5f47f0:L5f47f0:{c.instructions+=5;NFSU2_TR(0x5f47f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f47f3:{NFSU2_TR(0x5f47f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f47f7:{NFSU2_TR(0x5f47f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f47f9:{NFSU2_TR(0x5f47f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f47fd:{NFSU2_TR(0x5f47fd);
if(r1(R+518)){{goto L5f4815;}}
}
B5f47ff:L5f47ff:{c.instructions+=3;NFSU2_TR(0x5f47ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4800:{NFSU2_TR(0x5f4800);
__builtin_memmove((R+4),(R+0),4);
}
B5f4802:{NFSU2_TR(0x5f4802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4807ull));
TAIL_STATIC(0x408740u,408);
}
B5f4807:L5f4807:{c.instructions+=4;NFSU2_TR(0x5f4807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f480a:{NFSU2_TR(0x5f480a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f480d:{NFSU2_TR(0x5f480d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4810:{NFSU2_TR(0x5f4810);
{goto L5f48ec;}
}
B5f4815:L5f4815:{c.instructions+=5;NFSU2_TR(0x5f4815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4818:{NFSU2_TR(0x5f4818);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f481a:{NFSU2_TR(0x5f481a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f481d:{NFSU2_TR(0x5f481d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4820:{NFSU2_TR(0x5f4820);
{goto L5f48ec;}
}
B5f4825:L5f4825:{c.instructions+=3;NFSU2_TR(0x5f4825);
__builtin_memmove((R+8),gp(0x86b300),4);
}
B5f482b:{NFSU2_TR(0x5f482b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f482c:{NFSU2_TR(0x5f482c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4831ull));
TAIL_STATIC(0x440e50u,440);
}
B5f4831:L5f4831:{c.instructions+=5;NFSU2_TR(0x5f4831);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f4834:{NFSU2_TR(0x5f4834);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4838:{NFSU2_TR(0x5f4838);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f483a:{NFSU2_TR(0x5f483a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4842:{NFSU2_TR(0x5f4842);
if(r1(R+518)){{goto L5f4866;}}
}
B5f4844:L5f4844:{c.instructions+=9;NFSU2_TR(0x5f4844);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4847:{NFSU2_TR(0x5f4847);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f484a:{NFSU2_TR(0x5f484a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f484b:{NFSU2_TR(0x5f484b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f484e:{NFSU2_TR(0x5f484e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f484f:{NFSU2_TR(0x5f484f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4850:{NFSU2_TR(0x5f4850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4851:{NFSU2_TR(0x5f4851);
__builtin_memmove((R+4),(R+0),4);
}
B5f4853:{NFSU2_TR(0x5f4853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4858ull));
TAIL_STATIC(0x5b6d00u,5b6);
}
B5f4858:L5f4858:{c.instructions+=4;NFSU2_TR(0x5f4858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f485b:{NFSU2_TR(0x5f485b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f485e:{NFSU2_TR(0x5f485e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4861:{NFSU2_TR(0x5f4861);
{goto L5f48ec;}
}
B5f4866:L5f4866:{c.instructions+=5;NFSU2_TR(0x5f4866);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4869:{NFSU2_TR(0x5f4869);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f486b:{NFSU2_TR(0x5f486b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f486e:{NFSU2_TR(0x5f486e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4871:{NFSU2_TR(0x5f4871);
{goto L5f48ec;}
}
B5f4873:L5f4873:{c.instructions+=2;NFSU2_TR(0x5f4873);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4875:{NFSU2_TR(0x5f4875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f487aull));
TAIL_STATIC(0x575620u,575);
}
B5f487a:L5f487a:{c.instructions+=5;NFSU2_TR(0x5f487a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f487d:{NFSU2_TR(0x5f487d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4881:{NFSU2_TR(0x5f4881);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f4883:{NFSU2_TR(0x5f4883);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f488b:{NFSU2_TR(0x5f488b);
if(r1(R+518)){{goto L5f48a0;}}
}
B5f488d:L5f488d:{c.instructions+=3;NFSU2_TR(0x5f488d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f488e:{NFSU2_TR(0x5f488e);
__builtin_memmove((R+4),(R+0),4);
}
B5f4890:{NFSU2_TR(0x5f4890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4895ull));
TAIL_STATIC(0x5a9030u,5a9);
}
B5f4895:L5f4895:{c.instructions+=4;NFSU2_TR(0x5f4895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4898:{NFSU2_TR(0x5f4898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f489b:{NFSU2_TR(0x5f489b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f489e:{NFSU2_TR(0x5f489e);
{goto L5f48ec;}
}
B5f48a0:L5f48a0:{c.instructions+=5;NFSU2_TR(0x5f48a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f48a2:{NFSU2_TR(0x5f48a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f48a5:{NFSU2_TR(0x5f48a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f48a8:{NFSU2_TR(0x5f48a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f48ab:{NFSU2_TR(0x5f48ab);
{goto L5f48ec;}
}
B5f48ad:L5f48ad:{c.instructions+=3;NFSU2_TR(0x5f48ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f48ae:{NFSU2_TR(0x5f48ae);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f48b3:{NFSU2_TR(0x5f48b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f48b8ull));
TAIL_STATIC(0x440820u,440);
}
B5f48b8:L5f48b8:{c.instructions+=5;NFSU2_TR(0x5f48b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f48bb:{NFSU2_TR(0x5f48bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f48bf:{NFSU2_TR(0x5f48bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f48c1:{NFSU2_TR(0x5f48c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f48c9:{NFSU2_TR(0x5f48c9);
if(r1(R+518)){{goto L5f48e1;}}
}
B5f48cb:L5f48cb:{c.instructions+=9;NFSU2_TR(0x5f48cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f48ce:{NFSU2_TR(0x5f48ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f48d1:{NFSU2_TR(0x5f48d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f48d2:{NFSU2_TR(0x5f48d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f48d5:{NFSU2_TR(0x5f48d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f48d6:{NFSU2_TR(0x5f48d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f48d7:{NFSU2_TR(0x5f48d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f48d8:{NFSU2_TR(0x5f48d8);
__builtin_memmove((R+4),(R+0),4);
}
B5f48da:{NFSU2_TR(0x5f48da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f48dfull));
TAIL_STATIC(0x5b6fc0u,5b6);
}
B5f48df:L5f48df:{c.instructions+=1;NFSU2_TR(0x5f48df);
{goto L5f48e3;}
}
B5f48e1:L5f48e1:{c.instructions+=1;NFSU2_TR(0x5f48e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f48e3:L5f48e3:{c.instructions+=3;NFSU2_TR(0x5f48e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f48e6:{NFSU2_TR(0x5f48e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f48e9:{NFSU2_TR(0x5f48e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f48ec:L5f48ec:{c.instructions+=1;NFSU2_TR(0x5f48ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f48f4:L5f48f4:{c.instructions+=3;NFSU2_TR(0x5f48f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f48f7:{NFSU2_TR(0x5f48f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f48fa:{NFSU2_TR(0x5f48fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f48ffull));
TAIL_STATIC(0x5938c0u,593);
}
B5f48ff:L5f48ff:{c.instructions+=9;NFSU2_TR(0x5f48ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4902:{NFSU2_TR(0x5f4902);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4905:{NFSU2_TR(0x5f4905);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4908:{NFSU2_TR(0x5f4908);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f490c:{NFSU2_TR(0x5f490c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f490f:{NFSU2_TR(0x5f490f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cd50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f4916:{NFSU2_TR(0x5f4916);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5f491a:{NFSU2_TR(0x5f491a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f491d:{NFSU2_TR(0x5f491d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cda8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5f4924:L5f4924:{c.instructions+=8;NFSU2_TR(0x5f4924);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4928:{NFSU2_TR(0x5f4928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f4929:{NFSU2_TR(0x5f4929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f492a:{NFSU2_TR(0x5f492a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f492b:{NFSU2_TR(0x5f492b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f492c:{NFSU2_TR(0x5f492c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4933:{NFSU2_TR(0x5f4933);
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
B5f4936:{NFSU2_TR(0x5f4936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4960:L5f4960:{c.instructions+=3;NFSU2_TR(0x5f4960);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4963:{NFSU2_TR(0x5f4963);
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
B5f4965:{NFSU2_TR(0x5f4965);
if(r1(R+518)){{goto L5f4978;}}
}
B5f4967:L5f4967:{c.instructions+=6;NFSU2_TR(0x5f4967);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f496b:{NFSU2_TR(0x5f496b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f496d:{NFSU2_TR(0x5f496d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f496f:{NFSU2_TR(0x5f496f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4970:{NFSU2_TR(0x5f4970);
__builtin_memmove((R+4),(R+0),4);
}
B5f4972:{NFSU2_TR(0x5f4972);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4975ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f4975:L5f4975:{c.instructions+=1;NFSU2_TR(0x5f4975);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f4978:L5f4978:{c.instructions+=3;NFSU2_TR(0x5f4978);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f497b:{NFSU2_TR(0x5f497b);
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
B5f497e:{NFSU2_TR(0x5f497e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f4975u);}goto L5f4975;}}
}
B5f4980:L5f4980:{c.instructions+=2;NFSU2_TR(0x5f4980);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f4983:{NFSU2_TR(0x5f4983);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f4975u);}goto L5f4975;}}
}
B5f4985:L5f4985:{c.instructions+=4;NFSU2_TR(0x5f4985);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4988:{NFSU2_TR(0x5f4988);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f498a:{NFSU2_TR(0x5f498a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4992:{NFSU2_TR(0x5f4992);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f499c;}}
}
B5f4994:L5f4994:{c.instructions+=1;NFSU2_TR(0x5f4994);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f499c:L5f499c:{c.instructions+=1;NFSU2_TR(0x5f499c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f46a0u);}goto L5f46a0;}
}
B5f49b0:L5f49b0:{c.instructions+=3;NFSU2_TR(0x5f49b0);
__builtin_memmove((R+0),gp(0x8650a0),4);
}
B5f49b5:{NFSU2_TR(0x5f49b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f49b7:{NFSU2_TR(0x5f49b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f49c2;}}
}
B5f49b9:L5f49b9:{c.instructions+=3;NFSU2_TR(0x5f49b9);
__builtin_memmove((R+0),gp(0x8900ec),4);
}
B5f49be:{NFSU2_TR(0x5f49be);
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
B5f49c0:{NFSU2_TR(0x5f49c0);
if(r1(R+518)){{goto L5f49ec;}}
}
B5f49c2:L5f49c2:{c.instructions+=2;NFSU2_TR(0x5f49c2);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f49c7:{NFSU2_TR(0x5f49c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f49ec;}}
}
B5f49c9:L5f49c9:{c.instructions+=3;NFSU2_TR(0x5f49c9);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f49ce:{NFSU2_TR(0x5f49ce);
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
B5f49d0:{NFSU2_TR(0x5f49d0);
if(r1(R+518)){{goto L5f49ec;}}
}
B5f49d2:L5f49d2:{c.instructions+=1;NFSU2_TR(0x5f49d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f49d7ull));
TAIL_STATIC(0x50d510u,50d);
}
B5f49d7:L5f49d7:{c.instructions+=3;NFSU2_TR(0x5f49d7);
__builtin_memmove((R+0),gp(0x8650a0),4);
}
B5f49dc:{NFSU2_TR(0x5f49dc);
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
B5f49de:{NFSU2_TR(0x5f49de);
if(r1(R+518)){{goto L5f49ec;}}
}
B5f49e0:L5f49e0:{c.instructions+=3;NFSU2_TR(0x5f49e0);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f49e2:{NFSU2_TR(0x5f49e2);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f49e4:{NFSU2_TR(0x5f49e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f49e9ull));
TAIL_STATIC(0x50d510u,50d);
}
B5f49e9:L5f49e9:{c.instructions+=1;NFSU2_TR(0x5f49e9);
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
B5f49ec:L5f49ec:{c.instructions+=1;NFSU2_TR(0x5f49ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f49f0:L5f49f0:{c.instructions+=32;NFSU2_TR(0x5f49f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f49f1:{NFSU2_TR(0x5f49f1);
__builtin_memmove((R+20),(R+16),4);
}
B5f49f3:{NFSU2_TR(0x5f49f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f49f6:{NFSU2_TR(0x5f49f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B5f49fc:{NFSU2_TR(0x5f49fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f49ff:{NFSU2_TR(0x5f49ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4a00:{NFSU2_TR(0x5f4a00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4a01:{NFSU2_TR(0x5f4a01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4a02:{NFSU2_TR(0x5f4a02);
__builtin_memmove((R+24),(R+4),4);
}
B5f4a04:{NFSU2_TR(0x5f4a04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4a05:{NFSU2_TR(0x5f4a05);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f4a09:{NFSU2_TR(0x5f4a09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4a0a:{NFSU2_TR(0x5f4a0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f4a0e:{NFSU2_TR(0x5f4a0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4a0f:{NFSU2_TR(0x5f4a0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a16:{NFSU2_TR(0x5f4a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a1e:{NFSU2_TR(0x5f4a1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a26:{NFSU2_TR(0x5f4a26);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a2e:{NFSU2_TR(0x5f4a2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a36:{NFSU2_TR(0x5f4a36);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a3e:{NFSU2_TR(0x5f4a3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a46:{NFSU2_TR(0x5f4a46);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a4e:{NFSU2_TR(0x5f4a4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a56:{NFSU2_TR(0x5f4a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a5e:{NFSU2_TR(0x5f4a5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a66:{NFSU2_TR(0x5f4a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a6e:{NFSU2_TR(0x5f4a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a76:{NFSU2_TR(0x5f4a76);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a7e:{NFSU2_TR(0x5f4a7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a86:{NFSU2_TR(0x5f4a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a8e:{NFSU2_TR(0x5f4a8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4a96:{NFSU2_TR(0x5f4a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4a9bull));
TAIL_STATIC(0x5bae60u,5ba);
}
B5f4a9b:L5f4a9b:{c.instructions+=148;NFSU2_TR(0x5f4a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4a9e:{NFSU2_TR(0x5f4a9e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4aa1:{NFSU2_TR(0x5f4aa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f4aa3:{NFSU2_TR(0x5f4aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4aa6:{NFSU2_TR(0x5f4aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4aa9:{NFSU2_TR(0x5f4aa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4aad:{NFSU2_TR(0x5f4aad);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4ab1:{NFSU2_TR(0x5f4ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4ab9:{NFSU2_TR(0x5f4ab9);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4abd:{NFSU2_TR(0x5f4abd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4ac1:{NFSU2_TR(0x5f4ac1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f4ac4:{NFSU2_TR(0x5f4ac4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4ac7:{NFSU2_TR(0x5f4ac7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4acb:{NFSU2_TR(0x5f4acb);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4ace:{NFSU2_TR(0x5f4ace);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4ad0:{NFSU2_TR(0x5f4ad0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4ad4:{NFSU2_TR(0x5f4ad4);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4ad7:{NFSU2_TR(0x5f4ad7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4ad9:{NFSU2_TR(0x5f4ad9);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4add:{NFSU2_TR(0x5f4add);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4ae1:{NFSU2_TR(0x5f4ae1);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4ae4:{NFSU2_TR(0x5f4ae4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4ae8:{NFSU2_TR(0x5f4ae8);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4aeb:{NFSU2_TR(0x5f4aeb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4aed:{NFSU2_TR(0x5f4aed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4af1:{NFSU2_TR(0x5f4af1);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4af4:{NFSU2_TR(0x5f4af4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4af6:{NFSU2_TR(0x5f4af6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4afa:{NFSU2_TR(0x5f4afa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4afe:{NFSU2_TR(0x5f4afe);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b01:{NFSU2_TR(0x5f4b01);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b05:{NFSU2_TR(0x5f4b05);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b08:{NFSU2_TR(0x5f4b08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b0a:{NFSU2_TR(0x5f4b0a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b0e:{NFSU2_TR(0x5f4b0e);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b11:{NFSU2_TR(0x5f4b11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b13:{NFSU2_TR(0x5f4b13);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4b17:{NFSU2_TR(0x5f4b17);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4b1b:{NFSU2_TR(0x5f4b1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4b1f:{NFSU2_TR(0x5f4b1f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4b21:{NFSU2_TR(0x5f4b21);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4b28:{NFSU2_TR(0x5f4b28);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4b2f:{NFSU2_TR(0x5f4b2f);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4b36:{NFSU2_TR(0x5f4b36);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b3a:{NFSU2_TR(0x5f4b3a);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b3d:{NFSU2_TR(0x5f4b3d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b41:{NFSU2_TR(0x5f4b41);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b44:{NFSU2_TR(0x5f4b44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b46:{NFSU2_TR(0x5f4b46);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b4a:{NFSU2_TR(0x5f4b4a);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b4d:{NFSU2_TR(0x5f4b4d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b4f:{NFSU2_TR(0x5f4b4f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4b53:{NFSU2_TR(0x5f4b53);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b57:{NFSU2_TR(0x5f4b57);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b5a:{NFSU2_TR(0x5f4b5a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b5e:{NFSU2_TR(0x5f4b5e);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b61:{NFSU2_TR(0x5f4b61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b63:{NFSU2_TR(0x5f4b63);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b67:{NFSU2_TR(0x5f4b67);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b6a:{NFSU2_TR(0x5f4b6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b6c:{NFSU2_TR(0x5f4b6c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4b70:{NFSU2_TR(0x5f4b70);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b74:{NFSU2_TR(0x5f4b74);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b77:{NFSU2_TR(0x5f4b77);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b7b:{NFSU2_TR(0x5f4b7b);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b7e:{NFSU2_TR(0x5f4b7e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b80:{NFSU2_TR(0x5f4b80);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4b84:{NFSU2_TR(0x5f4b84);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4b87:{NFSU2_TR(0x5f4b87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4b89:{NFSU2_TR(0x5f4b89);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4b8d:{NFSU2_TR(0x5f4b8d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4b91:{NFSU2_TR(0x5f4b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4b95:{NFSU2_TR(0x5f4b95);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4b97:{NFSU2_TR(0x5f4b97);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4b9e:{NFSU2_TR(0x5f4b9e);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4ba5:{NFSU2_TR(0x5f4ba5);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4bac:{NFSU2_TR(0x5f4bac);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bb0:{NFSU2_TR(0x5f4bb0);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bb3:{NFSU2_TR(0x5f4bb3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bb7:{NFSU2_TR(0x5f4bb7);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bba:{NFSU2_TR(0x5f4bba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4bbc:{NFSU2_TR(0x5f4bbc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bc0:{NFSU2_TR(0x5f4bc0);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bc3:{NFSU2_TR(0x5f4bc3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4bc5:{NFSU2_TR(0x5f4bc5);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4bc9:{NFSU2_TR(0x5f4bc9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bcd:{NFSU2_TR(0x5f4bcd);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bd0:{NFSU2_TR(0x5f4bd0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bd4:{NFSU2_TR(0x5f4bd4);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bd7:{NFSU2_TR(0x5f4bd7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4bd9:{NFSU2_TR(0x5f4bd9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bdd:{NFSU2_TR(0x5f4bdd);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4be0:{NFSU2_TR(0x5f4be0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4be2:{NFSU2_TR(0x5f4be2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4be6:{NFSU2_TR(0x5f4be6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bea:{NFSU2_TR(0x5f4bea);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bed:{NFSU2_TR(0x5f4bed);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bf1:{NFSU2_TR(0x5f4bf1);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bf4:{NFSU2_TR(0x5f4bf4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4bf6:{NFSU2_TR(0x5f4bf6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4bfa:{NFSU2_TR(0x5f4bfa);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4bfd:{NFSU2_TR(0x5f4bfd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4bff:{NFSU2_TR(0x5f4bff);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4c03:{NFSU2_TR(0x5f4c03);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4c07:{NFSU2_TR(0x5f4c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4c0b:{NFSU2_TR(0x5f4c0b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4c0d:{NFSU2_TR(0x5f4c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4c14:{NFSU2_TR(0x5f4c14);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4c1b:{NFSU2_TR(0x5f4c1b);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4c22:{NFSU2_TR(0x5f4c22);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c26:{NFSU2_TR(0x5f4c26);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c2c:{NFSU2_TR(0x5f4c2c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c30:{NFSU2_TR(0x5f4c30);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c36:{NFSU2_TR(0x5f4c36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4c38:{NFSU2_TR(0x5f4c38);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c3c:{NFSU2_TR(0x5f4c3c);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c42:{NFSU2_TR(0x5f4c42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4c44:{NFSU2_TR(0x5f4c44);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4c48:{NFSU2_TR(0x5f4c48);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c4c:{NFSU2_TR(0x5f4c4c);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c52:{NFSU2_TR(0x5f4c52);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c56:{NFSU2_TR(0x5f4c56);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c5c:{NFSU2_TR(0x5f4c5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4c5e:{NFSU2_TR(0x5f4c5e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c62:{NFSU2_TR(0x5f4c62);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c68:{NFSU2_TR(0x5f4c68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4c6a:{NFSU2_TR(0x5f4c6a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4c6e:{NFSU2_TR(0x5f4c6e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c72:{NFSU2_TR(0x5f4c72);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c78:{NFSU2_TR(0x5f4c78);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c7c:{NFSU2_TR(0x5f4c7c);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c82:{NFSU2_TR(0x5f4c82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4c84:{NFSU2_TR(0x5f4c84);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4c88:{NFSU2_TR(0x5f4c88);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4c8e:{NFSU2_TR(0x5f4c8e);
w1(R+12,u8(0x1ull));
}
B5f4c90:{NFSU2_TR(0x5f4c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4c98:{NFSU2_TR(0x5f4c98);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f4ca0:{NFSU2_TR(0x5f4ca0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4ca2:{NFSU2_TR(0x5f4ca2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f4ca4:{NFSU2_TR(0x5f4ca4);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5f4cab:{NFSU2_TR(0x5f4cab);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4caf:{NFSU2_TR(0x5f4caf);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4cb3:{NFSU2_TR(0x5f4cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4cb7:{NFSU2_TR(0x5f4cb7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4cb9:{NFSU2_TR(0x5f4cb9);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4cc0:{NFSU2_TR(0x5f4cc0);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4cc7:{NFSU2_TR(0x5f4cc7);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4cce:{NFSU2_TR(0x5f4cce);
__builtin_memmove((R+28),(R+28),4);
}
B5f4cd0:L5f4cd0:{c.instructions+=8;NFSU2_TR(0x5f4cd0);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f4cd4:{NFSU2_TR(0x5f4cd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4cd5:{NFSU2_TR(0x5f4cd5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4cd7:{NFSU2_TR(0x5f4cd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4cd9:{NFSU2_TR(0x5f4cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f4cdc:{NFSU2_TR(0x5f4cdc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4cdd:{NFSU2_TR(0x5f4cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4ce0:{NFSU2_TR(0x5f4ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4ce5ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5f4ce5:L5f4ce5:{c.instructions+=16;NFSU2_TR(0x5f4ce5);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4ce9:{NFSU2_TR(0x5f4ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4cec:{NFSU2_TR(0x5f4cec);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4cf0:{NFSU2_TR(0x5f4cf0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5f4cf2:{NFSU2_TR(0x5f4cf2);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4cf5:{NFSU2_TR(0x5f4cf5);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f4cf9:{NFSU2_TR(0x5f4cf9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B5f4cfc:{NFSU2_TR(0x5f4cfc);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4d00:{NFSU2_TR(0x5f4d00);
w1(R+12,u8(u32(r1(R+12))&u32(r1(R+0))));
}
B5f4d02:{NFSU2_TR(0x5f4d02);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5f4d05:{NFSU2_TR(0x5f4d05);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f4d0b:{NFSU2_TR(0x5f4d0b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4d0f:{NFSU2_TR(0x5f4d0f);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f4d12:{NFSU2_TR(0x5f4d12);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4d16:{NFSU2_TR(0x5f4d16);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4d1a:{NFSU2_TR(0x5f4d1a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f4cd0u);}goto L5f4cd0;}}
}
B5f4d1c:L5f4d1c:{c.instructions+=19;NFSU2_TR(0x5f4d1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f4d1e:{NFSU2_TR(0x5f4d1e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4d22:{NFSU2_TR(0x5f4d22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4d26:{NFSU2_TR(0x5f4d26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4d2a:{NFSU2_TR(0x5f4d2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4d2e:{NFSU2_TR(0x5f4d2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d35:{NFSU2_TR(0x5f4d35);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4d39:{NFSU2_TR(0x5f4d39);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d40:{NFSU2_TR(0x5f4d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4d44:{NFSU2_TR(0x5f4d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d4b:{NFSU2_TR(0x5f4d4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4d4f:{NFSU2_TR(0x5f4d4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d56:{NFSU2_TR(0x5f4d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4d5a:{NFSU2_TR(0x5f4d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d61:{NFSU2_TR(0x5f4d61);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4d65:{NFSU2_TR(0x5f4d65);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d6c:{NFSU2_TR(0x5f4d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d73:{NFSU2_TR(0x5f4d73);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4d7a:{NFSU2_TR(0x5f4d7a);
if(r1(R+518)){{goto L5f4f9c;}}
}
B5f4d80:L5f4d80:{c.instructions+=63;NFSU2_TR(0x5f4d80);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f4d82:{NFSU2_TR(0x5f4d82);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f4d89:{NFSU2_TR(0x5f4d89);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4d90:{NFSU2_TR(0x5f4d90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4d91:{NFSU2_TR(0x5f4d91);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4d98:{NFSU2_TR(0x5f4d98);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4d9f:{NFSU2_TR(0x5f4d9f);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4da6:{NFSU2_TR(0x5f4da6);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4dad:{NFSU2_TR(0x5f4dad);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4db4:{NFSU2_TR(0x5f4db4);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4dbb:{NFSU2_TR(0x5f4dbb);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4dc2:{NFSU2_TR(0x5f4dc2);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4dc9:{NFSU2_TR(0x5f4dc9);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4dd0:{NFSU2_TR(0x5f4dd0);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4dd7:{NFSU2_TR(0x5f4dd7);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4dde:{NFSU2_TR(0x5f4dde);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4de5:{NFSU2_TR(0x5f4de5);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4dec:{NFSU2_TR(0x5f4dec);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4df3:{NFSU2_TR(0x5f4df3);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4dfa:{NFSU2_TR(0x5f4dfa);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e01:{NFSU2_TR(0x5f4e01);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4e08:{NFSU2_TR(0x5f4e08);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4e0f:{NFSU2_TR(0x5f4e0f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e16:{NFSU2_TR(0x5f4e16);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4e1d:{NFSU2_TR(0x5f4e1d);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4e24:{NFSU2_TR(0x5f4e24);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e2b:{NFSU2_TR(0x5f4e2b);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4e32:{NFSU2_TR(0x5f4e32);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4e39:{NFSU2_TR(0x5f4e39);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e40:{NFSU2_TR(0x5f4e40);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4e47:{NFSU2_TR(0x5f4e47);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4e4b:{NFSU2_TR(0x5f4e4b);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e52:{NFSU2_TR(0x5f4e52);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4e59:{NFSU2_TR(0x5f4e59);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4e5d:{NFSU2_TR(0x5f4e5d);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e64:{NFSU2_TR(0x5f4e64);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f4e6b:{NFSU2_TR(0x5f4e6b);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4e6f:{NFSU2_TR(0x5f4e6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4e71:{NFSU2_TR(0x5f4e71);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e78:{NFSU2_TR(0x5f4e78);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4e7f:{NFSU2_TR(0x5f4e7f);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4e86:{NFSU2_TR(0x5f4e86);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4e8d:{NFSU2_TR(0x5f4e8d);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4e94:{NFSU2_TR(0x5f4e94);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4e9b:{NFSU2_TR(0x5f4e9b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4e9d:{NFSU2_TR(0x5f4e9d);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4ea4:{NFSU2_TR(0x5f4ea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4eab:{NFSU2_TR(0x5f4eab);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f4eb2:{NFSU2_TR(0x5f4eb2);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4eb9:{NFSU2_TR(0x5f4eb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4eba:{NFSU2_TR(0x5f4eba);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4ebe:{NFSU2_TR(0x5f4ebe);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4ec5:{NFSU2_TR(0x5f4ec5);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4ec9:{NFSU2_TR(0x5f4ec9);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4ed0:{NFSU2_TR(0x5f4ed0);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4ed4:{NFSU2_TR(0x5f4ed4);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4edb:{NFSU2_TR(0x5f4edb);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4ee2:{NFSU2_TR(0x5f4ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4ee9:{NFSU2_TR(0x5f4ee9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4eeb:{NFSU2_TR(0x5f4eeb);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4ef2:{NFSU2_TR(0x5f4ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4ef9:{NFSU2_TR(0x5f4ef9);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4f00:{NFSU2_TR(0x5f4f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4f05ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5f4f05:L5f4f05:{c.instructions+=5;NFSU2_TR(0x5f4f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f4f0c:{NFSU2_TR(0x5f4f0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4f0d:{NFSU2_TR(0x5f4f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f4f14:{NFSU2_TR(0x5f4f14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4f15:{NFSU2_TR(0x5f4f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4f1aull));
TAIL_STATIC(0x43cf10u,43c);
}
B5f4f1a:L5f4f1a:{c.instructions+=7;NFSU2_TR(0x5f4f1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f4f21:{NFSU2_TR(0x5f4f21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4f22:{NFSU2_TR(0x5f4f22);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f4f29:{NFSU2_TR(0x5f4f29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4f2a:{NFSU2_TR(0x5f4f2a);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f4f31:{NFSU2_TR(0x5f4f31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f4f32:{NFSU2_TR(0x5f4f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4f37ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5f4f37:L5f4f37:{c.instructions+=6;NFSU2_TR(0x5f4f37);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f4f3e:{NFSU2_TR(0x5f4f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4f41:{NFSU2_TR(0x5f4f41);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f4f43:{NFSU2_TR(0x5f4f43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5f4f46:{NFSU2_TR(0x5f4f46);
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
B5f4f48:{NFSU2_TR(0x5f4f48);
if(r1(R+518)){{goto L5f4f62;}}
}
B5f4f4a:L5f4f4a:{c.instructions+=2;NFSU2_TR(0x5f4f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f4f4c:{NFSU2_TR(0x5f4f4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4f4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f4f4f:L5f4f4f:{c.instructions+=2;NFSU2_TR(0x5f4f4f);
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
B5f4f51:{NFSU2_TR(0x5f4f51);
if(r1(R+518)){{goto L5f4f62;}}
}
B5f4f53:L5f4f53:{c.instructions+=3;NFSU2_TR(0x5f4f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4f56:{NFSU2_TR(0x5f4f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f4f58:{NFSU2_TR(0x5f4f58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f4f5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f4f5b:L5f4f5b:{c.instructions+=2;NFSU2_TR(0x5f4f5b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1f0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f4f60:{NFSU2_TR(0x5f4f60);
{goto L5f4f65;}
}
B5f4f62:L5f4f62:{c.instructions+=1;NFSU2_TR(0x5f4f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4f65:L5f4f65:{c.instructions+=15;NFSU2_TR(0x5f4f65);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4f69:{NFSU2_TR(0x5f4f69);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4f6f:{NFSU2_TR(0x5f4f6f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f4f72:{NFSU2_TR(0x5f4f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4f75:{NFSU2_TR(0x5f4f75);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4f7c:{NFSU2_TR(0x5f4f7c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f4f7e:{NFSU2_TR(0x5f4f7e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4f80:{NFSU2_TR(0x5f4f80);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f4f82:{NFSU2_TR(0x5f4f82);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5f4f84:{NFSU2_TR(0x5f4f84);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4f88:{NFSU2_TR(0x5f4f88);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f4f8e:{NFSU2_TR(0x5f4f8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f4f90:{NFSU2_TR(0x5f4f90);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4f93:{NFSU2_TR(0x5f4f93);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4f9a:{NFSU2_TR(0x5f4f9a);
{goto L5f4f9e;}
}
B5f4f9c:L5f4f9c:{c.instructions+=1;NFSU2_TR(0x5f4f9c);
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
B5f4f9e:L5f4f9e:{c.instructions+=25;NFSU2_TR(0x5f4f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f4fa1:{NFSU2_TR(0x5f4fa1);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f4fa8:{NFSU2_TR(0x5f4fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4faf:{NFSU2_TR(0x5f4faf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4fb1:{NFSU2_TR(0x5f4fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4fb8:{NFSU2_TR(0x5f4fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4fbb:{NFSU2_TR(0x5f4fbb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f4fbe:{NFSU2_TR(0x5f4fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4fc5:{NFSU2_TR(0x5f4fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4fc8:{NFSU2_TR(0x5f4fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4fcb:{NFSU2_TR(0x5f4fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4fd2:{NFSU2_TR(0x5f4fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4fd5:{NFSU2_TR(0x5f4fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4fdc:{NFSU2_TR(0x5f4fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4fdf:{NFSU2_TR(0x5f4fdf);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f4fe6:{NFSU2_TR(0x5f4fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4fe9:{NFSU2_TR(0x5f4fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4fec:{NFSU2_TR(0x5f4fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f4fed:{NFSU2_TR(0x5f4fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4ff0:{NFSU2_TR(0x5f4ff0);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f4ff7:{NFSU2_TR(0x5f4ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f4ff8:{NFSU2_TR(0x5f4ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4ffb:{NFSU2_TR(0x5f4ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f4ffe:{NFSU2_TR(0x5f4ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f4fff:{NFSU2_TR(0x5f4fff);
__builtin_memmove((R+16),(R+20),4);
TAIL_STATIC(0x5f5001u,5f5);
}
XIT:NFSU2_TR_EXIT(0x5f4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
