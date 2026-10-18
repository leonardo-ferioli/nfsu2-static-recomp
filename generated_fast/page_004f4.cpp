#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4b8(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4c0(u8* __restrict R,Cpu& c);
u32 body_4c4(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 body_4e9(u8* __restrict R,Cpu& c);
u32 body_4ea(u8* __restrict R,Cpu& c);
u32 body_4eb(u8* __restrict R,Cpu& c);
u32 body_4ef(u8* __restrict R,Cpu& c);
u32 body_4f3(u8* __restrict R,Cpu& c);
u32 body_4f5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 page_4f4(Cpu& c){return body_4f4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f4000:goto L4f4000;
case 0x4f4002:c.instructions+=1;goto B4f4002;
case 0x4f4004:goto L4f4004;
case 0x4f400a:c.instructions+=1;goto B4f400a;
case 0x4f400f:goto L4f400f;
case 0x4f4011:c.instructions+=1;goto B4f4011;
case 0x4f4013:goto L4f4013;
case 0x4f4016:c.instructions+=1;goto B4f4016;
case 0x4f4018:goto L4f4018;
case 0x4f401a:goto L4f401a;
case 0x4f401d:c.instructions+=4;goto B4f401d;
case 0x4f401f:c.instructions+=3;goto B4f401f;
case 0x4f4022:c.instructions+=2;goto B4f4022;
case 0x4f4025:c.instructions+=1;goto B4f4025;
case 0x4f4027:goto L4f4027;
case 0x4f4029:c.instructions+=1;goto B4f4029;
case 0x4f402e:goto L4f402e;
case 0x4f4030:c.instructions+=1;goto B4f4030;
case 0x4f4032:goto L4f4032;
case 0x4f4038:c.instructions+=1;goto B4f4038;
case 0x4f403d:goto L4f403d;
case 0x4f403f:c.instructions+=1;goto B4f403f;
case 0x4f4041:goto L4f4041;
case 0x4f4044:c.instructions+=1;goto B4f4044;
case 0x4f4046:goto L4f4046;
case 0x4f4048:goto L4f4048;
case 0x4f404b:c.instructions+=4;goto B4f404b;
case 0x4f404d:c.instructions+=3;goto B4f404d;
case 0x4f4050:c.instructions+=2;goto B4f4050;
case 0x4f4053:c.instructions+=1;goto B4f4053;
case 0x4f4055:goto L4f4055;
case 0x4f4057:c.instructions+=1;goto B4f4057;
case 0x4f405c:goto L4f405c;
case 0x4f405e:c.instructions+=1;goto B4f405e;
case 0x4f4060:goto L4f4060;
case 0x4f4066:c.instructions+=1;goto B4f4066;
case 0x4f406b:goto L4f406b;
case 0x4f406d:c.instructions+=1;goto B4f406d;
case 0x4f406f:goto L4f406f;
case 0x4f4072:c.instructions+=1;goto B4f4072;
case 0x4f4074:goto L4f4074;
case 0x4f4076:goto L4f4076;
case 0x4f4079:c.instructions+=4;goto B4f4079;
case 0x4f407b:c.instructions+=3;goto B4f407b;
case 0x4f407e:c.instructions+=2;goto B4f407e;
case 0x4f4081:c.instructions+=1;goto B4f4081;
case 0x4f4083:goto L4f4083;
case 0x4f4088:c.instructions+=2;goto B4f4088;
case 0x4f408a:c.instructions+=1;goto B4f408a;
case 0x4f408c:goto L4f408c;
case 0x4f4091:c.instructions+=2;goto B4f4091;
case 0x4f4094:c.instructions+=1;goto B4f4094;
case 0x4f4096:goto L4f4096;
case 0x4f409b:c.instructions+=1;goto B4f409b;
case 0x4f409d:goto L4f409d;
case 0x4f40a0:c.instructions+=1;goto B4f40a0;
case 0x4f40a2:goto L4f40a2;
case 0x4f40a9:c.instructions+=1;goto B4f40a9;
case 0x4f40ab:goto L4f40ab;
case 0x4f40b1:c.instructions+=1;goto B4f40b1;
case 0x4f40b6:goto L4f40b6;
case 0x4f40b8:c.instructions+=1;goto B4f40b8;
case 0x4f40ba:goto L4f40ba;
case 0x4f40bd:c.instructions+=1;goto B4f40bd;
case 0x4f40bf:goto L4f40bf;
case 0x4f40c1:goto L4f40c1;
case 0x4f40c4:c.instructions+=4;goto B4f40c4;
case 0x4f40c6:c.instructions+=3;goto B4f40c6;
case 0x4f40c9:c.instructions+=2;goto B4f40c9;
case 0x4f40cc:c.instructions+=1;goto B4f40cc;
case 0x4f40ce:goto L4f40ce;
case 0x4f40d0:c.instructions+=1;goto B4f40d0;
case 0x4f40d2:goto L4f40d2;
case 0x4f40d4:c.instructions+=3;goto B4f40d4;
case 0x4f40d9:c.instructions+=2;goto B4f40d9;
case 0x4f40e0:c.instructions+=1;goto B4f40e0;
case 0x4f40e5:goto L4f40e5;
case 0x4f40e6:c.instructions+=1;goto B4f40e6;
case 0x4f40eb:goto L4f40eb;
case 0x4f40ee:c.instructions+=3;goto B4f40ee;
case 0x4f40f0:c.instructions+=2;goto B4f40f0;
case 0x4f40f5:c.instructions+=1;goto B4f40f5;
case 0x4f40fa:goto L4f40fa;
case 0x4f4100:c.instructions+=3;goto B4f4100;
case 0x4f4102:c.instructions+=2;goto B4f4102;
case 0x4f4104:c.instructions+=1;goto B4f4104;
case 0x4f4109:goto L4f4109;
case 0x4f410b:c.instructions+=3;goto B4f410b;
case 0x4f410d:c.instructions+=2;goto B4f410d;
case 0x4f4110:c.instructions+=1;goto B4f4110;
case 0x4f4112:goto L4f4112;
case 0x4f4115:c.instructions+=3;goto B4f4115;
case 0x4f4117:c.instructions+=2;goto B4f4117;
case 0x4f4118:c.instructions+=1;goto B4f4118;
case 0x4f411d:goto L4f411d;
case 0x4f411f:c.instructions+=3;goto B4f411f;
case 0x4f4122:c.instructions+=2;goto B4f4122;
case 0x4f4124:c.instructions+=1;goto B4f4124;
case 0x4f4126:goto L4f4126;
case 0x4f412b:goto L4f412b;
case 0x4f412c:c.instructions+=1;goto B4f412c;
case 0x4f4131:goto L4f4131;
case 0x4f4134:c.instructions+=2;goto B4f4134;
case 0x4f4136:c.instructions+=1;goto B4f4136;
case 0x4f4138:goto L4f4138;
case 0x4f413a:c.instructions+=3;goto B4f413a;
case 0x4f413f:c.instructions+=2;goto B4f413f;
case 0x4f4144:c.instructions+=1;goto B4f4144;
case 0x4f4149:goto L4f4149;
case 0x4f414a:c.instructions+=2;goto B4f414a;
case 0x4f414c:c.instructions+=1;goto B4f414c;
case 0x4f4151:goto L4f4151;
case 0x4f4154:goto L4f4154;
case 0x4f4158:c.instructions+=7;goto B4f4158;
case 0x4f415a:c.instructions+=6;goto B4f415a;
case 0x4f415b:c.instructions+=5;goto B4f415b;
case 0x4f415c:c.instructions+=4;goto B4f415c;
case 0x4f415d:c.instructions+=3;goto B4f415d;
case 0x4f4164:c.instructions+=2;goto B4f4164;
case 0x4f4167:c.instructions+=1;goto B4f4167;
case 0x4f4170:goto L4f4170;
case 0x4f4171:c.instructions+=2;goto B4f4171;
case 0x4f4173:c.instructions+=1;goto B4f4173;
case 0x4f4178:goto L4f4178;
case 0x4f417d:c.instructions+=1;goto B4f417d;
case 0x4f417f:goto L4f417f;
case 0x4f4180:c.instructions+=1;goto B4f4180;
case 0x4f4185:goto L4f4185;
case 0x4f4188:goto L4f4188;
case 0x4f418a:c.instructions+=2;goto B4f418a;
case 0x4f418b:c.instructions+=1;goto B4f418b;
case 0x4f4190:goto L4f4190;
case 0x4f4192:c.instructions+=9;goto B4f4192;
case 0x4f4197:c.instructions+=8;goto B4f4197;
case 0x4f419d:c.instructions+=7;goto B4f419d;
case 0x4f419e:c.instructions+=6;goto B4f419e;
case 0x4f41a5:c.instructions+=5;goto B4f41a5;
case 0x4f41a6:c.instructions+=4;goto B4f41a6;
case 0x4f41a7:c.instructions+=3;goto B4f41a7;
case 0x4f41a9:c.instructions+=2;goto B4f41a9;
case 0x4f41ab:c.instructions+=1;goto B4f41ab;
case 0x4f41b0:goto L4f41b0;
case 0x4f41b3:c.instructions+=4;goto B4f41b3;
case 0x4f41b7:c.instructions+=3;goto B4f41b7;
case 0x4f41b9:c.instructions+=2;goto B4f41b9;
case 0x4f41c1:c.instructions+=1;goto B4f41c1;
case 0x4f41c3:goto L4f41c3;
case 0x4f41c5:c.instructions+=1;goto B4f41c5;
case 0x4f41ca:goto L4f41ca;
case 0x4f41cc:goto L4f41cc;
case 0x4f41ce:goto L4f41ce;
case 0x4f41d2:c.instructions+=6;goto B4f41d2;
case 0x4f41d7:c.instructions+=5;goto B4f41d7;
case 0x4f41d9:c.instructions+=4;goto B4f41d9;
case 0x4f41da:c.instructions+=3;goto B4f41da;
case 0x4f41e1:c.instructions+=2;goto B4f41e1;
case 0x4f41e4:c.instructions+=1;goto B4f41e4;
case 0x4f41f0:goto L4f41f0;
case 0x4f41f2:c.instructions+=13;goto B4f41f2;
case 0x4f41f7:c.instructions+=12;goto B4f41f7;
case 0x4f41fd:c.instructions+=11;goto B4f41fd;
case 0x4f41fe:c.instructions+=10;goto B4f41fe;
case 0x4f4205:c.instructions+=9;goto B4f4205;
case 0x4f4206:c.instructions+=8;goto B4f4206;
case 0x4f420a:c.instructions+=7;goto B4f420a;
case 0x4f420b:c.instructions+=6;goto B4f420b;
case 0x4f420c:c.instructions+=5;goto B4f420c;
case 0x4f420d:c.instructions+=4;goto B4f420d;
case 0x4f420f:c.instructions+=3;goto B4f420f;
case 0x4f4210:c.instructions+=2;goto B4f4210;
case 0x4f4214:c.instructions+=1;goto B4f4214;
case 0x4f4219:goto L4f4219;
case 0x4f421c:c.instructions+=30;goto B4f421c;
case 0x4f421e:c.instructions+=29;goto B4f421e;
case 0x4f4224:c.instructions+=28;goto B4f4224;
case 0x4f4228:c.instructions+=27;goto B4f4228;
case 0x4f422a:c.instructions+=26;goto B4f422a;
case 0x4f422d:c.instructions+=25;goto B4f422d;
case 0x4f4230:c.instructions+=24;goto B4f4230;
case 0x4f4233:c.instructions+=23;goto B4f4233;
case 0x4f4236:c.instructions+=22;goto B4f4236;
case 0x4f4239:c.instructions+=21;goto B4f4239;
case 0x4f423c:c.instructions+=20;goto B4f423c;
case 0x4f423f:c.instructions+=19;goto B4f423f;
case 0x4f4242:c.instructions+=18;goto B4f4242;
case 0x4f4245:c.instructions+=17;goto B4f4245;
case 0x4f4248:c.instructions+=16;goto B4f4248;
case 0x4f424a:c.instructions+=15;goto B4f424a;
case 0x4f424d:c.instructions+=14;goto B4f424d;
case 0x4f4250:c.instructions+=13;goto B4f4250;
case 0x4f4253:c.instructions+=12;goto B4f4253;
case 0x4f4256:c.instructions+=11;goto B4f4256;
case 0x4f4259:c.instructions+=10;goto B4f4259;
case 0x4f425c:c.instructions+=9;goto B4f425c;
case 0x4f425f:c.instructions+=8;goto B4f425f;
case 0x4f4262:c.instructions+=7;goto B4f4262;
case 0x4f4265:c.instructions+=6;goto B4f4265;
case 0x4f4268:c.instructions+=5;goto B4f4268;
case 0x4f426e:c.instructions+=4;goto B4f426e;
case 0x4f4271:c.instructions+=3;goto B4f4271;
case 0x4f4276:c.instructions+=2;goto B4f4276;
case 0x4f427b:c.instructions+=1;goto B4f427b;
case 0x4f4280:goto L4f4280;
case 0x4f4282:c.instructions+=1;goto B4f4282;
case 0x4f4284:goto L4f4284;
case 0x4f428b:c.instructions+=1;goto B4f428b;
case 0x4f428d:goto L4f428d;
case 0x4f428e:c.instructions+=3;goto B4f428e;
case 0x4f4293:c.instructions+=2;goto B4f4293;
case 0x4f4294:c.instructions+=1;goto B4f4294;
case 0x4f4299:goto L4f4299;
case 0x4f429c:c.instructions+=2;goto B4f429c;
case 0x4f429e:c.instructions+=1;goto B4f429e;
case 0x4f42a3:goto L4f42a3;
case 0x4f42a5:c.instructions+=1;goto B4f42a5;
case 0x4f42aa:goto L4f42aa;
case 0x4f42ab:c.instructions+=3;goto B4f42ab;
case 0x4f42ad:c.instructions+=2;goto B4f42ad;
case 0x4f42af:c.instructions+=1;goto B4f42af;
case 0x4f42b4:goto L4f42b4;
case 0x4f42b6:c.instructions+=3;goto B4f42b6;
case 0x4f42b7:c.instructions+=2;goto B4f42b7;
case 0x4f42b9:c.instructions+=1;goto B4f42b9;
case 0x4f42be:goto L4f42be;
case 0x4f42c0:goto L4f42c0;
case 0x4f42c2:c.instructions+=1;goto B4f42c2;
case 0x4f42c7:goto L4f42c7;
case 0x4f42cc:goto L4f42cc;
case 0x4f42cd:c.instructions+=1;goto B4f42cd;
case 0x4f42d2:goto L4f42d2;
case 0x4f42d5:c.instructions+=2;goto B4f42d5;
case 0x4f42d7:c.instructions+=1;goto B4f42d7;
case 0x4f42d9:goto L4f42d9;
case 0x4f42dc:c.instructions+=4;goto B4f42dc;
case 0x4f42dd:c.instructions+=3;goto B4f42dd;
case 0x4f42e2:c.instructions+=2;goto B4f42e2;
case 0x4f42e3:c.instructions+=1;goto B4f42e3;
case 0x4f42e8:goto L4f42e8;
case 0x4f42e9:c.instructions+=1;goto B4f42e9;
case 0x4f42ee:goto L4f42ee;
case 0x4f42f1:goto L4f42f1;
case 0x4f42f7:c.instructions+=1;goto B4f42f7;
case 0x4f42fc:goto L4f42fc;
case 0x4f4303:c.instructions+=1;goto B4f4303;
case 0x4f4305:goto L4f4305;
case 0x4f430a:c.instructions+=1;goto B4f430a;
case 0x4f430f:goto L4f430f;
case 0x4f4311:c.instructions+=1;goto B4f4311;
case 0x4f4313:goto L4f4313;
case 0x4f4316:c.instructions+=5;goto B4f4316;
case 0x4f4319:c.instructions+=4;goto B4f4319;
case 0x4f431a:c.instructions+=3;goto B4f431a;
case 0x4f4320:c.instructions+=2;goto B4f4320;
case 0x4f4321:c.instructions+=1;goto B4f4321;
case 0x4f4323:goto L4f4323;
case 0x4f4326:c.instructions+=3;goto B4f4326;
case 0x4f4329:c.instructions+=2;goto B4f4329;
case 0x4f432a:c.instructions+=1;goto B4f432a;
case 0x4f432b:goto L4f432b;
case 0x4f4331:c.instructions+=1;goto B4f4331;
case 0x4f4336:goto L4f4336;
case 0x4f433a:c.instructions+=7;goto B4f433a;
case 0x4f433b:c.instructions+=6;goto B4f433b;
case 0x4f433d:c.instructions+=5;goto B4f433d;
case 0x4f433e:c.instructions+=4;goto B4f433e;
case 0x4f433f:c.instructions+=3;goto B4f433f;
case 0x4f4346:c.instructions+=2;goto B4f4346;
case 0x4f4349:c.instructions+=1;goto B4f4349;
case 0x4f4350:goto L4f4350;
case 0x4f4351:c.instructions+=2;goto B4f4351;
case 0x4f4353:c.instructions+=1;goto B4f4353;
case 0x4f4358:goto L4f4358;
case 0x4f435d:c.instructions+=1;goto B4f435d;
case 0x4f435f:goto L4f435f;
case 0x4f4360:c.instructions+=1;goto B4f4360;
case 0x4f4365:goto L4f4365;
case 0x4f4368:goto L4f4368;
case 0x4f436a:c.instructions+=2;goto B4f436a;
case 0x4f436b:c.instructions+=1;goto B4f436b;
case 0x4f4370:goto L4f4370;
case 0x4f4371:c.instructions+=7;goto B4f4371;
case 0x4f4372:c.instructions+=6;goto B4f4372;
case 0x4f4376:c.instructions+=5;goto B4f4376;
case 0x4f4378:c.instructions+=4;goto B4f4378;
case 0x4f437e:c.instructions+=3;goto B4f437e;
case 0x4f437f:c.instructions+=2;goto B4f437f;
case 0x4f4381:c.instructions+=1;goto B4f4381;
case 0x4f4387:goto L4f4387;
case 0x4f4389:goto L4f4389;
case 0x4f438f:c.instructions+=1;goto B4f438f;
case 0x4f4391:goto L4f4391;
case 0x4f4397:c.instructions+=1;goto B4f4397;
case 0x4f439d:goto L4f439d;
case 0x4f43a3:c.instructions+=1;goto B4f43a3;
case 0x4f43a9:goto L4f43a9;
case 0x4f43af:c.instructions+=1;goto B4f43af;
case 0x4f43b4:goto L4f43b4;
case 0x4f43b9:goto L4f43b9;
case 0x4f43c0:c.instructions+=1;goto B4f43c0;
case 0x4f43c2:goto L4f43c2;
case 0x4f43c4:c.instructions+=2;goto B4f43c4;
case 0x4f43c9:c.instructions+=1;goto B4f43c9;
case 0x4f43ce:goto L4f43ce;
case 0x4f43cf:c.instructions+=1;goto B4f43cf;
case 0x4f43d4:goto L4f43d4;
case 0x4f43d7:goto L4f43d7;
case 0x4f43da:c.instructions+=2;goto B4f43da;
case 0x4f43dc:c.instructions+=1;goto B4f43dc;
case 0x4f43de:goto L4f43de;
case 0x4f43df:c.instructions+=1;goto B4f43df;
case 0x4f43e4:goto L4f43e4;
case 0x4f43e7:c.instructions+=1;goto B4f43e7;
case 0x4f43ea:goto L4f43ea;
case 0x4f43ed:c.instructions+=2;goto B4f43ed;
case 0x4f43ef:c.instructions+=1;goto B4f43ef;
case 0x4f43f5:goto L4f43f5;
case 0x4f43f6:c.instructions+=1;goto B4f43f6;
case 0x4f43fb:goto L4f43fb;
case 0x4f43fe:c.instructions+=2;goto B4f43fe;
case 0x4f4401:c.instructions+=1;goto B4f4401;
case 0x4f4406:goto L4f4406;
case 0x4f440b:goto L4f440b;
case 0x4f4415:c.instructions+=1;goto B4f4415;
case 0x4f441a:goto L4f441a;
case 0x4f4420:c.instructions+=1;goto B4f4420;
case 0x4f4422:goto L4f4422;
case 0x4f4428:c.instructions+=1;goto B4f4428;
case 0x4f442e:goto L4f442e;
case 0x4f442f:c.instructions+=2;goto B4f442f;
case 0x4f4434:c.instructions+=1;goto B4f4434;
case 0x4f4439:goto L4f4439;
case 0x4f443a:c.instructions+=1;goto B4f443a;
case 0x4f443f:goto L4f443f;
case 0x4f4445:c.instructions+=4;goto B4f4445;
case 0x4f4448:c.instructions+=3;goto B4f4448;
case 0x4f4449:c.instructions+=2;goto B4f4449;
case 0x4f444b:c.instructions+=1;goto B4f444b;
case 0x4f4450:goto L4f4450;
case 0x4f4455:goto L4f4455;
case 0x4f445a:c.instructions+=1;goto B4f445a;
case 0x4f445f:goto L4f445f;
case 0x4f4461:c.instructions+=1;goto B4f4461;
case 0x4f4463:goto L4f4463;
case 0x4f4466:c.instructions+=1;goto B4f4466;
case 0x4f4468:goto L4f4468;
case 0x4f446e:c.instructions+=2;goto B4f446e;
case 0x4f4471:c.instructions+=1;goto B4f4471;
case 0x4f4476:goto L4f4476;
case 0x4f4479:c.instructions+=2;goto B4f4479;
case 0x4f447b:c.instructions+=1;goto B4f447b;
case 0x4f447d:goto L4f447d;
case 0x4f447e:c.instructions+=1;goto B4f447e;
case 0x4f4483:goto L4f4483;
case 0x4f4486:c.instructions+=1;goto B4f4486;
case 0x4f4489:goto L4f4489;
case 0x4f448c:c.instructions+=2;goto B4f448c;
case 0x4f448e:c.instructions+=1;goto B4f448e;
case 0x4f4490:goto L4f4490;
case 0x4f4491:c.instructions+=1;goto B4f4491;
case 0x4f4496:goto L4f4496;
case 0x4f4499:c.instructions+=2;goto B4f4499;
case 0x4f449c:c.instructions+=1;goto B4f449c;
case 0x4f449e:goto L4f449e;
case 0x4f44a3:c.instructions+=4;goto B4f44a3;
case 0x4f44a9:c.instructions+=3;goto B4f44a9;
case 0x4f44aa:c.instructions+=2;goto B4f44aa;
case 0x4f44ad:c.instructions+=1;goto B4f44ad;
case 0x4f44b2:goto L4f44b2;
case 0x4f44b7:c.instructions+=2;goto B4f44b7;
case 0x4f44bc:c.instructions+=1;goto B4f44bc;
case 0x4f44be:goto L4f44be;
case 0x4f44c1:c.instructions+=1;goto B4f44c1;
case 0x4f44c3:goto L4f44c3;
case 0x4f44ca:c.instructions+=1;goto B4f44ca;
case 0x4f44cc:goto L4f44cc;
case 0x4f44d1:c.instructions+=1;goto B4f44d1;
case 0x4f44d6:goto L4f44d6;
case 0x4f44d8:c.instructions+=1;goto B4f44d8;
case 0x4f44da:goto L4f44da;
case 0x4f44df:c.instructions+=2;goto B4f44df;
case 0x4f44e5:c.instructions+=1;goto B4f44e5;
case 0x4f44e7:goto L4f44e7;
case 0x4f44ed:c.instructions+=1;goto B4f44ed;
case 0x4f44f2:goto L4f44f2;
case 0x4f44f7:c.instructions+=1;goto B4f44f7;
case 0x4f44fc:goto L4f44fc;
case 0x4f44fe:c.instructions+=1;goto B4f44fe;
case 0x4f4504:goto L4f4504;
case 0x4f450b:c.instructions+=1;goto B4f450b;
case 0x4f4511:goto L4f4511;
case 0x4f4515:c.instructions+=11;goto B4f4515;
case 0x4f4519:c.instructions+=10;goto B4f4519;
case 0x4f451d:c.instructions+=9;goto B4f451d;
case 0x4f451e:c.instructions+=8;goto B4f451e;
case 0x4f4520:c.instructions+=7;goto B4f4520;
case 0x4f4521:c.instructions+=6;goto B4f4521;
case 0x4f4522:c.instructions+=5;goto B4f4522;
case 0x4f4523:c.instructions+=4;goto B4f4523;
case 0x4f4526:c.instructions+=3;goto B4f4526;
case 0x4f4527:c.instructions+=2;goto B4f4527;
case 0x4f4529:c.instructions+=1;goto B4f4529;
case 0x4f452e:goto L4f452e;
case 0x4f4530:c.instructions+=1;goto B4f4530;
case 0x4f4536:goto L4f4536;
case 0x4f453b:goto L4f453b;
case 0x4f4541:c.instructions+=1;goto B4f4541;
case 0x4f4543:goto L4f4543;
case 0x4f4549:c.instructions+=1;goto B4f4549;
case 0x4f454b:goto L4f454b;
case 0x4f454e:c.instructions+=2;goto B4f454e;
case 0x4f4555:c.instructions+=1;goto B4f4555;
case 0x4f455b:goto L4f455b;
case 0x4f455e:c.instructions+=2;goto B4f455e;
case 0x4f4563:c.instructions+=1;goto B4f4563;
case 0x4f4568:goto L4f4568;
case 0x4f4569:c.instructions+=6;goto B4f4569;
case 0x4f456e:c.instructions+=5;goto B4f456e;
case 0x4f4573:c.instructions+=4;goto B4f4573;
case 0x4f4578:c.instructions+=3;goto B4f4578;
case 0x4f457d:c.instructions+=2;goto B4f457d;
case 0x4f457e:c.instructions+=1;goto B4f457e;
case 0x4f4583:goto L4f4583;
case 0x4f4586:c.instructions+=2;goto B4f4586;
case 0x4f4589:c.instructions+=1;goto B4f4589;
case 0x4f458b:goto L4f458b;
case 0x4f4590:c.instructions+=7;goto B4f4590;
case 0x4f4593:c.instructions+=6;goto B4f4593;
case 0x4f4596:c.instructions+=5;goto B4f4596;
case 0x4f4599:c.instructions+=4;goto B4f4599;
case 0x4f459c:c.instructions+=3;goto B4f459c;
case 0x4f459f:c.instructions+=2;goto B4f459f;
case 0x4f45a3:c.instructions+=1;goto B4f45a3;
case 0x4f45a5:goto L4f45a5;
case 0x4f45a8:c.instructions+=2;goto B4f45a8;
case 0x4f45ad:c.instructions+=1;goto B4f45ad;
case 0x4f45b2:goto L4f45b2;
case 0x4f45b3:c.instructions+=3;goto B4f45b3;
case 0x4f45b8:c.instructions+=2;goto B4f45b8;
case 0x4f45b9:c.instructions+=1;goto B4f45b9;
case 0x4f45be:goto L4f45be;
case 0x4f45c1:c.instructions+=1;goto B4f45c1;
case 0x4f45c3:goto L4f45c3;
case 0x4f45c6:c.instructions+=1;goto B4f45c6;
case 0x4f45c8:goto L4f45c8;
case 0x4f45ca:c.instructions+=4;goto B4f45ca;
case 0x4f45cf:c.instructions+=3;goto B4f45cf;
case 0x4f45d4:c.instructions+=2;goto B4f45d4;
case 0x4f45d6:c.instructions+=1;goto B4f45d6;
case 0x4f45db:goto L4f45db;
case 0x4f45dd:goto L4f45dd;
case 0x4f45df:c.instructions+=1;goto B4f45df;
case 0x4f45e1:goto L4f45e1;
case 0x4f45e7:goto L4f45e7;
case 0x4f45ed:c.instructions+=2;goto B4f45ed;
case 0x4f45ee:c.instructions+=1;goto B4f45ee;
case 0x4f45f0:goto L4f45f0;
case 0x4f45f5:goto L4f45f5;
case 0x4f45f7:c.instructions+=1;goto B4f45f7;
case 0x4f45fc:goto L4f45fc;
case 0x4f45fd:c.instructions+=3;goto B4f45fd;
case 0x4f45fe:c.instructions+=2;goto B4f45fe;
case 0x4f45ff:c.instructions+=1;goto B4f45ff;
case 0x4f4610:goto L4f4610;
case 0x4f4612:c.instructions+=11;goto B4f4612;
case 0x4f4617:c.instructions+=10;goto B4f4617;
case 0x4f461d:c.instructions+=9;goto B4f461d;
case 0x4f461e:c.instructions+=8;goto B4f461e;
case 0x4f4625:c.instructions+=7;goto B4f4625;
case 0x4f4626:c.instructions+=6;goto B4f4626;
case 0x4f462a:c.instructions+=5;goto B4f462a;
case 0x4f462b:c.instructions+=4;goto B4f462b;
case 0x4f462d:c.instructions+=3;goto B4f462d;
case 0x4f462e:c.instructions+=2;goto B4f462e;
case 0x4f4632:c.instructions+=1;goto B4f4632;
case 0x4f4637:goto L4f4637;
case 0x4f463d:c.instructions+=7;goto B4f463d;
case 0x4f4643:c.instructions+=6;goto B4f4643;
case 0x4f464b:c.instructions+=5;goto B4f464b;
case 0x4f464d:c.instructions+=4;goto B4f464d;
case 0x4f4650:c.instructions+=3;goto B4f4650;
case 0x4f4652:c.instructions+=2;goto B4f4652;
case 0x4f4657:c.instructions+=1;goto B4f4657;
case 0x4f465c:goto L4f465c;
case 0x4f4660:c.instructions+=5;goto B4f4660;
case 0x4f4662:c.instructions+=4;goto B4f4662;
case 0x4f4663:c.instructions+=3;goto B4f4663;
case 0x4f466a:c.instructions+=2;goto B4f466a;
case 0x4f466d:c.instructions+=1;goto B4f466d;
case 0x4f4670:goto L4f4670;
case 0x4f4671:c.instructions+=2;goto B4f4671;
case 0x4f4673:c.instructions+=1;goto B4f4673;
case 0x4f4678:goto L4f4678;
case 0x4f467d:c.instructions+=1;goto B4f467d;
case 0x4f467f:goto L4f467f;
case 0x4f4680:c.instructions+=1;goto B4f4680;
case 0x4f4685:goto L4f4685;
case 0x4f4688:goto L4f4688;
case 0x4f468a:c.instructions+=2;goto B4f468a;
case 0x4f468b:c.instructions+=1;goto B4f468b;
case 0x4f4690:goto L4f4690;
case 0x4f4692:c.instructions+=17;goto B4f4692;
case 0x4f4697:c.instructions+=16;goto B4f4697;
case 0x4f469d:c.instructions+=15;goto B4f469d;
case 0x4f469e:c.instructions+=14;goto B4f469e;
case 0x4f46a5:c.instructions+=13;goto B4f46a5;
case 0x4f46a6:c.instructions+=12;goto B4f46a6;
case 0x4f46a7:c.instructions+=11;goto B4f46a7;
case 0x4f46a8:c.instructions+=10;goto B4f46a8;
case 0x4f46aa:c.instructions+=9;goto B4f46aa;
case 0x4f46ae:c.instructions+=8;goto B4f46ae;
case 0x4f46b4:c.instructions+=7;goto B4f46b4;
case 0x4f46ba:c.instructions+=6;goto B4f46ba;
case 0x4f46bd:c.instructions+=5;goto B4f46bd;
case 0x4f46c0:c.instructions+=4;goto B4f46c0;
case 0x4f46c3:c.instructions+=3;goto B4f46c3;
case 0x4f46c5:c.instructions+=2;goto B4f46c5;
case 0x4f46cd:c.instructions+=1;goto B4f46cd;
case 0x4f46cf:goto L4f46cf;
case 0x4f46d0:c.instructions+=2;goto B4f46d0;
case 0x4f46d1:c.instructions+=1;goto B4f46d1;
case 0x4f46d6:goto L4f46d6;
case 0x4f46d9:c.instructions+=2;goto B4f46d9;
case 0x4f46db:c.instructions+=1;goto B4f46db;
case 0x4f46dd:goto L4f46dd;
case 0x4f46df:goto L4f46df;
case 0x4f46e5:c.instructions+=4;goto B4f46e5;
case 0x4f46eb:c.instructions+=3;goto B4f46eb;
case 0x4f46ed:c.instructions+=2;goto B4f46ed;
case 0x4f46f2:c.instructions+=1;goto B4f46f2;
case 0x4f46f4:goto L4f46f4;
case 0x4f46f6:c.instructions+=5;goto B4f46f6;
case 0x4f46f9:c.instructions+=4;goto B4f46f9;
case 0x4f46fb:c.instructions+=3;goto B4f46fb;
case 0x4f46fc:c.instructions+=2;goto B4f46fc;
case 0x4f46ff:c.instructions+=1;goto B4f46ff;
case 0x4f4704:goto L4f4704;
case 0x4f4706:c.instructions+=3;goto B4f4706;
case 0x4f4709:c.instructions+=2;goto B4f4709;
case 0x4f470b:c.instructions+=1;goto B4f470b;
case 0x4f470d:goto L4f470d;
case 0x4f470f:c.instructions+=2;goto B4f470f;
case 0x4f4717:c.instructions+=1;goto B4f4717;
case 0x4f471c:goto L4f471c;
case 0x4f4720:c.instructions+=5;goto B4f4720;
case 0x4f4721:c.instructions+=4;goto B4f4721;
case 0x4f4722:c.instructions+=3;goto B4f4722;
case 0x4f4729:c.instructions+=2;goto B4f4729;
case 0x4f472c:c.instructions+=1;goto B4f472c;
case 0x4f4730:goto L4f4730;
case 0x4f4732:c.instructions+=7;goto B4f4732;
case 0x4f4737:c.instructions+=6;goto B4f4737;
case 0x4f473d:c.instructions+=5;goto B4f473d;
case 0x4f473e:c.instructions+=4;goto B4f473e;
case 0x4f4745:c.instructions+=3;goto B4f4745;
case 0x4f4746:c.instructions+=2;goto B4f4746;
case 0x4f474b:c.instructions+=1;goto B4f474b;
case 0x4f4750:goto L4f4750;
case 0x4f4753:c.instructions+=4;goto B4f4753;
case 0x4f4757:c.instructions+=3;goto B4f4757;
case 0x4f4759:c.instructions+=2;goto B4f4759;
case 0x4f4761:c.instructions+=1;goto B4f4761;
case 0x4f4763:goto L4f4763;
case 0x4f4767:c.instructions+=3;goto B4f4767;
case 0x4f4768:c.instructions+=2;goto B4f4768;
case 0x4f476a:c.instructions+=1;goto B4f476a;
case 0x4f476f:goto L4f476f;
case 0x4f4773:c.instructions+=3;goto B4f4773;
case 0x4f477a:c.instructions+=2;goto B4f477a;
case 0x4f477d:c.instructions+=1;goto B4f477d;
case 0x4f477e:goto L4f477e;
case 0x4f4782:c.instructions+=4;goto B4f4782;
case 0x4f4784:c.instructions+=3;goto B4f4784;
case 0x4f478b:c.instructions+=2;goto B4f478b;
case 0x4f478e:c.instructions+=1;goto B4f478e;
case 0x4f4790:goto L4f4790;
case 0x4f4792:c.instructions+=7;goto B4f4792;
case 0x4f4797:c.instructions+=6;goto B4f4797;
case 0x4f479d:c.instructions+=5;goto B4f479d;
case 0x4f479e:c.instructions+=4;goto B4f479e;
case 0x4f47a5:c.instructions+=3;goto B4f47a5;
case 0x4f47a6:c.instructions+=2;goto B4f47a6;
case 0x4f47ab:c.instructions+=1;goto B4f47ab;
case 0x4f47b0:goto L4f47b0;
case 0x4f47b3:c.instructions+=4;goto B4f47b3;
case 0x4f47b7:c.instructions+=3;goto B4f47b7;
case 0x4f47b9:c.instructions+=2;goto B4f47b9;
case 0x4f47c1:c.instructions+=1;goto B4f47c1;
case 0x4f47c3:goto L4f47c3;
case 0x4f47c7:c.instructions+=3;goto B4f47c7;
case 0x4f47c8:c.instructions+=2;goto B4f47c8;
case 0x4f47ca:c.instructions+=1;goto B4f47ca;
case 0x4f47cf:goto L4f47cf;
case 0x4f47d3:c.instructions+=3;goto B4f47d3;
case 0x4f47da:c.instructions+=2;goto B4f47da;
case 0x4f47dd:c.instructions+=1;goto B4f47dd;
case 0x4f47de:goto L4f47de;
case 0x4f47e2:c.instructions+=4;goto B4f47e2;
case 0x4f47e4:c.instructions+=3;goto B4f47e4;
case 0x4f47eb:c.instructions+=2;goto B4f47eb;
case 0x4f47ee:c.instructions+=1;goto B4f47ee;
case 0x4f47f0:goto L4f47f0;
case 0x4f47f2:c.instructions+=7;goto B4f47f2;
case 0x4f47f7:c.instructions+=6;goto B4f47f7;
case 0x4f47fd:c.instructions+=5;goto B4f47fd;
case 0x4f47fe:c.instructions+=4;goto B4f47fe;
case 0x4f4805:c.instructions+=3;goto B4f4805;
case 0x4f4806:c.instructions+=2;goto B4f4806;
case 0x4f480b:c.instructions+=1;goto B4f480b;
case 0x4f4810:goto L4f4810;
case 0x4f4813:c.instructions+=4;goto B4f4813;
case 0x4f4817:c.instructions+=3;goto B4f4817;
case 0x4f4819:c.instructions+=2;goto B4f4819;
case 0x4f4821:c.instructions+=1;goto B4f4821;
case 0x4f4823:goto L4f4823;
case 0x4f4827:c.instructions+=3;goto B4f4827;
case 0x4f4828:c.instructions+=2;goto B4f4828;
case 0x4f482a:c.instructions+=1;goto B4f482a;
case 0x4f482f:goto L4f482f;
case 0x4f4833:c.instructions+=3;goto B4f4833;
case 0x4f483a:c.instructions+=2;goto B4f483a;
case 0x4f483d:c.instructions+=1;goto B4f483d;
case 0x4f483e:goto L4f483e;
case 0x4f4842:c.instructions+=4;goto B4f4842;
case 0x4f4844:c.instructions+=3;goto B4f4844;
case 0x4f484b:c.instructions+=2;goto B4f484b;
case 0x4f484e:c.instructions+=1;goto B4f484e;
case 0x4f4850:goto L4f4850;
case 0x4f4858:c.instructions+=3;goto B4f4858;
case 0x4f4859:c.instructions+=2;goto B4f4859;
case 0x4f485b:c.instructions+=1;goto B4f485b;
case 0x4f485d:goto L4f485d;
case 0x4f4860:c.instructions+=2;goto B4f4860;
case 0x4f4862:c.instructions+=1;goto B4f4862;
case 0x4f4864:goto L4f4864;
case 0x4f4868:c.instructions+=1;goto B4f4868;
case 0x4f486d:goto L4f486d;
case 0x4f486f:c.instructions+=2;goto B4f486f;
case 0x4f4872:c.instructions+=1;goto B4f4872;
case 0x4f4874:goto L4f4874;
case 0x4f4877:c.instructions+=4;goto B4f4877;
case 0x4f4879:c.instructions+=3;goto B4f4879;
case 0x4f487a:c.instructions+=2;goto B4f487a;
case 0x4f487c:c.instructions+=1;goto B4f487c;
case 0x4f487e:goto L4f487e;
case 0x4f4883:goto L4f4883;
case 0x4f4884:c.instructions+=1;goto B4f4884;
case 0x4f4887:goto L4f4887;
case 0x4f488c:goto L4f488c;
case 0x4f488d:c.instructions+=1;goto B4f488d;
case 0x4f4890:goto L4f4890;
case 0x4f4897:goto L4f4897;
case 0x4f4898:c.instructions+=1;goto B4f4898;
case 0x4f48a0:goto L4f48a0;
case 0x4f48a2:c.instructions+=8;goto B4f48a2;
case 0x4f48a7:c.instructions+=7;goto B4f48a7;
case 0x4f48ad:c.instructions+=6;goto B4f48ad;
case 0x4f48ae:c.instructions+=5;goto B4f48ae;
case 0x4f48b5:c.instructions+=4;goto B4f48b5;
case 0x4f48b6:c.instructions+=3;goto B4f48b6;
case 0x4f48b7:c.instructions+=2;goto B4f48b7;
case 0x4f48bc:c.instructions+=1;goto B4f48bc;
case 0x4f48c1:goto L4f48c1;
case 0x4f48c3:c.instructions+=6;goto B4f48c3;
case 0x4f48c6:c.instructions+=5;goto B4f48c6;
case 0x4f48ca:c.instructions+=4;goto B4f48ca;
case 0x4f48cc:c.instructions+=3;goto B4f48cc;
case 0x4f48ce:c.instructions+=2;goto B4f48ce;
case 0x4f48d2:c.instructions+=1;goto B4f48d2;
case 0x4f48d4:goto L4f48d4;
case 0x4f48d8:c.instructions+=3;goto B4f48d8;
case 0x4f48d9:c.instructions+=2;goto B4f48d9;
case 0x4f48db:c.instructions+=1;goto B4f48db;
case 0x4f48e0:goto L4f48e0;
case 0x4f48e6:c.instructions+=1;goto B4f48e6;
case 0x4f48e8:goto L4f48e8;
case 0x4f48ec:c.instructions+=4;goto B4f48ec;
case 0x4f48ed:c.instructions+=3;goto B4f48ed;
case 0x4f48f4:c.instructions+=2;goto B4f48f4;
case 0x4f48f7:c.instructions+=1;goto B4f48f7;
case 0x4f4900:goto L4f4900;
case 0x4f4902:c.instructions+=7;goto B4f4902;
case 0x4f4907:c.instructions+=6;goto B4f4907;
case 0x4f490d:c.instructions+=5;goto B4f490d;
case 0x4f490e:c.instructions+=4;goto B4f490e;
case 0x4f4915:c.instructions+=3;goto B4f4915;
case 0x4f4916:c.instructions+=2;goto B4f4916;
case 0x4f491b:c.instructions+=1;goto B4f491b;
case 0x4f4920:goto L4f4920;
case 0x4f4923:c.instructions+=4;goto B4f4923;
case 0x4f4927:c.instructions+=3;goto B4f4927;
case 0x4f4929:c.instructions+=2;goto B4f4929;
case 0x4f4931:c.instructions+=1;goto B4f4931;
case 0x4f4933:goto L4f4933;
case 0x4f4937:c.instructions+=3;goto B4f4937;
case 0x4f4938:c.instructions+=2;goto B4f4938;
case 0x4f493a:c.instructions+=1;goto B4f493a;
case 0x4f493f:goto L4f493f;
case 0x4f4943:c.instructions+=3;goto B4f4943;
case 0x4f494a:c.instructions+=2;goto B4f494a;
case 0x4f494d:c.instructions+=1;goto B4f494d;
case 0x4f494e:goto L4f494e;
case 0x4f4952:c.instructions+=4;goto B4f4952;
case 0x4f4954:c.instructions+=3;goto B4f4954;
case 0x4f495b:c.instructions+=2;goto B4f495b;
case 0x4f495e:c.instructions+=1;goto B4f495e;
case 0x4f4960:goto L4f4960;
case 0x4f4962:c.instructions+=7;goto B4f4962;
case 0x4f4967:c.instructions+=6;goto B4f4967;
case 0x4f496d:c.instructions+=5;goto B4f496d;
case 0x4f496e:c.instructions+=4;goto B4f496e;
case 0x4f4975:c.instructions+=3;goto B4f4975;
case 0x4f4976:c.instructions+=2;goto B4f4976;
case 0x4f497b:c.instructions+=1;goto B4f497b;
case 0x4f4980:goto L4f4980;
case 0x4f4983:c.instructions+=4;goto B4f4983;
case 0x4f4987:c.instructions+=3;goto B4f4987;
case 0x4f4989:c.instructions+=2;goto B4f4989;
case 0x4f4991:c.instructions+=1;goto B4f4991;
case 0x4f4993:goto L4f4993;
case 0x4f4997:c.instructions+=3;goto B4f4997;
case 0x4f4998:c.instructions+=2;goto B4f4998;
case 0x4f499a:c.instructions+=1;goto B4f499a;
case 0x4f499f:goto L4f499f;
case 0x4f49a3:c.instructions+=3;goto B4f49a3;
case 0x4f49aa:c.instructions+=2;goto B4f49aa;
case 0x4f49ad:c.instructions+=1;goto B4f49ad;
case 0x4f49ae:goto L4f49ae;
case 0x4f49b2:c.instructions+=4;goto B4f49b2;
case 0x4f49b4:c.instructions+=3;goto B4f49b4;
case 0x4f49bb:c.instructions+=2;goto B4f49bb;
case 0x4f49be:c.instructions+=1;goto B4f49be;
case 0x4f49c0:goto L4f49c0;
case 0x4f49c1:c.instructions+=4;goto B4f49c1;
case 0x4f49c3:c.instructions+=3;goto B4f49c3;
case 0x4f49c6:c.instructions+=2;goto B4f49c6;
case 0x4f49c8:c.instructions+=1;goto B4f49c8;
case 0x4f49ca:goto L4f49ca;
case 0x4f49cd:c.instructions+=2;goto B4f49cd;
case 0x4f49d0:c.instructions+=1;goto B4f49d0;
case 0x4f49d2:goto L4f49d2;
case 0x4f49d3:c.instructions+=1;goto B4f49d3;
case 0x4f49d5:goto L4f49d5;
case 0x4f49d6:c.instructions+=1;goto B4f49d6;
case 0x4f49d8:goto L4f49d8;
case 0x4f49dd:goto L4f49dd;
case 0x4f49e4:c.instructions+=2;goto B4f49e4;
case 0x4f49e5:c.instructions+=1;goto B4f49e5;
case 0x4f49e6:goto L4f49e6;
case 0x4f49e9:c.instructions+=2;goto B4f49e9;
case 0x4f49eb:c.instructions+=1;goto B4f49eb;
case 0x4f49ed:goto L4f49ed;
case 0x4f49f0:c.instructions+=3;goto B4f49f0;
case 0x4f49f1:c.instructions+=2;goto B4f49f1;
case 0x4f49f3:c.instructions+=1;goto B4f49f3;
case 0x4f49f8:goto L4f49f8;
case 0x4f49ff:c.instructions+=2;goto B4f49ff;
case 0x4f4a00:c.instructions+=1;goto B4f4a00;
case 0x4f4a01:goto L4f4a01;
case 0x4f4a04:c.instructions+=2;goto B4f4a04;
case 0x4f4a06:c.instructions+=1;goto B4f4a06;
case 0x4f4a08:goto L4f4a08;
case 0x4f4a0b:c.instructions+=3;goto B4f4a0b;
case 0x4f4a0c:c.instructions+=2;goto B4f4a0c;
case 0x4f4a0e:c.instructions+=1;goto B4f4a0e;
case 0x4f4a13:goto L4f4a13;
case 0x4f4a1a:c.instructions+=2;goto B4f4a1a;
case 0x4f4a1b:c.instructions+=1;goto B4f4a1b;
case 0x4f4a20:goto L4f4a20;
case 0x4f4a21:c.instructions+=4;goto B4f4a21;
case 0x4f4a23:c.instructions+=3;goto B4f4a23;
case 0x4f4a26:c.instructions+=2;goto B4f4a26;
case 0x4f4a28:c.instructions+=1;goto B4f4a28;
case 0x4f4a2a:goto L4f4a2a;
case 0x4f4a2d:c.instructions+=2;goto B4f4a2d;
case 0x4f4a2f:c.instructions+=1;goto B4f4a2f;
case 0x4f4a31:goto L4f4a31;
case 0x4f4a36:goto L4f4a36;
case 0x4f4a39:c.instructions+=2;goto B4f4a39;
case 0x4f4a3b:c.instructions+=1;goto B4f4a3b;
case 0x4f4a3d:goto L4f4a3d;
case 0x4f4a40:c.instructions+=2;goto B4f4a40;
case 0x4f4a42:c.instructions+=1;goto B4f4a42;
case 0x4f4a44:goto L4f4a44;
case 0x4f4a49:c.instructions+=2;goto B4f4a49;
case 0x4f4a4b:c.instructions+=1;goto B4f4a4b;
case 0x4f4a4d:goto L4f4a4d;
case 0x4f4a4e:c.instructions+=1;goto B4f4a4e;
case 0x4f4a50:goto L4f4a50;
case 0x4f4a52:c.instructions+=2;goto B4f4a52;
case 0x4f4a54:c.instructions+=1;goto B4f4a54;
case 0x4f4a59:goto L4f4a59;
case 0x4f4a5b:c.instructions+=2;goto B4f4a5b;
case 0x4f4a5c:c.instructions+=1;goto B4f4a5c;
case 0x4f4a61:goto L4f4a61;
case 0x4f4a64:c.instructions+=2;goto B4f4a64;
case 0x4f4a66:c.instructions+=1;goto B4f4a66;
case 0x4f4a68:goto L4f4a68;
case 0x4f4a69:c.instructions+=1;goto B4f4a69;
case 0x4f4a6b:goto L4f4a6b;
case 0x4f4a6f:c.instructions+=3;goto B4f4a6f;
case 0x4f4a72:c.instructions+=2;goto B4f4a72;
case 0x4f4a73:c.instructions+=1;goto B4f4a73;
case 0x4f4a78:goto L4f4a78;
case 0x4f4a7d:c.instructions+=2;goto B4f4a7d;
case 0x4f4a7f:c.instructions+=1;goto B4f4a7f;
case 0x4f4a81:goto L4f4a81;
case 0x4f4a83:c.instructions+=3;goto B4f4a83;
case 0x4f4a85:c.instructions+=2;goto B4f4a85;
case 0x4f4a87:c.instructions+=1;goto B4f4a87;
case 0x4f4a8c:goto L4f4a8c;
case 0x4f4a8f:goto L4f4a8f;
case 0x4f4a92:c.instructions+=2;goto B4f4a92;
case 0x4f4a94:c.instructions+=1;goto B4f4a94;
case 0x4f4a96:goto L4f4a96;
case 0x4f4a99:c.instructions+=2;goto B4f4a99;
case 0x4f4a9b:c.instructions+=1;goto B4f4a9b;
case 0x4f4a9d:goto L4f4a9d;
case 0x4f4aa0:c.instructions+=2;goto B4f4aa0;
case 0x4f4aa1:c.instructions+=1;goto B4f4aa1;
case 0x4f4aa6:goto L4f4aa6;
case 0x4f4aac:c.instructions+=2;goto B4f4aac;
case 0x4f4ab3:c.instructions+=1;goto B4f4ab3;
case 0x4f4ab7:goto L4f4ab7;
case 0x4f4ab8:c.instructions+=1;goto B4f4ab8;
case 0x4f4ac0:goto L4f4ac0;
case 0x4f4ac2:c.instructions+=24;goto B4f4ac2;
case 0x4f4ac7:c.instructions+=23;goto B4f4ac7;
case 0x4f4acd:c.instructions+=22;goto B4f4acd;
case 0x4f4ace:c.instructions+=21;goto B4f4ace;
case 0x4f4ad5:c.instructions+=20;goto B4f4ad5;
case 0x4f4ad6:c.instructions+=19;goto B4f4ad6;
case 0x4f4ada:c.instructions+=18;goto B4f4ada;
case 0x4f4adb:c.instructions+=17;goto B4f4adb;
case 0x4f4adc:c.instructions+=16;goto B4f4adc;
case 0x4f4ade:c.instructions+=15;goto B4f4ade;
case 0x4f4ae0:c.instructions+=14;goto B4f4ae0;
case 0x4f4ae1:c.instructions+=13;goto B4f4ae1;
case 0x4f4ae5:c.instructions+=12;goto B4f4ae5;
case 0x4f4ae7:c.instructions+=11;goto B4f4ae7;
case 0x4f4aea:c.instructions+=10;goto B4f4aea;
case 0x4f4aed:c.instructions+=9;goto B4f4aed;
case 0x4f4af4:c.instructions+=8;goto B4f4af4;
case 0x4f4af7:c.instructions+=7;goto B4f4af7;
case 0x4f4afa:c.instructions+=6;goto B4f4afa;
case 0x4f4afd:c.instructions+=5;goto B4f4afd;
case 0x4f4b00:c.instructions+=4;goto B4f4b00;
case 0x4f4b05:c.instructions+=3;goto B4f4b05;
case 0x4f4b09:c.instructions+=2;goto B4f4b09;
case 0x4f4b0c:c.instructions+=1;goto B4f4b0c;
case 0x4f4b11:goto L4f4b11;
case 0x4f4b14:c.instructions+=3;goto B4f4b14;
case 0x4f4b15:c.instructions+=2;goto B4f4b15;
case 0x4f4b16:c.instructions+=1;goto B4f4b16;
case 0x4f4b1b:goto L4f4b1b;
case 0x4f4b1d:c.instructions+=3;goto B4f4b1d;
case 0x4f4b20:c.instructions+=2;goto B4f4b20;
case 0x4f4b22:c.instructions+=1;goto B4f4b22;
case 0x4f4b24:goto L4f4b24;
case 0x4f4b29:goto L4f4b29;
case 0x4f4b2b:c.instructions+=1;goto B4f4b2b;
case 0x4f4b2d:goto L4f4b2d;
case 0x4f4b30:c.instructions+=1;goto B4f4b30;
case 0x4f4b32:goto L4f4b32;
case 0x4f4b34:goto L4f4b34;
case 0x4f4b37:c.instructions+=4;goto B4f4b37;
case 0x4f4b39:c.instructions+=3;goto B4f4b39;
case 0x4f4b3c:c.instructions+=2;goto B4f4b3c;
case 0x4f4b3f:c.instructions+=1;goto B4f4b3f;
case 0x4f4b41:goto L4f4b41;
case 0x4f4b46:c.instructions+=2;goto B4f4b46;
case 0x4f4b49:c.instructions+=1;goto B4f4b49;
case 0x4f4b4e:goto L4f4b4e;
case 0x4f4b51:c.instructions+=3;goto B4f4b51;
case 0x4f4b52:c.instructions+=2;goto B4f4b52;
case 0x4f4b53:c.instructions+=1;goto B4f4b53;
case 0x4f4b58:goto L4f4b58;
case 0x4f4b5a:c.instructions+=3;goto B4f4b5a;
case 0x4f4b5d:c.instructions+=2;goto B4f4b5d;
case 0x4f4b5f:c.instructions+=1;goto B4f4b5f;
case 0x4f4b61:goto L4f4b61;
case 0x4f4b66:goto L4f4b66;
case 0x4f4b68:c.instructions+=1;goto B4f4b68;
case 0x4f4b6a:goto L4f4b6a;
case 0x4f4b6d:c.instructions+=1;goto B4f4b6d;
case 0x4f4b6f:goto L4f4b6f;
case 0x4f4b71:goto L4f4b71;
case 0x4f4b74:c.instructions+=4;goto B4f4b74;
case 0x4f4b76:c.instructions+=3;goto B4f4b76;
case 0x4f4b79:c.instructions+=2;goto B4f4b79;
case 0x4f4b7c:c.instructions+=1;goto B4f4b7c;
case 0x4f4b7e:goto L4f4b7e;
case 0x4f4b83:c.instructions+=2;goto B4f4b83;
case 0x4f4b86:c.instructions+=1;goto B4f4b86;
case 0x4f4b8b:goto L4f4b8b;
case 0x4f4b8c:c.instructions+=3;goto B4f4b8c;
case 0x4f4b8f:c.instructions+=2;goto B4f4b8f;
case 0x4f4b90:c.instructions+=1;goto B4f4b90;
case 0x4f4b95:goto L4f4b95;
case 0x4f4b97:c.instructions+=3;goto B4f4b97;
case 0x4f4b9a:c.instructions+=2;goto B4f4b9a;
case 0x4f4b9c:c.instructions+=1;goto B4f4b9c;
case 0x4f4b9e:goto L4f4b9e;
case 0x4f4ba3:goto L4f4ba3;
case 0x4f4ba5:c.instructions+=1;goto B4f4ba5;
case 0x4f4ba7:goto L4f4ba7;
case 0x4f4baa:c.instructions+=1;goto B4f4baa;
case 0x4f4bac:goto L4f4bac;
case 0x4f4bae:goto L4f4bae;
case 0x4f4bb1:c.instructions+=4;goto B4f4bb1;
case 0x4f4bb3:c.instructions+=3;goto B4f4bb3;
case 0x4f4bb6:c.instructions+=2;goto B4f4bb6;
case 0x4f4bb9:c.instructions+=1;goto B4f4bb9;
case 0x4f4bbb:goto L4f4bbb;
case 0x4f4bc0:c.instructions+=2;goto B4f4bc0;
case 0x4f4bc3:c.instructions+=1;goto B4f4bc3;
case 0x4f4bc8:goto L4f4bc8;
case 0x4f4bcb:c.instructions+=3;goto B4f4bcb;
case 0x4f4bcc:c.instructions+=2;goto B4f4bcc;
case 0x4f4bcd:c.instructions+=1;goto B4f4bcd;
case 0x4f4bd2:goto L4f4bd2;
case 0x4f4bd4:c.instructions+=3;goto B4f4bd4;
case 0x4f4bd7:c.instructions+=2;goto B4f4bd7;
case 0x4f4bd9:c.instructions+=1;goto B4f4bd9;
case 0x4f4bdb:goto L4f4bdb;
case 0x4f4be0:goto L4f4be0;
case 0x4f4be2:c.instructions+=1;goto B4f4be2;
case 0x4f4be4:goto L4f4be4;
case 0x4f4be7:c.instructions+=1;goto B4f4be7;
case 0x4f4be9:goto L4f4be9;
case 0x4f4beb:goto L4f4beb;
case 0x4f4bee:c.instructions+=4;goto B4f4bee;
case 0x4f4bf0:c.instructions+=3;goto B4f4bf0;
case 0x4f4bf3:c.instructions+=2;goto B4f4bf3;
case 0x4f4bf6:c.instructions+=1;goto B4f4bf6;
case 0x4f4bf8:goto L4f4bf8;
case 0x4f4bfd:c.instructions+=2;goto B4f4bfd;
case 0x4f4c00:c.instructions+=1;goto B4f4c00;
case 0x4f4c05:goto L4f4c05;
case 0x4f4c08:c.instructions+=3;goto B4f4c08;
case 0x4f4c09:c.instructions+=2;goto B4f4c09;
case 0x4f4c0a:c.instructions+=1;goto B4f4c0a;
case 0x4f4c0f:goto L4f4c0f;
case 0x4f4c11:c.instructions+=3;goto B4f4c11;
case 0x4f4c14:c.instructions+=2;goto B4f4c14;
case 0x4f4c16:c.instructions+=1;goto B4f4c16;
case 0x4f4c18:goto L4f4c18;
case 0x4f4c1d:goto L4f4c1d;
case 0x4f4c1f:c.instructions+=1;goto B4f4c1f;
case 0x4f4c21:goto L4f4c21;
case 0x4f4c24:c.instructions+=1;goto B4f4c24;
case 0x4f4c26:goto L4f4c26;
case 0x4f4c28:goto L4f4c28;
case 0x4f4c2b:c.instructions+=4;goto B4f4c2b;
case 0x4f4c2d:c.instructions+=3;goto B4f4c2d;
case 0x4f4c30:c.instructions+=2;goto B4f4c30;
case 0x4f4c33:c.instructions+=1;goto B4f4c33;
case 0x4f4c35:goto L4f4c35;
case 0x4f4c3a:c.instructions+=2;goto B4f4c3a;
case 0x4f4c3d:c.instructions+=1;goto B4f4c3d;
case 0x4f4c42:goto L4f4c42;
case 0x4f4c43:c.instructions+=3;goto B4f4c43;
case 0x4f4c46:c.instructions+=2;goto B4f4c46;
case 0x4f4c47:c.instructions+=1;goto B4f4c47;
case 0x4f4c4c:goto L4f4c4c;
case 0x4f4c4e:c.instructions+=3;goto B4f4c4e;
case 0x4f4c51:c.instructions+=2;goto B4f4c51;
case 0x4f4c53:c.instructions+=1;goto B4f4c53;
case 0x4f4c55:goto L4f4c55;
case 0x4f4c5a:goto L4f4c5a;
case 0x4f4c5c:c.instructions+=1;goto B4f4c5c;
case 0x4f4c5e:goto L4f4c5e;
case 0x4f4c61:c.instructions+=1;goto B4f4c61;
case 0x4f4c63:goto L4f4c63;
case 0x4f4c65:goto L4f4c65;
case 0x4f4c68:c.instructions+=4;goto B4f4c68;
case 0x4f4c6a:c.instructions+=3;goto B4f4c6a;
case 0x4f4c6d:c.instructions+=2;goto B4f4c6d;
case 0x4f4c70:c.instructions+=1;goto B4f4c70;
case 0x4f4c72:goto L4f4c72;
case 0x4f4c75:c.instructions+=3;goto B4f4c75;
case 0x4f4c76:c.instructions+=2;goto B4f4c76;
case 0x4f4c79:c.instructions+=1;goto B4f4c79;
case 0x4f4c7e:goto L4f4c7e;
case 0x4f4c81:c.instructions+=2;goto B4f4c81;
case 0x4f4c82:c.instructions+=1;goto B4f4c82;
case 0x4f4c87:goto L4f4c87;
case 0x4f4c8c:c.instructions+=3;goto B4f4c8c;
case 0x4f4c8f:c.instructions+=2;goto B4f4c8f;
case 0x4f4c92:c.instructions+=1;goto B4f4c92;
case 0x4f4c97:goto L4f4c97;
case 0x4f4c98:c.instructions+=3;goto B4f4c98;
case 0x4f4c9b:c.instructions+=2;goto B4f4c9b;
case 0x4f4c9c:c.instructions+=1;goto B4f4c9c;
case 0x4f4ca1:goto L4f4ca1;
case 0x4f4ca3:c.instructions+=3;goto B4f4ca3;
case 0x4f4ca6:c.instructions+=2;goto B4f4ca6;
case 0x4f4ca8:c.instructions+=1;goto B4f4ca8;
case 0x4f4caa:goto L4f4caa;
case 0x4f4caf:goto L4f4caf;
case 0x4f4cb1:c.instructions+=1;goto B4f4cb1;
case 0x4f4cb3:goto L4f4cb3;
case 0x4f4cb6:c.instructions+=1;goto B4f4cb6;
case 0x4f4cb8:goto L4f4cb8;
case 0x4f4cba:goto L4f4cba;
case 0x4f4cbd:c.instructions+=4;goto B4f4cbd;
case 0x4f4cbf:c.instructions+=3;goto B4f4cbf;
case 0x4f4cc2:c.instructions+=2;goto B4f4cc2;
case 0x4f4cc5:c.instructions+=1;goto B4f4cc5;
case 0x4f4cc7:goto L4f4cc7;
case 0x4f4ccc:c.instructions+=1;goto B4f4ccc;
case 0x4f4cd1:goto L4f4cd1;
case 0x4f4cd4:c.instructions+=3;goto B4f4cd4;
case 0x4f4cd5:c.instructions+=2;goto B4f4cd5;
case 0x4f4cd6:c.instructions+=1;goto B4f4cd6;
case 0x4f4cdb:goto L4f4cdb;
case 0x4f4cdd:c.instructions+=3;goto B4f4cdd;
case 0x4f4ce0:c.instructions+=2;goto B4f4ce0;
case 0x4f4ce2:c.instructions+=1;goto B4f4ce2;
case 0x4f4ce4:goto L4f4ce4;
case 0x4f4ce9:goto L4f4ce9;
case 0x4f4ceb:c.instructions+=1;goto B4f4ceb;
case 0x4f4ced:goto L4f4ced;
case 0x4f4cf0:c.instructions+=1;goto B4f4cf0;
case 0x4f4cf2:goto L4f4cf2;
case 0x4f4cf4:goto L4f4cf4;
case 0x4f4cf7:c.instructions+=4;goto B4f4cf7;
case 0x4f4cf9:c.instructions+=3;goto B4f4cf9;
case 0x4f4cfc:c.instructions+=2;goto B4f4cfc;
case 0x4f4cff:c.instructions+=1;goto B4f4cff;
case 0x4f4d01:goto L4f4d01;
case 0x4f4d04:c.instructions+=2;goto B4f4d04;
case 0x4f4d0a:c.instructions+=1;goto B4f4d0a;
case 0x4f4d0c:goto L4f4d0c;
case 0x4f4d12:c.instructions+=1;goto B4f4d12;
case 0x4f4d14:goto L4f4d14;
case 0x4f4d1b:c.instructions+=1;goto B4f4d1b;
case 0x4f4d1d:goto L4f4d1d;
case 0x4f4d22:c.instructions+=1;goto B4f4d22;
case 0x4f4d27:goto L4f4d27;
case 0x4f4d2a:c.instructions+=3;goto B4f4d2a;
case 0x4f4d2b:c.instructions+=2;goto B4f4d2b;
case 0x4f4d2c:c.instructions+=1;goto B4f4d2c;
case 0x4f4d31:goto L4f4d31;
case 0x4f4d33:c.instructions+=3;goto B4f4d33;
case 0x4f4d36:c.instructions+=2;goto B4f4d36;
case 0x4f4d38:c.instructions+=1;goto B4f4d38;
case 0x4f4d3a:goto L4f4d3a;
case 0x4f4d3f:goto L4f4d3f;
case 0x4f4d41:c.instructions+=1;goto B4f4d41;
case 0x4f4d43:goto L4f4d43;
case 0x4f4d46:c.instructions+=1;goto B4f4d46;
case 0x4f4d48:goto L4f4d48;
case 0x4f4d4a:goto L4f4d4a;
case 0x4f4d4d:c.instructions+=4;goto B4f4d4d;
case 0x4f4d4f:c.instructions+=3;goto B4f4d4f;
case 0x4f4d52:c.instructions+=2;goto B4f4d52;
case 0x4f4d55:c.instructions+=1;goto B4f4d55;
case 0x4f4d57:goto L4f4d57;
case 0x4f4d5c:c.instructions+=1;goto B4f4d5c;
case 0x4f4d61:goto L4f4d61;
case 0x4f4d62:c.instructions+=3;goto B4f4d62;
case 0x4f4d65:c.instructions+=2;goto B4f4d65;
case 0x4f4d66:c.instructions+=1;goto B4f4d66;
case 0x4f4d6b:goto L4f4d6b;
case 0x4f4d6d:c.instructions+=3;goto B4f4d6d;
case 0x4f4d70:c.instructions+=2;goto B4f4d70;
case 0x4f4d72:c.instructions+=1;goto B4f4d72;
case 0x4f4d74:goto L4f4d74;
case 0x4f4d79:goto L4f4d79;
case 0x4f4d7b:c.instructions+=1;goto B4f4d7b;
case 0x4f4d7d:goto L4f4d7d;
case 0x4f4d80:c.instructions+=1;goto B4f4d80;
case 0x4f4d82:goto L4f4d82;
case 0x4f4d84:goto L4f4d84;
case 0x4f4d87:c.instructions+=4;goto B4f4d87;
case 0x4f4d89:c.instructions+=3;goto B4f4d89;
case 0x4f4d8c:c.instructions+=2;goto B4f4d8c;
case 0x4f4d8f:c.instructions+=1;goto B4f4d8f;
case 0x4f4d91:goto L4f4d91;
case 0x4f4d93:c.instructions+=2;goto B4f4d93;
case 0x4f4d9a:c.instructions+=1;goto B4f4d9a;
case 0x4f4d9f:goto L4f4d9f;
case 0x4f4da2:c.instructions+=2;goto B4f4da2;
case 0x4f4da4:c.instructions+=1;goto B4f4da4;
case 0x4f4da6:goto L4f4da6;
case 0x4f4da9:c.instructions+=10;goto B4f4da9;
case 0x4f4dac:c.instructions+=9;goto B4f4dac;
case 0x4f4daf:c.instructions+=8;goto B4f4daf;
case 0x4f4db1:c.instructions+=7;goto B4f4db1;
case 0x4f4db4:c.instructions+=6;goto B4f4db4;
case 0x4f4db7:c.instructions+=5;goto B4f4db7;
case 0x4f4dbe:c.instructions+=4;goto B4f4dbe;
case 0x4f4dc0:c.instructions+=3;goto B4f4dc0;
case 0x4f4dc7:c.instructions+=2;goto B4f4dc7;
case 0x4f4dca:c.instructions+=1;goto B4f4dca;
case 0x4f4dcc:goto L4f4dcc;
case 0x4f4dce:goto L4f4dce;
case 0x4f4dd2:c.instructions+=8;goto B4f4dd2;
case 0x4f4dd5:c.instructions+=7;goto B4f4dd5;
case 0x4f4dd6:c.instructions+=6;goto B4f4dd6;
case 0x4f4dd8:c.instructions+=5;goto B4f4dd8;
case 0x4f4dd9:c.instructions+=4;goto B4f4dd9;
case 0x4f4dda:c.instructions+=3;goto B4f4dda;
case 0x4f4de1:c.instructions+=2;goto B4f4de1;
case 0x4f4de4:c.instructions+=1;goto B4f4de4;
case 0x4f4df0:goto L4f4df0;
case 0x4f4df2:c.instructions+=13;goto B4f4df2;
case 0x4f4df7:c.instructions+=12;goto B4f4df7;
case 0x4f4dfd:c.instructions+=11;goto B4f4dfd;
case 0x4f4dfe:c.instructions+=10;goto B4f4dfe;
case 0x4f4e05:c.instructions+=9;goto B4f4e05;
case 0x4f4e06:c.instructions+=8;goto B4f4e06;
case 0x4f4e07:c.instructions+=7;goto B4f4e07;
case 0x4f4e09:c.instructions+=6;goto B4f4e09;
case 0x4f4e0a:c.instructions+=5;goto B4f4e0a;
case 0x4f4e0e:c.instructions+=4;goto B4f4e0e;
case 0x4f4e11:c.instructions+=3;goto B4f4e11;
case 0x4f4e13:c.instructions+=2;goto B4f4e13;
case 0x4f4e1b:c.instructions+=1;goto B4f4e1b;
case 0x4f4e1d:goto L4f4e1d;
case 0x4f4e1f:c.instructions+=1;goto B4f4e1f;
case 0x4f4e24:goto L4f4e24;
case 0x4f4e25:c.instructions+=1;goto B4f4e25;
case 0x4f4e2a:goto L4f4e2a;
case 0x4f4e2d:goto L4f4e2d;
case 0x4f4e2f:c.instructions+=3;goto B4f4e2f;
case 0x4f4e31:c.instructions+=2;goto B4f4e31;
case 0x4f4e39:c.instructions+=1;goto B4f4e39;
case 0x4f4e3b:goto L4f4e3b;
case 0x4f4e40:goto L4f4e40;
case 0x4f4e42:c.instructions+=5;goto B4f4e42;
case 0x4f4e45:c.instructions+=4;goto B4f4e45;
case 0x4f4e47:c.instructions+=3;goto B4f4e47;
case 0x4f4e48:c.instructions+=2;goto B4f4e48;
case 0x4f4e4b:c.instructions+=1;goto B4f4e4b;
case 0x4f4e50:goto L4f4e50;
case 0x4f4e52:c.instructions+=3;goto B4f4e52;
case 0x4f4e55:c.instructions+=2;goto B4f4e55;
case 0x4f4e57:c.instructions+=1;goto B4f4e57;
case 0x4f4e59:goto L4f4e59;
case 0x4f4e5d:c.instructions+=5;goto B4f4e5d;
case 0x4f4e5e:c.instructions+=4;goto B4f4e5e;
case 0x4f4e5f:c.instructions+=3;goto B4f4e5f;
case 0x4f4e66:c.instructions+=2;goto B4f4e66;
case 0x4f4e69:c.instructions+=1;goto B4f4e69;
case 0x4f4e70:goto L4f4e70;
case 0x4f4e72:c.instructions+=23;goto B4f4e72;
case 0x4f4e77:c.instructions+=22;goto B4f4e77;
case 0x4f4e7d:c.instructions+=21;goto B4f4e7d;
case 0x4f4e7e:c.instructions+=20;goto B4f4e7e;
case 0x4f4e85:c.instructions+=19;goto B4f4e85;
case 0x4f4e86:c.instructions+=18;goto B4f4e86;
case 0x4f4e8a:c.instructions+=17;goto B4f4e8a;
case 0x4f4e8b:c.instructions+=16;goto B4f4e8b;
case 0x4f4e8c:c.instructions+=15;goto B4f4e8c;
case 0x4f4e8e:c.instructions+=14;goto B4f4e8e;
case 0x4f4e90:c.instructions+=13;goto B4f4e90;
case 0x4f4e91:c.instructions+=12;goto B4f4e91;
case 0x4f4e95:c.instructions+=11;goto B4f4e95;
case 0x4f4e97:c.instructions+=10;goto B4f4e97;
case 0x4f4e9a:c.instructions+=9;goto B4f4e9a;
case 0x4f4e9d:c.instructions+=8;goto B4f4e9d;
case 0x4f4ea4:c.instructions+=7;goto B4f4ea4;
case 0x4f4ea7:c.instructions+=6;goto B4f4ea7;
case 0x4f4eaa:c.instructions+=5;goto B4f4eaa;
case 0x4f4ead:c.instructions+=4;goto B4f4ead;
case 0x4f4eb2:c.instructions+=3;goto B4f4eb2;
case 0x4f4eb6:c.instructions+=2;goto B4f4eb6;
case 0x4f4eb9:c.instructions+=1;goto B4f4eb9;
case 0x4f4ebe:goto L4f4ebe;
case 0x4f4ec1:c.instructions+=3;goto B4f4ec1;
case 0x4f4ec2:c.instructions+=2;goto B4f4ec2;
case 0x4f4ec3:c.instructions+=1;goto B4f4ec3;
case 0x4f4ec8:goto L4f4ec8;
case 0x4f4eca:c.instructions+=3;goto B4f4eca;
case 0x4f4ecd:c.instructions+=2;goto B4f4ecd;
case 0x4f4ecf:c.instructions+=1;goto B4f4ecf;
case 0x4f4ed1:goto L4f4ed1;
case 0x4f4ed6:goto L4f4ed6;
case 0x4f4ed8:c.instructions+=1;goto B4f4ed8;
case 0x4f4eda:goto L4f4eda;
case 0x4f4edd:c.instructions+=1;goto B4f4edd;
case 0x4f4edf:goto L4f4edf;
case 0x4f4ee1:goto L4f4ee1;
case 0x4f4ee4:c.instructions+=4;goto B4f4ee4;
case 0x4f4ee6:c.instructions+=3;goto B4f4ee6;
case 0x4f4ee9:c.instructions+=2;goto B4f4ee9;
case 0x4f4eec:c.instructions+=1;goto B4f4eec;
case 0x4f4eee:goto L4f4eee;
case 0x4f4ef2:c.instructions+=8;goto B4f4ef2;
case 0x4f4ef5:c.instructions+=7;goto B4f4ef5;
case 0x4f4ef6:c.instructions+=6;goto B4f4ef6;
case 0x4f4ef8:c.instructions+=5;goto B4f4ef8;
case 0x4f4ef9:c.instructions+=4;goto B4f4ef9;
case 0x4f4efa:c.instructions+=3;goto B4f4efa;
case 0x4f4f01:c.instructions+=2;goto B4f4f01;
case 0x4f4f04:c.instructions+=1;goto B4f4f04;
case 0x4f4f10:goto L4f4f10;
case 0x4f4f12:c.instructions+=22;goto B4f4f12;
case 0x4f4f17:c.instructions+=21;goto B4f4f17;
case 0x4f4f1d:c.instructions+=20;goto B4f4f1d;
case 0x4f4f1e:c.instructions+=19;goto B4f4f1e;
case 0x4f4f25:c.instructions+=18;goto B4f4f25;
case 0x4f4f26:c.instructions+=17;goto B4f4f26;
case 0x4f4f2a:c.instructions+=16;goto B4f4f2a;
case 0x4f4f2b:c.instructions+=15;goto B4f4f2b;
case 0x4f4f2c:c.instructions+=14;goto B4f4f2c;
case 0x4f4f2e:c.instructions+=13;goto B4f4f2e;
case 0x4f4f30:c.instructions+=12;goto B4f4f30;
case 0x4f4f31:c.instructions+=11;goto B4f4f31;
case 0x4f4f35:c.instructions+=10;goto B4f4f35;
case 0x4f4f37:c.instructions+=9;goto B4f4f37;
case 0x4f4f3a:c.instructions+=8;goto B4f4f3a;
case 0x4f4f3d:c.instructions+=7;goto B4f4f3d;
case 0x4f4f40:c.instructions+=6;goto B4f4f40;
case 0x4f4f47:c.instructions+=5;goto B4f4f47;
case 0x4f4f4a:c.instructions+=4;goto B4f4f4a;
case 0x4f4f4d:c.instructions+=3;goto B4f4f4d;
case 0x4f4f52:c.instructions+=2;goto B4f4f52;
case 0x4f4f56:c.instructions+=1;goto B4f4f56;
case 0x4f4f5b:goto L4f4f5b;
case 0x4f4f5e:c.instructions+=3;goto B4f4f5e;
case 0x4f4f5f:c.instructions+=2;goto B4f4f5f;
case 0x4f4f60:c.instructions+=1;goto B4f4f60;
case 0x4f4f65:goto L4f4f65;
case 0x4f4f67:c.instructions+=3;goto B4f4f67;
case 0x4f4f6a:c.instructions+=2;goto B4f4f6a;
case 0x4f4f6c:c.instructions+=1;goto B4f4f6c;
case 0x4f4f6e:goto L4f4f6e;
case 0x4f4f73:goto L4f4f73;
case 0x4f4f75:c.instructions+=1;goto B4f4f75;
case 0x4f4f77:goto L4f4f77;
case 0x4f4f7a:c.instructions+=1;goto B4f4f7a;
case 0x4f4f7c:goto L4f4f7c;
case 0x4f4f7e:goto L4f4f7e;
case 0x4f4f81:c.instructions+=4;goto B4f4f81;
case 0x4f4f83:c.instructions+=3;goto B4f4f83;
case 0x4f4f86:c.instructions+=2;goto B4f4f86;
case 0x4f4f89:c.instructions+=1;goto B4f4f89;
case 0x4f4f8b:goto L4f4f8b;
case 0x4f4f90:c.instructions+=2;goto B4f4f90;
case 0x4f4f93:c.instructions+=1;goto B4f4f93;
case 0x4f4f98:goto L4f4f98;
case 0x4f4f9b:c.instructions+=3;goto B4f4f9b;
case 0x4f4f9c:c.instructions+=2;goto B4f4f9c;
case 0x4f4f9d:c.instructions+=1;goto B4f4f9d;
case 0x4f4fa2:goto L4f4fa2;
case 0x4f4fa4:c.instructions+=3;goto B4f4fa4;
case 0x4f4fa7:c.instructions+=2;goto B4f4fa7;
case 0x4f4fa9:c.instructions+=1;goto B4f4fa9;
case 0x4f4fab:goto L4f4fab;
case 0x4f4fb0:goto L4f4fb0;
case 0x4f4fb2:c.instructions+=1;goto B4f4fb2;
case 0x4f4fb4:goto L4f4fb4;
case 0x4f4fb7:c.instructions+=1;goto B4f4fb7;
case 0x4f4fb9:goto L4f4fb9;
case 0x4f4fbb:goto L4f4fbb;
case 0x4f4fbe:c.instructions+=4;goto B4f4fbe;
case 0x4f4fc0:c.instructions+=3;goto B4f4fc0;
case 0x4f4fc3:c.instructions+=2;goto B4f4fc3;
case 0x4f4fc6:c.instructions+=1;goto B4f4fc6;
case 0x4f4fc8:goto L4f4fc8;
case 0x4f4fcd:c.instructions+=2;goto B4f4fcd;
case 0x4f4fd0:c.instructions+=1;goto B4f4fd0;
case 0x4f4fd5:goto L4f4fd5;
case 0x4f4fd6:c.instructions+=3;goto B4f4fd6;
case 0x4f4fd9:c.instructions+=2;goto B4f4fd9;
case 0x4f4fda:c.instructions+=1;goto B4f4fda;
case 0x4f4fdf:goto L4f4fdf;
case 0x4f4fe1:c.instructions+=3;goto B4f4fe1;
case 0x4f4fe4:c.instructions+=2;goto B4f4fe4;
case 0x4f4fe6:c.instructions+=1;goto B4f4fe6;
case 0x4f4fe8:goto L4f4fe8;
case 0x4f4fed:goto L4f4fed;
case 0x4f4fef:c.instructions+=1;goto B4f4fef;
case 0x4f4ff1:goto L4f4ff1;
case 0x4f4ff4:c.instructions+=1;goto B4f4ff4;
case 0x4f4ff6:goto L4f4ff6;
case 0x4f4ff8:goto L4f4ff8;
case 0x4f4ffb:c.instructions+=2;goto B4f4ffb;
case 0x4f4ffd:c.instructions+=1;goto B4f4ffd;
default:missing_instruction(c.pc);}
B4f4000:L4f4000:{c.instructions+=2;NFSU2_TR(0x4f4000);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f4002:{NFSU2_TR(0x4f4002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4027;}}
}
B4f4004:L4f4004:{c.instructions+=2;NFSU2_TR(0x4f4004);
__builtin_memmove((R+12),gp(0x7f457c),4);
}
B4f400a:{NFSU2_TR(0x4f400a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f400full));
TAIL_STATIC(0x440ec0u,440);
}
B4f400f:L4f400f:{c.instructions+=2;NFSU2_TR(0x4f400f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4011:{NFSU2_TR(0x4f4011);
if(r1(R+518)){{goto L4f4018;}}
}
B4f4013:L4f4013:{c.instructions+=2;NFSU2_TR(0x4f4013);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4016:{NFSU2_TR(0x4f4016);
{goto L4f401a;}
}
B4f4018:L4f4018:{c.instructions+=1;NFSU2_TR(0x4f4018);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f401a:L4f401a:{c.instructions+=5;NFSU2_TR(0x4f401a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f401d:{NFSU2_TR(0x4f401d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f401f:{NFSU2_TR(0x4f401f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4022:{NFSU2_TR(0x4f4022);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4025:{NFSU2_TR(0x4f4025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4027:L4f4027:{c.instructions+=2;NFSU2_TR(0x4f4027);
__builtin_memmove((R+4),(R+28),4);
}
B4f4029:{NFSU2_TR(0x4f4029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f402eull));
TAIL_STATIC(0x4a4610u,4a4);
}
B4f402e:L4f402e:{c.instructions+=2;NFSU2_TR(0x4f402e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f4030:{NFSU2_TR(0x4f4030);
if(r1(R+518)){{goto L4f4055;}}
}
B4f4032:L4f4032:{c.instructions+=2;NFSU2_TR(0x4f4032);
__builtin_memmove((R+12),gp(0x7f4584),4);
}
B4f4038:{NFSU2_TR(0x4f4038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f403dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f403d:L4f403d:{c.instructions+=2;NFSU2_TR(0x4f403d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f403f:{NFSU2_TR(0x4f403f);
if(r1(R+518)){{goto L4f4046;}}
}
B4f4041:L4f4041:{c.instructions+=2;NFSU2_TR(0x4f4041);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4044:{NFSU2_TR(0x4f4044);
{goto L4f4048;}
}
B4f4046:L4f4046:{c.instructions+=1;NFSU2_TR(0x4f4046);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4048:L4f4048:{c.instructions+=5;NFSU2_TR(0x4f4048);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f404b:{NFSU2_TR(0x4f404b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f404d:{NFSU2_TR(0x4f404d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4050:{NFSU2_TR(0x4f4050);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4053:{NFSU2_TR(0x4f4053);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4055:L4f4055:{c.instructions+=2;NFSU2_TR(0x4f4055);
__builtin_memmove((R+4),(R+28),4);
}
B4f4057:{NFSU2_TR(0x4f4057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f405cull));
TAIL_STATIC(0x4a4610u,4a4);
}
B4f405c:L4f405c:{c.instructions+=2;NFSU2_TR(0x4f405c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f405e:{NFSU2_TR(0x4f405e);
if(r1(R+518)){{goto L4f4083;}}
}
B4f4060:L4f4060:{c.instructions+=2;NFSU2_TR(0x4f4060);
__builtin_memmove((R+12),gp(0x7f4588),4);
}
B4f4066:{NFSU2_TR(0x4f4066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f406bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f406b:L4f406b:{c.instructions+=2;NFSU2_TR(0x4f406b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f406d:{NFSU2_TR(0x4f406d);
if(r1(R+518)){{goto L4f4074;}}
}
B4f406f:L4f406f:{c.instructions+=2;NFSU2_TR(0x4f406f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4072:{NFSU2_TR(0x4f4072);
{goto L4f4076;}
}
B4f4074:L4f4074:{c.instructions+=1;NFSU2_TR(0x4f4074);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4076:L4f4076:{c.instructions+=5;NFSU2_TR(0x4f4076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4079:{NFSU2_TR(0x4f4079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f407b:{NFSU2_TR(0x4f407b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f407e:{NFSU2_TR(0x4f407e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4081:{NFSU2_TR(0x4f4081);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4083:L4f4083:{c.instructions+=3;NFSU2_TR(0x4f4083);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4f4088:{NFSU2_TR(0x4f4088);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f408a:{NFSU2_TR(0x4f408a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f40ce;}}
}
B4f408c:L4f408c:{c.instructions+=3;NFSU2_TR(0x4f408c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4f4091:{NFSU2_TR(0x4f4091);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4094:{NFSU2_TR(0x4f4094);
if(r1(R+518)){{goto L4f40ce;}}
}
B4f4096:L4f4096:{c.instructions+=2;NFSU2_TR(0x4f4096);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f409b:{NFSU2_TR(0x4f409b);
if(r1(R+518)){{goto L4f40ce;}}
}
B4f409d:L4f409d:{c.instructions+=2;NFSU2_TR(0x4f409d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f40a0:{NFSU2_TR(0x4f40a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f40ab;}}
}
B4f40a2:L4f40a2:{c.instructions+=2;NFSU2_TR(0x4f40a2);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f40a9:{NFSU2_TR(0x4f40a9);
if(r1(R+518)){{goto L4f40ce;}}
}
B4f40ab:L4f40ab:{c.instructions+=2;NFSU2_TR(0x4f40ab);
__builtin_memmove((R+12),gp(0x7f4590),4);
}
B4f40b1:{NFSU2_TR(0x4f40b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f40b6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f40b6:L4f40b6:{c.instructions+=2;NFSU2_TR(0x4f40b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f40b8:{NFSU2_TR(0x4f40b8);
if(r1(R+518)){{goto L4f40bf;}}
}
B4f40ba:L4f40ba:{c.instructions+=2;NFSU2_TR(0x4f40ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f40bd:{NFSU2_TR(0x4f40bd);
{goto L4f40c1;}
}
B4f40bf:L4f40bf:{c.instructions+=1;NFSU2_TR(0x4f40bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f40c1:L4f40c1:{c.instructions+=5;NFSU2_TR(0x4f40c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f40c4:{NFSU2_TR(0x4f40c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f40c6:{NFSU2_TR(0x4f40c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f40c9:{NFSU2_TR(0x4f40c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f40cc:{NFSU2_TR(0x4f40cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f40ce:L4f40ce:{c.instructions+=2;NFSU2_TR(0x4f40ce);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4f40d0:{NFSU2_TR(0x4f40d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4109;}}
}
B4f40d2:L4f40d2:{c.instructions+=4;NFSU2_TR(0x4f40d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f40d4:{NFSU2_TR(0x4f40d4);
w4(R+4,u32(0x83a9d0ull));
}
B4f40d9:{NFSU2_TR(0x4f40d9);
s1(0x7f45a0,u8(0x0ull));
}
B4f40e0:{NFSU2_TR(0x4f40e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f40e5ull));
TAIL_STATIC(0x502ff0u,502);
}
B4f40e5:L4f40e5:{c.instructions+=2;NFSU2_TR(0x4f40e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f40e6:{NFSU2_TR(0x4f40e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f40ebull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4f40eb:L4f40eb:{c.instructions+=4;NFSU2_TR(0x4f40eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f40ee:{NFSU2_TR(0x4f40ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f40f0:{NFSU2_TR(0x4f40f0);
w4(R+4,u32(0x83a9d0ull));
}
B4f40f5:{NFSU2_TR(0x4f40f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f40faull));
TAIL_STATIC(0x503040u,503);
}
B4f40fa:L4f40fa:{c.instructions+=4;NFSU2_TR(0x4f40fa);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4f4100:{NFSU2_TR(0x4f4100);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4102:{NFSU2_TR(0x4f4102);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4104:{NFSU2_TR(0x4f4104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4109ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4f4109:L4f4109:{c.instructions+=4;NFSU2_TR(0x4f4109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4f410b:{NFSU2_TR(0x4f410b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f410d:{NFSU2_TR(0x4f410d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4110:{NFSU2_TR(0x4f4110);
if(r1(R+518)){{goto L4f4126;}}
}
B4f4112:L4f4112:{c.instructions+=4;NFSU2_TR(0x4f4112);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4115:{NFSU2_TR(0x4f4115);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4117:{NFSU2_TR(0x4f4117);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4118:{NFSU2_TR(0x4f4118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f411dull));
TAIL_STATIC(0x51cd10u,51c);
}
B4f411d:L4f411d:{c.instructions+=4;NFSU2_TR(0x4f411d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4f411f:{NFSU2_TR(0x4f411f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f4122:{NFSU2_TR(0x4f4122);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f4124:{NFSU2_TR(0x4f4124);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f4112u);}goto L4f4112;}}
}
B4f4126:L4f4126:{c.instructions+=1;NFSU2_TR(0x4f4126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f412bull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f412b:L4f412b:{c.instructions+=2;NFSU2_TR(0x4f412b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f412c:{NFSU2_TR(0x4f412c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4131ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f4131:L4f4131:{c.instructions+=3;NFSU2_TR(0x4f4131);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4134:{NFSU2_TR(0x4f4134);
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
B4f4136:{NFSU2_TR(0x4f4136);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4154;}}
}
B4f4138:L4f4138:{c.instructions+=4;NFSU2_TR(0x4f4138);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f413a:{NFSU2_TR(0x4f413a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f413f:{NFSU2_TR(0x4f413f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4144:{NFSU2_TR(0x4f4144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4149ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f4149:L4f4149:{c.instructions+=3;NFSU2_TR(0x4f4149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f414a:{NFSU2_TR(0x4f414a);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f414c:{NFSU2_TR(0x4f414c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4151ull));
TAIL_STATIC(0x555f50u,555);
}
B4f4151:L4f4151:{c.instructions+=1;NFSU2_TR(0x4f4151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f4154:L4f4154:{c.instructions+=8;NFSU2_TR(0x4f4154);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4158:{NFSU2_TR(0x4f4158);
__builtin_memmove((R+0),(R+28),4);
}
B4f415a:{NFSU2_TR(0x4f415a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f415b:{NFSU2_TR(0x4f415b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f415c:{NFSU2_TR(0x4f415c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f415d:{NFSU2_TR(0x4f415d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4164:{NFSU2_TR(0x4f4164);
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
B4f4167:{NFSU2_TR(0x4f4167);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4170:L4f4170:{c.instructions+=3;NFSU2_TR(0x4f4170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4171:{NFSU2_TR(0x4f4171);
__builtin_memmove((R+24),(R+4),4);
}
B4f4173:{NFSU2_TR(0x4f4173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4178ull));
TAIL_STATIC(0x4ea290u,4ea);
}
B4f4178:L4f4178:{c.instructions+=2;NFSU2_TR(0x4f4178);
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
B4f417d:{NFSU2_TR(0x4f417d);
if(r1(R+518)){{goto L4f4188;}}
}
B4f417f:L4f417f:{c.instructions+=2;NFSU2_TR(0x4f417f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4180:{NFSU2_TR(0x4f4180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4185ull));
TAIL_STATIC(0x575630u,575);
}
B4f4185:L4f4185:{c.instructions+=1;NFSU2_TR(0x4f4185);
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
B4f4188:L4f4188:{c.instructions+=3;NFSU2_TR(0x4f4188);
__builtin_memmove((R+0),(R+24),4);
}
B4f418a:{NFSU2_TR(0x4f418a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f418b:{NFSU2_TR(0x4f418b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4190:L4f4190:{c.instructions+=10;NFSU2_TR(0x4f4190);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4192:{NFSU2_TR(0x4f4192);
u8 U[4];
w4(U+0,u32(0x776804ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4197:{NFSU2_TR(0x4f4197);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f419d:{NFSU2_TR(0x4f419d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f419e:{NFSU2_TR(0x4f419e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f41a5:{NFSU2_TR(0x4f41a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f41a6:{NFSU2_TR(0x4f41a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f41a7:{NFSU2_TR(0x4f41a7);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f41a9:{NFSU2_TR(0x4f41a9);
__builtin_memmove((R+24),(R+4),4);
}
B4f41ab:{NFSU2_TR(0x4f41ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f41b0ull));
TAIL_STATIC(0x575620u,575);
}
B4f41b0:L4f41b0:{c.instructions+=5;NFSU2_TR(0x4f41b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f41b3:{NFSU2_TR(0x4f41b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f41b7:{NFSU2_TR(0x4f41b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f41b9:{NFSU2_TR(0x4f41b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f41c1:{NFSU2_TR(0x4f41c1);
if(r1(R+518)){{goto L4f41cc;}}
}
B4f41c3:L4f41c3:{c.instructions+=2;NFSU2_TR(0x4f41c3);
__builtin_memmove((R+4),(R+0),4);
}
B4f41c5:{NFSU2_TR(0x4f41c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f41caull));
TAIL_STATIC(0x4f3ea0u,4f3);
}
B4f41ca:L4f41ca:{c.instructions+=1;NFSU2_TR(0x4f41ca);
{goto L4f41ce;}
}
B4f41cc:L4f41cc:{c.instructions+=1;NFSU2_TR(0x4f41cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f41ce:L4f41ce:{c.instructions+=7;NFSU2_TR(0x4f41ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f41d2:{NFSU2_TR(0x4f41d2);
__builtin_memmove(gp(0x8363dc),(R+0),4);
}
B4f41d7:{NFSU2_TR(0x4f41d7);
__builtin_memmove((R+0),(R+24),4);
}
B4f41d9:{NFSU2_TR(0x4f41d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f41da:{NFSU2_TR(0x4f41da);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f41e1:{NFSU2_TR(0x4f41e1);
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
B4f41e4:{NFSU2_TR(0x4f41e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f41f0:L4f41f0:{c.instructions+=14;NFSU2_TR(0x4f41f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f41f2:{NFSU2_TR(0x4f41f2);
u8 U[4];
w4(U+0,u32(0x77605eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f41f7:{NFSU2_TR(0x4f41f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f41fd:{NFSU2_TR(0x4f41fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f41fe:{NFSU2_TR(0x4f41fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4205:{NFSU2_TR(0x4f4205);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4206:{NFSU2_TR(0x4f4206);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f420a:{NFSU2_TR(0x4f420a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f420b:{NFSU2_TR(0x4f420b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f420c:{NFSU2_TR(0x4f420c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f420d:{NFSU2_TR(0x4f420d);
__builtin_memmove((R+24),(R+4),4);
}
B4f420f:{NFSU2_TR(0x4f420f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4210:{NFSU2_TR(0x4f4210);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4214:{NFSU2_TR(0x4f4214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4219ull));
TAIL_STATIC(0x551de0u,551);
}
B4f4219:L4f4219:{c.instructions+=31;NFSU2_TR(0x4f4219);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f421c:{NFSU2_TR(0x4f421c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f421e:{NFSU2_TR(0x4f421e);
u8 U[4];
w4(U+0,u32(0x797b80ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f4224:{NFSU2_TR(0x4f4224);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4228:{NFSU2_TR(0x4f4228);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f422a:{NFSU2_TR(0x4f422a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f422d:{NFSU2_TR(0x4f422d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4230:{NFSU2_TR(0x4f4230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4233:{NFSU2_TR(0x4f4233);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f4236:{NFSU2_TR(0x4f4236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4239:{NFSU2_TR(0x4f4239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f423c:{NFSU2_TR(0x4f423c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f423f:{NFSU2_TR(0x4f423f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f4242:{NFSU2_TR(0x4f4242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4245:{NFSU2_TR(0x4f4245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4248:{NFSU2_TR(0x4f4248);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f424a:{NFSU2_TR(0x4f424a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f424d:{NFSU2_TR(0x4f424d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4250:{NFSU2_TR(0x4f4250);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f4253:{NFSU2_TR(0x4f4253);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f4256:{NFSU2_TR(0x4f4256);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f4259:{NFSU2_TR(0x4f4259);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f425c:{NFSU2_TR(0x4f425c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f425f:{NFSU2_TR(0x4f425f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4262:{NFSU2_TR(0x4f4262);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4265:{NFSU2_TR(0x4f4265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4268:{NFSU2_TR(0x4f4268);
__builtin_memmove((R+8),gp(0x8363dc),4);
}
B4f426e:{NFSU2_TR(0x4f426e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4271:{NFSU2_TR(0x4f4271);
w4(R+4,u32(0x89cf48ull));
}
B4f4276:{NFSU2_TR(0x4f4276);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f427b:{NFSU2_TR(0x4f427b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4280ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4f4280:L4f4280:{c.instructions+=2;NFSU2_TR(0x4f4280);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f4282:{NFSU2_TR(0x4f4282);
if(r1(R+518)){{goto L4f42c0;}}
}
B4f4284:L4f4284:{c.instructions+=2;NFSU2_TR(0x4f4284);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f428b:{NFSU2_TR(0x4f428b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f42c0;}}
}
B4f428d:L4f428d:{c.instructions+=4;NFSU2_TR(0x4f428d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f428e:{NFSU2_TR(0x4f428e);
u8 U[4];
w4(U+0,u32(0x4c0430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4293:{NFSU2_TR(0x4f4293);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4294:{NFSU2_TR(0x4f4294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4299ull));
TAIL_STATIC(0x58f740u,58f);
}
B4f4299:L4f4299:{c.instructions+=3;NFSU2_TR(0x4f4299);
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
B4f429c:{NFSU2_TR(0x4f429c);
__builtin_memmove((R+4),(R+0),4);
}
B4f429e:{NFSU2_TR(0x4f429e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42a3ull));
TAIL_STATIC(0x582910u,582);
}
B4f42a3:L4f42a3:{c.instructions+=2;NFSU2_TR(0x4f42a3);
__builtin_memmove((R+4),(R+24),4);
}
B4f42a5:{NFSU2_TR(0x4f42a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42aaull));
TAIL_STATIC(0x4c0270u,4c0);
}
B4f42aa:L4f42aa:{c.instructions+=4;NFSU2_TR(0x4f42aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42ab:{NFSU2_TR(0x4f42ab);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42ad:{NFSU2_TR(0x4f42ad);
__builtin_memmove((R+4),(R+24),4);
}
B4f42af:{NFSU2_TR(0x4f42af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42b4ull));
TAIL_STATIC(0x4a4770u,4a4);
}
B4f42b4:L4f42b4:{c.instructions+=4;NFSU2_TR(0x4f42b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42b6:{NFSU2_TR(0x4f42b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42b7:{NFSU2_TR(0x4f42b7);
__builtin_memmove((R+4),(R+28),4);
}
B4f42b9:{NFSU2_TR(0x4f42b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42beull));
TAIL_STATIC(0x4cfd80u,4cf);
}
B4f42be:L4f42be:{c.instructions+=1;NFSU2_TR(0x4f42be);
{goto L4f42c7;}
}
B4f42c0:L4f42c0:{c.instructions+=2;NFSU2_TR(0x4f42c0);
__builtin_memmove((R+4),(R+24),4);
}
B4f42c2:{NFSU2_TR(0x4f42c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42c7ull));
TAIL_STATIC(0x4ea490u,4ea);
}
B4f42c7:L4f42c7:{c.instructions+=1;NFSU2_TR(0x4f42c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42ccull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f42cc:L4f42cc:{c.instructions+=2;NFSU2_TR(0x4f42cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42cd:{NFSU2_TR(0x4f42cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42d2ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4f42d2:L4f42d2:{c.instructions+=3;NFSU2_TR(0x4f42d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f42d5:{NFSU2_TR(0x4f42d5);
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
B4f42d7:{NFSU2_TR(0x4f42d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f42f1;}}
}
B4f42d9:L4f42d9:{c.instructions+=5;NFSU2_TR(0x4f42d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f42dc:{NFSU2_TR(0x4f42dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42dd:{NFSU2_TR(0x4f42dd);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42e2:{NFSU2_TR(0x4f42e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42e3:{NFSU2_TR(0x4f42e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42e8ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4f42e8:L4f42e8:{c.instructions+=2;NFSU2_TR(0x4f42e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f42e9:{NFSU2_TR(0x4f42e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42eeull));
TAIL_STATIC(0x555f10u,555);
}
B4f42ee:L4f42ee:{c.instructions+=1;NFSU2_TR(0x4f42ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f42f1:L4f42f1:{c.instructions+=2;NFSU2_TR(0x4f42f1);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f42f7:{NFSU2_TR(0x4f42f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f42fcull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4f42fc:L4f42fc:{c.instructions+=2;NFSU2_TR(0x4f42fc);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4303:{NFSU2_TR(0x4f4303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4323;}}
}
B4f4305:L4f4305:{c.instructions+=2;NFSU2_TR(0x4f4305);
w4(R+4,u32(0x89cf48ull));
}
B4f430a:{NFSU2_TR(0x4f430a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f430full));
TAIL_STATIC(0x5fe500u,5fe);
}
B4f430f:L4f430f:{c.instructions+=2;NFSU2_TR(0x4f430f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f4311:{NFSU2_TR(0x4f4311);
if(r1(R+518)){{goto L4f4323;}}
}
B4f4313:L4f4313:{c.instructions+=6;NFSU2_TR(0x4f4313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4316:{NFSU2_TR(0x4f4316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4319:{NFSU2_TR(0x4f4319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f431a:{NFSU2_TR(0x4f431a);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000000ull))));
}
B4f4320:{NFSU2_TR(0x4f4320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4321:{NFSU2_TR(0x4f4321);
{goto L4f432b;}
}
B4f4323:L4f4323:{c.instructions+=4;NFSU2_TR(0x4f4323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4326:{NFSU2_TR(0x4f4326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4329:{NFSU2_TR(0x4f4329);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f432a:{NFSU2_TR(0x4f432a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f432b:L4f432b:{c.instructions+=2;NFSU2_TR(0x4f432b);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4f4331:{NFSU2_TR(0x4f4331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4336ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4f4336:L4f4336:{c.instructions+=8;NFSU2_TR(0x4f4336);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f433a:{NFSU2_TR(0x4f433a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f433b:{NFSU2_TR(0x4f433b);
__builtin_memmove((R+0),(R+24),4);
}
B4f433d:{NFSU2_TR(0x4f433d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f433e:{NFSU2_TR(0x4f433e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f433f:{NFSU2_TR(0x4f433f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4346:{NFSU2_TR(0x4f4346);
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
B4f4349:{NFSU2_TR(0x4f4349);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4350:L4f4350:{c.instructions+=3;NFSU2_TR(0x4f4350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4351:{NFSU2_TR(0x4f4351);
__builtin_memmove((R+24),(R+4),4);
}
B4f4353:{NFSU2_TR(0x4f4353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4358ull));
TAIL_STATIC(0x4ea360u,4ea);
}
B4f4358:L4f4358:{c.instructions+=2;NFSU2_TR(0x4f4358);
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
B4f435d:{NFSU2_TR(0x4f435d);
if(r1(R+518)){{goto L4f4368;}}
}
B4f435f:L4f435f:{c.instructions+=2;NFSU2_TR(0x4f435f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4360:{NFSU2_TR(0x4f4360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4365ull));
TAIL_STATIC(0x575630u,575);
}
B4f4365:L4f4365:{c.instructions+=1;NFSU2_TR(0x4f4365);
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
B4f4368:L4f4368:{c.instructions+=3;NFSU2_TR(0x4f4368);
__builtin_memmove((R+0),(R+24),4);
}
B4f436a:{NFSU2_TR(0x4f436a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f436b:{NFSU2_TR(0x4f436b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4370:L4f4370:{c.instructions+=8;NFSU2_TR(0x4f4370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4371:{NFSU2_TR(0x4f4371);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4372:{NFSU2_TR(0x4f4372);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f4376:{NFSU2_TR(0x4f4376);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f4378:{NFSU2_TR(0x4f4378);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xa8de4cd2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xa8de4cd2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xa8de4cd2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f437e:{NFSU2_TR(0x4f437e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f437f:{NFSU2_TR(0x4f437f);
__builtin_memmove((R+24),(R+4),4);
}
B4f4381:{NFSU2_TR(0x4f4381);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f441a;}}
}
B4f4387:L4f4387:{c.instructions+=1;NFSU2_TR(0x4f4387);
if(r1(R+518)){{goto L4f4406;}}
}
B4f4389:L4f4389:{c.instructions+=2;NFSU2_TR(0x4f4389);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c0e485aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f438f:{NFSU2_TR(0x4f438f);
if(r1(R+518)){{goto L4f43b9;}}
}
B4f4391:L4f4391:{c.instructions+=2;NFSU2_TR(0x4f4391);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4397:{NFSU2_TR(0x4f4397);
if(r1(R+518)){{goto L4f44e7;}}
}
B4f439d:L4f439d:{c.instructions+=2;NFSU2_TR(0x4f439d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f43a3:{NFSU2_TR(0x4f43a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f44f2;}}
}
B4f43a9:L4f43a9:{c.instructions+=2;NFSU2_TR(0x4f43a9);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4f43af:{NFSU2_TR(0x4f43af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f43b4ull));
TAIL_STATIC(0x4c0020u,4c0);
}
B4f43b4:L4f43b4:{c.instructions+=1;NFSU2_TR(0x4f43b4);
{goto L4f44f2;}
}
B4f43b9:L4f43b9:{c.instructions+=2;NFSU2_TR(0x4f43b9);
u8 U[14];
__builtin_memmove((U+6),gp(0x8500d0),4);
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
B4f43c0:{NFSU2_TR(0x4f43c0);
if(r1(R+518)){{goto L4f43d7;}}
}
B4f43c2:L4f43c2:{c.instructions+=3;NFSU2_TR(0x4f43c2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f43c4:{NFSU2_TR(0x4f43c4);
w4(R+4,u32(0x850080ull));
}
B4f43c9:{NFSU2_TR(0x4f43c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f43ceull));
TAIL_STATIC(0x5031b0u,503);
}
B4f43ce:L4f43ce:{c.instructions+=2;NFSU2_TR(0x4f43ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f43cf:{NFSU2_TR(0x4f43cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f43d4ull));
TAIL_STATIC(0x58fd50u,58f);
}
B4f43d4:L4f43d4:{c.instructions+=1;NFSU2_TR(0x4f43d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f43d7:L4f43d7:{c.instructions+=3;NFSU2_TR(0x4f43d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f43da:{NFSU2_TR(0x4f43da);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f43dc:{NFSU2_TR(0x4f43dc);
if(r1(R+518)){{goto L4f43ea;}}
}
B4f43de:L4f43de:{c.instructions+=2;NFSU2_TR(0x4f43de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f43df:{NFSU2_TR(0x4f43df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f43e4ull));
TAIL_STATIC(0x540a60u,540);
}
B4f43e4:L4f43e4:{c.instructions+=2;NFSU2_TR(0x4f43e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f43e7:{NFSU2_TR(0x4f43e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f43ea:L4f43ea:{c.instructions+=3;NFSU2_TR(0x4f43ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f43ed:{NFSU2_TR(0x4f43ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f43ef:{NFSU2_TR(0x4f43ef);
if(r1(R+518)){{goto L4f44e7;}}
}
B4f43f5:L4f43f5:{c.instructions+=2;NFSU2_TR(0x4f43f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f43f6:{NFSU2_TR(0x4f43f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f43fbull));
TAIL_STATIC(0x540a60u,540);
}
B4f43fb:L4f43fb:{c.instructions+=3;NFSU2_TR(0x4f43fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f43fe:{NFSU2_TR(0x4f43fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4401:{NFSU2_TR(0x4f4401);
{goto L4f44e7;}
}
B4f4406:L4f4406:{c.instructions+=1;NFSU2_TR(0x4f4406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f440bull));
TAIL_STATIC(0x5b7c40u,5b7);
}
B4f440b:L4f440b:{c.instructions+=2;NFSU2_TR(0x4f440b);
s4(0x864f4c,u32(0x1ull));
}
B4f4415:{NFSU2_TR(0x4f4415);
{goto L4f44f2;}
}
B4f441a:L4f441a:{c.instructions+=2;NFSU2_TR(0x4f441a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4420:{NFSU2_TR(0x4f4420);
if(r1(R+518)){{goto L4f4455;}}
}
B4f4422:L4f4422:{c.instructions+=2;NFSU2_TR(0x4f4422);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeaacfeedull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4428:{NFSU2_TR(0x4f4428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f44f2;}}
}
B4f442e:L4f442e:{c.instructions+=3;NFSU2_TR(0x4f442e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f442f:{NFSU2_TR(0x4f442f);
w4(R+4,u32(0x83a9d0ull));
}
B4f4434:{NFSU2_TR(0x4f4434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4439ull));
TAIL_STATIC(0x502ff0u,502);
}
B4f4439:L4f4439:{c.instructions+=2;NFSU2_TR(0x4f4439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f443a:{NFSU2_TR(0x4f443a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f443full));
TAIL_STATIC(0x50c8d0u,50c);
}
B4f443f:L4f443f:{c.instructions+=5;NFSU2_TR(0x4f443f);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4f4445:{NFSU2_TR(0x4f4445);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4448:{NFSU2_TR(0x4f4448);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4449:{NFSU2_TR(0x4f4449);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f444b:{NFSU2_TR(0x4f444b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4450ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4f4450:L4f4450:{c.instructions+=1;NFSU2_TR(0x4f4450);
{goto L4f44f2;}
}
B4f4455:L4f4455:{c.instructions+=2;NFSU2_TR(0x4f4455);
w4(R+4,u32(0x89cf48ull));
}
B4f445a:{NFSU2_TR(0x4f445a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f445full));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4f445f:L4f445f:{c.instructions+=2;NFSU2_TR(0x4f445f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f4461:{NFSU2_TR(0x4f4461);
if(r1(R+518)){{goto L4f449e;}}
}
B4f4463:L4f4463:{c.instructions+=2;NFSU2_TR(0x4f4463);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4f4466:{NFSU2_TR(0x4f4466);
if(r1(R+518)){{goto L4f449e;}}
}
B4f4468:L4f4468:{c.instructions+=3;NFSU2_TR(0x4f4468);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4f446e:{NFSU2_TR(0x4f446e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4f4471:{NFSU2_TR(0x4f4471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4476ull));
TAIL_STATIC(0x4a3da0u,4a3);
}
B4f4476:L4f4476:{c.instructions+=3;NFSU2_TR(0x4f4476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4479:{NFSU2_TR(0x4f4479);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f447b:{NFSU2_TR(0x4f447b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f4489;}}
}
B4f447d:L4f447d:{c.instructions+=2;NFSU2_TR(0x4f447d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f447e:{NFSU2_TR(0x4f447e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4483ull));
TAIL_STATIC(0x540a60u,540);
}
B4f4483:L4f4483:{c.instructions+=2;NFSU2_TR(0x4f4483);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4486:{NFSU2_TR(0x4f4486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4489:L4f4489:{c.instructions+=3;NFSU2_TR(0x4f4489);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f448c:{NFSU2_TR(0x4f448c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f448e:{NFSU2_TR(0x4f448e);
if(r1(R+518)){{goto L4f44f2;}}
}
B4f4490:L4f4490:{c.instructions+=2;NFSU2_TR(0x4f4490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4491:{NFSU2_TR(0x4f4491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4496ull));
TAIL_STATIC(0x540a60u,540);
}
B4f4496:L4f4496:{c.instructions+=3;NFSU2_TR(0x4f4496);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4499:{NFSU2_TR(0x4f4499);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f449c:{NFSU2_TR(0x4f449c);
{goto L4f44f2;}
}
B4f449e:L4f449e:{c.instructions+=5;NFSU2_TR(0x4f449e);
__builtin_memmove((R+0),gp(0x865198),4);
}
B4f44a3:{NFSU2_TR(0x4f44a3);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4f44a9:{NFSU2_TR(0x4f44a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f44aa:{NFSU2_TR(0x4f44aa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4f44ad:{NFSU2_TR(0x4f44ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f44b2ull));
TAIL_STATIC(0x4e9210u,4e9);
}
B4f44b2:L4f44b2:{c.instructions+=3;NFSU2_TR(0x4f44b2);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4f44b7:{NFSU2_TR(0x4f44b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f44bc:{NFSU2_TR(0x4f44bc);
if(r1(R+518)){{goto L4f44c3;}}
}
B4f44be:L4f44be:{c.instructions+=2;NFSU2_TR(0x4f44be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f44c1:{NFSU2_TR(0x4f44c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f44f2;}}
}
B4f44c3:L4f44c3:{c.instructions+=2;NFSU2_TR(0x4f44c3);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f44ca:{NFSU2_TR(0x4f44ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f44f2;}}
}
B4f44cc:L4f44cc:{c.instructions+=2;NFSU2_TR(0x4f44cc);
w4(R+4,u32(0x89cf48ull));
}
B4f44d1:{NFSU2_TR(0x4f44d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f44d6ull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4f44d6:L4f44d6:{c.instructions+=2;NFSU2_TR(0x4f44d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f44d8:{NFSU2_TR(0x4f44d8);
if(r1(R+518)){{goto L4f44f2;}}
}
B4f44da:L4f44da:{c.instructions+=3;NFSU2_TR(0x4f44da);
__builtin_memmove((R+0),gp(0x89d05c),4);
}
B4f44df:{NFSU2_TR(0x4f44df);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f44e5:{NFSU2_TR(0x4f44e5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4f44f2;}}
}
B4f44e7:L4f44e7:{c.instructions+=2;NFSU2_TR(0x4f44e7);
__builtin_memmove((R+4),gp(0x8363dc),4);
}
B4f44ed:{NFSU2_TR(0x4f44ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f44f2ull));
TAIL_STATIC(0x4bff80u,4bf);
}
B4f44f2:L4f44f2:{c.instructions+=2;NFSU2_TR(0x4f44f2);
w4(R+4,u32(0x89cf48ull));
}
B4f44f7:{NFSU2_TR(0x4f44f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f44fcull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4f44fc:L4f44fc:{c.instructions+=2;NFSU2_TR(0x4f44fc);
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
B4f44fe:{NFSU2_TR(0x4f44fe);
if(r1(R+518)){{goto L4f45fc;}}
}
B4f4504:L4f4504:{c.instructions+=2;NFSU2_TR(0x4f4504);
u8 U[5];
__builtin_memmove((U+3),gp(0x850098),1);
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
B4f450b:{NFSU2_TR(0x4f450b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f45fc;}}
}
B4f4511:L4f4511:{c.instructions+=12;NFSU2_TR(0x4f4511);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4515:{NFSU2_TR(0x4f4515);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4519:{NFSU2_TR(0x4f4519);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f451d:{NFSU2_TR(0x4f451d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f451e:{NFSU2_TR(0x4f451e);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4520:{NFSU2_TR(0x4f4520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4521:{NFSU2_TR(0x4f4521);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4522:{NFSU2_TR(0x4f4522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4523:{NFSU2_TR(0x4f4523);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f4526:{NFSU2_TR(0x4f4526);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4527:{NFSU2_TR(0x4f4527);
__builtin_memmove((R+4),(R+28),4);
}
B4f4529:{NFSU2_TR(0x4f4529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f452eull));
TAIL_STATIC(0x4efe40u,4ef);
}
B4f452e:L4f452e:{c.instructions+=2;NFSU2_TR(0x4f452e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4530:{NFSU2_TR(0x4f4530);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4f45c3;}}
}
B4f4536:L4f4536:{c.instructions+=1;NFSU2_TR(0x4f4536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f453bull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f453b:L4f453b:{c.instructions+=2;NFSU2_TR(0x4f453b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4f4541:{NFSU2_TR(0x4f4541);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f458b;}}
}
B4f4543:L4f4543:{c.instructions+=2;NFSU2_TR(0x4f4543);
u8 U[2];
__builtin_memmove((U+0),gp(0x837b72),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f4549:{NFSU2_TR(0x4f4549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f458b;}}
}
B4f454b:L4f454b:{c.instructions+=3;NFSU2_TR(0x4f454b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f454e:{NFSU2_TR(0x4f454e);
s1(0x837b72,u8(0x1ull));
}
B4f4555:{NFSU2_TR(0x4f4555);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f45e7;}}
}
B4f455b:L4f455b:{c.instructions+=3;NFSU2_TR(0x4f455b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f455e:{NFSU2_TR(0x4f455e);
u8 U[4];
w4(U+0,u32(0xd9dd2a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4563:{NFSU2_TR(0x4f4563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4568ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f4568:L4f4568:{c.instructions+=7;NFSU2_TR(0x4f4568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4569:{NFSU2_TR(0x4f4569);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f456e:{NFSU2_TR(0x4f456e);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4573:{NFSU2_TR(0x4f4573);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4578:{NFSU2_TR(0x4f4578);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f457d:{NFSU2_TR(0x4f457d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f457e:{NFSU2_TR(0x4f457e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4583ull));
TAIL_STATIC(0x558540u,558);
}
B4f4583:L4f4583:{c.instructions+=3;NFSU2_TR(0x4f4583);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f4586:{NFSU2_TR(0x4f4586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4589:{NFSU2_TR(0x4f4589);
{goto L4f45e7;}
}
B4f458b:L4f458b:{c.instructions+=8;NFSU2_TR(0x4f458b);
__builtin_memmove((R+0),gp(0x8363dc),4);
}
B4f4590:{NFSU2_TR(0x4f4590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4593:{NFSU2_TR(0x4f4593);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f4596:{NFSU2_TR(0x4f4596);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4f4599:{NFSU2_TR(0x4f4599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f459c:{NFSU2_TR(0x4f459c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f459f:{NFSU2_TR(0x4f459f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4f45a3:{NFSU2_TR(0x4f45a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f45e7;}}
}
B4f45a5:L4f45a5:{c.instructions+=3;NFSU2_TR(0x4f45a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f45a8:{NFSU2_TR(0x4f45a8);
u8 U[4];
w4(U+0,u32(0x8668dc07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f45ad:{NFSU2_TR(0x4f45ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f45b2ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4f45b2:L4f45b2:{c.instructions+=4;NFSU2_TR(0x4f45b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f45b3:{NFSU2_TR(0x4f45b3);
u8 U[4];
w4(U+0,u32(0x7953e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f45b8:{NFSU2_TR(0x4f45b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f45b9:{NFSU2_TR(0x4f45b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f45beull));
TAIL_STATIC(0x542600u,542);
}
B4f45be:L4f45be:{c.instructions+=2;NFSU2_TR(0x4f45be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f45c1:{NFSU2_TR(0x4f45c1);
{goto L4f45e7;}
}
B4f45c3:L4f45c3:{c.instructions+=2;NFSU2_TR(0x4f45c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f45c6:{NFSU2_TR(0x4f45c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f45dd;}}
}
B4f45c8:L4f45c8:{c.instructions+=5;NFSU2_TR(0x4f45c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f45ca:{NFSU2_TR(0x4f45ca);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f45cf:{NFSU2_TR(0x4f45cf);
u8 U[4];
w4(U+0,u32(0x5a6f817full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f45d4:{NFSU2_TR(0x4f45d4);
__builtin_memmove((R+4),(R+28),4);
}
B4f45d6:{NFSU2_TR(0x4f45d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f45dbull));
TAIL_STATIC(0x4b8fa0u,4b8);
}
B4f45db:L4f45db:{c.instructions+=1;NFSU2_TR(0x4f45db);
{goto L4f45e7;}
}
B4f45dd:L4f45dd:{c.instructions+=2;NFSU2_TR(0x4f45dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f45df:{NFSU2_TR(0x4f45df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f45e7;}}
}
B4f45e1:L4f45e1:{c.instructions+=1;NFSU2_TR(0x4f45e1);
__builtin_memmove(gp(0x837b72),(R+12),1);
}
B4f45e7:L4f45e7:{c.instructions+=3;NFSU2_TR(0x4f45e7);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc98356baull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f45ed:{NFSU2_TR(0x4f45ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f45ee:{NFSU2_TR(0x4f45ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f45fc;}}
}
B4f45f0:L4f45f0:{c.instructions+=1;NFSU2_TR(0x4f45f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f45f5ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4f45f5:L4f45f5:{c.instructions+=2;NFSU2_TR(0x4f45f5);
__builtin_memmove((R+4),(R+0),4);
}
B4f45f7:{NFSU2_TR(0x4f45f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f45fcull));
TAIL_STATIC(0x586760u,586);
}
B4f45fc:L4f45fc:{c.instructions+=4;NFSU2_TR(0x4f45fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f45fd:{NFSU2_TR(0x4f45fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f45fe:{NFSU2_TR(0x4f45fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f45ff:{NFSU2_TR(0x4f45ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4610:L4f4610:{c.instructions+=12;NFSU2_TR(0x4f4610);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4612:{NFSU2_TR(0x4f4612);
u8 U[4];
w4(U+0,u32(0x776826ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4617:{NFSU2_TR(0x4f4617);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f461d:{NFSU2_TR(0x4f461d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f461e:{NFSU2_TR(0x4f461e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4625:{NFSU2_TR(0x4f4625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4626:{NFSU2_TR(0x4f4626);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f462a:{NFSU2_TR(0x4f462a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f462b:{NFSU2_TR(0x4f462b);
__builtin_memmove((R+24),(R+4),4);
}
B4f462d:{NFSU2_TR(0x4f462d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f462e:{NFSU2_TR(0x4f462e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4632:{NFSU2_TR(0x4f4632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4637ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f41f0u);}goto L4f41f0;}
}
B4f4637:L4f4637:{c.instructions+=8;NFSU2_TR(0x4f4637);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f463d:{NFSU2_TR(0x4f463d);
u8 U[4];
w4(U+0,u32(0x798390ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f4643:{NFSU2_TR(0x4f4643);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f464b:{NFSU2_TR(0x4f464b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f464d:{NFSU2_TR(0x4f464d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4650:{NFSU2_TR(0x4f4650);
__builtin_memmove((R+4),(R+24),4);
}
B4f4652:{NFSU2_TR(0x4f4652);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f4657:{NFSU2_TR(0x4f4657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f465cull));
TAIL_STATIC(0x4ea570u,4ea);
}
B4f465c:L4f465c:{c.instructions+=6;NFSU2_TR(0x4f465c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4660:{NFSU2_TR(0x4f4660);
__builtin_memmove((R+0),(R+24),4);
}
B4f4662:{NFSU2_TR(0x4f4662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4663:{NFSU2_TR(0x4f4663);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f466a:{NFSU2_TR(0x4f466a);
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
B4f466d:{NFSU2_TR(0x4f466d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4670:L4f4670:{c.instructions+=3;NFSU2_TR(0x4f4670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4671:{NFSU2_TR(0x4f4671);
__builtin_memmove((R+24),(R+4),4);
}
B4f4673:{NFSU2_TR(0x4f4673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4678ull));
{goto L4f4690;}
}
B4f4678:L4f4678:{c.instructions+=2;NFSU2_TR(0x4f4678);
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
B4f467d:{NFSU2_TR(0x4f467d);
if(r1(R+518)){{goto L4f4688;}}
}
B4f467f:L4f467f:{c.instructions+=2;NFSU2_TR(0x4f467f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4680:{NFSU2_TR(0x4f4680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4685ull));
TAIL_STATIC(0x575630u,575);
}
B4f4685:L4f4685:{c.instructions+=1;NFSU2_TR(0x4f4685);
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
B4f4688:L4f4688:{c.instructions+=3;NFSU2_TR(0x4f4688);
__builtin_memmove((R+0),(R+24),4);
}
B4f468a:{NFSU2_TR(0x4f468a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f468b:{NFSU2_TR(0x4f468b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4690:L4f4690:{c.instructions+=18;NFSU2_TR(0x4f4690);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4692:{NFSU2_TR(0x4f4692);
u8 U[4];
w4(U+0,u32(0x776826ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4697:{NFSU2_TR(0x4f4697);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f469d:{NFSU2_TR(0x4f469d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f469e:{NFSU2_TR(0x4f469e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f46a5:{NFSU2_TR(0x4f46a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f46a6:{NFSU2_TR(0x4f46a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f46a7:{NFSU2_TR(0x4f46a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f46a8:{NFSU2_TR(0x4f46a8);
__builtin_memmove((R+28),(R+4),4);
}
B4f46aa:{NFSU2_TR(0x4f46aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f46ae:{NFSU2_TR(0x4f46ae);
u8 U[4];
w4(U+0,u32(0x798390ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4f46b4:{NFSU2_TR(0x4f46b4);
__builtin_memmove((R+24),gp(0x8363dc),4);
}
B4f46ba:{NFSU2_TR(0x4f46ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f46bd:{NFSU2_TR(0x4f46bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f46c0:{NFSU2_TR(0x4f46c0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B4f46c3:{NFSU2_TR(0x4f46c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f46c5:{NFSU2_TR(0x4f46c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f46cd:{NFSU2_TR(0x4f46cd);
if(r1(R+518)){{goto L4f46df;}}
}
B4f46cf:L4f46cf:{c.instructions+=3;NFSU2_TR(0x4f46cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f46d0:{NFSU2_TR(0x4f46d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f46d1:{NFSU2_TR(0x4f46d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f46d6ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4f46d6:L4f46d6:{c.instructions+=3;NFSU2_TR(0x4f46d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f46d9:{NFSU2_TR(0x4f46d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f46db:{NFSU2_TR(0x4f46db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f46df;}}
}
B4f46dd:L4f46dd:{c.instructions+=1;NFSU2_TR(0x4f46dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f46df:L4f46df:{c.instructions+=5;NFSU2_TR(0x4f46df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f46e5:{NFSU2_TR(0x4f46e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f46eb:{NFSU2_TR(0x4f46eb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f46ed:{NFSU2_TR(0x4f46ed);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f46f2:{NFSU2_TR(0x4f46f2);
if(r1(R+518)){{goto L4f470d;}}
}
B4f46f4:L4f46f4:{c.instructions+=6;NFSU2_TR(0x4f46f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f46f6:{NFSU2_TR(0x4f46f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f46f9:{NFSU2_TR(0x4f46f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4f46fb:{NFSU2_TR(0x4f46fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f46fc:{NFSU2_TR(0x4f46fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f46ff:{NFSU2_TR(0x4f46ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4704ull));
TAIL_STATIC(0x575630u,575);
}
B4f4704:L4f4704:{c.instructions+=4;NFSU2_TR(0x4f4704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f4706:{NFSU2_TR(0x4f4706);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4709:{NFSU2_TR(0x4f4709);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f470b:{NFSU2_TR(0x4f470b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f46f4u);}goto L4f46f4;}}
}
B4f470d:L4f470d:{c.instructions+=3;NFSU2_TR(0x4f470d);
__builtin_memmove((R+4),(R+28),4);
}
B4f470f:{NFSU2_TR(0x4f470f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4717:{NFSU2_TR(0x4f4717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f471cull));
TAIL_STATIC(0x4ea360u,4ea);
}
B4f471c:L4f471c:{c.instructions+=6;NFSU2_TR(0x4f471c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4720:{NFSU2_TR(0x4f4720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f4721:{NFSU2_TR(0x4f4721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4722:{NFSU2_TR(0x4f4722);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4729:{NFSU2_TR(0x4f4729);
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
B4f472c:{NFSU2_TR(0x4f472c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4730:L4f4730:{c.instructions+=8;NFSU2_TR(0x4f4730);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4732:{NFSU2_TR(0x4f4732);
u8 U[4];
w4(U+0,u32(0x776844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4737:{NFSU2_TR(0x4f4737);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f473d:{NFSU2_TR(0x4f473d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f473e:{NFSU2_TR(0x4f473e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4745:{NFSU2_TR(0x4f4745);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4746:{NFSU2_TR(0x4f4746);
u8 U[4];
w4(U+0,u32(0x214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f474b:{NFSU2_TR(0x4f474b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4750ull));
TAIL_STATIC(0x575620u,575);
}
B4f4750:L4f4750:{c.instructions+=5;NFSU2_TR(0x4f4750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4753:{NFSU2_TR(0x4f4753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f4757:{NFSU2_TR(0x4f4757);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4759:{NFSU2_TR(0x4f4759);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4761:{NFSU2_TR(0x4f4761);
if(r1(R+518)){{goto L4f477e;}}
}
B4f4763:L4f4763:{c.instructions+=4;NFSU2_TR(0x4f4763);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4767:{NFSU2_TR(0x4f4767);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4768:{NFSU2_TR(0x4f4768);
__builtin_memmove((R+4),(R+0),4);
}
B4f476a:{NFSU2_TR(0x4f476a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f476full));
TAIL_STATIC(0x4ea790u,4ea);
}
B4f476f:L4f476f:{c.instructions+=4;NFSU2_TR(0x4f476f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4773:{NFSU2_TR(0x4f4773);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f477a:{NFSU2_TR(0x4f477a);
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
B4f477d:{NFSU2_TR(0x4f477d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f477e:L4f477e:{c.instructions+=5;NFSU2_TR(0x4f477e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4782:{NFSU2_TR(0x4f4782);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4784:{NFSU2_TR(0x4f4784);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f478b:{NFSU2_TR(0x4f478b);
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
B4f478e:{NFSU2_TR(0x4f478e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4790:L4f4790:{c.instructions+=8;NFSU2_TR(0x4f4790);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4792:{NFSU2_TR(0x4f4792);
u8 U[4];
w4(U+0,u32(0x776864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4797:{NFSU2_TR(0x4f4797);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f479d:{NFSU2_TR(0x4f479d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f479e:{NFSU2_TR(0x4f479e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f47a5:{NFSU2_TR(0x4f47a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f47a6:{NFSU2_TR(0x4f47a6);
u8 U[4];
w4(U+0,u32(0x158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f47ab:{NFSU2_TR(0x4f47ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f47b0ull));
TAIL_STATIC(0x575620u,575);
}
B4f47b0:L4f47b0:{c.instructions+=5;NFSU2_TR(0x4f47b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f47b3:{NFSU2_TR(0x4f47b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f47b7:{NFSU2_TR(0x4f47b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f47b9:{NFSU2_TR(0x4f47b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f47c1:{NFSU2_TR(0x4f47c1);
if(r1(R+518)){{goto L4f47de;}}
}
B4f47c3:L4f47c3:{c.instructions+=4;NFSU2_TR(0x4f47c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f47c7:{NFSU2_TR(0x4f47c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f47c8:{NFSU2_TR(0x4f47c8);
__builtin_memmove((R+4),(R+0),4);
}
B4f47ca:{NFSU2_TR(0x4f47ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f47cfull));
TAIL_STATIC(0x4eb410u,4eb);
}
B4f47cf:L4f47cf:{c.instructions+=4;NFSU2_TR(0x4f47cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f47d3:{NFSU2_TR(0x4f47d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f47da:{NFSU2_TR(0x4f47da);
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
B4f47dd:{NFSU2_TR(0x4f47dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f47de:L4f47de:{c.instructions+=5;NFSU2_TR(0x4f47de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f47e2:{NFSU2_TR(0x4f47e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f47e4:{NFSU2_TR(0x4f47e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f47eb:{NFSU2_TR(0x4f47eb);
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
B4f47ee:{NFSU2_TR(0x4f47ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f47f0:L4f47f0:{c.instructions+=8;NFSU2_TR(0x4f47f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f47f2:{NFSU2_TR(0x4f47f2);
u8 U[4];
w4(U+0,u32(0x776884ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f47f7:{NFSU2_TR(0x4f47f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f47fd:{NFSU2_TR(0x4f47fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f47fe:{NFSU2_TR(0x4f47fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4805:{NFSU2_TR(0x4f4805);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4806:{NFSU2_TR(0x4f4806);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f480b:{NFSU2_TR(0x4f480b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4810ull));
TAIL_STATIC(0x575620u,575);
}
B4f4810:L4f4810:{c.instructions+=5;NFSU2_TR(0x4f4810);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4813:{NFSU2_TR(0x4f4813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f4817:{NFSU2_TR(0x4f4817);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4819:{NFSU2_TR(0x4f4819);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4821:{NFSU2_TR(0x4f4821);
if(r1(R+518)){{goto L4f483e;}}
}
B4f4823:L4f4823:{c.instructions+=4;NFSU2_TR(0x4f4823);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4827:{NFSU2_TR(0x4f4827);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4828:{NFSU2_TR(0x4f4828);
__builtin_memmove((R+4),(R+0),4);
}
B4f482a:{NFSU2_TR(0x4f482a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f482full));
TAIL_STATIC(0x4eb580u,4eb);
}
B4f482f:L4f482f:{c.instructions+=4;NFSU2_TR(0x4f482f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4833:{NFSU2_TR(0x4f4833);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f483a:{NFSU2_TR(0x4f483a);
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
B4f483d:{NFSU2_TR(0x4f483d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f483e:L4f483e:{c.instructions+=5;NFSU2_TR(0x4f483e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4842:{NFSU2_TR(0x4f4842);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4844:{NFSU2_TR(0x4f4844);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f484b:{NFSU2_TR(0x4f484b);
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
B4f484e:{NFSU2_TR(0x4f484e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4850:L4f4850:{c.instructions+=4;NFSU2_TR(0x4f4850);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc98356baull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4f4858:{NFSU2_TR(0x4f4858);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4859:{NFSU2_TR(0x4f4859);
__builtin_memmove((R+24),(R+4),4);
}
B4f485b:{NFSU2_TR(0x4f485b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4897;}}
}
B4f485d:L4f485d:{c.instructions+=3;NFSU2_TR(0x4f485d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f4860:{NFSU2_TR(0x4f4860);
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
B4f4862:{NFSU2_TR(0x4f4862);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4897;}}
}
B4f4864:L4f4864:{c.instructions+=2;NFSU2_TR(0x4f4864);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f4868:{NFSU2_TR(0x4f4868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f486dull));
TAIL_STATIC(0x4c4d40u,4c4);
}
B4f486d:L4f486d:{c.instructions+=3;NFSU2_TR(0x4f486d);
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
B4f486f:{NFSU2_TR(0x4f486f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4872:{NFSU2_TR(0x4f4872);
if(r1(R+518)){{goto L4f4890;}}
}
B4f4874:L4f4874:{c.instructions+=5;NFSU2_TR(0x4f4874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4877:{NFSU2_TR(0x4f4877);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4879:{NFSU2_TR(0x4f4879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f487a:{NFSU2_TR(0x4f487a);
__builtin_memmove((R+4),(R+24),4);
}
B4f487c:{NFSU2_TR(0x4f487c);
if(r1(R+518)){{goto L4f4887;}}
}
B4f487e:L4f487e:{c.instructions+=1;NFSU2_TR(0x4f487e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4883ull));
TAIL_STATIC(0x4d9520u,4d9);
}
B4f4883:L4f4883:{c.instructions+=2;NFSU2_TR(0x4f4883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4884:{NFSU2_TR(0x4f4884);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4887:L4f4887:{c.instructions+=1;NFSU2_TR(0x4f4887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f488cull));
TAIL_STATIC(0x4a8480u,4a8);
}
B4f488c:L4f488c:{c.instructions+=2;NFSU2_TR(0x4f488c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f488d:{NFSU2_TR(0x4f488d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4890:L4f4890:{c.instructions+=1;NFSU2_TR(0x4f4890);
s1(0x7f63e0,u8(0x1ull));
}
B4f4897:L4f4897:{c.instructions+=2;NFSU2_TR(0x4f4897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4898:{NFSU2_TR(0x4f4898);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f48a0:L4f48a0:{c.instructions+=9;NFSU2_TR(0x4f48a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f48a2:{NFSU2_TR(0x4f48a2);
u8 U[4];
w4(U+0,u32(0x7768a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f48a7:{NFSU2_TR(0x4f48a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f48ad:{NFSU2_TR(0x4f48ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f48ae:{NFSU2_TR(0x4f48ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f48b5:{NFSU2_TR(0x4f48b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f48b6:{NFSU2_TR(0x4f48b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f48b7:{NFSU2_TR(0x4f48b7);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f48bc:{NFSU2_TR(0x4f48bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f48c1ull));
TAIL_STATIC(0x575620u,575);
}
B4f48c1:L4f48c1:{c.instructions+=7;NFSU2_TR(0x4f48c1);
__builtin_memmove((R+24),(R+0),4);
}
B4f48c3:{NFSU2_TR(0x4f48c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f48c6:{NFSU2_TR(0x4f48c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f48ca:{NFSU2_TR(0x4f48ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f48cc:{NFSU2_TR(0x4f48cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f48ce:{NFSU2_TR(0x4f48ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f48d2:{NFSU2_TR(0x4f48d2);
if(r1(R+518)){{goto L4f48e8;}}
}
B4f48d4:L4f48d4:{c.instructions+=4;NFSU2_TR(0x4f48d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f48d8:{NFSU2_TR(0x4f48d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f48d9:{NFSU2_TR(0x4f48d9);
__builtin_memmove((R+4),(R+24),4);
}
B4f48db:{NFSU2_TR(0x4f48db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f48e0ull));
TAIL_STATIC(0x552330u,552);
}
B4f48e0:L4f48e0:{c.instructions+=2;NFSU2_TR(0x4f48e0);
u8 U[4];
w4(U+0,u32(0x797cf8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f48e6:{NFSU2_TR(0x4f48e6);
__builtin_memmove((R+0),(R+24),4);
}
B4f48e8:L4f48e8:{c.instructions+=5;NFSU2_TR(0x4f48e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f48ec:{NFSU2_TR(0x4f48ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f48ed:{NFSU2_TR(0x4f48ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f48f4:{NFSU2_TR(0x4f48f4);
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
B4f48f7:{NFSU2_TR(0x4f48f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4900:L4f4900:{c.instructions+=8;NFSU2_TR(0x4f4900);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4902:{NFSU2_TR(0x4f4902);
u8 U[4];
w4(U+0,u32(0x7768c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4907:{NFSU2_TR(0x4f4907);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f490d:{NFSU2_TR(0x4f490d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f490e:{NFSU2_TR(0x4f490e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4915:{NFSU2_TR(0x4f4915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4916:{NFSU2_TR(0x4f4916);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f491b:{NFSU2_TR(0x4f491b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4920ull));
TAIL_STATIC(0x575620u,575);
}
B4f4920:L4f4920:{c.instructions+=5;NFSU2_TR(0x4f4920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4923:{NFSU2_TR(0x4f4923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f4927:{NFSU2_TR(0x4f4927);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4929:{NFSU2_TR(0x4f4929);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4931:{NFSU2_TR(0x4f4931);
if(r1(R+518)){{goto L4f494e;}}
}
B4f4933:L4f4933:{c.instructions+=4;NFSU2_TR(0x4f4933);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4937:{NFSU2_TR(0x4f4937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4938:{NFSU2_TR(0x4f4938);
__builtin_memmove((R+4),(R+0),4);
}
B4f493a:{NFSU2_TR(0x4f493a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f493full));
TAIL_STATIC(0x4eb700u,4eb);
}
B4f493f:L4f493f:{c.instructions+=4;NFSU2_TR(0x4f493f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4943:{NFSU2_TR(0x4f4943);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f494a:{NFSU2_TR(0x4f494a);
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
B4f494d:{NFSU2_TR(0x4f494d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f494e:L4f494e:{c.instructions+=5;NFSU2_TR(0x4f494e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4952:{NFSU2_TR(0x4f4952);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4954:{NFSU2_TR(0x4f4954);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f495b:{NFSU2_TR(0x4f495b);
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
B4f495e:{NFSU2_TR(0x4f495e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4960:L4f4960:{c.instructions+=8;NFSU2_TR(0x4f4960);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4962:{NFSU2_TR(0x4f4962);
u8 U[4];
w4(U+0,u32(0x7768e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4967:{NFSU2_TR(0x4f4967);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f496d:{NFSU2_TR(0x4f496d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f496e:{NFSU2_TR(0x4f496e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4975:{NFSU2_TR(0x4f4975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4976:{NFSU2_TR(0x4f4976);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f497b:{NFSU2_TR(0x4f497b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4980ull));
TAIL_STATIC(0x575620u,575);
}
B4f4980:L4f4980:{c.instructions+=5;NFSU2_TR(0x4f4980);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4983:{NFSU2_TR(0x4f4983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f4987:{NFSU2_TR(0x4f4987);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4989:{NFSU2_TR(0x4f4989);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4991:{NFSU2_TR(0x4f4991);
if(r1(R+518)){{goto L4f49ae;}}
}
B4f4993:L4f4993:{c.instructions+=4;NFSU2_TR(0x4f4993);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4997:{NFSU2_TR(0x4f4997);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4998:{NFSU2_TR(0x4f4998);
__builtin_memmove((R+4),(R+0),4);
}
B4f499a:{NFSU2_TR(0x4f499a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f499full));
TAIL_STATIC(0x4eb7a0u,4eb);
}
B4f499f:L4f499f:{c.instructions+=4;NFSU2_TR(0x4f499f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f49a3:{NFSU2_TR(0x4f49a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f49aa:{NFSU2_TR(0x4f49aa);
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
B4f49ad:{NFSU2_TR(0x4f49ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f49ae:L4f49ae:{c.instructions+=5;NFSU2_TR(0x4f49ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f49b2:{NFSU2_TR(0x4f49b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f49b4:{NFSU2_TR(0x4f49b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f49bb:{NFSU2_TR(0x4f49bb);
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
B4f49be:{NFSU2_TR(0x4f49be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f49c0:L4f49c0:{c.instructions+=5;NFSU2_TR(0x4f49c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f49c1:{NFSU2_TR(0x4f49c1);
__builtin_memmove((R+24),(R+4),4);
}
B4f49c3:{NFSU2_TR(0x4f49c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f49c6:{NFSU2_TR(0x4f49c6);
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
B4f49c8:{NFSU2_TR(0x4f49c8);
if(r1(R+518)){{goto L4f4a13;}}
}
B4f49ca:L4f49ca:{c.instructions+=3;NFSU2_TR(0x4f49ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f49cd:{NFSU2_TR(0x4f49cd);
w1(R+512,u8((r4(R+0))<(u32(0x6ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4f49d0:{NFSU2_TR(0x4f49d0);
if(r1(R+518)){{goto L4f4a01;}}
}
B4f49d2:L4f49d2:{c.instructions+=2;NFSU2_TR(0x4f49d2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4f49d3:{NFSU2_TR(0x4f49d3);
if(r1(R+518)){{goto L4f49e6;}}
}
B4f49d5:L4f49d5:{c.instructions+=2;NFSU2_TR(0x4f49d5);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f49d6:{NFSU2_TR(0x4f49d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4a13;}}
}
B4f49d8:L4f49d8:{c.instructions+=1;NFSU2_TR(0x4f49d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f49ddull));
TAIL_STATIC(0x4eb840u,4eb);
}
B4f49dd:L4f49dd:{c.instructions+=3;NFSU2_TR(0x4f49dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f49e4:{NFSU2_TR(0x4f49e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f49e5:{NFSU2_TR(0x4f49e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f49e6:L4f49e6:{c.instructions+=3;NFSU2_TR(0x4f49e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f49e9:{NFSU2_TR(0x4f49e9);
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
B4f49eb:{NFSU2_TR(0x4f49eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4a13;}}
}
B4f49ed:L4f49ed:{c.instructions+=4;NFSU2_TR(0x4f49ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f49f0:{NFSU2_TR(0x4f49f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f49f1:{NFSU2_TR(0x4f49f1);
__builtin_memmove((R+4),(R+24),4);
}
B4f49f3:{NFSU2_TR(0x4f49f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f49f8ull));
TAIL_STATIC(0x4c5fd0u,4c5);
}
B4f49f8:L4f49f8:{c.instructions+=3;NFSU2_TR(0x4f49f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f49ff:{NFSU2_TR(0x4f49ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4a00:{NFSU2_TR(0x4f4a00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4a01:L4f4a01:{c.instructions+=3;NFSU2_TR(0x4f4a01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f4a04:{NFSU2_TR(0x4f4a04);
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
B4f4a06:{NFSU2_TR(0x4f4a06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4a13;}}
}
B4f4a08:L4f4a08:{c.instructions+=4;NFSU2_TR(0x4f4a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4a0b:{NFSU2_TR(0x4f4a0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a0c:{NFSU2_TR(0x4f4a0c);
__builtin_memmove((R+4),(R+24),4);
}
B4f4a0e:{NFSU2_TR(0x4f4a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4a13ull));
TAIL_STATIC(0x4c5f20u,4c5);
}
B4f4a13:L4f4a13:{c.instructions+=3;NFSU2_TR(0x4f4a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4a1a:{NFSU2_TR(0x4f4a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4a1b:{NFSU2_TR(0x4f4a1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4a20:L4f4a20:{c.instructions+=5;NFSU2_TR(0x4f4a20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a21:{NFSU2_TR(0x4f4a21);
__builtin_memmove((R+28),(R+4),4);
}
B4f4a23:{NFSU2_TR(0x4f4a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4a26:{NFSU2_TR(0x4f4a26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4a28:{NFSU2_TR(0x4f4a28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4a44;}}
}
B4f4a2a:L4f4a2a:{c.instructions+=3;NFSU2_TR(0x4f4a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4a2d:{NFSU2_TR(0x4f4a2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4a2f:{NFSU2_TR(0x4f4a2f);
if(r1(R+518)){{goto L4f4a36;}}
}
B4f4a31:L4f4a31:{c.instructions+=1;NFSU2_TR(0x4f4a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4a36ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f49c0u);}goto L4f49c0;}
}
B4f4a36:L4f4a36:{c.instructions+=3;NFSU2_TR(0x4f4a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4a39:{NFSU2_TR(0x4f4a39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4a3b:{NFSU2_TR(0x4f4a3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4a44;}}
}
B4f4a3d:L4f4a3d:{c.instructions+=3;NFSU2_TR(0x4f4a3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f4a40:{NFSU2_TR(0x4f4a40);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f4a42:{NFSU2_TR(0x4f4a42);
if(r1(R+518)){{goto L4f4a8f;}}
}
B4f4a44:L4f4a44:{c.instructions+=3;NFSU2_TR(0x4f4a44);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B4f4a49:{NFSU2_TR(0x4f4a49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4a4b:{NFSU2_TR(0x4f4a4b);
if(r1(R+518)){{goto L4f4a6b;}}
}
B4f4a4d:L4f4a4d:{c.instructions+=2;NFSU2_TR(0x4f4a4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a4e:{NFSU2_TR(0x4f4a4e);
__builtin_memmove((R+28),(R+28),4);
}
B4f4a50:L4f4a50:{c.instructions+=3;NFSU2_TR(0x4f4a50);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a52:{NFSU2_TR(0x4f4a52);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a54:{NFSU2_TR(0x4f4a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4a59ull));
TAIL_STATIC(0x57e3b0u,57e);
}
B4f4a59:L4f4a59:{c.instructions+=3;NFSU2_TR(0x4f4a59);
__builtin_memmove((R+24),(R+0),4);
}
B4f4a5b:{NFSU2_TR(0x4f4a5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a5c:{NFSU2_TR(0x4f4a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4a61ull));
TAIL_STATIC(0x4d9db0u,4d9);
}
B4f4a61:L4f4a61:{c.instructions+=3;NFSU2_TR(0x4f4a61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4a64:{NFSU2_TR(0x4f4a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4a66:{NFSU2_TR(0x4f4a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f4a50u);}goto L4f4a50;}}
}
B4f4a68:L4f4a68:{c.instructions+=2;NFSU2_TR(0x4f4a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4a69:{NFSU2_TR(0x4f4a69);
{goto L4f4a8f;}
}
B4f4a6b:L4f4a6b:{c.instructions+=4;NFSU2_TR(0x4f4a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4a6f:{NFSU2_TR(0x4f4a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4a72:{NFSU2_TR(0x4f4a72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a73:{NFSU2_TR(0x4f4a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4a78ull));
TAIL_STATIC(0x6fbff1u,6fb);
}
B4f4a78:L4f4a78:{c.instructions+=3;NFSU2_TR(0x4f4a78);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B4f4a7d:{NFSU2_TR(0x4f4a7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4a7f:{NFSU2_TR(0x4f4a7f);
if(r1(R+518)){{goto L4f4a8f;}}
}
B4f4a81:L4f4a81:{c.instructions+=4;NFSU2_TR(0x4f4a81);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a83:{NFSU2_TR(0x4f4a83);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a85:{NFSU2_TR(0x4f4a85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4a87:{NFSU2_TR(0x4f4a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4a8cull));
TAIL_STATIC(0x57d670u,57d);
}
B4f4a8c:L4f4a8c:{c.instructions+=1;NFSU2_TR(0x4f4a8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4a8f:L4f4a8f:{c.instructions+=3;NFSU2_TR(0x4f4a8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f4a92:{NFSU2_TR(0x4f4a92);
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
B4f4a94:{NFSU2_TR(0x4f4a94);
if(r1(R+518)){{goto L4f4ab7;}}
}
B4f4a96:L4f4a96:{c.instructions+=3;NFSU2_TR(0x4f4a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4a99:{NFSU2_TR(0x4f4a99);
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
B4f4a9b:{NFSU2_TR(0x4f4a9b);
if(r1(R+518)){{goto L4f4ab7;}}
}
B4f4a9d:L4f4a9d:{c.instructions+=3;NFSU2_TR(0x4f4a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4aa0:{NFSU2_TR(0x4f4aa0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4aa1:{NFSU2_TR(0x4f4aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4aa6ull));
TAIL_STATIC(0x6fbfa0u,6fb);
}
B4f4aa6:L4f4aa6:{c.instructions+=3;NFSU2_TR(0x4f4aa6);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4f4aac:{NFSU2_TR(0x4f4aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ab3:{NFSU2_TR(0x4f4ab3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f4ab7:L4f4ab7:{c.instructions+=2;NFSU2_TR(0x4f4ab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f4ab8:{NFSU2_TR(0x4f4ab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4ac0:L4f4ac0:{c.instructions+=25;NFSU2_TR(0x4f4ac0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ac2:{NFSU2_TR(0x4f4ac2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ac7:{NFSU2_TR(0x4f4ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4acd:{NFSU2_TR(0x4f4acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ace:{NFSU2_TR(0x4f4ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ad5:{NFSU2_TR(0x4f4ad5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ad6:{NFSU2_TR(0x4f4ad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4ada:{NFSU2_TR(0x4f4ada);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4adb:{NFSU2_TR(0x4f4adb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4adc:{NFSU2_TR(0x4f4adc);
__builtin_memmove((R+24),(R+4),4);
}
B4f4ade:{NFSU2_TR(0x4f4ade);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f4ae0:{NFSU2_TR(0x4f4ae0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ae1:{NFSU2_TR(0x4f4ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ae5:{NFSU2_TR(0x4f4ae5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f4ae7:{NFSU2_TR(0x4f4ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4aea:{NFSU2_TR(0x4f4aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4aed:{NFSU2_TR(0x4f4aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4af4:{NFSU2_TR(0x4f4af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4af7:{NFSU2_TR(0x4f4af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4afa:{NFSU2_TR(0x4f4afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4afd:{NFSU2_TR(0x4f4afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b00:{NFSU2_TR(0x4f4b00);
u8 U[4];
w4(U+0,u32(0x7984b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b05:{NFSU2_TR(0x4f4b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b09:{NFSU2_TR(0x4f4b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b0c:{NFSU2_TR(0x4f4b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b11ull));
TAIL_STATIC(0x505450u,505);
}
B4f4b11:L4f4b11:{c.instructions+=4;NFSU2_TR(0x4f4b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4b14:{NFSU2_TR(0x4f4b14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b15:{NFSU2_TR(0x4f4b15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b16:{NFSU2_TR(0x4f4b16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b1bull));
TAIL_STATIC(0x537a10u,537);
}
B4f4b1b:L4f4b1b:{c.instructions+=4;NFSU2_TR(0x4f4b1b);
__builtin_memmove((R+28),(R+0),4);
}
B4f4b1d:{NFSU2_TR(0x4f4b1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4b20:{NFSU2_TR(0x4f4b20);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4b22:{NFSU2_TR(0x4f4b22);
if(r1(R+518)){{goto L4f4b41;}}
}
B4f4b24:L4f4b24:{c.instructions+=1;NFSU2_TR(0x4f4b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b29ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4b29:L4f4b29:{c.instructions+=2;NFSU2_TR(0x4f4b29);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4b2b:{NFSU2_TR(0x4f4b2b);
if(r1(R+518)){{goto L4f4b32;}}
}
B4f4b2d:L4f4b2d:{c.instructions+=2;NFSU2_TR(0x4f4b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b30:{NFSU2_TR(0x4f4b30);
{goto L4f4b34;}
}
B4f4b32:L4f4b32:{c.instructions+=1;NFSU2_TR(0x4f4b32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4b34:L4f4b34:{c.instructions+=5;NFSU2_TR(0x4f4b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4b37:{NFSU2_TR(0x4f4b37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4b39:{NFSU2_TR(0x4f4b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b3c:{NFSU2_TR(0x4f4b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b3f:{NFSU2_TR(0x4f4b3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4b41:L4f4b41:{c.instructions+=3;NFSU2_TR(0x4f4b41);
u8 U[4];
w4(U+0,u32(0x7984a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b46:{NFSU2_TR(0x4f4b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b49:{NFSU2_TR(0x4f4b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b4eull));
TAIL_STATIC(0x505450u,505);
}
B4f4b4e:L4f4b4e:{c.instructions+=4;NFSU2_TR(0x4f4b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4b51:{NFSU2_TR(0x4f4b51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b52:{NFSU2_TR(0x4f4b52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b53:{NFSU2_TR(0x4f4b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b58ull));
TAIL_STATIC(0x537a10u,537);
}
B4f4b58:L4f4b58:{c.instructions+=4;NFSU2_TR(0x4f4b58);
__builtin_memmove((R+28),(R+0),4);
}
B4f4b5a:{NFSU2_TR(0x4f4b5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4b5d:{NFSU2_TR(0x4f4b5d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4b5f:{NFSU2_TR(0x4f4b5f);
if(r1(R+518)){{goto L4f4b7e;}}
}
B4f4b61:L4f4b61:{c.instructions+=1;NFSU2_TR(0x4f4b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b66ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4b66:L4f4b66:{c.instructions+=2;NFSU2_TR(0x4f4b66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4b68:{NFSU2_TR(0x4f4b68);
if(r1(R+518)){{goto L4f4b6f;}}
}
B4f4b6a:L4f4b6a:{c.instructions+=2;NFSU2_TR(0x4f4b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b6d:{NFSU2_TR(0x4f4b6d);
{goto L4f4b71;}
}
B4f4b6f:L4f4b6f:{c.instructions+=1;NFSU2_TR(0x4f4b6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4b71:L4f4b71:{c.instructions+=5;NFSU2_TR(0x4f4b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4b74:{NFSU2_TR(0x4f4b74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4b76:{NFSU2_TR(0x4f4b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b79:{NFSU2_TR(0x4f4b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b7c:{NFSU2_TR(0x4f4b7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4b7e:L4f4b7e:{c.instructions+=3;NFSU2_TR(0x4f4b7e);
u8 U[4];
w4(U+0,u32(0x798494ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b83:{NFSU2_TR(0x4f4b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4b86:{NFSU2_TR(0x4f4b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b8bull));
TAIL_STATIC(0x505450u,505);
}
B4f4b8b:L4f4b8b:{c.instructions+=4;NFSU2_TR(0x4f4b8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b8c:{NFSU2_TR(0x4f4b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4b8f:{NFSU2_TR(0x4f4b8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4b90:{NFSU2_TR(0x4f4b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4b95ull));
TAIL_STATIC(0x537a10u,537);
}
B4f4b95:L4f4b95:{c.instructions+=4;NFSU2_TR(0x4f4b95);
__builtin_memmove((R+28),(R+0),4);
}
B4f4b97:{NFSU2_TR(0x4f4b97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4b9a:{NFSU2_TR(0x4f4b9a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4b9c:{NFSU2_TR(0x4f4b9c);
if(r1(R+518)){{goto L4f4bbb;}}
}
B4f4b9e:L4f4b9e:{c.instructions+=1;NFSU2_TR(0x4f4b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4ba3ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4ba3:L4f4ba3:{c.instructions+=2;NFSU2_TR(0x4f4ba3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4ba5:{NFSU2_TR(0x4f4ba5);
if(r1(R+518)){{goto L4f4bac;}}
}
B4f4ba7:L4f4ba7:{c.instructions+=2;NFSU2_TR(0x4f4ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4baa:{NFSU2_TR(0x4f4baa);
{goto L4f4bae;}
}
B4f4bac:L4f4bac:{c.instructions+=1;NFSU2_TR(0x4f4bac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4bae:L4f4bae:{c.instructions+=5;NFSU2_TR(0x4f4bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4bb1:{NFSU2_TR(0x4f4bb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4bb3:{NFSU2_TR(0x4f4bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4bb6:{NFSU2_TR(0x4f4bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4bb9:{NFSU2_TR(0x4f4bb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4bbb:L4f4bbb:{c.instructions+=3;NFSU2_TR(0x4f4bbb);
u8 U[4];
w4(U+0,u32(0x798488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4bc0:{NFSU2_TR(0x4f4bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4bc3:{NFSU2_TR(0x4f4bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4bc8ull));
TAIL_STATIC(0x505450u,505);
}
B4f4bc8:L4f4bc8:{c.instructions+=4;NFSU2_TR(0x4f4bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4bcb:{NFSU2_TR(0x4f4bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4bcc:{NFSU2_TR(0x4f4bcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4bcd:{NFSU2_TR(0x4f4bcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4bd2ull));
TAIL_STATIC(0x537a10u,537);
}
B4f4bd2:L4f4bd2:{c.instructions+=4;NFSU2_TR(0x4f4bd2);
__builtin_memmove((R+28),(R+0),4);
}
B4f4bd4:{NFSU2_TR(0x4f4bd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4bd7:{NFSU2_TR(0x4f4bd7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4bd9:{NFSU2_TR(0x4f4bd9);
if(r1(R+518)){{goto L4f4bf8;}}
}
B4f4bdb:L4f4bdb:{c.instructions+=1;NFSU2_TR(0x4f4bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4be0ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4be0:L4f4be0:{c.instructions+=2;NFSU2_TR(0x4f4be0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4be2:{NFSU2_TR(0x4f4be2);
if(r1(R+518)){{goto L4f4be9;}}
}
B4f4be4:L4f4be4:{c.instructions+=2;NFSU2_TR(0x4f4be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4be7:{NFSU2_TR(0x4f4be7);
{goto L4f4beb;}
}
B4f4be9:L4f4be9:{c.instructions+=1;NFSU2_TR(0x4f4be9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4beb:L4f4beb:{c.instructions+=5;NFSU2_TR(0x4f4beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4bee:{NFSU2_TR(0x4f4bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4bf0:{NFSU2_TR(0x4f4bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4bf3:{NFSU2_TR(0x4f4bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4bf6:{NFSU2_TR(0x4f4bf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4bf8:L4f4bf8:{c.instructions+=3;NFSU2_TR(0x4f4bf8);
u8 U[4];
w4(U+0,u32(0x79847cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4bfd:{NFSU2_TR(0x4f4bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c00:{NFSU2_TR(0x4f4c00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c05ull));
TAIL_STATIC(0x505450u,505);
}
B4f4c05:L4f4c05:{c.instructions+=4;NFSU2_TR(0x4f4c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4c08:{NFSU2_TR(0x4f4c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c09:{NFSU2_TR(0x4f4c09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c0a:{NFSU2_TR(0x4f4c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c0full));
TAIL_STATIC(0x537a10u,537);
}
B4f4c0f:L4f4c0f:{c.instructions+=4;NFSU2_TR(0x4f4c0f);
__builtin_memmove((R+28),(R+0),4);
}
B4f4c11:{NFSU2_TR(0x4f4c11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4c14:{NFSU2_TR(0x4f4c14);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4c16:{NFSU2_TR(0x4f4c16);
if(r1(R+518)){{goto L4f4c35;}}
}
B4f4c18:L4f4c18:{c.instructions+=1;NFSU2_TR(0x4f4c18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c1dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4c1d:L4f4c1d:{c.instructions+=2;NFSU2_TR(0x4f4c1d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4c1f:{NFSU2_TR(0x4f4c1f);
if(r1(R+518)){{goto L4f4c26;}}
}
B4f4c21:L4f4c21:{c.instructions+=2;NFSU2_TR(0x4f4c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c24:{NFSU2_TR(0x4f4c24);
{goto L4f4c28;}
}
B4f4c26:L4f4c26:{c.instructions+=1;NFSU2_TR(0x4f4c26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4c28:L4f4c28:{c.instructions+=5;NFSU2_TR(0x4f4c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4c2b:{NFSU2_TR(0x4f4c2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4c2d:{NFSU2_TR(0x4f4c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c30:{NFSU2_TR(0x4f4c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c33:{NFSU2_TR(0x4f4c33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4c35:L4f4c35:{c.instructions+=3;NFSU2_TR(0x4f4c35);
u8 U[4];
w4(U+0,u32(0x79846cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c3a:{NFSU2_TR(0x4f4c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c3d:{NFSU2_TR(0x4f4c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c42ull));
TAIL_STATIC(0x505450u,505);
}
B4f4c42:L4f4c42:{c.instructions+=4;NFSU2_TR(0x4f4c42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c43:{NFSU2_TR(0x4f4c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4c46:{NFSU2_TR(0x4f4c46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c47:{NFSU2_TR(0x4f4c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c4cull));
TAIL_STATIC(0x537a10u,537);
}
B4f4c4c:L4f4c4c:{c.instructions+=4;NFSU2_TR(0x4f4c4c);
__builtin_memmove((R+28),(R+0),4);
}
B4f4c4e:{NFSU2_TR(0x4f4c4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4c51:{NFSU2_TR(0x4f4c51);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4c53:{NFSU2_TR(0x4f4c53);
if(r1(R+518)){{goto L4f4c72;}}
}
B4f4c55:L4f4c55:{c.instructions+=1;NFSU2_TR(0x4f4c55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c5aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4c5a:L4f4c5a:{c.instructions+=2;NFSU2_TR(0x4f4c5a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4c5c:{NFSU2_TR(0x4f4c5c);
if(r1(R+518)){{goto L4f4c63;}}
}
B4f4c5e:L4f4c5e:{c.instructions+=2;NFSU2_TR(0x4f4c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c61:{NFSU2_TR(0x4f4c61);
{goto L4f4c65;}
}
B4f4c63:L4f4c63:{c.instructions+=1;NFSU2_TR(0x4f4c63);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4c65:L4f4c65:{c.instructions+=5;NFSU2_TR(0x4f4c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4c68:{NFSU2_TR(0x4f4c68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4c6a:{NFSU2_TR(0x4f4c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c6d:{NFSU2_TR(0x4f4c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c70:{NFSU2_TR(0x4f4c70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4c72:L4f4c72:{c.instructions+=4;NFSU2_TR(0x4f4c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4c75:{NFSU2_TR(0x4f4c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c76:{NFSU2_TR(0x4f4c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c79:{NFSU2_TR(0x4f4c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c7eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f4c7e:L4f4c7e:{c.instructions+=3;NFSU2_TR(0x4f4c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4c81:{NFSU2_TR(0x4f4c81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c82:{NFSU2_TR(0x4f4c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c87ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f4c87:L4f4c87:{c.instructions+=4;NFSU2_TR(0x4f4c87);
u8 U[4];
w4(U+0,u32(0x798460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c8c:{NFSU2_TR(0x4f4c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c8f:{NFSU2_TR(0x4f4c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4c92:{NFSU2_TR(0x4f4c92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4c97ull));
TAIL_STATIC(0x505450u,505);
}
B4f4c97:L4f4c97:{c.instructions+=4;NFSU2_TR(0x4f4c97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c98:{NFSU2_TR(0x4f4c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4c9b:{NFSU2_TR(0x4f4c9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4c9c:{NFSU2_TR(0x4f4c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4ca1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f4ca1:L4f4ca1:{c.instructions+=4;NFSU2_TR(0x4f4ca1);
__builtin_memmove((R+28),(R+0),4);
}
B4f4ca3:{NFSU2_TR(0x4f4ca3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f4ca6:{NFSU2_TR(0x4f4ca6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4ca8:{NFSU2_TR(0x4f4ca8);
if(r1(R+518)){{goto L4f4cc7;}}
}
B4f4caa:L4f4caa:{c.instructions+=1;NFSU2_TR(0x4f4caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4cafull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4caf:L4f4caf:{c.instructions+=2;NFSU2_TR(0x4f4caf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4cb1:{NFSU2_TR(0x4f4cb1);
if(r1(R+518)){{goto L4f4cb8;}}
}
B4f4cb3:L4f4cb3:{c.instructions+=2;NFSU2_TR(0x4f4cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4cb6:{NFSU2_TR(0x4f4cb6);
{goto L4f4cba;}
}
B4f4cb8:L4f4cb8:{c.instructions+=1;NFSU2_TR(0x4f4cb8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4cba:L4f4cba:{c.instructions+=5;NFSU2_TR(0x4f4cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4cbd:{NFSU2_TR(0x4f4cbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4cbf:{NFSU2_TR(0x4f4cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4cc2:{NFSU2_TR(0x4f4cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4cc5:{NFSU2_TR(0x4f4cc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4cc7:L4f4cc7:{c.instructions+=2;NFSU2_TR(0x4f4cc7);
u8 U[4];
w4(U+0,u32(0x798450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ccc:{NFSU2_TR(0x4f4ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4cd1ull));
TAIL_STATIC(0x505450u,505);
}
B4f4cd1:L4f4cd1:{c.instructions+=4;NFSU2_TR(0x4f4cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4cd4:{NFSU2_TR(0x4f4cd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4cd5:{NFSU2_TR(0x4f4cd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4cd6:{NFSU2_TR(0x4f4cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4cdbull));
TAIL_STATIC(0x537a60u,537);
}
B4f4cdb:L4f4cdb:{c.instructions+=4;NFSU2_TR(0x4f4cdb);
__builtin_memmove((R+28),(R+0),4);
}
B4f4cdd:{NFSU2_TR(0x4f4cdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4ce0:{NFSU2_TR(0x4f4ce0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4ce2:{NFSU2_TR(0x4f4ce2);
if(r1(R+518)){{goto L4f4d01;}}
}
B4f4ce4:L4f4ce4:{c.instructions+=1;NFSU2_TR(0x4f4ce4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4ce9ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4ce9:L4f4ce9:{c.instructions+=2;NFSU2_TR(0x4f4ce9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4ceb:{NFSU2_TR(0x4f4ceb);
if(r1(R+518)){{goto L4f4cf2;}}
}
B4f4ced:L4f4ced:{c.instructions+=2;NFSU2_TR(0x4f4ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4cf0:{NFSU2_TR(0x4f4cf0);
{goto L4f4cf4;}
}
B4f4cf2:L4f4cf2:{c.instructions+=1;NFSU2_TR(0x4f4cf2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4cf4:L4f4cf4:{c.instructions+=5;NFSU2_TR(0x4f4cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4cf7:{NFSU2_TR(0x4f4cf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4cf9:{NFSU2_TR(0x4f4cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4cfc:{NFSU2_TR(0x4f4cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4cff:{NFSU2_TR(0x4f4cff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4d01:L4f4d01:{c.instructions+=3;NFSU2_TR(0x4f4d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d04:{NFSU2_TR(0x4f4d04);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f4d0a:{NFSU2_TR(0x4f4d0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4d14;}}
}
B4f4d0c:L4f4d0c:{c.instructions+=2;NFSU2_TR(0x4f4d0c);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4d12:{NFSU2_TR(0x4f4d12);
if(r1(R+518)){{goto L4f4d91;}}
}
B4f4d14:L4f4d14:{c.instructions+=2;NFSU2_TR(0x4f4d14);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4d1b:{NFSU2_TR(0x4f4d1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f4d91;}}
}
B4f4d1d:L4f4d1d:{c.instructions+=2;NFSU2_TR(0x4f4d1d);
u8 U[4];
w4(U+0,u32(0x798434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4d22:{NFSU2_TR(0x4f4d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4d27ull));
TAIL_STATIC(0x505450u,505);
}
B4f4d27:L4f4d27:{c.instructions+=4;NFSU2_TR(0x4f4d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4d2a:{NFSU2_TR(0x4f4d2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4d2b:{NFSU2_TR(0x4f4d2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4d2c:{NFSU2_TR(0x4f4d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4d31ull));
TAIL_STATIC(0x537a60u,537);
}
B4f4d31:L4f4d31:{c.instructions+=4;NFSU2_TR(0x4f4d31);
__builtin_memmove((R+28),(R+0),4);
}
B4f4d33:{NFSU2_TR(0x4f4d33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4d36:{NFSU2_TR(0x4f4d36);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4d38:{NFSU2_TR(0x4f4d38);
if(r1(R+518)){{goto L4f4d57;}}
}
B4f4d3a:L4f4d3a:{c.instructions+=1;NFSU2_TR(0x4f4d3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4d3full));
TAIL_STATIC(0x440ec0u,440);
}
B4f4d3f:L4f4d3f:{c.instructions+=2;NFSU2_TR(0x4f4d3f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4d41:{NFSU2_TR(0x4f4d41);
if(r1(R+518)){{goto L4f4d48;}}
}
B4f4d43:L4f4d43:{c.instructions+=2;NFSU2_TR(0x4f4d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d46:{NFSU2_TR(0x4f4d46);
{goto L4f4d4a;}
}
B4f4d48:L4f4d48:{c.instructions+=1;NFSU2_TR(0x4f4d48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4d4a:L4f4d4a:{c.instructions+=5;NFSU2_TR(0x4f4d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4d4d:{NFSU2_TR(0x4f4d4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4d4f:{NFSU2_TR(0x4f4d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d52:{NFSU2_TR(0x4f4d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d55:{NFSU2_TR(0x4f4d55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4d57:L4f4d57:{c.instructions+=2;NFSU2_TR(0x4f4d57);
u8 U[4];
w4(U+0,u32(0x798418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4d5c:{NFSU2_TR(0x4f4d5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4d61ull));
TAIL_STATIC(0x505450u,505);
}
B4f4d61:L4f4d61:{c.instructions+=4;NFSU2_TR(0x4f4d61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4d62:{NFSU2_TR(0x4f4d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4d65:{NFSU2_TR(0x4f4d65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4d66:{NFSU2_TR(0x4f4d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4d6bull));
TAIL_STATIC(0x537a60u,537);
}
B4f4d6b:L4f4d6b:{c.instructions+=4;NFSU2_TR(0x4f4d6b);
__builtin_memmove((R+28),(R+0),4);
}
B4f4d6d:{NFSU2_TR(0x4f4d6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4d70:{NFSU2_TR(0x4f4d70);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4d72:{NFSU2_TR(0x4f4d72);
if(r1(R+518)){{goto L4f4d91;}}
}
B4f4d74:L4f4d74:{c.instructions+=1;NFSU2_TR(0x4f4d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4d79ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4d79:L4f4d79:{c.instructions+=2;NFSU2_TR(0x4f4d79);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4d7b:{NFSU2_TR(0x4f4d7b);
if(r1(R+518)){{goto L4f4d82;}}
}
B4f4d7d:L4f4d7d:{c.instructions+=2;NFSU2_TR(0x4f4d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d80:{NFSU2_TR(0x4f4d80);
{goto L4f4d84;}
}
B4f4d82:L4f4d82:{c.instructions+=1;NFSU2_TR(0x4f4d82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4d84:L4f4d84:{c.instructions+=5;NFSU2_TR(0x4f4d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4d87:{NFSU2_TR(0x4f4d87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4d89:{NFSU2_TR(0x4f4d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d8c:{NFSU2_TR(0x4f4d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d8f:{NFSU2_TR(0x4f4d8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4d91:L4f4d91:{c.instructions+=3;NFSU2_TR(0x4f4d91);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4d93:{NFSU2_TR(0x4f4d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4d9a:{NFSU2_TR(0x4f4d9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4d9full));
TAIL_STATIC(0x575620u,575);
}
B4f4d9f:L4f4d9f:{c.instructions+=3;NFSU2_TR(0x4f4d9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4da2:{NFSU2_TR(0x4f4da2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4da4:{NFSU2_TR(0x4f4da4);
if(r1(R+518)){{goto L4f4dcc;}}
}
B4f4da6:L4f4da6:{c.instructions+=11;NFSU2_TR(0x4f4da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4da9:{NFSU2_TR(0x4f4da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4dac:{NFSU2_TR(0x4f4dac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f4daf:{NFSU2_TR(0x4f4daf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4db1:{NFSU2_TR(0x4f4db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4db4:{NFSU2_TR(0x4f4db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4db7:{NFSU2_TR(0x4f4db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4dbe:{NFSU2_TR(0x4f4dbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4dc0:{NFSU2_TR(0x4f4dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x3fc00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4dc7:{NFSU2_TR(0x4f4dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4dca:{NFSU2_TR(0x4f4dca);
{goto L4f4dce;}
}
B4f4dcc:L4f4dcc:{c.instructions+=1;NFSU2_TR(0x4f4dcc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4dce:L4f4dce:{c.instructions+=9;NFSU2_TR(0x4f4dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4dd2:{NFSU2_TR(0x4f4dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4dd5:{NFSU2_TR(0x4f4dd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f4dd6:{NFSU2_TR(0x4f4dd6);
__builtin_memmove((R+0),(R+24),4);
}
B4f4dd8:{NFSU2_TR(0x4f4dd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4dd9:{NFSU2_TR(0x4f4dd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f4dda:{NFSU2_TR(0x4f4dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4de1:{NFSU2_TR(0x4f4de1);
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
B4f4de4:{NFSU2_TR(0x4f4de4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4df0:L4f4df0:{c.instructions+=14;NFSU2_TR(0x4f4df0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4df2:{NFSU2_TR(0x4f4df2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4df7:{NFSU2_TR(0x4f4df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4dfd:{NFSU2_TR(0x4f4dfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4dfe:{NFSU2_TR(0x4f4dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e05:{NFSU2_TR(0x4f4e05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e06:{NFSU2_TR(0x4f4e06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e07:{NFSU2_TR(0x4f4e07);
__builtin_memmove((R+24),(R+4),4);
}
B4f4e09:{NFSU2_TR(0x4f4e09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e0a:{NFSU2_TR(0x4f4e0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e0e:{NFSU2_TR(0x4f4e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f4e11:{NFSU2_TR(0x4f4e11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f4e13:{NFSU2_TR(0x4f4e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e1b:{NFSU2_TR(0x4f4e1b);
if(r1(R+518)){{goto L4f4e2d;}}
}
B4f4e1d:L4f4e1d:{c.instructions+=2;NFSU2_TR(0x4f4e1d);
__builtin_memmove((R+4),(R+28),4);
}
B4f4e1f:{NFSU2_TR(0x4f4e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4e24ull));
TAIL_STATIC(0x4eb940u,4eb);
}
B4f4e24:L4f4e24:{c.instructions+=2;NFSU2_TR(0x4f4e24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e25:{NFSU2_TR(0x4f4e25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4e2aull));
TAIL_STATIC(0x575630u,575);
}
B4f4e2a:L4f4e2a:{c.instructions+=1;NFSU2_TR(0x4f4e2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4e2d:L4f4e2d:{c.instructions+=4;NFSU2_TR(0x4f4e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f4e2f:{NFSU2_TR(0x4f4e2f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4e31:{NFSU2_TR(0x4f4e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e39:{NFSU2_TR(0x4f4e39);
if(r1(R+518)){{goto L4f4e59;}}
}
B4f4e3b:L4f4e3b:{c.instructions+=1;NFSU2_TR(0x4f4e3b);
{goto L4f4e40;}
}
B4f4e40:L4f4e40:{c.instructions+=6;NFSU2_TR(0x4f4e40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f4e42:{NFSU2_TR(0x4f4e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4e45:{NFSU2_TR(0x4f4e45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4f4e47:{NFSU2_TR(0x4f4e47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e48:{NFSU2_TR(0x4f4e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e4b:{NFSU2_TR(0x4f4e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4e50ull));
TAIL_STATIC(0x440ef0u,440);
}
B4f4e50:L4f4e50:{c.instructions+=4;NFSU2_TR(0x4f4e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f4e52:{NFSU2_TR(0x4f4e52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f4e55:{NFSU2_TR(0x4f4e55);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4e57:{NFSU2_TR(0x4f4e57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f4e40u);}goto L4f4e40;}}
}
B4f4e59:L4f4e59:{c.instructions+=6;NFSU2_TR(0x4f4e59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4e5d:{NFSU2_TR(0x4f4e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f4e5e:{NFSU2_TR(0x4f4e5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4e5f:{NFSU2_TR(0x4f4e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e66:{NFSU2_TR(0x4f4e66);
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
B4f4e69:{NFSU2_TR(0x4f4e69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4e70:L4f4e70:{c.instructions+=24;NFSU2_TR(0x4f4e70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e72:{NFSU2_TR(0x4f4e72);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e77:{NFSU2_TR(0x4f4e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4e7d:{NFSU2_TR(0x4f4e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e7e:{NFSU2_TR(0x4f4e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e85:{NFSU2_TR(0x4f4e85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e86:{NFSU2_TR(0x4f4e86);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4e8a:{NFSU2_TR(0x4f4e8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e8b:{NFSU2_TR(0x4f4e8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e8c:{NFSU2_TR(0x4f4e8c);
__builtin_memmove((R+24),(R+4),4);
}
B4f4e8e:{NFSU2_TR(0x4f4e8e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f4e90:{NFSU2_TR(0x4f4e90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4e91:{NFSU2_TR(0x4f4e91);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e95:{NFSU2_TR(0x4f4e95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f4e97:{NFSU2_TR(0x4f4e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e9a:{NFSU2_TR(0x4f4e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4e9d:{NFSU2_TR(0x4f4e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ea4:{NFSU2_TR(0x4f4ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ea7:{NFSU2_TR(0x4f4ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4eaa:{NFSU2_TR(0x4f4eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ead:{NFSU2_TR(0x4f4ead);
u8 U[4];
w4(U+0,u32(0x7984c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4eb2:{NFSU2_TR(0x4f4eb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4eb6:{NFSU2_TR(0x4f4eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4eb9:{NFSU2_TR(0x4f4eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4ebeull));
TAIL_STATIC(0x505450u,505);
}
B4f4ebe:L4f4ebe:{c.instructions+=4;NFSU2_TR(0x4f4ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4ec1:{NFSU2_TR(0x4f4ec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ec2:{NFSU2_TR(0x4f4ec2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4ec3:{NFSU2_TR(0x4f4ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4ec8ull));
TAIL_STATIC(0x537a10u,537);
}
B4f4ec8:L4f4ec8:{c.instructions+=4;NFSU2_TR(0x4f4ec8);
__builtin_memmove((R+28),(R+0),4);
}
B4f4eca:{NFSU2_TR(0x4f4eca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4ecd:{NFSU2_TR(0x4f4ecd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4ecf:{NFSU2_TR(0x4f4ecf);
if(r1(R+518)){{goto L4f4eee;}}
}
B4f4ed1:L4f4ed1:{c.instructions+=1;NFSU2_TR(0x4f4ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4ed6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4ed6:L4f4ed6:{c.instructions+=2;NFSU2_TR(0x4f4ed6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4ed8:{NFSU2_TR(0x4f4ed8);
if(r1(R+518)){{goto L4f4edf;}}
}
B4f4eda:L4f4eda:{c.instructions+=2;NFSU2_TR(0x4f4eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4edd:{NFSU2_TR(0x4f4edd);
{goto L4f4ee1;}
}
B4f4edf:L4f4edf:{c.instructions+=1;NFSU2_TR(0x4f4edf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4ee1:L4f4ee1:{c.instructions+=5;NFSU2_TR(0x4f4ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4ee4:{NFSU2_TR(0x4f4ee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4ee6:{NFSU2_TR(0x4f4ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ee9:{NFSU2_TR(0x4f4ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4eec:{NFSU2_TR(0x4f4eec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4eee:L4f4eee:{c.instructions+=9;NFSU2_TR(0x4f4eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4ef2:{NFSU2_TR(0x4f4ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ef5:{NFSU2_TR(0x4f4ef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f4ef6:{NFSU2_TR(0x4f4ef6);
__builtin_memmove((R+0),(R+24),4);
}
B4f4ef8:{NFSU2_TR(0x4f4ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f4ef9:{NFSU2_TR(0x4f4ef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f4efa:{NFSU2_TR(0x4f4efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f01:{NFSU2_TR(0x4f4f01);
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
B4f4f04:{NFSU2_TR(0x4f4f04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f4f10:L4f4f10:{c.instructions+=23;NFSU2_TR(0x4f4f10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f12:{NFSU2_TR(0x4f4f12);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f17:{NFSU2_TR(0x4f4f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4f1d:{NFSU2_TR(0x4f4f1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f1e:{NFSU2_TR(0x4f4f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f25:{NFSU2_TR(0x4f4f25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f26:{NFSU2_TR(0x4f4f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4f2a:{NFSU2_TR(0x4f4f2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f2b:{NFSU2_TR(0x4f4f2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f2c:{NFSU2_TR(0x4f4f2c);
__builtin_memmove((R+24),(R+4),4);
}
B4f4f2e:{NFSU2_TR(0x4f4f2e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f4f30:{NFSU2_TR(0x4f4f30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f31:{NFSU2_TR(0x4f4f31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f35:{NFSU2_TR(0x4f4f35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f4f37:{NFSU2_TR(0x4f4f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f3a:{NFSU2_TR(0x4f4f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f3d:{NFSU2_TR(0x4f4f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f40:{NFSU2_TR(0x4f4f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f47:{NFSU2_TR(0x4f4f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f4a:{NFSU2_TR(0x4f4f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f4d:{NFSU2_TR(0x4f4f4d);
u8 U[4];
w4(U+0,u32(0x7984f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f52:{NFSU2_TR(0x4f4f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f56:{NFSU2_TR(0x4f4f56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4f5bull));
TAIL_STATIC(0x505450u,505);
}
B4f4f5b:L4f4f5b:{c.instructions+=4;NFSU2_TR(0x4f4f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4f5e:{NFSU2_TR(0x4f4f5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f5f:{NFSU2_TR(0x4f4f5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f60:{NFSU2_TR(0x4f4f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4f65ull));
TAIL_STATIC(0x537a10u,537);
}
B4f4f65:L4f4f65:{c.instructions+=4;NFSU2_TR(0x4f4f65);
__builtin_memmove((R+28),(R+0),4);
}
B4f4f67:{NFSU2_TR(0x4f4f67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4f6a:{NFSU2_TR(0x4f4f6a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4f6c:{NFSU2_TR(0x4f4f6c);
if(r1(R+518)){{goto L4f4f8b;}}
}
B4f4f6e:L4f4f6e:{c.instructions+=1;NFSU2_TR(0x4f4f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4f73ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4f73:L4f4f73:{c.instructions+=2;NFSU2_TR(0x4f4f73);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4f75:{NFSU2_TR(0x4f4f75);
if(r1(R+518)){{goto L4f4f7c;}}
}
B4f4f77:L4f4f77:{c.instructions+=2;NFSU2_TR(0x4f4f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f7a:{NFSU2_TR(0x4f4f7a);
{goto L4f4f7e;}
}
B4f4f7c:L4f4f7c:{c.instructions+=1;NFSU2_TR(0x4f4f7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4f7e:L4f4f7e:{c.instructions+=5;NFSU2_TR(0x4f4f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4f81:{NFSU2_TR(0x4f4f81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4f83:{NFSU2_TR(0x4f4f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f86:{NFSU2_TR(0x4f4f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f89:{NFSU2_TR(0x4f4f89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4f8b:L4f4f8b:{c.instructions+=3;NFSU2_TR(0x4f4f8b);
u8 U[4];
w4(U+0,u32(0x7984ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f90:{NFSU2_TR(0x4f4f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4f93:{NFSU2_TR(0x4f4f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4f98ull));
TAIL_STATIC(0x505450u,505);
}
B4f4f98:L4f4f98:{c.instructions+=4;NFSU2_TR(0x4f4f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f4f9b:{NFSU2_TR(0x4f4f9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f9c:{NFSU2_TR(0x4f4f9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4f9d:{NFSU2_TR(0x4f4f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4fa2ull));
TAIL_STATIC(0x537a10u,537);
}
B4f4fa2:L4f4fa2:{c.instructions+=4;NFSU2_TR(0x4f4fa2);
__builtin_memmove((R+28),(R+0),4);
}
B4f4fa4:{NFSU2_TR(0x4f4fa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4fa7:{NFSU2_TR(0x4f4fa7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4fa9:{NFSU2_TR(0x4f4fa9);
if(r1(R+518)){{goto L4f4fc8;}}
}
B4f4fab:L4f4fab:{c.instructions+=1;NFSU2_TR(0x4f4fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4fb0ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4fb0:L4f4fb0:{c.instructions+=2;NFSU2_TR(0x4f4fb0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4fb2:{NFSU2_TR(0x4f4fb2);
if(r1(R+518)){{goto L4f4fb9;}}
}
B4f4fb4:L4f4fb4:{c.instructions+=2;NFSU2_TR(0x4f4fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4fb7:{NFSU2_TR(0x4f4fb7);
{goto L4f4fbb;}
}
B4f4fb9:L4f4fb9:{c.instructions+=1;NFSU2_TR(0x4f4fb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4fbb:L4f4fbb:{c.instructions+=5;NFSU2_TR(0x4f4fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4fbe:{NFSU2_TR(0x4f4fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4fc0:{NFSU2_TR(0x4f4fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4fc3:{NFSU2_TR(0x4f4fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4fc6:{NFSU2_TR(0x4f4fc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f4fc8:L4f4fc8:{c.instructions+=3;NFSU2_TR(0x4f4fc8);
u8 U[4];
w4(U+0,u32(0x790988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4fcd:{NFSU2_TR(0x4f4fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4fd0:{NFSU2_TR(0x4f4fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4fd5ull));
TAIL_STATIC(0x505450u,505);
}
B4f4fd5:L4f4fd5:{c.instructions+=4;NFSU2_TR(0x4f4fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4fd6:{NFSU2_TR(0x4f4fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f4fd9:{NFSU2_TR(0x4f4fd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f4fda:{NFSU2_TR(0x4f4fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4fdfull));
TAIL_STATIC(0x537a10u,537);
}
B4f4fdf:L4f4fdf:{c.instructions+=4;NFSU2_TR(0x4f4fdf);
__builtin_memmove((R+28),(R+0),4);
}
B4f4fe1:{NFSU2_TR(0x4f4fe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f4fe4:{NFSU2_TR(0x4f4fe4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4fe6:{NFSU2_TR(0x4f4fe6);
if(r1(R+518)){TAIL_STATIC(0x4f5005u,4f5);}
}
B4f4fe8:L4f4fe8:{c.instructions+=1;NFSU2_TR(0x4f4fe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4fedull));
TAIL_STATIC(0x440ec0u,440);
}
B4f4fed:L4f4fed:{c.instructions+=2;NFSU2_TR(0x4f4fed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f4fef:{NFSU2_TR(0x4f4fef);
if(r1(R+518)){{goto L4f4ff6;}}
}
B4f4ff1:L4f4ff1:{c.instructions+=2;NFSU2_TR(0x4f4ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f4ff4:{NFSU2_TR(0x4f4ff4);
{goto L4f4ff8;}
}
B4f4ff6:L4f4ff6:{c.instructions+=1;NFSU2_TR(0x4f4ff6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f4ff8:L4f4ff8:{c.instructions+=3;NFSU2_TR(0x4f4ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f4ffb:{NFSU2_TR(0x4f4ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f4ffd:{NFSU2_TR(0x4f4ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4f5000u,4f5);
}
XIT:NFSU2_TR_EXIT(0x4f4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
