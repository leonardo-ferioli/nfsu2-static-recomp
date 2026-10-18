#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59c(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_5a3(u8* __restrict R,Cpu& c);
u32 body_5a5(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 page_5a4(Cpu& c){return body_5a4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a4002:goto L5a4002;
case 0x5a4006:c.instructions+=6;goto B5a4006;
case 0x5a400a:c.instructions+=5;goto B5a400a;
case 0x5a400e:c.instructions+=4;goto B5a400e;
case 0x5a4012:c.instructions+=3;goto B5a4012;
case 0x5a4016:c.instructions+=2;goto B5a4016;
case 0x5a401a:c.instructions+=1;goto B5a401a;
case 0x5a401f:goto L5a401f;
case 0x5a4023:c.instructions+=7;goto B5a4023;
case 0x5a4027:c.instructions+=6;goto B5a4027;
case 0x5a4029:c.instructions+=5;goto B5a4029;
case 0x5a402b:c.instructions+=4;goto B5a402b;
case 0x5a402f:c.instructions+=3;goto B5a402f;
case 0x5a4033:c.instructions+=2;goto B5a4033;
case 0x5a4037:c.instructions+=1;goto B5a4037;
case 0x5a4039:goto L5a4039;
case 0x5a403b:goto L5a403b;
case 0x5a403f:c.instructions+=11;goto B5a403f;
case 0x5a4043:c.instructions+=10;goto B5a4043;
case 0x5a4047:c.instructions+=9;goto B5a4047;
case 0x5a404a:c.instructions+=8;goto B5a404a;
case 0x5a404d:c.instructions+=7;goto B5a404d;
case 0x5a4050:c.instructions+=6;goto B5a4050;
case 0x5a4053:c.instructions+=5;goto B5a4053;
case 0x5a4059:c.instructions+=4;goto B5a4059;
case 0x5a405d:c.instructions+=3;goto B5a405d;
case 0x5a4061:c.instructions+=2;goto B5a4061;
case 0x5a4065:c.instructions+=1;goto B5a4065;
case 0x5a406b:goto L5a406b;
case 0x5a406f:c.instructions+=6;goto B5a406f;
case 0x5a4070:c.instructions+=5;goto B5a4070;
case 0x5a4071:c.instructions+=4;goto B5a4071;
case 0x5a4072:c.instructions+=3;goto B5a4072;
case 0x5a4074:c.instructions+=2;goto B5a4074;
case 0x5a4075:c.instructions+=1;goto B5a4075;
case 0x5a4080:goto L5a4080;
case 0x5a4083:c.instructions+=5;goto B5a4083;
case 0x5a4087:c.instructions+=4;goto B5a4087;
case 0x5a408b:c.instructions+=3;goto B5a408b;
case 0x5a4091:c.instructions+=2;goto B5a4091;
case 0x5a4097:c.instructions+=1;goto B5a4097;
case 0x5a40a0:goto L5a40a0;
case 0x5a40a1:c.instructions+=29;goto B5a40a1;
case 0x5a40a3:c.instructions+=28;goto B5a40a3;
case 0x5a40a6:c.instructions+=27;goto B5a40a6;
case 0x5a40a9:c.instructions+=26;goto B5a40a9;
case 0x5a40ac:c.instructions+=25;goto B5a40ac;
case 0x5a40ad:c.instructions+=24;goto B5a40ad;
case 0x5a40b0:c.instructions+=23;goto B5a40b0;
case 0x5a40b1:c.instructions+=22;goto B5a40b1;
case 0x5a40b4:c.instructions+=21;goto B5a40b4;
case 0x5a40b5:c.instructions+=20;goto B5a40b5;
case 0x5a40b7:c.instructions+=19;goto B5a40b7;
case 0x5a40ba:c.instructions+=18;goto B5a40ba;
case 0x5a40bc:c.instructions+=17;goto B5a40bc;
case 0x5a40bf:c.instructions+=16;goto B5a40bf;
case 0x5a40c2:c.instructions+=15;goto B5a40c2;
case 0x5a40c5:c.instructions+=14;goto B5a40c5;
case 0x5a40c8:c.instructions+=13;goto B5a40c8;
case 0x5a40cb:c.instructions+=12;goto B5a40cb;
case 0x5a40cf:c.instructions+=11;goto B5a40cf;
case 0x5a40d3:c.instructions+=10;goto B5a40d3;
case 0x5a40d4:c.instructions+=9;goto B5a40d4;
case 0x5a40d7:c.instructions+=8;goto B5a40d7;
case 0x5a40da:c.instructions+=7;goto B5a40da;
case 0x5a40db:c.instructions+=6;goto B5a40db;
case 0x5a40de:c.instructions+=5;goto B5a40de;
case 0x5a40e2:c.instructions+=4;goto B5a40e2;
case 0x5a40e6:c.instructions+=3;goto B5a40e6;
case 0x5a40ec:c.instructions+=2;goto B5a40ec;
case 0x5a40f0:c.instructions+=1;goto B5a40f0;
case 0x5a40f5:goto L5a40f5;
case 0x5a40f8:c.instructions+=12;goto B5a40f8;
case 0x5a40fc:c.instructions+=11;goto B5a40fc;
case 0x5a40ff:c.instructions+=10;goto B5a40ff;
case 0x5a4103:c.instructions+=9;goto B5a4103;
case 0x5a4109:c.instructions+=8;goto B5a4109;
case 0x5a410d:c.instructions+=7;goto B5a410d;
case 0x5a410f:c.instructions+=6;goto B5a410f;
case 0x5a4113:c.instructions+=5;goto B5a4113;
case 0x5a4115:c.instructions+=4;goto B5a4115;
case 0x5a411b:c.instructions+=3;goto B5a411b;
case 0x5a411d:c.instructions+=2;goto B5a411d;
case 0x5a4120:c.instructions+=1;goto B5a4120;
case 0x5a4122:goto L5a4122;
case 0x5a4124:c.instructions+=4;goto B5a4124;
case 0x5a412a:c.instructions+=3;goto B5a412a;
case 0x5a412c:c.instructions+=2;goto B5a412c;
case 0x5a4130:c.instructions+=1;goto B5a4130;
case 0x5a4132:goto L5a4132;
case 0x5a4138:c.instructions+=3;goto B5a4138;
case 0x5a413a:c.instructions+=2;goto B5a413a;
case 0x5a413d:c.instructions+=1;goto B5a413d;
case 0x5a413f:goto L5a413f;
case 0x5a4143:c.instructions+=2;goto B5a4143;
case 0x5a4149:c.instructions+=1;goto B5a4149;
case 0x5a414b:goto L5a414b;
case 0x5a414f:goto L5a414f;
case 0x5a4151:c.instructions+=10;goto B5a4151;
case 0x5a4155:c.instructions+=9;goto B5a4155;
case 0x5a4159:c.instructions+=8;goto B5a4159;
case 0x5a415d:c.instructions+=7;goto B5a415d;
case 0x5a4161:c.instructions+=6;goto B5a4161;
case 0x5a4163:c.instructions+=5;goto B5a4163;
case 0x5a4165:c.instructions+=4;goto B5a4165;
case 0x5a416b:c.instructions+=3;goto B5a416b;
case 0x5a416d:c.instructions+=2;goto B5a416d;
case 0x5a4170:c.instructions+=1;goto B5a4170;
case 0x5a4176:goto L5a4176;
case 0x5a417a:c.instructions+=5;goto B5a417a;
case 0x5a417c:c.instructions+=4;goto B5a417c;
case 0x5a4182:c.instructions+=3;goto B5a4182;
case 0x5a4184:c.instructions+=2;goto B5a4184;
case 0x5a4187:c.instructions+=1;goto B5a4187;
case 0x5a418d:goto L5a418d;
case 0x5a4192:c.instructions+=4;goto B5a4192;
case 0x5a4195:c.instructions+=3;goto B5a4195;
case 0x5a4196:c.instructions+=2;goto B5a4196;
case 0x5a4197:c.instructions+=1;goto B5a4197;
case 0x5a419c:goto L5a419c;
case 0x5a419f:c.instructions+=2;goto B5a419f;
case 0x5a41a1:c.instructions+=1;goto B5a41a1;
case 0x5a41a3:goto L5a41a3;
case 0x5a41a9:c.instructions+=4;goto B5a41a9;
case 0x5a41ad:c.instructions+=3;goto B5a41ad;
case 0x5a41af:c.instructions+=2;goto B5a41af;
case 0x5a41b2:c.instructions+=1;goto B5a41b2;
case 0x5a41b8:goto L5a41b8;
case 0x5a41bc:c.instructions+=4;goto B5a41bc;
case 0x5a41c0:c.instructions+=3;goto B5a41c0;
case 0x5a41c7:c.instructions+=2;goto B5a41c7;
case 0x5a41cd:c.instructions+=1;goto B5a41cd;
case 0x5a41cf:goto L5a41cf;
case 0x5a41d4:c.instructions+=10;goto B5a41d4;
case 0x5a41da:c.instructions+=9;goto B5a41da;
case 0x5a41e0:c.instructions+=8;goto B5a41e0;
case 0x5a41e1:c.instructions+=7;goto B5a41e1;
case 0x5a41e2:c.instructions+=6;goto B5a41e2;
case 0x5a41e3:c.instructions+=5;goto B5a41e3;
case 0x5a41e7:c.instructions+=4;goto B5a41e7;
case 0x5a41ea:c.instructions+=3;goto B5a41ea;
case 0x5a41eb:c.instructions+=2;goto B5a41eb;
case 0x5a41f1:c.instructions+=1;goto B5a41f1;
case 0x5a41f6:goto L5a41f6;
case 0x5a41f7:c.instructions+=3;goto B5a41f7;
case 0x5a41fb:c.instructions+=2;goto B5a41fb;
case 0x5a41fc:c.instructions+=1;goto B5a41fc;
case 0x5a4201:goto L5a4201;
case 0x5a4204:c.instructions+=5;goto B5a4204;
case 0x5a4207:c.instructions+=4;goto B5a4207;
case 0x5a4209:c.instructions+=3;goto B5a4209;
case 0x5a420c:c.instructions+=2;goto B5a420c;
case 0x5a420e:c.instructions+=1;goto B5a420e;
case 0x5a4210:goto L5a4210;
case 0x5a4213:c.instructions+=3;goto B5a4213;
case 0x5a4215:c.instructions+=2;goto B5a4215;
case 0x5a4218:c.instructions+=1;goto B5a4218;
case 0x5a421a:goto L5a421a;
case 0x5a421c:c.instructions+=18;goto B5a421c;
case 0x5a421f:c.instructions+=17;goto B5a421f;
case 0x5a4222:c.instructions+=16;goto B5a4222;
case 0x5a4224:c.instructions+=15;goto B5a4224;
case 0x5a4227:c.instructions+=14;goto B5a4227;
case 0x5a422a:c.instructions+=13;goto B5a422a;
case 0x5a4230:c.instructions+=12;goto B5a4230;
case 0x5a4232:c.instructions+=11;goto B5a4232;
case 0x5a4238:c.instructions+=10;goto B5a4238;
case 0x5a423e:c.instructions+=9;goto B5a423e;
case 0x5a4241:c.instructions+=8;goto B5a4241;
case 0x5a4248:c.instructions+=7;goto B5a4248;
case 0x5a424c:c.instructions+=6;goto B5a424c;
case 0x5a4250:c.instructions+=5;goto B5a4250;
case 0x5a4256:c.instructions+=4;goto B5a4256;
case 0x5a425c:c.instructions+=3;goto B5a425c;
case 0x5a425e:c.instructions+=2;goto B5a425e;
case 0x5a4261:c.instructions+=1;goto B5a4261;
case 0x5a4263:goto L5a4263;
case 0x5a4269:goto L5a4269;
case 0x5a426f:c.instructions+=17;goto B5a426f;
case 0x5a4275:c.instructions+=16;goto B5a4275;
case 0x5a4277:c.instructions+=15;goto B5a4277;
case 0x5a4279:c.instructions+=14;goto B5a4279;
case 0x5a427d:c.instructions+=13;goto B5a427d;
case 0x5a4281:c.instructions+=12;goto B5a4281;
case 0x5a4283:c.instructions+=11;goto B5a4283;
case 0x5a4285:c.instructions+=10;goto B5a4285;
case 0x5a4286:c.instructions+=9;goto B5a4286;
case 0x5a428a:c.instructions+=8;goto B5a428a;
case 0x5a428e:c.instructions+=7;goto B5a428e;
case 0x5a4290:c.instructions+=6;goto B5a4290;
case 0x5a4291:c.instructions+=5;goto B5a4291;
case 0x5a4295:c.instructions+=4;goto B5a4295;
case 0x5a4296:c.instructions+=3;goto B5a4296;
case 0x5a429c:c.instructions+=2;goto B5a429c;
case 0x5a429f:c.instructions+=1;goto B5a429f;
case 0x5a42a4:goto L5a42a4;
case 0x5a42a7:c.instructions+=22;goto B5a42a7;
case 0x5a42ab:c.instructions+=21;goto B5a42ab;
case 0x5a42ae:c.instructions+=20;goto B5a42ae;
case 0x5a42b1:c.instructions+=19;goto B5a42b1;
case 0x5a42b4:c.instructions+=18;goto B5a42b4;
case 0x5a42b7:c.instructions+=17;goto B5a42b7;
case 0x5a42b9:c.instructions+=16;goto B5a42b9;
case 0x5a42bb:c.instructions+=15;goto B5a42bb;
case 0x5a42bd:c.instructions+=14;goto B5a42bd;
case 0x5a42bf:c.instructions+=13;goto B5a42bf;
case 0x5a42c1:c.instructions+=12;goto B5a42c1;
case 0x5a42c3:c.instructions+=11;goto B5a42c3;
case 0x5a42c5:c.instructions+=10;goto B5a42c5;
case 0x5a42c7:c.instructions+=9;goto B5a42c7;
case 0x5a42c9:c.instructions+=8;goto B5a42c9;
case 0x5a42cb:c.instructions+=7;goto B5a42cb;
case 0x5a42cd:c.instructions+=6;goto B5a42cd;
case 0x5a42cf:c.instructions+=5;goto B5a42cf;
case 0x5a42d1:c.instructions+=4;goto B5a42d1;
case 0x5a42d7:c.instructions+=3;goto B5a42d7;
case 0x5a42d9:c.instructions+=2;goto B5a42d9;
case 0x5a42dc:c.instructions+=1;goto B5a42dc;
case 0x5a42de:goto L5a42de;
case 0x5a42e4:c.instructions+=11;goto B5a42e4;
case 0x5a42ea:c.instructions+=10;goto B5a42ea;
case 0x5a42ed:c.instructions+=9;goto B5a42ed;
case 0x5a42ee:c.instructions+=8;goto B5a42ee;
case 0x5a42f1:c.instructions+=7;goto B5a42f1;
case 0x5a42f4:c.instructions+=6;goto B5a42f4;
case 0x5a42f6:c.instructions+=5;goto B5a42f6;
case 0x5a42f8:c.instructions+=4;goto B5a42f8;
case 0x5a42fa:c.instructions+=3;goto B5a42fa;
case 0x5a42fc:c.instructions+=2;goto B5a42fc;
case 0x5a4300:c.instructions+=1;goto B5a4300;
case 0x5a4305:goto L5a4305;
case 0x5a4306:c.instructions+=2;goto B5a4306;
case 0x5a430a:c.instructions+=1;goto B5a430a;
case 0x5a430f:goto L5a430f;
case 0x5a4313:c.instructions+=9;goto B5a4313;
case 0x5a4317:c.instructions+=8;goto B5a4317;
case 0x5a431a:c.instructions+=7;goto B5a431a;
case 0x5a431e:c.instructions+=6;goto B5a431e;
case 0x5a431f:c.instructions+=5;goto B5a431f;
case 0x5a4320:c.instructions+=4;goto B5a4320;
case 0x5a4324:c.instructions+=3;goto B5a4324;
case 0x5a4328:c.instructions+=2;goto B5a4328;
case 0x5a4329:c.instructions+=1;goto B5a4329;
case 0x5a432e:goto L5a432e;
case 0x5a4331:c.instructions+=5;goto B5a4331;
case 0x5a4335:c.instructions+=4;goto B5a4335;
case 0x5a4339:c.instructions+=3;goto B5a4339;
case 0x5a433f:c.instructions+=2;goto B5a433f;
case 0x5a4342:c.instructions+=1;goto B5a4342;
case 0x5a4347:goto L5a4347;
case 0x5a434b:c.instructions+=1;goto B5a434b;
case 0x5a434e:goto L5a434e;
case 0x5a4352:c.instructions+=4;goto B5a4352;
case 0x5a4357:c.instructions+=3;goto B5a4357;
case 0x5a435c:c.instructions+=2;goto B5a435c;
case 0x5a435d:c.instructions+=1;goto B5a435d;
case 0x5a4362:goto L5a4362;
case 0x5a4368:c.instructions+=2;goto B5a4368;
case 0x5a436b:c.instructions+=1;goto B5a436b;
case 0x5a4370:goto L5a4370;
case 0x5a4372:c.instructions+=15;goto B5a4372;
case 0x5a4377:c.instructions+=14;goto B5a4377;
case 0x5a4379:c.instructions+=13;goto B5a4379;
case 0x5a437c:c.instructions+=12;goto B5a437c;
case 0x5a437e:c.instructions+=11;goto B5a437e;
case 0x5a4381:c.instructions+=10;goto B5a4381;
case 0x5a4383:c.instructions+=9;goto B5a4383;
case 0x5a4386:c.instructions+=8;goto B5a4386;
case 0x5a4388:c.instructions+=7;goto B5a4388;
case 0x5a438f:c.instructions+=6;goto B5a438f;
case 0x5a4390:c.instructions+=5;goto B5a4390;
case 0x5a4391:c.instructions+=4;goto B5a4391;
case 0x5a4392:c.instructions+=3;goto B5a4392;
case 0x5a4394:c.instructions+=2;goto B5a4394;
case 0x5a4395:c.instructions+=1;goto B5a4395;
case 0x5a4398:goto L5a4398;
case 0x5a439b:c.instructions+=8;goto B5a439b;
case 0x5a439e:c.instructions+=7;goto B5a439e;
case 0x5a43a0:c.instructions+=6;goto B5a43a0;
case 0x5a43a1:c.instructions+=5;goto B5a43a1;
case 0x5a43a3:c.instructions+=4;goto B5a43a3;
case 0x5a43a7:c.instructions+=3;goto B5a43a7;
case 0x5a43a8:c.instructions+=2;goto B5a43a8;
case 0x5a43aa:c.instructions+=1;goto B5a43aa;
case 0x5a43af:goto L5a43af;
case 0x5a43b3:c.instructions+=1;goto B5a43b3;
case 0x5a43b5:goto L5a43b5;
case 0x5a43b8:c.instructions+=18;goto B5a43b8;
case 0x5a43bc:c.instructions+=17;goto B5a43bc;
case 0x5a43c2:c.instructions+=16;goto B5a43c2;
case 0x5a43c5:c.instructions+=15;goto B5a43c5;
case 0x5a43c8:c.instructions+=14;goto B5a43c8;
case 0x5a43ca:c.instructions+=13;goto B5a43ca;
case 0x5a43cd:c.instructions+=12;goto B5a43cd;
case 0x5a43cf:c.instructions+=11;goto B5a43cf;
case 0x5a43d3:c.instructions+=10;goto B5a43d3;
case 0x5a43d6:c.instructions+=9;goto B5a43d6;
case 0x5a43d9:c.instructions+=8;goto B5a43d9;
case 0x5a43db:c.instructions+=7;goto B5a43db;
case 0x5a43de:c.instructions+=6;goto B5a43de;
case 0x5a43e1:c.instructions+=5;goto B5a43e1;
case 0x5a43e7:c.instructions+=4;goto B5a43e7;
case 0x5a43e9:c.instructions+=3;goto B5a43e9;
case 0x5a43ef:c.instructions+=2;goto B5a43ef;
case 0x5a43f5:c.instructions+=1;goto B5a43f5;
case 0x5a43f8:goto L5a43f8;
case 0x5a43f9:c.instructions+=5;goto B5a43f9;
case 0x5a43fa:c.instructions+=4;goto B5a43fa;
case 0x5a43fb:c.instructions+=3;goto B5a43fb;
case 0x5a43fd:c.instructions+=2;goto B5a43fd;
case 0x5a43fe:c.instructions+=1;goto B5a43fe;
case 0x5a4410:goto L5a4410;
case 0x5a4417:c.instructions+=5;goto B5a4417;
case 0x5a4418:c.instructions+=4;goto B5a4418;
case 0x5a4419:c.instructions+=3;goto B5a4419;
case 0x5a441a:c.instructions+=2;goto B5a441a;
case 0x5a441c:c.instructions+=1;goto B5a441c;
case 0x5a441e:goto L5a441e;
case 0x5a4421:c.instructions+=5;goto B5a4421;
case 0x5a4424:c.instructions+=4;goto B5a4424;
case 0x5a4425:c.instructions+=3;goto B5a4425;
case 0x5a442b:c.instructions+=2;goto B5a442b;
case 0x5a4430:c.instructions+=1;goto B5a4430;
case 0x5a4435:goto L5a4435;
case 0x5a4438:c.instructions+=4;goto B5a4438;
case 0x5a443a:c.instructions+=3;goto B5a443a;
case 0x5a443b:c.instructions+=2;goto B5a443b;
case 0x5a443d:c.instructions+=1;goto B5a443d;
case 0x5a4442:goto L5a4442;
case 0x5a4445:c.instructions+=5;goto B5a4445;
case 0x5a4448:c.instructions+=4;goto B5a4448;
case 0x5a444b:c.instructions+=3;goto B5a444b;
case 0x5a444e:c.instructions+=2;goto B5a444e;
case 0x5a4454:c.instructions+=1;goto B5a4454;
case 0x5a4456:goto L5a4456;
case 0x5a4457:goto L5a4457;
case 0x5a445a:c.instructions+=3;goto B5a445a;
case 0x5a445c:c.instructions+=2;goto B5a445c;
case 0x5a445f:c.instructions+=1;goto B5a445f;
case 0x5a4461:goto L5a4461;
case 0x5a4464:c.instructions+=1;goto B5a4464;
case 0x5a4466:goto L5a4466;
case 0x5a4468:goto L5a4468;
case 0x5a446a:c.instructions+=1;goto B5a446a;
case 0x5a446c:goto L5a446c;
case 0x5a446f:c.instructions+=1;goto B5a446f;
case 0x5a4471:goto L5a4471;
case 0x5a4473:goto L5a4473;
case 0x5a4475:c.instructions+=1;goto B5a4475;
case 0x5a4477:goto L5a4477;
case 0x5a4479:c.instructions+=2;goto B5a4479;
case 0x5a447b:c.instructions+=1;goto B5a447b;
case 0x5a447e:goto L5a447e;
case 0x5a4481:c.instructions+=2;goto B5a4481;
case 0x5a4483:c.instructions+=1;goto B5a4483;
case 0x5a4485:goto L5a4485;
case 0x5a4488:c.instructions+=1;goto B5a4488;
case 0x5a448a:goto L5a448a;
case 0x5a448c:c.instructions+=5;goto B5a448c;
case 0x5a448d:c.instructions+=4;goto B5a448d;
case 0x5a448e:c.instructions+=3;goto B5a448e;
case 0x5a4490:c.instructions+=2;goto B5a4490;
case 0x5a4491:c.instructions+=1;goto B5a4491;
case 0x5a44a0:goto L5a44a0;
case 0x5a44a1:c.instructions+=35;goto B5a44a1;
case 0x5a44a3:c.instructions+=34;goto B5a44a3;
case 0x5a44a6:c.instructions+=33;goto B5a44a6;
case 0x5a44a9:c.instructions+=32;goto B5a44a9;
case 0x5a44aa:c.instructions+=31;goto B5a44aa;
case 0x5a44ac:c.instructions+=30;goto B5a44ac;
case 0x5a44af:c.instructions+=29;goto B5a44af;
case 0x5a44b2:c.instructions+=28;goto B5a44b2;
case 0x5a44b4:c.instructions+=27;goto B5a44b4;
case 0x5a44b7:c.instructions+=26;goto B5a44b7;
case 0x5a44ba:c.instructions+=25;goto B5a44ba;
case 0x5a44bd:c.instructions+=24;goto B5a44bd;
case 0x5a44c1:c.instructions+=23;goto B5a44c1;
case 0x5a44c4:c.instructions+=22;goto B5a44c4;
case 0x5a44c7:c.instructions+=21;goto B5a44c7;
case 0x5a44cb:c.instructions+=20;goto B5a44cb;
case 0x5a44d1:c.instructions+=19;goto B5a44d1;
case 0x5a44d4:c.instructions+=18;goto B5a44d4;
case 0x5a44d8:c.instructions+=17;goto B5a44d8;
case 0x5a44dc:c.instructions+=16;goto B5a44dc;
case 0x5a44e0:c.instructions+=15;goto B5a44e0;
case 0x5a44e4:c.instructions+=14;goto B5a44e4;
case 0x5a44e8:c.instructions+=13;goto B5a44e8;
case 0x5a44ec:c.instructions+=12;goto B5a44ec;
case 0x5a44f0:c.instructions+=11;goto B5a44f0;
case 0x5a44f4:c.instructions+=10;goto B5a44f4;
case 0x5a44f8:c.instructions+=9;goto B5a44f8;
case 0x5a44fa:c.instructions+=8;goto B5a44fa;
case 0x5a44fe:c.instructions+=7;goto B5a44fe;
case 0x5a4502:c.instructions+=6;goto B5a4502;
case 0x5a4506:c.instructions+=5;goto B5a4506;
case 0x5a4509:c.instructions+=4;goto B5a4509;
case 0x5a450c:c.instructions+=3;goto B5a450c;
case 0x5a450d:c.instructions+=2;goto B5a450d;
case 0x5a450e:c.instructions+=1;goto B5a450e;
case 0x5a4513:goto L5a4513;
case 0x5a4516:c.instructions+=13;goto B5a4516;
case 0x5a451a:c.instructions+=12;goto B5a451a;
case 0x5a451d:c.instructions+=11;goto B5a451d;
case 0x5a4521:c.instructions+=10;goto B5a4521;
case 0x5a4527:c.instructions+=9;goto B5a4527;
case 0x5a452b:c.instructions+=8;goto B5a452b;
case 0x5a452e:c.instructions+=7;goto B5a452e;
case 0x5a4532:c.instructions+=6;goto B5a4532;
case 0x5a4534:c.instructions+=5;goto B5a4534;
case 0x5a4536:c.instructions+=4;goto B5a4536;
case 0x5a453c:c.instructions+=3;goto B5a453c;
case 0x5a453e:c.instructions+=2;goto B5a453e;
case 0x5a4541:c.instructions+=1;goto B5a4541;
case 0x5a4543:goto L5a4543;
case 0x5a4545:c.instructions+=5;goto B5a4545;
case 0x5a4547:c.instructions+=4;goto B5a4547;
case 0x5a454d:c.instructions+=3;goto B5a454d;
case 0x5a4551:c.instructions+=2;goto B5a4551;
case 0x5a4554:c.instructions+=1;goto B5a4554;
case 0x5a4556:goto L5a4556;
case 0x5a455c:c.instructions+=3;goto B5a455c;
case 0x5a455e:c.instructions+=2;goto B5a455e;
case 0x5a4561:c.instructions+=1;goto B5a4561;
case 0x5a4563:goto L5a4563;
case 0x5a4565:c.instructions+=3;goto B5a4565;
case 0x5a4568:c.instructions+=2;goto B5a4568;
case 0x5a456e:c.instructions+=1;goto B5a456e;
case 0x5a4572:goto L5a4572;
case 0x5a4576:c.instructions+=8;goto B5a4576;
case 0x5a4579:c.instructions+=7;goto B5a4579;
case 0x5a457b:c.instructions+=6;goto B5a457b;
case 0x5a457d:c.instructions+=5;goto B5a457d;
case 0x5a4580:c.instructions+=4;goto B5a4580;
case 0x5a4586:c.instructions+=3;goto B5a4586;
case 0x5a458a:c.instructions+=2;goto B5a458a;
case 0x5a458c:c.instructions+=1;goto B5a458c;
case 0x5a4592:goto L5a4592;
case 0x5a4596:c.instructions+=20;goto B5a4596;
case 0x5a459c:c.instructions+=19;goto B5a459c;
case 0x5a45a2:c.instructions+=18;goto B5a45a2;
case 0x5a45a6:c.instructions+=17;goto B5a45a6;
case 0x5a45ac:c.instructions+=16;goto B5a45ac;
case 0x5a45ad:c.instructions+=15;goto B5a45ad;
case 0x5a45b1:c.instructions+=14;goto B5a45b1;
case 0x5a45b7:c.instructions+=13;goto B5a45b7;
case 0x5a45bb:c.instructions+=12;goto B5a45bb;
case 0x5a45bd:c.instructions+=11;goto B5a45bd;
case 0x5a45c1:c.instructions+=10;goto B5a45c1;
case 0x5a45c3:c.instructions+=9;goto B5a45c3;
case 0x5a45c4:c.instructions+=8;goto B5a45c4;
case 0x5a45c8:c.instructions+=7;goto B5a45c8;
case 0x5a45d0:c.instructions+=6;goto B5a45d0;
case 0x5a45d8:c.instructions+=5;goto B5a45d8;
case 0x5a45da:c.instructions+=4;goto B5a45da;
case 0x5a45e2:c.instructions+=3;goto B5a45e2;
case 0x5a45e6:c.instructions+=2;goto B5a45e6;
case 0x5a45e8:c.instructions+=1;goto B5a45e8;
case 0x5a45ed:goto L5a45ed;
case 0x5a45f2:c.instructions+=7;goto B5a45f2;
case 0x5a45f8:c.instructions+=6;goto B5a45f8;
case 0x5a45fc:c.instructions+=5;goto B5a45fc;
case 0x5a45ff:c.instructions+=4;goto B5a45ff;
case 0x5a4605:c.instructions+=3;goto B5a4605;
case 0x5a4607:c.instructions+=2;goto B5a4607;
case 0x5a460d:c.instructions+=1;goto B5a460d;
case 0x5a460f:goto L5a460f;
case 0x5a4615:goto L5a4615;
case 0x5a4619:c.instructions+=14;goto B5a4619;
case 0x5a461f:c.instructions+=13;goto B5a461f;
case 0x5a4622:c.instructions+=12;goto B5a4622;
case 0x5a4624:c.instructions+=11;goto B5a4624;
case 0x5a462a:c.instructions+=10;goto B5a462a;
case 0x5a4630:c.instructions+=9;goto B5a4630;
case 0x5a4634:c.instructions+=8;goto B5a4634;
case 0x5a463a:c.instructions+=7;goto B5a463a;
case 0x5a4640:c.instructions+=6;goto B5a4640;
case 0x5a4646:c.instructions+=5;goto B5a4646;
case 0x5a464c:c.instructions+=4;goto B5a464c;
case 0x5a464d:c.instructions+=3;goto B5a464d;
case 0x5a464f:c.instructions+=2;goto B5a464f;
case 0x5a4650:c.instructions+=1;goto B5a4650;
case 0x5a4653:goto L5a4653;
case 0x5a4659:c.instructions+=17;goto B5a4659;
case 0x5a465d:c.instructions+=16;goto B5a465d;
case 0x5a4663:c.instructions+=15;goto B5a4663;
case 0x5a4669:c.instructions+=14;goto B5a4669;
case 0x5a466d:c.instructions+=13;goto B5a466d;
case 0x5a4671:c.instructions+=12;goto B5a4671;
case 0x5a4673:c.instructions+=11;goto B5a4673;
case 0x5a4677:c.instructions+=10;goto B5a4677;
case 0x5a467b:c.instructions+=9;goto B5a467b;
case 0x5a467f:c.instructions+=8;goto B5a467f;
case 0x5a4680:c.instructions+=7;goto B5a4680;
case 0x5a4684:c.instructions+=6;goto B5a4684;
case 0x5a4685:c.instructions+=5;goto B5a4685;
case 0x5a4688:c.instructions+=4;goto B5a4688;
case 0x5a4689:c.instructions+=3;goto B5a4689;
case 0x5a468c:c.instructions+=2;goto B5a468c;
case 0x5a468d:c.instructions+=1;goto B5a468d;
case 0x5a4692:goto L5a4692;
case 0x5a4693:c.instructions+=3;goto B5a4693;
case 0x5a4695:c.instructions+=2;goto B5a4695;
case 0x5a4696:c.instructions+=1;goto B5a4696;
case 0x5a46a0:goto L5a46a0;
case 0x5a46a1:c.instructions+=40;goto B5a46a1;
case 0x5a46a3:c.instructions+=39;goto B5a46a3;
case 0x5a46a6:c.instructions+=38;goto B5a46a6;
case 0x5a46a9:c.instructions+=37;goto B5a46a9;
case 0x5a46af:c.instructions+=36;goto B5a46af;
case 0x5a46b5:c.instructions+=35;goto B5a46b5;
case 0x5a46bb:c.instructions+=34;goto B5a46bb;
case 0x5a46bf:c.instructions+=33;goto B5a46bf;
case 0x5a46c2:c.instructions+=32;goto B5a46c2;
case 0x5a46c6:c.instructions+=31;goto B5a46c6;
case 0x5a46c9:c.instructions+=30;goto B5a46c9;
case 0x5a46cf:c.instructions+=29;goto B5a46cf;
case 0x5a46d2:c.instructions+=28;goto B5a46d2;
case 0x5a46d8:c.instructions+=27;goto B5a46d8;
case 0x5a46dc:c.instructions+=26;goto B5a46dc;
case 0x5a46de:c.instructions+=25;goto B5a46de;
case 0x5a46e2:c.instructions+=24;goto B5a46e2;
case 0x5a46e6:c.instructions+=23;goto B5a46e6;
case 0x5a46e8:c.instructions+=22;goto B5a46e8;
case 0x5a46ec:c.instructions+=21;goto B5a46ec;
case 0x5a46ee:c.instructions+=20;goto B5a46ee;
case 0x5a46f0:c.instructions+=19;goto B5a46f0;
case 0x5a46f2:c.instructions+=18;goto B5a46f2;
case 0x5a46f6:c.instructions+=17;goto B5a46f6;
case 0x5a46f9:c.instructions+=16;goto B5a46f9;
case 0x5a46fc:c.instructions+=15;goto B5a46fc;
case 0x5a4702:c.instructions+=14;goto B5a4702;
case 0x5a4706:c.instructions+=13;goto B5a4706;
case 0x5a4708:c.instructions+=12;goto B5a4708;
case 0x5a470c:c.instructions+=11;goto B5a470c;
case 0x5a4710:c.instructions+=10;goto B5a4710;
case 0x5a4714:c.instructions+=9;goto B5a4714;
case 0x5a4716:c.instructions+=8;goto B5a4716;
case 0x5a471a:c.instructions+=7;goto B5a471a;
case 0x5a4720:c.instructions+=6;goto B5a4720;
case 0x5a4726:c.instructions+=5;goto B5a4726;
case 0x5a472c:c.instructions+=4;goto B5a472c;
case 0x5a4732:c.instructions+=3;goto B5a4732;
case 0x5a4734:c.instructions+=2;goto B5a4734;
case 0x5a4735:c.instructions+=1;goto B5a4735;
case 0x5a4740:goto L5a4740;
case 0x5a4745:c.instructions+=4;goto B5a4745;
case 0x5a4746:c.instructions+=3;goto B5a4746;
case 0x5a4748:c.instructions+=2;goto B5a4748;
case 0x5a474e:c.instructions+=1;goto B5a474e;
case 0x5a4750:goto L5a4750;
case 0x5a4751:c.instructions+=1;goto B5a4751;
case 0x5a4756:goto L5a4756;
case 0x5a4759:goto L5a4759;
case 0x5a475b:c.instructions+=2;goto B5a475b;
case 0x5a475c:c.instructions+=1;goto B5a475c;
case 0x5a4760:goto L5a4760;
case 0x5a4767:c.instructions+=1;goto B5a4767;
case 0x5a4770:goto L5a4770;
case 0x5a4771:c.instructions+=2;goto B5a4771;
case 0x5a4773:c.instructions+=1;goto B5a4773;
case 0x5a4778:goto L5a4778;
case 0x5a477d:c.instructions+=1;goto B5a477d;
case 0x5a477f:goto L5a477f;
case 0x5a4784:c.instructions+=3;goto B5a4784;
case 0x5a4785:c.instructions+=2;goto B5a4785;
case 0x5a4786:c.instructions+=1;goto B5a4786;
case 0x5a478b:goto L5a478b;
case 0x5a478e:goto L5a478e;
case 0x5a4790:c.instructions+=2;goto B5a4790;
case 0x5a4791:c.instructions+=1;goto B5a4791;
case 0x5a47a0:goto L5a47a0;
case 0x5a47a6:c.instructions+=1;goto B5a47a6;
case 0x5a47b0:goto L5a47b0;
case 0x5a47b1:c.instructions+=12;goto B5a47b1;
case 0x5a47b3:c.instructions+=11;goto B5a47b3;
case 0x5a47b6:c.instructions+=10;goto B5a47b6;
case 0x5a47b7:c.instructions+=9;goto B5a47b7;
case 0x5a47b8:c.instructions+=8;goto B5a47b8;
case 0x5a47b9:c.instructions+=7;goto B5a47b9;
case 0x5a47bc:c.instructions+=6;goto B5a47bc;
case 0x5a47bd:c.instructions+=5;goto B5a47bd;
case 0x5a47c2:c.instructions+=4;goto B5a47c2;
case 0x5a47c4:c.instructions+=3;goto B5a47c4;
case 0x5a47c6:c.instructions+=2;goto B5a47c6;
case 0x5a47c8:c.instructions+=1;goto B5a47c8;
case 0x5a47cd:goto L5a47cd;
case 0x5a47d0:c.instructions+=3;goto B5a47d0;
case 0x5a47d1:c.instructions+=2;goto B5a47d1;
case 0x5a47d3:c.instructions+=1;goto B5a47d3;
case 0x5a47d8:goto L5a47d8;
case 0x5a47da:c.instructions+=6;goto B5a47da;
case 0x5a47dc:c.instructions+=5;goto B5a47dc;
case 0x5a47de:c.instructions+=4;goto B5a47de;
case 0x5a47e1:c.instructions+=3;goto B5a47e1;
case 0x5a47e2:c.instructions+=2;goto B5a47e2;
case 0x5a47e4:c.instructions+=1;goto B5a47e4;
case 0x5a47e9:goto L5a47e9;
case 0x5a47ec:c.instructions+=2;goto B5a47ec;
case 0x5a47ed:c.instructions+=1;goto B5a47ed;
case 0x5a47f2:goto L5a47f2;
case 0x5a47f5:c.instructions+=3;goto B5a47f5;
case 0x5a47f7:c.instructions+=2;goto B5a47f7;
case 0x5a47f8:c.instructions+=1;goto B5a47f8;
case 0x5a47fb:goto L5a47fb;
case 0x5a47fe:c.instructions+=1;goto B5a47fe;
case 0x5a4806:goto L5a4806;
case 0x5a4809:c.instructions+=2;goto B5a4809;
case 0x5a480a:c.instructions+=1;goto B5a480a;
case 0x5a480f:goto L5a480f;
case 0x5a4811:c.instructions+=2;goto B5a4811;
case 0x5a4812:c.instructions+=1;goto B5a4812;
case 0x5a4817:goto L5a4817;
case 0x5a4819:c.instructions+=6;goto B5a4819;
case 0x5a481b:c.instructions+=5;goto B5a481b;
case 0x5a481d:c.instructions+=4;goto B5a481d;
case 0x5a4820:c.instructions+=3;goto B5a4820;
case 0x5a4821:c.instructions+=2;goto B5a4821;
case 0x5a4823:c.instructions+=1;goto B5a4823;
case 0x5a4828:goto L5a4828;
case 0x5a482c:c.instructions+=4;goto B5a482c;
case 0x5a482f:c.instructions+=3;goto B5a482f;
case 0x5a4830:c.instructions+=2;goto B5a4830;
case 0x5a4834:c.instructions+=1;goto B5a4834;
case 0x5a4836:goto L5a4836;
case 0x5a4839:c.instructions+=2;goto B5a4839;
case 0x5a483a:c.instructions+=1;goto B5a483a;
case 0x5a483f:goto L5a483f;
case 0x5a4842:c.instructions+=2;goto B5a4842;
case 0x5a4843:c.instructions+=1;goto B5a4843;
case 0x5a4848:goto L5a4848;
case 0x5a484b:c.instructions+=3;goto B5a484b;
case 0x5a484e:c.instructions+=2;goto B5a484e;
case 0x5a4851:c.instructions+=1;goto B5a4851;
case 0x5a4853:goto L5a4853;
case 0x5a4855:c.instructions+=9;goto B5a4855;
case 0x5a485a:c.instructions+=8;goto B5a485a;
case 0x5a485d:c.instructions+=7;goto B5a485d;
case 0x5a4860:c.instructions+=6;goto B5a4860;
case 0x5a4863:c.instructions+=5;goto B5a4863;
case 0x5a4866:c.instructions+=4;goto B5a4866;
case 0x5a4869:c.instructions+=3;goto B5a4869;
case 0x5a486c:c.instructions+=2;goto B5a486c;
case 0x5a486f:c.instructions+=1;goto B5a486f;
case 0x5a4872:goto L5a4872;
case 0x5a4873:c.instructions+=2;goto B5a4873;
case 0x5a4875:c.instructions+=1;goto B5a4875;
case 0x5a487a:goto L5a487a;
case 0x5a487d:c.instructions+=3;goto B5a487d;
case 0x5a487e:c.instructions+=2;goto B5a487e;
case 0x5a4880:c.instructions+=1;goto B5a4880;
case 0x5a4885:goto L5a4885;
case 0x5a4888:c.instructions+=3;goto B5a4888;
case 0x5a4889:c.instructions+=2;goto B5a4889;
case 0x5a488b:c.instructions+=1;goto B5a488b;
case 0x5a4890:goto L5a4890;
case 0x5a4892:c.instructions+=1;goto B5a4892;
case 0x5a4897:goto L5a4897;
case 0x5a4898:c.instructions+=5;goto B5a4898;
case 0x5a4899:c.instructions+=4;goto B5a4899;
case 0x5a489a:c.instructions+=3;goto B5a489a;
case 0x5a489c:c.instructions+=2;goto B5a489c;
case 0x5a489d:c.instructions+=1;goto B5a489d;
case 0x5a48a0:goto L5a48a0;
case 0x5a48a1:c.instructions+=15;goto B5a48a1;
case 0x5a48a2:c.instructions+=14;goto B5a48a2;
case 0x5a48a4:c.instructions+=13;goto B5a48a4;
case 0x5a48a7:c.instructions+=12;goto B5a48a7;
case 0x5a48ad:c.instructions+=11;goto B5a48ad;
case 0x5a48af:c.instructions+=10;goto B5a48af;
case 0x5a48b0:c.instructions+=9;goto B5a48b0;
case 0x5a48b1:c.instructions+=8;goto B5a48b1;
case 0x5a48b4:c.instructions+=7;goto B5a48b4;
case 0x5a48b7:c.instructions+=6;goto B5a48b7;
case 0x5a48b8:c.instructions+=5;goto B5a48b8;
case 0x5a48b9:c.instructions+=4;goto B5a48b9;
case 0x5a48bc:c.instructions+=3;goto B5a48bc;
case 0x5a48bf:c.instructions+=2;goto B5a48bf;
case 0x5a48c0:c.instructions+=1;goto B5a48c0;
case 0x5a48c5:goto L5a48c5;
case 0x5a48c8:c.instructions+=40;goto B5a48c8;
case 0x5a48cb:c.instructions+=39;goto B5a48cb;
case 0x5a48ce:c.instructions+=38;goto B5a48ce;
case 0x5a48d1:c.instructions+=37;goto B5a48d1;
case 0x5a48d7:c.instructions+=36;goto B5a48d7;
case 0x5a48da:c.instructions+=35;goto B5a48da;
case 0x5a48e0:c.instructions+=34;goto B5a48e0;
case 0x5a48e3:c.instructions+=33;goto B5a48e3;
case 0x5a48e6:c.instructions+=32;goto B5a48e6;
case 0x5a48e9:c.instructions+=31;goto B5a48e9;
case 0x5a48ec:c.instructions+=30;goto B5a48ec;
case 0x5a48ef:c.instructions+=29;goto B5a48ef;
case 0x5a48f2:c.instructions+=28;goto B5a48f2;
case 0x5a48f8:c.instructions+=27;goto B5a48f8;
case 0x5a48fb:c.instructions+=26;goto B5a48fb;
case 0x5a4901:c.instructions+=25;goto B5a4901;
case 0x5a4904:c.instructions+=24;goto B5a4904;
case 0x5a4907:c.instructions+=23;goto B5a4907;
case 0x5a490a:c.instructions+=22;goto B5a490a;
case 0x5a490d:c.instructions+=21;goto B5a490d;
case 0x5a4910:c.instructions+=20;goto B5a4910;
case 0x5a4913:c.instructions+=19;goto B5a4913;
case 0x5a4919:c.instructions+=18;goto B5a4919;
case 0x5a491c:c.instructions+=17;goto B5a491c;
case 0x5a4922:c.instructions+=16;goto B5a4922;
case 0x5a4925:c.instructions+=15;goto B5a4925;
case 0x5a4928:c.instructions+=14;goto B5a4928;
case 0x5a492b:c.instructions+=13;goto B5a492b;
case 0x5a492e:c.instructions+=12;goto B5a492e;
case 0x5a4931:c.instructions+=11;goto B5a4931;
case 0x5a4934:c.instructions+=10;goto B5a4934;
case 0x5a493a:c.instructions+=9;goto B5a493a;
case 0x5a493d:c.instructions+=8;goto B5a493d;
case 0x5a4943:c.instructions+=7;goto B5a4943;
case 0x5a4946:c.instructions+=6;goto B5a4946;
case 0x5a4949:c.instructions+=5;goto B5a4949;
case 0x5a494f:c.instructions+=4;goto B5a494f;
case 0x5a4955:c.instructions+=3;goto B5a4955;
case 0x5a4957:c.instructions+=2;goto B5a4957;
case 0x5a495a:c.instructions+=1;goto B5a495a;
case 0x5a495c:goto L5a495c;
case 0x5a4962:c.instructions+=1;goto B5a4962;
case 0x5a4964:goto L5a4964;
case 0x5a4967:c.instructions+=1;goto B5a4967;
case 0x5a496d:goto L5a496d;
case 0x5a4970:c.instructions+=13;goto B5a4970;
case 0x5a4976:c.instructions+=12;goto B5a4976;
case 0x5a4979:c.instructions+=11;goto B5a4979;
case 0x5a497c:c.instructions+=10;goto B5a497c;
case 0x5a497f:c.instructions+=9;goto B5a497f;
case 0x5a4985:c.instructions+=8;goto B5a4985;
case 0x5a4988:c.instructions+=7;goto B5a4988;
case 0x5a4989:c.instructions+=6;goto B5a4989;
case 0x5a498c:c.instructions+=5;goto B5a498c;
case 0x5a498f:c.instructions+=4;goto B5a498f;
case 0x5a4996:c.instructions+=3;goto B5a4996;
case 0x5a499d:c.instructions+=2;goto B5a499d;
case 0x5a499e:c.instructions+=1;goto B5a499e;
case 0x5a49a0:goto L5a49a0;
case 0x5a49a1:c.instructions+=10;goto B5a49a1;
case 0x5a49a7:c.instructions+=9;goto B5a49a7;
case 0x5a49a8:c.instructions+=8;goto B5a49a8;
case 0x5a49a9:c.instructions+=7;goto B5a49a9;
case 0x5a49ab:c.instructions+=6;goto B5a49ab;
case 0x5a49ae:c.instructions+=5;goto B5a49ae;
case 0x5a49b4:c.instructions+=4;goto B5a49b4;
case 0x5a49b6:c.instructions+=3;goto B5a49b6;
case 0x5a49b8:c.instructions+=2;goto B5a49b8;
case 0x5a49bc:c.instructions+=1;goto B5a49bc;
case 0x5a49c2:goto L5a49c2;
case 0x5a49c8:c.instructions+=3;goto B5a49c8;
case 0x5a49ca:c.instructions+=2;goto B5a49ca;
case 0x5a49cc:c.instructions+=1;goto B5a49cc;
case 0x5a49ce:goto L5a49ce;
case 0x5a49d4:c.instructions+=3;goto B5a49d4;
case 0x5a49da:c.instructions+=2;goto B5a49da;
case 0x5a49e0:c.instructions+=1;goto B5a49e0;
case 0x5a49e2:goto L5a49e2;
case 0x5a49e8:goto L5a49e8;
case 0x5a49ee:c.instructions+=1;goto B5a49ee;
case 0x5a49f0:goto L5a49f0;
case 0x5a49f6:c.instructions+=3;goto B5a49f6;
case 0x5a49fc:c.instructions+=2;goto B5a49fc;
case 0x5a4a02:c.instructions+=1;goto B5a4a02;
case 0x5a4a04:goto L5a4a04;
case 0x5a4a0a:goto L5a4a0a;
case 0x5a4a10:c.instructions+=3;goto B5a4a10;
case 0x5a4a12:c.instructions+=2;goto B5a4a12;
case 0x5a4a14:c.instructions+=1;goto B5a4a14;
case 0x5a4a16:goto L5a4a16;
case 0x5a4a1c:c.instructions+=3;goto B5a4a1c;
case 0x5a4a22:c.instructions+=2;goto B5a4a22;
case 0x5a4a28:c.instructions+=1;goto B5a4a28;
case 0x5a4a2a:goto L5a4a2a;
case 0x5a4a30:goto L5a4a30;
case 0x5a4a36:c.instructions+=3;goto B5a4a36;
case 0x5a4a38:c.instructions+=2;goto B5a4a38;
case 0x5a4a3a:c.instructions+=1;goto B5a4a3a;
case 0x5a4a3c:goto L5a4a3c;
case 0x5a4a42:c.instructions+=3;goto B5a4a42;
case 0x5a4a48:c.instructions+=2;goto B5a4a48;
case 0x5a4a4e:c.instructions+=1;goto B5a4a4e;
case 0x5a4a50:goto L5a4a50;
case 0x5a4a56:goto L5a4a56;
case 0x5a4a58:c.instructions+=1;goto B5a4a58;
case 0x5a4a5c:goto L5a4a5c;
case 0x5a4a5f:c.instructions+=6;goto B5a4a5f;
case 0x5a4a62:c.instructions+=5;goto B5a4a62;
case 0x5a4a64:c.instructions+=4;goto B5a4a64;
case 0x5a4a66:c.instructions+=3;goto B5a4a66;
case 0x5a4a67:c.instructions+=2;goto B5a4a67;
case 0x5a4a6c:c.instructions+=1;goto B5a4a6c;
case 0x5a4a72:goto L5a4a72;
case 0x5a4a73:c.instructions+=1;goto B5a4a73;
case 0x5a4a75:goto L5a4a75;
case 0x5a4a76:c.instructions+=1;goto B5a4a76;
case 0x5a4a78:goto L5a4a78;
case 0x5a4a7a:c.instructions+=1;goto B5a4a7a;
case 0x5a4a7f:goto L5a4a7f;
case 0x5a4a82:c.instructions+=18;goto B5a4a82;
case 0x5a4a84:c.instructions+=17;goto B5a4a84;
case 0x5a4a8a:c.instructions+=16;goto B5a4a8a;
case 0x5a4a8d:c.instructions+=15;goto B5a4a8d;
case 0x5a4a93:c.instructions+=14;goto B5a4a93;
case 0x5a4a96:c.instructions+=13;goto B5a4a96;
case 0x5a4a9c:c.instructions+=12;goto B5a4a9c;
case 0x5a4aa2:c.instructions+=11;goto B5a4aa2;
case 0x5a4aa5:c.instructions+=10;goto B5a4aa5;
case 0x5a4aa8:c.instructions+=9;goto B5a4aa8;
case 0x5a4aab:c.instructions+=8;goto B5a4aab;
case 0x5a4ab2:c.instructions+=7;goto B5a4ab2;
case 0x5a4ab5:c.instructions+=6;goto B5a4ab5;
case 0x5a4abb:c.instructions+=5;goto B5a4abb;
case 0x5a4ac1:c.instructions+=4;goto B5a4ac1;
case 0x5a4ac3:c.instructions+=3;goto B5a4ac3;
case 0x5a4ac5:c.instructions+=2;goto B5a4ac5;
case 0x5a4ac8:c.instructions+=1;goto B5a4ac8;
case 0x5a4aca:goto L5a4aca;
case 0x5a4ad2:c.instructions+=4;goto B5a4ad2;
case 0x5a4ad4:c.instructions+=3;goto B5a4ad4;
case 0x5a4ad8:c.instructions+=2;goto B5a4ad8;
case 0x5a4ad9:c.instructions+=1;goto B5a4ad9;
case 0x5a4ade:goto L5a4ade;
case 0x5a4ae0:c.instructions+=1;goto B5a4ae0;
case 0x5a4ae2:goto L5a4ae2;
case 0x5a4ae6:c.instructions+=3;goto B5a4ae6;
case 0x5a4aea:c.instructions+=2;goto B5a4aea;
case 0x5a4aeb:c.instructions+=1;goto B5a4aeb;
case 0x5a4af0:goto L5a4af0;
case 0x5a4af2:c.instructions+=1;goto B5a4af2;
case 0x5a4af4:goto L5a4af4;
case 0x5a4af7:c.instructions+=7;goto B5a4af7;
case 0x5a4afd:c.instructions+=6;goto B5a4afd;
case 0x5a4b00:c.instructions+=5;goto B5a4b00;
case 0x5a4b06:c.instructions+=4;goto B5a4b06;
case 0x5a4b09:c.instructions+=3;goto B5a4b09;
case 0x5a4b13:c.instructions+=2;goto B5a4b13;
case 0x5a4b19:c.instructions+=1;goto B5a4b19;
case 0x5a4b1b:goto L5a4b1b;
case 0x5a4b21:c.instructions+=1;goto B5a4b21;
case 0x5a4b23:goto L5a4b23;
case 0x5a4b29:goto L5a4b29;
case 0x5a4b2c:c.instructions+=4;goto B5a4b2c;
case 0x5a4b2f:c.instructions+=3;goto B5a4b2f;
case 0x5a4b32:c.instructions+=2;goto B5a4b32;
case 0x5a4b34:c.instructions+=1;goto B5a4b34;
case 0x5a4b37:goto L5a4b37;
case 0x5a4b3a:c.instructions+=2;goto B5a4b3a;
case 0x5a4b40:c.instructions+=1;goto B5a4b40;
case 0x5a4b42:goto L5a4b42;
case 0x5a4b44:goto L5a4b44;
case 0x5a4b47:c.instructions+=2;goto B5a4b47;
case 0x5a4b4d:c.instructions+=1;goto B5a4b4d;
case 0x5a4b4f:goto L5a4b4f;
case 0x5a4b51:c.instructions+=1;goto B5a4b51;
case 0x5a4b53:goto L5a4b53;
case 0x5a4b59:c.instructions+=3;goto B5a4b59;
case 0x5a4b5c:c.instructions+=2;goto B5a4b5c;
case 0x5a4b5f:c.instructions+=1;goto B5a4b5f;
case 0x5a4b65:goto L5a4b65;
case 0x5a4b6b:goto L5a4b6b;
case 0x5a4b70:c.instructions+=2;goto B5a4b70;
case 0x5a4b73:c.instructions+=1;goto B5a4b73;
case 0x5a4b79:goto L5a4b79;
case 0x5a4b7f:c.instructions+=1;goto B5a4b7f;
case 0x5a4b81:goto L5a4b81;
case 0x5a4b87:c.instructions+=1;goto B5a4b87;
case 0x5a4b89:goto L5a4b89;
case 0x5a4b8b:c.instructions+=1;goto B5a4b8b;
case 0x5a4b8d:goto L5a4b8d;
case 0x5a4b8f:goto L5a4b8f;
case 0x5a4b91:c.instructions+=2;goto B5a4b91;
case 0x5a4b94:c.instructions+=1;goto B5a4b94;
case 0x5a4b96:goto L5a4b96;
case 0x5a4b9c:c.instructions+=5;goto B5a4b9c;
case 0x5a4ba2:c.instructions+=4;goto B5a4ba2;
case 0x5a4ba4:c.instructions+=3;goto B5a4ba4;
case 0x5a4ba6:c.instructions+=2;goto B5a4ba6;
case 0x5a4ba9:c.instructions+=1;goto B5a4ba9;
case 0x5a4bab:goto L5a4bab;
case 0x5a4bad:c.instructions+=2;goto B5a4bad;
case 0x5a4bb3:c.instructions+=1;goto B5a4bb3;
case 0x5a4bb5:goto L5a4bb5;
case 0x5a4bbb:goto L5a4bbb;
case 0x5a4bc1:c.instructions+=6;goto B5a4bc1;
case 0x5a4bc4:c.instructions+=5;goto B5a4bc4;
case 0x5a4bca:c.instructions+=4;goto B5a4bca;
case 0x5a4bd0:c.instructions+=3;goto B5a4bd0;
case 0x5a4bd2:c.instructions+=2;goto B5a4bd2;
case 0x5a4bd5:c.instructions+=1;goto B5a4bd5;
case 0x5a4bd7:goto L5a4bd7;
case 0x5a4bda:c.instructions+=2;goto B5a4bda;
case 0x5a4be1:c.instructions+=1;goto B5a4be1;
case 0x5a4be3:goto L5a4be3;
case 0x5a4be6:c.instructions+=5;goto B5a4be6;
case 0x5a4be8:c.instructions+=4;goto B5a4be8;
case 0x5a4bee:c.instructions+=3;goto B5a4bee;
case 0x5a4bf0:c.instructions+=2;goto B5a4bf0;
case 0x5a4bf3:c.instructions+=1;goto B5a4bf3;
case 0x5a4bf5:goto L5a4bf5;
case 0x5a4bf8:c.instructions+=1;goto B5a4bf8;
case 0x5a4bfe:goto L5a4bfe;
case 0x5a4c01:c.instructions+=6;goto B5a4c01;
case 0x5a4c07:c.instructions+=5;goto B5a4c07;
case 0x5a4c0b:c.instructions+=4;goto B5a4c0b;
case 0x5a4c11:c.instructions+=3;goto B5a4c11;
case 0x5a4c13:c.instructions+=2;goto B5a4c13;
case 0x5a4c16:c.instructions+=1;goto B5a4c16;
case 0x5a4c18:goto L5a4c18;
case 0x5a4c1e:c.instructions+=1;goto B5a4c1e;
case 0x5a4c20:goto L5a4c20;
case 0x5a4c24:c.instructions+=2;goto B5a4c24;
case 0x5a4c25:c.instructions+=1;goto B5a4c25;
case 0x5a4c27:goto L5a4c27;
case 0x5a4c2d:c.instructions+=2;goto B5a4c2d;
case 0x5a4c2e:c.instructions+=1;goto B5a4c2e;
case 0x5a4c31:goto L5a4c31;
case 0x5a4c33:c.instructions+=1;goto B5a4c33;
case 0x5a4c38:goto L5a4c38;
case 0x5a4c3e:c.instructions+=1;goto B5a4c3e;
case 0x5a4c40:goto L5a4c40;
case 0x5a4c43:c.instructions+=2;goto B5a4c43;
case 0x5a4c4d:c.instructions+=1;goto B5a4c4d;
case 0x5a4c52:goto L5a4c52;
case 0x5a4c55:c.instructions+=3;goto B5a4c55;
case 0x5a4c5b:c.instructions+=2;goto B5a4c5b;
case 0x5a4c5e:c.instructions+=1;goto B5a4c5e;
case 0x5a4c60:goto L5a4c60;
case 0x5a4c66:c.instructions+=3;goto B5a4c66;
case 0x5a4c69:c.instructions+=2;goto B5a4c69;
case 0x5a4c6f:c.instructions+=1;goto B5a4c6f;
case 0x5a4c71:goto L5a4c71;
case 0x5a4c77:c.instructions+=6;goto B5a4c77;
case 0x5a4c7b:c.instructions+=5;goto B5a4c7b;
case 0x5a4c7f:c.instructions+=4;goto B5a4c7f;
case 0x5a4c85:c.instructions+=3;goto B5a4c85;
case 0x5a4c87:c.instructions+=2;goto B5a4c87;
case 0x5a4c8a:c.instructions+=1;goto B5a4c8a;
case 0x5a4c8c:goto L5a4c8c;
case 0x5a4c92:c.instructions+=5;goto B5a4c92;
case 0x5a4c95:c.instructions+=4;goto B5a4c95;
case 0x5a4c9b:c.instructions+=3;goto B5a4c9b;
case 0x5a4c9d:c.instructions+=2;goto B5a4c9d;
case 0x5a4ca0:c.instructions+=1;goto B5a4ca0;
case 0x5a4ca2:goto L5a4ca2;
case 0x5a4ca8:c.instructions+=1;goto B5a4ca8;
case 0x5a4caa:goto L5a4caa;
case 0x5a4caf:goto L5a4caf;
case 0x5a4cb1:c.instructions+=5;goto B5a4cb1;
case 0x5a4cb7:c.instructions+=4;goto B5a4cb7;
case 0x5a4cbd:c.instructions+=3;goto B5a4cbd;
case 0x5a4cbf:c.instructions+=2;goto B5a4cbf;
case 0x5a4cc2:c.instructions+=1;goto B5a4cc2;
case 0x5a4cc4:goto L5a4cc4;
case 0x5a4cc6:c.instructions+=4;goto B5a4cc6;
case 0x5a4ccc:c.instructions+=3;goto B5a4ccc;
case 0x5a4cce:c.instructions+=2;goto B5a4cce;
case 0x5a4cd1:c.instructions+=1;goto B5a4cd1;
case 0x5a4cd3:goto L5a4cd3;
case 0x5a4cd9:c.instructions+=2;goto B5a4cd9;
case 0x5a4cdd:c.instructions+=1;goto B5a4cdd;
case 0x5a4cdf:goto L5a4cdf;
case 0x5a4ce1:goto L5a4ce1;
case 0x5a4ce4:c.instructions+=2;goto B5a4ce4;
case 0x5a4ce8:c.instructions+=1;goto B5a4ce8;
case 0x5a4cee:goto L5a4cee;
case 0x5a4cf4:c.instructions+=2;goto B5a4cf4;
case 0x5a4cf5:c.instructions+=1;goto B5a4cf5;
case 0x5a4cf7:goto L5a4cf7;
case 0x5a4cfa:c.instructions+=2;goto B5a4cfa;
case 0x5a4d00:c.instructions+=1;goto B5a4d00;
case 0x5a4d02:goto L5a4d02;
case 0x5a4d05:c.instructions+=3;goto B5a4d05;
case 0x5a4d0b:c.instructions+=2;goto B5a4d0b;
case 0x5a4d0e:c.instructions+=1;goto B5a4d0e;
case 0x5a4d14:goto L5a4d14;
case 0x5a4d17:c.instructions+=5;goto B5a4d17;
case 0x5a4d1d:c.instructions+=4;goto B5a4d1d;
case 0x5a4d23:c.instructions+=3;goto B5a4d23;
case 0x5a4d25:c.instructions+=2;goto B5a4d25;
case 0x5a4d28:c.instructions+=1;goto B5a4d28;
case 0x5a4d2a:goto L5a4d2a;
case 0x5a4d2d:c.instructions+=6;goto B5a4d2d;
case 0x5a4d33:c.instructions+=5;goto B5a4d33;
case 0x5a4d39:c.instructions+=4;goto B5a4d39;
case 0x5a4d3f:c.instructions+=3;goto B5a4d3f;
case 0x5a4d41:c.instructions+=2;goto B5a4d41;
case 0x5a4d44:c.instructions+=1;goto B5a4d44;
case 0x5a4d46:goto L5a4d46;
case 0x5a4d49:c.instructions+=2;goto B5a4d49;
case 0x5a4d4f:c.instructions+=1;goto B5a4d4f;
case 0x5a4d51:goto L5a4d51;
case 0x5a4d54:c.instructions+=5;goto B5a4d54;
case 0x5a4d55:c.instructions+=4;goto B5a4d55;
case 0x5a4d5f:c.instructions+=3;goto B5a4d5f;
case 0x5a4d60:c.instructions+=2;goto B5a4d60;
case 0x5a4d61:c.instructions+=1;goto B5a4d61;
case 0x5a4d62:goto L5a4d62;
case 0x5a4d65:c.instructions+=2;goto B5a4d65;
case 0x5a4d6b:c.instructions+=1;goto B5a4d6b;
case 0x5a4d71:goto L5a4d71;
case 0x5a4d72:c.instructions+=3;goto B5a4d72;
case 0x5a4d73:c.instructions+=2;goto B5a4d73;
case 0x5a4d74:c.instructions+=1;goto B5a4d74;
case 0x5a4d80:goto L5a4d80;
case 0x5a4d83:c.instructions+=14;goto B5a4d83;
case 0x5a4d84:c.instructions+=13;goto B5a4d84;
case 0x5a4d85:c.instructions+=12;goto B5a4d85;
case 0x5a4d86:c.instructions+=11;goto B5a4d86;
case 0x5a4d88:c.instructions+=10;goto B5a4d88;
case 0x5a4d8b:c.instructions+=9;goto B5a4d8b;
case 0x5a4d8f:c.instructions+=8;goto B5a4d8f;
case 0x5a4d92:c.instructions+=7;goto B5a4d92;
case 0x5a4d98:c.instructions+=6;goto B5a4d98;
case 0x5a4d9e:c.instructions+=5;goto B5a4d9e;
case 0x5a4da0:c.instructions+=4;goto B5a4da0;
case 0x5a4da6:c.instructions+=3;goto B5a4da6;
case 0x5a4da7:c.instructions+=2;goto B5a4da7;
case 0x5a4dab:c.instructions+=1;goto B5a4dab;
case 0x5a4dad:goto L5a4dad;
case 0x5a4db2:c.instructions+=2;goto B5a4db2;
case 0x5a4db4:c.instructions+=1;goto B5a4db4;
case 0x5a4db6:goto L5a4db6;
case 0x5a4dbb:c.instructions+=2;goto B5a4dbb;
case 0x5a4dbd:c.instructions+=1;goto B5a4dbd;
case 0x5a4dbf:goto L5a4dbf;
case 0x5a4dc4:c.instructions+=2;goto B5a4dc4;
case 0x5a4dc6:c.instructions+=1;goto B5a4dc6;
case 0x5a4dc8:goto L5a4dc8;
case 0x5a4dcd:c.instructions+=2;goto B5a4dcd;
case 0x5a4dcf:c.instructions+=1;goto B5a4dcf;
case 0x5a4dd1:goto L5a4dd1;
case 0x5a4dd6:c.instructions+=2;goto B5a4dd6;
case 0x5a4dd8:c.instructions+=1;goto B5a4dd8;
case 0x5a4dda:goto L5a4dda;
case 0x5a4de0:c.instructions+=2;goto B5a4de0;
case 0x5a4de4:c.instructions+=1;goto B5a4de4;
case 0x5a4de8:goto L5a4de8;
case 0x5a4deb:c.instructions+=6;goto B5a4deb;
case 0x5a4dee:c.instructions+=5;goto B5a4dee;
case 0x5a4df4:c.instructions+=4;goto B5a4df4;
case 0x5a4dfa:c.instructions+=3;goto B5a4dfa;
case 0x5a4dfc:c.instructions+=2;goto B5a4dfc;
case 0x5a4dff:c.instructions+=1;goto B5a4dff;
case 0x5a4e01:goto L5a4e01;
case 0x5a4e07:c.instructions+=9;goto B5a4e07;
case 0x5a4e0b:c.instructions+=8;goto B5a4e0b;
case 0x5a4e0d:c.instructions+=7;goto B5a4e0d;
case 0x5a4e11:c.instructions+=6;goto B5a4e11;
case 0x5a4e13:c.instructions+=5;goto B5a4e13;
case 0x5a4e17:c.instructions+=4;goto B5a4e17;
case 0x5a4e1d:c.instructions+=3;goto B5a4e1d;
case 0x5a4e1f:c.instructions+=2;goto B5a4e1f;
case 0x5a4e22:c.instructions+=1;goto B5a4e22;
case 0x5a4e24:goto L5a4e24;
case 0x5a4e2a:c.instructions+=2;goto B5a4e2a;
case 0x5a4e2e:c.instructions+=1;goto B5a4e2e;
case 0x5a4e30:goto L5a4e30;
case 0x5a4e36:c.instructions+=9;goto B5a4e36;
case 0x5a4e3a:c.instructions+=8;goto B5a4e3a;
case 0x5a4e3c:c.instructions+=7;goto B5a4e3c;
case 0x5a4e40:c.instructions+=6;goto B5a4e40;
case 0x5a4e42:c.instructions+=5;goto B5a4e42;
case 0x5a4e46:c.instructions+=4;goto B5a4e46;
case 0x5a4e4c:c.instructions+=3;goto B5a4e4c;
case 0x5a4e4e:c.instructions+=2;goto B5a4e4e;
case 0x5a4e51:c.instructions+=1;goto B5a4e51;
case 0x5a4e53:goto L5a4e53;
case 0x5a4e5b:goto L5a4e5b;
case 0x5a4e5f:c.instructions+=3;goto B5a4e5f;
case 0x5a4e62:c.instructions+=2;goto B5a4e62;
case 0x5a4e65:c.instructions+=1;goto B5a4e65;
case 0x5a4e6a:goto L5a4e6a;
case 0x5a4e70:c.instructions+=15;goto B5a4e70;
case 0x5a4e76:c.instructions+=14;goto B5a4e76;
case 0x5a4e78:c.instructions+=13;goto B5a4e78;
case 0x5a4e7c:c.instructions+=12;goto B5a4e7c;
case 0x5a4e7f:c.instructions+=11;goto B5a4e7f;
case 0x5a4e81:c.instructions+=10;goto B5a4e81;
case 0x5a4e87:c.instructions+=9;goto B5a4e87;
case 0x5a4e8b:c.instructions+=8;goto B5a4e8b;
case 0x5a4e8f:c.instructions+=7;goto B5a4e8f;
case 0x5a4e90:c.instructions+=6;goto B5a4e90;
case 0x5a4e93:c.instructions+=5;goto B5a4e93;
case 0x5a4e99:c.instructions+=4;goto B5a4e99;
case 0x5a4e9f:c.instructions+=3;goto B5a4e9f;
case 0x5a4ea1:c.instructions+=2;goto B5a4ea1;
case 0x5a4ea4:c.instructions+=1;goto B5a4ea4;
case 0x5a4ea6:goto L5a4ea6;
case 0x5a4eac:c.instructions+=4;goto B5a4eac;
case 0x5a4eb2:c.instructions+=3;goto B5a4eb2;
case 0x5a4eb4:c.instructions+=2;goto B5a4eb4;
case 0x5a4eb7:c.instructions+=1;goto B5a4eb7;
case 0x5a4eb9:goto L5a4eb9;
case 0x5a4ebd:c.instructions+=4;goto B5a4ebd;
case 0x5a4ec3:c.instructions+=3;goto B5a4ec3;
case 0x5a4ec5:c.instructions+=2;goto B5a4ec5;
case 0x5a4ec8:c.instructions+=1;goto B5a4ec8;
case 0x5a4eca:goto L5a4eca;
case 0x5a4ecd:c.instructions+=1;goto B5a4ecd;
case 0x5a4ecf:goto L5a4ecf;
case 0x5a4ed3:c.instructions+=4;goto B5a4ed3;
case 0x5a4ed5:c.instructions+=3;goto B5a4ed5;
case 0x5a4edb:c.instructions+=2;goto B5a4edb;
case 0x5a4ee1:c.instructions+=1;goto B5a4ee1;
case 0x5a4ee3:goto L5a4ee3;
case 0x5a4ee6:c.instructions+=4;goto B5a4ee6;
case 0x5a4eec:c.instructions+=3;goto B5a4eec;
case 0x5a4eef:c.instructions+=2;goto B5a4eef;
case 0x5a4ef5:c.instructions+=1;goto B5a4ef5;
case 0x5a4ef7:goto L5a4ef7;
case 0x5a4efd:goto L5a4efd;
case 0x5a4eff:c.instructions+=4;goto B5a4eff;
case 0x5a4f01:c.instructions+=3;goto B5a4f01;
case 0x5a4f03:c.instructions+=2;goto B5a4f03;
case 0x5a4f09:c.instructions+=1;goto B5a4f09;
case 0x5a4f0b:goto L5a4f0b;
case 0x5a4f12:c.instructions+=9;goto B5a4f12;
case 0x5a4f15:c.instructions+=8;goto B5a4f15;
case 0x5a4f1b:c.instructions+=7;goto B5a4f1b;
case 0x5a4f1e:c.instructions+=6;goto B5a4f1e;
case 0x5a4f24:c.instructions+=5;goto B5a4f24;
case 0x5a4f2a:c.instructions+=4;goto B5a4f2a;
case 0x5a4f2c:c.instructions+=3;goto B5a4f2c;
case 0x5a4f30:c.instructions+=2;goto B5a4f30;
case 0x5a4f32:c.instructions+=1;goto B5a4f32;
case 0x5a4f34:goto L5a4f34;
case 0x5a4f37:c.instructions+=1;goto B5a4f37;
case 0x5a4f39:goto L5a4f39;
case 0x5a4f3f:goto L5a4f3f;
case 0x5a4f41:c.instructions+=2;goto B5a4f41;
case 0x5a4f47:c.instructions+=1;goto B5a4f47;
case 0x5a4f49:goto L5a4f49;
case 0x5a4f4c:c.instructions+=1;goto B5a4f4c;
case 0x5a4f4e:goto L5a4f4e;
case 0x5a4f54:c.instructions+=4;goto B5a4f54;
case 0x5a4f5a:c.instructions+=3;goto B5a4f5a;
case 0x5a4f5c:c.instructions+=2;goto B5a4f5c;
case 0x5a4f5f:c.instructions+=1;goto B5a4f5f;
case 0x5a4f61:goto L5a4f61;
case 0x5a4f67:c.instructions+=1;goto B5a4f67;
case 0x5a4f69:goto L5a4f69;
case 0x5a4f6b:c.instructions+=1;goto B5a4f6b;
case 0x5a4f70:goto L5a4f70;
case 0x5a4f74:c.instructions+=2;goto B5a4f74;
case 0x5a4f78:c.instructions+=1;goto B5a4f78;
case 0x5a4f7c:goto L5a4f7c;
case 0x5a4f7e:c.instructions+=4;goto B5a4f7e;
case 0x5a4f84:c.instructions+=3;goto B5a4f84;
case 0x5a4f86:c.instructions+=2;goto B5a4f86;
case 0x5a4f89:c.instructions+=1;goto B5a4f89;
case 0x5a4f8b:goto L5a4f8b;
case 0x5a4f8f:c.instructions+=4;goto B5a4f8f;
case 0x5a4f95:c.instructions+=3;goto B5a4f95;
case 0x5a4f97:c.instructions+=2;goto B5a4f97;
case 0x5a4f9a:c.instructions+=1;goto B5a4f9a;
case 0x5a4f9c:goto L5a4f9c;
case 0x5a4fa2:goto L5a4fa2;
case 0x5a4fa4:c.instructions+=1;goto B5a4fa4;
case 0x5a4faa:goto L5a4faa;
case 0x5a4faf:c.instructions+=3;goto B5a4faf;
case 0x5a4fb3:c.instructions+=2;goto B5a4fb3;
case 0x5a4fb5:c.instructions+=1;goto B5a4fb5;
case 0x5a4fb7:goto L5a4fb7;
case 0x5a4fbc:c.instructions+=2;goto B5a4fbc;
case 0x5a4fbe:c.instructions+=1;goto B5a4fbe;
case 0x5a4fc0:goto L5a4fc0;
case 0x5a4fc5:c.instructions+=2;goto B5a4fc5;
case 0x5a4fc7:c.instructions+=1;goto B5a4fc7;
case 0x5a4fcd:goto L5a4fcd;
case 0x5a4fd2:c.instructions+=2;goto B5a4fd2;
case 0x5a4fd4:c.instructions+=1;goto B5a4fd4;
case 0x5a4fda:goto L5a4fda;
case 0x5a4fdf:c.instructions+=2;goto B5a4fdf;
case 0x5a4fe1:c.instructions+=1;goto B5a4fe1;
case 0x5a4fe7:goto L5a4fe7;
case 0x5a4fec:c.instructions+=2;goto B5a4fec;
case 0x5a4fee:c.instructions+=1;goto B5a4fee;
case 0x5a4ff4:goto L5a4ff4;
case 0x5a4ff9:c.instructions+=2;goto B5a4ff9;
case 0x5a4ffb:c.instructions+=1;goto B5a4ffb;
default:missing_instruction(c.pc);}
B5a4002:L5a4002:{c.instructions+=7;NFSU2_TR(0x5a4002);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4006:{NFSU2_TR(0x5a4006);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a400a:{NFSU2_TR(0x5a400a);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a400e:{NFSU2_TR(0x5a400e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4012:{NFSU2_TR(0x5a4012);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4016:{NFSU2_TR(0x5a4016);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a401a:{NFSU2_TR(0x5a401a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a401full));
TAIL_STATIC(0x59bc60u,59b);
}
B5a401f:L5a401f:{c.instructions+=8;NFSU2_TR(0x5a401f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4023:{NFSU2_TR(0x5a4023);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4027:{NFSU2_TR(0x5a4027);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4029:{NFSU2_TR(0x5a4029);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a402b:{NFSU2_TR(0x5a402b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a402f:{NFSU2_TR(0x5a402f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4033:{NFSU2_TR(0x5a4033);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4037:{NFSU2_TR(0x5a4037);
{goto L5a403b;}
}
B5a4039:L5a4039:{c.instructions+=1;NFSU2_TR(0x5a4039);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a403b:L5a403b:{c.instructions+=12;NFSU2_TR(0x5a403b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a403f:{NFSU2_TR(0x5a403f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4043:{NFSU2_TR(0x5a4043);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4047:{NFSU2_TR(0x5a4047);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5a404a:{NFSU2_TR(0x5a404a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5a404d:{NFSU2_TR(0x5a404d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5a4050:{NFSU2_TR(0x5a4050);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5a4053:{NFSU2_TR(0x5a4053);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a4059:{NFSU2_TR(0x5a4059);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a405d:{NFSU2_TR(0x5a405d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4061:{NFSU2_TR(0x5a4061);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4065:{NFSU2_TR(0x5a4065);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5a3ec0u,5a3);}
}
B5a406b:L5a406b:{c.instructions+=7;NFSU2_TR(0x5a406b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a406f:{NFSU2_TR(0x5a406f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a4070:{NFSU2_TR(0x5a4070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4071:{NFSU2_TR(0x5a4071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a4072:{NFSU2_TR(0x5a4072);
__builtin_memmove((R+16),(R+20),4);
}
B5a4074:{NFSU2_TR(0x5a4074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a4075:{NFSU2_TR(0x5a4075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4080:L5a4080:{c.instructions+=6;NFSU2_TR(0x5a4080);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4083:{NFSU2_TR(0x5a4083);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4087:{NFSU2_TR(0x5a4087);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a408b:{NFSU2_TR(0x5a408b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4091:{NFSU2_TR(0x5a4091);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4097:{NFSU2_TR(0x5a4097);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a40a0:L5a40a0:{c.instructions+=30;NFSU2_TR(0x5a40a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a40a1:{NFSU2_TR(0x5a40a1);
__builtin_memmove((R+20),(R+16),4);
}
B5a40a3:{NFSU2_TR(0x5a40a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a40a6:{NFSU2_TR(0x5a40a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5a40a9:{NFSU2_TR(0x5a40a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a40ac:{NFSU2_TR(0x5a40ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a40ad:{NFSU2_TR(0x5a40ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a40b0:{NFSU2_TR(0x5a40b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a40b1:{NFSU2_TR(0x5a40b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a40b4:{NFSU2_TR(0x5a40b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a40b5:{NFSU2_TR(0x5a40b5);
__builtin_memmove((R+28),(R+4),4);
}
B5a40b7:{NFSU2_TR(0x5a40b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a40ba:{NFSU2_TR(0x5a40ba);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a40bc:{NFSU2_TR(0x5a40bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a40bf:{NFSU2_TR(0x5a40bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a40c2:{NFSU2_TR(0x5a40c2);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a40c5:{NFSU2_TR(0x5a40c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a40c8:{NFSU2_TR(0x5a40c8);
w4(R+4,u32(r2(R+12)));
}
B5a40cb:{NFSU2_TR(0x5a40cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a40cf:{NFSU2_TR(0x5a40cf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a40d3:{NFSU2_TR(0x5a40d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a40d4:{NFSU2_TR(0x5a40d4);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a40d7:{NFSU2_TR(0x5a40d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a40da:{NFSU2_TR(0x5a40da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a40db:{NFSU2_TR(0x5a40db);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a40de:{NFSU2_TR(0x5a40de);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a40e2:{NFSU2_TR(0x5a40e2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a40e6:{NFSU2_TR(0x5a40e6);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a40ec:{NFSU2_TR(0x5a40ec);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a40f0:{NFSU2_TR(0x5a40f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a40f5ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5a40f5:L5a40f5:{c.instructions+=13;NFSU2_TR(0x5a40f5);
w4(R+4,u32(r2(R+0)));
}
B5a40f8:{NFSU2_TR(0x5a40f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a40fc:{NFSU2_TR(0x5a40fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a40ff:{NFSU2_TR(0x5a40ff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a4103:{NFSU2_TR(0x5a4103);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4109:{NFSU2_TR(0x5a4109);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a410d:{NFSU2_TR(0x5a410d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a410f:{NFSU2_TR(0x5a410f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a4113:{NFSU2_TR(0x5a4113);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a4115:{NFSU2_TR(0x5a4115);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a411b:{NFSU2_TR(0x5a411b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a411d:{NFSU2_TR(0x5a411d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4120:{NFSU2_TR(0x5a4120);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4132;}}
}
B5a4122:L5a4122:{c.instructions+=5;NFSU2_TR(0x5a4122);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4124:{NFSU2_TR(0x5a4124);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a412a:{NFSU2_TR(0x5a412a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a412c:{NFSU2_TR(0x5a412c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4130:{NFSU2_TR(0x5a4130);
{goto L5a414b;}
}
B5a4132:L5a4132:{c.instructions+=4;NFSU2_TR(0x5a4132);
{u32 ea_=u32(u32(8002916u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4138:{NFSU2_TR(0x5a4138);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a413a:{NFSU2_TR(0x5a413a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a413d:{NFSU2_TR(0x5a413d);
if(r1(R+514)){{goto L5a414f;}}
}
B5a413f:L5a413f:{c.instructions+=3;NFSU2_TR(0x5a413f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4143:{NFSU2_TR(0x5a4143);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a4149:{NFSU2_TR(0x5a4149);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a414b:L5a414b:{c.instructions+=1;NFSU2_TR(0x5a414b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a414f:L5a414f:{c.instructions+=11;NFSU2_TR(0x5a414f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4151:{NFSU2_TR(0x5a4151);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4155:{NFSU2_TR(0x5a4155);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4159:{NFSU2_TR(0x5a4159);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a415d:{NFSU2_TR(0x5a415d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4161:{NFSU2_TR(0x5a4161);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a4163:{NFSU2_TR(0x5a4163);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a4165:{NFSU2_TR(0x5a4165);
{u32 ea_=u32(u32(8001988u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a416b:{NFSU2_TR(0x5a416b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a416d:{NFSU2_TR(0x5a416d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4170:{NFSU2_TR(0x5a4170);
if(r1(R+518)){{goto L5a4398;}}
}
B5a4176:L5a4176:{c.instructions+=6;NFSU2_TR(0x5a4176);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a417a:{NFSU2_TR(0x5a417a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a417c:{NFSU2_TR(0x5a417c);
{u32 ea_=u32(u32(8001992u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4182:{NFSU2_TR(0x5a4182);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4184:{NFSU2_TR(0x5a4184);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4187:{NFSU2_TR(0x5a4187);
if(r1(R+518)){{goto L5a4398;}}
}
B5a418d:L5a418d:{c.instructions+=5;NFSU2_TR(0x5a418d);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4192:{NFSU2_TR(0x5a4192);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a4195:{NFSU2_TR(0x5a4195);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4196:{NFSU2_TR(0x5a4196);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4197:{NFSU2_TR(0x5a4197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a419cull));
TAIL_STATIC(0x43d190u,43d);
}
B5a419c:L5a419c:{c.instructions+=3;NFSU2_TR(0x5a419c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a419f:{NFSU2_TR(0x5a419f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a41a1:{NFSU2_TR(0x5a41a1);
if(r1(R+518)){{goto L5a41b8;}}
}
B5a41a3:L5a41a3:{c.instructions+=5;NFSU2_TR(0x5a41a3);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a41a9:{NFSU2_TR(0x5a41a9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a41ad:{NFSU2_TR(0x5a41ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a41af:{NFSU2_TR(0x5a41af);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a41b2:{NFSU2_TR(0x5a41b2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a43f8;}}
}
B5a41b8:L5a41b8:{c.instructions+=5;NFSU2_TR(0x5a41b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a41bc:{NFSU2_TR(0x5a41bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a41c0:{NFSU2_TR(0x5a41c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a41c7:{NFSU2_TR(0x5a41c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a41cd:{NFSU2_TR(0x5a41cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a4210;}}
}
B5a41cf:L5a41cf:{c.instructions+=11;NFSU2_TR(0x5a41cf);
__builtin_memmove((R+0),gp(0x7a19e0),4);
}
B5a41d4:{NFSU2_TR(0x5a41d4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a41da:{NFSU2_TR(0x5a41da);
{u32 ea_=u32(u32(8002016u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a41e0:{NFSU2_TR(0x5a41e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a41e1:{NFSU2_TR(0x5a41e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a41e2:{NFSU2_TR(0x5a41e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a41e3:{NFSU2_TR(0x5a41e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a41e7:{NFSU2_TR(0x5a41e7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a41ea:{NFSU2_TR(0x5a41ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a41eb:{NFSU2_TR(0x5a41eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a41f1:{NFSU2_TR(0x5a41f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a41f6ull));
TAIL_STATIC(0x440fa0u,440);
}
B5a41f6:L5a41f6:{c.instructions+=4;NFSU2_TR(0x5a41f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a41f7:{NFSU2_TR(0x5a41f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a41fb:{NFSU2_TR(0x5a41fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a41fc:{NFSU2_TR(0x5a41fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4201ull));
TAIL_STATIC(0x59e5e0u,59e);
}
B5a4201:L5a4201:{c.instructions+=6;NFSU2_TR(0x5a4201);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4204:{NFSU2_TR(0x5a4204);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4207:{NFSU2_TR(0x5a4207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a4209:{NFSU2_TR(0x5a4209);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5a420c:{NFSU2_TR(0x5a420c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5a420e:{NFSU2_TR(0x5a420e);
{goto L5a421a;}
}
B5a4210:L5a4210:{c.instructions+=4;NFSU2_TR(0x5a4210);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4213:{NFSU2_TR(0x5a4213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a4215:{NFSU2_TR(0x5a4215);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4218:{NFSU2_TR(0x5a4218);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5a421a:L5a421a:{c.instructions+=19;NFSU2_TR(0x5a421a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a421c:{NFSU2_TR(0x5a421c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a421f:{NFSU2_TR(0x5a421f);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4222:{NFSU2_TR(0x5a4222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a4224:{NFSU2_TR(0x5a4224);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4227:{NFSU2_TR(0x5a4227);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a422a:{NFSU2_TR(0x5a422a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4230:{NFSU2_TR(0x5a4230);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a4232:{NFSU2_TR(0x5a4232);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4238:{NFSU2_TR(0x5a4238);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a423e:{NFSU2_TR(0x5a423e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4241:{NFSU2_TR(0x5a4241);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5a4248:{NFSU2_TR(0x5a4248);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a424c:{NFSU2_TR(0x5a424c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a4250:{NFSU2_TR(0x5a4250);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4256:{NFSU2_TR(0x5a4256);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a425c:{NFSU2_TR(0x5a425c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a425e:{NFSU2_TR(0x5a425e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4261:{NFSU2_TR(0x5a4261);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4269;}}
}
B5a4263:L5a4263:{c.instructions+=1;NFSU2_TR(0x5a4263);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a4269:L5a4269:{c.instructions+=18;NFSU2_TR(0x5a4269);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a426f:{NFSU2_TR(0x5a426f);
{u32 ea_=u32(u32(8002000u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4275:{NFSU2_TR(0x5a4275);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a4277:{NFSU2_TR(0x5a4277);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5a4279:{NFSU2_TR(0x5a4279);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a427d:{NFSU2_TR(0x5a427d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a4281:{NFSU2_TR(0x5a4281);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a4283:{NFSU2_TR(0x5a4283);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a4285:{NFSU2_TR(0x5a4285);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4286:{NFSU2_TR(0x5a4286);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a428a:{NFSU2_TR(0x5a428a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a428e:{NFSU2_TR(0x5a428e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4290:{NFSU2_TR(0x5a4290);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4291:{NFSU2_TR(0x5a4291);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4295:{NFSU2_TR(0x5a4295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4296:{NFSU2_TR(0x5a4296);
{u32 ea_=u32(u32(8001996u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a429c:{NFSU2_TR(0x5a429c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a429f:{NFSU2_TR(0x5a429f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a42a4ull));
TAIL_STATIC(0x401090u,401);
}
B5a42a4:L5a42a4:{c.instructions+=23;NFSU2_TR(0x5a42a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a42a7:{NFSU2_TR(0x5a42a7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a42ab:{NFSU2_TR(0x5a42ab);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a42ae:{NFSU2_TR(0x5a42ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a42b1:{NFSU2_TR(0x5a42b1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a42b4:{NFSU2_TR(0x5a42b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a42b7:{NFSU2_TR(0x5a42b7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a42b9:{NFSU2_TR(0x5a42b9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a42bb:{NFSU2_TR(0x5a42bb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a42bd:{NFSU2_TR(0x5a42bd);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a42bf:{NFSU2_TR(0x5a42bf);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a42c1:{NFSU2_TR(0x5a42c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a42c3:{NFSU2_TR(0x5a42c3);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a42c5:{NFSU2_TR(0x5a42c5);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a42c7:{NFSU2_TR(0x5a42c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a42c9:{NFSU2_TR(0x5a42c9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a42cb:{NFSU2_TR(0x5a42cb);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a42cd:{NFSU2_TR(0x5a42cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a42cf:{NFSU2_TR(0x5a42cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a42d1:{NFSU2_TR(0x5a42d1);
{u32 ea_=u32(u32(8002004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a42d7:{NFSU2_TR(0x5a42d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a42d9:{NFSU2_TR(0x5a42d9);
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
B5a42dc:{NFSU2_TR(0x5a42dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a434e;}}
}
B5a42de:L5a42de:{c.instructions+=12;NFSU2_TR(0x5a42de);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a42e4:{NFSU2_TR(0x5a42e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a42ea:{NFSU2_TR(0x5a42ea);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a42ed:{NFSU2_TR(0x5a42ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a42ee:{NFSU2_TR(0x5a42ee);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a42f1:{NFSU2_TR(0x5a42f1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a42f4:{NFSU2_TR(0x5a42f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a42f6:{NFSU2_TR(0x5a42f6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a42f8:{NFSU2_TR(0x5a42f8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a42fa:{NFSU2_TR(0x5a42fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a42fc:{NFSU2_TR(0x5a42fc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4300:{NFSU2_TR(0x5a4300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4305ull));
TAIL_STATIC(0x440f70u,440);
}
B5a4305:L5a4305:{c.instructions+=3;NFSU2_TR(0x5a4305);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4306:{NFSU2_TR(0x5a4306);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a430a:{NFSU2_TR(0x5a430a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a430full));
TAIL_STATIC(0x440f70u,440);
}
B5a430f:L5a430f:{c.instructions+=10;NFSU2_TR(0x5a430f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4313:{NFSU2_TR(0x5a4313);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4317:{NFSU2_TR(0x5a4317);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a431a:{NFSU2_TR(0x5a431a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a431e:{NFSU2_TR(0x5a431e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a431f:{NFSU2_TR(0x5a431f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4320:{NFSU2_TR(0x5a4320);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4324:{NFSU2_TR(0x5a4324);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4328:{NFSU2_TR(0x5a4328);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4329:{NFSU2_TR(0x5a4329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a432eull));
TAIL_STATIC(0x4010e0u,401);
}
B5a432e:L5a432e:{c.instructions+=6;NFSU2_TR(0x5a432e);
w4(R+8,u32(r2(R+0)));
}
B5a4331:{NFSU2_TR(0x5a4331);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4335:{NFSU2_TR(0x5a4335);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a4339:{NFSU2_TR(0x5a4339);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a433f:{NFSU2_TR(0x5a433f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4342:{NFSU2_TR(0x5a4342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4347ull));
TAIL_STATIC(0x401090u,401);
}
B5a4347:L5a4347:{c.instructions+=2;NFSU2_TR(0x5a4347);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a434b:{NFSU2_TR(0x5a434b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a434e:L5a434e:{c.instructions+=5;NFSU2_TR(0x5a434e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4352:{NFSU2_TR(0x5a4352);
u8 U[4];
w4(U+0,u32(0x42340000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4357:{NFSU2_TR(0x5a4357);
u8 U[4];
w4(U+0,u32(0xc2340000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a435c:{NFSU2_TR(0x5a435c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a435d:{NFSU2_TR(0x5a435d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4362ull));
TAIL_STATIC(0x401090u,401);
}
B5a4362:L5a4362:{c.instructions+=3;NFSU2_TR(0x5a4362);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4368:{NFSU2_TR(0x5a4368);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a436b:{NFSU2_TR(0x5a436b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4370ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a4370:L5a4370:{c.instructions+=16;NFSU2_TR(0x5a4370);
__builtin_memmove((R+4),(R+0),4);
}
B5a4372:{NFSU2_TR(0x5a4372);
w4(R+0,u32(0xb60b60b7ull));
}
B5a4377:{NFSU2_TR(0x5a4377);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5a4379:{NFSU2_TR(0x5a4379);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a437c:{NFSU2_TR(0x5a437c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5a437e:{NFSU2_TR(0x5a437e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5a4381:{NFSU2_TR(0x5a4381);
__builtin_memmove((R+4),(R+8),4);
}
B5a4383:{NFSU2_TR(0x5a4383);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5a4386:{NFSU2_TR(0x5a4386);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a4388:{NFSU2_TR(0x5a4388);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a438f:{NFSU2_TR(0x5a438f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a4390:{NFSU2_TR(0x5a4390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4391:{NFSU2_TR(0x5a4391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a4392:{NFSU2_TR(0x5a4392);
__builtin_memmove((R+16),(R+20),4);
}
B5a4394:{NFSU2_TR(0x5a4394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a4395:{NFSU2_TR(0x5a4395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4398:L5a4398:{c.instructions+=9;NFSU2_TR(0x5a4398);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a439b:{NFSU2_TR(0x5a439b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a439e:{NFSU2_TR(0x5a439e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a43a0:{NFSU2_TR(0x5a43a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a43a1:{NFSU2_TR(0x5a43a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a43a3:{NFSU2_TR(0x5a43a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a43a7:{NFSU2_TR(0x5a43a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a43a8:{NFSU2_TR(0x5a43a8);
__builtin_memmove((R+4),(R+28),4);
}
B5a43aa:{NFSU2_TR(0x5a43aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a43afull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B5a43af:L5a43af:{c.instructions+=2;NFSU2_TR(0x5a43af);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5a43b3:{NFSU2_TR(0x5a43b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a43f8;}}
}
B5a43b5:L5a43b5:{c.instructions+=19;NFSU2_TR(0x5a43b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a43b8:{NFSU2_TR(0x5a43b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a43bc:{NFSU2_TR(0x5a43bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a43c2:{NFSU2_TR(0x5a43c2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a43c5:{NFSU2_TR(0x5a43c5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a43c8:{NFSU2_TR(0x5a43c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a43ca:{NFSU2_TR(0x5a43ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a43cd:{NFSU2_TR(0x5a43cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a43cf:{NFSU2_TR(0x5a43cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a43d3:{NFSU2_TR(0x5a43d3);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a43d6:{NFSU2_TR(0x5a43d6);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a43d9:{NFSU2_TR(0x5a43d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a43db:{NFSU2_TR(0x5a43db);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a43de:{NFSU2_TR(0x5a43de);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a43e1:{NFSU2_TR(0x5a43e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a43e7:{NFSU2_TR(0x5a43e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a43e9:{NFSU2_TR(0x5a43e9);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a43ef:{NFSU2_TR(0x5a43ef);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a43f5:{NFSU2_TR(0x5a43f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a43f8:L5a43f8:{c.instructions+=6;NFSU2_TR(0x5a43f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a43f9:{NFSU2_TR(0x5a43f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a43fa:{NFSU2_TR(0x5a43fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a43fb:{NFSU2_TR(0x5a43fb);
__builtin_memmove((R+16),(R+20),4);
}
B5a43fd:{NFSU2_TR(0x5a43fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a43fe:{NFSU2_TR(0x5a43fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4410:L5a4410:{c.instructions+=6;NFSU2_TR(0x5a4410);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a4417:{NFSU2_TR(0x5a4417);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4418:{NFSU2_TR(0x5a4418);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4419:{NFSU2_TR(0x5a4419);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a441a:{NFSU2_TR(0x5a441a);
__builtin_memmove((R+12),(R+4),4);
}
B5a441c:{NFSU2_TR(0x5a441c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4457;}}
}
B5a441e:L5a441e:{c.instructions+=6;NFSU2_TR(0x5a441e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4421:{NFSU2_TR(0x5a4421);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4424:{NFSU2_TR(0x5a4424);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4425:{NFSU2_TR(0x5a4425);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a442b:{NFSU2_TR(0x5a442b);
w4(R+28,u32(0x1f8ull));
}
B5a4430:{NFSU2_TR(0x5a4430);
w4(R+24,u32(0x210ull));
}
B5a4435:L5a4435:{c.instructions+=5;NFSU2_TR(0x5a4435);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4438:{NFSU2_TR(0x5a4438);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5a443a:{NFSU2_TR(0x5a443a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a443b:{NFSU2_TR(0x5a443b);
__builtin_memmove((R+4),(R+20),4);
}
B5a443d:{NFSU2_TR(0x5a443d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4442ull));
TAIL_STATIC(0x56d4a0u,56d);
}
B5a4442:L5a4442:{c.instructions+=6;NFSU2_TR(0x5a4442);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4445:{NFSU2_TR(0x5a4445);
{u32 ea_=u32(r4(R+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4448:{NFSU2_TR(0x5a4448);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5a444b:{NFSU2_TR(0x5a444b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a444e:{NFSU2_TR(0x5a444e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x250ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x250ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a4454:{NFSU2_TR(0x5a4454);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a4435u);}goto L5a4435;}}
}
B5a4456:L5a4456:{c.instructions+=1;NFSU2_TR(0x5a4456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a4457:L5a4457:{c.instructions+=4;NFSU2_TR(0x5a4457);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a445a:{NFSU2_TR(0x5a445a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a445c:{NFSU2_TR(0x5a445c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a445f:{NFSU2_TR(0x5a445f);
if(r1(R+518)){{goto L5a4466;}}
}
B5a4461:L5a4461:{c.instructions+=2;NFSU2_TR(0x5a4461);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4464:{NFSU2_TR(0x5a4464);
{goto L5a4468;}
}
B5a4466:L5a4466:{c.instructions+=1;NFSU2_TR(0x5a4466);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a4468:L5a4468:{c.instructions+=2;NFSU2_TR(0x5a4468);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a446a:{NFSU2_TR(0x5a446a);
if(r1(R+518)){{goto L5a4471;}}
}
B5a446c:L5a446c:{c.instructions+=2;NFSU2_TR(0x5a446c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a446f:{NFSU2_TR(0x5a446f);
{goto L5a4473;}
}
B5a4471:L5a4471:{c.instructions+=1;NFSU2_TR(0x5a4471);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a4473:L5a4473:{c.instructions+=2;NFSU2_TR(0x5a4473);
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
B5a4475:{NFSU2_TR(0x5a4475);
if(r1(R+518)){{goto L5a448a;}}
}
B5a4477:L5a4477:{c.instructions+=3;NFSU2_TR(0x5a4477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a4479:{NFSU2_TR(0x5a4479);
__builtin_memmove((R+4),(R+24),4);
}
B5a447b:{NFSU2_TR(0x5a447b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a447eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a447e:L5a447e:{c.instructions+=3;NFSU2_TR(0x5a447e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a4481:{NFSU2_TR(0x5a4481);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4483:{NFSU2_TR(0x5a4483);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a4466u);}goto L5a4466;}}
}
B5a4485:L5a4485:{c.instructions+=2;NFSU2_TR(0x5a4485);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5a4488:{NFSU2_TR(0x5a4488);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a4468u);}goto L5a4468;}
}
B5a448a:L5a448a:{c.instructions+=6;NFSU2_TR(0x5a448a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a448c:{NFSU2_TR(0x5a448c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a448d:{NFSU2_TR(0x5a448d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a448e:{NFSU2_TR(0x5a448e);
__builtin_memmove((R+4),(R+12),4);
}
B5a4490:{NFSU2_TR(0x5a4490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a4491:{NFSU2_TR(0x5a4491);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5a44a0:L5a44a0:{c.instructions+=36;NFSU2_TR(0x5a44a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a44a1:{NFSU2_TR(0x5a44a1);
__builtin_memmove((R+20),(R+16),4);
}
B5a44a3:{NFSU2_TR(0x5a44a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a44a6:{NFSU2_TR(0x5a44a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B5a44a9:{NFSU2_TR(0x5a44a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a44aa:{NFSU2_TR(0x5a44aa);
__builtin_memmove((R+24),(R+4),4);
}
B5a44ac:{NFSU2_TR(0x5a44ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a44af:{NFSU2_TR(0x5a44af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a44b2:{NFSU2_TR(0x5a44b2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a44b4:{NFSU2_TR(0x5a44b4);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a44b7:{NFSU2_TR(0x5a44b7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a44ba:{NFSU2_TR(0x5a44ba);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a44bd:{NFSU2_TR(0x5a44bd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a44c1:{NFSU2_TR(0x5a44c1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a44c4:{NFSU2_TR(0x5a44c4);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a44c7:{NFSU2_TR(0x5a44c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a44cb:{NFSU2_TR(0x5a44cb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a44d1:{NFSU2_TR(0x5a44d1);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a44d4:{NFSU2_TR(0x5a44d4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a44d8:{NFSU2_TR(0x5a44d8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a44dc:{NFSU2_TR(0x5a44dc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a44e0:{NFSU2_TR(0x5a44e0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a44e4:{NFSU2_TR(0x5a44e4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a44e8:{NFSU2_TR(0x5a44e8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a44ec:{NFSU2_TR(0x5a44ec);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a44f0:{NFSU2_TR(0x5a44f0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a44f4:{NFSU2_TR(0x5a44f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a44f8:{NFSU2_TR(0x5a44f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a44fa:{NFSU2_TR(0x5a44fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a44fe:{NFSU2_TR(0x5a44fe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4502:{NFSU2_TR(0x5a4502);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4506:{NFSU2_TR(0x5a4506);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4509:{NFSU2_TR(0x5a4509);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a450c:{NFSU2_TR(0x5a450c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a450d:{NFSU2_TR(0x5a450d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a450e:{NFSU2_TR(0x5a450e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4513ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5a4513:L5a4513:{c.instructions+=14;NFSU2_TR(0x5a4513);
w4(R+4,u32(r2(R+0)));
}
B5a4516:{NFSU2_TR(0x5a4516);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a451a:{NFSU2_TR(0x5a451a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a451d:{NFSU2_TR(0x5a451d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a4521:{NFSU2_TR(0x5a4521);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4527:{NFSU2_TR(0x5a4527);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a452b:{NFSU2_TR(0x5a452b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a452e:{NFSU2_TR(0x5a452e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a4532:{NFSU2_TR(0x5a4532);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a4534:{NFSU2_TR(0x5a4534);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a4536:{NFSU2_TR(0x5a4536);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a453c:{NFSU2_TR(0x5a453c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a453e:{NFSU2_TR(0x5a453e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4541:{NFSU2_TR(0x5a4541);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4556;}}
}
B5a4543:L5a4543:{c.instructions+=6;NFSU2_TR(0x5a4543);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4545:{NFSU2_TR(0x5a4545);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4547:{NFSU2_TR(0x5a4547);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a454d:{NFSU2_TR(0x5a454d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a4551:{NFSU2_TR(0x5a4551);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4554:{NFSU2_TR(0x5a4554);
{goto L5a4572;}
}
B5a4556:L5a4556:{c.instructions+=4;NFSU2_TR(0x5a4556);
{u32 ea_=u32(u32(8002916u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a455c:{NFSU2_TR(0x5a455c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a455e:{NFSU2_TR(0x5a455e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4561:{NFSU2_TR(0x5a4561);
if(r1(R+514)){{goto L5a4572;}}
}
B5a4563:L5a4563:{c.instructions+=4;NFSU2_TR(0x5a4563);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4565:{NFSU2_TR(0x5a4565);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4568:{NFSU2_TR(0x5a4568);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a456e:{NFSU2_TR(0x5a456e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a4572:L5a4572:{c.instructions+=9;NFSU2_TR(0x5a4572);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4576:{NFSU2_TR(0x5a4576);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a4579:{NFSU2_TR(0x5a4579);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a457b:{NFSU2_TR(0x5a457b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a457d:{NFSU2_TR(0x5a457d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4580:{NFSU2_TR(0x5a4580);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4586:{NFSU2_TR(0x5a4586);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a458a:{NFSU2_TR(0x5a458a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a458c:{NFSU2_TR(0x5a458c);
if(r1(R+518)){{goto L5a4653;}}
}
B5a4592:L5a4592:{c.instructions+=21;NFSU2_TR(0x5a4592);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4596:{NFSU2_TR(0x5a4596);
__builtin_memmove((R+8),gp(0x7a19c0),4);
}
B5a459c:{NFSU2_TR(0x5a459c);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a45a2:{NFSU2_TR(0x5a45a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a45a6:{NFSU2_TR(0x5a45a6);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a45ac:{NFSU2_TR(0x5a45ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a45ad:{NFSU2_TR(0x5a45ad);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a45b1:{NFSU2_TR(0x5a45b1);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a45b7:{NFSU2_TR(0x5a45b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a45bb:{NFSU2_TR(0x5a45bb);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a45bd:{NFSU2_TR(0x5a45bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a45c1:{NFSU2_TR(0x5a45c1);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a45c3:{NFSU2_TR(0x5a45c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a45c4:{NFSU2_TR(0x5a45c4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a45c8:{NFSU2_TR(0x5a45c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a45d0:{NFSU2_TR(0x5a45d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a45d8:{NFSU2_TR(0x5a45d8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a45da:{NFSU2_TR(0x5a45da);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a45e2:{NFSU2_TR(0x5a45e2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a45e6:{NFSU2_TR(0x5a45e6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a45e8:{NFSU2_TR(0x5a45e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a45edull));
TAIL_STATIC(0x59bc60u,59b);
}
B5a45ed:L5a45ed:{c.instructions+=8;NFSU2_TR(0x5a45ed);
__builtin_memmove((R+0),gp(0x86b394),4);
}
B5a45f2:{NFSU2_TR(0x5a45f2);
{u32 ea_=u32(u32(8827792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a45f8:{NFSU2_TR(0x5a45f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a45fc:{NFSU2_TR(0x5a45fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a45ff:{NFSU2_TR(0x5a45ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4605:{NFSU2_TR(0x5a4605);
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
B5a4607:{NFSU2_TR(0x5a4607);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a460d:{NFSU2_TR(0x5a460d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4615;}}
}
B5a460f:L5a460f:{c.instructions+=1;NFSU2_TR(0x5a460f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a4615:L5a4615:{c.instructions+=15;NFSU2_TR(0x5a4615);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4619:{NFSU2_TR(0x5a4619);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a461f:{NFSU2_TR(0x5a461f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a4622:{NFSU2_TR(0x5a4622);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a4624:{NFSU2_TR(0x5a4624);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a462a:{NFSU2_TR(0x5a462a);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4630:{NFSU2_TR(0x5a4630);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4634:{NFSU2_TR(0x5a4634);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a463a:{NFSU2_TR(0x5a463a);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4640:{NFSU2_TR(0x5a4640);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4646:{NFSU2_TR(0x5a4646);
{u32 ea_=u32(r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a464c:{NFSU2_TR(0x5a464c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a464d:{NFSU2_TR(0x5a464d);
__builtin_memmove((R+16),(R+20),4);
}
B5a464f:{NFSU2_TR(0x5a464f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a4650:{NFSU2_TR(0x5a4650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4653:L5a4653:{c.instructions+=18;NFSU2_TR(0x5a4653);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4659:{NFSU2_TR(0x5a4659);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a465d:{NFSU2_TR(0x5a465d);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4663:{NFSU2_TR(0x5a4663);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4669:{NFSU2_TR(0x5a4669);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a466d:{NFSU2_TR(0x5a466d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4671:{NFSU2_TR(0x5a4671);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4673:{NFSU2_TR(0x5a4673);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4677:{NFSU2_TR(0x5a4677);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a467b:{NFSU2_TR(0x5a467b);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a467f:{NFSU2_TR(0x5a467f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4680:{NFSU2_TR(0x5a4680);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a4684:{NFSU2_TR(0x5a4684);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4685:{NFSU2_TR(0x5a4685);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a4688:{NFSU2_TR(0x5a4688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4689:{NFSU2_TR(0x5a4689);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a468c:{NFSU2_TR(0x5a468c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a468d:{NFSU2_TR(0x5a468d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4692ull));
TAIL_STATIC(0x59b9b0u,59b);
}
B5a4692:L5a4692:{c.instructions+=4;NFSU2_TR(0x5a4692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4693:{NFSU2_TR(0x5a4693);
__builtin_memmove((R+16),(R+20),4);
}
B5a4695:{NFSU2_TR(0x5a4695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a4696:{NFSU2_TR(0x5a4696);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a46a0:L5a46a0:{c.instructions+=41;NFSU2_TR(0x5a46a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a46a1:{NFSU2_TR(0x5a46a1);
__builtin_memmove((R+20),(R+16),4);
}
B5a46a3:{NFSU2_TR(0x5a46a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a46a6:{NFSU2_TR(0x5a46a6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x30ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a46a9:{NFSU2_TR(0x5a46a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x258ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a46af:{NFSU2_TR(0x5a46af);
{u32 ea_=u32(u32(8827792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a46b5:{NFSU2_TR(0x5a46b5);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a46bb:{NFSU2_TR(0x5a46bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a46bf:{NFSU2_TR(0x5a46bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a46c2:{NFSU2_TR(0x5a46c2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a46c6:{NFSU2_TR(0x5a46c6);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a46c9:{NFSU2_TR(0x5a46c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a46cf:{NFSU2_TR(0x5a46cf);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a46d2:{NFSU2_TR(0x5a46d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a46d8:{NFSU2_TR(0x5a46d8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a46dc:{NFSU2_TR(0x5a46dc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a46de:{NFSU2_TR(0x5a46de);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a46e2:{NFSU2_TR(0x5a46e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a46e6:{NFSU2_TR(0x5a46e6);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5a46e8:{NFSU2_TR(0x5a46e8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a46ec:{NFSU2_TR(0x5a46ec);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a46ee:{NFSU2_TR(0x5a46ee);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5a46f0:{NFSU2_TR(0x5a46f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a46f2:{NFSU2_TR(0x5a46f2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a46f6:{NFSU2_TR(0x5a46f6);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a46f9:{NFSU2_TR(0x5a46f9);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a46fc:{NFSU2_TR(0x5a46fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4702:{NFSU2_TR(0x5a4702);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4706:{NFSU2_TR(0x5a4706);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a4708:{NFSU2_TR(0x5a4708);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a470c:{NFSU2_TR(0x5a470c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4710:{NFSU2_TR(0x5a4710);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4714:{NFSU2_TR(0x5a4714);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a4716:{NFSU2_TR(0x5a4716);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a471a:{NFSU2_TR(0x5a471a);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4720:{NFSU2_TR(0x5a4720);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4726:{NFSU2_TR(0x5a4726);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a472c:{NFSU2_TR(0x5a472c);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4732:{NFSU2_TR(0x5a4732);
__builtin_memmove((R+16),(R+20),4);
}
B5a4734:{NFSU2_TR(0x5a4734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a4735:{NFSU2_TR(0x5a4735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4740:L5a4740:{c.instructions+=5;NFSU2_TR(0x5a4740);
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
B5a4745:{NFSU2_TR(0x5a4745);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4746:{NFSU2_TR(0x5a4746);
__builtin_memmove((R+24),(R+4),4);
}
B5a4748:{NFSU2_TR(0x5a4748);
u8 U[4];
w4(U+0,u32(0x7a1d68ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a474e:{NFSU2_TR(0x5a474e);
if(r1(R+518)){{goto L5a4759;}}
}
B5a4750:L5a4750:{c.instructions+=2;NFSU2_TR(0x5a4750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4751:{NFSU2_TR(0x5a4751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4756ull));
TAIL_STATIC(0x575630u,575);
}
B5a4756:L5a4756:{c.instructions+=1;NFSU2_TR(0x5a4756);
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
B5a4759:L5a4759:{c.instructions+=3;NFSU2_TR(0x5a4759);
__builtin_memmove((R+0),(R+24),4);
}
B5a475b:{NFSU2_TR(0x5a475b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a475c:{NFSU2_TR(0x5a475c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4760:L5a4760:{c.instructions+=2;NFSU2_TR(0x5a4760);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5a4767:{NFSU2_TR(0x5a4767);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4770:L5a4770:{c.instructions+=3;NFSU2_TR(0x5a4770);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4771:{NFSU2_TR(0x5a4771);
__builtin_memmove((R+24),(R+4),4);
}
B5a4773:{NFSU2_TR(0x5a4773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4778ull));
{goto L5a47a0;}
}
B5a4778:L5a4778:{c.instructions+=2;NFSU2_TR(0x5a4778);
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
B5a477d:{NFSU2_TR(0x5a477d);
if(r1(R+518)){{goto L5a478e;}}
}
B5a477f:L5a477f:{c.instructions+=4;NFSU2_TR(0x5a477f);
__builtin_memmove((R+0),gp(0x86b2e4),4);
}
B5a4784:{NFSU2_TR(0x5a4784);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4785:{NFSU2_TR(0x5a4785);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4786:{NFSU2_TR(0x5a4786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a478bull));
TAIL_STATIC(0x43f920u,43f);
}
B5a478b:L5a478b:{c.instructions+=1;NFSU2_TR(0x5a478b);
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
B5a478e:L5a478e:{c.instructions+=3;NFSU2_TR(0x5a478e);
__builtin_memmove((R+0),(R+24),4);
}
B5a4790:{NFSU2_TR(0x5a4790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4791:{NFSU2_TR(0x5a4791);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a47a0:L5a47a0:{c.instructions+=2;NFSU2_TR(0x5a47a0);
u8 U[4];
w4(U+0,u32(0x7a1d68ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5a47a6:{NFSU2_TR(0x5a47a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a47b0:L5a47b0:{c.instructions+=13;NFSU2_TR(0x5a47b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47b1:{NFSU2_TR(0x5a47b1);
__builtin_memmove((R+20),(R+16),4);
}
B5a47b3:{NFSU2_TR(0x5a47b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a47b6:{NFSU2_TR(0x5a47b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47b7:{NFSU2_TR(0x5a47b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47b8:{NFSU2_TR(0x5a47b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47b9:{NFSU2_TR(0x5a47b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a47bc:{NFSU2_TR(0x5a47bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47bd:{NFSU2_TR(0x5a47bd);
u8 U[4];
w4(U+0,u32(0x7a2094ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47c2:{NFSU2_TR(0x5a47c2);
__builtin_memmove((R+28),(R+4),4);
}
B5a47c4:{NFSU2_TR(0x5a47c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47c6:{NFSU2_TR(0x5a47c6);
__builtin_memmove((R+4),(R+24),4);
}
B5a47c8:{NFSU2_TR(0x5a47c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a47cdull));
TAIL_STATIC(0x578ce0u,578);
}
B5a47cd:L5a47cd:{c.instructions+=4;NFSU2_TR(0x5a47cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a47d0:{NFSU2_TR(0x5a47d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47d1:{NFSU2_TR(0x5a47d1);
__builtin_memmove((R+4),(R+24),4);
}
B5a47d3:{NFSU2_TR(0x5a47d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a47d8ull));
TAIL_STATIC(0x571770u,571);
}
B5a47d8:L5a47d8:{c.instructions+=7;NFSU2_TR(0x5a47d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47da:{NFSU2_TR(0x5a47da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47dc:{NFSU2_TR(0x5a47dc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47de:{NFSU2_TR(0x5a47de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a47e1:{NFSU2_TR(0x5a47e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47e2:{NFSU2_TR(0x5a47e2);
__builtin_memmove((R+4),(R+24),4);
}
B5a47e4:{NFSU2_TR(0x5a47e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a47e9ull));
TAIL_STATIC(0x571640u,571);
}
B5a47e9:L5a47e9:{c.instructions+=3;NFSU2_TR(0x5a47e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a47ec:{NFSU2_TR(0x5a47ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47ed:{NFSU2_TR(0x5a47ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a47f2ull));
TAIL_STATIC(0x59b6f0u,59b);
}
B5a47f2:L5a47f2:{c.instructions+=4;NFSU2_TR(0x5a47f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a47f5:{NFSU2_TR(0x5a47f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a47f7:{NFSU2_TR(0x5a47f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a47f8:{NFSU2_TR(0x5a47f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a47fbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a47fb:L5a47fb:{c.instructions+=2;NFSU2_TR(0x5a47fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a47fe:{NFSU2_TR(0x5a47fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4806:L5a4806:{c.instructions+=3;NFSU2_TR(0x5a4806);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4809:{NFSU2_TR(0x5a4809);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a480a:{NFSU2_TR(0x5a480a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a480full));
TAIL_STATIC(0x59c980u,59c);
}
B5a480f:L5a480f:{c.instructions+=3;NFSU2_TR(0x5a480f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a4811:{NFSU2_TR(0x5a4811);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4812:{NFSU2_TR(0x5a4812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4817ull));
TAIL_STATIC(0x59e020u,59e);
}
B5a4817:L5a4817:{c.instructions+=7;NFSU2_TR(0x5a4817);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4819:{NFSU2_TR(0x5a4819);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a481b:{NFSU2_TR(0x5a481b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a481d:{NFSU2_TR(0x5a481d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a4820:{NFSU2_TR(0x5a4820);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4821:{NFSU2_TR(0x5a4821);
__builtin_memmove((R+4),(R+24),4);
}
B5a4823:{NFSU2_TR(0x5a4823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4828ull));
TAIL_STATIC(0x571640u,571);
}
B5a4828:L5a4828:{c.instructions+=5;NFSU2_TR(0x5a4828);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a482c:{NFSU2_TR(0x5a482c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a482f:{NFSU2_TR(0x5a482f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a4830:{NFSU2_TR(0x5a4830);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4834:{NFSU2_TR(0x5a4834);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a4806u);}goto L5a4806;}}
}
B5a4836:L5a4836:{c.instructions+=3;NFSU2_TR(0x5a4836);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4839:{NFSU2_TR(0x5a4839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a483a:{NFSU2_TR(0x5a483a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a483full));
TAIL_STATIC(0x594220u,594);
}
B5a483f:L5a483f:{c.instructions+=3;NFSU2_TR(0x5a483f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4842:{NFSU2_TR(0x5a4842);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4843:{NFSU2_TR(0x5a4843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4848ull));
TAIL_STATIC(0x5944a0u,594);
}
B5a4848:L5a4848:{c.instructions+=4;NFSU2_TR(0x5a4848);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a484b:{NFSU2_TR(0x5a484b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+4,u8(u32(r1(R+4))|u32(r1(U+4))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5a484e:{NFSU2_TR(0x5a484e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4851:{NFSU2_TR(0x5a4851);
if(r1(R+518)){{goto L5a4872;}}
}
B5a4853:L5a4853:{c.instructions+=10;NFSU2_TR(0x5a4853);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a4855:{NFSU2_TR(0x5a4855);
w4(R+8,u32(0x3f800000ull));
}
B5a485a:{NFSU2_TR(0x5a485a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a485d:{NFSU2_TR(0x5a485d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4860:{NFSU2_TR(0x5a4860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4863:{NFSU2_TR(0x5a4863);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4866:{NFSU2_TR(0x5a4866);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4869:{NFSU2_TR(0x5a4869);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a486c:{NFSU2_TR(0x5a486c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a486f:{NFSU2_TR(0x5a486f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4872:L5a4872:{c.instructions+=3;NFSU2_TR(0x5a4872);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4873:{NFSU2_TR(0x5a4873);
__builtin_memmove((R+4),(R+28),4);
}
B5a4875:{NFSU2_TR(0x5a4875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a487aull));
TAIL_STATIC(0x4031c0u,403);
}
B5a487a:L5a487a:{c.instructions+=4;NFSU2_TR(0x5a487a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a487d:{NFSU2_TR(0x5a487d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a487e:{NFSU2_TR(0x5a487e);
__builtin_memmove((R+4),(R+24),4);
}
B5a4880:{NFSU2_TR(0x5a4880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4885ull));
TAIL_STATIC(0x571770u,571);
}
B5a4885:L5a4885:{c.instructions+=4;NFSU2_TR(0x5a4885);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x68ull))));
}
B5a4888:{NFSU2_TR(0x5a4888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4889:{NFSU2_TR(0x5a4889);
__builtin_memmove((R+4),(R+24),4);
}
B5a488b:{NFSU2_TR(0x5a488b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4890ull));
TAIL_STATIC(0x571770u,571);
}
B5a4890:L5a4890:{c.instructions+=2;NFSU2_TR(0x5a4890);
__builtin_memmove((R+4),(R+24),4);
}
B5a4892:{NFSU2_TR(0x5a4892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4897ull));
TAIL_STATIC(0x578d90u,578);
}
B5a4897:L5a4897:{c.instructions+=6;NFSU2_TR(0x5a4897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a4898:{NFSU2_TR(0x5a4898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4899:{NFSU2_TR(0x5a4899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a489a:{NFSU2_TR(0x5a489a);
__builtin_memmove((R+16),(R+20),4);
}
B5a489c:{NFSU2_TR(0x5a489c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a489d:{NFSU2_TR(0x5a489d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a48a0:L5a48a0:{c.instructions+=16;NFSU2_TR(0x5a48a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a48a1:{NFSU2_TR(0x5a48a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a48a2:{NFSU2_TR(0x5a48a2);
__builtin_memmove((R+24),(R+4),4);
}
B5a48a4:{NFSU2_TR(0x5a48a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a48a7:{NFSU2_TR(0x5a48a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a48ad:{NFSU2_TR(0x5a48ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a48af:{NFSU2_TR(0x5a48af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a48b0:{NFSU2_TR(0x5a48b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a48b1:{NFSU2_TR(0x5a48b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a48b4:{NFSU2_TR(0x5a48b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a48b7:{NFSU2_TR(0x5a48b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a48b8:{NFSU2_TR(0x5a48b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a48b9:{NFSU2_TR(0x5a48b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a48bc:{NFSU2_TR(0x5a48bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5a48bf:{NFSU2_TR(0x5a48bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a48c0:{NFSU2_TR(0x5a48c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a48c5ull));
TAIL_STATIC(0x59b9b0u,59b);
}
B5a48c5:L5a48c5:{c.instructions+=41;NFSU2_TR(0x5a48c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a48c8:{NFSU2_TR(0x5a48c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a48cb:{NFSU2_TR(0x5a48cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a48ce:{NFSU2_TR(0x5a48ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a48d1:{NFSU2_TR(0x5a48d1);
{u32 ea_=u32(r4(R+0)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a48d7:{NFSU2_TR(0x5a48d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a48da:{NFSU2_TR(0x5a48da);
{u32 ea_=u32(r4(R+0)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a48e0:{NFSU2_TR(0x5a48e0);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a48e3:{NFSU2_TR(0x5a48e3);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a48e6:{NFSU2_TR(0x5a48e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a48e9:{NFSU2_TR(0x5a48e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a48ec:{NFSU2_TR(0x5a48ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a48ef:{NFSU2_TR(0x5a48ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a48f2:{NFSU2_TR(0x5a48f2);
{u32 ea_=u32(r4(R+0)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a48f8:{NFSU2_TR(0x5a48f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a48fb:{NFSU2_TR(0x5a48fb);
{u32 ea_=u32(r4(R+0)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4901:{NFSU2_TR(0x5a4901);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4904:{NFSU2_TR(0x5a4904);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4907:{NFSU2_TR(0x5a4907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a490a:{NFSU2_TR(0x5a490a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a490d:{NFSU2_TR(0x5a490d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4910:{NFSU2_TR(0x5a4910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4913:{NFSU2_TR(0x5a4913);
{u32 ea_=u32(r4(R+0)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4919:{NFSU2_TR(0x5a4919);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a491c:{NFSU2_TR(0x5a491c);
{u32 ea_=u32(r4(R+0)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4922:{NFSU2_TR(0x5a4922);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4925:{NFSU2_TR(0x5a4925);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4928:{NFSU2_TR(0x5a4928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a492b:{NFSU2_TR(0x5a492b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a492e:{NFSU2_TR(0x5a492e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4931:{NFSU2_TR(0x5a4931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4934:{NFSU2_TR(0x5a4934);
{u32 ea_=u32(r4(R+0)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a493a:{NFSU2_TR(0x5a493a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a493d:{NFSU2_TR(0x5a493d);
{u32 ea_=u32(r4(R+0)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4943:{NFSU2_TR(0x5a4943);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4946:{NFSU2_TR(0x5a4946);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4949:{NFSU2_TR(0x5a4949);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a494f:{NFSU2_TR(0x5a494f);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4955:{NFSU2_TR(0x5a4955);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4957:{NFSU2_TR(0x5a4957);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a495a:{NFSU2_TR(0x5a495a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a4964;}}
}
B5a495c:L5a495c:{c.instructions+=2;NFSU2_TR(0x5a495c);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4962:{NFSU2_TR(0x5a4962);
{goto L5a496d;}
}
B5a4964:L5a4964:{c.instructions+=2;NFSU2_TR(0x5a4964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4967:{NFSU2_TR(0x5a4967);
{u32 ea_=u32(r4(R+8)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a496d:L5a496d:{c.instructions+=14;NFSU2_TR(0x5a496d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4970:{NFSU2_TR(0x5a4970);
{u32 ea_=u32(u32(8002872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4976:{NFSU2_TR(0x5a4976);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4979:{NFSU2_TR(0x5a4979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a497c:{NFSU2_TR(0x5a497c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a497f:{NFSU2_TR(0x5a497f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4985:{NFSU2_TR(0x5a4985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4988:{NFSU2_TR(0x5a4988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a4989:{NFSU2_TR(0x5a4989);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a498c:{NFSU2_TR(0x5a498c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a498f:{NFSU2_TR(0x5a498f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4996:{NFSU2_TR(0x5a4996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a499d:{NFSU2_TR(0x5a499d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a499e:{NFSU2_TR(0x5a499e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a49a0:L5a49a0:{c.instructions+=11;NFSU2_TR(0x5a49a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a49a1:{NFSU2_TR(0x5a49a1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a49a7:{NFSU2_TR(0x5a49a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a49a8:{NFSU2_TR(0x5a49a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a49a9:{NFSU2_TR(0x5a49a9);
__builtin_memmove((R+24),(R+4),4);
}
B5a49ab:{NFSU2_TR(0x5a49ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a49ae:{NFSU2_TR(0x5a49ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a49b4:{NFSU2_TR(0x5a49b4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a49b6:{NFSU2_TR(0x5a49b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a49b8:{NFSU2_TR(0x5a49b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a49bc:{NFSU2_TR(0x5a49bc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a4a5c;}}
}
B5a49c2:L5a49c2:{c.instructions+=4;NFSU2_TR(0x5a49c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a49c8:{NFSU2_TR(0x5a49c8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a49ca:{NFSU2_TR(0x5a49ca);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a49cc:{NFSU2_TR(0x5a49cc);
if(r1(R+518)){{goto L5a49e2;}}
}
B5a49ce:L5a49ce:{c.instructions+=4;NFSU2_TR(0x5a49ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x354ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a49d4:{NFSU2_TR(0x5a49d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a49da:{NFSU2_TR(0x5a49da);
{u32 ea_=u32(r4(R+4)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a49e0:{NFSU2_TR(0x5a49e0);
{goto L5a49e8;}
}
B5a49e2:L5a49e2:{c.instructions+=1;NFSU2_TR(0x5a49e2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a49e8:L5a49e8:{c.instructions+=2;NFSU2_TR(0x5a49e8);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x351ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a49ee:{NFSU2_TR(0x5a49ee);
if(r1(R+518)){{goto L5a4a04;}}
}
B5a49f0:L5a49f0:{c.instructions+=4;NFSU2_TR(0x5a49f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a49f6:{NFSU2_TR(0x5a49f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5a49fc:{NFSU2_TR(0x5a49fc);
{u32 ea_=u32(r4(R+8)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4a02:{NFSU2_TR(0x5a4a02);
{goto L5a4a0a;}
}
B5a4a04:L5a4a04:{c.instructions+=1;NFSU2_TR(0x5a4a04);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4a0a:L5a4a0a:{c.instructions+=4;NFSU2_TR(0x5a4a0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x352ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a4a10:{NFSU2_TR(0x5a4a10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a4a12:{NFSU2_TR(0x5a4a12);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a4a14:{NFSU2_TR(0x5a4a14);
if(r1(R+518)){{goto L5a4a2a;}}
}
B5a4a16:L5a4a16:{c.instructions+=4;NFSU2_TR(0x5a4a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4a1c:{NFSU2_TR(0x5a4a1c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a4a22:{NFSU2_TR(0x5a4a22);
{u32 ea_=u32(r4(R+4)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4a28:{NFSU2_TR(0x5a4a28);
{goto L5a4a30;}
}
B5a4a2a:L5a4a2a:{c.instructions+=1;NFSU2_TR(0x5a4a2a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4a30:L5a4a30:{c.instructions+=4;NFSU2_TR(0x5a4a30);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x353ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a4a36:{NFSU2_TR(0x5a4a36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a4a38:{NFSU2_TR(0x5a4a38);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a4a3a:{NFSU2_TR(0x5a4a3a);
if(r1(R+518)){{goto L5a4a50;}}
}
B5a4a3c:L5a4a3c:{c.instructions+=4;NFSU2_TR(0x5a4a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x360ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4a42:{NFSU2_TR(0x5a4a42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5a4a48:{NFSU2_TR(0x5a4a48);
{u32 ea_=u32(r4(R+8)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4a4e:{NFSU2_TR(0x5a4a4e);
{goto L5a4a56;}
}
B5a4a50:L5a4a50:{c.instructions+=1;NFSU2_TR(0x5a4a50);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4a56:L5a4a56:{c.instructions+=2;NFSU2_TR(0x5a4a56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a4a58:{NFSU2_TR(0x5a4a58);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5a4a5c:L5a4a5c:{c.instructions+=7;NFSU2_TR(0x5a4a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4a5f:{NFSU2_TR(0x5a4a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4a62:{NFSU2_TR(0x5a4a62);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a4a64:{NFSU2_TR(0x5a4a64);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5a4a66:{NFSU2_TR(0x5a4a66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4a67:{NFSU2_TR(0x5a4a67);
w4(R+28,u32(0x1ull));
}
B5a4a6c:{NFSU2_TR(0x5a4a6c);
if(r1(R+518)){{goto L5a4af4;}}
}
B5a4a72:L5a4a72:{c.instructions+=2;NFSU2_TR(0x5a4a72);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5a4a73:{NFSU2_TR(0x5a4a73);
if(r1(R+518)){{goto L5a4a7f;}}
}
B5a4a75:L5a4a75:{c.instructions+=2;NFSU2_TR(0x5a4a75);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5a4a76:{NFSU2_TR(0x5a4a76);
if(r1(R+518)){{goto L5a4af4;}}
}
B5a4a78:L5a4a78:{c.instructions+=2;NFSU2_TR(0x5a4a78);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4a7a:{NFSU2_TR(0x5a4a7a);
{goto L5a4b37;}
}
B5a4a7f:L5a4a7f:{c.instructions+=19;NFSU2_TR(0x5a4a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4a82:{NFSU2_TR(0x5a4a82);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4a84:{NFSU2_TR(0x5a4a84);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4a8a:{NFSU2_TR(0x5a4a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4a8d:{NFSU2_TR(0x5a4a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4a93:{NFSU2_TR(0x5a4a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4a96:{NFSU2_TR(0x5a4a96);
__builtin_memmove((R+8),gp(0x7fc084),4);
}
B5a4a9c:{NFSU2_TR(0x5a4a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4aa2:{NFSU2_TR(0x5a4aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4aa5:{NFSU2_TR(0x5a4aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4aa8:{NFSU2_TR(0x5a4aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4aab:{NFSU2_TR(0x5a4aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4ab2:{NFSU2_TR(0x5a4ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4ab5:{NFSU2_TR(0x5a4ab5);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4abb:{NFSU2_TR(0x5a4abb);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4ac1:{NFSU2_TR(0x5a4ac1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a4ac3:{NFSU2_TR(0x5a4ac3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4ac5:{NFSU2_TR(0x5a4ac5);
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
B5a4ac8:{NFSU2_TR(0x5a4ac8);
if(r1(R+514)){{goto L5a4ae2;}}
}
B5a4aca:L5a4aca:{c.instructions+=5;NFSU2_TR(0x5a4aca);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ecccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4ad2:{NFSU2_TR(0x5a4ad2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4ad4:{NFSU2_TR(0x5a4ad4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4ad8:{NFSU2_TR(0x5a4ad8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4ad9:{NFSU2_TR(0x5a4ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4adeull));
TAIL_STATIC(0x5eb910u,5eb);
}
B5a4ade:L5a4ade:{c.instructions+=2;NFSU2_TR(0x5a4ade);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a4ae0:{NFSU2_TR(0x5a4ae0);
{goto L5a4b37;}
}
B5a4ae2:L5a4ae2:{c.instructions+=4;NFSU2_TR(0x5a4ae2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4ae6:{NFSU2_TR(0x5a4ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4aea:{NFSU2_TR(0x5a4aea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4aeb:{NFSU2_TR(0x5a4aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4af0ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B5a4af0:L5a4af0:{c.instructions+=2;NFSU2_TR(0x5a4af0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a4af2:{NFSU2_TR(0x5a4af2);
{goto L5a4b37;}
}
B5a4af4:L5a4af4:{c.instructions+=8;NFSU2_TR(0x5a4af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4af7:{NFSU2_TR(0x5a4af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4afd:{NFSU2_TR(0x5a4afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4b00:{NFSU2_TR(0x5a4b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4b06:{NFSU2_TR(0x5a4b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4b09:{NFSU2_TR(0x5a4b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x160ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4b13:{NFSU2_TR(0x5a4b13);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a4b19:{NFSU2_TR(0x5a4b19);
if(r1(R+518)){{goto L5a4b23;}}
}
B5a4b1b:L5a4b1b:{c.instructions+=2;NFSU2_TR(0x5a4b1b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4b21:{NFSU2_TR(0x5a4b21);
{goto L5a4b29;}
}
B5a4b23:L5a4b23:{c.instructions+=1;NFSU2_TR(0x5a4b23);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4b29:L5a4b29:{c.instructions+=5;NFSU2_TR(0x5a4b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4b2c:{NFSU2_TR(0x5a4b2c);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4b2f:{NFSU2_TR(0x5a4b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4b32:{NFSU2_TR(0x5a4b32);
__builtin_memmove((R+0),(R+28),4);
}
B5a4b34:{NFSU2_TR(0x5a4b34);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4b37:L5a4b37:{c.instructions+=3;NFSU2_TR(0x5a4b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4b3a:{NFSU2_TR(0x5a4b3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a4b40:{NFSU2_TR(0x5a4b40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4b44;}}
}
B5a4b42:L5a4b42:{c.instructions+=1;NFSU2_TR(0x5a4b42);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a4b44:L5a4b44:{c.instructions+=3;NFSU2_TR(0x5a4b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4b47:{NFSU2_TR(0x5a4b47);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a4b4d:{NFSU2_TR(0x5a4b4d);
if(r1(R+518)){{goto L5a4b6b;}}
}
B5a4b4f:L5a4b4f:{c.instructions+=2;NFSU2_TR(0x5a4b4f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a4b51:{NFSU2_TR(0x5a4b51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4b65;}}
}
B5a4b53:L5a4b53:{c.instructions+=4;NFSU2_TR(0x5a4b53);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4b59:{NFSU2_TR(0x5a4b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4b5c:{NFSU2_TR(0x5a4b5c);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a4b5f:{NFSU2_TR(0x5a4b5f);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4b65:L5a4b65:{c.instructions+=1;NFSU2_TR(0x5a4b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4b6b:L5a4b6b:{c.instructions+=3;NFSU2_TR(0x5a4b6b);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5a4b70:{NFSU2_TR(0x5a4b70);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5a4b73:{NFSU2_TR(0x5a4b73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4bfe;}}
}
B5a4b79:L5a4b79:{c.instructions+=2;NFSU2_TR(0x5a4b79);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a4b7f:{NFSU2_TR(0x5a4b7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4b8d;}}
}
B5a4b81:L5a4b81:{c.instructions+=2;NFSU2_TR(0x5a4b81);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a4b87:{NFSU2_TR(0x5a4b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4b8d;}}
}
B5a4b89:L5a4b89:{c.instructions+=2;NFSU2_TR(0x5a4b89);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a4b8b:{NFSU2_TR(0x5a4b8b);
{goto L5a4b8f;}
}
B5a4b8d:L5a4b8d:{c.instructions+=1;NFSU2_TR(0x5a4b8d);
__builtin_memmove((R+0),(R+28),4);
}
B5a4b8f:L5a4b8f:{c.instructions+=3;NFSU2_TR(0x5a4b8f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5a4b91:{NFSU2_TR(0x5a4b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4b94:{NFSU2_TR(0x5a4b94);
if(r1(R+518)){{goto L5a4bb5;}}
}
B5a4b96:L5a4b96:{c.instructions+=6;NFSU2_TR(0x5a4b96);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4b9c:{NFSU2_TR(0x5a4b9c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4ba2:{NFSU2_TR(0x5a4ba2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a4ba4:{NFSU2_TR(0x5a4ba4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4ba6:{NFSU2_TR(0x5a4ba6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4ba9:{NFSU2_TR(0x5a4ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4bbb;}}
}
B5a4bab:L5a4bab:{c.instructions+=3;NFSU2_TR(0x5a4bab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4bad:{NFSU2_TR(0x5a4bad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4bb3:{NFSU2_TR(0x5a4bb3);
{goto L5a4bbb;}
}
B5a4bb5:L5a4bb5:{c.instructions+=1;NFSU2_TR(0x5a4bb5);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4bbb:L5a4bbb:{c.instructions+=7;NFSU2_TR(0x5a4bbb);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4bc1:{NFSU2_TR(0x5a4bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4bc4:{NFSU2_TR(0x5a4bc4);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4bca:{NFSU2_TR(0x5a4bca);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4bd0:{NFSU2_TR(0x5a4bd0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4bd2:{NFSU2_TR(0x5a4bd2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4bd5:{NFSU2_TR(0x5a4bd5);
if(r1(R+518)){{goto L5a4bf5;}}
}
B5a4bd7:L5a4bd7:{c.instructions+=3;NFSU2_TR(0x5a4bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4bda:{NFSU2_TR(0x5a4bda);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a4be1:{NFSU2_TR(0x5a4be1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4bfe;}}
}
B5a4be3:L5a4be3:{c.instructions+=6;NFSU2_TR(0x5a4be3);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4be6:{NFSU2_TR(0x5a4be6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a4be8:{NFSU2_TR(0x5a4be8);
{u32 ea_=u32(u32(8002076u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4bee:{NFSU2_TR(0x5a4bee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4bf0:{NFSU2_TR(0x5a4bf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4bf3:{NFSU2_TR(0x5a4bf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4bfe;}}
}
B5a4bf5:L5a4bf5:{c.instructions+=2;NFSU2_TR(0x5a4bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4bf8:{NFSU2_TR(0x5a4bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4bfe:L5a4bfe:{c.instructions+=7;NFSU2_TR(0x5a4bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4c01:{NFSU2_TR(0x5a4c01);
{u32 ea_=u32(r4(R+4)+u32(1252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4c07:{NFSU2_TR(0x5a4c07);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a4c0b:{NFSU2_TR(0x5a4c0b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4c11:{NFSU2_TR(0x5a4c11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4c13:{NFSU2_TR(0x5a4c13);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4c16:{NFSU2_TR(0x5a4c16);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a4c27;}}
}
B5a4c18:L5a4c18:{c.instructions+=2;NFSU2_TR(0x5a4c18);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a4c1e:{NFSU2_TR(0x5a4c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4c27;}}
}
B5a4c20:L5a4c20:{c.instructions+=3;NFSU2_TR(0x5a4c20);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4c24:{NFSU2_TR(0x5a4c24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4c25:{NFSU2_TR(0x5a4c25);
{goto L5a4c31;}
}
B5a4c27:L5a4c27:{c.instructions+=3;NFSU2_TR(0x5a4c27);
{u32 ea_=u32(r4(R+4)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4c2d:{NFSU2_TR(0x5a4c2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4c2e:{NFSU2_TR(0x5a4c2e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4c31:L5a4c31:{c.instructions+=2;NFSU2_TR(0x5a4c31);
__builtin_memmove((R+4),(R+24),4);
}
B5a4c33:{NFSU2_TR(0x5a4c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4c38ull));
TAIL_STATIC(0x599170u,599);
}
B5a4c38:L5a4c38:{c.instructions+=2;NFSU2_TR(0x5a4c38);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a4c3e:{NFSU2_TR(0x5a4c3e);
if(r1(R+518)){{goto L5a4c52;}}
}
B5a4c40:L5a4c40:{c.instructions+=3;NFSU2_TR(0x5a4c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4c43:{NFSU2_TR(0x5a4c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x200ull))));
w4(U+4,u32(0x283424dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4c4d:{NFSU2_TR(0x5a4c4d);
{goto L5a4cee;}
}
B5a4c52:L5a4c52:{c.instructions+=4;NFSU2_TR(0x5a4c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4c55:{NFSU2_TR(0x5a4c55);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5a4c5b:{NFSU2_TR(0x5a4c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4c5e:{NFSU2_TR(0x5a4c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4c71;}}
}
B5a4c60:L5a4c60:{c.instructions+=4;NFSU2_TR(0x5a4c60);
{u32 ea_=u32(r4(R+8)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4c66:{NFSU2_TR(0x5a4c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4c69:{NFSU2_TR(0x5a4c69);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4c6f:{NFSU2_TR(0x5a4c6f);
{goto L5a4cee;}
}
B5a4c71:L5a4c71:{c.instructions+=7;NFSU2_TR(0x5a4c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4c77:{NFSU2_TR(0x5a4c77);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4c7b:{NFSU2_TR(0x5a4c7b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4c7f:{NFSU2_TR(0x5a4c7f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4c85:{NFSU2_TR(0x5a4c85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4c87:{NFSU2_TR(0x5a4c87);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4c8a:{NFSU2_TR(0x5a4c8a);
if(r1(R+514)){{goto L5a4ce1;}}
}
B5a4c8c:L5a4c8c:{c.instructions+=6;NFSU2_TR(0x5a4c8c);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4c92:{NFSU2_TR(0x5a4c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a4c95:{NFSU2_TR(0x5a4c95);
{u32 ea_=u32(u32(8001572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4c9b:{NFSU2_TR(0x5a4c9b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4c9d:{NFSU2_TR(0x5a4c9d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4ca0:{NFSU2_TR(0x5a4ca0);
if(r1(R+514)){{goto L5a4caa;}}
}
B5a4ca2:L5a4ca2:{c.instructions+=2;NFSU2_TR(0x5a4ca2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4ca8:{NFSU2_TR(0x5a4ca8);
{goto L5a4caf;}
}
B5a4caa:L5a4caa:{c.instructions+=1;NFSU2_TR(0x5a4caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4cafull));
TAIL_STATIC(0x591d90u,591);
}
B5a4caf:L5a4caf:{c.instructions+=6;NFSU2_TR(0x5a4caf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a4cb1:{NFSU2_TR(0x5a4cb1);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4cb7:{NFSU2_TR(0x5a4cb7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4cbd:{NFSU2_TR(0x5a4cbd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4cbf:{NFSU2_TR(0x5a4cbf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4cc2:{NFSU2_TR(0x5a4cc2);
if(r1(R+514)){{goto L5a4cdf;}}
}
B5a4cc4:L5a4cc4:{c.instructions+=5;NFSU2_TR(0x5a4cc4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a4cc6:{NFSU2_TR(0x5a4cc6);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4ccc:{NFSU2_TR(0x5a4ccc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4cce:{NFSU2_TR(0x5a4cce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4cd1:{NFSU2_TR(0x5a4cd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4ce1;}}
}
B5a4cd3:L5a4cd3:{c.instructions+=3;NFSU2_TR(0x5a4cd3);
__builtin_memmove((R+4),gp(0x7a1a18),4);
}
B5a4cd9:{NFSU2_TR(0x5a4cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4cdd:{NFSU2_TR(0x5a4cdd);
{goto L5a4ce1;}
}
B5a4cdf:L5a4cdf:{c.instructions+=1;NFSU2_TR(0x5a4cdf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4ce1:L5a4ce1:{c.instructions+=3;NFSU2_TR(0x5a4ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4ce4:{NFSU2_TR(0x5a4ce4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4ce8:{NFSU2_TR(0x5a4ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4cee:L5a4cee:{c.instructions+=3;NFSU2_TR(0x5a4cee);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5a4cf4:{NFSU2_TR(0x5a4cf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a4cf5:{NFSU2_TR(0x5a4cf5);
if(r1(R+518)){{goto L5a4d02;}}
}
B5a4cf7:L5a4cf7:{c.instructions+=3;NFSU2_TR(0x5a4cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4cfa:{NFSU2_TR(0x5a4cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4d00:{NFSU2_TR(0x5a4d00);
{goto L5a4d14;}
}
B5a4d02:L5a4d02:{c.instructions+=4;NFSU2_TR(0x5a4d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4d05:{NFSU2_TR(0x5a4d05);
{u32 ea_=u32(r4(R+8)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4d0b:{NFSU2_TR(0x5a4d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4d0e:{NFSU2_TR(0x5a4d0e);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4d14:L5a4d14:{c.instructions+=6;NFSU2_TR(0x5a4d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4d17:{NFSU2_TR(0x5a4d17);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4d1d:{NFSU2_TR(0x5a4d1d);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4d23:{NFSU2_TR(0x5a4d23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4d25:{NFSU2_TR(0x5a4d25);
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
B5a4d28:{NFSU2_TR(0x5a4d28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4d71;}}
}
B5a4d2a:L5a4d2a:{c.instructions+=7;NFSU2_TR(0x5a4d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4d2d:{NFSU2_TR(0x5a4d2d);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4d33:{NFSU2_TR(0x5a4d33);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4d39:{NFSU2_TR(0x5a4d39);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4d3f:{NFSU2_TR(0x5a4d3f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4d41:{NFSU2_TR(0x5a4d41);
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
B5a4d44:{NFSU2_TR(0x5a4d44);
if(r1(R+514)){{goto L5a4d62;}}
}
B5a4d46:L5a4d46:{c.instructions+=3;NFSU2_TR(0x5a4d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4d49:{NFSU2_TR(0x5a4d49);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
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
B5a4d4f:{NFSU2_TR(0x5a4d4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5a4d62;}}
}
B5a4d51:L5a4d51:{c.instructions+=6;NFSU2_TR(0x5a4d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4d54:{NFSU2_TR(0x5a4d54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4d55:{NFSU2_TR(0x5a4d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xecull))));
w4(U+4,u32(0x3f266666ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4d5f:{NFSU2_TR(0x5a4d5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a4d60:{NFSU2_TR(0x5a4d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a4d61:{NFSU2_TR(0x5a4d61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4d62:L5a4d62:{c.instructions+=3;NFSU2_TR(0x5a4d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4d65:{NFSU2_TR(0x5a4d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4d6b:{NFSU2_TR(0x5a4d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4d71:L5a4d71:{c.instructions+=4;NFSU2_TR(0x5a4d71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a4d72:{NFSU2_TR(0x5a4d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a4d73:{NFSU2_TR(0x5a4d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a4d74:{NFSU2_TR(0x5a4d74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a4d80:L5a4d80:{c.instructions+=15;NFSU2_TR(0x5a4d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5a4d83:{NFSU2_TR(0x5a4d83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4d84:{NFSU2_TR(0x5a4d84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4d85:{NFSU2_TR(0x5a4d85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4d86:{NFSU2_TR(0x5a4d86);
__builtin_memmove((R+24),(R+4),4);
}
B5a4d88:{NFSU2_TR(0x5a4d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4d8b:{NFSU2_TR(0x5a4d8b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4d8f:{NFSU2_TR(0x5a4d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4d92:{NFSU2_TR(0x5a4d92);
{u32 ea_=u32(r4(R+0)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4d98:{NFSU2_TR(0x5a4d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4d9e:{NFSU2_TR(0x5a4d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4da0:{NFSU2_TR(0x5a4da0);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4da6:{NFSU2_TR(0x5a4da6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a4da7:{NFSU2_TR(0x5a4da7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4dab:{NFSU2_TR(0x5a4dab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4de8;}}
}
B5a4dad:L5a4dad:{c.instructions+=3;NFSU2_TR(0x5a4dad);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5a4db2:{NFSU2_TR(0x5a4db2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4db4:{NFSU2_TR(0x5a4db4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4dda;}}
}
B5a4db6:L5a4db6:{c.instructions+=3;NFSU2_TR(0x5a4db6);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5a4dbb:{NFSU2_TR(0x5a4dbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4dbd:{NFSU2_TR(0x5a4dbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4dda;}}
}
B5a4dbf:L5a4dbf:{c.instructions+=3;NFSU2_TR(0x5a4dbf);
__builtin_memmove((R+0),gp(0x890114),4);
}
B5a4dc4:{NFSU2_TR(0x5a4dc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4dc6:{NFSU2_TR(0x5a4dc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4de8;}}
}
B5a4dc8:L5a4dc8:{c.instructions+=3;NFSU2_TR(0x5a4dc8);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5a4dcd:{NFSU2_TR(0x5a4dcd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4dcf:{NFSU2_TR(0x5a4dcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4de8;}}
}
B5a4dd1:L5a4dd1:{c.instructions+=3;NFSU2_TR(0x5a4dd1);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5a4dd6:{NFSU2_TR(0x5a4dd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4dd8:{NFSU2_TR(0x5a4dd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4de8;}}
}
B5a4dda:L5a4dda:{c.instructions+=3;NFSU2_TR(0x5a4dda);
{u32 ea_=u32(u32(8372320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4de0:{NFSU2_TR(0x5a4de0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4de4:{NFSU2_TR(0x5a4de4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4de8:L5a4de8:{c.instructions+=7;NFSU2_TR(0x5a4de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4deb:{NFSU2_TR(0x5a4deb);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4dee:{NFSU2_TR(0x5a4dee);
{u32 ea_=u32(r4(R+4)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4df4:{NFSU2_TR(0x5a4df4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4dfa:{NFSU2_TR(0x5a4dfa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4dfc:{NFSU2_TR(0x5a4dfc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4dff:{NFSU2_TR(0x5a4dff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4e30;}}
}
B5a4e01:L5a4e01:{c.instructions+=10;NFSU2_TR(0x5a4e01);
{u32 ea_=u32(u32(8002056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4e07:{NFSU2_TR(0x5a4e07);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4e0b:{NFSU2_TR(0x5a4e0b);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5a4e0d:{NFSU2_TR(0x5a4e0d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4e11:{NFSU2_TR(0x5a4e11);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4e13:{NFSU2_TR(0x5a4e13);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4e17:{NFSU2_TR(0x5a4e17);
{u32 ea_=u32(u32(8002060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4e1d:{NFSU2_TR(0x5a4e1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4e1f:{NFSU2_TR(0x5a4e1f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4e22:{NFSU2_TR(0x5a4e22);
if(r1(R+514)){{goto L5a4e5b;}}
}
B5a4e24:L5a4e24:{c.instructions+=3;NFSU2_TR(0x5a4e24);
__builtin_memmove((R+8),gp(0x7a1a0c),4);
}
B5a4e2a:{NFSU2_TR(0x5a4e2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4e2e:{NFSU2_TR(0x5a4e2e);
{goto L5a4e5b;}
}
B5a4e30:L5a4e30:{c.instructions+=10;NFSU2_TR(0x5a4e30);
{u32 ea_=u32(u32(8002052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4e36:{NFSU2_TR(0x5a4e36);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4e3a:{NFSU2_TR(0x5a4e3a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a4e3c:{NFSU2_TR(0x5a4e3c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4e40:{NFSU2_TR(0x5a4e40);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4e42:{NFSU2_TR(0x5a4e42);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4e46:{NFSU2_TR(0x5a4e46);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4e4c:{NFSU2_TR(0x5a4e4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4e4e:{NFSU2_TR(0x5a4e4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4e51:{NFSU2_TR(0x5a4e51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4e5b;}}
}
B5a4e53:L5a4e53:{c.instructions+=1;NFSU2_TR(0x5a4e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a4e5b:L5a4e5b:{c.instructions+=4;NFSU2_TR(0x5a4e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4e5f:{NFSU2_TR(0x5a4e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4e62:{NFSU2_TR(0x5a4e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4e65:{NFSU2_TR(0x5a4e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4e6aull));
TAIL_STATIC(0x5ed5d0u,5ed);
}
B5a4e6a:L5a4e6a:{c.instructions+=16;NFSU2_TR(0x5a4e6a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4e70:{NFSU2_TR(0x5a4e70);
{u32 ea_=u32(u32(8002020u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a4e76:{NFSU2_TR(0x5a4e76);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5a4e78:{NFSU2_TR(0x5a4e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a4e7c:{NFSU2_TR(0x5a4e7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a4e7f:{NFSU2_TR(0x5a4e7f);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a4e81:{NFSU2_TR(0x5a4e81);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a4e87:{NFSU2_TR(0x5a4e87);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4e8b:{NFSU2_TR(0x5a4e8b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4e8f:{NFSU2_TR(0x5a4e8f);
}
B5a4e90:{NFSU2_TR(0x5a4e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4e93:{NFSU2_TR(0x5a4e93);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4e99:{NFSU2_TR(0x5a4e99);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4e9f:{NFSU2_TR(0x5a4e9f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4ea1:{NFSU2_TR(0x5a4ea1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4ea4:{NFSU2_TR(0x5a4ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4ee3;}}
}
B5a4ea6:L5a4ea6:{c.instructions+=5;NFSU2_TR(0x5a4ea6);
{u32 ea_=u32(r4(R+4)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4eac:{NFSU2_TR(0x5a4eac);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4eb2:{NFSU2_TR(0x5a4eb2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4eb4:{NFSU2_TR(0x5a4eb4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4eb7:{NFSU2_TR(0x5a4eb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4ee3;}}
}
B5a4eb9:L5a4eb9:{c.instructions+=5;NFSU2_TR(0x5a4eb9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4ebd:{NFSU2_TR(0x5a4ebd);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4ec3:{NFSU2_TR(0x5a4ec3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4ec5:{NFSU2_TR(0x5a4ec5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4ec8:{NFSU2_TR(0x5a4ec8);
if(r1(R+514)){{goto L5a4ee3;}}
}
B5a4eca:L5a4eca:{c.instructions+=2;NFSU2_TR(0x5a4eca);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a4ecd:{NFSU2_TR(0x5a4ecd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a4ee3;}}
}
B5a4ecf:L5a4ecf:{c.instructions+=5;NFSU2_TR(0x5a4ecf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4ed3:{NFSU2_TR(0x5a4ed3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a4ed5:{NFSU2_TR(0x5a4ed5);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4edb:{NFSU2_TR(0x5a4edb);
{u32 ea_=u32(r4(R+4)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4ee1:{NFSU2_TR(0x5a4ee1);
{goto L5a4f0b;}
}
B5a4ee3:L5a4ee3:{c.instructions+=5;NFSU2_TR(0x5a4ee3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a4ee6:{NFSU2_TR(0x5a4ee6);
{u32 ea_=u32(r4(R+4)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4eec:{NFSU2_TR(0x5a4eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a4eef:{NFSU2_TR(0x5a4eef);
{u32 ea_=u32(r4(R+8)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4ef5:{NFSU2_TR(0x5a4ef5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a4efd;}}
}
B5a4ef7:L5a4ef7:{c.instructions+=1;NFSU2_TR(0x5a4ef7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a4efd:L5a4efd:{c.instructions+=5;NFSU2_TR(0x5a4efd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a4eff:{NFSU2_TR(0x5a4eff);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5a4f01:{NFSU2_TR(0x5a4f01);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a4f03:{NFSU2_TR(0x5a4f03);
{u32 ea_=u32(r4(R+0)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4f09:{NFSU2_TR(0x5a4f09);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4f0b:L5a4f0b:{c.instructions+=10;NFSU2_TR(0x5a4f0b);
{u32 ea_=u32((r4(R+20)*4u)+u32(8372340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4f12:{NFSU2_TR(0x5a4f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4f15:{NFSU2_TR(0x5a4f15);
{u32 ea_=u32(r4(R+4)+u32(528u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a4f1b:{NFSU2_TR(0x5a4f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a4f1e:{NFSU2_TR(0x5a4f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a4f24:{NFSU2_TR(0x5a4f24);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a4f2a:{NFSU2_TR(0x5a4f2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4f2c:{NFSU2_TR(0x5a4f2c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a4f30:{NFSU2_TR(0x5a4f30);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4f32:{NFSU2_TR(0x5a4f32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4f49;}}
}
B5a4f34:L5a4f34:{c.instructions+=2;NFSU2_TR(0x5a4f34);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4f37:{NFSU2_TR(0x5a4f37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4f3f;}}
}
B5a4f39:L5a4f39:{c.instructions+=1;NFSU2_TR(0x5a4f39);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4f3f:L5a4f3f:{c.instructions+=3;NFSU2_TR(0x5a4f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a4f41:{NFSU2_TR(0x5a4f41);
{u32 ea_=u32(r4(R+8)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4f47:{NFSU2_TR(0x5a4f47);
{goto L5a4faa;}
}
B5a4f49:L5a4f49:{c.instructions+=2;NFSU2_TR(0x5a4f49);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4f4c:{NFSU2_TR(0x5a4f4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4fa2;}}
}
B5a4f4e:L5a4f4e:{c.instructions+=5;NFSU2_TR(0x5a4f4e);
{u32 ea_=u32(r4(R+4)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4f54:{NFSU2_TR(0x5a4f54);
{u32 ea_=u32(u32(8001572u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4f5a:{NFSU2_TR(0x5a4f5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4f5c:{NFSU2_TR(0x5a4f5c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4f5f:{NFSU2_TR(0x5a4f5f);
if(r1(R+514)){{goto L5a4f69;}}
}
B5a4f61:L5a4f61:{c.instructions+=2;NFSU2_TR(0x5a4f61);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4f67:{NFSU2_TR(0x5a4f67);
{goto L5a4f7c;}
}
B5a4f69:L5a4f69:{c.instructions+=2;NFSU2_TR(0x5a4f69);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a4f6b:{NFSU2_TR(0x5a4f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a4f70ull));
TAIL_STATIC(0x591d90u,591);
}
B5a4f70:L5a4f70:{c.instructions+=3;NFSU2_TR(0x5a4f70);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4f74:{NFSU2_TR(0x5a4f74);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4f78:{NFSU2_TR(0x5a4f78);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4f7c:L5a4f7c:{c.instructions+=5;NFSU2_TR(0x5a4f7c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a4f7e:{NFSU2_TR(0x5a4f7e);
{u32 ea_=u32(u32(8002064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4f84:{NFSU2_TR(0x5a4f84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4f86:{NFSU2_TR(0x5a4f86);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4f89:{NFSU2_TR(0x5a4f89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4fa2;}}
}
B5a4f8b:L5a4f8b:{c.instructions+=5;NFSU2_TR(0x5a4f8b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4f8f:{NFSU2_TR(0x5a4f8f);
{u32 ea_=u32(u32(8002068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a4f95:{NFSU2_TR(0x5a4f95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a4f97:{NFSU2_TR(0x5a4f97);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a4f9a:{NFSU2_TR(0x5a4f9a);
if(r1(R+514)){{goto L5a4fa2;}}
}
B5a4f9c:L5a4f9c:{c.instructions+=1;NFSU2_TR(0x5a4f9c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a4fa2:L5a4fa2:{c.instructions+=2;NFSU2_TR(0x5a4fa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a4fa4:{NFSU2_TR(0x5a4fa4);
{u32 ea_=u32(r4(R+0)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a4faa:L5a4faa:{c.instructions+=4;NFSU2_TR(0x5a4faa);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5a4faf:{NFSU2_TR(0x5a4faf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a4fb3:{NFSU2_TR(0x5a4fb3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4fb5:{NFSU2_TR(0x5a4fb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4fe7;}}
}
B5a4fb7:L5a4fb7:{c.instructions+=3;NFSU2_TR(0x5a4fb7);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5a4fbc:{NFSU2_TR(0x5a4fbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4fbe:{NFSU2_TR(0x5a4fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a4fe7;}}
}
B5a4fc0:L5a4fc0:{c.instructions+=3;NFSU2_TR(0x5a4fc0);
__builtin_memmove((R+0),gp(0x890114),4);
}
B5a4fc5:{NFSU2_TR(0x5a4fc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4fc7:{NFSU2_TR(0x5a4fc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a50bau,5a5);}
}
B5a4fcd:L5a4fcd:{c.instructions+=3;NFSU2_TR(0x5a4fcd);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5a4fd2:{NFSU2_TR(0x5a4fd2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4fd4:{NFSU2_TR(0x5a4fd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a50bau,5a5);}
}
B5a4fda:L5a4fda:{c.instructions+=3;NFSU2_TR(0x5a4fda);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5a4fdf:{NFSU2_TR(0x5a4fdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4fe1:{NFSU2_TR(0x5a4fe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a50bau,5a5);}
}
B5a4fe7:L5a4fe7:{c.instructions+=3;NFSU2_TR(0x5a4fe7);
__builtin_memmove((R+0),gp(0x89e7e2),1);
}
B5a4fec:{NFSU2_TR(0x5a4fec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a4fee:{NFSU2_TR(0x5a4fee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a50bau,5a5);}
}
B5a4ff4:L5a4ff4:{c.instructions+=3;NFSU2_TR(0x5a4ff4);
__builtin_memmove((R+0),gp(0x890100),4);
}
B5a4ff9:{NFSU2_TR(0x5a4ff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a4ffb:{NFSU2_TR(0x5a4ffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a50bau,5a5);}
TAIL_STATIC(0x5a5001u,5a5);
}
XIT:NFSU2_TR_EXIT(0x5a4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
