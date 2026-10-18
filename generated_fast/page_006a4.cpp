#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a3(u8* __restrict R,Cpu& c);
u32 body_6a5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a4(u8* __restrict R,Cpu& c);
u32 page_6a4(Cpu& c){return body_6a4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a4000:goto L6a4000;
case 0x6a4003:c.instructions+=5;goto B6a4003;
case 0x6a4006:c.instructions+=4;goto B6a4006;
case 0x6a400a:c.instructions+=3;goto B6a400a;
case 0x6a400d:c.instructions+=2;goto B6a400d;
case 0x6a4010:c.instructions+=1;goto B6a4010;
case 0x6a4012:goto L6a4012;
case 0x6a4014:goto L6a4014;
case 0x6a4016:goto L6a4016;
case 0x6a401a:c.instructions+=3;goto B6a401a;
case 0x6a401b:c.instructions+=2;goto B6a401b;
case 0x6a401e:c.instructions+=1;goto B6a401e;
case 0x6a4020:goto L6a4020;
case 0x6a4024:c.instructions+=5;goto B6a4024;
case 0x6a4027:c.instructions+=4;goto B6a4027;
case 0x6a4028:c.instructions+=3;goto B6a4028;
case 0x6a402a:c.instructions+=2;goto B6a402a;
case 0x6a402c:c.instructions+=1;goto B6a402c;
case 0x6a4031:goto L6a4031;
case 0x6a4034:c.instructions+=12;goto B6a4034;
case 0x6a4036:c.instructions+=11;goto B6a4036;
case 0x6a4039:c.instructions+=10;goto B6a4039;
case 0x6a403a:c.instructions+=9;goto B6a403a;
case 0x6a403b:c.instructions+=8;goto B6a403b;
case 0x6a403d:c.instructions+=7;goto B6a403d;
case 0x6a403f:c.instructions+=6;goto B6a403f;
case 0x6a4040:c.instructions+=5;goto B6a4040;
case 0x6a4043:c.instructions+=4;goto B6a4043;
case 0x6a4046:c.instructions+=3;goto B6a4046;
case 0x6a4047:c.instructions+=2;goto B6a4047;
case 0x6a404a:c.instructions+=1;goto B6a404a;
case 0x6a4050:goto L6a4050;
case 0x6a4053:c.instructions+=10;goto B6a4053;
case 0x6a4056:c.instructions+=9;goto B6a4056;
case 0x6a4059:c.instructions+=8;goto B6a4059;
case 0x6a405c:c.instructions+=7;goto B6a405c;
case 0x6a405e:c.instructions+=6;goto B6a405e;
case 0x6a4061:c.instructions+=5;goto B6a4061;
case 0x6a4063:c.instructions+=4;goto B6a4063;
case 0x6a4066:c.instructions+=3;goto B6a4066;
case 0x6a406c:c.instructions+=2;goto B6a406c;
case 0x6a406f:c.instructions+=1;goto B6a406f;
case 0x6a4075:goto L6a4075;
case 0x6a4078:c.instructions+=2;goto B6a4078;
case 0x6a407b:c.instructions+=1;goto B6a407b;
case 0x6a4081:goto L6a4081;
case 0x6a4084:c.instructions+=2;goto B6a4084;
case 0x6a4086:c.instructions+=1;goto B6a4086;
case 0x6a4088:goto L6a4088;
case 0x6a408f:goto L6a408f;
case 0x6a4092:c.instructions+=5;goto B6a4092;
case 0x6a4095:c.instructions+=4;goto B6a4095;
case 0x6a4099:c.instructions+=3;goto B6a4099;
case 0x6a409c:c.instructions+=2;goto B6a409c;
case 0x6a409f:c.instructions+=1;goto B6a409f;
case 0x6a40a1:goto L6a40a1;
case 0x6a40a4:goto L6a40a4;
case 0x6a40a7:c.instructions+=9;goto B6a40a7;
case 0x6a40ab:c.instructions+=8;goto B6a40ab;
case 0x6a40ad:c.instructions+=7;goto B6a40ad;
case 0x6a40b0:c.instructions+=6;goto B6a40b0;
case 0x6a40b3:c.instructions+=5;goto B6a40b3;
case 0x6a40b5:c.instructions+=4;goto B6a40b5;
case 0x6a40b7:c.instructions+=3;goto B6a40b7;
case 0x6a40bc:c.instructions+=2;goto B6a40bc;
case 0x6a40c1:c.instructions+=1;goto B6a40c1;
case 0x6a40c7:goto L6a40c7;
case 0x6a40cc:c.instructions+=1;goto B6a40cc;
case 0x6a40d2:goto L6a40d2;
case 0x6a40d7:c.instructions+=1;goto B6a40d7;
case 0x6a40dd:goto L6a40dd;
case 0x6a40df:c.instructions+=3;goto B6a40df;
case 0x6a40e4:c.instructions+=2;goto B6a40e4;
case 0x6a40e9:c.instructions+=1;goto B6a40e9;
case 0x6a40ef:goto L6a40ef;
case 0x6a40f4:c.instructions+=1;goto B6a40f4;
case 0x6a40fa:goto L6a40fa;
case 0x6a40fe:c.instructions+=1;goto B6a40fe;
case 0x6a4104:goto L6a4104;
case 0x6a4108:c.instructions+=3;goto B6a4108;
case 0x6a410b:c.instructions+=2;goto B6a410b;
case 0x6a410e:c.instructions+=1;goto B6a410e;
case 0x6a4114:goto L6a4114;
case 0x6a4118:c.instructions+=4;goto B6a4118;
case 0x6a411c:c.instructions+=3;goto B6a411c;
case 0x6a4120:c.instructions+=2;goto B6a4120;
case 0x6a4124:c.instructions+=1;goto B6a4124;
case 0x6a412a:goto L6a412a;
case 0x6a412d:c.instructions+=1;goto B6a412d;
case 0x6a4130:goto L6a4130;
case 0x6a4133:c.instructions+=4;goto B6a4133;
case 0x6a4135:c.instructions+=3;goto B6a4135;
case 0x6a4138:c.instructions+=2;goto B6a4138;
case 0x6a413a:c.instructions+=1;goto B6a413a;
case 0x6a413c:goto L6a413c;
case 0x6a413f:c.instructions+=1;goto B6a413f;
case 0x6a4142:goto L6a4142;
case 0x6a4145:c.instructions+=4;goto B6a4145;
case 0x6a4148:c.instructions+=3;goto B6a4148;
case 0x6a414b:c.instructions+=2;goto B6a414b;
case 0x6a414e:c.instructions+=1;goto B6a414e;
case 0x6a4150:goto L6a4150;
case 0x6a4153:c.instructions+=1;goto B6a4153;
case 0x6a4156:goto L6a4156;
case 0x6a4159:c.instructions+=4;goto B6a4159;
case 0x6a415c:c.instructions+=3;goto B6a415c;
case 0x6a4160:c.instructions+=2;goto B6a4160;
case 0x6a4163:c.instructions+=1;goto B6a4163;
case 0x6a4165:goto L6a4165;
case 0x6a4169:c.instructions+=1;goto B6a4169;
case 0x6a416b:goto L6a416b;
case 0x6a416f:c.instructions+=1;goto B6a416f;
case 0x6a4171:goto L6a4171;
case 0x6a4174:c.instructions+=7;goto B6a4174;
case 0x6a417a:c.instructions+=6;goto B6a417a;
case 0x6a417c:c.instructions+=5;goto B6a417c;
case 0x6a417e:c.instructions+=4;goto B6a417e;
case 0x6a4182:c.instructions+=3;goto B6a4182;
case 0x6a4184:c.instructions+=2;goto B6a4184;
case 0x6a4187:c.instructions+=1;goto B6a4187;
case 0x6a4189:goto L6a4189;
case 0x6a418c:c.instructions+=8;goto B6a418c;
case 0x6a418f:c.instructions+=7;goto B6a418f;
case 0x6a4192:c.instructions+=6;goto B6a4192;
case 0x6a4195:c.instructions+=5;goto B6a4195;
case 0x6a4198:c.instructions+=4;goto B6a4198;
case 0x6a419b:c.instructions+=3;goto B6a419b;
case 0x6a419e:c.instructions+=2;goto B6a419e;
case 0x6a41a1:c.instructions+=1;goto B6a41a1;
case 0x6a41a3:goto L6a41a3;
case 0x6a41a6:goto L6a41a6;
case 0x6a41a9:c.instructions+=3;goto B6a41a9;
case 0x6a41ab:c.instructions+=2;goto B6a41ab;
case 0x6a41ad:c.instructions+=1;goto B6a41ad;
case 0x6a41af:goto L6a41af;
case 0x6a41b2:c.instructions+=6;goto B6a41b2;
case 0x6a41b5:c.instructions+=5;goto B6a41b5;
case 0x6a41b8:c.instructions+=4;goto B6a41b8;
case 0x6a41ba:c.instructions+=3;goto B6a41ba;
case 0x6a41bd:c.instructions+=2;goto B6a41bd;
case 0x6a41c0:c.instructions+=1;goto B6a41c0;
case 0x6a41c2:goto L6a41c2;
case 0x6a41c5:c.instructions+=2;goto B6a41c5;
case 0x6a41c8:c.instructions+=1;goto B6a41c8;
case 0x6a41ca:goto L6a41ca;
case 0x6a41cd:c.instructions+=4;goto B6a41cd;
case 0x6a41d0:c.instructions+=3;goto B6a41d0;
case 0x6a41d3:c.instructions+=2;goto B6a41d3;
case 0x6a41d6:c.instructions+=1;goto B6a41d6;
case 0x6a41d8:goto L6a41d8;
case 0x6a41dd:goto L6a41dd;
case 0x6a41df:c.instructions+=1;goto B6a41df;
case 0x6a41e1:goto L6a41e1;
case 0x6a41e4:c.instructions+=4;goto B6a41e4;
case 0x6a41e6:c.instructions+=3;goto B6a41e6;
case 0x6a41e7:c.instructions+=2;goto B6a41e7;
case 0x6a41eb:c.instructions+=1;goto B6a41eb;
case 0x6a41ed:goto L6a41ed;
case 0x6a41f0:c.instructions+=1;goto B6a41f0;
case 0x6a41f2:goto L6a41f2;
case 0x6a41f6:c.instructions+=1;goto B6a41f6;
case 0x6a41f8:goto L6a41f8;
case 0x6a41fb:c.instructions+=2;goto B6a41fb;
case 0x6a41fe:c.instructions+=1;goto B6a41fe;
case 0x6a4200:goto L6a4200;
case 0x6a4203:c.instructions+=2;goto B6a4203;
case 0x6a4206:c.instructions+=1;goto B6a4206;
case 0x6a4208:goto L6a4208;
case 0x6a420f:goto L6a420f;
case 0x6a4212:c.instructions+=3;goto B6a4212;
case 0x6a4215:c.instructions+=2;goto B6a4215;
case 0x6a4218:c.instructions+=1;goto B6a4218;
case 0x6a421e:goto L6a421e;
case 0x6a4221:c.instructions+=2;goto B6a4221;
case 0x6a4224:c.instructions+=1;goto B6a4224;
case 0x6a4226:goto L6a4226;
case 0x6a422d:goto L6a422d;
case 0x6a4231:c.instructions+=1;goto B6a4231;
case 0x6a4233:goto L6a4233;
case 0x6a4236:c.instructions+=4;goto B6a4236;
case 0x6a4238:c.instructions+=3;goto B6a4238;
case 0x6a423d:c.instructions+=2;goto B6a423d;
case 0x6a4242:c.instructions+=1;goto B6a4242;
case 0x6a4244:goto L6a4244;
case 0x6a4246:goto L6a4246;
case 0x6a424a:c.instructions+=1;goto B6a424a;
case 0x6a424c:goto L6a424c;
case 0x6a424d:c.instructions+=2;goto B6a424d;
case 0x6a4250:c.instructions+=1;goto B6a4250;
case 0x6a4252:goto L6a4252;
case 0x6a4254:goto L6a4254;
case 0x6a425b:goto L6a425b;
case 0x6a425f:c.instructions+=1;goto B6a425f;
case 0x6a4261:goto L6a4261;
case 0x6a4264:c.instructions+=8;goto B6a4264;
case 0x6a4266:c.instructions+=7;goto B6a4266;
case 0x6a4269:c.instructions+=6;goto B6a4269;
case 0x6a426c:c.instructions+=5;goto B6a426c;
case 0x6a426f:c.instructions+=4;goto B6a426f;
case 0x6a4272:c.instructions+=3;goto B6a4272;
case 0x6a4275:c.instructions+=2;goto B6a4275;
case 0x6a4278:c.instructions+=1;goto B6a4278;
case 0x6a427a:goto L6a427a;
case 0x6a427c:c.instructions+=3;goto B6a427c;
case 0x6a427e:c.instructions+=2;goto B6a427e;
case 0x6a4281:c.instructions+=1;goto B6a4281;
case 0x6a4283:goto L6a4283;
case 0x6a4287:c.instructions+=1;goto B6a4287;
case 0x6a4289:goto L6a4289;
case 0x6a428a:c.instructions+=2;goto B6a428a;
case 0x6a428d:c.instructions+=1;goto B6a428d;
case 0x6a428f:goto L6a428f;
case 0x6a4291:goto L6a4291;
case 0x6a4298:goto L6a4298;
case 0x6a429b:c.instructions+=1;goto B6a429b;
case 0x6a429d:goto L6a429d;
case 0x6a429f:c.instructions+=6;goto B6a429f;
case 0x6a42a2:c.instructions+=5;goto B6a42a2;
case 0x6a42a3:c.instructions+=4;goto B6a42a3;
case 0x6a42a4:c.instructions+=3;goto B6a42a4;
case 0x6a42a5:c.instructions+=2;goto B6a42a5;
case 0x6a42a6:c.instructions+=1;goto B6a42a6;
case 0x6a42ab:goto L6a42ab;
case 0x6a42af:c.instructions+=2;goto B6a42af;
case 0x6a42b1:c.instructions+=1;goto B6a42b1;
case 0x6a42b7:goto L6a42b7;
case 0x6a42ba:c.instructions+=3;goto B6a42ba;
case 0x6a42bd:c.instructions+=2;goto B6a42bd;
case 0x6a42c2:c.instructions+=1;goto B6a42c2;
case 0x6a42c4:goto L6a42c4;
case 0x6a42c7:c.instructions+=8;goto B6a42c7;
case 0x6a42ca:c.instructions+=7;goto B6a42ca;
case 0x6a42cd:c.instructions+=6;goto B6a42cd;
case 0x6a42cf:c.instructions+=5;goto B6a42cf;
case 0x6a42d2:c.instructions+=4;goto B6a42d2;
case 0x6a42d6:c.instructions+=3;goto B6a42d6;
case 0x6a42d9:c.instructions+=2;goto B6a42d9;
case 0x6a42dd:c.instructions+=1;goto B6a42dd;
case 0x6a42e3:goto L6a42e3;
case 0x6a42e6:c.instructions+=16;goto B6a42e6;
case 0x6a42e8:c.instructions+=15;goto B6a42e8;
case 0x6a42eb:c.instructions+=14;goto B6a42eb;
case 0x6a42ee:c.instructions+=13;goto B6a42ee;
case 0x6a42f1:c.instructions+=12;goto B6a42f1;
case 0x6a42f4:c.instructions+=11;goto B6a42f4;
case 0x6a42f7:c.instructions+=10;goto B6a42f7;
case 0x6a42fa:c.instructions+=9;goto B6a42fa;
case 0x6a42fd:c.instructions+=8;goto B6a42fd;
case 0x6a4300:c.instructions+=7;goto B6a4300;
case 0x6a4303:c.instructions+=6;goto B6a4303;
case 0x6a4306:c.instructions+=5;goto B6a4306;
case 0x6a4309:c.instructions+=4;goto B6a4309;
case 0x6a430c:c.instructions+=3;goto B6a430c;
case 0x6a430f:c.instructions+=2;goto B6a430f;
case 0x6a4312:c.instructions+=1;goto B6a4312;
case 0x6a4317:goto L6a4317;
case 0x6a431a:c.instructions+=6;goto B6a431a;
case 0x6a431d:c.instructions+=5;goto B6a431d;
case 0x6a4320:c.instructions+=4;goto B6a4320;
case 0x6a4323:c.instructions+=3;goto B6a4323;
case 0x6a4326:c.instructions+=2;goto B6a4326;
case 0x6a432b:c.instructions+=1;goto B6a432b;
case 0x6a432d:goto L6a432d;
case 0x6a4331:c.instructions+=3;goto B6a4331;
case 0x6a4335:c.instructions+=2;goto B6a4335;
case 0x6a4338:c.instructions+=1;goto B6a4338;
case 0x6a433a:goto L6a433a;
case 0x6a433b:c.instructions+=8;goto B6a433b;
case 0x6a433d:c.instructions+=7;goto B6a433d;
case 0x6a433e:c.instructions+=6;goto B6a433e;
case 0x6a4341:c.instructions+=5;goto B6a4341;
case 0x6a4345:c.instructions+=4;goto B6a4345;
case 0x6a4347:c.instructions+=3;goto B6a4347;
case 0x6a434a:c.instructions+=2;goto B6a434a;
case 0x6a434d:c.instructions+=1;goto B6a434d;
case 0x6a4352:goto L6a4352;
case 0x6a4355:c.instructions+=2;goto B6a4355;
case 0x6a4359:c.instructions+=1;goto B6a4359;
case 0x6a435f:goto L6a435f;
case 0x6a4361:c.instructions+=5;goto B6a4361;
case 0x6a4364:c.instructions+=4;goto B6a4364;
case 0x6a4367:c.instructions+=3;goto B6a4367;
case 0x6a436a:c.instructions+=2;goto B6a436a;
case 0x6a436b:c.instructions+=1;goto B6a436b;
case 0x6a4370:goto L6a4370;
case 0x6a4373:c.instructions+=18;goto B6a4373;
case 0x6a4376:c.instructions+=17;goto B6a4376;
case 0x6a4378:c.instructions+=16;goto B6a4378;
case 0x6a437a:c.instructions+=15;goto B6a437a;
case 0x6a437d:c.instructions+=14;goto B6a437d;
case 0x6a4380:c.instructions+=13;goto B6a4380;
case 0x6a4383:c.instructions+=12;goto B6a4383;
case 0x6a4386:c.instructions+=11;goto B6a4386;
case 0x6a4389:c.instructions+=10;goto B6a4389;
case 0x6a438c:c.instructions+=9;goto B6a438c;
case 0x6a438f:c.instructions+=8;goto B6a438f;
case 0x6a4392:c.instructions+=7;goto B6a4392;
case 0x6a4395:c.instructions+=6;goto B6a4395;
case 0x6a4398:c.instructions+=5;goto B6a4398;
case 0x6a439b:c.instructions+=4;goto B6a439b;
case 0x6a439d:c.instructions+=3;goto B6a439d;
case 0x6a43a0:c.instructions+=2;goto B6a43a0;
case 0x6a43a4:c.instructions+=1;goto B6a43a4;
case 0x6a43a6:goto L6a43a6;
case 0x6a43a9:c.instructions+=3;goto B6a43a9;
case 0x6a43ac:c.instructions+=2;goto B6a43ac;
case 0x6a43af:c.instructions+=1;goto B6a43af;
case 0x6a43b5:goto L6a43b5;
case 0x6a43b7:c.instructions+=3;goto B6a43b7;
case 0x6a43ba:c.instructions+=2;goto B6a43ba;
case 0x6a43bd:c.instructions+=1;goto B6a43bd;
case 0x6a43c3:goto L6a43c3;
case 0x6a43c6:c.instructions+=6;goto B6a43c6;
case 0x6a43c9:c.instructions+=5;goto B6a43c9;
case 0x6a43cc:c.instructions+=4;goto B6a43cc;
case 0x6a43cf:c.instructions+=3;goto B6a43cf;
case 0x6a43d3:c.instructions+=2;goto B6a43d3;
case 0x6a43d6:c.instructions+=1;goto B6a43d6;
case 0x6a43dc:goto L6a43dc;
case 0x6a43e0:c.instructions+=1;goto B6a43e0;
case 0x6a43e2:goto L6a43e2;
case 0x6a43e5:c.instructions+=6;goto B6a43e5;
case 0x6a43e8:c.instructions+=5;goto B6a43e8;
case 0x6a43eb:c.instructions+=4;goto B6a43eb;
case 0x6a43ee:c.instructions+=3;goto B6a43ee;
case 0x6a43f1:c.instructions+=2;goto B6a43f1;
case 0x6a43f4:c.instructions+=1;goto B6a43f4;
case 0x6a43f6:goto L6a43f6;
case 0x6a43f9:c.instructions+=6;goto B6a43f9;
case 0x6a43fc:c.instructions+=5;goto B6a43fc;
case 0x6a43ff:c.instructions+=4;goto B6a43ff;
case 0x6a4406:c.instructions+=3;goto B6a4406;
case 0x6a440a:c.instructions+=2;goto B6a440a;
case 0x6a4411:c.instructions+=1;goto B6a4411;
case 0x6a4418:goto L6a4418;
case 0x6a4419:goto L6a4419;
case 0x6a441c:c.instructions+=1;goto B6a441c;
case 0x6a441e:goto L6a441e;
case 0x6a4421:c.instructions+=7;goto B6a4421;
case 0x6a4424:c.instructions+=6;goto B6a4424;
case 0x6a4427:c.instructions+=5;goto B6a4427;
case 0x6a4429:c.instructions+=4;goto B6a4429;
case 0x6a442b:c.instructions+=3;goto B6a442b;
case 0x6a4430:c.instructions+=2;goto B6a4430;
case 0x6a4435:c.instructions+=1;goto B6a4435;
case 0x6a443b:goto L6a443b;
case 0x6a4440:c.instructions+=1;goto B6a4440;
case 0x6a4446:goto L6a4446;
case 0x6a4449:c.instructions+=7;goto B6a4449;
case 0x6a444b:c.instructions+=6;goto B6a444b;
case 0x6a4451:c.instructions+=5;goto B6a4451;
case 0x6a4453:c.instructions+=4;goto B6a4453;
case 0x6a4455:c.instructions+=3;goto B6a4455;
case 0x6a4458:c.instructions+=2;goto B6a4458;
case 0x6a445b:c.instructions+=1;goto B6a445b;
case 0x6a445d:goto L6a445d;
case 0x6a4460:goto L6a4460;
case 0x6a4464:c.instructions+=2;goto B6a4464;
case 0x6a4466:c.instructions+=1;goto B6a4466;
case 0x6a4468:goto L6a4468;
case 0x6a446f:c.instructions+=1;goto B6a446f;
case 0x6a4472:goto L6a4472;
case 0x6a4474:c.instructions+=1;goto B6a4474;
case 0x6a4476:goto L6a4476;
case 0x6a4479:c.instructions+=4;goto B6a4479;
case 0x6a447c:c.instructions+=3;goto B6a447c;
case 0x6a447f:c.instructions+=2;goto B6a447f;
case 0x6a4482:c.instructions+=1;goto B6a4482;
case 0x6a4484:goto L6a4484;
case 0x6a4486:goto L6a4486;
case 0x6a4489:c.instructions+=1;goto B6a4489;
case 0x6a4490:goto L6a4490;
case 0x6a4491:c.instructions+=2;goto B6a4491;
case 0x6a4494:c.instructions+=1;goto B6a4494;
case 0x6a4496:goto L6a4496;
case 0x6a4498:c.instructions+=1;goto B6a4498;
case 0x6a449d:goto L6a449d;
case 0x6a449f:c.instructions+=1;goto B6a449f;
case 0x6a44a1:goto L6a44a1;
case 0x6a44a3:c.instructions+=1;goto B6a44a3;
case 0x6a44a8:goto L6a44a8;
case 0x6a44aa:c.instructions+=1;goto B6a44aa;
case 0x6a44ac:goto L6a44ac;
case 0x6a44ae:goto L6a44ae;
case 0x6a44b0:c.instructions+=1;goto B6a44b0;
case 0x6a44b6:goto L6a44b6;
case 0x6a44b9:c.instructions+=11;goto B6a44b9;
case 0x6a44bd:c.instructions+=10;goto B6a44bd;
case 0x6a44bf:c.instructions+=9;goto B6a44bf;
case 0x6a44c2:c.instructions+=8;goto B6a44c2;
case 0x6a44c4:c.instructions+=7;goto B6a44c4;
case 0x6a44c5:c.instructions+=6;goto B6a44c5;
case 0x6a44c7:c.instructions+=5;goto B6a44c7;
case 0x6a44ca:c.instructions+=4;goto B6a44ca;
case 0x6a44cf:c.instructions+=3;goto B6a44cf;
case 0x6a44d1:c.instructions+=2;goto B6a44d1;
case 0x6a44d2:c.instructions+=1;goto B6a44d2;
case 0x6a44d7:goto L6a44d7;
case 0x6a44d9:c.instructions+=2;goto B6a44d9;
case 0x6a44dc:c.instructions+=1;goto B6a44dc;
case 0x6a44e2:goto L6a44e2;
case 0x6a44e3:c.instructions+=2;goto B6a44e3;
case 0x6a44e5:c.instructions+=1;goto B6a44e5;
case 0x6a44ea:goto L6a44ea;
case 0x6a44ec:c.instructions+=2;goto B6a44ec;
case 0x6a44ef:c.instructions+=1;goto B6a44ef;
case 0x6a44f5:goto L6a44f5;
case 0x6a44f9:c.instructions+=2;goto B6a44f9;
case 0x6a44fd:c.instructions+=1;goto B6a44fd;
case 0x6a44ff:goto L6a44ff;
case 0x6a4502:c.instructions+=7;goto B6a4502;
case 0x6a4505:c.instructions+=6;goto B6a4505;
case 0x6a4509:c.instructions+=5;goto B6a4509;
case 0x6a450c:c.instructions+=4;goto B6a450c;
case 0x6a4510:c.instructions+=3;goto B6a4510;
case 0x6a4517:c.instructions+=2;goto B6a4517;
case 0x6a451a:c.instructions+=1;goto B6a451a;
case 0x6a451c:goto L6a451c;
case 0x6a4523:c.instructions+=2;goto B6a4523;
case 0x6a4526:c.instructions+=1;goto B6a4526;
case 0x6a4529:goto L6a4529;
case 0x6a452c:c.instructions+=14;goto B6a452c;
case 0x6a4530:c.instructions+=13;goto B6a4530;
case 0x6a4533:c.instructions+=12;goto B6a4533;
case 0x6a4536:c.instructions+=11;goto B6a4536;
case 0x6a4539:c.instructions+=10;goto B6a4539;
case 0x6a453c:c.instructions+=9;goto B6a453c;
case 0x6a453f:c.instructions+=8;goto B6a453f;
case 0x6a4542:c.instructions+=7;goto B6a4542;
case 0x6a4545:c.instructions+=6;goto B6a4545;
case 0x6a4548:c.instructions+=5;goto B6a4548;
case 0x6a454b:c.instructions+=4;goto B6a454b;
case 0x6a454e:c.instructions+=3;goto B6a454e;
case 0x6a4551:c.instructions+=2;goto B6a4551;
case 0x6a4554:c.instructions+=1;goto B6a4554;
case 0x6a4556:goto L6a4556;
case 0x6a4559:c.instructions+=3;goto B6a4559;
case 0x6a455c:c.instructions+=2;goto B6a455c;
case 0x6a455f:c.instructions+=1;goto B6a455f;
case 0x6a4561:goto L6a4561;
case 0x6a4564:c.instructions+=5;goto B6a4564;
case 0x6a4567:c.instructions+=4;goto B6a4567;
case 0x6a456a:c.instructions+=3;goto B6a456a;
case 0x6a456d:c.instructions+=2;goto B6a456d;
case 0x6a456f:c.instructions+=1;goto B6a456f;
case 0x6a4571:goto L6a4571;
case 0x6a4573:c.instructions+=1;goto B6a4573;
case 0x6a4578:goto L6a4578;
case 0x6a457b:c.instructions+=4;goto B6a457b;
case 0x6a457e:c.instructions+=3;goto B6a457e;
case 0x6a4581:c.instructions+=2;goto B6a4581;
case 0x6a4584:c.instructions+=1;goto B6a4584;
case 0x6a4586:goto L6a4586;
case 0x6a458a:c.instructions+=2;goto B6a458a;
case 0x6a458e:c.instructions+=1;goto B6a458e;
case 0x6a4590:goto L6a4590;
case 0x6a4593:c.instructions+=4;goto B6a4593;
case 0x6a4596:c.instructions+=3;goto B6a4596;
case 0x6a4599:c.instructions+=2;goto B6a4599;
case 0x6a459b:c.instructions+=1;goto B6a459b;
case 0x6a459d:goto L6a459d;
case 0x6a45a0:c.instructions+=2;goto B6a45a0;
case 0x6a45a3:c.instructions+=1;goto B6a45a3;
case 0x6a45a5:goto L6a45a5;
case 0x6a45a6:c.instructions+=2;goto B6a45a6;
case 0x6a45a9:c.instructions+=1;goto B6a45a9;
case 0x6a45ab:goto L6a45ab;
case 0x6a45ad:goto L6a45ad;
case 0x6a45b1:c.instructions+=1;goto B6a45b1;
case 0x6a45b3:goto L6a45b3;
case 0x6a45b6:c.instructions+=3;goto B6a45b6;
case 0x6a45b9:c.instructions+=2;goto B6a45b9;
case 0x6a45bc:c.instructions+=1;goto B6a45bc;
case 0x6a45be:goto L6a45be;
case 0x6a45c1:c.instructions+=4;goto B6a45c1;
case 0x6a45c2:c.instructions+=3;goto B6a45c2;
case 0x6a45c5:c.instructions+=2;goto B6a45c5;
case 0x6a45c8:c.instructions+=1;goto B6a45c8;
case 0x6a45ce:goto L6a45ce;
case 0x6a45d0:c.instructions+=2;goto B6a45d0;
case 0x6a45d3:c.instructions+=1;goto B6a45d3;
case 0x6a45d5:goto L6a45d5;
case 0x6a45d9:c.instructions+=10;goto B6a45d9;
case 0x6a45dc:c.instructions+=9;goto B6a45dc;
case 0x6a45df:c.instructions+=8;goto B6a45df;
case 0x6a45e2:c.instructions+=7;goto B6a45e2;
case 0x6a45e5:c.instructions+=6;goto B6a45e5;
case 0x6a45e8:c.instructions+=5;goto B6a45e8;
case 0x6a45eb:c.instructions+=4;goto B6a45eb;
case 0x6a45ec:c.instructions+=3;goto B6a45ec;
case 0x6a45ef:c.instructions+=2;goto B6a45ef;
case 0x6a45f6:c.instructions+=1;goto B6a45f6;
case 0x6a45f8:goto L6a45f8;
case 0x6a45fb:c.instructions+=4;goto B6a45fb;
case 0x6a45fe:c.instructions+=3;goto B6a45fe;
case 0x6a4601:c.instructions+=2;goto B6a4601;
case 0x6a4602:c.instructions+=1;goto B6a4602;
case 0x6a4605:goto L6a4605;
case 0x6a460a:goto L6a460a;
case 0x6a460c:c.instructions+=2;goto B6a460c;
case 0x6a460f:c.instructions+=1;goto B6a460f;
case 0x6a4615:goto L6a4615;
case 0x6a4618:c.instructions+=4;goto B6a4618;
case 0x6a461a:c.instructions+=3;goto B6a461a;
case 0x6a4620:c.instructions+=2;goto B6a4620;
case 0x6a4626:c.instructions+=1;goto B6a4626;
case 0x6a462c:goto L6a462c;
case 0x6a462e:c.instructions+=4;goto B6a462e;
case 0x6a4630:c.instructions+=3;goto B6a4630;
case 0x6a4633:c.instructions+=2;goto B6a4633;
case 0x6a4636:c.instructions+=1;goto B6a4636;
case 0x6a4638:goto L6a4638;
case 0x6a463d:c.instructions+=1;goto B6a463d;
case 0x6a463f:goto L6a463f;
case 0x6a4642:c.instructions+=8;goto B6a4642;
case 0x6a4645:c.instructions+=7;goto B6a4645;
case 0x6a4648:c.instructions+=6;goto B6a4648;
case 0x6a464b:c.instructions+=5;goto B6a464b;
case 0x6a464e:c.instructions+=4;goto B6a464e;
case 0x6a4651:c.instructions+=3;goto B6a4651;
case 0x6a4654:c.instructions+=2;goto B6a4654;
case 0x6a4655:c.instructions+=1;goto B6a4655;
case 0x6a4657:goto L6a4657;
case 0x6a465a:c.instructions+=8;goto B6a465a;
case 0x6a465d:c.instructions+=7;goto B6a465d;
case 0x6a465f:c.instructions+=6;goto B6a465f;
case 0x6a4662:c.instructions+=5;goto B6a4662;
case 0x6a4665:c.instructions+=4;goto B6a4665;
case 0x6a4668:c.instructions+=3;goto B6a4668;
case 0x6a466c:c.instructions+=2;goto B6a466c;
case 0x6a466f:c.instructions+=1;goto B6a466f;
case 0x6a4671:goto L6a4671;
case 0x6a4674:c.instructions+=15;goto B6a4674;
case 0x6a4677:c.instructions+=14;goto B6a4677;
case 0x6a467a:c.instructions+=13;goto B6a467a;
case 0x6a467d:c.instructions+=12;goto B6a467d;
case 0x6a4680:c.instructions+=11;goto B6a4680;
case 0x6a4683:c.instructions+=10;goto B6a4683;
case 0x6a4686:c.instructions+=9;goto B6a4686;
case 0x6a4689:c.instructions+=8;goto B6a4689;
case 0x6a468c:c.instructions+=7;goto B6a468c;
case 0x6a468f:c.instructions+=6;goto B6a468f;
case 0x6a4692:c.instructions+=5;goto B6a4692;
case 0x6a4695:c.instructions+=4;goto B6a4695;
case 0x6a4698:c.instructions+=3;goto B6a4698;
case 0x6a469b:c.instructions+=2;goto B6a469b;
case 0x6a469e:c.instructions+=1;goto B6a469e;
case 0x6a46a1:goto L6a46a1;
case 0x6a46a4:c.instructions+=4;goto B6a46a4;
case 0x6a46a5:c.instructions+=3;goto B6a46a5;
case 0x6a46a8:c.instructions+=2;goto B6a46a8;
case 0x6a46ab:c.instructions+=1;goto B6a46ab;
case 0x6a46ad:goto L6a46ad;
case 0x6a46af:c.instructions+=9;goto B6a46af;
case 0x6a46b5:c.instructions+=8;goto B6a46b5;
case 0x6a46b7:c.instructions+=7;goto B6a46b7;
case 0x6a46bd:c.instructions+=6;goto B6a46bd;
case 0x6a46bf:c.instructions+=5;goto B6a46bf;
case 0x6a46c1:c.instructions+=4;goto B6a46c1;
case 0x6a46c3:c.instructions+=3;goto B6a46c3;
case 0x6a46c5:c.instructions+=2;goto B6a46c5;
case 0x6a46c8:c.instructions+=1;goto B6a46c8;
case 0x6a46cb:goto L6a46cb;
case 0x6a46cf:c.instructions+=1;goto B6a46cf;
case 0x6a46d5:goto L6a46d5;
case 0x6a46da:goto L6a46da;
case 0x6a46e1:c.instructions+=1;goto B6a46e1;
case 0x6a46e6:goto L6a46e6;
case 0x6a46e8:c.instructions+=2;goto B6a46e8;
case 0x6a46ea:c.instructions+=1;goto B6a46ea;
case 0x6a46ef:goto L6a46ef;
case 0x6a46f4:goto L6a46f4;
case 0x6a46f6:c.instructions+=12;goto B6a46f6;
case 0x6a46f7:c.instructions+=11;goto B6a46f7;
case 0x6a46f9:c.instructions+=10;goto B6a46f9;
case 0x6a46fc:c.instructions+=9;goto B6a46fc;
case 0x6a4700:c.instructions+=8;goto B6a4700;
case 0x6a4704:c.instructions+=7;goto B6a4704;
case 0x6a4705:c.instructions+=6;goto B6a4705;
case 0x6a4706:c.instructions+=5;goto B6a4706;
case 0x6a4708:c.instructions+=4;goto B6a4708;
case 0x6a470b:c.instructions+=3;goto B6a470b;
case 0x6a470d:c.instructions+=2;goto B6a470d;
case 0x6a470e:c.instructions+=1;goto B6a470e;
case 0x6a4710:goto L6a4710;
case 0x6a4716:c.instructions+=1;goto B6a4716;
case 0x6a4719:goto L6a4719;
case 0x6a471b:c.instructions+=2;goto B6a471b;
case 0x6a471e:c.instructions+=1;goto B6a471e;
case 0x6a4720:goto L6a4720;
case 0x6a4723:c.instructions+=2;goto B6a4723;
case 0x6a4726:c.instructions+=1;goto B6a4726;
case 0x6a4728:goto L6a4728;
case 0x6a4729:c.instructions+=1;goto B6a4729;
case 0x6a472c:goto L6a472c;
case 0x6a472f:c.instructions+=2;goto B6a472f;
case 0x6a4730:c.instructions+=1;goto B6a4730;
case 0x6a4732:goto L6a4732;
case 0x6a4734:c.instructions+=1;goto B6a4734;
case 0x6a4739:goto L6a4739;
case 0x6a473d:c.instructions+=2;goto B6a473d;
case 0x6a4741:c.instructions+=1;goto B6a4741;
case 0x6a4747:goto L6a4747;
case 0x6a474a:c.instructions+=6;goto B6a474a;
case 0x6a474d:c.instructions+=5;goto B6a474d;
case 0x6a4750:c.instructions+=4;goto B6a4750;
case 0x6a4752:c.instructions+=3;goto B6a4752;
case 0x6a4758:c.instructions+=2;goto B6a4758;
case 0x6a475b:c.instructions+=1;goto B6a475b;
case 0x6a4761:goto L6a4761;
case 0x6a4764:c.instructions+=8;goto B6a4764;
case 0x6a476a:c.instructions+=7;goto B6a476a;
case 0x6a476c:c.instructions+=6;goto B6a476c;
case 0x6a476e:c.instructions+=5;goto B6a476e;
case 0x6a4772:c.instructions+=4;goto B6a4772;
case 0x6a4776:c.instructions+=3;goto B6a4776;
case 0x6a4778:c.instructions+=2;goto B6a4778;
case 0x6a477b:c.instructions+=1;goto B6a477b;
case 0x6a4781:goto L6a4781;
case 0x6a4784:c.instructions+=4;goto B6a4784;
case 0x6a4785:c.instructions+=3;goto B6a4785;
case 0x6a4788:c.instructions+=2;goto B6a4788;
case 0x6a478a:c.instructions+=1;goto B6a478a;
case 0x6a478f:goto L6a478f;
case 0x6a4792:c.instructions+=7;goto B6a4792;
case 0x6a4798:c.instructions+=6;goto B6a4798;
case 0x6a479b:c.instructions+=5;goto B6a479b;
case 0x6a479e:c.instructions+=4;goto B6a479e;
case 0x6a47a0:c.instructions+=3;goto B6a47a0;
case 0x6a47a3:c.instructions+=2;goto B6a47a3;
case 0x6a47a6:c.instructions+=1;goto B6a47a6;
case 0x6a47a8:goto L6a47a8;
case 0x6a47ac:c.instructions+=2;goto B6a47ac;
case 0x6a47b3:c.instructions+=1;goto B6a47b3;
case 0x6a47b5:goto L6a47b5;
case 0x6a47b8:c.instructions+=5;goto B6a47b8;
case 0x6a47bb:c.instructions+=4;goto B6a47bb;
case 0x6a47be:c.instructions+=3;goto B6a47be;
case 0x6a47c1:c.instructions+=2;goto B6a47c1;
case 0x6a47c4:c.instructions+=1;goto B6a47c4;
case 0x6a47c6:goto L6a47c6;
case 0x6a47c9:c.instructions+=2;goto B6a47c9;
case 0x6a47cc:c.instructions+=1;goto B6a47cc;
case 0x6a47ce:goto L6a47ce;
case 0x6a47d1:c.instructions+=3;goto B6a47d1;
case 0x6a47d4:c.instructions+=2;goto B6a47d4;
case 0x6a47d7:c.instructions+=1;goto B6a47d7;
case 0x6a47d9:goto L6a47d9;
case 0x6a47dc:goto L6a47dc;
case 0x6a47df:c.instructions+=2;goto B6a47df;
case 0x6a47e2:c.instructions+=1;goto B6a47e2;
case 0x6a47e4:goto L6a47e4;
case 0x6a47e6:c.instructions+=2;goto B6a47e6;
case 0x6a47e8:c.instructions+=1;goto B6a47e8;
case 0x6a47ea:goto L6a47ea;
case 0x6a47ed:c.instructions+=6;goto B6a47ed;
case 0x6a47f0:c.instructions+=5;goto B6a47f0;
case 0x6a47f3:c.instructions+=4;goto B6a47f3;
case 0x6a47f6:c.instructions+=3;goto B6a47f6;
case 0x6a47fc:c.instructions+=2;goto B6a47fc;
case 0x6a47ff:c.instructions+=1;goto B6a47ff;
case 0x6a4801:goto L6a4801;
case 0x6a4804:c.instructions+=3;goto B6a4804;
case 0x6a4807:c.instructions+=2;goto B6a4807;
case 0x6a480a:c.instructions+=1;goto B6a480a;
case 0x6a4811:goto L6a4811;
case 0x6a4812:c.instructions+=2;goto B6a4812;
case 0x6a4815:c.instructions+=1;goto B6a4815;
case 0x6a4817:goto L6a4817;
case 0x6a481a:c.instructions+=3;goto B6a481a;
case 0x6a481d:c.instructions+=2;goto B6a481d;
case 0x6a4820:c.instructions+=1;goto B6a4820;
case 0x6a4826:goto L6a4826;
case 0x6a4829:c.instructions+=3;goto B6a4829;
case 0x6a482c:c.instructions+=2;goto B6a482c;
case 0x6a482f:c.instructions+=1;goto B6a482f;
case 0x6a4835:goto L6a4835;
case 0x6a4839:c.instructions+=2;goto B6a4839;
case 0x6a483d:c.instructions+=1;goto B6a483d;
case 0x6a4843:goto L6a4843;
case 0x6a4846:c.instructions+=4;goto B6a4846;
case 0x6a4849:c.instructions+=3;goto B6a4849;
case 0x6a484c:c.instructions+=2;goto B6a484c;
case 0x6a4852:c.instructions+=1;goto B6a4852;
case 0x6a4858:goto L6a4858;
case 0x6a485c:c.instructions+=1;goto B6a485c;
case 0x6a4862:goto L6a4862;
case 0x6a4865:c.instructions+=6;goto B6a4865;
case 0x6a4868:c.instructions+=5;goto B6a4868;
case 0x6a486a:c.instructions+=4;goto B6a486a;
case 0x6a486d:c.instructions+=3;goto B6a486d;
case 0x6a4873:c.instructions+=2;goto B6a4873;
case 0x6a4876:c.instructions+=1;goto B6a4876;
case 0x6a487c:goto L6a487c;
case 0x6a487f:c.instructions+=3;goto B6a487f;
case 0x6a4881:c.instructions+=2;goto B6a4881;
case 0x6a4884:c.instructions+=1;goto B6a4884;
case 0x6a4886:goto L6a4886;
case 0x6a4888:c.instructions+=1;goto B6a4888;
case 0x6a488a:goto L6a488a;
case 0x6a488d:goto L6a488d;
case 0x6a4890:c.instructions+=4;goto B6a4890;
case 0x6a4892:c.instructions+=3;goto B6a4892;
case 0x6a4895:c.instructions+=2;goto B6a4895;
case 0x6a4898:c.instructions+=1;goto B6a4898;
case 0x6a489a:goto L6a489a;
case 0x6a489e:c.instructions+=3;goto B6a489e;
case 0x6a489f:c.instructions+=2;goto B6a489f;
case 0x6a48a1:c.instructions+=1;goto B6a48a1;
case 0x6a48a3:goto L6a48a3;
case 0x6a48a5:c.instructions+=1;goto B6a48a5;
case 0x6a48a7:goto L6a48a7;
case 0x6a48a9:c.instructions+=2;goto B6a48a9;
case 0x6a48ab:c.instructions+=1;goto B6a48ab;
case 0x6a48ad:goto L6a48ad;
case 0x6a48b0:c.instructions+=13;goto B6a48b0;
case 0x6a48b3:c.instructions+=12;goto B6a48b3;
case 0x6a48b6:c.instructions+=11;goto B6a48b6;
case 0x6a48b9:c.instructions+=10;goto B6a48b9;
case 0x6a48bc:c.instructions+=9;goto B6a48bc;
case 0x6a48bf:c.instructions+=8;goto B6a48bf;
case 0x6a48c2:c.instructions+=7;goto B6a48c2;
case 0x6a48c5:c.instructions+=6;goto B6a48c5;
case 0x6a48c8:c.instructions+=5;goto B6a48c8;
case 0x6a48cb:c.instructions+=4;goto B6a48cb;
case 0x6a48ce:c.instructions+=3;goto B6a48ce;
case 0x6a48cf:c.instructions+=2;goto B6a48cf;
case 0x6a48d2:c.instructions+=1;goto B6a48d2;
case 0x6a48d4:goto L6a48d4;
case 0x6a48d6:goto L6a48d6;
case 0x6a48d8:c.instructions+=2;goto B6a48d8;
case 0x6a48db:c.instructions+=1;goto B6a48db;
case 0x6a48dd:goto L6a48dd;
case 0x6a48df:c.instructions+=3;goto B6a48df;
case 0x6a48e2:c.instructions+=2;goto B6a48e2;
case 0x6a48e6:c.instructions+=1;goto B6a48e6;
case 0x6a48e8:goto L6a48e8;
case 0x6a48eb:c.instructions+=3;goto B6a48eb;
case 0x6a48ee:c.instructions+=2;goto B6a48ee;
case 0x6a48f1:c.instructions+=1;goto B6a48f1;
case 0x6a48f3:goto L6a48f3;
case 0x6a48f6:c.instructions+=1;goto B6a48f6;
case 0x6a48f8:goto L6a48f8;
case 0x6a48fa:c.instructions+=2;goto B6a48fa;
case 0x6a48fc:c.instructions+=1;goto B6a48fc;
case 0x6a48fe:goto L6a48fe;
case 0x6a4901:c.instructions+=8;goto B6a4901;
case 0x6a4904:c.instructions+=7;goto B6a4904;
case 0x6a4907:c.instructions+=6;goto B6a4907;
case 0x6a490a:c.instructions+=5;goto B6a490a;
case 0x6a490d:c.instructions+=4;goto B6a490d;
case 0x6a490e:c.instructions+=3;goto B6a490e;
case 0x6a4911:c.instructions+=2;goto B6a4911;
case 0x6a4914:c.instructions+=1;goto B6a4914;
case 0x6a4916:goto L6a4916;
case 0x6a4919:c.instructions+=1;goto B6a4919;
case 0x6a4920:goto L6a4920;
case 0x6a4923:c.instructions+=3;goto B6a4923;
case 0x6a4926:c.instructions+=2;goto B6a4926;
case 0x6a4929:c.instructions+=1;goto B6a4929;
case 0x6a492f:goto L6a492f;
case 0x6a4931:c.instructions+=7;goto B6a4931;
case 0x6a4934:c.instructions+=6;goto B6a4934;
case 0x6a4935:c.instructions+=5;goto B6a4935;
case 0x6a4936:c.instructions+=4;goto B6a4936;
case 0x6a4939:c.instructions+=3;goto B6a4939;
case 0x6a493a:c.instructions+=2;goto B6a493a;
case 0x6a493b:c.instructions+=1;goto B6a493b;
case 0x6a493e:goto L6a493e;
case 0x6a4940:c.instructions+=12;goto B6a4940;
case 0x6a4941:c.instructions+=11;goto B6a4941;
case 0x6a4943:c.instructions+=10;goto B6a4943;
case 0x6a4946:c.instructions+=9;goto B6a4946;
case 0x6a4947:c.instructions+=8;goto B6a4947;
case 0x6a4948:c.instructions+=7;goto B6a4948;
case 0x6a4949:c.instructions+=6;goto B6a4949;
case 0x6a494b:c.instructions+=5;goto B6a494b;
case 0x6a494d:c.instructions+=4;goto B6a494d;
case 0x6a4950:c.instructions+=3;goto B6a4950;
case 0x6a4953:c.instructions+=2;goto B6a4953;
case 0x6a4956:c.instructions+=1;goto B6a4956;
case 0x6a495b:goto L6a495b;
case 0x6a495d:c.instructions+=2;goto B6a495d;
case 0x6a495f:c.instructions+=1;goto B6a495f;
case 0x6a4965:goto L6a4965;
case 0x6a4967:c.instructions+=1;goto B6a4967;
case 0x6a496c:goto L6a496c;
case 0x6a496e:c.instructions+=2;goto B6a496e;
case 0x6a4970:c.instructions+=1;goto B6a4970;
case 0x6a4976:goto L6a4976;
case 0x6a4979:c.instructions+=2;goto B6a4979;
case 0x6a497e:c.instructions+=1;goto B6a497e;
case 0x6a4980:goto L6a4980;
case 0x6a4982:c.instructions+=2;goto B6a4982;
case 0x6a4985:c.instructions+=1;goto B6a4985;
case 0x6a4987:goto L6a4987;
case 0x6a498a:c.instructions+=5;goto B6a498a;
case 0x6a498d:c.instructions+=4;goto B6a498d;
case 0x6a498e:c.instructions+=3;goto B6a498e;
case 0x6a4991:c.instructions+=2;goto B6a4991;
case 0x6a4994:c.instructions+=1;goto B6a4994;
case 0x6a4996:goto L6a4996;
case 0x6a4999:goto L6a4999;
case 0x6a499b:c.instructions+=1;goto B6a499b;
case 0x6a499d:goto L6a499d;
case 0x6a49a0:c.instructions+=7;goto B6a49a0;
case 0x6a49a1:c.instructions+=6;goto B6a49a1;
case 0x6a49a4:c.instructions+=5;goto B6a49a4;
case 0x6a49a6:c.instructions+=4;goto B6a49a6;
case 0x6a49a8:c.instructions+=3;goto B6a49a8;
case 0x6a49ae:c.instructions+=2;goto B6a49ae;
case 0x6a49b1:c.instructions+=1;goto B6a49b1;
case 0x6a49b3:goto L6a49b3;
case 0x6a49b6:c.instructions+=3;goto B6a49b6;
case 0x6a49bc:c.instructions+=2;goto B6a49bc;
case 0x6a49c2:c.instructions+=1;goto B6a49c2;
case 0x6a49c4:goto L6a49c4;
case 0x6a49ca:c.instructions+=1;goto B6a49ca;
case 0x6a49cc:goto L6a49cc;
case 0x6a49cf:c.instructions+=3;goto B6a49cf;
case 0x6a49d0:c.instructions+=2;goto B6a49d0;
case 0x6a49d3:c.instructions+=1;goto B6a49d3;
case 0x6a49d4:goto L6a49d4;
case 0x6a49d6:c.instructions+=2;goto B6a49d6;
case 0x6a49d9:c.instructions+=1;goto B6a49d9;
case 0x6a49db:goto L6a49db;
case 0x6a49de:c.instructions+=5;goto B6a49de;
case 0x6a49e1:c.instructions+=4;goto B6a49e1;
case 0x6a49e4:c.instructions+=3;goto B6a49e4;
case 0x6a49e7:c.instructions+=2;goto B6a49e7;
case 0x6a49ea:c.instructions+=1;goto B6a49ea;
case 0x6a49ec:goto L6a49ec;
case 0x6a49ef:goto L6a49ef;
case 0x6a49f0:c.instructions+=2;goto B6a49f0;
case 0x6a49f3:c.instructions+=1;goto B6a49f3;
case 0x6a49f5:goto L6a49f5;
case 0x6a49f8:c.instructions+=1;goto B6a49f8;
case 0x6a49fa:goto L6a49fa;
case 0x6a49fc:goto L6a49fc;
case 0x6a49ff:c.instructions+=3;goto B6a49ff;
case 0x6a4a02:c.instructions+=2;goto B6a4a02;
case 0x6a4a05:c.instructions+=1;goto B6a4a05;
case 0x6a4a07:goto L6a4a07;
case 0x6a4a0a:c.instructions+=6;goto B6a4a0a;
case 0x6a4a0d:c.instructions+=5;goto B6a4a0d;
case 0x6a4a10:c.instructions+=4;goto B6a4a10;
case 0x6a4a12:c.instructions+=3;goto B6a4a12;
case 0x6a4a18:c.instructions+=2;goto B6a4a18;
case 0x6a4a1b:c.instructions+=1;goto B6a4a1b;
case 0x6a4a1d:goto L6a4a1d;
case 0x6a4a20:c.instructions+=9;goto B6a4a20;
case 0x6a4a22:c.instructions+=8;goto B6a4a22;
case 0x6a4a25:c.instructions+=7;goto B6a4a25;
case 0x6a4a28:c.instructions+=6;goto B6a4a28;
case 0x6a4a2b:c.instructions+=5;goto B6a4a2b;
case 0x6a4a2e:c.instructions+=4;goto B6a4a2e;
case 0x6a4a31:c.instructions+=3;goto B6a4a31;
case 0x6a4a34:c.instructions+=2;goto B6a4a34;
case 0x6a4a38:c.instructions+=1;goto B6a4a38;
case 0x6a4a3a:goto L6a4a3a;
case 0x6a4a41:c.instructions+=1;goto B6a4a41;
case 0x6a4a43:goto L6a4a43;
case 0x6a4a4a:c.instructions+=1;goto B6a4a4a;
case 0x6a4a4c:goto L6a4a4c;
case 0x6a4a53:c.instructions+=1;goto B6a4a53;
case 0x6a4a55:goto L6a4a55;
case 0x6a4a58:c.instructions+=1;goto B6a4a58;
case 0x6a4a5a:goto L6a4a5a;
case 0x6a4a5d:c.instructions+=2;goto B6a4a5d;
case 0x6a4a5f:c.instructions+=1;goto B6a4a5f;
case 0x6a4a62:goto L6a4a62;
case 0x6a4a65:goto L6a4a65;
case 0x6a4a67:c.instructions+=3;goto B6a4a67;
case 0x6a4a6a:c.instructions+=2;goto B6a4a6a;
case 0x6a4a6d:c.instructions+=1;goto B6a4a6d;
case 0x6a4a6f:goto L6a4a6f;
case 0x6a4a76:goto L6a4a76;
case 0x6a4a79:c.instructions+=3;goto B6a4a79;
case 0x6a4a7c:c.instructions+=2;goto B6a4a7c;
case 0x6a4a7f:c.instructions+=1;goto B6a4a7f;
case 0x6a4a81:goto L6a4a81;
case 0x6a4a88:c.instructions+=1;goto B6a4a88;
case 0x6a4a8a:goto L6a4a8a;
case 0x6a4a8c:c.instructions+=2;goto B6a4a8c;
case 0x6a4a8d:c.instructions+=1;goto B6a4a8d;
case 0x6a4a92:goto L6a4a92;
case 0x6a4a95:c.instructions+=4;goto B6a4a95;
case 0x6a4a98:c.instructions+=3;goto B6a4a98;
case 0x6a4a9b:c.instructions+=2;goto B6a4a9b;
case 0x6a4a9c:c.instructions+=1;goto B6a4a9c;
case 0x6a4aa2:goto L6a4aa2;
case 0x6a4aa7:goto L6a4aa7;
case 0x6a4aa9:c.instructions+=3;goto B6a4aa9;
case 0x6a4aaa:c.instructions+=2;goto B6a4aaa;
case 0x6a4aad:c.instructions+=1;goto B6a4aad;
case 0x6a4ab3:goto L6a4ab3;
case 0x6a4ab6:c.instructions+=3;goto B6a4ab6;
case 0x6a4ab9:c.instructions+=2;goto B6a4ab9;
case 0x6a4aba:c.instructions+=1;goto B6a4aba;
case 0x6a4abf:goto L6a4abf;
case 0x6a4ac1:c.instructions+=3;goto B6a4ac1;
case 0x6a4ac2:c.instructions+=2;goto B6a4ac2;
case 0x6a4ac5:c.instructions+=1;goto B6a4ac5;
case 0x6a4acb:goto L6a4acb;
case 0x6a4acd:c.instructions+=1;goto B6a4acd;
case 0x6a4ad2:goto L6a4ad2;
case 0x6a4ad4:c.instructions+=2;goto B6a4ad4;
case 0x6a4ad6:c.instructions+=1;goto B6a4ad6;
case 0x6a4adc:goto L6a4adc;
case 0x6a4ade:c.instructions+=2;goto B6a4ade;
case 0x6a4ae1:c.instructions+=1;goto B6a4ae1;
case 0x6a4ae3:goto L6a4ae3;
case 0x6a4ae6:c.instructions+=4;goto B6a4ae6;
case 0x6a4ae9:c.instructions+=3;goto B6a4ae9;
case 0x6a4aea:c.instructions+=2;goto B6a4aea;
case 0x6a4aed:c.instructions+=1;goto B6a4aed;
case 0x6a4aef:goto L6a4aef;
case 0x6a4af0:c.instructions+=4;goto B6a4af0;
case 0x6a4af3:c.instructions+=3;goto B6a4af3;
case 0x6a4af6:c.instructions+=2;goto B6a4af6;
case 0x6a4afb:c.instructions+=1;goto B6a4afb;
case 0x6a4b00:goto L6a4b00;
case 0x6a4b02:c.instructions+=2;goto B6a4b02;
case 0x6a4b05:c.instructions+=1;goto B6a4b05;
case 0x6a4b07:goto L6a4b07;
case 0x6a4b0a:c.instructions+=2;goto B6a4b0a;
case 0x6a4b0d:c.instructions+=1;goto B6a4b0d;
case 0x6a4b0f:goto L6a4b0f;
case 0x6a4b12:c.instructions+=7;goto B6a4b12;
case 0x6a4b15:c.instructions+=6;goto B6a4b15;
case 0x6a4b18:c.instructions+=5;goto B6a4b18;
case 0x6a4b1a:c.instructions+=4;goto B6a4b1a;
case 0x6a4b1b:c.instructions+=3;goto B6a4b1b;
case 0x6a4b1e:c.instructions+=2;goto B6a4b1e;
case 0x6a4b21:c.instructions+=1;goto B6a4b21;
case 0x6a4b23:goto L6a4b23;
case 0x6a4b26:c.instructions+=5;goto B6a4b26;
case 0x6a4b29:c.instructions+=4;goto B6a4b29;
case 0x6a4b2c:c.instructions+=3;goto B6a4b2c;
case 0x6a4b2f:c.instructions+=2;goto B6a4b2f;
case 0x6a4b31:c.instructions+=1;goto B6a4b31;
case 0x6a4b34:goto L6a4b34;
case 0x6a4b36:goto L6a4b36;
case 0x6a4b38:c.instructions+=1;goto B6a4b38;
case 0x6a4b3b:goto L6a4b3b;
case 0x6a4b3d:goto L6a4b3d;
case 0x6a4b3f:c.instructions+=1;goto B6a4b3f;
case 0x6a4b44:goto L6a4b44;
case 0x6a4b46:c.instructions+=2;goto B6a4b46;
case 0x6a4b48:c.instructions+=1;goto B6a4b48;
case 0x6a4b4e:goto L6a4b4e;
case 0x6a4b50:c.instructions+=4;goto B6a4b50;
case 0x6a4b53:c.instructions+=3;goto B6a4b53;
case 0x6a4b56:c.instructions+=2;goto B6a4b56;
case 0x6a4b5d:c.instructions+=1;goto B6a4b5d;
case 0x6a4b63:goto L6a4b63;
case 0x6a4b65:c.instructions+=2;goto B6a4b65;
case 0x6a4b67:c.instructions+=1;goto B6a4b67;
case 0x6a4b6d:goto L6a4b6d;
case 0x6a4b72:goto L6a4b72;
case 0x6a4b75:c.instructions+=1;goto B6a4b75;
case 0x6a4b7a:goto L6a4b7a;
case 0x6a4b7c:c.instructions+=3;goto B6a4b7c;
case 0x6a4b7d:c.instructions+=2;goto B6a4b7d;
case 0x6a4b80:c.instructions+=1;goto B6a4b80;
case 0x6a4b86:goto L6a4b86;
case 0x6a4b89:c.instructions+=3;goto B6a4b89;
case 0x6a4b8c:c.instructions+=2;goto B6a4b8c;
case 0x6a4b8d:c.instructions+=1;goto B6a4b8d;
case 0x6a4b92:goto L6a4b92;
case 0x6a4b94:c.instructions+=3;goto B6a4b94;
case 0x6a4b95:c.instructions+=2;goto B6a4b95;
case 0x6a4b98:c.instructions+=1;goto B6a4b98;
case 0x6a4b9e:goto L6a4b9e;
case 0x6a4ba1:c.instructions+=3;goto B6a4ba1;
case 0x6a4ba4:c.instructions+=2;goto B6a4ba4;
case 0x6a4ba5:c.instructions+=1;goto B6a4ba5;
case 0x6a4baa:goto L6a4baa;
case 0x6a4bac:c.instructions+=3;goto B6a4bac;
case 0x6a4bad:c.instructions+=2;goto B6a4bad;
case 0x6a4bb0:c.instructions+=1;goto B6a4bb0;
case 0x6a4bb6:goto L6a4bb6;
case 0x6a4bb8:c.instructions+=2;goto B6a4bb8;
case 0x6a4bbb:c.instructions+=1;goto B6a4bbb;
case 0x6a4bbd:goto L6a4bbd;
case 0x6a4bc0:c.instructions+=5;goto B6a4bc0;
case 0x6a4bc3:c.instructions+=4;goto B6a4bc3;
case 0x6a4bc7:c.instructions+=3;goto B6a4bc7;
case 0x6a4bcd:c.instructions+=2;goto B6a4bcd;
case 0x6a4bd0:c.instructions+=1;goto B6a4bd0;
case 0x6a4bd2:goto L6a4bd2;
case 0x6a4bd5:c.instructions+=1;goto B6a4bd5;
case 0x6a4bd7:goto L6a4bd7;
case 0x6a4bda:c.instructions+=3;goto B6a4bda;
case 0x6a4bdd:c.instructions+=2;goto B6a4bdd;
case 0x6a4be0:c.instructions+=1;goto B6a4be0;
case 0x6a4be3:goto L6a4be3;
case 0x6a4be4:c.instructions+=2;goto B6a4be4;
case 0x6a4be7:c.instructions+=1;goto B6a4be7;
case 0x6a4be9:goto L6a4be9;
case 0x6a4bed:c.instructions+=2;goto B6a4bed;
case 0x6a4bf0:c.instructions+=1;goto B6a4bf0;
case 0x6a4bf2:goto L6a4bf2;
case 0x6a4bf5:c.instructions+=6;goto B6a4bf5;
case 0x6a4bf6:c.instructions+=5;goto B6a4bf6;
case 0x6a4bf9:c.instructions+=4;goto B6a4bf9;
case 0x6a4bfc:c.instructions+=3;goto B6a4bfc;
case 0x6a4bff:c.instructions+=2;goto B6a4bff;
case 0x6a4c01:c.instructions+=1;goto B6a4c01;
case 0x6a4c06:goto L6a4c06;
case 0x6a4c08:c.instructions+=2;goto B6a4c08;
case 0x6a4c0a:c.instructions+=1;goto B6a4c0a;
case 0x6a4c0c:goto L6a4c0c;
case 0x6a4c0d:c.instructions+=2;goto B6a4c0d;
case 0x6a4c10:c.instructions+=1;goto B6a4c10;
case 0x6a4c12:goto L6a4c12;
case 0x6a4c14:c.instructions+=2;goto B6a4c14;
case 0x6a4c17:c.instructions+=1;goto B6a4c17;
case 0x6a4c19:goto L6a4c19;
case 0x6a4c1c:c.instructions+=2;goto B6a4c1c;
case 0x6a4c1f:c.instructions+=1;goto B6a4c1f;
case 0x6a4c21:goto L6a4c21;
case 0x6a4c24:c.instructions+=7;goto B6a4c24;
case 0x6a4c27:c.instructions+=6;goto B6a4c27;
case 0x6a4c2a:c.instructions+=5;goto B6a4c2a;
case 0x6a4c2c:c.instructions+=4;goto B6a4c2c;
case 0x6a4c2d:c.instructions+=3;goto B6a4c2d;
case 0x6a4c30:c.instructions+=2;goto B6a4c30;
case 0x6a4c33:c.instructions+=1;goto B6a4c33;
case 0x6a4c35:goto L6a4c35;
case 0x6a4c38:c.instructions+=5;goto B6a4c38;
case 0x6a4c3b:c.instructions+=4;goto B6a4c3b;
case 0x6a4c3e:c.instructions+=3;goto B6a4c3e;
case 0x6a4c41:c.instructions+=2;goto B6a4c41;
case 0x6a4c43:c.instructions+=1;goto B6a4c43;
case 0x6a4c46:goto L6a4c46;
case 0x6a4c48:goto L6a4c48;
case 0x6a4c4a:c.instructions+=1;goto B6a4c4a;
case 0x6a4c4d:goto L6a4c4d;
case 0x6a4c4f:goto L6a4c4f;
case 0x6a4c51:c.instructions+=1;goto B6a4c51;
case 0x6a4c53:goto L6a4c53;
case 0x6a4c58:goto L6a4c58;
case 0x6a4c5b:c.instructions+=1;goto B6a4c5b;
case 0x6a4c60:goto L6a4c60;
case 0x6a4c63:c.instructions+=1;goto B6a4c63;
case 0x6a4c68:goto L6a4c68;
case 0x6a4c6b:c.instructions+=1;goto B6a4c6b;
case 0x6a4c70:goto L6a4c70;
case 0x6a4c73:c.instructions+=1;goto B6a4c73;
case 0x6a4c75:goto L6a4c75;
case 0x6a4c76:c.instructions+=4;goto B6a4c76;
case 0x6a4c77:c.instructions+=3;goto B6a4c77;
case 0x6a4c78:c.instructions+=2;goto B6a4c78;
case 0x6a4c79:c.instructions+=1;goto B6a4c79;
case 0x6a4c7a:goto L6a4c7a;
case 0x6a4c7c:c.instructions+=6;goto B6a4c7c;
case 0x6a4c7d:c.instructions+=5;goto B6a4c7d;
case 0x6a4c7f:c.instructions+=4;goto B6a4c7f;
case 0x6a4c82:c.instructions+=3;goto B6a4c82;
case 0x6a4c83:c.instructions+=2;goto B6a4c83;
case 0x6a4c85:c.instructions+=1;goto B6a4c85;
case 0x6a4c8a:goto L6a4c8a;
case 0x6a4c8e:c.instructions+=2;goto B6a4c8e;
case 0x6a4c92:c.instructions+=1;goto B6a4c92;
case 0x6a4c98:goto L6a4c98;
case 0x6a4c99:c.instructions+=1;goto B6a4c99;
case 0x6a4c9a:goto L6a4c9a;
case 0x6a4c9d:c.instructions+=6;goto B6a4c9d;
case 0x6a4ca0:c.instructions+=5;goto B6a4ca0;
case 0x6a4ca3:c.instructions+=4;goto B6a4ca3;
case 0x6a4ca5:c.instructions+=3;goto B6a4ca5;
case 0x6a4ca8:c.instructions+=2;goto B6a4ca8;
case 0x6a4caf:c.instructions+=1;goto B6a4caf;
case 0x6a4cb5:goto L6a4cb5;
case 0x6a4cb8:c.instructions+=7;goto B6a4cb8;
case 0x6a4cba:c.instructions+=6;goto B6a4cba;
case 0x6a4cc0:c.instructions+=5;goto B6a4cc0;
case 0x6a4cc2:c.instructions+=4;goto B6a4cc2;
case 0x6a4cc4:c.instructions+=3;goto B6a4cc4;
case 0x6a4ccb:c.instructions+=2;goto B6a4ccb;
case 0x6a4cce:c.instructions+=1;goto B6a4cce;
case 0x6a4cd0:goto L6a4cd0;
case 0x6a4cd2:c.instructions+=8;goto B6a4cd2;
case 0x6a4cd3:c.instructions+=7;goto B6a4cd3;
case 0x6a4cd6:c.instructions+=6;goto B6a4cd6;
case 0x6a4cd7:c.instructions+=5;goto B6a4cd7;
case 0x6a4cda:c.instructions+=4;goto B6a4cda;
case 0x6a4cdd:c.instructions+=3;goto B6a4cdd;
case 0x6a4cde:c.instructions+=2;goto B6a4cde;
case 0x6a4ce0:c.instructions+=1;goto B6a4ce0;
case 0x6a4ce5:goto L6a4ce5;
case 0x6a4ce7:c.instructions+=6;goto B6a4ce7;
case 0x6a4ce8:c.instructions+=5;goto B6a4ce8;
case 0x6a4ceb:c.instructions+=4;goto B6a4ceb;
case 0x6a4cec:c.instructions+=3;goto B6a4cec;
case 0x6a4cef:c.instructions+=2;goto B6a4cef;
case 0x6a4cf1:c.instructions+=1;goto B6a4cf1;
case 0x6a4cf6:goto L6a4cf6;
case 0x6a4cf8:goto L6a4cf8;
case 0x6a4cfe:c.instructions+=2;goto B6a4cfe;
case 0x6a4d04:c.instructions+=1;goto B6a4d04;
case 0x6a4d06:goto L6a4d06;
case 0x6a4d0c:c.instructions+=1;goto B6a4d0c;
case 0x6a4d0e:goto L6a4d0e;
case 0x6a4d10:c.instructions+=6;goto B6a4d10;
case 0x6a4d11:c.instructions+=5;goto B6a4d11;
case 0x6a4d14:c.instructions+=4;goto B6a4d14;
case 0x6a4d15:c.instructions+=3;goto B6a4d15;
case 0x6a4d18:c.instructions+=2;goto B6a4d18;
case 0x6a4d1a:c.instructions+=1;goto B6a4d1a;
case 0x6a4d1f:goto L6a4d1f;
case 0x6a4d23:c.instructions+=2;goto B6a4d23;
case 0x6a4d27:c.instructions+=1;goto B6a4d27;
case 0x6a4d29:goto L6a4d29;
case 0x6a4d2c:c.instructions+=10;goto B6a4d2c;
case 0x6a4d2e:c.instructions+=9;goto B6a4d2e;
case 0x6a4d2f:c.instructions+=8;goto B6a4d2f;
case 0x6a4d32:c.instructions+=7;goto B6a4d32;
case 0x6a4d33:c.instructions+=6;goto B6a4d33;
case 0x6a4d36:c.instructions+=5;goto B6a4d36;
case 0x6a4d3a:c.instructions+=4;goto B6a4d3a;
case 0x6a4d3d:c.instructions+=3;goto B6a4d3d;
case 0x6a4d3e:c.instructions+=2;goto B6a4d3e;
case 0x6a4d40:c.instructions+=1;goto B6a4d40;
case 0x6a4d45:goto L6a4d45;
case 0x6a4d48:c.instructions+=3;goto B6a4d48;
case 0x6a4d4b:c.instructions+=2;goto B6a4d4b;
case 0x6a4d4e:c.instructions+=1;goto B6a4d4e;
case 0x6a4d50:goto L6a4d50;
case 0x6a4d52:c.instructions+=3;goto B6a4d52;
case 0x6a4d57:c.instructions+=2;goto B6a4d57;
case 0x6a4d5c:c.instructions+=1;goto B6a4d5c;
case 0x6a4d62:goto L6a4d62;
case 0x6a4d64:c.instructions+=1;goto B6a4d64;
case 0x6a4d69:goto L6a4d69;
case 0x6a4d6b:c.instructions+=1;goto B6a4d6b;
case 0x6a4d71:goto L6a4d71;
case 0x6a4d74:c.instructions+=11;goto B6a4d74;
case 0x6a4d76:c.instructions+=10;goto B6a4d76;
case 0x6a4d79:c.instructions+=9;goto B6a4d79;
case 0x6a4d7c:c.instructions+=8;goto B6a4d7c;
case 0x6a4d7f:c.instructions+=7;goto B6a4d7f;
case 0x6a4d82:c.instructions+=6;goto B6a4d82;
case 0x6a4d86:c.instructions+=5;goto B6a4d86;
case 0x6a4d8a:c.instructions+=4;goto B6a4d8a;
case 0x6a4d8c:c.instructions+=3;goto B6a4d8c;
case 0x6a4d8f:c.instructions+=2;goto B6a4d8f;
case 0x6a4d92:c.instructions+=1;goto B6a4d92;
case 0x6a4d94:goto L6a4d94;
case 0x6a4d97:c.instructions+=5;goto B6a4d97;
case 0x6a4d9a:c.instructions+=4;goto B6a4d9a;
case 0x6a4d9d:c.instructions+=3;goto B6a4d9d;
case 0x6a4d9f:c.instructions+=2;goto B6a4d9f;
case 0x6a4da2:c.instructions+=1;goto B6a4da2;
case 0x6a4da5:goto L6a4da5;
case 0x6a4da8:c.instructions+=5;goto B6a4da8;
case 0x6a4daa:c.instructions+=4;goto B6a4daa;
case 0x6a4dad:c.instructions+=3;goto B6a4dad;
case 0x6a4db0:c.instructions+=2;goto B6a4db0;
case 0x6a4db3:c.instructions+=1;goto B6a4db3;
case 0x6a4db5:goto L6a4db5;
case 0x6a4db8:goto L6a4db8;
case 0x6a4dbb:c.instructions+=5;goto B6a4dbb;
case 0x6a4dbd:c.instructions+=4;goto B6a4dbd;
case 0x6a4dc0:c.instructions+=3;goto B6a4dc0;
case 0x6a4dc3:c.instructions+=2;goto B6a4dc3;
case 0x6a4dc6:c.instructions+=1;goto B6a4dc6;
case 0x6a4dc8:goto L6a4dc8;
case 0x6a4dcb:goto L6a4dcb;
case 0x6a4dcf:c.instructions+=3;goto B6a4dcf;
case 0x6a4dd3:c.instructions+=2;goto B6a4dd3;
case 0x6a4dd6:c.instructions+=1;goto B6a4dd6;
case 0x6a4dd8:goto L6a4dd8;
case 0x6a4ddb:c.instructions+=2;goto B6a4ddb;
case 0x6a4dde:c.instructions+=1;goto B6a4dde;
case 0x6a4de4:goto L6a4de4;
case 0x6a4de6:goto L6a4de6;
case 0x6a4de9:c.instructions+=13;goto B6a4de9;
case 0x6a4dec:c.instructions+=12;goto B6a4dec;
case 0x6a4def:c.instructions+=11;goto B6a4def;
case 0x6a4df2:c.instructions+=10;goto B6a4df2;
case 0x6a4df5:c.instructions+=9;goto B6a4df5;
case 0x6a4df7:c.instructions+=8;goto B6a4df7;
case 0x6a4dfa:c.instructions+=7;goto B6a4dfa;
case 0x6a4dfd:c.instructions+=6;goto B6a4dfd;
case 0x6a4e00:c.instructions+=5;goto B6a4e00;
case 0x6a4e03:c.instructions+=4;goto B6a4e03;
case 0x6a4e06:c.instructions+=3;goto B6a4e06;
case 0x6a4e09:c.instructions+=2;goto B6a4e09;
case 0x6a4e0c:c.instructions+=1;goto B6a4e0c;
case 0x6a4e0e:goto L6a4e0e;
case 0x6a4e11:c.instructions+=6;goto B6a4e11;
case 0x6a4e14:c.instructions+=5;goto B6a4e14;
case 0x6a4e17:c.instructions+=4;goto B6a4e17;
case 0x6a4e1a:c.instructions+=3;goto B6a4e1a;
case 0x6a4e1d:c.instructions+=2;goto B6a4e1d;
case 0x6a4e20:c.instructions+=1;goto B6a4e20;
case 0x6a4e22:goto L6a4e22;
case 0x6a4e25:c.instructions+=5;goto B6a4e25;
case 0x6a4e28:c.instructions+=4;goto B6a4e28;
case 0x6a4e2b:c.instructions+=3;goto B6a4e2b;
case 0x6a4e2e:c.instructions+=2;goto B6a4e2e;
case 0x6a4e30:c.instructions+=1;goto B6a4e30;
case 0x6a4e32:goto L6a4e32;
case 0x6a4e34:goto L6a4e34;
case 0x6a4e37:c.instructions+=3;goto B6a4e37;
case 0x6a4e3a:c.instructions+=2;goto B6a4e3a;
case 0x6a4e3d:c.instructions+=1;goto B6a4e3d;
case 0x6a4e3f:goto L6a4e3f;
case 0x6a4e43:c.instructions+=2;goto B6a4e43;
case 0x6a4e45:c.instructions+=1;goto B6a4e45;
case 0x6a4e47:goto L6a4e47;
case 0x6a4e49:c.instructions+=2;goto B6a4e49;
case 0x6a4e4c:c.instructions+=1;goto B6a4e4c;
case 0x6a4e4f:goto L6a4e4f;
case 0x6a4e52:c.instructions+=15;goto B6a4e52;
case 0x6a4e55:c.instructions+=14;goto B6a4e55;
case 0x6a4e58:c.instructions+=13;goto B6a4e58;
case 0x6a4e5b:c.instructions+=12;goto B6a4e5b;
case 0x6a4e5d:c.instructions+=11;goto B6a4e5d;
case 0x6a4e60:c.instructions+=10;goto B6a4e60;
case 0x6a4e63:c.instructions+=9;goto B6a4e63;
case 0x6a4e66:c.instructions+=8;goto B6a4e66;
case 0x6a4e68:c.instructions+=7;goto B6a4e68;
case 0x6a4e6b:c.instructions+=6;goto B6a4e6b;
case 0x6a4e6e:c.instructions+=5;goto B6a4e6e;
case 0x6a4e71:c.instructions+=4;goto B6a4e71;
case 0x6a4e74:c.instructions+=3;goto B6a4e74;
case 0x6a4e77:c.instructions+=2;goto B6a4e77;
case 0x6a4e7a:c.instructions+=1;goto B6a4e7a;
case 0x6a4e7c:goto L6a4e7c;
case 0x6a4e7f:c.instructions+=3;goto B6a4e7f;
case 0x6a4e82:c.instructions+=2;goto B6a4e82;
case 0x6a4e85:c.instructions+=1;goto B6a4e85;
case 0x6a4e8b:goto L6a4e8b;
case 0x6a4e8c:c.instructions+=1;goto B6a4e8c;
case 0x6a4e8d:goto L6a4e8d;
case 0x6a4e8f:c.instructions+=3;goto B6a4e8f;
case 0x6a4e90:c.instructions+=2;goto B6a4e90;
case 0x6a4e91:c.instructions+=1;goto B6a4e91;
case 0x6a4e92:goto L6a4e92;
case 0x6a4e94:c.instructions+=7;goto B6a4e94;
case 0x6a4e95:c.instructions+=6;goto B6a4e95;
case 0x6a4e97:c.instructions+=5;goto B6a4e97;
case 0x6a4e9d:c.instructions+=4;goto B6a4e9d;
case 0x6a4ea1:c.instructions+=3;goto B6a4ea1;
case 0x6a4ea2:c.instructions+=2;goto B6a4ea2;
case 0x6a4ea4:c.instructions+=1;goto B6a4ea4;
case 0x6a4ea6:goto L6a4ea6;
case 0x6a4ea8:c.instructions+=2;goto B6a4ea8;
case 0x6a4ea9:c.instructions+=1;goto B6a4ea9;
case 0x6a4eae:goto L6a4eae;
case 0x6a4eb2:c.instructions+=1;goto B6a4eb2;
case 0x6a4eb4:goto L6a4eb4;
case 0x6a4eb6:c.instructions+=1;goto B6a4eb6;
case 0x6a4ebb:goto L6a4ebb;
case 0x6a4ebc:c.instructions+=6;goto B6a4ebc;
case 0x6a4ebe:c.instructions+=5;goto B6a4ebe;
case 0x6a4ebf:c.instructions+=4;goto B6a4ebf;
case 0x6a4ec2:c.instructions+=3;goto B6a4ec2;
case 0x6a4ec3:c.instructions+=2;goto B6a4ec3;
case 0x6a4ec6:c.instructions+=1;goto B6a4ec6;
case 0x6a4ec8:goto L6a4ec8;
case 0x6a4ecb:c.instructions+=3;goto B6a4ecb;
case 0x6a4ecd:c.instructions+=2;goto B6a4ecd;
case 0x6a4ecf:c.instructions+=1;goto B6a4ecf;
case 0x6a4ed4:goto L6a4ed4;
case 0x6a4ed6:c.instructions+=1;goto B6a4ed6;
case 0x6a4ed8:goto L6a4ed8;
case 0x6a4ed9:c.instructions+=2;goto B6a4ed9;
case 0x6a4edc:c.instructions+=1;goto B6a4edc;
case 0x6a4ede:goto L6a4ede;
case 0x6a4ee1:c.instructions+=1;goto B6a4ee1;
case 0x6a4ee7:goto L6a4ee7;
case 0x6a4eea:c.instructions+=6;goto B6a4eea;
case 0x6a4eed:c.instructions+=5;goto B6a4eed;
case 0x6a4ef0:c.instructions+=4;goto B6a4ef0;
case 0x6a4ef2:c.instructions+=3;goto B6a4ef2;
case 0x6a4ef4:c.instructions+=2;goto B6a4ef4;
case 0x6a4ef7:c.instructions+=1;goto B6a4ef7;
case 0x6a4efa:goto L6a4efa;
case 0x6a4efc:goto L6a4efc;
case 0x6a4efe:c.instructions+=1;goto B6a4efe;
case 0x6a4f01:goto L6a4f01;
case 0x6a4f03:goto L6a4f03;
case 0x6a4f05:c.instructions+=4;goto B6a4f05;
case 0x6a4f08:c.instructions+=3;goto B6a4f08;
case 0x6a4f0b:c.instructions+=2;goto B6a4f0b;
case 0x6a4f0d:c.instructions+=1;goto B6a4f0d;
case 0x6a4f10:goto L6a4f10;
case 0x6a4f12:goto L6a4f12;
case 0x6a4f14:c.instructions+=3;goto B6a4f14;
case 0x6a4f17:c.instructions+=2;goto B6a4f17;
case 0x6a4f19:c.instructions+=1;goto B6a4f19;
case 0x6a4f1c:goto L6a4f1c;
case 0x6a4f1e:goto L6a4f1e;
case 0x6a4f20:goto L6a4f20;
case 0x6a4f23:c.instructions+=5;goto B6a4f23;
case 0x6a4f25:c.instructions+=4;goto B6a4f25;
case 0x6a4f2a:c.instructions+=3;goto B6a4f2a;
case 0x6a4f2f:c.instructions+=2;goto B6a4f2f;
case 0x6a4f32:c.instructions+=1;goto B6a4f32;
case 0x6a4f34:goto L6a4f34;
case 0x6a4f3b:goto L6a4f3b;
case 0x6a4f3e:c.instructions+=3;goto B6a4f3e;
case 0x6a4f41:c.instructions+=2;goto B6a4f41;
case 0x6a4f44:c.instructions+=1;goto B6a4f44;
case 0x6a4f4a:goto L6a4f4a;
case 0x6a4f4d:c.instructions+=9;goto B6a4f4d;
case 0x6a4f50:c.instructions+=8;goto B6a4f50;
case 0x6a4f52:c.instructions+=7;goto B6a4f52;
case 0x6a4f55:c.instructions+=6;goto B6a4f55;
case 0x6a4f57:c.instructions+=5;goto B6a4f57;
case 0x6a4f5a:c.instructions+=4;goto B6a4f5a;
case 0x6a4f5d:c.instructions+=3;goto B6a4f5d;
case 0x6a4f60:c.instructions+=2;goto B6a4f60;
case 0x6a4f61:c.instructions+=1;goto B6a4f61;
case 0x6a4f66:goto L6a4f66;
case 0x6a4f68:c.instructions+=1;goto B6a4f68;
case 0x6a4f6e:goto L6a4f6e;
case 0x6a4f71:c.instructions+=6;goto B6a4f71;
case 0x6a4f73:c.instructions+=5;goto B6a4f73;
case 0x6a4f76:c.instructions+=4;goto B6a4f76;
case 0x6a4f78:c.instructions+=3;goto B6a4f78;
case 0x6a4f7a:c.instructions+=2;goto B6a4f7a;
case 0x6a4f7d:c.instructions+=1;goto B6a4f7d;
case 0x6a4f83:goto L6a4f83;
case 0x6a4f86:goto L6a4f86;
case 0x6a4f89:c.instructions+=6;goto B6a4f89;
case 0x6a4f8c:c.instructions+=5;goto B6a4f8c;
case 0x6a4f8f:c.instructions+=4;goto B6a4f8f;
case 0x6a4f92:c.instructions+=3;goto B6a4f92;
case 0x6a4f97:c.instructions+=2;goto B6a4f97;
case 0x6a4f9a:c.instructions+=1;goto B6a4f9a;
case 0x6a4f9c:goto L6a4f9c;
case 0x6a4fa0:c.instructions+=1;goto B6a4fa0;
case 0x6a4fa2:goto L6a4fa2;
case 0x6a4fa5:c.instructions+=6;goto B6a4fa5;
case 0x6a4fa6:c.instructions+=5;goto B6a4fa6;
case 0x6a4fa9:c.instructions+=4;goto B6a4fa9;
case 0x6a4faa:c.instructions+=3;goto B6a4faa;
case 0x6a4fab:c.instructions+=2;goto B6a4fab;
case 0x6a4fad:c.instructions+=1;goto B6a4fad;
case 0x6a4fb2:goto L6a4fb2;
case 0x6a4fb4:c.instructions+=2;goto B6a4fb4;
case 0x6a4fb7:c.instructions+=1;goto B6a4fb7;
case 0x6a4fb9:goto L6a4fb9;
case 0x6a4fbc:c.instructions+=1;goto B6a4fbc;
case 0x6a4fc1:goto L6a4fc1;
case 0x6a4fc4:c.instructions+=5;goto B6a4fc4;
case 0x6a4fca:c.instructions+=4;goto B6a4fca;
case 0x6a4fcc:c.instructions+=3;goto B6a4fcc;
case 0x6a4fce:c.instructions+=2;goto B6a4fce;
case 0x6a4fd1:c.instructions+=1;goto B6a4fd1;
case 0x6a4fd3:goto L6a4fd3;
case 0x6a4fd6:c.instructions+=5;goto B6a4fd6;
case 0x6a4fdc:c.instructions+=4;goto B6a4fdc;
case 0x6a4fde:c.instructions+=3;goto B6a4fde;
case 0x6a4fe0:c.instructions+=2;goto B6a4fe0;
case 0x6a4fe3:c.instructions+=1;goto B6a4fe3;
case 0x6a4fe5:goto L6a4fe5;
case 0x6a4fe8:c.instructions+=6;goto B6a4fe8;
case 0x6a4feb:c.instructions+=5;goto B6a4feb;
case 0x6a4fee:c.instructions+=4;goto B6a4fee;
case 0x6a4ff0:c.instructions+=3;goto B6a4ff0;
case 0x6a4ff3:c.instructions+=2;goto B6a4ff3;
case 0x6a4ff6:c.instructions+=1;goto B6a4ff6;
case 0x6a4ff8:goto L6a4ff8;
case 0x6a4ffb:c.instructions+=2;goto B6a4ffb;
case 0x6a4ffe:c.instructions+=1;goto B6a4ffe;
default:missing_instruction(c.pc);}
B6a4000:L6a4000:{c.instructions+=6;NFSU2_TR(0x6a4000);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a4003:{NFSU2_TR(0x6a4003);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4006:{NFSU2_TR(0x6a4006);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a400a:{NFSU2_TR(0x6a400a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a400d:{NFSU2_TR(0x6a400d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a4010:{NFSU2_TR(0x6a4010);
if(r1(R+512)){TAIL_STATIC(0x6a3ff0u,6a3);}
}
B6a4012:L6a4012:{c.instructions+=1;NFSU2_TR(0x6a4012);
{goto L6a4020;}
}
B6a4014:L6a4014:{c.instructions+=1;NFSU2_TR(0x6a4014);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4016:L6a4016:{c.instructions+=4;NFSU2_TR(0x6a4016);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a401a:{NFSU2_TR(0x6a401a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a401b:{NFSU2_TR(0x6a401b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6a401e:{NFSU2_TR(0x6a401e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4016u);}goto L6a4016;}}
}
B6a4020:L6a4020:{c.instructions+=6;NFSU2_TR(0x6a4020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4024:{NFSU2_TR(0x6a4024);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4027:{NFSU2_TR(0x6a4027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4028:{NFSU2_TR(0x6a4028);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a402a:{NFSU2_TR(0x6a402a);
__builtin_memmove((R+4),(R+24),4);
}
B6a402c:{NFSU2_TR(0x6a402c);
{goto L6a4605;}
}
B6a4031:L6a4031:{c.instructions+=13;NFSU2_TR(0x6a4031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4034:{NFSU2_TR(0x6a4034);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4036:{NFSU2_TR(0x6a4036);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a4039:{NFSU2_TR(0x6a4039);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a403a:{NFSU2_TR(0x6a403a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a403b:{NFSU2_TR(0x6a403b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a403d:{NFSU2_TR(0x6a403d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a403f:{NFSU2_TR(0x6a403f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a4040:{NFSU2_TR(0x6a4040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4043:{NFSU2_TR(0x6a4043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4046:{NFSU2_TR(0x6a4046);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a4047:{NFSU2_TR(0x6a4047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a404a:{NFSU2_TR(0x6a404a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4233;}}
}
B6a4050:L6a4050:{c.instructions+=11;NFSU2_TR(0x6a4050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4053:{NFSU2_TR(0x6a4053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4056:{NFSU2_TR(0x6a4056);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4059:{NFSU2_TR(0x6a4059);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a405c:{NFSU2_TR(0x6a405c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6a405e:{NFSU2_TR(0x6a405e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4061:{NFSU2_TR(0x6a4061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4063:{NFSU2_TR(0x6a4063);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4066:{NFSU2_TR(0x6a4066);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a406c:{NFSU2_TR(0x6a406c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a406f:{NFSU2_TR(0x6a406f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a421e;}}
}
B6a4075:L6a4075:{c.instructions+=3;NFSU2_TR(0x6a4075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4078:{NFSU2_TR(0x6a4078);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a407b:{NFSU2_TR(0x6a407b);
if(r1(R+518)){{goto L6a421e;}}
}
B6a4081:L6a4081:{c.instructions+=3;NFSU2_TR(0x6a4081);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4084:{NFSU2_TR(0x6a4084);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4086:{NFSU2_TR(0x6a4086);
if(r1(R+518)){{goto L6a408f;}}
}
B6a4088:L6a4088:{c.instructions+=1;NFSU2_TR(0x6a4088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a408f:L6a408f:{c.instructions+=6;NFSU2_TR(0x6a408f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4092:{NFSU2_TR(0x6a4092);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4095:{NFSU2_TR(0x6a4095);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a4099:{NFSU2_TR(0x6a4099);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a409c:{NFSU2_TR(0x6a409c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a409f:{NFSU2_TR(0x6a409f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a40a4;}}
}
B6a40a1:L6a40a1:{c.instructions+=1;NFSU2_TR(0x6a40a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a40a4:L6a40a4:{c.instructions+=10;NFSU2_TR(0x6a40a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a40a7:{NFSU2_TR(0x6a40a7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a40ab:{NFSU2_TR(0x6a40ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a40ad:{NFSU2_TR(0x6a40ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a40b0:{NFSU2_TR(0x6a40b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a40b3:{NFSU2_TR(0x6a40b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a40b5:{NFSU2_TR(0x6a40b5);
__builtin_memmove((R+0),(R+28),4);
}
B6a40b7:{NFSU2_TR(0x6a40b7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a40bc:{NFSU2_TR(0x6a40bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a40c1:{NFSU2_TR(0x6a40c1);
if(r1(R+518)){{goto L6a4208;}}
}
B6a40c7:L6a40c7:{c.instructions+=2;NFSU2_TR(0x6a40c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a40cc:{NFSU2_TR(0x6a40cc);
if(r1(R+518)){{goto L6a4208;}}
}
B6a40d2:L6a40d2:{c.instructions+=2;NFSU2_TR(0x6a40d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a40d7:{NFSU2_TR(0x6a40d7);
if(r1(R+518)){{goto L6a4208;}}
}
B6a40dd:L6a40dd:{c.instructions+=4;NFSU2_TR(0x6a40dd);
__builtin_memmove((R+0),(R+28),4);
}
B6a40df:{NFSU2_TR(0x6a40df);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a40e4:{NFSU2_TR(0x6a40e4);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6a40e9:{NFSU2_TR(0x6a40e9);
if(r1(R+512)){{goto L6a41f2;}}
}
B6a40ef:L6a40ef:{c.instructions+=2;NFSU2_TR(0x6a40ef);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a40f4:{NFSU2_TR(0x6a40f4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a41f2;}}
}
B6a40fa:L6a40fa:{c.instructions+=2;NFSU2_TR(0x6a40fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a40fe:{NFSU2_TR(0x6a40fe);
if(r1(R+518)){{goto L6a41d8;}}
}
B6a4104:L6a4104:{c.instructions+=4;NFSU2_TR(0x6a4104);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6a4108:{NFSU2_TR(0x6a4108);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a410b:{NFSU2_TR(0x6a410b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a410e:{NFSU2_TR(0x6a410e);
if(r1(R+518)){{goto L6a41d8;}}
}
B6a4114:L6a4114:{c.instructions+=5;NFSU2_TR(0x6a4114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4118:{NFSU2_TR(0x6a4118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a411c:{NFSU2_TR(0x6a411c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4120:{NFSU2_TR(0x6a4120);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4124:{NFSU2_TR(0x6a4124);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a41d8;}}
}
B6a412a:L6a412a:{c.instructions+=2;NFSU2_TR(0x6a412a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a412d:{NFSU2_TR(0x6a412d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4130:L6a4130:{c.instructions+=5;NFSU2_TR(0x6a4130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4133:{NFSU2_TR(0x6a4133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4135:{NFSU2_TR(0x6a4135);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4138:{NFSU2_TR(0x6a4138);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a413a:{NFSU2_TR(0x6a413a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4142;}}
}
B6a413c:L6a413c:{c.instructions+=2;NFSU2_TR(0x6a413c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a413f:{NFSU2_TR(0x6a413f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4142:L6a4142:{c.instructions+=5;NFSU2_TR(0x6a4142);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4145:{NFSU2_TR(0x6a4145);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4148:{NFSU2_TR(0x6a4148);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a414b:{NFSU2_TR(0x6a414b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a414e:{NFSU2_TR(0x6a414e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4156;}}
}
B6a4150:L6a4150:{c.instructions+=2;NFSU2_TR(0x6a4150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4153:{NFSU2_TR(0x6a4153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4156:L6a4156:{c.instructions+=5;NFSU2_TR(0x6a4156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4159:{NFSU2_TR(0x6a4159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a415c:{NFSU2_TR(0x6a415c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4160:{NFSU2_TR(0x6a4160);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4163:{NFSU2_TR(0x6a4163);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4130u);}goto L6a4130;}}
}
B6a4165:L6a4165:{c.instructions+=2;NFSU2_TR(0x6a4165);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4169:{NFSU2_TR(0x6a4169);
if(r1(R+518)){{goto L6a41d8;}}
}
B6a416b:L6a416b:{c.instructions+=2;NFSU2_TR(0x6a416b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a416f:{NFSU2_TR(0x6a416f);
if(r1(R+518)){{goto L6a41d8;}}
}
B6a4171:L6a4171:{c.instructions+=8;NFSU2_TR(0x6a4171);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4174:{NFSU2_TR(0x6a4174);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6a417a:{NFSU2_TR(0x6a417a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a417c:{NFSU2_TR(0x6a417c);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a417c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a417c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a417e:{NFSU2_TR(0x6a417e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4182:{NFSU2_TR(0x6a4182);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4184:{NFSU2_TR(0x6a4184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4187:{NFSU2_TR(0x6a4187);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a41c2;}}
}
B6a4189:L6a4189:{c.instructions+=9;NFSU2_TR(0x6a4189);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a418c:{NFSU2_TR(0x6a418c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a418f:{NFSU2_TR(0x6a418f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4192:{NFSU2_TR(0x6a4192);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a4195:{NFSU2_TR(0x6a4195);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4198:{NFSU2_TR(0x6a4198);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a419b:{NFSU2_TR(0x6a419b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a419e:{NFSU2_TR(0x6a419e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a41a1:{NFSU2_TR(0x6a41a1);
{goto L6a41a6;}
}
B6a41a3:L6a41a3:{c.instructions+=1;NFSU2_TR(0x6a41a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a41a6:L6a41a6:{c.instructions+=4;NFSU2_TR(0x6a41a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a41a9:{NFSU2_TR(0x6a41a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a41ab:{NFSU2_TR(0x6a41ab);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a41ad:{NFSU2_TR(0x6a41ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a41c2;}}
}
B6a41af:L6a41af:{c.instructions+=7;NFSU2_TR(0x6a41af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a41b2:{NFSU2_TR(0x6a41b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a41b5:{NFSU2_TR(0x6a41b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a41b8:{NFSU2_TR(0x6a41b8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6a41ba:{NFSU2_TR(0x6a41ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a41bd:{NFSU2_TR(0x6a41bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a41c0:{NFSU2_TR(0x6a41c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a41a3u);}goto L6a41a3;}}
}
B6a41c2:L6a41c2:{c.instructions+=3;NFSU2_TR(0x6a41c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a41c5:{NFSU2_TR(0x6a41c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a41c8:{NFSU2_TR(0x6a41c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a41d8;}}
}
B6a41ca:L6a41ca:{c.instructions+=5;NFSU2_TR(0x6a41ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a41cd:{NFSU2_TR(0x6a41cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a41d0:{NFSU2_TR(0x6a41d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a41d3:{NFSU2_TR(0x6a41d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a41d6:{NFSU2_TR(0x6a41d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a41d8:L6a41d8:{c.instructions+=1;NFSU2_TR(0x6a41d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a41ddull));
TAIL_STATIC(0x698f42u,698);
}
B6a41dd:L6a41dd:{c.instructions+=2;NFSU2_TR(0x6a41dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a41df:{NFSU2_TR(0x6a41df);
if(r1(R+518)){{goto L6a420f;}}
}
B6a41e1:L6a41e1:{c.instructions+=5;NFSU2_TR(0x6a41e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a41e4:{NFSU2_TR(0x6a41e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a41e6:{NFSU2_TR(0x6a41e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a41e7:{NFSU2_TR(0x6a41e7);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(U+16))<(r4(R+0))));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a41eb:{NFSU2_TR(0x6a41eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a420f;}}
}
B6a41ed:L6a41ed:{c.instructions+=2;NFSU2_TR(0x6a41ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a41f0:{NFSU2_TR(0x6a41f0);
{goto L6a420f;}
}
B6a41f2:L6a41f2:{c.instructions+=2;NFSU2_TR(0x6a41f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a41f6:{NFSU2_TR(0x6a41f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4200;}}
}
B6a41f8:L6a41f8:{c.instructions+=3;NFSU2_TR(0x6a41f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a41fb:{NFSU2_TR(0x6a41fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a41fe:{NFSU2_TR(0x6a41fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4208;}}
}
B6a4200:L6a4200:{c.instructions+=3;NFSU2_TR(0x6a4200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4203:{NFSU2_TR(0x6a4203);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a4206:{NFSU2_TR(0x6a4206);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a420f;}}
}
B6a4208:L6a4208:{c.instructions+=1;NFSU2_TR(0x6a4208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a420f:L6a420f:{c.instructions+=4;NFSU2_TR(0x6a420f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4212:{NFSU2_TR(0x6a4212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4215:{NFSU2_TR(0x6a4215);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4218:{NFSU2_TR(0x6a4218);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4050u);}goto L6a4050;}}
}
B6a421e:L6a421e:{c.instructions+=3;NFSU2_TR(0x6a421e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4221:{NFSU2_TR(0x6a4221);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a4224:{NFSU2_TR(0x6a4224);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a422d;}}
}
B6a4226:L6a4226:{c.instructions+=1;NFSU2_TR(0x6a4226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a422d:L6a422d:{c.instructions+=2;NFSU2_TR(0x6a422d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4231:{NFSU2_TR(0x6a4231);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a429d;}}
}
B6a4233:L6a4233:{c.instructions+=5;NFSU2_TR(0x6a4233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4236:{NFSU2_TR(0x6a4236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4238:{NFSU2_TR(0x6a4238);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a423d:{NFSU2_TR(0x6a423d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4242:{NFSU2_TR(0x6a4242);
if(r1(R+518)){{goto L6a4261;}}
}
B6a4244:L6a4244:{c.instructions+=1;NFSU2_TR(0x6a4244);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4246:L6a4246:{c.instructions+=2;NFSU2_TR(0x6a4246);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a424a:{NFSU2_TR(0x6a424a);
if(r1(R+518)){{goto L6a4254;}}
}
B6a424c:L6a424c:{c.instructions+=3;NFSU2_TR(0x6a424c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a424d:{NFSU2_TR(0x6a424d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6a4250:{NFSU2_TR(0x6a4250);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4246u);}goto L6a4246;}}
}
B6a4252:L6a4252:{c.instructions+=1;NFSU2_TR(0x6a4252);
{goto L6a425b;}
}
B6a4254:L6a4254:{c.instructions+=1;NFSU2_TR(0x6a4254);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a425b:L6a425b:{c.instructions+=2;NFSU2_TR(0x6a425b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a425f:{NFSU2_TR(0x6a425f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a429d;}}
}
B6a4261:L6a4261:{c.instructions+=9;NFSU2_TR(0x6a4261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4264:{NFSU2_TR(0x6a4264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4266:{NFSU2_TR(0x6a4266);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4269:{NFSU2_TR(0x6a4269);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a426c:{NFSU2_TR(0x6a426c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a426f:{NFSU2_TR(0x6a426f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4272:{NFSU2_TR(0x6a4272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4275:{NFSU2_TR(0x6a4275);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a4278:{NFSU2_TR(0x6a4278);
if(r1(R+518)){{goto L6a42ab;}}
}
B6a427a:L6a427a:{c.instructions+=4;NFSU2_TR(0x6a427a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a427c:{NFSU2_TR(0x6a427c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a427e:{NFSU2_TR(0x6a427e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4281:{NFSU2_TR(0x6a4281);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a42ab;}}
}
B6a4283:L6a4283:{c.instructions+=2;NFSU2_TR(0x6a4283);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+24))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a4287:{NFSU2_TR(0x6a4287);
if(r1(R+518)){{goto L6a4291;}}
}
B6a4289:L6a4289:{c.instructions+=3;NFSU2_TR(0x6a4289);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a428a:{NFSU2_TR(0x6a428a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a428d:{NFSU2_TR(0x6a428d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4283u);}goto L6a4283;}}
}
B6a428f:L6a428f:{c.instructions+=1;NFSU2_TR(0x6a428f);
{goto L6a4298;}
}
B6a4291:L6a4291:{c.instructions+=1;NFSU2_TR(0x6a4291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4298:L6a4298:{c.instructions+=2;NFSU2_TR(0x6a4298);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a429b:{NFSU2_TR(0x6a429b);
if(r1(R+518)){{goto L6a42ab;}}
}
B6a429d:L6a429d:{c.instructions+=7;NFSU2_TR(0x6a429d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a429f:{NFSU2_TR(0x6a429f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a42a2:{NFSU2_TR(0x6a42a2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a42a3:{NFSU2_TR(0x6a42a3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a42a4:{NFSU2_TR(0x6a42a4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a42a5:{NFSU2_TR(0x6a42a5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a42a6:{NFSU2_TR(0x6a42a6);
{goto L6a45f8;}
}
B6a42ab:L6a42ab:{c.instructions+=3;NFSU2_TR(0x6a42ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a42af:{NFSU2_TR(0x6a42af);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a42b1:{NFSU2_TR(0x6a42b1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a43b5;}}
}
B6a42b7:L6a42b7:{c.instructions+=4;NFSU2_TR(0x6a42b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a42ba:{NFSU2_TR(0x6a42ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a42bd:{NFSU2_TR(0x6a42bd);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a42c2:{NFSU2_TR(0x6a42c2);
if(r1(R+518)){{goto L6a4317;}}
}
B6a42c4:L6a42c4:{c.instructions+=9;NFSU2_TR(0x6a42c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a42c7:{NFSU2_TR(0x6a42c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a42ca:{NFSU2_TR(0x6a42ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a42cd:{NFSU2_TR(0x6a42cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a42cf:{NFSU2_TR(0x6a42cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a42d2:{NFSU2_TR(0x6a42d2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a42d6:{NFSU2_TR(0x6a42d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a42d9:{NFSU2_TR(0x6a42d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a42dd:{NFSU2_TR(0x6a42dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a43a6;}}
}
B6a42e3:L6a42e3:{c.instructions+=17;NFSU2_TR(0x6a42e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a42e6:{NFSU2_TR(0x6a42e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a42e8:{NFSU2_TR(0x6a42e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a42eb:{NFSU2_TR(0x6a42eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a42ee:{NFSU2_TR(0x6a42ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a42f1:{NFSU2_TR(0x6a42f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a42f4:{NFSU2_TR(0x6a42f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a42f7:{NFSU2_TR(0x6a42f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a42fa:{NFSU2_TR(0x6a42fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a42fd:{NFSU2_TR(0x6a42fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4300:{NFSU2_TR(0x6a4300);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a4303:{NFSU2_TR(0x6a4303);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a4306:{NFSU2_TR(0x6a4306);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a4309:{NFSU2_TR(0x6a4309);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a430c:{NFSU2_TR(0x6a430c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a430f:{NFSU2_TR(0x6a430f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4312:{NFSU2_TR(0x6a4312);
{goto L6a43a6;}
}
B6a4317:L6a4317:{c.instructions+=7;NFSU2_TR(0x6a4317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a431a:{NFSU2_TR(0x6a431a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a431d:{NFSU2_TR(0x6a431d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4320:{NFSU2_TR(0x6a4320);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a4323:{NFSU2_TR(0x6a4323);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4326:{NFSU2_TR(0x6a4326);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a432b:{NFSU2_TR(0x6a432b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a433a;}}
}
B6a432d:L6a432d:{c.instructions+=4;NFSU2_TR(0x6a432d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a4331:{NFSU2_TR(0x6a4331);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a4335:{NFSU2_TR(0x6a4335);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4338:{NFSU2_TR(0x6a4338);
{goto L6a43a6;}
}
B6a433a:L6a433a:{c.instructions+=9;NFSU2_TR(0x6a433a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a433b:{NFSU2_TR(0x6a433b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a433d:{NFSU2_TR(0x6a433d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a433e:{NFSU2_TR(0x6a433e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a4341:{NFSU2_TR(0x6a4341);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6a4345:{NFSU2_TR(0x6a4345);
__builtin_memmove((R+4),(R+12),4);
}
B6a4347:{NFSU2_TR(0x6a4347);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a434a:{NFSU2_TR(0x6a434a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a434d:{NFSU2_TR(0x6a434d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4352ull));
TAIL_STATIC(0x699c39u,699);
}
B6a4352:L6a4352:{c.instructions+=3;NFSU2_TR(0x6a4352);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4355:{NFSU2_TR(0x6a4355);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a4359:{NFSU2_TR(0x6a4359);
if(r1(R+518)){{goto L6a46da;}}
}
B6a435f:L6a435f:{c.instructions+=6;NFSU2_TR(0x6a435f);
__builtin_memmove((R+24),(R+0),4);
}
B6a4361:{NFSU2_TR(0x6a4361);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4364:{NFSU2_TR(0x6a4364);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a4367:{NFSU2_TR(0x6a4367);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a436a:{NFSU2_TR(0x6a436a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a436b:{NFSU2_TR(0x6a436b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4370ull));
TAIL_STATIC(0x699821u,699);
}
B6a4370:L6a4370:{c.instructions+=19;NFSU2_TR(0x6a4370);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4373:{NFSU2_TR(0x6a4373);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4376:{NFSU2_TR(0x6a4376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a4378:{NFSU2_TR(0x6a4378);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a437a:{NFSU2_TR(0x6a437a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a437d:{NFSU2_TR(0x6a437d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4380:{NFSU2_TR(0x6a4380);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4383:{NFSU2_TR(0x6a4383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4386:{NFSU2_TR(0x6a4386);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4389:{NFSU2_TR(0x6a4389);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a438c:{NFSU2_TR(0x6a438c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a438f:{NFSU2_TR(0x6a438f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4392:{NFSU2_TR(0x6a4392);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4395:{NFSU2_TR(0x6a4395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4398:{NFSU2_TR(0x6a4398);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a439b:{NFSU2_TR(0x6a439b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a439d:{NFSU2_TR(0x6a439d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a43a0:{NFSU2_TR(0x6a43a0);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a43a4:{NFSU2_TR(0x6a43a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6a43a6:L6a43a6:{c.instructions+=4;NFSU2_TR(0x6a43a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a43a9:{NFSU2_TR(0x6a43a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a43ac:{NFSU2_TR(0x6a43ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a43af:{NFSU2_TR(0x6a43af);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a42b7u);}goto L6a42b7;}}
}
B6a43b5:L6a43b5:{c.instructions+=4;NFSU2_TR(0x6a43b5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a43b7:{NFSU2_TR(0x6a43b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a43ba:{NFSU2_TR(0x6a43ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a43bd:{NFSU2_TR(0x6a43bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a45ce;}}
}
B6a43c3:L6a43c3:{c.instructions+=7;NFSU2_TR(0x6a43c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a43c6:{NFSU2_TR(0x6a43c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a43c9:{NFSU2_TR(0x6a43c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a43cc:{NFSU2_TR(0x6a43cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a43cf:{NFSU2_TR(0x6a43cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a43d3:{NFSU2_TR(0x6a43d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a43d6:{NFSU2_TR(0x6a43d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a45be;}}
}
B6a43dc:L6a43dc:{c.instructions+=2;NFSU2_TR(0x6a43dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a43e0:{NFSU2_TR(0x6a43e0);
{goto L6a4419;}
}
B6a43e2:L6a43e2:{c.instructions+=7;NFSU2_TR(0x6a43e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a43e5:{NFSU2_TR(0x6a43e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a43e8:{NFSU2_TR(0x6a43e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a43eb:{NFSU2_TR(0x6a43eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a43ee:{NFSU2_TR(0x6a43ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a43f1:{NFSU2_TR(0x6a43f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a43f4:{NFSU2_TR(0x6a43f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4418;}}
}
B6a43f6:L6a43f6:{c.instructions+=7;NFSU2_TR(0x6a43f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a43f9:{NFSU2_TR(0x6a43f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a43fc:{NFSU2_TR(0x6a43fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a43ff:{NFSU2_TR(0x6a43ff);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a4406:{NFSU2_TR(0x6a4406);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a440a:{NFSU2_TR(0x6a440a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a4411:{NFSU2_TR(0x6a4411);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4418:L6a4418:{c.instructions+=1;NFSU2_TR(0x6a4418);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a4419:L6a4419:{c.instructions+=2;NFSU2_TR(0x6a4419);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a441c:{NFSU2_TR(0x6a441c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a43e2u);}goto L6a43e2;}}
}
B6a441e:L6a441e:{c.instructions+=8;NFSU2_TR(0x6a441e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4421:{NFSU2_TR(0x6a4421);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4424:{NFSU2_TR(0x6a4424);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4427:{NFSU2_TR(0x6a4427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a4429:{NFSU2_TR(0x6a4429);
__builtin_memmove((R+0),(R+4),4);
}
B6a442b:{NFSU2_TR(0x6a442b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a4430:{NFSU2_TR(0x6a4430);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6a4435:{NFSU2_TR(0x6a4435);
if(r1(R+512)){{goto L6a4586;}}
}
B6a443b:L6a443b:{c.instructions+=2;NFSU2_TR(0x6a443b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4440:{NFSU2_TR(0x6a4440);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a4586;}}
}
B6a4446:L6a4446:{c.instructions+=8;NFSU2_TR(0x6a4446);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4449:{NFSU2_TR(0x6a4449);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a444b:{NFSU2_TR(0x6a444b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a4451:{NFSU2_TR(0x6a4451);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a4451);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a4451);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a4453:{NFSU2_TR(0x6a4453);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a4455:{NFSU2_TR(0x6a4455);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4458:{NFSU2_TR(0x6a4458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a445b:{NFSU2_TR(0x6a445b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4496;}}
}
B6a445d:L6a445d:{c.instructions+=1;NFSU2_TR(0x6a445d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4460:L6a4460:{c.instructions+=3;NFSU2_TR(0x6a4460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4464:{NFSU2_TR(0x6a4464);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4466:{NFSU2_TR(0x6a4466);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4490;}}
}
B6a4468:L6a4468:{c.instructions+=2;NFSU2_TR(0x6a4468);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a446f:{NFSU2_TR(0x6a446f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4472:L6a4472:{c.instructions+=2;NFSU2_TR(0x6a4472);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a4474:{NFSU2_TR(0x6a4474);
if(r1(R+518)){{goto L6a4486;}}
}
B6a4476:L6a4476:{c.instructions+=5;NFSU2_TR(0x6a4476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4479:{NFSU2_TR(0x6a4479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a447c:{NFSU2_TR(0x6a447c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a447f:{NFSU2_TR(0x6a447f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a4482:{NFSU2_TR(0x6a4482);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4472u);}goto L6a4472;}}
}
B6a4484:L6a4484:{c.instructions+=1;NFSU2_TR(0x6a4484);
{goto L6a4490;}
}
B6a4486:L6a4486:{c.instructions+=2;NFSU2_TR(0x6a4486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4489:{NFSU2_TR(0x6a4489);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff40ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a4490:L6a4490:{c.instructions+=3;NFSU2_TR(0x6a4490);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a4491:{NFSU2_TR(0x6a4491);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a4494:{NFSU2_TR(0x6a4494);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4460u);}goto L6a4460;}}
}
B6a4496:L6a4496:{c.instructions+=2;NFSU2_TR(0x6a4496);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4498:{NFSU2_TR(0x6a4498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a449dull));
TAIL_STATIC(0x699317u,699);
}
B6a449d:L6a449d:{c.instructions+=2;NFSU2_TR(0x6a449d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a449f:{NFSU2_TR(0x6a449f);
if(r1(R+518)){{goto L6a44ac;}}
}
B6a44a1:L6a44a1:{c.instructions+=2;NFSU2_TR(0x6a44a1);
__builtin_memmove((R+4),(R+0),4);
}
B6a44a3:{NFSU2_TR(0x6a44a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a44a8ull));
TAIL_STATIC(0x698e7du,698);
}
B6a44a8:L6a44a8:{c.instructions+=2;NFSU2_TR(0x6a44a8);
__builtin_memmove((R+28),(R+0),4);
}
B6a44aa:{NFSU2_TR(0x6a44aa);
{goto L6a44ae;}
}
B6a44ac:L6a44ac:{c.instructions+=1;NFSU2_TR(0x6a44ac);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a44ae:L6a44ae:{c.instructions+=2;NFSU2_TR(0x6a44ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a44b0:{NFSU2_TR(0x6a44b0);
if(r1(R+518)){{goto L6a46da;}}
}
B6a44b6:L6a44b6:{c.instructions+=12;NFSU2_TR(0x6a44b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a44b9:{NFSU2_TR(0x6a44b9);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6a44bd:{NFSU2_TR(0x6a44bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a44bf:{NFSU2_TR(0x6a44bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a44c2:{NFSU2_TR(0x6a44c2);
__builtin_memmove((R+4),(R+28),4);
}
B6a44c4:{NFSU2_TR(0x6a44c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a44c5:{NFSU2_TR(0x6a44c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a44c7:{NFSU2_TR(0x6a44c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6a44ca:{NFSU2_TR(0x6a44ca);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a44cf:{NFSU2_TR(0x6a44cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B6a44d1:{NFSU2_TR(0x6a44d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a44d2:{NFSU2_TR(0x6a44d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a44d7ull));
TAIL_STATIC(0x699362u,699);
}
B6a44d7:L6a44d7:{c.instructions+=3;NFSU2_TR(0x6a44d7);
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
B6a44d9:{NFSU2_TR(0x6a44d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a44dc:{NFSU2_TR(0x6a44dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a46e6;}}
}
B6a44e2:L6a44e2:{c.instructions+=3;NFSU2_TR(0x6a44e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a44e3:{NFSU2_TR(0x6a44e3);
__builtin_memmove((R+4),(R+28),4);
}
B6a44e5:{NFSU2_TR(0x6a44e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a44eaull));
TAIL_STATIC(0x698eb3u,698);
}
B6a44ea:L6a44ea:{c.instructions+=3;NFSU2_TR(0x6a44ea);
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
B6a44ec:{NFSU2_TR(0x6a44ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a44ef:{NFSU2_TR(0x6a44ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a46e6;}}
}
B6a44f5:L6a44f5:{c.instructions+=3;NFSU2_TR(0x6a44f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a44f9:{NFSU2_TR(0x6a44f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a44fd:{NFSU2_TR(0x6a44fd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4561;}}
}
B6a44ff:L6a44ff:{c.instructions+=8;NFSU2_TR(0x6a44ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4502:{NFSU2_TR(0x6a4502);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4505:{NFSU2_TR(0x6a4505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4509:{NFSU2_TR(0x6a4509);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a450c:{NFSU2_TR(0x6a450c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4510:{NFSU2_TR(0x6a4510);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6a4517:{NFSU2_TR(0x6a4517);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a451a:{NFSU2_TR(0x6a451a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4556;}}
}
B6a451c:L6a451c:{c.instructions+=3;NFSU2_TR(0x6a451c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff40ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a4523:{NFSU2_TR(0x6a4523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4526:{NFSU2_TR(0x6a4526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4529:L6a4529:{c.instructions+=15;NFSU2_TR(0x6a4529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a452c:{NFSU2_TR(0x6a452c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6a4530:{NFSU2_TR(0x6a4530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6a4533:{NFSU2_TR(0x6a4533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4536:{NFSU2_TR(0x6a4536);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4539:{NFSU2_TR(0x6a4539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a453c:{NFSU2_TR(0x6a453c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a453f:{NFSU2_TR(0x6a453f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4542:{NFSU2_TR(0x6a4542);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a4545:{NFSU2_TR(0x6a4545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4548:{NFSU2_TR(0x6a4548);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a454b:{NFSU2_TR(0x6a454b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a454e:{NFSU2_TR(0x6a454e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4551:{NFSU2_TR(0x6a4551);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4554:{NFSU2_TR(0x6a4554);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4529u);}goto L6a4529;}}
}
B6a4556:L6a4556:{c.instructions+=4;NFSU2_TR(0x6a4556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4559:{NFSU2_TR(0x6a4559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a455c:{NFSU2_TR(0x6a455c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a455f:{NFSU2_TR(0x6a455f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a44ffu);}goto L6a44ff;}}
}
B6a4561:L6a4561:{c.instructions+=6;NFSU2_TR(0x6a4561);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4564:{NFSU2_TR(0x6a4564);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4567:{NFSU2_TR(0x6a4567);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a456a:{NFSU2_TR(0x6a456a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a456d:{NFSU2_TR(0x6a456d);
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
B6a456f:{NFSU2_TR(0x6a456f);
if(r1(R+518)){{goto L6a4578;}}
}
B6a4571:L6a4571:{c.instructions+=2;NFSU2_TR(0x6a4571);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4573:{NFSU2_TR(0x6a4573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4578ull));
TAIL_STATIC(0x6739efu,673);
}
B6a4578:L6a4578:{c.instructions+=5;NFSU2_TR(0x6a4578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a457b:{NFSU2_TR(0x6a457b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a457e:{NFSU2_TR(0x6a457e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4581:{NFSU2_TR(0x6a4581);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a4584:{NFSU2_TR(0x6a4584);
{goto L6a45be;}
}
B6a4586:L6a4586:{c.instructions+=3;NFSU2_TR(0x6a4586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a458a:{NFSU2_TR(0x6a458a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a458e:{NFSU2_TR(0x6a458e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a45be;}}
}
B6a4590:L6a4590:{c.instructions+=5;NFSU2_TR(0x6a4590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4593:{NFSU2_TR(0x6a4593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4596:{NFSU2_TR(0x6a4596);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a4599:{NFSU2_TR(0x6a4599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a459b:{NFSU2_TR(0x6a459b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a459d:L6a459d:{c.instructions+=3;NFSU2_TR(0x6a459d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a45a0:{NFSU2_TR(0x6a45a0);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a45a3:{NFSU2_TR(0x6a45a3);
if(r1(R+518)){{goto L6a45ad;}}
}
B6a45a5:L6a45a5:{c.instructions+=3;NFSU2_TR(0x6a45a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a45a6:{NFSU2_TR(0x6a45a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a45a9:{NFSU2_TR(0x6a45a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a459du);}goto L6a459d;}}
}
B6a45ab:L6a45ab:{c.instructions+=1;NFSU2_TR(0x6a45ab);
{goto L6a45b3;}
}
B6a45ad:L6a45ad:{c.instructions+=2;NFSU2_TR(0x6a45ad);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a45b1:{NFSU2_TR(0x6a45b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a45b3:L6a45b3:{c.instructions+=4;NFSU2_TR(0x6a45b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a45b6:{NFSU2_TR(0x6a45b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a45b9:{NFSU2_TR(0x6a45b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a45bc:{NFSU2_TR(0x6a45bc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4590u);}goto L6a4590;}}
}
B6a45be:L6a45be:{c.instructions+=5;NFSU2_TR(0x6a45be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a45c1:{NFSU2_TR(0x6a45c1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a45c2:{NFSU2_TR(0x6a45c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a45c5:{NFSU2_TR(0x6a45c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a45c8:{NFSU2_TR(0x6a45c8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a43c3u);}goto L6a43c3;}}
}
B6a45ce:L6a45ce:{c.instructions+=3;NFSU2_TR(0x6a45ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a45d0:{NFSU2_TR(0x6a45d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a45d3:{NFSU2_TR(0x6a45d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a45f8;}}
}
B6a45d5:L6a45d5:{c.instructions+=11;NFSU2_TR(0x6a45d5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a45d9:{NFSU2_TR(0x6a45d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a45dc:{NFSU2_TR(0x6a45dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a45df:{NFSU2_TR(0x6a45df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a45e2:{NFSU2_TR(0x6a45e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a45e5:{NFSU2_TR(0x6a45e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a45e8:{NFSU2_TR(0x6a45e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a45eb:{NFSU2_TR(0x6a45eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a45ec:{NFSU2_TR(0x6a45ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a45ef:{NFSU2_TR(0x6a45ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a45f6:{NFSU2_TR(0x6a45f6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a45d5u);}goto L6a45d5;}}
}
B6a45f8:L6a45f8:{c.instructions+=5;NFSU2_TR(0x6a45f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a45fb:{NFSU2_TR(0x6a45fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a45fe:{NFSU2_TR(0x6a45fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4601:{NFSU2_TR(0x6a4601);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4602:{NFSU2_TR(0x6a4602);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4605:L6a4605:{c.instructions+=1;NFSU2_TR(0x6a4605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a460aull));
TAIL_STATIC(0x698ed2u,698);
}
B6a460a:L6a460a:{c.instructions+=3;NFSU2_TR(0x6a460a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a460c:{NFSU2_TR(0x6a460c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a460f:{NFSU2_TR(0x6a460f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4031u);}goto L6a4031;}}
}
B6a4615:L6a4615:{c.instructions+=5;NFSU2_TR(0x6a4615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4618:{NFSU2_TR(0x6a4618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a461a:{NFSU2_TR(0x6a461a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a4620:{NFSU2_TR(0x6a4620);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4626:{NFSU2_TR(0x6a4626);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a46cb;}}
}
B6a462c:L6a462c:{c.instructions+=5;NFSU2_TR(0x6a462c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a462e:{NFSU2_TR(0x6a462e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a4630:{NFSU2_TR(0x6a4630);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4633:{NFSU2_TR(0x6a4633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4636:{NFSU2_TR(0x6a4636);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a46ad;}}
}
B6a4638:L6a4638:{c.instructions+=2;NFSU2_TR(0x6a4638);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6a463d:{NFSU2_TR(0x6a463d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4657;}}
}
B6a463f:L6a463f:{c.instructions+=9;NFSU2_TR(0x6a463f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4642:{NFSU2_TR(0x6a4642);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4645:{NFSU2_TR(0x6a4645);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a4648:{NFSU2_TR(0x6a4648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a464b:{NFSU2_TR(0x6a464b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a464e:{NFSU2_TR(0x6a464e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4651:{NFSU2_TR(0x6a4651);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a4654:{NFSU2_TR(0x6a4654);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a4655:{NFSU2_TR(0x6a4655);
{goto L6a46a1;}
}
B6a4657:L6a4657:{c.instructions+=9;NFSU2_TR(0x6a4657);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a465a:{NFSU2_TR(0x6a465a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a465d:{NFSU2_TR(0x6a465d);
__builtin_memmove((R+4),(R+8),4);
}
B6a465f:{NFSU2_TR(0x6a465f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4662:{NFSU2_TR(0x6a4662);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a4665:{NFSU2_TR(0x6a4665);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a4668:{NFSU2_TR(0x6a4668);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a466c:{NFSU2_TR(0x6a466c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a466f:{NFSU2_TR(0x6a466f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a46a1;}}
}
B6a4671:L6a4671:{c.instructions+=16;NFSU2_TR(0x6a4671);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4674:{NFSU2_TR(0x6a4674);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a4677:{NFSU2_TR(0x6a4677);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a467a:{NFSU2_TR(0x6a467a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a467d:{NFSU2_TR(0x6a467d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4680:{NFSU2_TR(0x6a4680);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4683:{NFSU2_TR(0x6a4683);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4686:{NFSU2_TR(0x6a4686);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a4689:{NFSU2_TR(0x6a4689);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a468c:{NFSU2_TR(0x6a468c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a468f:{NFSU2_TR(0x6a468f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4692:{NFSU2_TR(0x6a4692);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a4695:{NFSU2_TR(0x6a4695);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4698:{NFSU2_TR(0x6a4698);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a469b:{NFSU2_TR(0x6a469b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a469e:{NFSU2_TR(0x6a469e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a46a1:L6a46a1:{c.instructions+=5;NFSU2_TR(0x6a46a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a46a4:{NFSU2_TR(0x6a46a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a46a5:{NFSU2_TR(0x6a46a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a46a8:{NFSU2_TR(0x6a46a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a46ab:{NFSU2_TR(0x6a46ab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4638u);}goto L6a4638;}}
}
B6a46ad:L6a46ad:{c.instructions+=10;NFSU2_TR(0x6a46ad);
__builtin_memmove((R+24),(R+8),4);
}
B6a46af:{NFSU2_TR(0x6a46af);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6a46b5:{NFSU2_TR(0x6a46b5);
__builtin_memmove((R+4),(R+8),4);
}
B6a46b7:{NFSU2_TR(0x6a46b7);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10000000ull))));
}
B6a46bd:{NFSU2_TR(0x6a46bd);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B6a46bf:{NFSU2_TR(0x6a46bf);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6a46c1:{NFSU2_TR(0x6a46c1);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B6a46c3:{NFSU2_TR(0x6a46c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a46c5:{NFSU2_TR(0x6a46c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a46c8:{NFSU2_TR(0x6a46c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a46cb:L6a46cb:{c.instructions+=2;NFSU2_TR(0x6a46cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a46cf:{NFSU2_TR(0x6a46cf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6a3db1u,6a3);}
}
B6a46d5:L6a46d5:{c.instructions+=1;NFSU2_TR(0x6a46d5);
TAIL_STATIC(0x6a3d9cu,6a3);
}
B6a46da:L6a46da:{c.instructions+=2;NFSU2_TR(0x6a46da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a46e1:{NFSU2_TR(0x6a46e1);
TAIL_STATIC(0x6a3da0u,6a3);
}
B6a46e6:L6a46e6:{c.instructions+=3;NFSU2_TR(0x6a46e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a46e8:{NFSU2_TR(0x6a46e8);
__builtin_memmove((R+4),(R+28),4);
}
B6a46ea:{NFSU2_TR(0x6a46ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a46efull));
TAIL_STATIC(0x6739efu,673);
}
B6a46ef:L6a46ef:{c.instructions+=1;NFSU2_TR(0x6a46ef);
TAIL_STATIC(0x6a3da0u,6a3);
}
B6a46f4:L6a46f4:{c.instructions+=13;NFSU2_TR(0x6a46f4);
__builtin_memmove((R+28),(R+28),4);
}
B6a46f6:{NFSU2_TR(0x6a46f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a46f7:{NFSU2_TR(0x6a46f7);
__builtin_memmove((R+20),(R+16),4);
}
B6a46f9:{NFSU2_TR(0x6a46f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6a46fc:{NFSU2_TR(0x6a46fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4700:{NFSU2_TR(0x6a4700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4704:{NFSU2_TR(0x6a4704);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4705:{NFSU2_TR(0x6a4705);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4706:{NFSU2_TR(0x6a4706);
__builtin_memmove((R+24),(R+4),4);
}
B6a4708:{NFSU2_TR(0x6a4708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a470b:{NFSU2_TR(0x6a470b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a470d:{NFSU2_TR(0x6a470d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a470e:{NFSU2_TR(0x6a470e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4732;}}
}
B6a4710:L6a4710:{c.instructions+=2;NFSU2_TR(0x6a4710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4716:{NFSU2_TR(0x6a4716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4719:L6a4719:{c.instructions+=3;NFSU2_TR(0x6a4719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a471b:{NFSU2_TR(0x6a471b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a471e:{NFSU2_TR(0x6a471e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a472c;}}
}
B6a4720:L6a4720:{c.instructions+=3;NFSU2_TR(0x6a4720);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4723:{NFSU2_TR(0x6a4723);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4726:{NFSU2_TR(0x6a4726);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a472c;}}
}
B6a4728:L6a4728:{c.instructions+=2;NFSU2_TR(0x6a4728);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a4729:{NFSU2_TR(0x6a4729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a472c:L6a472c:{c.instructions+=3;NFSU2_TR(0x6a472c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a472f:{NFSU2_TR(0x6a472f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a4730:{NFSU2_TR(0x6a4730);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4719u);}goto L6a4719;}}
}
B6a4732:L6a4732:{c.instructions+=2;NFSU2_TR(0x6a4732);
__builtin_memmove((R+4),(R+24),4);
}
B6a4734:{NFSU2_TR(0x6a4734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4739ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a4739:L6a4739:{c.instructions+=3;NFSU2_TR(0x6a4739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a473d:{NFSU2_TR(0x6a473d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4741:{NFSU2_TR(0x6a4741);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4835;}}
}
B6a4747:L6a4747:{c.instructions+=7;NFSU2_TR(0x6a4747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a474a:{NFSU2_TR(0x6a474a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a474d:{NFSU2_TR(0x6a474d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a4750:{NFSU2_TR(0x6a4750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a4752:{NFSU2_TR(0x6a4752);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4758:{NFSU2_TR(0x6a4758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a475b:{NFSU2_TR(0x6a475b);
if(r1(R+518)){{goto L6a4826;}}
}
B6a4761:L6a4761:{c.instructions+=9;NFSU2_TR(0x6a4761);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4764:{NFSU2_TR(0x6a4764);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a476a:{NFSU2_TR(0x6a476a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a476c:{NFSU2_TR(0x6a476c);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a476c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a476c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a476e:{NFSU2_TR(0x6a476e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4772:{NFSU2_TR(0x6a4772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4776:{NFSU2_TR(0x6a4776);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4778:{NFSU2_TR(0x6a4778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a477b:{NFSU2_TR(0x6a477b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4826;}}
}
B6a4781:L6a4781:{c.instructions+=5;NFSU2_TR(0x6a4781);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4784:{NFSU2_TR(0x6a4784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4785:{NFSU2_TR(0x6a4785);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4788:{NFSU2_TR(0x6a4788);
__builtin_memmove((R+4),(R+12),4);
}
B6a478a:{NFSU2_TR(0x6a478a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a478full));
TAIL_STATIC(0x698ed2u,698);
}
B6a478f:L6a478f:{c.instructions+=8;NFSU2_TR(0x6a478f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4792:{NFSU2_TR(0x6a4792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4798:{NFSU2_TR(0x6a4798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a479b:{NFSU2_TR(0x6a479b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a479e:{NFSU2_TR(0x6a479e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a47a0:{NFSU2_TR(0x6a47a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a47a3:{NFSU2_TR(0x6a47a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a47a6:{NFSU2_TR(0x6a47a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4817;}}
}
B6a47a8:L6a47a8:{c.instructions+=3;NFSU2_TR(0x6a47a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a47ac:{NFSU2_TR(0x6a47ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a47b3:{NFSU2_TR(0x6a47b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a47dc;}}
}
B6a47b5:L6a47b5:{c.instructions+=6;NFSU2_TR(0x6a47b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a47b8:{NFSU2_TR(0x6a47b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a47bb:{NFSU2_TR(0x6a47bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a47be:{NFSU2_TR(0x6a47be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a47c1:{NFSU2_TR(0x6a47c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a47c4:{NFSU2_TR(0x6a47c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a47ce;}}
}
B6a47c6:L6a47c6:{c.instructions+=3;NFSU2_TR(0x6a47c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a47c9:{NFSU2_TR(0x6a47c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a47cc:{NFSU2_TR(0x6a47cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a47d9;}}
}
B6a47ce:L6a47ce:{c.instructions+=4;NFSU2_TR(0x6a47ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a47d1:{NFSU2_TR(0x6a47d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a47d4:{NFSU2_TR(0x6a47d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a47d7:{NFSU2_TR(0x6a47d7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a47b5u);}goto L6a47b5;}}
}
B6a47d9:L6a47d9:{c.instructions+=1;NFSU2_TR(0x6a47d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a47dc:L6a47dc:{c.instructions+=3;NFSU2_TR(0x6a47dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a47df:{NFSU2_TR(0x6a47df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a47e2:{NFSU2_TR(0x6a47e2);
if(r1(R+518)){{goto L6a4817;}}
}
B6a47e4:L6a47e4:{c.instructions+=3;NFSU2_TR(0x6a47e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a47e6:{NFSU2_TR(0x6a47e6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a47e8:{NFSU2_TR(0x6a47e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4817;}}
}
B6a47ea:L6a47ea:{c.instructions+=7;NFSU2_TR(0x6a47ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a47ed:{NFSU2_TR(0x6a47ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a47f0:{NFSU2_TR(0x6a47f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a47f3:{NFSU2_TR(0x6a47f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a47f6:{NFSU2_TR(0x6a47f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a47fc:{NFSU2_TR(0x6a47fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a47ff:{NFSU2_TR(0x6a47ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4811;}}
}
B6a4801:L6a4801:{c.instructions+=4;NFSU2_TR(0x6a4801);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4804:{NFSU2_TR(0x6a4804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4807:{NFSU2_TR(0x6a4807);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a480a:{NFSU2_TR(0x6a480a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4811:L6a4811:{c.instructions+=3;NFSU2_TR(0x6a4811);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a4812:{NFSU2_TR(0x6a4812);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a4815:{NFSU2_TR(0x6a4815);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a47eau);}goto L6a47ea;}}
}
B6a4817:L6a4817:{c.instructions+=4;NFSU2_TR(0x6a4817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a481a:{NFSU2_TR(0x6a481a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a481d:{NFSU2_TR(0x6a481d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4820:{NFSU2_TR(0x6a4820);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4781u);}goto L6a4781;}}
}
B6a4826:L6a4826:{c.instructions+=4;NFSU2_TR(0x6a4826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4829:{NFSU2_TR(0x6a4829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a482c:{NFSU2_TR(0x6a482c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a482f:{NFSU2_TR(0x6a482f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4747u);}goto L6a4747;}}
}
B6a4835:L6a4835:{c.instructions+=3;NFSU2_TR(0x6a4835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4839:{NFSU2_TR(0x6a4839);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a483d:{NFSU2_TR(0x6a483d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a492f;}}
}
B6a4843:L6a4843:{c.instructions+=5;NFSU2_TR(0x6a4843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4846:{NFSU2_TR(0x6a4846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4849:{NFSU2_TR(0x6a4849);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a484c:{NFSU2_TR(0x6a484c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a4852:{NFSU2_TR(0x6a4852);
if(r1(R+518)){{goto L6a4920;}}
}
B6a4858:L6a4858:{c.instructions+=2;NFSU2_TR(0x6a4858);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a485c:{NFSU2_TR(0x6a485c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4920;}}
}
B6a4862:L6a4862:{c.instructions+=7;NFSU2_TR(0x6a4862);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a4865:{NFSU2_TR(0x6a4865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4868:{NFSU2_TR(0x6a4868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a486a:{NFSU2_TR(0x6a486a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a486d:{NFSU2_TR(0x6a486d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4873:{NFSU2_TR(0x6a4873);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4876:{NFSU2_TR(0x6a4876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4920;}}
}
B6a487c:L6a487c:{c.instructions+=4;NFSU2_TR(0x6a487c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a487f:{NFSU2_TR(0x6a487f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a4881:{NFSU2_TR(0x6a4881);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4884:{NFSU2_TR(0x6a4884);
if(r1(R+518)){{goto L6a48d6;}}
}
B6a4886:L6a4886:{c.instructions+=2;NFSU2_TR(0x6a4886);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4888:{NFSU2_TR(0x6a4888);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a48a3;}}
}
B6a488a:L6a488a:{c.instructions+=1;NFSU2_TR(0x6a488a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a488d:L6a488d:{c.instructions+=5;NFSU2_TR(0x6a488d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a4890:{NFSU2_TR(0x6a4890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a4892:{NFSU2_TR(0x6a4892);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a4895:{NFSU2_TR(0x6a4895);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4898:{NFSU2_TR(0x6a4898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a48a3;}}
}
B6a489a:L6a489a:{c.instructions+=4;NFSU2_TR(0x6a489a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a489e:{NFSU2_TR(0x6a489e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a489f:{NFSU2_TR(0x6a489f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6a48a1:{NFSU2_TR(0x6a48a1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a488du);}goto L6a488d;}}
}
B6a48a3:L6a48a3:{c.instructions+=2;NFSU2_TR(0x6a48a3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a48a5:{NFSU2_TR(0x6a48a5);
if(r1(R+518)){{goto L6a4920;}}
}
B6a48a7:L6a48a7:{c.instructions+=3;NFSU2_TR(0x6a48a7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a48a9:{NFSU2_TR(0x6a48a9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a48ab:{NFSU2_TR(0x6a48ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4916;}}
}
B6a48ad:L6a48ad:{c.instructions+=14;NFSU2_TR(0x6a48ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a48b0:{NFSU2_TR(0x6a48b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a48b3:{NFSU2_TR(0x6a48b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a48b6:{NFSU2_TR(0x6a48b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a48b9:{NFSU2_TR(0x6a48b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a48bc:{NFSU2_TR(0x6a48bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a48bf:{NFSU2_TR(0x6a48bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a48c2:{NFSU2_TR(0x6a48c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a48c5:{NFSU2_TR(0x6a48c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a48c8:{NFSU2_TR(0x6a48c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a48cb:{NFSU2_TR(0x6a48cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a48ce:{NFSU2_TR(0x6a48ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a48cf:{NFSU2_TR(0x6a48cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a48d2:{NFSU2_TR(0x6a48d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a48adu);}goto L6a48ad;}}
}
B6a48d4:L6a48d4:{c.instructions+=1;NFSU2_TR(0x6a48d4);
{goto L6a4916;}
}
B6a48d6:L6a48d6:{c.instructions+=3;NFSU2_TR(0x6a48d6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a48d8:{NFSU2_TR(0x6a48d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a48db:{NFSU2_TR(0x6a48db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a48f3;}}
}
B6a48dd:L6a48dd:{c.instructions+=4;NFSU2_TR(0x6a48dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a48df:{NFSU2_TR(0x6a48df);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a48e2:{NFSU2_TR(0x6a48e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a48e6:{NFSU2_TR(0x6a48e6);
if(r1(R+518)){{goto L6a48f3;}}
}
B6a48e8:L6a48e8:{c.instructions+=4;NFSU2_TR(0x6a48e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a48eb:{NFSU2_TR(0x6a48eb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6a48ee:{NFSU2_TR(0x6a48ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a48f1:{NFSU2_TR(0x6a48f1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a48ddu);}goto L6a48dd;}}
}
B6a48f3:L6a48f3:{c.instructions+=2;NFSU2_TR(0x6a48f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a48f6:{NFSU2_TR(0x6a48f6);
if(r1(R+512)){{goto L6a4920;}}
}
B6a48f8:L6a48f8:{c.instructions+=3;NFSU2_TR(0x6a48f8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a48fa:{NFSU2_TR(0x6a48fa);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a48fc:{NFSU2_TR(0x6a48fc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4916;}}
}
B6a48fe:L6a48fe:{c.instructions+=9;NFSU2_TR(0x6a48fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4901:{NFSU2_TR(0x6a4901);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a4904:{NFSU2_TR(0x6a4904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4907:{NFSU2_TR(0x6a4907);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a490a:{NFSU2_TR(0x6a490a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a490d:{NFSU2_TR(0x6a490d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a490e:{NFSU2_TR(0x6a490e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4911:{NFSU2_TR(0x6a4911);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a4914:{NFSU2_TR(0x6a4914);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a48feu);}goto L6a48fe;}}
}
B6a4916:L6a4916:{c.instructions+=2;NFSU2_TR(0x6a4916);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4919:{NFSU2_TR(0x6a4919);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4920:L6a4920:{c.instructions+=4;NFSU2_TR(0x6a4920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4923:{NFSU2_TR(0x6a4923);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4926:{NFSU2_TR(0x6a4926);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4929:{NFSU2_TR(0x6a4929);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4843u);}goto L6a4843;}}
}
B6a492f:L6a492f:{c.instructions+=8;NFSU2_TR(0x6a492f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4931:{NFSU2_TR(0x6a4931);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
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
B6a4934:{NFSU2_TR(0x6a4934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a4935:{NFSU2_TR(0x6a4935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a4936:{NFSU2_TR(0x6a4936);
__builtin_memmove((R+0),(R+518),1);
}
B6a4939:{NFSU2_TR(0x6a4939);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a493a:{NFSU2_TR(0x6a493a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a493b:{NFSU2_TR(0x6a493b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a493e:L6a493e:{c.instructions+=13;NFSU2_TR(0x6a493e);
__builtin_memmove((R+28),(R+28),4);
}
B6a4940:{NFSU2_TR(0x6a4940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4941:{NFSU2_TR(0x6a4941);
__builtin_memmove((R+20),(R+16),4);
}
B6a4943:{NFSU2_TR(0x6a4943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x70ull))));
}
B6a4946:{NFSU2_TR(0x6a4946);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4947:{NFSU2_TR(0x6a4947);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4948:{NFSU2_TR(0x6a4948);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4949:{NFSU2_TR(0x6a4949);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a494b:{NFSU2_TR(0x6a494b);
__builtin_memmove((R+12),(R+4),4);
}
B6a494d:{NFSU2_TR(0x6a494d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4950:{NFSU2_TR(0x6a4950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4953:{NFSU2_TR(0x6a4953);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4956:{NFSU2_TR(0x6a4956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a495bull));
TAIL_STATIC(0x69a74eu,69a);
}
B6a495b:L6a495b:{c.instructions+=3;NFSU2_TR(0x6a495b);
__builtin_memmove((R+24),(R+0),4);
}
B6a495d:{NFSU2_TR(0x6a495d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6a495f:{NFSU2_TR(0x6a495f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a4c58;}}
}
B6a4965:L6a4965:{c.instructions+=2;NFSU2_TR(0x6a4965);
__builtin_memmove((R+4),(R+12),4);
}
B6a4967:{NFSU2_TR(0x6a4967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a496cull));
TAIL_STATIC(0x69e573u,69e);
}
B6a496c:L6a496c:{c.instructions+=3;NFSU2_TR(0x6a496c);
__builtin_memmove((R+24),(R+0),4);
}
B6a496e:{NFSU2_TR(0x6a496e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6a4970:{NFSU2_TR(0x6a4970);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a4c58;}}
}
B6a4976:L6a4976:{c.instructions+=3;NFSU2_TR(0x6a4976);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4979:{NFSU2_TR(0x6a4979);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a497e:{NFSU2_TR(0x6a497e);
if(r1(R+518)){{goto L6a49fc;}}
}
B6a4980:L6a4980:{c.instructions+=3;NFSU2_TR(0x6a4980);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4982:{NFSU2_TR(0x6a4982);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4985:{NFSU2_TR(0x6a4985);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4996;}}
}
B6a4987:L6a4987:{c.instructions+=6;NFSU2_TR(0x6a4987);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a498a:{NFSU2_TR(0x6a498a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a498d:{NFSU2_TR(0x6a498d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a498e:{NFSU2_TR(0x6a498e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4991:{NFSU2_TR(0x6a4991);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4994:{NFSU2_TR(0x6a4994);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4987u);}goto L6a4987;}}
}
B6a4996:L6a4996:{c.instructions+=1;NFSU2_TR(0x6a4996);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4999:L6a4999:{c.instructions+=2;NFSU2_TR(0x6a4999);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a499b:{NFSU2_TR(0x6a499b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a49fa;}}
}
B6a499d:L6a499d:{c.instructions+=8;NFSU2_TR(0x6a499d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a49a0:{NFSU2_TR(0x6a49a0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6a49a1:{NFSU2_TR(0x6a49a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a49a4:{NFSU2_TR(0x6a49a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a49a6:{NFSU2_TR(0x6a49a6);
__builtin_memmove((R+24),(R+4),4);
}
B6a49a8:{NFSU2_TR(0x6a49a8);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6a49ae:{NFSU2_TR(0x6a49ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a49b1:{NFSU2_TR(0x6a49b1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4999u);}goto L6a4999;}}
}
B6a49b3:L6a49b3:{c.instructions+=4;NFSU2_TR(0x6a49b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a49b6:{NFSU2_TR(0x6a49b6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6a49bc:{NFSU2_TR(0x6a49bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a49c2:{NFSU2_TR(0x6a49c2);
if(r1(R+518)){{goto L6a49cc;}}
}
B6a49c4:L6a49c4:{c.instructions+=2;NFSU2_TR(0x6a49c4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a49ca:{NFSU2_TR(0x6a49ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a49d4;}}
}
B6a49cc:L6a49cc:{c.instructions+=4;NFSU2_TR(0x6a49cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a49cf:{NFSU2_TR(0x6a49cf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a49d0:{NFSU2_TR(0x6a49d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a49d3:{NFSU2_TR(0x6a49d3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a49d4:L6a49d4:{c.instructions+=3;NFSU2_TR(0x6a49d4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a49d6:{NFSU2_TR(0x6a49d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a49d9:{NFSU2_TR(0x6a49d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4999u);}goto L6a4999;}}
}
B6a49db:L6a49db:{c.instructions+=6;NFSU2_TR(0x6a49db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a49de:{NFSU2_TR(0x6a49de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a49e1:{NFSU2_TR(0x6a49e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a49e4:{NFSU2_TR(0x6a49e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a49e7:{NFSU2_TR(0x6a49e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a49ea:{NFSU2_TR(0x6a49ea);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a49ef;}}
}
B6a49ec:L6a49ec:{c.instructions+=1;NFSU2_TR(0x6a49ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a49ef:L6a49ef:{c.instructions+=3;NFSU2_TR(0x6a49ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a49f0:{NFSU2_TR(0x6a49f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a49f3:{NFSU2_TR(0x6a49f3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a49dbu);}goto L6a49db;}}
}
B6a49f5:L6a49f5:{c.instructions+=2;NFSU2_TR(0x6a49f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a49f8:{NFSU2_TR(0x6a49f8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4999u);}goto L6a4999;}
}
B6a49fa:L6a49fa:{c.instructions+=1;NFSU2_TR(0x6a49fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a49fc:L6a49fc:{c.instructions+=4;NFSU2_TR(0x6a49fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a49ff:{NFSU2_TR(0x6a49ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4a02:{NFSU2_TR(0x6a4a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4a05:{NFSU2_TR(0x6a4a05);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4a81;}}
}
B6a4a07:L6a4a07:{c.instructions+=7;NFSU2_TR(0x6a4a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4a0a:{NFSU2_TR(0x6a4a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4a0d:{NFSU2_TR(0x6a4a0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4a10:{NFSU2_TR(0x6a4a10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a4a12:{NFSU2_TR(0x6a4a12);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6a4a18:{NFSU2_TR(0x6a4a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4a1b:{NFSU2_TR(0x6a4a1b);
if(r1(R+518)){{goto L6a4a76;}}
}
B6a4a1d:L6a4a1d:{c.instructions+=10;NFSU2_TR(0x6a4a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4a20:{NFSU2_TR(0x6a4a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a4a22:{NFSU2_TR(0x6a4a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4a25:{NFSU2_TR(0x6a4a25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4a28:{NFSU2_TR(0x6a4a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4a2b:{NFSU2_TR(0x6a4a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4a2e:{NFSU2_TR(0x6a4a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4a31:{NFSU2_TR(0x6a4a31);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4a34:{NFSU2_TR(0x6a4a34);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a4a38:{NFSU2_TR(0x6a4a38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4a65;}}
}
B6a4a3a:L6a4a3a:{c.instructions+=2;NFSU2_TR(0x6a4a3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4a41:{NFSU2_TR(0x6a4a41);
if(r1(R+518)){{goto L6a4a5a;}}
}
B6a4a43:L6a4a43:{c.instructions+=2;NFSU2_TR(0x6a4a43);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4a4a:{NFSU2_TR(0x6a4a4a);
if(r1(R+518)){{goto L6a4a5a;}}
}
B6a4a4c:L6a4a4c:{c.instructions+=2;NFSU2_TR(0x6a4a4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4a53:{NFSU2_TR(0x6a4a53);
if(r1(R+518)){{goto L6a4a5a;}}
}
B6a4a55:L6a4a55:{c.instructions+=2;NFSU2_TR(0x6a4a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4a58:{NFSU2_TR(0x6a4a58);
{goto L6a4a62;}
}
B6a4a5a:L6a4a5a:{c.instructions+=3;NFSU2_TR(0x6a4a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4a5d:{NFSU2_TR(0x6a4a5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a4a5f:{NFSU2_TR(0x6a4a5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a4a62:L6a4a62:{c.instructions+=1;NFSU2_TR(0x6a4a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4a65:L6a4a65:{c.instructions+=4;NFSU2_TR(0x6a4a65);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a4a67:{NFSU2_TR(0x6a4a67);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4a6a:{NFSU2_TR(0x6a4a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4a6d:{NFSU2_TR(0x6a4a6d);
if(r1(R+518)){{goto L6a4a76;}}
}
B6a4a6f:L6a4a6f:{c.instructions+=1;NFSU2_TR(0x6a4a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4a76:L6a4a76:{c.instructions+=4;NFSU2_TR(0x6a4a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4a79:{NFSU2_TR(0x6a4a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4a7c:{NFSU2_TR(0x6a4a7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4a7f:{NFSU2_TR(0x6a4a7f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4a07u);}goto L6a4a07;}}
}
B6a4a81:L6a4a81:{c.instructions+=2;NFSU2_TR(0x6a4a81);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a4a88:{NFSU2_TR(0x6a4a88);
if(r1(R+518)){{goto L6a4a92;}}
}
B6a4a8a:L6a4a8a:{c.instructions+=3;NFSU2_TR(0x6a4a8a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4a8c:{NFSU2_TR(0x6a4a8c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a4a8d:{NFSU2_TR(0x6a4a8d);
{goto L6a4c75;}
}
B6a4a92:L6a4a92:{c.instructions+=5;NFSU2_TR(0x6a4a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4a95:{NFSU2_TR(0x6a4a95);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a4a98:{NFSU2_TR(0x6a4a98);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4a9b:{NFSU2_TR(0x6a4a9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4a9c:{NFSU2_TR(0x6a4a9c);
if(r1(R+518)){{goto L6a4b72;}}
}
B6a4aa2:L6a4aa2:{c.instructions+=1;NFSU2_TR(0x6a4aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4aa7ull));
TAIL_STATIC(0x575620u,575);
}
B6a4aa7:L6a4aa7:{c.instructions+=4;NFSU2_TR(0x6a4aa7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4aa9:{NFSU2_TR(0x6a4aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a4aaa:{NFSU2_TR(0x6a4aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4aad:{NFSU2_TR(0x6a4aad);
if(r1(R+518)){{goto L6a4c53;}}
}
B6a4ab3:L6a4ab3:{c.instructions+=4;NFSU2_TR(0x6a4ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4ab6:{NFSU2_TR(0x6a4ab6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a4ab9:{NFSU2_TR(0x6a4ab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4aba:{NFSU2_TR(0x6a4aba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4abfull));
TAIL_STATIC(0x575620u,575);
}
B6a4abf:L6a4abf:{c.instructions+=4;NFSU2_TR(0x6a4abf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4ac1:{NFSU2_TR(0x6a4ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a4ac2:{NFSU2_TR(0x6a4ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4ac5:{NFSU2_TR(0x6a4ac5);
if(r1(R+518)){{goto L6a4c53;}}
}
B6a4acb:L6a4acb:{c.instructions+=2;NFSU2_TR(0x6a4acb);
__builtin_memmove((R+4),(R+12),4);
}
B6a4acd:{NFSU2_TR(0x6a4acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4ad2ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a4ad2:L6a4ad2:{c.instructions+=3;NFSU2_TR(0x6a4ad2);
__builtin_memmove((R+24),(R+0),4);
}
B6a4ad4:{NFSU2_TR(0x6a4ad4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6a4ad6:{NFSU2_TR(0x6a4ad6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a4c58;}}
}
B6a4adc:L6a4adc:{c.instructions+=3;NFSU2_TR(0x6a4adc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4ade:{NFSU2_TR(0x6a4ade);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4ae1:{NFSU2_TR(0x6a4ae1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4aef;}}
}
B6a4ae3:L6a4ae3:{c.instructions+=5;NFSU2_TR(0x6a4ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4ae6:{NFSU2_TR(0x6a4ae6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a4ae9:{NFSU2_TR(0x6a4ae9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a4aea:{NFSU2_TR(0x6a4aea);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4aed:{NFSU2_TR(0x6a4aed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4ae3u);}goto L6a4ae3;}}
}
B6a4aef:L6a4aef:{c.instructions+=5;NFSU2_TR(0x6a4aef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4af0:{NFSU2_TR(0x6a4af0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4af3:{NFSU2_TR(0x6a4af3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4af6:{NFSU2_TR(0x6a4af6);
u8 U[4];
w4(U+0,u32(0x69a118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4afb:{NFSU2_TR(0x6a4afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4b00ull));
TAIL_STATIC(0x69a41du,69a);
}
B6a4b00:L6a4b00:{c.instructions+=3;NFSU2_TR(0x6a4b00);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a4b02:{NFSU2_TR(0x6a4b02);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4b05:{NFSU2_TR(0x6a4b05);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4b23;}}
}
B6a4b07:L6a4b07:{c.instructions+=3;NFSU2_TR(0x6a4b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4b0a:{NFSU2_TR(0x6a4b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4b0d:{NFSU2_TR(0x6a4b0d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6a4b0f:L6a4b0f:{c.instructions+=8;NFSU2_TR(0x6a4b0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4b12:{NFSU2_TR(0x6a4b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4b15:{NFSU2_TR(0x6a4b15);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4b18:{NFSU2_TR(0x6a4b18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a4b1a:{NFSU2_TR(0x6a4b1a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a4b1b:{NFSU2_TR(0x6a4b1b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a4b1e:{NFSU2_TR(0x6a4b1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a4b21:{NFSU2_TR(0x6a4b21);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4b0fu);}goto L6a4b0f;}}
}
B6a4b23:L6a4b23:{c.instructions+=6;NFSU2_TR(0x6a4b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4b26:{NFSU2_TR(0x6a4b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4b29:{NFSU2_TR(0x6a4b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4b2c:{NFSU2_TR(0x6a4b2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4b2f:{NFSU2_TR(0x6a4b2f);
__builtin_memmove((R+0),(R+4),4);
}
B6a4b31:{NFSU2_TR(0x6a4b31);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4b34:L6a4b34:{c.instructions+=1;NFSU2_TR(0x6a4b34);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a4b36;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4b34u);}goto L6a4b34;}
}
B6a4b36:L6a4b36:{c.instructions+=2;NFSU2_TR(0x6a4b36);
__builtin_memmove((R+4),(R+0),4);
}
B6a4b38:{NFSU2_TR(0x6a4b38);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a4b3b:L6a4b3b:{c.instructions+=1;NFSU2_TR(0x6a4b3b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6a4b3d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4b3bu);}goto L6a4b3b;}
}
B6a4b3d:L6a4b3d:{c.instructions+=2;NFSU2_TR(0x6a4b3d);
__builtin_memmove((R+4),(R+12),4);
}
B6a4b3f:{NFSU2_TR(0x6a4b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4b44ull));
TAIL_STATIC(0x69e573u,69e);
}
B6a4b44:L6a4b44:{c.instructions+=3;NFSU2_TR(0x6a4b44);
__builtin_memmove((R+24),(R+0),4);
}
B6a4b46:{NFSU2_TR(0x6a4b46);
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
B6a4b48:{NFSU2_TR(0x6a4b48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a4c58;}}
}
B6a4b4e:L6a4b4e:{c.instructions+=5;NFSU2_TR(0x6a4b4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4b50:{NFSU2_TR(0x6a4b50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a4b53:{NFSU2_TR(0x6a4b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4b56:{NFSU2_TR(0x6a4b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
w4(U+4,u32(0x7bac34ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4b5d:{NFSU2_TR(0x6a4b5d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7bac3c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4b63ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6a4b63:L6a4b63:{c.instructions+=3;NFSU2_TR(0x6a4b63);
__builtin_memmove((R+24),(R+0),4);
}
B6a4b65:{NFSU2_TR(0x6a4b65);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6a4b67:{NFSU2_TR(0x6a4b67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a4c58;}}
}
B6a4b6d:L6a4b6d:{c.instructions+=1;NFSU2_TR(0x6a4b6d);
{goto L6a4c4f;}
}
B6a4b72:L6a4b72:{c.instructions+=2;NFSU2_TR(0x6a4b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4b75:{NFSU2_TR(0x6a4b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4b7aull));
TAIL_STATIC(0x575620u,575);
}
B6a4b7a:L6a4b7a:{c.instructions+=4;NFSU2_TR(0x6a4b7a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4b7c:{NFSU2_TR(0x6a4b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a4b7d:{NFSU2_TR(0x6a4b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4b80:{NFSU2_TR(0x6a4b80);
if(r1(R+518)){{goto L6a4c53;}}
}
B6a4b86:L6a4b86:{c.instructions+=4;NFSU2_TR(0x6a4b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4b89:{NFSU2_TR(0x6a4b89);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a4b8c:{NFSU2_TR(0x6a4b8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4b8d:{NFSU2_TR(0x6a4b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4b92ull));
TAIL_STATIC(0x575620u,575);
}
B6a4b92:L6a4b92:{c.instructions+=4;NFSU2_TR(0x6a4b92);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4b94:{NFSU2_TR(0x6a4b94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a4b95:{NFSU2_TR(0x6a4b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4b98:{NFSU2_TR(0x6a4b98);
if(r1(R+518)){{goto L6a4c53;}}
}
B6a4b9e:L6a4b9e:{c.instructions+=4;NFSU2_TR(0x6a4b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4ba1:{NFSU2_TR(0x6a4ba1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a4ba4:{NFSU2_TR(0x6a4ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4ba5:{NFSU2_TR(0x6a4ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4baaull));
TAIL_STATIC(0x575620u,575);
}
B6a4baa:L6a4baa:{c.instructions+=4;NFSU2_TR(0x6a4baa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4bac:{NFSU2_TR(0x6a4bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a4bad:{NFSU2_TR(0x6a4bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4bb0:{NFSU2_TR(0x6a4bb0);
if(r1(R+518)){{goto L6a4c53;}}
}
B6a4bb6:L6a4bb6:{c.instructions+=3;NFSU2_TR(0x6a4bb6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a4bb8:{NFSU2_TR(0x6a4bb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4bbb:{NFSU2_TR(0x6a4bbb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4be9;}}
}
B6a4bbd:L6a4bbd:{c.instructions+=6;NFSU2_TR(0x6a4bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4bc0:{NFSU2_TR(0x6a4bc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4bc3:{NFSU2_TR(0x6a4bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4bc7:{NFSU2_TR(0x6a4bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a4bcd:{NFSU2_TR(0x6a4bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4bd0:{NFSU2_TR(0x6a4bd0);
if(r1(R+518)){{goto L6a4be3;}}
}
B6a4bd2:L6a4bd2:{c.instructions+=2;NFSU2_TR(0x6a4bd2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4bd5:{NFSU2_TR(0x6a4bd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4be3;}}
}
B6a4bd7:L6a4bd7:{c.instructions+=4;NFSU2_TR(0x6a4bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4bda:{NFSU2_TR(0x6a4bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4bdd:{NFSU2_TR(0x6a4bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4be0:{NFSU2_TR(0x6a4be0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a4be3:L6a4be3:{c.instructions+=3;NFSU2_TR(0x6a4be3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a4be4:{NFSU2_TR(0x6a4be4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a4be7:{NFSU2_TR(0x6a4be7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4bbdu);}goto L6a4bbd;}}
}
B6a4be9:L6a4be9:{c.instructions+=3;NFSU2_TR(0x6a4be9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4bed:{NFSU2_TR(0x6a4bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4bf0:{NFSU2_TR(0x6a4bf0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4c12;}}
}
B6a4bf2:L6a4bf2:{c.instructions+=7;NFSU2_TR(0x6a4bf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4bf5:{NFSU2_TR(0x6a4bf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4bf6:{NFSU2_TR(0x6a4bf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4bf9:{NFSU2_TR(0x6a4bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4bfc:{NFSU2_TR(0x6a4bfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a4bff:{NFSU2_TR(0x6a4bff);
__builtin_memmove((R+4),(R+12),4);
}
B6a4c01:{NFSU2_TR(0x6a4c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4c06ull));
TAIL_STATIC(0x69d06au,69d);
}
B6a4c06:L6a4c06:{c.instructions+=3;NFSU2_TR(0x6a4c06);
__builtin_memmove((R+24),(R+0),4);
}
B6a4c08:{NFSU2_TR(0x6a4c08);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6a4c0a:{NFSU2_TR(0x6a4c0a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a4c58;}}
}
B6a4c0c:L6a4c0c:{c.instructions+=3;NFSU2_TR(0x6a4c0c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a4c0d:{NFSU2_TR(0x6a4c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a4c10:{NFSU2_TR(0x6a4c10);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4bf2u);}goto L6a4bf2;}}
}
B6a4c12:L6a4c12:{c.instructions+=3;NFSU2_TR(0x6a4c12);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a4c14:{NFSU2_TR(0x6a4c14);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4c17:{NFSU2_TR(0x6a4c17);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4c35;}}
}
B6a4c19:L6a4c19:{c.instructions+=3;NFSU2_TR(0x6a4c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4c1c:{NFSU2_TR(0x6a4c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4c1f:{NFSU2_TR(0x6a4c1f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6a4c21:L6a4c21:{c.instructions+=8;NFSU2_TR(0x6a4c21);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4c24:{NFSU2_TR(0x6a4c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4c27:{NFSU2_TR(0x6a4c27);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4c2a:{NFSU2_TR(0x6a4c2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a4c2c:{NFSU2_TR(0x6a4c2c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a4c2d:{NFSU2_TR(0x6a4c2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a4c30:{NFSU2_TR(0x6a4c30);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a4c33:{NFSU2_TR(0x6a4c33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4c21u);}goto L6a4c21;}}
}
B6a4c35:L6a4c35:{c.instructions+=6;NFSU2_TR(0x6a4c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4c38:{NFSU2_TR(0x6a4c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4c3b:{NFSU2_TR(0x6a4c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4c3e:{NFSU2_TR(0x6a4c3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4c41:{NFSU2_TR(0x6a4c41);
__builtin_memmove((R+0),(R+4),4);
}
B6a4c43:{NFSU2_TR(0x6a4c43);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4c46:L6a4c46:{c.instructions+=1;NFSU2_TR(0x6a4c46);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a4c48;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4c46u);}goto L6a4c46;}
}
B6a4c48:L6a4c48:{c.instructions+=2;NFSU2_TR(0x6a4c48);
__builtin_memmove((R+4),(R+0),4);
}
B6a4c4a:{NFSU2_TR(0x6a4c4a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a4c4d:L6a4c4d:{c.instructions+=1;NFSU2_TR(0x6a4c4d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6a4c4f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4c4du);}goto L6a4c4d;}
}
B6a4c4f:L6a4c4f:{c.instructions+=2;NFSU2_TR(0x6a4c4f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a4c51:{NFSU2_TR(0x6a4c51);
{goto L6a4c58;}
}
B6a4c53:L6a4c53:{c.instructions+=1;NFSU2_TR(0x6a4c53);
w4(R+24,u32(0x8007000eull));
}
B6a4c58:L6a4c58:{c.instructions+=2;NFSU2_TR(0x6a4c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4c5b:{NFSU2_TR(0x6a4c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4c60ull));
TAIL_STATIC(0x575630u,575);
}
B6a4c60:L6a4c60:{c.instructions+=2;NFSU2_TR(0x6a4c60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4c63:{NFSU2_TR(0x6a4c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4c68ull));
TAIL_STATIC(0x575630u,575);
}
B6a4c68:L6a4c68:{c.instructions+=2;NFSU2_TR(0x6a4c68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4c6b:{NFSU2_TR(0x6a4c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4c70ull));
TAIL_STATIC(0x575630u,575);
}
B6a4c70:L6a4c70:{c.instructions+=2;NFSU2_TR(0x6a4c70);
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
B6a4c73:{NFSU2_TR(0x6a4c73);
__builtin_memmove((R+0),(R+24),4);
}
B6a4c75:L6a4c75:{c.instructions+=5;NFSU2_TR(0x6a4c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a4c76:{NFSU2_TR(0x6a4c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a4c77:{NFSU2_TR(0x6a4c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a4c78:{NFSU2_TR(0x6a4c78);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a4c79:{NFSU2_TR(0x6a4c79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a4c7a:L6a4c7a:{c.instructions+=7;NFSU2_TR(0x6a4c7a);
__builtin_memmove((R+28),(R+28),4);
}
B6a4c7c:{NFSU2_TR(0x6a4c7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4c7d:{NFSU2_TR(0x6a4c7d);
__builtin_memmove((R+20),(R+16),4);
}
B6a4c7f:{NFSU2_TR(0x6a4c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B6a4c82:{NFSU2_TR(0x6a4c82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4c83:{NFSU2_TR(0x6a4c83);
__builtin_memmove((R+28),(R+4),4);
}
B6a4c85:{NFSU2_TR(0x6a4c85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4c8aull));
TAIL_STATIC(0x69e219u,69e);
}
B6a4c8a:L6a4c8a:{c.instructions+=3;NFSU2_TR(0x6a4c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4c8e:{NFSU2_TR(0x6a4c8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4c92:{NFSU2_TR(0x6a4c92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4e8d;}}
}
B6a4c98:L6a4c98:{c.instructions+=2;NFSU2_TR(0x6a4c98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4c99:{NFSU2_TR(0x6a4c99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4c9a:L6a4c9a:{c.instructions+=7;NFSU2_TR(0x6a4c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4c9d:{NFSU2_TR(0x6a4c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4ca0:{NFSU2_TR(0x6a4ca0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4ca3:{NFSU2_TR(0x6a4ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a4ca5:{NFSU2_TR(0x6a4ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4ca8:{NFSU2_TR(0x6a4ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfff00000ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4caf:{NFSU2_TR(0x6a4caf);
if(r1(R+518)){{goto L6a4e7c;}}
}
B6a4cb5:L6a4cb5:{c.instructions+=8;NFSU2_TR(0x6a4cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4cb8:{NFSU2_TR(0x6a4cb8);
__builtin_memmove((R+12),(R+4),4);
}
B6a4cba:{NFSU2_TR(0x6a4cba);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6a4cc0:{NFSU2_TR(0x6a4cc0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a4cc2:{NFSU2_TR(0x6a4cc2);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a4cc2);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a4cc2);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a4cc4:{NFSU2_TR(0x6a4cc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4ccb:{NFSU2_TR(0x6a4ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4cce:{NFSU2_TR(0x6a4cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4cf8;}}
}
B6a4cd0:L6a4cd0:{c.instructions+=9;NFSU2_TR(0x6a4cd0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4cd2:{NFSU2_TR(0x6a4cd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4cd3:{NFSU2_TR(0x6a4cd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4cd6:{NFSU2_TR(0x6a4cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4cd7:{NFSU2_TR(0x6a4cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4cda:{NFSU2_TR(0x6a4cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a4cdd:{NFSU2_TR(0x6a4cdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4cde:{NFSU2_TR(0x6a4cde);
__builtin_memmove((R+4),(R+28),4);
}
B6a4ce0:{NFSU2_TR(0x6a4ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4ce5ull));
TAIL_STATIC(0x69dfadu,69d);
}
B6a4ce5:L6a4ce5:{c.instructions+=7;NFSU2_TR(0x6a4ce5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4ce7:{NFSU2_TR(0x6a4ce7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4ce8:{NFSU2_TR(0x6a4ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4ceb:{NFSU2_TR(0x6a4ceb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4cec:{NFSU2_TR(0x6a4cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4cef:{NFSU2_TR(0x6a4cef);
__builtin_memmove((R+4),(R+28),4);
}
B6a4cf1:{NFSU2_TR(0x6a4cf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4cf6ull));
TAIL_STATIC(0x69dfadu,69d);
}
B6a4cf6:L6a4cf6:{c.instructions+=1;NFSU2_TR(0x6a4cf6);
{goto L6a4d50;}
}
B6a4cf8:L6a4cf8:{c.instructions+=3;NFSU2_TR(0x6a4cf8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6a4cfe:{NFSU2_TR(0x6a4cfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000000ull))));
}
B6a4d04:{NFSU2_TR(0x6a4d04);
if(r1(R+512)){{goto L6a4d50;}}
}
B6a4d06:L6a4d06:{c.instructions+=2;NFSU2_TR(0x6a4d06);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x40000000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4d0c:{NFSU2_TR(0x6a4d0c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a4d50;}}
}
B6a4d0e:L6a4d0e:{c.instructions+=7;NFSU2_TR(0x6a4d0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4d10:{NFSU2_TR(0x6a4d10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4d11:{NFSU2_TR(0x6a4d11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4d14:{NFSU2_TR(0x6a4d14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4d15:{NFSU2_TR(0x6a4d15);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4d18:{NFSU2_TR(0x6a4d18);
__builtin_memmove((R+4),(R+28),4);
}
B6a4d1a:{NFSU2_TR(0x6a4d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4d1full));
TAIL_STATIC(0x69dfadu,69d);
}
B6a4d1f:L6a4d1f:{c.instructions+=3;NFSU2_TR(0x6a4d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4d23:{NFSU2_TR(0x6a4d23);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4d27:{NFSU2_TR(0x6a4d27);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4d50;}}
}
B6a4d29:L6a4d29:{c.instructions+=11;NFSU2_TR(0x6a4d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4d2c:{NFSU2_TR(0x6a4d2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4d2e:{NFSU2_TR(0x6a4d2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4d2f:{NFSU2_TR(0x6a4d2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4d32:{NFSU2_TR(0x6a4d32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4d33:{NFSU2_TR(0x6a4d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4d36:{NFSU2_TR(0x6a4d36);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6a4d3a:{NFSU2_TR(0x6a4d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a4d3d:{NFSU2_TR(0x6a4d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4d3e:{NFSU2_TR(0x6a4d3e);
__builtin_memmove((R+4),(R+28),4);
}
B6a4d40:{NFSU2_TR(0x6a4d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4d45ull));
TAIL_STATIC(0x69dfadu,69d);
}
B6a4d45:L6a4d45:{c.instructions+=4;NFSU2_TR(0x6a4d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4d48:{NFSU2_TR(0x6a4d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4d4b:{NFSU2_TR(0x6a4d4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4d4e:{NFSU2_TR(0x6a4d4e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4d29u);}goto L6a4d29;}}
}
B6a4d50:L6a4d50:{c.instructions+=4;NFSU2_TR(0x6a4d50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4d52:{NFSU2_TR(0x6a4d52);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a4d57:{NFSU2_TR(0x6a4d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4d5c:{NFSU2_TR(0x6a4d5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4e7c;}}
}
B6a4d62:L6a4d62:{c.instructions+=2;NFSU2_TR(0x6a4d62);
__builtin_memmove((R+4),(R+24),4);
}
B6a4d64:{NFSU2_TR(0x6a4d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4d69ull));
TAIL_STATIC(0x698f6cu,698);
}
B6a4d69:L6a4d69:{c.instructions+=2;NFSU2_TR(0x6a4d69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4d6b:{NFSU2_TR(0x6a4d6b);
if(r1(R+518)){{goto L6a4e7c;}}
}
B6a4d71:L6a4d71:{c.instructions+=12;NFSU2_TR(0x6a4d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4d74:{NFSU2_TR(0x6a4d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a4d76:{NFSU2_TR(0x6a4d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4d79:{NFSU2_TR(0x6a4d79);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4d7c:{NFSU2_TR(0x6a4d7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a4d7f:{NFSU2_TR(0x6a4d7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4d82:{NFSU2_TR(0x6a4d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4d86:{NFSU2_TR(0x6a4d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4d8a:{NFSU2_TR(0x6a4d8a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4d8c:{NFSU2_TR(0x6a4d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4d8f:{NFSU2_TR(0x6a4d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4d92:{NFSU2_TR(0x6a4d92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4de6;}}
}
B6a4d94:L6a4d94:{c.instructions+=6;NFSU2_TR(0x6a4d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4d97:{NFSU2_TR(0x6a4d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4d9a:{NFSU2_TR(0x6a4d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a4d9d:{NFSU2_TR(0x6a4d9d);
__builtin_memmove((R+8),(R+4),4);
}
B6a4d9f:{NFSU2_TR(0x6a4d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4da2:{NFSU2_TR(0x6a4da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4da5:L6a4da5:{c.instructions+=6;NFSU2_TR(0x6a4da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4da8:{NFSU2_TR(0x6a4da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4daa:{NFSU2_TR(0x6a4daa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4dad:{NFSU2_TR(0x6a4dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4db0:{NFSU2_TR(0x6a4db0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4db3:{NFSU2_TR(0x6a4db3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a4db8;}}
}
B6a4db5:L6a4db5:{c.instructions+=1;NFSU2_TR(0x6a4db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4db8:L6a4db8:{c.instructions+=6;NFSU2_TR(0x6a4db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4dbb:{NFSU2_TR(0x6a4dbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4dbd:{NFSU2_TR(0x6a4dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4dc0:{NFSU2_TR(0x6a4dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4dc3:{NFSU2_TR(0x6a4dc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4dc6:{NFSU2_TR(0x6a4dc6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a4dcb;}}
}
B6a4dc8:L6a4dc8:{c.instructions+=1;NFSU2_TR(0x6a4dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4dcb:L6a4dcb:{c.instructions+=4;NFSU2_TR(0x6a4dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4dcf:{NFSU2_TR(0x6a4dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4dd3:{NFSU2_TR(0x6a4dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4dd6:{NFSU2_TR(0x6a4dd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4da5u);}goto L6a4da5;}}
}
B6a4dd8:L6a4dd8:{c.instructions+=3;NFSU2_TR(0x6a4dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4ddb:{NFSU2_TR(0x6a4ddb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4dde:{NFSU2_TR(0x6a4dde);
if(r1(R+512)){{goto L6a4e7c;}}
}
B6a4de4:L6a4de4:{c.instructions+=1;NFSU2_TR(0x6a4de4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4e3f;}}
}
B6a4de6:L6a4de6:{c.instructions+=14;NFSU2_TR(0x6a4de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4de9:{NFSU2_TR(0x6a4de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4dec:{NFSU2_TR(0x6a4dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4def:{NFSU2_TR(0x6a4def);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4df2:{NFSU2_TR(0x6a4df2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a4df5:{NFSU2_TR(0x6a4df5);
__builtin_memmove((R+4),(R+0),4);
}
B6a4df7:{NFSU2_TR(0x6a4df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4dfa:{NFSU2_TR(0x6a4dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4dfd:{NFSU2_TR(0x6a4dfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a4e00:{NFSU2_TR(0x6a4e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4e03:{NFSU2_TR(0x6a4e03);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4e06:{NFSU2_TR(0x6a4e06);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4e09:{NFSU2_TR(0x6a4e09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a4e0c:{NFSU2_TR(0x6a4e0c);
if(r1(R+512)){{goto L6a4e7c;}}
}
B6a4e0e:L6a4e0e:{c.instructions+=7;NFSU2_TR(0x6a4e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4e11:{NFSU2_TR(0x6a4e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4e14:{NFSU2_TR(0x6a4e14);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a4e17:{NFSU2_TR(0x6a4e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4e1a:{NFSU2_TR(0x6a4e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4e1d:{NFSU2_TR(0x6a4e1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4e20:{NFSU2_TR(0x6a4e20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4e3f;}}
}
B6a4e22:L6a4e22:{c.instructions+=6;NFSU2_TR(0x6a4e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4e25:{NFSU2_TR(0x6a4e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4e28:{NFSU2_TR(0x6a4e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4e2b:{NFSU2_TR(0x6a4e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4e2e:{NFSU2_TR(0x6a4e2e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4e30:{NFSU2_TR(0x6a4e30);
if(r1(R+512)){{goto L6a4e7c;}}
}
B6a4e32:L6a4e32:{c.instructions+=1;NFSU2_TR(0x6a4e32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4e3f;}}
}
B6a4e34:L6a4e34:{c.instructions+=4;NFSU2_TR(0x6a4e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4e37:{NFSU2_TR(0x6a4e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4e3a:{NFSU2_TR(0x6a4e3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4e3d:{NFSU2_TR(0x6a4e3d);
if(r1(R+512)){{goto L6a4e7c;}}
}
B6a4e3f:L6a4e3f:{c.instructions+=3;NFSU2_TR(0x6a4e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4e43:{NFSU2_TR(0x6a4e43);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4e45:{NFSU2_TR(0x6a4e45);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4e7c;}}
}
B6a4e47:L6a4e47:{c.instructions+=3;NFSU2_TR(0x6a4e47);
__builtin_memmove((R+0),(R+12),4);
}
B6a4e49:{NFSU2_TR(0x6a4e49);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a4e4c:{NFSU2_TR(0x6a4e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4e4f:L6a4e4f:{c.instructions+=16;NFSU2_TR(0x6a4e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4e52:{NFSU2_TR(0x6a4e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4e55:{NFSU2_TR(0x6a4e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4e58:{NFSU2_TR(0x6a4e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a4e5b:{NFSU2_TR(0x6a4e5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a4e5d:{NFSU2_TR(0x6a4e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4e60:{NFSU2_TR(0x6a4e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4e63:{NFSU2_TR(0x6a4e63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4e66:{NFSU2_TR(0x6a4e66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a4e68:{NFSU2_TR(0x6a4e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4e6b:{NFSU2_TR(0x6a4e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a4e6e:{NFSU2_TR(0x6a4e6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a4e71:{NFSU2_TR(0x6a4e71);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a4e74:{NFSU2_TR(0x6a4e74);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6a4e77:{NFSU2_TR(0x6a4e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4e7a:{NFSU2_TR(0x6a4e7a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4e4fu);}goto L6a4e4f;}}
}
B6a4e7c:L6a4e7c:{c.instructions+=4;NFSU2_TR(0x6a4e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4e7f:{NFSU2_TR(0x6a4e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4e82:{NFSU2_TR(0x6a4e82);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a4e85:{NFSU2_TR(0x6a4e85);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4c9au);}goto L6a4c9a;}}
}
B6a4e8b:L6a4e8b:{c.instructions+=2;NFSU2_TR(0x6a4e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a4e8c:{NFSU2_TR(0x6a4e8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a4e8d:L6a4e8d:{c.instructions+=4;NFSU2_TR(0x6a4e8d);
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
B6a4e8f:{NFSU2_TR(0x6a4e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a4e90:{NFSU2_TR(0x6a4e90);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a4e91:{NFSU2_TR(0x6a4e91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a4e92:L6a4e92:{c.instructions+=8;NFSU2_TR(0x6a4e92);
__builtin_memmove((R+28),(R+28),4);
}
B6a4e94:{NFSU2_TR(0x6a4e94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4e95:{NFSU2_TR(0x6a4e95);
__builtin_memmove((R+20),(R+16),4);
}
B6a4e97:{NFSU2_TR(0x6a4e97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B6a4e9d:{NFSU2_TR(0x6a4e9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4ea1:{NFSU2_TR(0x6a4ea1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4ea2:{NFSU2_TR(0x6a4ea2);
__builtin_memmove((R+12),(R+4),4);
}
B6a4ea4:{NFSU2_TR(0x6a4ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4eae;}}
}
B6a4ea6:L6a4ea6:{c.instructions+=3;NFSU2_TR(0x6a4ea6);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4ea8:{NFSU2_TR(0x6a4ea8);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a4ea9:{NFSU2_TR(0x6a4ea9);
TAIL_STATIC(0x6a5427u,6a5);
}
B6a4eae:L6a4eae:{c.instructions+=2;NFSU2_TR(0x6a4eae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4eb2:{NFSU2_TR(0x6a4eb2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4ebb;}}
}
B6a4eb4:L6a4eb4:{c.instructions+=2;NFSU2_TR(0x6a4eb4);
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
B6a4eb6:{NFSU2_TR(0x6a4eb6);
TAIL_STATIC(0x6a5427u,6a5);
}
B6a4ebb:L6a4ebb:{c.instructions+=7;NFSU2_TR(0x6a4ebb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4ebc:{NFSU2_TR(0x6a4ebc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a4ebe:{NFSU2_TR(0x6a4ebe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a4ebf:{NFSU2_TR(0x6a4ebf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4ec2:{NFSU2_TR(0x6a4ec2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4ec3:{NFSU2_TR(0x6a4ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4ec6:{NFSU2_TR(0x6a4ec6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a4ede;}}
}
B6a4ec8:L6a4ec8:{c.instructions+=4;NFSU2_TR(0x6a4ec8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a4ecb:{NFSU2_TR(0x6a4ecb);
__builtin_memmove((R+4),(R+12),4);
}
B6a4ecd:{NFSU2_TR(0x6a4ecd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6a4ecf:{NFSU2_TR(0x6a4ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4ed4ull));
TAIL_STATIC(0x69d655u,69d);
}
B6a4ed4:L6a4ed4:{c.instructions+=2;NFSU2_TR(0x6a4ed4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4ed6:{NFSU2_TR(0x6a4ed6);
if(r1(R+518)){{goto L6a4ede;}}
}
B6a4ed8:L6a4ed8:{c.instructions+=3;NFSU2_TR(0x6a4ed8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a4ed9:{NFSU2_TR(0x6a4ed9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a4edc:{NFSU2_TR(0x6a4edc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4ec8u);}goto L6a4ec8;}}
}
B6a4ede:L6a4ede:{c.instructions+=2;NFSU2_TR(0x6a4ede);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4ee1:{NFSU2_TR(0x6a4ee1);
if(r1(R+518)){TAIL_STATIC(0x6a5422u,6a5);}
}
B6a4ee7:L6a4ee7:{c.instructions+=7;NFSU2_TR(0x6a4ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4eea:{NFSU2_TR(0x6a4eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4eed:{NFSU2_TR(0x6a4eed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a4ef0:{NFSU2_TR(0x6a4ef0);
__builtin_memmove((R+4),(R+0),4);
}
B6a4ef2:{NFSU2_TR(0x6a4ef2);
__builtin_memmove((R+8),(R+4),4);
}
B6a4ef4:{NFSU2_TR(0x6a4ef4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4ef7:{NFSU2_TR(0x6a4ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a4efa:L6a4efa:{c.instructions+=1;NFSU2_TR(0x6a4efa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a4efc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4efau);}goto L6a4efa;}
}
B6a4efc:L6a4efc:{c.instructions+=2;NFSU2_TR(0x6a4efc);
__builtin_memmove((R+4),(R+8),4);
}
B6a4efe:{NFSU2_TR(0x6a4efe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a4f01:L6a4f01:{c.instructions+=1;NFSU2_TR(0x6a4f01);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6a4f03;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4f01u);}goto L6a4f01;}
}
B6a4f03:L6a4f03:{c.instructions+=5;NFSU2_TR(0x6a4f03);
__builtin_memmove((R+4),(R+0),4);
}
B6a4f05:{NFSU2_TR(0x6a4f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a4f08:{NFSU2_TR(0x6a4f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4f0b:{NFSU2_TR(0x6a4f0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a4f0d:{NFSU2_TR(0x6a4f0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a4f10:L6a4f10:{c.instructions+=1;NFSU2_TR(0x6a4f10);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a4f12;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4f10u);}goto L6a4f10;}
}
B6a4f12:L6a4f12:{c.instructions+=4;NFSU2_TR(0x6a4f12);
__builtin_memmove((R+4),(R+8),4);
}
B6a4f14:{NFSU2_TR(0x6a4f14);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a4f17:{NFSU2_TR(0x6a4f17);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a4f19:{NFSU2_TR(0x6a4f19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4f1c:L6a4f1c:{c.instructions+=1;NFSU2_TR(0x6a4f1c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a4f1e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4f1cu);}goto L6a4f1c;}
}
B6a4f1e:L6a4f1e:{c.instructions+=1;NFSU2_TR(0x6a4f1e);
if(r1(R+518)){{goto L6a4f34;}}
}
B6a4f20:L6a4f20:{c.instructions+=6;NFSU2_TR(0x6a4f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4f23:{NFSU2_TR(0x6a4f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a4f25:{NFSU2_TR(0x6a4f25);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a4f2a:{NFSU2_TR(0x6a4f2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4f2f:{NFSU2_TR(0x6a4f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4f32:{NFSU2_TR(0x6a4f32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a4f3b;}}
}
B6a4f34:L6a4f34:{c.instructions+=1;NFSU2_TR(0x6a4f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a4f3b:L6a4f3b:{c.instructions+=4;NFSU2_TR(0x6a4f3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4f3e:{NFSU2_TR(0x6a4f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4f41:{NFSU2_TR(0x6a4f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4f44:{NFSU2_TR(0x6a4f44);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a50a7u,6a5);}
}
B6a4f4a:L6a4f4a:{c.instructions+=10;NFSU2_TR(0x6a4f4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a4f4d:{NFSU2_TR(0x6a4f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4f50:{NFSU2_TR(0x6a4f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a4f52:{NFSU2_TR(0x6a4f52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4f55:{NFSU2_TR(0x6a4f55);
__builtin_memmove((R+4),(R+12),4);
}
B6a4f57:{NFSU2_TR(0x6a4f57);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4f5a:{NFSU2_TR(0x6a4f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4f5d:{NFSU2_TR(0x6a4f5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a4f60:{NFSU2_TR(0x6a4f60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4f61:{NFSU2_TR(0x6a4f61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4f66ull));
TAIL_STATIC(0x69d5ebu,69d);
}
B6a4f66:L6a4f66:{c.instructions+=2;NFSU2_TR(0x6a4f66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a4f68:{NFSU2_TR(0x6a4f68);
if(r1(R+518)){TAIL_STATIC(0x6a5079u,6a5);}
}
B6a4f6e:L6a4f6e:{c.instructions+=7;NFSU2_TR(0x6a4f6e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4f71:{NFSU2_TR(0x6a4f71);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a4f73:{NFSU2_TR(0x6a4f73);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a4f76:{NFSU2_TR(0x6a4f76);
__builtin_memmove((R+4),(R+28),4);
}
B6a4f78:{NFSU2_TR(0x6a4f78);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a4f7a:{NFSU2_TR(0x6a4f7a);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a4f7d:{NFSU2_TR(0x6a4f7d);
if(r1(R+518)){TAIL_STATIC(0x6a5079u,6a5);}
}
B6a4f83:L6a4f83:{c.instructions+=1;NFSU2_TR(0x6a4f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a4f86:L6a4f86:{c.instructions+=7;NFSU2_TR(0x6a4f86);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4f89:{NFSU2_TR(0x6a4f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a4f8c:{NFSU2_TR(0x6a4f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4f8f:{NFSU2_TR(0x6a4f8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a4f92:{NFSU2_TR(0x6a4f92);
w4(R+8,u32(0x100ull));
}
B6a4f97:{NFSU2_TR(0x6a4f97);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a4f9a:{NFSU2_TR(0x6a4f9a);
if(r1(R+518)){{goto L6a4fa2;}}
}
B6a4f9c:L6a4f9c:{c.instructions+=2;NFSU2_TR(0x6a4f9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4fa0:{NFSU2_TR(0x6a4fa0);
if(r1(R+518)){{goto L6a4fc1;}}
}
B6a4fa2:L6a4fa2:{c.instructions+=7;NFSU2_TR(0x6a4fa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4fa5:{NFSU2_TR(0x6a4fa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4fa6:{NFSU2_TR(0x6a4fa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a4fa9:{NFSU2_TR(0x6a4fa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4faa:{NFSU2_TR(0x6a4faa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a4fab:{NFSU2_TR(0x6a4fab);
__builtin_memmove((R+4),(R+12),4);
}
B6a4fad:{NFSU2_TR(0x6a4fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a4fb2ull));
TAIL_STATIC(0x69d6a8u,69d);
}
B6a4fb2:L6a4fb2:{c.instructions+=3;NFSU2_TR(0x6a4fb2);
__builtin_memmove((R+4),(R+0),4);
}
B6a4fb4:{NFSU2_TR(0x6a4fb4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a4fb7:{NFSU2_TR(0x6a4fb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a4f86u);}goto L6a4f86;}}
}
B6a4fb9:L6a4fb9:{c.instructions+=2;NFSU2_TR(0x6a4fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a4fbc:{NFSU2_TR(0x6a4fbc);
TAIL_STATIC(0x6a5079u,6a5);
}
B6a4fc1:L6a4fc1:{c.instructions+=6;NFSU2_TR(0x6a4fc1);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a4fc4:{NFSU2_TR(0x6a4fc4);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a4fca:{NFSU2_TR(0x6a4fca);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a4fcc:{NFSU2_TR(0x6a4fcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a4fce:{NFSU2_TR(0x6a4fce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a4fd1:{NFSU2_TR(0x6a4fd1);
if(r1(R+514)){{goto L6a4fe5;}}
}
B6a4fd3:L6a4fd3:{c.instructions+=6;NFSU2_TR(0x6a4fd3);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a4fd6:{NFSU2_TR(0x6a4fd6);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a4fdc:{NFSU2_TR(0x6a4fdc);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a4fde:{NFSU2_TR(0x6a4fde);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a4fe0:{NFSU2_TR(0x6a4fe0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a4fe3:{NFSU2_TR(0x6a4fe3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x6a5054u,6a5);}
}
B6a4fe5:L6a4fe5:{c.instructions+=7;NFSU2_TR(0x6a4fe5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a4fe8:{NFSU2_TR(0x6a4fe8);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a4feb:{NFSU2_TR(0x6a4feb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6a4fee:{NFSU2_TR(0x6a4fee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a4ff0:{NFSU2_TR(0x6a4ff0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a4ff3:{NFSU2_TR(0x6a4ff3);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6a4ff6:{NFSU2_TR(0x6a4ff6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6a502fu,6a5);}
}
B6a4ff8:L6a4ff8:{c.instructions+=3;NFSU2_TR(0x6a4ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a4ffb:{NFSU2_TR(0x6a4ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a4ffe:{NFSU2_TR(0x6a4ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
TAIL_STATIC(0x6a5000u,6a5);
}
XIT:NFSU2_TR_EXIT(0x6a4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
