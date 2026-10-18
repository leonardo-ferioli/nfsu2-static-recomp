#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 body_4d2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4e3(u8* __restrict R,Cpu& c);
u32 body_4e5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e4(u8* __restrict R,Cpu& c);
u32 page_4e4(Cpu& c){return body_4e4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e4002:goto L4e4002;
case 0x4e4004:c.instructions+=2;goto B4e4004;
case 0x4e4006:c.instructions+=1;goto B4e4006;
case 0x4e400b:goto L4e400b;
case 0x4e400e:c.instructions+=2;goto B4e400e;
case 0x4e4010:c.instructions+=1;goto B4e4010;
case 0x4e4012:goto L4e4012;
case 0x4e4018:c.instructions+=3;goto B4e4018;
case 0x4e401b:c.instructions+=2;goto B4e401b;
case 0x4e401e:c.instructions+=1;goto B4e401e;
case 0x4e4020:goto L4e4020;
case 0x4e4022:goto L4e4022;
case 0x4e4025:c.instructions+=10;goto B4e4025;
case 0x4e4027:c.instructions+=9;goto B4e4027;
case 0x4e4028:c.instructions+=8;goto B4e4028;
case 0x4e402b:c.instructions+=7;goto B4e402b;
case 0x4e4030:c.instructions+=6;goto B4e4030;
case 0x4e4033:c.instructions+=5;goto B4e4033;
case 0x4e4035:c.instructions+=4;goto B4e4035;
case 0x4e4039:c.instructions+=3;goto B4e4039;
case 0x4e403b:c.instructions+=2;goto B4e403b;
case 0x4e403c:c.instructions+=1;goto B4e403c;
case 0x4e4041:goto L4e4041;
case 0x4e4044:c.instructions+=3;goto B4e4044;
case 0x4e4048:c.instructions+=2;goto B4e4048;
case 0x4e4049:c.instructions+=1;goto B4e4049;
case 0x4e404e:goto L4e404e;
case 0x4e404f:c.instructions+=2;goto B4e404f;
case 0x4e4050:c.instructions+=1;goto B4e4050;
case 0x4e4055:goto L4e4055;
case 0x4e4057:c.instructions+=2;goto B4e4057;
case 0x4e4059:c.instructions+=1;goto B4e4059;
case 0x4e405e:goto L4e405e;
case 0x4e4061:c.instructions+=2;goto B4e4061;
case 0x4e4063:c.instructions+=1;goto B4e4063;
case 0x4e4065:goto L4e4065;
case 0x4e406b:c.instructions+=3;goto B4e406b;
case 0x4e406e:c.instructions+=2;goto B4e406e;
case 0x4e4071:c.instructions+=1;goto B4e4071;
case 0x4e4073:goto L4e4073;
case 0x4e4075:goto L4e4075;
case 0x4e4078:c.instructions+=10;goto B4e4078;
case 0x4e4079:c.instructions+=9;goto B4e4079;
case 0x4e407e:c.instructions+=8;goto B4e407e;
case 0x4e4080:c.instructions+=7;goto B4e4080;
case 0x4e4084:c.instructions+=6;goto B4e4084;
case 0x4e4087:c.instructions+=5;goto B4e4087;
case 0x4e4089:c.instructions+=4;goto B4e4089;
case 0x4e408a:c.instructions+=3;goto B4e408a;
case 0x4e408d:c.instructions+=2;goto B4e408d;
case 0x4e408f:c.instructions+=1;goto B4e408f;
case 0x4e4094:goto L4e4094;
case 0x4e4097:c.instructions+=3;goto B4e4097;
case 0x4e409b:c.instructions+=2;goto B4e409b;
case 0x4e409c:c.instructions+=1;goto B4e409c;
case 0x4e40a1:goto L4e40a1;
case 0x4e40a2:c.instructions+=2;goto B4e40a2;
case 0x4e40a3:c.instructions+=1;goto B4e40a3;
case 0x4e40a8:goto L4e40a8;
case 0x4e40aa:c.instructions+=2;goto B4e40aa;
case 0x4e40ac:c.instructions+=1;goto B4e40ac;
case 0x4e40b1:goto L4e40b1;
case 0x4e40b4:c.instructions+=2;goto B4e40b4;
case 0x4e40b6:c.instructions+=1;goto B4e40b6;
case 0x4e40b8:goto L4e40b8;
case 0x4e40be:c.instructions+=3;goto B4e40be;
case 0x4e40c1:c.instructions+=2;goto B4e40c1;
case 0x4e40c4:c.instructions+=1;goto B4e40c4;
case 0x4e40c6:goto L4e40c6;
case 0x4e40c8:goto L4e40c8;
case 0x4e40cb:c.instructions+=10;goto B4e40cb;
case 0x4e40cd:c.instructions+=9;goto B4e40cd;
case 0x4e40ce:c.instructions+=8;goto B4e40ce;
case 0x4e40d1:c.instructions+=7;goto B4e40d1;
case 0x4e40d6:c.instructions+=6;goto B4e40d6;
case 0x4e40d9:c.instructions+=5;goto B4e40d9;
case 0x4e40dd:c.instructions+=4;goto B4e40dd;
case 0x4e40df:c.instructions+=3;goto B4e40df;
case 0x4e40e0:c.instructions+=2;goto B4e40e0;
case 0x4e40e2:c.instructions+=1;goto B4e40e2;
case 0x4e40e7:goto L4e40e7;
case 0x4e40ea:c.instructions+=3;goto B4e40ea;
case 0x4e40ee:c.instructions+=2;goto B4e40ee;
case 0x4e40ef:c.instructions+=1;goto B4e40ef;
case 0x4e40f4:goto L4e40f4;
case 0x4e40f5:c.instructions+=2;goto B4e40f5;
case 0x4e40f6:c.instructions+=1;goto B4e40f6;
case 0x4e40fb:goto L4e40fb;
case 0x4e40ff:c.instructions+=5;goto B4e40ff;
case 0x4e4102:c.instructions+=4;goto B4e4102;
case 0x4e4105:c.instructions+=3;goto B4e4105;
case 0x4e4106:c.instructions+=2;goto B4e4106;
case 0x4e4109:c.instructions+=1;goto B4e4109;
case 0x4e410e:goto L4e410e;
case 0x4e4112:c.instructions+=4;goto B4e4112;
case 0x4e4113:c.instructions+=3;goto B4e4113;
case 0x4e4114:c.instructions+=2;goto B4e4114;
case 0x4e4118:c.instructions+=1;goto B4e4118;
case 0x4e411e:goto L4e411e;
case 0x4e4120:c.instructions+=2;goto B4e4120;
case 0x4e4122:c.instructions+=1;goto B4e4122;
case 0x4e4127:goto L4e4127;
case 0x4e4128:c.instructions+=5;goto B4e4128;
case 0x4e4129:c.instructions+=4;goto B4e4129;
case 0x4e412a:c.instructions+=3;goto B4e412a;
case 0x4e412b:c.instructions+=2;goto B4e412b;
case 0x4e412e:c.instructions+=1;goto B4e412e;
case 0x4e4130:goto L4e4130;
case 0x4e4131:c.instructions+=13;goto B4e4131;
case 0x4e4133:c.instructions+=12;goto B4e4133;
case 0x4e4136:c.instructions+=11;goto B4e4136;
case 0x4e4138:c.instructions+=10;goto B4e4138;
case 0x4e413d:c.instructions+=9;goto B4e413d;
case 0x4e4143:c.instructions+=8;goto B4e4143;
case 0x4e4144:c.instructions+=7;goto B4e4144;
case 0x4e414b:c.instructions+=6;goto B4e414b;
case 0x4e4151:c.instructions+=5;goto B4e4151;
case 0x4e4157:c.instructions+=4;goto B4e4157;
case 0x4e4161:c.instructions+=3;goto B4e4161;
case 0x4e4162:c.instructions+=2;goto B4e4162;
case 0x4e4163:c.instructions+=1;goto B4e4163;
case 0x4e4169:goto L4e4169;
case 0x4e416a:c.instructions+=2;goto B4e416a;
case 0x4e416c:c.instructions+=1;goto B4e416c;
case 0x4e4171:goto L4e4171;
case 0x4e4174:c.instructions+=2;goto B4e4174;
case 0x4e4176:c.instructions+=1;goto B4e4176;
case 0x4e417b:goto L4e417b;
case 0x4e417c:c.instructions+=1;goto B4e417c;
case 0x4e4181:goto L4e4181;
case 0x4e4184:c.instructions+=5;goto B4e4184;
case 0x4e4186:c.instructions+=4;goto B4e4186;
case 0x4e4188:c.instructions+=3;goto B4e4188;
case 0x4e418d:c.instructions+=2;goto B4e418d;
case 0x4e418f:c.instructions+=1;goto B4e418f;
case 0x4e4194:goto L4e4194;
case 0x4e4196:c.instructions+=2;goto B4e4196;
case 0x4e4198:c.instructions+=1;goto B4e4198;
case 0x4e419a:goto L4e419a;
case 0x4e41a0:goto L4e41a0;
case 0x4e41a6:c.instructions+=1;goto B4e41a6;
case 0x4e41a8:goto L4e41a8;
case 0x4e41a9:c.instructions+=3;goto B4e41a9;
case 0x4e41ab:c.instructions+=2;goto B4e41ab;
case 0x4e41b0:c.instructions+=1;goto B4e41b0;
case 0x4e41b5:goto L4e41b5;
case 0x4e41b7:c.instructions+=2;goto B4e41b7;
case 0x4e41b9:c.instructions+=1;goto B4e41b9;
case 0x4e41bb:goto L4e41bb;
case 0x4e41bf:c.instructions+=1;goto B4e41bf;
case 0x4e41c4:goto L4e41c4;
case 0x4e41c6:c.instructions+=7;goto B4e41c6;
case 0x4e41c8:c.instructions+=6;goto B4e41c8;
case 0x4e41cc:c.instructions+=5;goto B4e41cc;
case 0x4e41cd:c.instructions+=4;goto B4e41cd;
case 0x4e41cf:c.instructions+=3;goto B4e41cf;
case 0x4e41d1:c.instructions+=2;goto B4e41d1;
case 0x4e41dc:c.instructions+=1;goto B4e41dc;
case 0x4e41df:goto L4e41df;
case 0x4e41e2:c.instructions+=4;goto B4e41e2;
case 0x4e41e4:c.instructions+=3;goto B4e41e4;
case 0x4e41e5:c.instructions+=2;goto B4e41e5;
case 0x4e41ea:c.instructions+=1;goto B4e41ea;
case 0x4e41ef:goto L4e41ef;
case 0x4e41f4:c.instructions+=1;goto B4e41f4;
case 0x4e41f9:goto L4e41f9;
case 0x4e41fc:c.instructions+=2;goto B4e41fc;
case 0x4e41fe:c.instructions+=1;goto B4e41fe;
case 0x4e4200:goto L4e4200;
case 0x4e4205:c.instructions+=1;goto B4e4205;
case 0x4e420a:goto L4e420a;
case 0x4e420d:c.instructions+=2;goto B4e420d;
case 0x4e420f:c.instructions+=1;goto B4e420f;
case 0x4e4211:goto L4e4211;
case 0x4e4216:c.instructions+=1;goto B4e4216;
case 0x4e421b:goto L4e421b;
case 0x4e421e:c.instructions+=2;goto B4e421e;
case 0x4e4220:c.instructions+=1;goto B4e4220;
case 0x4e4222:goto L4e4222;
case 0x4e4227:c.instructions+=1;goto B4e4227;
case 0x4e422c:goto L4e422c;
case 0x4e422f:c.instructions+=2;goto B4e422f;
case 0x4e4231:c.instructions+=1;goto B4e4231;
case 0x4e4233:goto L4e4233;
case 0x4e4236:c.instructions+=1;goto B4e4236;
case 0x4e4238:goto L4e4238;
case 0x4e423a:goto L4e423a;
case 0x4e423e:c.instructions+=3;goto B4e423e;
case 0x4e423f:c.instructions+=2;goto B4e423f;
case 0x4e4244:c.instructions+=1;goto B4e4244;
case 0x4e4249:goto L4e4249;
case 0x4e424b:c.instructions+=2;goto B4e424b;
case 0x4e4255:c.instructions+=1;goto B4e4255;
case 0x4e4257:goto L4e4257;
case 0x4e4259:c.instructions+=3;goto B4e4259;
case 0x4e425e:c.instructions+=2;goto B4e425e;
case 0x4e4260:c.instructions+=1;goto B4e4260;
case 0x4e4265:goto L4e4265;
case 0x4e4269:c.instructions+=2;goto B4e4269;
case 0x4e426a:c.instructions+=1;goto B4e426a;
case 0x4e426f:goto L4e426f;
case 0x4e4271:c.instructions+=1;goto B4e4271;
case 0x4e4276:goto L4e4276;
case 0x4e4278:c.instructions+=2;goto B4e4278;
case 0x4e427a:c.instructions+=1;goto B4e427a;
case 0x4e427f:goto L4e427f;
case 0x4e4281:c.instructions+=1;goto B4e4281;
case 0x4e4286:goto L4e4286;
case 0x4e428d:c.instructions+=2;goto B4e428d;
case 0x4e4298:c.instructions+=1;goto B4e4298;
case 0x4e429d:goto L4e429d;
case 0x4e42a4:c.instructions+=6;goto B4e42a4;
case 0x4e42a5:c.instructions+=5;goto B4e42a5;
case 0x4e42ac:c.instructions+=4;goto B4e42ac;
case 0x4e42ad:c.instructions+=3;goto B4e42ad;
case 0x4e42af:c.instructions+=2;goto B4e42af;
case 0x4e42b0:c.instructions+=1;goto B4e42b0;
case 0x4e42c0:goto L4e42c0;
case 0x4e42c2:c.instructions+=7;goto B4e42c2;
case 0x4e42c7:c.instructions+=6;goto B4e42c7;
case 0x4e42cd:c.instructions+=5;goto B4e42cd;
case 0x4e42ce:c.instructions+=4;goto B4e42ce;
case 0x4e42d5:c.instructions+=3;goto B4e42d5;
case 0x4e42d6:c.instructions+=2;goto B4e42d6;
case 0x4e42db:c.instructions+=1;goto B4e42db;
case 0x4e42e0:goto L4e42e0;
case 0x4e42e3:c.instructions+=4;goto B4e42e3;
case 0x4e42e7:c.instructions+=3;goto B4e42e7;
case 0x4e42e9:c.instructions+=2;goto B4e42e9;
case 0x4e42f1:c.instructions+=1;goto B4e42f1;
case 0x4e42f3:goto L4e42f3;
case 0x4e42f7:c.instructions+=3;goto B4e42f7;
case 0x4e42f8:c.instructions+=2;goto B4e42f8;
case 0x4e42fa:c.instructions+=1;goto B4e42fa;
case 0x4e42ff:goto L4e42ff;
case 0x4e4303:c.instructions+=3;goto B4e4303;
case 0x4e430a:c.instructions+=2;goto B4e430a;
case 0x4e430d:c.instructions+=1;goto B4e430d;
case 0x4e430e:goto L4e430e;
case 0x4e4312:c.instructions+=4;goto B4e4312;
case 0x4e4314:c.instructions+=3;goto B4e4314;
case 0x4e431b:c.instructions+=2;goto B4e431b;
case 0x4e431e:c.instructions+=1;goto B4e431e;
case 0x4e4320:goto L4e4320;
case 0x4e4321:c.instructions+=15;goto B4e4321;
case 0x4e4323:c.instructions+=14;goto B4e4323;
case 0x4e4325:c.instructions+=13;goto B4e4325;
case 0x4e432a:c.instructions+=12;goto B4e432a;
case 0x4e4330:c.instructions+=11;goto B4e4330;
case 0x4e4331:c.instructions+=10;goto B4e4331;
case 0x4e4338:c.instructions+=9;goto B4e4338;
case 0x4e433e:c.instructions+=8;goto B4e433e;
case 0x4e4341:c.instructions+=7;goto B4e4341;
case 0x4e4342:c.instructions+=6;goto B4e4342;
case 0x4e4343:c.instructions+=5;goto B4e4343;
case 0x4e4344:c.instructions+=4;goto B4e4344;
case 0x4e4346:c.instructions+=3;goto B4e4346;
case 0x4e4347:c.instructions+=2;goto B4e4347;
case 0x4e434a:c.instructions+=1;goto B4e434a;
case 0x4e434f:goto L4e434f;
case 0x4e4352:c.instructions+=12;goto B4e4352;
case 0x4e4354:c.instructions+=11;goto B4e4354;
case 0x4e4356:c.instructions+=10;goto B4e4356;
case 0x4e4357:c.instructions+=9;goto B4e4357;
case 0x4e4359:c.instructions+=8;goto B4e4359;
case 0x4e435b:c.instructions+=7;goto B4e435b;
case 0x4e4360:c.instructions+=6;goto B4e4360;
case 0x4e4365:c.instructions+=5;goto B4e4365;
case 0x4e4366:c.instructions+=4;goto B4e4366;
case 0x4e4369:c.instructions+=3;goto B4e4369;
case 0x4e436c:c.instructions+=2;goto B4e436c;
case 0x4e4372:c.instructions+=1;goto B4e4372;
case 0x4e4377:goto L4e4377;
case 0x4e437a:c.instructions+=4;goto B4e437a;
case 0x4e4380:c.instructions+=3;goto B4e4380;
case 0x4e4381:c.instructions+=2;goto B4e4381;
case 0x4e4385:c.instructions+=1;goto B4e4385;
case 0x4e438a:goto L4e438a;
case 0x4e438b:c.instructions+=1;goto B4e438b;
case 0x4e4390:goto L4e4390;
case 0x4e4396:c.instructions+=1;goto B4e4396;
case 0x4e439b:goto L4e439b;
case 0x4e43a1:c.instructions+=12;goto B4e43a1;
case 0x4e43a7:c.instructions+=11;goto B4e43a7;
case 0x4e43b1:c.instructions+=10;goto B4e43b1;
case 0x4e43b7:c.instructions+=9;goto B4e43b7;
case 0x4e43bd:c.instructions+=8;goto B4e43bd;
case 0x4e43c3:c.instructions+=7;goto B4e43c3;
case 0x4e43c9:c.instructions+=6;goto B4e43c9;
case 0x4e43cf:c.instructions+=5;goto B4e43cf;
case 0x4e43d5:c.instructions+=4;goto B4e43d5;
case 0x4e43db:c.instructions+=3;goto B4e43db;
case 0x4e43e1:c.instructions+=2;goto B4e43e1;
case 0x4e43e7:c.instructions+=1;goto B4e43e7;
case 0x4e43ec:goto L4e43ec;
case 0x4e43f2:c.instructions+=17;goto B4e43f2;
case 0x4e43f5:c.instructions+=16;goto B4e43f5;
case 0x4e43fa:c.instructions+=15;goto B4e43fa;
case 0x4e43fb:c.instructions+=14;goto B4e43fb;
case 0x4e4401:c.instructions+=13;goto B4e4401;
case 0x4e4407:c.instructions+=12;goto B4e4407;
case 0x4e440d:c.instructions+=11;goto B4e440d;
case 0x4e4413:c.instructions+=10;goto B4e4413;
case 0x4e4419:c.instructions+=9;goto B4e4419;
case 0x4e441f:c.instructions+=8;goto B4e441f;
case 0x4e4425:c.instructions+=7;goto B4e4425;
case 0x4e442b:c.instructions+=6;goto B4e442b;
case 0x4e4431:c.instructions+=5;goto B4e4431;
case 0x4e4437:c.instructions+=4;goto B4e4437;
case 0x4e443d:c.instructions+=3;goto B4e443d;
case 0x4e4443:c.instructions+=2;goto B4e4443;
case 0x4e4449:c.instructions+=1;goto B4e4449;
case 0x4e444e:goto L4e444e;
case 0x4e444f:c.instructions+=1;goto B4e444f;
case 0x4e4454:goto L4e4454;
case 0x4e4459:c.instructions+=3;goto B4e4459;
case 0x4e445c:c.instructions+=2;goto B4e445c;
case 0x4e4462:c.instructions+=1;goto B4e4462;
case 0x4e4465:goto L4e4465;
case 0x4e4467:c.instructions+=1;goto B4e4467;
case 0x4e446c:goto L4e446c;
case 0x4e446f:c.instructions+=4;goto B4e446f;
case 0x4e4471:c.instructions+=3;goto B4e4471;
case 0x4e4478:c.instructions+=2;goto B4e4478;
case 0x4e447a:c.instructions+=1;goto B4e447a;
case 0x4e447f:goto L4e447f;
case 0x4e4481:goto L4e4481;
case 0x4e4484:c.instructions+=7;goto B4e4484;
case 0x4e448a:c.instructions+=6;goto B4e448a;
case 0x4e448d:c.instructions+=5;goto B4e448d;
case 0x4e4493:c.instructions+=4;goto B4e4493;
case 0x4e4494:c.instructions+=3;goto B4e4494;
case 0x4e4497:c.instructions+=2;goto B4e4497;
case 0x4e449a:c.instructions+=1;goto B4e449a;
case 0x4e449c:goto L4e449c;
case 0x4e44a2:c.instructions+=4;goto B4e44a2;
case 0x4e44a7:c.instructions+=3;goto B4e44a7;
case 0x4e44ae:c.instructions+=2;goto B4e44ae;
case 0x4e44b8:c.instructions+=1;goto B4e44b8;
case 0x4e44bd:goto L4e44bd;
case 0x4e44be:c.instructions+=2;goto B4e44be;
case 0x4e44bf:c.instructions+=1;goto B4e44bf;
case 0x4e44c4:goto L4e44c4;
case 0x4e44ca:c.instructions+=6;goto B4e44ca;
case 0x4e44cd:c.instructions+=5;goto B4e44cd;
case 0x4e44d2:c.instructions+=4;goto B4e44d2;
case 0x4e44d3:c.instructions+=3;goto B4e44d3;
case 0x4e44d9:c.instructions+=2;goto B4e44d9;
case 0x4e44e3:c.instructions+=1;goto B4e44e3;
case 0x4e44e8:goto L4e44e8;
case 0x4e44eb:c.instructions+=3;goto B4e44eb;
case 0x4e44ed:c.instructions+=2;goto B4e44ed;
case 0x4e44f3:c.instructions+=1;goto B4e44f3;
case 0x4e44f8:goto L4e44f8;
case 0x4e44fa:c.instructions+=1;goto B4e44fa;
case 0x4e4500:goto L4e4500;
case 0x4e4503:c.instructions+=7;goto B4e4503;
case 0x4e4505:c.instructions+=6;goto B4e4505;
case 0x4e4508:c.instructions+=5;goto B4e4508;
case 0x4e450d:c.instructions+=4;goto B4e450d;
case 0x4e450e:c.instructions+=3;goto B4e450e;
case 0x4e4513:c.instructions+=2;goto B4e4513;
case 0x4e4516:c.instructions+=1;goto B4e4516;
case 0x4e451b:goto L4e451b;
case 0x4e451e:c.instructions+=4;goto B4e451e;
case 0x4e4521:c.instructions+=3;goto B4e4521;
case 0x4e4522:c.instructions+=2;goto B4e4522;
case 0x4e4523:c.instructions+=1;goto B4e4523;
case 0x4e4528:goto L4e4528;
case 0x4e452a:c.instructions+=3;goto B4e452a;
case 0x4e452d:c.instructions+=2;goto B4e452d;
case 0x4e4530:c.instructions+=1;goto B4e4530;
case 0x4e4532:goto L4e4532;
case 0x4e4537:c.instructions+=2;goto B4e4537;
case 0x4e453a:c.instructions+=1;goto B4e453a;
case 0x4e4540:goto L4e4540;
case 0x4e4547:goto L4e4547;
case 0x4e454a:c.instructions+=4;goto B4e454a;
case 0x4e454f:c.instructions+=3;goto B4e454f;
case 0x4e4554:c.instructions+=2;goto B4e4554;
case 0x4e4555:c.instructions+=1;goto B4e4555;
case 0x4e455a:goto L4e455a;
case 0x4e455d:c.instructions+=2;goto B4e455d;
case 0x4e455e:c.instructions+=1;goto B4e455e;
case 0x4e4563:goto L4e4563;
case 0x4e4566:c.instructions+=1;goto B4e4566;
case 0x4e456b:goto L4e456b;
case 0x4e456e:c.instructions+=4;goto B4e456e;
case 0x4e4573:c.instructions+=3;goto B4e4573;
case 0x4e4578:c.instructions+=2;goto B4e4578;
case 0x4e4579:c.instructions+=1;goto B4e4579;
case 0x4e457e:goto L4e457e;
case 0x4e4581:c.instructions+=2;goto B4e4581;
case 0x4e4582:c.instructions+=1;goto B4e4582;
case 0x4e4587:goto L4e4587;
case 0x4e458a:c.instructions+=1;goto B4e458a;
case 0x4e458f:goto L4e458f;
case 0x4e4592:c.instructions+=4;goto B4e4592;
case 0x4e4597:c.instructions+=3;goto B4e4597;
case 0x4e459c:c.instructions+=2;goto B4e459c;
case 0x4e459d:c.instructions+=1;goto B4e459d;
case 0x4e45a2:goto L4e45a2;
case 0x4e45a5:c.instructions+=2;goto B4e45a5;
case 0x4e45a6:c.instructions+=1;goto B4e45a6;
case 0x4e45ab:goto L4e45ab;
case 0x4e45ae:c.instructions+=1;goto B4e45ae;
case 0x4e45b3:goto L4e45b3;
case 0x4e45b6:c.instructions+=4;goto B4e45b6;
case 0x4e45bb:c.instructions+=3;goto B4e45bb;
case 0x4e45c0:c.instructions+=2;goto B4e45c0;
case 0x4e45c1:c.instructions+=1;goto B4e45c1;
case 0x4e45c6:goto L4e45c6;
case 0x4e45c9:c.instructions+=2;goto B4e45c9;
case 0x4e45ca:c.instructions+=1;goto B4e45ca;
case 0x4e45cf:goto L4e45cf;
case 0x4e45d2:c.instructions+=1;goto B4e45d2;
case 0x4e45d4:goto L4e45d4;
case 0x4e45d7:c.instructions+=4;goto B4e45d7;
case 0x4e45dc:c.instructions+=3;goto B4e45dc;
case 0x4e45e1:c.instructions+=2;goto B4e45e1;
case 0x4e45e2:c.instructions+=1;goto B4e45e2;
case 0x4e45e7:goto L4e45e7;
case 0x4e45ea:c.instructions+=2;goto B4e45ea;
case 0x4e45eb:c.instructions+=1;goto B4e45eb;
case 0x4e45f0:goto L4e45f0;
case 0x4e45f3:c.instructions+=1;goto B4e45f3;
case 0x4e45f5:goto L4e45f5;
case 0x4e45f8:c.instructions+=4;goto B4e45f8;
case 0x4e45fd:c.instructions+=3;goto B4e45fd;
case 0x4e4602:c.instructions+=2;goto B4e4602;
case 0x4e4603:c.instructions+=1;goto B4e4603;
case 0x4e4608:goto L4e4608;
case 0x4e460b:c.instructions+=2;goto B4e460b;
case 0x4e460c:c.instructions+=1;goto B4e460c;
case 0x4e4611:goto L4e4611;
case 0x4e4614:c.instructions+=1;goto B4e4614;
case 0x4e4616:goto L4e4616;
case 0x4e4619:c.instructions+=4;goto B4e4619;
case 0x4e461e:c.instructions+=3;goto B4e461e;
case 0x4e4623:c.instructions+=2;goto B4e4623;
case 0x4e4624:c.instructions+=1;goto B4e4624;
case 0x4e4629:goto L4e4629;
case 0x4e462c:c.instructions+=2;goto B4e462c;
case 0x4e462d:c.instructions+=1;goto B4e462d;
case 0x4e4632:goto L4e4632;
case 0x4e4635:c.instructions+=1;goto B4e4635;
case 0x4e4637:goto L4e4637;
case 0x4e463a:c.instructions+=4;goto B4e463a;
case 0x4e463f:c.instructions+=3;goto B4e463f;
case 0x4e4644:c.instructions+=2;goto B4e4644;
case 0x4e4645:c.instructions+=1;goto B4e4645;
case 0x4e464a:goto L4e464a;
case 0x4e464d:goto L4e464d;
case 0x4e4654:c.instructions+=4;goto B4e4654;
case 0x4e4657:c.instructions+=3;goto B4e4657;
case 0x4e4658:c.instructions+=2;goto B4e4658;
case 0x4e4659:c.instructions+=1;goto B4e4659;
case 0x4e465e:goto L4e465e;
case 0x4e4661:c.instructions+=4;goto B4e4661;
case 0x4e4662:c.instructions+=3;goto B4e4662;
case 0x4e4667:c.instructions+=2;goto B4e4667;
case 0x4e4668:c.instructions+=1;goto B4e4668;
case 0x4e466d:goto L4e466d;
case 0x4e4670:c.instructions+=2;goto B4e4670;
case 0x4e4671:c.instructions+=1;goto B4e4671;
case 0x4e4676:goto L4e4676;
case 0x4e467b:c.instructions+=4;goto B4e467b;
case 0x4e467e:c.instructions+=3;goto B4e467e;
case 0x4e4681:c.instructions+=2;goto B4e4681;
case 0x4e4683:c.instructions+=1;goto B4e4683;
case 0x4e4685:goto L4e4685;
case 0x4e468a:c.instructions+=1;goto B4e468a;
case 0x4e468c:goto L4e468c;
case 0x4e4691:goto L4e4691;
case 0x4e4696:c.instructions+=1;goto B4e4696;
case 0x4e469b:goto L4e469b;
case 0x4e469c:c.instructions+=2;goto B4e469c;
case 0x4e469d:c.instructions+=1;goto B4e469d;
case 0x4e46a2:goto L4e46a2;
case 0x4e46a5:c.instructions+=2;goto B4e46a5;
case 0x4e46a6:c.instructions+=1;goto B4e46a6;
case 0x4e46ab:goto L4e46ab;
case 0x4e46b0:c.instructions+=3;goto B4e46b0;
case 0x4e46b3:c.instructions+=2;goto B4e46b3;
case 0x4e46b6:c.instructions+=1;goto B4e46b6;
case 0x4e46b8:goto L4e46b8;
case 0x4e46bb:c.instructions+=1;goto B4e46bb;
case 0x4e46bd:goto L4e46bd;
case 0x4e46c0:c.instructions+=1;goto B4e46c0;
case 0x4e46c2:goto L4e46c2;
case 0x4e46c5:c.instructions+=1;goto B4e46c5;
case 0x4e46c7:goto L4e46c7;
case 0x4e46ce:c.instructions+=6;goto B4e46ce;
case 0x4e46d1:c.instructions+=5;goto B4e46d1;
case 0x4e46d2:c.instructions+=4;goto B4e46d2;
case 0x4e46d7:c.instructions+=3;goto B4e46d7;
case 0x4e46dc:c.instructions+=2;goto B4e46dc;
case 0x4e46dd:c.instructions+=1;goto B4e46dd;
case 0x4e46e2:goto L4e46e2;
case 0x4e46e5:c.instructions+=1;goto B4e46e5;
case 0x4e46e7:goto L4e46e7;
case 0x4e46ea:c.instructions+=4;goto B4e46ea;
case 0x4e46ef:c.instructions+=3;goto B4e46ef;
case 0x4e46f4:c.instructions+=2;goto B4e46f4;
case 0x4e46f5:c.instructions+=1;goto B4e46f5;
case 0x4e46fa:goto L4e46fa;
case 0x4e46fd:c.instructions+=2;goto B4e46fd;
case 0x4e46fe:c.instructions+=1;goto B4e46fe;
case 0x4e4703:goto L4e4703;
case 0x4e4706:goto L4e4706;
case 0x4e4709:c.instructions+=3;goto B4e4709;
case 0x4e470e:c.instructions+=2;goto B4e470e;
case 0x4e470f:c.instructions+=1;goto B4e470f;
case 0x4e4714:goto L4e4714;
case 0x4e4717:c.instructions+=4;goto B4e4717;
case 0x4e4719:c.instructions+=3;goto B4e4719;
case 0x4e471a:c.instructions+=2;goto B4e471a;
case 0x4e471c:c.instructions+=1;goto B4e471c;
case 0x4e4721:goto L4e4721;
case 0x4e4727:c.instructions+=3;goto B4e4727;
case 0x4e4728:c.instructions+=2;goto B4e4728;
case 0x4e472d:c.instructions+=1;goto B4e472d;
case 0x4e4732:goto L4e4732;
case 0x4e4738:c.instructions+=1;goto B4e4738;
case 0x4e473e:goto L4e473e;
case 0x4e4741:c.instructions+=3;goto B4e4741;
case 0x4e4746:c.instructions+=2;goto B4e4746;
case 0x4e474c:c.instructions+=1;goto B4e474c;
case 0x4e4751:goto L4e4751;
case 0x4e4752:c.instructions+=3;goto B4e4752;
case 0x4e4757:c.instructions+=2;goto B4e4757;
case 0x4e4758:c.instructions+=1;goto B4e4758;
case 0x4e475d:goto L4e475d;
case 0x4e4763:c.instructions+=4;goto B4e4763;
case 0x4e4769:c.instructions+=3;goto B4e4769;
case 0x4e476c:c.instructions+=2;goto B4e476c;
case 0x4e476f:c.instructions+=1;goto B4e476f;
case 0x4e4774:goto L4e4774;
case 0x4e4776:c.instructions+=9;goto B4e4776;
case 0x4e4778:c.instructions+=8;goto B4e4778;
case 0x4e4779:c.instructions+=7;goto B4e4779;
case 0x4e477c:c.instructions+=6;goto B4e477c;
case 0x4e477f:c.instructions+=5;goto B4e477f;
case 0x4e4784:c.instructions+=4;goto B4e4784;
case 0x4e4785:c.instructions+=3;goto B4e4785;
case 0x4e478a:c.instructions+=2;goto B4e478a;
case 0x4e478f:c.instructions+=1;goto B4e478f;
case 0x4e4794:goto L4e4794;
case 0x4e479a:c.instructions+=2;goto B4e479a;
case 0x4e479b:c.instructions+=1;goto B4e479b;
case 0x4e47a0:goto L4e47a0;
case 0x4e47a2:c.instructions+=1;goto B4e47a2;
case 0x4e47a4:goto L4e47a4;
case 0x4e47a6:c.instructions+=2;goto B4e47a6;
case 0x4e47ab:c.instructions+=1;goto B4e47ab;
case 0x4e47b0:goto L4e47b0;
case 0x4e47b5:c.instructions+=1;goto B4e47b5;
case 0x4e47b7:goto L4e47b7;
case 0x4e47bd:c.instructions+=2;goto B4e47bd;
case 0x4e47be:c.instructions+=1;goto B4e47be;
case 0x4e47c3:goto L4e47c3;
case 0x4e47c6:c.instructions+=3;goto B4e47c6;
case 0x4e47cb:c.instructions+=2;goto B4e47cb;
case 0x4e47d1:c.instructions+=1;goto B4e47d1;
case 0x4e47d6:goto L4e47d6;
case 0x4e47d7:c.instructions+=6;goto B4e47d7;
case 0x4e47dc:c.instructions+=5;goto B4e47dc;
case 0x4e47e1:c.instructions+=4;goto B4e47e1;
case 0x4e47e6:c.instructions+=3;goto B4e47e6;
case 0x4e47eb:c.instructions+=2;goto B4e47eb;
case 0x4e47ec:c.instructions+=1;goto B4e47ec;
case 0x4e47f1:goto L4e47f1;
case 0x4e47f4:c.instructions+=2;goto B4e47f4;
case 0x4e47f9:c.instructions+=1;goto B4e47f9;
case 0x4e47fb:goto L4e47fb;
case 0x4e4802:c.instructions+=1;goto B4e4802;
case 0x4e4807:goto L4e4807;
case 0x4e480a:c.instructions+=3;goto B4e480a;
case 0x4e480f:c.instructions+=2;goto B4e480f;
case 0x4e4810:c.instructions+=1;goto B4e4810;
case 0x4e4815:goto L4e4815;
case 0x4e4818:c.instructions+=2;goto B4e4818;
case 0x4e4819:c.instructions+=1;goto B4e4819;
case 0x4e481e:goto L4e481e;
case 0x4e4824:c.instructions+=5;goto B4e4824;
case 0x4e4827:c.instructions+=4;goto B4e4827;
case 0x4e482c:c.instructions+=3;goto B4e482c;
case 0x4e4832:c.instructions+=2;goto B4e4832;
case 0x4e4833:c.instructions+=1;goto B4e4833;
case 0x4e4838:goto L4e4838;
case 0x4e483b:c.instructions+=4;goto B4e483b;
case 0x4e4840:c.instructions+=3;goto B4e4840;
case 0x4e4845:c.instructions+=2;goto B4e4845;
case 0x4e4846:c.instructions+=1;goto B4e4846;
case 0x4e484b:goto L4e484b;
case 0x4e484e:c.instructions+=3;goto B4e484e;
case 0x4e484f:c.instructions+=2;goto B4e484f;
case 0x4e4851:c.instructions+=1;goto B4e4851;
case 0x4e4856:goto L4e4856;
case 0x4e4859:c.instructions+=3;goto B4e4859;
case 0x4e485e:c.instructions+=2;goto B4e485e;
case 0x4e485f:c.instructions+=1;goto B4e485f;
case 0x4e4864:goto L4e4864;
case 0x4e486a:c.instructions+=3;goto B4e486a;
case 0x4e486d:c.instructions+=2;goto B4e486d;
case 0x4e486f:c.instructions+=1;goto B4e486f;
case 0x4e4871:goto L4e4871;
case 0x4e4873:c.instructions+=6;goto B4e4873;
case 0x4e4878:c.instructions+=5;goto B4e4878;
case 0x4e4882:c.instructions+=4;goto B4e4882;
case 0x4e4885:c.instructions+=3;goto B4e4885;
case 0x4e488a:c.instructions+=2;goto B4e488a;
case 0x4e488b:c.instructions+=1;goto B4e488b;
case 0x4e4890:goto L4e4890;
case 0x4e4896:c.instructions+=6;goto B4e4896;
case 0x4e4899:c.instructions+=5;goto B4e4899;
case 0x4e489b:c.instructions+=4;goto B4e489b;
case 0x4e48a0:c.instructions+=3;goto B4e48a0;
case 0x4e48a1:c.instructions+=2;goto B4e48a1;
case 0x4e48a2:c.instructions+=1;goto B4e48a2;
case 0x4e48a7:goto L4e48a7;
case 0x4e48aa:c.instructions+=1;goto B4e48aa;
case 0x4e48ac:goto L4e48ac;
case 0x4e48b2:goto L4e48b2;
case 0x4e48b7:goto L4e48b7;
case 0x4e48b8:c.instructions+=2;goto B4e48b8;
case 0x4e48bb:c.instructions+=1;goto B4e48bb;
case 0x4e48c0:goto L4e48c0;
case 0x4e48c2:c.instructions+=2;goto B4e48c2;
case 0x4e48c3:c.instructions+=1;goto B4e48c3;
case 0x4e48c5:goto L4e48c5;
case 0x4e48c6:c.instructions+=1;goto B4e48c6;
case 0x4e48cb:goto L4e48cb;
case 0x4e48cd:c.instructions+=1;goto B4e48cd;
case 0x4e48d2:goto L4e48d2;
case 0x4e48d5:c.instructions+=5;goto B4e48d5;
case 0x4e48d7:c.instructions+=4;goto B4e48d7;
case 0x4e48d8:c.instructions+=3;goto B4e48d8;
case 0x4e48db:c.instructions+=2;goto B4e48db;
case 0x4e48dc:c.instructions+=1;goto B4e48dc;
case 0x4e48e1:goto L4e48e1;
case 0x4e48e3:c.instructions+=1;goto B4e48e3;
case 0x4e48e8:goto L4e48e8;
case 0x4e48e9:c.instructions+=1;goto B4e48e9;
case 0x4e48eb:goto L4e48eb;
case 0x4e48f2:c.instructions+=1;goto B4e48f2;
case 0x4e48f4:goto L4e48f4;
case 0x4e48f5:c.instructions+=1;goto B4e48f5;
case 0x4e48fa:goto L4e48fa;
case 0x4e48fc:c.instructions+=1;goto B4e48fc;
case 0x4e4901:goto L4e4901;
case 0x4e4902:c.instructions+=1;goto B4e4902;
case 0x4e4907:goto L4e4907;
case 0x4e4908:c.instructions+=2;goto B4e4908;
case 0x4e490a:c.instructions+=1;goto B4e490a;
case 0x4e490f:goto L4e490f;
case 0x4e4912:c.instructions+=1;goto B4e4912;
case 0x4e4918:goto L4e4918;
case 0x4e4919:c.instructions+=2;goto B4e4919;
case 0x4e491b:c.instructions+=1;goto B4e491b;
case 0x4e4920:goto L4e4920;
case 0x4e4921:c.instructions+=2;goto B4e4921;
case 0x4e4926:c.instructions+=1;goto B4e4926;
case 0x4e492b:goto L4e492b;
case 0x4e4931:c.instructions+=3;goto B4e4931;
case 0x4e4933:c.instructions+=2;goto B4e4933;
case 0x4e4938:c.instructions+=1;goto B4e4938;
case 0x4e493e:goto L4e493e;
case 0x4e4940:goto L4e4940;
case 0x4e4943:c.instructions+=5;goto B4e4943;
case 0x4e4945:c.instructions+=4;goto B4e4945;
case 0x4e494a:c.instructions+=3;goto B4e494a;
case 0x4e494f:c.instructions+=2;goto B4e494f;
case 0x4e4950:c.instructions+=1;goto B4e4950;
case 0x4e4955:goto L4e4955;
case 0x4e4958:c.instructions+=5;goto B4e4958;
case 0x4e4959:c.instructions+=4;goto B4e4959;
case 0x4e495f:c.instructions+=3;goto B4e495f;
case 0x4e4964:c.instructions+=2;goto B4e4964;
case 0x4e4965:c.instructions+=1;goto B4e4965;
case 0x4e496a:goto L4e496a;
case 0x4e496f:goto L4e496f;
case 0x4e4975:c.instructions+=7;goto B4e4975;
case 0x4e4976:c.instructions+=6;goto B4e4976;
case 0x4e497c:c.instructions+=5;goto B4e497c;
case 0x4e497d:c.instructions+=4;goto B4e497d;
case 0x4e497e:c.instructions+=3;goto B4e497e;
case 0x4e4980:c.instructions+=2;goto B4e4980;
case 0x4e4981:c.instructions+=1;goto B4e4981;
case 0x4e4986:goto L4e4986;
case 0x4e4989:c.instructions+=4;goto B4e4989;
case 0x4e498c:c.instructions+=3;goto B4e498c;
case 0x4e498f:c.instructions+=2;goto B4e498f;
case 0x4e4990:c.instructions+=1;goto B4e4990;
case 0x4e4995:goto L4e4995;
case 0x4e4998:c.instructions+=6;goto B4e4998;
case 0x4e499e:c.instructions+=5;goto B4e499e;
case 0x4e49a3:c.instructions+=4;goto B4e49a3;
case 0x4e49a8:c.instructions+=3;goto B4e49a8;
case 0x4e49b2:c.instructions+=2;goto B4e49b2;
case 0x4e49b9:c.instructions+=1;goto B4e49b9;
case 0x4e49be:goto L4e49be;
case 0x4e49c1:c.instructions+=9;goto B4e49c1;
case 0x4e49c4:c.instructions+=8;goto B4e49c4;
case 0x4e49c5:c.instructions+=7;goto B4e49c5;
case 0x4e49c7:c.instructions+=6;goto B4e49c7;
case 0x4e49c8:c.instructions+=5;goto B4e49c8;
case 0x4e49c9:c.instructions+=4;goto B4e49c9;
case 0x4e49d0:c.instructions+=3;goto B4e49d0;
case 0x4e49d2:c.instructions+=2;goto B4e49d2;
case 0x4e49d3:c.instructions+=1;goto B4e49d3;
case 0x4e4a10:goto L4e4a10;
case 0x4e4a11:c.instructions+=2;goto B4e4a11;
case 0x4e4a13:c.instructions+=1;goto B4e4a13;
case 0x4e4a18:goto L4e4a18;
case 0x4e4a1d:c.instructions+=1;goto B4e4a1d;
case 0x4e4a1f:goto L4e4a1f;
case 0x4e4a20:c.instructions+=1;goto B4e4a20;
case 0x4e4a25:goto L4e4a25;
case 0x4e4a28:goto L4e4a28;
case 0x4e4a2a:c.instructions+=2;goto B4e4a2a;
case 0x4e4a2b:c.instructions+=1;goto B4e4a2b;
case 0x4e4a30:goto L4e4a30;
case 0x4e4a31:c.instructions+=10;goto B4e4a31;
case 0x4e4a33:c.instructions+=9;goto B4e4a33;
case 0x4e4a36:c.instructions+=8;goto B4e4a36;
case 0x4e4a3c:c.instructions+=7;goto B4e4a3c;
case 0x4e4a3d:c.instructions+=6;goto B4e4a3d;
case 0x4e4a3e:c.instructions+=5;goto B4e4a3e;
case 0x4e4a3f:c.instructions+=4;goto B4e4a3f;
case 0x4e4a42:c.instructions+=3;goto B4e4a42;
case 0x4e4a48:c.instructions+=2;goto B4e4a48;
case 0x4e4a4a:c.instructions+=1;goto B4e4a4a;
case 0x4e4a50:goto L4e4a50;
case 0x4e4a53:c.instructions+=2;goto B4e4a53;
case 0x4e4a54:c.instructions+=1;goto B4e4a54;
case 0x4e4a59:goto L4e4a59;
case 0x4e4a5a:c.instructions+=1;goto B4e4a5a;
case 0x4e4a5f:goto L4e4a5f;
case 0x4e4a65:c.instructions+=3;goto B4e4a65;
case 0x4e4a68:c.instructions+=2;goto B4e4a68;
case 0x4e4a6a:c.instructions+=1;goto B4e4a6a;
case 0x4e4a6c:goto L4e4a6c;
case 0x4e4a76:c.instructions+=1;goto B4e4a76;
case 0x4e4a78:goto L4e4a78;
case 0x4e4a7d:goto L4e4a7d;
case 0x4e4a83:c.instructions+=4;goto B4e4a83;
case 0x4e4a85:c.instructions+=3;goto B4e4a85;
case 0x4e4a87:c.instructions+=2;goto B4e4a87;
case 0x4e4a88:c.instructions+=1;goto B4e4a88;
case 0x4e4a8d:goto L4e4a8d;
case 0x4e4a90:c.instructions+=2;goto B4e4a90;
case 0x4e4a92:c.instructions+=1;goto B4e4a92;
case 0x4e4a97:goto L4e4a97;
case 0x4e4a99:c.instructions+=1;goto B4e4a99;
case 0x4e4a9e:goto L4e4a9e;
case 0x4e4a9f:c.instructions+=1;goto B4e4a9f;
case 0x4e4aa4:goto L4e4aa4;
case 0x4e4aa7:goto L4e4aa7;
case 0x4e4aa9:c.instructions+=1;goto B4e4aa9;
case 0x4e4aae:goto L4e4aae;
case 0x4e4ab1:c.instructions+=2;goto B4e4ab1;
case 0x4e4ab3:c.instructions+=1;goto B4e4ab3;
case 0x4e4ab8:goto L4e4ab8;
case 0x4e4aba:c.instructions+=1;goto B4e4aba;
case 0x4e4abc:goto L4e4abc;
case 0x4e4abe:c.instructions+=1;goto B4e4abe;
case 0x4e4ac3:goto L4e4ac3;
case 0x4e4ac4:c.instructions+=5;goto B4e4ac4;
case 0x4e4ac5:c.instructions+=4;goto B4e4ac5;
case 0x4e4ac6:c.instructions+=3;goto B4e4ac6;
case 0x4e4ac8:c.instructions+=2;goto B4e4ac8;
case 0x4e4ac9:c.instructions+=1;goto B4e4ac9;
case 0x4e4acc:goto L4e4acc;
case 0x4e4ad1:c.instructions+=3;goto B4e4ad1;
case 0x4e4ad3:c.instructions+=2;goto B4e4ad3;
case 0x4e4ad8:c.instructions+=1;goto B4e4ad8;
case 0x4e4adc:goto L4e4adc;
case 0x4e4ade:goto L4e4ade;
case 0x4e4ae0:c.instructions+=4;goto B4e4ae0;
case 0x4e4ae5:c.instructions+=3;goto B4e4ae5;
case 0x4e4aea:c.instructions+=2;goto B4e4aea;
case 0x4e4aeb:c.instructions+=1;goto B4e4aeb;
case 0x4e4af0:goto L4e4af0;
case 0x4e4af3:c.instructions+=5;goto B4e4af3;
case 0x4e4af4:c.instructions+=4;goto B4e4af4;
case 0x4e4af8:c.instructions+=3;goto B4e4af8;
case 0x4e4afd:c.instructions+=2;goto B4e4afd;
case 0x4e4afe:c.instructions+=1;goto B4e4afe;
case 0x4e4b03:goto L4e4b03;
case 0x4e4b08:goto L4e4b08;
case 0x4e4b0e:c.instructions+=7;goto B4e4b0e;
case 0x4e4b10:c.instructions+=6;goto B4e4b10;
case 0x4e4b14:c.instructions+=5;goto B4e4b14;
case 0x4e4b15:c.instructions+=4;goto B4e4b15;
case 0x4e4b17:c.instructions+=3;goto B4e4b17;
case 0x4e4b19:c.instructions+=2;goto B4e4b19;
case 0x4e4b1a:c.instructions+=1;goto B4e4b1a;
case 0x4e4b1f:goto L4e4b1f;
case 0x4e4b24:c.instructions+=3;goto B4e4b24;
case 0x4e4b27:c.instructions+=2;goto B4e4b27;
case 0x4e4b2a:c.instructions+=1;goto B4e4b2a;
case 0x4e4b2c:goto L4e4b2c;
case 0x4e4b2e:c.instructions+=2;goto B4e4b2e;
case 0x4e4b33:c.instructions+=1;goto B4e4b33;
case 0x4e4b38:goto L4e4b38;
case 0x4e4b3b:c.instructions+=4;goto B4e4b3b;
case 0x4e4b3d:c.instructions+=3;goto B4e4b3d;
case 0x4e4b42:c.instructions+=2;goto B4e4b42;
case 0x4e4b43:c.instructions+=1;goto B4e4b43;
case 0x4e4b48:goto L4e4b48;
case 0x4e4b4b:c.instructions+=6;goto B4e4b4b;
case 0x4e4b4c:c.instructions+=5;goto B4e4b4c;
case 0x4e4b4d:c.instructions+=4;goto B4e4b4d;
case 0x4e4b4e:c.instructions+=3;goto B4e4b4e;
case 0x4e4b50:c.instructions+=2;goto B4e4b50;
case 0x4e4b51:c.instructions+=1;goto B4e4b51;
case 0x4e4b54:goto L4e4b54;
case 0x4e4b5a:c.instructions+=2;goto B4e4b5a;
case 0x4e4b5c:c.instructions+=1;goto B4e4b5c;
case 0x4e4b62:goto L4e4b62;
case 0x4e4b68:c.instructions+=1;goto B4e4b68;
case 0x4e4b6a:goto L4e4b6a;
case 0x4e4b70:goto L4e4b70;
case 0x4e4b76:c.instructions+=1;goto B4e4b76;
case 0x4e4b78:goto L4e4b78;
case 0x4e4b7e:goto L4e4b7e;
case 0x4e4b81:c.instructions+=1;goto B4e4b81;
case 0x4e4b83:goto L4e4b83;
case 0x4e4b89:goto L4e4b89;
case 0x4e4b8c:c.instructions+=1;goto B4e4b8c;
case 0x4e4b92:goto L4e4b92;
case 0x4e4b95:c.instructions+=1;goto B4e4b95;
case 0x4e4b9b:goto L4e4b9b;
case 0x4e4b9c:c.instructions+=5;goto B4e4b9c;
case 0x4e4b9d:c.instructions+=4;goto B4e4b9d;
case 0x4e4b9e:c.instructions+=3;goto B4e4b9e;
case 0x4e4ba0:c.instructions+=2;goto B4e4ba0;
case 0x4e4ba1:c.instructions+=1;goto B4e4ba1;
case 0x4e4ba4:goto L4e4ba4;
case 0x4e4baa:c.instructions+=1;goto B4e4baa;
case 0x4e4bac:goto L4e4bac;
case 0x4e4bad:c.instructions+=5;goto B4e4bad;
case 0x4e4bae:c.instructions+=4;goto B4e4bae;
case 0x4e4baf:c.instructions+=3;goto B4e4baf;
case 0x4e4bb1:c.instructions+=2;goto B4e4bb1;
case 0x4e4bb2:c.instructions+=1;goto B4e4bb2;
case 0x4e4bb5:goto L4e4bb5;
case 0x4e4bbb:c.instructions+=1;goto B4e4bbb;
case 0x4e4bbd:goto L4e4bbd;
case 0x4e4bc3:c.instructions+=1;goto B4e4bc3;
case 0x4e4bc5:goto L4e4bc5;
case 0x4e4bc6:c.instructions+=5;goto B4e4bc6;
case 0x4e4bc7:c.instructions+=4;goto B4e4bc7;
case 0x4e4bc8:c.instructions+=3;goto B4e4bc8;
case 0x4e4bca:c.instructions+=2;goto B4e4bca;
case 0x4e4bcb:c.instructions+=1;goto B4e4bcb;
case 0x4e4bce:goto L4e4bce;
case 0x4e4bd4:c.instructions+=1;goto B4e4bd4;
case 0x4e4bd6:goto L4e4bd6;
case 0x4e4bd8:goto L4e4bd8;
case 0x4e4bde:c.instructions+=1;goto B4e4bde;
case 0x4e4be0:goto L4e4be0;
case 0x4e4be6:c.instructions+=1;goto B4e4be6;
case 0x4e4be8:goto L4e4be8;
case 0x4e4be9:c.instructions+=5;goto B4e4be9;
case 0x4e4bea:c.instructions+=4;goto B4e4bea;
case 0x4e4beb:c.instructions+=3;goto B4e4beb;
case 0x4e4bed:c.instructions+=2;goto B4e4bed;
case 0x4e4bee:c.instructions+=1;goto B4e4bee;
case 0x4e4bf1:goto L4e4bf1;
case 0x4e4bf7:c.instructions+=2;goto B4e4bf7;
case 0x4e4bf9:c.instructions+=1;goto B4e4bf9;
case 0x4e4bff:goto L4e4bff;
case 0x4e4c01:c.instructions+=2;goto B4e4c01;
case 0x4e4c03:c.instructions+=1;goto B4e4c03;
case 0x4e4c08:goto L4e4c08;
case 0x4e4c0f:c.instructions+=1;goto B4e4c0f;
case 0x4e4c14:goto L4e4c14;
case 0x4e4c1a:c.instructions+=1;goto B4e4c1a;
case 0x4e4c1c:goto L4e4c1c;
case 0x4e4c22:c.instructions+=1;goto B4e4c22;
case 0x4e4c28:goto L4e4c28;
case 0x4e4c2a:c.instructions+=1;goto B4e4c2a;
case 0x4e4c2f:goto L4e4c2f;
case 0x4e4c32:c.instructions+=2;goto B4e4c32;
case 0x4e4c34:c.instructions+=1;goto B4e4c34;
case 0x4e4c39:goto L4e4c39;
case 0x4e4c3b:c.instructions+=1;goto B4e4c3b;
case 0x4e4c3d:goto L4e4c3d;
case 0x4e4c40:c.instructions+=3;goto B4e4c40;
case 0x4e4c41:c.instructions+=2;goto B4e4c41;
case 0x4e4c46:c.instructions+=1;goto B4e4c46;
case 0x4e4c4b:goto L4e4c4b;
case 0x4e4c4e:c.instructions+=1;goto B4e4c4e;
case 0x4e4c50:goto L4e4c50;
case 0x4e4c52:c.instructions+=3;goto B4e4c52;
case 0x4e4c54:c.instructions+=2;goto B4e4c54;
case 0x4e4c56:c.instructions+=1;goto B4e4c56;
case 0x4e4c5b:goto L4e4c5b;
case 0x4e4c61:c.instructions+=1;goto B4e4c61;
case 0x4e4c67:goto L4e4c67;
case 0x4e4c6d:goto L4e4c6d;
case 0x4e4c70:c.instructions+=2;goto B4e4c70;
case 0x4e4c73:c.instructions+=1;goto B4e4c73;
case 0x4e4c79:goto L4e4c79;
case 0x4e4c80:goto L4e4c80;
case 0x4e4c83:c.instructions+=4;goto B4e4c83;
case 0x4e4c8a:c.instructions+=3;goto B4e4c8a;
case 0x4e4c91:c.instructions+=2;goto B4e4c91;
case 0x4e4c98:c.instructions+=1;goto B4e4c98;
case 0x4e4c9d:goto L4e4c9d;
case 0x4e4ca4:c.instructions+=4;goto B4e4ca4;
case 0x4e4ca7:c.instructions+=3;goto B4e4ca7;
case 0x4e4ca9:c.instructions+=2;goto B4e4ca9;
case 0x4e4caa:c.instructions+=1;goto B4e4caa;
case 0x4e4caf:goto L4e4caf;
case 0x4e4cb2:c.instructions+=5;goto B4e4cb2;
case 0x4e4cb4:c.instructions+=4;goto B4e4cb4;
case 0x4e4cb9:c.instructions+=3;goto B4e4cb9;
case 0x4e4cba:c.instructions+=2;goto B4e4cba;
case 0x4e4cbf:c.instructions+=1;goto B4e4cbf;
case 0x4e4cc4:goto L4e4cc4;
case 0x4e4cc7:c.instructions+=6;goto B4e4cc7;
case 0x4e4cc8:c.instructions+=5;goto B4e4cc8;
case 0x4e4cc9:c.instructions+=4;goto B4e4cc9;
case 0x4e4cca:c.instructions+=3;goto B4e4cca;
case 0x4e4ccc:c.instructions+=2;goto B4e4ccc;
case 0x4e4ccd:c.instructions+=1;goto B4e4ccd;
case 0x4e4cd0:goto L4e4cd0;
case 0x4e4cd3:c.instructions+=3;goto B4e4cd3;
case 0x4e4cd8:c.instructions+=2;goto B4e4cd8;
case 0x4e4cd9:c.instructions+=1;goto B4e4cd9;
case 0x4e4cde:goto L4e4cde;
case 0x4e4ce1:c.instructions+=7;goto B4e4ce1;
case 0x4e4ce3:c.instructions+=6;goto B4e4ce3;
case 0x4e4ce8:c.instructions+=5;goto B4e4ce8;
case 0x4e4ced:c.instructions+=4;goto B4e4ced;
case 0x4e4cee:c.instructions+=3;goto B4e4cee;
case 0x4e4cf5:c.instructions+=2;goto B4e4cf5;
case 0x4e4cfc:c.instructions+=1;goto B4e4cfc;
case 0x4e4d01:goto L4e4d01;
case 0x4e4d04:c.instructions+=4;goto B4e4d04;
case 0x4e4d06:c.instructions+=3;goto B4e4d06;
case 0x4e4d08:c.instructions+=2;goto B4e4d08;
case 0x4e4d0a:c.instructions+=1;goto B4e4d0a;
case 0x4e4d0f:goto L4e4d0f;
case 0x4e4d12:c.instructions+=3;goto B4e4d12;
case 0x4e4d13:c.instructions+=2;goto B4e4d13;
case 0x4e4d15:c.instructions+=1;goto B4e4d15;
case 0x4e4d1a:goto L4e4d1a;
case 0x4e4d20:c.instructions+=7;goto B4e4d20;
case 0x4e4d27:c.instructions+=6;goto B4e4d27;
case 0x4e4d2a:c.instructions+=5;goto B4e4d2a;
case 0x4e4d2d:c.instructions+=4;goto B4e4d2d;
case 0x4e4d30:c.instructions+=3;goto B4e4d30;
case 0x4e4d31:c.instructions+=2;goto B4e4d31;
case 0x4e4d32:c.instructions+=1;goto B4e4d32;
case 0x4e4d37:goto L4e4d37;
case 0x4e4d38:c.instructions+=5;goto B4e4d38;
case 0x4e4d39:c.instructions+=4;goto B4e4d39;
case 0x4e4d3a:c.instructions+=3;goto B4e4d3a;
case 0x4e4d3c:c.instructions+=2;goto B4e4d3c;
case 0x4e4d3d:c.instructions+=1;goto B4e4d3d;
case 0x4e4d40:goto L4e4d40;
case 0x4e4d43:c.instructions+=3;goto B4e4d43;
case 0x4e4d49:c.instructions+=2;goto B4e4d49;
case 0x4e4d4b:c.instructions+=1;goto B4e4d4b;
case 0x4e4d4d:goto L4e4d4d;
case 0x4e4d4e:c.instructions+=2;goto B4e4d4e;
case 0x4e4d50:c.instructions+=1;goto B4e4d50;
case 0x4e4d55:goto L4e4d55;
case 0x4e4d56:c.instructions+=5;goto B4e4d56;
case 0x4e4d57:c.instructions+=4;goto B4e4d57;
case 0x4e4d58:c.instructions+=3;goto B4e4d58;
case 0x4e4d5a:c.instructions+=2;goto B4e4d5a;
case 0x4e4d5b:c.instructions+=1;goto B4e4d5b;
case 0x4e4d5e:goto L4e4d5e;
case 0x4e4d61:c.instructions+=1;goto B4e4d61;
case 0x4e4d66:goto L4e4d66;
case 0x4e4d6c:c.instructions+=2;goto B4e4d6c;
case 0x4e4d6e:c.instructions+=1;goto B4e4d6e;
case 0x4e4d70:goto L4e4d70;
case 0x4e4d71:c.instructions+=1;goto B4e4d71;
case 0x4e4d76:goto L4e4d76;
case 0x4e4d79:goto L4e4d79;
case 0x4e4d7c:c.instructions+=2;goto B4e4d7c;
case 0x4e4d81:c.instructions+=1;goto B4e4d81;
case 0x4e4d86:goto L4e4d86;
case 0x4e4d87:c.instructions+=5;goto B4e4d87;
case 0x4e4d8c:c.instructions+=4;goto B4e4d8c;
case 0x4e4d91:c.instructions+=3;goto B4e4d91;
case 0x4e4d96:c.instructions+=2;goto B4e4d96;
case 0x4e4d97:c.instructions+=1;goto B4e4d97;
case 0x4e4d9c:goto L4e4d9c;
case 0x4e4d9f:c.instructions+=8;goto B4e4d9f;
case 0x4e4da5:c.instructions+=7;goto B4e4da5;
case 0x4e4dac:c.instructions+=6;goto B4e4dac;
case 0x4e4dad:c.instructions+=5;goto B4e4dad;
case 0x4e4dae:c.instructions+=4;goto B4e4dae;
case 0x4e4daf:c.instructions+=3;goto B4e4daf;
case 0x4e4db1:c.instructions+=2;goto B4e4db1;
case 0x4e4db2:c.instructions+=1;goto B4e4db2;
case 0x4e4db5:goto L4e4db5;
case 0x4e4db8:c.instructions+=3;goto B4e4db8;
case 0x4e4dbd:c.instructions+=2;goto B4e4dbd;
case 0x4e4dbe:c.instructions+=1;goto B4e4dbe;
case 0x4e4dc3:goto L4e4dc3;
case 0x4e4dc9:c.instructions+=5;goto B4e4dc9;
case 0x4e4dcc:c.instructions+=4;goto B4e4dcc;
case 0x4e4dcd:c.instructions+=3;goto B4e4dcd;
case 0x4e4dd2:c.instructions+=2;goto B4e4dd2;
case 0x4e4dd9:c.instructions+=1;goto B4e4dd9;
case 0x4e4dde:goto L4e4dde;
case 0x4e4de4:c.instructions+=7;goto B4e4de4;
case 0x4e4de6:c.instructions+=6;goto B4e4de6;
case 0x4e4de7:c.instructions+=5;goto B4e4de7;
case 0x4e4ded:c.instructions+=4;goto B4e4ded;
case 0x4e4def:c.instructions+=3;goto B4e4def;
case 0x4e4df1:c.instructions+=2;goto B4e4df1;
case 0x4e4df3:c.instructions+=1;goto B4e4df3;
case 0x4e4df6:goto L4e4df6;
case 0x4e4dfc:c.instructions+=4;goto B4e4dfc;
case 0x4e4dfe:c.instructions+=3;goto B4e4dfe;
case 0x4e4dff:c.instructions+=2;goto B4e4dff;
case 0x4e4e04:c.instructions+=1;goto B4e4e04;
case 0x4e4e09:goto L4e4e09;
case 0x4e4e0f:c.instructions+=4;goto B4e4e0f;
case 0x4e4e11:c.instructions+=3;goto B4e4e11;
case 0x4e4e13:c.instructions+=2;goto B4e4e13;
case 0x4e4e14:c.instructions+=1;goto B4e4e14;
case 0x4e4e19:goto L4e4e19;
case 0x4e4e1c:c.instructions+=6;goto B4e4e1c;
case 0x4e4e1e:c.instructions+=5;goto B4e4e1e;
case 0x4e4e23:c.instructions+=4;goto B4e4e23;
case 0x4e4e28:c.instructions+=3;goto B4e4e28;
case 0x4e4e29:c.instructions+=2;goto B4e4e29;
case 0x4e4e30:c.instructions+=1;goto B4e4e30;
case 0x4e4e35:goto L4e4e35;
case 0x4e4e38:c.instructions+=4;goto B4e4e38;
case 0x4e4e3a:c.instructions+=3;goto B4e4e3a;
case 0x4e4e3c:c.instructions+=2;goto B4e4e3c;
case 0x4e4e3e:c.instructions+=1;goto B4e4e3e;
case 0x4e4e43:goto L4e4e43;
case 0x4e4e46:c.instructions+=3;goto B4e4e46;
case 0x4e4e47:c.instructions+=2;goto B4e4e47;
case 0x4e4e49:c.instructions+=1;goto B4e4e49;
case 0x4e4e4e:goto L4e4e4e;
case 0x4e4e55:c.instructions+=7;goto B4e4e55;
case 0x4e4e58:c.instructions+=6;goto B4e4e58;
case 0x4e4e5b:c.instructions+=5;goto B4e4e5b;
case 0x4e4e5e:c.instructions+=4;goto B4e4e5e;
case 0x4e4e5f:c.instructions+=3;goto B4e4e5f;
case 0x4e4e60:c.instructions+=2;goto B4e4e60;
case 0x4e4e66:c.instructions+=1;goto B4e4e66;
case 0x4e4e6b:goto L4e4e6b;
case 0x4e4e6c:c.instructions+=5;goto B4e4e6c;
case 0x4e4e6d:c.instructions+=4;goto B4e4e6d;
case 0x4e4e6e:c.instructions+=3;goto B4e4e6e;
case 0x4e4e70:c.instructions+=2;goto B4e4e70;
case 0x4e4e71:c.instructions+=1;goto B4e4e71;
case 0x4e4e74:goto L4e4e74;
case 0x4e4e79:c.instructions+=9;goto B4e4e79;
case 0x4e4e7f:c.instructions+=8;goto B4e4e7f;
case 0x4e4e81:c.instructions+=7;goto B4e4e81;
case 0x4e4e85:c.instructions+=6;goto B4e4e85;
case 0x4e4e89:c.instructions+=5;goto B4e4e89;
case 0x4e4e8f:c.instructions+=4;goto B4e4e8f;
case 0x4e4e95:c.instructions+=3;goto B4e4e95;
case 0x4e4e97:c.instructions+=2;goto B4e4e97;
case 0x4e4e9a:c.instructions+=1;goto B4e4e9a;
case 0x4e4ea0:goto L4e4ea0;
case 0x4e4ea2:c.instructions+=5;goto B4e4ea2;
case 0x4e4ea4:c.instructions+=4;goto B4e4ea4;
case 0x4e4eab:c.instructions+=3;goto B4e4eab;
case 0x4e4eb2:c.instructions+=2;goto B4e4eb2;
case 0x4e4eb9:c.instructions+=1;goto B4e4eb9;
case 0x4e4ebe:goto L4e4ebe;
case 0x4e4ec3:c.instructions+=7;goto B4e4ec3;
case 0x4e4ec8:c.instructions+=6;goto B4e4ec8;
case 0x4e4ecd:c.instructions+=5;goto B4e4ecd;
case 0x4e4ed2:c.instructions+=4;goto B4e4ed2;
case 0x4e4ed4:c.instructions+=3;goto B4e4ed4;
case 0x4e4ed9:c.instructions+=2;goto B4e4ed9;
case 0x4e4edb:c.instructions+=1;goto B4e4edb;
case 0x4e4ee0:goto L4e4ee0;
case 0x4e4ee7:c.instructions+=6;goto B4e4ee7;
case 0x4e4ee8:c.instructions+=5;goto B4e4ee8;
case 0x4e4ee9:c.instructions+=4;goto B4e4ee9;
case 0x4e4eea:c.instructions+=3;goto B4e4eea;
case 0x4e4eec:c.instructions+=2;goto B4e4eec;
case 0x4e4eed:c.instructions+=1;goto B4e4eed;
case 0x4e4ef0:goto L4e4ef0;
case 0x4e4ef3:c.instructions+=6;goto B4e4ef3;
case 0x4e4ef9:c.instructions+=5;goto B4e4ef9;
case 0x4e4efa:c.instructions+=4;goto B4e4efa;
case 0x4e4f00:c.instructions+=3;goto B4e4f00;
case 0x4e4f05:c.instructions+=2;goto B4e4f05;
case 0x4e4f06:c.instructions+=1;goto B4e4f06;
case 0x4e4f0b:goto L4e4f0b;
case 0x4e4f0d:c.instructions+=2;goto B4e4f0d;
case 0x4e4f0e:c.instructions+=1;goto B4e4f0e;
case 0x4e4f10:goto L4e4f10;
case 0x4e4f13:c.instructions+=2;goto B4e4f13;
case 0x4e4f18:c.instructions+=1;goto B4e4f18;
case 0x4e4f1d:goto L4e4f1d;
case 0x4e4f20:c.instructions+=7;goto B4e4f20;
case 0x4e4f21:c.instructions+=6;goto B4e4f21;
case 0x4e4f23:c.instructions+=5;goto B4e4f23;
case 0x4e4f25:c.instructions+=4;goto B4e4f25;
case 0x4e4f2a:c.instructions+=3;goto B4e4f2a;
case 0x4e4f2f:c.instructions+=2;goto B4e4f2f;
case 0x4e4f30:c.instructions+=1;goto B4e4f30;
case 0x4e4f35:goto L4e4f35;
case 0x4e4f38:c.instructions+=6;goto B4e4f38;
case 0x4e4f39:c.instructions+=5;goto B4e4f39;
case 0x4e4f3a:c.instructions+=4;goto B4e4f3a;
case 0x4e4f3b:c.instructions+=3;goto B4e4f3b;
case 0x4e4f3d:c.instructions+=2;goto B4e4f3d;
case 0x4e4f3e:c.instructions+=1;goto B4e4f3e;
case 0x4e4f41:goto L4e4f41;
case 0x4e4f46:c.instructions+=3;goto B4e4f46;
case 0x4e4f48:c.instructions+=2;goto B4e4f48;
case 0x4e4f4d:c.instructions+=1;goto B4e4f4d;
case 0x4e4f51:goto L4e4f51;
case 0x4e4f53:goto L4e4f53;
case 0x4e4f55:c.instructions+=3;goto B4e4f55;
case 0x4e4f5a:c.instructions+=2;goto B4e4f5a;
case 0x4e4f5b:c.instructions+=1;goto B4e4f5b;
case 0x4e4f60:goto L4e4f60;
case 0x4e4f63:c.instructions+=4;goto B4e4f63;
case 0x4e4f64:c.instructions+=3;goto B4e4f64;
case 0x4e4f68:c.instructions+=2;goto B4e4f68;
case 0x4e4f69:c.instructions+=1;goto B4e4f69;
case 0x4e4f6e:goto L4e4f6e;
case 0x4e4f71:c.instructions+=5;goto B4e4f71;
case 0x4e4f75:c.instructions+=4;goto B4e4f75;
case 0x4e4f76:c.instructions+=3;goto B4e4f76;
case 0x4e4f7b:c.instructions+=2;goto B4e4f7b;
case 0x4e4f7c:c.instructions+=1;goto B4e4f7c;
case 0x4e4f81:goto L4e4f81;
case 0x4e4f84:c.instructions+=7;goto B4e4f84;
case 0x4e4f8a:c.instructions+=6;goto B4e4f8a;
case 0x4e4f8b:c.instructions+=5;goto B4e4f8b;
case 0x4e4f8c:c.instructions+=4;goto B4e4f8c;
case 0x4e4f8d:c.instructions+=3;goto B4e4f8d;
case 0x4e4f8f:c.instructions+=2;goto B4e4f8f;
case 0x4e4f90:c.instructions+=1;goto B4e4f90;
case 0x4e4f93:goto L4e4f93;
case 0x4e4f96:c.instructions+=10;goto B4e4f96;
case 0x4e4f9b:c.instructions+=9;goto B4e4f9b;
case 0x4e4f9d:c.instructions+=8;goto B4e4f9d;
case 0x4e4fa2:c.instructions+=7;goto B4e4fa2;
case 0x4e4fa7:c.instructions+=6;goto B4e4fa7;
case 0x4e4fac:c.instructions+=5;goto B4e4fac;
case 0x4e4fb1:c.instructions+=4;goto B4e4fb1;
case 0x4e4fb6:c.instructions+=3;goto B4e4fb6;
case 0x4e4fbb:c.instructions+=2;goto B4e4fbb;
case 0x4e4fbc:c.instructions+=1;goto B4e4fbc;
case 0x4e4fc1:goto L4e4fc1;
case 0x4e4fc4:c.instructions+=6;goto B4e4fc4;
case 0x4e4fc5:c.instructions+=5;goto B4e4fc5;
case 0x4e4fc6:c.instructions+=4;goto B4e4fc6;
case 0x4e4fc7:c.instructions+=3;goto B4e4fc7;
case 0x4e4fc9:c.instructions+=2;goto B4e4fc9;
case 0x4e4fca:c.instructions+=1;goto B4e4fca;
case 0x4e4fcd:goto L4e4fcd;
case 0x4e4fd0:c.instructions+=7;goto B4e4fd0;
case 0x4e4fd2:c.instructions+=6;goto B4e4fd2;
case 0x4e4fd7:c.instructions+=5;goto B4e4fd7;
case 0x4e4fdc:c.instructions+=4;goto B4e4fdc;
case 0x4e4fdd:c.instructions+=3;goto B4e4fdd;
case 0x4e4fe4:c.instructions+=2;goto B4e4fe4;
case 0x4e4feb:c.instructions+=1;goto B4e4feb;
case 0x4e4ff0:goto L4e4ff0;
case 0x4e4ff3:c.instructions+=4;goto B4e4ff3;
case 0x4e4ff5:c.instructions+=3;goto B4e4ff5;
case 0x4e4ffa:c.instructions+=2;goto B4e4ffa;
case 0x4e4fff:c.instructions+=1;goto B4e4fff;
default:missing_instruction(c.pc);}
B4e4002:L4e4002:{c.instructions+=3;NFSU2_TR(0x4e4002);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4004:{NFSU2_TR(0x4e4004);
__builtin_memmove((R+12),(R+0),4);
}
B4e4006:{NFSU2_TR(0x4e4006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e400bull));
TAIL_STATIC(0x575620u,575);
}
B4e400b:L4e400b:{c.instructions+=3;NFSU2_TR(0x4e400b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e400e:{NFSU2_TR(0x4e400e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e4010:{NFSU2_TR(0x4e4010);
if(r1(R+518)){{goto L4e4020;}}
}
B4e4012:L4e4012:{c.instructions+=4;NFSU2_TR(0x4e4012);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e4018:{NFSU2_TR(0x4e4018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e401b:{NFSU2_TR(0x4e401b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e401e:{NFSU2_TR(0x4e401e);
{goto L4e4022;}
}
B4e4020:L4e4020:{c.instructions+=1;NFSU2_TR(0x4e4020);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e4022:L4e4022:{c.instructions+=11;NFSU2_TR(0x4e4022);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4025:{NFSU2_TR(0x4e4025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e4027:{NFSU2_TR(0x4e4027);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4028:{NFSU2_TR(0x4e4028);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e402b:{NFSU2_TR(0x4e402b);
u8 U[4];
w4(U+0,u32(0x797870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4030:{NFSU2_TR(0x4e4030);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4033:{NFSU2_TR(0x4e4033);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e4035:{NFSU2_TR(0x4e4035);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e4039:{NFSU2_TR(0x4e4039);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e403b:{NFSU2_TR(0x4e403b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e403c:{NFSU2_TR(0x4e403c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4041ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e4041:L4e4041:{c.instructions+=4;NFSU2_TR(0x4e4041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e4044:{NFSU2_TR(0x4e4044);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4048:{NFSU2_TR(0x4e4048);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4049:{NFSU2_TR(0x4e4049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e404eull));
TAIL_STATIC(0x505450u,505);
}
B4e404e:L4e404e:{c.instructions+=3;NFSU2_TR(0x4e404e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e404f:{NFSU2_TR(0x4e404f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4050:{NFSU2_TR(0x4e4050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4055ull));
TAIL_STATIC(0x537a10u,537);
}
B4e4055:L4e4055:{c.instructions+=3;NFSU2_TR(0x4e4055);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4057:{NFSU2_TR(0x4e4057);
__builtin_memmove((R+12),(R+0),4);
}
B4e4059:{NFSU2_TR(0x4e4059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e405eull));
TAIL_STATIC(0x575620u,575);
}
B4e405e:L4e405e:{c.instructions+=3;NFSU2_TR(0x4e405e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e4061:{NFSU2_TR(0x4e4061);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e4063:{NFSU2_TR(0x4e4063);
if(r1(R+518)){{goto L4e4073;}}
}
B4e4065:L4e4065:{c.instructions+=4;NFSU2_TR(0x4e4065);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e406b:{NFSU2_TR(0x4e406b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e406e:{NFSU2_TR(0x4e406e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e4071:{NFSU2_TR(0x4e4071);
{goto L4e4075;}
}
B4e4073:L4e4073:{c.instructions+=1;NFSU2_TR(0x4e4073);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e4075:L4e4075:{c.instructions+=11;NFSU2_TR(0x4e4075);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4078:{NFSU2_TR(0x4e4078);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4079:{NFSU2_TR(0x4e4079);
u8 U[4];
w4(U+0,u32(0x79785cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e407e:{NFSU2_TR(0x4e407e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e4080:{NFSU2_TR(0x4e4080);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e4084:{NFSU2_TR(0x4e4084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4087:{NFSU2_TR(0x4e4087);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4089:{NFSU2_TR(0x4e4089);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e408a:{NFSU2_TR(0x4e408a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e408d:{NFSU2_TR(0x4e408d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e408f:{NFSU2_TR(0x4e408f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4094ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e4094:L4e4094:{c.instructions+=4;NFSU2_TR(0x4e4094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e4097:{NFSU2_TR(0x4e4097);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e409b:{NFSU2_TR(0x4e409b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e409c:{NFSU2_TR(0x4e409c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e40a1ull));
TAIL_STATIC(0x505450u,505);
}
B4e40a1:L4e40a1:{c.instructions+=3;NFSU2_TR(0x4e40a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40a2:{NFSU2_TR(0x4e40a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40a3:{NFSU2_TR(0x4e40a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e40a8ull));
TAIL_STATIC(0x537a10u,537);
}
B4e40a8:L4e40a8:{c.instructions+=3;NFSU2_TR(0x4e40a8);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40aa:{NFSU2_TR(0x4e40aa);
__builtin_memmove((R+12),(R+0),4);
}
B4e40ac:{NFSU2_TR(0x4e40ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e40b1ull));
TAIL_STATIC(0x575620u,575);
}
B4e40b1:L4e40b1:{c.instructions+=3;NFSU2_TR(0x4e40b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e40b4:{NFSU2_TR(0x4e40b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e40b6:{NFSU2_TR(0x4e40b6);
if(r1(R+518)){{goto L4e40c6;}}
}
B4e40b8:L4e40b8:{c.instructions+=4;NFSU2_TR(0x4e40b8);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e40be:{NFSU2_TR(0x4e40be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e40c1:{NFSU2_TR(0x4e40c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e40c4:{NFSU2_TR(0x4e40c4);
{goto L4e40c8;}
}
B4e40c6:L4e40c6:{c.instructions+=1;NFSU2_TR(0x4e40c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e40c8:L4e40c8:{c.instructions+=11;NFSU2_TR(0x4e40c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e40cb:{NFSU2_TR(0x4e40cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e40cd:{NFSU2_TR(0x4e40cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40ce:{NFSU2_TR(0x4e40ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e40d1:{NFSU2_TR(0x4e40d1);
u8 U[4];
w4(U+0,u32(0x79603cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40d6:{NFSU2_TR(0x4e40d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e40d9:{NFSU2_TR(0x4e40d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e40dd:{NFSU2_TR(0x4e40dd);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40df:{NFSU2_TR(0x4e40df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40e0:{NFSU2_TR(0x4e40e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e40e2:{NFSU2_TR(0x4e40e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e40e7ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e40e7:L4e40e7:{c.instructions+=4;NFSU2_TR(0x4e40e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e40ea:{NFSU2_TR(0x4e40ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e40ee:{NFSU2_TR(0x4e40ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40ef:{NFSU2_TR(0x4e40ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e40f4ull));
TAIL_STATIC(0x505450u,505);
}
B4e40f4:L4e40f4:{c.instructions+=3;NFSU2_TR(0x4e40f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40f5:{NFSU2_TR(0x4e40f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e40f6:{NFSU2_TR(0x4e40f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e40fbull));
TAIL_STATIC(0x5379c0u,537);
}
B4e40fb:L4e40fb:{c.instructions+=6;NFSU2_TR(0x4e40fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e40ff:{NFSU2_TR(0x4e40ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e4102:{NFSU2_TR(0x4e4102);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4105:{NFSU2_TR(0x4e4105);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4106:{NFSU2_TR(0x4e4106);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4109:{NFSU2_TR(0x4e4109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e410eull));
TAIL_STATIC(0x52e770u,52e);
}
B4e410e:L4e410e:{c.instructions+=5;NFSU2_TR(0x4e410e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4112:{NFSU2_TR(0x4e4112);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e4113:{NFSU2_TR(0x4e4113);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4e4114:{NFSU2_TR(0x4e4114);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4118:{NFSU2_TR(0x4e4118);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e3ee6u,4e3);}
}
B4e411e:L4e411e:{c.instructions+=3;NFSU2_TR(0x4e411e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4120:{NFSU2_TR(0x4e4120);
__builtin_memmove((R+4),(R+20),4);
}
B4e4122:{NFSU2_TR(0x4e4122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4127ull));
TAIL_STATIC(0x4d1380u,4d1);
}
B4e4127:L4e4127:{c.instructions+=6;NFSU2_TR(0x4e4127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4128:{NFSU2_TR(0x4e4128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4129:{NFSU2_TR(0x4e4129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e412a:{NFSU2_TR(0x4e412a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e412b:{NFSU2_TR(0x4e412b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e412e:{NFSU2_TR(0x4e412e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4130:L4e4130:{c.instructions+=14;NFSU2_TR(0x4e4130);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4131:{NFSU2_TR(0x4e4131);
__builtin_memmove((R+20),(R+16),4);
}
B4e4133:{NFSU2_TR(0x4e4133);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e4136:{NFSU2_TR(0x4e4136);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4138:{NFSU2_TR(0x4e4138);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e413d:{NFSU2_TR(0x4e413d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4143:{NFSU2_TR(0x4e4143);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4144:{NFSU2_TR(0x4e4144);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e414b:{NFSU2_TR(0x4e414b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4e4151:{NFSU2_TR(0x4e4151);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4157:{NFSU2_TR(0x4e4157);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4e4161:{NFSU2_TR(0x4e4161);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4162:{NFSU2_TR(0x4e4162);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4163:{NFSU2_TR(0x4e4163);
if(r1(R+518)){{goto L4e429d;}}
}
B4e4169:L4e4169:{c.instructions+=3;NFSU2_TR(0x4e4169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e416a:{NFSU2_TR(0x4e416a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e416c:{NFSU2_TR(0x4e416c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4171ull));
TAIL_STATIC(0x58f740u,58f);
}
B4e4171:L4e4171:{c.instructions+=3;NFSU2_TR(0x4e4171);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4174:{NFSU2_TR(0x4e4174);
__builtin_memmove((R+4),(R+0),4);
}
B4e4176:{NFSU2_TR(0x4e4176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e417bull));
TAIL_STATIC(0x5829c0u,582);
}
B4e417b:L4e417b:{c.instructions+=2;NFSU2_TR(0x4e417b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e417c:{NFSU2_TR(0x4e417c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4181ull));
TAIL_STATIC(0x582290u,582);
}
B4e4181:L4e4181:{c.instructions+=6;NFSU2_TR(0x4e4181);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4184:{NFSU2_TR(0x4e4184);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4186:{NFSU2_TR(0x4e4186);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4188:{NFSU2_TR(0x4e4188);
w4(R+4,u32(0x83ad90ull));
}
B4e418d:{NFSU2_TR(0x4e418d);
__builtin_memmove((R+28),(R+0),4);
}
B4e418f:{NFSU2_TR(0x4e418f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4194ull));
TAIL_STATIC(0x5162d0u,516);
}
B4e4194:L4e4194:{c.instructions+=3;NFSU2_TR(0x4e4194);
__builtin_memmove((R+24),(R+0),4);
}
B4e4196:{NFSU2_TR(0x4e4196);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e4198:{NFSU2_TR(0x4e4198);
if(r1(R+518)){{goto L4e41bb;}}
}
B4e419a:L4e419a:{c.instructions+=1;NFSU2_TR(0x4e419a);
__builtin_memmove((R+12),(R+12),4);
}
B4e41a0:L4e41a0:{c.instructions+=2;NFSU2_TR(0x4e41a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e41a6:{NFSU2_TR(0x4e41a6);
if(r1(R+518)){{goto L4e41bb;}}
}
B4e41a8:L4e41a8:{c.instructions+=4;NFSU2_TR(0x4e41a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41a9:{NFSU2_TR(0x4e41a9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41ab:{NFSU2_TR(0x4e41ab);
w4(R+4,u32(0x83ad90ull));
}
B4e41b0:{NFSU2_TR(0x4e41b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e41b5ull));
TAIL_STATIC(0x5162d0u,516);
}
B4e41b5:L4e41b5:{c.instructions+=3;NFSU2_TR(0x4e41b5);
__builtin_memmove((R+24),(R+0),4);
}
B4e41b7:{NFSU2_TR(0x4e41b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e41b9:{NFSU2_TR(0x4e41b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e41a0u);}goto L4e41a0;}}
}
B4e41bb:L4e41bb:{c.instructions+=2;NFSU2_TR(0x4e41bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e41bf:{NFSU2_TR(0x4e41bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e41c4ull));
TAIL_STATIC(0x40c910u,40c);
}
B4e41c4:L4e41c4:{c.instructions+=8;NFSU2_TR(0x4e41c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e41c6:{NFSU2_TR(0x4e41c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41c8:{NFSU2_TR(0x4e41c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e41cc:{NFSU2_TR(0x4e41cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41cd:{NFSU2_TR(0x4e41cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41cf:{NFSU2_TR(0x4e41cf);
__builtin_memmove((R+4),(R+24),4);
}
B4e41d1:{NFSU2_TR(0x4e41d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e41dc:{NFSU2_TR(0x4e41dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e41dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e41df:L4e41df:{c.instructions+=5;NFSU2_TR(0x4e41df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e41e2:{NFSU2_TR(0x4e41e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41e4:{NFSU2_TR(0x4e41e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41e5:{NFSU2_TR(0x4e41e5);
w4(R+4,u32(0x83aab4ull));
}
B4e41ea:{NFSU2_TR(0x4e41ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e41efull));
TAIL_STATIC(0x502a40u,502);
}
B4e41ef:L4e41ef:{c.instructions+=2;NFSU2_TR(0x4e41ef);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e41f4:{NFSU2_TR(0x4e41f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e41f9ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e41f9:L4e41f9:{c.instructions+=3;NFSU2_TR(0x4e41f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e41fc:{NFSU2_TR(0x4e41fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e41fe:{NFSU2_TR(0x4e41fe);
if(r1(R+518)){{goto L4e4211;}}
}
B4e4200:L4e4200:{c.instructions+=2;NFSU2_TR(0x4e4200);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4205:{NFSU2_TR(0x4e4205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e420aull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e420a:L4e420a:{c.instructions+=3;NFSU2_TR(0x4e420a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e420d:{NFSU2_TR(0x4e420d);
__builtin_memmove((R+24),(R+0),4);
}
B4e420f:{NFSU2_TR(0x4e420f);
{goto L4e423a;}
}
B4e4211:L4e4211:{c.instructions+=2;NFSU2_TR(0x4e4211);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4216:{NFSU2_TR(0x4e4216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e421bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e421b:L4e421b:{c.instructions+=3;NFSU2_TR(0x4e421b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e421e:{NFSU2_TR(0x4e421e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e4220:{NFSU2_TR(0x4e4220);
if(r1(R+518)){{goto L4e4238;}}
}
B4e4222:L4e4222:{c.instructions+=2;NFSU2_TR(0x4e4222);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4227:{NFSU2_TR(0x4e4227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e422cull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e422c:L4e422c:{c.instructions+=3;NFSU2_TR(0x4e422c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e422f:{NFSU2_TR(0x4e422f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e4231:{NFSU2_TR(0x4e4231);
if(r1(R+518)){{goto L4e4238;}}
}
B4e4233:L4e4233:{c.instructions+=2;NFSU2_TR(0x4e4233);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e4236:{NFSU2_TR(0x4e4236);
{goto L4e423a;}
}
B4e4238:L4e4238:{c.instructions+=1;NFSU2_TR(0x4e4238);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e423a:L4e423a:{c.instructions+=4;NFSU2_TR(0x4e423a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e423e:{NFSU2_TR(0x4e423e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e423f:{NFSU2_TR(0x4e423f);
w4(R+4,u32(0x8371b0ull));
}
B4e4244:{NFSU2_TR(0x4e4244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4249ull));
TAIL_STATIC(0x413440u,413);
}
B4e4249:L4e4249:{c.instructions+=3;NFSU2_TR(0x4e4249);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e424b:{NFSU2_TR(0x4e424b);
s4(0x83623c,u32(0x1ull));
}
B4e4255:{NFSU2_TR(0x4e4255);
if(r1(R+518)){{goto L4e4265;}}
}
B4e4257:L4e4257:{c.instructions+=4;NFSU2_TR(0x4e4257);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4259:{NFSU2_TR(0x4e4259);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e425e:{NFSU2_TR(0x4e425e);
__builtin_memmove((R+4),(R+24),4);
}
B4e4260:{NFSU2_TR(0x4e4260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4265ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e4265:L4e4265:{c.instructions+=3;NFSU2_TR(0x4e4265);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e4269:{NFSU2_TR(0x4e4269);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e426a:{NFSU2_TR(0x4e426a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e426full));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e426f:L4e426f:{c.instructions+=2;NFSU2_TR(0x4e426f);
__builtin_memmove((R+4),(R+0),4);
}
B4e4271:{NFSU2_TR(0x4e4271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4276ull));
TAIL_STATIC(0x587630u,587);
}
B4e4276:L4e4276:{c.instructions+=3;NFSU2_TR(0x4e4276);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4278:{NFSU2_TR(0x4e4278);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e427a:{NFSU2_TR(0x4e427a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e427full));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e427f:L4e427f:{c.instructions+=2;NFSU2_TR(0x4e427f);
__builtin_memmove((R+4),(R+0),4);
}
B4e4281:{NFSU2_TR(0x4e4281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4286ull));
TAIL_STATIC(0x58e080u,58e);
}
B4e4286:L4e4286:{c.instructions+=3;NFSU2_TR(0x4e4286);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e428d:{NFSU2_TR(0x4e428d);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e4298:{NFSU2_TR(0x4e4298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e429dull));
TAIL_STATIC(0x4022c0u,402);
}
B4e429d:L4e429d:{c.instructions+=7;NFSU2_TR(0x4e429d);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e42a4:{NFSU2_TR(0x4e42a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e42a5:{NFSU2_TR(0x4e42a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e42ac:{NFSU2_TR(0x4e42ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e42ad:{NFSU2_TR(0x4e42ad);
__builtin_memmove((R+16),(R+20),4);
}
B4e42af:{NFSU2_TR(0x4e42af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e42b0:{NFSU2_TR(0x4e42b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e42c0:L4e42c0:{c.instructions+=8;NFSU2_TR(0x4e42c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e42c2:{NFSU2_TR(0x4e42c2);
u8 U[4];
w4(U+0,u32(0x775db4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e42c7:{NFSU2_TR(0x4e42c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e42cd:{NFSU2_TR(0x4e42cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e42ce:{NFSU2_TR(0x4e42ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e42d5:{NFSU2_TR(0x4e42d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e42d6:{NFSU2_TR(0x4e42d6);
u8 U[4];
w4(U+0,u32(0x164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e42db:{NFSU2_TR(0x4e42db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e42e0ull));
TAIL_STATIC(0x575620u,575);
}
B4e42e0:L4e42e0:{c.instructions+=5;NFSU2_TR(0x4e42e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e42e3:{NFSU2_TR(0x4e42e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e42e7:{NFSU2_TR(0x4e42e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e42e9:{NFSU2_TR(0x4e42e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e42f1:{NFSU2_TR(0x4e42f1);
if(r1(R+518)){{goto L4e430e;}}
}
B4e42f3:L4e42f3:{c.instructions+=4;NFSU2_TR(0x4e42f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e42f7:{NFSU2_TR(0x4e42f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e42f8:{NFSU2_TR(0x4e42f8);
__builtin_memmove((R+4),(R+0),4);
}
B4e42fa:{NFSU2_TR(0x4e42fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e42ffull));
TAIL_STATIC(0x4d1810u,4d1);
}
B4e42ff:L4e42ff:{c.instructions+=4;NFSU2_TR(0x4e42ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4303:{NFSU2_TR(0x4e4303);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e430a:{NFSU2_TR(0x4e430a);
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
B4e430d:{NFSU2_TR(0x4e430d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e430e:L4e430e:{c.instructions+=5;NFSU2_TR(0x4e430e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4312:{NFSU2_TR(0x4e4312);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e4314:{NFSU2_TR(0x4e4314);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e431b:{NFSU2_TR(0x4e431b);
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
B4e431e:{NFSU2_TR(0x4e431e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4320:L4e4320:{c.instructions+=16;NFSU2_TR(0x4e4320);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4321:{NFSU2_TR(0x4e4321);
__builtin_memmove((R+20),(R+16),4);
}
B4e4323:{NFSU2_TR(0x4e4323);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4325:{NFSU2_TR(0x4e4325);
u8 U[4];
w4(U+0,u32(0x775dd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e432a:{NFSU2_TR(0x4e432a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4330:{NFSU2_TR(0x4e4330);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4331:{NFSU2_TR(0x4e4331);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4338:{NFSU2_TR(0x4e4338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B4e433e:{NFSU2_TR(0x4e433e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4341:{NFSU2_TR(0x4e4341);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4342:{NFSU2_TR(0x4e4342);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4343:{NFSU2_TR(0x4e4343);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4344:{NFSU2_TR(0x4e4344);
__builtin_memmove((R+24),(R+4),4);
}
B4e4346:{NFSU2_TR(0x4e4346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4347:{NFSU2_TR(0x4e4347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e434a:{NFSU2_TR(0x4e434a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e434full));
TAIL_STATIC(0x551de0u,551);
}
B4e434f:L4e434f:{c.instructions+=13;NFSU2_TR(0x4e434f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4352:{NFSU2_TR(0x4e4352);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4354:{NFSU2_TR(0x4e4354);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e4356:{NFSU2_TR(0x4e4356);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4357:{NFSU2_TR(0x4e4357);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4359:{NFSU2_TR(0x4e4359);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e435b:{NFSU2_TR(0x4e435b);
u8 U[4];
w4(U+0,u32(0x7978e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4360:{NFSU2_TR(0x4e4360);
u8 U[4];
w4(U+0,u32(0x7976c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4365:{NFSU2_TR(0x4e4365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4366:{NFSU2_TR(0x4e4366);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4369:{NFSU2_TR(0x4e4369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e436c:{NFSU2_TR(0x4e436c);
u8 U[4];
w4(U+0,u32(0x79602cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e4372:{NFSU2_TR(0x4e4372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4377ull));
TAIL_STATIC(0x542ca0u,542);
}
B4e4377:L4e4377:{c.instructions+=5;NFSU2_TR(0x4e4377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e437a:{NFSU2_TR(0x4e437a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4380:{NFSU2_TR(0x4e4380);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4381:{NFSU2_TR(0x4e4381);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4385:{NFSU2_TR(0x4e4385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e438aull));
TAIL_STATIC(0x4d2a70u,4d2);
}
B4e438a:L4e438a:{c.instructions+=2;NFSU2_TR(0x4e438a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e438b:{NFSU2_TR(0x4e438b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4390ull));
TAIL_STATIC(0x58f740u,58f);
}
B4e4390:L4e4390:{c.instructions+=2;NFSU2_TR(0x4e4390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4396:{NFSU2_TR(0x4e4396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e439bull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4e439b:L4e439b:{c.instructions+=13;NFSU2_TR(0x4e439b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e43a1:{NFSU2_TR(0x4e43a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e43a7:{NFSU2_TR(0x4e43a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e43b1:{NFSU2_TR(0x4e43b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1180ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e43b7:{NFSU2_TR(0x4e43b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1181ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e43bd:{NFSU2_TR(0x4e43bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e43c3:{NFSU2_TR(0x4e43c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e43c9:{NFSU2_TR(0x4e43c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1199ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e43cf:{NFSU2_TR(0x4e43cf);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e43d5:{NFSU2_TR(0x4e43d5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e43db:{NFSU2_TR(0x4e43db);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e43e1:{NFSU2_TR(0x4e43e1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4e43e7:{NFSU2_TR(0x4e43e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e43ecull));
TAIL_STATIC(0x75bed4u,75b);
}
B4e43ec:L4e43ec:{c.instructions+=18;NFSU2_TR(0x4e43ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e43f2:{NFSU2_TR(0x4e43f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e43f5:{NFSU2_TR(0x4e43f5);
u8 U[4];
w4(U+0,u32(0xa6f52ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e43fa:{NFSU2_TR(0x4e43fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e43fb:{NFSU2_TR(0x4e43fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4401:{NFSU2_TR(0x4e4401);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4407:{NFSU2_TR(0x4e4407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e440d:{NFSU2_TR(0x4e440d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4413:{NFSU2_TR(0x4e4413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11acull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4419:{NFSU2_TR(0x4e4419);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e441f:{NFSU2_TR(0x4e441f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4425:{NFSU2_TR(0x4e4425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e442b:{NFSU2_TR(0x4e442b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4431:{NFSU2_TR(0x4e4431);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4437:{NFSU2_TR(0x4e4437);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11beull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e443d:{NFSU2_TR(0x4e443d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4443:{NFSU2_TR(0x4e4443);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11c0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4449:{NFSU2_TR(0x4e4449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e444eull));
TAIL_STATIC(0x5379c0u,537);
}
B4e444e:L4e444e:{c.instructions+=2;NFSU2_TR(0x4e444e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e444f:{NFSU2_TR(0x4e444f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4454ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e4454:L4e4454:{c.instructions+=4;NFSU2_TR(0x4e4454);
__builtin_memmove((R+0),gp(0x8500c8),1);
}
B4e4459:{NFSU2_TR(0x4e4459);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e445c:{NFSU2_TR(0x4e445c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4462:{NFSU2_TR(0x4e4462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4465:L4e4465:{c.instructions+=2;NFSU2_TR(0x4e4465);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4467:{NFSU2_TR(0x4e4467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e446cull));
TAIL_STATIC(0x575620u,575);
}
B4e446c:L4e446c:{c.instructions+=5;NFSU2_TR(0x4e446c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e446f:{NFSU2_TR(0x4e446f);
__builtin_memmove((R+28),(R+0),4);
}
B4e4471:{NFSU2_TR(0x4e4471);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8358f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4e4478:{NFSU2_TR(0x4e4478);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e447a:{NFSU2_TR(0x4e447a);
w4(R+4,u32(0x8ull));
}
B4e447f:L4e447f:{c.instructions+=1;NFSU2_TR(0x4e447f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e4481;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e447fu);}goto L4e447f;}
}
B4e4481:L4e4481:{c.instructions+=8;NFSU2_TR(0x4e4481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4484:{NFSU2_TR(0x4e4484);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83590cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e448a:{NFSU2_TR(0x4e448a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e448d:{NFSU2_TR(0x4e448d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x835912ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4493:{NFSU2_TR(0x4e4493);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4e4494:{NFSU2_TR(0x4e4494);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e4497:{NFSU2_TR(0x4e4497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e449a:{NFSU2_TR(0x4e449a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e4465u);}goto L4e4465;}}
}
B4e449c:L4e449c:{c.instructions+=5;NFSU2_TR(0x4e449c);
__builtin_memmove((R+28),gp(0x8358f4),4);
}
B4e44a2:{NFSU2_TR(0x4e44a2);
w4(R+4,u32(0x850080ull));
}
B4e44a7:{NFSU2_TR(0x4e44a7);
s1(0x835912,u8(0x1ull));
}
B4e44ae:{NFSU2_TR(0x4e44ae);
s4(0x8358f0,u32(0x1ull));
}
B4e44b8:{NFSU2_TR(0x4e44b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e44bdull));
TAIL_STATIC(0x5031f0u,503);
}
B4e44bd:L4e44bd:{c.instructions+=3;NFSU2_TR(0x4e44bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e44be:{NFSU2_TR(0x4e44be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e44bf:{NFSU2_TR(0x4e44bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e44c4ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4e44c4:L4e44c4:{c.instructions+=7;NFSU2_TR(0x4e44c4);
__builtin_memmove((R+8),gp(0x83aab8),4);
}
B4e44ca:{NFSU2_TR(0x4e44ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e44cd:{NFSU2_TR(0x4e44cd);
u8 U[4];
w4(U+0,u32(0x759898cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e44d2:{NFSU2_TR(0x4e44d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e44d3:{NFSU2_TR(0x4e44d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1190ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e44d9:{NFSU2_TR(0x4e44d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118cull))));
w4(U+4,u32(0x8371b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e44e3:{NFSU2_TR(0x4e44e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e44e8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e44e8:L4e44e8:{c.instructions+=4;NFSU2_TR(0x4e44e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e44eb:{NFSU2_TR(0x4e44eb);
__builtin_memmove((R+4),(R+24),4);
}
B4e44ed:{NFSU2_TR(0x4e44ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e44f3:{NFSU2_TR(0x4e44f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e44f8ull));
TAIL_STATIC(0x4d1ce0u,4d1);
}
B4e44f8:L4e44f8:{c.instructions+=2;NFSU2_TR(0x4e44f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e44fa:{NFSU2_TR(0x4e44fa);
__builtin_memmove((R+12),(R+12),4);
}
B4e4500:L4e4500:{c.instructions+=8;NFSU2_TR(0x4e4500);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4503:{NFSU2_TR(0x4e4503);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4505:{NFSU2_TR(0x4e4505);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4508:{NFSU2_TR(0x4e4508);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e450d:{NFSU2_TR(0x4e450d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e450e:{NFSU2_TR(0x4e450e);
u8 U[4];
w4(U+0,u32(0x78febcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4513:{NFSU2_TR(0x4e4513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4516:{NFSU2_TR(0x4e4516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e451bull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4e451b:L4e451b:{c.instructions+=5;NFSU2_TR(0x4e451b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e451e:{NFSU2_TR(0x4e451e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4521:{NFSU2_TR(0x4e4521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4522:{NFSU2_TR(0x4e4522);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4523:{NFSU2_TR(0x4e4523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4528ull));
TAIL_STATIC(0x537c00u,537);
}
B4e4528:L4e4528:{c.instructions+=4;NFSU2_TR(0x4e4528);
__builtin_memmove((R+0),(R+28),4);
}
B4e452a:{NFSU2_TR(0x4e452a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e452d:{NFSU2_TR(0x4e452d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e4530:{NFSU2_TR(0x4e4530);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e4500u);}goto L4e4500;}}
}
B4e4532:L4e4532:{c.instructions+=3;NFSU2_TR(0x4e4532);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4e4537:{NFSU2_TR(0x4e4537);
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
B4e453a:{NFSU2_TR(0x4e453a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e4637;}}
}
B4e4540:L4e4540:{c.instructions+=1;NFSU2_TR(0x4e4540);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e49d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e4547:L4e4547:{c.instructions+=5;NFSU2_TR(0x4e4547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e454a:{NFSU2_TR(0x4e454a);
u8 U[4];
w4(U+0,u32(0x93fdee74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e454f:{NFSU2_TR(0x4e454f);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4554:{NFSU2_TR(0x4e4554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4555:{NFSU2_TR(0x4e4555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e455aull));
TAIL_STATIC(0x537a10u,537);
}
B4e455a:L4e455a:{c.instructions+=3;NFSU2_TR(0x4e455a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e455d:{NFSU2_TR(0x4e455d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e455e:{NFSU2_TR(0x4e455e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4563ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e4563:L4e4563:{c.instructions+=2;NFSU2_TR(0x4e4563);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4566:{NFSU2_TR(0x4e4566);
{goto L4e464d;}
}
B4e456b:L4e456b:{c.instructions+=5;NFSU2_TR(0x4e456b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e456e:{NFSU2_TR(0x4e456e);
u8 U[4];
w4(U+0,u32(0x613d3106ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4573:{NFSU2_TR(0x4e4573);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4578:{NFSU2_TR(0x4e4578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4579:{NFSU2_TR(0x4e4579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e457eull));
TAIL_STATIC(0x537a10u,537);
}
B4e457e:L4e457e:{c.instructions+=3;NFSU2_TR(0x4e457e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4581:{NFSU2_TR(0x4e4581);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4582:{NFSU2_TR(0x4e4582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4587ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e4587:L4e4587:{c.instructions+=2;NFSU2_TR(0x4e4587);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e458a:{NFSU2_TR(0x4e458a);
{goto L4e464d;}
}
B4e458f:L4e458f:{c.instructions+=5;NFSU2_TR(0x4e458f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4592:{NFSU2_TR(0x4e4592);
u8 U[4];
w4(U+0,u32(0xdcb9f861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4597:{NFSU2_TR(0x4e4597);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e459c:{NFSU2_TR(0x4e459c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e459d:{NFSU2_TR(0x4e459d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e45a2ull));
TAIL_STATIC(0x537a10u,537);
}
B4e45a2:L4e45a2:{c.instructions+=3;NFSU2_TR(0x4e45a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e45a5:{NFSU2_TR(0x4e45a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45a6:{NFSU2_TR(0x4e45a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e45abull));
TAIL_STATIC(0x50c900u,50c);
}
B4e45ab:L4e45ab:{c.instructions+=2;NFSU2_TR(0x4e45ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e45ae:{NFSU2_TR(0x4e45ae);
{goto L4e464d;}
}
B4e45b3:L4e45b3:{c.instructions+=5;NFSU2_TR(0x4e45b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e45b6:{NFSU2_TR(0x4e45b6);
u8 U[4];
w4(U+0,u32(0x35102edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45bb:{NFSU2_TR(0x4e45bb);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45c0:{NFSU2_TR(0x4e45c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45c1:{NFSU2_TR(0x4e45c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e45c6ull));
TAIL_STATIC(0x537a10u,537);
}
B4e45c6:L4e45c6:{c.instructions+=3;NFSU2_TR(0x4e45c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e45c9:{NFSU2_TR(0x4e45c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45ca:{NFSU2_TR(0x4e45ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e45cfull));
TAIL_STATIC(0x50c900u,50c);
}
B4e45cf:L4e45cf:{c.instructions+=2;NFSU2_TR(0x4e45cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e45d2:{NFSU2_TR(0x4e45d2);
{goto L4e464d;}
}
B4e45d4:L4e45d4:{c.instructions+=5;NFSU2_TR(0x4e45d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e45d7:{NFSU2_TR(0x4e45d7);
u8 U[4];
w4(U+0,u32(0xd7162cfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45dc:{NFSU2_TR(0x4e45dc);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45e1:{NFSU2_TR(0x4e45e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45e2:{NFSU2_TR(0x4e45e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e45e7ull));
TAIL_STATIC(0x537a10u,537);
}
B4e45e7:L4e45e7:{c.instructions+=3;NFSU2_TR(0x4e45e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e45ea:{NFSU2_TR(0x4e45ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45eb:{NFSU2_TR(0x4e45eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e45f0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e45f0:L4e45f0:{c.instructions+=2;NFSU2_TR(0x4e45f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e45f3:{NFSU2_TR(0x4e45f3);
{goto L4e464d;}
}
B4e45f5:L4e45f5:{c.instructions+=5;NFSU2_TR(0x4e45f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e45f8:{NFSU2_TR(0x4e45f8);
u8 U[4];
w4(U+0,u32(0x30da61e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e45fd:{NFSU2_TR(0x4e45fd);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4602:{NFSU2_TR(0x4e4602);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4603:{NFSU2_TR(0x4e4603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4608ull));
TAIL_STATIC(0x537a10u,537);
}
B4e4608:L4e4608:{c.instructions+=3;NFSU2_TR(0x4e4608);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e460b:{NFSU2_TR(0x4e460b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e460c:{NFSU2_TR(0x4e460c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4611ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e4611:L4e4611:{c.instructions+=2;NFSU2_TR(0x4e4611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4614:{NFSU2_TR(0x4e4614);
{goto L4e464d;}
}
B4e4616:L4e4616:{c.instructions+=5;NFSU2_TR(0x4e4616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4619:{NFSU2_TR(0x4e4619);
u8 U[4];
w4(U+0,u32(0x75f903f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e461e:{NFSU2_TR(0x4e461e);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4623:{NFSU2_TR(0x4e4623);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4624:{NFSU2_TR(0x4e4624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4629ull));
TAIL_STATIC(0x537a10u,537);
}
B4e4629:L4e4629:{c.instructions+=3;NFSU2_TR(0x4e4629);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e462c:{NFSU2_TR(0x4e462c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e462d:{NFSU2_TR(0x4e462d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4632ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e4632:L4e4632:{c.instructions+=2;NFSU2_TR(0x4e4632);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4635:{NFSU2_TR(0x4e4635);
{goto L4e464d;}
}
B4e4637:L4e4637:{c.instructions+=5;NFSU2_TR(0x4e4637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e463a:{NFSU2_TR(0x4e463a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e463f:{NFSU2_TR(0x4e463f);
u8 U[4];
w4(U+0,u32(0x23eae8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4644:{NFSU2_TR(0x4e4644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4645:{NFSU2_TR(0x4e4645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e464aull));
TAIL_STATIC(0x537b80u,537);
}
B4e464a:L4e464a:{c.instructions+=1;NFSU2_TR(0x4e464a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e464d:L4e464d:{c.instructions+=5;NFSU2_TR(0x4e464d);
w4(R+4,u32(m2(0x8500b8)));
}
B4e4654:{NFSU2_TR(0x4e4654);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e4657:{NFSU2_TR(0x4e4657);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4658:{NFSU2_TR(0x4e4658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4659:{NFSU2_TR(0x4e4659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e465eull));
TAIL_STATIC(0x516280u,516);
}
B4e465e:L4e465e:{c.instructions+=5;NFSU2_TR(0x4e465e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4661:{NFSU2_TR(0x4e4661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4662:{NFSU2_TR(0x4e4662);
u8 U[4];
w4(U+0,u32(0x566bf78aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4667:{NFSU2_TR(0x4e4667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4668:{NFSU2_TR(0x4e4668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e466dull));
TAIL_STATIC(0x537a10u,537);
}
B4e466d:L4e466d:{c.instructions+=3;NFSU2_TR(0x4e466d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4670:{NFSU2_TR(0x4e4670);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4671:{NFSU2_TR(0x4e4671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4676ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e4676:L4e4676:{c.instructions+=5;NFSU2_TR(0x4e4676);
__builtin_memmove((R+0),gp(0x8500bc),4);
}
B4e467b:{NFSU2_TR(0x4e467b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e467e:{NFSU2_TR(0x4e467e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4681:{NFSU2_TR(0x4e4681);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4683:{NFSU2_TR(0x4e4683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e468c;}}
}
B4e4685:L4e4685:{c.instructions+=2;NFSU2_TR(0x4e4685);
u8 U[4];
w4(U+0,u32(0x9e4c4648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e468a:{NFSU2_TR(0x4e468a);
{goto L4e4691;}
}
B4e468c:L4e468c:{c.instructions+=1;NFSU2_TR(0x4e468c);
u8 U[4];
w4(U+0,u32(0x22f254afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4691:L4e4691:{c.instructions+=2;NFSU2_TR(0x4e4691);
u8 U[4];
w4(U+0,u32(0x7978d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4696:{NFSU2_TR(0x4e4696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e469bull));
TAIL_STATIC(0x505450u,505);
}
B4e469b:L4e469b:{c.instructions+=3;NFSU2_TR(0x4e469b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e469c:{NFSU2_TR(0x4e469c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e469d:{NFSU2_TR(0x4e469d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e46a2ull));
TAIL_STATIC(0x537a10u,537);
}
B4e46a2:L4e46a2:{c.instructions+=3;NFSU2_TR(0x4e46a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e46a5:{NFSU2_TR(0x4e46a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46a6:{NFSU2_TR(0x4e46a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e46abull));
TAIL_STATIC(0x50c900u,50c);
}
B4e46ab:L4e46ab:{c.instructions+=4;NFSU2_TR(0x4e46ab);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4e46b0:{NFSU2_TR(0x4e46b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e46b3:{NFSU2_TR(0x4e46b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e46b6:{NFSU2_TR(0x4e46b6);
if(r1(R+518)){{goto L4e46e7;}}
}
B4e46b8:L4e46b8:{c.instructions+=2;NFSU2_TR(0x4e46b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e46bb:{NFSU2_TR(0x4e46bb);
if(r1(R+518)){{goto L4e46e7;}}
}
B4e46bd:L4e46bd:{c.instructions+=2;NFSU2_TR(0x4e46bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e46c0:{NFSU2_TR(0x4e46c0);
if(r1(R+518)){{goto L4e46e7;}}
}
B4e46c2:L4e46c2:{c.instructions+=2;NFSU2_TR(0x4e46c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e46c5:{NFSU2_TR(0x4e46c5);
if(r1(R+518)){{goto L4e46e7;}}
}
B4e46c7:L4e46c7:{c.instructions+=7;NFSU2_TR(0x4e46c7);
w4(R+8,u32(m2(0x8500ba)));
}
B4e46ce:{NFSU2_TR(0x4e46ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e46d1:{NFSU2_TR(0x4e46d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46d2:{NFSU2_TR(0x4e46d2);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46d7:{NFSU2_TR(0x4e46d7);
u8 U[4];
w4(U+0,u32(0x566bf78bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46dc:{NFSU2_TR(0x4e46dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46dd:{NFSU2_TR(0x4e46dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e46e2ull));
TAIL_STATIC(0x537b80u,537);
}
B4e46e2:L4e46e2:{c.instructions+=2;NFSU2_TR(0x4e46e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e46e5:{NFSU2_TR(0x4e46e5);
{goto L4e4706;}
}
B4e46e7:L4e46e7:{c.instructions+=5;NFSU2_TR(0x4e46e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e46ea:{NFSU2_TR(0x4e46ea);
u8 U[4];
w4(U+0,u32(0x7f2f7ad6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46ef:{NFSU2_TR(0x4e46ef);
u8 U[4];
w4(U+0,u32(0x566bf78bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46f4:{NFSU2_TR(0x4e46f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46f5:{NFSU2_TR(0x4e46f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e46faull));
TAIL_STATIC(0x537a10u,537);
}
B4e46fa:L4e46fa:{c.instructions+=3;NFSU2_TR(0x4e46fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e46fd:{NFSU2_TR(0x4e46fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e46fe:{NFSU2_TR(0x4e46fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4703ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e4703:L4e4703:{c.instructions+=1;NFSU2_TR(0x4e4703);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4706:L4e4706:{c.instructions+=4;NFSU2_TR(0x4e4706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4709:{NFSU2_TR(0x4e4709);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e470e:{NFSU2_TR(0x4e470e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e470f:{NFSU2_TR(0x4e470f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4714ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4e4714:L4e4714:{c.instructions+=5;NFSU2_TR(0x4e4714);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4717:{NFSU2_TR(0x4e4717);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4719:{NFSU2_TR(0x4e4719);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e471a:{NFSU2_TR(0x4e471a);
__builtin_memmove((R+4),(R+24),4);
}
B4e471c:{NFSU2_TR(0x4e471c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4721ull));
TAIL_STATIC(0x4d1ea0u,4d1);
}
B4e4721:L4e4721:{c.instructions+=4;NFSU2_TR(0x4e4721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4727:{NFSU2_TR(0x4e4727);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4728:{NFSU2_TR(0x4e4728);
u8 U[4];
w4(U+0,u32(0x4d2760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e472d:{NFSU2_TR(0x4e472d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4732ull));
TAIL_STATIC(0x58a790u,58a);
}
B4e4732:L4e4732:{c.instructions+=2;NFSU2_TR(0x4e4732);
u8 U[8];
__builtin_memmove((U+0),gp(0x850084),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4738:{NFSU2_TR(0x4e4738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e47fb;}}
}
B4e473e:L4e473e:{c.instructions+=4;NFSU2_TR(0x4e473e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e4741:{NFSU2_TR(0x4e4741);
u8 U[4];
w4(U+0,u32(0xcc6c959full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4746:{NFSU2_TR(0x4e4746);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1180ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e474c:{NFSU2_TR(0x4e474c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4751ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e4751:L4e4751:{c.instructions+=4;NFSU2_TR(0x4e4751);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4752:{NFSU2_TR(0x4e4752);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4757:{NFSU2_TR(0x4e4757);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4758:{NFSU2_TR(0x4e4758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e475dull));
TAIL_STATIC(0x558310u,558);
}
B4e475d:L4e475d:{c.instructions+=5;NFSU2_TR(0x4e475d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4763:{NFSU2_TR(0x4e4763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4769:{NFSU2_TR(0x4e4769);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e476c:{NFSU2_TR(0x4e476c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e476f:{NFSU2_TR(0x4e476f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4774ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4e4774:L4e4774:{c.instructions+=10;NFSU2_TR(0x4e4774);
w1(R+8,u8(0x3ull));
}
B4e4776:{NFSU2_TR(0x4e4776);
w1(R+8,u8(u32(r1(R+8))-u32(r1(R+0))));
}
B4e4778:{NFSU2_TR(0x4e4778);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4779:{NFSU2_TR(0x4e4779);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e477c:{NFSU2_TR(0x4e477c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e477f:{NFSU2_TR(0x4e477f);
u8 U[4];
w4(U+0,u32(0x49f780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4784:{NFSU2_TR(0x4e4784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4785:{NFSU2_TR(0x4e4785);
u8 U[4];
w4(U+0,u32(0x850080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e478a:{NFSU2_TR(0x4e478a);
w4(R+4,u32(0x850080ull));
}
B4e478f:{NFSU2_TR(0x4e478f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4794ull));
TAIL_STATIC(0x5031f0u,503);
}
B4e4794:L4e4794:{c.instructions+=3;NFSU2_TR(0x4e4794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e479a:{NFSU2_TR(0x4e479a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e479b:{NFSU2_TR(0x4e479b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e47a0ull));
TAIL_STATIC(0x58d340u,58d);
}
B4e47a0:L4e47a0:{c.instructions+=2;NFSU2_TR(0x4e47a0);
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
B4e47a2:{NFSU2_TR(0x4e47a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e47b7;}}
}
B4e47a4:L4e47a4:{c.instructions+=3;NFSU2_TR(0x4e47a4);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47a6:{NFSU2_TR(0x4e47a6);
w4(R+4,u32(0x850080ull));
}
B4e47ab:{NFSU2_TR(0x4e47ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e47b0ull));
TAIL_STATIC(0x5031b0u,503);
}
B4e47b0:L4e47b0:{c.instructions+=2;NFSU2_TR(0x4e47b0);
u8 U[4];
w4(U+0,u32(0x9a9f1336ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47b5:{NFSU2_TR(0x4e47b5);
{goto L4e4807;}
}
B4e47b7:L4e47b7:{c.instructions+=3;NFSU2_TR(0x4e47b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e47bd:{NFSU2_TR(0x4e47bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47be:{NFSU2_TR(0x4e47be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e47c3ull));
TAIL_STATIC(0x540a60u,540);
}
B4e47c3:L4e47c3:{c.instructions+=4;NFSU2_TR(0x4e47c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e47c6:{NFSU2_TR(0x4e47c6);
u8 U[4];
w4(U+0,u32(0xab13cae4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47cb:{NFSU2_TR(0x4e47cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e47d1:{NFSU2_TR(0x4e47d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e47d6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e47d6:L4e47d6:{c.instructions+=7;NFSU2_TR(0x4e47d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47d7:{NFSU2_TR(0x4e47d7);
u8 U[4];
w4(U+0,u32(0x87f32b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47dc:{NFSU2_TR(0x4e47dc);
u8 U[4];
w4(U+0,u32(0x87f32b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47e1:{NFSU2_TR(0x4e47e1);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47e6:{NFSU2_TR(0x4e47e6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47eb:{NFSU2_TR(0x4e47eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47ec:{NFSU2_TR(0x4e47ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e47f1ull));
TAIL_STATIC(0x558540u,558);
}
B4e47f1:L4e47f1:{c.instructions+=3;NFSU2_TR(0x4e47f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e47f4:{NFSU2_TR(0x4e47f4);
u8 U[4];
w4(U+0,u32(0x9a9f1336ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e47f9:{NFSU2_TR(0x4e47f9);
{goto L4e4807;}
}
B4e47fb:L4e47fb:{c.instructions+=2;NFSU2_TR(0x4e47fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1180ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4802:{NFSU2_TR(0x4e4802);
u8 U[4];
w4(U+0,u32(0xfc00d963ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4807:L4e4807:{c.instructions+=4;NFSU2_TR(0x4e4807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e480a:{NFSU2_TR(0x4e480a);
u8 U[4];
w4(U+0,u32(0xba9ba7e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e480f:{NFSU2_TR(0x4e480f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4810:{NFSU2_TR(0x4e4810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4815ull));
TAIL_STATIC(0x537a10u,537);
}
B4e4815:L4e4815:{c.instructions+=3;NFSU2_TR(0x4e4815);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4818:{NFSU2_TR(0x4e4818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4819:{NFSU2_TR(0x4e4819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e481eull));
TAIL_STATIC(0x50c900u,50c);
}
B4e481e:L4e481e:{c.instructions+=6;NFSU2_TR(0x4e481e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4824:{NFSU2_TR(0x4e4824);
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
B4e4827:{NFSU2_TR(0x4e4827);
u8 U[4];
w4(U+0,u32(0x4bc110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e482c:{NFSU2_TR(0x4e482c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e4832:{NFSU2_TR(0x4e4832);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4833:{NFSU2_TR(0x4e4833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4838ull));
TAIL_STATIC(0x582860u,582);
}
B4e4838:L4e4838:{c.instructions+=5;NFSU2_TR(0x4e4838);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e483b:{NFSU2_TR(0x4e483b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4840:{NFSU2_TR(0x4e4840);
u8 U[4];
w4(U+0,u32(0x4162454cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4845:{NFSU2_TR(0x4e4845);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4846:{NFSU2_TR(0x4e4846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e484bull));
TAIL_STATIC(0x537b80u,537);
}
B4e484b:L4e484b:{c.instructions+=4;NFSU2_TR(0x4e484b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e484e:{NFSU2_TR(0x4e484e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e484f:{NFSU2_TR(0x4e484f);
__builtin_memmove((R+4),(R+24),4);
}
B4e4851:{NFSU2_TR(0x4e4851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4856ull));
TAIL_STATIC(0x49efe0u,49e);
}
B4e4856:L4e4856:{c.instructions+=4;NFSU2_TR(0x4e4856);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4859:{NFSU2_TR(0x4e4859);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e485e:{NFSU2_TR(0x4e485e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e485f:{NFSU2_TR(0x4e485f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4864ull));
TAIL_STATIC(0x537950u,537);
}
B4e4864:L4e4864:{c.instructions+=4;NFSU2_TR(0x4e4864);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e486a:{NFSU2_TR(0x4e486a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e486d:{NFSU2_TR(0x4e486d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4e486f:{NFSU2_TR(0x4e486f);
if(r1(R+518)){{goto L4e48ac;}}
}
B4e4871:L4e4871:{c.instructions+=7;NFSU2_TR(0x4e4871);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4873:{NFSU2_TR(0x4e4873);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4878:{NFSU2_TR(0x4e4878);
s4(0x836384,u32(0x1ull));
}
B4e4882:{NFSU2_TR(0x4e4882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4885:{NFSU2_TR(0x4e4885);
u8 U[4];
w4(U+0,u32(0x794d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e488a:{NFSU2_TR(0x4e488a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e488b:{NFSU2_TR(0x4e488b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4890ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e4890:L4e4890:{c.instructions+=7;NFSU2_TR(0x4e4890);
__builtin_memmove((R+8),gp(0x7f44b8),4);
}
B4e4896:{NFSU2_TR(0x4e4896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4899:{NFSU2_TR(0x4e4899);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e489b:{NFSU2_TR(0x4e489b);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48a0:{NFSU2_TR(0x4e48a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48a1:{NFSU2_TR(0x4e48a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48a2:{NFSU2_TR(0x4e48a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48a7ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e48a7:L4e48a7:{c.instructions+=2;NFSU2_TR(0x4e48a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e48aa:{NFSU2_TR(0x4e48aa);
{goto L4e48b2;}
}
B4e48ac:L4e48ac:{c.instructions+=1;NFSU2_TR(0x4e48ac);
__builtin_memmove(gp(0x836384),(R+12),4);
}
B4e48b2:L4e48b2:{c.instructions+=1;NFSU2_TR(0x4e48b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48b7ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4e48b7:L4e48b7:{c.instructions+=3;NFSU2_TR(0x4e48b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48b8:{NFSU2_TR(0x4e48b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e48bb:{NFSU2_TR(0x4e48bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48c0ull));
TAIL_STATIC(0x43be80u,43b);
}
B4e48c0:L4e48c0:{c.instructions+=3;NFSU2_TR(0x4e48c0);
__builtin_memmove((R+28),(R+0),4);
}
B4e48c2:{NFSU2_TR(0x4e48c2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B4e48c3:{NFSU2_TR(0x4e48c3);
if(r1(R+519)){{goto L4e48eb;}}
}
B4e48c5:L4e48c5:{c.instructions+=2;NFSU2_TR(0x4e48c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48c6:{NFSU2_TR(0x4e48c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48cbull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4e48cb:L4e48cb:{c.instructions+=2;NFSU2_TR(0x4e48cb);
__builtin_memmove((R+4),(R+0),4);
}
B4e48cd:{NFSU2_TR(0x4e48cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48d2ull));
TAIL_STATIC(0x5847f0u,584);
}
B4e48d2:L4e48d2:{c.instructions+=6;NFSU2_TR(0x4e48d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e48d5:{NFSU2_TR(0x4e48d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48d7:{NFSU2_TR(0x4e48d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48d8:{NFSU2_TR(0x4e48d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4e48db:{NFSU2_TR(0x4e48db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48dc:{NFSU2_TR(0x4e48dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48e1ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4e48e1:L4e48e1:{c.instructions+=2;NFSU2_TR(0x4e48e1);
__builtin_memmove((R+4),(R+0),4);
}
B4e48e3:{NFSU2_TR(0x4e48e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48e8ull));
TAIL_STATIC(0x58d150u,58d);
}
B4e48e8:L4e48e8:{c.instructions+=2;NFSU2_TR(0x4e48e8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B4e48e9:{NFSU2_TR(0x4e48e9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e48c5u);}goto L4e48c5;}}
}
B4e48eb:L4e48eb:{c.instructions+=2;NFSU2_TR(0x4e48eb);
u8 U[8];
__builtin_memmove((U+0),gp(0x836378),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e48f2:{NFSU2_TR(0x4e48f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e4918;}}
}
B4e48f4:L4e48f4:{c.instructions+=2;NFSU2_TR(0x4e48f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e48f5:{NFSU2_TR(0x4e48f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e48faull));
TAIL_STATIC(0x582b60u,582);
}
B4e48fa:L4e48fa:{c.instructions+=2;NFSU2_TR(0x4e48fa);
__builtin_memmove((R+4),(R+0),4);
}
B4e48fc:{NFSU2_TR(0x4e48fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4901ull));
TAIL_STATIC(0x502770u,502);
}
B4e4901:L4e4901:{c.instructions+=2;NFSU2_TR(0x4e4901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4902:{NFSU2_TR(0x4e4902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4907ull));
TAIL_STATIC(0x73e380u,73e);
}
B4e4907:L4e4907:{c.instructions+=3;NFSU2_TR(0x4e4907);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4908:{NFSU2_TR(0x4e4908);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e490a:{NFSU2_TR(0x4e490a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e490full));
TAIL_STATIC(0x50cee0u,50c);
}
B4e490f:L4e490f:{c.instructions+=2;NFSU2_TR(0x4e490f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e4912:{NFSU2_TR(0x4e4912);
__builtin_memmove(gp(0x836378),(R+12),4);
}
B4e4918:L4e4918:{c.instructions+=3;NFSU2_TR(0x4e4918);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4919:{NFSU2_TR(0x4e4919);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e491b:{NFSU2_TR(0x4e491b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4920ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4e4920:L4e4920:{c.instructions+=3;NFSU2_TR(0x4e4920);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4921:{NFSU2_TR(0x4e4921);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4926:{NFSU2_TR(0x4e4926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e492bull));
TAIL_STATIC(0x55dde0u,55d);
}
B4e492b:L4e492b:{c.instructions+=4;NFSU2_TR(0x4e492b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e4931:{NFSU2_TR(0x4e4931);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e4933:{NFSU2_TR(0x4e4933);
w4(R+4,u32(0x1full));
}
B4e4938:{NFSU2_TR(0x4e4938);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6dull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e493e:L4e493e:{c.instructions+=1;NFSU2_TR(0x4e493e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e4940;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e493eu);}goto L4e493e;}
}
B4e4940:L4e4940:{c.instructions+=6;NFSU2_TR(0x4e4940);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e4943:{NFSU2_TR(0x4e4943);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4e4945:{NFSU2_TR(0x4e4945);
u8 U[4];
w4(U+0,u32(0x794d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e494a:{NFSU2_TR(0x4e494a);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e494f:{NFSU2_TR(0x4e494f);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4e4950:{NFSU2_TR(0x4e4950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4955ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e4955:L4e4955:{c.instructions+=6;NFSU2_TR(0x4e4955);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4958:{NFSU2_TR(0x4e4958);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4959:{NFSU2_TR(0x4e4959);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4e495f:{NFSU2_TR(0x4e495f);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4964:{NFSU2_TR(0x4e4964);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4965:{NFSU2_TR(0x4e4965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e496aull));
TAIL_STATIC(0x50c960u,50c);
}
B4e496a:L4e496a:{c.instructions+=1;NFSU2_TR(0x4e496a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e496full));
TAIL_STATIC(0x582b60u,582);
}
B4e496f:L4e496f:{c.instructions+=8;NFSU2_TR(0x4e496f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4975:{NFSU2_TR(0x4e4975);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4976:{NFSU2_TR(0x4e4976);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e497c:{NFSU2_TR(0x4e497c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e497d:{NFSU2_TR(0x4e497d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e497e:{NFSU2_TR(0x4e497e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4980:{NFSU2_TR(0x4e4980);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4981:{NFSU2_TR(0x4e4981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4986ull));
TAIL_STATIC(0x73f180u,73f);
}
B4e4986:L4e4986:{c.instructions+=5;NFSU2_TR(0x4e4986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e4989:{NFSU2_TR(0x4e4989);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e498c:{NFSU2_TR(0x4e498c);
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
B4e498f:{NFSU2_TR(0x4e498f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4990:{NFSU2_TR(0x4e4990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4995ull));
TAIL_STATIC(0x504820u,504);
}
B4e4995:L4e4995:{c.instructions+=7;NFSU2_TR(0x4e4995);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4998:{NFSU2_TR(0x4e4998);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e499e:{NFSU2_TR(0x4e499e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e49a3:{NFSU2_TR(0x4e49a3);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e49a8:{NFSU2_TR(0x4e49a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e49b2:{NFSU2_TR(0x4e49b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e49b9:{NFSU2_TR(0x4e49b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e49beull));
TAIL_STATIC(0x537950u,537);
}
B4e49be:L4e49be:{c.instructions+=10;NFSU2_TR(0x4e49be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e49c1:{NFSU2_TR(0x4e49c1);
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
B4e49c4:{NFSU2_TR(0x4e49c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e49c5:{NFSU2_TR(0x4e49c5);
__builtin_memmove((R+0),(R+24),4);
}
B4e49c7:{NFSU2_TR(0x4e49c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e49c8:{NFSU2_TR(0x4e49c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e49c9:{NFSU2_TR(0x4e49c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e49d0:{NFSU2_TR(0x4e49d0);
__builtin_memmove((R+16),(R+20),4);
}
B4e49d2:{NFSU2_TR(0x4e49d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e49d3:{NFSU2_TR(0x4e49d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4a10:L4e4a10:{c.instructions+=3;NFSU2_TR(0x4e4a10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a11:{NFSU2_TR(0x4e4a11);
__builtin_memmove((R+24),(R+4),4);
}
B4e4a13:{NFSU2_TR(0x4e4a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a18ull));
TAIL_STATIC(0x4d1a60u,4d1);
}
B4e4a18:L4e4a18:{c.instructions+=2;NFSU2_TR(0x4e4a18);
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
B4e4a1d:{NFSU2_TR(0x4e4a1d);
if(r1(R+518)){{goto L4e4a28;}}
}
B4e4a1f:L4e4a1f:{c.instructions+=2;NFSU2_TR(0x4e4a1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a20:{NFSU2_TR(0x4e4a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a25ull));
TAIL_STATIC(0x575630u,575);
}
B4e4a25:L4e4a25:{c.instructions+=1;NFSU2_TR(0x4e4a25);
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
B4e4a28:L4e4a28:{c.instructions+=3;NFSU2_TR(0x4e4a28);
__builtin_memmove((R+0),(R+24),4);
}
B4e4a2a:{NFSU2_TR(0x4e4a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4a2b:{NFSU2_TR(0x4e4a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4a30:L4e4a30:{c.instructions+=11;NFSU2_TR(0x4e4a30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a31:{NFSU2_TR(0x4e4a31);
__builtin_memmove((R+20),(R+16),4);
}
B4e4a33:{NFSU2_TR(0x4e4a33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4e4a36:{NFSU2_TR(0x4e4a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10cull))));
}
B4e4a3c:{NFSU2_TR(0x4e4a3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a3d:{NFSU2_TR(0x4e4a3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a3e:{NFSU2_TR(0x4e4a3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a3f:{NFSU2_TR(0x4e4a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e4a42:{NFSU2_TR(0x4e4a42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x87f32b2aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4a48:{NFSU2_TR(0x4e4a48);
__builtin_memmove((R+24),(R+4),4);
}
B4e4a4a:{NFSU2_TR(0x4e4a4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e4b54;}}
}
B4e4a50:L4e4a50:{c.instructions+=3;NFSU2_TR(0x4e4a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4a53:{NFSU2_TR(0x4e4a53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a54:{NFSU2_TR(0x4e4a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a59ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4e4a59:L4e4a59:{c.instructions+=2;NFSU2_TR(0x4e4a59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a5a:{NFSU2_TR(0x4e4a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a5full));
TAIL_STATIC(0x537da0u,537);
}
B4e4a5f:L4e4a5f:{c.instructions+=4;NFSU2_TR(0x4e4a5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e4a65:{NFSU2_TR(0x4e4a65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4a68:{NFSU2_TR(0x4e4a68);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e4a6a:{NFSU2_TR(0x4e4a6a);
if(r1(R+518)){{goto L4e4aa7;}}
}
B4e4a6c:L4e4a6c:{c.instructions+=2;NFSU2_TR(0x4e4a6c);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4a76:{NFSU2_TR(0x4e4a76);
if(r1(R+518)){{goto L4e4aa7;}}
}
B4e4a78:L4e4a78:{c.instructions+=1;NFSU2_TR(0x4e4a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a7dull));
TAIL_STATIC(0x582b60u,582);
}
B4e4a7d:L4e4a7d:{c.instructions+=5;NFSU2_TR(0x4e4a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4a83:{NFSU2_TR(0x4e4a83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a85:{NFSU2_TR(0x4e4a85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a87:{NFSU2_TR(0x4e4a87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a88:{NFSU2_TR(0x4e4a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a8dull));
TAIL_STATIC(0x73fc10u,73f);
}
B4e4a8d:L4e4a8d:{c.instructions+=3;NFSU2_TR(0x4e4a8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e4a90:{NFSU2_TR(0x4e4a90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a92:{NFSU2_TR(0x4e4a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a97ull));
TAIL_STATIC(0x582b60u,582);
}
B4e4a97:L4e4a97:{c.instructions+=2;NFSU2_TR(0x4e4a97);
__builtin_memmove((R+4),(R+0),4);
}
B4e4a99:{NFSU2_TR(0x4e4a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4a9eull));
TAIL_STATIC(0x502770u,502);
}
B4e4a9e:L4e4a9e:{c.instructions+=2;NFSU2_TR(0x4e4a9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4a9f:{NFSU2_TR(0x4e4a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4aa4ull));
TAIL_STATIC(0x73e300u,73e);
}
B4e4aa4:L4e4aa4:{c.instructions+=1;NFSU2_TR(0x4e4aa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4aa7:L4e4aa7:{c.instructions+=2;NFSU2_TR(0x4e4aa7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4aa9:{NFSU2_TR(0x4e4aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4aaeull));
TAIL_STATIC(0x58f740u,58f);
}
B4e4aae:L4e4aae:{c.instructions+=3;NFSU2_TR(0x4e4aae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4ab1:{NFSU2_TR(0x4e4ab1);
__builtin_memmove((R+4),(R+0),4);
}
B4e4ab3:{NFSU2_TR(0x4e4ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4ab8ull));
TAIL_STATIC(0x582930u,582);
}
B4e4ab8:L4e4ab8:{c.instructions+=2;NFSU2_TR(0x4e4ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e4aba:{NFSU2_TR(0x4e4aba);
if(r1(R+518)){{goto L4e4acc;}}
}
B4e4abc:L4e4abc:{c.instructions+=2;NFSU2_TR(0x4e4abc);
__builtin_memmove((R+4),(R+24),4);
}
B4e4abe:{NFSU2_TR(0x4e4abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4ac3ull));
TAIL_STATIC(0x4bb930u,4bb);
}
B4e4ac3:L4e4ac3:{c.instructions+=6;NFSU2_TR(0x4e4ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4ac4:{NFSU2_TR(0x4e4ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4ac5:{NFSU2_TR(0x4e4ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4ac6:{NFSU2_TR(0x4e4ac6);
__builtin_memmove((R+16),(R+20),4);
}
B4e4ac8:{NFSU2_TR(0x4e4ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4ac9:{NFSU2_TR(0x4e4ac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4acc:L4e4acc:{c.instructions+=4;NFSU2_TR(0x4e4acc);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4ad1:{NFSU2_TR(0x4e4ad1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e4ad3:{NFSU2_TR(0x4e4ad3);
w4(R+4,u32(0x1full));
}
B4e4ad8:{NFSU2_TR(0x4e4ad8);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4adc:L4e4adc:{c.instructions+=1;NFSU2_TR(0x4e4adc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e4ade;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e4adcu);}goto L4e4adc;}
}
B4e4ade:L4e4ade:{c.instructions+=5;NFSU2_TR(0x4e4ade);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4e4ae0:{NFSU2_TR(0x4e4ae0);
u8 U[4];
w4(U+0,u32(0x794d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ae5:{NFSU2_TR(0x4e4ae5);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4aea:{NFSU2_TR(0x4e4aea);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4e4aeb:{NFSU2_TR(0x4e4aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4af0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e4af0:L4e4af0:{c.instructions+=6;NFSU2_TR(0x4e4af0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4af3:{NFSU2_TR(0x4e4af3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4af4:{NFSU2_TR(0x4e4af4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4af8:{NFSU2_TR(0x4e4af8);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4afd:{NFSU2_TR(0x4e4afd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4afe:{NFSU2_TR(0x4e4afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4b03ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e4b03:L4e4b03:{c.instructions+=1;NFSU2_TR(0x4e4b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4b08ull));
TAIL_STATIC(0x582b60u,582);
}
B4e4b08:L4e4b08:{c.instructions+=8;NFSU2_TR(0x4e4b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4b0e:{NFSU2_TR(0x4e4b0e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b10:{NFSU2_TR(0x4e4b10);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e4b14:{NFSU2_TR(0x4e4b14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b15:{NFSU2_TR(0x4e4b15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b17:{NFSU2_TR(0x4e4b17);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b19:{NFSU2_TR(0x4e4b19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b1a:{NFSU2_TR(0x4e4b1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4b1full));
TAIL_STATIC(0x73f180u,73f);
}
B4e4b1f:L4e4b1f:{c.instructions+=4;NFSU2_TR(0x4e4b1f);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B4e4b24:{NFSU2_TR(0x4e4b24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e4b27:{NFSU2_TR(0x4e4b27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4b2a:{NFSU2_TR(0x4e4b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e4b38;}}
}
B4e4b2c:L4e4b2c:{c.instructions+=3;NFSU2_TR(0x4e4b2c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b2e:{NFSU2_TR(0x4e4b2e);
w4(R+4,u32(0x89cf48ull));
}
B4e4b33:{NFSU2_TR(0x4e4b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4b38ull));
TAIL_STATIC(0x5fe2b0u,5fe);
}
B4e4b38:L4e4b38:{c.instructions+=5;NFSU2_TR(0x4e4b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4b3b:{NFSU2_TR(0x4e4b3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b3d:{NFSU2_TR(0x4e4b3d);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b42:{NFSU2_TR(0x4e4b42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4b43:{NFSU2_TR(0x4e4b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4b48ull));
TAIL_STATIC(0x537980u,537);
}
B4e4b48:L4e4b48:{c.instructions+=7;NFSU2_TR(0x4e4b48);
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
B4e4b4b:{NFSU2_TR(0x4e4b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4b4c:{NFSU2_TR(0x4e4b4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4b4d:{NFSU2_TR(0x4e4b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4b4e:{NFSU2_TR(0x4e4b4e);
__builtin_memmove((R+16),(R+20),4);
}
B4e4b50:{NFSU2_TR(0x4e4b50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4b51:{NFSU2_TR(0x4e4b51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4b54:L4e4b54:{c.instructions+=3;NFSU2_TR(0x4e4b54);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e4b5a:{NFSU2_TR(0x4e4b5a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e4b5c:{NFSU2_TR(0x4e4b5c);
if(r1(R+518)){{goto L4e4c5b;}}
}
B4e4b62:L4e4b62:{c.instructions+=2;NFSU2_TR(0x4e4b62);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x97c1b72full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x97c1b72full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4b68:{NFSU2_TR(0x4e4b68);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e4bce;}}
}
B4e4b6a:L4e4b6a:{c.instructions+=1;NFSU2_TR(0x4e4b6a);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4b70:L4e4b70:{c.instructions+=2;NFSU2_TR(0x4e4b70);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x37c873afull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x37c873afull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4b76:{NFSU2_TR(0x4e4b76);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e4bb5;}}
}
B4e4b78:L4e4b78:{c.instructions+=1;NFSU2_TR(0x4e4b78);
if(r1(R+518)){TAIL_STATIC(0x4e5280u,4e5);}
}
B4e4b7e:L4e4b7e:{c.instructions+=2;NFSU2_TR(0x4e4b7e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4b81:{NFSU2_TR(0x4e4b81);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e4ba4;}}
}
B4e4b83:L4e4b83:{c.instructions+=1;NFSU2_TR(0x4e4b83);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4b89:L4e4b89:{c.instructions+=2;NFSU2_TR(0x4e4b89);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4e4b8c:{NFSU2_TR(0x4e4b8c);
if(r1(R+512)){TAIL_STATIC(0x4e5cd9u,4e5);}
}
B4e4b92:L4e4b92:{c.instructions+=2;NFSU2_TR(0x4e4b92);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4e4b95:{NFSU2_TR(0x4e4b95);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4e4c28;}}
}
B4e4b9b:L4e4b9b:{c.instructions+=6;NFSU2_TR(0x4e4b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4b9c:{NFSU2_TR(0x4e4b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4b9d:{NFSU2_TR(0x4e4b9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4b9e:{NFSU2_TR(0x4e4b9e);
__builtin_memmove((R+16),(R+20),4);
}
B4e4ba0:{NFSU2_TR(0x4e4ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4ba1:{NFSU2_TR(0x4e4ba1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4ba4:L4e4ba4:{c.instructions+=2;NFSU2_TR(0x4e4ba4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x153e234ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x153e234ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x153e234ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e4baa:{NFSU2_TR(0x4e4baa);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4bac:L4e4bac:{c.instructions+=6;NFSU2_TR(0x4e4bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4bad:{NFSU2_TR(0x4e4bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4bae:{NFSU2_TR(0x4e4bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4baf:{NFSU2_TR(0x4e4baf);
__builtin_memmove((R+16),(R+20),4);
}
B4e4bb1:{NFSU2_TR(0x4e4bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4bb2:{NFSU2_TR(0x4e4bb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4bb5:L4e4bb5:{c.instructions+=2;NFSU2_TR(0x4e4bb5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x427304a6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4bbb:{NFSU2_TR(0x4e4bbb);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4bbd:L4e4bbd:{c.instructions+=2;NFSU2_TR(0x4e4bbd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x67bfa959ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x67bfa959ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x67bfa959ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e4bc3:{NFSU2_TR(0x4e4bc3);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4bc5:L4e4bc5:{c.instructions+=6;NFSU2_TR(0x4e4bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4bc6:{NFSU2_TR(0x4e4bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4bc7:{NFSU2_TR(0x4e4bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4bc8:{NFSU2_TR(0x4e4bc8);
__builtin_memmove((R+16),(R+20),4);
}
B4e4bca:{NFSU2_TR(0x4e4bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4bcb:{NFSU2_TR(0x4e4bcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4bce:L4e4bce:{c.instructions+=2;NFSU2_TR(0x4e4bce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xda5b8712ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4bd4:{NFSU2_TR(0x4e4bd4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e4c14;}}
}
B4e4bd6:L4e4bd6:{c.instructions+=1;NFSU2_TR(0x4e4bd6);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4bd8:L4e4bd8:{c.instructions+=2;NFSU2_TR(0x4e4bd8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4bde:{NFSU2_TR(0x4e4bde);
if(r1(R+518)){{goto L4e4bf1;}}
}
B4e4be0:L4e4be0:{c.instructions+=2;NFSU2_TR(0x4e4be0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc9d30688ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc9d30688ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc9d30688ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e4be6:{NFSU2_TR(0x4e4be6);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4be8:L4e4be8:{c.instructions+=6;NFSU2_TR(0x4e4be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4be9:{NFSU2_TR(0x4e4be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4bea:{NFSU2_TR(0x4e4bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4beb:{NFSU2_TR(0x4e4beb);
__builtin_memmove((R+16),(R+20),4);
}
B4e4bed:{NFSU2_TR(0x4e4bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4bee:{NFSU2_TR(0x4e4bee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4bf1:L4e4bf1:{c.instructions+=3;NFSU2_TR(0x4e4bf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1199ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e4bf7:{NFSU2_TR(0x4e4bf7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e4bf9:{NFSU2_TR(0x4e4bf9);
if(r1(R+518)){TAIL_STATIC(0x4e58cfu,4e5);}
}
B4e4bff:L4e4bff:{c.instructions+=3;NFSU2_TR(0x4e4bff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4c01:{NFSU2_TR(0x4e4c01);
__builtin_memmove((R+4),(R+24),4);
}
B4e4c03:{NFSU2_TR(0x4e4c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4c08ull));
TAIL_STATIC(0x49efe0u,49e);
}
B4e4c08:L4e4c08:{c.instructions+=2;NFSU2_TR(0x4e4c08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1199ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4c0f:{NFSU2_TR(0x4e4c0f);
TAIL_STATIC(0x4e58cfu,4e5);
}
B4e4c14:L4e4c14:{c.instructions+=2;NFSU2_TR(0x4e4c14);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf9e94d58ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4c1a:{NFSU2_TR(0x4e4c1a);
if(r1(R+518)){{goto L4e4c28;}}
}
B4e4c1c:L4e4c1c:{c.instructions+=2;NFSU2_TR(0x4e4c1c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfa94652cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfa94652cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfa94652cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e4c22:{NFSU2_TR(0x4e4c22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e5cd9u,4e5);}
}
B4e4c28:L4e4c28:{c.instructions+=2;NFSU2_TR(0x4e4c28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4c2a:{NFSU2_TR(0x4e4c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4c2full));
TAIL_STATIC(0x58f740u,58f);
}
B4e4c2f:L4e4c2f:{c.instructions+=3;NFSU2_TR(0x4e4c2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4c32:{NFSU2_TR(0x4e4c32);
__builtin_memmove((R+4),(R+0),4);
}
B4e4c34:{NFSU2_TR(0x4e4c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4c39ull));
TAIL_STATIC(0x582930u,582);
}
B4e4c39:L4e4c39:{c.instructions+=2;NFSU2_TR(0x4e4c39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e4c3b:{NFSU2_TR(0x4e4c3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e4c50;}}
}
B4e4c3d:L4e4c3d:{c.instructions+=4;NFSU2_TR(0x4e4c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4c40:{NFSU2_TR(0x4e4c40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4c41:{NFSU2_TR(0x4e4c41);
u8 U[4];
w4(U+0,u32(0x87f32b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4c46:{NFSU2_TR(0x4e4c46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4c4bull));
TAIL_STATIC(0x51ce60u,51c);
}
B4e4c4b:L4e4c4b:{c.instructions+=2;NFSU2_TR(0x4e4c4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4c4e:{NFSU2_TR(0x4e4c4e);
{goto L4e4c5b;}
}
B4e4c50:L4e4c50:{c.instructions+=4;NFSU2_TR(0x4e4c50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4c52:{NFSU2_TR(0x4e4c52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4c54:{NFSU2_TR(0x4e4c54);
__builtin_memmove((R+4),(R+24),4);
}
B4e4c56:{NFSU2_TR(0x4e4c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4c5bull));
TAIL_STATIC(0x4d1ea0u,4d1);
}
B4e4c5b:L4e4c5b:{c.instructions+=2;NFSU2_TR(0x4e4c5b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x153e234ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e4c61:{NFSU2_TR(0x4e4c61);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e5170u,4e5);}
}
B4e4c67:L4e4c67:{c.instructions+=1;NFSU2_TR(0x4e4c67);
if(r1(R+518)){TAIL_STATIC(0x4e501au,4e5);}
}
B4e4c6d:L4e4c6d:{c.instructions+=3;NFSU2_TR(0x4e4c6d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
}
B4e4c70:{NFSU2_TR(0x4e4c70);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4e4c73:{NFSU2_TR(0x4e4c73);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e5cd9u,4e5);}
}
B4e4c79:L4e4c79:{c.instructions+=1;NFSU2_TR(0x4e4c79);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e5ce4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e4c80:L4e4c80:{c.instructions+=5;NFSU2_TR(0x4e4c80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4c83:{NFSU2_TR(0x4e4c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x5eb035d1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e4c8a:{NFSU2_TR(0x4e4c8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1199ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4c91:{NFSU2_TR(0x4e4c91);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4c98:{NFSU2_TR(0x4e4c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4c9dull));
TAIL_STATIC(0x4958b0u,495);
}
B4e4c9d:L4e4c9d:{c.instructions+=5;NFSU2_TR(0x4e4c9d);
s1(0x838528,u8(0x0ull));
}
B4e4ca4:{NFSU2_TR(0x4e4ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4ca7:{NFSU2_TR(0x4e4ca7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ca9:{NFSU2_TR(0x4e4ca9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4caa:{NFSU2_TR(0x4e4caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4cafull));
TAIL_STATIC(0x537950u,537);
}
B4e4caf:L4e4caf:{c.instructions+=6;NFSU2_TR(0x4e4caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4cb2:{NFSU2_TR(0x4e4cb2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4cb4:{NFSU2_TR(0x4e4cb4);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4cb9:{NFSU2_TR(0x4e4cb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4cba:{NFSU2_TR(0x4e4cba);
u8 U[4];
w4(U+0,u32(0x78f8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4cbf:{NFSU2_TR(0x4e4cbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4cc4ull));
TAIL_STATIC(0x555eb0u,555);
}
B4e4cc4:L4e4cc4:{c.instructions+=7;NFSU2_TR(0x4e4cc4);
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
B4e4cc7:{NFSU2_TR(0x4e4cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4cc8:{NFSU2_TR(0x4e4cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4cc9:{NFSU2_TR(0x4e4cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4cca:{NFSU2_TR(0x4e4cca);
__builtin_memmove((R+16),(R+20),4);
}
B4e4ccc:{NFSU2_TR(0x4e4ccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4ccd:{NFSU2_TR(0x4e4ccd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4cd0:L4e4cd0:{c.instructions+=4;NFSU2_TR(0x4e4cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4cd3:{NFSU2_TR(0x4e4cd3);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4cd8:{NFSU2_TR(0x4e4cd8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4cd9:{NFSU2_TR(0x4e4cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4cdeull));
TAIL_STATIC(0x537950u,537);
}
B4e4cde:L4e4cde:{c.instructions+=8;NFSU2_TR(0x4e4cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4ce1:{NFSU2_TR(0x4e4ce1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ce3:{NFSU2_TR(0x4e4ce3);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ce8:{NFSU2_TR(0x4e4ce8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ced:{NFSU2_TR(0x4e4ced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4cee:{NFSU2_TR(0x4e4cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xccd1a5d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e4cf5:{NFSU2_TR(0x4e4cf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4cfc:{NFSU2_TR(0x4e4cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d01ull));
TAIL_STATIC(0x537c00u,537);
}
B4e4d01:L4e4d01:{c.instructions+=5;NFSU2_TR(0x4e4d01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4e4d04:{NFSU2_TR(0x4e4d04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d06:{NFSU2_TR(0x4e4d06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d08:{NFSU2_TR(0x4e4d08);
__builtin_memmove((R+4),(R+24),4);
}
B4e4d0a:{NFSU2_TR(0x4e4d0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d0full));
TAIL_STATIC(0x4d1ea0u,4d1);
}
B4e4d0f:L4e4d0f:{c.instructions+=4;NFSU2_TR(0x4e4d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4d12:{NFSU2_TR(0x4e4d12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d13:{NFSU2_TR(0x4e4d13);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d15:{NFSU2_TR(0x4e4d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d1aull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e4d1a:L4e4d1a:{c.instructions+=8;NFSU2_TR(0x4e4d1a);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e4d20:{NFSU2_TR(0x4e4d20);
s1(0x838528,u8(0x1ull));
}
B4e4d27:{NFSU2_TR(0x4e4d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4d2a:{NFSU2_TR(0x4e4d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4d2d:{NFSU2_TR(0x4e4d2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4d30:{NFSU2_TR(0x4e4d30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d31:{NFSU2_TR(0x4e4d31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d32:{NFSU2_TR(0x4e4d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d37ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e4d37:L4e4d37:{c.instructions+=6;NFSU2_TR(0x4e4d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4d38:{NFSU2_TR(0x4e4d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4d39:{NFSU2_TR(0x4e4d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4d3a:{NFSU2_TR(0x4e4d3a);
__builtin_memmove((R+16),(R+20),4);
}
B4e4d3c:{NFSU2_TR(0x4e4d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4d3d:{NFSU2_TR(0x4e4d3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4d40:L4e4d40:{c.instructions+=4;NFSU2_TR(0x4e4d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4d43:{NFSU2_TR(0x4e4d43);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4e4d49:{NFSU2_TR(0x4e4d49);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e4d4b:{NFSU2_TR(0x4e4d4b);
if(r1(R+518)){{goto L4e4d5e;}}
}
B4e4d4d:L4e4d4d:{c.instructions+=3;NFSU2_TR(0x4e4d4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d4e:{NFSU2_TR(0x4e4d4e);
__builtin_memmove((R+4),(R+24),4);
}
B4e4d50:{NFSU2_TR(0x4e4d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d55ull));
TAIL_STATIC(0x49ef50u,49e);
}
B4e4d55:L4e4d55:{c.instructions+=6;NFSU2_TR(0x4e4d55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4d56:{NFSU2_TR(0x4e4d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4d57:{NFSU2_TR(0x4e4d57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4d58:{NFSU2_TR(0x4e4d58);
__builtin_memmove((R+16),(R+20),4);
}
B4e4d5a:{NFSU2_TR(0x4e4d5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4d5b:{NFSU2_TR(0x4e4d5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4d5e:L4e4d5e:{c.instructions+=2;NFSU2_TR(0x4e4d5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4d61:{NFSU2_TR(0x4e4d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d66ull));
TAIL_STATIC(0x4958b0u,495);
}
B4e4d66:L4e4d66:{c.instructions+=3;NFSU2_TR(0x4e4d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4d6c:{NFSU2_TR(0x4e4d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e4d6e:{NFSU2_TR(0x4e4d6e);
if(r1(R+518)){{goto L4e4d79;}}
}
B4e4d70:L4e4d70:{c.instructions+=2;NFSU2_TR(0x4e4d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d71:{NFSU2_TR(0x4e4d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d76ull));
TAIL_STATIC(0x540a60u,540);
}
B4e4d76:L4e4d76:{c.instructions+=1;NFSU2_TR(0x4e4d76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4d79:L4e4d79:{c.instructions+=3;NFSU2_TR(0x4e4d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e4d7c:{NFSU2_TR(0x4e4d7c);
u8 U[4];
w4(U+0,u32(0xb419c854ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d81:{NFSU2_TR(0x4e4d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d86ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e4d86:L4e4d86:{c.instructions+=6;NFSU2_TR(0x4e4d86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d87:{NFSU2_TR(0x4e4d87);
u8 U[4];
w4(U+0,u32(0x1ca4ce1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d8c:{NFSU2_TR(0x4e4d8c);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d91:{NFSU2_TR(0x4e4d91);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d96:{NFSU2_TR(0x4e4d96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4d97:{NFSU2_TR(0x4e4d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4d9cull));
TAIL_STATIC(0x5585e0u,558);
}
B4e4d9c:L4e4d9c:{c.instructions+=9;NFSU2_TR(0x4e4d9c);
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
B4e4d9f:{NFSU2_TR(0x4e4d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4da5:{NFSU2_TR(0x4e4da5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4dac:{NFSU2_TR(0x4e4dac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4dad:{NFSU2_TR(0x4e4dad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4dae:{NFSU2_TR(0x4e4dae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4daf:{NFSU2_TR(0x4e4daf);
__builtin_memmove((R+16),(R+20),4);
}
B4e4db1:{NFSU2_TR(0x4e4db1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4db2:{NFSU2_TR(0x4e4db2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4db5:L4e4db5:{c.instructions+=4;NFSU2_TR(0x4e4db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4db8:{NFSU2_TR(0x4e4db8);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4dbd:{NFSU2_TR(0x4e4dbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4dbe:{NFSU2_TR(0x4e4dbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4dc3ull));
TAIL_STATIC(0x537950u,537);
}
B4e4dc3:L4e4dc3:{c.instructions+=6;NFSU2_TR(0x4e4dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4dc9:{NFSU2_TR(0x4e4dc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4dcc:{NFSU2_TR(0x4e4dcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4dcd:{NFSU2_TR(0x4e4dcd);
w4(R+4,u32(0x83ad90ull));
}
B4e4dd2:{NFSU2_TR(0x4e4dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xccd1a5d8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e4dd9:{NFSU2_TR(0x4e4dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4ddeull));
TAIL_STATIC(0x503510u,503);
}
B4e4dde:L4e4dde:{c.instructions+=8;NFSU2_TR(0x4e4dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4de4:{NFSU2_TR(0x4e4de4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4de6:{NFSU2_TR(0x4e4de6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4de7:{NFSU2_TR(0x4e4de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1194ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4ded:{NFSU2_TR(0x4e4ded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e4def:{NFSU2_TR(0x4e4def);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4df1:{NFSU2_TR(0x4e4df1);
__builtin_memmove((R+4),(R+0),4);
}
B4e4df3:{NFSU2_TR(0x4e4df3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4df6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e4df6:L4e4df6:{c.instructions+=5;NFSU2_TR(0x4e4df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1190ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4dfc:{NFSU2_TR(0x4e4dfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4dfe:{NFSU2_TR(0x4e4dfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4dff:{NFSU2_TR(0x4e4dff);
w4(R+4,u32(0x83aab4ull));
}
B4e4e04:{NFSU2_TR(0x4e4e04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4e09ull));
TAIL_STATIC(0x502a40u,502);
}
B4e4e09:L4e4e09:{c.instructions+=5;NFSU2_TR(0x4e4e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4e0f:{NFSU2_TR(0x4e4e0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e11:{NFSU2_TR(0x4e4e11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e13:{NFSU2_TR(0x4e4e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e14:{NFSU2_TR(0x4e4e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4e19ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B4e4e19:L4e4e19:{c.instructions+=7;NFSU2_TR(0x4e4e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4e1c:{NFSU2_TR(0x4e4e1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e1e:{NFSU2_TR(0x4e4e1e);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e23:{NFSU2_TR(0x4e4e23);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e28:{NFSU2_TR(0x4e4e28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e29:{NFSU2_TR(0x4e4e29);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4e30:{NFSU2_TR(0x4e4e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4e35ull));
TAIL_STATIC(0x537c00u,537);
}
B4e4e35:L4e4e35:{c.instructions+=5;NFSU2_TR(0x4e4e35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e4e38:{NFSU2_TR(0x4e4e38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e3a:{NFSU2_TR(0x4e4e3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e3c:{NFSU2_TR(0x4e4e3c);
__builtin_memmove((R+4),(R+24),4);
}
B4e4e3e:{NFSU2_TR(0x4e4e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4e43ull));
TAIL_STATIC(0x4d1ea0u,4d1);
}
B4e4e43:L4e4e43:{c.instructions+=4;NFSU2_TR(0x4e4e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4e46:{NFSU2_TR(0x4e4e46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e47:{NFSU2_TR(0x4e4e47);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e49:{NFSU2_TR(0x4e4e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4e4eull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e4e4e:L4e4e4e:{c.instructions+=8;NFSU2_TR(0x4e4e4e);
s1(0x838528,u8(0x1ull));
}
B4e4e55:{NFSU2_TR(0x4e4e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4e58:{NFSU2_TR(0x4e4e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4e5b:{NFSU2_TR(0x4e4e5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e4e5e:{NFSU2_TR(0x4e4e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e5f:{NFSU2_TR(0x4e4e5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4e60:{NFSU2_TR(0x4e4e60);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e4e66:{NFSU2_TR(0x4e4e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4e6bull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e4e6b:L4e4e6b:{c.instructions+=6;NFSU2_TR(0x4e4e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4e6c:{NFSU2_TR(0x4e4e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4e6d:{NFSU2_TR(0x4e4e6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4e6e:{NFSU2_TR(0x4e4e6e);
__builtin_memmove((R+16),(R+20),4);
}
B4e4e70:{NFSU2_TR(0x4e4e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4e71:{NFSU2_TR(0x4e4e71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4e74:L4e4e74:{c.instructions+=10;NFSU2_TR(0x4e4e74);
__builtin_memmove((R+0),gp(0x83a9c8),4);
}
B4e4e79:{NFSU2_TR(0x4e4e79);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4e4e7f:{NFSU2_TR(0x4e4e7f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4e4e81:{NFSU2_TR(0x4e4e81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4e85:{NFSU2_TR(0x4e4e85);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e4e89:{NFSU2_TR(0x4e4e89);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e4e8f:{NFSU2_TR(0x4e4e8f);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e4e95:{NFSU2_TR(0x4e4e95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e4e97:{NFSU2_TR(0x4e4e97);
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
B4e4e9a:{NFSU2_TR(0x4e4e9a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x4e5cd9u,4e5);}
}
B4e4ea0:L4e4ea0:{c.instructions+=6;NFSU2_TR(0x4e4ea0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ea2:{NFSU2_TR(0x4e4ea2);
__builtin_memmove((R+4),(R+24),4);
}
B4e4ea4:{NFSU2_TR(0x4e4ea4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4eab:{NFSU2_TR(0x4e4eab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1199ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4eb2:{NFSU2_TR(0x4e4eb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4eb9:{NFSU2_TR(0x4e4eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4ebeull));
TAIL_STATIC(0x4bba20u,4bb);
}
B4e4ebe:L4e4ebe:{c.instructions+=8;NFSU2_TR(0x4e4ebe);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ec3:{NFSU2_TR(0x4e4ec3);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ec8:{NFSU2_TR(0x4e4ec8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ecd:{NFSU2_TR(0x4e4ecd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ed2:{NFSU2_TR(0x4e4ed2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ed4:{NFSU2_TR(0x4e4ed4);
u8 U[4];
w4(U+0,u32(0x759898cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ed9:{NFSU2_TR(0x4e4ed9);
__builtin_memmove((R+4),(R+24),4);
}
B4e4edb:{NFSU2_TR(0x4e4edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4ee0ull));
TAIL_STATIC(0x555f80u,555);
}
B4e4ee0:L4e4ee0:{c.instructions+=7;NFSU2_TR(0x4e4ee0);
s1(0x838528,u8(0x0ull));
}
B4e4ee7:{NFSU2_TR(0x4e4ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4ee8:{NFSU2_TR(0x4e4ee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4ee9:{NFSU2_TR(0x4e4ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4eea:{NFSU2_TR(0x4e4eea);
__builtin_memmove((R+16),(R+20),4);
}
B4e4eec:{NFSU2_TR(0x4e4eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4eed:{NFSU2_TR(0x4e4eed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4ef0:L4e4ef0:{c.instructions+=7;NFSU2_TR(0x4e4ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4ef3:{NFSU2_TR(0x4e4ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4ef9:{NFSU2_TR(0x4e4ef9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4efa:{NFSU2_TR(0x4e4efa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4f00:{NFSU2_TR(0x4e4f00);
u8 U[4];
w4(U+0,u32(0x4def60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f05:{NFSU2_TR(0x4e4f05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f06:{NFSU2_TR(0x4e4f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4f0bull));
TAIL_STATIC(0x58ac50u,58a);
}
B4e4f0b:L4e4f0b:{c.instructions+=3;NFSU2_TR(0x4e4f0b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4e4f0d:{NFSU2_TR(0x4e4f0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f0e:{NFSU2_TR(0x4e4f0e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e4f41;}}
}
B4e4f10:L4e4f10:{c.instructions+=3;NFSU2_TR(0x4e4f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e4f13:{NFSU2_TR(0x4e4f13);
u8 U[4];
w4(U+0,u32(0x35ec190eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f18:{NFSU2_TR(0x4e4f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4f1dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e4f1d:L4e4f1d:{c.instructions+=8;NFSU2_TR(0x4e4f1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4f20:{NFSU2_TR(0x4e4f20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f21:{NFSU2_TR(0x4e4f21);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f23:{NFSU2_TR(0x4e4f23);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f25:{NFSU2_TR(0x4e4f25);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f2a:{NFSU2_TR(0x4e4f2a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f2f:{NFSU2_TR(0x4e4f2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f30:{NFSU2_TR(0x4e4f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4f35ull));
TAIL_STATIC(0x558540u,558);
}
B4e4f35:L4e4f35:{c.instructions+=7;NFSU2_TR(0x4e4f35);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e4f38:{NFSU2_TR(0x4e4f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4f39:{NFSU2_TR(0x4e4f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4f3a:{NFSU2_TR(0x4e4f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4f3b:{NFSU2_TR(0x4e4f3b);
__builtin_memmove((R+16),(R+20),4);
}
B4e4f3d:{NFSU2_TR(0x4e4f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4f3e:{NFSU2_TR(0x4e4f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4f41:L4e4f41:{c.instructions+=4;NFSU2_TR(0x4e4f41);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4f46:{NFSU2_TR(0x4e4f46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e4f48:{NFSU2_TR(0x4e4f48);
w4(R+4,u32(0xfull));
}
B4e4f4d:{NFSU2_TR(0x4e4f4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4f51:L4e4f51:{c.instructions+=1;NFSU2_TR(0x4e4f51);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e4f53;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e4f51u);}goto L4e4f51;}
}
B4e4f53:L4e4f53:{c.instructions+=4;NFSU2_TR(0x4e4f53);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4e4f55:{NFSU2_TR(0x4e4f55);
u8 U[4];
w4(U+0,u32(0x7d1d448dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f5a:{NFSU2_TR(0x4e4f5a);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4e4f5b:{NFSU2_TR(0x4e4f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4f60ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e4f60:L4e4f60:{c.instructions+=5;NFSU2_TR(0x4e4f60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e4f63:{NFSU2_TR(0x4e4f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f64:{NFSU2_TR(0x4e4f64);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e4f68:{NFSU2_TR(0x4e4f68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f69:{NFSU2_TR(0x4e4f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4f6eull));
TAIL_STATIC(0x4400d0u,440);
}
B4e4f6e:L4e4f6e:{c.instructions+=6;NFSU2_TR(0x4e4f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4f71:{NFSU2_TR(0x4e4f71);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e4f75:{NFSU2_TR(0x4e4f75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f76:{NFSU2_TR(0x4e4f76);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f7b:{NFSU2_TR(0x4e4f7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f7c:{NFSU2_TR(0x4e4f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4f81ull));
TAIL_STATIC(0x558310u,558);
}
B4e4f81:L4e4f81:{c.instructions+=8;NFSU2_TR(0x4e4f81);
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
B4e4f84:{NFSU2_TR(0x4e4f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e4f8a:{NFSU2_TR(0x4e4f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4f8b:{NFSU2_TR(0x4e4f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4f8c:{NFSU2_TR(0x4e4f8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4f8d:{NFSU2_TR(0x4e4f8d);
__builtin_memmove((R+16),(R+20),4);
}
B4e4f8f:{NFSU2_TR(0x4e4f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4f90:{NFSU2_TR(0x4e4f90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4f93:L4e4f93:{c.instructions+=11;NFSU2_TR(0x4e4f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e4f96:{NFSU2_TR(0x4e4f96);
u8 U[4];
w4(U+0,u32(0xd152ed92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f9b:{NFSU2_TR(0x4e4f9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4f9d:{NFSU2_TR(0x4e4f9d);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fa2:{NFSU2_TR(0x4e4fa2);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fa7:{NFSU2_TR(0x4e4fa7);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fac:{NFSU2_TR(0x4e4fac);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fb1:{NFSU2_TR(0x4e4fb1);
u8 U[4];
w4(U+0,u32(0x77feec35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fb6:{NFSU2_TR(0x4e4fb6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fbb:{NFSU2_TR(0x4e4fbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fbc:{NFSU2_TR(0x4e4fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4fc1ull));
TAIL_STATIC(0x558790u,558);
}
B4e4fc1:L4e4fc1:{c.instructions+=7;NFSU2_TR(0x4e4fc1);
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
B4e4fc4:{NFSU2_TR(0x4e4fc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e4fc5:{NFSU2_TR(0x4e4fc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e4fc6:{NFSU2_TR(0x4e4fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e4fc7:{NFSU2_TR(0x4e4fc7);
__builtin_memmove((R+16),(R+20),4);
}
B4e4fc9:{NFSU2_TR(0x4e4fc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e4fca:{NFSU2_TR(0x4e4fca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e4fcd:L4e4fcd:{c.instructions+=8;NFSU2_TR(0x4e4fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e4fd0:{NFSU2_TR(0x4e4fd0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fd2:{NFSU2_TR(0x4e4fd2);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fd7:{NFSU2_TR(0x4e4fd7);
u8 U[4];
w4(U+0,u32(0xfc8c5406ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fdc:{NFSU2_TR(0x4e4fdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fdd:{NFSU2_TR(0x4e4fdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4fe4:{NFSU2_TR(0x4e4fe4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e4feb:{NFSU2_TR(0x4e4feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4ff0ull));
TAIL_STATIC(0x537c00u,537);
}
B4e4ff0:L4e4ff0:{c.instructions+=5;NFSU2_TR(0x4e4ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e4ff3:{NFSU2_TR(0x4e4ff3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ff5:{NFSU2_TR(0x4e4ff5);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4ffa:{NFSU2_TR(0x4e4ffa);
u8 U[4];
w4(U+0,u32(0xcd3f1d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e4fff:{NFSU2_TR(0x4e4fff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4e5000u,4e5);
}
XIT:NFSU2_TR_EXIT(0x4e4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
