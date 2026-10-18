#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4c3(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c4(u8* __restrict R,Cpu& c);
u32 page_4c4(Cpu& c){return body_4c4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c4001:goto L4c4001;
case 0x4c4002:c.instructions+=1;goto B4c4002;
case 0x4c4010:goto L4c4010;
case 0x4c4011:c.instructions+=5;goto B4c4011;
case 0x4c4013:c.instructions+=4;goto B4c4013;
case 0x4c4016:c.instructions+=3;goto B4c4016;
case 0x4c401b:c.instructions+=2;goto B4c401b;
case 0x4c401c:c.instructions+=1;goto B4c401c;
case 0x4c4021:goto L4c4021;
case 0x4c4026:c.instructions+=5;goto B4c4026;
case 0x4c402c:c.instructions+=4;goto B4c402c;
case 0x4c402f:c.instructions+=3;goto B4c402f;
case 0x4c4032:c.instructions+=2;goto B4c4032;
case 0x4c4034:c.instructions+=1;goto B4c4034;
case 0x4c4036:goto L4c4036;
case 0x4c4039:c.instructions+=1;goto B4c4039;
case 0x4c403b:goto L4c403b;
case 0x4c403e:goto L4c403e;
case 0x4c4040:c.instructions+=1;goto B4c4040;
case 0x4c4042:goto L4c4042;
case 0x4c4044:c.instructions+=1;goto B4c4044;
case 0x4c4046:goto L4c4046;
case 0x4c404b:c.instructions+=2;goto B4c404b;
case 0x4c404d:c.instructions+=1;goto B4c404d;
case 0x4c404f:goto L4c404f;
case 0x4c4052:c.instructions+=1;goto B4c4052;
case 0x4c4054:goto L4c4054;
case 0x4c4057:goto L4c4057;
case 0x4c4059:c.instructions+=3;goto B4c4059;
case 0x4c405b:c.instructions+=2;goto B4c405b;
case 0x4c405e:c.instructions+=1;goto B4c405e;
case 0x4c4060:goto L4c4060;
case 0x4c4063:c.instructions+=9;goto B4c4063;
case 0x4c4066:c.instructions+=8;goto B4c4066;
case 0x4c406d:c.instructions+=7;goto B4c406d;
case 0x4c406f:c.instructions+=6;goto B4c406f;
case 0x4c4071:c.instructions+=5;goto B4c4071;
case 0x4c4076:c.instructions+=4;goto B4c4076;
case 0x4c407b:c.instructions+=3;goto B4c407b;
case 0x4c407c:c.instructions+=2;goto B4c407c;
case 0x4c407d:c.instructions+=1;goto B4c407d;
case 0x4c4082:goto L4c4082;
case 0x4c4085:c.instructions+=2;goto B4c4085;
case 0x4c4086:c.instructions+=1;goto B4c4086;
case 0x4c4090:goto L4c4090;
case 0x4c4094:c.instructions+=4;goto B4c4094;
case 0x4c4099:c.instructions+=3;goto B4c4099;
case 0x4c409a:c.instructions+=2;goto B4c409a;
case 0x4c409c:c.instructions+=1;goto B4c409c;
case 0x4c409e:goto L4c409e;
case 0x4c40a3:c.instructions+=1;goto B4c40a3;
case 0x4c40a9:goto L4c40a9;
case 0x4c40ae:c.instructions+=7;goto B4c40ae;
case 0x4c40b1:c.instructions+=6;goto B4c40b1;
case 0x4c40b2:c.instructions+=5;goto B4c40b2;
case 0x4c40b3:c.instructions+=4;goto B4c40b3;
case 0x4c40b9:c.instructions+=3;goto B4c40b9;
case 0x4c40bb:c.instructions+=2;goto B4c40bb;
case 0x4c40bc:c.instructions+=1;goto B4c40bc;
case 0x4c40be:goto L4c40be;
case 0x4c40c1:c.instructions+=1;goto B4c40c1;
case 0x4c40c3:goto L4c40c3;
case 0x4c40c6:goto L4c40c6;
case 0x4c40c8:c.instructions+=2;goto B4c40c8;
case 0x4c40ce:c.instructions+=1;goto B4c40ce;
case 0x4c40d0:goto L4c40d0;
case 0x4c40d2:c.instructions+=1;goto B4c40d2;
case 0x4c40d4:goto L4c40d4;
case 0x4c40d6:c.instructions+=1;goto B4c40d6;
case 0x4c40d8:goto L4c40d8;
case 0x4c40db:c.instructions+=1;goto B4c40db;
case 0x4c40dd:goto L4c40dd;
case 0x4c40e0:goto L4c40e0;
case 0x4c40e2:c.instructions+=3;goto B4c40e2;
case 0x4c40e4:c.instructions+=2;goto B4c40e4;
case 0x4c40e7:c.instructions+=1;goto B4c40e7;
case 0x4c40e9:goto L4c40e9;
case 0x4c40eb:c.instructions+=1;goto B4c40eb;
case 0x4c40ed:goto L4c40ed;
case 0x4c40f0:c.instructions+=1;goto B4c40f0;
case 0x4c40f2:goto L4c40f2;
case 0x4c40f5:goto L4c40f5;
case 0x4c40f7:c.instructions+=1;goto B4c40f7;
case 0x4c40f9:goto L4c40f9;
case 0x4c40fb:c.instructions+=1;goto B4c40fb;
case 0x4c40fd:goto L4c40fd;
case 0x4c40ff:c.instructions+=1;goto B4c40ff;
case 0x4c4101:goto L4c4101;
case 0x4c4104:c.instructions+=1;goto B4c4104;
case 0x4c4106:goto L4c4106;
case 0x4c4109:goto L4c4109;
case 0x4c410b:c.instructions+=3;goto B4c410b;
case 0x4c410d:c.instructions+=2;goto B4c410d;
case 0x4c4110:c.instructions+=1;goto B4c4110;
case 0x4c4112:goto L4c4112;
case 0x4c4115:c.instructions+=9;goto B4c4115;
case 0x4c411c:c.instructions+=8;goto B4c411c;
case 0x4c411e:c.instructions+=7;goto B4c411e;
case 0x4c411f:c.instructions+=6;goto B4c411f;
case 0x4c4122:c.instructions+=5;goto B4c4122;
case 0x4c4125:c.instructions+=4;goto B4c4125;
case 0x4c4126:c.instructions+=3;goto B4c4126;
case 0x4c412d:c.instructions+=2;goto B4c412d;
case 0x4c4131:c.instructions+=1;goto B4c4131;
case 0x4c4132:goto L4c4132;
case 0x4c4134:c.instructions+=3;goto B4c4134;
case 0x4c4135:c.instructions+=2;goto B4c4135;
case 0x4c4137:c.instructions+=1;goto B4c4137;
case 0x4c413a:goto L4c413a;
case 0x4c413c:c.instructions+=2;goto B4c413c;
case 0x4c413e:c.instructions+=1;goto B4c413e;
case 0x4c4141:goto L4c4141;
case 0x4c4142:c.instructions+=1;goto B4c4142;
case 0x4c4149:goto L4c4149;
case 0x4c414a:c.instructions+=12;goto B4c414a;
case 0x4c414b:c.instructions+=11;goto B4c414b;
case 0x4c414c:c.instructions+=10;goto B4c414c;
case 0x4c414d:c.instructions+=9;goto B4c414d;
case 0x4c414e:c.instructions+=8;goto B4c414e;
case 0x4c414f:c.instructions+=7;goto B4c414f;
case 0x4c4150:c.instructions+=6;goto B4c4150;
case 0x4c4151:c.instructions+=5;goto B4c4151;
case 0x4c4153:c.instructions+=4;goto B4c4153;
case 0x4c4156:c.instructions+=3;goto B4c4156;
case 0x4c415b:c.instructions+=2;goto B4c415b;
case 0x4c415c:c.instructions+=1;goto B4c415c;
case 0x4c4161:goto L4c4161;
case 0x4c4166:c.instructions+=5;goto B4c4166;
case 0x4c416c:c.instructions+=4;goto B4c416c;
case 0x4c416f:c.instructions+=3;goto B4c416f;
case 0x4c4172:c.instructions+=2;goto B4c4172;
case 0x4c4174:c.instructions+=1;goto B4c4174;
case 0x4c4176:goto L4c4176;
case 0x4c4179:c.instructions+=1;goto B4c4179;
case 0x4c417b:goto L4c417b;
case 0x4c417e:goto L4c417e;
case 0x4c4180:c.instructions+=1;goto B4c4180;
case 0x4c4182:goto L4c4182;
case 0x4c4184:c.instructions+=1;goto B4c4184;
case 0x4c4186:goto L4c4186;
case 0x4c418b:c.instructions+=2;goto B4c418b;
case 0x4c418d:c.instructions+=1;goto B4c418d;
case 0x4c418f:goto L4c418f;
case 0x4c4192:c.instructions+=1;goto B4c4192;
case 0x4c4194:goto L4c4194;
case 0x4c4197:goto L4c4197;
case 0x4c4199:c.instructions+=3;goto B4c4199;
case 0x4c419b:c.instructions+=2;goto B4c419b;
case 0x4c419e:c.instructions+=1;goto B4c419e;
case 0x4c41a0:goto L4c41a0;
case 0x4c41a3:c.instructions+=9;goto B4c41a3;
case 0x4c41a6:c.instructions+=8;goto B4c41a6;
case 0x4c41ad:c.instructions+=7;goto B4c41ad;
case 0x4c41af:c.instructions+=6;goto B4c41af;
case 0x4c41b1:c.instructions+=5;goto B4c41b1;
case 0x4c41b6:c.instructions+=4;goto B4c41b6;
case 0x4c41bb:c.instructions+=3;goto B4c41bb;
case 0x4c41bc:c.instructions+=2;goto B4c41bc;
case 0x4c41bd:c.instructions+=1;goto B4c41bd;
case 0x4c41c2:goto L4c41c2;
case 0x4c41c5:c.instructions+=2;goto B4c41c5;
case 0x4c41c6:c.instructions+=1;goto B4c41c6;
case 0x4c41d0:goto L4c41d0;
case 0x4c41d4:c.instructions+=4;goto B4c41d4;
case 0x4c41d9:c.instructions+=3;goto B4c41d9;
case 0x4c41da:c.instructions+=2;goto B4c41da;
case 0x4c41dc:c.instructions+=1;goto B4c41dc;
case 0x4c41de:goto L4c41de;
case 0x4c41e3:c.instructions+=1;goto B4c41e3;
case 0x4c41e9:goto L4c41e9;
case 0x4c41ee:c.instructions+=7;goto B4c41ee;
case 0x4c41f1:c.instructions+=6;goto B4c41f1;
case 0x4c41f2:c.instructions+=5;goto B4c41f2;
case 0x4c41f3:c.instructions+=4;goto B4c41f3;
case 0x4c41f9:c.instructions+=3;goto B4c41f9;
case 0x4c41fb:c.instructions+=2;goto B4c41fb;
case 0x4c41fc:c.instructions+=1;goto B4c41fc;
case 0x4c41fe:goto L4c41fe;
case 0x4c4201:c.instructions+=1;goto B4c4201;
case 0x4c4203:goto L4c4203;
case 0x4c4206:goto L4c4206;
case 0x4c4208:c.instructions+=2;goto B4c4208;
case 0x4c420e:c.instructions+=1;goto B4c420e;
case 0x4c4210:goto L4c4210;
case 0x4c4212:c.instructions+=1;goto B4c4212;
case 0x4c4214:goto L4c4214;
case 0x4c4216:c.instructions+=1;goto B4c4216;
case 0x4c4218:goto L4c4218;
case 0x4c421b:c.instructions+=1;goto B4c421b;
case 0x4c421d:goto L4c421d;
case 0x4c4220:goto L4c4220;
case 0x4c4222:c.instructions+=3;goto B4c4222;
case 0x4c4224:c.instructions+=2;goto B4c4224;
case 0x4c4227:c.instructions+=1;goto B4c4227;
case 0x4c4229:goto L4c4229;
case 0x4c422b:c.instructions+=1;goto B4c422b;
case 0x4c422d:goto L4c422d;
case 0x4c4230:c.instructions+=1;goto B4c4230;
case 0x4c4232:goto L4c4232;
case 0x4c4235:goto L4c4235;
case 0x4c4237:c.instructions+=1;goto B4c4237;
case 0x4c4239:goto L4c4239;
case 0x4c423b:c.instructions+=1;goto B4c423b;
case 0x4c423d:goto L4c423d;
case 0x4c423f:c.instructions+=1;goto B4c423f;
case 0x4c4241:goto L4c4241;
case 0x4c4244:c.instructions+=1;goto B4c4244;
case 0x4c4246:goto L4c4246;
case 0x4c4249:goto L4c4249;
case 0x4c424b:c.instructions+=3;goto B4c424b;
case 0x4c424d:c.instructions+=2;goto B4c424d;
case 0x4c4250:c.instructions+=1;goto B4c4250;
case 0x4c4252:goto L4c4252;
case 0x4c4255:c.instructions+=9;goto B4c4255;
case 0x4c425c:c.instructions+=8;goto B4c425c;
case 0x4c425e:c.instructions+=7;goto B4c425e;
case 0x4c425f:c.instructions+=6;goto B4c425f;
case 0x4c4262:c.instructions+=5;goto B4c4262;
case 0x4c4265:c.instructions+=4;goto B4c4265;
case 0x4c4266:c.instructions+=3;goto B4c4266;
case 0x4c426d:c.instructions+=2;goto B4c426d;
case 0x4c4271:c.instructions+=1;goto B4c4271;
case 0x4c4272:goto L4c4272;
case 0x4c4274:c.instructions+=3;goto B4c4274;
case 0x4c4275:c.instructions+=2;goto B4c4275;
case 0x4c4277:c.instructions+=1;goto B4c4277;
case 0x4c427a:goto L4c427a;
case 0x4c427c:c.instructions+=2;goto B4c427c;
case 0x4c427e:c.instructions+=1;goto B4c427e;
case 0x4c4281:goto L4c4281;
case 0x4c4282:c.instructions+=1;goto B4c4282;
case 0x4c4290:goto L4c4290;
case 0x4c4291:c.instructions+=5;goto B4c4291;
case 0x4c4293:c.instructions+=4;goto B4c4293;
case 0x4c4296:c.instructions+=3;goto B4c4296;
case 0x4c429b:c.instructions+=2;goto B4c429b;
case 0x4c429c:c.instructions+=1;goto B4c429c;
case 0x4c42a1:goto L4c42a1;
case 0x4c42a6:c.instructions+=5;goto B4c42a6;
case 0x4c42ac:c.instructions+=4;goto B4c42ac;
case 0x4c42af:c.instructions+=3;goto B4c42af;
case 0x4c42b2:c.instructions+=2;goto B4c42b2;
case 0x4c42b4:c.instructions+=1;goto B4c42b4;
case 0x4c42b6:goto L4c42b6;
case 0x4c42b9:c.instructions+=1;goto B4c42b9;
case 0x4c42bb:goto L4c42bb;
case 0x4c42be:goto L4c42be;
case 0x4c42c0:c.instructions+=1;goto B4c42c0;
case 0x4c42c2:goto L4c42c2;
case 0x4c42c4:c.instructions+=1;goto B4c42c4;
case 0x4c42c6:goto L4c42c6;
case 0x4c42cb:c.instructions+=2;goto B4c42cb;
case 0x4c42cd:c.instructions+=1;goto B4c42cd;
case 0x4c42cf:goto L4c42cf;
case 0x4c42d2:c.instructions+=1;goto B4c42d2;
case 0x4c42d4:goto L4c42d4;
case 0x4c42d7:goto L4c42d7;
case 0x4c42d9:c.instructions+=3;goto B4c42d9;
case 0x4c42db:c.instructions+=2;goto B4c42db;
case 0x4c42de:c.instructions+=1;goto B4c42de;
case 0x4c42e0:goto L4c42e0;
case 0x4c42e3:c.instructions+=9;goto B4c42e3;
case 0x4c42e6:c.instructions+=8;goto B4c42e6;
case 0x4c42ed:c.instructions+=7;goto B4c42ed;
case 0x4c42ef:c.instructions+=6;goto B4c42ef;
case 0x4c42f1:c.instructions+=5;goto B4c42f1;
case 0x4c42f6:c.instructions+=4;goto B4c42f6;
case 0x4c42fb:c.instructions+=3;goto B4c42fb;
case 0x4c42fc:c.instructions+=2;goto B4c42fc;
case 0x4c42fd:c.instructions+=1;goto B4c42fd;
case 0x4c4302:goto L4c4302;
case 0x4c4305:c.instructions+=2;goto B4c4305;
case 0x4c4306:c.instructions+=1;goto B4c4306;
case 0x4c4310:goto L4c4310;
case 0x4c4314:c.instructions+=4;goto B4c4314;
case 0x4c4319:c.instructions+=3;goto B4c4319;
case 0x4c431a:c.instructions+=2;goto B4c431a;
case 0x4c431c:c.instructions+=1;goto B4c431c;
case 0x4c431e:goto L4c431e;
case 0x4c4323:c.instructions+=1;goto B4c4323;
case 0x4c4329:goto L4c4329;
case 0x4c432e:c.instructions+=7;goto B4c432e;
case 0x4c4331:c.instructions+=6;goto B4c4331;
case 0x4c4332:c.instructions+=5;goto B4c4332;
case 0x4c4333:c.instructions+=4;goto B4c4333;
case 0x4c4339:c.instructions+=3;goto B4c4339;
case 0x4c433b:c.instructions+=2;goto B4c433b;
case 0x4c433c:c.instructions+=1;goto B4c433c;
case 0x4c433e:goto L4c433e;
case 0x4c4341:c.instructions+=1;goto B4c4341;
case 0x4c4343:goto L4c4343;
case 0x4c4346:goto L4c4346;
case 0x4c4348:c.instructions+=2;goto B4c4348;
case 0x4c434e:c.instructions+=1;goto B4c434e;
case 0x4c4350:goto L4c4350;
case 0x4c4352:c.instructions+=1;goto B4c4352;
case 0x4c4354:goto L4c4354;
case 0x4c4356:c.instructions+=1;goto B4c4356;
case 0x4c4358:goto L4c4358;
case 0x4c435b:c.instructions+=1;goto B4c435b;
case 0x4c435d:goto L4c435d;
case 0x4c4360:goto L4c4360;
case 0x4c4362:c.instructions+=3;goto B4c4362;
case 0x4c4364:c.instructions+=2;goto B4c4364;
case 0x4c4367:c.instructions+=1;goto B4c4367;
case 0x4c4369:goto L4c4369;
case 0x4c436b:c.instructions+=1;goto B4c436b;
case 0x4c436d:goto L4c436d;
case 0x4c4370:c.instructions+=1;goto B4c4370;
case 0x4c4372:goto L4c4372;
case 0x4c4375:goto L4c4375;
case 0x4c4377:c.instructions+=1;goto B4c4377;
case 0x4c4379:goto L4c4379;
case 0x4c437b:c.instructions+=1;goto B4c437b;
case 0x4c437d:goto L4c437d;
case 0x4c437f:c.instructions+=1;goto B4c437f;
case 0x4c4381:goto L4c4381;
case 0x4c4384:c.instructions+=1;goto B4c4384;
case 0x4c4386:goto L4c4386;
case 0x4c4389:goto L4c4389;
case 0x4c438b:c.instructions+=3;goto B4c438b;
case 0x4c438d:c.instructions+=2;goto B4c438d;
case 0x4c4390:c.instructions+=1;goto B4c4390;
case 0x4c4392:goto L4c4392;
case 0x4c4395:c.instructions+=9;goto B4c4395;
case 0x4c439c:c.instructions+=8;goto B4c439c;
case 0x4c439e:c.instructions+=7;goto B4c439e;
case 0x4c439f:c.instructions+=6;goto B4c439f;
case 0x4c43a2:c.instructions+=5;goto B4c43a2;
case 0x4c43a5:c.instructions+=4;goto B4c43a5;
case 0x4c43a6:c.instructions+=3;goto B4c43a6;
case 0x4c43ad:c.instructions+=2;goto B4c43ad;
case 0x4c43b1:c.instructions+=1;goto B4c43b1;
case 0x4c43b2:goto L4c43b2;
case 0x4c43b4:c.instructions+=3;goto B4c43b4;
case 0x4c43b5:c.instructions+=2;goto B4c43b5;
case 0x4c43b7:c.instructions+=1;goto B4c43b7;
case 0x4c43ba:goto L4c43ba;
case 0x4c43bc:c.instructions+=2;goto B4c43bc;
case 0x4c43be:c.instructions+=1;goto B4c43be;
case 0x4c43c1:goto L4c43c1;
case 0x4c43c2:c.instructions+=1;goto B4c43c2;
case 0x4c43d0:goto L4c43d0;
case 0x4c43d1:c.instructions+=5;goto B4c43d1;
case 0x4c43d3:c.instructions+=4;goto B4c43d3;
case 0x4c43d6:c.instructions+=3;goto B4c43d6;
case 0x4c43db:c.instructions+=2;goto B4c43db;
case 0x4c43dc:c.instructions+=1;goto B4c43dc;
case 0x4c43e1:goto L4c43e1;
case 0x4c43e6:c.instructions+=5;goto B4c43e6;
case 0x4c43ec:c.instructions+=4;goto B4c43ec;
case 0x4c43ef:c.instructions+=3;goto B4c43ef;
case 0x4c43f2:c.instructions+=2;goto B4c43f2;
case 0x4c43f4:c.instructions+=1;goto B4c43f4;
case 0x4c43f6:goto L4c43f6;
case 0x4c43f9:c.instructions+=1;goto B4c43f9;
case 0x4c43fb:goto L4c43fb;
case 0x4c43fe:goto L4c43fe;
case 0x4c4400:c.instructions+=1;goto B4c4400;
case 0x4c4402:goto L4c4402;
case 0x4c4404:c.instructions+=1;goto B4c4404;
case 0x4c4406:goto L4c4406;
case 0x4c440b:c.instructions+=2;goto B4c440b;
case 0x4c440d:c.instructions+=1;goto B4c440d;
case 0x4c440f:goto L4c440f;
case 0x4c4412:c.instructions+=1;goto B4c4412;
case 0x4c4414:goto L4c4414;
case 0x4c4417:goto L4c4417;
case 0x4c4419:c.instructions+=3;goto B4c4419;
case 0x4c441b:c.instructions+=2;goto B4c441b;
case 0x4c441e:c.instructions+=1;goto B4c441e;
case 0x4c4420:goto L4c4420;
case 0x4c4423:c.instructions+=9;goto B4c4423;
case 0x4c4426:c.instructions+=8;goto B4c4426;
case 0x4c442d:c.instructions+=7;goto B4c442d;
case 0x4c442f:c.instructions+=6;goto B4c442f;
case 0x4c4431:c.instructions+=5;goto B4c4431;
case 0x4c4436:c.instructions+=4;goto B4c4436;
case 0x4c443b:c.instructions+=3;goto B4c443b;
case 0x4c443c:c.instructions+=2;goto B4c443c;
case 0x4c443d:c.instructions+=1;goto B4c443d;
case 0x4c4442:goto L4c4442;
case 0x4c4445:c.instructions+=2;goto B4c4445;
case 0x4c4446:c.instructions+=1;goto B4c4446;
case 0x4c4450:goto L4c4450;
case 0x4c4456:c.instructions+=9;goto B4c4456;
case 0x4c4458:c.instructions+=8;goto B4c4458;
case 0x4c445d:c.instructions+=7;goto B4c445d;
case 0x4c445e:c.instructions+=6;goto B4c445e;
case 0x4c445f:c.instructions+=5;goto B4c445f;
case 0x4c4460:c.instructions+=4;goto B4c4460;
case 0x4c4463:c.instructions+=3;goto B4c4463;
case 0x4c4464:c.instructions+=2;goto B4c4464;
case 0x4c4466:c.instructions+=1;goto B4c4466;
case 0x4c4468:goto L4c4468;
case 0x4c446b:c.instructions+=1;goto B4c446b;
case 0x4c446d:goto L4c446d;
case 0x4c4470:goto L4c4470;
case 0x4c4472:c.instructions+=2;goto B4c4472;
case 0x4c4478:c.instructions+=1;goto B4c4478;
case 0x4c447a:goto L4c447a;
case 0x4c447c:c.instructions+=1;goto B4c447c;
case 0x4c447e:goto L4c447e;
case 0x4c4480:c.instructions+=1;goto B4c4480;
case 0x4c4482:goto L4c4482;
case 0x4c4485:c.instructions+=1;goto B4c4485;
case 0x4c4487:goto L4c4487;
case 0x4c448a:goto L4c448a;
case 0x4c448c:c.instructions+=3;goto B4c448c;
case 0x4c448e:c.instructions+=2;goto B4c448e;
case 0x4c4491:c.instructions+=1;goto B4c4491;
case 0x4c4493:goto L4c4493;
case 0x4c4497:c.instructions+=4;goto B4c4497;
case 0x4c449d:c.instructions+=3;goto B4c449d;
case 0x4c44a0:c.instructions+=2;goto B4c44a0;
case 0x4c44a8:c.instructions+=1;goto B4c44a8;
case 0x4c44aa:goto L4c44aa;
case 0x4c44ab:c.instructions+=1;goto B4c44ab;
case 0x4c44ad:goto L4c44ad;
case 0x4c44b2:c.instructions+=1;goto B4c44b2;
case 0x4c44b4:goto L4c44b4;
case 0x4c44ba:c.instructions+=1;goto B4c44ba;
case 0x4c44bc:goto L4c44bc;
case 0x4c44bd:c.instructions+=2;goto B4c44bd;
case 0x4c44c0:c.instructions+=1;goto B4c44c0;
case 0x4c44c2:goto L4c44c2;
case 0x4c44c4:goto L4c44c4;
case 0x4c44c6:c.instructions+=1;goto B4c44c6;
case 0x4c44c8:goto L4c44c8;
case 0x4c44cb:c.instructions+=1;goto B4c44cb;
case 0x4c44cd:goto L4c44cd;
case 0x4c44d0:goto L4c44d0;
case 0x4c44d2:c.instructions+=1;goto B4c44d2;
case 0x4c44d4:goto L4c44d4;
case 0x4c44d6:c.instructions+=1;goto B4c44d6;
case 0x4c44d8:goto L4c44d8;
case 0x4c44da:c.instructions+=1;goto B4c44da;
case 0x4c44dc:goto L4c44dc;
case 0x4c44df:c.instructions+=1;goto B4c44df;
case 0x4c44e1:goto L4c44e1;
case 0x4c44e4:goto L4c44e4;
case 0x4c44e6:c.instructions+=3;goto B4c44e6;
case 0x4c44e8:c.instructions+=2;goto B4c44e8;
case 0x4c44eb:c.instructions+=1;goto B4c44eb;
case 0x4c44ed:goto L4c44ed;
case 0x4c44f0:c.instructions+=5;goto B4c44f0;
case 0x4c44f7:c.instructions+=4;goto B4c44f7;
case 0x4c44f9:c.instructions+=3;goto B4c44f9;
case 0x4c44fa:c.instructions+=2;goto B4c44fa;
case 0x4c44fc:c.instructions+=1;goto B4c44fc;
case 0x4c44ff:goto L4c44ff;
case 0x4c4501:c.instructions+=2;goto B4c4501;
case 0x4c4503:c.instructions+=1;goto B4c4503;
case 0x4c4506:goto L4c4506;
case 0x4c4507:c.instructions+=4;goto B4c4507;
case 0x4c4508:c.instructions+=3;goto B4c4508;
case 0x4c4509:c.instructions+=2;goto B4c4509;
case 0x4c450a:c.instructions+=1;goto B4c450a;
case 0x4c4510:goto L4c4510;
case 0x4c4511:c.instructions+=6;goto B4c4511;
case 0x4c4512:c.instructions+=5;goto B4c4512;
case 0x4c4514:c.instructions+=4;goto B4c4514;
case 0x4c4517:c.instructions+=3;goto B4c4517;
case 0x4c451c:c.instructions+=2;goto B4c451c;
case 0x4c451d:c.instructions+=1;goto B4c451d;
case 0x4c4522:goto L4c4522;
case 0x4c4527:c.instructions+=6;goto B4c4527;
case 0x4c452d:c.instructions+=5;goto B4c452d;
case 0x4c4530:c.instructions+=4;goto B4c4530;
case 0x4c4533:c.instructions+=3;goto B4c4533;
case 0x4c4535:c.instructions+=2;goto B4c4535;
case 0x4c4537:c.instructions+=1;goto B4c4537;
case 0x4c4539:goto L4c4539;
case 0x4c453c:c.instructions+=1;goto B4c453c;
case 0x4c453e:goto L4c453e;
case 0x4c4541:goto L4c4541;
case 0x4c4543:c.instructions+=1;goto B4c4543;
case 0x4c4545:goto L4c4545;
case 0x4c4547:c.instructions+=1;goto B4c4547;
case 0x4c4549:goto L4c4549;
case 0x4c454e:c.instructions+=2;goto B4c454e;
case 0x4c4550:c.instructions+=1;goto B4c4550;
case 0x4c4552:goto L4c4552;
case 0x4c4555:c.instructions+=1;goto B4c4555;
case 0x4c4557:goto L4c4557;
case 0x4c455a:goto L4c455a;
case 0x4c455c:c.instructions+=3;goto B4c455c;
case 0x4c455e:c.instructions+=2;goto B4c455e;
case 0x4c4561:c.instructions+=1;goto B4c4561;
case 0x4c4563:goto L4c4563;
case 0x4c4566:c.instructions+=3;goto B4c4566;
case 0x4c456e:c.instructions+=2;goto B4c456e;
case 0x4c4571:c.instructions+=1;goto B4c4571;
case 0x4c4573:goto L4c4573;
case 0x4c457a:goto L4c457a;
case 0x4c457d:c.instructions+=4;goto B4c457d;
case 0x4c4582:c.instructions+=3;goto B4c4582;
case 0x4c4583:c.instructions+=2;goto B4c4583;
case 0x4c4584:c.instructions+=1;goto B4c4584;
case 0x4c4589:goto L4c4589;
case 0x4c458c:c.instructions+=3;goto B4c458c;
case 0x4c458d:c.instructions+=2;goto B4c458d;
case 0x4c458e:c.instructions+=1;goto B4c458e;
case 0x4c458f:goto L4c458f;
case 0x4c4592:c.instructions+=4;goto B4c4592;
case 0x4c4597:c.instructions+=3;goto B4c4597;
case 0x4c4598:c.instructions+=2;goto B4c4598;
case 0x4c4599:c.instructions+=1;goto B4c4599;
case 0x4c459e:goto L4c459e;
case 0x4c45a1:c.instructions+=3;goto B4c45a1;
case 0x4c45a2:c.instructions+=2;goto B4c45a2;
case 0x4c45a3:c.instructions+=1;goto B4c45a3;
case 0x4c45a4:goto L4c45a4;
case 0x4c45a7:c.instructions+=4;goto B4c45a7;
case 0x4c45ac:c.instructions+=3;goto B4c45ac;
case 0x4c45ad:c.instructions+=2;goto B4c45ad;
case 0x4c45ae:c.instructions+=1;goto B4c45ae;
case 0x4c45b3:goto L4c45b3;
case 0x4c45b6:c.instructions+=3;goto B4c45b6;
case 0x4c45b7:c.instructions+=2;goto B4c45b7;
case 0x4c45b8:c.instructions+=1;goto B4c45b8;
case 0x4c45b9:goto L4c45b9;
case 0x4c45bc:c.instructions+=4;goto B4c45bc;
case 0x4c45c1:c.instructions+=3;goto B4c45c1;
case 0x4c45c2:c.instructions+=2;goto B4c45c2;
case 0x4c45c3:c.instructions+=1;goto B4c45c3;
case 0x4c45c8:goto L4c45c8;
case 0x4c45cb:c.instructions+=3;goto B4c45cb;
case 0x4c45cc:c.instructions+=2;goto B4c45cc;
case 0x4c45cd:c.instructions+=1;goto B4c45cd;
case 0x4c45ce:goto L4c45ce;
case 0x4c45d3:goto L4c45d3;
case 0x4c45d6:c.instructions+=3;goto B4c45d6;
case 0x4c45d7:c.instructions+=2;goto B4c45d7;
case 0x4c45d8:c.instructions+=1;goto B4c45d8;
case 0x4c45dd:goto L4c45dd;
case 0x4c45e0:c.instructions+=3;goto B4c45e0;
case 0x4c45e1:c.instructions+=2;goto B4c45e1;
case 0x4c45e2:c.instructions+=1;goto B4c45e2;
case 0x4c4600:goto L4c4600;
case 0x4c4604:c.instructions+=4;goto B4c4604;
case 0x4c4609:c.instructions+=3;goto B4c4609;
case 0x4c460a:c.instructions+=2;goto B4c460a;
case 0x4c460c:c.instructions+=1;goto B4c460c;
case 0x4c460e:goto L4c460e;
case 0x4c4613:c.instructions+=1;goto B4c4613;
case 0x4c4619:goto L4c4619;
case 0x4c461e:c.instructions+=7;goto B4c461e;
case 0x4c4621:c.instructions+=6;goto B4c4621;
case 0x4c4622:c.instructions+=5;goto B4c4622;
case 0x4c4623:c.instructions+=4;goto B4c4623;
case 0x4c4629:c.instructions+=3;goto B4c4629;
case 0x4c462b:c.instructions+=2;goto B4c462b;
case 0x4c462c:c.instructions+=1;goto B4c462c;
case 0x4c462e:goto L4c462e;
case 0x4c4631:c.instructions+=1;goto B4c4631;
case 0x4c4633:goto L4c4633;
case 0x4c4636:goto L4c4636;
case 0x4c4638:c.instructions+=2;goto B4c4638;
case 0x4c463e:c.instructions+=1;goto B4c463e;
case 0x4c4640:goto L4c4640;
case 0x4c4642:c.instructions+=1;goto B4c4642;
case 0x4c4644:goto L4c4644;
case 0x4c4646:c.instructions+=1;goto B4c4646;
case 0x4c4648:goto L4c4648;
case 0x4c464b:c.instructions+=1;goto B4c464b;
case 0x4c464d:goto L4c464d;
case 0x4c4650:goto L4c4650;
case 0x4c4652:c.instructions+=3;goto B4c4652;
case 0x4c4654:c.instructions+=2;goto B4c4654;
case 0x4c4657:c.instructions+=1;goto B4c4657;
case 0x4c4659:goto L4c4659;
case 0x4c465b:c.instructions+=1;goto B4c465b;
case 0x4c465d:goto L4c465d;
case 0x4c4660:c.instructions+=1;goto B4c4660;
case 0x4c4662:goto L4c4662;
case 0x4c4665:goto L4c4665;
case 0x4c4667:c.instructions+=1;goto B4c4667;
case 0x4c4669:goto L4c4669;
case 0x4c466b:c.instructions+=1;goto B4c466b;
case 0x4c466d:goto L4c466d;
case 0x4c466f:c.instructions+=1;goto B4c466f;
case 0x4c4671:goto L4c4671;
case 0x4c4674:c.instructions+=1;goto B4c4674;
case 0x4c4676:goto L4c4676;
case 0x4c4679:goto L4c4679;
case 0x4c467b:c.instructions+=3;goto B4c467b;
case 0x4c467d:c.instructions+=2;goto B4c467d;
case 0x4c4680:c.instructions+=1;goto B4c4680;
case 0x4c4682:goto L4c4682;
case 0x4c4685:c.instructions+=9;goto B4c4685;
case 0x4c468c:c.instructions+=8;goto B4c468c;
case 0x4c468e:c.instructions+=7;goto B4c468e;
case 0x4c468f:c.instructions+=6;goto B4c468f;
case 0x4c4692:c.instructions+=5;goto B4c4692;
case 0x4c4695:c.instructions+=4;goto B4c4695;
case 0x4c4696:c.instructions+=3;goto B4c4696;
case 0x4c469d:c.instructions+=2;goto B4c469d;
case 0x4c46a1:c.instructions+=1;goto B4c46a1;
case 0x4c46a2:goto L4c46a2;
case 0x4c46a4:c.instructions+=3;goto B4c46a4;
case 0x4c46a5:c.instructions+=2;goto B4c46a5;
case 0x4c46a7:c.instructions+=1;goto B4c46a7;
case 0x4c46aa:goto L4c46aa;
case 0x4c46ac:c.instructions+=2;goto B4c46ac;
case 0x4c46ae:c.instructions+=1;goto B4c46ae;
case 0x4c46b1:goto L4c46b1;
case 0x4c46b2:c.instructions+=1;goto B4c46b2;
case 0x4c46c0:goto L4c46c0;
case 0x4c46c1:c.instructions+=5;goto B4c46c1;
case 0x4c46c3:c.instructions+=4;goto B4c46c3;
case 0x4c46c6:c.instructions+=3;goto B4c46c6;
case 0x4c46cb:c.instructions+=2;goto B4c46cb;
case 0x4c46cc:c.instructions+=1;goto B4c46cc;
case 0x4c46d1:goto L4c46d1;
case 0x4c46d6:c.instructions+=5;goto B4c46d6;
case 0x4c46dc:c.instructions+=4;goto B4c46dc;
case 0x4c46df:c.instructions+=3;goto B4c46df;
case 0x4c46e2:c.instructions+=2;goto B4c46e2;
case 0x4c46e4:c.instructions+=1;goto B4c46e4;
case 0x4c46e6:goto L4c46e6;
case 0x4c46e9:c.instructions+=1;goto B4c46e9;
case 0x4c46eb:goto L4c46eb;
case 0x4c46ee:goto L4c46ee;
case 0x4c46f0:c.instructions+=1;goto B4c46f0;
case 0x4c46f2:goto L4c46f2;
case 0x4c46f4:c.instructions+=1;goto B4c46f4;
case 0x4c46f6:goto L4c46f6;
case 0x4c46fb:c.instructions+=2;goto B4c46fb;
case 0x4c46fd:c.instructions+=1;goto B4c46fd;
case 0x4c46ff:goto L4c46ff;
case 0x4c4702:c.instructions+=1;goto B4c4702;
case 0x4c4704:goto L4c4704;
case 0x4c4707:goto L4c4707;
case 0x4c4709:c.instructions+=3;goto B4c4709;
case 0x4c470b:c.instructions+=2;goto B4c470b;
case 0x4c470e:c.instructions+=1;goto B4c470e;
case 0x4c4710:goto L4c4710;
case 0x4c4713:c.instructions+=9;goto B4c4713;
case 0x4c4716:c.instructions+=8;goto B4c4716;
case 0x4c471d:c.instructions+=7;goto B4c471d;
case 0x4c471f:c.instructions+=6;goto B4c471f;
case 0x4c4721:c.instructions+=5;goto B4c4721;
case 0x4c4726:c.instructions+=4;goto B4c4726;
case 0x4c472b:c.instructions+=3;goto B4c472b;
case 0x4c472c:c.instructions+=2;goto B4c472c;
case 0x4c472d:c.instructions+=1;goto B4c472d;
case 0x4c4732:goto L4c4732;
case 0x4c4735:c.instructions+=2;goto B4c4735;
case 0x4c4736:c.instructions+=1;goto B4c4736;
case 0x4c4740:goto L4c4740;
case 0x4c4746:c.instructions+=13;goto B4c4746;
case 0x4c4748:c.instructions+=12;goto B4c4748;
case 0x4c474d:c.instructions+=11;goto B4c474d;
case 0x4c474e:c.instructions+=10;goto B4c474e;
case 0x4c4755:c.instructions+=9;goto B4c4755;
case 0x4c4758:c.instructions+=8;goto B4c4758;
case 0x4c4759:c.instructions+=7;goto B4c4759;
case 0x4c475a:c.instructions+=6;goto B4c475a;
case 0x4c475b:c.instructions+=5;goto B4c475b;
case 0x4c475d:c.instructions+=4;goto B4c475d;
case 0x4c4760:c.instructions+=3;goto B4c4760;
case 0x4c4765:c.instructions+=2;goto B4c4765;
case 0x4c476a:c.instructions+=1;goto B4c476a;
case 0x4c476f:goto L4c476f;
case 0x4c4770:c.instructions+=2;goto B4c4770;
case 0x4c4771:c.instructions+=1;goto B4c4771;
case 0x4c4776:goto L4c4776;
case 0x4c4779:c.instructions+=2;goto B4c4779;
case 0x4c477a:c.instructions+=1;goto B4c477a;
case 0x4c477f:goto L4c477f;
case 0x4c4782:c.instructions+=4;goto B4c4782;
case 0x4c4785:c.instructions+=3;goto B4c4785;
case 0x4c478a:c.instructions+=2;goto B4c478a;
case 0x4c478f:c.instructions+=1;goto B4c478f;
case 0x4c4794:goto L4c4794;
case 0x4c4795:c.instructions+=2;goto B4c4795;
case 0x4c4796:c.instructions+=1;goto B4c4796;
case 0x4c479b:goto L4c479b;
case 0x4c479e:c.instructions+=2;goto B4c479e;
case 0x4c479f:c.instructions+=1;goto B4c479f;
case 0x4c47a4:goto L4c47a4;
case 0x4c47a7:c.instructions+=4;goto B4c47a7;
case 0x4c47aa:c.instructions+=3;goto B4c47aa;
case 0x4c47af:c.instructions+=2;goto B4c47af;
case 0x4c47b4:c.instructions+=1;goto B4c47b4;
case 0x4c47b9:goto L4c47b9;
case 0x4c47ba:c.instructions+=2;goto B4c47ba;
case 0x4c47bb:c.instructions+=1;goto B4c47bb;
case 0x4c47c0:goto L4c47c0;
case 0x4c47c3:c.instructions+=2;goto B4c47c3;
case 0x4c47c4:c.instructions+=1;goto B4c47c4;
case 0x4c47c9:goto L4c47c9;
case 0x4c47cc:c.instructions+=4;goto B4c47cc;
case 0x4c47cf:c.instructions+=3;goto B4c47cf;
case 0x4c47d4:c.instructions+=2;goto B4c47d4;
case 0x4c47d9:c.instructions+=1;goto B4c47d9;
case 0x4c47de:goto L4c47de;
case 0x4c47df:c.instructions+=2;goto B4c47df;
case 0x4c47e0:c.instructions+=1;goto B4c47e0;
case 0x4c47e5:goto L4c47e5;
case 0x4c47e8:c.instructions+=2;goto B4c47e8;
case 0x4c47e9:c.instructions+=1;goto B4c47e9;
case 0x4c47ee:goto L4c47ee;
case 0x4c47f3:c.instructions+=4;goto B4c47f3;
case 0x4c47f6:c.instructions+=3;goto B4c47f6;
case 0x4c47f9:c.instructions+=2;goto B4c47f9;
case 0x4c47fb:c.instructions+=1;goto B4c47fb;
case 0x4c47fd:goto L4c47fd;
case 0x4c4802:c.instructions+=2;goto B4c4802;
case 0x4c4804:c.instructions+=1;goto B4c4804;
case 0x4c4806:goto L4c4806;
case 0x4c4808:c.instructions+=1;goto B4c4808;
case 0x4c480d:goto L4c480d;
case 0x4c480f:c.instructions+=5;goto B4c480f;
case 0x4c4812:c.instructions+=4;goto B4c4812;
case 0x4c4816:c.instructions+=3;goto B4c4816;
case 0x4c4818:c.instructions+=2;goto B4c4818;
case 0x4c4820:c.instructions+=1;goto B4c4820;
case 0x4c4822:goto L4c4822;
case 0x4c4824:c.instructions+=10;goto B4c4824;
case 0x4c482a:c.instructions+=9;goto B4c482a;
case 0x4c482b:c.instructions+=8;goto B4c482b;
case 0x4c4831:c.instructions+=7;goto B4c4831;
case 0x4c4832:c.instructions+=6;goto B4c4832;
case 0x4c4838:c.instructions+=5;goto B4c4838;
case 0x4c4839:c.instructions+=4;goto B4c4839;
case 0x4c483f:c.instructions+=3;goto B4c483f;
case 0x4c4840:c.instructions+=2;goto B4c4840;
case 0x4c4842:c.instructions+=1;goto B4c4842;
case 0x4c4847:goto L4c4847;
case 0x4c484d:c.instructions+=1;goto B4c484d;
case 0x4c484f:goto L4c484f;
case 0x4c4851:goto L4c4851;
case 0x4c4853:c.instructions+=4;goto B4c4853;
case 0x4c4854:c.instructions+=3;goto B4c4854;
case 0x4c4856:c.instructions+=2;goto B4c4856;
case 0x4c485a:c.instructions+=1;goto B4c485a;
case 0x4c485f:goto L4c485f;
case 0x4c4861:c.instructions+=1;goto B4c4861;
case 0x4c4866:goto L4c4866;
case 0x4c4868:c.instructions+=5;goto B4c4868;
case 0x4c486b:c.instructions+=4;goto B4c486b;
case 0x4c486f:c.instructions+=3;goto B4c486f;
case 0x4c4871:c.instructions+=2;goto B4c4871;
case 0x4c4879:c.instructions+=1;goto B4c4879;
case 0x4c487b:goto L4c487b;
case 0x4c487d:c.instructions+=10;goto B4c487d;
case 0x4c4883:c.instructions+=9;goto B4c4883;
case 0x4c4884:c.instructions+=8;goto B4c4884;
case 0x4c488a:c.instructions+=7;goto B4c488a;
case 0x4c488b:c.instructions+=6;goto B4c488b;
case 0x4c4891:c.instructions+=5;goto B4c4891;
case 0x4c4892:c.instructions+=4;goto B4c4892;
case 0x4c4898:c.instructions+=3;goto B4c4898;
case 0x4c4899:c.instructions+=2;goto B4c4899;
case 0x4c489b:c.instructions+=1;goto B4c489b;
case 0x4c48a0:goto L4c48a0;
case 0x4c48a6:c.instructions+=2;goto B4c48a6;
case 0x4c48a8:c.instructions+=1;goto B4c48a8;
case 0x4c48aa:goto L4c48aa;
case 0x4c48ac:goto L4c48ac;
case 0x4c48ae:c.instructions+=5;goto B4c48ae;
case 0x4c48af:c.instructions+=4;goto B4c48af;
case 0x4c48b1:c.instructions+=3;goto B4c48b1;
case 0x4c48b5:c.instructions+=2;goto B4c48b5;
case 0x4c48bb:c.instructions+=1;goto B4c48bb;
case 0x4c48c0:goto L4c48c0;
case 0x4c48c2:c.instructions+=1;goto B4c48c2;
case 0x4c48c7:goto L4c48c7;
case 0x4c48c9:c.instructions+=5;goto B4c48c9;
case 0x4c48cc:c.instructions+=4;goto B4c48cc;
case 0x4c48d0:c.instructions+=3;goto B4c48d0;
case 0x4c48d2:c.instructions+=2;goto B4c48d2;
case 0x4c48da:c.instructions+=1;goto B4c48da;
case 0x4c48dc:goto L4c48dc;
case 0x4c48de:c.instructions+=10;goto B4c48de;
case 0x4c48e4:c.instructions+=9;goto B4c48e4;
case 0x4c48e5:c.instructions+=8;goto B4c48e5;
case 0x4c48eb:c.instructions+=7;goto B4c48eb;
case 0x4c48ec:c.instructions+=6;goto B4c48ec;
case 0x4c48f2:c.instructions+=5;goto B4c48f2;
case 0x4c48f3:c.instructions+=4;goto B4c48f3;
case 0x4c48f9:c.instructions+=3;goto B4c48f9;
case 0x4c48fa:c.instructions+=2;goto B4c48fa;
case 0x4c48fc:c.instructions+=1;goto B4c48fc;
case 0x4c4901:goto L4c4901;
case 0x4c4907:c.instructions+=1;goto B4c4907;
case 0x4c4909:goto L4c4909;
case 0x4c490b:goto L4c490b;
case 0x4c490d:c.instructions+=4;goto B4c490d;
case 0x4c490e:c.instructions+=3;goto B4c490e;
case 0x4c4910:c.instructions+=2;goto B4c4910;
case 0x4c4914:c.instructions+=1;goto B4c4914;
case 0x4c4919:goto L4c4919;
case 0x4c491b:c.instructions+=1;goto B4c491b;
case 0x4c4920:goto L4c4920;
case 0x4c4922:c.instructions+=5;goto B4c4922;
case 0x4c4925:c.instructions+=4;goto B4c4925;
case 0x4c4929:c.instructions+=3;goto B4c4929;
case 0x4c492b:c.instructions+=2;goto B4c492b;
case 0x4c4933:c.instructions+=1;goto B4c4933;
case 0x4c4935:goto L4c4935;
case 0x4c4936:c.instructions+=1;goto B4c4936;
case 0x4c493b:goto L4c493b;
case 0x4c493f:c.instructions+=1;goto B4c493f;
case 0x4c4944:goto L4c4944;
case 0x4c4946:c.instructions+=12;goto B4c4946;
case 0x4c494a:c.instructions+=11;goto B4c494a;
case 0x4c494b:c.instructions+=10;goto B4c494b;
case 0x4c4951:c.instructions+=9;goto B4c4951;
case 0x4c4952:c.instructions+=8;goto B4c4952;
case 0x4c4958:c.instructions+=7;goto B4c4958;
case 0x4c4959:c.instructions+=6;goto B4c4959;
case 0x4c495f:c.instructions+=5;goto B4c495f;
case 0x4c4960:c.instructions+=4;goto B4c4960;
case 0x4c4966:c.instructions+=3;goto B4c4966;
case 0x4c4967:c.instructions+=2;goto B4c4967;
case 0x4c4969:c.instructions+=1;goto B4c4969;
case 0x4c496e:goto L4c496e;
case 0x4c4971:c.instructions+=3;goto B4c4971;
case 0x4c4977:c.instructions+=2;goto B4c4977;
case 0x4c4978:c.instructions+=1;goto B4c4978;
case 0x4c497a:goto L4c497a;
case 0x4c497c:goto L4c497c;
case 0x4c497e:c.instructions+=4;goto B4c497e;
case 0x4c497f:c.instructions+=3;goto B4c497f;
case 0x4c4981:c.instructions+=2;goto B4c4981;
case 0x4c4985:c.instructions+=1;goto B4c4985;
case 0x4c498a:goto L4c498a;
case 0x4c498c:c.instructions+=2;goto B4c498c;
case 0x4c4992:c.instructions+=1;goto B4c4992;
case 0x4c4997:goto L4c4997;
case 0x4c4999:c.instructions+=5;goto B4c4999;
case 0x4c499c:c.instructions+=4;goto B4c499c;
case 0x4c49a0:c.instructions+=3;goto B4c49a0;
case 0x4c49a2:c.instructions+=2;goto B4c49a2;
case 0x4c49aa:c.instructions+=1;goto B4c49aa;
case 0x4c49ac:goto L4c49ac;
case 0x4c49ae:c.instructions+=10;goto B4c49ae;
case 0x4c49b4:c.instructions+=9;goto B4c49b4;
case 0x4c49b5:c.instructions+=8;goto B4c49b5;
case 0x4c49bb:c.instructions+=7;goto B4c49bb;
case 0x4c49bc:c.instructions+=6;goto B4c49bc;
case 0x4c49c2:c.instructions+=5;goto B4c49c2;
case 0x4c49c3:c.instructions+=4;goto B4c49c3;
case 0x4c49c9:c.instructions+=3;goto B4c49c9;
case 0x4c49ca:c.instructions+=2;goto B4c49ca;
case 0x4c49cc:c.instructions+=1;goto B4c49cc;
case 0x4c49d1:goto L4c49d1;
case 0x4c49d7:c.instructions+=1;goto B4c49d7;
case 0x4c49d9:goto L4c49d9;
case 0x4c49db:goto L4c49db;
case 0x4c49dd:c.instructions+=4;goto B4c49dd;
case 0x4c49de:c.instructions+=3;goto B4c49de;
case 0x4c49e0:c.instructions+=2;goto B4c49e0;
case 0x4c49e4:c.instructions+=1;goto B4c49e4;
case 0x4c49e9:goto L4c49e9;
case 0x4c49ee:c.instructions+=2;goto B4c49ee;
case 0x4c49f0:c.instructions+=1;goto B4c49f0;
case 0x4c49f6:goto L4c49f6;
case 0x4c49f8:c.instructions+=1;goto B4c49f8;
case 0x4c49fd:goto L4c49fd;
case 0x4c49ff:c.instructions+=5;goto B4c49ff;
case 0x4c4a02:c.instructions+=4;goto B4c4a02;
case 0x4c4a06:c.instructions+=3;goto B4c4a06;
case 0x4c4a08:c.instructions+=2;goto B4c4a08;
case 0x4c4a10:c.instructions+=1;goto B4c4a10;
case 0x4c4a12:goto L4c4a12;
case 0x4c4a14:c.instructions+=10;goto B4c4a14;
case 0x4c4a1a:c.instructions+=9;goto B4c4a1a;
case 0x4c4a1b:c.instructions+=8;goto B4c4a1b;
case 0x4c4a21:c.instructions+=7;goto B4c4a21;
case 0x4c4a22:c.instructions+=6;goto B4c4a22;
case 0x4c4a28:c.instructions+=5;goto B4c4a28;
case 0x4c4a29:c.instructions+=4;goto B4c4a29;
case 0x4c4a2f:c.instructions+=3;goto B4c4a2f;
case 0x4c4a30:c.instructions+=2;goto B4c4a30;
case 0x4c4a32:c.instructions+=1;goto B4c4a32;
case 0x4c4a37:goto L4c4a37;
case 0x4c4a3d:c.instructions+=1;goto B4c4a3d;
case 0x4c4a3f:goto L4c4a3f;
case 0x4c4a41:goto L4c4a41;
case 0x4c4a43:c.instructions+=4;goto B4c4a43;
case 0x4c4a44:c.instructions+=3;goto B4c4a44;
case 0x4c4a46:c.instructions+=2;goto B4c4a46;
case 0x4c4a4a:c.instructions+=1;goto B4c4a4a;
case 0x4c4a4f:goto L4c4a4f;
case 0x4c4a51:c.instructions+=1;goto B4c4a51;
case 0x4c4a56:goto L4c4a56;
case 0x4c4a58:c.instructions+=5;goto B4c4a58;
case 0x4c4a5b:c.instructions+=4;goto B4c4a5b;
case 0x4c4a5f:c.instructions+=3;goto B4c4a5f;
case 0x4c4a61:c.instructions+=2;goto B4c4a61;
case 0x4c4a69:c.instructions+=1;goto B4c4a69;
case 0x4c4a6b:goto L4c4a6b;
case 0x4c4a6d:c.instructions+=10;goto B4c4a6d;
case 0x4c4a73:c.instructions+=9;goto B4c4a73;
case 0x4c4a74:c.instructions+=8;goto B4c4a74;
case 0x4c4a7a:c.instructions+=7;goto B4c4a7a;
case 0x4c4a7b:c.instructions+=6;goto B4c4a7b;
case 0x4c4a81:c.instructions+=5;goto B4c4a81;
case 0x4c4a82:c.instructions+=4;goto B4c4a82;
case 0x4c4a88:c.instructions+=3;goto B4c4a88;
case 0x4c4a89:c.instructions+=2;goto B4c4a89;
case 0x4c4a8b:c.instructions+=1;goto B4c4a8b;
case 0x4c4a90:goto L4c4a90;
case 0x4c4a96:c.instructions+=1;goto B4c4a96;
case 0x4c4a98:goto L4c4a98;
case 0x4c4a9a:goto L4c4a9a;
case 0x4c4a9c:c.instructions+=4;goto B4c4a9c;
case 0x4c4a9d:c.instructions+=3;goto B4c4a9d;
case 0x4c4a9f:c.instructions+=2;goto B4c4a9f;
case 0x4c4aa3:c.instructions+=1;goto B4c4aa3;
case 0x4c4aa8:goto L4c4aa8;
case 0x4c4aaa:c.instructions+=1;goto B4c4aaa;
case 0x4c4aaf:goto L4c4aaf;
case 0x4c4ab1:c.instructions+=5;goto B4c4ab1;
case 0x4c4ab4:c.instructions+=4;goto B4c4ab4;
case 0x4c4ab8:c.instructions+=3;goto B4c4ab8;
case 0x4c4aba:c.instructions+=2;goto B4c4aba;
case 0x4c4ac2:c.instructions+=1;goto B4c4ac2;
case 0x4c4ac4:goto L4c4ac4;
case 0x4c4ac6:c.instructions+=10;goto B4c4ac6;
case 0x4c4acc:c.instructions+=9;goto B4c4acc;
case 0x4c4acd:c.instructions+=8;goto B4c4acd;
case 0x4c4ad3:c.instructions+=7;goto B4c4ad3;
case 0x4c4ad4:c.instructions+=6;goto B4c4ad4;
case 0x4c4ada:c.instructions+=5;goto B4c4ada;
case 0x4c4adb:c.instructions+=4;goto B4c4adb;
case 0x4c4ae1:c.instructions+=3;goto B4c4ae1;
case 0x4c4ae2:c.instructions+=2;goto B4c4ae2;
case 0x4c4ae4:c.instructions+=1;goto B4c4ae4;
case 0x4c4ae9:goto L4c4ae9;
case 0x4c4aef:c.instructions+=1;goto B4c4aef;
case 0x4c4af1:goto L4c4af1;
case 0x4c4af3:goto L4c4af3;
case 0x4c4af5:c.instructions+=4;goto B4c4af5;
case 0x4c4af6:c.instructions+=3;goto B4c4af6;
case 0x4c4af8:c.instructions+=2;goto B4c4af8;
case 0x4c4afc:c.instructions+=1;goto B4c4afc;
case 0x4c4b01:goto L4c4b01;
case 0x4c4b03:c.instructions+=1;goto B4c4b03;
case 0x4c4b08:goto L4c4b08;
case 0x4c4b0a:c.instructions+=5;goto B4c4b0a;
case 0x4c4b0d:c.instructions+=4;goto B4c4b0d;
case 0x4c4b11:c.instructions+=3;goto B4c4b11;
case 0x4c4b13:c.instructions+=2;goto B4c4b13;
case 0x4c4b1b:c.instructions+=1;goto B4c4b1b;
case 0x4c4b1d:goto L4c4b1d;
case 0x4c4b1f:c.instructions+=10;goto B4c4b1f;
case 0x4c4b25:c.instructions+=9;goto B4c4b25;
case 0x4c4b26:c.instructions+=8;goto B4c4b26;
case 0x4c4b2c:c.instructions+=7;goto B4c4b2c;
case 0x4c4b2d:c.instructions+=6;goto B4c4b2d;
case 0x4c4b33:c.instructions+=5;goto B4c4b33;
case 0x4c4b34:c.instructions+=4;goto B4c4b34;
case 0x4c4b3a:c.instructions+=3;goto B4c4b3a;
case 0x4c4b3b:c.instructions+=2;goto B4c4b3b;
case 0x4c4b3d:c.instructions+=1;goto B4c4b3d;
case 0x4c4b42:goto L4c4b42;
case 0x4c4b48:c.instructions+=1;goto B4c4b48;
case 0x4c4b4a:goto L4c4b4a;
case 0x4c4b4c:goto L4c4b4c;
case 0x4c4b4e:c.instructions+=4;goto B4c4b4e;
case 0x4c4b4f:c.instructions+=3;goto B4c4b4f;
case 0x4c4b51:c.instructions+=2;goto B4c4b51;
case 0x4c4b55:c.instructions+=1;goto B4c4b55;
case 0x4c4b5a:goto L4c4b5a;
case 0x4c4b5c:c.instructions+=1;goto B4c4b5c;
case 0x4c4b61:goto L4c4b61;
case 0x4c4b63:c.instructions+=5;goto B4c4b63;
case 0x4c4b66:c.instructions+=4;goto B4c4b66;
case 0x4c4b6a:c.instructions+=3;goto B4c4b6a;
case 0x4c4b6c:c.instructions+=2;goto B4c4b6c;
case 0x4c4b74:c.instructions+=1;goto B4c4b74;
case 0x4c4b76:goto L4c4b76;
case 0x4c4b78:c.instructions+=10;goto B4c4b78;
case 0x4c4b7e:c.instructions+=9;goto B4c4b7e;
case 0x4c4b7f:c.instructions+=8;goto B4c4b7f;
case 0x4c4b85:c.instructions+=7;goto B4c4b85;
case 0x4c4b86:c.instructions+=6;goto B4c4b86;
case 0x4c4b8c:c.instructions+=5;goto B4c4b8c;
case 0x4c4b8d:c.instructions+=4;goto B4c4b8d;
case 0x4c4b93:c.instructions+=3;goto B4c4b93;
case 0x4c4b94:c.instructions+=2;goto B4c4b94;
case 0x4c4b96:c.instructions+=1;goto B4c4b96;
case 0x4c4b9b:goto L4c4b9b;
case 0x4c4ba1:c.instructions+=1;goto B4c4ba1;
case 0x4c4ba3:goto L4c4ba3;
case 0x4c4ba5:goto L4c4ba5;
case 0x4c4ba7:c.instructions+=4;goto B4c4ba7;
case 0x4c4ba8:c.instructions+=3;goto B4c4ba8;
case 0x4c4baa:c.instructions+=2;goto B4c4baa;
case 0x4c4bae:c.instructions+=1;goto B4c4bae;
case 0x4c4bb3:goto L4c4bb3;
case 0x4c4bb7:c.instructions+=6;goto B4c4bb7;
case 0x4c4bb8:c.instructions+=5;goto B4c4bb8;
case 0x4c4bb9:c.instructions+=4;goto B4c4bb9;
case 0x4c4bba:c.instructions+=3;goto B4c4bba;
case 0x4c4bc1:c.instructions+=2;goto B4c4bc1;
case 0x4c4bc4:c.instructions+=1;goto B4c4bc4;
case 0x4c4bd0:goto L4c4bd0;
case 0x4c4bd1:c.instructions+=6;goto B4c4bd1;
case 0x4c4bd3:c.instructions+=5;goto B4c4bd3;
case 0x4c4bd6:c.instructions+=4;goto B4c4bd6;
case 0x4c4bdb:c.instructions+=3;goto B4c4bdb;
case 0x4c4bdc:c.instructions+=2;goto B4c4bdc;
case 0x4c4be3:c.instructions+=1;goto B4c4be3;
case 0x4c4be8:goto L4c4be8;
case 0x4c4be9:c.instructions+=1;goto B4c4be9;
case 0x4c4bee:goto L4c4bee;
case 0x4c4bf1:c.instructions+=3;goto B4c4bf1;
case 0x4c4bf6:c.instructions+=2;goto B4c4bf6;
case 0x4c4bf7:c.instructions+=1;goto B4c4bf7;
case 0x4c4bfc:goto L4c4bfc;
case 0x4c4bfd:c.instructions+=1;goto B4c4bfd;
case 0x4c4c02:goto L4c4c02;
case 0x4c4c07:c.instructions+=3;goto B4c4c07;
case 0x4c4c0a:c.instructions+=2;goto B4c4c0a;
case 0x4c4c0d:c.instructions+=1;goto B4c4c0d;
case 0x4c4c0f:goto L4c4c0f;
case 0x4c4c16:goto L4c4c16;
case 0x4c4c18:c.instructions+=1;goto B4c4c18;
case 0x4c4c1d:goto L4c4c1d;
case 0x4c4c1f:goto L4c4c1f;
case 0x4c4c21:c.instructions+=1;goto B4c4c21;
case 0x4c4c26:goto L4c4c26;
case 0x4c4c28:goto L4c4c28;
case 0x4c4c2a:c.instructions+=1;goto B4c4c2a;
case 0x4c4c2f:goto L4c4c2f;
case 0x4c4c31:goto L4c4c31;
case 0x4c4c33:c.instructions+=1;goto B4c4c33;
case 0x4c4c38:goto L4c4c38;
case 0x4c4c3b:c.instructions+=3;goto B4c4c3b;
case 0x4c4c40:c.instructions+=2;goto B4c4c40;
case 0x4c4c41:c.instructions+=1;goto B4c4c41;
case 0x4c4c46:goto L4c4c46;
case 0x4c4c47:c.instructions+=1;goto B4c4c47;
case 0x4c4c4c:goto L4c4c4c;
case 0x4c4c4f:c.instructions+=3;goto B4c4c4f;
case 0x4c4c54:c.instructions+=2;goto B4c4c54;
case 0x4c4c55:c.instructions+=1;goto B4c4c55;
case 0x4c4c5a:goto L4c4c5a;
case 0x4c4c5b:c.instructions+=1;goto B4c4c5b;
case 0x4c4c60:goto L4c4c60;
case 0x4c4c63:goto L4c4c63;
case 0x4c4c66:c.instructions+=2;goto B4c4c66;
case 0x4c4c67:c.instructions+=1;goto B4c4c67;
case 0x4c4c6c:goto L4c4c6c;
case 0x4c4c6f:c.instructions+=3;goto B4c4c6f;
case 0x4c4c70:c.instructions+=2;goto B4c4c70;
case 0x4c4c72:c.instructions+=1;goto B4c4c72;
case 0x4c4c77:goto L4c4c77;
case 0x4c4c78:c.instructions+=1;goto B4c4c78;
case 0x4c4c90:goto L4c4c90;
case 0x4c4c92:c.instructions+=11;goto B4c4c92;
case 0x4c4c97:c.instructions+=10;goto B4c4c97;
case 0x4c4c9d:c.instructions+=9;goto B4c4c9d;
case 0x4c4c9e:c.instructions+=8;goto B4c4c9e;
case 0x4c4ca5:c.instructions+=7;goto B4c4ca5;
case 0x4c4ca6:c.instructions+=6;goto B4c4ca6;
case 0x4c4caa:c.instructions+=5;goto B4c4caa;
case 0x4c4cab:c.instructions+=4;goto B4c4cab;
case 0x4c4cad:c.instructions+=3;goto B4c4cad;
case 0x4c4cae:c.instructions+=2;goto B4c4cae;
case 0x4c4cb2:c.instructions+=1;goto B4c4cb2;
case 0x4c4cb7:goto L4c4cb7;
case 0x4c4cb9:c.instructions+=11;goto B4c4cb9;
case 0x4c4cbc:c.instructions+=10;goto B4c4cbc;
case 0x4c4cbf:c.instructions+=9;goto B4c4cbf;
case 0x4c4cc5:c.instructions+=8;goto B4c4cc5;
case 0x4c4cc8:c.instructions+=7;goto B4c4cc8;
case 0x4c4ccc:c.instructions+=6;goto B4c4ccc;
case 0x4c4ccf:c.instructions+=5;goto B4c4ccf;
case 0x4c4cd2:c.instructions+=4;goto B4c4cd2;
case 0x4c4cd7:c.instructions+=3;goto B4c4cd7;
case 0x4c4cd8:c.instructions+=2;goto B4c4cd8;
case 0x4c4cdf:c.instructions+=1;goto B4c4cdf;
case 0x4c4ce4:goto L4c4ce4;
case 0x4c4ce5:c.instructions+=1;goto B4c4ce5;
case 0x4c4cea:goto L4c4cea;
case 0x4c4ced:c.instructions+=3;goto B4c4ced;
case 0x4c4cf2:c.instructions+=2;goto B4c4cf2;
case 0x4c4cf3:c.instructions+=1;goto B4c4cf3;
case 0x4c4cf8:goto L4c4cf8;
case 0x4c4cf9:c.instructions+=1;goto B4c4cf9;
case 0x4c4cfe:goto L4c4cfe;
case 0x4c4d01:c.instructions+=3;goto B4c4d01;
case 0x4c4d06:c.instructions+=2;goto B4c4d06;
case 0x4c4d07:c.instructions+=1;goto B4c4d07;
case 0x4c4d0c:goto L4c4d0c;
case 0x4c4d0d:c.instructions+=1;goto B4c4d0d;
case 0x4c4d12:goto L4c4d12;
case 0x4c4d16:c.instructions+=6;goto B4c4d16;
case 0x4c4d19:c.instructions+=5;goto B4c4d19;
case 0x4c4d1b:c.instructions+=4;goto B4c4d1b;
case 0x4c4d1c:c.instructions+=3;goto B4c4d1c;
case 0x4c4d23:c.instructions+=2;goto B4c4d23;
case 0x4c4d26:c.instructions+=1;goto B4c4d26;
case 0x4c4d30:goto L4c4d30;
case 0x4c4d31:c.instructions+=2;goto B4c4d31;
case 0x4c4d33:c.instructions+=1;goto B4c4d33;
case 0x4c4d38:goto L4c4d38;
case 0x4c4d3a:c.instructions+=2;goto B4c4d3a;
case 0x4c4d3b:c.instructions+=1;goto B4c4d3b;
case 0x4c4d40:goto L4c4d40;
case 0x4c4d45:c.instructions+=6;goto B4c4d45;
case 0x4c4d46:c.instructions+=5;goto B4c4d46;
case 0x4c4d48:c.instructions+=4;goto B4c4d48;
case 0x4c4d4b:c.instructions+=3;goto B4c4d4b;
case 0x4c4d4c:c.instructions+=2;goto B4c4d4c;
case 0x4c4d4e:c.instructions+=1;goto B4c4d4e;
case 0x4c4d54:goto L4c4d54;
case 0x4c4d59:c.instructions+=3;goto B4c4d59;
case 0x4c4d5b:c.instructions+=2;goto B4c4d5b;
case 0x4c4d61:c.instructions+=1;goto B4c4d61;
case 0x4c4d67:goto L4c4d67;
case 0x4c4d6d:c.instructions+=2;goto B4c4d6d;
case 0x4c4d6f:c.instructions+=1;goto B4c4d6f;
case 0x4c4d75:goto L4c4d75;
case 0x4c4d78:c.instructions+=1;goto B4c4d78;
case 0x4c4d7e:goto L4c4d7e;
case 0x4c4d80:c.instructions+=5;goto B4c4d80;
case 0x4c4d82:c.instructions+=4;goto B4c4d82;
case 0x4c4d84:c.instructions+=3;goto B4c4d84;
case 0x4c4d8b:c.instructions+=2;goto B4c4d8b;
case 0x4c4d8d:c.instructions+=1;goto B4c4d8d;
case 0x4c4d8f:goto L4c4d8f;
case 0x4c4d94:goto L4c4d94;
case 0x4c4d98:c.instructions+=2;goto B4c4d98;
case 0x4c4d9b:c.instructions+=1;goto B4c4d9b;
case 0x4c4da1:goto L4c4da1;
case 0x4c4da8:goto L4c4da8;
case 0x4c4dab:c.instructions+=3;goto B4c4dab;
case 0x4c4dac:c.instructions+=2;goto B4c4dac;
case 0x4c4dae:c.instructions+=1;goto B4c4dae;
case 0x4c4db3:goto L4c4db3;
case 0x4c4db4:c.instructions+=2;goto B4c4db4;
case 0x4c4db5:c.instructions+=1;goto B4c4db5;
case 0x4c4db6:goto L4c4db6;
case 0x4c4db9:c.instructions+=3;goto B4c4db9;
case 0x4c4dba:c.instructions+=2;goto B4c4dba;
case 0x4c4dbc:c.instructions+=1;goto B4c4dbc;
case 0x4c4dc1:goto L4c4dc1;
case 0x4c4dc2:c.instructions+=2;goto B4c4dc2;
case 0x4c4dc3:c.instructions+=1;goto B4c4dc3;
case 0x4c4dc4:goto L4c4dc4;
case 0x4c4dc7:c.instructions+=3;goto B4c4dc7;
case 0x4c4dc8:c.instructions+=2;goto B4c4dc8;
case 0x4c4dca:c.instructions+=1;goto B4c4dca;
case 0x4c4dcf:goto L4c4dcf;
case 0x4c4dd0:c.instructions+=2;goto B4c4dd0;
case 0x4c4dd1:c.instructions+=1;goto B4c4dd1;
case 0x4c4dd2:goto L4c4dd2;
case 0x4c4dd5:c.instructions+=3;goto B4c4dd5;
case 0x4c4dd6:c.instructions+=2;goto B4c4dd6;
case 0x4c4dd8:c.instructions+=1;goto B4c4dd8;
case 0x4c4ddd:goto L4c4ddd;
case 0x4c4dde:c.instructions+=2;goto B4c4dde;
case 0x4c4ddf:c.instructions+=1;goto B4c4ddf;
case 0x4c4de0:goto L4c4de0;
case 0x4c4de6:c.instructions+=3;goto B4c4de6;
case 0x4c4de7:c.instructions+=2;goto B4c4de7;
case 0x4c4de9:c.instructions+=1;goto B4c4de9;
case 0x4c4dee:goto L4c4dee;
case 0x4c4def:c.instructions+=2;goto B4c4def;
case 0x4c4df0:c.instructions+=1;goto B4c4df0;
case 0x4c4df1:goto L4c4df1;
case 0x4c4df7:c.instructions+=3;goto B4c4df7;
case 0x4c4df8:c.instructions+=2;goto B4c4df8;
case 0x4c4dfa:c.instructions+=1;goto B4c4dfa;
case 0x4c4dff:goto L4c4dff;
case 0x4c4e00:c.instructions+=2;goto B4c4e00;
case 0x4c4e01:c.instructions+=1;goto B4c4e01;
case 0x4c4e02:goto L4c4e02;
case 0x4c4e08:c.instructions+=3;goto B4c4e08;
case 0x4c4e09:c.instructions+=2;goto B4c4e09;
case 0x4c4e0b:c.instructions+=1;goto B4c4e0b;
case 0x4c4e10:goto L4c4e10;
case 0x4c4e11:c.instructions+=2;goto B4c4e11;
case 0x4c4e12:c.instructions+=1;goto B4c4e12;
case 0x4c4e13:goto L4c4e13;
case 0x4c4e16:c.instructions+=1;goto B4c4e16;
case 0x4c4e18:goto L4c4e18;
case 0x4c4e1b:c.instructions+=1;goto B4c4e1b;
case 0x4c4e1d:goto L4c4e1d;
case 0x4c4e24:c.instructions+=2;goto B4c4e24;
case 0x4c4e29:c.instructions+=1;goto B4c4e29;
case 0x4c4e2b:goto L4c4e2b;
case 0x4c4e30:c.instructions+=1;goto B4c4e30;
case 0x4c4e35:goto L4c4e35;
case 0x4c4e38:c.instructions+=1;goto B4c4e38;
case 0x4c4e3a:goto L4c4e3a;
case 0x4c4e41:goto L4c4e41;
case 0x4c4e43:goto L4c4e43;
case 0x4c4e48:goto L4c4e48;
case 0x4c4e4d:c.instructions+=2;goto B4c4e4d;
case 0x4c4e4f:c.instructions+=1;goto B4c4e4f;
case 0x4c4e51:goto L4c4e51;
case 0x4c4e56:c.instructions+=2;goto B4c4e56;
case 0x4c4e58:c.instructions+=1;goto B4c4e58;
case 0x4c4e5a:goto L4c4e5a;
case 0x4c4e60:c.instructions+=3;goto B4c4e60;
case 0x4c4e61:c.instructions+=2;goto B4c4e61;
case 0x4c4e63:c.instructions+=1;goto B4c4e63;
case 0x4c4e68:goto L4c4e68;
case 0x4c4e69:c.instructions+=2;goto B4c4e69;
case 0x4c4e6a:c.instructions+=1;goto B4c4e6a;
case 0x4c4e6b:goto L4c4e6b;
case 0x4c4e70:c.instructions+=1;goto B4c4e70;
case 0x4c4e75:goto L4c4e75;
case 0x4c4e77:c.instructions+=1;goto B4c4e77;
case 0x4c4e79:goto L4c4e79;
case 0x4c4e7f:c.instructions+=3;goto B4c4e7f;
case 0x4c4e80:c.instructions+=2;goto B4c4e80;
case 0x4c4e82:c.instructions+=1;goto B4c4e82;
case 0x4c4e87:goto L4c4e87;
case 0x4c4e88:c.instructions+=2;goto B4c4e88;
case 0x4c4e89:c.instructions+=1;goto B4c4e89;
case 0x4c4e8a:goto L4c4e8a;
case 0x4c4e8d:c.instructions+=1;goto B4c4e8d;
case 0x4c4e8f:goto L4c4e8f;
case 0x4c4e94:goto L4c4e94;
case 0x4c4e95:c.instructions+=2;goto B4c4e95;
case 0x4c4e97:c.instructions+=1;goto B4c4e97;
case 0x4c4e9c:goto L4c4e9c;
case 0x4c4e9d:c.instructions+=2;goto B4c4e9d;
case 0x4c4e9e:c.instructions+=1;goto B4c4e9e;
case 0x4c4ec0:goto L4c4ec0;
case 0x4c4ec1:c.instructions+=2;goto B4c4ec1;
case 0x4c4ec3:c.instructions+=1;goto B4c4ec3;
case 0x4c4ec8:goto L4c4ec8;
case 0x4c4ecd:c.instructions+=1;goto B4c4ecd;
case 0x4c4ecf:goto L4c4ecf;
case 0x4c4ed0:c.instructions+=1;goto B4c4ed0;
case 0x4c4ed5:goto L4c4ed5;
case 0x4c4ed8:goto L4c4ed8;
case 0x4c4eda:c.instructions+=2;goto B4c4eda;
case 0x4c4edb:c.instructions+=1;goto B4c4edb;
case 0x4c4ee0:goto L4c4ee0;
case 0x4c4ee6:c.instructions+=1;goto B4c4ee6;
case 0x4c4ef0:goto L4c4ef0;
case 0x4c4ef3:c.instructions+=6;goto B4c4ef3;
case 0x4c4ef5:c.instructions+=5;goto B4c4ef5;
case 0x4c4ef6:c.instructions+=4;goto B4c4ef6;
case 0x4c4ef7:c.instructions+=3;goto B4c4ef7;
case 0x4c4ef8:c.instructions+=2;goto B4c4ef8;
case 0x4c4efb:c.instructions+=1;goto B4c4efb;
case 0x4c4efd:goto L4c4efd;
case 0x4c4f00:c.instructions+=1;goto B4c4f00;
case 0x4c4f02:goto L4c4f02;
case 0x4c4f04:goto L4c4f04;
case 0x4c4f08:goto L4c4f08;
case 0x4c4f0a:c.instructions+=1;goto B4c4f0a;
case 0x4c4f0c:goto L4c4f0c;
case 0x4c4f0f:c.instructions+=1;goto B4c4f0f;
case 0x4c4f11:goto L4c4f11;
case 0x4c4f13:goto L4c4f13;
case 0x4c4f15:c.instructions+=1;goto B4c4f15;
case 0x4c4f17:goto L4c4f17;
case 0x4c4f1a:c.instructions+=3;goto B4c4f1a;
case 0x4c4f1b:c.instructions+=2;goto B4c4f1b;
case 0x4c4f1c:c.instructions+=1;goto B4c4f1c;
case 0x4c4f21:goto L4c4f21;
case 0x4c4f24:c.instructions+=2;goto B4c4f24;
case 0x4c4f26:c.instructions+=1;goto B4c4f26;
case 0x4c4f28:goto L4c4f28;
case 0x4c4f2b:c.instructions+=2;goto B4c4f2b;
case 0x4c4f2d:c.instructions+=1;goto B4c4f2d;
case 0x4c4f2f:goto L4c4f2f;
case 0x4c4f32:c.instructions+=1;goto B4c4f32;
case 0x4c4f34:goto L4c4f34;
case 0x4c4f36:c.instructions+=1;goto B4c4f36;
case 0x4c4f38:goto L4c4f38;
case 0x4c4f39:c.instructions+=4;goto B4c4f39;
case 0x4c4f3b:c.instructions+=3;goto B4c4f3b;
case 0x4c4f3c:c.instructions+=2;goto B4c4f3c;
case 0x4c4f3d:c.instructions+=1;goto B4c4f3d;
case 0x4c4f40:goto L4c4f40;
case 0x4c4f41:c.instructions+=4;goto B4c4f41;
case 0x4c4f42:c.instructions+=3;goto B4c4f42;
case 0x4c4f44:c.instructions+=2;goto B4c4f44;
case 0x4c4f45:c.instructions+=1;goto B4c4f45;
case 0x4c4f50:goto L4c4f50;
case 0x4c4f51:c.instructions+=4;goto B4c4f51;
case 0x4c4f53:c.instructions+=3;goto B4c4f53;
case 0x4c4f58:c.instructions+=2;goto B4c4f58;
case 0x4c4f5a:c.instructions+=1;goto B4c4f5a;
case 0x4c4f60:goto L4c4f60;
case 0x4c4f63:c.instructions+=4;goto B4c4f63;
case 0x4c4f66:c.instructions+=3;goto B4c4f66;
case 0x4c4f69:c.instructions+=2;goto B4c4f69;
case 0x4c4f6b:c.instructions+=1;goto B4c4f6b;
case 0x4c4f6d:goto L4c4f6d;
case 0x4c4f70:c.instructions+=1;goto B4c4f70;
case 0x4c4f72:goto L4c4f72;
case 0x4c4f74:goto L4c4f74;
case 0x4c4f76:c.instructions+=7;goto B4c4f76;
case 0x4c4f78:c.instructions+=6;goto B4c4f78;
case 0x4c4f7e:c.instructions+=5;goto B4c4f7e;
case 0x4c4f81:c.instructions+=4;goto B4c4f81;
case 0x4c4f83:c.instructions+=3;goto B4c4f83;
case 0x4c4f84:c.instructions+=2;goto B4c4f84;
case 0x4c4f87:c.instructions+=1;goto B4c4f87;
case 0x4c4f89:goto L4c4f89;
case 0x4c4f8c:c.instructions+=1;goto B4c4f8c;
case 0x4c4f8e:goto L4c4f8e;
case 0x4c4f90:goto L4c4f90;
case 0x4c4f93:c.instructions+=1;goto B4c4f93;
case 0x4c4f95:goto L4c4f95;
case 0x4c4f9a:c.instructions+=4;goto B4c4f9a;
case 0x4c4f9e:c.instructions+=3;goto B4c4f9e;
case 0x4c4fa4:c.instructions+=2;goto B4c4fa4;
case 0x4c4fa6:c.instructions+=1;goto B4c4fa6;
case 0x4c4fa8:goto L4c4fa8;
case 0x4c4faa:c.instructions+=2;goto B4c4faa;
case 0x4c4fac:c.instructions+=1;goto B4c4fac;
case 0x4c4fae:goto L4c4fae;
case 0x4c4fb8:goto L4c4fb8;
case 0x4c4fbd:c.instructions+=2;goto B4c4fbd;
case 0x4c4fbe:c.instructions+=1;goto B4c4fbe;
case 0x4c4fc3:goto L4c4fc3;
case 0x4c4fc6:c.instructions+=2;goto B4c4fc6;
case 0x4c4fc8:c.instructions+=1;goto B4c4fc8;
case 0x4c4fca:goto L4c4fca;
case 0x4c4fcf:c.instructions+=2;goto B4c4fcf;
case 0x4c4fd1:c.instructions+=1;goto B4c4fd1;
case 0x4c4fd3:goto L4c4fd3;
case 0x4c4fd7:c.instructions+=2;goto B4c4fd7;
case 0x4c4fda:c.instructions+=1;goto B4c4fda;
case 0x4c4fdc:goto L4c4fdc;
case 0x4c4fe0:c.instructions+=1;goto B4c4fe0;
case 0x4c4fe2:goto L4c4fe2;
case 0x4c4fe5:c.instructions+=4;goto B4c4fe5;
case 0x4c4fe7:c.instructions+=3;goto B4c4fe7;
case 0x4c4fe8:c.instructions+=2;goto B4c4fe8;
case 0x4c4fe9:c.instructions+=1;goto B4c4fe9;
case 0x4c4fee:goto L4c4fee;
case 0x4c4ff1:c.instructions+=3;goto B4c4ff1;
case 0x4c4ff2:c.instructions+=2;goto B4c4ff2;
case 0x4c4ff3:c.instructions+=1;goto B4c4ff3;
case 0x4c4ff4:goto L4c4ff4;
case 0x4c4ff9:c.instructions+=3;goto B4c4ff9;
case 0x4c4ffc:c.instructions+=2;goto B4c4ffc;
case 0x4c4fff:c.instructions+=1;goto B4c4fff;
default:missing_instruction(c.pc);}
B4c4001:L4c4001:{c.instructions+=2;NFSU2_TR(0x4c4001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c4002:{NFSU2_TR(0x4c4002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4010:L4c4010:{c.instructions+=6;NFSU2_TR(0x4c4010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4011:{NFSU2_TR(0x4c4011);
__builtin_memmove((R+24),(R+4),4);
}
B4c4013:{NFSU2_TR(0x4c4013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4016:{NFSU2_TR(0x4c4016);
u8 U[4];
w4(U+0,u32(0xac148579ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c401b:{NFSU2_TR(0x4c401b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c401c:{NFSU2_TR(0x4c401c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4021ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4021:L4c4021:{c.instructions+=6;NFSU2_TR(0x4c4021);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c4026:{NFSU2_TR(0x4c4026);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c402c:{NFSU2_TR(0x4c402c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c402f:{NFSU2_TR(0x4c402f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c4032:{NFSU2_TR(0x4c4032);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4034:{NFSU2_TR(0x4c4034);
if(r1(R+518)){{goto L4c403b;}}
}
B4c4036:L4c4036:{c.instructions+=2;NFSU2_TR(0x4c4036);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4039:{NFSU2_TR(0x4c4039);
{goto L4c403e;}
}
B4c403b:L4c403b:{c.instructions+=1;NFSU2_TR(0x4c403b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c403e:L4c403e:{c.instructions+=2;NFSU2_TR(0x4c403e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4040:{NFSU2_TR(0x4c4040);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4046;}}
}
B4c4042:L4c4042:{c.instructions+=2;NFSU2_TR(0x4c4042);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c4044:{NFSU2_TR(0x4c4044);
{goto L4c4060;}
}
B4c4046:L4c4046:{c.instructions+=3;NFSU2_TR(0x4c4046);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c404b:{NFSU2_TR(0x4c404b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c404d:{NFSU2_TR(0x4c404d);
if(r1(R+518)){{goto L4c4054;}}
}
B4c404f:L4c404f:{c.instructions+=2;NFSU2_TR(0x4c404f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4052:{NFSU2_TR(0x4c4052);
{goto L4c4057;}
}
B4c4054:L4c4054:{c.instructions+=1;NFSU2_TR(0x4c4054);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4057:L4c4057:{c.instructions+=4;NFSU2_TR(0x4c4057);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c4059:{NFSU2_TR(0x4c4059);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c405b:{NFSU2_TR(0x4c405b);
__builtin_memmove((R+8),(R+518),1);
}
B4c405e:{NFSU2_TR(0x4c405e);
__builtin_memmove((R+0),(R+8),4);
}
B4c4060:L4c4060:{c.instructions+=10;NFSU2_TR(0x4c4060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4063:{NFSU2_TR(0x4c4063);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c4066:{NFSU2_TR(0x4c4066);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4c406d:{NFSU2_TR(0x4c406d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c406f:{NFSU2_TR(0x4c406f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c4071:{NFSU2_TR(0x4c4071);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff3942ull))));
}
B4c4076:{NFSU2_TR(0x4c4076);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xccfaull))));
}
B4c407b:{NFSU2_TR(0x4c407b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c407c:{NFSU2_TR(0x4c407c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c407d:{NFSU2_TR(0x4c407d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4082ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4082:L4c4082:{c.instructions+=3;NFSU2_TR(0x4c4082);
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
B4c4085:{NFSU2_TR(0x4c4085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4086:{NFSU2_TR(0x4c4086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4090:L4c4090:{c.instructions+=5;NFSU2_TR(0x4c4090);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4094:{NFSU2_TR(0x4c4094);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4099:{NFSU2_TR(0x4c4099);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c409a:{NFSU2_TR(0x4c409a);
__builtin_memmove((R+12),(R+4),4);
}
B4c409c:{NFSU2_TR(0x4c409c);
if(r1(R+518)){{goto L4c40a9;}}
}
B4c409e:L4c409e:{c.instructions+=2;NFSU2_TR(0x4c409e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c40a3:{NFSU2_TR(0x4c40a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4132;}}
}
B4c40a9:L4c40a9:{c.instructions+=8;NFSU2_TR(0x4c40a9);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c40ae:{NFSU2_TR(0x4c40ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c40b1:{NFSU2_TR(0x4c40b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c40b2:{NFSU2_TR(0x4c40b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c40b3:{NFSU2_TR(0x4c40b3);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B4c40b9:{NFSU2_TR(0x4c40b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c40bb:{NFSU2_TR(0x4c40bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c40bc:{NFSU2_TR(0x4c40bc);
if(r1(R+518)){{goto L4c40c3;}}
}
B4c40be:L4c40be:{c.instructions+=2;NFSU2_TR(0x4c40be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c40c1:{NFSU2_TR(0x4c40c1);
{goto L4c40c6;}
}
B4c40c3:L4c40c3:{c.instructions+=1;NFSU2_TR(0x4c40c3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c40c6:L4c40c6:{c.instructions+=3;NFSU2_TR(0x4c40c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c40c8:{NFSU2_TR(0x4c40c8);
__builtin_memmove((R+20),gp(0x8900b0),4);
}
B4c40ce:{NFSU2_TR(0x4c40ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c40d4;}}
}
B4c40d0:L4c40d0:{c.instructions+=2;NFSU2_TR(0x4c40d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c40d2:{NFSU2_TR(0x4c40d2);
{goto L4c40e9;}
}
B4c40d4:L4c40d4:{c.instructions+=2;NFSU2_TR(0x4c40d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c40d6:{NFSU2_TR(0x4c40d6);
if(r1(R+518)){{goto L4c40dd;}}
}
B4c40d8:L4c40d8:{c.instructions+=2;NFSU2_TR(0x4c40d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c40db:{NFSU2_TR(0x4c40db);
{goto L4c40e0;}
}
B4c40dd:L4c40dd:{c.instructions+=1;NFSU2_TR(0x4c40dd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c40e0:L4c40e0:{c.instructions+=4;NFSU2_TR(0x4c40e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c40e2:{NFSU2_TR(0x4c40e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c40e4:{NFSU2_TR(0x4c40e4);
__builtin_memmove((R+8),(R+518),1);
}
B4c40e7:{NFSU2_TR(0x4c40e7);
__builtin_memmove((R+28),(R+8),4);
}
B4c40e9:L4c40e9:{c.instructions+=2;NFSU2_TR(0x4c40e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c40eb:{NFSU2_TR(0x4c40eb);
if(r1(R+518)){{goto L4c40f2;}}
}
B4c40ed:L4c40ed:{c.instructions+=2;NFSU2_TR(0x4c40ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c40f0:{NFSU2_TR(0x4c40f0);
{goto L4c40f5;}
}
B4c40f2:L4c40f2:{c.instructions+=1;NFSU2_TR(0x4c40f2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c40f5:L4c40f5:{c.instructions+=2;NFSU2_TR(0x4c40f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c40f7:{NFSU2_TR(0x4c40f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c40fd;}}
}
B4c40f9:L4c40f9:{c.instructions+=2;NFSU2_TR(0x4c40f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c40fb:{NFSU2_TR(0x4c40fb);
{goto L4c4112;}
}
B4c40fd:L4c40fd:{c.instructions+=2;NFSU2_TR(0x4c40fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c40ff:{NFSU2_TR(0x4c40ff);
if(r1(R+518)){{goto L4c4106;}}
}
B4c4101:L4c4101:{c.instructions+=2;NFSU2_TR(0x4c4101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4104:{NFSU2_TR(0x4c4104);
{goto L4c4109;}
}
B4c4106:L4c4106:{c.instructions+=1;NFSU2_TR(0x4c4106);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4109:L4c4109:{c.instructions+=4;NFSU2_TR(0x4c4109);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c410b:{NFSU2_TR(0x4c410b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c410d:{NFSU2_TR(0x4c410d);
__builtin_memmove((R+8),(R+518),1);
}
B4c4110:{NFSU2_TR(0x4c4110);
__builtin_memmove((R+0),(R+8),4);
}
B4c4112:L4c4112:{c.instructions+=10;NFSU2_TR(0x4c4112);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c4115:{NFSU2_TR(0x4c4115);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa65ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B4c411c:{NFSU2_TR(0x4c411c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c411e:{NFSU2_TR(0x4c411e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c411f:{NFSU2_TR(0x4c411f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c4122:{NFSU2_TR(0x4c4122);
__builtin_memmove((R+8),(R+518),1);
}
B4c4125:{NFSU2_TR(0x4c4125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4126:{NFSU2_TR(0x4c4126);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa65ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c412d:{NFSU2_TR(0x4c412d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4131:{NFSU2_TR(0x4c4131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c4132:L4c4132:{c.instructions+=4;NFSU2_TR(0x4c4132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c4134:{NFSU2_TR(0x4c4134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4135:{NFSU2_TR(0x4c4135);
__builtin_memmove((R+4),(R+12),4);
}
B4c4137:{NFSU2_TR(0x4c4137);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c413aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c413a:L4c413a:{c.instructions+=3;NFSU2_TR(0x4c413a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c413c:{NFSU2_TR(0x4c413c);
__builtin_memmove((R+4),(R+12),4);
}
B4c413e:{NFSU2_TR(0x4c413e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4141ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c4141:L4c4141:{c.instructions+=2;NFSU2_TR(0x4c4141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c4142:{NFSU2_TR(0x4c4142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4149:L4c4149:{c.instructions+=13;NFSU2_TR(0x4c4149);
}
B4c414a:{NFSU2_TR(0x4c414a);
}
B4c414b:{NFSU2_TR(0x4c414b);
}
B4c414c:{NFSU2_TR(0x4c414c);
}
B4c414d:{NFSU2_TR(0x4c414d);
}
B4c414e:{NFSU2_TR(0x4c414e);
}
B4c414f:{NFSU2_TR(0x4c414f);
}
B4c4150:{NFSU2_TR(0x4c4150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4151:{NFSU2_TR(0x4c4151);
__builtin_memmove((R+24),(R+4),4);
}
B4c4153:{NFSU2_TR(0x4c4153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4156:{NFSU2_TR(0x4c4156);
u8 U[4];
w4(U+0,u32(0x82cd8f92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c415b:{NFSU2_TR(0x4c415b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c415c:{NFSU2_TR(0x4c415c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4161ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4161:L4c4161:{c.instructions+=6;NFSU2_TR(0x4c4161);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c4166:{NFSU2_TR(0x4c4166);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c416c:{NFSU2_TR(0x4c416c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c416f:{NFSU2_TR(0x4c416f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c4172:{NFSU2_TR(0x4c4172);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4174:{NFSU2_TR(0x4c4174);
if(r1(R+518)){{goto L4c417b;}}
}
B4c4176:L4c4176:{c.instructions+=2;NFSU2_TR(0x4c4176);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4179:{NFSU2_TR(0x4c4179);
{goto L4c417e;}
}
B4c417b:L4c417b:{c.instructions+=1;NFSU2_TR(0x4c417b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c417e:L4c417e:{c.instructions+=2;NFSU2_TR(0x4c417e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4180:{NFSU2_TR(0x4c4180);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4186;}}
}
B4c4182:L4c4182:{c.instructions+=2;NFSU2_TR(0x4c4182);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c4184:{NFSU2_TR(0x4c4184);
{goto L4c41a0;}
}
B4c4186:L4c4186:{c.instructions+=3;NFSU2_TR(0x4c4186);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c418b:{NFSU2_TR(0x4c418b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c418d:{NFSU2_TR(0x4c418d);
if(r1(R+518)){{goto L4c4194;}}
}
B4c418f:L4c418f:{c.instructions+=2;NFSU2_TR(0x4c418f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4192:{NFSU2_TR(0x4c4192);
{goto L4c4197;}
}
B4c4194:L4c4194:{c.instructions+=1;NFSU2_TR(0x4c4194);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4197:L4c4197:{c.instructions+=4;NFSU2_TR(0x4c4197);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c4199:{NFSU2_TR(0x4c4199);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c419b:{NFSU2_TR(0x4c419b);
__builtin_memmove((R+8),(R+518),1);
}
B4c419e:{NFSU2_TR(0x4c419e);
__builtin_memmove((R+0),(R+8),4);
}
B4c41a0:L4c41a0:{c.instructions+=10;NFSU2_TR(0x4c41a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c41a3:{NFSU2_TR(0x4c41a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c41a6:{NFSU2_TR(0x4c41a6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa65ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4c41ad:{NFSU2_TR(0x4c41ad);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c41af:{NFSU2_TR(0x4c41af);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c41b1:{NFSU2_TR(0x4c41b1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff3942ull))));
}
B4c41b6:{NFSU2_TR(0x4c41b6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xccfaull))));
}
B4c41bb:{NFSU2_TR(0x4c41bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c41bc:{NFSU2_TR(0x4c41bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c41bd:{NFSU2_TR(0x4c41bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c41c2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c41c2:L4c41c2:{c.instructions+=3;NFSU2_TR(0x4c41c2);
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
B4c41c5:{NFSU2_TR(0x4c41c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c41c6:{NFSU2_TR(0x4c41c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c41d0:L4c41d0:{c.instructions+=5;NFSU2_TR(0x4c41d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c41d4:{NFSU2_TR(0x4c41d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c41d9:{NFSU2_TR(0x4c41d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c41da:{NFSU2_TR(0x4c41da);
__builtin_memmove((R+12),(R+4),4);
}
B4c41dc:{NFSU2_TR(0x4c41dc);
if(r1(R+518)){{goto L4c41e9;}}
}
B4c41de:L4c41de:{c.instructions+=2;NFSU2_TR(0x4c41de);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c41e3:{NFSU2_TR(0x4c41e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4272;}}
}
B4c41e9:L4c41e9:{c.instructions+=8;NFSU2_TR(0x4c41e9);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c41ee:{NFSU2_TR(0x4c41ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c41f1:{NFSU2_TR(0x4c41f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c41f2:{NFSU2_TR(0x4c41f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c41f3:{NFSU2_TR(0x4c41f3);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B4c41f9:{NFSU2_TR(0x4c41f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c41fb:{NFSU2_TR(0x4c41fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c41fc:{NFSU2_TR(0x4c41fc);
if(r1(R+518)){{goto L4c4203;}}
}
B4c41fe:L4c41fe:{c.instructions+=2;NFSU2_TR(0x4c41fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4201:{NFSU2_TR(0x4c4201);
{goto L4c4206;}
}
B4c4203:L4c4203:{c.instructions+=1;NFSU2_TR(0x4c4203);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4206:L4c4206:{c.instructions+=3;NFSU2_TR(0x4c4206);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4208:{NFSU2_TR(0x4c4208);
__builtin_memmove((R+20),gp(0x8900b0),4);
}
B4c420e:{NFSU2_TR(0x4c420e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4214;}}
}
B4c4210:L4c4210:{c.instructions+=2;NFSU2_TR(0x4c4210);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4212:{NFSU2_TR(0x4c4212);
{goto L4c4229;}
}
B4c4214:L4c4214:{c.instructions+=2;NFSU2_TR(0x4c4214);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4216:{NFSU2_TR(0x4c4216);
if(r1(R+518)){{goto L4c421d;}}
}
B4c4218:L4c4218:{c.instructions+=2;NFSU2_TR(0x4c4218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c421b:{NFSU2_TR(0x4c421b);
{goto L4c4220;}
}
B4c421d:L4c421d:{c.instructions+=1;NFSU2_TR(0x4c421d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4220:L4c4220:{c.instructions+=4;NFSU2_TR(0x4c4220);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c4222:{NFSU2_TR(0x4c4222);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4224:{NFSU2_TR(0x4c4224);
__builtin_memmove((R+8),(R+518),1);
}
B4c4227:{NFSU2_TR(0x4c4227);
__builtin_memmove((R+28),(R+8),4);
}
B4c4229:L4c4229:{c.instructions+=2;NFSU2_TR(0x4c4229);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c422b:{NFSU2_TR(0x4c422b);
if(r1(R+518)){{goto L4c4232;}}
}
B4c422d:L4c422d:{c.instructions+=2;NFSU2_TR(0x4c422d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4230:{NFSU2_TR(0x4c4230);
{goto L4c4235;}
}
B4c4232:L4c4232:{c.instructions+=1;NFSU2_TR(0x4c4232);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4235:L4c4235:{c.instructions+=2;NFSU2_TR(0x4c4235);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4237:{NFSU2_TR(0x4c4237);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c423d;}}
}
B4c4239:L4c4239:{c.instructions+=2;NFSU2_TR(0x4c4239);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c423b:{NFSU2_TR(0x4c423b);
{goto L4c4252;}
}
B4c423d:L4c423d:{c.instructions+=2;NFSU2_TR(0x4c423d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c423f:{NFSU2_TR(0x4c423f);
if(r1(R+518)){{goto L4c4246;}}
}
B4c4241:L4c4241:{c.instructions+=2;NFSU2_TR(0x4c4241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4244:{NFSU2_TR(0x4c4244);
{goto L4c4249;}
}
B4c4246:L4c4246:{c.instructions+=1;NFSU2_TR(0x4c4246);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4249:L4c4249:{c.instructions+=4;NFSU2_TR(0x4c4249);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c424b:{NFSU2_TR(0x4c424b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c424d:{NFSU2_TR(0x4c424d);
__builtin_memmove((R+8),(R+518),1);
}
B4c4250:{NFSU2_TR(0x4c4250);
__builtin_memmove((R+0),(R+8),4);
}
B4c4252:L4c4252:{c.instructions+=10;NFSU2_TR(0x4c4252);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c4255:{NFSU2_TR(0x4c4255);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa66ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B4c425c:{NFSU2_TR(0x4c425c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c425e:{NFSU2_TR(0x4c425e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c425f:{NFSU2_TR(0x4c425f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c4262:{NFSU2_TR(0x4c4262);
__builtin_memmove((R+8),(R+518),1);
}
B4c4265:{NFSU2_TR(0x4c4265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4266:{NFSU2_TR(0x4c4266);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa66ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c426d:{NFSU2_TR(0x4c426d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4271:{NFSU2_TR(0x4c4271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c4272:L4c4272:{c.instructions+=4;NFSU2_TR(0x4c4272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c4274:{NFSU2_TR(0x4c4274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4275:{NFSU2_TR(0x4c4275);
__builtin_memmove((R+4),(R+12),4);
}
B4c4277:{NFSU2_TR(0x4c4277);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c427aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c427a:L4c427a:{c.instructions+=3;NFSU2_TR(0x4c427a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c427c:{NFSU2_TR(0x4c427c);
__builtin_memmove((R+4),(R+12),4);
}
B4c427e:{NFSU2_TR(0x4c427e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4281ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c4281:L4c4281:{c.instructions+=2;NFSU2_TR(0x4c4281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c4282:{NFSU2_TR(0x4c4282);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4290:L4c4290:{c.instructions+=6;NFSU2_TR(0x4c4290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4291:{NFSU2_TR(0x4c4291);
__builtin_memmove((R+24),(R+4),4);
}
B4c4293:{NFSU2_TR(0x4c4293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4296:{NFSU2_TR(0x4c4296);
u8 U[4];
w4(U+0,u32(0x969f96a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c429b:{NFSU2_TR(0x4c429b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c429c:{NFSU2_TR(0x4c429c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c42a1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c42a1:L4c42a1:{c.instructions+=6;NFSU2_TR(0x4c42a1);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c42a6:{NFSU2_TR(0x4c42a6);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c42ac:{NFSU2_TR(0x4c42ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c42af:{NFSU2_TR(0x4c42af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c42b2:{NFSU2_TR(0x4c42b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c42b4:{NFSU2_TR(0x4c42b4);
if(r1(R+518)){{goto L4c42bb;}}
}
B4c42b6:L4c42b6:{c.instructions+=2;NFSU2_TR(0x4c42b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c42b9:{NFSU2_TR(0x4c42b9);
{goto L4c42be;}
}
B4c42bb:L4c42bb:{c.instructions+=1;NFSU2_TR(0x4c42bb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c42be:L4c42be:{c.instructions+=2;NFSU2_TR(0x4c42be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c42c0:{NFSU2_TR(0x4c42c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c42c6;}}
}
B4c42c2:L4c42c2:{c.instructions+=2;NFSU2_TR(0x4c42c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c42c4:{NFSU2_TR(0x4c42c4);
{goto L4c42e0;}
}
B4c42c6:L4c42c6:{c.instructions+=3;NFSU2_TR(0x4c42c6);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c42cb:{NFSU2_TR(0x4c42cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c42cd:{NFSU2_TR(0x4c42cd);
if(r1(R+518)){{goto L4c42d4;}}
}
B4c42cf:L4c42cf:{c.instructions+=2;NFSU2_TR(0x4c42cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c42d2:{NFSU2_TR(0x4c42d2);
{goto L4c42d7;}
}
B4c42d4:L4c42d4:{c.instructions+=1;NFSU2_TR(0x4c42d4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c42d7:L4c42d7:{c.instructions+=4;NFSU2_TR(0x4c42d7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c42d9:{NFSU2_TR(0x4c42d9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c42db:{NFSU2_TR(0x4c42db);
__builtin_memmove((R+8),(R+518),1);
}
B4c42de:{NFSU2_TR(0x4c42de);
__builtin_memmove((R+0),(R+8),4);
}
B4c42e0:L4c42e0:{c.instructions+=10;NFSU2_TR(0x4c42e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c42e3:{NFSU2_TR(0x4c42e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c42e6:{NFSU2_TR(0x4c42e6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa66ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4c42ed:{NFSU2_TR(0x4c42ed);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c42ef:{NFSU2_TR(0x4c42ef);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c42f1:{NFSU2_TR(0x4c42f1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff3942ull))));
}
B4c42f6:{NFSU2_TR(0x4c42f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xccfaull))));
}
B4c42fb:{NFSU2_TR(0x4c42fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c42fc:{NFSU2_TR(0x4c42fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c42fd:{NFSU2_TR(0x4c42fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4302ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4302:L4c4302:{c.instructions+=3;NFSU2_TR(0x4c4302);
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
B4c4305:{NFSU2_TR(0x4c4305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4306:{NFSU2_TR(0x4c4306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4310:L4c4310:{c.instructions+=5;NFSU2_TR(0x4c4310);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4314:{NFSU2_TR(0x4c4314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4319:{NFSU2_TR(0x4c4319);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c431a:{NFSU2_TR(0x4c431a);
__builtin_memmove((R+12),(R+4),4);
}
B4c431c:{NFSU2_TR(0x4c431c);
if(r1(R+518)){{goto L4c4329;}}
}
B4c431e:L4c431e:{c.instructions+=2;NFSU2_TR(0x4c431e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c4323:{NFSU2_TR(0x4c4323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c43b2;}}
}
B4c4329:L4c4329:{c.instructions+=8;NFSU2_TR(0x4c4329);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c432e:{NFSU2_TR(0x4c432e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4331:{NFSU2_TR(0x4c4331);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4332:{NFSU2_TR(0x4c4332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4333:{NFSU2_TR(0x4c4333);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B4c4339:{NFSU2_TR(0x4c4339);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c433b:{NFSU2_TR(0x4c433b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c433c:{NFSU2_TR(0x4c433c);
if(r1(R+518)){{goto L4c4343;}}
}
B4c433e:L4c433e:{c.instructions+=2;NFSU2_TR(0x4c433e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4341:{NFSU2_TR(0x4c4341);
{goto L4c4346;}
}
B4c4343:L4c4343:{c.instructions+=1;NFSU2_TR(0x4c4343);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4346:L4c4346:{c.instructions+=3;NFSU2_TR(0x4c4346);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4348:{NFSU2_TR(0x4c4348);
__builtin_memmove((R+20),gp(0x8900b0),4);
}
B4c434e:{NFSU2_TR(0x4c434e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4354;}}
}
B4c4350:L4c4350:{c.instructions+=2;NFSU2_TR(0x4c4350);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4352:{NFSU2_TR(0x4c4352);
{goto L4c4369;}
}
B4c4354:L4c4354:{c.instructions+=2;NFSU2_TR(0x4c4354);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4356:{NFSU2_TR(0x4c4356);
if(r1(R+518)){{goto L4c435d;}}
}
B4c4358:L4c4358:{c.instructions+=2;NFSU2_TR(0x4c4358);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c435b:{NFSU2_TR(0x4c435b);
{goto L4c4360;}
}
B4c435d:L4c435d:{c.instructions+=1;NFSU2_TR(0x4c435d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4360:L4c4360:{c.instructions+=4;NFSU2_TR(0x4c4360);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c4362:{NFSU2_TR(0x4c4362);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4364:{NFSU2_TR(0x4c4364);
__builtin_memmove((R+8),(R+518),1);
}
B4c4367:{NFSU2_TR(0x4c4367);
__builtin_memmove((R+28),(R+8),4);
}
B4c4369:L4c4369:{c.instructions+=2;NFSU2_TR(0x4c4369);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c436b:{NFSU2_TR(0x4c436b);
if(r1(R+518)){{goto L4c4372;}}
}
B4c436d:L4c436d:{c.instructions+=2;NFSU2_TR(0x4c436d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4370:{NFSU2_TR(0x4c4370);
{goto L4c4375;}
}
B4c4372:L4c4372:{c.instructions+=1;NFSU2_TR(0x4c4372);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4375:L4c4375:{c.instructions+=2;NFSU2_TR(0x4c4375);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4377:{NFSU2_TR(0x4c4377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c437d;}}
}
B4c4379:L4c4379:{c.instructions+=2;NFSU2_TR(0x4c4379);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c437b:{NFSU2_TR(0x4c437b);
{goto L4c4392;}
}
B4c437d:L4c437d:{c.instructions+=2;NFSU2_TR(0x4c437d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c437f:{NFSU2_TR(0x4c437f);
if(r1(R+518)){{goto L4c4386;}}
}
B4c4381:L4c4381:{c.instructions+=2;NFSU2_TR(0x4c4381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4384:{NFSU2_TR(0x4c4384);
{goto L4c4389;}
}
B4c4386:L4c4386:{c.instructions+=1;NFSU2_TR(0x4c4386);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4389:L4c4389:{c.instructions+=4;NFSU2_TR(0x4c4389);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c438b:{NFSU2_TR(0x4c438b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c438d:{NFSU2_TR(0x4c438d);
__builtin_memmove((R+8),(R+518),1);
}
B4c4390:{NFSU2_TR(0x4c4390);
__builtin_memmove((R+0),(R+8),4);
}
B4c4392:L4c4392:{c.instructions+=10;NFSU2_TR(0x4c4392);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c4395:{NFSU2_TR(0x4c4395);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa67ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B4c439c:{NFSU2_TR(0x4c439c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c439e:{NFSU2_TR(0x4c439e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c439f:{NFSU2_TR(0x4c439f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c43a2:{NFSU2_TR(0x4c43a2);
__builtin_memmove((R+8),(R+518),1);
}
B4c43a5:{NFSU2_TR(0x4c43a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c43a6:{NFSU2_TR(0x4c43a6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa67ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c43ad:{NFSU2_TR(0x4c43ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c43b1:{NFSU2_TR(0x4c43b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c43b2:L4c43b2:{c.instructions+=4;NFSU2_TR(0x4c43b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c43b4:{NFSU2_TR(0x4c43b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c43b5:{NFSU2_TR(0x4c43b5);
__builtin_memmove((R+4),(R+12),4);
}
B4c43b7:{NFSU2_TR(0x4c43b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c43baull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c43ba:L4c43ba:{c.instructions+=3;NFSU2_TR(0x4c43ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c43bc:{NFSU2_TR(0x4c43bc);
__builtin_memmove((R+4),(R+12),4);
}
B4c43be:{NFSU2_TR(0x4c43be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c43c1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c43c1:L4c43c1:{c.instructions+=2;NFSU2_TR(0x4c43c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c43c2:{NFSU2_TR(0x4c43c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c43d0:L4c43d0:{c.instructions+=6;NFSU2_TR(0x4c43d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c43d1:{NFSU2_TR(0x4c43d1);
__builtin_memmove((R+24),(R+4),4);
}
B4c43d3:{NFSU2_TR(0x4c43d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c43d6:{NFSU2_TR(0x4c43d6);
u8 U[4];
w4(U+0,u32(0xc03f9f19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c43db:{NFSU2_TR(0x4c43db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c43dc:{NFSU2_TR(0x4c43dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c43e1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c43e1:L4c43e1:{c.instructions+=6;NFSU2_TR(0x4c43e1);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c43e6:{NFSU2_TR(0x4c43e6);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c43ec:{NFSU2_TR(0x4c43ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c43ef:{NFSU2_TR(0x4c43ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c43f2:{NFSU2_TR(0x4c43f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c43f4:{NFSU2_TR(0x4c43f4);
if(r1(R+518)){{goto L4c43fb;}}
}
B4c43f6:L4c43f6:{c.instructions+=2;NFSU2_TR(0x4c43f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c43f9:{NFSU2_TR(0x4c43f9);
{goto L4c43fe;}
}
B4c43fb:L4c43fb:{c.instructions+=1;NFSU2_TR(0x4c43fb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c43fe:L4c43fe:{c.instructions+=2;NFSU2_TR(0x4c43fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4400:{NFSU2_TR(0x4c4400);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4406;}}
}
B4c4402:L4c4402:{c.instructions+=2;NFSU2_TR(0x4c4402);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c4404:{NFSU2_TR(0x4c4404);
{goto L4c4420;}
}
B4c4406:L4c4406:{c.instructions+=3;NFSU2_TR(0x4c4406);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c440b:{NFSU2_TR(0x4c440b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c440d:{NFSU2_TR(0x4c440d);
if(r1(R+518)){{goto L4c4414;}}
}
B4c440f:L4c440f:{c.instructions+=2;NFSU2_TR(0x4c440f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4412:{NFSU2_TR(0x4c4412);
{goto L4c4417;}
}
B4c4414:L4c4414:{c.instructions+=1;NFSU2_TR(0x4c4414);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4417:L4c4417:{c.instructions+=4;NFSU2_TR(0x4c4417);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c4419:{NFSU2_TR(0x4c4419);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c441b:{NFSU2_TR(0x4c441b);
__builtin_memmove((R+8),(R+518),1);
}
B4c441e:{NFSU2_TR(0x4c441e);
__builtin_memmove((R+0),(R+8),4);
}
B4c4420:L4c4420:{c.instructions+=10;NFSU2_TR(0x4c4420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4423:{NFSU2_TR(0x4c4423);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c4426:{NFSU2_TR(0x4c4426);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa67ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4c442d:{NFSU2_TR(0x4c442d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c442f:{NFSU2_TR(0x4c442f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c4431:{NFSU2_TR(0x4c4431);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff3942ull))));
}
B4c4436:{NFSU2_TR(0x4c4436);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xccfaull))));
}
B4c443b:{NFSU2_TR(0x4c443b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c443c:{NFSU2_TR(0x4c443c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c443d:{NFSU2_TR(0x4c443d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4442ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4442:L4c4442:{c.instructions+=3;NFSU2_TR(0x4c4442);
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
B4c4445:{NFSU2_TR(0x4c4445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4446:{NFSU2_TR(0x4c4446);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4450:L4c4450:{c.instructions+=10;NFSU2_TR(0x4c4450);
__builtin_memmove((R+8),gp(0x8900ac),4);
}
B4c4456:{NFSU2_TR(0x4c4456);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4458:{NFSU2_TR(0x4c4458);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c445d:{NFSU2_TR(0x4c445d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c445e:{NFSU2_TR(0x4c445e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c445f:{NFSU2_TR(0x4c445f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4460:{NFSU2_TR(0x4c4460);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c4463:{NFSU2_TR(0x4c4463);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4464:{NFSU2_TR(0x4c4464);
__builtin_memmove((R+28),(R+4),4);
}
B4c4466:{NFSU2_TR(0x4c4466);
if(r1(R+518)){{goto L4c446d;}}
}
B4c4468:L4c4468:{c.instructions+=2;NFSU2_TR(0x4c4468);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c446b:{NFSU2_TR(0x4c446b);
{goto L4c4470;}
}
B4c446d:L4c446d:{c.instructions+=1;NFSU2_TR(0x4c446d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4470:L4c4470:{c.instructions+=3;NFSU2_TR(0x4c4470);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4472:{NFSU2_TR(0x4c4472);
__builtin_memmove((R+12),gp(0x8900b0),4);
}
B4c4478:{NFSU2_TR(0x4c4478);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c447e;}}
}
B4c447a:L4c447a:{c.instructions+=2;NFSU2_TR(0x4c447a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c447c:{NFSU2_TR(0x4c447c);
{goto L4c4493;}
}
B4c447e:L4c447e:{c.instructions+=2;NFSU2_TR(0x4c447e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4480:{NFSU2_TR(0x4c4480);
if(r1(R+518)){{goto L4c4487;}}
}
B4c4482:L4c4482:{c.instructions+=2;NFSU2_TR(0x4c4482);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4485:{NFSU2_TR(0x4c4485);
{goto L4c448a;}
}
B4c4487:L4c4487:{c.instructions+=1;NFSU2_TR(0x4c4487);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c448a:L4c448a:{c.instructions+=4;NFSU2_TR(0x4c448a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c448c:{NFSU2_TR(0x4c448c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c448e:{NFSU2_TR(0x4c448e);
__builtin_memmove((R+4),(R+518),1);
}
B4c4491:{NFSU2_TR(0x4c4491);
__builtin_memmove((R+0),(R+4),4);
}
B4c4493:L4c4493:{c.instructions+=5;NFSU2_TR(0x4c4493);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c4497:{NFSU2_TR(0x4c4497);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c449d:{NFSU2_TR(0x4c449d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c44a0:{NFSU2_TR(0x4c44a0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B4c44a8:{NFSU2_TR(0x4c44a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c44b4;}}
}
B4c44aa:L4c44aa:{c.instructions+=2;NFSU2_TR(0x4c44aa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B4c44ab:{NFSU2_TR(0x4c44ab);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4c44c4;}}
}
B4c44ad:L4c44ad:{c.instructions+=2;NFSU2_TR(0x4c44ad);
w4(R+4,u32(0x4ull));
}
B4c44b2:{NFSU2_TR(0x4c44b2);
{goto L4c44c4;}
}
B4c44b4:L4c44b4:{c.instructions+=2;NFSU2_TR(0x4c44b4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c44ba:{NFSU2_TR(0x4c44ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c44c4;}}
}
B4c44bc:L4c44bc:{c.instructions+=3;NFSU2_TR(0x4c44bc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4c44bd:{NFSU2_TR(0x4c44bd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c44c0:{NFSU2_TR(0x4c44c0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c44c4;}}
}
B4c44c2:L4c44c2:{c.instructions+=1;NFSU2_TR(0x4c44c2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c44c4:L4c44c4:{c.instructions+=2;NFSU2_TR(0x4c44c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c44c6:{NFSU2_TR(0x4c44c6);
if(r1(R+518)){{goto L4c44cd;}}
}
B4c44c8:L4c44c8:{c.instructions+=2;NFSU2_TR(0x4c44c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c44cb:{NFSU2_TR(0x4c44cb);
{goto L4c44d0;}
}
B4c44cd:L4c44cd:{c.instructions+=1;NFSU2_TR(0x4c44cd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c44d0:L4c44d0:{c.instructions+=2;NFSU2_TR(0x4c44d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c44d2:{NFSU2_TR(0x4c44d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c44d8;}}
}
B4c44d4:L4c44d4:{c.instructions+=2;NFSU2_TR(0x4c44d4);
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
B4c44d6:{NFSU2_TR(0x4c44d6);
{goto L4c44ed;}
}
B4c44d8:L4c44d8:{c.instructions+=2;NFSU2_TR(0x4c44d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c44da:{NFSU2_TR(0x4c44da);
if(r1(R+518)){{goto L4c44e1;}}
}
B4c44dc:L4c44dc:{c.instructions+=2;NFSU2_TR(0x4c44dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c44df:{NFSU2_TR(0x4c44df);
{goto L4c44e4;}
}
B4c44e1:L4c44e1:{c.instructions+=1;NFSU2_TR(0x4c44e1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c44e4:L4c44e4:{c.instructions+=4;NFSU2_TR(0x4c44e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c44e6:{NFSU2_TR(0x4c44e6);
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
B4c44e8:{NFSU2_TR(0x4c44e8);
__builtin_memmove((R+8),(R+518),1);
}
B4c44eb:{NFSU2_TR(0x4c44eb);
__builtin_memmove((R+0),(R+8),4);
}
B4c44ed:L4c44ed:{c.instructions+=6;NFSU2_TR(0x4c44ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c44f0:{NFSU2_TR(0x4c44f0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c44f7:{NFSU2_TR(0x4c44f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c44f9:{NFSU2_TR(0x4c44f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c44fa:{NFSU2_TR(0x4c44fa);
__builtin_memmove((R+4),(R+28),4);
}
B4c44fc:{NFSU2_TR(0x4c44fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c44ffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c44ff:L4c44ff:{c.instructions+=3;NFSU2_TR(0x4c44ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c4501:{NFSU2_TR(0x4c4501);
__builtin_memmove((R+4),(R+28),4);
}
B4c4503:{NFSU2_TR(0x4c4503);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4506ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c4506:L4c4506:{c.instructions+=5;NFSU2_TR(0x4c4506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4507:{NFSU2_TR(0x4c4507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4508:{NFSU2_TR(0x4c4508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c4509:{NFSU2_TR(0x4c4509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c450a:{NFSU2_TR(0x4c450a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4510:L4c4510:{c.instructions+=7;NFSU2_TR(0x4c4510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4511:{NFSU2_TR(0x4c4511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4512:{NFSU2_TR(0x4c4512);
__builtin_memmove((R+28),(R+4),4);
}
B4c4514:{NFSU2_TR(0x4c4514);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4517:{NFSU2_TR(0x4c4517);
u8 U[4];
w4(U+0,u32(0x84bc378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c451c:{NFSU2_TR(0x4c451c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c451d:{NFSU2_TR(0x4c451d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4522ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4522:L4c4522:{c.instructions+=7;NFSU2_TR(0x4c4522);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c4527:{NFSU2_TR(0x4c4527);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c452d:{NFSU2_TR(0x4c452d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4530:{NFSU2_TR(0x4c4530);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c4533:{NFSU2_TR(0x4c4533);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c4535:{NFSU2_TR(0x4c4535);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4537:{NFSU2_TR(0x4c4537);
if(r1(R+518)){{goto L4c453e;}}
}
B4c4539:L4c4539:{c.instructions+=2;NFSU2_TR(0x4c4539);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c453c:{NFSU2_TR(0x4c453c);
{goto L4c4541;}
}
B4c453e:L4c453e:{c.instructions+=1;NFSU2_TR(0x4c453e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4541:L4c4541:{c.instructions+=2;NFSU2_TR(0x4c4541);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4543:{NFSU2_TR(0x4c4543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4549;}}
}
B4c4545:L4c4545:{c.instructions+=2;NFSU2_TR(0x4c4545);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c4547:{NFSU2_TR(0x4c4547);
{goto L4c4563;}
}
B4c4549:L4c4549:{c.instructions+=3;NFSU2_TR(0x4c4549);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c454e:{NFSU2_TR(0x4c454e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4550:{NFSU2_TR(0x4c4550);
if(r1(R+518)){{goto L4c4557;}}
}
B4c4552:L4c4552:{c.instructions+=2;NFSU2_TR(0x4c4552);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4555:{NFSU2_TR(0x4c4555);
{goto L4c455a;}
}
B4c4557:L4c4557:{c.instructions+=1;NFSU2_TR(0x4c4557);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c455a:L4c455a:{c.instructions+=4;NFSU2_TR(0x4c455a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c455c:{NFSU2_TR(0x4c455c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c455e:{NFSU2_TR(0x4c455e);
__builtin_memmove((R+8),(R+518),1);
}
B4c4561:{NFSU2_TR(0x4c4561);
__builtin_memmove((R+0),(R+8),4);
}
B4c4563:L4c4563:{c.instructions+=4;NFSU2_TR(0x4c4563);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c4566:{NFSU2_TR(0x4c4566);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B4c456e:{NFSU2_TR(0x4c456e);
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
B4c4571:{NFSU2_TR(0x4c4571);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c45d3;}}
}
B4c4573:L4c4573:{c.instructions+=1;NFSU2_TR(0x4c4573);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c45e4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c457a:L4c457a:{c.instructions+=5;NFSU2_TR(0x4c457a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c457d:{NFSU2_TR(0x4c457d);
w4(R+24,u32(0xd93f8f55ull));
}
B4c4582:{NFSU2_TR(0x4c4582);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4583:{NFSU2_TR(0x4c4583);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4584:{NFSU2_TR(0x4c4584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4589ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4589:L4c4589:{c.instructions+=4;NFSU2_TR(0x4c4589);
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
B4c458c:{NFSU2_TR(0x4c458c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c458d:{NFSU2_TR(0x4c458d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c458e:{NFSU2_TR(0x4c458e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c458f:L4c458f:{c.instructions+=5;NFSU2_TR(0x4c458f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4592:{NFSU2_TR(0x4c4592);
w4(R+24,u32(0xc44d3943ull));
}
B4c4597:{NFSU2_TR(0x4c4597);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4598:{NFSU2_TR(0x4c4598);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4599:{NFSU2_TR(0x4c4599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c459eull));
TAIL_STATIC(0x50c900u,50c);
}
B4c459e:L4c459e:{c.instructions+=4;NFSU2_TR(0x4c459e);
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
B4c45a1:{NFSU2_TR(0x4c45a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c45a2:{NFSU2_TR(0x4c45a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c45a3:{NFSU2_TR(0x4c45a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c45a4:L4c45a4:{c.instructions+=5;NFSU2_TR(0x4c45a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c45a7:{NFSU2_TR(0x4c45a7);
w4(R+24,u32(0x17fafc32ull));
}
B4c45ac:{NFSU2_TR(0x4c45ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c45ad:{NFSU2_TR(0x4c45ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c45ae:{NFSU2_TR(0x4c45ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c45b3ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c45b3:L4c45b3:{c.instructions+=4;NFSU2_TR(0x4c45b3);
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
B4c45b6:{NFSU2_TR(0x4c45b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c45b7:{NFSU2_TR(0x4c45b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c45b8:{NFSU2_TR(0x4c45b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c45b9:L4c45b9:{c.instructions+=5;NFSU2_TR(0x4c45b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c45bc:{NFSU2_TR(0x4c45bc);
w4(R+24,u32(0x1ea459f8ull));
}
B4c45c1:{NFSU2_TR(0x4c45c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c45c2:{NFSU2_TR(0x4c45c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c45c3:{NFSU2_TR(0x4c45c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c45c8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c45c8:L4c45c8:{c.instructions+=4;NFSU2_TR(0x4c45c8);
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
B4c45cb:{NFSU2_TR(0x4c45cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c45cc:{NFSU2_TR(0x4c45cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c45cd:{NFSU2_TR(0x4c45cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c45ce:L4c45ce:{c.instructions+=1;NFSU2_TR(0x4c45ce);
w4(R+24,u32(0xccfaull));
}
B4c45d3:L4c45d3:{c.instructions+=4;NFSU2_TR(0x4c45d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c45d6:{NFSU2_TR(0x4c45d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c45d7:{NFSU2_TR(0x4c45d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c45d8:{NFSU2_TR(0x4c45d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c45ddull));
TAIL_STATIC(0x50c900u,50c);
}
B4c45dd:L4c45dd:{c.instructions+=4;NFSU2_TR(0x4c45dd);
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
B4c45e0:{NFSU2_TR(0x4c45e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c45e1:{NFSU2_TR(0x4c45e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c45e2:{NFSU2_TR(0x4c45e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4600:L4c4600:{c.instructions+=5;NFSU2_TR(0x4c4600);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4604:{NFSU2_TR(0x4c4604);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4609:{NFSU2_TR(0x4c4609);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c460a:{NFSU2_TR(0x4c460a);
__builtin_memmove((R+12),(R+4),4);
}
B4c460c:{NFSU2_TR(0x4c460c);
if(r1(R+518)){{goto L4c4619;}}
}
B4c460e:L4c460e:{c.instructions+=2;NFSU2_TR(0x4c460e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c4613:{NFSU2_TR(0x4c4613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c46a2;}}
}
B4c4619:L4c4619:{c.instructions+=8;NFSU2_TR(0x4c4619);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c461e:{NFSU2_TR(0x4c461e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4621:{NFSU2_TR(0x4c4621);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4622:{NFSU2_TR(0x4c4622);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4623:{NFSU2_TR(0x4c4623);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B4c4629:{NFSU2_TR(0x4c4629);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c462b:{NFSU2_TR(0x4c462b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c462c:{NFSU2_TR(0x4c462c);
if(r1(R+518)){{goto L4c4633;}}
}
B4c462e:L4c462e:{c.instructions+=2;NFSU2_TR(0x4c462e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4631:{NFSU2_TR(0x4c4631);
{goto L4c4636;}
}
B4c4633:L4c4633:{c.instructions+=1;NFSU2_TR(0x4c4633);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4636:L4c4636:{c.instructions+=3;NFSU2_TR(0x4c4636);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4638:{NFSU2_TR(0x4c4638);
__builtin_memmove((R+20),gp(0x8900b0),4);
}
B4c463e:{NFSU2_TR(0x4c463e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4644;}}
}
B4c4640:L4c4640:{c.instructions+=2;NFSU2_TR(0x4c4640);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4642:{NFSU2_TR(0x4c4642);
{goto L4c4659;}
}
B4c4644:L4c4644:{c.instructions+=2;NFSU2_TR(0x4c4644);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4646:{NFSU2_TR(0x4c4646);
if(r1(R+518)){{goto L4c464d;}}
}
B4c4648:L4c4648:{c.instructions+=2;NFSU2_TR(0x4c4648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c464b:{NFSU2_TR(0x4c464b);
{goto L4c4650;}
}
B4c464d:L4c464d:{c.instructions+=1;NFSU2_TR(0x4c464d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4650:L4c4650:{c.instructions+=4;NFSU2_TR(0x4c4650);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c4652:{NFSU2_TR(0x4c4652);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4654:{NFSU2_TR(0x4c4654);
__builtin_memmove((R+8),(R+518),1);
}
B4c4657:{NFSU2_TR(0x4c4657);
__builtin_memmove((R+28),(R+8),4);
}
B4c4659:L4c4659:{c.instructions+=2;NFSU2_TR(0x4c4659);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c465b:{NFSU2_TR(0x4c465b);
if(r1(R+518)){{goto L4c4662;}}
}
B4c465d:L4c465d:{c.instructions+=2;NFSU2_TR(0x4c465d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4660:{NFSU2_TR(0x4c4660);
{goto L4c4665;}
}
B4c4662:L4c4662:{c.instructions+=1;NFSU2_TR(0x4c4662);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4665:L4c4665:{c.instructions+=2;NFSU2_TR(0x4c4665);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4667:{NFSU2_TR(0x4c4667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c466d;}}
}
B4c4669:L4c4669:{c.instructions+=2;NFSU2_TR(0x4c4669);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c466b:{NFSU2_TR(0x4c466b);
{goto L4c4682;}
}
B4c466d:L4c466d:{c.instructions+=2;NFSU2_TR(0x4c466d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c466f:{NFSU2_TR(0x4c466f);
if(r1(R+518)){{goto L4c4676;}}
}
B4c4671:L4c4671:{c.instructions+=2;NFSU2_TR(0x4c4671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4674:{NFSU2_TR(0x4c4674);
{goto L4c4679;}
}
B4c4676:L4c4676:{c.instructions+=1;NFSU2_TR(0x4c4676);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4679:L4c4679:{c.instructions+=4;NFSU2_TR(0x4c4679);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c467b:{NFSU2_TR(0x4c467b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c467d:{NFSU2_TR(0x4c467d);
__builtin_memmove((R+8),(R+518),1);
}
B4c4680:{NFSU2_TR(0x4c4680);
__builtin_memmove((R+0),(R+8),4);
}
B4c4682:L4c4682:{c.instructions+=10;NFSU2_TR(0x4c4682);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c4685:{NFSU2_TR(0x4c4685);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa69ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B4c468c:{NFSU2_TR(0x4c468c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c468e:{NFSU2_TR(0x4c468e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c468f:{NFSU2_TR(0x4c468f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c4692:{NFSU2_TR(0x4c4692);
__builtin_memmove((R+8),(R+518),1);
}
B4c4695:{NFSU2_TR(0x4c4695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4696:{NFSU2_TR(0x4c4696);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa69ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c469d:{NFSU2_TR(0x4c469d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c46a1:{NFSU2_TR(0x4c46a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c46a2:L4c46a2:{c.instructions+=4;NFSU2_TR(0x4c46a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c46a4:{NFSU2_TR(0x4c46a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c46a5:{NFSU2_TR(0x4c46a5);
__builtin_memmove((R+4),(R+12),4);
}
B4c46a7:{NFSU2_TR(0x4c46a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c46aaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c46aa:L4c46aa:{c.instructions+=3;NFSU2_TR(0x4c46aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c46ac:{NFSU2_TR(0x4c46ac);
__builtin_memmove((R+4),(R+12),4);
}
B4c46ae:{NFSU2_TR(0x4c46ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c46b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c46b1:L4c46b1:{c.instructions+=2;NFSU2_TR(0x4c46b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c46b2:{NFSU2_TR(0x4c46b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c46c0:L4c46c0:{c.instructions+=6;NFSU2_TR(0x4c46c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c46c1:{NFSU2_TR(0x4c46c1);
__builtin_memmove((R+24),(R+4),4);
}
B4c46c3:{NFSU2_TR(0x4c46c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c46c6:{NFSU2_TR(0x4c46c6);
u8 U[4];
w4(U+0,u32(0xc93fbfb5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c46cb:{NFSU2_TR(0x4c46cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c46cc:{NFSU2_TR(0x4c46cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c46d1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c46d1:L4c46d1:{c.instructions+=6;NFSU2_TR(0x4c46d1);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c46d6:{NFSU2_TR(0x4c46d6);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c46dc:{NFSU2_TR(0x4c46dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c46df:{NFSU2_TR(0x4c46df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c46e2:{NFSU2_TR(0x4c46e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c46e4:{NFSU2_TR(0x4c46e4);
if(r1(R+518)){{goto L4c46eb;}}
}
B4c46e6:L4c46e6:{c.instructions+=2;NFSU2_TR(0x4c46e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c46e9:{NFSU2_TR(0x4c46e9);
{goto L4c46ee;}
}
B4c46eb:L4c46eb:{c.instructions+=1;NFSU2_TR(0x4c46eb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c46ee:L4c46ee:{c.instructions+=2;NFSU2_TR(0x4c46ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c46f0:{NFSU2_TR(0x4c46f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c46f6;}}
}
B4c46f2:L4c46f2:{c.instructions+=2;NFSU2_TR(0x4c46f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c46f4:{NFSU2_TR(0x4c46f4);
{goto L4c4710;}
}
B4c46f6:L4c46f6:{c.instructions+=3;NFSU2_TR(0x4c46f6);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c46fb:{NFSU2_TR(0x4c46fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c46fd:{NFSU2_TR(0x4c46fd);
if(r1(R+518)){{goto L4c4704;}}
}
B4c46ff:L4c46ff:{c.instructions+=2;NFSU2_TR(0x4c46ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4702:{NFSU2_TR(0x4c4702);
{goto L4c4707;}
}
B4c4704:L4c4704:{c.instructions+=1;NFSU2_TR(0x4c4704);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c4707:L4c4707:{c.instructions+=4;NFSU2_TR(0x4c4707);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c4709:{NFSU2_TR(0x4c4709);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c470b:{NFSU2_TR(0x4c470b);
__builtin_memmove((R+8),(R+518),1);
}
B4c470e:{NFSU2_TR(0x4c470e);
__builtin_memmove((R+0),(R+8),4);
}
B4c4710:L4c4710:{c.instructions+=10;NFSU2_TR(0x4c4710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4713:{NFSU2_TR(0x4c4713);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c4716:{NFSU2_TR(0x4c4716);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa69ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4c471d:{NFSU2_TR(0x4c471d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4c471f:{NFSU2_TR(0x4c471f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c4721:{NFSU2_TR(0x4c4721);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff3942ull))));
}
B4c4726:{NFSU2_TR(0x4c4726);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xccfaull))));
}
B4c472b:{NFSU2_TR(0x4c472b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c472c:{NFSU2_TR(0x4c472c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c472d:{NFSU2_TR(0x4c472d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4732ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c4732:L4c4732:{c.instructions+=3;NFSU2_TR(0x4c4732);
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
B4c4735:{NFSU2_TR(0x4c4735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4736:{NFSU2_TR(0x4c4736);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4740:L4c4740:{c.instructions+=14;NFSU2_TR(0x4c4740);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4746:{NFSU2_TR(0x4c4746);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4748:{NFSU2_TR(0x4c4748);
u8 U[4];
w4(U+0,u32(0x773fa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c474d:{NFSU2_TR(0x4c474d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c474e:{NFSU2_TR(0x4c474e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4755:{NFSU2_TR(0x4c4755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c4758:{NFSU2_TR(0x4c4758);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4759:{NFSU2_TR(0x4c4759);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c475a:{NFSU2_TR(0x4c475a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c475b:{NFSU2_TR(0x4c475b);
__builtin_memmove((R+24),(R+4),4);
}
B4c475d:{NFSU2_TR(0x4c475d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c4760:{NFSU2_TR(0x4c4760);
u8 U[4];
w4(U+0,u32(0x1d7bb6c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4765:{NFSU2_TR(0x4c4765);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c476a:{NFSU2_TR(0x4c476a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c476full));
TAIL_STATIC(0x505450u,505);
}
B4c476f:L4c476f:{c.instructions+=3;NFSU2_TR(0x4c476f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4770:{NFSU2_TR(0x4c4770);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4771:{NFSU2_TR(0x4c4771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4776ull));
TAIL_STATIC(0x537a10u,537);
}
B4c4776:L4c4776:{c.instructions+=3;NFSU2_TR(0x4c4776);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c4779:{NFSU2_TR(0x4c4779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c477a:{NFSU2_TR(0x4c477a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c477full));
TAIL_STATIC(0x50c900u,50c);
}
B4c477f:L4c477f:{c.instructions+=5;NFSU2_TR(0x4c477f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c4782:{NFSU2_TR(0x4c4782);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c4785:{NFSU2_TR(0x4c4785);
u8 U[4];
w4(U+0,u32(0xd9dc2f12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c478a:{NFSU2_TR(0x4c478a);
u8 U[4];
w4(U+0,u32(0x795640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c478f:{NFSU2_TR(0x4c478f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4794ull));
TAIL_STATIC(0x505450u,505);
}
B4c4794:L4c4794:{c.instructions+=3;NFSU2_TR(0x4c4794);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4795:{NFSU2_TR(0x4c4795);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4796:{NFSU2_TR(0x4c4796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c479bull));
TAIL_STATIC(0x537a10u,537);
}
B4c479b:L4c479b:{c.instructions+=3;NFSU2_TR(0x4c479b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c479e:{NFSU2_TR(0x4c479e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c479f:{NFSU2_TR(0x4c479f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c47a4ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c47a4:L4c47a4:{c.instructions+=5;NFSU2_TR(0x4c47a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c47a7:{NFSU2_TR(0x4c47a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c47aa:{NFSU2_TR(0x4c47aa);
u8 U[4];
w4(U+0,u32(0x933dd695ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47af:{NFSU2_TR(0x4c47af);
u8 U[4];
w4(U+0,u32(0x7955e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47b4:{NFSU2_TR(0x4c47b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c47b9ull));
TAIL_STATIC(0x505450u,505);
}
B4c47b9:L4c47b9:{c.instructions+=3;NFSU2_TR(0x4c47b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47ba:{NFSU2_TR(0x4c47ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47bb:{NFSU2_TR(0x4c47bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c47c0ull));
TAIL_STATIC(0x537a10u,537);
}
B4c47c0:L4c47c0:{c.instructions+=3;NFSU2_TR(0x4c47c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c47c3:{NFSU2_TR(0x4c47c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47c4:{NFSU2_TR(0x4c47c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c47c9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c47c9:L4c47c9:{c.instructions+=5;NFSU2_TR(0x4c47c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c47cc:{NFSU2_TR(0x4c47cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c47cf:{NFSU2_TR(0x4c47cf);
u8 U[4];
w4(U+0,u32(0x8202c364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47d4:{NFSU2_TR(0x4c47d4);
u8 U[4];
w4(U+0,u32(0x7955d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47d9:{NFSU2_TR(0x4c47d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c47deull));
TAIL_STATIC(0x505450u,505);
}
B4c47de:L4c47de:{c.instructions+=3;NFSU2_TR(0x4c47de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47df:{NFSU2_TR(0x4c47df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47e0:{NFSU2_TR(0x4c47e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c47e5ull));
TAIL_STATIC(0x537a10u,537);
}
B4c47e5:L4c47e5:{c.instructions+=3;NFSU2_TR(0x4c47e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c47e8:{NFSU2_TR(0x4c47e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c47e9:{NFSU2_TR(0x4c47e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c47eeull));
TAIL_STATIC(0x50c900u,50c);
}
B4c47ee:L4c47ee:{c.instructions+=5;NFSU2_TR(0x4c47ee);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4c47f3:{NFSU2_TR(0x4c47f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c47f6:{NFSU2_TR(0x4c47f6);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B4c47f9:{NFSU2_TR(0x4c47f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c47fb:{NFSU2_TR(0x4c47fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c485f;}}
}
B4c47fd:L4c47fd:{c.instructions+=3;NFSU2_TR(0x4c47fd);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4c4802:{NFSU2_TR(0x4c4802);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4804:{NFSU2_TR(0x4c4804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c485f;}}
}
B4c4806:L4c4806:{c.instructions+=2;NFSU2_TR(0x4c4806);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4808:{NFSU2_TR(0x4c4808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c480dull));
TAIL_STATIC(0x575620u,575);
}
B4c480d:L4c480d:{c.instructions+=6;NFSU2_TR(0x4c480d);
__builtin_memmove((R+28),(R+0),4);
}
B4c480f:{NFSU2_TR(0x4c480f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4812:{NFSU2_TR(0x4c4812);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4816:{NFSU2_TR(0x4c4816);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4818:{NFSU2_TR(0x4c4818);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4820:{NFSU2_TR(0x4c4820);
if(r1(R+518)){{goto L4c484f;}}
}
B4c4822:L4c4822:{c.instructions+=11;NFSU2_TR(0x4c4822);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4824:{NFSU2_TR(0x4c4824);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c482a:{NFSU2_TR(0x4c482a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c482b:{NFSU2_TR(0x4c482b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4831:{NFSU2_TR(0x4c4831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4832:{NFSU2_TR(0x4c4832);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4838:{NFSU2_TR(0x4c4838);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4839:{NFSU2_TR(0x4c4839);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c483f:{NFSU2_TR(0x4c483f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4840:{NFSU2_TR(0x4c4840);
__builtin_memmove((R+4),(R+28),4);
}
B4c4842:{NFSU2_TR(0x4c4842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4847ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c4847:L4c4847:{c.instructions+=2;NFSU2_TR(0x4c4847);
u8 U[4];
w4(U+0,u32(0x795660ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c484d:{NFSU2_TR(0x4c484d);
{goto L4c4851;}
}
B4c484f:L4c484f:{c.instructions+=1;NFSU2_TR(0x4c484f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4851:L4c4851:{c.instructions+=5;NFSU2_TR(0x4c4851);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4853:{NFSU2_TR(0x4c4853);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4854:{NFSU2_TR(0x4c4854);
__builtin_memmove((R+4),(R+24),4);
}
B4c4856:{NFSU2_TR(0x4c4856);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c485a:{NFSU2_TR(0x4c485a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c485full));
TAIL_STATIC(0x54f170u,54f);
}
B4c485f:L4c485f:{c.instructions+=2;NFSU2_TR(0x4c485f);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4861:{NFSU2_TR(0x4c4861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4866ull));
TAIL_STATIC(0x575620u,575);
}
B4c4866:L4c4866:{c.instructions+=6;NFSU2_TR(0x4c4866);
__builtin_memmove((R+28),(R+0),4);
}
B4c4868:{NFSU2_TR(0x4c4868);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c486b:{NFSU2_TR(0x4c486b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c486f:{NFSU2_TR(0x4c486f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4871:{NFSU2_TR(0x4c4871);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4879:{NFSU2_TR(0x4c4879);
if(r1(R+518)){{goto L4c48aa;}}
}
B4c487b:L4c487b:{c.instructions+=11;NFSU2_TR(0x4c487b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c487d:{NFSU2_TR(0x4c487d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4883:{NFSU2_TR(0x4c4883);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4884:{NFSU2_TR(0x4c4884);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c488a:{NFSU2_TR(0x4c488a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c488b:{NFSU2_TR(0x4c488b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4891:{NFSU2_TR(0x4c4891);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4892:{NFSU2_TR(0x4c4892);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4898:{NFSU2_TR(0x4c4898);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4899:{NFSU2_TR(0x4c4899);
__builtin_memmove((R+4),(R+28),4);
}
B4c489b:{NFSU2_TR(0x4c489b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c48a0ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c48a0:L4c48a0:{c.instructions+=3;NFSU2_TR(0x4c48a0);
u8 U[4];
w4(U+0,u32(0x7955f0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c48a6:{NFSU2_TR(0x4c48a6);
__builtin_memmove((R+0),(R+28),4);
}
B4c48a8:{NFSU2_TR(0x4c48a8);
{goto L4c48ac;}
}
B4c48aa:L4c48aa:{c.instructions+=1;NFSU2_TR(0x4c48aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c48ac:L4c48ac:{c.instructions+=6;NFSU2_TR(0x4c48ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48ae:{NFSU2_TR(0x4c48ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48af:{NFSU2_TR(0x4c48af);
__builtin_memmove((R+4),(R+24),4);
}
B4c48b1:{NFSU2_TR(0x4c48b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c48b5:{NFSU2_TR(0x4c48b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c48bb:{NFSU2_TR(0x4c48bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c48c0ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c48c0:L4c48c0:{c.instructions+=2;NFSU2_TR(0x4c48c0);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48c2:{NFSU2_TR(0x4c48c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c48c7ull));
TAIL_STATIC(0x575620u,575);
}
B4c48c7:L4c48c7:{c.instructions+=6;NFSU2_TR(0x4c48c7);
__builtin_memmove((R+28),(R+0),4);
}
B4c48c9:{NFSU2_TR(0x4c48c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c48cc:{NFSU2_TR(0x4c48cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c48d0:{NFSU2_TR(0x4c48d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c48d2:{NFSU2_TR(0x4c48d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c48da:{NFSU2_TR(0x4c48da);
if(r1(R+518)){{goto L4c4909;}}
}
B4c48dc:L4c48dc:{c.instructions+=11;NFSU2_TR(0x4c48dc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48de:{NFSU2_TR(0x4c48de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c48e4:{NFSU2_TR(0x4c48e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48e5:{NFSU2_TR(0x4c48e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c48eb:{NFSU2_TR(0x4c48eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48ec:{NFSU2_TR(0x4c48ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c48f2:{NFSU2_TR(0x4c48f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48f3:{NFSU2_TR(0x4c48f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c48f9:{NFSU2_TR(0x4c48f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c48fa:{NFSU2_TR(0x4c48fa);
__builtin_memmove((R+4),(R+28),4);
}
B4c48fc:{NFSU2_TR(0x4c48fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4901ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c4901:L4c4901:{c.instructions+=2;NFSU2_TR(0x4c4901);
u8 U[4];
w4(U+0,u32(0x7956a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c4907:{NFSU2_TR(0x4c4907);
{goto L4c490b;}
}
B4c4909:L4c4909:{c.instructions+=1;NFSU2_TR(0x4c4909);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c490b:L4c490b:{c.instructions+=5;NFSU2_TR(0x4c490b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c490d:{NFSU2_TR(0x4c490d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c490e:{NFSU2_TR(0x4c490e);
__builtin_memmove((R+4),(R+24),4);
}
B4c4910:{NFSU2_TR(0x4c4910);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4914:{NFSU2_TR(0x4c4914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4919ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c4919:L4c4919:{c.instructions+=2;NFSU2_TR(0x4c4919);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c491b:{NFSU2_TR(0x4c491b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4920ull));
TAIL_STATIC(0x575620u,575);
}
B4c4920:L4c4920:{c.instructions+=6;NFSU2_TR(0x4c4920);
__builtin_memmove((R+28),(R+0),4);
}
B4c4922:{NFSU2_TR(0x4c4922);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4925:{NFSU2_TR(0x4c4925);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4929:{NFSU2_TR(0x4c4929);
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
B4c492b:{NFSU2_TR(0x4c492b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4933:{NFSU2_TR(0x4c4933);
if(r1(R+518)){{goto L4c497a;}}
}
B4c4935:L4c4935:{c.instructions+=2;NFSU2_TR(0x4c4935);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4936:{NFSU2_TR(0x4c4936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c493bull));
TAIL_STATIC(0x5b8240u,5b8);
}
B4c493b:L4c493b:{c.instructions+=2;NFSU2_TR(0x4c493b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c493f:{NFSU2_TR(0x4c493f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4944ull));
TAIL_STATIC(0x4a7ae0u,4a7);
}
B4c4944:L4c4944:{c.instructions+=13;NFSU2_TR(0x4c4944);
__builtin_memmove((R+12),(R+0),4);
}
B4c4946:{NFSU2_TR(0x4c4946);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c494a:{NFSU2_TR(0x4c494a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c494b:{NFSU2_TR(0x4c494b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4951:{NFSU2_TR(0x4c4951);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4952:{NFSU2_TR(0x4c4952);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4958:{NFSU2_TR(0x4c4958);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4959:{NFSU2_TR(0x4c4959);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c495f:{NFSU2_TR(0x4c495f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4960:{NFSU2_TR(0x4c4960);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4966:{NFSU2_TR(0x4c4966);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4967:{NFSU2_TR(0x4c4967);
__builtin_memmove((R+4),(R+28),4);
}
B4c4969:{NFSU2_TR(0x4c4969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c496eull));
TAIL_STATIC(0x51e230u,51e);
}
B4c496e:L4c496e:{c.instructions+=4;NFSU2_TR(0x4c496e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4971:{NFSU2_TR(0x4c4971);
u8 U[4];
w4(U+0,u32(0x791db0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c4977:{NFSU2_TR(0x4c4977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c4978:{NFSU2_TR(0x4c4978);
{goto L4c497c;}
}
B4c497a:L4c497a:{c.instructions+=1;NFSU2_TR(0x4c497a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c497c:L4c497c:{c.instructions+=5;NFSU2_TR(0x4c497c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c497e:{NFSU2_TR(0x4c497e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c497f:{NFSU2_TR(0x4c497f);
__builtin_memmove((R+4),(R+24),4);
}
B4c4981:{NFSU2_TR(0x4c4981);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4985:{NFSU2_TR(0x4c4985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c498aull));
TAIL_STATIC(0x54f170u,54f);
}
B4c498a:L4c498a:{c.instructions+=3;NFSU2_TR(0x4c498a);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c498c:{NFSU2_TR(0x4c498c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4992:{NFSU2_TR(0x4c4992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4997ull));
TAIL_STATIC(0x575620u,575);
}
B4c4997:L4c4997:{c.instructions+=6;NFSU2_TR(0x4c4997);
__builtin_memmove((R+28),(R+0),4);
}
B4c4999:{NFSU2_TR(0x4c4999);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c499c:{NFSU2_TR(0x4c499c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c49a0:{NFSU2_TR(0x4c49a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c49a2:{NFSU2_TR(0x4c49a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c49aa:{NFSU2_TR(0x4c49aa);
if(r1(R+518)){{goto L4c49d9;}}
}
B4c49ac:L4c49ac:{c.instructions+=11;NFSU2_TR(0x4c49ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49ae:{NFSU2_TR(0x4c49ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c49b4:{NFSU2_TR(0x4c49b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49b5:{NFSU2_TR(0x4c49b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c49bb:{NFSU2_TR(0x4c49bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49bc:{NFSU2_TR(0x4c49bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c49c2:{NFSU2_TR(0x4c49c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49c3:{NFSU2_TR(0x4c49c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c49c9:{NFSU2_TR(0x4c49c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49ca:{NFSU2_TR(0x4c49ca);
__builtin_memmove((R+4),(R+28),4);
}
B4c49cc:{NFSU2_TR(0x4c49cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c49d1ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c49d1:L4c49d1:{c.instructions+=2;NFSU2_TR(0x4c49d1);
u8 U[4];
w4(U+0,u32(0x7956f0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c49d7:{NFSU2_TR(0x4c49d7);
{goto L4c49db;}
}
B4c49d9:L4c49d9:{c.instructions+=1;NFSU2_TR(0x4c49d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c49db:L4c49db:{c.instructions+=5;NFSU2_TR(0x4c49db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49dd:{NFSU2_TR(0x4c49dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49de:{NFSU2_TR(0x4c49de);
__builtin_memmove((R+4),(R+24),4);
}
B4c49e0:{NFSU2_TR(0x4c49e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c49e4:{NFSU2_TR(0x4c49e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c49e9ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c49e9:L4c49e9:{c.instructions+=3;NFSU2_TR(0x4c49e9);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4c49ee:{NFSU2_TR(0x4c49ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c49f0:{NFSU2_TR(0x4c49f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4b5a;}}
}
B4c49f6:L4c49f6:{c.instructions+=2;NFSU2_TR(0x4c49f6);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c49f8:{NFSU2_TR(0x4c49f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c49fdull));
TAIL_STATIC(0x575620u,575);
}
B4c49fd:L4c49fd:{c.instructions+=6;NFSU2_TR(0x4c49fd);
__builtin_memmove((R+28),(R+0),4);
}
B4c49ff:{NFSU2_TR(0x4c49ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4a02:{NFSU2_TR(0x4c4a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4a06:{NFSU2_TR(0x4c4a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4a08:{NFSU2_TR(0x4c4a08);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4a10:{NFSU2_TR(0x4c4a10);
if(r1(R+518)){{goto L4c4a3f;}}
}
B4c4a12:L4c4a12:{c.instructions+=11;NFSU2_TR(0x4c4a12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a14:{NFSU2_TR(0x4c4a14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4a1a:{NFSU2_TR(0x4c4a1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a1b:{NFSU2_TR(0x4c4a1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4a21:{NFSU2_TR(0x4c4a21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a22:{NFSU2_TR(0x4c4a22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4a28:{NFSU2_TR(0x4c4a28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a29:{NFSU2_TR(0x4c4a29);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4a2f:{NFSU2_TR(0x4c4a2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a30:{NFSU2_TR(0x4c4a30);
__builtin_memmove((R+4),(R+28),4);
}
B4c4a32:{NFSU2_TR(0x4c4a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4a37ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c4a37:L4c4a37:{c.instructions+=2;NFSU2_TR(0x4c4a37);
u8 U[4];
w4(U+0,u32(0x795738ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c4a3d:{NFSU2_TR(0x4c4a3d);
{goto L4c4a41;}
}
B4c4a3f:L4c4a3f:{c.instructions+=1;NFSU2_TR(0x4c4a3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4a41:L4c4a41:{c.instructions+=5;NFSU2_TR(0x4c4a41);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a43:{NFSU2_TR(0x4c4a43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a44:{NFSU2_TR(0x4c4a44);
__builtin_memmove((R+4),(R+24),4);
}
B4c4a46:{NFSU2_TR(0x4c4a46);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4a4a:{NFSU2_TR(0x4c4a4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4a4full));
TAIL_STATIC(0x54f170u,54f);
}
B4c4a4f:L4c4a4f:{c.instructions+=2;NFSU2_TR(0x4c4a4f);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a51:{NFSU2_TR(0x4c4a51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4a56ull));
TAIL_STATIC(0x575620u,575);
}
B4c4a56:L4c4a56:{c.instructions+=6;NFSU2_TR(0x4c4a56);
__builtin_memmove((R+28),(R+0),4);
}
B4c4a58:{NFSU2_TR(0x4c4a58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4a5b:{NFSU2_TR(0x4c4a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4a5f:{NFSU2_TR(0x4c4a5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4a61:{NFSU2_TR(0x4c4a61);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4a69:{NFSU2_TR(0x4c4a69);
if(r1(R+518)){{goto L4c4a98;}}
}
B4c4a6b:L4c4a6b:{c.instructions+=11;NFSU2_TR(0x4c4a6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a6d:{NFSU2_TR(0x4c4a6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4a73:{NFSU2_TR(0x4c4a73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a74:{NFSU2_TR(0x4c4a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4a7a:{NFSU2_TR(0x4c4a7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a7b:{NFSU2_TR(0x4c4a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4a81:{NFSU2_TR(0x4c4a81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a82:{NFSU2_TR(0x4c4a82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4a88:{NFSU2_TR(0x4c4a88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a89:{NFSU2_TR(0x4c4a89);
__builtin_memmove((R+4),(R+28),4);
}
B4c4a8b:{NFSU2_TR(0x4c4a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4a90ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c4a90:L4c4a90:{c.instructions+=2;NFSU2_TR(0x4c4a90);
u8 U[4];
w4(U+0,u32(0x795780ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c4a96:{NFSU2_TR(0x4c4a96);
{goto L4c4a9a;}
}
B4c4a98:L4c4a98:{c.instructions+=1;NFSU2_TR(0x4c4a98);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4a9a:L4c4a9a:{c.instructions+=5;NFSU2_TR(0x4c4a9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a9c:{NFSU2_TR(0x4c4a9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4a9d:{NFSU2_TR(0x4c4a9d);
__builtin_memmove((R+4),(R+24),4);
}
B4c4a9f:{NFSU2_TR(0x4c4a9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4aa3:{NFSU2_TR(0x4c4aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4aa8ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c4aa8:L4c4aa8:{c.instructions+=2;NFSU2_TR(0x4c4aa8);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4aaa:{NFSU2_TR(0x4c4aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4aafull));
TAIL_STATIC(0x575620u,575);
}
B4c4aaf:L4c4aaf:{c.instructions+=6;NFSU2_TR(0x4c4aaf);
__builtin_memmove((R+28),(R+0),4);
}
B4c4ab1:{NFSU2_TR(0x4c4ab1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4ab4:{NFSU2_TR(0x4c4ab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4ab8:{NFSU2_TR(0x4c4ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4aba:{NFSU2_TR(0x4c4aba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4ac2:{NFSU2_TR(0x4c4ac2);
if(r1(R+518)){{goto L4c4af1;}}
}
B4c4ac4:L4c4ac4:{c.instructions+=11;NFSU2_TR(0x4c4ac4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ac6:{NFSU2_TR(0x4c4ac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4acc:{NFSU2_TR(0x4c4acc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4acd:{NFSU2_TR(0x4c4acd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4ad3:{NFSU2_TR(0x4c4ad3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ad4:{NFSU2_TR(0x4c4ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4ada:{NFSU2_TR(0x4c4ada);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4adb:{NFSU2_TR(0x4c4adb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4ae1:{NFSU2_TR(0x4c4ae1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ae2:{NFSU2_TR(0x4c4ae2);
__builtin_memmove((R+4),(R+28),4);
}
B4c4ae4:{NFSU2_TR(0x4c4ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4ae9ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c4ae9:L4c4ae9:{c.instructions+=2;NFSU2_TR(0x4c4ae9);
u8 U[4];
w4(U+0,u32(0x795810ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c4aef:{NFSU2_TR(0x4c4aef);
{goto L4c4af3;}
}
B4c4af1:L4c4af1:{c.instructions+=1;NFSU2_TR(0x4c4af1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4af3:L4c4af3:{c.instructions+=5;NFSU2_TR(0x4c4af3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4af5:{NFSU2_TR(0x4c4af5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4af6:{NFSU2_TR(0x4c4af6);
__builtin_memmove((R+4),(R+24),4);
}
B4c4af8:{NFSU2_TR(0x4c4af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4afc:{NFSU2_TR(0x4c4afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4b01ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c4b01:L4c4b01:{c.instructions+=2;NFSU2_TR(0x4c4b01);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b03:{NFSU2_TR(0x4c4b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4b08ull));
TAIL_STATIC(0x575620u,575);
}
B4c4b08:L4c4b08:{c.instructions+=6;NFSU2_TR(0x4c4b08);
__builtin_memmove((R+28),(R+0),4);
}
B4c4b0a:{NFSU2_TR(0x4c4b0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4b0d:{NFSU2_TR(0x4c4b0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4b11:{NFSU2_TR(0x4c4b11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4b13:{NFSU2_TR(0x4c4b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4b1b:{NFSU2_TR(0x4c4b1b);
if(r1(R+518)){{goto L4c4b4a;}}
}
B4c4b1d:L4c4b1d:{c.instructions+=11;NFSU2_TR(0x4c4b1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b1f:{NFSU2_TR(0x4c4b1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4b25:{NFSU2_TR(0x4c4b25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b26:{NFSU2_TR(0x4c4b26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4b2c:{NFSU2_TR(0x4c4b2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b2d:{NFSU2_TR(0x4c4b2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4b33:{NFSU2_TR(0x4c4b33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b34:{NFSU2_TR(0x4c4b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4b3a:{NFSU2_TR(0x4c4b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b3b:{NFSU2_TR(0x4c4b3b);
__builtin_memmove((R+4),(R+28),4);
}
B4c4b3d:{NFSU2_TR(0x4c4b3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4b42ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c4b42:L4c4b42:{c.instructions+=2;NFSU2_TR(0x4c4b42);
u8 U[4];
w4(U+0,u32(0x795858ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c4b48:{NFSU2_TR(0x4c4b48);
{goto L4c4b4c;}
}
B4c4b4a:L4c4b4a:{c.instructions+=1;NFSU2_TR(0x4c4b4a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4b4c:L4c4b4c:{c.instructions+=5;NFSU2_TR(0x4c4b4c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b4e:{NFSU2_TR(0x4c4b4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b4f:{NFSU2_TR(0x4c4b4f);
__builtin_memmove((R+4),(R+24),4);
}
B4c4b51:{NFSU2_TR(0x4c4b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4b55:{NFSU2_TR(0x4c4b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4b5aull));
TAIL_STATIC(0x54f170u,54f);
}
B4c4b5a:L4c4b5a:{c.instructions+=2;NFSU2_TR(0x4c4b5a);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b5c:{NFSU2_TR(0x4c4b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4b61ull));
TAIL_STATIC(0x575620u,575);
}
B4c4b61:L4c4b61:{c.instructions+=6;NFSU2_TR(0x4c4b61);
__builtin_memmove((R+28),(R+0),4);
}
B4c4b63:{NFSU2_TR(0x4c4b63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4b66:{NFSU2_TR(0x4c4b66);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4b6a:{NFSU2_TR(0x4c4b6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4b6c:{NFSU2_TR(0x4c4b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4b74:{NFSU2_TR(0x4c4b74);
if(r1(R+518)){{goto L4c4ba3;}}
}
B4c4b76:L4c4b76:{c.instructions+=11;NFSU2_TR(0x4c4b76);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b78:{NFSU2_TR(0x4c4b78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4b7e:{NFSU2_TR(0x4c4b7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b7f:{NFSU2_TR(0x4c4b7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c4b85:{NFSU2_TR(0x4c4b85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b86:{NFSU2_TR(0x4c4b86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4b8c:{NFSU2_TR(0x4c4b8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b8d:{NFSU2_TR(0x4c4b8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c4b93:{NFSU2_TR(0x4c4b93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4b94:{NFSU2_TR(0x4c4b94);
__builtin_memmove((R+4),(R+28),4);
}
B4c4b96:{NFSU2_TR(0x4c4b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4b9bull));
TAIL_STATIC(0x51e230u,51e);
}
B4c4b9b:L4c4b9b:{c.instructions+=2;NFSU2_TR(0x4c4b9b);
u8 U[4];
w4(U+0,u32(0x7957c8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c4ba1:{NFSU2_TR(0x4c4ba1);
{goto L4c4ba5;}
}
B4c4ba3:L4c4ba3:{c.instructions+=1;NFSU2_TR(0x4c4ba3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c4ba5:L4c4ba5:{c.instructions+=5;NFSU2_TR(0x4c4ba5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ba7:{NFSU2_TR(0x4c4ba7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ba8:{NFSU2_TR(0x4c4ba8);
__builtin_memmove((R+4),(R+24),4);
}
B4c4baa:{NFSU2_TR(0x4c4baa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4bae:{NFSU2_TR(0x4c4bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4bb3ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c4bb3:L4c4bb3:{c.instructions+=7;NFSU2_TR(0x4c4bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4bb7:{NFSU2_TR(0x4c4bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4bb8:{NFSU2_TR(0x4c4bb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4bb9:{NFSU2_TR(0x4c4bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c4bba:{NFSU2_TR(0x4c4bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4bc1:{NFSU2_TR(0x4c4bc1);
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
B4c4bc4:{NFSU2_TR(0x4c4bc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4bd0:L4c4bd0:{c.instructions+=7;NFSU2_TR(0x4c4bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4bd1:{NFSU2_TR(0x4c4bd1);
__builtin_memmove((R+24),(R+4),4);
}
B4c4bd3:{NFSU2_TR(0x4c4bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4bd6:{NFSU2_TR(0x4c4bd6);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4bdb:{NFSU2_TR(0x4c4bdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4bdc:{NFSU2_TR(0x4c4bdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c4be3:{NFSU2_TR(0x4c4be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4be8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c4be8:L4c4be8:{c.instructions+=2;NFSU2_TR(0x4c4be8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4be9:{NFSU2_TR(0x4c4be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4beeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c4bee:L4c4bee:{c.instructions+=4;NFSU2_TR(0x4c4bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4bf1:{NFSU2_TR(0x4c4bf1);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4bf6:{NFSU2_TR(0x4c4bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4bf7:{NFSU2_TR(0x4c4bf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4bfcull));
TAIL_STATIC(0x5379c0u,537);
}
B4c4bfc:L4c4bfc:{c.instructions+=2;NFSU2_TR(0x4c4bfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4bfd:{NFSU2_TR(0x4c4bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c02ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c4c02:L4c4c02:{c.instructions+=4;NFSU2_TR(0x4c4c02);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B4c4c07:{NFSU2_TR(0x4c4c07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c4c0a:{NFSU2_TR(0x4c4c0a);
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
B4c4c0d:{NFSU2_TR(0x4c4c0d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c4c63;}}
}
B4c4c0f:L4c4c0f:{c.instructions+=1;NFSU2_TR(0x4c4c0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c4c7cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c4c16:L4c4c16:{c.instructions+=2;NFSU2_TR(0x4c4c16);
__builtin_memmove((R+4),(R+24),4);
}
B4c4c18:{NFSU2_TR(0x4c4c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c1dull));
TAIL_STATIC(0x4c3370u,4c3);
}
B4c4c1d:L4c4c1d:{c.instructions+=1;NFSU2_TR(0x4c4c1d);
{goto L4c4c63;}
}
B4c4c1f:L4c4c1f:{c.instructions+=2;NFSU2_TR(0x4c4c1f);
__builtin_memmove((R+4),(R+24),4);
}
B4c4c21:{NFSU2_TR(0x4c4c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c26ull));
TAIL_STATIC(0x4c36c0u,4c3);
}
B4c4c26:L4c4c26:{c.instructions+=1;NFSU2_TR(0x4c4c26);
{goto L4c4c63;}
}
B4c4c28:L4c4c28:{c.instructions+=2;NFSU2_TR(0x4c4c28);
__builtin_memmove((R+4),(R+24),4);
}
B4c4c2a:{NFSU2_TR(0x4c4c2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c2full));
TAIL_STATIC(0x4c38f0u,4c3);
}
B4c4c2f:L4c4c2f:{c.instructions+=1;NFSU2_TR(0x4c4c2f);
{goto L4c4c63;}
}
B4c4c31:L4c4c31:{c.instructions+=2;NFSU2_TR(0x4c4c31);
__builtin_memmove((R+4),(R+24),4);
}
B4c4c33:{NFSU2_TR(0x4c4c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c4740u);}goto L4c4740;}
}
B4c4c38:L4c4c38:{c.instructions+=4;NFSU2_TR(0x4c4c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4c3b:{NFSU2_TR(0x4c4c3b);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c40:{NFSU2_TR(0x4c4c40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c41:{NFSU2_TR(0x4c4c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c46ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c4c46:L4c4c46:{c.instructions+=2;NFSU2_TR(0x4c4c46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c47:{NFSU2_TR(0x4c4c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c4cull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c4c4c:L4c4c4c:{c.instructions+=4;NFSU2_TR(0x4c4c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4c4f:{NFSU2_TR(0x4c4c4f);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c54:{NFSU2_TR(0x4c4c54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c55:{NFSU2_TR(0x4c4c55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c5aull));
TAIL_STATIC(0x5379c0u,537);
}
B4c4c5a:L4c4c5a:{c.instructions+=2;NFSU2_TR(0x4c4c5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c5b:{NFSU2_TR(0x4c4c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c60ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c4c60:L4c4c60:{c.instructions+=1;NFSU2_TR(0x4c4c60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c4c63:L4c4c63:{c.instructions+=3;NFSU2_TR(0x4c4c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4c66:{NFSU2_TR(0x4c4c66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c67:{NFSU2_TR(0x4c4c67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c6cull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4c4c6c:L4c4c6c:{c.instructions+=4;NFSU2_TR(0x4c4c6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c4c6f:{NFSU2_TR(0x4c4c6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c70:{NFSU2_TR(0x4c4c70);
__builtin_memmove((R+4),(R+24),4);
}
B4c4c72:{NFSU2_TR(0x4c4c72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4c77ull));
TAIL_STATIC(0x539650u,539);
}
B4c4c77:L4c4c77:{c.instructions+=2;NFSU2_TR(0x4c4c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4c78:{NFSU2_TR(0x4c4c78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4c90:L4c4c90:{c.instructions+=12;NFSU2_TR(0x4c4c90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c92:{NFSU2_TR(0x4c4c92);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c97:{NFSU2_TR(0x4c4c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4c9d:{NFSU2_TR(0x4c4c9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4c9e:{NFSU2_TR(0x4c4c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4ca5:{NFSU2_TR(0x4c4ca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ca6:{NFSU2_TR(0x4c4ca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4caa:{NFSU2_TR(0x4c4caa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4cab:{NFSU2_TR(0x4c4cab);
__builtin_memmove((R+24),(R+4),4);
}
B4c4cad:{NFSU2_TR(0x4c4cad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4cae:{NFSU2_TR(0x4c4cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4cb2:{NFSU2_TR(0x4c4cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4cb7ull));
TAIL_STATIC(0x551de0u,551);
}
B4c4cb7:L4c4cb7:{c.instructions+=12;NFSU2_TR(0x4c4cb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c4cb9:{NFSU2_TR(0x4c4cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4cbc:{NFSU2_TR(0x4c4cbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c4cbf:{NFSU2_TR(0x4c4cbf);
u8 U[4];
w4(U+0,u32(0x790758ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c4cc5:{NFSU2_TR(0x4c4cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4cc8:{NFSU2_TR(0x4c4cc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4ccc:{NFSU2_TR(0x4c4ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4ccf:{NFSU2_TR(0x4c4ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4cd2:{NFSU2_TR(0x4c4cd2);
u8 U[4];
w4(U+0,u32(0x3c44a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4cd7:{NFSU2_TR(0x4c4cd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4cd8:{NFSU2_TR(0x4c4cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c4cdf:{NFSU2_TR(0x4c4cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4ce4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c4ce4:L4c4ce4:{c.instructions+=2;NFSU2_TR(0x4c4ce4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ce5:{NFSU2_TR(0x4c4ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4ceaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c4cea:L4c4cea:{c.instructions+=4;NFSU2_TR(0x4c4cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4ced:{NFSU2_TR(0x4c4ced);
u8 U[4];
w4(U+0,u32(0x3b35a98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4cf2:{NFSU2_TR(0x4c4cf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4cf3:{NFSU2_TR(0x4c4cf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4cf8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4c4cf8:L4c4cf8:{c.instructions+=2;NFSU2_TR(0x4c4cf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4cf9:{NFSU2_TR(0x4c4cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4cfeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c4cfe:L4c4cfe:{c.instructions+=4;NFSU2_TR(0x4c4cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4d01:{NFSU2_TR(0x4c4d01);
u8 U[4];
w4(U+0,u32(0xb08e7468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4d06:{NFSU2_TR(0x4c4d06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4d07:{NFSU2_TR(0x4c4d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4d0cull));
TAIL_STATIC(0x5379c0u,537);
}
B4c4d0c:L4c4d0c:{c.instructions+=2;NFSU2_TR(0x4c4d0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4d0d:{NFSU2_TR(0x4c4d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4d12ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c4d12:L4c4d12:{c.instructions+=7;NFSU2_TR(0x4c4d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4d16:{NFSU2_TR(0x4c4d16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4c4d19:{NFSU2_TR(0x4c4d19);
__builtin_memmove((R+0),(R+24),4);
}
B4c4d1b:{NFSU2_TR(0x4c4d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4d1c:{NFSU2_TR(0x4c4d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c4d23:{NFSU2_TR(0x4c4d23);
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
B4c4d26:{NFSU2_TR(0x4c4d26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4d30:L4c4d30:{c.instructions+=3;NFSU2_TR(0x4c4d30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4d31:{NFSU2_TR(0x4c4d31);
__builtin_memmove((R+24),(R+4),4);
}
B4c4d33:{NFSU2_TR(0x4c4d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4d38ull));
TAIL_STATIC(0x4a8410u,4a8);
}
B4c4d38:L4c4d38:{c.instructions+=3;NFSU2_TR(0x4c4d38);
__builtin_memmove((R+0),(R+24),4);
}
B4c4d3a:{NFSU2_TR(0x4c4d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4d3b:{NFSU2_TR(0x4c4d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4d40:L4c4d40:{c.instructions+=7;NFSU2_TR(0x4c4d40);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c4d45:{NFSU2_TR(0x4c4d45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4d46:{NFSU2_TR(0x4c4d46);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c4d48:{NFSU2_TR(0x4c4d48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4d4b:{NFSU2_TR(0x4c4d4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4d4c:{NFSU2_TR(0x4c4d4c);
__builtin_memmove((R+28),(R+4),4);
}
B4c4d4e:{NFSU2_TR(0x4c4d4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4e8a;}}
}
B4c4d54:L4c4d54:{c.instructions+=4;NFSU2_TR(0x4c4d54);
__builtin_memmove((R+0),gp(0x863444),4);
}
B4c4d59:{NFSU2_TR(0x4c4d59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4d5b:{NFSU2_TR(0x4c4d5b);
__builtin_memmove((R+8),gp(0x8654a4),4);
}
B4c4d61:{NFSU2_TR(0x4c4d61);
if(r1(R+518)){{goto L4c4e13;}}
}
B4c4d67:L4c4d67:{c.instructions+=3;NFSU2_TR(0x4c4d67);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B4c4d6d:{NFSU2_TR(0x4c4d6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4d6f:{NFSU2_TR(0x4c4d6f);
if(r1(R+518)){{goto L4c4e13;}}
}
B4c4d75:L4c4d75:{c.instructions+=2;NFSU2_TR(0x4c4d75);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4d78:{NFSU2_TR(0x4c4d78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4e13;}}
}
B4c4d7e:L4c4d7e:{c.instructions+=6;NFSU2_TR(0x4c4d7e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4c4d80:{NFSU2_TR(0x4c4d80);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4c4d82:{NFSU2_TR(0x4c4d82);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4c4d84:{NFSU2_TR(0x4c4d84);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fc8d0d0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c4d8b:{NFSU2_TR(0x4c4d8b);
__builtin_memmove((R+24),(R+8),4);
}
B4c4d8d:{NFSU2_TR(0x4c4d8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4d94;}}
}
B4c4d8f:L4c4d8f:{c.instructions+=1;NFSU2_TR(0x4c4d8f);
w4(R+24,u32(0x401ull));
}
B4c4d94:L4c4d94:{c.instructions+=3;NFSU2_TR(0x4c4d94);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4c4d98:{NFSU2_TR(0x4c4d98);
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
B4c4d9b:{NFSU2_TR(0x4c4d9b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c4e94;}}
}
B4c4da1:L4c4da1:{c.instructions+=1;NFSU2_TR(0x4c4da1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c4ea0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c4da8:L4c4da8:{c.instructions+=4;NFSU2_TR(0x4c4da8);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x8ull))));
}
B4c4dab:{NFSU2_TR(0x4c4dab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4dac:{NFSU2_TR(0x4c4dac);
__builtin_memmove((R+4),(R+28),4);
}
B4c4dae:{NFSU2_TR(0x4c4dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4db3ull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4db3:L4c4db3:{c.instructions+=3;NFSU2_TR(0x4c4db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4db4:{NFSU2_TR(0x4c4db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4db5:{NFSU2_TR(0x4c4db5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4db6:L4c4db6:{c.instructions+=4;NFSU2_TR(0x4c4db6);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10ull))));
}
B4c4db9:{NFSU2_TR(0x4c4db9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4dba:{NFSU2_TR(0x4c4dba);
__builtin_memmove((R+4),(R+28),4);
}
B4c4dbc:{NFSU2_TR(0x4c4dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4dc1ull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4dc1:L4c4dc1:{c.instructions+=3;NFSU2_TR(0x4c4dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4dc2:{NFSU2_TR(0x4c4dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4dc3:{NFSU2_TR(0x4c4dc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4dc4:L4c4dc4:{c.instructions+=4;NFSU2_TR(0x4c4dc4);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x20ull))));
}
B4c4dc7:{NFSU2_TR(0x4c4dc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4dc8:{NFSU2_TR(0x4c4dc8);
__builtin_memmove((R+4),(R+28),4);
}
B4c4dca:{NFSU2_TR(0x4c4dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4dcfull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4dcf:L4c4dcf:{c.instructions+=3;NFSU2_TR(0x4c4dcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4dd0:{NFSU2_TR(0x4c4dd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4dd1:{NFSU2_TR(0x4c4dd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4dd2:L4c4dd2:{c.instructions+=4;NFSU2_TR(0x4c4dd2);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x40ull))));
}
B4c4dd5:{NFSU2_TR(0x4c4dd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4dd6:{NFSU2_TR(0x4c4dd6);
__builtin_memmove((R+4),(R+28),4);
}
B4c4dd8:{NFSU2_TR(0x4c4dd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4dddull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4ddd:L4c4ddd:{c.instructions+=3;NFSU2_TR(0x4c4ddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4dde:{NFSU2_TR(0x4c4dde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4ddf:{NFSU2_TR(0x4c4ddf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4de0:L4c4de0:{c.instructions+=4;NFSU2_TR(0x4c4de0);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x80ull))));
}
B4c4de6:{NFSU2_TR(0x4c4de6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4de7:{NFSU2_TR(0x4c4de7);
__builtin_memmove((R+4),(R+28),4);
}
B4c4de9:{NFSU2_TR(0x4c4de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4deeull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4dee:L4c4dee:{c.instructions+=3;NFSU2_TR(0x4c4dee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4def:{NFSU2_TR(0x4c4def);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4df0:{NFSU2_TR(0x4c4df0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4df1:L4c4df1:{c.instructions+=4;NFSU2_TR(0x4c4df1);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x100ull))));
}
B4c4df7:{NFSU2_TR(0x4c4df7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4df8:{NFSU2_TR(0x4c4df8);
__builtin_memmove((R+4),(R+28),4);
}
B4c4dfa:{NFSU2_TR(0x4c4dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4dffull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4dff:L4c4dff:{c.instructions+=3;NFSU2_TR(0x4c4dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4e00:{NFSU2_TR(0x4c4e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4e01:{NFSU2_TR(0x4c4e01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4e02:L4c4e02:{c.instructions+=4;NFSU2_TR(0x4c4e02);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x200ull))));
}
B4c4e08:{NFSU2_TR(0x4c4e08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4e09:{NFSU2_TR(0x4c4e09);
__builtin_memmove((R+4),(R+28),4);
}
B4c4e0b:{NFSU2_TR(0x4c4e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4e10ull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4e10:L4c4e10:{c.instructions+=3;NFSU2_TR(0x4c4e10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4e11:{NFSU2_TR(0x4c4e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4e12:{NFSU2_TR(0x4c4e12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4e13:L4c4e13:{c.instructions+=2;NFSU2_TR(0x4c4e13);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4e16:{NFSU2_TR(0x4c4e16);
if(r1(R+518)){{goto L4c4e1d;}}
}
B4c4e18:L4c4e18:{c.instructions+=2;NFSU2_TR(0x4c4e18);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4e1b:{NFSU2_TR(0x4c4e1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4e94;}}
}
B4c4e1d:L4c4e1d:{c.instructions+=3;NFSU2_TR(0x4c4e1d);
u8 U[8];
__builtin_memmove((U+0),gp(0x862838),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4e24:{NFSU2_TR(0x4c4e24);
w4(R+24,u32(0x2ull));
}
B4c4e29:{NFSU2_TR(0x4c4e29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4e41;}}
}
B4c4e2b:L4c4e2b:{c.instructions+=2;NFSU2_TR(0x4c4e2b);
w4(R+4,u32(0x86211cull));
}
B4c4e30:{NFSU2_TR(0x4c4e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4e35ull));
TAIL_STATIC(0x5004d0u,500);
}
B4c4e35:L4c4e35:{c.instructions+=2;NFSU2_TR(0x4c4e35);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c4e38:{NFSU2_TR(0x4c4e38);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c4e43;}}
}
B4c4e3a:L4c4e3a:{c.instructions+=1;NFSU2_TR(0x4c4e3a);
u8 U[8];
__builtin_memmove((U+0),gp(0x862838),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4e41:L4c4e41:{c.instructions+=1;NFSU2_TR(0x4c4e41);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c4e48;}}
}
B4c4e43:L4c4e43:{c.instructions+=1;NFSU2_TR(0x4c4e43);
w4(R+24,u32(0x2002ull));
}
B4c4e48:L4c4e48:{c.instructions+=3;NFSU2_TR(0x4c4e48);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c4e4d:{NFSU2_TR(0x4c4e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4e4f:{NFSU2_TR(0x4c4e4f);
if(r1(R+518)){{goto L4c4e94;}}
}
B4c4e51:L4c4e51:{c.instructions+=3;NFSU2_TR(0x4c4e51);
__builtin_memmove((R+0),gp(0x89e7e1),1);
}
B4c4e56:{NFSU2_TR(0x4c4e56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c4e58:{NFSU2_TR(0x4c4e58);
if(r1(R+518)){{goto L4c4e6b;}}
}
B4c4e5a:L4c4e5a:{c.instructions+=4;NFSU2_TR(0x4c4e5a);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x800ull))));
}
B4c4e60:{NFSU2_TR(0x4c4e60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4e61:{NFSU2_TR(0x4c4e61);
__builtin_memmove((R+4),(R+28),4);
}
B4c4e63:{NFSU2_TR(0x4c4e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4e68ull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4e68:L4c4e68:{c.instructions+=3;NFSU2_TR(0x4c4e68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4e69:{NFSU2_TR(0x4c4e69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4e6a:{NFSU2_TR(0x4c4e6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4e6b:L4c4e6b:{c.instructions+=2;NFSU2_TR(0x4c4e6b);
w4(R+4,u32(0x89e7a0ull));
}
B4c4e70:{NFSU2_TR(0x4c4e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4e75ull));
TAIL_STATIC(0x42fc40u,42f);
}
B4c4e75:L4c4e75:{c.instructions+=2;NFSU2_TR(0x4c4e75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c4e77:{NFSU2_TR(0x4c4e77);
if(r1(R+518)){{goto L4c4e94;}}
}
B4c4e79:L4c4e79:{c.instructions+=4;NFSU2_TR(0x4c4e79);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x1000ull))));
}
B4c4e7f:{NFSU2_TR(0x4c4e7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4e80:{NFSU2_TR(0x4c4e80);
__builtin_memmove((R+4),(R+28),4);
}
B4c4e82:{NFSU2_TR(0x4c4e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4e87ull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4e87:L4c4e87:{c.instructions+=3;NFSU2_TR(0x4c4e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4e88:{NFSU2_TR(0x4c4e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4e89:{NFSU2_TR(0x4c4e89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4e8a:L4c4e8a:{c.instructions+=2;NFSU2_TR(0x4c4e8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4e8d:{NFSU2_TR(0x4c4e8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4e94;}}
}
B4c4e8f:L4c4e8f:{c.instructions+=1;NFSU2_TR(0x4c4e8f);
w4(R+24,u32(0x4ull));
}
B4c4e94:L4c4e94:{c.instructions+=3;NFSU2_TR(0x4c4e94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4e95:{NFSU2_TR(0x4c4e95);
__builtin_memmove((R+4),(R+28),4);
}
B4c4e97:{NFSU2_TR(0x4c4e97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4e9cull));
TAIL_STATIC(0x4a8590u,4a8);
}
B4c4e9c:L4c4e9c:{c.instructions+=3;NFSU2_TR(0x4c4e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4e9d:{NFSU2_TR(0x4c4e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4e9e:{NFSU2_TR(0x4c4e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4ec0:L4c4ec0:{c.instructions+=3;NFSU2_TR(0x4c4ec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ec1:{NFSU2_TR(0x4c4ec1);
__builtin_memmove((R+24),(R+4),4);
}
B4c4ec3:{NFSU2_TR(0x4c4ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4ec8ull));
{goto L4c4ee0;}
}
B4c4ec8:L4c4ec8:{c.instructions+=2;NFSU2_TR(0x4c4ec8);
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
B4c4ecd:{NFSU2_TR(0x4c4ecd);
if(r1(R+518)){{goto L4c4ed8;}}
}
B4c4ecf:L4c4ecf:{c.instructions+=2;NFSU2_TR(0x4c4ecf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ed0:{NFSU2_TR(0x4c4ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4ed5ull));
TAIL_STATIC(0x575630u,575);
}
B4c4ed5:L4c4ed5:{c.instructions+=1;NFSU2_TR(0x4c4ed5);
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
B4c4ed8:L4c4ed8:{c.instructions+=3;NFSU2_TR(0x4c4ed8);
__builtin_memmove((R+0),(R+24),4);
}
B4c4eda:{NFSU2_TR(0x4c4eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4edb:{NFSU2_TR(0x4c4edb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4ee0:L4c4ee0:{c.instructions+=2;NFSU2_TR(0x4c4ee0);
u8 U[4];
w4(U+0,u32(0x795914ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4c4ee6:{NFSU2_TR(0x4c4ee6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4ef0:L4c4ef0:{c.instructions+=7;NFSU2_TR(0x4c4ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4ef3:{NFSU2_TR(0x4c4ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4ef5:{NFSU2_TR(0x4c4ef5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ef6:{NFSU2_TR(0x4c4ef6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ef7:{NFSU2_TR(0x4c4ef7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4ef8:{NFSU2_TR(0x4c4ef8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4efb:{NFSU2_TR(0x4c4efb);
if(r1(R+518)){{goto L4c4f02;}}
}
B4c4efd:L4c4efd:{c.instructions+=2;NFSU2_TR(0x4c4efd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4f00:{NFSU2_TR(0x4c4f00);
{goto L4c4f04;}
}
B4c4f02:L4c4f02:{c.instructions+=1;NFSU2_TR(0x4c4f02);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c4f04:L4c4f04:{c.instructions+=1;NFSU2_TR(0x4c4f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c4f08:L4c4f08:{c.instructions+=2;NFSU2_TR(0x4c4f08);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4f0a:{NFSU2_TR(0x4c4f0a);
if(r1(R+518)){{goto L4c4f11;}}
}
B4c4f0c:L4c4f0c:{c.instructions+=2;NFSU2_TR(0x4c4f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c4f0f:{NFSU2_TR(0x4c4f0f);
{goto L4c4f13;}
}
B4c4f11:L4c4f11:{c.instructions+=1;NFSU2_TR(0x4c4f11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c4f13:L4c4f13:{c.instructions+=2;NFSU2_TR(0x4c4f13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c4f15:{NFSU2_TR(0x4c4f15);
if(r1(R+518)){{goto L4c4f40;}}
}
B4c4f17:L4c4f17:{c.instructions+=4;NFSU2_TR(0x4c4f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4f1a:{NFSU2_TR(0x4c4f1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4f1b:{NFSU2_TR(0x4c4f1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4f1c:{NFSU2_TR(0x4c4f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4f21ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4c4f21:L4c4f21:{c.instructions+=3;NFSU2_TR(0x4c4f21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c4f24:{NFSU2_TR(0x4c4f24);
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
B4c4f26:{NFSU2_TR(0x4c4f26);
if(r1(R+518)){{goto L4c4f38;}}
}
B4c4f28:L4c4f28:{c.instructions+=3;NFSU2_TR(0x4c4f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c4f2b:{NFSU2_TR(0x4c4f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4f2d:{NFSU2_TR(0x4c4f2d);
if(r1(R+518)){{goto L4c4f34;}}
}
B4c4f2f:L4c4f2f:{c.instructions+=2;NFSU2_TR(0x4c4f2f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4c4f32:{NFSU2_TR(0x4c4f32);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c4f08u);}goto L4c4f08;}
}
B4c4f34:L4c4f34:{c.instructions+=2;NFSU2_TR(0x4c4f34);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c4f36:{NFSU2_TR(0x4c4f36);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c4f08u);}goto L4c4f08;}
}
B4c4f38:L4c4f38:{c.instructions+=5;NFSU2_TR(0x4c4f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4f39:{NFSU2_TR(0x4c4f39);
__builtin_memmove((R+0),(R+24),4);
}
B4c4f3b:{NFSU2_TR(0x4c4f3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4f3c:{NFSU2_TR(0x4c4f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c4f3d:{NFSU2_TR(0x4c4f3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4f40:L4c4f40:{c.instructions+=5;NFSU2_TR(0x4c4f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c4f41:{NFSU2_TR(0x4c4f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4f42:{NFSU2_TR(0x4c4f42);
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
B4c4f44:{NFSU2_TR(0x4c4f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c4f45:{NFSU2_TR(0x4c4f45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4f50:L4c4f50:{c.instructions+=5;NFSU2_TR(0x4c4f50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4f51:{NFSU2_TR(0x4c4f51);
__builtin_memmove((R+20),(R+16),4);
}
B4c4f53:{NFSU2_TR(0x4c4f53);
__builtin_memmove((R+0),gp(0x836488),4);
}
B4c4f58:{NFSU2_TR(0x4c4f58);
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
B4c4f5a:{NFSU2_TR(0x4c4f5a);
if(r1(R+518)){TAIL_STATIC(0x4c507bu,4c5);}
}
B4c4f60:L4c4f60:{c.instructions+=5;NFSU2_TR(0x4c4f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4f63:{NFSU2_TR(0x4c4f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4f66:{NFSU2_TR(0x4c4f66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4c4f69:{NFSU2_TR(0x4c4f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4f6b:{NFSU2_TR(0x4c4f6b);
if(r1(R+518)){{goto L4c4f72;}}
}
B4c4f6d:L4c4f6d:{c.instructions+=2;NFSU2_TR(0x4c4f6d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B4c4f70:{NFSU2_TR(0x4c4f70);
{goto L4c4f74;}
}
B4c4f72:L4c4f72:{c.instructions+=1;NFSU2_TR(0x4c4f72);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c4f74:L4c4f74:{c.instructions+=8;NFSU2_TR(0x4c4f74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c4f76:{NFSU2_TR(0x4c4f76);
__builtin_memmove((R+8),(R+4),4);
}
B4c4f78:{NFSU2_TR(0x4c4f78);
__builtin_memmove((R+4),gp(0x836488),4);
}
B4c4f7e:{NFSU2_TR(0x4c4f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4f81:{NFSU2_TR(0x4c4f81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4f83:{NFSU2_TR(0x4c4f83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4f84:{NFSU2_TR(0x4c4f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c4f87:{NFSU2_TR(0x4c4f87);
if(r1(R+518)){{goto L4c4f8e;}}
}
B4c4f89:L4c4f89:{c.instructions+=2;NFSU2_TR(0x4c4f89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4c4f8c:{NFSU2_TR(0x4c4f8c);
{goto L4c4f90;}
}
B4c4f8e:L4c4f8e:{c.instructions+=1;NFSU2_TR(0x4c4f8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c4f90:L4c4f90:{c.instructions+=2;NFSU2_TR(0x4c4f90);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c4f93:{NFSU2_TR(0x4c4f93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4fb8;}}
}
B4c4f95:L4c4f95:{c.instructions+=5;NFSU2_TR(0x4c4f95);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c4f9a:{NFSU2_TR(0x4c4f9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c4f9e:{NFSU2_TR(0x4c4f9e);
__builtin_memmove((R+4),gp(0x836488),4);
}
B4c4fa4:{NFSU2_TR(0x4c4fa4);
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
B4c4fa6:{NFSU2_TR(0x4c4fa6);
if(r1(R+518)){{goto L4c4fae;}}
}
B4c4fa8:L4c4fa8:{c.instructions+=3;NFSU2_TR(0x4c4fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c4faa:{NFSU2_TR(0x4c4faa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4fac:{NFSU2_TR(0x4c4fac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4faeull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4c4fae:L4c4fae:{c.instructions+=1;NFSU2_TR(0x4c4fae);
s4(0x836488,u32(0x0ull));
}
B4c4fb8:L4c4fb8:{c.instructions+=3;NFSU2_TR(0x4c4fb8);
u8 U[4];
w4(U+0,u32(0x78ea4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4fbd:{NFSU2_TR(0x4c4fbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4fbe:{NFSU2_TR(0x4c4fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4fc3ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4c4fc3:L4c4fc3:{c.instructions+=3;NFSU2_TR(0x4c4fc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c4fc6:{NFSU2_TR(0x4c4fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4fc8:{NFSU2_TR(0x4c4fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4c5014u,4c5);}
}
B4c4fca:L4c4fca:{c.instructions+=3;NFSU2_TR(0x4c4fca);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c4fcf:{NFSU2_TR(0x4c4fcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c4fd1:{NFSU2_TR(0x4c4fd1);
if(r1(R+518)){{goto L4c4ff4;}}
}
B4c4fd3:L4c4fd3:{c.instructions+=3;NFSU2_TR(0x4c4fd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4c4fd7:{NFSU2_TR(0x4c4fd7);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4c4fda:{NFSU2_TR(0x4c4fda);
if(r1(R+518)){{goto L4c4fe2;}}
}
B4c4fdc:L4c4fdc:{c.instructions+=2;NFSU2_TR(0x4c4fdc);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xbull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4c4fe0:{NFSU2_TR(0x4c4fe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c4ff4;}}
}
B4c4fe2:L4c4fe2:{c.instructions+=5;NFSU2_TR(0x4c4fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c4fe5:{NFSU2_TR(0x4c4fe5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4fe7:{NFSU2_TR(0x4c4fe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4fe8:{NFSU2_TR(0x4c4fe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c4fe9:{NFSU2_TR(0x4c4fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4feeull));
TAIL_STATIC(0x537980u,537);
}
B4c4fee:L4c4fee:{c.instructions+=4;NFSU2_TR(0x4c4fee);
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
B4c4ff1:{NFSU2_TR(0x4c4ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c4ff2:{NFSU2_TR(0x4c4ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c4ff3:{NFSU2_TR(0x4c4ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c4ff4:L4c4ff4:{c.instructions+=4;NFSU2_TR(0x4c4ff4);
__builtin_memmove((R+0),gp(0x836488),4);
}
B4c4ff9:{NFSU2_TR(0x4c4ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4ffc:{NFSU2_TR(0x4c4ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c4fff:{NFSU2_TR(0x4c4fff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
TAIL_STATIC(0x4c5002u,4c5);
}
XIT:NFSU2_TR_EXIT(0x4c4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
