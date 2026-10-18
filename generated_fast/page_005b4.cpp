#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 page_5b4(Cpu& c){return body_5b4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b4000:goto L5b4000;
case 0x5b4002:c.instructions+=7;goto B5b4002;
case 0x5b4006:c.instructions+=6;goto B5b4006;
case 0x5b4007:c.instructions+=5;goto B5b4007;
case 0x5b400b:c.instructions+=4;goto B5b400b;
case 0x5b400c:c.instructions+=3;goto B5b400c;
case 0x5b400d:c.instructions+=2;goto B5b400d;
case 0x5b400f:c.instructions+=1;goto B5b400f;
case 0x5b4014:goto L5b4014;
case 0x5b4018:c.instructions+=3;goto B5b4018;
case 0x5b401c:c.instructions+=2;goto B5b401c;
case 0x5b401e:c.instructions+=1;goto B5b401e;
case 0x5b4022:goto L5b4022;
case 0x5b4024:c.instructions+=8;goto B5b4024;
case 0x5b4025:c.instructions+=7;goto B5b4025;
case 0x5b4029:c.instructions+=6;goto B5b4029;
case 0x5b402a:c.instructions+=5;goto B5b402a;
case 0x5b402e:c.instructions+=4;goto B5b402e;
case 0x5b402f:c.instructions+=3;goto B5b402f;
case 0x5b4030:c.instructions+=2;goto B5b4030;
case 0x5b4032:c.instructions+=1;goto B5b4032;
case 0x5b4037:goto L5b4037;
case 0x5b403b:c.instructions+=4;goto B5b403b;
case 0x5b403f:c.instructions+=3;goto B5b403f;
case 0x5b4041:c.instructions+=2;goto B5b4041;
case 0x5b4044:c.instructions+=1;goto B5b4044;
case 0x5b4046:goto L5b4046;
case 0x5b404a:c.instructions+=1;goto B5b404a;
case 0x5b404c:goto L5b404c;
case 0x5b4050:goto L5b4050;
case 0x5b4054:c.instructions+=4;goto B5b4054;
case 0x5b4056:c.instructions+=3;goto B5b4056;
case 0x5b4058:c.instructions+=2;goto B5b4058;
case 0x5b405b:c.instructions+=1;goto B5b405b;
case 0x5b405d:goto L5b405d;
case 0x5b405f:c.instructions+=1;goto B5b405f;
case 0x5b4063:goto L5b4063;
case 0x5b4067:c.instructions+=11;goto B5b4067;
case 0x5b406a:c.instructions+=10;goto B5b406a;
case 0x5b406b:c.instructions+=9;goto B5b406b;
case 0x5b406c:c.instructions+=8;goto B5b406c;
case 0x5b4070:c.instructions+=7;goto B5b4070;
case 0x5b4071:c.instructions+=6;goto B5b4071;
case 0x5b4073:c.instructions+=5;goto B5b4073;
case 0x5b4077:c.instructions+=4;goto B5b4077;
case 0x5b407b:c.instructions+=3;goto B5b407b;
case 0x5b407d:c.instructions+=2;goto B5b407d;
case 0x5b4081:c.instructions+=1;goto B5b4081;
case 0x5b4086:goto L5b4086;
case 0x5b4088:c.instructions+=3;goto B5b4088;
case 0x5b4089:c.instructions+=2;goto B5b4089;
case 0x5b408c:c.instructions+=1;goto B5b408c;
case 0x5b408e:goto L5b408e;
case 0x5b4093:goto L5b4093;
case 0x5b4097:c.instructions+=7;goto B5b4097;
case 0x5b409b:c.instructions+=6;goto B5b409b;
case 0x5b409d:c.instructions+=5;goto B5b409d;
case 0x5b409e:c.instructions+=4;goto B5b409e;
case 0x5b409f:c.instructions+=3;goto B5b409f;
case 0x5b40a0:c.instructions+=2;goto B5b40a0;
case 0x5b40a2:c.instructions+=1;goto B5b40a2;
case 0x5b40a7:goto L5b40a7;
case 0x5b40ac:goto L5b40ac;
case 0x5b40af:c.instructions+=5;goto B5b40af;
case 0x5b40b1:c.instructions+=4;goto B5b40b1;
case 0x5b40b2:c.instructions+=3;goto B5b40b2;
case 0x5b40b3:c.instructions+=2;goto B5b40b3;
case 0x5b40b5:c.instructions+=1;goto B5b40b5;
case 0x5b40ba:goto L5b40ba;
case 0x5b40be:c.instructions+=3;goto B5b40be;
case 0x5b40c0:c.instructions+=2;goto B5b40c0;
case 0x5b40c2:c.instructions+=1;goto B5b40c2;
case 0x5b40c4:goto L5b40c4;
case 0x5b40c8:c.instructions+=4;goto B5b40c8;
case 0x5b40c9:c.instructions+=3;goto B5b40c9;
case 0x5b40ca:c.instructions+=2;goto B5b40ca;
case 0x5b40cc:c.instructions+=1;goto B5b40cc;
case 0x5b40d1:goto L5b40d1;
case 0x5b40d3:goto L5b40d3;
case 0x5b40d5:c.instructions+=6;goto B5b40d5;
case 0x5b40db:c.instructions+=5;goto B5b40db;
case 0x5b40e1:c.instructions+=4;goto B5b40e1;
case 0x5b40e2:c.instructions+=3;goto B5b40e2;
case 0x5b40e9:c.instructions+=2;goto B5b40e9;
case 0x5b40eb:c.instructions+=1;goto B5b40eb;
case 0x5b40f0:goto L5b40f0;
case 0x5b40f1:c.instructions+=4;goto B5b40f1;
case 0x5b40f2:c.instructions+=3;goto B5b40f2;
case 0x5b40f3:c.instructions+=2;goto B5b40f3;
case 0x5b40f5:c.instructions+=1;goto B5b40f5;
case 0x5b40fa:goto L5b40fa;
case 0x5b40fc:c.instructions+=7;goto B5b40fc;
case 0x5b40ff:c.instructions+=6;goto B5b40ff;
case 0x5b4103:c.instructions+=5;goto B5b4103;
case 0x5b4104:c.instructions+=4;goto B5b4104;
case 0x5b4105:c.instructions+=3;goto B5b4105;
case 0x5b4106:c.instructions+=2;goto B5b4106;
case 0x5b4108:c.instructions+=1;goto B5b4108;
case 0x5b410d:goto L5b410d;
case 0x5b410f:c.instructions+=3;goto B5b410f;
case 0x5b4110:c.instructions+=2;goto B5b4110;
case 0x5b4113:c.instructions+=1;goto B5b4113;
case 0x5b4115:goto L5b4115;
case 0x5b4116:c.instructions+=1;goto B5b4116;
case 0x5b4118:goto L5b4118;
case 0x5b411c:c.instructions+=4;goto B5b411c;
case 0x5b411d:c.instructions+=3;goto B5b411d;
case 0x5b411e:c.instructions+=2;goto B5b411e;
case 0x5b4120:c.instructions+=1;goto B5b4120;
case 0x5b4125:goto L5b4125;
case 0x5b4127:goto L5b4127;
case 0x5b412b:c.instructions+=1;goto B5b412b;
case 0x5b412c:goto L5b412c;
case 0x5b412f:c.instructions+=4;goto B5b412f;
case 0x5b4130:c.instructions+=3;goto B5b4130;
case 0x5b4132:c.instructions+=2;goto B5b4132;
case 0x5b4133:c.instructions+=1;goto B5b4133;
case 0x5b4138:goto L5b4138;
case 0x5b413c:c.instructions+=1;goto B5b413c;
case 0x5b413e:goto L5b413e;
case 0x5b4144:c.instructions+=5;goto B5b4144;
case 0x5b4145:c.instructions+=4;goto B5b4145;
case 0x5b4146:c.instructions+=3;goto B5b4146;
case 0x5b414c:c.instructions+=2;goto B5b414c;
case 0x5b414d:c.instructions+=1;goto B5b414d;
case 0x5b414f:goto L5b414f;
case 0x5b4151:c.instructions+=8;goto B5b4151;
case 0x5b4154:c.instructions+=7;goto B5b4154;
case 0x5b415a:c.instructions+=6;goto B5b415a;
case 0x5b415d:c.instructions+=5;goto B5b415d;
case 0x5b415e:c.instructions+=4;goto B5b415e;
case 0x5b4164:c.instructions+=3;goto B5b4164;
case 0x5b4165:c.instructions+=2;goto B5b4165;
case 0x5b416c:c.instructions+=1;goto B5b416c;
case 0x5b4171:goto L5b4171;
case 0x5b4172:c.instructions+=2;goto B5b4172;
case 0x5b4175:c.instructions+=1;goto B5b4175;
case 0x5b41b0:goto L5b41b0;
case 0x5b41b2:c.instructions+=8;goto B5b41b2;
case 0x5b41b7:c.instructions+=7;goto B5b41b7;
case 0x5b41bd:c.instructions+=6;goto B5b41bd;
case 0x5b41be:c.instructions+=5;goto B5b41be;
case 0x5b41c5:c.instructions+=4;goto B5b41c5;
case 0x5b41c6:c.instructions+=3;goto B5b41c6;
case 0x5b41cb:c.instructions+=2;goto B5b41cb;
case 0x5b41cc:c.instructions+=1;goto B5b41cc;
case 0x5b41d1:goto L5b41d1;
case 0x5b41d4:c.instructions+=4;goto B5b41d4;
case 0x5b41d8:c.instructions+=3;goto B5b41d8;
case 0x5b41da:c.instructions+=2;goto B5b41da;
case 0x5b41e2:c.instructions+=1;goto B5b41e2;
case 0x5b41e4:goto L5b41e4;
case 0x5b41e8:c.instructions+=7;goto B5b41e8;
case 0x5b41ec:c.instructions+=6;goto B5b41ec;
case 0x5b41ed:c.instructions+=5;goto B5b41ed;
case 0x5b41f1:c.instructions+=4;goto B5b41f1;
case 0x5b41f2:c.instructions+=3;goto B5b41f2;
case 0x5b41f3:c.instructions+=2;goto B5b41f3;
case 0x5b41f5:c.instructions+=1;goto B5b41f5;
case 0x5b41fa:goto L5b41fa;
case 0x5b41fe:c.instructions+=3;goto B5b41fe;
case 0x5b4205:c.instructions+=2;goto B5b4205;
case 0x5b4208:c.instructions+=1;goto B5b4208;
case 0x5b4209:goto L5b4209;
case 0x5b420d:c.instructions+=4;goto B5b420d;
case 0x5b420f:c.instructions+=3;goto B5b420f;
case 0x5b4216:c.instructions+=2;goto B5b4216;
case 0x5b4219:c.instructions+=1;goto B5b4219;
case 0x5b4220:goto L5b4220;
case 0x5b4221:c.instructions+=4;goto B5b4221;
case 0x5b4227:c.instructions+=3;goto B5b4227;
case 0x5b4228:c.instructions+=2;goto B5b4228;
case 0x5b422d:c.instructions+=1;goto B5b422d;
case 0x5b4232:goto L5b4232;
case 0x5b4234:c.instructions+=2;goto B5b4234;
case 0x5b4236:c.instructions+=1;goto B5b4236;
case 0x5b4238:goto L5b4238;
case 0x5b4240:goto L5b4240;
case 0x5b4246:c.instructions+=4;goto B5b4246;
case 0x5b4247:c.instructions+=3;goto B5b4247;
case 0x5b424d:c.instructions+=2;goto B5b424d;
case 0x5b424e:c.instructions+=1;goto B5b424e;
case 0x5b4253:goto L5b4253;
case 0x5b4259:c.instructions+=4;goto B5b4259;
case 0x5b425a:c.instructions+=3;goto B5b425a;
case 0x5b4260:c.instructions+=2;goto B5b4260;
case 0x5b4261:c.instructions+=1;goto B5b4261;
case 0x5b4266:goto L5b4266;
case 0x5b4268:c.instructions+=3;goto B5b4268;
case 0x5b426b:c.instructions+=2;goto B5b426b;
case 0x5b426d:c.instructions+=1;goto B5b426d;
case 0x5b426f:goto L5b426f;
case 0x5b4271:c.instructions+=4;goto B5b4271;
case 0x5b4276:c.instructions+=3;goto B5b4276;
case 0x5b427b:c.instructions+=2;goto B5b427b;
case 0x5b427d:c.instructions+=1;goto B5b427d;
case 0x5b4282:goto L5b4282;
case 0x5b4284:c.instructions+=5;goto B5b4284;
case 0x5b4289:c.instructions+=4;goto B5b4289;
case 0x5b428b:c.instructions+=3;goto B5b428b;
case 0x5b4290:c.instructions+=2;goto B5b4290;
case 0x5b4295:c.instructions+=1;goto B5b4295;
case 0x5b429a:goto L5b429a;
case 0x5b42a0:c.instructions+=4;goto B5b42a0;
case 0x5b42a5:c.instructions+=3;goto B5b42a5;
case 0x5b42a7:c.instructions+=2;goto B5b42a7;
case 0x5b42ac:c.instructions+=1;goto B5b42ac;
case 0x5b42b1:goto L5b42b1;
case 0x5b42b3:goto L5b42b3;
case 0x5b42b6:c.instructions+=4;goto B5b42b6;
case 0x5b42bb:c.instructions+=3;goto B5b42bb;
case 0x5b42c5:c.instructions+=2;goto B5b42c5;
case 0x5b42cc:c.instructions+=1;goto B5b42cc;
case 0x5b42d1:goto L5b42d1;
case 0x5b42d3:c.instructions+=2;goto B5b42d3;
case 0x5b42d5:c.instructions+=1;goto B5b42d5;
case 0x5b42d7:goto L5b42d7;
case 0x5b42d9:c.instructions+=1;goto B5b42d9;
case 0x5b42de:goto L5b42de;
case 0x5b42e0:c.instructions+=2;goto B5b42e0;
case 0x5b42e2:c.instructions+=1;goto B5b42e2;
case 0x5b42e4:goto L5b42e4;
case 0x5b42e5:c.instructions+=2;goto B5b42e5;
case 0x5b42e6:c.instructions+=1;goto B5b42e6;
case 0x5b42f0:goto L5b42f0;
case 0x5b42f1:c.instructions+=15;goto B5b42f1;
case 0x5b42f3:c.instructions+=14;goto B5b42f3;
case 0x5b42f6:c.instructions+=13;goto B5b42f6;
case 0x5b42fc:c.instructions+=12;goto B5b42fc;
case 0x5b42fd:c.instructions+=11;goto B5b42fd;
case 0x5b42fe:c.instructions+=10;goto B5b42fe;
case 0x5b4301:c.instructions+=9;goto B5b4301;
case 0x5b4302:c.instructions+=8;goto B5b4302;
case 0x5b4309:c.instructions+=7;goto B5b4309;
case 0x5b430b:c.instructions+=6;goto B5b430b;
case 0x5b430e:c.instructions+=5;goto B5b430e;
case 0x5b4310:c.instructions+=4;goto B5b4310;
case 0x5b4311:c.instructions+=3;goto B5b4311;
case 0x5b4315:c.instructions+=2;goto B5b4315;
case 0x5b4316:c.instructions+=1;goto B5b4316;
case 0x5b4319:goto L5b4319;
case 0x5b431c:c.instructions+=7;goto B5b431c;
case 0x5b431e:c.instructions+=6;goto B5b431e;
case 0x5b431f:c.instructions+=5;goto B5b431f;
case 0x5b4326:c.instructions+=4;goto B5b4326;
case 0x5b4327:c.instructions+=3;goto B5b4327;
case 0x5b432b:c.instructions+=2;goto B5b432b;
case 0x5b432c:c.instructions+=1;goto B5b432c;
case 0x5b432f:goto L5b432f;
case 0x5b4332:c.instructions+=3;goto B5b4332;
case 0x5b4335:c.instructions+=2;goto B5b4335;
case 0x5b4338:c.instructions+=1;goto B5b4338;
case 0x5b433a:goto L5b433a;
case 0x5b433d:c.instructions+=8;goto B5b433d;
case 0x5b4341:c.instructions+=7;goto B5b4341;
case 0x5b4342:c.instructions+=6;goto B5b4342;
case 0x5b4343:c.instructions+=5;goto B5b4343;
case 0x5b4344:c.instructions+=4;goto B5b4344;
case 0x5b4348:c.instructions+=3;goto B5b4348;
case 0x5b4349:c.instructions+=2;goto B5b4349;
case 0x5b434b:c.instructions+=1;goto B5b434b;
case 0x5b4350:goto L5b4350;
case 0x5b4355:goto L5b4355;
case 0x5b4358:c.instructions+=3;goto B5b4358;
case 0x5b435b:c.instructions+=2;goto B5b435b;
case 0x5b435e:c.instructions+=1;goto B5b435e;
case 0x5b4360:goto L5b4360;
case 0x5b4364:c.instructions+=7;goto B5b4364;
case 0x5b4365:c.instructions+=6;goto B5b4365;
case 0x5b4366:c.instructions+=5;goto B5b4366;
case 0x5b4367:c.instructions+=4;goto B5b4367;
case 0x5b436b:c.instructions+=3;goto B5b436b;
case 0x5b436c:c.instructions+=2;goto B5b436c;
case 0x5b436e:c.instructions+=1;goto B5b436e;
case 0x5b4373:goto L5b4373;
case 0x5b4377:c.instructions+=12;goto B5b4377;
case 0x5b4379:c.instructions+=11;goto B5b4379;
case 0x5b437d:c.instructions+=10;goto B5b437d;
case 0x5b437f:c.instructions+=9;goto B5b437f;
case 0x5b4383:c.instructions+=8;goto B5b4383;
case 0x5b4385:c.instructions+=7;goto B5b4385;
case 0x5b4389:c.instructions+=6;goto B5b4389;
case 0x5b438d:c.instructions+=5;goto B5b438d;
case 0x5b438f:c.instructions+=4;goto B5b438f;
case 0x5b4393:c.instructions+=3;goto B5b4393;
case 0x5b4397:c.instructions+=2;goto B5b4397;
case 0x5b439b:c.instructions+=1;goto B5b439b;
case 0x5b43a0:goto L5b43a0;
case 0x5b43a3:c.instructions+=1;goto B5b43a3;
case 0x5b43a5:goto L5b43a5;
case 0x5b43a8:c.instructions+=1;goto B5b43a8;
case 0x5b43aa:goto L5b43aa;
case 0x5b43ad:c.instructions+=1;goto B5b43ad;
case 0x5b43af:goto L5b43af;
case 0x5b43b2:c.instructions+=1;goto B5b43b2;
case 0x5b43b4:goto L5b43b4;
case 0x5b43b8:c.instructions+=9;goto B5b43b8;
case 0x5b43bc:c.instructions+=8;goto B5b43bc;
case 0x5b43c0:c.instructions+=7;goto B5b43c0;
case 0x5b43c4:c.instructions+=6;goto B5b43c4;
case 0x5b43c8:c.instructions+=5;goto B5b43c8;
case 0x5b43cc:c.instructions+=4;goto B5b43cc;
case 0x5b43d0:c.instructions+=3;goto B5b43d0;
case 0x5b43d4:c.instructions+=2;goto B5b43d4;
case 0x5b43d8:c.instructions+=1;goto B5b43d8;
case 0x5b43dd:goto L5b43dd;
case 0x5b43df:c.instructions+=2;goto B5b43df;
case 0x5b43e1:c.instructions+=1;goto B5b43e1;
case 0x5b43e4:goto L5b43e4;
case 0x5b43e7:c.instructions+=9;goto B5b43e7;
case 0x5b43ea:c.instructions+=8;goto B5b43ea;
case 0x5b43ec:c.instructions+=7;goto B5b43ec;
case 0x5b43ee:c.instructions+=6;goto B5b43ee;
case 0x5b43f2:c.instructions+=5;goto B5b43f2;
case 0x5b43f6:c.instructions+=4;goto B5b43f6;
case 0x5b43f7:c.instructions+=3;goto B5b43f7;
case 0x5b43fb:c.instructions+=2;goto B5b43fb;
case 0x5b43ff:c.instructions+=1;goto B5b43ff;
case 0x5b4404:goto L5b4404;
case 0x5b4407:c.instructions+=1;goto B5b4407;
case 0x5b4409:goto L5b4409;
case 0x5b440b:c.instructions+=2;goto B5b440b;
case 0x5b440d:c.instructions+=1;goto B5b440d;
case 0x5b4410:goto L5b4410;
case 0x5b4412:c.instructions+=20;goto B5b4412;
case 0x5b4414:c.instructions+=19;goto B5b4414;
case 0x5b4417:c.instructions+=18;goto B5b4417;
case 0x5b4419:c.instructions+=17;goto B5b4419;
case 0x5b441c:c.instructions+=16;goto B5b441c;
case 0x5b441e:c.instructions+=15;goto B5b441e;
case 0x5b4422:c.instructions+=14;goto B5b4422;
case 0x5b4426:c.instructions+=13;goto B5b4426;
case 0x5b4428:c.instructions+=12;goto B5b4428;
case 0x5b442c:c.instructions+=11;goto B5b442c;
case 0x5b4430:c.instructions+=10;goto B5b4430;
case 0x5b4434:c.instructions+=9;goto B5b4434;
case 0x5b4438:c.instructions+=8;goto B5b4438;
case 0x5b443c:c.instructions+=7;goto B5b443c;
case 0x5b4440:c.instructions+=6;goto B5b4440;
case 0x5b4444:c.instructions+=5;goto B5b4444;
case 0x5b4446:c.instructions+=4;goto B5b4446;
case 0x5b444a:c.instructions+=3;goto B5b444a;
case 0x5b444e:c.instructions+=2;goto B5b444e;
case 0x5b4450:c.instructions+=1;goto B5b4450;
case 0x5b4452:goto L5b4452;
case 0x5b4458:c.instructions+=3;goto B5b4458;
case 0x5b445a:c.instructions+=2;goto B5b445a;
case 0x5b445d:c.instructions+=1;goto B5b445d;
case 0x5b445f:goto L5b445f;
case 0x5b4463:c.instructions+=8;goto B5b4463;
case 0x5b4467:c.instructions+=7;goto B5b4467;
case 0x5b446b:c.instructions+=6;goto B5b446b;
case 0x5b446f:c.instructions+=5;goto B5b446f;
case 0x5b4473:c.instructions+=4;goto B5b4473;
case 0x5b4477:c.instructions+=3;goto B5b4477;
case 0x5b447b:c.instructions+=2;goto B5b447b;
case 0x5b447f:c.instructions+=1;goto B5b447f;
case 0x5b4483:goto L5b4483;
case 0x5b4485:c.instructions+=2;goto B5b4485;
case 0x5b4489:c.instructions+=1;goto B5b4489;
case 0x5b448d:goto L5b448d;
case 0x5b4491:c.instructions+=4;goto B5b4491;
case 0x5b4492:c.instructions+=3;goto B5b4492;
case 0x5b4496:c.instructions+=2;goto B5b4496;
case 0x5b4497:c.instructions+=1;goto B5b4497;
case 0x5b449c:goto L5b449c;
case 0x5b449f:goto L5b449f;
case 0x5b44a7:c.instructions+=2;goto B5b44a7;
case 0x5b44af:c.instructions+=1;goto B5b44af;
case 0x5b44b1:goto L5b44b1;
case 0x5b44b5:c.instructions+=7;goto B5b44b5;
case 0x5b44b9:c.instructions+=6;goto B5b44b9;
case 0x5b44bd:c.instructions+=5;goto B5b44bd;
case 0x5b44c1:c.instructions+=4;goto B5b44c1;
case 0x5b44c7:c.instructions+=3;goto B5b44c7;
case 0x5b44c9:c.instructions+=2;goto B5b44c9;
case 0x5b44cc:c.instructions+=1;goto B5b44cc;
case 0x5b44ce:goto L5b44ce;
case 0x5b44d2:c.instructions+=2;goto B5b44d2;
case 0x5b44d8:c.instructions+=1;goto B5b44d8;
case 0x5b44dc:goto L5b44dc;
case 0x5b44e0:c.instructions+=14;goto B5b44e0;
case 0x5b44e4:c.instructions+=13;goto B5b44e4;
case 0x5b44e8:c.instructions+=12;goto B5b44e8;
case 0x5b44ec:c.instructions+=11;goto B5b44ec;
case 0x5b44f0:c.instructions+=10;goto B5b44f0;
case 0x5b44f4:c.instructions+=9;goto B5b44f4;
case 0x5b44f8:c.instructions+=8;goto B5b44f8;
case 0x5b44fc:c.instructions+=7;goto B5b44fc;
case 0x5b4502:c.instructions+=6;goto B5b4502;
case 0x5b4504:c.instructions+=5;goto B5b4504;
case 0x5b4508:c.instructions+=4;goto B5b4508;
case 0x5b450c:c.instructions+=3;goto B5b450c;
case 0x5b450e:c.instructions+=2;goto B5b450e;
case 0x5b4511:c.instructions+=1;goto B5b4511;
case 0x5b4513:goto L5b4513;
case 0x5b4515:c.instructions+=1;goto B5b4515;
case 0x5b4519:goto L5b4519;
case 0x5b451f:c.instructions+=4;goto B5b451f;
case 0x5b4521:c.instructions+=3;goto B5b4521;
case 0x5b4523:c.instructions+=2;goto B5b4523;
case 0x5b4526:c.instructions+=1;goto B5b4526;
case 0x5b4528:goto L5b4528;
case 0x5b452e:c.instructions+=3;goto B5b452e;
case 0x5b4530:c.instructions+=2;goto B5b4530;
case 0x5b4534:c.instructions+=1;goto B5b4534;
case 0x5b4536:goto L5b4536;
case 0x5b453a:goto L5b453a;
case 0x5b453e:c.instructions+=14;goto B5b453e;
case 0x5b4542:c.instructions+=13;goto B5b4542;
case 0x5b4546:c.instructions+=12;goto B5b4546;
case 0x5b454a:c.instructions+=11;goto B5b454a;
case 0x5b454e:c.instructions+=10;goto B5b454e;
case 0x5b4552:c.instructions+=9;goto B5b4552;
case 0x5b4556:c.instructions+=8;goto B5b4556;
case 0x5b455a:c.instructions+=7;goto B5b455a;
case 0x5b455e:c.instructions+=6;goto B5b455e;
case 0x5b4565:c.instructions+=5;goto B5b4565;
case 0x5b4568:c.instructions+=4;goto B5b4568;
case 0x5b456f:c.instructions+=3;goto B5b456f;
case 0x5b4576:c.instructions+=2;goto B5b4576;
case 0x5b4578:c.instructions+=1;goto B5b4578;
case 0x5b457b:goto L5b457b;
case 0x5b457d:c.instructions+=1;goto B5b457d;
case 0x5b457f:goto L5b457f;
case 0x5b4583:c.instructions+=11;goto B5b4583;
case 0x5b4587:c.instructions+=10;goto B5b4587;
case 0x5b458b:c.instructions+=9;goto B5b458b;
case 0x5b458f:c.instructions+=8;goto B5b458f;
case 0x5b4593:c.instructions+=7;goto B5b4593;
case 0x5b4597:c.instructions+=6;goto B5b4597;
case 0x5b459e:c.instructions+=5;goto B5b459e;
case 0x5b45a5:c.instructions+=4;goto B5b45a5;
case 0x5b45a7:c.instructions+=3;goto B5b45a7;
case 0x5b45ab:c.instructions+=2;goto B5b45ab;
case 0x5b45af:c.instructions+=1;goto B5b45af;
case 0x5b45b3:goto L5b45b3;
case 0x5b45b6:c.instructions+=2;goto B5b45b6;
case 0x5b45b8:c.instructions+=1;goto B5b45b8;
case 0x5b45bb:goto L5b45bb;
case 0x5b45bd:c.instructions+=1;goto B5b45bd;
case 0x5b45bf:goto L5b45bf;
case 0x5b45c6:c.instructions+=11;goto B5b45c6;
case 0x5b45ca:c.instructions+=10;goto B5b45ca;
case 0x5b45d1:c.instructions+=9;goto B5b45d1;
case 0x5b45d5:c.instructions+=8;goto B5b45d5;
case 0x5b45dc:c.instructions+=7;goto B5b45dc;
case 0x5b45e0:c.instructions+=6;goto B5b45e0;
case 0x5b45e7:c.instructions+=5;goto B5b45e7;
case 0x5b45ee:c.instructions+=4;goto B5b45ee;
case 0x5b45f0:c.instructions+=3;goto B5b45f0;
case 0x5b45f7:c.instructions+=2;goto B5b45f7;
case 0x5b45fe:c.instructions+=1;goto B5b45fe;
case 0x5b4605:goto L5b4605;
case 0x5b460c:c.instructions+=9;goto B5b460c;
case 0x5b460d:c.instructions+=8;goto B5b460d;
case 0x5b4614:c.instructions+=7;goto B5b4614;
case 0x5b4615:c.instructions+=6;goto B5b4615;
case 0x5b4619:c.instructions+=5;goto B5b4619;
case 0x5b461a:c.instructions+=4;goto B5b461a;
case 0x5b4621:c.instructions+=3;goto B5b4621;
case 0x5b4622:c.instructions+=2;goto B5b4622;
case 0x5b4625:c.instructions+=1;goto B5b4625;
case 0x5b462a:goto L5b462a;
case 0x5b462d:c.instructions+=1;goto B5b462d;
case 0x5b4632:goto L5b4632;
case 0x5b4634:c.instructions+=10;goto B5b4634;
case 0x5b4638:c.instructions+=9;goto B5b4638;
case 0x5b463c:c.instructions+=8;goto B5b463c;
case 0x5b4640:c.instructions+=7;goto B5b4640;
case 0x5b4643:c.instructions+=6;goto B5b4643;
case 0x5b4646:c.instructions+=5;goto B5b4646;
case 0x5b4649:c.instructions+=4;goto B5b4649;
case 0x5b464c:c.instructions+=3;goto B5b464c;
case 0x5b464f:c.instructions+=2;goto B5b464f;
case 0x5b4651:c.instructions+=1;goto B5b4651;
case 0x5b4653:goto L5b4653;
case 0x5b4656:c.instructions+=2;goto B5b4656;
case 0x5b4658:c.instructions+=1;goto B5b4658;
case 0x5b465a:goto L5b465a;
case 0x5b465b:c.instructions+=2;goto B5b465b;
case 0x5b465e:c.instructions+=1;goto B5b465e;
case 0x5b4664:goto L5b4664;
case 0x5b4665:c.instructions+=4;goto B5b4665;
case 0x5b4666:c.instructions+=3;goto B5b4666;
case 0x5b4668:c.instructions+=2;goto B5b4668;
case 0x5b4669:c.instructions+=1;goto B5b4669;
case 0x5b4670:goto L5b4670;
case 0x5b4674:c.instructions+=7;goto B5b4674;
case 0x5b4676:c.instructions+=6;goto B5b4676;
case 0x5b4677:c.instructions+=5;goto B5b4677;
case 0x5b4678:c.instructions+=4;goto B5b4678;
case 0x5b4679:c.instructions+=3;goto B5b4679;
case 0x5b467d:c.instructions+=2;goto B5b467d;
case 0x5b467f:c.instructions+=1;goto B5b467f;
case 0x5b4681:goto L5b4681;
case 0x5b4685:c.instructions+=4;goto B5b4685;
case 0x5b4687:c.instructions+=3;goto B5b4687;
case 0x5b4688:c.instructions+=2;goto B5b4688;
case 0x5b4689:c.instructions+=1;goto B5b4689;
case 0x5b468e:goto L5b468e;
case 0x5b4692:c.instructions+=1;goto B5b4692;
case 0x5b4694:goto L5b4694;
case 0x5b4698:c.instructions+=1;goto B5b4698;
case 0x5b469c:goto L5b469c;
case 0x5b46a0:c.instructions+=6;goto B5b46a0;
case 0x5b46a4:c.instructions+=5;goto B5b46a4;
case 0x5b46a5:c.instructions+=4;goto B5b46a5;
case 0x5b46a6:c.instructions+=3;goto B5b46a6;
case 0x5b46a7:c.instructions+=2;goto B5b46a7;
case 0x5b46a9:c.instructions+=1;goto B5b46a9;
case 0x5b46ae:goto L5b46ae;
case 0x5b46b2:c.instructions+=6;goto B5b46b2;
case 0x5b46b6:c.instructions+=5;goto B5b46b6;
case 0x5b46b7:c.instructions+=4;goto B5b46b7;
case 0x5b46b8:c.instructions+=3;goto B5b46b8;
case 0x5b46b9:c.instructions+=2;goto B5b46b9;
case 0x5b46bb:c.instructions+=1;goto B5b46bb;
case 0x5b46c0:goto L5b46c0;
case 0x5b46c3:c.instructions+=1;goto B5b46c3;
case 0x5b46c9:goto L5b46c9;
case 0x5b46cc:c.instructions+=1;goto B5b46cc;
case 0x5b46d2:goto L5b46d2;
case 0x5b46d5:c.instructions+=1;goto B5b46d5;
case 0x5b46d7:goto L5b46d7;
case 0x5b46da:c.instructions+=1;goto B5b46da;
case 0x5b46dc:goto L5b46dc;
case 0x5b46e1:goto L5b46e1;
case 0x5b46e2:c.instructions+=2;goto B5b46e2;
case 0x5b46e4:c.instructions+=1;goto B5b46e4;
case 0x5b46e9:goto L5b46e9;
case 0x5b46eb:c.instructions+=1;goto B5b46eb;
case 0x5b46ed:goto L5b46ed;
case 0x5b46ef:c.instructions+=3;goto B5b46ef;
case 0x5b46f0:c.instructions+=2;goto B5b46f0;
case 0x5b46f2:c.instructions+=1;goto B5b46f2;
case 0x5b46f7:goto L5b46f7;
case 0x5b46fb:c.instructions+=6;goto B5b46fb;
case 0x5b46ff:c.instructions+=5;goto B5b46ff;
case 0x5b4701:c.instructions+=4;goto B5b4701;
case 0x5b4702:c.instructions+=3;goto B5b4702;
case 0x5b4703:c.instructions+=2;goto B5b4703;
case 0x5b4705:c.instructions+=1;goto B5b4705;
case 0x5b470a:goto L5b470a;
case 0x5b470c:goto L5b470c;
case 0x5b470d:c.instructions+=2;goto B5b470d;
case 0x5b4710:c.instructions+=1;goto B5b4710;
case 0x5b4712:goto L5b4712;
case 0x5b4713:c.instructions+=3;goto B5b4713;
case 0x5b4714:c.instructions+=2;goto B5b4714;
case 0x5b4715:c.instructions+=1;goto B5b4715;
case 0x5b4718:goto L5b4718;
case 0x5b471b:c.instructions+=1;goto B5b471b;
case 0x5b471d:goto L5b471d;
case 0x5b4720:c.instructions+=1;goto B5b4720;
case 0x5b4722:goto L5b4722;
case 0x5b4724:c.instructions+=8;goto B5b4724;
case 0x5b4727:c.instructions+=7;goto B5b4727;
case 0x5b472a:c.instructions+=6;goto B5b472a;
case 0x5b472c:c.instructions+=5;goto B5b472c;
case 0x5b472e:c.instructions+=4;goto B5b472e;
case 0x5b4731:c.instructions+=3;goto B5b4731;
case 0x5b4733:c.instructions+=2;goto B5b4733;
case 0x5b4734:c.instructions+=1;goto B5b4734;
case 0x5b4739:goto L5b4739;
case 0x5b473d:c.instructions+=6;goto B5b473d;
case 0x5b4741:c.instructions+=5;goto B5b4741;
case 0x5b4743:c.instructions+=4;goto B5b4743;
case 0x5b4744:c.instructions+=3;goto B5b4744;
case 0x5b4745:c.instructions+=2;goto B5b4745;
case 0x5b4747:c.instructions+=1;goto B5b4747;
case 0x5b474c:goto L5b474c;
case 0x5b474e:c.instructions+=4;goto B5b474e;
case 0x5b474f:c.instructions+=3;goto B5b474f;
case 0x5b4750:c.instructions+=2;goto B5b4750;
case 0x5b4751:c.instructions+=1;goto B5b4751;
case 0x5b4754:goto L5b4754;
case 0x5b4756:goto L5b4756;
case 0x5b4757:c.instructions+=3;goto B5b4757;
case 0x5b4758:c.instructions+=2;goto B5b4758;
case 0x5b475a:c.instructions+=1;goto B5b475a;
case 0x5b475f:goto L5b475f;
case 0x5b4763:c.instructions+=6;goto B5b4763;
case 0x5b4767:c.instructions+=5;goto B5b4767;
case 0x5b4768:c.instructions+=4;goto B5b4768;
case 0x5b4769:c.instructions+=3;goto B5b4769;
case 0x5b476a:c.instructions+=2;goto B5b476a;
case 0x5b476c:c.instructions+=1;goto B5b476c;
case 0x5b4771:goto L5b4771;
case 0x5b4773:c.instructions+=3;goto B5b4773;
case 0x5b4774:c.instructions+=2;goto B5b4774;
case 0x5b4777:c.instructions+=1;goto B5b4777;
case 0x5b4779:goto L5b4779;
case 0x5b477a:c.instructions+=3;goto B5b477a;
case 0x5b477b:c.instructions+=2;goto B5b477b;
case 0x5b477c:c.instructions+=1;goto B5b477c;
case 0x5b4780:goto L5b4780;
case 0x5b4783:c.instructions+=5;goto B5b4783;
case 0x5b4784:c.instructions+=4;goto B5b4784;
case 0x5b4786:c.instructions+=3;goto B5b4786;
case 0x5b478c:c.instructions+=2;goto B5b478c;
case 0x5b478e:c.instructions+=1;goto B5b478e;
case 0x5b4790:goto L5b4790;
case 0x5b4793:c.instructions+=8;goto B5b4793;
case 0x5b4796:c.instructions+=7;goto B5b4796;
case 0x5b479c:c.instructions+=6;goto B5b479c;
case 0x5b479f:c.instructions+=5;goto B5b479f;
case 0x5b47a0:c.instructions+=4;goto B5b47a0;
case 0x5b47a5:c.instructions+=3;goto B5b47a5;
case 0x5b47a6:c.instructions+=2;goto B5b47a6;
case 0x5b47ad:c.instructions+=1;goto B5b47ad;
case 0x5b47b2:goto L5b47b2;
case 0x5b47b8:c.instructions+=9;goto B5b47b8;
case 0x5b47b9:c.instructions+=8;goto B5b47b9;
case 0x5b47ba:c.instructions+=7;goto B5b47ba;
case 0x5b47bb:c.instructions+=6;goto B5b47bb;
case 0x5b47bc:c.instructions+=5;goto B5b47bc;
case 0x5b47c2:c.instructions+=4;goto B5b47c2;
case 0x5b47c5:c.instructions+=3;goto B5b47c5;
case 0x5b47c7:c.instructions+=2;goto B5b47c7;
case 0x5b47cc:c.instructions+=1;goto B5b47cc;
case 0x5b47ce:goto L5b47ce;
case 0x5b47d0:goto L5b47d0;
case 0x5b47d5:c.instructions+=1;goto B5b47d5;
case 0x5b47d8:goto L5b47d8;
case 0x5b47da:goto L5b47da;
case 0x5b47df:c.instructions+=1;goto B5b47df;
case 0x5b47e5:goto L5b47e5;
case 0x5b47e7:goto L5b47e7;
case 0x5b47e9:c.instructions+=1;goto B5b47e9;
case 0x5b47f0:goto L5b47f0;
case 0x5b47f3:c.instructions+=1;goto B5b47f3;
case 0x5b47f5:goto L5b47f5;
case 0x5b47f8:c.instructions+=3;goto B5b47f8;
case 0x5b47f9:c.instructions+=2;goto B5b47f9;
case 0x5b47fa:c.instructions+=1;goto B5b47fa;
case 0x5b47ff:goto L5b47ff;
case 0x5b4802:c.instructions+=2;goto B5b4802;
case 0x5b4804:c.instructions+=1;goto B5b4804;
case 0x5b4806:goto L5b4806;
case 0x5b4808:c.instructions+=1;goto B5b4808;
case 0x5b480a:goto L5b480a;
case 0x5b480c:goto L5b480c;
case 0x5b480f:c.instructions+=1;goto B5b480f;
case 0x5b4811:goto L5b4811;
case 0x5b4814:c.instructions+=1;goto B5b4814;
case 0x5b4816:goto L5b4816;
case 0x5b4818:c.instructions+=1;goto B5b4818;
case 0x5b481a:goto L5b481a;
case 0x5b481d:c.instructions+=5;goto B5b481d;
case 0x5b4823:c.instructions+=4;goto B5b4823;
case 0x5b4826:c.instructions+=3;goto B5b4826;
case 0x5b4829:c.instructions+=2;goto B5b4829;
case 0x5b482b:c.instructions+=1;goto B5b482b;
case 0x5b482d:goto L5b482d;
case 0x5b482f:goto L5b482f;
case 0x5b4831:c.instructions+=1;goto B5b4831;
case 0x5b4833:goto L5b4833;
case 0x5b4835:c.instructions+=3;goto B5b4835;
case 0x5b4836:c.instructions+=2;goto B5b4836;
case 0x5b4838:c.instructions+=1;goto B5b4838;
case 0x5b483d:goto L5b483d;
case 0x5b4840:c.instructions+=1;goto B5b4840;
case 0x5b4842:goto L5b4842;
case 0x5b4845:c.instructions+=2;goto B5b4845;
case 0x5b4848:c.instructions+=1;goto B5b4848;
case 0x5b484a:goto L5b484a;
case 0x5b484c:goto L5b484c;
case 0x5b4852:c.instructions+=1;goto B5b4852;
case 0x5b4854:goto L5b4854;
case 0x5b4857:c.instructions+=1;goto B5b4857;
case 0x5b4859:goto L5b4859;
case 0x5b485f:c.instructions+=1;goto B5b485f;
case 0x5b4861:goto L5b4861;
case 0x5b4863:goto L5b4863;
case 0x5b4864:c.instructions+=2;goto B5b4864;
case 0x5b4867:c.instructions+=1;goto B5b4867;
case 0x5b4869:goto L5b4869;
case 0x5b486b:c.instructions+=1;goto B5b486b;
case 0x5b4870:goto L5b4870;
case 0x5b4873:c.instructions+=1;goto B5b4873;
case 0x5b4875:goto L5b4875;
case 0x5b4878:c.instructions+=3;goto B5b4878;
case 0x5b4879:c.instructions+=2;goto B5b4879;
case 0x5b487a:c.instructions+=1;goto B5b487a;
case 0x5b487f:goto L5b487f;
case 0x5b4882:c.instructions+=2;goto B5b4882;
case 0x5b4884:c.instructions+=1;goto B5b4884;
case 0x5b4886:goto L5b4886;
case 0x5b4888:c.instructions+=1;goto B5b4888;
case 0x5b488a:goto L5b488a;
case 0x5b488c:goto L5b488c;
case 0x5b488f:c.instructions+=1;goto B5b488f;
case 0x5b4891:goto L5b4891;
case 0x5b4894:c.instructions+=1;goto B5b4894;
case 0x5b4896:goto L5b4896;
case 0x5b4898:c.instructions+=1;goto B5b4898;
case 0x5b489e:goto L5b489e;
case 0x5b48a1:c.instructions+=5;goto B5b48a1;
case 0x5b48a7:c.instructions+=4;goto B5b48a7;
case 0x5b48aa:c.instructions+=3;goto B5b48aa;
case 0x5b48ad:c.instructions+=2;goto B5b48ad;
case 0x5b48af:c.instructions+=1;goto B5b48af;
case 0x5b48b1:goto L5b48b1;
case 0x5b48b6:goto L5b48b6;
case 0x5b48b8:c.instructions+=1;goto B5b48b8;
case 0x5b48be:goto L5b48be;
case 0x5b48c1:c.instructions+=2;goto B5b48c1;
case 0x5b48c9:c.instructions+=1;goto B5b48c9;
case 0x5b48cb:goto L5b48cb;
case 0x5b48cf:c.instructions+=3;goto B5b48cf;
case 0x5b48d2:c.instructions+=2;goto B5b48d2;
case 0x5b48d6:c.instructions+=1;goto B5b48d6;
case 0x5b48d8:goto L5b48d8;
case 0x5b48da:goto L5b48da;
case 0x5b48e0:c.instructions+=2;goto B5b48e0;
case 0x5b48e4:c.instructions+=1;goto B5b48e4;
case 0x5b48e6:goto L5b48e6;
case 0x5b48e9:c.instructions+=1;goto B5b48e9;
case 0x5b48eb:goto L5b48eb;
case 0x5b48f1:c.instructions+=1;goto B5b48f1;
case 0x5b48f5:goto L5b48f5;
case 0x5b48f7:c.instructions+=8;goto B5b48f7;
case 0x5b48f9:c.instructions+=7;goto B5b48f9;
case 0x5b48fd:c.instructions+=6;goto B5b48fd;
case 0x5b48fe:c.instructions+=5;goto B5b48fe;
case 0x5b4902:c.instructions+=4;goto B5b4902;
case 0x5b4903:c.instructions+=3;goto B5b4903;
case 0x5b4904:c.instructions+=2;goto B5b4904;
case 0x5b4906:c.instructions+=1;goto B5b4906;
case 0x5b490b:goto L5b490b;
case 0x5b490d:c.instructions+=3;goto B5b490d;
case 0x5b490e:c.instructions+=2;goto B5b490e;
case 0x5b4911:c.instructions+=1;goto B5b4911;
case 0x5b4916:goto L5b4916;
case 0x5b491a:c.instructions+=6;goto B5b491a;
case 0x5b491d:c.instructions+=5;goto B5b491d;
case 0x5b4921:c.instructions+=4;goto B5b4921;
case 0x5b4923:c.instructions+=3;goto B5b4923;
case 0x5b4927:c.instructions+=2;goto B5b4927;
case 0x5b492b:c.instructions+=1;goto B5b492b;
case 0x5b492d:goto L5b492d;
case 0x5b4930:c.instructions+=1;goto B5b4930;
case 0x5b4932:goto L5b4932;
case 0x5b4936:c.instructions+=5;goto B5b4936;
case 0x5b4938:c.instructions+=4;goto B5b4938;
case 0x5b4939:c.instructions+=3;goto B5b4939;
case 0x5b493a:c.instructions+=2;goto B5b493a;
case 0x5b493c:c.instructions+=1;goto B5b493c;
case 0x5b4941:goto L5b4941;
case 0x5b4943:goto L5b4943;
case 0x5b4947:c.instructions+=6;goto B5b4947;
case 0x5b4949:c.instructions+=5;goto B5b4949;
case 0x5b494b:c.instructions+=4;goto B5b494b;
case 0x5b494c:c.instructions+=3;goto B5b494c;
case 0x5b494d:c.instructions+=2;goto B5b494d;
case 0x5b494f:c.instructions+=1;goto B5b494f;
case 0x5b4954:goto L5b4954;
case 0x5b4955:c.instructions+=2;goto B5b4955;
case 0x5b4958:c.instructions+=1;goto B5b4958;
case 0x5b495e:goto L5b495e;
case 0x5b4963:goto L5b4963;
case 0x5b4966:c.instructions+=1;goto B5b4966;
case 0x5b4968:goto L5b4968;
case 0x5b496b:c.instructions+=3;goto B5b496b;
case 0x5b496c:c.instructions+=2;goto B5b496c;
case 0x5b496d:c.instructions+=1;goto B5b496d;
case 0x5b4972:goto L5b4972;
case 0x5b4975:c.instructions+=2;goto B5b4975;
case 0x5b4977:c.instructions+=1;goto B5b4977;
case 0x5b4979:goto L5b4979;
case 0x5b497b:c.instructions+=1;goto B5b497b;
case 0x5b497d:goto L5b497d;
case 0x5b497f:goto L5b497f;
case 0x5b4982:c.instructions+=1;goto B5b4982;
case 0x5b4984:goto L5b4984;
case 0x5b4987:c.instructions+=1;goto B5b4987;
case 0x5b4989:goto L5b4989;
case 0x5b498b:c.instructions+=1;goto B5b498b;
case 0x5b4991:goto L5b4991;
case 0x5b4994:c.instructions+=5;goto B5b4994;
case 0x5b499a:c.instructions+=4;goto B5b499a;
case 0x5b499d:c.instructions+=3;goto B5b499d;
case 0x5b49a0:c.instructions+=2;goto B5b49a0;
case 0x5b49a2:c.instructions+=1;goto B5b49a2;
case 0x5b49a4:goto L5b49a4;
case 0x5b49a6:goto L5b49a6;
case 0x5b49a8:c.instructions+=1;goto B5b49a8;
case 0x5b49aa:goto L5b49aa;
case 0x5b49ad:c.instructions+=2;goto B5b49ad;
case 0x5b49b5:c.instructions+=1;goto B5b49b5;
case 0x5b49b7:goto L5b49b7;
case 0x5b49bb:c.instructions+=3;goto B5b49bb;
case 0x5b49be:c.instructions+=2;goto B5b49be;
case 0x5b49c2:c.instructions+=1;goto B5b49c2;
case 0x5b49c4:goto L5b49c4;
case 0x5b49c6:goto L5b49c6;
case 0x5b49cc:c.instructions+=2;goto B5b49cc;
case 0x5b49d0:c.instructions+=1;goto B5b49d0;
case 0x5b49d2:goto L5b49d2;
case 0x5b49d5:c.instructions+=1;goto B5b49d5;
case 0x5b49d7:goto L5b49d7;
case 0x5b49dd:c.instructions+=1;goto B5b49dd;
case 0x5b49e1:goto L5b49e1;
case 0x5b49e3:c.instructions+=8;goto B5b49e3;
case 0x5b49e5:c.instructions+=7;goto B5b49e5;
case 0x5b49e9:c.instructions+=6;goto B5b49e9;
case 0x5b49ea:c.instructions+=5;goto B5b49ea;
case 0x5b49ee:c.instructions+=4;goto B5b49ee;
case 0x5b49ef:c.instructions+=3;goto B5b49ef;
case 0x5b49f0:c.instructions+=2;goto B5b49f0;
case 0x5b49f2:c.instructions+=1;goto B5b49f2;
case 0x5b49f7:goto L5b49f7;
case 0x5b49f9:c.instructions+=6;goto B5b49f9;
case 0x5b49fb:c.instructions+=5;goto B5b49fb;
case 0x5b49fc:c.instructions+=4;goto B5b49fc;
case 0x5b49fe:c.instructions+=3;goto B5b49fe;
case 0x5b49ff:c.instructions+=2;goto B5b49ff;
case 0x5b4a02:c.instructions+=1;goto B5b4a02;
case 0x5b4a07:goto L5b4a07;
case 0x5b4a0b:c.instructions+=7;goto B5b4a0b;
case 0x5b4a0f:c.instructions+=6;goto B5b4a0f;
case 0x5b4a10:c.instructions+=5;goto B5b4a10;
case 0x5b4a12:c.instructions+=4;goto B5b4a12;
case 0x5b4a14:c.instructions+=3;goto B5b4a14;
case 0x5b4a18:c.instructions+=2;goto B5b4a18;
case 0x5b4a1b:c.instructions+=1;goto B5b4a1b;
case 0x5b4a20:goto L5b4a20;
case 0x5b4a21:c.instructions+=2;goto B5b4a21;
case 0x5b4a24:c.instructions+=1;goto B5b4a24;
case 0x5b4a2a:goto L5b4a2a;
case 0x5b4a2d:c.instructions+=4;goto B5b4a2d;
case 0x5b4a35:c.instructions+=3;goto B5b4a35;
case 0x5b4a3a:c.instructions+=2;goto B5b4a3a;
case 0x5b4a3f:c.instructions+=1;goto B5b4a3f;
case 0x5b4a40:goto L5b4a40;
case 0x5b4a44:c.instructions+=5;goto B5b4a44;
case 0x5b4a47:c.instructions+=4;goto B5b4a47;
case 0x5b4a48:c.instructions+=3;goto B5b4a48;
case 0x5b4a4b:c.instructions+=2;goto B5b4a4b;
case 0x5b4a4f:c.instructions+=1;goto B5b4a4f;
case 0x5b4a51:goto L5b4a51;
case 0x5b4a56:goto L5b4a56;
case 0x5b4a59:c.instructions+=1;goto B5b4a59;
case 0x5b4a5b:goto L5b4a5b;
case 0x5b4a5e:c.instructions+=3;goto B5b4a5e;
case 0x5b4a5f:c.instructions+=2;goto B5b4a5f;
case 0x5b4a60:c.instructions+=1;goto B5b4a60;
case 0x5b4a65:goto L5b4a65;
case 0x5b4a68:c.instructions+=2;goto B5b4a68;
case 0x5b4a6a:c.instructions+=1;goto B5b4a6a;
case 0x5b4a6c:goto L5b4a6c;
case 0x5b4a6e:c.instructions+=1;goto B5b4a6e;
case 0x5b4a70:goto L5b4a70;
case 0x5b4a72:goto L5b4a72;
case 0x5b4a75:c.instructions+=1;goto B5b4a75;
case 0x5b4a77:goto L5b4a77;
case 0x5b4a7a:c.instructions+=1;goto B5b4a7a;
case 0x5b4a7c:goto L5b4a7c;
case 0x5b4a7e:c.instructions+=1;goto B5b4a7e;
case 0x5b4a84:goto L5b4a84;
case 0x5b4a87:c.instructions+=5;goto B5b4a87;
case 0x5b4a8d:c.instructions+=4;goto B5b4a8d;
case 0x5b4a90:c.instructions+=3;goto B5b4a90;
case 0x5b4a93:c.instructions+=2;goto B5b4a93;
case 0x5b4a95:c.instructions+=1;goto B5b4a95;
case 0x5b4a97:goto L5b4a97;
case 0x5b4a9c:goto L5b4a9c;
case 0x5b4a9e:c.instructions+=1;goto B5b4a9e;
case 0x5b4aa4:goto L5b4aa4;
case 0x5b4aa6:c.instructions+=2;goto B5b4aa6;
case 0x5b4aab:c.instructions+=1;goto B5b4aab;
case 0x5b4ab0:goto L5b4ab0;
case 0x5b4ab1:c.instructions+=3;goto B5b4ab1;
case 0x5b4ab2:c.instructions+=2;goto B5b4ab2;
case 0x5b4ab4:c.instructions+=1;goto B5b4ab4;
case 0x5b4ab9:goto L5b4ab9;
case 0x5b4abc:c.instructions+=1;goto B5b4abc;
case 0x5b4abe:goto L5b4abe;
case 0x5b4ac1:c.instructions+=2;goto B5b4ac1;
case 0x5b4ac4:c.instructions+=1;goto B5b4ac4;
case 0x5b4ac6:goto L5b4ac6;
case 0x5b4ac8:goto L5b4ac8;
case 0x5b4acc:c.instructions+=1;goto B5b4acc;
case 0x5b4ace:goto L5b4ace;
case 0x5b4ad1:c.instructions+=1;goto B5b4ad1;
case 0x5b4ad3:goto L5b4ad3;
case 0x5b4ad7:c.instructions+=1;goto B5b4ad7;
case 0x5b4ad9:goto L5b4ad9;
case 0x5b4adb:goto L5b4adb;
case 0x5b4ade:c.instructions+=3;goto B5b4ade;
case 0x5b4adf:c.instructions+=2;goto B5b4adf;
case 0x5b4ae5:c.instructions+=1;goto B5b4ae5;
case 0x5b4ae7:goto L5b4ae7;
case 0x5b4ae9:c.instructions+=2;goto B5b4ae9;
case 0x5b4aee:c.instructions+=1;goto B5b4aee;
case 0x5b4af0:goto L5b4af0;
case 0x5b4af3:c.instructions+=2;goto B5b4af3;
case 0x5b4afb:c.instructions+=1;goto B5b4afb;
case 0x5b4afd:goto L5b4afd;
case 0x5b4b01:c.instructions+=2;goto B5b4b01;
case 0x5b4b04:c.instructions+=1;goto B5b4b04;
case 0x5b4b06:goto L5b4b06;
case 0x5b4b08:goto L5b4b08;
case 0x5b4b0c:c.instructions+=1;goto B5b4b0c;
case 0x5b4b0e:goto L5b4b0e;
case 0x5b4b11:c.instructions+=1;goto B5b4b11;
case 0x5b4b13:goto L5b4b13;
case 0x5b4b17:goto L5b4b17;
case 0x5b4b1b:goto L5b4b1b;
case 0x5b4b1d:c.instructions+=8;goto B5b4b1d;
case 0x5b4b1e:c.instructions+=7;goto B5b4b1e;
case 0x5b4b22:c.instructions+=6;goto B5b4b22;
case 0x5b4b23:c.instructions+=5;goto B5b4b23;
case 0x5b4b27:c.instructions+=4;goto B5b4b27;
case 0x5b4b28:c.instructions+=3;goto B5b4b28;
case 0x5b4b29:c.instructions+=2;goto B5b4b29;
case 0x5b4b2b:c.instructions+=1;goto B5b4b2b;
case 0x5b4b30:goto L5b4b30;
case 0x5b4b32:c.instructions+=6;goto B5b4b32;
case 0x5b4b33:c.instructions+=5;goto B5b4b33;
case 0x5b4b34:c.instructions+=4;goto B5b4b34;
case 0x5b4b35:c.instructions+=3;goto B5b4b35;
case 0x5b4b36:c.instructions+=2;goto B5b4b36;
case 0x5b4b39:c.instructions+=1;goto B5b4b39;
case 0x5b4b3e:goto L5b4b3e;
case 0x5b4b42:c.instructions+=7;goto B5b4b42;
case 0x5b4b46:c.instructions+=6;goto B5b4b46;
case 0x5b4b47:c.instructions+=5;goto B5b4b47;
case 0x5b4b49:c.instructions+=4;goto B5b4b49;
case 0x5b4b4b:c.instructions+=3;goto B5b4b4b;
case 0x5b4b4f:c.instructions+=2;goto B5b4b4f;
case 0x5b4b52:c.instructions+=1;goto B5b4b52;
case 0x5b4b57:goto L5b4b57;
case 0x5b4b5a:c.instructions+=3;goto B5b4b5a;
case 0x5b4b5b:c.instructions+=2;goto B5b4b5b;
case 0x5b4b61:c.instructions+=1;goto B5b4b61;
case 0x5b4b63:goto L5b4b63;
case 0x5b4b64:c.instructions+=2;goto B5b4b64;
case 0x5b4b67:c.instructions+=1;goto B5b4b67;
case 0x5b4b6d:goto L5b4b6d;
case 0x5b4b70:c.instructions+=6;goto B5b4b70;
case 0x5b4b76:c.instructions+=5;goto B5b4b76;
case 0x5b4b77:c.instructions+=4;goto B5b4b77;
case 0x5b4b78:c.instructions+=3;goto B5b4b78;
case 0x5b4b7d:c.instructions+=2;goto B5b4b7d;
case 0x5b4b82:c.instructions+=1;goto B5b4b82;
case 0x5b4b83:goto L5b4b83;
case 0x5b4b85:c.instructions+=3;goto B5b4b85;
case 0x5b4b88:c.instructions+=2;goto B5b4b88;
case 0x5b4b89:c.instructions+=1;goto B5b4b89;
case 0x5b4b8b:goto L5b4b8b;
case 0x5b4b8f:c.instructions+=5;goto B5b4b8f;
case 0x5b4b91:c.instructions+=4;goto B5b4b91;
case 0x5b4b97:c.instructions+=3;goto B5b4b97;
case 0x5b4b99:c.instructions+=2;goto B5b4b99;
case 0x5b4b9c:c.instructions+=1;goto B5b4b9c;
case 0x5b4b9e:goto L5b4b9e;
case 0x5b4ba2:c.instructions+=3;goto B5b4ba2;
case 0x5b4ba3:c.instructions+=2;goto B5b4ba3;
case 0x5b4ba5:c.instructions+=1;goto B5b4ba5;
case 0x5b4baa:goto L5b4baa;
case 0x5b4bb0:c.instructions+=1;goto B5b4bb0;
case 0x5b4bb2:goto L5b4bb2;
case 0x5b4bb5:c.instructions+=8;goto B5b4bb5;
case 0x5b4bb8:c.instructions+=7;goto B5b4bb8;
case 0x5b4bbe:c.instructions+=6;goto B5b4bbe;
case 0x5b4bc1:c.instructions+=5;goto B5b4bc1;
case 0x5b4bc2:c.instructions+=4;goto B5b4bc2;
case 0x5b4bc7:c.instructions+=3;goto B5b4bc7;
case 0x5b4bc8:c.instructions+=2;goto B5b4bc8;
case 0x5b4bcf:c.instructions+=1;goto B5b4bcf;
case 0x5b4bd4:goto L5b4bd4;
case 0x5b4bd5:c.instructions+=2;goto B5b4bd5;
case 0x5b4bd8:c.instructions+=1;goto B5b4bd8;
case 0x5b4be0:goto L5b4be0;
case 0x5b4be1:c.instructions+=10;goto B5b4be1;
case 0x5b4be3:c.instructions+=9;goto B5b4be3;
case 0x5b4be6:c.instructions+=8;goto B5b4be6;
case 0x5b4bec:c.instructions+=7;goto B5b4bec;
case 0x5b4bed:c.instructions+=6;goto B5b4bed;
case 0x5b4bee:c.instructions+=5;goto B5b4bee;
case 0x5b4bf2:c.instructions+=4;goto B5b4bf2;
case 0x5b4bf3:c.instructions+=3;goto B5b4bf3;
case 0x5b4bf4:c.instructions+=2;goto B5b4bf4;
case 0x5b4bf6:c.instructions+=1;goto B5b4bf6;
case 0x5b4bfb:goto L5b4bfb;
case 0x5b4bfd:c.instructions+=10;goto B5b4bfd;
case 0x5b4c00:c.instructions+=9;goto B5b4c00;
case 0x5b4c03:c.instructions+=8;goto B5b4c03;
case 0x5b4c06:c.instructions+=7;goto B5b4c06;
case 0x5b4c09:c.instructions+=6;goto B5b4c09;
case 0x5b4c11:c.instructions+=5;goto B5b4c11;
case 0x5b4c19:c.instructions+=4;goto B5b4c19;
case 0x5b4c21:c.instructions+=3;goto B5b4c21;
case 0x5b4c23:c.instructions+=2;goto B5b4c23;
case 0x5b4c26:c.instructions+=1;goto B5b4c26;
case 0x5b4c29:goto L5b4c29;
case 0x5b4c2d:c.instructions+=3;goto B5b4c2d;
case 0x5b4c30:c.instructions+=2;goto B5b4c30;
case 0x5b4c32:c.instructions+=1;goto B5b4c32;
case 0x5b4c35:goto L5b4c35;
case 0x5b4c39:c.instructions+=4;goto B5b4c39;
case 0x5b4c3b:c.instructions+=3;goto B5b4c3b;
case 0x5b4c3d:c.instructions+=2;goto B5b4c3d;
case 0x5b4c40:c.instructions+=1;goto B5b4c40;
case 0x5b4c42:goto L5b4c42;
case 0x5b4c46:c.instructions+=3;goto B5b4c46;
case 0x5b4c48:c.instructions+=2;goto B5b4c48;
case 0x5b4c4c:c.instructions+=1;goto B5b4c4c;
case 0x5b4c4e:goto L5b4c4e;
case 0x5b4c52:goto L5b4c52;
case 0x5b4c55:c.instructions+=5;goto B5b4c55;
case 0x5b4c58:c.instructions+=4;goto B5b4c58;
case 0x5b4c5a:c.instructions+=3;goto B5b4c5a;
case 0x5b4c62:c.instructions+=2;goto B5b4c62;
case 0x5b4c6a:c.instructions+=1;goto B5b4c6a;
case 0x5b4c6c:goto L5b4c6c;
case 0x5b4c72:c.instructions+=6;goto B5b4c72;
case 0x5b4c73:c.instructions+=5;goto B5b4c73;
case 0x5b4c74:c.instructions+=4;goto B5b4c74;
case 0x5b4c75:c.instructions+=3;goto B5b4c75;
case 0x5b4c77:c.instructions+=2;goto B5b4c77;
case 0x5b4c78:c.instructions+=1;goto B5b4c78;
case 0x5b4c79:goto L5b4c79;
case 0x5b4c7b:c.instructions+=1;goto B5b4c7b;
case 0x5b4c80:goto L5b4c80;
case 0x5b4c84:c.instructions+=13;goto B5b4c84;
case 0x5b4c87:c.instructions+=12;goto B5b4c87;
case 0x5b4c8b:c.instructions+=11;goto B5b4c8b;
case 0x5b4c8d:c.instructions+=10;goto B5b4c8d;
case 0x5b4c94:c.instructions+=9;goto B5b4c94;
case 0x5b4c9a:c.instructions+=8;goto B5b4c9a;
case 0x5b4c9e:c.instructions+=7;goto B5b4c9e;
case 0x5b4ca2:c.instructions+=6;goto B5b4ca2;
case 0x5b4ca6:c.instructions+=5;goto B5b4ca6;
case 0x5b4ca7:c.instructions+=4;goto B5b4ca7;
case 0x5b4ca8:c.instructions+=3;goto B5b4ca8;
case 0x5b4cac:c.instructions+=2;goto B5b4cac;
case 0x5b4cad:c.instructions+=1;goto B5b4cad;
case 0x5b4cb0:goto L5b4cb0;
case 0x5b4cb3:c.instructions+=7;goto B5b4cb3;
case 0x5b4cb5:c.instructions+=6;goto B5b4cb5;
case 0x5b4cb6:c.instructions+=5;goto B5b4cb6;
case 0x5b4cba:c.instructions+=4;goto B5b4cba;
case 0x5b4cbb:c.instructions+=3;goto B5b4cbb;
case 0x5b4cbf:c.instructions+=2;goto B5b4cbf;
case 0x5b4cc0:c.instructions+=1;goto B5b4cc0;
case 0x5b4cc3:goto L5b4cc3;
case 0x5b4cc7:c.instructions+=9;goto B5b4cc7;
case 0x5b4cc8:c.instructions+=8;goto B5b4cc8;
case 0x5b4ccc:c.instructions+=7;goto B5b4ccc;
case 0x5b4ccd:c.instructions+=6;goto B5b4ccd;
case 0x5b4cd1:c.instructions+=5;goto B5b4cd1;
case 0x5b4cd2:c.instructions+=4;goto B5b4cd2;
case 0x5b4cd9:c.instructions+=3;goto B5b4cd9;
case 0x5b4cda:c.instructions+=2;goto B5b4cda;
case 0x5b4cdd:c.instructions+=1;goto B5b4cdd;
case 0x5b4ce2:goto L5b4ce2;
case 0x5b4ce5:c.instructions+=1;goto B5b4ce5;
case 0x5b4cea:goto L5b4cea;
case 0x5b4cec:c.instructions+=4;goto B5b4cec;
case 0x5b4cef:c.instructions+=3;goto B5b4cef;
case 0x5b4cf2:c.instructions+=2;goto B5b4cf2;
case 0x5b4cf4:c.instructions+=1;goto B5b4cf4;
case 0x5b4cf6:goto L5b4cf6;
case 0x5b4cf8:c.instructions+=2;goto B5b4cf8;
case 0x5b4cfc:c.instructions+=1;goto B5b4cfc;
case 0x5b4cfe:goto L5b4cfe;
case 0x5b4d01:c.instructions+=2;goto B5b4d01;
case 0x5b4d03:c.instructions+=1;goto B5b4d03;
case 0x5b4d05:goto L5b4d05;
case 0x5b4d09:c.instructions+=6;goto B5b4d09;
case 0x5b4d0d:c.instructions+=5;goto B5b4d0d;
case 0x5b4d13:c.instructions+=4;goto B5b4d13;
case 0x5b4d17:c.instructions+=3;goto B5b4d17;
case 0x5b4d19:c.instructions+=2;goto B5b4d19;
case 0x5b4d1c:c.instructions+=1;goto B5b4d1c;
case 0x5b4d1e:goto L5b4d1e;
case 0x5b4d22:c.instructions+=4;goto B5b4d22;
case 0x5b4d26:c.instructions+=3;goto B5b4d26;
case 0x5b4d28:c.instructions+=2;goto B5b4d28;
case 0x5b4d2b:c.instructions+=1;goto B5b4d2b;
case 0x5b4d2d:goto L5b4d2d;
case 0x5b4d31:c.instructions+=1;goto B5b4d31;
case 0x5b4d35:goto L5b4d35;
case 0x5b4d36:c.instructions+=2;goto B5b4d36;
case 0x5b4d39:c.instructions+=1;goto B5b4d39;
case 0x5b4d3f:goto L5b4d3f;
case 0x5b4d43:c.instructions+=4;goto B5b4d43;
case 0x5b4d49:c.instructions+=3;goto B5b4d49;
case 0x5b4d4b:c.instructions+=2;goto B5b4d4b;
case 0x5b4d4e:c.instructions+=1;goto B5b4d4e;
case 0x5b4d50:goto L5b4d50;
case 0x5b4d54:c.instructions+=2;goto B5b4d54;
case 0x5b4d58:c.instructions+=1;goto B5b4d58;
case 0x5b4d5a:goto L5b4d5a;
case 0x5b4d5b:c.instructions+=2;goto B5b4d5b;
case 0x5b4d5d:c.instructions+=1;goto B5b4d5d;
case 0x5b4d62:goto L5b4d62;
case 0x5b4d65:c.instructions+=5;goto B5b4d65;
case 0x5b4d6b:c.instructions+=4;goto B5b4d6b;
case 0x5b4d6e:c.instructions+=3;goto B5b4d6e;
case 0x5b4d70:c.instructions+=2;goto B5b4d70;
case 0x5b4d72:c.instructions+=1;goto B5b4d72;
case 0x5b4d74:goto L5b4d74;
case 0x5b4d76:c.instructions+=2;goto B5b4d76;
case 0x5b4d78:c.instructions+=1;goto B5b4d78;
case 0x5b4d7b:goto L5b4d7b;
case 0x5b4d7f:c.instructions+=7;goto B5b4d7f;
case 0x5b4d86:c.instructions+=6;goto B5b4d86;
case 0x5b4d87:c.instructions+=5;goto B5b4d87;
case 0x5b4d88:c.instructions+=4;goto B5b4d88;
case 0x5b4d89:c.instructions+=3;goto B5b4d89;
case 0x5b4d8b:c.instructions+=2;goto B5b4d8b;
case 0x5b4d8c:c.instructions+=1;goto B5b4d8c;
case 0x5b4d8d:goto L5b4d8d;
case 0x5b4d93:c.instructions+=2;goto B5b4d93;
case 0x5b4d96:c.instructions+=1;goto B5b4d96;
case 0x5b4d98:goto L5b4d98;
case 0x5b4d9a:c.instructions+=2;goto B5b4d9a;
case 0x5b4d9c:c.instructions+=1;goto B5b4d9c;
case 0x5b4d9f:goto L5b4d9f;
case 0x5b4da6:goto L5b4da6;
case 0x5b4daa:c.instructions+=6;goto B5b4daa;
case 0x5b4dab:c.instructions+=5;goto B5b4dab;
case 0x5b4dac:c.instructions+=4;goto B5b4dac;
case 0x5b4dad:c.instructions+=3;goto B5b4dad;
case 0x5b4daf:c.instructions+=2;goto B5b4daf;
case 0x5b4db0:c.instructions+=1;goto B5b4db0;
case 0x5b4dc0:goto L5b4dc0;
case 0x5b4dc3:c.instructions+=5;goto B5b4dc3;
case 0x5b4dc4:c.instructions+=4;goto B5b4dc4;
case 0x5b4dc6:c.instructions+=3;goto B5b4dc6;
case 0x5b4dc8:c.instructions+=2;goto B5b4dc8;
case 0x5b4dcb:c.instructions+=1;goto B5b4dcb;
case 0x5b4dd1:goto L5b4dd1;
case 0x5b4dd2:c.instructions+=14;goto B5b4dd2;
case 0x5b4dd8:c.instructions+=13;goto B5b4dd8;
case 0x5b4dd9:c.instructions+=12;goto B5b4dd9;
case 0x5b4dda:c.instructions+=11;goto B5b4dda;
case 0x5b4de0:c.instructions+=10;goto B5b4de0;
case 0x5b4de2:c.instructions+=9;goto B5b4de2;
case 0x5b4de6:c.instructions+=8;goto B5b4de6;
case 0x5b4de7:c.instructions+=7;goto B5b4de7;
case 0x5b4ded:c.instructions+=6;goto B5b4ded;
case 0x5b4dee:c.instructions+=5;goto B5b4dee;
case 0x5b4df1:c.instructions+=4;goto B5b4df1;
case 0x5b4df7:c.instructions+=3;goto B5b4df7;
case 0x5b4df8:c.instructions+=2;goto B5b4df8;
case 0x5b4dfc:c.instructions+=1;goto B5b4dfc;
case 0x5b4e01:goto L5b4e01;
case 0x5b4e05:c.instructions+=3;goto B5b4e05;
case 0x5b4e06:c.instructions+=2;goto B5b4e06;
case 0x5b4e07:c.instructions+=1;goto B5b4e07;
case 0x5b4e0c:goto L5b4e0c;
case 0x5b4e12:c.instructions+=2;goto B5b4e12;
case 0x5b4e14:c.instructions+=1;goto B5b4e14;
case 0x5b4e19:goto L5b4e19;
case 0x5b4e1b:c.instructions+=1;goto B5b4e1b;
case 0x5b4e1d:goto L5b4e1d;
case 0x5b4e1f:c.instructions+=1;goto B5b4e1f;
case 0x5b4e24:goto L5b4e24;
case 0x5b4e2a:c.instructions+=3;goto B5b4e2a;
case 0x5b4e2b:c.instructions+=2;goto B5b4e2b;
case 0x5b4e2c:c.instructions+=1;goto B5b4e2c;
case 0x5b4e31:goto L5b4e31;
case 0x5b4e37:c.instructions+=3;goto B5b4e37;
case 0x5b4e3a:c.instructions+=2;goto B5b4e3a;
case 0x5b4e3c:c.instructions+=1;goto B5b4e3c;
case 0x5b4e42:goto L5b4e42;
case 0x5b4e45:c.instructions+=6;goto B5b4e45;
case 0x5b4e4d:c.instructions+=5;goto B5b4e4d;
case 0x5b4e51:c.instructions+=4;goto B5b4e51;
case 0x5b4e54:c.instructions+=3;goto B5b4e54;
case 0x5b4e56:c.instructions+=2;goto B5b4e56;
case 0x5b4e59:c.instructions+=1;goto B5b4e59;
case 0x5b4e5b:goto L5b4e5b;
case 0x5b4e60:goto L5b4e60;
case 0x5b4e64:c.instructions+=3;goto B5b4e64;
case 0x5b4e65:c.instructions+=2;goto B5b4e65;
case 0x5b4e67:c.instructions+=1;goto B5b4e67;
case 0x5b4e6c:goto L5b4e6c;
case 0x5b4e70:c.instructions+=8;goto B5b4e70;
case 0x5b4e76:c.instructions+=7;goto B5b4e76;
case 0x5b4e7a:c.instructions+=6;goto B5b4e7a;
case 0x5b4e80:c.instructions+=5;goto B5b4e80;
case 0x5b4e82:c.instructions+=4;goto B5b4e82;
case 0x5b4e84:c.instructions+=3;goto B5b4e84;
case 0x5b4e86:c.instructions+=2;goto B5b4e86;
case 0x5b4e89:c.instructions+=1;goto B5b4e89;
case 0x5b4e8b:goto L5b4e8b;
case 0x5b4e8d:c.instructions+=12;goto B5b4e8d;
case 0x5b4e8f:c.instructions+=11;goto B5b4e8f;
case 0x5b4e95:c.instructions+=10;goto B5b4e95;
case 0x5b4e99:c.instructions+=9;goto B5b4e99;
case 0x5b4e9d:c.instructions+=8;goto B5b4e9d;
case 0x5b4e9f:c.instructions+=7;goto B5b4e9f;
case 0x5b4ea5:c.instructions+=6;goto B5b4ea5;
case 0x5b4ea9:c.instructions+=5;goto B5b4ea9;
case 0x5b4ead:c.instructions+=4;goto B5b4ead;
case 0x5b4eb0:c.instructions+=3;goto B5b4eb0;
case 0x5b4eb2:c.instructions+=2;goto B5b4eb2;
case 0x5b4eb5:c.instructions+=1;goto B5b4eb5;
case 0x5b4eb7:goto L5b4eb7;
case 0x5b4eb9:goto L5b4eb9;
case 0x5b4ebb:c.instructions+=1;goto B5b4ebb;
case 0x5b4ebd:goto L5b4ebd;
case 0x5b4ec1:c.instructions+=4;goto B5b4ec1;
case 0x5b4ec4:c.instructions+=3;goto B5b4ec4;
case 0x5b4ec6:c.instructions+=2;goto B5b4ec6;
case 0x5b4ecb:c.instructions+=1;goto B5b4ecb;
case 0x5b4ed0:goto L5b4ed0;
case 0x5b4ed4:c.instructions+=4;goto B5b4ed4;
case 0x5b4edb:c.instructions+=3;goto B5b4edb;
case 0x5b4edd:c.instructions+=2;goto B5b4edd;
case 0x5b4ee0:c.instructions+=1;goto B5b4ee0;
case 0x5b4ee2:goto L5b4ee2;
case 0x5b4ee3:c.instructions+=1;goto B5b4ee3;
case 0x5b4ee5:goto L5b4ee5;
case 0x5b4ee7:goto L5b4ee7;
case 0x5b4ee9:c.instructions+=1;goto B5b4ee9;
case 0x5b4eeb:goto L5b4eeb;
case 0x5b4eef:c.instructions+=3;goto B5b4eef;
case 0x5b4ef1:c.instructions+=2;goto B5b4ef1;
case 0x5b4ef4:c.instructions+=1;goto B5b4ef4;
case 0x5b4ef6:goto L5b4ef6;
case 0x5b4ef8:c.instructions+=1;goto B5b4ef8;
case 0x5b4efd:goto L5b4efd;
case 0x5b4eff:goto L5b4eff;
case 0x5b4f03:goto L5b4f03;
case 0x5b4f07:c.instructions+=2;goto B5b4f07;
case 0x5b4f0a:c.instructions+=1;goto B5b4f0a;
case 0x5b4f0c:goto L5b4f0c;
case 0x5b4f10:c.instructions+=4;goto B5b4f10;
case 0x5b4f11:c.instructions+=3;goto B5b4f11;
case 0x5b4f14:c.instructions+=2;goto B5b4f14;
case 0x5b4f15:c.instructions+=1;goto B5b4f15;
case 0x5b4f1a:goto L5b4f1a;
case 0x5b4f1b:c.instructions+=2;goto B5b4f1b;
case 0x5b4f1c:c.instructions+=1;goto B5b4f1c;
case 0x5b4f21:goto L5b4f21;
case 0x5b4f24:c.instructions+=6;goto B5b4f24;
case 0x5b4f25:c.instructions+=5;goto B5b4f25;
case 0x5b4f26:c.instructions+=4;goto B5b4f26;
case 0x5b4f27:c.instructions+=3;goto B5b4f27;
case 0x5b4f28:c.instructions+=2;goto B5b4f28;
case 0x5b4f2b:c.instructions+=1;goto B5b4f2b;
case 0x5b4f2e:goto L5b4f2e;
case 0x5b4f31:c.instructions+=1;goto B5b4f31;
case 0x5b4f33:goto L5b4f33;
case 0x5b4f36:c.instructions+=1;goto B5b4f36;
case 0x5b4f38:goto L5b4f38;
case 0x5b4f3b:c.instructions+=1;goto B5b4f3b;
case 0x5b4f3d:goto L5b4f3d;
case 0x5b4f41:c.instructions+=4;goto B5b4f41;
case 0x5b4f42:c.instructions+=3;goto B5b4f42;
case 0x5b4f45:c.instructions+=2;goto B5b4f45;
case 0x5b4f46:c.instructions+=1;goto B5b4f46;
case 0x5b4f4b:goto L5b4f4b;
case 0x5b4f4c:c.instructions+=2;goto B5b4f4c;
case 0x5b4f4d:c.instructions+=1;goto B5b4f4d;
case 0x5b4f52:goto L5b4f52;
case 0x5b4f55:c.instructions+=6;goto B5b4f55;
case 0x5b4f56:c.instructions+=5;goto B5b4f56;
case 0x5b4f57:c.instructions+=4;goto B5b4f57;
case 0x5b4f58:c.instructions+=3;goto B5b4f58;
case 0x5b4f59:c.instructions+=2;goto B5b4f59;
case 0x5b4f5c:c.instructions+=1;goto B5b4f5c;
case 0x5b4f5f:goto L5b4f5f;
case 0x5b4f63:c.instructions+=4;goto B5b4f63;
case 0x5b4f64:c.instructions+=3;goto B5b4f64;
case 0x5b4f67:c.instructions+=2;goto B5b4f67;
case 0x5b4f68:c.instructions+=1;goto B5b4f68;
case 0x5b4f6d:goto L5b4f6d;
case 0x5b4f6e:c.instructions+=2;goto B5b4f6e;
case 0x5b4f6f:c.instructions+=1;goto B5b4f6f;
case 0x5b4f74:goto L5b4f74;
case 0x5b4f77:goto L5b4f77;
case 0x5b4f78:c.instructions+=2;goto B5b4f78;
case 0x5b4f79:c.instructions+=1;goto B5b4f79;
case 0x5b4f7a:goto L5b4f7a;
case 0x5b4f7b:c.instructions+=2;goto B5b4f7b;
case 0x5b4f7e:c.instructions+=1;goto B5b4f7e;
case 0x5b4f90:goto L5b4f90;
case 0x5b4f94:c.instructions+=9;goto B5b4f94;
case 0x5b4f98:c.instructions+=8;goto B5b4f98;
case 0x5b4f99:c.instructions+=7;goto B5b4f99;
case 0x5b4f9b:c.instructions+=6;goto B5b4f9b;
case 0x5b4f9f:c.instructions+=5;goto B5b4f9f;
case 0x5b4fa2:c.instructions+=4;goto B5b4fa2;
case 0x5b4fa4:c.instructions+=3;goto B5b4fa4;
case 0x5b4fa7:c.instructions+=2;goto B5b4fa7;
case 0x5b4faa:c.instructions+=1;goto B5b4faa;
case 0x5b4faf:goto L5b4faf;
case 0x5b4fb2:c.instructions+=5;goto B5b4fb2;
case 0x5b4fb7:c.instructions+=4;goto B5b4fb7;
case 0x5b4fba:c.instructions+=3;goto B5b4fba;
case 0x5b4fbc:c.instructions+=2;goto B5b4fbc;
case 0x5b4fbd:c.instructions+=1;goto B5b4fbd;
case 0x5b4fc0:goto L5b4fc0;
case 0x5b4fc3:c.instructions+=1;goto B5b4fc3;
case 0x5b4fc9:goto L5b4fc9;
case 0x5b4fcd:c.instructions+=4;goto B5b4fcd;
case 0x5b4fce:c.instructions+=3;goto B5b4fce;
case 0x5b4fd0:c.instructions+=2;goto B5b4fd0;
case 0x5b4fd2:c.instructions+=1;goto B5b4fd2;
case 0x5b4fd4:goto L5b4fd4;
case 0x5b4fd9:c.instructions+=5;goto B5b4fd9;
case 0x5b4fdb:c.instructions+=4;goto B5b4fdb;
case 0x5b4fe1:c.instructions+=3;goto B5b4fe1;
case 0x5b4fe2:c.instructions+=2;goto B5b4fe2;
case 0x5b4fe3:c.instructions+=1;goto B5b4fe3;
case 0x5b4fe5:goto L5b4fe5;
case 0x5b4fe7:c.instructions+=1;goto B5b4fe7;
case 0x5b4fe9:goto L5b4fe9;
case 0x5b4fef:c.instructions+=2;goto B5b4fef;
case 0x5b4ff1:c.instructions+=1;goto B5b4ff1;
case 0x5b4ff3:goto L5b4ff3;
case 0x5b4ff9:c.instructions+=2;goto B5b4ff9;
case 0x5b4ffb:c.instructions+=1;goto B5b4ffb;
case 0x5b4ffd:goto L5b4ffd;
default:missing_instruction(c.pc);}
B5b4000:L5b4000:{c.instructions+=8;NFSU2_TR(0x5b4000);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4002:{NFSU2_TR(0x5b4002);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b4006:{NFSU2_TR(0x5b4006);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4007:{NFSU2_TR(0x5b4007);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b400b:{NFSU2_TR(0x5b400b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b400c:{NFSU2_TR(0x5b400c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b400d:{NFSU2_TR(0x5b400d);
__builtin_memmove((R+4),(R+24),4);
}
B5b400f:{NFSU2_TR(0x5b400f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4014ull));
TAIL_STATIC(0x5aca50u,5ac);
}
B5b4014:L5b4014:{c.instructions+=4;NFSU2_TR(0x5b4014);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4018:{NFSU2_TR(0x5b4018);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b401c:{NFSU2_TR(0x5b401c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b401e:{NFSU2_TR(0x5b401e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4022:L5b4022:{c.instructions+=9;NFSU2_TR(0x5b4022);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4024:{NFSU2_TR(0x5b4024);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4025:{NFSU2_TR(0x5b4025);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4029:{NFSU2_TR(0x5b4029);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b402a:{NFSU2_TR(0x5b402a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b402e:{NFSU2_TR(0x5b402e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b402f:{NFSU2_TR(0x5b402f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4030:{NFSU2_TR(0x5b4030);
__builtin_memmove((R+4),(R+24),4);
}
B5b4032:{NFSU2_TR(0x5b4032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4037ull));
TAIL_STATIC(0x5aca50u,5ac);
}
B5b4037:L5b4037:{c.instructions+=5;NFSU2_TR(0x5b4037);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b403b:{NFSU2_TR(0x5b403b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b403f:{NFSU2_TR(0x5b403f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4041:{NFSU2_TR(0x5b4041);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4044:{NFSU2_TR(0x5b4044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b404c;}}
}
B5b4046:L5b4046:{c.instructions+=2;NFSU2_TR(0x5b4046);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b404a:{NFSU2_TR(0x5b404a);
{goto L5b4050;}
}
B5b404c:L5b404c:{c.instructions+=1;NFSU2_TR(0x5b404c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4050:L5b4050:{c.instructions+=5;NFSU2_TR(0x5b4050);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4054:{NFSU2_TR(0x5b4054);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b4056:{NFSU2_TR(0x5b4056);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4058:{NFSU2_TR(0x5b4058);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b405b:{NFSU2_TR(0x5b405b);
if(r1(R+514)){{goto L5b4063;}}
}
B5b405d:L5b405d:{c.instructions+=2;NFSU2_TR(0x5b405d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b405f:{NFSU2_TR(0x5b405f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4063:L5b4063:{c.instructions+=12;NFSU2_TR(0x5b4063);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4067:{NFSU2_TR(0x5b4067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b406a:{NFSU2_TR(0x5b406a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b406b:{NFSU2_TR(0x5b406b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b406c:{NFSU2_TR(0x5b406c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b4070:{NFSU2_TR(0x5b4070);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4071:{NFSU2_TR(0x5b4071);
__builtin_memmove((R+4),(R+24),4);
}
B5b4073:{NFSU2_TR(0x5b4073);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4077:{NFSU2_TR(0x5b4077);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b407b:{NFSU2_TR(0x5b407b);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b407d:{NFSU2_TR(0x5b407d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4081:{NFSU2_TR(0x5b4081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4086ull));
TAIL_STATIC(0x59b200u,59b);
}
B5b4086:L5b4086:{c.instructions+=4;NFSU2_TR(0x5b4086);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4088:{NFSU2_TR(0x5b4088);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b4089:{NFSU2_TR(0x5b4089);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b408c:{NFSU2_TR(0x5b408c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4022u);}goto L5b4022;}}
}
B5b408e:L5b408e:{c.instructions+=1;NFSU2_TR(0x5b408e);
{goto L5b413e;}
}
B5b4093:L5b4093:{c.instructions+=8;NFSU2_TR(0x5b4093);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4097:{NFSU2_TR(0x5b4097);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b409b:{NFSU2_TR(0x5b409b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b409d:{NFSU2_TR(0x5b409d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b409e:{NFSU2_TR(0x5b409e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b409f:{NFSU2_TR(0x5b409f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40a0:{NFSU2_TR(0x5b40a0);
__builtin_memmove((R+4),(R+24),4);
}
B5b40a2:{NFSU2_TR(0x5b40a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b40a7ull));
TAIL_STATIC(0x5b2c00u,5b2);
}
B5b40a7:L5b40a7:{c.instructions+=1;NFSU2_TR(0x5b40a7);
{goto L5b413e;}
}
B5b40ac:L5b40ac:{c.instructions+=6;NFSU2_TR(0x5b40ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b40af:{NFSU2_TR(0x5b40af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40b1:{NFSU2_TR(0x5b40b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40b2:{NFSU2_TR(0x5b40b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40b3:{NFSU2_TR(0x5b40b3);
__builtin_memmove((R+4),(R+24),4);
}
B5b40b5:{NFSU2_TR(0x5b40b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b40baull));
TAIL_STATIC(0x59b200u,59b);
}
B5b40ba:L5b40ba:{c.instructions+=4;NFSU2_TR(0x5b40ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b40be:{NFSU2_TR(0x5b40be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b40c0:{NFSU2_TR(0x5b40c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40c2:{NFSU2_TR(0x5b40c2);
{goto L5b412c;}
}
B5b40c4:L5b40c4:{c.instructions+=5;NFSU2_TR(0x5b40c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b40c8:{NFSU2_TR(0x5b40c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40c9:{NFSU2_TR(0x5b40c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40ca:{NFSU2_TR(0x5b40ca);
__builtin_memmove((R+4),(R+24),4);
}
B5b40cc:{NFSU2_TR(0x5b40cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b40d1ull));
TAIL_STATIC(0x5b3060u,5b3);
}
B5b40d1:L5b40d1:{c.instructions+=1;NFSU2_TR(0x5b40d1);
{goto L5b413e;}
}
B5b40d3:L5b40d3:{c.instructions+=7;NFSU2_TR(0x5b40d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b40d5:{NFSU2_TR(0x5b40d5);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5b40db:{NFSU2_TR(0x5b40db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5b40e1:{NFSU2_TR(0x5b40e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40e2:{NFSU2_TR(0x5b40e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5b40e9:{NFSU2_TR(0x5b40e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b40eb:{NFSU2_TR(0x5b40eb);
{goto L5b40f0;}
}
B5b40f0:L5b40f0:{c.instructions+=5;NFSU2_TR(0x5b40f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40f1:{NFSU2_TR(0x5b40f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40f2:{NFSU2_TR(0x5b40f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b40f3:{NFSU2_TR(0x5b40f3);
__builtin_memmove((R+4),(R+24),4);
}
B5b40f5:{NFSU2_TR(0x5b40f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b40faull));
TAIL_STATIC(0x59b200u,59b);
}
B5b40fa:L5b40fa:{c.instructions+=8;NFSU2_TR(0x5b40fa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b40fc:{NFSU2_TR(0x5b40fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b40ff:{NFSU2_TR(0x5b40ff);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4103:{NFSU2_TR(0x5b4103);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4104:{NFSU2_TR(0x5b4104);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4105:{NFSU2_TR(0x5b4105);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4106:{NFSU2_TR(0x5b4106);
__builtin_memmove((R+4),(R+24),4);
}
B5b4108:{NFSU2_TR(0x5b4108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b410dull));
TAIL_STATIC(0x59b200u,59b);
}
B5b410d:L5b410d:{c.instructions+=4;NFSU2_TR(0x5b410d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b410f:{NFSU2_TR(0x5b410f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b4110:{NFSU2_TR(0x5b4110);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4113:{NFSU2_TR(0x5b4113);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b40f0u);}goto L5b40f0;}}
}
B5b4115:L5b4115:{c.instructions+=2;NFSU2_TR(0x5b4115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4116:{NFSU2_TR(0x5b4116);
{goto L5b413e;}
}
B5b4118:L5b4118:{c.instructions+=5;NFSU2_TR(0x5b4118);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b411c:{NFSU2_TR(0x5b411c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b411d:{NFSU2_TR(0x5b411d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b411e:{NFSU2_TR(0x5b411e);
__builtin_memmove((R+4),(R+24),4);
}
B5b4120:{NFSU2_TR(0x5b4120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4125ull));
TAIL_STATIC(0x5b3100u,5b3);
}
B5b4125:L5b4125:{c.instructions+=1;NFSU2_TR(0x5b4125);
{goto L5b413e;}
}
B5b4127:L5b4127:{c.instructions+=2;NFSU2_TR(0x5b4127);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b412b:{NFSU2_TR(0x5b412b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b412c:L5b412c:{c.instructions+=5;NFSU2_TR(0x5b412c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b412f:{NFSU2_TR(0x5b412f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4130:{NFSU2_TR(0x5b4130);
__builtin_memmove((R+4),(R+24),4);
}
B5b4132:{NFSU2_TR(0x5b4132);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4133:{NFSU2_TR(0x5b4133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4138ull));
TAIL_STATIC(0x59b200u,59b);
}
B5b4138:L5b4138:{c.instructions+=2;NFSU2_TR(0x5b4138);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b413c:{NFSU2_TR(0x5b413c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b413e:L5b413e:{c.instructions+=6;NFSU2_TR(0x5b413e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4144:{NFSU2_TR(0x5b4144);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b4145:{NFSU2_TR(0x5b4145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4146:{NFSU2_TR(0x5b4146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b414c:{NFSU2_TR(0x5b414c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b414d:{NFSU2_TR(0x5b414d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4171;}}
}
B5b414f:L5b414f:{c.instructions+=9;NFSU2_TR(0x5b414f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b4151:{NFSU2_TR(0x5b4151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4154:{NFSU2_TR(0x5b4154);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5b415a:{NFSU2_TR(0x5b415a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b415d:{NFSU2_TR(0x5b415d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b415e:{NFSU2_TR(0x5b415e);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B5b4164:{NFSU2_TR(0x5b4164);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4165:{NFSU2_TR(0x5b4165);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b416c:{NFSU2_TR(0x5b416c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4171ull));
TAIL_STATIC(0x5997e0u,599);
}
B5b4171:L5b4171:{c.instructions+=3;NFSU2_TR(0x5b4171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4172:{NFSU2_TR(0x5b4172);
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
B5b4175:{NFSU2_TR(0x5b4175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b41b0:L5b41b0:{c.instructions+=9;NFSU2_TR(0x5b41b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41b2:{NFSU2_TR(0x5b41b2);
u8 U[4];
w4(U+0,u32(0x77903bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41b7:{NFSU2_TR(0x5b41b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b41bd:{NFSU2_TR(0x5b41bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41be:{NFSU2_TR(0x5b41be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b41c5:{NFSU2_TR(0x5b41c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41c6:{NFSU2_TR(0x5b41c6);
__builtin_memmove((R+0),gp(0x86b374),4);
}
B5b41cb:{NFSU2_TR(0x5b41cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41cc:{NFSU2_TR(0x5b41cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b41d1ull));
TAIL_STATIC(0x440e50u,440);
}
B5b41d1:L5b41d1:{c.instructions+=5;NFSU2_TR(0x5b41d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b41d4:{NFSU2_TR(0x5b41d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5b41d8:{NFSU2_TR(0x5b41d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b41da:{NFSU2_TR(0x5b41da);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b41e2:{NFSU2_TR(0x5b41e2);
if(r1(R+518)){{goto L5b4209;}}
}
B5b41e4:L5b41e4:{c.instructions+=8;NFSU2_TR(0x5b41e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b41e8:{NFSU2_TR(0x5b41e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b41ec:{NFSU2_TR(0x5b41ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41ed:{NFSU2_TR(0x5b41ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b41f1:{NFSU2_TR(0x5b41f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41f2:{NFSU2_TR(0x5b41f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b41f3:{NFSU2_TR(0x5b41f3);
__builtin_memmove((R+4),(R+0),4);
}
B5b41f5:{NFSU2_TR(0x5b41f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b41faull));
TAIL_STATIC(0x5b3240u,5b3);
}
B5b41fa:L5b41fa:{c.instructions+=4;NFSU2_TR(0x5b41fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b41fe:{NFSU2_TR(0x5b41fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4205:{NFSU2_TR(0x5b4205);
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
B5b4208:{NFSU2_TR(0x5b4208);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4209:L5b4209:{c.instructions+=5;NFSU2_TR(0x5b4209);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b420d:{NFSU2_TR(0x5b420d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b420f:{NFSU2_TR(0x5b420f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4216:{NFSU2_TR(0x5b4216);
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
B5b4219:{NFSU2_TR(0x5b4219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4220:L5b4220:{c.instructions+=5;NFSU2_TR(0x5b4220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4221:{NFSU2_TR(0x5b4221);
__builtin_memmove((R+24),gp(0x86b5a8),4);
}
B5b4227:{NFSU2_TR(0x5b4227);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4228:{NFSU2_TR(0x5b4228);
w4(R+4,u32(0x86b5a8ull));
}
B5b422d:{NFSU2_TR(0x5b422d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4232ull));
TAIL_STATIC(0x502fd0u,502);
}
B5b4232:L5b4232:{c.instructions+=3;NFSU2_TR(0x5b4232);
__builtin_memmove((R+28),(R+0),4);
}
B5b4234:{NFSU2_TR(0x5b4234);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4236:{NFSU2_TR(0x5b4236);
if(r1(R+518)){{goto L5b426f;}}
}
B5b4238:L5b4238:{c.instructions+=1;NFSU2_TR(0x5b4238);
{goto L5b4240;}
}
B5b4240:L5b4240:{c.instructions+=5;NFSU2_TR(0x5b4240);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4246:{NFSU2_TR(0x5b4246);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4247:{NFSU2_TR(0x5b4247);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b424d:{NFSU2_TR(0x5b424d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b424e:{NFSU2_TR(0x5b424e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4253ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B5b4253:L5b4253:{c.instructions+=5;NFSU2_TR(0x5b4253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4259:{NFSU2_TR(0x5b4259);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b425a:{NFSU2_TR(0x5b425a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4260:{NFSU2_TR(0x5b4260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4261:{NFSU2_TR(0x5b4261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4266ull));
TAIL_STATIC(0x48b8b0u,48b);
}
B5b4266:L5b4266:{c.instructions+=4;NFSU2_TR(0x5b4266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b4268:{NFSU2_TR(0x5b4268);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5b426b:{NFSU2_TR(0x5b426b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b426d:{NFSU2_TR(0x5b426d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4240u);}goto L5b4240;}}
}
B5b426f:L5b426f:{c.instructions+=5;NFSU2_TR(0x5b426f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4271:{NFSU2_TR(0x5b4271);
u8 U[4];
w4(U+0,u32(0x7a274cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4276:{NFSU2_TR(0x5b4276);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b427b:{NFSU2_TR(0x5b427b);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b427d:{NFSU2_TR(0x5b427d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4282ull));
TAIL_STATIC(0x440df0u,440);
}
B5b4282:L5b4282:{c.instructions+=6;NFSU2_TR(0x5b4282);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4284:{NFSU2_TR(0x5b4284);
u8 U[4];
w4(U+0,u32(0x7a2738ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4289:{NFSU2_TR(0x5b4289);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b428b:{NFSU2_TR(0x5b428b);
u8 U[4];
w4(U+0,u32(0x510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4290:{NFSU2_TR(0x5b4290);
__builtin_memmove(gp(0x86b370),(R+0),4);
}
B5b4295:{NFSU2_TR(0x5b4295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b429aull));
TAIL_STATIC(0x440df0u,440);
}
B5b429a:L5b429a:{c.instructions+=5;NFSU2_TR(0x5b429a);
__builtin_memmove((R+24),gp(0x86b4c0),4);
}
B5b42a0:{NFSU2_TR(0x5b42a0);
__builtin_memmove(gp(0x86b374),(R+0),4);
}
B5b42a5:{NFSU2_TR(0x5b42a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b42a7:{NFSU2_TR(0x5b42a7);
w4(R+4,u32(0x80ull));
}
B5b42ac:{NFSU2_TR(0x5b42ac);
w4(R+28,u32(0x86ad78ull));
}
B5b42b1:L5b42b1:{c.instructions+=1;NFSU2_TR(0x5b42b1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b42b3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b42b1u);}goto L5b42b1;}
}
B5b42b3:L5b42b3:{c.instructions+=5;NFSU2_TR(0x5b42b3);
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
B5b42b6:{NFSU2_TR(0x5b42b6);
w4(R+4,u32(0x86b4c0ull));
}
B5b42bb:{NFSU2_TR(0x5b42bb);
s4(0x86af90,u32(0x5b41b0ull));
}
B5b42c5:{NFSU2_TR(0x5b42c5);
s1(0x86b380,u8(0x1ull));
}
B5b42cc:{NFSU2_TR(0x5b42cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b42d1ull));
TAIL_STATIC(0x502fd0u,502);
}
B5b42d1:L5b42d1:{c.instructions+=3;NFSU2_TR(0x5b42d1);
__builtin_memmove((R+28),(R+0),4);
}
B5b42d3:{NFSU2_TR(0x5b42d3);
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
B5b42d5:{NFSU2_TR(0x5b42d5);
if(r1(R+518)){{goto L5b42e4;}}
}
B5b42d7:L5b42d7:{c.instructions+=2;NFSU2_TR(0x5b42d7);
__builtin_memmove((R+4),(R+24),4);
}
B5b42d9:{NFSU2_TR(0x5b42d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b42deull));
TAIL_STATIC(0x5b0c30u,5b0);
}
B5b42de:L5b42de:{c.instructions+=3;NFSU2_TR(0x5b42de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b42e0:{NFSU2_TR(0x5b42e0);
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
B5b42e2:{NFSU2_TR(0x5b42e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b42d7u);}goto L5b42d7;}}
}
B5b42e4:L5b42e4:{c.instructions+=3;NFSU2_TR(0x5b42e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b42e5:{NFSU2_TR(0x5b42e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b42e6:{NFSU2_TR(0x5b42e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b42f0:L5b42f0:{c.instructions+=16;NFSU2_TR(0x5b42f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b42f1:{NFSU2_TR(0x5b42f1);
__builtin_memmove((R+20),(R+16),4);
}
B5b42f3:{NFSU2_TR(0x5b42f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b42f6:{NFSU2_TR(0x5b42f6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x128ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x128ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b42fc:{NFSU2_TR(0x5b42fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b42fd:{NFSU2_TR(0x5b42fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b42fe:{NFSU2_TR(0x5b42fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b4301:{NFSU2_TR(0x5b4301);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4302:{NFSU2_TR(0x5b4302);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b4309:{NFSU2_TR(0x5b4309);
__builtin_memmove((R+24),(R+4),4);
}
B5b430b:{NFSU2_TR(0x5b430b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b430e:{NFSU2_TR(0x5b430e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b4310:{NFSU2_TR(0x5b4310);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4311:{NFSU2_TR(0x5b4311);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b4315:{NFSU2_TR(0x5b4315);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4316:{NFSU2_TR(0x5b4316);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4319ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4319:L5b4319:{c.instructions+=8;NFSU2_TR(0x5b4319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b431c:{NFSU2_TR(0x5b431c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b431e:{NFSU2_TR(0x5b431e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b431f:{NFSU2_TR(0x5b431f);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b4326:{NFSU2_TR(0x5b4326);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4327:{NFSU2_TR(0x5b4327);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b432b:{NFSU2_TR(0x5b432b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b432c:{NFSU2_TR(0x5b432c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b432full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b432f:L5b432f:{c.instructions+=4;NFSU2_TR(0x5b432f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4332:{NFSU2_TR(0x5b4332);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5b4335:{NFSU2_TR(0x5b4335);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b4338:{NFSU2_TR(0x5b4338);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4355;}}
}
B5b433a:L5b433a:{c.instructions+=9;NFSU2_TR(0x5b433a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b433d:{NFSU2_TR(0x5b433d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4341:{NFSU2_TR(0x5b4341);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4342:{NFSU2_TR(0x5b4342);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4343:{NFSU2_TR(0x5b4343);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4344:{NFSU2_TR(0x5b4344);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4348:{NFSU2_TR(0x5b4348);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4349:{NFSU2_TR(0x5b4349);
__builtin_memmove((R+4),(R+24),4);
}
B5b434b:{NFSU2_TR(0x5b434b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4350ull));
TAIL_STATIC(0x593df0u,593);
}
B5b4350:L5b4350:{c.instructions+=1;NFSU2_TR(0x5b4350);
{goto L5b449f;}
}
B5b4355:L5b4355:{c.instructions+=4;NFSU2_TR(0x5b4355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b4358:{NFSU2_TR(0x5b4358);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b435b:{NFSU2_TR(0x5b435b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b435e:{NFSU2_TR(0x5b435e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b43a0;}}
}
B5b4360:L5b4360:{c.instructions+=8;NFSU2_TR(0x5b4360);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4364:{NFSU2_TR(0x5b4364);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4365:{NFSU2_TR(0x5b4365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4366:{NFSU2_TR(0x5b4366);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4367:{NFSU2_TR(0x5b4367);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b436b:{NFSU2_TR(0x5b436b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b436c:{NFSU2_TR(0x5b436c);
__builtin_memmove((R+4),(R+24),4);
}
B5b436e:{NFSU2_TR(0x5b436e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4373ull));
TAIL_STATIC(0x593df0u,593);
}
B5b4373:L5b4373:{c.instructions+=13;NFSU2_TR(0x5b4373);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4377:{NFSU2_TR(0x5b4377);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b4379:{NFSU2_TR(0x5b4379);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b437d:{NFSU2_TR(0x5b437d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b437f:{NFSU2_TR(0x5b437f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4383:{NFSU2_TR(0x5b4383);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b4385:{NFSU2_TR(0x5b4385);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4389:{NFSU2_TR(0x5b4389);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b438d:{NFSU2_TR(0x5b438d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b438f:{NFSU2_TR(0x5b438f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4393:{NFSU2_TR(0x5b4393);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4397:{NFSU2_TR(0x5b4397);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b439b:{NFSU2_TR(0x5b439b);
{goto L5b449f;}
}
B5b43a0:L5b43a0:{c.instructions+=2;NFSU2_TR(0x5b43a0);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
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
B5b43a3:{NFSU2_TR(0x5b43a3);
if(r1(R+518)){{goto L5b4409;}}
}
B5b43a5:L5b43a5:{c.instructions+=2;NFSU2_TR(0x5b43a5);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b43a8:{NFSU2_TR(0x5b43a8);
if(r1(R+518)){{goto L5b4409;}}
}
B5b43aa:L5b43aa:{c.instructions+=2;NFSU2_TR(0x5b43aa);
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
B5b43ad:{NFSU2_TR(0x5b43ad);
if(r1(R+518)){{goto L5b43dd;}}
}
B5b43af:L5b43af:{c.instructions+=2;NFSU2_TR(0x5b43af);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b43b2:{NFSU2_TR(0x5b43b2);
if(r1(R+518)){{goto L5b43dd;}}
}
B5b43b4:L5b43b4:{c.instructions+=10;NFSU2_TR(0x5b43b4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b43b8:{NFSU2_TR(0x5b43b8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b43bc:{NFSU2_TR(0x5b43bc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b43c0:{NFSU2_TR(0x5b43c0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b43c4:{NFSU2_TR(0x5b43c4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b43c8:{NFSU2_TR(0x5b43c8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b43cc:{NFSU2_TR(0x5b43cc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b43d0:{NFSU2_TR(0x5b43d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b43d4:{NFSU2_TR(0x5b43d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b43d8:{NFSU2_TR(0x5b43d8);
{goto L5b4483;}
}
B5b43dd:L5b43dd:{c.instructions+=3;NFSU2_TR(0x5b43dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b43df:{NFSU2_TR(0x5b43df);
__builtin_memmove((R+4),(R+0),4);
}
B5b43e1:{NFSU2_TR(0x5b43e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b43e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b43e4:L5b43e4:{c.instructions+=10;NFSU2_TR(0x5b43e4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b43e7:{NFSU2_TR(0x5b43e7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b43ea:{NFSU2_TR(0x5b43ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b43ec:{NFSU2_TR(0x5b43ec);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b43ee:{NFSU2_TR(0x5b43ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b43f2:{NFSU2_TR(0x5b43f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b43f6:{NFSU2_TR(0x5b43f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b43f7:{NFSU2_TR(0x5b43f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b43fb:{NFSU2_TR(0x5b43fb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b43ff:{NFSU2_TR(0x5b43ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4404ull));
TAIL_STATIC(0x440f70u,440);
}
B5b4404:L5b4404:{c.instructions+=2;NFSU2_TR(0x5b4404);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b4407:{NFSU2_TR(0x5b4407);
{goto L5b4452;}
}
B5b4409:L5b4409:{c.instructions+=3;NFSU2_TR(0x5b4409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b440b:{NFSU2_TR(0x5b440b);
__builtin_memmove((R+4),(R+28),4);
}
B5b440d:{NFSU2_TR(0x5b440d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4410ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4410:L5b4410:{c.instructions+=21;NFSU2_TR(0x5b4410);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4412:{NFSU2_TR(0x5b4412);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b4414:{NFSU2_TR(0x5b4414);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4417:{NFSU2_TR(0x5b4417);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b4419:{NFSU2_TR(0x5b4419);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b441c:{NFSU2_TR(0x5b441c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b441e:{NFSU2_TR(0x5b441e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4422:{NFSU2_TR(0x5b4422);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4426:{NFSU2_TR(0x5b4426);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b4428:{NFSU2_TR(0x5b4428);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b442c:{NFSU2_TR(0x5b442c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4430:{NFSU2_TR(0x5b4430);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4434:{NFSU2_TR(0x5b4434);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4438:{NFSU2_TR(0x5b4438);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b443c:{NFSU2_TR(0x5b443c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4440:{NFSU2_TR(0x5b4440);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b4444:{NFSU2_TR(0x5b4444);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b4446:{NFSU2_TR(0x5b4446);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b444a:{NFSU2_TR(0x5b444a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b444e:{NFSU2_TR(0x5b444e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b4450:{NFSU2_TR(0x5b4450);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5b4452:L5b4452:{c.instructions+=4;NFSU2_TR(0x5b4452);
{u32 ea_=u32(u32(8005476u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4458:{NFSU2_TR(0x5b4458);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b445a:{NFSU2_TR(0x5b445a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b445d:{NFSU2_TR(0x5b445d);
if(r1(R+514)){{goto L5b448d;}}
}
B5b445f:L5b445f:{c.instructions+=9;NFSU2_TR(0x5b445f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4463:{NFSU2_TR(0x5b4463);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4467:{NFSU2_TR(0x5b4467);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b446b:{NFSU2_TR(0x5b446b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b446f:{NFSU2_TR(0x5b446f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4473:{NFSU2_TR(0x5b4473);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4477:{NFSU2_TR(0x5b4477);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b447b:{NFSU2_TR(0x5b447b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b447f:{NFSU2_TR(0x5b447f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4483:L5b4483:{c.instructions+=3;NFSU2_TR(0x5b4483);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b4485:{NFSU2_TR(0x5b4485);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4489:{NFSU2_TR(0x5b4489);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b448d:L5b448d:{c.instructions+=5;NFSU2_TR(0x5b448d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4491:{NFSU2_TR(0x5b4491);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4492:{NFSU2_TR(0x5b4492);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4496:{NFSU2_TR(0x5b4496);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4497:{NFSU2_TR(0x5b4497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b449cull));
TAIL_STATIC(0x43cf10u,43c);
}
B5b449c:L5b449c:{c.instructions+=1;NFSU2_TR(0x5b449c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b449f:L5b449f:{c.instructions+=3;NFSU2_TR(0x5b449f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b44a7:{NFSU2_TR(0x5b44a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ba3d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b44af:{NFSU2_TR(0x5b44af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b44b1:L5b44b1:{c.instructions+=8;NFSU2_TR(0x5b44b1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b44b5:{NFSU2_TR(0x5b44b5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b44b9:{NFSU2_TR(0x5b44b9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b44bd:{NFSU2_TR(0x5b44bd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b44c1:{NFSU2_TR(0x5b44c1);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b44c7:{NFSU2_TR(0x5b44c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b44c9:{NFSU2_TR(0x5b44c9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b44cc:{NFSU2_TR(0x5b44cc);
if(r1(R+514)){{goto L5b44dc;}}
}
B5b44ce:L5b44ce:{c.instructions+=3;NFSU2_TR(0x5b44ce);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b44d2:{NFSU2_TR(0x5b44d2);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b44d8:{NFSU2_TR(0x5b44d8);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b44dc:L5b44dc:{c.instructions+=15;NFSU2_TR(0x5b44dc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b44e0:{NFSU2_TR(0x5b44e0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b44e4:{NFSU2_TR(0x5b44e4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b44e8:{NFSU2_TR(0x5b44e8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b44ec:{NFSU2_TR(0x5b44ec);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b44f0:{NFSU2_TR(0x5b44f0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b44f4:{NFSU2_TR(0x5b44f4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b44f8:{NFSU2_TR(0x5b44f8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b44fc:{NFSU2_TR(0x5b44fc);
{u32 ea_=u32(u32(8001692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4502:{NFSU2_TR(0x5b4502);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b4504:{NFSU2_TR(0x5b4504);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4508:{NFSU2_TR(0x5b4508);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b450c:{NFSU2_TR(0x5b450c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b450e:{NFSU2_TR(0x5b450e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4511:{NFSU2_TR(0x5b4511);
if(r1(R+518)){{goto L5b4519;}}
}
B5b4513:L5b4513:{c.instructions+=2;NFSU2_TR(0x5b4513);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4515:{NFSU2_TR(0x5b4515);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4519:L5b4519:{c.instructions+=5;NFSU2_TR(0x5b4519);
{u32 ea_=u32(u32(8001692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b451f:{NFSU2_TR(0x5b451f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b4521:{NFSU2_TR(0x5b4521);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4523:{NFSU2_TR(0x5b4523);
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
B5b4526:{NFSU2_TR(0x5b4526);
if(r1(R+514)){{goto L5b4536;}}
}
B5b4528:L5b4528:{c.instructions+=4;NFSU2_TR(0x5b4528);
__builtin_memmove((R+8),gp(0x7a189c),4);
}
B5b452e:{NFSU2_TR(0x5b452e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4530:{NFSU2_TR(0x5b4530);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4534:{NFSU2_TR(0x5b4534);
{goto L5b453a;}
}
B5b4536:L5b4536:{c.instructions+=1;NFSU2_TR(0x5b4536);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b453a:L5b453a:{c.instructions+=15;NFSU2_TR(0x5b453a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b453e:{NFSU2_TR(0x5b453e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4542:{NFSU2_TR(0x5b4542);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4546:{NFSU2_TR(0x5b4546);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b454a:{NFSU2_TR(0x5b454a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b454e:{NFSU2_TR(0x5b454e);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4552:{NFSU2_TR(0x5b4552);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4556:{NFSU2_TR(0x5b4556);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b455a:{NFSU2_TR(0x5b455a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b455e:{NFSU2_TR(0x5b455e);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4565:{NFSU2_TR(0x5b4565);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4568:{NFSU2_TR(0x5b4568);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b456f:{NFSU2_TR(0x5b456f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4576:{NFSU2_TR(0x5b4576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b4578:{NFSU2_TR(0x5b4578);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b457bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b457b:L5b457b:{c.instructions+=2;NFSU2_TR(0x5b457b);
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
B5b457d:{NFSU2_TR(0x5b457d);
if(r1(R+518)){{goto L5b45b3;}}
}
B5b457f:L5b457f:{c.instructions+=12;NFSU2_TR(0x5b457f);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4583:{NFSU2_TR(0x5b4583);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4587:{NFSU2_TR(0x5b4587);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b458b:{NFSU2_TR(0x5b458b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b458f:{NFSU2_TR(0x5b458f);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4593:{NFSU2_TR(0x5b4593);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4597:{NFSU2_TR(0x5b4597);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b459e:{NFSU2_TR(0x5b459e);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b45a5:{NFSU2_TR(0x5b45a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b45a7:{NFSU2_TR(0x5b45a7);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b45ab:{NFSU2_TR(0x5b45ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b45af:{NFSU2_TR(0x5b45af);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b45b3:L5b45b3:{c.instructions+=3;NFSU2_TR(0x5b45b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b45b6:{NFSU2_TR(0x5b45b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b45b8:{NFSU2_TR(0x5b45b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b45bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b45bb:L5b45bb:{c.instructions+=2;NFSU2_TR(0x5b45bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b45bd:{NFSU2_TR(0x5b45bd);
if(r1(R+518)){{goto L5b4605;}}
}
B5b45bf:L5b45bf:{c.instructions+=12;NFSU2_TR(0x5b45bf);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b45c6:{NFSU2_TR(0x5b45c6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b45ca:{NFSU2_TR(0x5b45ca);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b45d1:{NFSU2_TR(0x5b45d1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b45d5:{NFSU2_TR(0x5b45d5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b45dc:{NFSU2_TR(0x5b45dc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b45e0:{NFSU2_TR(0x5b45e0);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b45e7:{NFSU2_TR(0x5b45e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b45ee:{NFSU2_TR(0x5b45ee);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b45f0:{NFSU2_TR(0x5b45f0);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b45f7:{NFSU2_TR(0x5b45f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b45fe:{NFSU2_TR(0x5b45fe);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4605:L5b4605:{c.instructions+=10;NFSU2_TR(0x5b4605);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b460c:{NFSU2_TR(0x5b460c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b460d:{NFSU2_TR(0x5b460d);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b4614:{NFSU2_TR(0x5b4614);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4615:{NFSU2_TR(0x5b4615);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4619:{NFSU2_TR(0x5b4619);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b461a:{NFSU2_TR(0x5b461a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4621:{NFSU2_TR(0x5b4621);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4622:{NFSU2_TR(0x5b4622);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4625:{NFSU2_TR(0x5b4625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b462aull));
TAIL_STATIC(0x598620u,598);
}
B5b462a:L5b462a:{c.instructions+=2;NFSU2_TR(0x5b462a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b462d:{NFSU2_TR(0x5b462d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4632ull));
TAIL_STATIC(0x5b3d20u,5b3);
}
B5b4632:L5b4632:{c.instructions+=11;NFSU2_TR(0x5b4632);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4634:{NFSU2_TR(0x5b4634);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4638:{NFSU2_TR(0x5b4638);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b463c:{NFSU2_TR(0x5b463c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4640:{NFSU2_TR(0x5b4640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4643:{NFSU2_TR(0x5b4643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4646:{NFSU2_TR(0x5b4646);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4649:{NFSU2_TR(0x5b4649);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b464c:{NFSU2_TR(0x5b464c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b464f:{NFSU2_TR(0x5b464f);
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
B5b4651:{NFSU2_TR(0x5b4651);
if(r1(R+518)){{goto L5b4664;}}
}
B5b4653:L5b4653:{c.instructions+=3;NFSU2_TR(0x5b4653);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b4656:{NFSU2_TR(0x5b4656);
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
B5b4658:{NFSU2_TR(0x5b4658);
if(r1(R+518)){{goto L5b4664;}}
}
B5b465a:L5b465a:{c.instructions+=3;NFSU2_TR(0x5b465a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b465b:{NFSU2_TR(0x5b465b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b465e:{NFSU2_TR(0x5b465e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b44b1u);}goto L5b44b1;}}
}
B5b4664:L5b4664:{c.instructions+=5;NFSU2_TR(0x5b4664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4665:{NFSU2_TR(0x5b4665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4666:{NFSU2_TR(0x5b4666);
__builtin_memmove((R+16),(R+20),4);
}
B5b4668:{NFSU2_TR(0x5b4668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4669:{NFSU2_TR(0x5b4669);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4670:L5b4670:{c.instructions+=8;NFSU2_TR(0x5b4670);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b4674:{NFSU2_TR(0x5b4674);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4676:{NFSU2_TR(0x5b4676);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4677:{NFSU2_TR(0x5b4677);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4678:{NFSU2_TR(0x5b4678);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4679:{NFSU2_TR(0x5b4679);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b467d:{NFSU2_TR(0x5b467d);
__builtin_memmove((R+24),(R+4),4);
}
B5b467f:{NFSU2_TR(0x5b467f);
if(r1(R+518)){{goto L5b4694;}}
}
B5b4681:L5b4681:{c.instructions+=5;NFSU2_TR(0x5b4681);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4685:{NFSU2_TR(0x5b4685);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4687:{NFSU2_TR(0x5b4687);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4688:{NFSU2_TR(0x5b4688);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4689:{NFSU2_TR(0x5b4689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b468eull));
TAIL_STATIC(0x5b2800u,5b2);
}
B5b468e:L5b468e:{c.instructions+=2;NFSU2_TR(0x5b468e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4692:{NFSU2_TR(0x5b4692);
{goto L5b469c;}
}
B5b4694:L5b4694:{c.instructions+=2;NFSU2_TR(0x5b4694);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4698:{NFSU2_TR(0x5b4698);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b469c:L5b469c:{c.instructions+=7;NFSU2_TR(0x5b469c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b46a0:{NFSU2_TR(0x5b46a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b46a4:{NFSU2_TR(0x5b46a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46a5:{NFSU2_TR(0x5b46a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46a6:{NFSU2_TR(0x5b46a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46a7:{NFSU2_TR(0x5b46a7);
__builtin_memmove((R+4),(R+24),4);
}
B5b46a9:{NFSU2_TR(0x5b46a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b46aeull));
TAIL_STATIC(0x5b3ee0u,5b3);
}
B5b46ae:L5b46ae:{c.instructions+=7;NFSU2_TR(0x5b46ae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b46b2:{NFSU2_TR(0x5b46b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b46b6:{NFSU2_TR(0x5b46b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46b7:{NFSU2_TR(0x5b46b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46b8:{NFSU2_TR(0x5b46b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46b9:{NFSU2_TR(0x5b46b9);
__builtin_memmove((R+4),(R+24),4);
}
B5b46bb:{NFSU2_TR(0x5b46bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b46c0ull));
TAIL_STATIC(0x5b3fa0u,5b3);
}
B5b46c0:L5b46c0:{c.instructions+=2;NFSU2_TR(0x5b46c0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b46c3:{NFSU2_TR(0x5b46c3);
if(r1(R+518)){{goto L5b4754;}}
}
B5b46c9:L5b46c9:{c.instructions+=2;NFSU2_TR(0x5b46c9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b46cc:{NFSU2_TR(0x5b46cc);
if(r1(R+518)){{goto L5b4754;}}
}
B5b46d2:L5b46d2:{c.instructions+=2;NFSU2_TR(0x5b46d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b46d5:{NFSU2_TR(0x5b46d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b4718;}}
}
B5b46d7:L5b46d7:{c.instructions+=2;NFSU2_TR(0x5b46d7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b46da:{NFSU2_TR(0x5b46da);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b4718;}}
}
B5b46dc:L5b46dc:{c.instructions+=1;NFSU2_TR(0x5b46dc);
w4(R+28,u32(0xaull));
}
B5b46e1:L5b46e1:{c.instructions+=3;NFSU2_TR(0x5b46e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46e2:{NFSU2_TR(0x5b46e2);
__builtin_memmove((R+4),(R+24),4);
}
B5b46e4:{NFSU2_TR(0x5b46e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b46e9ull));
TAIL_STATIC(0x59b080u,59b);
}
B5b46e9:L5b46e9:{c.instructions+=2;NFSU2_TR(0x5b46e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b46eb:{NFSU2_TR(0x5b46eb);
if(r1(R+518)){{goto L5b470c;}}
}
B5b46ed:L5b46ed:{c.instructions+=4;NFSU2_TR(0x5b46ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46ef:{NFSU2_TR(0x5b46ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b46f0:{NFSU2_TR(0x5b46f0);
__builtin_memmove((R+4),(R+24),4);
}
B5b46f2:{NFSU2_TR(0x5b46f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b46f7ull));
TAIL_STATIC(0x5a7da0u,5a7);
}
B5b46f7:L5b46f7:{c.instructions+=7;NFSU2_TR(0x5b46f7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b46fb:{NFSU2_TR(0x5b46fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b46ff:{NFSU2_TR(0x5b46ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4701:{NFSU2_TR(0x5b4701);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4702:{NFSU2_TR(0x5b4702);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4703:{NFSU2_TR(0x5b4703);
__builtin_memmove((R+4),(R+24),4);
}
B5b4705:{NFSU2_TR(0x5b4705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b470aull));
TAIL_STATIC(0x5b3ee0u,5b3);
}
B5b470a:L5b470a:{c.instructions+=1;NFSU2_TR(0x5b470a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b470c:L5b470c:{c.instructions+=3;NFSU2_TR(0x5b470c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b470d:{NFSU2_TR(0x5b470d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b4710:{NFSU2_TR(0x5b4710);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b46e1u);}goto L5b46e1;}}
}
B5b4712:L5b4712:{c.instructions+=4;NFSU2_TR(0x5b4712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4713:{NFSU2_TR(0x5b4713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4714:{NFSU2_TR(0x5b4714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4715:{NFSU2_TR(0x5b4715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4718:L5b4718:{c.instructions+=2;NFSU2_TR(0x5b4718);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b471b:{NFSU2_TR(0x5b471b);
if(r1(R+518)){{goto L5b4722;}}
}
B5b471d:L5b471d:{c.instructions+=2;NFSU2_TR(0x5b471d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b4720:{NFSU2_TR(0x5b4720);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4779;}}
}
B5b4722:L5b4722:{c.instructions+=9;NFSU2_TR(0x5b4722);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b4724:{NFSU2_TR(0x5b4724);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4727:{NFSU2_TR(0x5b4727);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5b472a:{NFSU2_TR(0x5b472a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b472c:{NFSU2_TR(0x5b472c);
__builtin_memmove((R+4),(R+24),4);
}
B5b472e:{NFSU2_TR(0x5b472e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5b4731:{NFSU2_TR(0x5b4731);
__builtin_memmove((R+28),(R+8),4);
}
B5b4733:{NFSU2_TR(0x5b4733);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4734:{NFSU2_TR(0x5b4734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4739ull));
TAIL_STATIC(0x5a7da0u,5a7);
}
B5b4739:L5b4739:{c.instructions+=7;NFSU2_TR(0x5b4739);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b473d:{NFSU2_TR(0x5b473d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4741:{NFSU2_TR(0x5b4741);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4743:{NFSU2_TR(0x5b4743);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4744:{NFSU2_TR(0x5b4744);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4745:{NFSU2_TR(0x5b4745);
__builtin_memmove((R+4),(R+24),4);
}
B5b4747:{NFSU2_TR(0x5b4747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b474cull));
TAIL_STATIC(0x5b3ee0u,5b3);
}
B5b474c:L5b474c:{c.instructions+=5;NFSU2_TR(0x5b474c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b474e:{NFSU2_TR(0x5b474e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b474f:{NFSU2_TR(0x5b474f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4750:{NFSU2_TR(0x5b4750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4751:{NFSU2_TR(0x5b4751);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4754:L5b4754:{c.instructions+=1;NFSU2_TR(0x5b4754);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b4756:L5b4756:{c.instructions+=4;NFSU2_TR(0x5b4756);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4757:{NFSU2_TR(0x5b4757);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4758:{NFSU2_TR(0x5b4758);
__builtin_memmove((R+4),(R+24),4);
}
B5b475a:{NFSU2_TR(0x5b475a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b475full));
TAIL_STATIC(0x5a7da0u,5a7);
}
B5b475f:L5b475f:{c.instructions+=7;NFSU2_TR(0x5b475f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4763:{NFSU2_TR(0x5b4763);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4767:{NFSU2_TR(0x5b4767);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4768:{NFSU2_TR(0x5b4768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4769:{NFSU2_TR(0x5b4769);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b476a:{NFSU2_TR(0x5b476a);
__builtin_memmove((R+4),(R+24),4);
}
B5b476c:{NFSU2_TR(0x5b476c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4771ull));
TAIL_STATIC(0x5b3ee0u,5b3);
}
B5b4771:L5b4771:{c.instructions+=4;NFSU2_TR(0x5b4771);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4773:{NFSU2_TR(0x5b4773);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b4774:{NFSU2_TR(0x5b4774);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5b4777:{NFSU2_TR(0x5b4777);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4756u);}goto L5b4756;}}
}
B5b4779:L5b4779:{c.instructions+=4;NFSU2_TR(0x5b4779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b477a:{NFSU2_TR(0x5b477a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b477b:{NFSU2_TR(0x5b477b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b477c:{NFSU2_TR(0x5b477c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4780:L5b4780:{c.instructions+=6;NFSU2_TR(0x5b4780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5b4783:{NFSU2_TR(0x5b4783);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4784:{NFSU2_TR(0x5b4784);
__builtin_memmove((R+20),(R+4),4);
}
B5b4786:{NFSU2_TR(0x5b4786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b478c:{NFSU2_TR(0x5b478c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b478e:{NFSU2_TR(0x5b478e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b47b2;}}
}
B5b4790:L5b4790:{c.instructions+=9;NFSU2_TR(0x5b4790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b4793:{NFSU2_TR(0x5b4793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4796:{NFSU2_TR(0x5b4796);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b479c:{NFSU2_TR(0x5b479c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b479f:{NFSU2_TR(0x5b479f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b47a0:{NFSU2_TR(0x5b47a0);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B5b47a5:{NFSU2_TR(0x5b47a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b47a6:{NFSU2_TR(0x5b47a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b47ad:{NFSU2_TR(0x5b47ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b47b2ull));
TAIL_STATIC(0x599d90u,599);
}
B5b47b2:L5b47b2:{c.instructions+=10;NFSU2_TR(0x5b47b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b47b8:{NFSU2_TR(0x5b47b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b47b9:{NFSU2_TR(0x5b47b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b47ba:{NFSU2_TR(0x5b47ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b47bb:{NFSU2_TR(0x5b47bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b47bc:{NFSU2_TR(0x5b47bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b47c2:{NFSU2_TR(0x5b47c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b47c5:{NFSU2_TR(0x5b47c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b47c7:{NFSU2_TR(0x5b47c7);
w4(R+4,u32(0x17ull));
}
B5b47cc:{NFSU2_TR(0x5b47cc);
__builtin_memmove((R+28),(R+8),4);
}
B5b47ce:L5b47ce:{c.instructions+=1;NFSU2_TR(0x5b47ce);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b47d0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b47ceu);}goto L5b47ce;}
}
B5b47d0:L5b47d0:{c.instructions+=2;NFSU2_TR(0x5b47d0);
w4(R+4,u32(0x9ull));
}
B5b47d5:{NFSU2_TR(0x5b47d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b47d8:L5b47d8:{c.instructions+=1;NFSU2_TR(0x5b47d8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b47da;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b47d8u);}goto L5b47d8;}
}
B5b47da:L5b47da:{c.instructions+=2;NFSU2_TR(0x5b47da);
w4(R+4,u32(0x9ull));
}
B5b47df:{NFSU2_TR(0x5b47df);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b47e5:L5b47e5:{c.instructions+=1;NFSU2_TR(0x5b47e5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b47e7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b47e5u);}goto L5b47e5;}
}
B5b47e7:L5b47e7:{c.instructions+=2;NFSU2_TR(0x5b47e7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b47e9:{NFSU2_TR(0x5b47e9);
__builtin_memmove((R+16),(R+16),4);
}
B5b47f0:L5b47f0:{c.instructions+=2;NFSU2_TR(0x5b47f0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b47f3:{NFSU2_TR(0x5b47f3);
if(r1(R+518)){{goto L5b480a;}}
}
B5b47f5:L5b47f5:{c.instructions+=4;NFSU2_TR(0x5b47f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b47f8:{NFSU2_TR(0x5b47f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b47f9:{NFSU2_TR(0x5b47f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b47fa:{NFSU2_TR(0x5b47fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b47ffull));
TAIL_STATIC(0x59ae40u,59a);
}
B5b47ff:L5b47ff:{c.instructions+=3;NFSU2_TR(0x5b47ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4802:{NFSU2_TR(0x5b4802);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4804:{NFSU2_TR(0x5b4804);
if(r1(R+518)){{goto L5b480a;}}
}
B5b4806:L5b4806:{c.instructions+=2;NFSU2_TR(0x5b4806);
w1(R+0,u8(0x1ull));
}
B5b4808:{NFSU2_TR(0x5b4808);
{goto L5b480c;}
}
B5b480a:L5b480a:{c.instructions+=1;NFSU2_TR(0x5b480a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b480c:L5b480c:{c.instructions+=2;NFSU2_TR(0x5b480c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b480f:{NFSU2_TR(0x5b480f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b482f;}}
}
B5b4811:L5b4811:{c.instructions+=2;NFSU2_TR(0x5b4811);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4814:{NFSU2_TR(0x5b4814);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b482f;}}
}
B5b4816:L5b4816:{c.instructions+=2;NFSU2_TR(0x5b4816);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4818:{NFSU2_TR(0x5b4818);
if(r1(R+518)){{goto L5b4863;}}
}
B5b481a:L5b481a:{c.instructions+=6;NFSU2_TR(0x5b481a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b481d:{NFSU2_TR(0x5b481d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4823:{NFSU2_TR(0x5b4823);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5b4826:{NFSU2_TR(0x5b4826);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4829:{NFSU2_TR(0x5b4829);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b482b:{NFSU2_TR(0x5b482b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b4833;}}
}
B5b482d:L5b482d:{c.instructions+=1;NFSU2_TR(0x5b482d);
{goto L5b4863;}
}
B5b482f:L5b482f:{c.instructions+=2;NFSU2_TR(0x5b482f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4831:{NFSU2_TR(0x5b4831);
if(r1(R+518)){{goto L5b4863;}}
}
B5b4833:L5b4833:{c.instructions+=4;NFSU2_TR(0x5b4833);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4835:{NFSU2_TR(0x5b4835);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4836:{NFSU2_TR(0x5b4836);
__builtin_memmove((R+4),(R+20),4);
}
B5b4838:{NFSU2_TR(0x5b4838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b483dull));
TAIL_STATIC(0x5a7da0u,5a7);
}
B5b483d:L5b483d:{c.instructions+=2;NFSU2_TR(0x5b483d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4840:{NFSU2_TR(0x5b4840);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b484a;}}
}
B5b4842:L5b4842:{c.instructions+=3;NFSU2_TR(0x5b4842);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4845:{NFSU2_TR(0x5b4845);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4848:{NFSU2_TR(0x5b4848);
{goto L5b4863;}
}
B5b484a:L5b484a:{c.instructions+=1;NFSU2_TR(0x5b484a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4854;}}
}
B5b484c:L5b484c:{c.instructions+=2;NFSU2_TR(0x5b484c);
{u32 ea_=u32(r4(R+20)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4852:{NFSU2_TR(0x5b4852);
{goto L5b4863;}
}
B5b4854:L5b4854:{c.instructions+=2;NFSU2_TR(0x5b4854);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4857:{NFSU2_TR(0x5b4857);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4861;}}
}
B5b4859:L5b4859:{c.instructions+=2;NFSU2_TR(0x5b4859);
{u32 ea_=u32(r4(R+20)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b485f:{NFSU2_TR(0x5b485f);
{goto L5b4863;}
}
B5b4861:L5b4861:{c.instructions+=1;NFSU2_TR(0x5b4861);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4863:L5b4863:{c.instructions+=3;NFSU2_TR(0x5b4863);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b4864:{NFSU2_TR(0x5b4864);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4867:{NFSU2_TR(0x5b4867);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b47f0u);}goto L5b47f0;}}
}
B5b4869:L5b4869:{c.instructions+=2;NFSU2_TR(0x5b4869);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b486b:{NFSU2_TR(0x5b486b);
{goto L5b4870;}
}
B5b4870:L5b4870:{c.instructions+=2;NFSU2_TR(0x5b4870);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4873:{NFSU2_TR(0x5b4873);
if(r1(R+518)){{goto L5b488a;}}
}
B5b4875:L5b4875:{c.instructions+=4;NFSU2_TR(0x5b4875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4878:{NFSU2_TR(0x5b4878);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4879:{NFSU2_TR(0x5b4879);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b487a:{NFSU2_TR(0x5b487a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b487full));
TAIL_STATIC(0x59ae40u,59a);
}
B5b487f:L5b487f:{c.instructions+=3;NFSU2_TR(0x5b487f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4882:{NFSU2_TR(0x5b4882);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4884:{NFSU2_TR(0x5b4884);
if(r1(R+518)){{goto L5b488a;}}
}
B5b4886:L5b4886:{c.instructions+=2;NFSU2_TR(0x5b4886);
w1(R+0,u8(0x1ull));
}
B5b4888:{NFSU2_TR(0x5b4888);
{goto L5b488c;}
}
B5b488a:L5b488a:{c.instructions+=1;NFSU2_TR(0x5b488a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b488c:L5b488c:{c.instructions+=2;NFSU2_TR(0x5b488c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b488f:{NFSU2_TR(0x5b488f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b48b6;}}
}
B5b4891:L5b4891:{c.instructions+=2;NFSU2_TR(0x5b4891);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4894:{NFSU2_TR(0x5b4894);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b48b6;}}
}
B5b4896:L5b4896:{c.instructions+=2;NFSU2_TR(0x5b4896);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4898:{NFSU2_TR(0x5b4898);
if(r1(R+518)){{goto L5b4954;}}
}
B5b489e:L5b489e:{c.instructions+=6;NFSU2_TR(0x5b489e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b48a1:{NFSU2_TR(0x5b48a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b48a7:{NFSU2_TR(0x5b48a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5b48aa:{NFSU2_TR(0x5b48aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b48ad:{NFSU2_TR(0x5b48ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b48af:{NFSU2_TR(0x5b48af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b48be;}}
}
B5b48b1:L5b48b1:{c.instructions+=1;NFSU2_TR(0x5b48b1);
{goto L5b4954;}
}
B5b48b6:L5b48b6:{c.instructions+=2;NFSU2_TR(0x5b48b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b48b8:{NFSU2_TR(0x5b48b8);
if(r1(R+518)){{goto L5b4954;}}
}
B5b48be:L5b48be:{c.instructions+=3;NFSU2_TR(0x5b48be);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b48c1:{NFSU2_TR(0x5b48c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b48c9:{NFSU2_TR(0x5b48c9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b48d8;}}
}
B5b48cb:L5b48cb:{c.instructions+=4;NFSU2_TR(0x5b48cb);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b48cf:{NFSU2_TR(0x5b48cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b48d2:{NFSU2_TR(0x5b48d2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b48d6:{NFSU2_TR(0x5b48d6);
{goto L5b48f5;}
}
B5b48d8:L5b48d8:{c.instructions+=1;NFSU2_TR(0x5b48d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b48e6;}}
}
B5b48da:L5b48da:{c.instructions+=3;NFSU2_TR(0x5b48da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b48e0:{NFSU2_TR(0x5b48e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b48e4:{NFSU2_TR(0x5b48e4);
{goto L5b48f5;}
}
B5b48e6:L5b48e6:{c.instructions+=2;NFSU2_TR(0x5b48e6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b48e9:{NFSU2_TR(0x5b48e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b48f5;}}
}
B5b48eb:L5b48eb:{c.instructions+=2;NFSU2_TR(0x5b48eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b48f1:{NFSU2_TR(0x5b48f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b48f5:L5b48f5:{c.instructions+=9;NFSU2_TR(0x5b48f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b48f7:{NFSU2_TR(0x5b48f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b48f9:{NFSU2_TR(0x5b48f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b48fd:{NFSU2_TR(0x5b48fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b48fe:{NFSU2_TR(0x5b48fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4902:{NFSU2_TR(0x5b4902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4903:{NFSU2_TR(0x5b4903);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4904:{NFSU2_TR(0x5b4904);
__builtin_memmove((R+4),(R+20),4);
}
B5b4906:{NFSU2_TR(0x5b4906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b490bull));
TAIL_STATIC(0x5b2980u,5b2);
}
B5b490b:L5b490b:{c.instructions+=4;NFSU2_TR(0x5b490b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b490d:{NFSU2_TR(0x5b490d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b490e:{NFSU2_TR(0x5b490e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4911:{NFSU2_TR(0x5b4911);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4916ull));
TAIL_STATIC(0x59aee0u,59a);
}
B5b4916:L5b4916:{c.instructions+=7;NFSU2_TR(0x5b4916);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b491a:{NFSU2_TR(0x5b491a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b491d:{NFSU2_TR(0x5b491d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4921:{NFSU2_TR(0x5b4921);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b4923:{NFSU2_TR(0x5b4923);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4927:{NFSU2_TR(0x5b4927);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b492b:{NFSU2_TR(0x5b492b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b4943;}}
}
B5b492d:L5b492d:{c.instructions+=2;NFSU2_TR(0x5b492d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4930:{NFSU2_TR(0x5b4930);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b4943;}}
}
B5b4932:L5b4932:{c.instructions+=6;NFSU2_TR(0x5b4932);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4936:{NFSU2_TR(0x5b4936);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4938:{NFSU2_TR(0x5b4938);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4939:{NFSU2_TR(0x5b4939);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b493a:{NFSU2_TR(0x5b493a);
__builtin_memmove((R+4),(R+20),4);
}
B5b493c:{NFSU2_TR(0x5b493c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4941ull));
TAIL_STATIC(0x5b3fa0u,5b3);
}
B5b4941:L5b4941:{c.instructions+=1;NFSU2_TR(0x5b4941);
{goto L5b4954;}
}
B5b4943:L5b4943:{c.instructions+=7;NFSU2_TR(0x5b4943);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4947:{NFSU2_TR(0x5b4947);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4949:{NFSU2_TR(0x5b4949);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b494b:{NFSU2_TR(0x5b494b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b494c:{NFSU2_TR(0x5b494c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b494d:{NFSU2_TR(0x5b494d);
__builtin_memmove((R+4),(R+20),4);
}
B5b494f:{NFSU2_TR(0x5b494f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4954ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4670u);}goto L5b4670;}
}
B5b4954:L5b4954:{c.instructions+=3;NFSU2_TR(0x5b4954);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b4955:{NFSU2_TR(0x5b4955);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4958:{NFSU2_TR(0x5b4958);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4870u);}goto L5b4870;}}
}
B5b495e:L5b495e:{c.instructions+=1;NFSU2_TR(0x5b495e);
w4(R+24,u32(0xaull));
}
B5b4963:L5b4963:{c.instructions+=2;NFSU2_TR(0x5b4963);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4966:{NFSU2_TR(0x5b4966);
if(r1(R+518)){{goto L5b497d;}}
}
B5b4968:L5b4968:{c.instructions+=4;NFSU2_TR(0x5b4968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b496b:{NFSU2_TR(0x5b496b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b496c:{NFSU2_TR(0x5b496c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b496d:{NFSU2_TR(0x5b496d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4972ull));
TAIL_STATIC(0x59ae40u,59a);
}
B5b4972:L5b4972:{c.instructions+=3;NFSU2_TR(0x5b4972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4975:{NFSU2_TR(0x5b4975);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4977:{NFSU2_TR(0x5b4977);
if(r1(R+518)){{goto L5b497d;}}
}
B5b4979:L5b4979:{c.instructions+=2;NFSU2_TR(0x5b4979);
w1(R+0,u8(0x1ull));
}
B5b497b:{NFSU2_TR(0x5b497b);
{goto L5b497f;}
}
B5b497d:L5b497d:{c.instructions+=1;NFSU2_TR(0x5b497d);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b497f:L5b497f:{c.instructions+=2;NFSU2_TR(0x5b497f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4982:{NFSU2_TR(0x5b4982);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b49a6;}}
}
B5b4984:L5b4984:{c.instructions+=2;NFSU2_TR(0x5b4984);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4987:{NFSU2_TR(0x5b4987);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b49a6;}}
}
B5b4989:L5b4989:{c.instructions+=2;NFSU2_TR(0x5b4989);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b498b:{NFSU2_TR(0x5b498b);
if(r1(R+518)){{goto L5b4a20;}}
}
B5b4991:L5b4991:{c.instructions+=6;NFSU2_TR(0x5b4991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4994:{NFSU2_TR(0x5b4994);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b499a:{NFSU2_TR(0x5b499a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5b499d:{NFSU2_TR(0x5b499d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b49a0:{NFSU2_TR(0x5b49a0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b49a2:{NFSU2_TR(0x5b49a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b49aa;}}
}
B5b49a4:L5b49a4:{c.instructions+=1;NFSU2_TR(0x5b49a4);
{goto L5b4a20;}
}
B5b49a6:L5b49a6:{c.instructions+=2;NFSU2_TR(0x5b49a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b49a8:{NFSU2_TR(0x5b49a8);
if(r1(R+518)){{goto L5b4a20;}}
}
B5b49aa:L5b49aa:{c.instructions+=3;NFSU2_TR(0x5b49aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b49ad:{NFSU2_TR(0x5b49ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b49b5:{NFSU2_TR(0x5b49b5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b49c4;}}
}
B5b49b7:L5b49b7:{c.instructions+=4;NFSU2_TR(0x5b49b7);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b49bb:{NFSU2_TR(0x5b49bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b49be:{NFSU2_TR(0x5b49be);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b49c2:{NFSU2_TR(0x5b49c2);
{goto L5b49e1;}
}
B5b49c4:L5b49c4:{c.instructions+=1;NFSU2_TR(0x5b49c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b49d2;}}
}
B5b49c6:L5b49c6:{c.instructions+=3;NFSU2_TR(0x5b49c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b49cc:{NFSU2_TR(0x5b49cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b49d0:{NFSU2_TR(0x5b49d0);
{goto L5b49e1;}
}
B5b49d2:L5b49d2:{c.instructions+=2;NFSU2_TR(0x5b49d2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b49d5:{NFSU2_TR(0x5b49d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b49e1;}}
}
B5b49d7:L5b49d7:{c.instructions+=2;NFSU2_TR(0x5b49d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b49dd:{NFSU2_TR(0x5b49dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b49e1:L5b49e1:{c.instructions+=9;NFSU2_TR(0x5b49e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49e3:{NFSU2_TR(0x5b49e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49e5:{NFSU2_TR(0x5b49e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b49e9:{NFSU2_TR(0x5b49e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49ea:{NFSU2_TR(0x5b49ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b49ee:{NFSU2_TR(0x5b49ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49ef:{NFSU2_TR(0x5b49ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49f0:{NFSU2_TR(0x5b49f0);
__builtin_memmove((R+4),(R+20),4);
}
B5b49f2:{NFSU2_TR(0x5b49f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b49f7ull));
TAIL_STATIC(0x5b2980u,5b2);
}
B5b49f7:L5b49f7:{c.instructions+=7;NFSU2_TR(0x5b49f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49f9:{NFSU2_TR(0x5b49f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49fb:{NFSU2_TR(0x5b49fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49fc:{NFSU2_TR(0x5b49fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49fe:{NFSU2_TR(0x5b49fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b49ff:{NFSU2_TR(0x5b49ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4a02:{NFSU2_TR(0x5b4a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4a07ull));
TAIL_STATIC(0x59aee0u,59a);
}
B5b4a07:L5b4a07:{c.instructions+=8;NFSU2_TR(0x5b4a07);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4a0b:{NFSU2_TR(0x5b4a0b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4a0f:{NFSU2_TR(0x5b4a0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4a10:{NFSU2_TR(0x5b4a10);
__builtin_memmove((R+4),(R+20),4);
}
B5b4a12:{NFSU2_TR(0x5b4a12);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b4a14:{NFSU2_TR(0x5b4a14);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4a18:{NFSU2_TR(0x5b4a18);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4a1b:{NFSU2_TR(0x5b4a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4a20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4670u);}goto L5b4670;}
}
B5b4a20:L5b4a20:{c.instructions+=3;NFSU2_TR(0x5b4a20);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b4a21:{NFSU2_TR(0x5b4a21);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4a24:{NFSU2_TR(0x5b4a24);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4963u);}goto L5b4963;}}
}
B5b4a2a:L5b4a2a:{c.instructions+=5;NFSU2_TR(0x5b4a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4a2d:{NFSU2_TR(0x5b4a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4a35:{NFSU2_TR(0x5b4a35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
}
B5b4a3a:{NFSU2_TR(0x5b4a3a);
w4(R+4,u32(0x9ull));
}
B5b4a3f:{NFSU2_TR(0x5b4a3f);
}
B5b4a40:L5b4a40:{c.instructions+=6;NFSU2_TR(0x5b4a40);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4a44:{NFSU2_TR(0x5b4a44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b4a47:{NFSU2_TR(0x5b4a47);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5b4a48:{NFSU2_TR(0x5b4a48);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4a4b:{NFSU2_TR(0x5b4a4b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4a4f:{NFSU2_TR(0x5b4a4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4a40u);}goto L5b4a40;}}
}
B5b4a51:L5b4a51:{c.instructions+=1;NFSU2_TR(0x5b4a51);
w4(R+24,u32(0x17ull));
}
B5b4a56:L5b4a56:{c.instructions+=2;NFSU2_TR(0x5b4a56);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4a59:{NFSU2_TR(0x5b4a59);
if(r1(R+518)){{goto L5b4a70;}}
}
B5b4a5b:L5b4a5b:{c.instructions+=4;NFSU2_TR(0x5b4a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4a5e:{NFSU2_TR(0x5b4a5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4a5f:{NFSU2_TR(0x5b4a5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4a60:{NFSU2_TR(0x5b4a60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4a65ull));
TAIL_STATIC(0x59ae40u,59a);
}
B5b4a65:L5b4a65:{c.instructions+=3;NFSU2_TR(0x5b4a65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4a68:{NFSU2_TR(0x5b4a68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4a6a:{NFSU2_TR(0x5b4a6a);
if(r1(R+518)){{goto L5b4a70;}}
}
B5b4a6c:L5b4a6c:{c.instructions+=2;NFSU2_TR(0x5b4a6c);
w1(R+0,u8(0x1ull));
}
B5b4a6e:{NFSU2_TR(0x5b4a6e);
{goto L5b4a72;}
}
B5b4a70:L5b4a70:{c.instructions+=1;NFSU2_TR(0x5b4a70);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5b4a72:L5b4a72:{c.instructions+=2;NFSU2_TR(0x5b4a72);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4a75:{NFSU2_TR(0x5b4a75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b4a9c;}}
}
B5b4a77:L5b4a77:{c.instructions+=2;NFSU2_TR(0x5b4a77);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4a7a:{NFSU2_TR(0x5b4a7a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b4a9c;}}
}
B5b4a7c:L5b4a7c:{c.instructions+=2;NFSU2_TR(0x5b4a7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4a7e:{NFSU2_TR(0x5b4a7e);
if(r1(R+518)){{goto L5b4b63;}}
}
B5b4a84:L5b4a84:{c.instructions+=6;NFSU2_TR(0x5b4a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4a87:{NFSU2_TR(0x5b4a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4a8d:{NFSU2_TR(0x5b4a8d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5b4a90:{NFSU2_TR(0x5b4a90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b4a93:{NFSU2_TR(0x5b4a93);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4a95:{NFSU2_TR(0x5b4a95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b4aa4;}}
}
B5b4a97:L5b4a97:{c.instructions+=1;NFSU2_TR(0x5b4a97);
{goto L5b4b63;}
}
B5b4a9c:L5b4a9c:{c.instructions+=2;NFSU2_TR(0x5b4a9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4a9e:{NFSU2_TR(0x5b4a9e);
if(r1(R+518)){{goto L5b4b63;}}
}
B5b4aa4:L5b4aa4:{c.instructions+=3;NFSU2_TR(0x5b4aa4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b4aa6:{NFSU2_TR(0x5b4aa6);
w4(R+28,u32(0x80ull));
}
B5b4aab:{NFSU2_TR(0x5b4aab);
{goto L5b4ab0;}
}
B5b4ab0:L5b4ab0:{c.instructions+=4;NFSU2_TR(0x5b4ab0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4ab1:{NFSU2_TR(0x5b4ab1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4ab2:{NFSU2_TR(0x5b4ab2);
__builtin_memmove((R+4),(R+20),4);
}
B5b4ab4:{NFSU2_TR(0x5b4ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4ab9ull));
TAIL_STATIC(0x5a7da0u,5a7);
}
B5b4ab9:L5b4ab9:{c.instructions+=2;NFSU2_TR(0x5b4ab9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4abc:{NFSU2_TR(0x5b4abc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b4ac6;}}
}
B5b4abe:L5b4abe:{c.instructions+=3;NFSU2_TR(0x5b4abe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4ac1:{NFSU2_TR(0x5b4ac1);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4ac4:{NFSU2_TR(0x5b4ac4);
{goto L5b4adb;}
}
B5b4ac6:L5b4ac6:{c.instructions+=1;NFSU2_TR(0x5b4ac6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4ace;}}
}
B5b4ac8:L5b4ac8:{c.instructions+=2;NFSU2_TR(0x5b4ac8);
{u32 ea_=u32(r4(R+20)+r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4acc:{NFSU2_TR(0x5b4acc);
{goto L5b4adb;}
}
B5b4ace:L5b4ace:{c.instructions+=2;NFSU2_TR(0x5b4ace);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4ad1:{NFSU2_TR(0x5b4ad1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4ad9;}}
}
B5b4ad3:L5b4ad3:{c.instructions+=2;NFSU2_TR(0x5b4ad3);
{u32 ea_=u32(r4(R+20)+r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4ad7:{NFSU2_TR(0x5b4ad7);
{goto L5b4adb;}
}
B5b4ad9:L5b4ad9:{c.instructions+=1;NFSU2_TR(0x5b4ad9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4adb:L5b4adb:{c.instructions+=4;NFSU2_TR(0x5b4adb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b4ade:{NFSU2_TR(0x5b4ade);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b4adf:{NFSU2_TR(0x5b4adf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xa4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4ae5:{NFSU2_TR(0x5b4ae5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4ab0u);}goto L5b4ab0;}}
}
B5b4ae7:L5b4ae7:{c.instructions+=3;NFSU2_TR(0x5b4ae7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b4ae9:{NFSU2_TR(0x5b4ae9);
w4(R+12,u32(0x80ull));
}
B5b4aee:{NFSU2_TR(0x5b4aee);
__builtin_memmove((R+28),(R+28),4);
}
B5b4af0:L5b4af0:{c.instructions+=3;NFSU2_TR(0x5b4af0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4af3:{NFSU2_TR(0x5b4af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4afb:{NFSU2_TR(0x5b4afb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b4b06;}}
}
B5b4afd:L5b4afd:{c.instructions+=3;NFSU2_TR(0x5b4afd);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4b01:{NFSU2_TR(0x5b4b01);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4b04:{NFSU2_TR(0x5b4b04);
{goto L5b4b17;}
}
B5b4b06:L5b4b06:{c.instructions+=1;NFSU2_TR(0x5b4b06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4b0e;}}
}
B5b4b08:L5b4b08:{c.instructions+=2;NFSU2_TR(0x5b4b08);
{u32 ea_=u32(r4(R+20)+r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4b0c:{NFSU2_TR(0x5b4b0c);
{goto L5b4b17;}
}
B5b4b0e:L5b4b0e:{c.instructions+=2;NFSU2_TR(0x5b4b0e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4b11:{NFSU2_TR(0x5b4b11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4b1b;}}
}
B5b4b13:L5b4b13:{c.instructions+=1;NFSU2_TR(0x5b4b13);
{u32 ea_=u32(r4(R+20)+r4(R+12)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4b17:L5b4b17:{c.instructions+=1;NFSU2_TR(0x5b4b17);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4b1b:L5b4b1b:{c.instructions+=9;NFSU2_TR(0x5b4b1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b1d:{NFSU2_TR(0x5b4b1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b1e:{NFSU2_TR(0x5b4b1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4b22:{NFSU2_TR(0x5b4b22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b23:{NFSU2_TR(0x5b4b23);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4b27:{NFSU2_TR(0x5b4b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b28:{NFSU2_TR(0x5b4b28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b29:{NFSU2_TR(0x5b4b29);
__builtin_memmove((R+4),(R+20),4);
}
B5b4b2b:{NFSU2_TR(0x5b4b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4b30ull));
TAIL_STATIC(0x5b2980u,5b2);
}
B5b4b30:L5b4b30:{c.instructions+=7;NFSU2_TR(0x5b4b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b32:{NFSU2_TR(0x5b4b32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b33:{NFSU2_TR(0x5b4b33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b34:{NFSU2_TR(0x5b4b34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b35:{NFSU2_TR(0x5b4b35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b36:{NFSU2_TR(0x5b4b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4b39:{NFSU2_TR(0x5b4b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4b3eull));
TAIL_STATIC(0x59aee0u,59a);
}
B5b4b3e:L5b4b3e:{c.instructions+=8;NFSU2_TR(0x5b4b3e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4b42:{NFSU2_TR(0x5b4b42);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4b46:{NFSU2_TR(0x5b4b46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4b47:{NFSU2_TR(0x5b4b47);
__builtin_memmove((R+4),(R+20),4);
}
B5b4b49:{NFSU2_TR(0x5b4b49);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b4b4b:{NFSU2_TR(0x5b4b4b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4b4f:{NFSU2_TR(0x5b4b4f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4b52:{NFSU2_TR(0x5b4b52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4b57ull));
TAIL_STATIC(0x5b2c00u,5b2);
}
B5b4b57:L5b4b57:{c.instructions+=4;NFSU2_TR(0x5b4b57);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5b4b5a:{NFSU2_TR(0x5b4b5a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b4b5b:{NFSU2_TR(0x5b4b5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xa4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b4b61:{NFSU2_TR(0x5b4b61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4af0u);}goto L5b4af0;}}
}
B5b4b63:L5b4b63:{c.instructions+=3;NFSU2_TR(0x5b4b63);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b4b64:{NFSU2_TR(0x5b4b64);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4b67:{NFSU2_TR(0x5b4b67);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4a56u);}goto L5b4a56;}}
}
B5b4b6d:L5b4b6d:{c.instructions+=7;NFSU2_TR(0x5b4b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4b70:{NFSU2_TR(0x5b4b70);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4b76:{NFSU2_TR(0x5b4b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4b77:{NFSU2_TR(0x5b4b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4b78:{NFSU2_TR(0x5b4b78);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
}
B5b4b7d:{NFSU2_TR(0x5b4b7d);
w4(R+4,u32(0x9ull));
}
B5b4b82:{NFSU2_TR(0x5b4b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4b83:L5b4b83:{c.instructions+=4;NFSU2_TR(0x5b4b83);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4b85:{NFSU2_TR(0x5b4b85);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b4b88:{NFSU2_TR(0x5b4b88);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5b4b89:{NFSU2_TR(0x5b4b89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4b83u);}goto L5b4b83;}}
}
B5b4b8b:L5b4b8b:{c.instructions+=6;NFSU2_TR(0x5b4b8b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b4b8f:{NFSU2_TR(0x5b4b8f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b4b91:{NFSU2_TR(0x5b4b91);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4b97:{NFSU2_TR(0x5b4b97);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4b99:{NFSU2_TR(0x5b4b99);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4b9c:{NFSU2_TR(0x5b4b9c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b4baa;}}
}
B5b4b9e:L5b4b9e:{c.instructions+=4;NFSU2_TR(0x5b4b9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4ba2:{NFSU2_TR(0x5b4ba2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4ba3:{NFSU2_TR(0x5b4ba3);
__builtin_memmove((R+4),(R+20),4);
}
B5b4ba5:{NFSU2_TR(0x5b4ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4baaull));
TAIL_STATIC(0x59b3c0u,59b);
}
B5b4baa:L5b4baa:{c.instructions+=2;NFSU2_TR(0x5b4baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4bb0:{NFSU2_TR(0x5b4bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4bd4;}}
}
B5b4bb2:L5b4bb2:{c.instructions+=9;NFSU2_TR(0x5b4bb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b4bb5:{NFSU2_TR(0x5b4bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4bb8:{NFSU2_TR(0x5b4bb8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b4bbe:{NFSU2_TR(0x5b4bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4bc1:{NFSU2_TR(0x5b4bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4bc2:{NFSU2_TR(0x5b4bc2);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B5b4bc7:{NFSU2_TR(0x5b4bc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4bc8:{NFSU2_TR(0x5b4bc8);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b4bcf:{NFSU2_TR(0x5b4bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4bd4ull));
TAIL_STATIC(0x5997e0u,599);
}
B5b4bd4:L5b4bd4:{c.instructions+=3;NFSU2_TR(0x5b4bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4bd5:{NFSU2_TR(0x5b4bd5);
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
B5b4bd8:{NFSU2_TR(0x5b4bd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4be0:L5b4be0:{c.instructions+=11;NFSU2_TR(0x5b4be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4be1:{NFSU2_TR(0x5b4be1);
__builtin_memmove((R+20),(R+16),4);
}
B5b4be3:{NFSU2_TR(0x5b4be3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b4be6:{NFSU2_TR(0x5b4be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B5b4bec:{NFSU2_TR(0x5b4bec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4bed:{NFSU2_TR(0x5b4bed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4bee:{NFSU2_TR(0x5b4bee);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4bf2:{NFSU2_TR(0x5b4bf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4bf3:{NFSU2_TR(0x5b4bf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4bf4:{NFSU2_TR(0x5b4bf4);
__builtin_memmove((R+24),(R+4),4);
}
B5b4bf6:{NFSU2_TR(0x5b4bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4bfbull));
TAIL_STATIC(0x43c780u,43c);
}
B5b4bfb:L5b4bfb:{c.instructions+=11;NFSU2_TR(0x5b4bfb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b4bfd:{NFSU2_TR(0x5b4bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c00:{NFSU2_TR(0x5b4c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c03:{NFSU2_TR(0x5b4c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c06:{NFSU2_TR(0x5b4c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4c09:{NFSU2_TR(0x5b4c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c11:{NFSU2_TR(0x5b4c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c19:{NFSU2_TR(0x5b4c19);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c21:{NFSU2_TR(0x5b4c21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b4c23:{NFSU2_TR(0x5b4c23);
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
B5b4c26:{NFSU2_TR(0x5b4c26);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4c29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4c29:L5b4c29:{c.instructions+=4;NFSU2_TR(0x5b4c29);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4c2d:{NFSU2_TR(0x5b4c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4c30:{NFSU2_TR(0x5b4c30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b4c32:{NFSU2_TR(0x5b4c32);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4c35ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4c35:L5b4c35:{c.instructions+=5;NFSU2_TR(0x5b4c35);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4c39:{NFSU2_TR(0x5b4c39);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b4c3b:{NFSU2_TR(0x5b4c3b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4c3d:{NFSU2_TR(0x5b4c3d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4c40:{NFSU2_TR(0x5b4c40);
if(r1(R+514)){{goto L5b4c4e;}}
}
B5b4c42:L5b4c42:{c.instructions+=4;NFSU2_TR(0x5b4c42);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4c46:{NFSU2_TR(0x5b4c46);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4c48:{NFSU2_TR(0x5b4c48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c4c:{NFSU2_TR(0x5b4c4c);
{goto L5b4c52;}
}
B5b4c4e:L5b4c4e:{c.instructions+=1;NFSU2_TR(0x5b4c4e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4c52:L5b4c52:{c.instructions+=6;NFSU2_TR(0x5b4c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4c55:{NFSU2_TR(0x5b4c55);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b4c58:{NFSU2_TR(0x5b4c58);
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
B5b4c5a:{NFSU2_TR(0x5b4c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c62:{NFSU2_TR(0x5b4c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4c6a:{NFSU2_TR(0x5b4c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4c79;}}
}
B5b4c6c:L5b4c6c:{c.instructions+=7;NFSU2_TR(0x5b4c6c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4c72:{NFSU2_TR(0x5b4c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4c73:{NFSU2_TR(0x5b4c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4c74:{NFSU2_TR(0x5b4c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4c75:{NFSU2_TR(0x5b4c75);
__builtin_memmove((R+16),(R+20),4);
}
B5b4c77:{NFSU2_TR(0x5b4c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4c78:{NFSU2_TR(0x5b4c78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4c79:L5b4c79:{c.instructions+=2;NFSU2_TR(0x5b4c79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4c7b:{NFSU2_TR(0x5b4c7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4c80ull));
TAIL_STATIC(0x592f00u,592);
}
B5b4c80:L5b4c80:{c.instructions+=14;NFSU2_TR(0x5b4c80);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4c84:{NFSU2_TR(0x5b4c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4c87:{NFSU2_TR(0x5b4c87);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b4c8b:{NFSU2_TR(0x5b4c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b4c8d:{NFSU2_TR(0x5b4c8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4c94:{NFSU2_TR(0x5b4c94);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b4c9a:{NFSU2_TR(0x5b4c9a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4c9e:{NFSU2_TR(0x5b4c9e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4ca2:{NFSU2_TR(0x5b4ca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b4ca6:{NFSU2_TR(0x5b4ca6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4ca7:{NFSU2_TR(0x5b4ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4ca8:{NFSU2_TR(0x5b4ca8);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4cac:{NFSU2_TR(0x5b4cac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4cad:{NFSU2_TR(0x5b4cad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4cb0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4cb0:L5b4cb0:{c.instructions+=8;NFSU2_TR(0x5b4cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4cb3:{NFSU2_TR(0x5b4cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b4cb5:{NFSU2_TR(0x5b4cb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4cb6:{NFSU2_TR(0x5b4cb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4cba:{NFSU2_TR(0x5b4cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4cbb:{NFSU2_TR(0x5b4cbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4cbf:{NFSU2_TR(0x5b4cbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4cc0:{NFSU2_TR(0x5b4cc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4cc3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4cc3:L5b4cc3:{c.instructions+=10;NFSU2_TR(0x5b4cc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4cc7:{NFSU2_TR(0x5b4cc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4cc8:{NFSU2_TR(0x5b4cc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b4ccc:{NFSU2_TR(0x5b4ccc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4ccd:{NFSU2_TR(0x5b4ccd);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4cd1:{NFSU2_TR(0x5b4cd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4cd2:{NFSU2_TR(0x5b4cd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4cd9:{NFSU2_TR(0x5b4cd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4cda:{NFSU2_TR(0x5b4cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4cdd:{NFSU2_TR(0x5b4cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4ce2ull));
TAIL_STATIC(0x598620u,598);
}
B5b4ce2:L5b4ce2:{c.instructions+=2;NFSU2_TR(0x5b4ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4ce5:{NFSU2_TR(0x5b4ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4ceaull));
TAIL_STATIC(0x5b3d20u,5b3);
}
B5b4cea:L5b4cea:{c.instructions+=5;NFSU2_TR(0x5b4cea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4cec:{NFSU2_TR(0x5b4cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4cef:{NFSU2_TR(0x5b4cef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b4cf2:{NFSU2_TR(0x5b4cf2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4cf4:{NFSU2_TR(0x5b4cf4);
if(r1(R+518)){{goto L5b4cfe;}}
}
B5b4cf6:L5b4cf6:{c.instructions+=3;NFSU2_TR(0x5b4cf6);
__builtin_memmove((R+8),(R+28),4);
}
B5b4cf8:{NFSU2_TR(0x5b4cf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4cfc:{NFSU2_TR(0x5b4cfc);
{goto L5b4d35;}
}
B5b4cfe:L5b4cfe:{c.instructions+=3;NFSU2_TR(0x5b4cfe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5b4d01:{NFSU2_TR(0x5b4d01);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4d03:{NFSU2_TR(0x5b4d03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4d62;}}
}
B5b4d05:L5b4d05:{c.instructions+=7;NFSU2_TR(0x5b4d05);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4d09:{NFSU2_TR(0x5b4d09);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4d0d:{NFSU2_TR(0x5b4d0d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4d13:{NFSU2_TR(0x5b4d13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4d17:{NFSU2_TR(0x5b4d17);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4d19:{NFSU2_TR(0x5b4d19);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4d1c:{NFSU2_TR(0x5b4d1c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b4d2d;}}
}
B5b4d1e:L5b4d1e:{c.instructions+=5;NFSU2_TR(0x5b4d1e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4d22:{NFSU2_TR(0x5b4d22);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4d26:{NFSU2_TR(0x5b4d26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4d28:{NFSU2_TR(0x5b4d28);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4d2b:{NFSU2_TR(0x5b4d2b);
if(r1(R+514)){{goto L5b4d35;}}
}
B5b4d2d:L5b4d2d:{c.instructions+=2;NFSU2_TR(0x5b4d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4d31:{NFSU2_TR(0x5b4d31);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4d35:L5b4d35:{c.instructions+=3;NFSU2_TR(0x5b4d35);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5b4d36:{NFSU2_TR(0x5b4d36);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b4d39:{NFSU2_TR(0x5b4d39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4c80u);}goto L5b4c80;}}
}
B5b4d3f:L5b4d3f:{c.instructions+=5;NFSU2_TR(0x5b4d3f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4d43:{NFSU2_TR(0x5b4d43);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4d49:{NFSU2_TR(0x5b4d49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4d4b:{NFSU2_TR(0x5b4d4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4d4e:{NFSU2_TR(0x5b4d4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4d5a;}}
}
B5b4d50:L5b4d50:{c.instructions+=3;NFSU2_TR(0x5b4d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4d54:{NFSU2_TR(0x5b4d54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4d58:{NFSU2_TR(0x5b4d58);
{goto L5b4d62;}
}
B5b4d5a:L5b4d5a:{c.instructions+=3;NFSU2_TR(0x5b4d5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4d5b:{NFSU2_TR(0x5b4d5b);
__builtin_memmove((R+4),(R+24),4);
}
B5b4d5d:{NFSU2_TR(0x5b4d5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4d62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b42f0u);}goto L5b42f0;}
}
B5b4d62:L5b4d62:{c.instructions+=6;NFSU2_TR(0x5b4d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b4d65:{NFSU2_TR(0x5b4d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4d6b:{NFSU2_TR(0x5b4d6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5b4d6e:{NFSU2_TR(0x5b4d6e);
w1(R+0,u8(0x3ull));
}
B5b4d70:{NFSU2_TR(0x5b4d70);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4d72:{NFSU2_TR(0x5b4d72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4d8d;}}
}
B5b4d74:L5b4d74:{c.instructions+=3;NFSU2_TR(0x5b4d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b4d76:{NFSU2_TR(0x5b4d76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4d78:{NFSU2_TR(0x5b4d78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4d7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4d7b:L5b4d7b:{c.instructions+=8;NFSU2_TR(0x5b4d7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4d7f:{NFSU2_TR(0x5b4d7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b4d86:{NFSU2_TR(0x5b4d86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4d87:{NFSU2_TR(0x5b4d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4d88:{NFSU2_TR(0x5b4d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4d89:{NFSU2_TR(0x5b4d89);
__builtin_memmove((R+16),(R+20),4);
}
B5b4d8b:{NFSU2_TR(0x5b4d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4d8c:{NFSU2_TR(0x5b4d8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4d8d:L5b4d8d:{c.instructions+=3;NFSU2_TR(0x5b4d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4d93:{NFSU2_TR(0x5b4d93);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5b4d96:{NFSU2_TR(0x5b4d96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4da6;}}
}
B5b4d98:L5b4d98:{c.instructions+=3;NFSU2_TR(0x5b4d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b4d9a:{NFSU2_TR(0x5b4d9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4d9c:{NFSU2_TR(0x5b4d9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4d9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b4d9f:L5b4d9f:{c.instructions+=1;NFSU2_TR(0x5b4d9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b4da6:L5b4da6:{c.instructions+=7;NFSU2_TR(0x5b4da6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4daa:{NFSU2_TR(0x5b4daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4dab:{NFSU2_TR(0x5b4dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4dac:{NFSU2_TR(0x5b4dac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4dad:{NFSU2_TR(0x5b4dad);
__builtin_memmove((R+16),(R+20),4);
}
B5b4daf:{NFSU2_TR(0x5b4daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4db0:{NFSU2_TR(0x5b4db0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4dc0:L5b4dc0:{c.instructions+=6;NFSU2_TR(0x5b4dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5b4dc3:{NFSU2_TR(0x5b4dc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4dc4:{NFSU2_TR(0x5b4dc4);
__builtin_memmove((R+24),(R+4),4);
}
B5b4dc6:{NFSU2_TR(0x5b4dc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b4dc8:{NFSU2_TR(0x5b4dc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4dcb:{NFSU2_TR(0x5b4dcb);
if(r1(R+518)){{goto L5b4f7a;}}
}
B5b4dd1:L5b4dd1:{c.instructions+=15;NFSU2_TR(0x5b4dd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4dd2:{NFSU2_TR(0x5b4dd2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5b4dd8:{NFSU2_TR(0x5b4dd8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4dd9:{NFSU2_TR(0x5b4dd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4dda:{NFSU2_TR(0x5b4dda);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
}
B5b4de0:{NFSU2_TR(0x5b4de0);
__builtin_memmove((R+28),(R+0),4);
}
B5b4de2:{NFSU2_TR(0x5b4de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4de6:{NFSU2_TR(0x5b4de6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4de7:{NFSU2_TR(0x5b4de7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4ded:{NFSU2_TR(0x5b4ded);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4dee:{NFSU2_TR(0x5b4dee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4df1:{NFSU2_TR(0x5b4df1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b4df7:{NFSU2_TR(0x5b4df7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4df8:{NFSU2_TR(0x5b4df8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4dfc:{NFSU2_TR(0x5b4dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4e01ull));
TAIL_STATIC(0x5ac4f0u,5ac);
}
B5b4e01:L5b4e01:{c.instructions+=4;NFSU2_TR(0x5b4e01);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4e05:{NFSU2_TR(0x5b4e05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4e06:{NFSU2_TR(0x5b4e06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4e07:{NFSU2_TR(0x5b4e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4e0cull));
TAIL_STATIC(0x5997e0u,599);
}
B5b4e0c:L5b4e0c:{c.instructions+=3;NFSU2_TR(0x5b4e0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4e12:{NFSU2_TR(0x5b4e12);
__builtin_memmove((R+4),(R+12),4);
}
B5b4e14:{NFSU2_TR(0x5b4e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4e19ull));
TAIL_STATIC(0x59b0e0u,59b);
}
B5b4e19:L5b4e19:{c.instructions+=2;NFSU2_TR(0x5b4e19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4e1b:{NFSU2_TR(0x5b4e1b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b4e24;}}
}
B5b4e1d:L5b4e1d:{c.instructions+=2;NFSU2_TR(0x5b4e1d);
__builtin_memmove((R+4),(R+12),4);
}
B5b4e1f:{NFSU2_TR(0x5b4e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4e24ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4780u);}goto L5b4780;}
}
B5b4e24:L5b4e24:{c.instructions+=4;NFSU2_TR(0x5b4e24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55cull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4e2a:{NFSU2_TR(0x5b4e2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4e2b:{NFSU2_TR(0x5b4e2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4e2c:{NFSU2_TR(0x5b4e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4e31ull));
TAIL_STATIC(0x5b5ab0u,5b5);
}
B5b4e31:L5b4e31:{c.instructions+=4;NFSU2_TR(0x5b4e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4e37:{NFSU2_TR(0x5b4e37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4e3a:{NFSU2_TR(0x5b4e3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4e3c:{NFSU2_TR(0x5b4e3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4eff;}}
}
B5b4e42:L5b4e42:{c.instructions+=7;NFSU2_TR(0x5b4e42);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4e45:{NFSU2_TR(0x5b4e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b4e4d:{NFSU2_TR(0x5b4e4d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b4e51:{NFSU2_TR(0x5b4e51);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4e54:{NFSU2_TR(0x5b4e54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4e56:{NFSU2_TR(0x5b4e56);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4e59:{NFSU2_TR(0x5b4e59);
if(r1(R+514)){{goto L5b4ebd;}}
}
B5b4e5b:L5b4e5b:{c.instructions+=1;NFSU2_TR(0x5b4e5b);
{goto L5b4e60;}
}
B5b4e60:L5b4e60:{c.instructions+=4;NFSU2_TR(0x5b4e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4e64:{NFSU2_TR(0x5b4e64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4e65:{NFSU2_TR(0x5b4e65);
__builtin_memmove((R+4),(R+12),4);
}
B5b4e67:{NFSU2_TR(0x5b4e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4e6cull));
TAIL_STATIC(0x5764d0u,576);
}
B5b4e6c:L5b4e6c:{c.instructions+=9;NFSU2_TR(0x5b4e6c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4e70:{NFSU2_TR(0x5b4e70);
{u32 ea_=u32(r4(R+24)+u32(656u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b4e76:{NFSU2_TR(0x5b4e76);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b4e7a:{NFSU2_TR(0x5b4e7a);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5b4e80:{NFSU2_TR(0x5b4e80);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b4e82:{NFSU2_TR(0x5b4e82);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b4e84:{NFSU2_TR(0x5b4e84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4e86:{NFSU2_TR(0x5b4e86);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4e89:{NFSU2_TR(0x5b4e89);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b4eb9;}}
}
B5b4e8b:L5b4e8b:{c.instructions+=13;NFSU2_TR(0x5b4e8b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b4e8d:{NFSU2_TR(0x5b4e8d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5b4e8f:{NFSU2_TR(0x5b4e8f);
{u32 ea_=u32(u32(8002176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b4e95:{NFSU2_TR(0x5b4e95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4e99:{NFSU2_TR(0x5b4e99);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4e9d:{NFSU2_TR(0x5b4e9d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4e9f:{NFSU2_TR(0x5b4e9f);
{u32 ea_=u32(u32(8002176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4ea5:{NFSU2_TR(0x5b4ea5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b4ea9:{NFSU2_TR(0x5b4ea9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b4ead:{NFSU2_TR(0x5b4ead);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4eb0:{NFSU2_TR(0x5b4eb0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4eb2:{NFSU2_TR(0x5b4eb2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b4eb5:{NFSU2_TR(0x5b4eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4e60u);}goto L5b4e60;}}
}
B5b4eb7:L5b4eb7:{c.instructions+=1;NFSU2_TR(0x5b4eb7);
{goto L5b4ebd;}
}
B5b4eb9:L5b4eb9:{c.instructions+=2;NFSU2_TR(0x5b4eb9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4ebb:{NFSU2_TR(0x5b4ebb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b4ebd:L5b4ebd:{c.instructions+=5;NFSU2_TR(0x5b4ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4ec1:{NFSU2_TR(0x5b4ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4ec4:{NFSU2_TR(0x5b4ec4);
w1(R+4,u8(0x3ull));
}
B5b4ec6:{NFSU2_TR(0x5b4ec6);
w4(R+8,u32(0x3ull));
}
B5b4ecb:{NFSU2_TR(0x5b4ecb);
{goto L5b4ed0;}
}
B5b4ed0:L5b4ed0:{c.instructions+=5;NFSU2_TR(0x5b4ed0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b4ed4:{NFSU2_TR(0x5b4ed4);
{u32 ea_=u32((r4(R+8)*4u)+u32(8002180u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b4edb:{NFSU2_TR(0x5b4edb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b4edd:{NFSU2_TR(0x5b4edd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4ee0:{NFSU2_TR(0x5b4ee0);
if(r1(R+518)){{goto L5b4ee7;}}
}
B5b4ee2:L5b4ee2:{c.instructions+=2;NFSU2_TR(0x5b4ee2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B5b4ee3:{NFSU2_TR(0x5b4ee3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4ed0u);}goto L5b4ed0;}}
}
B5b4ee5:L5b4ee5:{c.instructions+=1;NFSU2_TR(0x5b4ee5);
{goto L5b4eeb;}
}
B5b4ee7:L5b4ee7:{c.instructions+=2;NFSU2_TR(0x5b4ee7);
w1(R+4,u8(0x3ull));
}
B5b4ee9:{NFSU2_TR(0x5b4ee9);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B5b4eeb:L5b4eeb:{c.instructions+=4;NFSU2_TR(0x5b4eeb);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b4eef:{NFSU2_TR(0x5b4eef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4ef1:{NFSU2_TR(0x5b4ef1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b4ef4:{NFSU2_TR(0x5b4ef4);
if(r1(R+518)){{goto L5b4f03;}}
}
B5b4ef6:L5b4ef6:{c.instructions+=2;NFSU2_TR(0x5b4ef6);
__builtin_memmove((R+4),(R+24),4);
}
B5b4ef8:{NFSU2_TR(0x5b4ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4efdull));
TAIL_STATIC(0x5b06a0u,5b0);
}
B5b4efd:L5b4efd:{c.instructions+=1;NFSU2_TR(0x5b4efd);
{goto L5b4f03;}
}
B5b4eff:L5b4eff:{c.instructions+=1;NFSU2_TR(0x5b4eff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b4f03:L5b4f03:{c.instructions+=3;NFSU2_TR(0x5b4f03);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4f07:{NFSU2_TR(0x5b4f07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4f0a:{NFSU2_TR(0x5b4f0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4f2e;}}
}
B5b4f0c:L5b4f0c:{c.instructions+=5;NFSU2_TR(0x5b4f0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4f10:{NFSU2_TR(0x5b4f10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f11:{NFSU2_TR(0x5b4f11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4f14:{NFSU2_TR(0x5b4f14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f15:{NFSU2_TR(0x5b4f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4f1aull));
TAIL_STATIC(0x5a7750u,5a7);
}
B5b4f1a:L5b4f1a:{c.instructions+=3;NFSU2_TR(0x5b4f1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f1b:{NFSU2_TR(0x5b4f1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f1c:{NFSU2_TR(0x5b4f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4f21ull));
TAIL_STATIC(0x5b5ab0u,5b5);
}
B5b4f21:L5b4f21:{c.instructions+=7;NFSU2_TR(0x5b4f21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4f24:{NFSU2_TR(0x5b4f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4f25:{NFSU2_TR(0x5b4f25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4f26:{NFSU2_TR(0x5b4f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4f27:{NFSU2_TR(0x5b4f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4f28:{NFSU2_TR(0x5b4f28);
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
B5b4f2b:{NFSU2_TR(0x5b4f2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4f2e:L5b4f2e:{c.instructions+=2;NFSU2_TR(0x5b4f2e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4f31:{NFSU2_TR(0x5b4f31);
if(r1(R+518)){{goto L5b4f5f;}}
}
B5b4f33:L5b4f33:{c.instructions+=2;NFSU2_TR(0x5b4f33);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4f36:{NFSU2_TR(0x5b4f36);
if(r1(R+518)){{goto L5b4f5f;}}
}
B5b4f38:L5b4f38:{c.instructions+=2;NFSU2_TR(0x5b4f38);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b4f3b:{NFSU2_TR(0x5b4f3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b4f77;}}
}
B5b4f3d:L5b4f3d:{c.instructions+=5;NFSU2_TR(0x5b4f3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4f41:{NFSU2_TR(0x5b4f41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f42:{NFSU2_TR(0x5b4f42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4f45:{NFSU2_TR(0x5b4f45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f46:{NFSU2_TR(0x5b4f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4f4bull));
TAIL_STATIC(0x5a7830u,5a7);
}
B5b4f4b:L5b4f4b:{c.instructions+=3;NFSU2_TR(0x5b4f4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f4c:{NFSU2_TR(0x5b4f4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f4d:{NFSU2_TR(0x5b4f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4f52ull));
TAIL_STATIC(0x5b5ab0u,5b5);
}
B5b4f52:L5b4f52:{c.instructions+=7;NFSU2_TR(0x5b4f52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4f55:{NFSU2_TR(0x5b4f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4f56:{NFSU2_TR(0x5b4f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4f57:{NFSU2_TR(0x5b4f57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4f58:{NFSU2_TR(0x5b4f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4f59:{NFSU2_TR(0x5b4f59);
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
B5b4f5c:{NFSU2_TR(0x5b4f5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4f5f:L5b4f5f:{c.instructions+=5;NFSU2_TR(0x5b4f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4f63:{NFSU2_TR(0x5b4f63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f64:{NFSU2_TR(0x5b4f64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b4f67:{NFSU2_TR(0x5b4f67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f68:{NFSU2_TR(0x5b4f68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4f6dull));
TAIL_STATIC(0x5a77c0u,5a7);
}
B5b4f6d:L5b4f6d:{c.instructions+=3;NFSU2_TR(0x5b4f6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f6e:{NFSU2_TR(0x5b4f6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f6f:{NFSU2_TR(0x5b4f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4f74ull));
TAIL_STATIC(0x5b5ab0u,5b5);
}
B5b4f74:L5b4f74:{c.instructions+=1;NFSU2_TR(0x5b4f74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b4f77:L5b4f77:{c.instructions+=3;NFSU2_TR(0x5b4f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b4f78:{NFSU2_TR(0x5b4f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b4f79:{NFSU2_TR(0x5b4f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b4f7a:L5b4f7a:{c.instructions+=3;NFSU2_TR(0x5b4f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4f7b:{NFSU2_TR(0x5b4f7b);
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
B5b4f7e:{NFSU2_TR(0x5b4f7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4f90:L5b4f90:{c.instructions+=10;NFSU2_TR(0x5b4f90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b4f94:{NFSU2_TR(0x5b4f94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b4f98:{NFSU2_TR(0x5b4f98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4f99:{NFSU2_TR(0x5b4f99);
__builtin_memmove((R+24),(R+4),4);
}
B5b4f9b:{NFSU2_TR(0x5b4f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b4f9f:{NFSU2_TR(0x5b4f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4fa2:{NFSU2_TR(0x5b4fa2);
__builtin_memmove((R+4),(R+24),4);
}
B5b4fa4:{NFSU2_TR(0x5b4fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4fa7:{NFSU2_TR(0x5b4fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4faa:{NFSU2_TR(0x5b4faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b4fafull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b4be0u);}goto L5b4be0;}
}
B5b4faf:L5b4faf:{c.instructions+=6;NFSU2_TR(0x5b4faf);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b4fb2:{NFSU2_TR(0x5b4fb2);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B5b4fb7:{NFSU2_TR(0x5b4fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b4fba:{NFSU2_TR(0x5b4fba);
__builtin_memmove((R+0),(R+24),4);
}
B5b4fbc:{NFSU2_TR(0x5b4fbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b4fbd:{NFSU2_TR(0x5b4fbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b4fc0:L5b4fc0:{c.instructions+=2;NFSU2_TR(0x5b4fc0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5b4fc3:{NFSU2_TR(0x5b4fc3);
if(r1(R+518)){TAIL_STATIC(0x5b5049u,5b5);}
}
B5b4fc9:L5b4fc9:{c.instructions+=5;NFSU2_TR(0x5b4fc9);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b4fcd:{NFSU2_TR(0x5b4fcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4fce:{NFSU2_TR(0x5b4fce);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b4fd0:{NFSU2_TR(0x5b4fd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4fd2:{NFSU2_TR(0x5b4fd2);
if(r1(R+518)){TAIL_STATIC(0x5b5038u,5b5);}
}
B5b4fd4:L5b4fd4:{c.instructions+=6;NFSU2_TR(0x5b4fd4);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5b4fd9:{NFSU2_TR(0x5b4fd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4fdb:{NFSU2_TR(0x5b4fdb);
__builtin_memmove((R+8),gp(0x890108),4);
}
B5b4fe1:{NFSU2_TR(0x5b4fe1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4fe2:{NFSU2_TR(0x5b4fe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b4fe3:{NFSU2_TR(0x5b4fe3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b500eu,5b5);}
}
B5b4fe5:L5b4fe5:{c.instructions+=2;NFSU2_TR(0x5b4fe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4fe7:{NFSU2_TR(0x5b4fe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b500eu,5b5);}
}
B5b4fe9:L5b4fe9:{c.instructions+=3;NFSU2_TR(0x5b4fe9);
__builtin_memmove((R+28),gp(0x890114),4);
}
B5b4fef:{NFSU2_TR(0x5b4fef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b4ff1:{NFSU2_TR(0x5b4ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b5007u,5b5);}
}
B5b4ff3:L5b4ff3:{c.instructions+=3;NFSU2_TR(0x5b4ff3);
__builtin_memmove((R+12),gp(0x89e7d9),1);
}
B5b4ff9:{NFSU2_TR(0x5b4ff9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b4ffb:{NFSU2_TR(0x5b4ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b5007u,5b5);}
}
B5b4ffd:L5b4ffd:{c.instructions+=1;NFSU2_TR(0x5b4ffd);
__builtin_memmove((R+28),gp(0x890104),4);
TAIL_STATIC(0x5b5003u,5b5);
}
XIT:NFSU2_TR_EXIT(0x5b4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
