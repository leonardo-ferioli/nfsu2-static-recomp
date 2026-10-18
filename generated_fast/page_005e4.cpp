#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5e3(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 page_5e4(Cpu& c){return body_5e4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e4000:goto L5e4000;
case 0x5e4002:c.instructions+=1;goto B5e4002;
case 0x5e4004:goto L5e4004;
case 0x5e4007:c.instructions+=2;goto B5e4007;
case 0x5e4009:c.instructions+=1;goto B5e4009;
case 0x5e400b:goto L5e400b;
case 0x5e4011:c.instructions+=15;goto B5e4011;
case 0x5e4015:c.instructions+=14;goto B5e4015;
case 0x5e4018:c.instructions+=13;goto B5e4018;
case 0x5e401d:c.instructions+=12;goto B5e401d;
case 0x5e401f:c.instructions+=11;goto B5e401f;
case 0x5e4025:c.instructions+=10;goto B5e4025;
case 0x5e4027:c.instructions+=9;goto B5e4027;
case 0x5e402d:c.instructions+=8;goto B5e402d;
case 0x5e4033:c.instructions+=7;goto B5e4033;
case 0x5e4037:c.instructions+=6;goto B5e4037;
case 0x5e4039:c.instructions+=5;goto B5e4039;
case 0x5e403f:c.instructions+=4;goto B5e403f;
case 0x5e4043:c.instructions+=3;goto B5e4043;
case 0x5e404b:c.instructions+=2;goto B5e404b;
case 0x5e404f:c.instructions+=1;goto B5e404f;
case 0x5e4051:goto L5e4051;
case 0x5e4052:c.instructions+=1;goto B5e4052;
case 0x5e4057:goto L5e4057;
case 0x5e405a:goto L5e405a;
case 0x5e405b:c.instructions+=3;goto B5e405b;
case 0x5e405e:c.instructions+=2;goto B5e405e;
case 0x5e4064:c.instructions+=1;goto B5e4064;
case 0x5e4066:goto L5e4066;
case 0x5e4068:c.instructions+=1;goto B5e4068;
case 0x5e406d:goto L5e406d;
case 0x5e406e:c.instructions+=3;goto B5e406e;
case 0x5e406f:c.instructions+=2;goto B5e406f;
case 0x5e4070:c.instructions+=1;goto B5e4070;
case 0x5e4080:goto L5e4080;
case 0x5e4081:c.instructions+=14;goto B5e4081;
case 0x5e4083:c.instructions+=13;goto B5e4083;
case 0x5e4086:c.instructions+=12;goto B5e4086;
case 0x5e4089:c.instructions+=11;goto B5e4089;
case 0x5e408c:c.instructions+=10;goto B5e408c;
case 0x5e408f:c.instructions+=9;goto B5e408f;
case 0x5e4090:c.instructions+=8;goto B5e4090;
case 0x5e4091:c.instructions+=7;goto B5e4091;
case 0x5e4093:c.instructions+=6;goto B5e4093;
case 0x5e4096:c.instructions+=5;goto B5e4096;
case 0x5e4097:c.instructions+=4;goto B5e4097;
case 0x5e409b:c.instructions+=3;goto B5e409b;
case 0x5e409f:c.instructions+=2;goto B5e409f;
case 0x5e40a3:c.instructions+=1;goto B5e40a3;
case 0x5e40a5:goto L5e40a5;
case 0x5e40aa:c.instructions+=3;goto B5e40aa;
case 0x5e40ac:c.instructions+=2;goto B5e40ac;
case 0x5e40b1:c.instructions+=1;goto B5e40b1;
case 0x5e40b3:goto L5e40b3;
case 0x5e40b8:goto L5e40b8;
case 0x5e40bb:c.instructions+=2;goto B5e40bb;
case 0x5e40bf:c.instructions+=1;goto B5e40bf;
case 0x5e40c0:goto L5e40c0;
case 0x5e40c2:c.instructions+=1;goto B5e40c2;
case 0x5e40c4:goto L5e40c4;
case 0x5e40c7:c.instructions+=1;goto B5e40c7;
case 0x5e40cd:goto L5e40cd;
case 0x5e40cf:c.instructions+=2;goto B5e40cf;
case 0x5e40d3:c.instructions+=1;goto B5e40d3;
case 0x5e40d5:goto L5e40d5;
case 0x5e40d8:c.instructions+=1;goto B5e40d8;
case 0x5e40de:goto L5e40de;
case 0x5e40e1:c.instructions+=1;goto B5e40e1;
case 0x5e40e7:goto L5e40e7;
case 0x5e40ea:c.instructions+=1;goto B5e40ea;
case 0x5e40ee:goto L5e40ee;
case 0x5e40f0:c.instructions+=1;goto B5e40f0;
case 0x5e40f6:goto L5e40f6;
case 0x5e40f8:c.instructions+=2;goto B5e40f8;
case 0x5e40fa:c.instructions+=1;goto B5e40fa;
case 0x5e4100:goto L5e4100;
case 0x5e4103:c.instructions+=7;goto B5e4103;
case 0x5e4104:c.instructions+=6;goto B5e4104;
case 0x5e4105:c.instructions+=5;goto B5e4105;
case 0x5e4109:c.instructions+=4;goto B5e4109;
case 0x5e410a:c.instructions+=3;goto B5e410a;
case 0x5e410b:c.instructions+=2;goto B5e410b;
case 0x5e410d:c.instructions+=1;goto B5e410d;
case 0x5e4112:goto L5e4112;
case 0x5e4114:c.instructions+=2;goto B5e4114;
case 0x5e4116:c.instructions+=1;goto B5e4116;
case 0x5e4118:goto L5e4118;
case 0x5e411c:c.instructions+=2;goto B5e411c;
case 0x5e411e:c.instructions+=1;goto B5e411e;
case 0x5e4120:goto L5e4120;
case 0x5e4123:c.instructions+=4;goto B5e4123;
case 0x5e4124:c.instructions+=3;goto B5e4124;
case 0x5e4125:c.instructions+=2;goto B5e4125;
case 0x5e4127:c.instructions+=1;goto B5e4127;
case 0x5e412c:goto L5e412c;
case 0x5e412e:goto L5e412e;
case 0x5e4132:c.instructions+=13;goto B5e4132;
case 0x5e4134:c.instructions+=12;goto B5e4134;
case 0x5e4137:c.instructions+=11;goto B5e4137;
case 0x5e413a:c.instructions+=10;goto B5e413a;
case 0x5e413e:c.instructions+=9;goto B5e413e;
case 0x5e4142:c.instructions+=8;goto B5e4142;
case 0x5e4146:c.instructions+=7;goto B5e4146;
case 0x5e414a:c.instructions+=6;goto B5e414a;
case 0x5e414b:c.instructions+=5;goto B5e414b;
case 0x5e414c:c.instructions+=4;goto B5e414c;
case 0x5e4152:c.instructions+=3;goto B5e4152;
case 0x5e4156:c.instructions+=2;goto B5e4156;
case 0x5e415a:c.instructions+=1;goto B5e415a;
case 0x5e415f:goto L5e415f;
case 0x5e4162:goto L5e4162;
case 0x5e4166:c.instructions+=1;goto B5e4166;
case 0x5e416a:goto L5e416a;
case 0x5e416c:c.instructions+=3;goto B5e416c;
case 0x5e4170:c.instructions+=2;goto B5e4170;
case 0x5e4173:c.instructions+=1;goto B5e4173;
case 0x5e4175:goto L5e4175;
case 0x5e4179:c.instructions+=1;goto B5e4179;
case 0x5e417d:goto L5e417d;
case 0x5e417e:c.instructions+=3;goto B5e417e;
case 0x5e4181:c.instructions+=2;goto B5e4181;
case 0x5e4185:c.instructions+=1;goto B5e4185;
case 0x5e418b:goto L5e418b;
case 0x5e418f:c.instructions+=6;goto B5e418f;
case 0x5e4190:c.instructions+=5;goto B5e4190;
case 0x5e4191:c.instructions+=4;goto B5e4191;
case 0x5e4192:c.instructions+=3;goto B5e4192;
case 0x5e4194:c.instructions+=2;goto B5e4194;
case 0x5e4195:c.instructions+=1;goto B5e4195;
case 0x5e41a0:goto L5e41a0;
case 0x5e41a1:c.instructions+=13;goto B5e41a1;
case 0x5e41a3:c.instructions+=12;goto B5e41a3;
case 0x5e41a6:c.instructions+=11;goto B5e41a6;
case 0x5e41a9:c.instructions+=10;goto B5e41a9;
case 0x5e41ae:c.instructions+=9;goto B5e41ae;
case 0x5e41af:c.instructions+=8;goto B5e41af;
case 0x5e41b0:c.instructions+=7;goto B5e41b0;
case 0x5e41b1:c.instructions+=6;goto B5e41b1;
case 0x5e41b3:c.instructions+=5;goto B5e41b3;
case 0x5e41b5:c.instructions+=4;goto B5e41b5;
case 0x5e41b7:c.instructions+=3;goto B5e41b7;
case 0x5e41b8:c.instructions+=2;goto B5e41b8;
case 0x5e41bc:c.instructions+=1;goto B5e41bc;
case 0x5e41c2:goto L5e41c2;
case 0x5e41c4:c.instructions+=1;goto B5e41c4;
case 0x5e41c9:goto L5e41c9;
case 0x5e41cb:c.instructions+=2;goto B5e41cb;
case 0x5e41ce:c.instructions+=1;goto B5e41ce;
case 0x5e41d3:goto L5e41d3;
case 0x5e41d5:c.instructions+=1;goto B5e41d5;
case 0x5e41d7:goto L5e41d7;
case 0x5e41d9:c.instructions+=2;goto B5e41d9;
case 0x5e41db:c.instructions+=1;goto B5e41db;
case 0x5e41dd:goto L5e41dd;
case 0x5e41e0:c.instructions+=3;goto B5e41e0;
case 0x5e41e2:c.instructions+=2;goto B5e41e2;
case 0x5e41e6:c.instructions+=1;goto B5e41e6;
case 0x5e41e8:goto L5e41e8;
case 0x5e41ee:c.instructions+=1;goto B5e41ee;
case 0x5e41f0:goto L5e41f0;
case 0x5e41f6:c.instructions+=5;goto B5e41f6;
case 0x5e41fa:c.instructions+=4;goto B5e41fa;
case 0x5e41fb:c.instructions+=3;goto B5e41fb;
case 0x5e41fe:c.instructions+=2;goto B5e41fe;
case 0x5e4200:c.instructions+=1;goto B5e4200;
case 0x5e4202:goto L5e4202;
case 0x5e4204:c.instructions+=5;goto B5e4204;
case 0x5e4207:c.instructions+=4;goto B5e4207;
case 0x5e420a:c.instructions+=3;goto B5e420a;
case 0x5e420c:c.instructions+=2;goto B5e420c;
case 0x5e420f:c.instructions+=1;goto B5e420f;
case 0x5e4210:goto L5e4210;
case 0x5e4215:c.instructions+=1;goto B5e4215;
case 0x5e4217:goto L5e4217;
case 0x5e4218:c.instructions+=3;goto B5e4218;
case 0x5e421b:c.instructions+=2;goto B5e421b;
case 0x5e421e:c.instructions+=1;goto B5e421e;
case 0x5e4220:goto L5e4220;
case 0x5e4222:goto L5e4222;
case 0x5e4224:c.instructions+=8;goto B5e4224;
case 0x5e4226:c.instructions+=7;goto B5e4226;
case 0x5e4229:c.instructions+=6;goto B5e4229;
case 0x5e422c:c.instructions+=5;goto B5e422c;
case 0x5e422f:c.instructions+=4;goto B5e422f;
case 0x5e4230:c.instructions+=3;goto B5e4230;
case 0x5e4233:c.instructions+=2;goto B5e4233;
case 0x5e4235:c.instructions+=1;goto B5e4235;
case 0x5e4238:goto L5e4238;
case 0x5e4239:c.instructions+=3;goto B5e4239;
case 0x5e423c:c.instructions+=2;goto B5e423c;
case 0x5e4242:c.instructions+=1;goto B5e4242;
case 0x5e4244:goto L5e4244;
case 0x5e4245:c.instructions+=6;goto B5e4245;
case 0x5e4246:c.instructions+=5;goto B5e4246;
case 0x5e4247:c.instructions+=4;goto B5e4247;
case 0x5e4248:c.instructions+=3;goto B5e4248;
case 0x5e424a:c.instructions+=2;goto B5e424a;
case 0x5e424b:c.instructions+=1;goto B5e424b;
case 0x5e424c:goto L5e424c;
case 0x5e424e:c.instructions+=1;goto B5e424e;
case 0x5e4250:goto L5e4250;
case 0x5e4251:c.instructions+=1;goto B5e4251;
case 0x5e4256:goto L5e4256;
case 0x5e425c:c.instructions+=2;goto B5e425c;
case 0x5e4260:c.instructions+=1;goto B5e4260;
case 0x5e4266:goto L5e4266;
case 0x5e426c:c.instructions+=2;goto B5e426c;
case 0x5e426e:c.instructions+=1;goto B5e426e;
case 0x5e4272:goto L5e4272;
case 0x5e4278:c.instructions+=6;goto B5e4278;
case 0x5e427c:c.instructions+=5;goto B5e427c;
case 0x5e427e:c.instructions+=4;goto B5e427e;
case 0x5e4281:c.instructions+=3;goto B5e4281;
case 0x5e4284:c.instructions+=2;goto B5e4284;
case 0x5e4288:c.instructions+=1;goto B5e4288;
case 0x5e428a:goto L5e428a;
case 0x5e428e:c.instructions+=1;goto B5e428e;
case 0x5e4290:goto L5e4290;
case 0x5e4294:goto L5e4294;
case 0x5e4297:c.instructions+=2;goto B5e4297;
case 0x5e4299:c.instructions+=1;goto B5e4299;
case 0x5e429b:goto L5e429b;
case 0x5e42a2:c.instructions+=1;goto B5e42a2;
case 0x5e42a4:goto L5e42a4;
case 0x5e42a6:goto L5e42a6;
case 0x5e42aa:c.instructions+=2;goto B5e42aa;
case 0x5e42ae:c.instructions+=1;goto B5e42ae;
case 0x5e42b4:goto L5e42b4;
case 0x5e42b6:c.instructions+=2;goto B5e42b6;
case 0x5e42b9:c.instructions+=1;goto B5e42b9;
case 0x5e42c0:goto L5e42c0;
case 0x5e42c3:c.instructions+=1;goto B5e42c3;
case 0x5e42c9:goto L5e42c9;
case 0x5e42ca:c.instructions+=3;goto B5e42ca;
case 0x5e42cd:c.instructions+=2;goto B5e42cd;
case 0x5e42d0:c.instructions+=1;goto B5e42d0;
case 0x5e42d2:goto L5e42d2;
case 0x5e42d5:c.instructions+=3;goto B5e42d5;
case 0x5e42d8:c.instructions+=2;goto B5e42d8;
case 0x5e42db:c.instructions+=1;goto B5e42db;
case 0x5e42e1:goto L5e42e1;
case 0x5e42e5:c.instructions+=2;goto B5e42e5;
case 0x5e42ea:c.instructions+=1;goto B5e42ea;
case 0x5e42ef:goto L5e42ef;
case 0x5e42f7:goto L5e42f7;
case 0x5e42fb:c.instructions+=4;goto B5e42fb;
case 0x5e42fd:c.instructions+=3;goto B5e42fd;
case 0x5e42ff:c.instructions+=2;goto B5e42ff;
case 0x5e4302:c.instructions+=1;goto B5e4302;
case 0x5e4308:goto L5e4308;
case 0x5e4309:c.instructions+=1;goto B5e4309;
case 0x5e430f:goto L5e430f;
case 0x5e4310:c.instructions+=1;goto B5e4310;
case 0x5e4312:goto L5e4312;
case 0x5e4316:c.instructions+=3;goto B5e4316;
case 0x5e4319:c.instructions+=2;goto B5e4319;
case 0x5e431c:c.instructions+=1;goto B5e431c;
case 0x5e431f:goto L5e431f;
case 0x5e4322:c.instructions+=2;goto B5e4322;
case 0x5e4324:c.instructions+=1;goto B5e4324;
case 0x5e432a:goto L5e432a;
case 0x5e432e:c.instructions+=1;goto B5e432e;
case 0x5e4333:goto L5e4333;
case 0x5e4335:c.instructions+=14;goto B5e4335;
case 0x5e4338:c.instructions+=13;goto B5e4338;
case 0x5e4340:c.instructions+=12;goto B5e4340;
case 0x5e4344:c.instructions+=11;goto B5e4344;
case 0x5e4346:c.instructions+=10;goto B5e4346;
case 0x5e4348:c.instructions+=9;goto B5e4348;
case 0x5e434c:c.instructions+=8;goto B5e434c;
case 0x5e434e:c.instructions+=7;goto B5e434e;
case 0x5e4350:c.instructions+=6;goto B5e4350;
case 0x5e4352:c.instructions+=5;goto B5e4352;
case 0x5e4354:c.instructions+=4;goto B5e4354;
case 0x5e4358:c.instructions+=3;goto B5e4358;
case 0x5e435a:c.instructions+=2;goto B5e435a;
case 0x5e435d:c.instructions+=1;goto B5e435d;
case 0x5e435f:goto L5e435f;
case 0x5e4361:c.instructions+=5;goto B5e4361;
case 0x5e4362:c.instructions+=4;goto B5e4362;
case 0x5e4366:c.instructions+=3;goto B5e4366;
case 0x5e4367:c.instructions+=2;goto B5e4367;
case 0x5e436c:c.instructions+=1;goto B5e436c;
case 0x5e4371:goto L5e4371;
case 0x5e4375:c.instructions+=3;goto B5e4375;
case 0x5e4376:c.instructions+=2;goto B5e4376;
case 0x5e4377:c.instructions+=1;goto B5e4377;
case 0x5e437c:goto L5e437c;
case 0x5e437f:c.instructions+=2;goto B5e437f;
case 0x5e4381:c.instructions+=1;goto B5e4381;
case 0x5e4387:goto L5e4387;
case 0x5e438a:c.instructions+=1;goto B5e438a;
case 0x5e438c:goto L5e438c;
case 0x5e4390:c.instructions+=3;goto B5e4390;
case 0x5e4393:c.instructions+=2;goto B5e4393;
case 0x5e4399:c.instructions+=1;goto B5e4399;
case 0x5e439e:goto L5e439e;
case 0x5e43a2:c.instructions+=5;goto B5e43a2;
case 0x5e43a5:c.instructions+=4;goto B5e43a5;
case 0x5e43a8:c.instructions+=3;goto B5e43a8;
case 0x5e43ab:c.instructions+=2;goto B5e43ab;
case 0x5e43ae:c.instructions+=1;goto B5e43ae;
case 0x5e43b3:goto L5e43b3;
case 0x5e43b7:c.instructions+=4;goto B5e43b7;
case 0x5e43ba:c.instructions+=3;goto B5e43ba;
case 0x5e43bc:c.instructions+=2;goto B5e43bc;
case 0x5e43be:c.instructions+=1;goto B5e43be;
case 0x5e43c4:goto L5e43c4;
case 0x5e43c6:c.instructions+=1;goto B5e43c6;
case 0x5e43cc:goto L5e43cc;
case 0x5e43d1:goto L5e43d1;
case 0x5e43d5:c.instructions+=5;goto B5e43d5;
case 0x5e43d7:c.instructions+=4;goto B5e43d7;
case 0x5e43da:c.instructions+=3;goto B5e43da;
case 0x5e43df:c.instructions+=2;goto B5e43df;
case 0x5e43e1:c.instructions+=1;goto B5e43e1;
case 0x5e43e3:goto L5e43e3;
case 0x5e43e4:c.instructions+=1;goto B5e43e4;
case 0x5e43e6:goto L5e43e6;
case 0x5e43e7:c.instructions+=1;goto B5e43e7;
case 0x5e43e9:goto L5e43e9;
case 0x5e43ec:goto L5e43ec;
case 0x5e43ef:goto L5e43ef;
case 0x5e43f1:c.instructions+=1;goto B5e43f1;
case 0x5e43f6:goto L5e43f6;
case 0x5e43f9:c.instructions+=1;goto B5e43f9;
case 0x5e43fb:goto L5e43fb;
case 0x5e43fe:c.instructions+=2;goto B5e43fe;
case 0x5e4401:c.instructions+=1;goto B5e4401;
case 0x5e4403:goto L5e4403;
case 0x5e4406:c.instructions+=2;goto B5e4406;
case 0x5e4409:c.instructions+=1;goto B5e4409;
case 0x5e440b:goto L5e440b;
case 0x5e440e:c.instructions+=5;goto B5e440e;
case 0x5e4410:c.instructions+=4;goto B5e4410;
case 0x5e4413:c.instructions+=3;goto B5e4413;
case 0x5e4415:c.instructions+=2;goto B5e4415;
case 0x5e4418:c.instructions+=1;goto B5e4418;
case 0x5e441a:goto L5e441a;
case 0x5e441d:c.instructions+=10;goto B5e441d;
case 0x5e4421:c.instructions+=9;goto B5e4421;
case 0x5e4425:c.instructions+=8;goto B5e4425;
case 0x5e4429:c.instructions+=7;goto B5e4429;
case 0x5e442a:c.instructions+=6;goto B5e442a;
case 0x5e442e:c.instructions+=5;goto B5e442e;
case 0x5e442f:c.instructions+=4;goto B5e442f;
case 0x5e4430:c.instructions+=3;goto B5e4430;
case 0x5e4431:c.instructions+=2;goto B5e4431;
case 0x5e4432:c.instructions+=1;goto B5e4432;
case 0x5e4437:goto L5e4437;
case 0x5e4439:c.instructions+=1;goto B5e4439;
case 0x5e443f:goto L5e443f;
case 0x5e4440:goto L5e4440;
case 0x5e4444:c.instructions+=2;goto B5e4444;
case 0x5e4446:c.instructions+=1;goto B5e4446;
case 0x5e4448:goto L5e4448;
case 0x5e444f:c.instructions+=1;goto B5e444f;
case 0x5e4451:goto L5e4451;
case 0x5e4453:goto L5e4453;
case 0x5e4457:c.instructions+=16;goto B5e4457;
case 0x5e445a:c.instructions+=15;goto B5e445a;
case 0x5e4461:c.instructions+=14;goto B5e4461;
case 0x5e4465:c.instructions+=13;goto B5e4465;
case 0x5e446c:c.instructions+=12;goto B5e446c;
case 0x5e4474:c.instructions+=11;goto B5e4474;
case 0x5e4476:c.instructions+=10;goto B5e4476;
case 0x5e4478:c.instructions+=9;goto B5e4478;
case 0x5e447c:c.instructions+=8;goto B5e447c;
case 0x5e447e:c.instructions+=7;goto B5e447e;
case 0x5e4480:c.instructions+=6;goto B5e4480;
case 0x5e4482:c.instructions+=5;goto B5e4482;
case 0x5e4484:c.instructions+=4;goto B5e4484;
case 0x5e4488:c.instructions+=3;goto B5e4488;
case 0x5e448a:c.instructions+=2;goto B5e448a;
case 0x5e448d:c.instructions+=1;goto B5e448d;
case 0x5e448f:goto L5e448f;
case 0x5e4491:c.instructions+=5;goto B5e4491;
case 0x5e4492:c.instructions+=4;goto B5e4492;
case 0x5e4496:c.instructions+=3;goto B5e4496;
case 0x5e4497:c.instructions+=2;goto B5e4497;
case 0x5e449c:c.instructions+=1;goto B5e449c;
case 0x5e44a1:goto L5e44a1;
case 0x5e44a5:c.instructions+=3;goto B5e44a5;
case 0x5e44a6:c.instructions+=2;goto B5e44a6;
case 0x5e44a7:c.instructions+=1;goto B5e44a7;
case 0x5e44ac:goto L5e44ac;
case 0x5e44af:c.instructions+=2;goto B5e44af;
case 0x5e44b1:c.instructions+=1;goto B5e44b1;
case 0x5e44b3:goto L5e44b3;
case 0x5e44b8:c.instructions+=3;goto B5e44b8;
case 0x5e44ba:c.instructions+=2;goto B5e44ba;
case 0x5e44bf:c.instructions+=1;goto B5e44bf;
case 0x5e44c1:goto L5e44c1;
case 0x5e44c5:c.instructions+=7;goto B5e44c5;
case 0x5e44c9:c.instructions+=6;goto B5e44c9;
case 0x5e44ca:c.instructions+=5;goto B5e44ca;
case 0x5e44cb:c.instructions+=4;goto B5e44cb;
case 0x5e44cc:c.instructions+=3;goto B5e44cc;
case 0x5e44cd:c.instructions+=2;goto B5e44cd;
case 0x5e44ce:c.instructions+=1;goto B5e44ce;
case 0x5e44d3:goto L5e44d3;
case 0x5e44d5:c.instructions+=1;goto B5e44d5;
case 0x5e44db:goto L5e44db;
case 0x5e44df:c.instructions+=2;goto B5e44df;
case 0x5e44e1:c.instructions+=1;goto B5e44e1;
case 0x5e44e3:goto L5e44e3;
case 0x5e44e8:c.instructions+=2;goto B5e44e8;
case 0x5e44ea:c.instructions+=1;goto B5e44ea;
case 0x5e44ec:goto L5e44ec;
case 0x5e44f0:c.instructions+=3;goto B5e44f0;
case 0x5e44f3:c.instructions+=2;goto B5e44f3;
case 0x5e44f9:c.instructions+=1;goto B5e44f9;
case 0x5e44fe:goto L5e44fe;
case 0x5e4501:goto L5e4501;
case 0x5e4505:c.instructions+=4;goto B5e4505;
case 0x5e4508:c.instructions+=3;goto B5e4508;
case 0x5e450d:c.instructions+=2;goto B5e450d;
case 0x5e4511:c.instructions+=1;goto B5e4511;
case 0x5e4517:goto L5e4517;
case 0x5e451b:c.instructions+=3;goto B5e451b;
case 0x5e451d:c.instructions+=2;goto B5e451d;
case 0x5e4521:c.instructions+=1;goto B5e4521;
case 0x5e4523:goto L5e4523;
case 0x5e4526:c.instructions+=3;goto B5e4526;
case 0x5e4529:c.instructions+=2;goto B5e4529;
case 0x5e452b:c.instructions+=1;goto B5e452b;
case 0x5e452d:goto L5e452d;
case 0x5e4531:c.instructions+=7;goto B5e4531;
case 0x5e4532:c.instructions+=6;goto B5e4532;
case 0x5e4536:c.instructions+=5;goto B5e4536;
case 0x5e4537:c.instructions+=4;goto B5e4537;
case 0x5e4539:c.instructions+=3;goto B5e4539;
case 0x5e453e:c.instructions+=2;goto B5e453e;
case 0x5e4543:c.instructions+=1;goto B5e4543;
case 0x5e4548:goto L5e4548;
case 0x5e454a:c.instructions+=3;goto B5e454a;
case 0x5e454e:c.instructions+=2;goto B5e454e;
case 0x5e4550:c.instructions+=1;goto B5e4550;
case 0x5e4552:goto L5e4552;
case 0x5e4556:c.instructions+=2;goto B5e4556;
case 0x5e4558:c.instructions+=1;goto B5e4558;
case 0x5e455a:goto L5e455a;
case 0x5e455d:c.instructions+=3;goto B5e455d;
case 0x5e4560:c.instructions+=2;goto B5e4560;
case 0x5e4562:c.instructions+=1;goto B5e4562;
case 0x5e4564:goto L5e4564;
case 0x5e4566:c.instructions+=1;goto B5e4566;
case 0x5e4568:goto L5e4568;
case 0x5e456c:goto L5e456c;
case 0x5e4570:c.instructions+=1;goto B5e4570;
case 0x5e4575:goto L5e4575;
case 0x5e4579:c.instructions+=1;goto B5e4579;
case 0x5e457f:goto L5e457f;
case 0x5e4583:c.instructions+=8;goto B5e4583;
case 0x5e4587:c.instructions+=7;goto B5e4587;
case 0x5e458d:c.instructions+=6;goto B5e458d;
case 0x5e458e:c.instructions+=5;goto B5e458e;
case 0x5e4591:c.instructions+=4;goto B5e4591;
case 0x5e4593:c.instructions+=3;goto B5e4593;
case 0x5e4597:c.instructions+=2;goto B5e4597;
case 0x5e459b:c.instructions+=1;goto B5e459b;
case 0x5e45a1:goto L5e45a1;
case 0x5e45a6:c.instructions+=2;goto B5e45a6;
case 0x5e45a9:c.instructions+=1;goto B5e45a9;
case 0x5e45b0:goto L5e45b0;
case 0x5e45b3:c.instructions+=2;goto B5e45b3;
case 0x5e45b5:c.instructions+=1;goto B5e45b5;
case 0x5e45b7:goto L5e45b7;
case 0x5e45ba:c.instructions+=2;goto B5e45ba;
case 0x5e45bc:c.instructions+=1;goto B5e45bc;
case 0x5e45be:goto L5e45be;
case 0x5e45c1:c.instructions+=4;goto B5e45c1;
case 0x5e45c3:c.instructions+=3;goto B5e45c3;
case 0x5e45c6:c.instructions+=2;goto B5e45c6;
case 0x5e45c9:c.instructions+=1;goto B5e45c9;
case 0x5e45cb:goto L5e45cb;
case 0x5e45cd:c.instructions+=3;goto B5e45cd;
case 0x5e45d0:c.instructions+=2;goto B5e45d0;
case 0x5e45d3:c.instructions+=1;goto B5e45d3;
case 0x5e45d5:goto L5e45d5;
case 0x5e45da:c.instructions+=1;goto B5e45da;
case 0x5e45dc:goto L5e45dc;
case 0x5e45df:goto L5e45df;
case 0x5e45e2:goto L5e45e2;
case 0x5e45e5:c.instructions+=2;goto B5e45e5;
case 0x5e45e7:c.instructions+=1;goto B5e45e7;
case 0x5e45e9:goto L5e45e9;
case 0x5e45eb:c.instructions+=2;goto B5e45eb;
case 0x5e45ed:c.instructions+=1;goto B5e45ed;
case 0x5e45ef:goto L5e45ef;
case 0x5e45f2:c.instructions+=4;goto B5e45f2;
case 0x5e45f4:c.instructions+=3;goto B5e45f4;
case 0x5e45f7:c.instructions+=2;goto B5e45f7;
case 0x5e45fa:c.instructions+=1;goto B5e45fa;
case 0x5e45fc:goto L5e45fc;
case 0x5e45fe:c.instructions+=3;goto B5e45fe;
case 0x5e4601:c.instructions+=2;goto B5e4601;
case 0x5e4604:c.instructions+=1;goto B5e4604;
case 0x5e4606:goto L5e4606;
case 0x5e460b:c.instructions+=1;goto B5e460b;
case 0x5e460d:goto L5e460d;
case 0x5e4610:goto L5e4610;
case 0x5e4613:goto L5e4613;
case 0x5e4615:c.instructions+=1;goto B5e4615;
case 0x5e4617:goto L5e4617;
case 0x5e461a:c.instructions+=2;goto B5e461a;
case 0x5e461c:c.instructions+=1;goto B5e461c;
case 0x5e461e:goto L5e461e;
case 0x5e4621:c.instructions+=4;goto B5e4621;
case 0x5e4623:c.instructions+=3;goto B5e4623;
case 0x5e4626:c.instructions+=2;goto B5e4626;
case 0x5e4629:c.instructions+=1;goto B5e4629;
case 0x5e462b:goto L5e462b;
case 0x5e462d:c.instructions+=3;goto B5e462d;
case 0x5e4630:c.instructions+=2;goto B5e4630;
case 0x5e4633:c.instructions+=1;goto B5e4633;
case 0x5e4635:goto L5e4635;
case 0x5e463a:c.instructions+=1;goto B5e463a;
case 0x5e463c:goto L5e463c;
case 0x5e463f:goto L5e463f;
case 0x5e4642:goto L5e4642;
case 0x5e4645:c.instructions+=2;goto B5e4645;
case 0x5e4647:c.instructions+=1;goto B5e4647;
case 0x5e4649:goto L5e4649;
case 0x5e464c:c.instructions+=2;goto B5e464c;
case 0x5e464e:c.instructions+=1;goto B5e464e;
case 0x5e4650:goto L5e4650;
case 0x5e4653:c.instructions+=4;goto B5e4653;
case 0x5e4655:c.instructions+=3;goto B5e4655;
case 0x5e4658:c.instructions+=2;goto B5e4658;
case 0x5e465b:c.instructions+=1;goto B5e465b;
case 0x5e465d:goto L5e465d;
case 0x5e465f:c.instructions+=3;goto B5e465f;
case 0x5e4662:c.instructions+=2;goto B5e4662;
case 0x5e4665:c.instructions+=1;goto B5e4665;
case 0x5e4667:goto L5e4667;
case 0x5e466c:c.instructions+=1;goto B5e466c;
case 0x5e466e:goto L5e466e;
case 0x5e4671:goto L5e4671;
case 0x5e4674:goto L5e4674;
case 0x5e4677:c.instructions+=4;goto B5e4677;
case 0x5e467a:c.instructions+=3;goto B5e467a;
case 0x5e467d:c.instructions+=2;goto B5e467d;
case 0x5e4682:c.instructions+=1;goto B5e4682;
case 0x5e4688:goto L5e4688;
case 0x5e468d:c.instructions+=3;goto B5e468d;
case 0x5e468f:c.instructions+=2;goto B5e468f;
case 0x5e4691:c.instructions+=1;goto B5e4691;
case 0x5e4693:goto L5e4693;
case 0x5e46a0:goto L5e46a0;
case 0x5e46a6:c.instructions+=5;goto B5e46a6;
case 0x5e46a8:c.instructions+=4;goto B5e46a8;
case 0x5e46ae:c.instructions+=3;goto B5e46ae;
case 0x5e46b0:c.instructions+=2;goto B5e46b0;
case 0x5e46b2:c.instructions+=1;goto B5e46b2;
case 0x5e46b4:goto L5e46b4;
case 0x5e46ba:c.instructions+=8;goto B5e46ba;
case 0x5e46c0:c.instructions+=7;goto B5e46c0;
case 0x5e46c4:c.instructions+=6;goto B5e46c4;
case 0x5e46c8:c.instructions+=5;goto B5e46c8;
case 0x5e46ce:c.instructions+=4;goto B5e46ce;
case 0x5e46d4:c.instructions+=3;goto B5e46d4;
case 0x5e46d8:c.instructions+=2;goto B5e46d8;
case 0x5e46dc:c.instructions+=1;goto B5e46dc;
case 0x5e46de:goto L5e46de;
case 0x5e46e4:c.instructions+=8;goto B5e46e4;
case 0x5e46e5:c.instructions+=7;goto B5e46e5;
case 0x5e46ea:c.instructions+=6;goto B5e46ea;
case 0x5e46eb:c.instructions+=5;goto B5e46eb;
case 0x5e46ef:c.instructions+=4;goto B5e46ef;
case 0x5e46f0:c.instructions+=3;goto B5e46f0;
case 0x5e46f4:c.instructions+=2;goto B5e46f4;
case 0x5e46f5:c.instructions+=1;goto B5e46f5;
case 0x5e46fa:goto L5e46fa;
case 0x5e46fd:goto L5e46fd;
case 0x5e4702:c.instructions+=3;goto B5e4702;
case 0x5e4703:c.instructions+=2;goto B5e4703;
case 0x5e4705:c.instructions+=1;goto B5e4705;
case 0x5e4707:goto L5e4707;
case 0x5e470d:c.instructions+=6;goto B5e470d;
case 0x5e4711:c.instructions+=5;goto B5e4711;
case 0x5e4715:c.instructions+=4;goto B5e4715;
case 0x5e471b:c.instructions+=3;goto B5e471b;
case 0x5e471d:c.instructions+=2;goto B5e471d;
case 0x5e4720:c.instructions+=1;goto B5e4720;
case 0x5e4722:goto L5e4722;
case 0x5e472a:goto L5e472a;
case 0x5e472e:c.instructions+=15;goto B5e472e;
case 0x5e4732:c.instructions+=14;goto B5e4732;
case 0x5e4736:c.instructions+=13;goto B5e4736;
case 0x5e4738:c.instructions+=12;goto B5e4738;
case 0x5e473b:c.instructions+=11;goto B5e473b;
case 0x5e4740:c.instructions+=10;goto B5e4740;
case 0x5e4744:c.instructions+=9;goto B5e4744;
case 0x5e4748:c.instructions+=8;goto B5e4748;
case 0x5e474c:c.instructions+=7;goto B5e474c;
case 0x5e4750:c.instructions+=6;goto B5e4750;
case 0x5e4754:c.instructions+=5;goto B5e4754;
case 0x5e4758:c.instructions+=4;goto B5e4758;
case 0x5e475c:c.instructions+=3;goto B5e475c;
case 0x5e4760:c.instructions+=2;goto B5e4760;
case 0x5e4764:c.instructions+=1;goto B5e4764;
case 0x5e4768:goto L5e4768;
case 0x5e476a:c.instructions+=1;goto B5e476a;
case 0x5e4770:goto L5e4770;
case 0x5e4772:c.instructions+=2;goto B5e4772;
case 0x5e4774:c.instructions+=1;goto B5e4774;
case 0x5e477a:goto L5e477a;
case 0x5e4780:c.instructions+=2;goto B5e4780;
case 0x5e4782:c.instructions+=1;goto B5e4782;
case 0x5e4785:goto L5e4785;
case 0x5e4788:c.instructions+=1;goto B5e4788;
case 0x5e478a:goto L5e478a;
case 0x5e478b:c.instructions+=3;goto B5e478b;
case 0x5e478e:c.instructions+=2;goto B5e478e;
case 0x5e4791:c.instructions+=1;goto B5e4791;
case 0x5e4793:goto L5e4793;
case 0x5e4795:goto L5e4795;
case 0x5e4798:c.instructions+=3;goto B5e4798;
case 0x5e479b:c.instructions+=2;goto B5e479b;
case 0x5e479e:c.instructions+=1;goto B5e479e;
case 0x5e47a0:goto L5e47a0;
case 0x5e47a2:c.instructions+=3;goto B5e47a2;
case 0x5e47a4:c.instructions+=2;goto B5e47a4;
case 0x5e47a6:c.instructions+=1;goto B5e47a6;
case 0x5e47ab:goto L5e47ab;
case 0x5e47ad:c.instructions+=1;goto B5e47ad;
case 0x5e47b0:goto L5e47b0;
case 0x5e47b4:c.instructions+=1;goto B5e47b4;
case 0x5e47b6:goto L5e47b6;
case 0x5e47b9:c.instructions+=8;goto B5e47b9;
case 0x5e47ba:c.instructions+=7;goto B5e47ba;
case 0x5e47bd:c.instructions+=6;goto B5e47bd;
case 0x5e47be:c.instructions+=5;goto B5e47be;
case 0x5e47c2:c.instructions+=4;goto B5e47c2;
case 0x5e47c3:c.instructions+=3;goto B5e47c3;
case 0x5e47c7:c.instructions+=2;goto B5e47c7;
case 0x5e47c8:c.instructions+=1;goto B5e47c8;
case 0x5e47cd:goto L5e47cd;
case 0x5e47d0:c.instructions+=2;goto B5e47d0;
case 0x5e47d2:c.instructions+=1;goto B5e47d2;
case 0x5e47d4:goto L5e47d4;
case 0x5e47d8:c.instructions+=5;goto B5e47d8;
case 0x5e47d9:c.instructions+=4;goto B5e47d9;
case 0x5e47db:c.instructions+=3;goto B5e47db;
case 0x5e47dd:c.instructions+=2;goto B5e47dd;
case 0x5e47e2:c.instructions+=1;goto B5e47e2;
case 0x5e47e7:goto L5e47e7;
case 0x5e47eb:c.instructions+=2;goto B5e47eb;
case 0x5e47ed:c.instructions+=1;goto B5e47ed;
case 0x5e47ef:goto L5e47ef;
case 0x5e47f3:c.instructions+=3;goto B5e47f3;
case 0x5e47f5:c.instructions+=2;goto B5e47f5;
case 0x5e47f8:c.instructions+=1;goto B5e47f8;
case 0x5e47fa:goto L5e47fa;
case 0x5e47fd:c.instructions+=1;goto B5e47fd;
case 0x5e47ff:goto L5e47ff;
case 0x5e4801:goto L5e4801;
case 0x5e4802:c.instructions+=3;goto B5e4802;
case 0x5e4805:c.instructions+=2;goto B5e4805;
case 0x5e480b:c.instructions+=1;goto B5e480b;
case 0x5e4811:goto L5e4811;
case 0x5e4812:c.instructions+=6;goto B5e4812;
case 0x5e4813:c.instructions+=5;goto B5e4813;
case 0x5e4814:c.instructions+=4;goto B5e4814;
case 0x5e4815:c.instructions+=3;goto B5e4815;
case 0x5e4817:c.instructions+=2;goto B5e4817;
case 0x5e4818:c.instructions+=1;goto B5e4818;
case 0x5e4820:goto L5e4820;
case 0x5e4824:c.instructions+=3;goto B5e4824;
case 0x5e4826:c.instructions+=2;goto B5e4826;
case 0x5e482b:c.instructions+=1;goto B5e482b;
case 0x5e482d:goto L5e482d;
case 0x5e482e:c.instructions+=2;goto B5e482e;
case 0x5e4833:c.instructions+=1;goto B5e4833;
case 0x5e4838:goto L5e4838;
case 0x5e483d:c.instructions+=1;goto B5e483d;
case 0x5e483e:goto L5e483e;
case 0x5e4843:c.instructions+=1;goto B5e4843;
case 0x5e4845:goto L5e4845;
case 0x5e4847:c.instructions+=5;goto B5e4847;
case 0x5e484c:c.instructions+=4;goto B5e484c;
case 0x5e4851:c.instructions+=3;goto B5e4851;
case 0x5e4856:c.instructions+=2;goto B5e4856;
case 0x5e485b:c.instructions+=1;goto B5e485b;
case 0x5e485c:goto L5e485c;
case 0x5e4861:c.instructions+=1;goto B5e4861;
case 0x5e4863:goto L5e4863;
case 0x5e4865:c.instructions+=4;goto B5e4865;
case 0x5e486a:c.instructions+=3;goto B5e486a;
case 0x5e486f:c.instructions+=2;goto B5e486f;
case 0x5e4874:c.instructions+=1;goto B5e4874;
case 0x5e4875:goto L5e4875;
case 0x5e487a:c.instructions+=1;goto B5e487a;
case 0x5e487c:goto L5e487c;
case 0x5e487e:c.instructions+=4;goto B5e487e;
case 0x5e4883:c.instructions+=3;goto B5e4883;
case 0x5e4888:c.instructions+=2;goto B5e4888;
case 0x5e488d:c.instructions+=1;goto B5e488d;
case 0x5e488e:goto L5e488e;
case 0x5e4890:c.instructions+=1;goto B5e4890;
case 0x5e48a0:goto L5e48a0;
case 0x5e48a6:c.instructions+=3;goto B5e48a6;
case 0x5e48a8:c.instructions+=2;goto B5e48a8;
case 0x5e48ab:c.instructions+=1;goto B5e48ab;
case 0x5e48b0:goto L5e48b0;
case 0x5e48b3:c.instructions+=11;goto B5e48b3;
case 0x5e48b9:c.instructions+=10;goto B5e48b9;
case 0x5e48ba:c.instructions+=9;goto B5e48ba;
case 0x5e48bb:c.instructions+=8;goto B5e48bb;
case 0x5e48bf:c.instructions+=7;goto B5e48bf;
case 0x5e48c2:c.instructions+=6;goto B5e48c2;
case 0x5e48c5:c.instructions+=5;goto B5e48c5;
case 0x5e48c9:c.instructions+=4;goto B5e48c9;
case 0x5e48cb:c.instructions+=3;goto B5e48cb;
case 0x5e48cd:c.instructions+=2;goto B5e48cd;
case 0x5e48d1:c.instructions+=1;goto B5e48d1;
case 0x5e48d7:goto L5e48d7;
case 0x5e48d8:c.instructions+=3;goto B5e48d8;
case 0x5e48d9:c.instructions+=2;goto B5e48d9;
case 0x5e48dc:c.instructions+=1;goto B5e48dc;
case 0x5e48de:goto L5e48de;
case 0x5e48e2:goto L5e48e2;
case 0x5e48e6:c.instructions+=11;goto B5e48e6;
case 0x5e48e8:c.instructions+=10;goto B5e48e8;
case 0x5e48ec:c.instructions+=9;goto B5e48ec;
case 0x5e48ee:c.instructions+=8;goto B5e48ee;
case 0x5e48f5:c.instructions+=7;goto B5e48f5;
case 0x5e48f7:c.instructions+=6;goto B5e48f7;
case 0x5e48ff:c.instructions+=5;goto B5e48ff;
case 0x5e4903:c.instructions+=4;goto B5e4903;
case 0x5e4909:c.instructions+=3;goto B5e4909;
case 0x5e490b:c.instructions+=2;goto B5e490b;
case 0x5e4912:c.instructions+=1;goto B5e4912;
case 0x5e4914:goto L5e4914;
case 0x5e4916:c.instructions+=1;goto B5e4916;
case 0x5e491b:goto L5e491b;
case 0x5e4922:c.instructions+=2;goto B5e4922;
case 0x5e4923:c.instructions+=1;goto B5e4923;
case 0x5e4928:goto L5e4928;
case 0x5e492c:c.instructions+=2;goto B5e492c;
case 0x5e492f:c.instructions+=1;goto B5e492f;
case 0x5e4939:goto L5e4939;
case 0x5e493b:c.instructions+=4;goto B5e493b;
case 0x5e493d:c.instructions+=3;goto B5e493d;
case 0x5e4945:c.instructions+=2;goto B5e4945;
case 0x5e4949:c.instructions+=1;goto B5e4949;
case 0x5e494b:goto L5e494b;
case 0x5e4952:c.instructions+=2;goto B5e4952;
case 0x5e4954:c.instructions+=1;goto B5e4954;
case 0x5e4956:goto L5e4956;
case 0x5e4959:c.instructions+=11;goto B5e4959;
case 0x5e495d:c.instructions+=10;goto B5e495d;
case 0x5e495e:c.instructions+=9;goto B5e495e;
case 0x5e4960:c.instructions+=8;goto B5e4960;
case 0x5e4964:c.instructions+=7;goto B5e4964;
case 0x5e4966:c.instructions+=6;goto B5e4966;
case 0x5e496d:c.instructions+=5;goto B5e496d;
case 0x5e4971:c.instructions+=4;goto B5e4971;
case 0x5e4973:c.instructions+=3;goto B5e4973;
case 0x5e497a:c.instructions+=2;goto B5e497a;
case 0x5e497c:c.instructions+=1;goto B5e497c;
case 0x5e497e:goto L5e497e;
case 0x5e4982:c.instructions+=7;goto B5e4982;
case 0x5e4985:c.instructions+=6;goto B5e4985;
case 0x5e4988:c.instructions+=5;goto B5e4988;
case 0x5e498b:c.instructions+=4;goto B5e498b;
case 0x5e498e:c.instructions+=3;goto B5e498e;
case 0x5e4990:c.instructions+=2;goto B5e4990;
case 0x5e4993:c.instructions+=1;goto B5e4993;
case 0x5e4995:goto L5e4995;
case 0x5e4999:c.instructions+=8;goto B5e4999;
case 0x5e499c:c.instructions+=7;goto B5e499c;
case 0x5e49a0:c.instructions+=6;goto B5e49a0;
case 0x5e49a3:c.instructions+=5;goto B5e49a3;
case 0x5e49a6:c.instructions+=4;goto B5e49a6;
case 0x5e49aa:c.instructions+=3;goto B5e49aa;
case 0x5e49ac:c.instructions+=2;goto B5e49ac;
case 0x5e49ae:c.instructions+=1;goto B5e49ae;
case 0x5e49b1:goto L5e49b1;
case 0x5e49b5:c.instructions+=6;goto B5e49b5;
case 0x5e49b8:c.instructions+=5;goto B5e49b8;
case 0x5e49bc:c.instructions+=4;goto B5e49bc;
case 0x5e49be:c.instructions+=3;goto B5e49be;
case 0x5e49c2:c.instructions+=2;goto B5e49c2;
case 0x5e49c6:c.instructions+=1;goto B5e49c6;
case 0x5e49ce:goto L5e49ce;
case 0x5e49d2:c.instructions+=3;goto B5e49d2;
case 0x5e49d3:c.instructions+=2;goto B5e49d3;
case 0x5e49d5:c.instructions+=1;goto B5e49d5;
case 0x5e49d7:goto L5e49d7;
case 0x5e49de:c.instructions+=2;goto B5e49de;
case 0x5e49e0:c.instructions+=1;goto B5e49e0;
case 0x5e49e2:goto L5e49e2;
case 0x5e49e5:c.instructions+=10;goto B5e49e5;
case 0x5e49e6:c.instructions+=9;goto B5e49e6;
case 0x5e49e9:c.instructions+=8;goto B5e49e9;
case 0x5e49ed:c.instructions+=7;goto B5e49ed;
case 0x5e49ef:c.instructions+=6;goto B5e49ef;
case 0x5e49f6:c.instructions+=5;goto B5e49f6;
case 0x5e49fa:c.instructions+=4;goto B5e49fa;
case 0x5e49fc:c.instructions+=3;goto B5e49fc;
case 0x5e4a03:c.instructions+=2;goto B5e4a03;
case 0x5e4a05:c.instructions+=1;goto B5e4a05;
case 0x5e4a07:goto L5e4a07;
case 0x5e4a0b:c.instructions+=7;goto B5e4a0b;
case 0x5e4a0e:c.instructions+=6;goto B5e4a0e;
case 0x5e4a11:c.instructions+=5;goto B5e4a11;
case 0x5e4a14:c.instructions+=4;goto B5e4a14;
case 0x5e4a17:c.instructions+=3;goto B5e4a17;
case 0x5e4a19:c.instructions+=2;goto B5e4a19;
case 0x5e4a1c:c.instructions+=1;goto B5e4a1c;
case 0x5e4a1e:goto L5e4a1e;
case 0x5e4a22:c.instructions+=8;goto B5e4a22;
case 0x5e4a25:c.instructions+=7;goto B5e4a25;
case 0x5e4a29:c.instructions+=6;goto B5e4a29;
case 0x5e4a2c:c.instructions+=5;goto B5e4a2c;
case 0x5e4a2f:c.instructions+=4;goto B5e4a2f;
case 0x5e4a33:c.instructions+=3;goto B5e4a33;
case 0x5e4a35:c.instructions+=2;goto B5e4a35;
case 0x5e4a37:c.instructions+=1;goto B5e4a37;
case 0x5e4a3a:goto L5e4a3a;
case 0x5e4a3d:c.instructions+=4;goto B5e4a3d;
case 0x5e4a3f:c.instructions+=3;goto B5e4a3f;
case 0x5e4a43:c.instructions+=2;goto B5e4a43;
case 0x5e4a45:c.instructions+=1;goto B5e4a45;
case 0x5e4a49:goto L5e4a49;
case 0x5e4a4d:c.instructions+=5;goto B5e4a4d;
case 0x5e4a4f:c.instructions+=4;goto B5e4a4f;
case 0x5e4a56:c.instructions+=3;goto B5e4a56;
case 0x5e4a5a:c.instructions+=2;goto B5e4a5a;
case 0x5e4a5e:c.instructions+=1;goto B5e4a5e;
case 0x5e4a60:goto L5e4a60;
case 0x5e4a62:c.instructions+=2;goto B5e4a62;
case 0x5e4a66:c.instructions+=1;goto B5e4a66;
case 0x5e4a68:goto L5e4a68;
case 0x5e4a6e:c.instructions+=8;goto B5e4a6e;
case 0x5e4a72:c.instructions+=7;goto B5e4a72;
case 0x5e4a78:c.instructions+=6;goto B5e4a78;
case 0x5e4a7c:c.instructions+=5;goto B5e4a7c;
case 0x5e4a80:c.instructions+=4;goto B5e4a80;
case 0x5e4a82:c.instructions+=3;goto B5e4a82;
case 0x5e4a86:c.instructions+=2;goto B5e4a86;
case 0x5e4a8a:c.instructions+=1;goto B5e4a8a;
case 0x5e4a8c:goto L5e4a8c;
case 0x5e4a92:c.instructions+=7;goto B5e4a92;
case 0x5e4a96:c.instructions+=6;goto B5e4a96;
case 0x5e4a9c:c.instructions+=5;goto B5e4a9c;
case 0x5e4aa0:c.instructions+=4;goto B5e4aa0;
case 0x5e4aa4:c.instructions+=3;goto B5e4aa4;
case 0x5e4aa6:c.instructions+=2;goto B5e4aa6;
case 0x5e4aaa:c.instructions+=1;goto B5e4aaa;
case 0x5e4aae:goto L5e4aae;
case 0x5e4ab0:c.instructions+=1;goto B5e4ab0;
case 0x5e4ab2:goto L5e4ab2;
case 0x5e4ab4:c.instructions+=2;goto B5e4ab4;
case 0x5e4ab8:c.instructions+=1;goto B5e4ab8;
case 0x5e4aba:goto L5e4aba;
case 0x5e4ac0:c.instructions+=8;goto B5e4ac0;
case 0x5e4ac4:c.instructions+=7;goto B5e4ac4;
case 0x5e4aca:c.instructions+=6;goto B5e4aca;
case 0x5e4ace:c.instructions+=5;goto B5e4ace;
case 0x5e4ad2:c.instructions+=4;goto B5e4ad2;
case 0x5e4ad4:c.instructions+=3;goto B5e4ad4;
case 0x5e4ad8:c.instructions+=2;goto B5e4ad8;
case 0x5e4adc:c.instructions+=1;goto B5e4adc;
case 0x5e4ade:goto L5e4ade;
case 0x5e4ae4:c.instructions+=7;goto B5e4ae4;
case 0x5e4ae8:c.instructions+=6;goto B5e4ae8;
case 0x5e4aee:c.instructions+=5;goto B5e4aee;
case 0x5e4af2:c.instructions+=4;goto B5e4af2;
case 0x5e4af6:c.instructions+=3;goto B5e4af6;
case 0x5e4af8:c.instructions+=2;goto B5e4af8;
case 0x5e4afc:c.instructions+=1;goto B5e4afc;
case 0x5e4b00:goto L5e4b00;
case 0x5e4b07:c.instructions+=3;goto B5e4b07;
case 0x5e4b08:c.instructions+=2;goto B5e4b08;
case 0x5e4b0c:c.instructions+=1;goto B5e4b0c;
case 0x5e4b11:goto L5e4b11;
case 0x5e4b15:c.instructions+=6;goto B5e4b15;
case 0x5e4b19:c.instructions+=5;goto B5e4b19;
case 0x5e4b1a:c.instructions+=4;goto B5e4b1a;
case 0x5e4b1e:c.instructions+=3;goto B5e4b1e;
case 0x5e4b1f:c.instructions+=2;goto B5e4b1f;
case 0x5e4b20:c.instructions+=1;goto B5e4b20;
case 0x5e4b25:goto L5e4b25;
case 0x5e4b2c:c.instructions+=8;goto B5e4b2c;
case 0x5e4b30:c.instructions+=7;goto B5e4b30;
case 0x5e4b34:c.instructions+=6;goto B5e4b34;
case 0x5e4b35:c.instructions+=5;goto B5e4b35;
case 0x5e4b36:c.instructions+=4;goto B5e4b36;
case 0x5e4b3a:c.instructions+=3;goto B5e4b3a;
case 0x5e4b3b:c.instructions+=2;goto B5e4b3b;
case 0x5e4b3c:c.instructions+=1;goto B5e4b3c;
case 0x5e4b41:goto L5e4b41;
case 0x5e4b47:c.instructions+=2;goto B5e4b47;
case 0x5e4b4b:c.instructions+=1;goto B5e4b4b;
case 0x5e4b50:goto L5e4b50;
case 0x5e4b54:c.instructions+=4;goto B5e4b54;
case 0x5e4b58:c.instructions+=3;goto B5e4b58;
case 0x5e4b59:c.instructions+=2;goto B5e4b59;
case 0x5e4b5b:c.instructions+=1;goto B5e4b5b;
case 0x5e4b61:goto L5e4b61;
case 0x5e4b62:c.instructions+=1;goto B5e4b62;
case 0x5e4b63:goto L5e4b63;
case 0x5e4b64:c.instructions+=3;goto B5e4b64;
case 0x5e4b65:c.instructions+=2;goto B5e4b65;
case 0x5e4b68:c.instructions+=1;goto B5e4b68;
case 0x5e4b70:goto L5e4b70;
case 0x5e4b72:c.instructions+=27;goto B5e4b72;
case 0x5e4b77:c.instructions+=26;goto B5e4b77;
case 0x5e4b7d:c.instructions+=25;goto B5e4b7d;
case 0x5e4b7e:c.instructions+=24;goto B5e4b7e;
case 0x5e4b85:c.instructions+=23;goto B5e4b85;
case 0x5e4b88:c.instructions+=22;goto B5e4b88;
case 0x5e4b89:c.instructions+=21;goto B5e4b89;
case 0x5e4b8a:c.instructions+=20;goto B5e4b8a;
case 0x5e4b8c:c.instructions+=19;goto B5e4b8c;
case 0x5e4b8d:c.instructions+=18;goto B5e4b8d;
case 0x5e4b90:c.instructions+=17;goto B5e4b90;
case 0x5e4b91:c.instructions+=16;goto B5e4b91;
case 0x5e4b95:c.instructions+=15;goto B5e4b95;
case 0x5e4b97:c.instructions+=14;goto B5e4b97;
case 0x5e4b9a:c.instructions+=13;goto B5e4b9a;
case 0x5e4b9d:c.instructions+=12;goto B5e4b9d;
case 0x5e4b9f:c.instructions+=11;goto B5e4b9f;
case 0x5e4ba3:c.instructions+=10;goto B5e4ba3;
case 0x5e4ba5:c.instructions+=9;goto B5e4ba5;
case 0x5e4ba8:c.instructions+=8;goto B5e4ba8;
case 0x5e4bad:c.instructions+=7;goto B5e4bad;
case 0x5e4bb2:c.instructions+=6;goto B5e4bb2;
case 0x5e4bb7:c.instructions+=5;goto B5e4bb7;
case 0x5e4bb9:c.instructions+=4;goto B5e4bb9;
case 0x5e4bbc:c.instructions+=3;goto B5e4bbc;
case 0x5e4bbd:c.instructions+=2;goto B5e4bbd;
case 0x5e4bc2:c.instructions+=1;goto B5e4bc2;
case 0x5e4bc7:goto L5e4bc7;
case 0x5e4bcb:c.instructions+=6;goto B5e4bcb;
case 0x5e4bce:c.instructions+=5;goto B5e4bce;
case 0x5e4bd3:c.instructions+=4;goto B5e4bd3;
case 0x5e4bd6:c.instructions+=3;goto B5e4bd6;
case 0x5e4bda:c.instructions+=2;goto B5e4bda;
case 0x5e4bdd:c.instructions+=1;goto B5e4bdd;
case 0x5e4be2:goto L5e4be2;
case 0x5e4be5:c.instructions+=50;goto B5e4be5;
case 0x5e4be8:c.instructions+=49;goto B5e4be8;
case 0x5e4bea:c.instructions+=48;goto B5e4bea;
case 0x5e4bed:c.instructions+=47;goto B5e4bed;
case 0x5e4bef:c.instructions+=46;goto B5e4bef;
case 0x5e4bf2:c.instructions+=45;goto B5e4bf2;
case 0x5e4bf5:c.instructions+=44;goto B5e4bf5;
case 0x5e4bf8:c.instructions+=43;goto B5e4bf8;
case 0x5e4bfa:c.instructions+=42;goto B5e4bfa;
case 0x5e4bfd:c.instructions+=41;goto B5e4bfd;
case 0x5e4bff:c.instructions+=40;goto B5e4bff;
case 0x5e4c01:c.instructions+=39;goto B5e4c01;
case 0x5e4c04:c.instructions+=38;goto B5e4c04;
case 0x5e4c07:c.instructions+=37;goto B5e4c07;
case 0x5e4c09:c.instructions+=36;goto B5e4c09;
case 0x5e4c0c:c.instructions+=35;goto B5e4c0c;
case 0x5e4c0e:c.instructions+=34;goto B5e4c0e;
case 0x5e4c11:c.instructions+=33;goto B5e4c11;
case 0x5e4c14:c.instructions+=32;goto B5e4c14;
case 0x5e4c17:c.instructions+=31;goto B5e4c17;
case 0x5e4c19:c.instructions+=30;goto B5e4c19;
case 0x5e4c1c:c.instructions+=29;goto B5e4c1c;
case 0x5e4c1e:c.instructions+=28;goto B5e4c1e;
case 0x5e4c21:c.instructions+=27;goto B5e4c21;
case 0x5e4c24:c.instructions+=26;goto B5e4c24;
case 0x5e4c27:c.instructions+=25;goto B5e4c27;
case 0x5e4c29:c.instructions+=24;goto B5e4c29;
case 0x5e4c2c:c.instructions+=23;goto B5e4c2c;
case 0x5e4c2e:c.instructions+=22;goto B5e4c2e;
case 0x5e4c31:c.instructions+=21;goto B5e4c31;
case 0x5e4c34:c.instructions+=20;goto B5e4c34;
case 0x5e4c37:c.instructions+=19;goto B5e4c37;
case 0x5e4c39:c.instructions+=18;goto B5e4c39;
case 0x5e4c3c:c.instructions+=17;goto B5e4c3c;
case 0x5e4c3e:c.instructions+=16;goto B5e4c3e;
case 0x5e4c41:c.instructions+=15;goto B5e4c41;
case 0x5e4c44:c.instructions+=14;goto B5e4c44;
case 0x5e4c47:c.instructions+=13;goto B5e4c47;
case 0x5e4c49:c.instructions+=12;goto B5e4c49;
case 0x5e4c4c:c.instructions+=11;goto B5e4c4c;
case 0x5e4c4f:c.instructions+=10;goto B5e4c4f;
case 0x5e4c51:c.instructions+=9;goto B5e4c51;
case 0x5e4c54:c.instructions+=8;goto B5e4c54;
case 0x5e4c57:c.instructions+=7;goto B5e4c57;
case 0x5e4c59:c.instructions+=6;goto B5e4c59;
case 0x5e4c5c:c.instructions+=5;goto B5e4c5c;
case 0x5e4c5f:c.instructions+=4;goto B5e4c5f;
case 0x5e4c64:c.instructions+=3;goto B5e4c64;
case 0x5e4c65:c.instructions+=2;goto B5e4c65;
case 0x5e4c67:c.instructions+=1;goto B5e4c67;
case 0x5e4c6d:goto L5e4c6d;
case 0x5e4c70:c.instructions+=2;goto B5e4c70;
case 0x5e4c72:c.instructions+=1;goto B5e4c72;
case 0x5e4c74:goto L5e4c74;
case 0x5e4c78:c.instructions+=5;goto B5e4c78;
case 0x5e4c7a:c.instructions+=4;goto B5e4c7a;
case 0x5e4c7e:c.instructions+=3;goto B5e4c7e;
case 0x5e4c83:c.instructions+=2;goto B5e4c83;
case 0x5e4c87:c.instructions+=1;goto B5e4c87;
case 0x5e4c89:goto L5e4c89;
case 0x5e4c8b:goto L5e4c8b;
case 0x5e4c8c:c.instructions+=3;goto B5e4c8c;
case 0x5e4c90:c.instructions+=2;goto B5e4c90;
case 0x5e4c91:c.instructions+=1;goto B5e4c91;
case 0x5e4c96:goto L5e4c96;
case 0x5e4c98:c.instructions+=5;goto B5e4c98;
case 0x5e4c9c:c.instructions+=4;goto B5e4c9c;
case 0x5e4c9d:c.instructions+=3;goto B5e4c9d;
case 0x5e4c9f:c.instructions+=2;goto B5e4c9f;
case 0x5e4ca4:c.instructions+=1;goto B5e4ca4;
case 0x5e4ca9:goto L5e4ca9;
case 0x5e4cac:goto L5e4cac;
case 0x5e4cae:c.instructions+=17;goto B5e4cae;
case 0x5e4cb0:c.instructions+=16;goto B5e4cb0;
case 0x5e4cb3:c.instructions+=15;goto B5e4cb3;
case 0x5e4cb7:c.instructions+=14;goto B5e4cb7;
case 0x5e4cb9:c.instructions+=13;goto B5e4cb9;
case 0x5e4cbc:c.instructions+=12;goto B5e4cbc;
case 0x5e4cc0:c.instructions+=11;goto B5e4cc0;
case 0x5e4cc3:c.instructions+=10;goto B5e4cc3;
case 0x5e4cc6:c.instructions+=9;goto B5e4cc6;
case 0x5e4cca:c.instructions+=8;goto B5e4cca;
case 0x5e4ccd:c.instructions+=7;goto B5e4ccd;
case 0x5e4ccf:c.instructions+=6;goto B5e4ccf;
case 0x5e4cd2:c.instructions+=5;goto B5e4cd2;
case 0x5e4cd5:c.instructions+=4;goto B5e4cd5;
case 0x5e4cd7:c.instructions+=3;goto B5e4cd7;
case 0x5e4cda:c.instructions+=2;goto B5e4cda;
case 0x5e4cdc:c.instructions+=1;goto B5e4cdc;
case 0x5e4cde:goto L5e4cde;
case 0x5e4ce2:c.instructions+=8;goto B5e4ce2;
case 0x5e4ce4:c.instructions+=7;goto B5e4ce4;
case 0x5e4ce8:c.instructions+=6;goto B5e4ce8;
case 0x5e4ce9:c.instructions+=5;goto B5e4ce9;
case 0x5e4ceb:c.instructions+=4;goto B5e4ceb;
case 0x5e4cf0:c.instructions+=3;goto B5e4cf0;
case 0x5e4cf4:c.instructions+=2;goto B5e4cf4;
case 0x5e4cf8:c.instructions+=1;goto B5e4cf8;
case 0x5e4cfd:goto L5e4cfd;
case 0x5e4d00:goto L5e4d00;
case 0x5e4d06:c.instructions+=3;goto B5e4d06;
case 0x5e4d08:c.instructions+=2;goto B5e4d08;
case 0x5e4d0a:c.instructions+=1;goto B5e4d0a;
case 0x5e4d0f:goto L5e4d0f;
case 0x5e4d11:goto L5e4d11;
case 0x5e4d15:c.instructions+=12;goto B5e4d15;
case 0x5e4d19:c.instructions+=11;goto B5e4d19;
case 0x5e4d1a:c.instructions+=10;goto B5e4d1a;
case 0x5e4d1c:c.instructions+=9;goto B5e4d1c;
case 0x5e4d1f:c.instructions+=8;goto B5e4d1f;
case 0x5e4d22:c.instructions+=7;goto B5e4d22;
case 0x5e4d29:c.instructions+=6;goto B5e4d29;
case 0x5e4d30:c.instructions+=5;goto B5e4d30;
case 0x5e4d37:c.instructions+=4;goto B5e4d37;
case 0x5e4d3e:c.instructions+=3;goto B5e4d3e;
case 0x5e4d41:c.instructions+=2;goto B5e4d41;
case 0x5e4d42:c.instructions+=1;goto B5e4d42;
case 0x5e4d47:goto L5e4d47;
case 0x5e4d4b:c.instructions+=9;goto B5e4d4b;
case 0x5e4d4e:c.instructions+=8;goto B5e4d4e;
case 0x5e4d4f:c.instructions+=7;goto B5e4d4f;
case 0x5e4d50:c.instructions+=6;goto B5e4d50;
case 0x5e4d52:c.instructions+=5;goto B5e4d52;
case 0x5e4d53:c.instructions+=4;goto B5e4d53;
case 0x5e4d54:c.instructions+=3;goto B5e4d54;
case 0x5e4d5b:c.instructions+=2;goto B5e4d5b;
case 0x5e4d5e:c.instructions+=1;goto B5e4d5e;
case 0x5e4d70:goto L5e4d70;
case 0x5e4d72:c.instructions+=20;goto B5e4d72;
case 0x5e4d77:c.instructions+=19;goto B5e4d77;
case 0x5e4d7d:c.instructions+=18;goto B5e4d7d;
case 0x5e4d7e:c.instructions+=17;goto B5e4d7e;
case 0x5e4d85:c.instructions+=16;goto B5e4d85;
case 0x5e4d88:c.instructions+=15;goto B5e4d88;
case 0x5e4d89:c.instructions+=14;goto B5e4d89;
case 0x5e4d8a:c.instructions+=13;goto B5e4d8a;
case 0x5e4d8c:c.instructions+=12;goto B5e4d8c;
case 0x5e4d8d:c.instructions+=11;goto B5e4d8d;
case 0x5e4d91:c.instructions+=10;goto B5e4d91;
case 0x5e4d94:c.instructions+=9;goto B5e4d94;
case 0x5e4d96:c.instructions+=8;goto B5e4d96;
case 0x5e4d99:c.instructions+=7;goto B5e4d99;
case 0x5e4d9c:c.instructions+=6;goto B5e4d9c;
case 0x5e4d9e:c.instructions+=5;goto B5e4d9e;
case 0x5e4da1:c.instructions+=4;goto B5e4da1;
case 0x5e4da4:c.instructions+=3;goto B5e4da4;
case 0x5e4da6:c.instructions+=2;goto B5e4da6;
case 0x5e4dae:c.instructions+=1;goto B5e4dae;
case 0x5e4db0:goto L5e4db0;
case 0x5e4db2:c.instructions+=6;goto B5e4db2;
case 0x5e4db6:c.instructions+=5;goto B5e4db6;
case 0x5e4db7:c.instructions+=4;goto B5e4db7;
case 0x5e4db9:c.instructions+=3;goto B5e4db9;
case 0x5e4dbe:c.instructions+=2;goto B5e4dbe;
case 0x5e4dc2:c.instructions+=1;goto B5e4dc2;
case 0x5e4dc7:goto L5e4dc7;
case 0x5e4dca:goto L5e4dca;
case 0x5e4dcc:c.instructions+=3;goto B5e4dcc;
case 0x5e4dce:c.instructions+=2;goto B5e4dce;
case 0x5e4dcf:c.instructions+=1;goto B5e4dcf;
case 0x5e4dd4:goto L5e4dd4;
case 0x5e4dd7:c.instructions+=7;goto B5e4dd7;
case 0x5e4ddc:c.instructions+=6;goto B5e4ddc;
case 0x5e4de1:c.instructions+=5;goto B5e4de1;
case 0x5e4de3:c.instructions+=4;goto B5e4de3;
case 0x5e4de6:c.instructions+=3;goto B5e4de6;
case 0x5e4de7:c.instructions+=2;goto B5e4de7;
case 0x5e4dec:c.instructions+=1;goto B5e4dec;
case 0x5e4df1:goto L5e4df1;
case 0x5e4df3:c.instructions+=3;goto B5e4df3;
case 0x5e4df5:c.instructions+=2;goto B5e4df5;
case 0x5e4dfa:c.instructions+=1;goto B5e4dfa;
case 0x5e4dfc:goto L5e4dfc;
case 0x5e4e00:goto L5e4e00;
case 0x5e4e02:c.instructions+=5;goto B5e4e02;
case 0x5e4e05:c.instructions+=4;goto B5e4e05;
case 0x5e4e07:c.instructions+=3;goto B5e4e07;
case 0x5e4e08:c.instructions+=2;goto B5e4e08;
case 0x5e4e0b:c.instructions+=1;goto B5e4e0b;
case 0x5e4e10:goto L5e4e10;
case 0x5e4e12:c.instructions+=3;goto B5e4e12;
case 0x5e4e15:c.instructions+=2;goto B5e4e15;
case 0x5e4e17:c.instructions+=1;goto B5e4e17;
case 0x5e4e19:goto L5e4e19;
case 0x5e4e1b:c.instructions+=3;goto B5e4e1b;
case 0x5e4e1d:c.instructions+=2;goto B5e4e1d;
case 0x5e4e25:c.instructions+=1;goto B5e4e25;
case 0x5e4e27:goto L5e4e27;
case 0x5e4e29:c.instructions+=5;goto B5e4e29;
case 0x5e4e2c:c.instructions+=4;goto B5e4e2c;
case 0x5e4e2e:c.instructions+=3;goto B5e4e2e;
case 0x5e4e2f:c.instructions+=2;goto B5e4e2f;
case 0x5e4e32:c.instructions+=1;goto B5e4e32;
case 0x5e4e37:goto L5e4e37;
case 0x5e4e39:c.instructions+=3;goto B5e4e39;
case 0x5e4e3c:c.instructions+=2;goto B5e4e3c;
case 0x5e4e3e:c.instructions+=1;goto B5e4e3e;
case 0x5e4e40:goto L5e4e40;
case 0x5e4e44:c.instructions+=6;goto B5e4e44;
case 0x5e4e45:c.instructions+=5;goto B5e4e45;
case 0x5e4e46:c.instructions+=4;goto B5e4e46;
case 0x5e4e47:c.instructions+=3;goto B5e4e47;
case 0x5e4e4e:c.instructions+=2;goto B5e4e4e;
case 0x5e4e51:c.instructions+=1;goto B5e4e51;
case 0x5e4e60:goto L5e4e60;
case 0x5e4e64:c.instructions+=3;goto B5e4e64;
case 0x5e4e65:c.instructions+=2;goto B5e4e65;
case 0x5e4e6a:c.instructions+=1;goto B5e4e6a;
case 0x5e4e6f:goto L5e4e6f;
case 0x5e4e70:goto L5e4e70;
case 0x5e4e76:c.instructions+=11;goto B5e4e76;
case 0x5e4e78:c.instructions+=10;goto B5e4e78;
case 0x5e4e7d:c.instructions+=9;goto B5e4e7d;
case 0x5e4e7e:c.instructions+=8;goto B5e4e7e;
case 0x5e4e82:c.instructions+=7;goto B5e4e82;
case 0x5e4e89:c.instructions+=6;goto B5e4e89;
case 0x5e4e8a:c.instructions+=5;goto B5e4e8a;
case 0x5e4e8c:c.instructions+=4;goto B5e4e8c;
case 0x5e4e91:c.instructions+=3;goto B5e4e91;
case 0x5e4e92:c.instructions+=2;goto B5e4e92;
case 0x5e4e98:c.instructions+=1;goto B5e4e98;
case 0x5e4e9d:goto L5e4e9d;
case 0x5e4ea2:c.instructions+=2;goto B5e4ea2;
case 0x5e4ea8:c.instructions+=1;goto B5e4ea8;
case 0x5e4ead:goto L5e4ead;
case 0x5e4eb0:c.instructions+=4;goto B5e4eb0;
case 0x5e4eb4:c.instructions+=3;goto B5e4eb4;
case 0x5e4eb6:c.instructions+=2;goto B5e4eb6;
case 0x5e4ebe:c.instructions+=1;goto B5e4ebe;
case 0x5e4ec0:goto L5e4ec0;
case 0x5e4ec6:c.instructions+=7;goto B5e4ec6;
case 0x5e4ecc:c.instructions+=6;goto B5e4ecc;
case 0x5e4ece:c.instructions+=5;goto B5e4ece;
case 0x5e4ed3:c.instructions+=4;goto B5e4ed3;
case 0x5e4ed4:c.instructions+=3;goto B5e4ed4;
case 0x5e4ed5:c.instructions+=2;goto B5e4ed5;
case 0x5e4ed7:c.instructions+=1;goto B5e4ed7;
case 0x5e4edc:goto L5e4edc;
case 0x5e4ede:goto L5e4ede;
case 0x5e4ee0:goto L5e4ee0;
case 0x5e4ee4:c.instructions+=6;goto B5e4ee4;
case 0x5e4eea:c.instructions+=5;goto B5e4eea;
case 0x5e4ef4:c.instructions+=4;goto B5e4ef4;
case 0x5e4efb:c.instructions+=3;goto B5e4efb;
case 0x5e4efc:c.instructions+=2;goto B5e4efc;
case 0x5e4eff:c.instructions+=1;goto B5e4eff;
case 0x5e4f10:goto L5e4f10;
case 0x5e4f14:c.instructions+=3;goto B5e4f14;
case 0x5e4f15:c.instructions+=2;goto B5e4f15;
case 0x5e4f1a:c.instructions+=1;goto B5e4f1a;
case 0x5e4f1f:goto L5e4f1f;
case 0x5e4f20:goto L5e4f20;
case 0x5e4f23:c.instructions+=5;goto B5e4f23;
case 0x5e4f27:c.instructions+=4;goto B5e4f27;
case 0x5e4f2b:c.instructions+=3;goto B5e4f2b;
case 0x5e4f2d:c.instructions+=2;goto B5e4f2d;
case 0x5e4f2f:c.instructions+=1;goto B5e4f2f;
case 0x5e4f31:goto L5e4f31;
case 0x5e4f37:c.instructions+=9;goto B5e4f37;
case 0x5e4f3b:c.instructions+=8;goto B5e4f3b;
case 0x5e4f3e:c.instructions+=7;goto B5e4f3e;
case 0x5e4f41:c.instructions+=6;goto B5e4f41;
case 0x5e4f44:c.instructions+=5;goto B5e4f44;
case 0x5e4f47:c.instructions+=4;goto B5e4f47;
case 0x5e4f4a:c.instructions+=3;goto B5e4f4a;
case 0x5e4f4d:c.instructions+=2;goto B5e4f4d;
case 0x5e4f50:c.instructions+=1;goto B5e4f50;
case 0x5e4f53:goto L5e4f53;
case 0x5e4f56:c.instructions+=24;goto B5e4f56;
case 0x5e4f57:c.instructions+=23;goto B5e4f57;
case 0x5e4f5a:c.instructions+=22;goto B5e4f5a;
case 0x5e4f5b:c.instructions+=21;goto B5e4f5b;
case 0x5e4f5c:c.instructions+=20;goto B5e4f5c;
case 0x5e4f5e:c.instructions+=19;goto B5e4f5e;
case 0x5e4f5f:c.instructions+=18;goto B5e4f5f;
case 0x5e4f61:c.instructions+=17;goto B5e4f61;
case 0x5e4f64:c.instructions+=16;goto B5e4f64;
case 0x5e4f66:c.instructions+=15;goto B5e4f66;
case 0x5e4f68:c.instructions+=14;goto B5e4f68;
case 0x5e4f6a:c.instructions+=13;goto B5e4f6a;
case 0x5e4f6d:c.instructions+=12;goto B5e4f6d;
case 0x5e4f6f:c.instructions+=11;goto B5e4f6f;
case 0x5e4f71:c.instructions+=10;goto B5e4f71;
case 0x5e4f72:c.instructions+=9;goto B5e4f72;
case 0x5e4f77:c.instructions+=8;goto B5e4f77;
case 0x5e4f7f:c.instructions+=7;goto B5e4f7f;
case 0x5e4f81:c.instructions+=6;goto B5e4f81;
case 0x5e4f86:c.instructions+=5;goto B5e4f86;
case 0x5e4f8a:c.instructions+=4;goto B5e4f8a;
case 0x5e4f8c:c.instructions+=3;goto B5e4f8c;
case 0x5e4f8e:c.instructions+=2;goto B5e4f8e;
case 0x5e4f92:c.instructions+=1;goto B5e4f92;
case 0x5e4f97:goto L5e4f97;
case 0x5e4f99:c.instructions+=2;goto B5e4f99;
case 0x5e4f9b:c.instructions+=1;goto B5e4f9b;
case 0x5e4fa1:goto L5e4fa1;
case 0x5e4fa3:goto L5e4fa3;
case 0x5e4fa7:c.instructions+=1;goto B5e4fa7;
case 0x5e4fb0:goto L5e4fb0;
case 0x5e4fb4:c.instructions+=4;goto B5e4fb4;
case 0x5e4fba:c.instructions+=3;goto B5e4fba;
case 0x5e4fbc:c.instructions+=2;goto B5e4fbc;
case 0x5e4fbf:c.instructions+=1;goto B5e4fbf;
case 0x5e4fc1:goto L5e4fc1;
case 0x5e4fc4:c.instructions+=4;goto B5e4fc4;
case 0x5e4fc7:c.instructions+=3;goto B5e4fc7;
case 0x5e4fcb:c.instructions+=2;goto B5e4fcb;
case 0x5e4fcf:c.instructions+=1;goto B5e4fcf;
case 0x5e4fd1:goto L5e4fd1;
case 0x5e4fd7:c.instructions+=5;goto B5e4fd7;
case 0x5e4fdb:c.instructions+=4;goto B5e4fdb;
case 0x5e4fe1:c.instructions+=3;goto B5e4fe1;
case 0x5e4fe3:c.instructions+=2;goto B5e4fe3;
case 0x5e4fe6:c.instructions+=1;goto B5e4fe6;
case 0x5e4fe8:goto L5e4fe8;
case 0x5e4fee:c.instructions+=8;goto B5e4fee;
case 0x5e4fef:c.instructions+=7;goto B5e4fef;
case 0x5e4ff3:c.instructions+=6;goto B5e4ff3;
case 0x5e4ff7:c.instructions+=5;goto B5e4ff7;
case 0x5e4ffa:c.instructions+=4;goto B5e4ffa;
case 0x5e4ffb:c.instructions+=3;goto B5e4ffb;
case 0x5e4ffc:c.instructions+=2;goto B5e4ffc;
case 0x5e4ffd:c.instructions+=1;goto B5e4ffd;
case 0x5e4fff:goto L5e4fff;
default:missing_instruction(c.pc);}
B5e4000:L5e4000:{c.instructions+=2;NFSU2_TR(0x5e4000);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e4002:{NFSU2_TR(0x5e4002);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e405a;}}
}
B5e4004:L5e4004:{c.instructions+=3;NFSU2_TR(0x5e4004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e4007:{NFSU2_TR(0x5e4007);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4009:{NFSU2_TR(0x5e4009);
if(r1(R+518)){{goto L5e405a;}}
}
B5e400b:L5e400b:{c.instructions+=16;NFSU2_TR(0x5e400b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4680ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4011:{NFSU2_TR(0x5e4011);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e4015:{NFSU2_TR(0x5e4015);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5e4018:{NFSU2_TR(0x5e4018);
w4(R+8,u32(0xffffff74ull));
}
B5e401d:{NFSU2_TR(0x5e401d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B5e401f:{NFSU2_TR(0x5e401f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x467cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4025:{NFSU2_TR(0x5e4025);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5e4027:{NFSU2_TR(0x5e4027);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4684ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e402d:{NFSU2_TR(0x5e402d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x467cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4033:{NFSU2_TR(0x5e4033);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e4037:{NFSU2_TR(0x5e4037);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B5e4039:{NFSU2_TR(0x5e4039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4684ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e403f:{NFSU2_TR(0x5e403f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5e4043:{NFSU2_TR(0x5e4043);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5e404b:{NFSU2_TR(0x5e404b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5e404f:{NFSU2_TR(0x5e404f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e405a;}}
}
B5e4051:L5e4051:{c.instructions+=2;NFSU2_TR(0x5e4051);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4052:{NFSU2_TR(0x5e4052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4057ull));
TAIL_STATIC(0x575630u,575);
}
B5e4057:L5e4057:{c.instructions+=1;NFSU2_TR(0x5e4057);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e405a:L5e405a:{c.instructions+=4;NFSU2_TR(0x5e405a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e405b:{NFSU2_TR(0x5e405b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5e405e:{NFSU2_TR(0x5e405e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e4064:{NFSU2_TR(0x5e4064);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4000u);}goto L5e4000;}}
}
B5e4066:L5e4066:{c.instructions+=2;NFSU2_TR(0x5e4066);
__builtin_memmove((R+4),(R+24),4);
}
B5e4068:{NFSU2_TR(0x5e4068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e406dull));
TAIL_STATIC(0x5d9430u,5d9);
}
B5e406d:L5e406d:{c.instructions+=4;NFSU2_TR(0x5e406d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e406e:{NFSU2_TR(0x5e406e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e406f:{NFSU2_TR(0x5e406f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4070:{NFSU2_TR(0x5e4070);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4080:L5e4080:{c.instructions+=15;NFSU2_TR(0x5e4080);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4081:{NFSU2_TR(0x5e4081);
__builtin_memmove((R+20),(R+16),4);
}
B5e4083:{NFSU2_TR(0x5e4083);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5e4086:{NFSU2_TR(0x5e4086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5e4089:{NFSU2_TR(0x5e4089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e408c:{NFSU2_TR(0x5e408c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e408f:{NFSU2_TR(0x5e408f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4090:{NFSU2_TR(0x5e4090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4091:{NFSU2_TR(0x5e4091);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e4093:{NFSU2_TR(0x5e4093);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4096:{NFSU2_TR(0x5e4096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4097:{NFSU2_TR(0x5e4097);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e409b:{NFSU2_TR(0x5e409b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e409f:{NFSU2_TR(0x5e409f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e40a3:{NFSU2_TR(0x5e40a3);
if(r1(R+518)){{goto L5e40b3;}}
}
B5e40a5:L5e40a5:{c.instructions+=4;NFSU2_TR(0x5e40a5);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e40aa:{NFSU2_TR(0x5e40aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e40ac:{NFSU2_TR(0x5e40ac);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e40b1:{NFSU2_TR(0x5e40b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e40b8;}}
}
B5e40b3:L5e40b3:{c.instructions+=1;NFSU2_TR(0x5e40b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e40b8:L5e40b8:{c.instructions+=3;NFSU2_TR(0x5e40b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e40bb:{NFSU2_TR(0x5e40bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e40bf:{NFSU2_TR(0x5e40bf);
}
B5e40c0:L5e40c0:{c.instructions+=2;NFSU2_TR(0x5e40c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e40c2:{NFSU2_TR(0x5e40c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e40d5;}}
}
B5e40c4:L5e40c4:{c.instructions+=2;NFSU2_TR(0x5e40c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e40c7:{NFSU2_TR(0x5e40c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e417d;}}
}
B5e40cd:L5e40cd:{c.instructions+=3;NFSU2_TR(0x5e40cd);
__builtin_memmove((R+0),(R+4),4);
}
B5e40cf:{NFSU2_TR(0x5e40cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e40d3:{NFSU2_TR(0x5e40d3);
{goto L5e40ee;}
}
B5e40d5:L5e40d5:{c.instructions+=2;NFSU2_TR(0x5e40d5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e40d8:{NFSU2_TR(0x5e40d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e417d;}}
}
B5e40de:L5e40de:{c.instructions+=2;NFSU2_TR(0x5e40de);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e40e1:{NFSU2_TR(0x5e40e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e417d;}}
}
B5e40e7:L5e40e7:{c.instructions+=2;NFSU2_TR(0x5e40e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e40ea:{NFSU2_TR(0x5e40ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e40ee:L5e40ee:{c.instructions+=2;NFSU2_TR(0x5e40ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e40f0:{NFSU2_TR(0x5e40f0);
if(r1(R+518)){{goto L5e417d;}}
}
B5e40f6:L5e40f6:{c.instructions+=3;NFSU2_TR(0x5e40f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e40f8:{NFSU2_TR(0x5e40f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e40fa:{NFSU2_TR(0x5e40fa);
if(r1(R+518)){{goto L5e417d;}}
}
B5e4100:L5e4100:{c.instructions+=8;NFSU2_TR(0x5e4100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4103:{NFSU2_TR(0x5e4103);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4104:{NFSU2_TR(0x5e4104);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4105:{NFSU2_TR(0x5e4105);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4109:{NFSU2_TR(0x5e4109);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e410a:{NFSU2_TR(0x5e410a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e410b:{NFSU2_TR(0x5e410b);
__builtin_memmove((R+4),(R+28),4);
}
B5e410d:{NFSU2_TR(0x5e410d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4112ull));
TAIL_STATIC(0x5e2e40u,5e2);
}
B5e4112:L5e4112:{c.instructions+=3;NFSU2_TR(0x5e4112);
__builtin_memmove((R+24),(R+0),4);
}
B5e4114:{NFSU2_TR(0x5e4114);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4116:{NFSU2_TR(0x5e4116);
if(r1(R+518)){{goto L5e416a;}}
}
B5e4118:L5e4118:{c.instructions+=3;NFSU2_TR(0x5e4118);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e411c:{NFSU2_TR(0x5e411c);
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
B5e411e:{NFSU2_TR(0x5e411e);
if(r1(R+518)){{goto L5e412e;}}
}
B5e4120:L5e4120:{c.instructions+=5;NFSU2_TR(0x5e4120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4123:{NFSU2_TR(0x5e4123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4124:{NFSU2_TR(0x5e4124);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4125:{NFSU2_TR(0x5e4125);
__builtin_memmove((R+4),(R+24),4);
}
B5e4127:{NFSU2_TR(0x5e4127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e412cull));
TAIL_STATIC(0x5d8b00u,5d8);
}
B5e412c:L5e412c:{c.instructions+=1;NFSU2_TR(0x5e412c);
{goto L5e4162;}
}
B5e412e:L5e412e:{c.instructions+=14;NFSU2_TR(0x5e412e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e4132:{NFSU2_TR(0x5e4132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e4134:{NFSU2_TR(0x5e4134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4137:{NFSU2_TR(0x5e4137);
u8 U[45];
w4(U+37,u32(u32(u32(0xdull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5e413a:{NFSU2_TR(0x5e413a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e413e:{NFSU2_TR(0x5e413e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4142:{NFSU2_TR(0x5e4142);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4146:{NFSU2_TR(0x5e4146);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e414a:{NFSU2_TR(0x5e414a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e414b:{NFSU2_TR(0x5e414b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e414c:{NFSU2_TR(0x5e414c);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e4152:{NFSU2_TR(0x5e4152);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4156:{NFSU2_TR(0x5e4156);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e415a:{NFSU2_TR(0x5e415a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e415full));
TAIL_STATIC(0x43ce10u,43c);
}
B5e415f:L5e415f:{c.instructions+=1;NFSU2_TR(0x5e415f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e4162:L5e4162:{c.instructions+=2;NFSU2_TR(0x5e4162);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4166:{NFSU2_TR(0x5e4166);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e416a:L5e416a:{c.instructions+=4;NFSU2_TR(0x5e416a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5e416c:{NFSU2_TR(0x5e416c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e4170:{NFSU2_TR(0x5e4170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4173:{NFSU2_TR(0x5e4173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4100u);}goto L5e4100;}}
}
B5e4175:L5e4175:{c.instructions+=2;NFSU2_TR(0x5e4175);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4179:{NFSU2_TR(0x5e4179);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e417d:L5e417d:{c.instructions+=4;NFSU2_TR(0x5e417d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e417e:{NFSU2_TR(0x5e417e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5e4181:{NFSU2_TR(0x5e4181);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4185:{NFSU2_TR(0x5e4185);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e40c0u);}goto L5e40c0;}}
}
B5e418b:L5e418b:{c.instructions+=7;NFSU2_TR(0x5e418b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e418f:{NFSU2_TR(0x5e418f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4190:{NFSU2_TR(0x5e4190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4191:{NFSU2_TR(0x5e4191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e4192:{NFSU2_TR(0x5e4192);
__builtin_memmove((R+16),(R+20),4);
}
B5e4194:{NFSU2_TR(0x5e4194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4195:{NFSU2_TR(0x5e4195);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e41a0:L5e41a0:{c.instructions+=14;NFSU2_TR(0x5e41a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e41a1:{NFSU2_TR(0x5e41a1);
__builtin_memmove((R+20),(R+16),4);
}
B5e41a3:{NFSU2_TR(0x5e41a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5e41a6:{NFSU2_TR(0x5e41a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x70ull))));
}
B5e41a9:{NFSU2_TR(0x5e41a9);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5e41ae:{NFSU2_TR(0x5e41ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e41af:{NFSU2_TR(0x5e41af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e41b0:{NFSU2_TR(0x5e41b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e41b1:{NFSU2_TR(0x5e41b1);
__builtin_memmove((R+24),(R+4),4);
}
B5e41b3:{NFSU2_TR(0x5e41b3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e41b5:{NFSU2_TR(0x5e41b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e41b7:{NFSU2_TR(0x5e41b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e41b8:{NFSU2_TR(0x5e41b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e41bc:{NFSU2_TR(0x5e41bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4250;}}
}
B5e41c2:L5e41c2:{c.instructions+=2;NFSU2_TR(0x5e41c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e41c4:{NFSU2_TR(0x5e41c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e41c9ull));
TAIL_STATIC(0x5d9650u,5d9);
}
B5e41c9:L5e41c9:{c.instructions+=3;NFSU2_TR(0x5e41c9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e41cb:{NFSU2_TR(0x5e41cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B5e41ce:{NFSU2_TR(0x5e41ce);
w4(R+20,u32(0xfffffffdull));
}
B5e41d3:L5e41d3:{c.instructions+=2;NFSU2_TR(0x5e41d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e41d5:{NFSU2_TR(0x5e41d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e4238;}}
}
B5e41d7:L5e41d7:{c.instructions+=3;NFSU2_TR(0x5e41d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e41d9:{NFSU2_TR(0x5e41d9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e41db:{NFSU2_TR(0x5e41db);
if(r1(R+518)){{goto L5e4238;}}
}
B5e41dd:L5e41dd:{c.instructions+=4;NFSU2_TR(0x5e41dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e41e0:{NFSU2_TR(0x5e41e0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e41e2:{NFSU2_TR(0x5e41e2);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+12)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5e41e6:{NFSU2_TR(0x5e41e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e4202;}}
}
B5e41e8:L5e41e8:{c.instructions+=2;NFSU2_TR(0x5e41e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e41ee:{NFSU2_TR(0x5e41ee);
__builtin_memmove((R+28),(R+28),4);
}
B5e41f0:L5e41f0:{c.instructions+=6;NFSU2_TR(0x5e41f0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5e41f6:{NFSU2_TR(0x5e41f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B5e41fa:{NFSU2_TR(0x5e41fa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e41fb:{NFSU2_TR(0x5e41fb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x38ull))));
}
B5e41fe:{NFSU2_TR(0x5e41fe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e4200:{NFSU2_TR(0x5e4200);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e41f0u);}goto L5e41f0;}}
}
B5e4202:L5e4202:{c.instructions+=6;NFSU2_TR(0x5e4202);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e4204:{NFSU2_TR(0x5e4204);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4207:{NFSU2_TR(0x5e4207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e420a:{NFSU2_TR(0x5e420a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e420c:{NFSU2_TR(0x5e420c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e420f:{NFSU2_TR(0x5e420f);
}
B5e4210:L5e4210:{c.instructions+=2;NFSU2_TR(0x5e4210);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0xfa0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5e4215:{NFSU2_TR(0x5e4215);
if(r1(R+518)){{goto L5e424c;}}
}
B5e4217:L5e4217:{c.instructions+=4;NFSU2_TR(0x5e4217);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e4218:{NFSU2_TR(0x5e4218);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5e421b:{NFSU2_TR(0x5e421b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e421e:{NFSU2_TR(0x5e421e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4210u);}goto L5e4210;}}
}
B5e4220:L5e4220:{c.instructions+=1;NFSU2_TR(0x5e4220);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5e4222:L5e4222:{c.instructions+=9;NFSU2_TR(0x5e4222);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e4224:{NFSU2_TR(0x5e4224);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4226:{NFSU2_TR(0x5e4226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4229:{NFSU2_TR(0x5e4229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5e422c:{NFSU2_TR(0x5e422c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffbfull))));
}
B5e422f:{NFSU2_TR(0x5e422f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5e4230:{NFSU2_TR(0x5e4230);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x40ull))));
}
B5e4233:{NFSU2_TR(0x5e4233);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B5e4235:{NFSU2_TR(0x5e4235);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4238:L5e4238:{c.instructions+=4;NFSU2_TR(0x5e4238);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e4239:{NFSU2_TR(0x5e4239);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5e423c:{NFSU2_TR(0x5e423c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5dcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5dcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e4242:{NFSU2_TR(0x5e4242);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e41d3u);}goto L5e41d3;}}
}
B5e4244:L5e4244:{c.instructions+=7;NFSU2_TR(0x5e4244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4245:{NFSU2_TR(0x5e4245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4246:{NFSU2_TR(0x5e4246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4247:{NFSU2_TR(0x5e4247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e4248:{NFSU2_TR(0x5e4248);
__builtin_memmove((R+16),(R+20),4);
}
B5e424a:{NFSU2_TR(0x5e424a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e424b:{NFSU2_TR(0x5e424b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e424c:L5e424c:{c.instructions+=2;NFSU2_TR(0x5e424c);
w1(R+4,u8(0x1ull));
}
B5e424e:{NFSU2_TR(0x5e424e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4222u);}goto L5e4222;}
}
B5e4250:L5e4250:{c.instructions+=2;NFSU2_TR(0x5e4250);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4251:{NFSU2_TR(0x5e4251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4256ull));
TAIL_STATIC(0x5d9650u,5d9);
}
B5e4256:L5e4256:{c.instructions+=3;NFSU2_TR(0x5e4256);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+512,u8((r4(U+0))<(r4(R+12))));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e425c:{NFSU2_TR(0x5e425c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4260:{NFSU2_TR(0x5e4260);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e45a1;}}
}
B5e4266:L5e4266:{c.instructions+=3;NFSU2_TR(0x5e4266);
__builtin_memmove((R+28),gp(0x88f2c0),4);
}
B5e426c:{NFSU2_TR(0x5e426c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e426e:{NFSU2_TR(0x5e426e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4272:L5e4272:{c.instructions+=7;NFSU2_TR(0x5e4272);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B5e4278:{NFSU2_TR(0x5e4278);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B5e427c:{NFSU2_TR(0x5e427c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5e427e:{NFSU2_TR(0x5e427e);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e4281:{NFSU2_TR(0x5e4281);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e4284:{NFSU2_TR(0x5e4284);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4288:{NFSU2_TR(0x5e4288);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4290;}}
}
B5e428a:L5e428a:{c.instructions+=2;NFSU2_TR(0x5e428a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e428e:{NFSU2_TR(0x5e428e);
{goto L5e4294;}
}
B5e4290:L5e4290:{c.instructions+=1;NFSU2_TR(0x5e4290);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e4294:L5e4294:{c.instructions+=3;NFSU2_TR(0x5e4294);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5e4297:{NFSU2_TR(0x5e4297);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e4299:{NFSU2_TR(0x5e4299);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e42a4;}}
}
B5e429b:L5e429b:{c.instructions+=2;NFSU2_TR(0x5e429b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e42a2:{NFSU2_TR(0x5e42a2);
{goto L5e42a6;}
}
B5e42a4:L5e42a4:{c.instructions+=1;NFSU2_TR(0x5e42a4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e42a6:L5e42a6:{c.instructions+=3;NFSU2_TR(0x5e42a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e42aa:{NFSU2_TR(0x5e42aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e42ae:{NFSU2_TR(0x5e42ae);
if(r1(R+518)){{goto L5e457f;}}
}
B5e42b4:L5e42b4:{c.instructions+=3;NFSU2_TR(0x5e42b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e42b6:{NFSU2_TR(0x5e42b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e42b9:{NFSU2_TR(0x5e42b9);
__builtin_memmove((R+16),(R+16),4);
}
B5e42c0:L5e42c0:{c.instructions+=2;NFSU2_TR(0x5e42c0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+28))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5e42c3:{NFSU2_TR(0x5e42c3);
if(r1(R+518)){{goto L5e457f;}}
}
B5e42c9:L5e42c9:{c.instructions+=4;NFSU2_TR(0x5e42c9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e42ca:{NFSU2_TR(0x5e42ca);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5e42cd:{NFSU2_TR(0x5e42cd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e42d0:{NFSU2_TR(0x5e42d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e42c0u);}goto L5e42c0;}}
}
B5e42d2:L5e42d2:{c.instructions+=4;NFSU2_TR(0x5e42d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e42d5:{NFSU2_TR(0x5e42d5);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e42d8:{NFSU2_TR(0x5e42d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e42db:{NFSU2_TR(0x5e42db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e457f;}}
}
B5e42e1:L5e42e1:{c.instructions+=3;NFSU2_TR(0x5e42e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e42e5:{NFSU2_TR(0x5e42e5);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e42ea:{NFSU2_TR(0x5e42ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e42efull));
TAIL_STATIC(0x5da2f0u,5da);
}
B5e42ef:L5e42ef:{c.instructions+=1;NFSU2_TR(0x5e42ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x802070ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e42f7:L5e42f7:{c.instructions+=5;NFSU2_TR(0x5e42f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e42fb:{NFSU2_TR(0x5e42fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5e42fd:{NFSU2_TR(0x5e42fd);
__builtin_memmove((R+0),(R+20),4);
}
B5e42ff:{NFSU2_TR(0x5e42ff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e4302:{NFSU2_TR(0x5e4302);
if(r1(R+518)){{goto L5e43b3;}}
}
B5e4308:L5e4308:{c.instructions+=2;NFSU2_TR(0x5e4308);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e4309:{NFSU2_TR(0x5e4309);
if(r1(R+518)){{goto L5e439e;}}
}
B5e430f:L5e430f:{c.instructions+=2;NFSU2_TR(0x5e430f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e4310:{NFSU2_TR(0x5e4310);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e432a;}}
}
B5e4312:L5e4312:{c.instructions+=4;NFSU2_TR(0x5e4312);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4316:{NFSU2_TR(0x5e4316);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e4319:{NFSU2_TR(0x5e4319);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e431c:{NFSU2_TR(0x5e431c);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e431f:L5e431f:{c.instructions+=3;NFSU2_TR(0x5e431f);
__builtin_memmove((R+0),(R+518),1);
}
B5e4322:{NFSU2_TR(0x5e4322);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4324:{NFSU2_TR(0x5e4324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4501;}}
}
B5e432a:L5e432a:{c.instructions+=2;NFSU2_TR(0x5e432a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e432e:{NFSU2_TR(0x5e432e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4333ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5e4333:L5e4333:{c.instructions+=15;NFSU2_TR(0x5e4333);
__builtin_memmove((R+4),(R+0),4);
}
B5e4335:{NFSU2_TR(0x5e4335);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4338:{NFSU2_TR(0x5e4338);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4340:{NFSU2_TR(0x5e4340);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e4344:{NFSU2_TR(0x5e4344);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e4346:{NFSU2_TR(0x5e4346);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4348:{NFSU2_TR(0x5e4348);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e434c:{NFSU2_TR(0x5e434c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e434e:{NFSU2_TR(0x5e434e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4350:{NFSU2_TR(0x5e4350);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4352:{NFSU2_TR(0x5e4352);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e4354:{NFSU2_TR(0x5e4354);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e4358:{NFSU2_TR(0x5e4358);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e435a:{NFSU2_TR(0x5e435a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e435d:{NFSU2_TR(0x5e435d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4371;}}
}
B5e435f:L5e435f:{c.instructions+=6;NFSU2_TR(0x5e435f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4361:{NFSU2_TR(0x5e4361);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4362:{NFSU2_TR(0x5e4362);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4366:{NFSU2_TR(0x5e4366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4367:{NFSU2_TR(0x5e4367);
w4(R+4,u32(0x88f298ull));
}
B5e436c:{NFSU2_TR(0x5e436c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4371ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5e4371:L5e4371:{c.instructions+=4;NFSU2_TR(0x5e4371);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4375:{NFSU2_TR(0x5e4375);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4376:{NFSU2_TR(0x5e4376);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4377:{NFSU2_TR(0x5e4377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e437cull));
TAIL_STATIC(0x5d4030u,5d4);
}
B5e437c:L5e437c:{c.instructions+=3;NFSU2_TR(0x5e437c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e437f:{NFSU2_TR(0x5e437f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4381:{NFSU2_TR(0x5e4381);
if(r1(R+518)){{goto L5e4501;}}
}
B5e4387:L5e4387:{c.instructions+=2;NFSU2_TR(0x5e4387);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e438a:{NFSU2_TR(0x5e438a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e43d1;}}
}
B5e438c:L5e438c:{c.instructions+=4;NFSU2_TR(0x5e438c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4390:{NFSU2_TR(0x5e4390);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4393:{NFSU2_TR(0x5e4393);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x200ull))));
}
B5e4399:{NFSU2_TR(0x5e4399);
{goto L5e44fe;}
}
B5e439e:L5e439e:{c.instructions+=6;NFSU2_TR(0x5e439e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e43a2:{NFSU2_TR(0x5e43a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e43a5:{NFSU2_TR(0x5e43a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e43a8:{NFSU2_TR(0x5e43a8);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e43ab:{NFSU2_TR(0x5e43ab);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e43ae:{NFSU2_TR(0x5e43ae);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e431fu);}goto L5e431f;}
}
B5e43b3:L5e43b3:{c.instructions+=5;NFSU2_TR(0x5e43b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e43b7:{NFSU2_TR(0x5e43b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e43ba:{NFSU2_TR(0x5e43ba);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e43bc:{NFSU2_TR(0x5e43bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e43be:{NFSU2_TR(0x5e43be);
if(r1(R+518)){{goto L5e4501;}}
}
B5e43c4:L5e43c4:{c.instructions+=2;NFSU2_TR(0x5e43c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e43c6:{NFSU2_TR(0x5e43c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e432au);}goto L5e432a;}}
}
B5e43cc:L5e43cc:{c.instructions+=1;NFSU2_TR(0x5e43cc);
{goto L5e4501;}
}
B5e43d1:L5e43d1:{c.instructions+=6;NFSU2_TR(0x5e43d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e43d5:{NFSU2_TR(0x5e43d5);
__builtin_memmove((R+0),(R+20),4);
}
B5e43d7:{NFSU2_TR(0x5e43d7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e43da:{NFSU2_TR(0x5e43da);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e43df:{NFSU2_TR(0x5e43df);
w1(R+12,u8(0x7ull));
}
B5e43e1:{NFSU2_TR(0x5e43e1);
if(r1(R+518)){{goto L5e43e9;}}
}
B5e43e3:L5e43e3:{c.instructions+=2;NFSU2_TR(0x5e43e3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e43e4:{NFSU2_TR(0x5e43e4);
if(r1(R+518)){{goto L5e4403;}}
}
B5e43e6:L5e43e6:{c.instructions+=2;NFSU2_TR(0x5e43e6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e43e7:{NFSU2_TR(0x5e43e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e43ef;}}
}
B5e43e9:L5e43e9:{c.instructions+=1;NFSU2_TR(0x5e43e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e43ec:L5e43ec:{c.instructions+=1;NFSU2_TR(0x5e43ec);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B5e43ef:L5e43ef:{c.instructions+=2;NFSU2_TR(0x5e43ef);
__builtin_memmove((R+4),(R+24),4);
}
B5e43f1:{NFSU2_TR(0x5e43f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e43f6ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5e43f6:L5e43f6:{c.instructions+=2;NFSU2_TR(0x5e43f6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e43f9:{NFSU2_TR(0x5e43f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e440b;}}
}
B5e43fb:L5e43fb:{c.instructions+=3;NFSU2_TR(0x5e43fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e43fe:{NFSU2_TR(0x5e43fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e4401:{NFSU2_TR(0x5e4401);
{goto L5e441a;}
}
B5e4403:L5e4403:{c.instructions+=3;NFSU2_TR(0x5e4403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e4406:{NFSU2_TR(0x5e4406);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5e4409:{NFSU2_TR(0x5e4409);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e43ecu);}goto L5e43ec;}
}
B5e440b:L5e440b:{c.instructions+=6;NFSU2_TR(0x5e440b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e440e:{NFSU2_TR(0x5e440e);
__builtin_memmove((R+8),(R+4),4);
}
B5e4410:{NFSU2_TR(0x5e4410);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e4413:{NFSU2_TR(0x5e4413);
w1(R+8,u8(~u32(r1(R+8))));
}
B5e4415:{NFSU2_TR(0x5e4415);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e4418:{NFSU2_TR(0x5e4418);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+4))));
}
B5e441a:L5e441a:{c.instructions+=11;NFSU2_TR(0x5e441a);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5e441d:{NFSU2_TR(0x5e441d);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e4421:{NFSU2_TR(0x5e4421);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e4425:{NFSU2_TR(0x5e4425);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4429:{NFSU2_TR(0x5e4429);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e442a:{NFSU2_TR(0x5e442a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e442e:{NFSU2_TR(0x5e442e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e442f:{NFSU2_TR(0x5e442f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4430:{NFSU2_TR(0x5e4430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4431:{NFSU2_TR(0x5e4431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4432:{NFSU2_TR(0x5e4432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4437ull));
TAIL_STATIC(0x5e3040u,5e3);
}
B5e4437:L5e4437:{c.instructions+=2;NFSU2_TR(0x5e4437);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4439:{NFSU2_TR(0x5e4439);
if(r1(R+518)){{goto L5e44db;}}
}
B5e443f:L5e443f:{c.instructions+=1;NFSU2_TR(0x5e443f);
}
B5e4440:L5e4440:{c.instructions+=3;NFSU2_TR(0x5e4440);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e4444:{NFSU2_TR(0x5e4444);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e4446:{NFSU2_TR(0x5e4446);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e4451;}}
}
B5e4448:L5e4448:{c.instructions+=2;NFSU2_TR(0x5e4448);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e444f:{NFSU2_TR(0x5e444f);
{goto L5e4453;}
}
B5e4451:L5e4451:{c.instructions+=1;NFSU2_TR(0x5e4451);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e4453:L5e4453:{c.instructions+=17;NFSU2_TR(0x5e4453);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5e4457:{NFSU2_TR(0x5e4457);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e445a:{NFSU2_TR(0x5e445a);
{u32 ea_=u32(r4(R+4)+r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4461:{NFSU2_TR(0x5e4461);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e4465:{NFSU2_TR(0x5e4465);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e446c:{NFSU2_TR(0x5e446c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4474:{NFSU2_TR(0x5e4474);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e4476:{NFSU2_TR(0x5e4476);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4478:{NFSU2_TR(0x5e4478);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e447c:{NFSU2_TR(0x5e447c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e447e:{NFSU2_TR(0x5e447e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4480:{NFSU2_TR(0x5e4480);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4482:{NFSU2_TR(0x5e4482);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e4484:{NFSU2_TR(0x5e4484);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e4488:{NFSU2_TR(0x5e4488);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e448a:{NFSU2_TR(0x5e448a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e448d:{NFSU2_TR(0x5e448d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e44a1;}}
}
B5e448f:L5e448f:{c.instructions+=6;NFSU2_TR(0x5e448f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4491:{NFSU2_TR(0x5e4491);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4492:{NFSU2_TR(0x5e4492);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4496:{NFSU2_TR(0x5e4496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4497:{NFSU2_TR(0x5e4497);
w4(R+4,u32(0x88f298ull));
}
B5e449c:{NFSU2_TR(0x5e449c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e44a1ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5e44a1:L5e44a1:{c.instructions+=4;NFSU2_TR(0x5e44a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e44a5:{NFSU2_TR(0x5e44a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e44a6:{NFSU2_TR(0x5e44a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e44a7:{NFSU2_TR(0x5e44a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e44acull));
TAIL_STATIC(0x5d4030u,5d4);
}
B5e44ac:L5e44ac:{c.instructions+=3;NFSU2_TR(0x5e44ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e44af:{NFSU2_TR(0x5e44af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e44b1:{NFSU2_TR(0x5e44b1);
if(r1(R+518)){{goto L5e44c1;}}
}
B5e44b3:L5e44b3:{c.instructions+=4;NFSU2_TR(0x5e44b3);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5e44b8:{NFSU2_TR(0x5e44b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e44ba:{NFSU2_TR(0x5e44ba);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e44bf:{NFSU2_TR(0x5e44bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e44db;}}
}
B5e44c1:L5e44c1:{c.instructions+=8;NFSU2_TR(0x5e44c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e44c5:{NFSU2_TR(0x5e44c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e44c9:{NFSU2_TR(0x5e44c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e44ca:{NFSU2_TR(0x5e44ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e44cb:{NFSU2_TR(0x5e44cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e44cc:{NFSU2_TR(0x5e44cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e44cd:{NFSU2_TR(0x5e44cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e44ce:{NFSU2_TR(0x5e44ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e44d3ull));
TAIL_STATIC(0x5e3040u,5e3);
}
B5e44d3:L5e44d3:{c.instructions+=2;NFSU2_TR(0x5e44d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e44d5:{NFSU2_TR(0x5e44d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4440u);}goto L5e4440;}}
}
B5e44db:L5e44db:{c.instructions+=3;NFSU2_TR(0x5e44db);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e44df:{NFSU2_TR(0x5e44df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e44e1:{NFSU2_TR(0x5e44e1);
if(r1(R+518)){{goto L5e4501;}}
}
B5e44e3:L5e44e3:{c.instructions+=3;NFSU2_TR(0x5e44e3);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5e44e8:{NFSU2_TR(0x5e44e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e44ea:{NFSU2_TR(0x5e44ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4501;}}
}
B5e44ec:L5e44ec:{c.instructions+=4;NFSU2_TR(0x5e44ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e44f0:{NFSU2_TR(0x5e44f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e44f3:{NFSU2_TR(0x5e44f3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x80ull))));
}
B5e44f9:{NFSU2_TR(0x5e44f9);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e44fe:L5e44fe:{c.instructions+=1;NFSU2_TR(0x5e44fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4501:L5e4501:{c.instructions+=5;NFSU2_TR(0x5e4501);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4505:{NFSU2_TR(0x5e4505);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5e4508:{NFSU2_TR(0x5e4508);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80207cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80207cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e450d:{NFSU2_TR(0x5e450d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4511:{NFSU2_TR(0x5e4511);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e42f7u);}goto L5e42f7;}}
}
B5e4517:L5e4517:{c.instructions+=4;NFSU2_TR(0x5e4517);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e451b:{NFSU2_TR(0x5e451b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e451d:{NFSU2_TR(0x5e451d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e4521:{NFSU2_TR(0x5e4521);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e452d;}}
}
B5e4523:L5e4523:{c.instructions+=4;NFSU2_TR(0x5e4523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4526:{NFSU2_TR(0x5e4526);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e4529:{NFSU2_TR(0x5e4529);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e452b:{NFSU2_TR(0x5e452b);
if(r1(R+518)){{goto L5e456c;}}
}
B5e452d:L5e452d:{c.instructions+=8;NFSU2_TR(0x5e452d);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4531:{NFSU2_TR(0x5e4531);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4532:{NFSU2_TR(0x5e4532);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e4536:{NFSU2_TR(0x5e4536);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4537:{NFSU2_TR(0x5e4537);
__builtin_memmove((R+4),(R+24),4);
}
B5e4539:{NFSU2_TR(0x5e4539);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e453e:{NFSU2_TR(0x5e453e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4543:{NFSU2_TR(0x5e4543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4548ull));
TAIL_STATIC(0x5dd7e0u,5dd);
}
B5e4548:L5e4548:{c.instructions+=4;NFSU2_TR(0x5e4548);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e454a:{NFSU2_TR(0x5e454a);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e454e:{NFSU2_TR(0x5e454e);
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
B5e4550:{NFSU2_TR(0x5e4550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e456c;}}
}
B5e4552:L5e4552:{c.instructions+=3;NFSU2_TR(0x5e4552);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e4556:{NFSU2_TR(0x5e4556);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4558:{NFSU2_TR(0x5e4558);
if(r1(R+518)){{goto L5e4564;}}
}
B5e455a:L5e455a:{c.instructions+=4;NFSU2_TR(0x5e455a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e455d:{NFSU2_TR(0x5e455d);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e4560:{NFSU2_TR(0x5e4560);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e4562:{NFSU2_TR(0x5e4562);
if(r1(R+518)){{goto L5e456c;}}
}
B5e4564:L5e4564:{c.instructions+=2;NFSU2_TR(0x5e4564);
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
B5e4566:{NFSU2_TR(0x5e4566);
if(r1(R+518)){{goto L5e456c;}}
}
B5e4568:L5e4568:{c.instructions+=1;NFSU2_TR(0x5e4568);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
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
B5e456c:L5e456c:{c.instructions+=2;NFSU2_TR(0x5e456c);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4570:{NFSU2_TR(0x5e4570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4575ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e4575:L5e4575:{c.instructions+=2;NFSU2_TR(0x5e4575);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e4579:{NFSU2_TR(0x5e4579);
__builtin_memmove((R+28),gp(0x88f2c0),4);
}
B5e457f:L5e457f:{c.instructions+=9;NFSU2_TR(0x5e457f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4583:{NFSU2_TR(0x5e4583);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4587:{NFSU2_TR(0x5e4587);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5e458d:{NFSU2_TR(0x5e458d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e458e:{NFSU2_TR(0x5e458e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5e4591:{NFSU2_TR(0x5e4591);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5e4593:{NFSU2_TR(0x5e4593);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4597:{NFSU2_TR(0x5e4597);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e459b:{NFSU2_TR(0x5e459b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4272u);}goto L5e4272;}}
}
B5e45a1:L5e45a1:{c.instructions+=3;NFSU2_TR(0x5e45a1);
w4(R+28,u32(0x2ull));
}
B5e45a6:{NFSU2_TR(0x5e45a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B5e45a9:{NFSU2_TR(0x5e45a9);
__builtin_memmove((R+16),(R+16),4);
}
B5e45b0:L5e45b0:{c.instructions+=3;NFSU2_TR(0x5e45b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e45b3:{NFSU2_TR(0x5e45b3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e45b5:{NFSU2_TR(0x5e45b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e45e2;}}
}
B5e45b7:L5e45b7:{c.instructions+=3;NFSU2_TR(0x5e45b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e45ba:{NFSU2_TR(0x5e45ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e45bc:{NFSU2_TR(0x5e45bc);
if(r1(R+518)){{goto L5e45e2;}}
}
B5e45be:L5e45be:{c.instructions+=5;NFSU2_TR(0x5e45be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e45c1:{NFSU2_TR(0x5e45c1);
__builtin_memmove((R+8),(R+0),4);
}
B5e45c3:{NFSU2_TR(0x5e45c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e45c6:{NFSU2_TR(0x5e45c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e45c9:{NFSU2_TR(0x5e45c9);
if(r1(R+518)){{goto L5e45e2;}}
}
B5e45cb:L5e45cb:{c.instructions+=4;NFSU2_TR(0x5e45cb);
__builtin_memmove((R+8),(R+0),4);
}
B5e45cd:{NFSU2_TR(0x5e45cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e45d0:{NFSU2_TR(0x5e45d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e45d3:{NFSU2_TR(0x5e45d3);
if(r1(R+518)){{goto L5e45dc;}}
}
B5e45d5:L5e45d5:{c.instructions+=2;NFSU2_TR(0x5e45d5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffdffull))));
}
B5e45da:{NFSU2_TR(0x5e45da);
{goto L5e45df;}
}
B5e45dc:L5e45dc:{c.instructions+=1;NFSU2_TR(0x5e45dc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40ull))));
}
B5e45df:L5e45df:{c.instructions+=1;NFSU2_TR(0x5e45df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e45e2:L5e45e2:{c.instructions+=3;NFSU2_TR(0x5e45e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e45e5:{NFSU2_TR(0x5e45e5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e45e7:{NFSU2_TR(0x5e45e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e4613;}}
}
B5e45e9:L5e45e9:{c.instructions+=3;NFSU2_TR(0x5e45e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e45eb:{NFSU2_TR(0x5e45eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e45ed:{NFSU2_TR(0x5e45ed);
if(r1(R+518)){{goto L5e4613;}}
}
B5e45ef:L5e45ef:{c.instructions+=5;NFSU2_TR(0x5e45ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e45f2:{NFSU2_TR(0x5e45f2);
__builtin_memmove((R+8),(R+0),4);
}
B5e45f4:{NFSU2_TR(0x5e45f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e45f7:{NFSU2_TR(0x5e45f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e45fa:{NFSU2_TR(0x5e45fa);
if(r1(R+518)){{goto L5e4613;}}
}
B5e45fc:L5e45fc:{c.instructions+=4;NFSU2_TR(0x5e45fc);
__builtin_memmove((R+8),(R+0),4);
}
B5e45fe:{NFSU2_TR(0x5e45fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e4601:{NFSU2_TR(0x5e4601);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4604:{NFSU2_TR(0x5e4604);
if(r1(R+518)){{goto L5e460d;}}
}
B5e4606:L5e4606:{c.instructions+=2;NFSU2_TR(0x5e4606);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffdffull))));
}
B5e460b:{NFSU2_TR(0x5e460b);
{goto L5e4610;}
}
B5e460d:L5e460d:{c.instructions+=1;NFSU2_TR(0x5e460d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40ull))));
}
B5e4610:L5e4610:{c.instructions+=1;NFSU2_TR(0x5e4610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4613:L5e4613:{c.instructions+=2;NFSU2_TR(0x5e4613);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e4615:{NFSU2_TR(0x5e4615);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e4642;}}
}
B5e4617:L5e4617:{c.instructions+=3;NFSU2_TR(0x5e4617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e461a:{NFSU2_TR(0x5e461a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e461c:{NFSU2_TR(0x5e461c);
if(r1(R+518)){{goto L5e4642;}}
}
B5e461e:L5e461e:{c.instructions+=5;NFSU2_TR(0x5e461e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4621:{NFSU2_TR(0x5e4621);
__builtin_memmove((R+8),(R+0),4);
}
B5e4623:{NFSU2_TR(0x5e4623);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e4626:{NFSU2_TR(0x5e4626);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4629:{NFSU2_TR(0x5e4629);
if(r1(R+518)){{goto L5e4642;}}
}
B5e462b:L5e462b:{c.instructions+=4;NFSU2_TR(0x5e462b);
__builtin_memmove((R+8),(R+0),4);
}
B5e462d:{NFSU2_TR(0x5e462d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e4630:{NFSU2_TR(0x5e4630);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4633:{NFSU2_TR(0x5e4633);
if(r1(R+518)){{goto L5e463c;}}
}
B5e4635:L5e4635:{c.instructions+=2;NFSU2_TR(0x5e4635);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffdffull))));
}
B5e463a:{NFSU2_TR(0x5e463a);
{goto L5e463f;}
}
B5e463c:L5e463c:{c.instructions+=1;NFSU2_TR(0x5e463c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40ull))));
}
B5e463f:L5e463f:{c.instructions+=1;NFSU2_TR(0x5e463f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4642:L5e4642:{c.instructions+=3;NFSU2_TR(0x5e4642);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4645:{NFSU2_TR(0x5e4645);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e4647:{NFSU2_TR(0x5e4647);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e4674;}}
}
B5e4649:L5e4649:{c.instructions+=3;NFSU2_TR(0x5e4649);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e464c:{NFSU2_TR(0x5e464c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e464e:{NFSU2_TR(0x5e464e);
if(r1(R+518)){{goto L5e4674;}}
}
B5e4650:L5e4650:{c.instructions+=5;NFSU2_TR(0x5e4650);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4653:{NFSU2_TR(0x5e4653);
__builtin_memmove((R+8),(R+0),4);
}
B5e4655:{NFSU2_TR(0x5e4655);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e4658:{NFSU2_TR(0x5e4658);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e465b:{NFSU2_TR(0x5e465b);
if(r1(R+518)){{goto L5e4674;}}
}
B5e465d:L5e465d:{c.instructions+=4;NFSU2_TR(0x5e465d);
__builtin_memmove((R+8),(R+0),4);
}
B5e465f:{NFSU2_TR(0x5e465f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e4662:{NFSU2_TR(0x5e4662);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4665:{NFSU2_TR(0x5e4665);
if(r1(R+518)){{goto L5e466e;}}
}
B5e4667:L5e4667:{c.instructions+=2;NFSU2_TR(0x5e4667);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffdffull))));
}
B5e466c:{NFSU2_TR(0x5e466c);
{goto L5e4671;}
}
B5e466e:L5e466e:{c.instructions+=1;NFSU2_TR(0x5e466e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40ull))));
}
B5e4671:L5e4671:{c.instructions+=1;NFSU2_TR(0x5e4671);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4674:L5e4674:{c.instructions+=5;NFSU2_TR(0x5e4674);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5e4677:{NFSU2_TR(0x5e4677);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e467a:{NFSU2_TR(0x5e467a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5e467d:{NFSU2_TR(0x5e467d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5dcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e4682:{NFSU2_TR(0x5e4682);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e45b0u);}goto L5e45b0;}}
}
B5e4688:L5e4688:{c.instructions+=4;NFSU2_TR(0x5e4688);
__builtin_memmove((R+0),gp(0x88f298),4);
}
B5e468d:{NFSU2_TR(0x5e468d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e468f:{NFSU2_TR(0x5e468f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4691:{NFSU2_TR(0x5e4691);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e4707;}}
}
B5e4693:L5e4693:{c.instructions+=1;NFSU2_TR(0x5e4693);
{goto L5e46a0;}
}
B5e46a0:L5e46a0:{c.instructions+=6;NFSU2_TR(0x5e46a0);
__builtin_memmove((R+8),gp(0x88f29c),4);
}
B5e46a6:{NFSU2_TR(0x5e46a6);
__builtin_memmove((R+0),(R+24),4);
}
B5e46a8:{NFSU2_TR(0x5e46a8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5e46ae:{NFSU2_TR(0x5e46ae);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5e46b0:{NFSU2_TR(0x5e46b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e46b2:{NFSU2_TR(0x5e46b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e46de;}}
}
B5e46b4:L5e46b4:{c.instructions+=9;NFSU2_TR(0x5e46b4);
{u32 ea_=u32(r4(R+0)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e46ba:{NFSU2_TR(0x5e46ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e46c0:{NFSU2_TR(0x5e46c0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e46c4:{NFSU2_TR(0x5e46c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e46c8:{NFSU2_TR(0x5e46c8);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e46ce:{NFSU2_TR(0x5e46ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e46d4:{NFSU2_TR(0x5e46d4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e46d8:{NFSU2_TR(0x5e46d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e46dc:{NFSU2_TR(0x5e46dc);
{goto L5e46fd;}
}
B5e46de:L5e46de:{c.instructions+=9;NFSU2_TR(0x5e46de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e46e4:{NFSU2_TR(0x5e46e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e46e5:{NFSU2_TR(0x5e46e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
}
B5e46ea:{NFSU2_TR(0x5e46ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e46eb:{NFSU2_TR(0x5e46eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e46ef:{NFSU2_TR(0x5e46ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e46f0:{NFSU2_TR(0x5e46f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e46f4:{NFSU2_TR(0x5e46f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e46f5:{NFSU2_TR(0x5e46f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e46faull));
TAIL_STATIC(0x43d380u,43d);
}
B5e46fa:L5e46fa:{c.instructions+=1;NFSU2_TR(0x5e46fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e46fd:L5e46fd:{c.instructions+=4;NFSU2_TR(0x5e46fd);
__builtin_memmove((R+0),gp(0x88f298),4);
}
B5e4702:{NFSU2_TR(0x5e4702);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e4703:{NFSU2_TR(0x5e4703);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e4705:{NFSU2_TR(0x5e4705);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e46a0u);}goto L5e46a0;}}
}
B5e4707:L5e4707:{c.instructions+=7;NFSU2_TR(0x5e4707);
__builtin_memmove((R+4),gp(0x88f2b8),4);
}
B5e470d:{NFSU2_TR(0x5e470d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4711:{NFSU2_TR(0x5e4711);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4715:{NFSU2_TR(0x5e4715);
{u32 ea_=u32(u32(7906692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e471b:{NFSU2_TR(0x5e471b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e471d:{NFSU2_TR(0x5e471d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4720:{NFSU2_TR(0x5e4720);
if(r1(R+518)){{goto L5e472a;}}
}
B5e4722:L5e4722:{c.instructions+=1;NFSU2_TR(0x5e4722);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x43160000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e472a:L5e472a:{c.instructions+=16;NFSU2_TR(0x5e472a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e472e:{NFSU2_TR(0x5e472e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e4732:{NFSU2_TR(0x5e4732);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e4736:{NFSU2_TR(0x5e4736);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e4738:{NFSU2_TR(0x5e4738);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B5e473b:{NFSU2_TR(0x5e473b);
w4(R+20,u32(0x40ull));
}
B5e4740:{NFSU2_TR(0x5e4740);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4744:{NFSU2_TR(0x5e4744);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4748:{NFSU2_TR(0x5e4748);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e474c:{NFSU2_TR(0x5e474c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4750:{NFSU2_TR(0x5e4750);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4754:{NFSU2_TR(0x5e4754);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4758:{NFSU2_TR(0x5e4758);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e475c:{NFSU2_TR(0x5e475c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4760:{NFSU2_TR(0x5e4760);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4764:{NFSU2_TR(0x5e4764);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4768:L5e4768:{c.instructions+=2;NFSU2_TR(0x5e4768);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e476a:{NFSU2_TR(0x5e476a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e4801;}}
}
B5e4770:L5e4770:{c.instructions+=3;NFSU2_TR(0x5e4770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e4772:{NFSU2_TR(0x5e4772);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4774:{NFSU2_TR(0x5e4774);
if(r1(R+518)){{goto L5e4801;}}
}
B5e477a:L5e477a:{c.instructions+=3;NFSU2_TR(0x5e477a);
__builtin_memmove((R+8),gp(0x88f2c0),4);
}
B5e4780:{NFSU2_TR(0x5e4780);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e4782:{NFSU2_TR(0x5e4782);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4785:L5e4785:{c.instructions+=2;NFSU2_TR(0x5e4785);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+8))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5e4788:{NFSU2_TR(0x5e4788);
if(r1(R+518)){{goto L5e4795;}}
}
B5e478a:L5e478a:{c.instructions+=4;NFSU2_TR(0x5e478a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e478b:{NFSU2_TR(0x5e478b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5e478e:{NFSU2_TR(0x5e478e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e4791:{NFSU2_TR(0x5e4791);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4785u);}goto L5e4785;}}
}
B5e4793:L5e4793:{c.instructions+=1;NFSU2_TR(0x5e4793);
{goto L5e47b0;}
}
B5e4795:L5e4795:{c.instructions+=4;NFSU2_TR(0x5e4795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4798:{NFSU2_TR(0x5e4798);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e479b:{NFSU2_TR(0x5e479b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e479e:{NFSU2_TR(0x5e479e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e47b0;}}
}
B5e47a0:L5e47a0:{c.instructions+=4;NFSU2_TR(0x5e47a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47a2:{NFSU2_TR(0x5e47a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47a4:{NFSU2_TR(0x5e47a4);
__builtin_memmove((R+4),(R+24),4);
}
B5e47a6:{NFSU2_TR(0x5e47a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e47abull));
TAIL_STATIC(0x5dd7e0u,5dd);
}
B5e47ab:L5e47ab:{c.instructions+=2;NFSU2_TR(0x5e47ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e47ad:{NFSU2_TR(0x5e47ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e47b0:L5e47b0:{c.instructions+=2;NFSU2_TR(0x5e47b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e47b4:{NFSU2_TR(0x5e47b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4801;}}
}
B5e47b6:L5e47b6:{c.instructions+=9;NFSU2_TR(0x5e47b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e47b9:{NFSU2_TR(0x5e47b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47ba:{NFSU2_TR(0x5e47ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e47bd:{NFSU2_TR(0x5e47bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47be:{NFSU2_TR(0x5e47be);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e47c2:{NFSU2_TR(0x5e47c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47c3:{NFSU2_TR(0x5e47c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e47c7:{NFSU2_TR(0x5e47c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47c8:{NFSU2_TR(0x5e47c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e47cdull));
TAIL_STATIC(0x43d4c0u,43d);
}
B5e47cd:L5e47cd:{c.instructions+=3;NFSU2_TR(0x5e47cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e47d0:{NFSU2_TR(0x5e47d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e47d2:{NFSU2_TR(0x5e47d2);
if(r1(R+518)){{goto L5e4801;}}
}
B5e47d4:L5e47d4:{c.instructions+=6;NFSU2_TR(0x5e47d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e47d8:{NFSU2_TR(0x5e47d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47d9:{NFSU2_TR(0x5e47d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e47db:{NFSU2_TR(0x5e47db);
__builtin_memmove((R+4),(R+24),4);
}
B5e47dd:{NFSU2_TR(0x5e47dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e47e2:{NFSU2_TR(0x5e47e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e47e7ull));
TAIL_STATIC(0x5dd7e0u,5dd);
}
B5e47e7:L5e47e7:{c.instructions+=3;NFSU2_TR(0x5e47e7);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e47eb:{NFSU2_TR(0x5e47eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e47ed:{NFSU2_TR(0x5e47ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e47ff;}}
}
B5e47ef:L5e47ef:{c.instructions+=4;NFSU2_TR(0x5e47ef);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e47f3:{NFSU2_TR(0x5e47f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e47f5:{NFSU2_TR(0x5e47f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e47f8:{NFSU2_TR(0x5e47f8);
if(r1(R+514)){{goto L5e4801;}}
}
B5e47fa:L5e47fa:{c.instructions+=2;NFSU2_TR(0x5e47fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e47fd:{NFSU2_TR(0x5e47fd);
{goto L5e4801;}
}
B5e47ff:L5e47ff:{c.instructions+=1;NFSU2_TR(0x5e47ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e4801:L5e4801:{c.instructions+=4;NFSU2_TR(0x5e4801);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e4802:{NFSU2_TR(0x5e4802);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5e4805:{NFSU2_TR(0x5e4805);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5dcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5dcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e480b:{NFSU2_TR(0x5e480b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4768u);}goto L5e4768;}}
}
B5e4811:L5e4811:{c.instructions+=7;NFSU2_TR(0x5e4811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4812:{NFSU2_TR(0x5e4812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4813:{NFSU2_TR(0x5e4813);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4814:{NFSU2_TR(0x5e4814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e4815:{NFSU2_TR(0x5e4815);
__builtin_memmove((R+16),(R+20),4);
}
B5e4817:{NFSU2_TR(0x5e4817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4818:{NFSU2_TR(0x5e4818);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4820:L5e4820:{c.instructions+=4;NFSU2_TR(0x5e4820);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4824:{NFSU2_TR(0x5e4824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e4826:{NFSU2_TR(0x5e4826);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34121ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e482b:{NFSU2_TR(0x5e482b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e483e;}}
}
B5e482d:L5e482d:{c.instructions+=3;NFSU2_TR(0x5e482d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e482e:{NFSU2_TR(0x5e482e);
w4(R+4,u32(0x88a320ull));
}
B5e4833:{NFSU2_TR(0x5e4833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4838ull));
TAIL_STATIC(0x5e3ff0u,5e3);
}
B5e4838:L5e4838:{c.instructions+=2;NFSU2_TR(0x5e4838);
w4(R+0,u32(0x1ull));
}
B5e483d:{NFSU2_TR(0x5e483d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e483e:L5e483e:{c.instructions+=2;NFSU2_TR(0x5e483e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34122ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4843:{NFSU2_TR(0x5e4843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e485c;}}
}
B5e4845:L5e4845:{c.instructions+=6;NFSU2_TR(0x5e4845);
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
B5e4847:{NFSU2_TR(0x5e4847);
__builtin_memmove(gp(0x883db0),(R+0),4);
}
B5e484c:{NFSU2_TR(0x5e484c);
__builtin_memmove(gp(0x883db4),(R+0),4);
}
B5e4851:{NFSU2_TR(0x5e4851);
__builtin_memmove(gp(0x883db8),(R+0),4);
}
B5e4856:{NFSU2_TR(0x5e4856);
w4(R+0,u32(0x1ull));
}
B5e485b:{NFSU2_TR(0x5e485b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e485c:L5e485c:{c.instructions+=2;NFSU2_TR(0x5e485c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34123ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4861:{NFSU2_TR(0x5e4861);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4875;}}
}
B5e4863:L5e4863:{c.instructions+=5;NFSU2_TR(0x5e4863);
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
B5e4865:{NFSU2_TR(0x5e4865);
__builtin_memmove(gp(0x883dbc),(R+0),4);
}
B5e486a:{NFSU2_TR(0x5e486a);
__builtin_memmove(gp(0x883dc0),(R+0),4);
}
B5e486f:{NFSU2_TR(0x5e486f);
w4(R+0,u32(0x1ull));
}
B5e4874:{NFSU2_TR(0x5e4874);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4875:L5e4875:{c.instructions+=2;NFSU2_TR(0x5e4875);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34124ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e487a:{NFSU2_TR(0x5e487a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e488e;}}
}
B5e487c:L5e487c:{c.instructions+=5;NFSU2_TR(0x5e487c);
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
B5e487e:{NFSU2_TR(0x5e487e);
__builtin_memmove(gp(0x883dc4),(R+0),4);
}
B5e4883:{NFSU2_TR(0x5e4883);
__builtin_memmove(gp(0x883dc8),(R+0),4);
}
B5e4888:{NFSU2_TR(0x5e4888);
w4(R+0,u32(0x1ull));
}
B5e488d:{NFSU2_TR(0x5e488d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e488e:L5e488e:{c.instructions+=2;NFSU2_TR(0x5e488e);
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
B5e4890:{NFSU2_TR(0x5e4890);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e48a0:L5e48a0:{c.instructions+=4;NFSU2_TR(0x5e48a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4a0ull))));
}
B5e48a6:{NFSU2_TR(0x5e48a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e48a8:{NFSU2_TR(0x5e48a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e48ab:{NFSU2_TR(0x5e48ab);
TAIL_STATIC(0x5e0800u,5e0);
}
B5e48b0:L5e48b0:{c.instructions+=12;NFSU2_TR(0x5e48b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x70ull))));
}
B5e48b3:{NFSU2_TR(0x5e48b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e48b9:{NFSU2_TR(0x5e48b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e48ba:{NFSU2_TR(0x5e48ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e48bb:{NFSU2_TR(0x5e48bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e48bf:{NFSU2_TR(0x5e48bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5e48c2:{NFSU2_TR(0x5e48c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5e48c5:{NFSU2_TR(0x5e48c5);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e48c9:{NFSU2_TR(0x5e48c9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e48cb:{NFSU2_TR(0x5e48cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e48cd:{NFSU2_TR(0x5e48cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e48d1:{NFSU2_TR(0x5e48d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e4b63;}}
}
B5e48d7:L5e48d7:{c.instructions+=4;NFSU2_TR(0x5e48d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e48d8:{NFSU2_TR(0x5e48d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e48d9:{NFSU2_TR(0x5e48d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e48dc:{NFSU2_TR(0x5e48dc);
{goto L5e48e2;}
}
B5e48de:L5e48de:{c.instructions+=1;NFSU2_TR(0x5e48de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e48e2:L5e48e2:{c.instructions+=12;NFSU2_TR(0x5e48e2);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e48e6:{NFSU2_TR(0x5e48e6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e48e8:{NFSU2_TR(0x5e48e8);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5e48ec:{NFSU2_TR(0x5e48ec);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5e48ee:{NFSU2_TR(0x5e48ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B5e48f5:{NFSU2_TR(0x5e48f5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e48f7:{NFSU2_TR(0x5e48f7);
u8 U[13];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B5e48ff:{NFSU2_TR(0x5e48ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4903:{NFSU2_TR(0x5e4903);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4909:{NFSU2_TR(0x5e4909);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e490b:{NFSU2_TR(0x5e490b);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4912:{NFSU2_TR(0x5e4912);
if(r1(R+518)){{goto L5e4939;}}
}
B5e4914:L5e4914:{c.instructions+=2;NFSU2_TR(0x5e4914);
__builtin_memmove((R+4),(R+0),4);
}
B5e4916:{NFSU2_TR(0x5e4916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e491bull));
TAIL_STATIC(0x5774a0u,577);
}
B5e491b:L5e491b:{c.instructions+=3;NFSU2_TR(0x5e491b);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4922:{NFSU2_TR(0x5e4922);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4923:{NFSU2_TR(0x5e4923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4928ull));
TAIL_STATIC(0x575630u,575);
}
B5e4928:L5e4928:{c.instructions+=3;NFSU2_TR(0x5e4928);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e492c:{NFSU2_TR(0x5e492c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e492f:{NFSU2_TR(0x5e492f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4939:L5e4939:{c.instructions+=5;NFSU2_TR(0x5e4939);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5e493b:{NFSU2_TR(0x5e493b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e493d:{NFSU2_TR(0x5e493d);
u8 U[5];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4945:{NFSU2_TR(0x5e4945);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e4949:{NFSU2_TR(0x5e4949);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e4956;}}
}
B5e494b:L5e494b:{c.instructions+=3;NFSU2_TR(0x5e494b);
u8 U[5];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e4952:{NFSU2_TR(0x5e4952);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4954:{NFSU2_TR(0x5e4954);
if(r1(R+518)){{goto L5e49ce;}}
}
B5e4956:L5e4956:{c.instructions+=12;NFSU2_TR(0x5e4956);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4959:{NFSU2_TR(0x5e4959);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e495d:{NFSU2_TR(0x5e495d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e495e:{NFSU2_TR(0x5e495e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e495e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e495e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e4960:{NFSU2_TR(0x5e4960);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e4964:{NFSU2_TR(0x5e4964);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5e4966:{NFSU2_TR(0x5e4966);
u8 U[16];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e496d:{NFSU2_TR(0x5e496d);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e4971:{NFSU2_TR(0x5e4971);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5e4973:{NFSU2_TR(0x5e4973);
u8 U[13];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5e497a:{NFSU2_TR(0x5e497a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e497c:{NFSU2_TR(0x5e497c);
if(r1(R+518)){{goto L5e4995;}}
}
B5e497e:L5e497e:{c.instructions+=8;NFSU2_TR(0x5e497e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e4982:{NFSU2_TR(0x5e4982);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e4985:{NFSU2_TR(0x5e4985);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4988:{NFSU2_TR(0x5e4988);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e498b:{NFSU2_TR(0x5e498b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e498e:{NFSU2_TR(0x5e498e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e4990:{NFSU2_TR(0x5e4990);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4993:{NFSU2_TR(0x5e4993);
{goto L5e49b1;}
}
B5e4995:L5e4995:{c.instructions+=9;NFSU2_TR(0x5e4995);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e4999:{NFSU2_TR(0x5e4999);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e499c:{NFSU2_TR(0x5e499c);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5e49a0:{NFSU2_TR(0x5e49a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e49a3:{NFSU2_TR(0x5e49a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e49a6:{NFSU2_TR(0x5e49a6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e49aa:{NFSU2_TR(0x5e49aa);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e49ac:{NFSU2_TR(0x5e49ac);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e49ae:{NFSU2_TR(0x5e49ae);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e49b1:L5e49b1:{c.instructions+=7;NFSU2_TR(0x5e49b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e49b5:{NFSU2_TR(0x5e49b5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e49b8:{NFSU2_TR(0x5e49b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e49bc:{NFSU2_TR(0x5e49bc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e49be:{NFSU2_TR(0x5e49be);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e49c2:{NFSU2_TR(0x5e49c2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e49c6:{NFSU2_TR(0x5e49c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e49ce:L5e49ce:{c.instructions+=4;NFSU2_TR(0x5e49ce);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5e49d2:{NFSU2_TR(0x5e49d2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5e49d3:{NFSU2_TR(0x5e49d3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e49d5:{NFSU2_TR(0x5e49d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e49e2;}}
}
B5e49d7:L5e49d7:{c.instructions+=3;NFSU2_TR(0x5e49d7);
u8 U[5];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e49de:{NFSU2_TR(0x5e49de);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e49e0:{NFSU2_TR(0x5e49e0);
if(r1(R+518)){{goto L5e4a49;}}
}
B5e49e2:L5e49e2:{c.instructions+=11;NFSU2_TR(0x5e49e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e49e5:{NFSU2_TR(0x5e49e5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e49e6:{NFSU2_TR(0x5e49e6);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e49e6);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e49e6);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B5e49e9:{NFSU2_TR(0x5e49e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e49ed:{NFSU2_TR(0x5e49ed);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5e49ef:{NFSU2_TR(0x5e49ef);
u8 U[16];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e49f6:{NFSU2_TR(0x5e49f6);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e49fa:{NFSU2_TR(0x5e49fa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5e49fc:{NFSU2_TR(0x5e49fc);
u8 U[13];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5e4a03:{NFSU2_TR(0x5e4a03);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4a05:{NFSU2_TR(0x5e4a05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4a1e;}}
}
B5e4a07:L5e4a07:{c.instructions+=8;NFSU2_TR(0x5e4a07);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e4a0b:{NFSU2_TR(0x5e4a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e4a0e:{NFSU2_TR(0x5e4a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4a11:{NFSU2_TR(0x5e4a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e4a14:{NFSU2_TR(0x5e4a14);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4a17:{NFSU2_TR(0x5e4a17);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e4a19:{NFSU2_TR(0x5e4a19);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4a1c:{NFSU2_TR(0x5e4a1c);
{goto L5e4a3a;}
}
B5e4a1e:L5e4a1e:{c.instructions+=9;NFSU2_TR(0x5e4a1e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e4a22:{NFSU2_TR(0x5e4a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4a25:{NFSU2_TR(0x5e4a25);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5e4a29:{NFSU2_TR(0x5e4a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e4a2c:{NFSU2_TR(0x5e4a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e4a2f:{NFSU2_TR(0x5e4a2f);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e4a33:{NFSU2_TR(0x5e4a33);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4a35:{NFSU2_TR(0x5e4a35);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e4a37:{NFSU2_TR(0x5e4a37);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4a3a:L5e4a3a:{c.instructions+=5;NFSU2_TR(0x5e4a3a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e4a3d:{NFSU2_TR(0x5e4a3d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4a3f:{NFSU2_TR(0x5e4a3f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4a43:{NFSU2_TR(0x5e4a43);
w1(R+0,u8(0x1ull));
}
B5e4a45:{NFSU2_TR(0x5e4a45);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4a49:L5e4a49:{c.instructions+=6;NFSU2_TR(0x5e4a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4a4d:{NFSU2_TR(0x5e4a4d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e4a4f:{NFSU2_TR(0x5e4a4f);
u8 U[7];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5e4a56:{NFSU2_TR(0x5e4a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4a5a:{NFSU2_TR(0x5e4a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4a5e:{NFSU2_TR(0x5e4a5e);
if(r1(R+518)){{goto L5e4aae;}}
}
B5e4a60:L5e4a60:{c.instructions+=3;NFSU2_TR(0x5e4a60);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e4a62:{NFSU2_TR(0x5e4a62);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4a66:{NFSU2_TR(0x5e4a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4a8c;}}
}
B5e4a68:L5e4a68:{c.instructions+=9;NFSU2_TR(0x5e4a68);
{u32 ea_=u32(r4(R+20)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4a6e:{NFSU2_TR(0x5e4a6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e4a72:{NFSU2_TR(0x5e4a72);
{u32 ea_=u32(r4(R+20)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4a78:{NFSU2_TR(0x5e4a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4a7c:{NFSU2_TR(0x5e4a7c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4a80:{NFSU2_TR(0x5e4a80);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4a82:{NFSU2_TR(0x5e4a82);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4a86:{NFSU2_TR(0x5e4a86);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4a8a:{NFSU2_TR(0x5e4a8a);
{goto L5e4aae;}
}
B5e4a8c:L5e4a8c:{c.instructions+=8;NFSU2_TR(0x5e4a8c);
{u32 ea_=u32(r4(R+20)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4a92:{NFSU2_TR(0x5e4a92);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e4a96:{NFSU2_TR(0x5e4a96);
{u32 ea_=u32(r4(R+20)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4a9c:{NFSU2_TR(0x5e4a9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4aa0:{NFSU2_TR(0x5e4aa0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4aa4:{NFSU2_TR(0x5e4aa4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4aa6:{NFSU2_TR(0x5e4aa6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4aaa:{NFSU2_TR(0x5e4aaa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4aae:L5e4aae:{c.instructions+=2;NFSU2_TR(0x5e4aae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4ab0:{NFSU2_TR(0x5e4ab0);
if(r1(R+518)){{goto L5e4b00;}}
}
B5e4ab2:L5e4ab2:{c.instructions+=3;NFSU2_TR(0x5e4ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4ab4:{NFSU2_TR(0x5e4ab4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4ab8:{NFSU2_TR(0x5e4ab8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4ade;}}
}
B5e4aba:L5e4aba:{c.instructions+=9;NFSU2_TR(0x5e4aba);
{u32 ea_=u32(r4(R+20)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4ac0:{NFSU2_TR(0x5e4ac0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4ac4:{NFSU2_TR(0x5e4ac4);
{u32 ea_=u32(r4(R+20)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4aca:{NFSU2_TR(0x5e4aca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4ace:{NFSU2_TR(0x5e4ace);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4ad2:{NFSU2_TR(0x5e4ad2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4ad4:{NFSU2_TR(0x5e4ad4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4ad8:{NFSU2_TR(0x5e4ad8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4adc:{NFSU2_TR(0x5e4adc);
{goto L5e4b00;}
}
B5e4ade:L5e4ade:{c.instructions+=8;NFSU2_TR(0x5e4ade);
{u32 ea_=u32(r4(R+20)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4ae4:{NFSU2_TR(0x5e4ae4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e4ae8:{NFSU2_TR(0x5e4ae8);
{u32 ea_=u32(r4(R+20)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4aee:{NFSU2_TR(0x5e4aee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4af2:{NFSU2_TR(0x5e4af2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e4af6:{NFSU2_TR(0x5e4af6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e4af8:{NFSU2_TR(0x5e4af8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4afc:{NFSU2_TR(0x5e4afc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4b00:L5e4b00:{c.instructions+=4;NFSU2_TR(0x5e4b00);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e4b07:{NFSU2_TR(0x5e4b07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b08:{NFSU2_TR(0x5e4b08);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4b0c:{NFSU2_TR(0x5e4b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4b11ull));
TAIL_STATIC(0x5ded90u,5de);
}
B5e4b11:L5e4b11:{c.instructions+=7;NFSU2_TR(0x5e4b11);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4b15:{NFSU2_TR(0x5e4b15);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4b19:{NFSU2_TR(0x5e4b19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b1a:{NFSU2_TR(0x5e4b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4b1e:{NFSU2_TR(0x5e4b1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b1f:{NFSU2_TR(0x5e4b1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b20:{NFSU2_TR(0x5e4b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4b25ull));
TAIL_STATIC(0x5d5090u,5d5);
}
B5e4b25:L5e4b25:{c.instructions+=9;NFSU2_TR(0x5e4b25);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4b2c:{NFSU2_TR(0x5e4b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4b30:{NFSU2_TR(0x5e4b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4b34:{NFSU2_TR(0x5e4b34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b35:{NFSU2_TR(0x5e4b35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b36:{NFSU2_TR(0x5e4b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4b3a:{NFSU2_TR(0x5e4b3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b3b:{NFSU2_TR(0x5e4b3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b3c:{NFSU2_TR(0x5e4b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4b41ull));
TAIL_STATIC(0x5d52c0u,5d5);
}
B5e4b41:L5e4b41:{c.instructions+=3;NFSU2_TR(0x5e4b41);
{u32 ea_=u32(r4(R+20)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4b47:{NFSU2_TR(0x5e4b47);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4b4b:{NFSU2_TR(0x5e4b4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4b50ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e4b50:L5e4b50:{c.instructions+=5;NFSU2_TR(0x5e4b50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4b54:{NFSU2_TR(0x5e4b54);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e4b58:{NFSU2_TR(0x5e4b58);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5e4b59:{NFSU2_TR(0x5e4b59);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e4b5b:{NFSU2_TR(0x5e4b5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e48deu);}goto L5e48de;}}
}
B5e4b61:L5e4b61:{c.instructions+=2;NFSU2_TR(0x5e4b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4b62:{NFSU2_TR(0x5e4b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4b63:L5e4b63:{c.instructions+=4;NFSU2_TR(0x5e4b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4b64:{NFSU2_TR(0x5e4b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e4b65:{NFSU2_TR(0x5e4b65);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x70ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e4b68:{NFSU2_TR(0x5e4b68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4b70:L5e4b70:{c.instructions+=28;NFSU2_TR(0x5e4b70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b72:{NFSU2_TR(0x5e4b72);
u8 U[4];
w4(U+0,u32(0x7794afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b77:{NFSU2_TR(0x5e4b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4b7d:{NFSU2_TR(0x5e4b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b7e:{NFSU2_TR(0x5e4b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4b85:{NFSU2_TR(0x5e4b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5e4b88:{NFSU2_TR(0x5e4b88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b89:{NFSU2_TR(0x5e4b89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b8a:{NFSU2_TR(0x5e4b8a);
__builtin_memmove((R+20),(R+4),4);
}
B5e4b8c:{NFSU2_TR(0x5e4b8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b8d:{NFSU2_TR(0x5e4b8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4b90:{NFSU2_TR(0x5e4b90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4b91:{NFSU2_TR(0x5e4b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4b95:{NFSU2_TR(0x5e4b95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e4b97:{NFSU2_TR(0x5e4b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4b9a:{NFSU2_TR(0x5e4b9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e4b9d:{NFSU2_TR(0x5e4b9d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e4b9f:{NFSU2_TR(0x5e4b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4ba3:{NFSU2_TR(0x5e4ba3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5e4ba5:{NFSU2_TR(0x5e4ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4ba8:{NFSU2_TR(0x5e4ba8);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4bad:{NFSU2_TR(0x5e4bad);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4bb2:{NFSU2_TR(0x5e4bb2);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4bb7:{NFSU2_TR(0x5e4bb7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4bb9:{NFSU2_TR(0x5e4bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4bbc:{NFSU2_TR(0x5e4bbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4bbd:{NFSU2_TR(0x5e4bbd);
u8 U[5];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4bc2:{NFSU2_TR(0x5e4bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4bc7ull));
TAIL_STATIC(0x75c461u,75c);
}
B5e4bc7:L5e4bc7:{c.instructions+=7;NFSU2_TR(0x5e4bc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4bcb:{NFSU2_TR(0x5e4bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4bce:{NFSU2_TR(0x5e4bce);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4bd3:{NFSU2_TR(0x5e4bd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5e4bd6:{NFSU2_TR(0x5e4bd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4bda:{NFSU2_TR(0x5e4bda);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4bdd:{NFSU2_TR(0x5e4bdd);
w4(R+28,u32(0x18ull));
}
B5e4be2:L5e4be2:{c.instructions+=51;NFSU2_TR(0x5e4be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4be5:{NFSU2_TR(0x5e4be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4be8:{NFSU2_TR(0x5e4be8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4bea:{NFSU2_TR(0x5e4bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4bed:{NFSU2_TR(0x5e4bed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4bef:{NFSU2_TR(0x5e4bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4bf2:{NFSU2_TR(0x5e4bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4bf5:{NFSU2_TR(0x5e4bf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4bf8:{NFSU2_TR(0x5e4bf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4bfa:{NFSU2_TR(0x5e4bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4bfd:{NFSU2_TR(0x5e4bfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4bff:{NFSU2_TR(0x5e4bff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e4c01:{NFSU2_TR(0x5e4c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4c04:{NFSU2_TR(0x5e4c04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4c07:{NFSU2_TR(0x5e4c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4c09:{NFSU2_TR(0x5e4c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c0c:{NFSU2_TR(0x5e4c0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4c0e:{NFSU2_TR(0x5e4c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c11:{NFSU2_TR(0x5e4c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4c14:{NFSU2_TR(0x5e4c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4c17:{NFSU2_TR(0x5e4c17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4c19:{NFSU2_TR(0x5e4c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c1c:{NFSU2_TR(0x5e4c1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4c1e:{NFSU2_TR(0x5e4c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c21:{NFSU2_TR(0x5e4c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4c24:{NFSU2_TR(0x5e4c24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4c27:{NFSU2_TR(0x5e4c27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4c29:{NFSU2_TR(0x5e4c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c2c:{NFSU2_TR(0x5e4c2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4c2e:{NFSU2_TR(0x5e4c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c31:{NFSU2_TR(0x5e4c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4c34:{NFSU2_TR(0x5e4c34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4c37:{NFSU2_TR(0x5e4c37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4c39:{NFSU2_TR(0x5e4c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c3c:{NFSU2_TR(0x5e4c3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4c3e:{NFSU2_TR(0x5e4c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c41:{NFSU2_TR(0x5e4c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4c44:{NFSU2_TR(0x5e4c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4c47:{NFSU2_TR(0x5e4c47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4c49:{NFSU2_TR(0x5e4c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c4c:{NFSU2_TR(0x5e4c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c4f:{NFSU2_TR(0x5e4c4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4c51:{NFSU2_TR(0x5e4c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4c54:{NFSU2_TR(0x5e4c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4c57:{NFSU2_TR(0x5e4c57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4c59:{NFSU2_TR(0x5e4c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c5c:{NFSU2_TR(0x5e4c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c5f:{NFSU2_TR(0x5e4c5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5e4c64:{NFSU2_TR(0x5e4c64);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5e4c65:{NFSU2_TR(0x5e4c65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4c67:{NFSU2_TR(0x5e4c67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4be2u);}goto L5e4be2;}}
}
B5e4c6d:L5e4c6d:{c.instructions+=3;NFSU2_TR(0x5e4c6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e4c70:{NFSU2_TR(0x5e4c70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4c72:{NFSU2_TR(0x5e4c72);
if(r1(R+518)){{goto L5e4cac;}}
}
B5e4c74:L5e4c74:{c.instructions+=6;NFSU2_TR(0x5e4c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4c78:{NFSU2_TR(0x5e4c78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e4c7a:{NFSU2_TR(0x5e4c7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4c7e:{NFSU2_TR(0x5e4c7e);
w4(R+4,u32(0x8ull));
}
B5e4c83:{NFSU2_TR(0x5e4c83);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4c87:{NFSU2_TR(0x5e4c87);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4c89:L5e4c89:{c.instructions+=1;NFSU2_TR(0x5e4c89);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e4c8b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4c89u);}goto L5e4c89;}
}
B5e4c8b:L5e4c8b:{c.instructions+=4;NFSU2_TR(0x5e4c8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4c8c:{NFSU2_TR(0x5e4c8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4c90:{NFSU2_TR(0x5e4c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4c91:{NFSU2_TR(0x5e4c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4c96ull));
TAIL_STATIC(0x43dc00u,43d);
}
B5e4c96:L5e4c96:{c.instructions+=6;NFSU2_TR(0x5e4c96);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4c98:{NFSU2_TR(0x5e4c98);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e4c9c:{NFSU2_TR(0x5e4c9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4c9d:{NFSU2_TR(0x5e4c9d);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4c9f:{NFSU2_TR(0x5e4c9f);
u8 U[4];
w4(U+0,u32(0x7a0420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ca4:{NFSU2_TR(0x5e4ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4ca9ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e4ca9:L5e4ca9:{c.instructions+=1;NFSU2_TR(0x5e4ca9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5e4cac:L5e4cac:{c.instructions+=18;NFSU2_TR(0x5e4cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e4cae:{NFSU2_TR(0x5e4cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e4cb0:{NFSU2_TR(0x5e4cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4cb3:{NFSU2_TR(0x5e4cb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4cb7:{NFSU2_TR(0x5e4cb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e4cb9:{NFSU2_TR(0x5e4cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4cbc:{NFSU2_TR(0x5e4cbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4cc0:{NFSU2_TR(0x5e4cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4cc3:{NFSU2_TR(0x5e4cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4cc6:{NFSU2_TR(0x5e4cc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4cca:{NFSU2_TR(0x5e4cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4ccd:{NFSU2_TR(0x5e4ccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e4ccf:{NFSU2_TR(0x5e4ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4cd2:{NFSU2_TR(0x5e4cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4cd5:{NFSU2_TR(0x5e4cd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e4cd7:{NFSU2_TR(0x5e4cd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e4cda:{NFSU2_TR(0x5e4cda);
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
B5e4cdc:{NFSU2_TR(0x5e4cdc);
if(r1(R+518)){{goto L5e4d00;}}
}
B5e4cde:L5e4cde:{c.instructions+=9;NFSU2_TR(0x5e4cde);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4ce2:{NFSU2_TR(0x5e4ce2);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ce4:{NFSU2_TR(0x5e4ce4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e4ce8:{NFSU2_TR(0x5e4ce8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ce9:{NFSU2_TR(0x5e4ce9);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ceb:{NFSU2_TR(0x5e4ceb);
u8 U[4];
w4(U+0,u32(0x7a0420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4cf0:{NFSU2_TR(0x5e4cf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4cf4:{NFSU2_TR(0x5e4cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4cf8:{NFSU2_TR(0x5e4cf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4cfdull));
TAIL_STATIC(0x4022c0u,402);
}
B5e4cfd:L5e4cfd:{c.instructions+=1;NFSU2_TR(0x5e4cfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e4d00:L5e4d00:{c.instructions+=4;NFSU2_TR(0x5e4d00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e4d06:{NFSU2_TR(0x5e4d06);
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
B5e4d08:{NFSU2_TR(0x5e4d08);
__builtin_memmove((R+28),(R+8),4);
}
B5e4d0a:{NFSU2_TR(0x5e4d0a);
w4(R+4,u32(0x7ull));
}
B5e4d0f:L5e4d0f:{c.instructions+=1;NFSU2_TR(0x5e4d0f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e4d11;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4d0fu);}goto L5e4d0f;}
}
B5e4d11:L5e4d11:{c.instructions+=13;NFSU2_TR(0x5e4d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4d15:{NFSU2_TR(0x5e4d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4d19:{NFSU2_TR(0x5e4d19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d1a:{NFSU2_TR(0x5e4d1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4d1c:{NFSU2_TR(0x5e4d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d1f:{NFSU2_TR(0x5e4d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d22:{NFSU2_TR(0x5e4d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
w4(U+4,u32(0x5dee30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d29:{NFSU2_TR(0x5e4d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w4(U+4,u32(0x5deeb0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d30:{NFSU2_TR(0x5e4d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w4(U+4,u32(0x5deed0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d37:{NFSU2_TR(0x5e4d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w4(U+4,u32(0x5def00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d3e:{NFSU2_TR(0x5e4d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e4d41:{NFSU2_TR(0x5e4d41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d42:{NFSU2_TR(0x5e4d42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4d47ull));
TAIL_STATIC(0x43cb00u,43c);
}
B5e4d47:L5e4d47:{c.instructions+=10;NFSU2_TR(0x5e4d47);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4d4b:{NFSU2_TR(0x5e4d4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e4d4e:{NFSU2_TR(0x5e4d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4d4f:{NFSU2_TR(0x5e4d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4d50:{NFSU2_TR(0x5e4d50);
__builtin_memmove((R+0),(R+20),4);
}
B5e4d52:{NFSU2_TR(0x5e4d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4d53:{NFSU2_TR(0x5e4d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e4d54:{NFSU2_TR(0x5e4d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d5b:{NFSU2_TR(0x5e4d5b);
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
B5e4d5e:{NFSU2_TR(0x5e4d5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4d70:L5e4d70:{c.instructions+=21;NFSU2_TR(0x5e4d70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d72:{NFSU2_TR(0x5e4d72);
u8 U[4];
w4(U+0,u32(0x7794efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d77:{NFSU2_TR(0x5e4d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4d7d:{NFSU2_TR(0x5e4d7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d7e:{NFSU2_TR(0x5e4d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d85:{NFSU2_TR(0x5e4d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5e4d88:{NFSU2_TR(0x5e4d88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d89:{NFSU2_TR(0x5e4d89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d8a:{NFSU2_TR(0x5e4d8a);
__builtin_memmove((R+12),(R+4),4);
}
B5e4d8c:{NFSU2_TR(0x5e4d8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4d8d:{NFSU2_TR(0x5e4d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d91:{NFSU2_TR(0x5e4d91);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4d94:{NFSU2_TR(0x5e4d94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5e4d96:{NFSU2_TR(0x5e4d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4d99:{NFSU2_TR(0x5e4d99);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4d9c:{NFSU2_TR(0x5e4d9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5e4d9e:{NFSU2_TR(0x5e4d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4da1:{NFSU2_TR(0x5e4da1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e4da4:{NFSU2_TR(0x5e4da4);
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
B5e4da6:{NFSU2_TR(0x5e4da6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4dae:{NFSU2_TR(0x5e4dae);
if(r1(R+518)){{goto L5e4dca;}}
}
B5e4db0:L5e4db0:{c.instructions+=7;NFSU2_TR(0x5e4db0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4db2:{NFSU2_TR(0x5e4db2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4db6:{NFSU2_TR(0x5e4db6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4db7:{NFSU2_TR(0x5e4db7);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4db9:{NFSU2_TR(0x5e4db9);
u8 U[4];
w4(U+0,u32(0x7a0420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4dbe:{NFSU2_TR(0x5e4dbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4dc2:{NFSU2_TR(0x5e4dc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4dc7ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e4dc7:L5e4dc7:{c.instructions+=1;NFSU2_TR(0x5e4dc7);
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
B5e4dca:L5e4dca:{c.instructions+=4;NFSU2_TR(0x5e4dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e4dcc:{NFSU2_TR(0x5e4dcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4dce:{NFSU2_TR(0x5e4dce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4dcf:{NFSU2_TR(0x5e4dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4dd4ull));
TAIL_STATIC(0x43cb00u,43c);
}
B5e4dd4:L5e4dd4:{c.instructions+=8;NFSU2_TR(0x5e4dd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e4dd7:{NFSU2_TR(0x5e4dd7);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ddc:{NFSU2_TR(0x5e4ddc);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4de1:{NFSU2_TR(0x5e4de1);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4de3:{NFSU2_TR(0x5e4de3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1cull))));
}
B5e4de6:{NFSU2_TR(0x5e4de6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4de7:{NFSU2_TR(0x5e4de7);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4dec:{NFSU2_TR(0x5e4dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4df1ull));
TAIL_STATIC(0x75c401u,75c);
}
B5e4df1:L5e4df1:{c.instructions+=4;NFSU2_TR(0x5e4df1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e4df3:{NFSU2_TR(0x5e4df3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e4df5:{NFSU2_TR(0x5e4df5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4dfa:{NFSU2_TR(0x5e4dfa);
if(r1(R+518)){{goto L5e4e19;}}
}
B5e4dfc:L5e4dfc:{c.instructions+=1;NFSU2_TR(0x5e4dfc);
__builtin_memmove((R+16),(R+16),4);
}
B5e4e00:L5e4e00:{c.instructions+=6;NFSU2_TR(0x5e4e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e4e02:{NFSU2_TR(0x5e4e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4e05:{NFSU2_TR(0x5e4e05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4e07:{NFSU2_TR(0x5e4e07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e08:{NFSU2_TR(0x5e4e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4e0b:{NFSU2_TR(0x5e4e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4e10ull));
TAIL_STATIC(0x575630u,575);
}
B5e4e10:L5e4e10:{c.instructions+=4;NFSU2_TR(0x5e4e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e4e12:{NFSU2_TR(0x5e4e12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e4e15:{NFSU2_TR(0x5e4e15);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e4e17:{NFSU2_TR(0x5e4e17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4e00u);}goto L5e4e00;}}
}
B5e4e19:L5e4e19:{c.instructions+=4;NFSU2_TR(0x5e4e19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e4e1b:{NFSU2_TR(0x5e4e1b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e4e1d:{NFSU2_TR(0x5e4e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4e25:{NFSU2_TR(0x5e4e25);
if(r1(R+518)){{goto L5e4e40;}}
}
B5e4e27:L5e4e27:{c.instructions+=6;NFSU2_TR(0x5e4e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e4e29:{NFSU2_TR(0x5e4e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4e2c:{NFSU2_TR(0x5e4e2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e4e2e:{NFSU2_TR(0x5e4e2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e2f:{NFSU2_TR(0x5e4e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4e32:{NFSU2_TR(0x5e4e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4e37ull));
TAIL_STATIC(0x575630u,575);
}
B5e4e37:L5e4e37:{c.instructions+=4;NFSU2_TR(0x5e4e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e4e39:{NFSU2_TR(0x5e4e39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e4e3c:{NFSU2_TR(0x5e4e3c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e4e3e:{NFSU2_TR(0x5e4e3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4e27u);}goto L5e4e27;}}
}
B5e4e40:L5e4e40:{c.instructions+=7;NFSU2_TR(0x5e4e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4e44:{NFSU2_TR(0x5e4e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4e45:{NFSU2_TR(0x5e4e45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4e46:{NFSU2_TR(0x5e4e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e4e47:{NFSU2_TR(0x5e4e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4e4e:{NFSU2_TR(0x5e4e4e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e4e51:{NFSU2_TR(0x5e4e51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4e60:L5e4e60:{c.instructions+=4;NFSU2_TR(0x5e4e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4e64:{NFSU2_TR(0x5e4e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e65:{NFSU2_TR(0x5e4e65);
w4(R+4,u32(0x88eb00ull));
}
B5e4e6a:{NFSU2_TR(0x5e4e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4e6full));
TAIL_STATIC(0x5defe0u,5de);
}
B5e4e6f:L5e4e6f:{c.instructions+=1;NFSU2_TR(0x5e4e6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4e70:L5e4e70:{c.instructions+=12;NFSU2_TR(0x5e4e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4e76:{NFSU2_TR(0x5e4e76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e78:{NFSU2_TR(0x5e4e78);
u8 U[4];
w4(U+0,u32(0x779514ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e7d:{NFSU2_TR(0x5e4e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e7e:{NFSU2_TR(0x5e4e7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4e82:{NFSU2_TR(0x5e4e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4e89:{NFSU2_TR(0x5e4e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e8a:{NFSU2_TR(0x5e4e8a);
__builtin_memmove((R+24),(R+4),4);
}
B5e4e8c:{NFSU2_TR(0x5e4e8c);
u8 U[4];
w4(U+0,u32(0x2000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e91:{NFSU2_TR(0x5e4e91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4e92:{NFSU2_TR(0x5e4e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4e98:{NFSU2_TR(0x5e4e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4e9dull));
TAIL_STATIC(0x440820u,440);
}
B5e4e9d:L5e4e9d:{c.instructions+=3;NFSU2_TR(0x5e4e9d);
u8 U[4];
w4(U+0,u32(0xf38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ea2:{NFSU2_TR(0x5e4ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4ea8:{NFSU2_TR(0x5e4ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4eadull));
TAIL_STATIC(0x575620u,575);
}
B5e4ead:L5e4ead:{c.instructions+=5;NFSU2_TR(0x5e4ead);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e4eb0:{NFSU2_TR(0x5e4eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4eb4:{NFSU2_TR(0x5e4eb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4eb6:{NFSU2_TR(0x5e4eb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4ebe:{NFSU2_TR(0x5e4ebe);
if(r1(R+518)){{goto L5e4ede;}}
}
B5e4ec0:L5e4ec0:{c.instructions+=8;NFSU2_TR(0x5e4ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4ec6:{NFSU2_TR(0x5e4ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4ecc:{NFSU2_TR(0x5e4ecc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ece:{NFSU2_TR(0x5e4ece);
u8 U[4];
w4(U+0,u32(0x7a52e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ed3:{NFSU2_TR(0x5e4ed3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ed4:{NFSU2_TR(0x5e4ed4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ed5:{NFSU2_TR(0x5e4ed5);
__builtin_memmove((R+4),(R+0),4);
}
B5e4ed7:{NFSU2_TR(0x5e4ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4edcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e4b70u);}goto L5e4b70;}
}
B5e4edc:L5e4edc:{c.instructions+=1;NFSU2_TR(0x5e4edc);
{goto L5e4ee0;}
}
B5e4ede:L5e4ede:{c.instructions+=1;NFSU2_TR(0x5e4ede);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e4ee0:L5e4ee0:{c.instructions+=7;NFSU2_TR(0x5e4ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4ee4:{NFSU2_TR(0x5e4ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4eea:{NFSU2_TR(0x5e4eea);
s4(0x883dd4,u32(0x0ull));
}
B5e4ef4:{NFSU2_TR(0x5e4ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4efb:{NFSU2_TR(0x5e4efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e4efc:{NFSU2_TR(0x5e4efc);
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
B5e4eff:{NFSU2_TR(0x5e4eff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4f10:L5e4f10:{c.instructions+=4;NFSU2_TR(0x5e4f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4f14:{NFSU2_TR(0x5e4f14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f15:{NFSU2_TR(0x5e4f15);
w4(R+4,u32(0x88eb00ull));
}
B5e4f1a:{NFSU2_TR(0x5e4f1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4f1full));
TAIL_STATIC(0x5df060u,5df);
}
B5e4f1f:L5e4f1f:{c.instructions+=1;NFSU2_TR(0x5e4f1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e4f20:L5e4f20:{c.instructions+=6;NFSU2_TR(0x5e4f20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5e4f23:{NFSU2_TR(0x5e4f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e4f27:{NFSU2_TR(0x5e4f27);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4f2b:{NFSU2_TR(0x5e4f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e4f2d:{NFSU2_TR(0x5e4f2d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e4f2f:{NFSU2_TR(0x5e4f2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e4f53;}}
}
B5e4f31:L5e4f31:{c.instructions+=10;NFSU2_TR(0x5e4f31);
__builtin_memmove((R+8),gp(0x890080),4);
}
B5e4f37:{NFSU2_TR(0x5e4f37);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e4f3b:{NFSU2_TR(0x5e4f3b);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4f3e:{NFSU2_TR(0x5e4f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e4f41:{NFSU2_TR(0x5e4f41);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4f44:{NFSU2_TR(0x5e4f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4f47:{NFSU2_TR(0x5e4f47);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4f4a:{NFSU2_TR(0x5e4f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e4f4d:{NFSU2_TR(0x5e4f4d);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4f50:{NFSU2_TR(0x5e4f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4f53:L5e4f53:{c.instructions+=25;NFSU2_TR(0x5e4f53);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4f56:{NFSU2_TR(0x5e4f56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f57:{NFSU2_TR(0x5e4f57);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4f5a:{NFSU2_TR(0x5e4f5a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f5b:{NFSU2_TR(0x5e4f5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f5c:{NFSU2_TR(0x5e4f5c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e4f5e:{NFSU2_TR(0x5e4f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f5f:{NFSU2_TR(0x5e4f5f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e4f61:{NFSU2_TR(0x5e4f61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e4f64:{NFSU2_TR(0x5e4f64);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e4f66:{NFSU2_TR(0x5e4f66);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e4f68:{NFSU2_TR(0x5e4f68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f6a:{NFSU2_TR(0x5e4f6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e4f6d:{NFSU2_TR(0x5e4f6d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f6f:{NFSU2_TR(0x5e4f6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e4f71:{NFSU2_TR(0x5e4f71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4f72:{NFSU2_TR(0x5e4f72);
w4(R+4,u32(0x88f298ull));
}
B5e4f77:{NFSU2_TR(0x5e4f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e4f7f:{NFSU2_TR(0x5e4f7f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e4f81:{NFSU2_TR(0x5e4f81);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e4f86:{NFSU2_TR(0x5e4f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4f8a:{NFSU2_TR(0x5e4f8a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5e4f8c:{NFSU2_TR(0x5e4f8c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e4f8e:{NFSU2_TR(0x5e4f8e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4f92:{NFSU2_TR(0x5e4f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e4f97ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5e4f97:L5e4f97:{c.instructions+=3;NFSU2_TR(0x5e4f97);
__builtin_memmove((R+24),(R+0),4);
}
B5e4f99:{NFSU2_TR(0x5e4f99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e4f9b:{NFSU2_TR(0x5e4f9b);
if(r1(R+518)){TAIL_STATIC(0x5e50dcu,5e5);}
}
B5e4fa1:L5e4fa1:{c.instructions+=1;NFSU2_TR(0x5e4fa1);
{goto L5e4fb0;}
}
B5e4fa3:L5e4fa3:{c.instructions+=2;NFSU2_TR(0x5e4fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e4fa7:{NFSU2_TR(0x5e4fa7);
{goto L5e4fb0;}
}
B5e4fb0:L5e4fb0:{c.instructions+=5;NFSU2_TR(0x5e4fb0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4fb4:{NFSU2_TR(0x5e4fb4);
{u32 ea_=u32(u32(8016628u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e4fba:{NFSU2_TR(0x5e4fba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e4fbc:{NFSU2_TR(0x5e4fbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e4fbf:{NFSU2_TR(0x5e4fbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4fd1;}}
}
B5e4fc1:L5e4fc1:{c.instructions+=5;NFSU2_TR(0x5e4fc1);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4fc4:{NFSU2_TR(0x5e4fc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e4fc7:{NFSU2_TR(0x5e4fc7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4fcb:{NFSU2_TR(0x5e4fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e4fcf:{NFSU2_TR(0x5e4fcf);
TAIL_STATIC(0x5e5015u,5e5);
}
B5e4fd1:L5e4fd1:{c.instructions+=6;NFSU2_TR(0x5e4fd1);
{u32 ea_=u32(u32(8013732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4fd7:{NFSU2_TR(0x5e4fd7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e4fdb:{NFSU2_TR(0x5e4fdb);
{u32 ea_=u32(u32(8013736u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e4fe1:{NFSU2_TR(0x5e4fe1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e4fe3:{NFSU2_TR(0x5e4fe3);
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
B5e4fe6:{NFSU2_TR(0x5e4fe6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e4fff;}}
}
B5e4fe8:L5e4fe8:{c.instructions+=9;NFSU2_TR(0x5e4fe8);
{u32 ea_=u32(u32(8013736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e4fee:{NFSU2_TR(0x5e4fee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4fef:{NFSU2_TR(0x5e4fef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e4ff3:{NFSU2_TR(0x5e4ff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e4ff7:{NFSU2_TR(0x5e4ff7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e4ffa:{NFSU2_TR(0x5e4ffa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ffb:{NFSU2_TR(0x5e4ffb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ffc:{NFSU2_TR(0x5e4ffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e4ffd:{NFSU2_TR(0x5e4ffd);
TAIL_STATIC(0x5e500du,5e5);
}
B5e4fff:L5e4fff:{c.instructions+=1;NFSU2_TR(0x5e4fff);
__builtin_memmove((R+4),gp(0x7a47a4),4);
TAIL_STATIC(0x5e5005u,5e5);
}
XIT:NFSU2_TR_EXIT(0x5e4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
