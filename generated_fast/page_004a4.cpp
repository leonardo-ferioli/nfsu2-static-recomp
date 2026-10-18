#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 page_4a4(Cpu& c){return body_4a4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a4000:goto L4a4000;
case 0x4a4005:c.instructions+=1;goto B4a4005;
case 0x4a400a:goto L4a400a;
case 0x4a400d:c.instructions+=3;goto B4a400d;
case 0x4a400e:c.instructions+=2;goto B4a400e;
case 0x4a400f:c.instructions+=1;goto B4a400f;
case 0x4a4014:goto L4a4014;
case 0x4a4017:c.instructions+=2;goto B4a4017;
case 0x4a4018:c.instructions+=1;goto B4a4018;
case 0x4a4020:goto L4a4020;
case 0x4a4023:c.instructions+=5;goto B4a4023;
case 0x4a4024:c.instructions+=4;goto B4a4024;
case 0x4a4026:c.instructions+=3;goto B4a4026;
case 0x4a4027:c.instructions+=2;goto B4a4027;
case 0x4a402c:c.instructions+=1;goto B4a402c;
case 0x4a4031:goto L4a4031;
case 0x4a4033:c.instructions+=2;goto B4a4033;
case 0x4a4037:c.instructions+=1;goto B4a4037;
case 0x4a403d:goto L4a403d;
case 0x4a403f:c.instructions+=2;goto B4a403f;
case 0x4a4044:c.instructions+=1;goto B4a4044;
case 0x4a4046:goto L4a4046;
case 0x4a4049:c.instructions+=1;goto B4a4049;
case 0x4a404b:goto L4a404b;
case 0x4a4050:c.instructions+=1;goto B4a4050;
case 0x4a4055:goto L4a4055;
case 0x4a4058:c.instructions+=2;goto B4a4058;
case 0x4a405c:c.instructions+=1;goto B4a405c;
case 0x4a405e:goto L4a405e;
case 0x4a4061:c.instructions+=2;goto B4a4061;
case 0x4a4064:c.instructions+=1;goto B4a4064;
case 0x4a4066:goto L4a4066;
case 0x4a4069:c.instructions+=1;goto B4a4069;
case 0x4a406b:goto L4a406b;
case 0x4a406d:c.instructions+=8;goto B4a406d;
case 0x4a4070:c.instructions+=7;goto B4a4070;
case 0x4a4073:c.instructions+=6;goto B4a4073;
case 0x4a4075:c.instructions+=5;goto B4a4075;
case 0x4a4076:c.instructions+=4;goto B4a4076;
case 0x4a407c:c.instructions+=3;goto B4a407c;
case 0x4a4082:c.instructions+=2;goto B4a4082;
case 0x4a4083:c.instructions+=1;goto B4a4083;
case 0x4a4088:goto L4a4088;
case 0x4a408b:c.instructions+=4;goto B4a408b;
case 0x4a408c:c.instructions+=3;goto B4a408c;
case 0x4a4090:c.instructions+=2;goto B4a4090;
case 0x4a4091:c.instructions+=1;goto B4a4091;
case 0x4a4096:goto L4a4096;
case 0x4a4099:c.instructions+=1;goto B4a4099;
case 0x4a409b:goto L4a409b;
case 0x4a409f:c.instructions+=1;goto B4a409f;
case 0x4a40a1:goto L4a40a1;
case 0x4a40a3:c.instructions+=2;goto B4a40a3;
case 0x4a40a8:c.instructions+=1;goto B4a40a8;
case 0x4a40ad:goto L4a40ad;
case 0x4a40b0:c.instructions+=4;goto B4a40b0;
case 0x4a40b1:c.instructions+=3;goto B4a40b1;
case 0x4a40b5:c.instructions+=2;goto B4a40b5;
case 0x4a40b6:c.instructions+=1;goto B4a40b6;
case 0x4a40bb:goto L4a40bb;
case 0x4a40be:c.instructions+=1;goto B4a40be;
case 0x4a40c0:goto L4a40c0;
case 0x4a40c3:c.instructions+=1;goto B4a40c3;
case 0x4a40c5:goto L4a40c5;
case 0x4a40c9:c.instructions+=1;goto B4a40c9;
case 0x4a40cc:goto L4a40cc;
case 0x4a40d0:c.instructions+=5;goto B4a40d0;
case 0x4a40d2:c.instructions+=4;goto B4a40d2;
case 0x4a40d6:c.instructions+=3;goto B4a40d6;
case 0x4a40da:c.instructions+=2;goto B4a40da;
case 0x4a40db:c.instructions+=1;goto B4a40db;
case 0x4a40e0:goto L4a40e0;
case 0x4a40e3:c.instructions+=6;goto B4a40e3;
case 0x4a40e7:c.instructions+=5;goto B4a40e7;
case 0x4a40e8:c.instructions+=4;goto B4a40e8;
case 0x4a40ed:c.instructions+=3;goto B4a40ed;
case 0x4a40ee:c.instructions+=2;goto B4a40ee;
case 0x4a40f3:c.instructions+=1;goto B4a40f3;
case 0x4a40f8:goto L4a40f8;
case 0x4a40fb:c.instructions+=3;goto B4a40fb;
case 0x4a40fc:c.instructions+=2;goto B4a40fc;
case 0x4a40fd:c.instructions+=1;goto B4a40fd;
case 0x4a4102:goto L4a4102;
case 0x4a4105:c.instructions+=4;goto B4a4105;
case 0x4a4106:c.instructions+=3;goto B4a4106;
case 0x4a4107:c.instructions+=2;goto B4a4107;
case 0x4a410a:c.instructions+=1;goto B4a410a;
case 0x4a4110:goto L4a4110;
case 0x4a4113:c.instructions+=6;goto B4a4113;
case 0x4a4114:c.instructions+=5;goto B4a4114;
case 0x4a4115:c.instructions+=4;goto B4a4115;
case 0x4a4119:c.instructions+=3;goto B4a4119;
case 0x4a411c:c.instructions+=2;goto B4a411c;
case 0x4a411e:c.instructions+=1;goto B4a411e;
case 0x4a4120:goto L4a4120;
case 0x4a4125:c.instructions+=1;goto B4a4125;
case 0x4a412a:goto L4a412a;
case 0x4a412b:c.instructions+=5;goto B4a412b;
case 0x4a4130:c.instructions+=4;goto B4a4130;
case 0x4a4134:c.instructions+=3;goto B4a4134;
case 0x4a4136:c.instructions+=2;goto B4a4136;
case 0x4a4137:c.instructions+=1;goto B4a4137;
case 0x4a413c:goto L4a413c;
case 0x4a413f:c.instructions+=1;goto B4a413f;
case 0x4a4141:goto L4a4141;
case 0x4a4144:c.instructions+=10;goto B4a4144;
case 0x4a4148:c.instructions+=9;goto B4a4148;
case 0x4a414b:c.instructions+=8;goto B4a414b;
case 0x4a414e:c.instructions+=7;goto B4a414e;
case 0x4a4150:c.instructions+=6;goto B4a4150;
case 0x4a4154:c.instructions+=5;goto B4a4154;
case 0x4a4156:c.instructions+=4;goto B4a4156;
case 0x4a4157:c.instructions+=3;goto B4a4157;
case 0x4a415b:c.instructions+=2;goto B4a415b;
case 0x4a415f:c.instructions+=1;goto B4a415f;
case 0x4a4164:goto L4a4164;
case 0x4a4167:c.instructions+=6;goto B4a4167;
case 0x4a416b:c.instructions+=5;goto B4a416b;
case 0x4a416c:c.instructions+=4;goto B4a416c;
case 0x4a4171:c.instructions+=3;goto B4a4171;
case 0x4a4172:c.instructions+=2;goto B4a4172;
case 0x4a4177:c.instructions+=1;goto B4a4177;
case 0x4a417c:goto L4a417c;
case 0x4a417f:c.instructions+=3;goto B4a417f;
case 0x4a4180:c.instructions+=2;goto B4a4180;
case 0x4a4181:c.instructions+=1;goto B4a4181;
case 0x4a4186:goto L4a4186;
case 0x4a4189:c.instructions+=4;goto B4a4189;
case 0x4a418a:c.instructions+=3;goto B4a418a;
case 0x4a418b:c.instructions+=2;goto B4a418b;
case 0x4a418e:c.instructions+=1;goto B4a418e;
case 0x4a41a0:goto L4a41a0;
case 0x4a41a4:c.instructions+=6;goto B4a41a4;
case 0x4a41a5:c.instructions+=5;goto B4a41a5;
case 0x4a41a9:c.instructions+=4;goto B4a41a9;
case 0x4a41ab:c.instructions+=3;goto B4a41ab;
case 0x4a41ac:c.instructions+=2;goto B4a41ac;
case 0x4a41ae:c.instructions+=1;goto B4a41ae;
case 0x4a41b4:goto L4a41b4;
case 0x4a41b5:c.instructions+=5;goto B4a41b5;
case 0x4a41b7:c.instructions+=4;goto B4a41b7;
case 0x4a41b8:c.instructions+=3;goto B4a41b8;
case 0x4a41bb:c.instructions+=2;goto B4a41bb;
case 0x4a41bc:c.instructions+=1;goto B4a41bc;
case 0x4a41c0:goto L4a41c0;
case 0x4a41c3:c.instructions+=3;goto B4a41c3;
case 0x4a41c4:c.instructions+=2;goto B4a41c4;
case 0x4a41c9:c.instructions+=1;goto B4a41c9;
case 0x4a41ce:goto L4a41ce;
case 0x4a41cf:c.instructions+=2;goto B4a41cf;
case 0x4a41d0:c.instructions+=1;goto B4a41d0;
case 0x4a41d5:goto L4a41d5;
case 0x4a41d6:c.instructions+=1;goto B4a41d6;
case 0x4a41db:goto L4a41db;
case 0x4a41de:c.instructions+=3;goto B4a41de;
case 0x4a41df:c.instructions+=2;goto B4a41df;
case 0x4a41e4:c.instructions+=1;goto B4a41e4;
case 0x4a41e9:goto L4a41e9;
case 0x4a41ea:c.instructions+=2;goto B4a41ea;
case 0x4a41eb:c.instructions+=1;goto B4a41eb;
case 0x4a41f0:goto L4a41f0;
case 0x4a41f1:c.instructions+=1;goto B4a41f1;
case 0x4a41f6:goto L4a41f6;
case 0x4a41f9:c.instructions+=3;goto B4a41f9;
case 0x4a41fa:c.instructions+=2;goto B4a41fa;
case 0x4a41ff:c.instructions+=1;goto B4a41ff;
case 0x4a4204:goto L4a4204;
case 0x4a4205:c.instructions+=2;goto B4a4205;
case 0x4a4206:c.instructions+=1;goto B4a4206;
case 0x4a420b:goto L4a420b;
case 0x4a420c:c.instructions+=1;goto B4a420c;
case 0x4a4211:goto L4a4211;
case 0x4a4214:c.instructions+=3;goto B4a4214;
case 0x4a4215:c.instructions+=2;goto B4a4215;
case 0x4a421a:c.instructions+=1;goto B4a421a;
case 0x4a421f:goto L4a421f;
case 0x4a4222:c.instructions+=3;goto B4a4222;
case 0x4a4223:c.instructions+=2;goto B4a4223;
case 0x4a4224:c.instructions+=1;goto B4a4224;
case 0x4a4229:goto L4a4229;
case 0x4a422a:c.instructions+=1;goto B4a422a;
case 0x4a422f:goto L4a422f;
case 0x4a4232:c.instructions+=3;goto B4a4232;
case 0x4a4233:c.instructions+=2;goto B4a4233;
case 0x4a4234:c.instructions+=1;goto B4a4234;
case 0x4a4236:goto L4a4236;
case 0x4a4237:c.instructions+=1;goto B4a4237;
case 0x4a4238:goto L4a4238;
case 0x4a4239:c.instructions+=2;goto B4a4239;
case 0x4a423a:c.instructions+=1;goto B4a423a;
case 0x4a4240:goto L4a4240;
case 0x4a4241:c.instructions+=6;goto B4a4241;
case 0x4a4242:c.instructions+=5;goto B4a4242;
case 0x4a4244:c.instructions+=4;goto B4a4244;
case 0x4a4245:c.instructions+=3;goto B4a4245;
case 0x4a424b:c.instructions+=2;goto B4a424b;
case 0x4a4250:c.instructions+=1;goto B4a4250;
case 0x4a4255:goto L4a4255;
case 0x4a425b:c.instructions+=1;goto B4a425b;
case 0x4a4260:goto L4a4260;
case 0x4a4261:c.instructions+=5;goto B4a4261;
case 0x4a4264:c.instructions+=4;goto B4a4264;
case 0x4a4269:c.instructions+=3;goto B4a4269;
case 0x4a426e:c.instructions+=2;goto B4a426e;
case 0x4a426f:c.instructions+=1;goto B4a426f;
case 0x4a4274:goto L4a4274;
case 0x4a4277:c.instructions+=3;goto B4a4277;
case 0x4a427a:c.instructions+=2;goto B4a427a;
case 0x4a427f:c.instructions+=1;goto B4a427f;
case 0x4a4284:goto L4a4284;
case 0x4a4285:c.instructions+=4;goto B4a4285;
case 0x4a428a:c.instructions+=3;goto B4a428a;
case 0x4a428f:c.instructions+=2;goto B4a428f;
case 0x4a4290:c.instructions+=1;goto B4a4290;
case 0x4a4295:goto L4a4295;
case 0x4a4298:c.instructions+=3;goto B4a4298;
case 0x4a429b:c.instructions+=2;goto B4a429b;
case 0x4a429d:c.instructions+=1;goto B4a429d;
case 0x4a42a2:goto L4a42a2;
case 0x4a42a3:c.instructions+=4;goto B4a42a3;
case 0x4a42a8:c.instructions+=3;goto B4a42a8;
case 0x4a42ad:c.instructions+=2;goto B4a42ad;
case 0x4a42ae:c.instructions+=1;goto B4a42ae;
case 0x4a42b3:goto L4a42b3;
case 0x4a42b8:goto L4a42b8;
case 0x4a42b9:c.instructions+=1;goto B4a42b9;
case 0x4a42be:goto L4a42be;
case 0x4a42c1:c.instructions+=2;goto B4a42c1;
case 0x4a42c3:c.instructions+=1;goto B4a42c3;
case 0x4a42c5:goto L4a42c5;
case 0x4a42c8:c.instructions+=4;goto B4a42c8;
case 0x4a42ca:c.instructions+=3;goto B4a42ca;
case 0x4a42cf:c.instructions+=2;goto B4a42cf;
case 0x4a42d0:c.instructions+=1;goto B4a42d0;
case 0x4a42d5:goto L4a42d5;
case 0x4a42d6:c.instructions+=1;goto B4a42d6;
case 0x4a42db:goto L4a42db;
case 0x4a42de:goto L4a42de;
case 0x4a42e4:c.instructions+=1;goto B4a42e4;
case 0x4a42e9:goto L4a42e9;
case 0x4a42ec:c.instructions+=5;goto B4a42ec;
case 0x4a42ef:c.instructions+=4;goto B4a42ef;
case 0x4a42f0:c.instructions+=3;goto B4a42f0;
case 0x4a42f6:c.instructions+=2;goto B4a42f6;
case 0x4a42f7:c.instructions+=1;goto B4a42f7;
case 0x4a42fc:goto L4a42fc;
case 0x4a42fd:c.instructions+=3;goto B4a42fd;
case 0x4a42fe:c.instructions+=2;goto B4a42fe;
case 0x4a42ff:c.instructions+=1;goto B4a42ff;
case 0x4a4300:goto L4a4300;
case 0x4a4303:c.instructions+=4;goto B4a4303;
case 0x4a4304:c.instructions+=3;goto B4a4304;
case 0x4a4305:c.instructions+=2;goto B4a4305;
case 0x4a4307:c.instructions+=1;goto B4a4307;
case 0x4a430c:goto L4a430c;
case 0x4a430f:c.instructions+=10;goto B4a430f;
case 0x4a4312:c.instructions+=9;goto B4a4312;
case 0x4a4315:c.instructions+=8;goto B4a4315;
case 0x4a4319:c.instructions+=7;goto B4a4319;
case 0x4a431d:c.instructions+=6;goto B4a431d;
case 0x4a431e:c.instructions+=5;goto B4a431e;
case 0x4a4322:c.instructions+=4;goto B4a4322;
case 0x4a4323:c.instructions+=3;goto B4a4323;
case 0x4a4324:c.instructions+=2;goto B4a4324;
case 0x4a4328:c.instructions+=1;goto B4a4328;
case 0x4a432d:goto L4a432d;
case 0x4a4331:c.instructions+=8;goto B4a4331;
case 0x4a4335:c.instructions+=7;goto B4a4335;
case 0x4a4339:c.instructions+=6;goto B4a4339;
case 0x4a433c:c.instructions+=5;goto B4a433c;
case 0x4a433d:c.instructions+=4;goto B4a433d;
case 0x4a433e:c.instructions+=3;goto B4a433e;
case 0x4a4341:c.instructions+=2;goto B4a4341;
case 0x4a4342:c.instructions+=1;goto B4a4342;
case 0x4a4347:goto L4a4347;
case 0x4a434a:c.instructions+=8;goto B4a434a;
case 0x4a434d:c.instructions+=7;goto B4a434d;
case 0x4a4351:c.instructions+=6;goto B4a4351;
case 0x4a4352:c.instructions+=5;goto B4a4352;
case 0x4a4356:c.instructions+=4;goto B4a4356;
case 0x4a4357:c.instructions+=3;goto B4a4357;
case 0x4a4358:c.instructions+=2;goto B4a4358;
case 0x4a435c:c.instructions+=1;goto B4a435c;
case 0x4a4361:goto L4a4361;
case 0x4a4365:c.instructions+=5;goto B4a4365;
case 0x4a4369:c.instructions+=4;goto B4a4369;
case 0x4a436a:c.instructions+=3;goto B4a436a;
case 0x4a436b:c.instructions+=2;goto B4a436b;
case 0x4a436c:c.instructions+=1;goto B4a436c;
case 0x4a4371:goto L4a4371;
case 0x4a4374:c.instructions+=4;goto B4a4374;
case 0x4a4375:c.instructions+=3;goto B4a4375;
case 0x4a4376:c.instructions+=2;goto B4a4376;
case 0x4a4379:c.instructions+=1;goto B4a4379;
case 0x4a4380:goto L4a4380;
case 0x4a4383:c.instructions+=8;goto B4a4383;
case 0x4a4384:c.instructions+=7;goto B4a4384;
case 0x4a4386:c.instructions+=6;goto B4a4386;
case 0x4a4389:c.instructions+=5;goto B4a4389;
case 0x4a438c:c.instructions+=4;goto B4a438c;
case 0x4a438d:c.instructions+=3;goto B4a438d;
case 0x4a438e:c.instructions+=2;goto B4a438e;
case 0x4a4394:c.instructions+=1;goto B4a4394;
case 0x4a4399:goto L4a4399;
case 0x4a439c:c.instructions+=5;goto B4a439c;
case 0x4a439f:c.instructions+=4;goto B4a439f;
case 0x4a43a1:c.instructions+=3;goto B4a43a1;
case 0x4a43a2:c.instructions+=2;goto B4a43a2;
case 0x4a43a5:c.instructions+=1;goto B4a43a5;
case 0x4a43a7:goto L4a43a7;
case 0x4a43ae:goto L4a43ae;
case 0x4a43b3:c.instructions+=1;goto B4a43b3;
case 0x4a43b5:goto L4a43b5;
case 0x4a43ba:c.instructions+=1;goto B4a43ba;
case 0x4a43bc:goto L4a43bc;
case 0x4a43c1:c.instructions+=1;goto B4a43c1;
case 0x4a43c3:goto L4a43c3;
case 0x4a43c8:c.instructions+=1;goto B4a43c8;
case 0x4a43ca:goto L4a43ca;
case 0x4a43cf:c.instructions+=1;goto B4a43cf;
case 0x4a43d1:goto L4a43d1;
case 0x4a43d6:c.instructions+=1;goto B4a43d6;
case 0x4a43d8:goto L4a43d8;
case 0x4a43dd:c.instructions+=1;goto B4a43dd;
case 0x4a43df:goto L4a43df;
case 0x4a43e2:c.instructions+=8;goto B4a43e2;
case 0x4a43e8:c.instructions+=7;goto B4a43e8;
case 0x4a43ea:c.instructions+=6;goto B4a43ea;
case 0x4a43ec:c.instructions+=5;goto B4a43ec;
case 0x4a43f0:c.instructions+=4;goto B4a43f0;
case 0x4a43f1:c.instructions+=3;goto B4a43f1;
case 0x4a43f5:c.instructions+=2;goto B4a43f5;
case 0x4a43f9:c.instructions+=1;goto B4a43f9;
case 0x4a43fe:goto L4a43fe;
case 0x4a4400:goto L4a4400;
case 0x4a4405:goto L4a4405;
case 0x4a4408:c.instructions+=3;goto B4a4408;
case 0x4a440d:c.instructions+=2;goto B4a440d;
case 0x4a440e:c.instructions+=1;goto B4a440e;
case 0x4a4413:goto L4a4413;
case 0x4a4416:c.instructions+=2;goto B4a4416;
case 0x4a4418:c.instructions+=1;goto B4a4418;
case 0x4a441a:goto L4a441a;
case 0x4a441d:c.instructions+=5;goto B4a441d;
case 0x4a4421:c.instructions+=4;goto B4a4421;
case 0x4a4422:c.instructions+=3;goto B4a4422;
case 0x4a4427:c.instructions+=2;goto B4a4427;
case 0x4a4428:c.instructions+=1;goto B4a4428;
case 0x4a442d:goto L4a442d;
case 0x4a4430:c.instructions+=4;goto B4a4430;
case 0x4a4431:c.instructions+=3;goto B4a4431;
case 0x4a4432:c.instructions+=2;goto B4a4432;
case 0x4a4435:c.instructions+=1;goto B4a4435;
case 0x4a4436:goto L4a4436;
case 0x4a4439:c.instructions+=3;goto B4a4439;
case 0x4a443a:c.instructions+=2;goto B4a443a;
case 0x4a443b:c.instructions+=1;goto B4a443b;
case 0x4a4440:goto L4a4440;
case 0x4a4443:c.instructions+=4;goto B4a4443;
case 0x4a4444:c.instructions+=3;goto B4a4444;
case 0x4a4445:c.instructions+=2;goto B4a4445;
case 0x4a4448:c.instructions+=1;goto B4a4448;
case 0x4a4480:goto L4a4480;
case 0x4a4485:c.instructions+=9;goto B4a4485;
case 0x4a4486:c.instructions+=8;goto B4a4486;
case 0x4a4489:c.instructions+=7;goto B4a4489;
case 0x4a448d:c.instructions+=6;goto B4a448d;
case 0x4a448e:c.instructions+=5;goto B4a448e;
case 0x4a448f:c.instructions+=4;goto B4a448f;
case 0x4a4491:c.instructions+=3;goto B4a4491;
case 0x4a4493:c.instructions+=2;goto B4a4493;
case 0x4a4498:c.instructions+=1;goto B4a4498;
case 0x4a449a:goto L4a449a;
case 0x4a449d:c.instructions+=2;goto B4a449d;
case 0x4a449e:c.instructions+=1;goto B4a449e;
case 0x4a44a3:goto L4a44a3;
case 0x4a44a4:c.instructions+=1;goto B4a44a4;
case 0x4a44a9:goto L4a44a9;
case 0x4a44ab:goto L4a44ab;
case 0x4a44ad:c.instructions+=3;goto B4a44ad;
case 0x4a44b0:c.instructions+=2;goto B4a44b0;
case 0x4a44b1:c.instructions+=1;goto B4a44b1;
case 0x4a44b3:goto L4a44b3;
case 0x4a44b8:goto L4a44b8;
case 0x4a44b9:c.instructions+=1;goto B4a44b9;
case 0x4a44be:goto L4a44be;
case 0x4a44c1:c.instructions+=3;goto B4a44c1;
case 0x4a44c6:c.instructions+=2;goto B4a44c6;
case 0x4a44c7:c.instructions+=1;goto B4a44c7;
case 0x4a44cc:goto L4a44cc;
case 0x4a44cd:c.instructions+=1;goto B4a44cd;
case 0x4a44d2:goto L4a44d2;
case 0x4a44d4:goto L4a44d4;
case 0x4a44d9:goto L4a44d9;
case 0x4a44da:c.instructions+=1;goto B4a44da;
case 0x4a44df:goto L4a44df;
case 0x4a44e2:c.instructions+=3;goto B4a44e2;
case 0x4a44e7:c.instructions+=2;goto B4a44e7;
case 0x4a44e8:c.instructions+=1;goto B4a44e8;
case 0x4a44ed:goto L4a44ed;
case 0x4a44ee:c.instructions+=1;goto B4a44ee;
case 0x4a44f3:goto L4a44f3;
case 0x4a44f8:c.instructions+=3;goto B4a44f8;
case 0x4a44fb:c.instructions+=2;goto B4a44fb;
case 0x4a4500:c.instructions+=1;goto B4a4500;
case 0x4a4502:goto L4a4502;
case 0x4a4507:c.instructions+=1;goto B4a4507;
case 0x4a4509:goto L4a4509;
case 0x4a450c:c.instructions+=3;goto B4a450c;
case 0x4a4511:c.instructions+=2;goto B4a4511;
case 0x4a4512:c.instructions+=1;goto B4a4512;
case 0x4a4517:goto L4a4517;
case 0x4a4518:c.instructions+=1;goto B4a4518;
case 0x4a451d:goto L4a451d;
case 0x4a4520:c.instructions+=3;goto B4a4520;
case 0x4a4525:c.instructions+=2;goto B4a4525;
case 0x4a4526:c.instructions+=1;goto B4a4526;
case 0x4a452b:goto L4a452b;
case 0x4a452c:c.instructions+=1;goto B4a452c;
case 0x4a4531:goto L4a4531;
case 0x4a4534:c.instructions+=3;goto B4a4534;
case 0x4a4535:c.instructions+=2;goto B4a4535;
case 0x4a4536:c.instructions+=1;goto B4a4536;
case 0x4a4539:goto L4a4539;
case 0x4a453d:c.instructions+=6;goto B4a453d;
case 0x4a453e:c.instructions+=5;goto B4a453e;
case 0x4a453f:c.instructions+=4;goto B4a453f;
case 0x4a4541:c.instructions+=3;goto B4a4541;
case 0x4a4543:c.instructions+=2;goto B4a4543;
case 0x4a4548:c.instructions+=1;goto B4a4548;
case 0x4a454a:goto L4a454a;
case 0x4a454f:c.instructions+=1;goto B4a454f;
case 0x4a4551:goto L4a4551;
case 0x4a4557:c.instructions+=1;goto B4a4557;
case 0x4a4559:goto L4a4559;
case 0x4a455e:c.instructions+=1;goto B4a455e;
case 0x4a4560:goto L4a4560;
case 0x4a4565:goto L4a4565;
case 0x4a456a:goto L4a456a;
case 0x4a456d:c.instructions+=3;goto B4a456d;
case 0x4a4572:c.instructions+=2;goto B4a4572;
case 0x4a4574:c.instructions+=1;goto B4a4574;
case 0x4a4579:goto L4a4579;
case 0x4a457b:c.instructions+=1;goto B4a457b;
case 0x4a457d:goto L4a457d;
case 0x4a4583:c.instructions+=2;goto B4a4583;
case 0x4a4585:c.instructions+=1;goto B4a4585;
case 0x4a4587:goto L4a4587;
case 0x4a458c:c.instructions+=1;goto B4a458c;
case 0x4a458e:goto L4a458e;
case 0x4a4593:goto L4a4593;
case 0x4a4598:goto L4a4598;
case 0x4a459b:c.instructions+=3;goto B4a459b;
case 0x4a45a0:c.instructions+=2;goto B4a45a0;
case 0x4a45a2:c.instructions+=1;goto B4a45a2;
case 0x4a45a7:goto L4a45a7;
case 0x4a45a9:goto L4a45a9;
case 0x4a45ac:goto L4a45ac;
case 0x4a45af:c.instructions+=5;goto B4a45af;
case 0x4a45b1:c.instructions+=4;goto B4a45b1;
case 0x4a45b2:c.instructions+=3;goto B4a45b2;
case 0x4a45b7:c.instructions+=2;goto B4a45b7;
case 0x4a45b8:c.instructions+=1;goto B4a45b8;
case 0x4a45bd:goto L4a45bd;
case 0x4a45c0:c.instructions+=5;goto B4a45c0;
case 0x4a45c2:c.instructions+=4;goto B4a45c2;
case 0x4a45c3:c.instructions+=3;goto B4a45c3;
case 0x4a45c8:c.instructions+=2;goto B4a45c8;
case 0x4a45c9:c.instructions+=1;goto B4a45c9;
case 0x4a45ce:goto L4a45ce;
case 0x4a45d1:c.instructions+=5;goto B4a45d1;
case 0x4a45d2:c.instructions+=4;goto B4a45d2;
case 0x4a45d3:c.instructions+=3;goto B4a45d3;
case 0x4a45d4:c.instructions+=2;goto B4a45d4;
case 0x4a45d5:c.instructions+=1;goto B4a45d5;
case 0x4a45e0:goto L4a45e0;
case 0x4a45e6:c.instructions+=3;goto B4a45e6;
case 0x4a45eb:c.instructions+=2;goto B4a45eb;
case 0x4a45ed:c.instructions+=1;goto B4a45ed;
case 0x4a45ef:goto L4a45ef;
case 0x4a45f5:c.instructions+=4;goto B4a45f5;
case 0x4a45fb:c.instructions+=3;goto B4a45fb;
case 0x4a4601:c.instructions+=2;goto B4a4601;
case 0x4a4603:c.instructions+=1;goto B4a4603;
case 0x4a4605:goto L4a4605;
case 0x4a4607:goto L4a4607;
case 0x4a4610:goto L4a4610;
case 0x4a4611:c.instructions+=2;goto B4a4611;
case 0x4a4618:c.instructions+=1;goto B4a4618;
case 0x4a461a:goto L4a461a;
case 0x4a461f:c.instructions+=2;goto B4a461f;
case 0x4a4621:c.instructions+=1;goto B4a4621;
case 0x4a4623:goto L4a4623;
case 0x4a462a:c.instructions+=1;goto B4a462a;
case 0x4a462c:goto L4a462c;
case 0x4a4632:c.instructions+=3;goto B4a4632;
case 0x4a4638:c.instructions+=2;goto B4a4638;
case 0x4a463e:c.instructions+=1;goto B4a463e;
case 0x4a4643:goto L4a4643;
case 0x4a4645:c.instructions+=1;goto B4a4645;
case 0x4a4647:goto L4a4647;
case 0x4a464d:c.instructions+=2;goto B4a464d;
case 0x4a4650:c.instructions+=1;goto B4a4650;
case 0x4a4652:goto L4a4652;
case 0x4a4658:c.instructions+=2;goto B4a4658;
case 0x4a465e:c.instructions+=1;goto B4a465e;
case 0x4a4663:goto L4a4663;
case 0x4a4669:c.instructions+=6;goto B4a4669;
case 0x4a466f:c.instructions+=5;goto B4a466f;
case 0x4a4673:c.instructions+=4;goto B4a4673;
case 0x4a4677:c.instructions+=3;goto B4a4677;
case 0x4a4678:c.instructions+=2;goto B4a4678;
case 0x4a467e:c.instructions+=1;goto B4a467e;
case 0x4a4683:goto L4a4683;
case 0x4a4685:c.instructions+=1;goto B4a4685;
case 0x4a4687:goto L4a4687;
case 0x4a4689:c.instructions+=2;goto B4a4689;
case 0x4a468a:c.instructions+=1;goto B4a468a;
case 0x4a468b:goto L4a468b;
case 0x4a468d:c.instructions+=2;goto B4a468d;
case 0x4a468e:c.instructions+=1;goto B4a468e;
case 0x4a4690:goto L4a4690;
case 0x4a4696:c.instructions+=2;goto B4a4696;
case 0x4a4698:c.instructions+=1;goto B4a4698;
case 0x4a469a:goto L4a469a;
case 0x4a469c:c.instructions+=2;goto B4a469c;
case 0x4a469e:c.instructions+=1;goto B4a469e;
case 0x4a46a0:goto L4a46a0;
case 0x4a46aa:c.instructions+=1;goto B4a46aa;
case 0x4a46b0:goto L4a46b0;
case 0x4a46b1:c.instructions+=3;goto B4a46b1;
case 0x4a46b7:c.instructions+=2;goto B4a46b7;
case 0x4a46b9:c.instructions+=1;goto B4a46b9;
case 0x4a46bb:goto L4a46bb;
case 0x4a46c1:c.instructions+=1;goto B4a46c1;
case 0x4a46c6:goto L4a46c6;
case 0x4a46c9:c.instructions+=3;goto B4a46c9;
case 0x4a46cc:c.instructions+=2;goto B4a46cc;
case 0x4a46cd:c.instructions+=1;goto B4a46cd;
case 0x4a46d2:goto L4a46d2;
case 0x4a46d5:goto L4a46d5;
case 0x4a46d6:c.instructions+=1;goto B4a46d6;
case 0x4a46e0:goto L4a46e0;
case 0x4a46e5:c.instructions+=2;goto B4a46e5;
case 0x4a46e7:c.instructions+=1;goto B4a46e7;
case 0x4a46e9:goto L4a46e9;
case 0x4a46ec:c.instructions+=4;goto B4a46ec;
case 0x4a46ef:c.instructions+=3;goto B4a46ef;
case 0x4a46f1:c.instructions+=2;goto B4a46f1;
case 0x4a46f2:c.instructions+=1;goto B4a46f2;
case 0x4a46f7:goto L4a46f7;
case 0x4a46fd:c.instructions+=2;goto B4a46fd;
case 0x4a4700:c.instructions+=1;goto B4a4700;
case 0x4a4705:goto L4a4705;
case 0x4a4710:goto L4a4710;
case 0x4a4714:c.instructions+=11;goto B4a4714;
case 0x4a4717:c.instructions+=10;goto B4a4717;
case 0x4a471b:c.instructions+=9;goto B4a471b;
case 0x4a471e:c.instructions+=8;goto B4a471e;
case 0x4a4720:c.instructions+=7;goto B4a4720;
case 0x4a4721:c.instructions+=6;goto B4a4721;
case 0x4a4723:c.instructions+=5;goto B4a4723;
case 0x4a4725:c.instructions+=4;goto B4a4725;
case 0x4a4727:c.instructions+=3;goto B4a4727;
case 0x4a472a:c.instructions+=2;goto B4a472a;
case 0x4a472b:c.instructions+=1;goto B4a472b;
case 0x4a4730:goto L4a4730;
case 0x4a4734:c.instructions+=9;goto B4a4734;
case 0x4a4737:c.instructions+=8;goto B4a4737;
case 0x4a473b:c.instructions+=7;goto B4a473b;
case 0x4a473c:c.instructions+=6;goto B4a473c;
case 0x4a473f:c.instructions+=5;goto B4a473f;
case 0x4a4741:c.instructions+=4;goto B4a4741;
case 0x4a4743:c.instructions+=3;goto B4a4743;
case 0x4a4746:c.instructions+=2;goto B4a4746;
case 0x4a4747:c.instructions+=1;goto B4a4747;
case 0x4a4750:goto L4a4750;
case 0x4a4754:c.instructions+=4;goto B4a4754;
case 0x4a4758:c.instructions+=3;goto B4a4758;
case 0x4a4759:c.instructions+=2;goto B4a4759;
case 0x4a475a:c.instructions+=1;goto B4a475a;
case 0x4a475f:goto L4a475f;
case 0x4a4762:c.instructions+=1;goto B4a4762;
case 0x4a4770:goto L4a4770;
case 0x4a4771:c.instructions+=7;goto B4a4771;
case 0x4a4772:c.instructions+=6;goto B4a4772;
case 0x4a4776:c.instructions+=5;goto B4a4776;
case 0x4a4778:c.instructions+=4;goto B4a4778;
case 0x4a4779:c.instructions+=3;goto B4a4779;
case 0x4a477a:c.instructions+=2;goto B4a477a;
case 0x4a477c:c.instructions+=1;goto B4a477c;
case 0x4a4782:goto L4a4782;
case 0x4a4787:goto L4a4787;
case 0x4a478a:c.instructions+=3;goto B4a478a;
case 0x4a478b:c.instructions+=2;goto B4a478b;
case 0x4a4790:c.instructions+=1;goto B4a4790;
case 0x4a4795:goto L4a4795;
case 0x4a4796:c.instructions+=2;goto B4a4796;
case 0x4a4797:c.instructions+=1;goto B4a4797;
case 0x4a479c:goto L4a479c;
case 0x4a479d:c.instructions+=1;goto B4a479d;
case 0x4a47a2:goto L4a47a2;
case 0x4a47a5:c.instructions+=3;goto B4a47a5;
case 0x4a47a6:c.instructions+=2;goto B4a47a6;
case 0x4a47ab:c.instructions+=1;goto B4a47ab;
case 0x4a47b0:goto L4a47b0;
case 0x4a47b1:c.instructions+=2;goto B4a47b1;
case 0x4a47b2:c.instructions+=1;goto B4a47b2;
case 0x4a47b7:goto L4a47b7;
case 0x4a47b8:c.instructions+=1;goto B4a47b8;
case 0x4a47bd:goto L4a47bd;
case 0x4a47c0:c.instructions+=3;goto B4a47c0;
case 0x4a47c1:c.instructions+=2;goto B4a47c1;
case 0x4a47c6:c.instructions+=1;goto B4a47c6;
case 0x4a47cb:goto L4a47cb;
case 0x4a47cc:c.instructions+=2;goto B4a47cc;
case 0x4a47cd:c.instructions+=1;goto B4a47cd;
case 0x4a47d2:goto L4a47d2;
case 0x4a47d3:c.instructions+=1;goto B4a47d3;
case 0x4a47d8:goto L4a47d8;
case 0x4a47db:c.instructions+=3;goto B4a47db;
case 0x4a47dc:c.instructions+=2;goto B4a47dc;
case 0x4a47e1:c.instructions+=1;goto B4a47e1;
case 0x4a47e6:goto L4a47e6;
case 0x4a47e9:c.instructions+=3;goto B4a47e9;
case 0x4a47ea:c.instructions+=2;goto B4a47ea;
case 0x4a47eb:c.instructions+=1;goto B4a47eb;
case 0x4a47f0:goto L4a47f0;
case 0x4a47f1:c.instructions+=1;goto B4a47f1;
case 0x4a47f6:goto L4a47f6;
case 0x4a47f9:c.instructions+=3;goto B4a47f9;
case 0x4a47fa:c.instructions+=2;goto B4a47fa;
case 0x4a47ff:c.instructions+=1;goto B4a47ff;
case 0x4a4804:goto L4a4804;
case 0x4a4805:c.instructions+=2;goto B4a4805;
case 0x4a4806:c.instructions+=1;goto B4a4806;
case 0x4a480b:goto L4a480b;
case 0x4a480c:c.instructions+=1;goto B4a480c;
case 0x4a4811:goto L4a4811;
case 0x4a4814:c.instructions+=3;goto B4a4814;
case 0x4a4815:c.instructions+=2;goto B4a4815;
case 0x4a4816:c.instructions+=1;goto B4a4816;
case 0x4a481c:goto L4a481c;
case 0x4a4820:goto L4a4820;
case 0x4a4824:c.instructions+=2;goto B4a4824;
case 0x4a4826:c.instructions+=1;goto B4a4826;
case 0x4a482c:goto L4a482c;
case 0x4a482e:c.instructions+=3;goto B4a482e;
case 0x4a482f:c.instructions+=2;goto B4a482f;
case 0x4a4832:c.instructions+=1;goto B4a4832;
case 0x4a4834:goto L4a4834;
case 0x4a4837:c.instructions+=3;goto B4a4837;
case 0x4a4838:c.instructions+=2;goto B4a4838;
case 0x4a483d:c.instructions+=1;goto B4a483d;
case 0x4a4842:goto L4a4842;
case 0x4a4843:c.instructions+=2;goto B4a4843;
case 0x4a4844:c.instructions+=1;goto B4a4844;
case 0x4a4849:goto L4a4849;
case 0x4a484a:c.instructions+=1;goto B4a484a;
case 0x4a484f:goto L4a484f;
case 0x4a4852:c.instructions+=3;goto B4a4852;
case 0x4a4853:c.instructions+=2;goto B4a4853;
case 0x4a4858:c.instructions+=1;goto B4a4858;
case 0x4a485d:goto L4a485d;
case 0x4a485e:c.instructions+=2;goto B4a485e;
case 0x4a485f:c.instructions+=1;goto B4a485f;
case 0x4a4864:goto L4a4864;
case 0x4a4865:c.instructions+=1;goto B4a4865;
case 0x4a486a:goto L4a486a;
case 0x4a486d:c.instructions+=3;goto B4a486d;
case 0x4a486e:c.instructions+=2;goto B4a486e;
case 0x4a4873:c.instructions+=1;goto B4a4873;
case 0x4a4878:goto L4a4878;
case 0x4a4879:c.instructions+=2;goto B4a4879;
case 0x4a487a:c.instructions+=1;goto B4a487a;
case 0x4a487f:goto L4a487f;
case 0x4a4880:c.instructions+=1;goto B4a4880;
case 0x4a4885:goto L4a4885;
case 0x4a4888:c.instructions+=3;goto B4a4888;
case 0x4a4889:c.instructions+=2;goto B4a4889;
case 0x4a488e:c.instructions+=1;goto B4a488e;
case 0x4a4893:goto L4a4893;
case 0x4a4896:c.instructions+=3;goto B4a4896;
case 0x4a4897:c.instructions+=2;goto B4a4897;
case 0x4a4898:c.instructions+=1;goto B4a4898;
case 0x4a489d:goto L4a489d;
case 0x4a489e:c.instructions+=1;goto B4a489e;
case 0x4a48a3:goto L4a48a3;
case 0x4a48a6:c.instructions+=3;goto B4a48a6;
case 0x4a48a7:c.instructions+=2;goto B4a48a7;
case 0x4a48ac:c.instructions+=1;goto B4a48ac;
case 0x4a48b1:goto L4a48b1;
case 0x4a48b2:c.instructions+=2;goto B4a48b2;
case 0x4a48b3:c.instructions+=1;goto B4a48b3;
case 0x4a48b8:goto L4a48b8;
case 0x4a48b9:c.instructions+=1;goto B4a48b9;
case 0x4a48be:goto L4a48be;
case 0x4a48c1:c.instructions+=3;goto B4a48c1;
case 0x4a48c2:c.instructions+=2;goto B4a48c2;
case 0x4a48c3:c.instructions+=1;goto B4a48c3;
case 0x4a48c9:goto L4a48c9;
case 0x4a48ca:c.instructions+=4;goto B4a48ca;
case 0x4a48cb:c.instructions+=3;goto B4a48cb;
case 0x4a48cc:c.instructions+=2;goto B4a48cc;
case 0x4a48cd:c.instructions+=1;goto B4a48cd;
case 0x4a48d0:goto L4a48d0;
case 0x4a48d3:c.instructions+=10;goto B4a48d3;
case 0x4a48d7:c.instructions+=9;goto B4a48d7;
case 0x4a48d8:c.instructions+=8;goto B4a48d8;
case 0x4a48da:c.instructions+=7;goto B4a48da;
case 0x4a48dd:c.instructions+=6;goto B4a48dd;
case 0x4a48df:c.instructions+=5;goto B4a48df;
case 0x4a48e3:c.instructions+=4;goto B4a48e3;
case 0x4a48e7:c.instructions+=3;goto B4a48e7;
case 0x4a48e8:c.instructions+=2;goto B4a48e8;
case 0x4a48ec:c.instructions+=1;goto B4a48ec;
case 0x4a48f1:goto L4a48f1;
case 0x4a48f5:c.instructions+=8;goto B4a48f5;
case 0x4a48f8:c.instructions+=7;goto B4a48f8;
case 0x4a48fc:c.instructions+=6;goto B4a48fc;
case 0x4a48fd:c.instructions+=5;goto B4a48fd;
case 0x4a4902:c.instructions+=4;goto B4a4902;
case 0x4a4903:c.instructions+=3;goto B4a4903;
case 0x4a4904:c.instructions+=2;goto B4a4904;
case 0x4a4909:c.instructions+=1;goto B4a4909;
case 0x4a490e:goto L4a490e;
case 0x4a4911:c.instructions+=3;goto B4a4911;
case 0x4a4912:c.instructions+=2;goto B4a4912;
case 0x4a4913:c.instructions+=1;goto B4a4913;
case 0x4a4918:goto L4a4918;
case 0x4a491b:c.instructions+=3;goto B4a491b;
case 0x4a491c:c.instructions+=2;goto B4a491c;
case 0x4a491f:c.instructions+=1;goto B4a491f;
case 0x4a4930:goto L4a4930;
case 0x4a4934:c.instructions+=8;goto B4a4934;
case 0x4a4935:c.instructions+=7;goto B4a4935;
case 0x4a4937:c.instructions+=6;goto B4a4937;
case 0x4a493b:c.instructions+=5;goto B4a493b;
case 0x4a493e:c.instructions+=4;goto B4a493e;
case 0x4a4941:c.instructions+=3;goto B4a4941;
case 0x4a4942:c.instructions+=2;goto B4a4942;
case 0x4a4947:c.instructions+=1;goto B4a4947;
case 0x4a494c:goto L4a494c;
case 0x4a494e:c.instructions+=1;goto B4a494e;
case 0x4a4950:goto L4a4950;
case 0x4a4954:c.instructions+=5;goto B4a4954;
case 0x4a4957:c.instructions+=4;goto B4a4957;
case 0x4a495c:c.instructions+=3;goto B4a495c;
case 0x4a495d:c.instructions+=2;goto B4a495d;
case 0x4a4962:c.instructions+=1;goto B4a4962;
case 0x4a4967:goto L4a4967;
case 0x4a496a:c.instructions+=3;goto B4a496a;
case 0x4a496b:c.instructions+=2;goto B4a496b;
case 0x4a496c:c.instructions+=1;goto B4a496c;
case 0x4a4971:goto L4a4971;
case 0x4a4974:c.instructions+=2;goto B4a4974;
case 0x4a4975:c.instructions+=1;goto B4a4975;
case 0x4a4978:goto L4a4978;
case 0x4a4979:c.instructions+=2;goto B4a4979;
case 0x4a497b:c.instructions+=1;goto B4a497b;
case 0x4a4980:goto L4a4980;
case 0x4a4983:c.instructions+=4;goto B4a4983;
case 0x4a4986:c.instructions+=3;goto B4a4986;
case 0x4a4987:c.instructions+=2;goto B4a4987;
case 0x4a498c:c.instructions+=1;goto B4a498c;
case 0x4a4991:goto L4a4991;
case 0x4a4995:c.instructions+=4;goto B4a4995;
case 0x4a4996:c.instructions+=3;goto B4a4996;
case 0x4a499b:c.instructions+=2;goto B4a499b;
case 0x4a499d:c.instructions+=1;goto B4a499d;
case 0x4a49a2:goto L4a49a2;
case 0x4a49a5:c.instructions+=4;goto B4a49a5;
case 0x4a49a6:c.instructions+=3;goto B4a49a6;
case 0x4a49a7:c.instructions+=2;goto B4a49a7;
case 0x4a49a8:c.instructions+=1;goto B4a49a8;
case 0x4a49ad:goto L4a49ad;
case 0x4a49b0:c.instructions+=2;goto B4a49b0;
case 0x4a49b1:c.instructions+=1;goto B4a49b1;
case 0x4a49b6:goto L4a49b6;
case 0x4a49b9:c.instructions+=3;goto B4a49b9;
case 0x4a49ba:c.instructions+=2;goto B4a49ba;
case 0x4a49bb:c.instructions+=1;goto B4a49bb;
case 0x4a49c0:goto L4a49c0;
case 0x4a49c3:c.instructions+=7;goto B4a49c3;
case 0x4a49c4:c.instructions+=6;goto B4a49c4;
case 0x4a49c5:c.instructions+=5;goto B4a49c5;
case 0x4a49c7:c.instructions+=4;goto B4a49c7;
case 0x4a49c9:c.instructions+=3;goto B4a49c9;
case 0x4a49ce:c.instructions+=2;goto B4a49ce;
case 0x4a49d3:c.instructions+=1;goto B4a49d3;
case 0x4a49d7:goto L4a49d7;
case 0x4a49d9:goto L4a49d9;
case 0x4a49db:c.instructions+=8;goto B4a49db;
case 0x4a49dc:c.instructions+=7;goto B4a49dc;
case 0x4a49e0:c.instructions+=6;goto B4a49e0;
case 0x4a49e1:c.instructions+=5;goto B4a49e1;
case 0x4a49e6:c.instructions+=4;goto B4a49e6;
case 0x4a49ea:c.instructions+=3;goto B4a49ea;
case 0x4a49ec:c.instructions+=2;goto B4a49ec;
case 0x4a49ed:c.instructions+=1;goto B4a49ed;
case 0x4a49f2:goto L4a49f2;
case 0x4a49f6:c.instructions+=3;goto B4a49f6;
case 0x4a49f9:c.instructions+=2;goto B4a49f9;
case 0x4a49fb:c.instructions+=1;goto B4a49fb;
case 0x4a49fd:goto L4a49fd;
case 0x4a4a00:c.instructions+=2;goto B4a4a00;
case 0x4a4a05:c.instructions+=1;goto B4a4a05;
case 0x4a4a0a:goto L4a4a0a;
case 0x4a4a0b:c.instructions+=4;goto B4a4a0b;
case 0x4a4a0f:c.instructions+=3;goto B4a4a0f;
case 0x4a4a10:c.instructions+=2;goto B4a4a10;
case 0x4a4a11:c.instructions+=1;goto B4a4a11;
case 0x4a4a16:goto L4a4a16;
case 0x4a4a19:c.instructions+=4;goto B4a4a19;
case 0x4a4a1a:c.instructions+=3;goto B4a4a1a;
case 0x4a4a1b:c.instructions+=2;goto B4a4a1b;
case 0x4a4a1e:c.instructions+=1;goto B4a4a1e;
case 0x4a4a21:goto L4a4a21;
case 0x4a4a23:c.instructions+=1;goto B4a4a23;
case 0x4a4a25:goto L4a4a25;
case 0x4a4a28:c.instructions+=2;goto B4a4a28;
case 0x4a4a2d:c.instructions+=1;goto B4a4a2d;
case 0x4a4a32:goto L4a4a32;
case 0x4a4a33:c.instructions+=4;goto B4a4a33;
case 0x4a4a37:c.instructions+=3;goto B4a4a37;
case 0x4a4a38:c.instructions+=2;goto B4a4a38;
case 0x4a4a39:c.instructions+=1;goto B4a4a39;
case 0x4a4a3e:goto L4a4a3e;
case 0x4a4a41:c.instructions+=4;goto B4a4a41;
case 0x4a4a42:c.instructions+=3;goto B4a4a42;
case 0x4a4a43:c.instructions+=2;goto B4a4a43;
case 0x4a4a46:c.instructions+=1;goto B4a4a46;
case 0x4a4a49:goto L4a4a49;
case 0x4a4a4e:c.instructions+=2;goto B4a4a4e;
case 0x4a4a50:c.instructions+=1;goto B4a4a50;
case 0x4a4a52:goto L4a4a52;
case 0x4a4a57:c.instructions+=2;goto B4a4a57;
case 0x4a4a59:c.instructions+=1;goto B4a4a59;
case 0x4a4a5b:goto L4a4a5b;
case 0x4a4a5f:c.instructions+=9;goto B4a4a5f;
case 0x4a4a63:c.instructions+=8;goto B4a4a63;
case 0x4a4a6a:c.instructions+=7;goto B4a4a6a;
case 0x4a4a6d:c.instructions+=6;goto B4a4a6d;
case 0x4a4a6e:c.instructions+=5;goto B4a4a6e;
case 0x4a4a73:c.instructions+=4;goto B4a4a73;
case 0x4a4a77:c.instructions+=3;goto B4a4a77;
case 0x4a4a78:c.instructions+=2;goto B4a4a78;
case 0x4a4a79:c.instructions+=1;goto B4a4a79;
case 0x4a4a7e:goto L4a4a7e;
case 0x4a4a81:c.instructions+=4;goto B4a4a81;
case 0x4a4a82:c.instructions+=3;goto B4a4a82;
case 0x4a4a83:c.instructions+=2;goto B4a4a83;
case 0x4a4a86:c.instructions+=1;goto B4a4a86;
case 0x4a4a89:goto L4a4a89;
case 0x4a4a8e:c.instructions+=4;goto B4a4a8e;
case 0x4a4a90:c.instructions+=3;goto B4a4a90;
case 0x4a4a94:c.instructions+=2;goto B4a4a94;
case 0x4a4a98:c.instructions+=1;goto B4a4a98;
case 0x4a4a9a:goto L4a4a9a;
case 0x4a4a9f:c.instructions+=2;goto B4a4a9f;
case 0x4a4aa1:c.instructions+=1;goto B4a4aa1;
case 0x4a4aa3:goto L4a4aa3;
case 0x4a4aaa:c.instructions+=2;goto B4a4aaa;
case 0x4a4aac:c.instructions+=1;goto B4a4aac;
case 0x4a4aae:goto L4a4aae;
case 0x4a4ab1:c.instructions+=8;goto B4a4ab1;
case 0x4a4ab3:c.instructions+=7;goto B4a4ab3;
case 0x4a4ab6:c.instructions+=6;goto B4a4ab6;
case 0x4a4ab9:c.instructions+=5;goto B4a4ab9;
case 0x4a4aba:c.instructions+=4;goto B4a4aba;
case 0x4a4ac0:c.instructions+=3;goto B4a4ac0;
case 0x4a4ac6:c.instructions+=2;goto B4a4ac6;
case 0x4a4ac7:c.instructions+=1;goto B4a4ac7;
case 0x4a4acc:goto L4a4acc;
case 0x4a4acd:c.instructions+=4;goto B4a4acd;
case 0x4a4ad1:c.instructions+=3;goto B4a4ad1;
case 0x4a4ad2:c.instructions+=2;goto B4a4ad2;
case 0x4a4ad3:c.instructions+=1;goto B4a4ad3;
case 0x4a4ad8:goto L4a4ad8;
case 0x4a4adb:c.instructions+=4;goto B4a4adb;
case 0x4a4adc:c.instructions+=3;goto B4a4adc;
case 0x4a4add:c.instructions+=2;goto B4a4add;
case 0x4a4ae0:c.instructions+=1;goto B4a4ae0;
case 0x4a4ae3:goto L4a4ae3;
case 0x4a4aea:c.instructions+=4;goto B4a4aea;
case 0x4a4af0:c.instructions+=3;goto B4a4af0;
case 0x4a4af6:c.instructions+=2;goto B4a4af6;
case 0x4a4afc:c.instructions+=1;goto B4a4afc;
case 0x4a4b01:goto L4a4b01;
case 0x4a4b05:c.instructions+=4;goto B4a4b05;
case 0x4a4b07:c.instructions+=3;goto B4a4b07;
case 0x4a4b0c:c.instructions+=2;goto B4a4b0c;
case 0x4a4b11:c.instructions+=1;goto B4a4b11;
case 0x4a4b15:goto L4a4b15;
case 0x4a4b17:goto L4a4b17;
case 0x4a4b19:c.instructions+=6;goto B4a4b19;
case 0x4a4b1a:c.instructions+=5;goto B4a4b1a;
case 0x4a4b1c:c.instructions+=4;goto B4a4b1c;
case 0x4a4b20:c.instructions+=3;goto B4a4b20;
case 0x4a4b21:c.instructions+=2;goto B4a4b21;
case 0x4a4b25:c.instructions+=1;goto B4a4b25;
case 0x4a4b2a:goto L4a4b2a;
case 0x4a4b2d:c.instructions+=6;goto B4a4b2d;
case 0x4a4b31:c.instructions+=5;goto B4a4b31;
case 0x4a4b32:c.instructions+=4;goto B4a4b32;
case 0x4a4b36:c.instructions+=3;goto B4a4b36;
case 0x4a4b37:c.instructions+=2;goto B4a4b37;
case 0x4a4b38:c.instructions+=1;goto B4a4b38;
case 0x4a4b3d:goto L4a4b3d;
case 0x4a4b40:c.instructions+=4;goto B4a4b40;
case 0x4a4b41:c.instructions+=3;goto B4a4b41;
case 0x4a4b42:c.instructions+=2;goto B4a4b42;
case 0x4a4b45:c.instructions+=1;goto B4a4b45;
case 0x4a4b50:goto L4a4b50;
case 0x4a4b54:c.instructions+=2;goto B4a4b54;
case 0x4a4b59:c.instructions+=1;goto B4a4b59;
case 0x4a4b60:goto L4a4b60;
case 0x4a4b65:c.instructions+=3;goto B4a4b65;
case 0x4a4b67:c.instructions+=2;goto B4a4b67;
case 0x4a4b6a:c.instructions+=1;goto B4a4b6a;
case 0x4a4b70:goto L4a4b70;
case 0x4a4b72:c.instructions+=11;goto B4a4b72;
case 0x4a4b77:c.instructions+=10;goto B4a4b77;
case 0x4a4b7d:c.instructions+=9;goto B4a4b7d;
case 0x4a4b7e:c.instructions+=8;goto B4a4b7e;
case 0x4a4b85:c.instructions+=7;goto B4a4b85;
case 0x4a4b86:c.instructions+=6;goto B4a4b86;
case 0x4a4b87:c.instructions+=5;goto B4a4b87;
case 0x4a4b89:c.instructions+=4;goto B4a4b89;
case 0x4a4b8d:c.instructions+=3;goto B4a4b8d;
case 0x4a4b93:c.instructions+=2;goto B4a4b93;
case 0x4a4b9b:c.instructions+=1;goto B4a4b9b;
case 0x4a4ba0:goto L4a4ba0;
case 0x4a4baa:c.instructions+=4;goto B4a4baa;
case 0x4a4bb4:c.instructions+=3;goto B4a4bb4;
case 0x4a4bba:c.instructions+=2;goto B4a4bba;
case 0x4a4bbc:c.instructions+=1;goto B4a4bbc;
case 0x4a4bbe:goto L4a4bbe;
case 0x4a4bc4:c.instructions+=1;goto B4a4bc4;
case 0x4a4bc9:goto L4a4bc9;
case 0x4a4bcb:c.instructions+=2;goto B4a4bcb;
case 0x4a4bd3:c.instructions+=1;goto B4a4bd3;
case 0x4a4bd8:goto L4a4bd8;
case 0x4a4bdc:c.instructions+=4;goto B4a4bdc;
case 0x4a4bdd:c.instructions+=3;goto B4a4bdd;
case 0x4a4be4:c.instructions+=2;goto B4a4be4;
case 0x4a4be7:c.instructions+=1;goto B4a4be7;
case 0x4a4bf0:goto L4a4bf0;
case 0x4a4bf1:c.instructions+=6;goto B4a4bf1;
case 0x4a4bf2:c.instructions+=5;goto B4a4bf2;
case 0x4a4bf4:c.instructions+=4;goto B4a4bf4;
case 0x4a4bf7:c.instructions+=3;goto B4a4bf7;
case 0x4a4bf9:c.instructions+=2;goto B4a4bf9;
case 0x4a4bfe:c.instructions+=1;goto B4a4bfe;
case 0x4a4c03:goto L4a4c03;
case 0x4a4c06:c.instructions+=3;goto B4a4c06;
case 0x4a4c07:c.instructions+=2;goto B4a4c07;
case 0x4a4c0c:c.instructions+=1;goto B4a4c0c;
case 0x4a4c11:goto L4a4c11;
case 0x4a4c14:c.instructions+=3;goto B4a4c14;
case 0x4a4c15:c.instructions+=2;goto B4a4c15;
case 0x4a4c16:c.instructions+=1;goto B4a4c16;
case 0x4a4c1b:goto L4a4c1b;
case 0x4a4c21:c.instructions+=6;goto B4a4c21;
case 0x4a4c27:c.instructions+=5;goto B4a4c27;
case 0x4a4c2a:c.instructions+=4;goto B4a4c2a;
case 0x4a4c2c:c.instructions+=3;goto B4a4c2c;
case 0x4a4c32:c.instructions+=2;goto B4a4c32;
case 0x4a4c38:c.instructions+=1;goto B4a4c38;
case 0x4a4c3a:goto L4a4c3a;
case 0x4a4c40:c.instructions+=2;goto B4a4c40;
case 0x4a4c42:c.instructions+=1;goto B4a4c42;
case 0x4a4c44:goto L4a4c44;
case 0x4a4c4a:c.instructions+=2;goto B4a4c4a;
case 0x4a4c4c:c.instructions+=1;goto B4a4c4c;
case 0x4a4c4e:goto L4a4c4e;
case 0x4a4c50:c.instructions+=4;goto B4a4c50;
case 0x4a4c55:c.instructions+=3;goto B4a4c55;
case 0x4a4c5a:c.instructions+=2;goto B4a4c5a;
case 0x4a4c5f:c.instructions+=1;goto B4a4c5f;
case 0x4a4c64:goto L4a4c64;
case 0x4a4c67:goto L4a4c67;
case 0x4a4c6d:c.instructions+=2;goto B4a4c6d;
case 0x4a4c6f:c.instructions+=1;goto B4a4c6f;
case 0x4a4c74:goto L4a4c74;
case 0x4a4c78:c.instructions+=7;goto B4a4c78;
case 0x4a4c7e:c.instructions+=6;goto B4a4c7e;
case 0x4a4c85:c.instructions+=5;goto B4a4c85;
case 0x4a4c8b:c.instructions+=4;goto B4a4c8b;
case 0x4a4c8c:c.instructions+=3;goto B4a4c8c;
case 0x4a4c93:c.instructions+=2;goto B4a4c93;
case 0x4a4c94:c.instructions+=1;goto B4a4c94;
case 0x4a4ca0:goto L4a4ca0;
case 0x4a4ca5:c.instructions+=8;goto B4a4ca5;
case 0x4a4ca6:c.instructions+=7;goto B4a4ca6;
case 0x4a4ca8:c.instructions+=6;goto B4a4ca8;
case 0x4a4caf:c.instructions+=5;goto B4a4caf;
case 0x4a4cb2:c.instructions+=4;goto B4a4cb2;
case 0x4a4cb3:c.instructions+=3;goto B4a4cb3;
case 0x4a4cb4:c.instructions+=2;goto B4a4cb4;
case 0x4a4cb9:c.instructions+=1;goto B4a4cb9;
case 0x4a4cbe:goto L4a4cbe;
case 0x4a4cc1:c.instructions+=2;goto B4a4cc1;
case 0x4a4cc2:c.instructions+=1;goto B4a4cc2;
case 0x4a4cc7:goto L4a4cc7;
case 0x4a4cca:c.instructions+=5;goto B4a4cca;
case 0x4a4ccd:c.instructions+=4;goto B4a4ccd;
case 0x4a4cd0:c.instructions+=3;goto B4a4cd0;
case 0x4a4cd2:c.instructions+=2;goto B4a4cd2;
case 0x4a4cd4:c.instructions+=1;goto B4a4cd4;
case 0x4a4cd6:goto L4a4cd6;
case 0x4a4cdb:c.instructions+=1;goto B4a4cdb;
case 0x4a4ce0:goto L4a4ce0;
case 0x4a4ce3:c.instructions+=3;goto B4a4ce3;
case 0x4a4ce4:c.instructions+=2;goto B4a4ce4;
case 0x4a4ce9:c.instructions+=1;goto B4a4ce9;
case 0x4a4ceb:goto L4a4ceb;
case 0x4a4cf0:c.instructions+=1;goto B4a4cf0;
case 0x4a4cf5:goto L4a4cf5;
case 0x4a4cf8:c.instructions+=3;goto B4a4cf8;
case 0x4a4cf9:c.instructions+=2;goto B4a4cf9;
case 0x4a4cfe:c.instructions+=1;goto B4a4cfe;
case 0x4a4d03:goto L4a4d03;
case 0x4a4d06:c.instructions+=3;goto B4a4d06;
case 0x4a4d07:c.instructions+=2;goto B4a4d07;
case 0x4a4d08:c.instructions+=1;goto B4a4d08;
case 0x4a4d0d:goto L4a4d0d;
case 0x4a4d10:c.instructions+=4;goto B4a4d10;
case 0x4a4d13:c.instructions+=3;goto B4a4d13;
case 0x4a4d15:c.instructions+=2;goto B4a4d15;
case 0x4a4d1a:c.instructions+=1;goto B4a4d1a;
case 0x4a4d1f:goto L4a4d1f;
case 0x4a4d22:c.instructions+=3;goto B4a4d22;
case 0x4a4d23:c.instructions+=2;goto B4a4d23;
case 0x4a4d28:c.instructions+=1;goto B4a4d28;
case 0x4a4d2d:goto L4a4d2d;
case 0x4a4d30:c.instructions+=3;goto B4a4d30;
case 0x4a4d31:c.instructions+=2;goto B4a4d31;
case 0x4a4d32:c.instructions+=1;goto B4a4d32;
case 0x4a4d37:goto L4a4d37;
case 0x4a4d3a:c.instructions+=4;goto B4a4d3a;
case 0x4a4d3d:c.instructions+=3;goto B4a4d3d;
case 0x4a4d3f:c.instructions+=2;goto B4a4d3f;
case 0x4a4d44:c.instructions+=1;goto B4a4d44;
case 0x4a4d49:goto L4a4d49;
case 0x4a4d4c:c.instructions+=2;goto B4a4d4c;
case 0x4a4d4d:c.instructions+=1;goto B4a4d4d;
case 0x4a4d52:goto L4a4d52;
case 0x4a4d57:goto L4a4d57;
case 0x4a4d5a:c.instructions+=3;goto B4a4d5a;
case 0x4a4d5b:c.instructions+=2;goto B4a4d5b;
case 0x4a4d5c:c.instructions+=1;goto B4a4d5c;
case 0x4a4d61:goto L4a4d61;
case 0x4a4d64:c.instructions+=3;goto B4a4d64;
case 0x4a4d67:c.instructions+=2;goto B4a4d67;
case 0x4a4d68:c.instructions+=1;goto B4a4d68;
case 0x4a4d6a:goto L4a4d6a;
case 0x4a4d70:c.instructions+=1;goto B4a4d70;
case 0x4a4d74:goto L4a4d74;
case 0x4a4d76:c.instructions+=1;goto B4a4d76;
case 0x4a4d78:goto L4a4d78;
case 0x4a4d7b:c.instructions+=2;goto B4a4d7b;
case 0x4a4d81:c.instructions+=1;goto B4a4d81;
case 0x4a4d83:goto L4a4d83;
case 0x4a4d89:goto L4a4d89;
case 0x4a4d8f:c.instructions+=7;goto B4a4d8f;
case 0x4a4d91:c.instructions+=6;goto B4a4d91;
case 0x4a4d93:c.instructions+=5;goto B4a4d93;
case 0x4a4d95:c.instructions+=4;goto B4a4d95;
case 0x4a4d97:c.instructions+=3;goto B4a4d97;
case 0x4a4d99:c.instructions+=2;goto B4a4d99;
case 0x4a4d9c:c.instructions+=1;goto B4a4d9c;
case 0x4a4d9e:goto L4a4d9e;
case 0x4a4d9f:c.instructions+=3;goto B4a4d9f;
case 0x4a4da2:c.instructions+=2;goto B4a4da2;
case 0x4a4da4:c.instructions+=1;goto B4a4da4;
case 0x4a4da6:goto L4a4da6;
case 0x4a4da9:goto L4a4da9;
case 0x4a4daf:c.instructions+=2;goto B4a4daf;
case 0x4a4db1:c.instructions+=1;goto B4a4db1;
case 0x4a4db3:goto L4a4db3;
case 0x4a4db6:c.instructions+=3;goto B4a4db6;
case 0x4a4db7:c.instructions+=2;goto B4a4db7;
case 0x4a4db9:c.instructions+=1;goto B4a4db9;
case 0x4a4dbe:goto L4a4dbe;
case 0x4a4dbf:c.instructions+=2;goto B4a4dbf;
case 0x4a4dc0:c.instructions+=1;goto B4a4dc0;
case 0x4a4dd0:goto L4a4dd0;
case 0x4a4dd5:c.instructions+=9;goto B4a4dd5;
case 0x4a4dd6:c.instructions+=8;goto B4a4dd6;
case 0x4a4dd8:c.instructions+=7;goto B4a4dd8;
case 0x4a4ddf:c.instructions+=6;goto B4a4ddf;
case 0x4a4de2:c.instructions+=5;goto B4a4de2;
case 0x4a4de4:c.instructions+=4;goto B4a4de4;
case 0x4a4de5:c.instructions+=3;goto B4a4de5;
case 0x4a4de8:c.instructions+=2;goto B4a4de8;
case 0x4a4dea:c.instructions+=1;goto B4a4dea;
case 0x4a4dec:goto L4a4dec;
case 0x4a4df1:c.instructions+=1;goto B4a4df1;
case 0x4a4df3:goto L4a4df3;
case 0x4a4df8:goto L4a4df8;
case 0x4a4dfd:goto L4a4dfd;
case 0x4a4e00:c.instructions+=3;goto B4a4e00;
case 0x4a4e01:c.instructions+=2;goto B4a4e01;
case 0x4a4e06:c.instructions+=1;goto B4a4e06;
case 0x4a4e0b:goto L4a4e0b;
case 0x4a4e0e:c.instructions+=3;goto B4a4e0e;
case 0x4a4e0f:c.instructions+=2;goto B4a4e0f;
case 0x4a4e10:c.instructions+=1;goto B4a4e10;
case 0x4a4e15:goto L4a4e15;
case 0x4a4e18:c.instructions+=4;goto B4a4e18;
case 0x4a4e1b:c.instructions+=3;goto B4a4e1b;
case 0x4a4e1d:c.instructions+=2;goto B4a4e1d;
case 0x4a4e1f:c.instructions+=1;goto B4a4e1f;
case 0x4a4e21:goto L4a4e21;
case 0x4a4e22:c.instructions+=3;goto B4a4e22;
case 0x4a4e28:c.instructions+=2;goto B4a4e28;
case 0x4a4e2b:c.instructions+=1;goto B4a4e2b;
case 0x4a4e30:goto L4a4e30;
case 0x4a4e32:c.instructions+=1;goto B4a4e32;
case 0x4a4e34:goto L4a4e34;
case 0x4a4e37:c.instructions+=2;goto B4a4e37;
case 0x4a4e3d:c.instructions+=1;goto B4a4e3d;
case 0x4a4e3f:goto L4a4e3f;
case 0x4a4e45:goto L4a4e45;
case 0x4a4e47:c.instructions+=3;goto B4a4e47;
case 0x4a4e49:c.instructions+=2;goto B4a4e49;
case 0x4a4e4c:c.instructions+=1;goto B4a4e4c;
case 0x4a4e4e:goto L4a4e4e;
case 0x4a4e4f:c.instructions+=3;goto B4a4e4f;
case 0x4a4e52:c.instructions+=2;goto B4a4e52;
case 0x4a4e54:c.instructions+=1;goto B4a4e54;
case 0x4a4e56:goto L4a4e56;
case 0x4a4e57:c.instructions+=3;goto B4a4e57;
case 0x4a4e58:c.instructions+=2;goto B4a4e58;
case 0x4a4e59:c.instructions+=1;goto B4a4e59;
case 0x4a4e5a:goto L4a4e5a;
case 0x4a4e60:c.instructions+=2;goto B4a4e60;
case 0x4a4e62:c.instructions+=1;goto B4a4e62;
case 0x4a4e64:goto L4a4e64;
case 0x4a4e67:c.instructions+=3;goto B4a4e67;
case 0x4a4e68:c.instructions+=2;goto B4a4e68;
case 0x4a4e6a:c.instructions+=1;goto B4a4e6a;
case 0x4a4e6f:goto L4a4e6f;
case 0x4a4e70:goto L4a4e70;
case 0x4a4e71:c.instructions+=2;goto B4a4e71;
case 0x4a4e72:c.instructions+=1;goto B4a4e72;
case 0x4a4e80:goto L4a4e80;
case 0x4a4e85:c.instructions+=7;goto B4a4e85;
case 0x4a4e86:c.instructions+=6;goto B4a4e86;
case 0x4a4e88:c.instructions+=5;goto B4a4e88;
case 0x4a4e8b:c.instructions+=4;goto B4a4e8b;
case 0x4a4e8c:c.instructions+=3;goto B4a4e8c;
case 0x4a4e92:c.instructions+=2;goto B4a4e92;
case 0x4a4e94:c.instructions+=1;goto B4a4e94;
case 0x4a4e9a:goto L4a4e9a;
case 0x4a4e9d:c.instructions+=3;goto B4a4e9d;
case 0x4a4e9f:c.instructions+=2;goto B4a4e9f;
case 0x4a4ea1:c.instructions+=1;goto B4a4ea1;
case 0x4a4ea3:goto L4a4ea3;
case 0x4a4eaa:c.instructions+=3;goto B4a4eaa;
case 0x4a4ead:c.instructions+=2;goto B4a4ead;
case 0x4a4eaf:c.instructions+=1;goto B4a4eaf;
case 0x4a4eb1:goto L4a4eb1;
case 0x4a4eb4:c.instructions+=2;goto B4a4eb4;
case 0x4a4eb9:c.instructions+=1;goto B4a4eb9;
case 0x4a4ebe:goto L4a4ebe;
case 0x4a4ec1:c.instructions+=3;goto B4a4ec1;
case 0x4a4ec2:c.instructions+=2;goto B4a4ec2;
case 0x4a4ec7:c.instructions+=1;goto B4a4ec7;
case 0x4a4ecc:goto L4a4ecc;
case 0x4a4ecf:c.instructions+=2;goto B4a4ecf;
case 0x4a4ed4:c.instructions+=1;goto B4a4ed4;
case 0x4a4ed9:goto L4a4ed9;
case 0x4a4edc:c.instructions+=3;goto B4a4edc;
case 0x4a4edd:c.instructions+=2;goto B4a4edd;
case 0x4a4ee2:c.instructions+=1;goto B4a4ee2;
case 0x4a4ee7:goto L4a4ee7;
case 0x4a4eea:c.instructions+=3;goto B4a4eea;
case 0x4a4eeb:c.instructions+=2;goto B4a4eeb;
case 0x4a4eec:c.instructions+=1;goto B4a4eec;
case 0x4a4ef1:goto L4a4ef1;
case 0x4a4ef4:c.instructions+=4;goto B4a4ef4;
case 0x4a4ef7:c.instructions+=3;goto B4a4ef7;
case 0x4a4ef9:c.instructions+=2;goto B4a4ef9;
case 0x4a4efe:c.instructions+=1;goto B4a4efe;
case 0x4a4f03:goto L4a4f03;
case 0x4a4f06:c.instructions+=3;goto B4a4f06;
case 0x4a4f07:c.instructions+=2;goto B4a4f07;
case 0x4a4f0c:c.instructions+=1;goto B4a4f0c;
case 0x4a4f0e:goto L4a4f0e;
case 0x4a4f15:c.instructions+=3;goto B4a4f15;
case 0x4a4f18:c.instructions+=2;goto B4a4f18;
case 0x4a4f1a:c.instructions+=1;goto B4a4f1a;
case 0x4a4f1c:goto L4a4f1c;
case 0x4a4f21:c.instructions+=1;goto B4a4f21;
case 0x4a4f23:goto L4a4f23;
case 0x4a4f26:c.instructions+=2;goto B4a4f26;
case 0x4a4f2b:c.instructions+=1;goto B4a4f2b;
case 0x4a4f30:goto L4a4f30;
case 0x4a4f33:c.instructions+=3;goto B4a4f33;
case 0x4a4f34:c.instructions+=2;goto B4a4f34;
case 0x4a4f39:c.instructions+=1;goto B4a4f39;
case 0x4a4f3e:goto L4a4f3e;
case 0x4a4f41:c.instructions+=3;goto B4a4f41;
case 0x4a4f42:c.instructions+=2;goto B4a4f42;
case 0x4a4f43:c.instructions+=1;goto B4a4f43;
case 0x4a4f48:goto L4a4f48;
case 0x4a4f4b:c.instructions+=4;goto B4a4f4b;
case 0x4a4f4e:c.instructions+=3;goto B4a4f4e;
case 0x4a4f50:c.instructions+=2;goto B4a4f50;
case 0x4a4f55:c.instructions+=1;goto B4a4f55;
case 0x4a4f5a:goto L4a4f5a;
case 0x4a4f5d:c.instructions+=3;goto B4a4f5d;
case 0x4a4f5e:c.instructions+=2;goto B4a4f5e;
case 0x4a4f63:c.instructions+=1;goto B4a4f63;
case 0x4a4f68:goto L4a4f68;
case 0x4a4f6b:c.instructions+=3;goto B4a4f6b;
case 0x4a4f6c:c.instructions+=2;goto B4a4f6c;
case 0x4a4f6d:c.instructions+=1;goto B4a4f6d;
case 0x4a4f72:goto L4a4f72;
case 0x4a4f75:c.instructions+=2;goto B4a4f75;
case 0x4a4f77:c.instructions+=1;goto B4a4f77;
case 0x4a4f7c:goto L4a4f7c;
case 0x4a4f7f:c.instructions+=1;goto B4a4f7f;
case 0x4a4f84:goto L4a4f84;
case 0x4a4f87:c.instructions+=2;goto B4a4f87;
case 0x4a4f88:c.instructions+=1;goto B4a4f88;
case 0x4a4f8d:goto L4a4f8d;
case 0x4a4f92:goto L4a4f92;
case 0x4a4f95:c.instructions+=3;goto B4a4f95;
case 0x4a4f96:c.instructions+=2;goto B4a4f96;
case 0x4a4f97:c.instructions+=1;goto B4a4f97;
case 0x4a4f9c:goto L4a4f9c;
case 0x4a4f9f:goto L4a4f9f;
case 0x4a4fa0:c.instructions+=2;goto B4a4fa0;
case 0x4a4fa1:c.instructions+=1;goto B4a4fa1;
case 0x4a4fb0:goto L4a4fb0;
case 0x4a4fb5:c.instructions+=5;goto B4a4fb5;
case 0x4a4fb6:c.instructions+=4;goto B4a4fb6;
case 0x4a4fb8:c.instructions+=3;goto B4a4fb8;
case 0x4a4fbb:c.instructions+=2;goto B4a4fbb;
case 0x4a4fbd:c.instructions+=1;goto B4a4fbd;
case 0x4a4fc3:goto L4a4fc3;
case 0x4a4fc6:c.instructions+=2;goto B4a4fc6;
case 0x4a4fc8:c.instructions+=1;goto B4a4fc8;
case 0x4a4fca:goto L4a4fca;
case 0x4a4fd1:c.instructions+=3;goto B4a4fd1;
case 0x4a4fd4:c.instructions+=2;goto B4a4fd4;
case 0x4a4fd6:c.instructions+=1;goto B4a4fd6;
case 0x4a4fd8:goto L4a4fd8;
case 0x4a4fd9:c.instructions+=4;goto B4a4fd9;
case 0x4a4fdc:c.instructions+=3;goto B4a4fdc;
case 0x4a4fde:c.instructions+=2;goto B4a4fde;
case 0x4a4fe3:c.instructions+=1;goto B4a4fe3;
case 0x4a4fe8:goto L4a4fe8;
case 0x4a4feb:c.instructions+=3;goto B4a4feb;
case 0x4a4fec:c.instructions+=2;goto B4a4fec;
case 0x4a4ff1:c.instructions+=1;goto B4a4ff1;
case 0x4a4ff6:goto L4a4ff6;
case 0x4a4ff9:c.instructions+=3;goto B4a4ff9;
case 0x4a4ffa:c.instructions+=2;goto B4a4ffa;
case 0x4a4ffb:c.instructions+=1;goto B4a4ffb;
default:missing_instruction(c.pc);}
B4a4000:L4a4000:{c.instructions+=2;NFSU2_TR(0x4a4000);
u8 U[4];
w4(U+0,u32(0x7904bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4005:{NFSU2_TR(0x4a4005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a400aull));
TAIL_STATIC(0x50b990u,50b);
}
B4a400a:L4a400a:{c.instructions+=4;NFSU2_TR(0x4a400a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a400d:{NFSU2_TR(0x4a400d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a400e:{NFSU2_TR(0x4a400e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a400f:{NFSU2_TR(0x4a400f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4014ull));
TAIL_STATIC(0x537b80u,537);
}
B4a4014:L4a4014:{c.instructions+=3;NFSU2_TR(0x4a4014);
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
B4a4017:{NFSU2_TR(0x4a4017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4018:{NFSU2_TR(0x4a4018);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4020:L4a4020:{c.instructions+=6;NFSU2_TR(0x4a4020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4a4023:{NFSU2_TR(0x4a4023);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4024:{NFSU2_TR(0x4a4024);
__builtin_memmove((R+24),(R+4),4);
}
B4a4026:{NFSU2_TR(0x4a4026);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4027:{NFSU2_TR(0x4a4027);
w4(R+4,u32(0x89cf48ull));
}
B4a402c:{NFSU2_TR(0x4a402c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4031ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4a4031:L4a4031:{c.instructions+=3;NFSU2_TR(0x4a4031);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4033:{NFSU2_TR(0x4a4033);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4037:{NFSU2_TR(0x4a4037);
if(r1(R+518)){{goto L4a40c5;}}
}
B4a403d:L4a403d:{c.instructions+=3;NFSU2_TR(0x4a403d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a403f:{NFSU2_TR(0x4a403f);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4a4044:{NFSU2_TR(0x4a4044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4055;}}
}
B4a4046:L4a4046:{c.instructions+=2;NFSU2_TR(0x4a4046);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4049:{NFSU2_TR(0x4a4049);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4055;}}
}
B4a404b:L4a404b:{c.instructions+=2;NFSU2_TR(0x4a404b);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a4050:{NFSU2_TR(0x4a4050);
{goto L4a40e0;}
}
B4a4055:L4a4055:{c.instructions+=3;NFSU2_TR(0x4a4055);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4058:{NFSU2_TR(0x4a4058);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a405c:{NFSU2_TR(0x4a405c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a409b;}}
}
B4a405e:L4a405e:{c.instructions+=3;NFSU2_TR(0x4a405e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4061:{NFSU2_TR(0x4a4061);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4064:{NFSU2_TR(0x4a4064);
if(r1(R+518)){{goto L4a406b;}}
}
B4a4066:L4a4066:{c.instructions+=2;NFSU2_TR(0x4a4066);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4069:{NFSU2_TR(0x4a4069);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a409b;}}
}
B4a406b:L4a406b:{c.instructions+=9;NFSU2_TR(0x4a406b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a406d:{NFSU2_TR(0x4a406d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4070:{NFSU2_TR(0x4a4070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4a4073:{NFSU2_TR(0x4a4073);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4075:{NFSU2_TR(0x4a4075);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4a4076:{NFSU2_TR(0x4a4076);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x4a2f11dfull))));
}
B4a407c:{NFSU2_TR(0x4a407c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xb7b75185ull))));
}
B4a4082:{NFSU2_TR(0x4a4082);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4083:{NFSU2_TR(0x4a4083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4088ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a4088:L4a4088:{c.instructions+=5;NFSU2_TR(0x4a4088);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a408b:{NFSU2_TR(0x4a408b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a408c:{NFSU2_TR(0x4a408c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4090:{NFSU2_TR(0x4a4090);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4091:{NFSU2_TR(0x4a4091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4096ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4a4096:L4a4096:{c.instructions+=2;NFSU2_TR(0x4a4096);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a4099:{NFSU2_TR(0x4a4099);
{goto L4a40e0;}
}
B4a409b:L4a409b:{c.instructions+=2;NFSU2_TR(0x4a409b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a409f:{NFSU2_TR(0x4a409f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a40c0;}}
}
B4a40a1:L4a40a1:{c.instructions+=3;NFSU2_TR(0x4a40a1);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40a3:{NFSU2_TR(0x4a40a3);
u8 U[4];
w4(U+0,u32(0xa7db717full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40a8:{NFSU2_TR(0x4a40a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a40adull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a40ad:L4a40ad:{c.instructions+=5;NFSU2_TR(0x4a40ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a40b0:{NFSU2_TR(0x4a40b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40b1:{NFSU2_TR(0x4a40b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a40b5:{NFSU2_TR(0x4a40b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40b6:{NFSU2_TR(0x4a40b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a40bbull));
TAIL_STATIC(0x43dc00u,43d);
}
B4a40bb:L4a40bb:{c.instructions+=2;NFSU2_TR(0x4a40bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a40be:{NFSU2_TR(0x4a40be);
{goto L4a40e0;}
}
B4a40c0:L4a40c0:{c.instructions+=2;NFSU2_TR(0x4a40c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a40c3:{NFSU2_TR(0x4a40c3);
{goto L4a40cc;}
}
B4a40c5:L4a40c5:{c.instructions+=2;NFSU2_TR(0x4a40c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a40c9:{NFSU2_TR(0x4a40c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a40cc:L4a40cc:{c.instructions+=6;NFSU2_TR(0x4a40cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a40d0:{NFSU2_TR(0x4a40d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40d2:{NFSU2_TR(0x4a40d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a40d6:{NFSU2_TR(0x4a40d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a40da:{NFSU2_TR(0x4a40da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40db:{NFSU2_TR(0x4a40db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a40e0ull));
TAIL_STATIC(0x577240u,577);
}
B4a40e0:L4a40e0:{c.instructions+=7;NFSU2_TR(0x4a40e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a40e3:{NFSU2_TR(0x4a40e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a40e7:{NFSU2_TR(0x4a40e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40e8:{NFSU2_TR(0x4a40e8);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40ed:{NFSU2_TR(0x4a40ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40ee:{NFSU2_TR(0x4a40ee);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40f3:{NFSU2_TR(0x4a40f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a40f8ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a40f8:L4a40f8:{c.instructions+=4;NFSU2_TR(0x4a40f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a40fb:{NFSU2_TR(0x4a40fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40fc:{NFSU2_TR(0x4a40fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a40fd:{NFSU2_TR(0x4a40fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4102ull));
TAIL_STATIC(0x537b80u,537);
}
B4a4102:L4a4102:{c.instructions+=5;NFSU2_TR(0x4a4102);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4105:{NFSU2_TR(0x4a4105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4106:{NFSU2_TR(0x4a4106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4107:{NFSU2_TR(0x4a4107);
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
B4a410a:{NFSU2_TR(0x4a410a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4110:L4a4110:{c.instructions+=7;NFSU2_TR(0x4a4110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4a4113:{NFSU2_TR(0x4a4113);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4114:{NFSU2_TR(0x4a4114);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4115:{NFSU2_TR(0x4a4115);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4119:{NFSU2_TR(0x4a4119);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a411c:{NFSU2_TR(0x4a411c);
__builtin_memmove((R+24),(R+4),4);
}
B4a411e:{NFSU2_TR(0x4a411e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4141;}}
}
B4a4120:L4a4120:{c.instructions+=2;NFSU2_TR(0x4a4120);
u8 U[4];
w4(U+0,u32(0x61c9b7a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4125:{NFSU2_TR(0x4a4125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a412aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a412a:L4a412a:{c.instructions+=6;NFSU2_TR(0x4a412a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a412b:{NFSU2_TR(0x4a412b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4130:{NFSU2_TR(0x4a4130);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a4134:{NFSU2_TR(0x4a4134);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4136:{NFSU2_TR(0x4a4136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4137:{NFSU2_TR(0x4a4137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a413cull));
TAIL_STATIC(0x50c960u,50c);
}
B4a413c:L4a413c:{c.instructions+=2;NFSU2_TR(0x4a413c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a413f:{NFSU2_TR(0x4a413f);
{goto L4a4164;}
}
B4a4141:L4a4141:{c.instructions+=11;NFSU2_TR(0x4a4141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4144:{NFSU2_TR(0x4a4144);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a4148:{NFSU2_TR(0x4a4148);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a414b:{NFSU2_TR(0x4a414b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a414e:{NFSU2_TR(0x4a414e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4150:{NFSU2_TR(0x4a4150);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a4154:{NFSU2_TR(0x4a4154);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4a4156:{NFSU2_TR(0x4a4156);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4157:{NFSU2_TR(0x4a4157);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a415b:{NFSU2_TR(0x4a415b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a415f:{NFSU2_TR(0x4a415f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4164ull));
TAIL_STATIC(0x577240u,577);
}
B4a4164:L4a4164:{c.instructions+=7;NFSU2_TR(0x4a4164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4167:{NFSU2_TR(0x4a4167);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a416b:{NFSU2_TR(0x4a416b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a416c:{NFSU2_TR(0x4a416c);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4171:{NFSU2_TR(0x4a4171);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4172:{NFSU2_TR(0x4a4172);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4177:{NFSU2_TR(0x4a4177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a417cull));
TAIL_STATIC(0x50b990u,50b);
}
B4a417c:L4a417c:{c.instructions+=4;NFSU2_TR(0x4a417c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a417f:{NFSU2_TR(0x4a417f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4180:{NFSU2_TR(0x4a4180);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4181:{NFSU2_TR(0x4a4181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4186ull));
TAIL_STATIC(0x537b80u,537);
}
B4a4186:L4a4186:{c.instructions+=5;NFSU2_TR(0x4a4186);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4189:{NFSU2_TR(0x4a4189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a418a:{NFSU2_TR(0x4a418a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a418b:{NFSU2_TR(0x4a418b);
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
B4a418e:{NFSU2_TR(0x4a418e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a41a0:L4a41a0:{c.instructions+=7;NFSU2_TR(0x4a41a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a41a4:{NFSU2_TR(0x4a41a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41a5:{NFSU2_TR(0x4a41a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a41a9:{NFSU2_TR(0x4a41a9);
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
B4a41ab:{NFSU2_TR(0x4a41ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41ac:{NFSU2_TR(0x4a41ac);
__builtin_memmove((R+28),(R+4),4);
}
B4a41ae:{NFSU2_TR(0x4a41ae);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a4238;}}
}
B4a41b4:L4a41b4:{c.instructions+=6;NFSU2_TR(0x4a41b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41b5:{NFSU2_TR(0x4a41b5);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B4a41b7:{NFSU2_TR(0x4a41b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41b8:{NFSU2_TR(0x4a41b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a41bb:{NFSU2_TR(0x4a41bb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4a41bc:{NFSU2_TR(0x4a41bc);
__builtin_memmove((R+16),(R+16),4);
}
B4a41c0:L4a41c0:{c.instructions+=4;NFSU2_TR(0x4a41c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a41c3:{NFSU2_TR(0x4a41c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41c4:{NFSU2_TR(0x4a41c4);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41c9:{NFSU2_TR(0x4a41c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a41ceull));
TAIL_STATIC(0x50b990u,50b);
}
B4a41ce:L4a41ce:{c.instructions+=3;NFSU2_TR(0x4a41ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41cf:{NFSU2_TR(0x4a41cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41d0:{NFSU2_TR(0x4a41d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a41d5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a41d5:L4a41d5:{c.instructions+=2;NFSU2_TR(0x4a41d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41d6:{NFSU2_TR(0x4a41d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a41dbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a41db:L4a41db:{c.instructions+=4;NFSU2_TR(0x4a41db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a41de:{NFSU2_TR(0x4a41de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41df:{NFSU2_TR(0x4a41df);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41e4:{NFSU2_TR(0x4a41e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a41e9ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a41e9:L4a41e9:{c.instructions+=3;NFSU2_TR(0x4a41e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41ea:{NFSU2_TR(0x4a41ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41eb:{NFSU2_TR(0x4a41eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a41f0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a41f0:L4a41f0:{c.instructions+=2;NFSU2_TR(0x4a41f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41f1:{NFSU2_TR(0x4a41f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a41f6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a41f6:L4a41f6:{c.instructions+=4;NFSU2_TR(0x4a41f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a41f9:{NFSU2_TR(0x4a41f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41fa:{NFSU2_TR(0x4a41fa);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a41ff:{NFSU2_TR(0x4a41ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4204ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4204:L4a4204:{c.instructions+=3;NFSU2_TR(0x4a4204);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4205:{NFSU2_TR(0x4a4205);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4206:{NFSU2_TR(0x4a4206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a420bull));
TAIL_STATIC(0x5379c0u,537);
}
B4a420b:L4a420b:{c.instructions+=2;NFSU2_TR(0x4a420b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a420c:{NFSU2_TR(0x4a420c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4211ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a4211:L4a4211:{c.instructions+=4;NFSU2_TR(0x4a4211);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a4214:{NFSU2_TR(0x4a4214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4215:{NFSU2_TR(0x4a4215);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a421a:{NFSU2_TR(0x4a421a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a421full));
TAIL_STATIC(0x50b990u,50b);
}
B4a421f:L4a421f:{c.instructions+=4;NFSU2_TR(0x4a421f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4a4222:{NFSU2_TR(0x4a4222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4223:{NFSU2_TR(0x4a4223);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4224:{NFSU2_TR(0x4a4224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4229ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a4229:L4a4229:{c.instructions+=2;NFSU2_TR(0x4a4229);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a422a:{NFSU2_TR(0x4a422a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a422full));
TAIL_STATIC(0x50ca00u,50c);
}
B4a422f:L4a422f:{c.instructions+=4;NFSU2_TR(0x4a422f);
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a4232:{NFSU2_TR(0x4a4232);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4a4233:{NFSU2_TR(0x4a4233);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a4234:{NFSU2_TR(0x4a4234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a41c0u);}goto L4a41c0;}}
}
B4a4236:L4a4236:{c.instructions+=2;NFSU2_TR(0x4a4236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4237:{NFSU2_TR(0x4a4237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a4238:L4a4238:{c.instructions+=3;NFSU2_TR(0x4a4238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4239:{NFSU2_TR(0x4a4239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a423a:{NFSU2_TR(0x4a423a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4240:L4a4240:{c.instructions+=7;NFSU2_TR(0x4a4240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4241:{NFSU2_TR(0x4a4241);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4242:{NFSU2_TR(0x4a4242);
__builtin_memmove((R+24),(R+4),4);
}
B4a4244:{NFSU2_TR(0x4a4244);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4245:{NFSU2_TR(0x4a4245);
__builtin_memmove((R+28),gp(0x8900ac),4);
}
B4a424b:{NFSU2_TR(0x4a424b);
w4(R+4,u32(0x85ba64ull));
}
B4a4250:{NFSU2_TR(0x4a4250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4255ull));
TAIL_STATIC(0x5330d0u,533);
}
B4a4255:L4a4255:{c.instructions+=2;NFSU2_TR(0x4a4255);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a425b:{NFSU2_TR(0x4a425b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4260ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a4260:L4a4260:{c.instructions+=6;NFSU2_TR(0x4a4260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4261:{NFSU2_TR(0x4a4261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4264:{NFSU2_TR(0x4a4264);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4269:{NFSU2_TR(0x4a4269);
u8 U[4];
w4(U+0,u32(0x18d97a23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a426e:{NFSU2_TR(0x4a426e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a426f:{NFSU2_TR(0x4a426f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4274ull));
TAIL_STATIC(0x537b80u,537);
}
B4a4274:L4a4274:{c.instructions+=4;NFSU2_TR(0x4a4274);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a4277:{NFSU2_TR(0x4a4277);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a427a:{NFSU2_TR(0x4a427a);
w4(R+4,u32(0x85ad40ull));
}
B4a427f:{NFSU2_TR(0x4a427f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4284ull));
TAIL_STATIC(0x532e50u,532);
}
B4a4284:L4a4284:{c.instructions+=5;NFSU2_TR(0x4a4284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4285:{NFSU2_TR(0x4a4285);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a428a:{NFSU2_TR(0x4a428a);
u8 U[4];
w4(U+0,u32(0x18d97a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a428f:{NFSU2_TR(0x4a428f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4290:{NFSU2_TR(0x4a4290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4295ull));
TAIL_STATIC(0x537b80u,537);
}
B4a4295:L4a4295:{c.instructions+=4;NFSU2_TR(0x4a4295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a4298:{NFSU2_TR(0x4a4298);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a429b:{NFSU2_TR(0x4a429b);
__builtin_memmove((R+4),(R+28),4);
}
B4a429d:{NFSU2_TR(0x4a429d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42a2ull));
TAIL_STATIC(0x5f41b0u,5f4);
}
B4a42a2:L4a42a2:{c.instructions+=5;NFSU2_TR(0x4a42a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42a3:{NFSU2_TR(0x4a42a3);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42a8:{NFSU2_TR(0x4a42a8);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42ad:{NFSU2_TR(0x4a42ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42ae:{NFSU2_TR(0x4a42ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42b3ull));
TAIL_STATIC(0x537b80u,537);
}
B4a42b3:L4a42b3:{c.instructions+=1;NFSU2_TR(0x4a42b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42b8ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a42b8:L4a42b8:{c.instructions+=2;NFSU2_TR(0x4a42b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42b9:{NFSU2_TR(0x4a42b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42beull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a42be:L4a42be:{c.instructions+=3;NFSU2_TR(0x4a42be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a42c1:{NFSU2_TR(0x4a42c1);
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
B4a42c3:{NFSU2_TR(0x4a42c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a42de;}}
}
B4a42c5:L4a42c5:{c.instructions+=5;NFSU2_TR(0x4a42c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a42c8:{NFSU2_TR(0x4a42c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42ca:{NFSU2_TR(0x4a42ca);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42cf:{NFSU2_TR(0x4a42cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42d0:{NFSU2_TR(0x4a42d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42d5ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a42d5:L4a42d5:{c.instructions+=2;NFSU2_TR(0x4a42d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42d6:{NFSU2_TR(0x4a42d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42dbull));
TAIL_STATIC(0x555f10u,555);
}
B4a42db:L4a42db:{c.instructions+=1;NFSU2_TR(0x4a42db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a42de:L4a42de:{c.instructions+=2;NFSU2_TR(0x4a42de);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a42e4:{NFSU2_TR(0x4a42e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42e9ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4a42e9:L4a42e9:{c.instructions+=6;NFSU2_TR(0x4a42e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a42ec:{NFSU2_TR(0x4a42ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a42ef:{NFSU2_TR(0x4a42ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42f0:{NFSU2_TR(0x4a42f0);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a42f6:{NFSU2_TR(0x4a42f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a42f7:{NFSU2_TR(0x4a42f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a42fcull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4a42fc:L4a42fc:{c.instructions+=4;NFSU2_TR(0x4a42fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a42fd:{NFSU2_TR(0x4a42fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a42fe:{NFSU2_TR(0x4a42fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a42ff:{NFSU2_TR(0x4a42ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4300:L4a4300:{c.instructions+=5;NFSU2_TR(0x4a4300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4a4303:{NFSU2_TR(0x4a4303);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4304:{NFSU2_TR(0x4a4304);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4305:{NFSU2_TR(0x4a4305);
__builtin_memmove((R+24),(R+4),4);
}
B4a4307:{NFSU2_TR(0x4a4307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a430cull));
TAIL_STATIC(0x52d800u,52d);
}
B4a430c:L4a430c:{c.instructions+=11;NFSU2_TR(0x4a430c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a430f:{NFSU2_TR(0x4a430f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4312:{NFSU2_TR(0x4a4312);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4315:{NFSU2_TR(0x4a4315);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4319:{NFSU2_TR(0x4a4319);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a431d:{NFSU2_TR(0x4a431d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a431e:{NFSU2_TR(0x4a431e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a4322:{NFSU2_TR(0x4a4322);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4323:{NFSU2_TR(0x4a4323);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4324:{NFSU2_TR(0x4a4324);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a4328:{NFSU2_TR(0x4a4328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a432dull));
TAIL_STATIC(0x51d170u,51d);
}
B4a432d:L4a432d:{c.instructions+=9;NFSU2_TR(0x4a432d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a4331:{NFSU2_TR(0x4a4331);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4335:{NFSU2_TR(0x4a4335);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a4339:{NFSU2_TR(0x4a4339);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a433c:{NFSU2_TR(0x4a433c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a433d:{NFSU2_TR(0x4a433d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a433e:{NFSU2_TR(0x4a433e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a4341:{NFSU2_TR(0x4a4341);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4342:{NFSU2_TR(0x4a4342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4347ull));
TAIL_STATIC(0x51d2d0u,51d);
}
B4a4347:L4a4347:{c.instructions+=9;NFSU2_TR(0x4a4347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a434a:{NFSU2_TR(0x4a434a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a434d:{NFSU2_TR(0x4a434d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a4351:{NFSU2_TR(0x4a4351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4352:{NFSU2_TR(0x4a4352);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a4356:{NFSU2_TR(0x4a4356);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4357:{NFSU2_TR(0x4a4357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4358:{NFSU2_TR(0x4a4358);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a435c:{NFSU2_TR(0x4a435c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4361ull));
TAIL_STATIC(0x51d070u,51d);
}
B4a4361:L4a4361:{c.instructions+=6;NFSU2_TR(0x4a4361);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a4365:{NFSU2_TR(0x4a4365);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4369:{NFSU2_TR(0x4a4369);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a436a:{NFSU2_TR(0x4a436a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a436b:{NFSU2_TR(0x4a436b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a436c:{NFSU2_TR(0x4a436c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4371ull));
TAIL_STATIC(0x51d380u,51d);
}
B4a4371:L4a4371:{c.instructions+=5;NFSU2_TR(0x4a4371);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a4374:{NFSU2_TR(0x4a4374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4375:{NFSU2_TR(0x4a4375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4376:{NFSU2_TR(0x4a4376);
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
B4a4379:{NFSU2_TR(0x4a4379);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4380:L4a4380:{c.instructions+=9;NFSU2_TR(0x4a4380);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a4383:{NFSU2_TR(0x4a4383);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4384:{NFSU2_TR(0x4a4384);
__builtin_memmove((R+24),(R+4),4);
}
B4a4386:{NFSU2_TR(0x4a4386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4389:{NFSU2_TR(0x4a4389);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a438c:{NFSU2_TR(0x4a438c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a438d:{NFSU2_TR(0x4a438d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a438e:{NFSU2_TR(0x4a438e);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4a4394:{NFSU2_TR(0x4a4394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4399ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4a4399:L4a4399:{c.instructions+=6;NFSU2_TR(0x4a4399);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a439c:{NFSU2_TR(0x4a439c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a439f:{NFSU2_TR(0x4a439f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a43a1:{NFSU2_TR(0x4a43a1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4a43a2:{NFSU2_TR(0x4a43a2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a43a5:{NFSU2_TR(0x4a43a5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a4400;}}
}
B4a43a7:L4a43a7:{c.instructions+=1;NFSU2_TR(0x4a43a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4a444cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a43ae:L4a43ae:{c.instructions+=2;NFSU2_TR(0x4a43ae);
w4(R+28,u32(0x1e66364ull));
}
B4a43b3:{NFSU2_TR(0x4a43b3);
{goto L4a4405;}
}
B4a43b5:L4a43b5:{c.instructions+=2;NFSU2_TR(0x4a43b5);
w4(R+28,u32(0xb7b75185ull));
}
B4a43ba:{NFSU2_TR(0x4a43ba);
{goto L4a4405;}
}
B4a43bc:L4a43bc:{c.instructions+=2;NFSU2_TR(0x4a43bc);
w4(R+28,u32(0x1ce129e0ull));
}
B4a43c1:{NFSU2_TR(0x4a43c1);
{goto L4a4405;}
}
B4a43c3:L4a43c3:{c.instructions+=2;NFSU2_TR(0x4a43c3);
w4(R+28,u32(0xa7db717full));
}
B4a43c8:{NFSU2_TR(0x4a43c8);
{goto L4a4405;}
}
B4a43ca:L4a43ca:{c.instructions+=2;NFSU2_TR(0x4a43ca);
w4(R+28,u32(0x5d82dba2ull));
}
B4a43cf:{NFSU2_TR(0x4a43cf);
{goto L4a4405;}
}
B4a43d1:L4a43d1:{c.instructions+=2;NFSU2_TR(0x4a43d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x85036cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a43d6:{NFSU2_TR(0x4a43d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a43df;}}
}
B4a43d8:L4a43d8:{c.instructions+=2;NFSU2_TR(0x4a43d8);
w4(R+28,u32(0x61c9b7a2ull));
}
B4a43dd:{NFSU2_TR(0x4a43dd);
{goto L4a4405;}
}
B4a43df:L4a43df:{c.instructions+=9;NFSU2_TR(0x4a43df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a43e2:{NFSU2_TR(0x4a43e2);
__builtin_memmove((R+4),gp(0x850378),4);
}
B4a43e8:{NFSU2_TR(0x4a43e8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4a43ea:{NFSU2_TR(0x4a43ea);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a43ec:{NFSU2_TR(0x4a43ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a43f0:{NFSU2_TR(0x4a43f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a43f1:{NFSU2_TR(0x4a43f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a43f5:{NFSU2_TR(0x4a43f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a43f9:{NFSU2_TR(0x4a43f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a43feull));
TAIL_STATIC(0x577240u,577);
}
B4a43fe:L4a43fe:{c.instructions+=1;NFSU2_TR(0x4a43fe);
{goto L4a4405;}
}
B4a4400:L4a4400:{c.instructions+=1;NFSU2_TR(0x4a4400);
w4(R+28,u32(0xd4293449ull));
}
B4a4405:L4a4405:{c.instructions+=4;NFSU2_TR(0x4a4405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4408:{NFSU2_TR(0x4a4408);
u8 U[4];
w4(U+0,u32(0xab44ed8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a440d:{NFSU2_TR(0x4a440d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a440e:{NFSU2_TR(0x4a440e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4413ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a4413:L4a4413:{c.instructions+=3;NFSU2_TR(0x4a4413);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a4416:{NFSU2_TR(0x4a4416);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4418:{NFSU2_TR(0x4a4418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4436;}}
}
B4a441a:L4a441a:{c.instructions+=6;NFSU2_TR(0x4a441a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a441d:{NFSU2_TR(0x4a441d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4421:{NFSU2_TR(0x4a4421);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4422:{NFSU2_TR(0x4a4422);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4427:{NFSU2_TR(0x4a4427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4428:{NFSU2_TR(0x4a4428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a442dull));
TAIL_STATIC(0x537be0u,537);
}
B4a442d:L4a442d:{c.instructions+=5;NFSU2_TR(0x4a442d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a4430:{NFSU2_TR(0x4a4430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4431:{NFSU2_TR(0x4a4431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4432:{NFSU2_TR(0x4a4432);
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
B4a4435:{NFSU2_TR(0x4a4435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4436:L4a4436:{c.instructions+=4;NFSU2_TR(0x4a4436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4439:{NFSU2_TR(0x4a4439);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a443a:{NFSU2_TR(0x4a443a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a443b:{NFSU2_TR(0x4a443b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4440ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a4440:L4a4440:{c.instructions+=5;NFSU2_TR(0x4a4440);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a4443:{NFSU2_TR(0x4a4443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4444:{NFSU2_TR(0x4a4444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4445:{NFSU2_TR(0x4a4445);
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
B4a4448:{NFSU2_TR(0x4a4448);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4480:L4a4480:{c.instructions+=10;NFSU2_TR(0x4a4480);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4a4485:{NFSU2_TR(0x4a4485);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4486:{NFSU2_TR(0x4a4486);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a4489:{NFSU2_TR(0x4a4489);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a448d:{NFSU2_TR(0x4a448d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a448e:{NFSU2_TR(0x4a448e);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B4a448f:{NFSU2_TR(0x4a448f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4491:{NFSU2_TR(0x4a4491);
__builtin_memmove((R+24),(R+4),4);
}
B4a4493:{NFSU2_TR(0x4a4493);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4498:{NFSU2_TR(0x4a4498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a44ab;}}
}
B4a449a:L4a449a:{c.instructions+=3;NFSU2_TR(0x4a449a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a449d:{NFSU2_TR(0x4a449d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a449e:{NFSU2_TR(0x4a449e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44a3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a44a3:L4a44a3:{c.instructions+=2;NFSU2_TR(0x4a44a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44a4:{NFSU2_TR(0x4a44a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44a9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a44a9:L4a44a9:{c.instructions+=1;NFSU2_TR(0x4a44a9);
{goto L4a44df;}
}
B4a44ab:L4a44ab:{c.instructions+=4;NFSU2_TR(0x4a44ab);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a44ad:{NFSU2_TR(0x4a44ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a44b0:{NFSU2_TR(0x4a44b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44b1:{NFSU2_TR(0x4a44b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a44d4;}}
}
B4a44b3:L4a44b3:{c.instructions+=1;NFSU2_TR(0x4a44b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44b8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a44b8:L4a44b8:{c.instructions+=2;NFSU2_TR(0x4a44b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44b9:{NFSU2_TR(0x4a44b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44beull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a44be:L4a44be:{c.instructions+=4;NFSU2_TR(0x4a44be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a44c1:{NFSU2_TR(0x4a44c1);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44c6:{NFSU2_TR(0x4a44c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44c7:{NFSU2_TR(0x4a44c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44ccull));
TAIL_STATIC(0x5379c0u,537);
}
B4a44cc:L4a44cc:{c.instructions+=2;NFSU2_TR(0x4a44cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44cd:{NFSU2_TR(0x4a44cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44d2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a44d2:L4a44d2:{c.instructions+=1;NFSU2_TR(0x4a44d2);
{goto L4a44f3;}
}
B4a44d4:L4a44d4:{c.instructions+=1;NFSU2_TR(0x4a44d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44d9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a44d9:L4a44d9:{c.instructions+=2;NFSU2_TR(0x4a44d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44da:{NFSU2_TR(0x4a44da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44dfull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a44df:L4a44df:{c.instructions+=4;NFSU2_TR(0x4a44df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a44e2:{NFSU2_TR(0x4a44e2);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44e7:{NFSU2_TR(0x4a44e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44e8:{NFSU2_TR(0x4a44e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44edull));
TAIL_STATIC(0x5379c0u,537);
}
B4a44ed:L4a44ed:{c.instructions+=2;NFSU2_TR(0x4a44ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a44ee:{NFSU2_TR(0x4a44ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a44f3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a44f3:L4a44f3:{c.instructions+=4;NFSU2_TR(0x4a44f3);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4a44f8:{NFSU2_TR(0x4a44f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a44fb:{NFSU2_TR(0x4a44fb);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4a4500:{NFSU2_TR(0x4a4500);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4a4539;}}
}
B4a4502:L4a4502:{c.instructions+=2;NFSU2_TR(0x4a4502);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4507:{NFSU2_TR(0x4a4507);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a4539;}}
}
B4a4509:L4a4509:{c.instructions+=4;NFSU2_TR(0x4a4509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a450c:{NFSU2_TR(0x4a450c);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4511:{NFSU2_TR(0x4a4511);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4512:{NFSU2_TR(0x4a4512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4517ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a4517:L4a4517:{c.instructions+=2;NFSU2_TR(0x4a4517);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4518:{NFSU2_TR(0x4a4518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a451dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a451d:L4a451d:{c.instructions+=4;NFSU2_TR(0x4a451d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4520:{NFSU2_TR(0x4a4520);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4525:{NFSU2_TR(0x4a4525);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4526:{NFSU2_TR(0x4a4526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a452bull));
TAIL_STATIC(0x5379c0u,537);
}
B4a452b:L4a452b:{c.instructions+=2;NFSU2_TR(0x4a452b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a452c:{NFSU2_TR(0x4a452c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4531ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a4531:L4a4531:{c.instructions+=4;NFSU2_TR(0x4a4531);
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
B4a4534:{NFSU2_TR(0x4a4534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4535:{NFSU2_TR(0x4a4535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a4536:{NFSU2_TR(0x4a4536);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4539:L4a4539:{c.instructions+=7;NFSU2_TR(0x4a4539);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a453d:{NFSU2_TR(0x4a453d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a453e:{NFSU2_TR(0x4a453e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a453f:{NFSU2_TR(0x4a453f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a4541:{NFSU2_TR(0x4a4541);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a4543:{NFSU2_TR(0x4a4543);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4548:{NFSU2_TR(0x4a4548);
if(r1(R+518)){{goto L4a457d;}}
}
B4a454a:L4a454a:{c.instructions+=2;NFSU2_TR(0x4a454a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a454f:{NFSU2_TR(0x4a454f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a45ac;}}
}
B4a4551:L4a4551:{c.instructions+=2;NFSU2_TR(0x4a4551);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4a4557:{NFSU2_TR(0x4a4557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4560;}}
}
B4a4559:L4a4559:{c.instructions+=2;NFSU2_TR(0x4a4559);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a455e:{NFSU2_TR(0x4a455e);
{goto L4a4565;}
}
B4a4560:L4a4560:{c.instructions+=1;NFSU2_TR(0x4a4560);
u8 U[4];
w4(U+0,u32(0x790534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4565:L4a4565:{c.instructions+=1;NFSU2_TR(0x4a4565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a456aull));
TAIL_STATIC(0x43db50u,43d);
}
B4a456a:L4a456a:{c.instructions+=4;NFSU2_TR(0x4a456a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a456d:{NFSU2_TR(0x4a456d);
u8 U[4];
w4(U+0,u32(0x79052cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4572:{NFSU2_TR(0x4a4572);
__builtin_memmove((R+28),(R+0),4);
}
B4a4574:{NFSU2_TR(0x4a4574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4579ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4579:L4a4579:{c.instructions+=2;NFSU2_TR(0x4a4579);
__builtin_memmove((R+12),(R+0),4);
}
B4a457b:{NFSU2_TR(0x4a457b);
{goto L4a45a9;}
}
B4a457d:L4a457d:{c.instructions+=3;NFSU2_TR(0x4a457d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4583:{NFSU2_TR(0x4a4583);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4585:{NFSU2_TR(0x4a4585);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a458e;}}
}
B4a4587:L4a4587:{c.instructions+=2;NFSU2_TR(0x4a4587);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a458c:{NFSU2_TR(0x4a458c);
{goto L4a4593;}
}
B4a458e:L4a458e:{c.instructions+=1;NFSU2_TR(0x4a458e);
u8 U[4];
w4(U+0,u32(0x790534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4593:L4a4593:{c.instructions+=1;NFSU2_TR(0x4a4593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4598ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4598:L4a4598:{c.instructions+=4;NFSU2_TR(0x4a4598);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a459b:{NFSU2_TR(0x4a459b);
u8 U[4];
w4(U+0,u32(0x79052cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45a0:{NFSU2_TR(0x4a45a0);
__builtin_memmove((R+12),(R+0),4);
}
B4a45a2:{NFSU2_TR(0x4a45a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a45a7ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a45a7:L4a45a7:{c.instructions+=1;NFSU2_TR(0x4a45a7);
__builtin_memmove((R+28),(R+0),4);
}
B4a45a9:L4a45a9:{c.instructions+=1;NFSU2_TR(0x4a45a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a45ac:L4a45ac:{c.instructions+=6;NFSU2_TR(0x4a45ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a45af:{NFSU2_TR(0x4a45af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45b1:{NFSU2_TR(0x4a45b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45b2:{NFSU2_TR(0x4a45b2);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45b7:{NFSU2_TR(0x4a45b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45b8:{NFSU2_TR(0x4a45b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a45bdull));
TAIL_STATIC(0x537c60u,537);
}
B4a45bd:L4a45bd:{c.instructions+=6;NFSU2_TR(0x4a45bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a45c0:{NFSU2_TR(0x4a45c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45c2:{NFSU2_TR(0x4a45c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45c3:{NFSU2_TR(0x4a45c3);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45c8:{NFSU2_TR(0x4a45c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a45c9:{NFSU2_TR(0x4a45c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a45ceull));
TAIL_STATIC(0x537c60u,537);
}
B4a45ce:L4a45ce:{c.instructions+=6;NFSU2_TR(0x4a45ce);
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
B4a45d1:{NFSU2_TR(0x4a45d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a45d2:{NFSU2_TR(0x4a45d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a45d3:{NFSU2_TR(0x4a45d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a45d4:{NFSU2_TR(0x4a45d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a45d5:{NFSU2_TR(0x4a45d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a45e0:L4a45e0:{c.instructions+=4;NFSU2_TR(0x4a45e0);
__builtin_memmove((R+4),gp(0x850078),4);
}
B4a45e6:{NFSU2_TR(0x4a45e6);
w4(R+0,u32(0x1ull));
}
B4a45eb:{NFSU2_TR(0x4a45eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a45ed:{NFSU2_TR(0x4a45ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4605;}}
}
B4a45ef:L4a45ef:{c.instructions+=5;NFSU2_TR(0x4a45ef);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4a45f5:{NFSU2_TR(0x4a45f5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4a45fb:{NFSU2_TR(0x4a45fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x862100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a4601:{NFSU2_TR(0x4a4601);
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
B4a4603:{NFSU2_TR(0x4a4603);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4607;}}
}
B4a4605:L4a4605:{c.instructions+=1;NFSU2_TR(0x4a4605);
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
B4a4607:L4a4607:{c.instructions+=1;NFSU2_TR(0x4a4607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4610:L4a4610:{c.instructions+=3;NFSU2_TR(0x4a4610);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4611:{NFSU2_TR(0x4a4611);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4618:{NFSU2_TR(0x4a4618);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a468b;}}
}
B4a461a:L4a461a:{c.instructions+=3;NFSU2_TR(0x4a461a);
__builtin_memmove((R+0),gp(0x863470),4);
}
B4a461f:{NFSU2_TR(0x4a461f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4621:{NFSU2_TR(0x4a4621);
if(r1(R+518)){{goto L4a462c;}}
}
B4a4623:L4a4623:{c.instructions+=2;NFSU2_TR(0x4a4623);
u8 U[8];
__builtin_memmove((U+0),gp(0x85ef4c),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a462a:{NFSU2_TR(0x4a462a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a468b;}}
}
B4a462c:L4a462c:{c.instructions+=4;NFSU2_TR(0x4a462c);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4a4632:{NFSU2_TR(0x4a4632);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4a4638:{NFSU2_TR(0x4a4638);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B4a463e:{NFSU2_TR(0x4a463e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4643ull));
TAIL_STATIC(0x500610u,500);
}
B4a4643:L4a4643:{c.instructions+=2;NFSU2_TR(0x4a4643);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4645:{NFSU2_TR(0x4a4645);
if(r1(R+518)){{goto L4a468b;}}
}
B4a4647:L4a4647:{c.instructions+=3;NFSU2_TR(0x4a4647);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4a464d:{NFSU2_TR(0x4a464d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4650:{NFSU2_TR(0x4a4650);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a468b;}}
}
B4a4652:L4a4652:{c.instructions+=3;NFSU2_TR(0x4a4652);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4a4658:{NFSU2_TR(0x4a4658);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x861f14ull))));
}
B4a465e:{NFSU2_TR(0x4a465e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4663ull));
TAIL_STATIC(0x5005e0u,500);
}
B4a4663:L4a4663:{c.instructions+=7;NFSU2_TR(0x4a4663);
__builtin_memmove((R+4),gp(0x862838),4);
}
B4a4669:{NFSU2_TR(0x4a4669);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4a466f:{NFSU2_TR(0x4a466f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a4673:{NFSU2_TR(0x4a4673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a4677:{NFSU2_TR(0x4a4677);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4678:{NFSU2_TR(0x4a4678);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B4a467e:{NFSU2_TR(0x4a467e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4683ull));
TAIL_STATIC(0x500670u,500);
}
B4a4683:L4a4683:{c.instructions+=2;NFSU2_TR(0x4a4683);
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
B4a4685:{NFSU2_TR(0x4a4685);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a468b;}}
}
B4a4687:L4a4687:{c.instructions+=3;NFSU2_TR(0x4a4687);
w1(R+0,u8(0x1ull));
}
B4a4689:{NFSU2_TR(0x4a4689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a468a:{NFSU2_TR(0x4a468a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a468b:L4a468b:{c.instructions+=3;NFSU2_TR(0x4a468b);
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
B4a468d:{NFSU2_TR(0x4a468d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a468e:{NFSU2_TR(0x4a468e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4690:L4a4690:{c.instructions+=3;NFSU2_TR(0x4a4690);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4a4696:{NFSU2_TR(0x4a4696);
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
B4a4698:{NFSU2_TR(0x4a4698);
if(r1(R+518)){{goto L4a46a0;}}
}
B4a469a:L4a469a:{c.instructions+=3;NFSU2_TR(0x4a469a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a469c:{NFSU2_TR(0x4a469c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a469e:{NFSU2_TR(0x4a469e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a46a0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4a46a0:L4a46a0:{c.instructions+=2;NFSU2_TR(0x4a46a0);
s4(0x8363dc,u32(0x0ull));
}
B4a46aa:{NFSU2_TR(0x4a46aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a46b0:L4a46b0:{c.instructions+=4;NFSU2_TR(0x4a46b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a46b1:{NFSU2_TR(0x4a46b1);
__builtin_memmove((R+24),gp(0x8363dc),4);
}
B4a46b7:{NFSU2_TR(0x4a46b7);
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
B4a46b9:{NFSU2_TR(0x4a46b9);
if(r1(R+518)){{goto L4a46d5;}}
}
B4a46bb:L4a46bb:{c.instructions+=2;NFSU2_TR(0x4a46bb);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a46c1:{NFSU2_TR(0x4a46c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a46c6ull));
TAIL_STATIC(0x54e6b0u,54e);
}
B4a46c6:L4a46c6:{c.instructions+=4;NFSU2_TR(0x4a46c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a46c9:{NFSU2_TR(0x4a46c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a46cc:{NFSU2_TR(0x4a46cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a46cd:{NFSU2_TR(0x4a46cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a46d2ull));
TAIL_STATIC(0x558f00u,558);
}
B4a46d2:L4a46d2:{c.instructions+=1;NFSU2_TR(0x4a46d2);
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
B4a46d5:L4a46d5:{c.instructions+=2;NFSU2_TR(0x4a46d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a46d6:{NFSU2_TR(0x4a46d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a46e0:L4a46e0:{c.instructions+=3;NFSU2_TR(0x4a46e0);
__builtin_memmove((R+0),gp(0x8363dc),4);
}
B4a46e5:{NFSU2_TR(0x4a46e5);
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
B4a46e7:{NFSU2_TR(0x4a46e7);
if(r1(R+518)){{goto L4a4705;}}
}
B4a46e9:L4a46e9:{c.instructions+=5;NFSU2_TR(0x4a46e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a46ec:{NFSU2_TR(0x4a46ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a46ef:{NFSU2_TR(0x4a46ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a46f1:{NFSU2_TR(0x4a46f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a46f2:{NFSU2_TR(0x4a46f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a46f7ull));
TAIL_STATIC(0x555e80u,555);
}
B4a46f7:L4a46f7:{c.instructions+=3;NFSU2_TR(0x4a46f7);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a46fd:{NFSU2_TR(0x4a46fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a4700:{NFSU2_TR(0x4a4700);
TAIL_STATIC(0x54e6a0u,54e);
}
B4a4705:L4a4705:{c.instructions+=1;NFSU2_TR(0x4a4705);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4710:L4a4710:{c.instructions+=12;NFSU2_TR(0x4a4710);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4714:{NFSU2_TR(0x4a4714);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4717:{NFSU2_TR(0x4a4717);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a471b:{NFSU2_TR(0x4a471b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a471e:{NFSU2_TR(0x4a471e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a4720:{NFSU2_TR(0x4a4720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4721:{NFSU2_TR(0x4a4721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4a4723:{NFSU2_TR(0x4a4723);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a4725:{NFSU2_TR(0x4a4725);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4a4727:{NFSU2_TR(0x4a4727);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B4a472a:{NFSU2_TR(0x4a472a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a472b:{NFSU2_TR(0x4a472b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4730:L4a4730:{c.instructions+=10;NFSU2_TR(0x4a4730);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4734:{NFSU2_TR(0x4a4734);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4737:{NFSU2_TR(0x4a4737);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a473b:{NFSU2_TR(0x4a473b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a473c:{NFSU2_TR(0x4a473c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a473f:{NFSU2_TR(0x4a473f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a4741:{NFSU2_TR(0x4a4741);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4a4743:{NFSU2_TR(0x4a4743);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B4a4746:{NFSU2_TR(0x4a4746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4747:{NFSU2_TR(0x4a4747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4750:L4a4750:{c.instructions+=5;NFSU2_TR(0x4a4750);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4754:{NFSU2_TR(0x4a4754);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4758:{NFSU2_TR(0x4a4758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4759:{NFSU2_TR(0x4a4759);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a475a:{NFSU2_TR(0x4a475a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a475full));
TAIL_STATIC(0x50d230u,50d);
}
B4a475f:L4a475f:{c.instructions+=2;NFSU2_TR(0x4a475f);
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
B4a4762:{NFSU2_TR(0x4a4762);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4770:L4a4770:{c.instructions+=8;NFSU2_TR(0x4a4770);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4771:{NFSU2_TR(0x4a4771);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4772:{NFSU2_TR(0x4a4772);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a4776:{NFSU2_TR(0x4a4776);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4778:{NFSU2_TR(0x4a4778);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4779:{NFSU2_TR(0x4a4779);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a477a:{NFSU2_TR(0x4a477a);
__builtin_memmove((R+24),(R+4),4);
}
B4a477c:{NFSU2_TR(0x4a477c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a4820;}}
}
B4a4782:L4a4782:{c.instructions+=1;NFSU2_TR(0x4a4782);
w4(R+28,u32(0x1ull));
}
B4a4787:L4a4787:{c.instructions+=4;NFSU2_TR(0x4a4787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a478a:{NFSU2_TR(0x4a478a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a478b:{NFSU2_TR(0x4a478b);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4790:{NFSU2_TR(0x4a4790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4795ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4795:L4a4795:{c.instructions+=3;NFSU2_TR(0x4a4795);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4796:{NFSU2_TR(0x4a4796);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4797:{NFSU2_TR(0x4a4797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a479cull));
TAIL_STATIC(0x5379c0u,537);
}
B4a479c:L4a479c:{c.instructions+=2;NFSU2_TR(0x4a479c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a479d:{NFSU2_TR(0x4a479d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47a2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a47a2:L4a47a2:{c.instructions+=4;NFSU2_TR(0x4a47a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a47a5:{NFSU2_TR(0x4a47a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47a6:{NFSU2_TR(0x4a47a6);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47ab:{NFSU2_TR(0x4a47ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47b0ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a47b0:L4a47b0:{c.instructions+=3;NFSU2_TR(0x4a47b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47b1:{NFSU2_TR(0x4a47b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47b2:{NFSU2_TR(0x4a47b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47b7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a47b7:L4a47b7:{c.instructions+=2;NFSU2_TR(0x4a47b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47b8:{NFSU2_TR(0x4a47b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47bdull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a47bd:L4a47bd:{c.instructions+=4;NFSU2_TR(0x4a47bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a47c0:{NFSU2_TR(0x4a47c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47c1:{NFSU2_TR(0x4a47c1);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47c6:{NFSU2_TR(0x4a47c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47cbull));
TAIL_STATIC(0x50b990u,50b);
}
B4a47cb:L4a47cb:{c.instructions+=3;NFSU2_TR(0x4a47cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47cc:{NFSU2_TR(0x4a47cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47cd:{NFSU2_TR(0x4a47cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47d2ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a47d2:L4a47d2:{c.instructions+=2;NFSU2_TR(0x4a47d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47d3:{NFSU2_TR(0x4a47d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47d8ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a47d8:L4a47d8:{c.instructions+=4;NFSU2_TR(0x4a47d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a47db:{NFSU2_TR(0x4a47db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47dc:{NFSU2_TR(0x4a47dc);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47e1:{NFSU2_TR(0x4a47e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47e6ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a47e6:L4a47e6:{c.instructions+=4;NFSU2_TR(0x4a47e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4a47e9:{NFSU2_TR(0x4a47e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47ea:{NFSU2_TR(0x4a47ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47eb:{NFSU2_TR(0x4a47eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47f0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a47f0:L4a47f0:{c.instructions+=2;NFSU2_TR(0x4a47f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47f1:{NFSU2_TR(0x4a47f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a47f6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a47f6:L4a47f6:{c.instructions+=4;NFSU2_TR(0x4a47f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a47f9:{NFSU2_TR(0x4a47f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47fa:{NFSU2_TR(0x4a47fa);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a47ff:{NFSU2_TR(0x4a47ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4804ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4804:L4a4804:{c.instructions+=3;NFSU2_TR(0x4a4804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4805:{NFSU2_TR(0x4a4805);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4806:{NFSU2_TR(0x4a4806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a480bull));
TAIL_STATIC(0x5379c0u,537);
}
B4a480b:L4a480b:{c.instructions+=2;NFSU2_TR(0x4a480b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a480c:{NFSU2_TR(0x4a480c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4811ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a4811:L4a4811:{c.instructions+=4;NFSU2_TR(0x4a4811);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4a4814:{NFSU2_TR(0x4a4814);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4a4815:{NFSU2_TR(0x4a4815);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B4a4816:{NFSU2_TR(0x4a4816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a4787u);}goto L4a4787;}}
}
B4a481c:L4a481c:{c.instructions+=1;NFSU2_TR(0x4a481c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a4820:L4a4820:{c.instructions+=3;NFSU2_TR(0x4a4820);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4824:{NFSU2_TR(0x4a4824);
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
B4a4826:{NFSU2_TR(0x4a4826);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4a48c9;}}
}
B4a482c:L4a482c:{c.instructions+=4;NFSU2_TR(0x4a482c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B4a482e:{NFSU2_TR(0x4a482e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a482f:{NFSU2_TR(0x4a482f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4832:{NFSU2_TR(0x4a4832);
__builtin_memmove((R+20),(R+0),4);
}
B4a4834:L4a4834:{c.instructions+=4;NFSU2_TR(0x4a4834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a4837:{NFSU2_TR(0x4a4837);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4838:{NFSU2_TR(0x4a4838);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a483d:{NFSU2_TR(0x4a483d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4842ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4842:L4a4842:{c.instructions+=3;NFSU2_TR(0x4a4842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4843:{NFSU2_TR(0x4a4843);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4844:{NFSU2_TR(0x4a4844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4849ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a4849:L4a4849:{c.instructions+=2;NFSU2_TR(0x4a4849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a484a:{NFSU2_TR(0x4a484a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a484full));
TAIL_STATIC(0x50ca00u,50c);
}
B4a484f:L4a484f:{c.instructions+=4;NFSU2_TR(0x4a484f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a4852:{NFSU2_TR(0x4a4852);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4853:{NFSU2_TR(0x4a4853);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4858:{NFSU2_TR(0x4a4858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a485dull));
TAIL_STATIC(0x50b990u,50b);
}
B4a485d:L4a485d:{c.instructions+=3;NFSU2_TR(0x4a485d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a485e:{NFSU2_TR(0x4a485e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a485f:{NFSU2_TR(0x4a485f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4864ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a4864:L4a4864:{c.instructions+=2;NFSU2_TR(0x4a4864);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4865:{NFSU2_TR(0x4a4865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a486aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a486a:L4a486a:{c.instructions+=4;NFSU2_TR(0x4a486a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a486d:{NFSU2_TR(0x4a486d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a486e:{NFSU2_TR(0x4a486e);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4873:{NFSU2_TR(0x4a4873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4878ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4878:L4a4878:{c.instructions+=3;NFSU2_TR(0x4a4878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4879:{NFSU2_TR(0x4a4879);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a487a:{NFSU2_TR(0x4a487a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a487full));
TAIL_STATIC(0x5379c0u,537);
}
B4a487f:L4a487f:{c.instructions+=2;NFSU2_TR(0x4a487f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4880:{NFSU2_TR(0x4a4880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4885ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a4885:L4a4885:{c.instructions+=4;NFSU2_TR(0x4a4885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a4888:{NFSU2_TR(0x4a4888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4889:{NFSU2_TR(0x4a4889);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a488e:{NFSU2_TR(0x4a488e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4893ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4893:L4a4893:{c.instructions+=4;NFSU2_TR(0x4a4893);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4a4896:{NFSU2_TR(0x4a4896);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4897:{NFSU2_TR(0x4a4897);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4898:{NFSU2_TR(0x4a4898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a489dull));
TAIL_STATIC(0x5379c0u,537);
}
B4a489d:L4a489d:{c.instructions+=2;NFSU2_TR(0x4a489d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a489e:{NFSU2_TR(0x4a489e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a48a3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a48a3:L4a48a3:{c.instructions+=4;NFSU2_TR(0x4a48a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a48a6:{NFSU2_TR(0x4a48a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48a7:{NFSU2_TR(0x4a48a7);
u8 U[4];
w4(U+0,u32(0x790544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48ac:{NFSU2_TR(0x4a48ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a48b1ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a48b1:L4a48b1:{c.instructions+=3;NFSU2_TR(0x4a48b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48b2:{NFSU2_TR(0x4a48b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48b3:{NFSU2_TR(0x4a48b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a48b8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a48b8:L4a48b8:{c.instructions+=2;NFSU2_TR(0x4a48b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48b9:{NFSU2_TR(0x4a48b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a48beull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a48be:L4a48be:{c.instructions+=4;NFSU2_TR(0x4a48be);
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4a48c1:{NFSU2_TR(0x4a48c1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4a48c2:{NFSU2_TR(0x4a48c2);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a48c3:{NFSU2_TR(0x4a48c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a4834u);}goto L4a4834;}}
}
B4a48c9:L4a48c9:{c.instructions+=5;NFSU2_TR(0x4a48c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a48ca:{NFSU2_TR(0x4a48ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a48cb:{NFSU2_TR(0x4a48cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a48cc:{NFSU2_TR(0x4a48cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a48cd:{NFSU2_TR(0x4a48cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a48d0:L4a48d0:{c.instructions+=11;NFSU2_TR(0x4a48d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4a48d3:{NFSU2_TR(0x4a48d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a48d7:{NFSU2_TR(0x4a48d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48d8:{NFSU2_TR(0x4a48d8);
__builtin_memmove((R+24),(R+4),4);
}
B4a48da:{NFSU2_TR(0x4a48da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a48dd:{NFSU2_TR(0x4a48dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48df:{NFSU2_TR(0x4a48df);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a48e3:{NFSU2_TR(0x4a48e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a48e7:{NFSU2_TR(0x4a48e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48e8:{NFSU2_TR(0x4a48e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a48ec:{NFSU2_TR(0x4a48ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a48f1ull));
TAIL_STATIC(0x577240u,577);
}
B4a48f1:L4a48f1:{c.instructions+=9;NFSU2_TR(0x4a48f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a48f5:{NFSU2_TR(0x4a48f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a48f8:{NFSU2_TR(0x4a48f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a48fc:{NFSU2_TR(0x4a48fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a48fd:{NFSU2_TR(0x4a48fd);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4902:{NFSU2_TR(0x4a4902);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a4903:{NFSU2_TR(0x4a4903);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4904:{NFSU2_TR(0x4a4904);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4909:{NFSU2_TR(0x4a4909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a490eull));
TAIL_STATIC(0x50b990u,50b);
}
B4a490e:L4a490e:{c.instructions+=4;NFSU2_TR(0x4a490e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a4911:{NFSU2_TR(0x4a4911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4912:{NFSU2_TR(0x4a4912);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4913:{NFSU2_TR(0x4a4913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4918ull));
TAIL_STATIC(0x537b80u,537);
}
B4a4918:L4a4918:{c.instructions+=4;NFSU2_TR(0x4a4918);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a491b:{NFSU2_TR(0x4a491b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a491c:{NFSU2_TR(0x4a491c);
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
B4a491f:{NFSU2_TR(0x4a491f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4930:L4a4930:{c.instructions+=9;NFSU2_TR(0x4a4930);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4934:{NFSU2_TR(0x4a4934);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4935:{NFSU2_TR(0x4a4935);
__builtin_memmove((R+24),(R+4),4);
}
B4a4937:{NFSU2_TR(0x4a4937);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a493b:{NFSU2_TR(0x4a493b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4a493e:{NFSU2_TR(0x4a493e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4a4941:{NFSU2_TR(0x4a4941);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4942:{NFSU2_TR(0x4a4942);
w4(R+4,u32(0x89cf48ull));
}
B4a4947:{NFSU2_TR(0x4a4947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a494cull));
TAIL_STATIC(0x5f0230u,5f0);
}
B4a494c:L4a494c:{c.instructions+=2;NFSU2_TR(0x4a494c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a494e:{NFSU2_TR(0x4a494e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4978;}}
}
B4a4950:L4a4950:{c.instructions+=6;NFSU2_TR(0x4a4950);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4954:{NFSU2_TR(0x4a4954);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4957:{NFSU2_TR(0x4a4957);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a495c:{NFSU2_TR(0x4a495c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a495d:{NFSU2_TR(0x4a495d);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4962:{NFSU2_TR(0x4a4962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4967ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4967:L4a4967:{c.instructions+=4;NFSU2_TR(0x4a4967);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a496a:{NFSU2_TR(0x4a496a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a496b:{NFSU2_TR(0x4a496b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a496c:{NFSU2_TR(0x4a496c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4971ull));
TAIL_STATIC(0x537b80u,537);
}
B4a4971:L4a4971:{c.instructions+=3;NFSU2_TR(0x4a4971);
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
B4a4974:{NFSU2_TR(0x4a4974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4975:{NFSU2_TR(0x4a4975);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4978:L4a4978:{c.instructions+=3;NFSU2_TR(0x4a4978);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4979:{NFSU2_TR(0x4a4979);
__builtin_memmove((R+4),(R+0),4);
}
B4a497b:{NFSU2_TR(0x4a497b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4980ull));
TAIL_STATIC(0x5f8fe0u,5f8);
}
B4a4980:L4a4980:{c.instructions+=5;NFSU2_TR(0x4a4980);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4983:{NFSU2_TR(0x4a4983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4986:{NFSU2_TR(0x4a4986);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4987:{NFSU2_TR(0x4a4987);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a498c:{NFSU2_TR(0x4a498c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4991ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a4991:L4a4991:{c.instructions+=5;NFSU2_TR(0x4a4991);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4995:{NFSU2_TR(0x4a4995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4996:{NFSU2_TR(0x4a4996);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a499b:{NFSU2_TR(0x4a499b);
__builtin_memmove((R+28),(R+0),4);
}
B4a499d:{NFSU2_TR(0x4a499d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a49a2ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a49a2:L4a49a2:{c.instructions+=5;NFSU2_TR(0x4a49a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a49a5:{NFSU2_TR(0x4a49a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49a6:{NFSU2_TR(0x4a49a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49a7:{NFSU2_TR(0x4a49a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49a8:{NFSU2_TR(0x4a49a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a49adull));
TAIL_STATIC(0x537a10u,537);
}
B4a49ad:L4a49ad:{c.instructions+=3;NFSU2_TR(0x4a49ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a49b0:{NFSU2_TR(0x4a49b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49b1:{NFSU2_TR(0x4a49b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a49b6ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a49b6:L4a49b6:{c.instructions+=4;NFSU2_TR(0x4a49b6);
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
B4a49b9:{NFSU2_TR(0x4a49b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a49ba:{NFSU2_TR(0x4a49ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a49bb:{NFSU2_TR(0x4a49bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a49c0:L4a49c0:{c.instructions+=8;NFSU2_TR(0x4a49c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4a49c3:{NFSU2_TR(0x4a49c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49c4:{NFSU2_TR(0x4a49c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49c5:{NFSU2_TR(0x4a49c5);
__builtin_memmove((R+24),(R+4),4);
}
B4a49c7:{NFSU2_TR(0x4a49c7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a49c9:{NFSU2_TR(0x4a49c9);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a49ce:{NFSU2_TR(0x4a49ce);
w4(R+4,u32(0x7ull));
}
B4a49d3:{NFSU2_TR(0x4a49d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a49d7:L4a49d7:{c.instructions+=1;NFSU2_TR(0x4a49d7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a49d9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a49d7u);}goto L4a49d7;}
}
B4a49d9:L4a49d9:{c.instructions+=9;NFSU2_TR(0x4a49d9);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4a49db:{NFSU2_TR(0x4a49db);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4a49dc:{NFSU2_TR(0x4a49dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a49e0:{NFSU2_TR(0x4a49e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49e1:{NFSU2_TR(0x4a49e1);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49e6:{NFSU2_TR(0x4a49e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a49ea:{NFSU2_TR(0x4a49ea);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49ec:{NFSU2_TR(0x4a49ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a49ed:{NFSU2_TR(0x4a49ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a49f2ull));
TAIL_STATIC(0x50c960u,50c);
}
B4a49f2:L4a49f2:{c.instructions+=4;NFSU2_TR(0x4a49f2);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a49f6:{NFSU2_TR(0x4a49f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a49f9:{NFSU2_TR(0x4a49f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xfeull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a49fb:{NFSU2_TR(0x4a49fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4a21;}}
}
B4a49fd:L4a49fd:{c.instructions+=3;NFSU2_TR(0x4a49fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4a00:{NFSU2_TR(0x4a4a00);
u8 U[4];
w4(U+0,u32(0xa7db717full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a05:{NFSU2_TR(0x4a4a05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4a0aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a4a0a:L4a4a0a:{c.instructions+=5;NFSU2_TR(0x4a4a0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a0b:{NFSU2_TR(0x4a4a0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4a0f:{NFSU2_TR(0x4a4a0f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a10:{NFSU2_TR(0x4a4a10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a11:{NFSU2_TR(0x4a4a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4a16ull));
TAIL_STATIC(0x542600u,542);
}
B4a4a16:L4a4a16:{c.instructions+=5;NFSU2_TR(0x4a4a16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4a19:{NFSU2_TR(0x4a4a19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4a1a:{NFSU2_TR(0x4a4a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4a1b:{NFSU2_TR(0x4a4a1b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a4a1e:{NFSU2_TR(0x4a4a1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4a21:L4a4a21:{c.instructions+=2;NFSU2_TR(0x4a4a21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4a23:{NFSU2_TR(0x4a4a23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4a49;}}
}
B4a4a25:L4a4a25:{c.instructions+=3;NFSU2_TR(0x4a4a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4a28:{NFSU2_TR(0x4a4a28);
u8 U[4];
w4(U+0,u32(0x490a722dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a2d:{NFSU2_TR(0x4a4a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4a32ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a4a32:L4a4a32:{c.instructions+=5;NFSU2_TR(0x4a4a32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a33:{NFSU2_TR(0x4a4a33);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a4a37:{NFSU2_TR(0x4a4a37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a38:{NFSU2_TR(0x4a4a38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a39:{NFSU2_TR(0x4a4a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4a3eull));
TAIL_STATIC(0x542600u,542);
}
B4a4a3e:L4a4a3e:{c.instructions+=5;NFSU2_TR(0x4a4a3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4a41:{NFSU2_TR(0x4a4a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4a42:{NFSU2_TR(0x4a4a42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4a43:{NFSU2_TR(0x4a4a43);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a4a46:{NFSU2_TR(0x4a4a46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4a49:L4a4a49:{c.instructions+=3;NFSU2_TR(0x4a4a49);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4a4a4e:{NFSU2_TR(0x4a4a4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4a50:{NFSU2_TR(0x4a4a50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4a5b;}}
}
B4a4a52:L4a4a52:{c.instructions+=3;NFSU2_TR(0x4a4a52);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4a4a57:{NFSU2_TR(0x4a4a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4a59:{NFSU2_TR(0x4a4a59);
if(r1(R+518)){{goto L4a4a89;}}
}
B4a4a5b:L4a4a5b:{c.instructions+=10;NFSU2_TR(0x4a4a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4a5f:{NFSU2_TR(0x4a4a5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a4a63:{NFSU2_TR(0x4a4a63);
u8 U[16];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4a4a6a:{NFSU2_TR(0x4a4a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a4a6d:{NFSU2_TR(0x4a4a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a6e:{NFSU2_TR(0x4a4a6e);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a73:{NFSU2_TR(0x4a4a73);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a4a77:{NFSU2_TR(0x4a4a77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a78:{NFSU2_TR(0x4a4a78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4a79:{NFSU2_TR(0x4a4a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4a7eull));
TAIL_STATIC(0x542600u,542);
}
B4a4a7e:L4a4a7e:{c.instructions+=5;NFSU2_TR(0x4a4a7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4a81:{NFSU2_TR(0x4a4a81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4a82:{NFSU2_TR(0x4a4a82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4a83:{NFSU2_TR(0x4a4a83);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a4a86:{NFSU2_TR(0x4a4a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4a89:L4a4a89:{c.instructions+=5;NFSU2_TR(0x4a4a89);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4a4a8e:{NFSU2_TR(0x4a4a8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4a90:{NFSU2_TR(0x4a4a90);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4a94:{NFSU2_TR(0x4a4a94);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a4a98:{NFSU2_TR(0x4a4a98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4aa3;}}
}
B4a4a9a:L4a4a9a:{c.instructions+=3;NFSU2_TR(0x4a4a9a);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4a4a9f:{NFSU2_TR(0x4a4a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4aa1:{NFSU2_TR(0x4a4aa1);
if(r1(R+518)){{goto L4a4ae3;}}
}
B4a4aa3:L4a4aa3:{c.instructions+=3;NFSU2_TR(0x4a4aa3);
u8 U[16];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4a4aaa:{NFSU2_TR(0x4a4aaa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4a4aac:{NFSU2_TR(0x4a4aac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4a4ae3;}}
}
B4a4aae:L4a4aae:{c.instructions+=9;NFSU2_TR(0x4a4aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4ab1:{NFSU2_TR(0x4a4ab1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a4ab3:{NFSU2_TR(0x4a4ab3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a4ab6:{NFSU2_TR(0x4a4ab6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4a4ab9:{NFSU2_TR(0x4a4ab9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4a4aba:{NFSU2_TR(0x4a4aba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xb5d0ee21ull))));
}
B4a4ac0:{NFSU2_TR(0x4a4ac0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1e66364ull))));
}
B4a4ac6:{NFSU2_TR(0x4a4ac6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ac7:{NFSU2_TR(0x4a4ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4accull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a4acc:L4a4acc:{c.instructions+=5;NFSU2_TR(0x4a4acc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4acd:{NFSU2_TR(0x4a4acd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4ad1:{NFSU2_TR(0x4a4ad1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ad2:{NFSU2_TR(0x4a4ad2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ad3:{NFSU2_TR(0x4a4ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ad8ull));
TAIL_STATIC(0x542600u,542);
}
B4a4ad8:L4a4ad8:{c.instructions+=5;NFSU2_TR(0x4a4ad8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4adb:{NFSU2_TR(0x4a4adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4adc:{NFSU2_TR(0x4a4adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4add:{NFSU2_TR(0x4a4add);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a4ae0:{NFSU2_TR(0x4a4ae0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4ae3:L4a4ae3:{c.instructions+=5;NFSU2_TR(0x4a4ae3);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(200u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a4aea:{NFSU2_TR(0x4a4aea);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a4af0:{NFSU2_TR(0x4a4af0);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a4af6:{NFSU2_TR(0x4a4af6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a4afc:{NFSU2_TR(0x4a4afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4b01ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4a4b01:L4a4b01:{c.instructions+=5;NFSU2_TR(0x4a4b01);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a4b05:{NFSU2_TR(0x4a4b05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a4b07:{NFSU2_TR(0x4a4b07);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a4b0c:{NFSU2_TR(0x4a4b0c);
w4(R+4,u32(0x7ull));
}
B4a4b11:{NFSU2_TR(0x4a4b11);
u8 U[4];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4b15:L4a4b15:{c.instructions+=1;NFSU2_TR(0x4a4b15);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a4b17;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a4b15u);}goto L4a4b15;}
}
B4a4b17:L4a4b17:{c.instructions+=7;NFSU2_TR(0x4a4b17);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4a4b19:{NFSU2_TR(0x4a4b19);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4a4b1a:{NFSU2_TR(0x4a4b1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b1c:{NFSU2_TR(0x4a4b1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a4b20:{NFSU2_TR(0x4a4b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b21:{NFSU2_TR(0x4a4b21);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a4b25:{NFSU2_TR(0x4a4b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4b2aull));
TAIL_STATIC(0x577240u,577);
}
B4a4b2a:L4a4b2a:{c.instructions+=7;NFSU2_TR(0x4a4b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4b2d:{NFSU2_TR(0x4a4b2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a4b31:{NFSU2_TR(0x4a4b31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b32:{NFSU2_TR(0x4a4b32);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4b36:{NFSU2_TR(0x4a4b36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b37:{NFSU2_TR(0x4a4b37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b38:{NFSU2_TR(0x4a4b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4b3dull));
TAIL_STATIC(0x542600u,542);
}
B4a4b3d:L4a4b3d:{c.instructions+=5;NFSU2_TR(0x4a4b3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a4b40:{NFSU2_TR(0x4a4b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4b41:{NFSU2_TR(0x4a4b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4b42:{NFSU2_TR(0x4a4b42);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a4b45:{NFSU2_TR(0x4a4b45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4b50:L4a4b50:{c.instructions+=3;NFSU2_TR(0x4a4b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4b54:{NFSU2_TR(0x4a4b54);
__builtin_memmove(gp(0x8363e4),(R+0),4);
}
B4a4b59:{NFSU2_TR(0x4a4b59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4b60:L4a4b60:{c.instructions+=4;NFSU2_TR(0x4a4b60);
__builtin_memmove((R+0),gp(0x8363e8),4);
}
B4a4b65:{NFSU2_TR(0x4a4b65);
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
B4a4b67:{NFSU2_TR(0x4a4b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4a4b6a:{NFSU2_TR(0x4a4b6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4b70:L4a4b70:{c.instructions+=12;NFSU2_TR(0x4a4b70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b72:{NFSU2_TR(0x4a4b72);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b77:{NFSU2_TR(0x4a4b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4b7d:{NFSU2_TR(0x4a4b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b7e:{NFSU2_TR(0x4a4b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a4b85:{NFSU2_TR(0x4a4b85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b86:{NFSU2_TR(0x4a4b86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4b87:{NFSU2_TR(0x4a4b87);
__builtin_memmove((R+24),(R+4),4);
}
B4a4b89:{NFSU2_TR(0x4a4b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a4b8d:{NFSU2_TR(0x4a4b8d);
u8 U[4];
w4(U+0,u32(0x79055cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a4b93:{NFSU2_TR(0x4a4b93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4b9b:{NFSU2_TR(0x4a4b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ba0ull));
TAIL_STATIC(0x57c3c0u,57c);
}
B4a4ba0:L4a4ba0:{c.instructions+=5;NFSU2_TR(0x4a4ba0);
s4(0x8363ec,u32(0x0ull));
}
B4a4baa:{NFSU2_TR(0x4a4baa);
s4(0x8363e8,u32(0x0ull));
}
B4a4bb4:{NFSU2_TR(0x4a4bb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4bba:{NFSU2_TR(0x4a4bba);
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
B4a4bbc:{NFSU2_TR(0x4a4bbc);
if(r1(R+518)){{goto L4a4bc9;}}
}
B4a4bbe:L4a4bbe:{c.instructions+=2;NFSU2_TR(0x4a4bbe);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a4bc4:{NFSU2_TR(0x4a4bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4bc9ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4a4bc9:L4a4bc9:{c.instructions+=3;NFSU2_TR(0x4a4bc9);
__builtin_memmove((R+4),(R+24),4);
}
B4a4bcb:{NFSU2_TR(0x4a4bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4bd3:{NFSU2_TR(0x4a4bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4bd8ull));
TAIL_STATIC(0x510d40u,510);
}
B4a4bd8:L4a4bd8:{c.instructions+=5;NFSU2_TR(0x4a4bd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4bdc:{NFSU2_TR(0x4a4bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4bdd:{NFSU2_TR(0x4a4bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a4be4:{NFSU2_TR(0x4a4be4);
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
B4a4be7:{NFSU2_TR(0x4a4be7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4bf0:L4a4bf0:{c.instructions+=7;NFSU2_TR(0x4a4bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4bf1:{NFSU2_TR(0x4a4bf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4bf2:{NFSU2_TR(0x4a4bf2);
__builtin_memmove((R+24),(R+4),4);
}
B4a4bf4:{NFSU2_TR(0x4a4bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4bf7:{NFSU2_TR(0x4a4bf7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4bf9:{NFSU2_TR(0x4a4bf9);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4bfe:{NFSU2_TR(0x4a4bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4c03ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4c03:L4a4c03:{c.instructions+=4;NFSU2_TR(0x4a4c03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4c06:{NFSU2_TR(0x4a4c06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c07:{NFSU2_TR(0x4a4c07);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c0c:{NFSU2_TR(0x4a4c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4c11ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4c11:L4a4c11:{c.instructions+=4;NFSU2_TR(0x4a4c11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4c14:{NFSU2_TR(0x4a4c14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c15:{NFSU2_TR(0x4a4c15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c16:{NFSU2_TR(0x4a4c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4c1bull));
TAIL_STATIC(0x537c60u,537);
}
B4a4c1b:L4a4c1b:{c.instructions+=7;NFSU2_TR(0x4a4c1b);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a4c21:{NFSU2_TR(0x4a4c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4c27:{NFSU2_TR(0x4a4c27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4c2a:{NFSU2_TR(0x4a4c2a);
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
B4a4c2c:{NFSU2_TR(0x4a4c2c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a4c32:{NFSU2_TR(0x4a4c32);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a4c38:{NFSU2_TR(0x4a4c38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4c74;}}
}
B4a4c3a:L4a4c3a:{c.instructions+=3;NFSU2_TR(0x4a4c3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4c40:{NFSU2_TR(0x4a4c40);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4c42:{NFSU2_TR(0x4a4c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4c67;}}
}
B4a4c44:L4a4c44:{c.instructions+=3;NFSU2_TR(0x4a4c44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4c4a:{NFSU2_TR(0x4a4c4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4c4c:{NFSU2_TR(0x4a4c4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4c67;}}
}
B4a4c4e:L4a4c4e:{c.instructions+=5;NFSU2_TR(0x4a4c4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c50:{NFSU2_TR(0x4a4c50);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c55:{NFSU2_TR(0x4a4c55);
u8 U[4];
w4(U+0,u32(0xa9723345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c5a:{NFSU2_TR(0x4a4c5a);
u8 U[4];
w4(U+0,u32(0x79056cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c5f:{NFSU2_TR(0x4a4c5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4c64ull));
TAIL_STATIC(0x537c00u,537);
}
B4a4c64:L4a4c64:{c.instructions+=1;NFSU2_TR(0x4a4c64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4c67:L4a4c67:{c.instructions+=3;NFSU2_TR(0x4a4c67);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a4c6d:{NFSU2_TR(0x4a4c6d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4c6f:{NFSU2_TR(0x4a4c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4c74ull));
TAIL_STATIC(0x5f43b0u,5f4);
}
B4a4c74:L4a4c74:{c.instructions+=8;NFSU2_TR(0x4a4c74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4c78:{NFSU2_TR(0x4a4c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a4c7e:{NFSU2_TR(0x4a4c7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a4c85:{NFSU2_TR(0x4a4c85);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4a4c8b:{NFSU2_TR(0x4a4c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4c8c:{NFSU2_TR(0x4a4c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4c93:{NFSU2_TR(0x4a4c93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4c94:{NFSU2_TR(0x4a4c94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4ca0:L4a4ca0:{c.instructions+=9;NFSU2_TR(0x4a4ca0);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4a4ca5:{NFSU2_TR(0x4a4ca5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ca6:{NFSU2_TR(0x4a4ca6);
__builtin_memmove((R+24),(R+4),4);
}
B4a4ca8:{NFSU2_TR(0x4a4ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4caf:{NFSU2_TR(0x4a4caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a4cb2:{NFSU2_TR(0x4a4cb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cb3:{NFSU2_TR(0x4a4cb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cb4:{NFSU2_TR(0x4a4cb4);
u8 U[4];
w4(U+0,u32(0x7905ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cb9:{NFSU2_TR(0x4a4cb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4cbeull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4cbe:L4a4cbe:{c.instructions+=3;NFSU2_TR(0x4a4cbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4cc1:{NFSU2_TR(0x4a4cc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cc2:{NFSU2_TR(0x4a4cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4cc7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a4cc7:L4a4cc7:{c.instructions+=6;NFSU2_TR(0x4a4cc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4cca:{NFSU2_TR(0x4a4cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4ccd:{NFSU2_TR(0x4a4ccd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a4cd0:{NFSU2_TR(0x4a4cd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4cd2:{NFSU2_TR(0x4a4cd2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cd4:{NFSU2_TR(0x4a4cd4);
if(r1(R+518)){{goto L4a4ceb;}}
}
B4a4cd6:L4a4cd6:{c.instructions+=2;NFSU2_TR(0x4a4cd6);
u8 U[4];
w4(U+0,u32(0x7905bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cdb:{NFSU2_TR(0x4a4cdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ce0ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4ce0:L4a4ce0:{c.instructions+=4;NFSU2_TR(0x4a4ce0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4ce3:{NFSU2_TR(0x4a4ce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ce4:{NFSU2_TR(0x4a4ce4);
u8 U[4];
w4(U+0,u32(0x7905b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ce9:{NFSU2_TR(0x4a4ce9);
{goto L4a4d52;}
}
B4a4ceb:L4a4ceb:{c.instructions+=2;NFSU2_TR(0x4a4ceb);
u8 U[4];
w4(U+0,u32(0x7905a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cf0:{NFSU2_TR(0x4a4cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4cf5ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4cf5:L4a4cf5:{c.instructions+=4;NFSU2_TR(0x4a4cf5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4cf8:{NFSU2_TR(0x4a4cf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cf9:{NFSU2_TR(0x4a4cf9);
u8 U[4];
w4(U+0,u32(0x7905b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4cfe:{NFSU2_TR(0x4a4cfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d03ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4d03:L4a4d03:{c.instructions+=4;NFSU2_TR(0x4a4d03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4d06:{NFSU2_TR(0x4a4d06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d07:{NFSU2_TR(0x4a4d07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d08:{NFSU2_TR(0x4a4d08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d0dull));
TAIL_STATIC(0x537c60u,537);
}
B4a4d0d:L4a4d0d:{c.instructions+=5;NFSU2_TR(0x4a4d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4d10:{NFSU2_TR(0x4a4d10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4d13:{NFSU2_TR(0x4a4d13);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d15:{NFSU2_TR(0x4a4d15);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d1a:{NFSU2_TR(0x4a4d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d1full));
TAIL_STATIC(0x43db50u,43d);
}
B4a4d1f:L4a4d1f:{c.instructions+=4;NFSU2_TR(0x4a4d1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4d22:{NFSU2_TR(0x4a4d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d23:{NFSU2_TR(0x4a4d23);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d28:{NFSU2_TR(0x4a4d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d2dull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4d2d:L4a4d2d:{c.instructions+=4;NFSU2_TR(0x4a4d2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4d30:{NFSU2_TR(0x4a4d30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d31:{NFSU2_TR(0x4a4d31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d32:{NFSU2_TR(0x4a4d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d37ull));
TAIL_STATIC(0x537c60u,537);
}
B4a4d37:L4a4d37:{c.instructions+=5;NFSU2_TR(0x4a4d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4d3a:{NFSU2_TR(0x4a4d3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4d3d:{NFSU2_TR(0x4a4d3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d3f:{NFSU2_TR(0x4a4d3f);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d44:{NFSU2_TR(0x4a4d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d49ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4d49:L4a4d49:{c.instructions+=3;NFSU2_TR(0x4a4d49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4d4c:{NFSU2_TR(0x4a4d4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d4d:{NFSU2_TR(0x4a4d4d);
u8 U[4];
w4(U+0,u32(0x790590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d52:L4a4d52:{c.instructions+=1;NFSU2_TR(0x4a4d52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d57ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4d57:L4a4d57:{c.instructions+=4;NFSU2_TR(0x4a4d57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4d5a:{NFSU2_TR(0x4a4d5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d5b:{NFSU2_TR(0x4a4d5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4d5c:{NFSU2_TR(0x4a4d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4d61ull));
TAIL_STATIC(0x537c60u,537);
}
B4a4d61:L4a4d61:{c.instructions+=4;NFSU2_TR(0x4a4d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4d64:{NFSU2_TR(0x4a4d64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4d67:{NFSU2_TR(0x4a4d67);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B4a4d68:{NFSU2_TR(0x4a4d68);
if(r1(R+519)){{goto L4a4da6;}}
}
B4a4d6a:L4a4d6a:{c.instructions+=2;NFSU2_TR(0x4a4d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4d70:{NFSU2_TR(0x4a4d70);
u8 U[12];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4a4d74:L4a4d74:{c.instructions+=2;NFSU2_TR(0x4a4d74);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4d76:{NFSU2_TR(0x4a4d76);
if(r1(R+518)){{goto L4a4d83;}}
}
B4a4d78:L4a4d78:{c.instructions+=3;NFSU2_TR(0x4a4d78);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a4d7b:{NFSU2_TR(0x4a4d7b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a4d81:{NFSU2_TR(0x4a4d81);
{goto L4a4d89;}
}
B4a4d83:L4a4d83:{c.instructions+=1;NFSU2_TR(0x4a4d83);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a4d89:L4a4d89:{c.instructions+=8;NFSU2_TR(0x4a4d89);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a4d8f:{NFSU2_TR(0x4a4d8f);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4a4d91:{NFSU2_TR(0x4a4d91);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a4d93:{NFSU2_TR(0x4a4d93);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4a4d95:{NFSU2_TR(0x4a4d95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a4d97:{NFSU2_TR(0x4a4d97);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a4d99:{NFSU2_TR(0x4a4d99);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a4d9c:{NFSU2_TR(0x4a4d9c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a4da9;}}
}
B4a4d9e:L4a4d9e:{c.instructions+=4;NFSU2_TR(0x4a4d9e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4a4d9f:{NFSU2_TR(0x4a4d9f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
}
B4a4da2:{NFSU2_TR(0x4a4da2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4a4da4:{NFSU2_TR(0x4a4da4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a4d74u);}goto L4a4d74;}}
}
B4a4da6:L4a4da6:{c.instructions+=1;NFSU2_TR(0x4a4da6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4da9:L4a4da9:{c.instructions+=3;NFSU2_TR(0x4a4da9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4daf:{NFSU2_TR(0x4a4daf);
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
B4a4db1:{NFSU2_TR(0x4a4db1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4dbe;}}
}
B4a4db3:L4a4db3:{c.instructions+=4;NFSU2_TR(0x4a4db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4db6:{NFSU2_TR(0x4a4db6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4db7:{NFSU2_TR(0x4a4db7);
__builtin_memmove((R+4),(R+24),4);
}
B4a4db9:{NFSU2_TR(0x4a4db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4dbeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a4bf0u);}goto L4a4bf0;}
}
B4a4dbe:L4a4dbe:{c.instructions+=3;NFSU2_TR(0x4a4dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4dbf:{NFSU2_TR(0x4a4dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4dc0:{NFSU2_TR(0x4a4dc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4dd0:L4a4dd0:{c.instructions+=10;NFSU2_TR(0x4a4dd0);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4a4dd5:{NFSU2_TR(0x4a4dd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4dd6:{NFSU2_TR(0x4a4dd6);
__builtin_memmove((R+24),(R+4),4);
}
B4a4dd8:{NFSU2_TR(0x4a4dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4ddf:{NFSU2_TR(0x4a4ddf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4de2:{NFSU2_TR(0x4a4de2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4de4:{NFSU2_TR(0x4a4de4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4de5:{NFSU2_TR(0x4a4de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4de8:{NFSU2_TR(0x4a4de8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4dea:{NFSU2_TR(0x4a4dea);
if(r1(R+518)){{goto L4a4df3;}}
}
B4a4dec:L4a4dec:{c.instructions+=2;NFSU2_TR(0x4a4dec);
u8 U[4];
w4(U+0,u32(0x7905bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4df1:{NFSU2_TR(0x4a4df1);
{goto L4a4df8;}
}
B4a4df3:L4a4df3:{c.instructions+=1;NFSU2_TR(0x4a4df3);
u8 U[4];
w4(U+0,u32(0x7905a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4df8:L4a4df8:{c.instructions+=1;NFSU2_TR(0x4a4df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4dfdull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4dfd:L4a4dfd:{c.instructions+=4;NFSU2_TR(0x4a4dfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4e00:{NFSU2_TR(0x4a4e00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e01:{NFSU2_TR(0x4a4e01);
u8 U[4];
w4(U+0,u32(0x7905dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e06:{NFSU2_TR(0x4a4e06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4e0bull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4e0b:L4a4e0b:{c.instructions+=4;NFSU2_TR(0x4a4e0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4e0e:{NFSU2_TR(0x4a4e0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e0f:{NFSU2_TR(0x4a4e0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e10:{NFSU2_TR(0x4a4e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4e15ull));
TAIL_STATIC(0x537c60u,537);
}
B4a4e15:L4a4e15:{c.instructions+=5;NFSU2_TR(0x4a4e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4e18:{NFSU2_TR(0x4a4e18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4e1b:{NFSU2_TR(0x4a4e1b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a4e1d:{NFSU2_TR(0x4a4e1d);
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
B4a4e1f:{NFSU2_TR(0x4a4e1f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a4e70;}}
}
B4a4e21:L4a4e21:{c.instructions+=4;NFSU2_TR(0x4a4e21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e22:{NFSU2_TR(0x4a4e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a4e28:{NFSU2_TR(0x4a4e28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a4e2b:{NFSU2_TR(0x4a4e2b);
{goto L4a4e30;}
}
B4a4e30:L4a4e30:{c.instructions+=2;NFSU2_TR(0x4a4e30);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4e32:{NFSU2_TR(0x4a4e32);
if(r1(R+518)){{goto L4a4e3f;}}
}
B4a4e34:L4a4e34:{c.instructions+=3;NFSU2_TR(0x4a4e34);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4a4e37:{NFSU2_TR(0x4a4e37);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a4e3d:{NFSU2_TR(0x4a4e3d);
{goto L4a4e45;}
}
B4a4e3f:L4a4e3f:{c.instructions+=1;NFSU2_TR(0x4a4e3f);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a4e45:L4a4e45:{c.instructions+=4;NFSU2_TR(0x4a4e45);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a4e47:{NFSU2_TR(0x4a4e47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4a4e49:{NFSU2_TR(0x4a4e49);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a4e4c:{NFSU2_TR(0x4a4e4c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4a4e5a;}}
}
B4a4e4e:L4a4e4e:{c.instructions+=4;NFSU2_TR(0x4a4e4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a4e4f:{NFSU2_TR(0x4a4e4f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B4a4e52:{NFSU2_TR(0x4a4e52);
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
B4a4e54:{NFSU2_TR(0x4a4e54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a4e30u);}goto L4a4e30;}}
}
B4a4e56:L4a4e56:{c.instructions+=4;NFSU2_TR(0x4a4e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a4e57:{NFSU2_TR(0x4a4e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4e58:{NFSU2_TR(0x4a4e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4e59:{NFSU2_TR(0x4a4e59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4e5a:L4a4e5a:{c.instructions+=3;NFSU2_TR(0x4a4e5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4e60:{NFSU2_TR(0x4a4e60);
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
B4a4e62:{NFSU2_TR(0x4a4e62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a4e6f;}}
}
B4a4e64:L4a4e64:{c.instructions+=4;NFSU2_TR(0x4a4e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4e67:{NFSU2_TR(0x4a4e67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e68:{NFSU2_TR(0x4a4e68);
__builtin_memmove((R+4),(R+24),4);
}
B4a4e6a:{NFSU2_TR(0x4a4e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4e6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a4bf0u);}goto L4a4bf0;}
}
B4a4e6f:L4a4e6f:{c.instructions+=1;NFSU2_TR(0x4a4e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a4e70:L4a4e70:{c.instructions+=3;NFSU2_TR(0x4a4e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4e71:{NFSU2_TR(0x4a4e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4e72:{NFSU2_TR(0x4a4e72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4e80:L4a4e80:{c.instructions+=8;NFSU2_TR(0x4a4e80);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4a4e85:{NFSU2_TR(0x4a4e85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e86:{NFSU2_TR(0x4a4e86);
__builtin_memmove((R+24),(R+4),4);
}
B4a4e88:{NFSU2_TR(0x4a4e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4e8b:{NFSU2_TR(0x4a4e8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4e8c:{NFSU2_TR(0x4a4e8c);
w4(R+4,u32(u32(r4(R+4))-u32(m4(0x7fb724))));
}
B4a4e92:{NFSU2_TR(0x4a4e92);
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
B4a4e94:{NFSU2_TR(0x4a4e94);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a4f9f;}}
}
B4a4e9a:L4a4e9a:{c.instructions+=4;NFSU2_TR(0x4a4e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4e9d:{NFSU2_TR(0x4a4e9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4e9f:{NFSU2_TR(0x4a4e9f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ea1:{NFSU2_TR(0x4a4ea1);
if(r1(R+518)){{goto L4a4f0e;}}
}
B4a4ea3:L4a4ea3:{c.instructions+=4;NFSU2_TR(0x4a4ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4eaa:{NFSU2_TR(0x4a4eaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4ead:{NFSU2_TR(0x4a4ead);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4eaf:{NFSU2_TR(0x4a4eaf);
if(r1(R+518)){{goto L4a4ecc;}}
}
B4a4eb1:L4a4eb1:{c.instructions+=3;NFSU2_TR(0x4a4eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4eb4:{NFSU2_TR(0x4a4eb4);
u8 U[4];
w4(U+0,u32(0x7905bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4eb9:{NFSU2_TR(0x4a4eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ebeull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4ebe:L4a4ebe:{c.instructions+=4;NFSU2_TR(0x4a4ebe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4ec1:{NFSU2_TR(0x4a4ec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ec2:{NFSU2_TR(0x4a4ec2);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ec7:{NFSU2_TR(0x4a4ec7);
{goto L4a4f8d;}
}
B4a4ecc:L4a4ecc:{c.instructions+=3;NFSU2_TR(0x4a4ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4ecf:{NFSU2_TR(0x4a4ecf);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ed4:{NFSU2_TR(0x4a4ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ed9ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4ed9:L4a4ed9:{c.instructions+=4;NFSU2_TR(0x4a4ed9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4edc:{NFSU2_TR(0x4a4edc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4edd:{NFSU2_TR(0x4a4edd);
u8 U[4];
w4(U+0,u32(0x790590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ee2:{NFSU2_TR(0x4a4ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ee7ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4ee7:L4a4ee7:{c.instructions+=4;NFSU2_TR(0x4a4ee7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4eea:{NFSU2_TR(0x4a4eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4eeb:{NFSU2_TR(0x4a4eeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4eec:{NFSU2_TR(0x4a4eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ef1ull));
TAIL_STATIC(0x537c60u,537);
}
B4a4ef1:L4a4ef1:{c.instructions+=5;NFSU2_TR(0x4a4ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4ef4:{NFSU2_TR(0x4a4ef4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4ef7:{NFSU2_TR(0x4a4ef7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ef9:{NFSU2_TR(0x4a4ef9);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4efe:{NFSU2_TR(0x4a4efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f03ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4f03:L4a4f03:{c.instructions+=4;NFSU2_TR(0x4a4f03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4f06:{NFSU2_TR(0x4a4f06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f07:{NFSU2_TR(0x4a4f07);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f0c:{NFSU2_TR(0x4a4f0c);
{goto L4a4f8d;}
}
B4a4f0e:L4a4f0e:{c.instructions+=4;NFSU2_TR(0x4a4f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4f15:{NFSU2_TR(0x4a4f15);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4f18:{NFSU2_TR(0x4a4f18);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4f1a:{NFSU2_TR(0x4a4f1a);
if(r1(R+518)){{goto L4a4f23;}}
}
B4a4f1c:L4a4f1c:{c.instructions+=2;NFSU2_TR(0x4a4f1c);
u8 U[4];
w4(U+0,u32(0x7905bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f21:{NFSU2_TR(0x4a4f21);
{goto L4a4f7c;}
}
B4a4f23:L4a4f23:{c.instructions+=3;NFSU2_TR(0x4a4f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4f26:{NFSU2_TR(0x4a4f26);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f2b:{NFSU2_TR(0x4a4f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f30ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4f30:L4a4f30:{c.instructions+=4;NFSU2_TR(0x4a4f30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4f33:{NFSU2_TR(0x4a4f33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f34:{NFSU2_TR(0x4a4f34);
u8 U[4];
w4(U+0,u32(0x790584ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f39:{NFSU2_TR(0x4a4f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f3eull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4f3e:L4a4f3e:{c.instructions+=4;NFSU2_TR(0x4a4f3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4f41:{NFSU2_TR(0x4a4f41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f42:{NFSU2_TR(0x4a4f42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f43:{NFSU2_TR(0x4a4f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f48ull));
TAIL_STATIC(0x537c60u,537);
}
B4a4f48:L4a4f48:{c.instructions+=5;NFSU2_TR(0x4a4f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4f4b:{NFSU2_TR(0x4a4f4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4f4e:{NFSU2_TR(0x4a4f4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f50:{NFSU2_TR(0x4a4f50);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f55:{NFSU2_TR(0x4a4f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f5aull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4f5a:L4a4f5a:{c.instructions+=4;NFSU2_TR(0x4a4f5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4f5d:{NFSU2_TR(0x4a4f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f5e:{NFSU2_TR(0x4a4f5e);
u8 U[4];
w4(U+0,u32(0x7905ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f63:{NFSU2_TR(0x4a4f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f68ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4f68:L4a4f68:{c.instructions+=4;NFSU2_TR(0x4a4f68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4f6b:{NFSU2_TR(0x4a4f6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f6c:{NFSU2_TR(0x4a4f6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f6d:{NFSU2_TR(0x4a4f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f72ull));
TAIL_STATIC(0x537c60u,537);
}
B4a4f72:L4a4f72:{c.instructions+=3;NFSU2_TR(0x4a4f72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a4f75:{NFSU2_TR(0x4a4f75);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f77:{NFSU2_TR(0x4a4f77);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f7c:L4a4f7c:{c.instructions+=2;NFSU2_TR(0x4a4f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a4f7f:{NFSU2_TR(0x4a4f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f84ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4f84:L4a4f84:{c.instructions+=3;NFSU2_TR(0x4a4f84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4f87:{NFSU2_TR(0x4a4f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f88:{NFSU2_TR(0x4a4f88);
u8 U[4];
w4(U+0,u32(0x790590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f8d:L4a4f8d:{c.instructions+=1;NFSU2_TR(0x4a4f8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f92ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4f92:L4a4f92:{c.instructions+=4;NFSU2_TR(0x4a4f92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4f95:{NFSU2_TR(0x4a4f95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f96:{NFSU2_TR(0x4a4f96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4f97:{NFSU2_TR(0x4a4f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4f9cull));
TAIL_STATIC(0x537c60u,537);
}
B4a4f9c:L4a4f9c:{c.instructions+=1;NFSU2_TR(0x4a4f9c);
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
B4a4f9f:L4a4f9f:{c.instructions+=3;NFSU2_TR(0x4a4f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a4fa0:{NFSU2_TR(0x4a4fa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a4fa1:{NFSU2_TR(0x4a4fa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a4fb0:L4a4fb0:{c.instructions+=6;NFSU2_TR(0x4a4fb0);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B4a4fb5:{NFSU2_TR(0x4a4fb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4fb6:{NFSU2_TR(0x4a4fb6);
__builtin_memmove((R+24),(R+4),4);
}
B4a4fb8:{NFSU2_TR(0x4a4fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4fbb:{NFSU2_TR(0x4a4fbb);
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
B4a4fbd:{NFSU2_TR(0x4a4fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4a508bu,4a5);}
}
B4a4fc3:L4a4fc3:{c.instructions+=3;NFSU2_TR(0x4a4fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a4fc6:{NFSU2_TR(0x4a4fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a4fc8:{NFSU2_TR(0x4a4fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4a5030u,4a5);}
}
B4a4fca:L4a4fca:{c.instructions+=4;NFSU2_TR(0x4a4fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a4fd1:{NFSU2_TR(0x4a4fd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a4fd4:{NFSU2_TR(0x4a4fd4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a4fd6:{NFSU2_TR(0x4a4fd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4a503eu,4a5);}
}
B4a4fd8:L4a4fd8:{c.instructions+=5;NFSU2_TR(0x4a4fd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4fd9:{NFSU2_TR(0x4a4fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a4fdc:{NFSU2_TR(0x4a4fdc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4fde:{NFSU2_TR(0x4a4fde);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4fe3:{NFSU2_TR(0x4a4fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4fe8ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4fe8:L4a4fe8:{c.instructions+=4;NFSU2_TR(0x4a4fe8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4feb:{NFSU2_TR(0x4a4feb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4fec:{NFSU2_TR(0x4a4fec);
u8 U[4];
w4(U+0,u32(0x790590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ff1:{NFSU2_TR(0x4a4ff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a4ff6ull));
TAIL_STATIC(0x43db50u,43d);
}
B4a4ff6:L4a4ff6:{c.instructions+=4;NFSU2_TR(0x4a4ff6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a4ff9:{NFSU2_TR(0x4a4ff9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ffa:{NFSU2_TR(0x4a4ffa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a4ffb:{NFSU2_TR(0x4a4ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a5000ull));
TAIL_STATIC(0x537c60u,537);
}
XIT:NFSU2_TR_EXIT(0x4a4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
