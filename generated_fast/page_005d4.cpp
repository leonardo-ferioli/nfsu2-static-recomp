#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 page_5d4(Cpu& c){return body_5d4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d4002:goto L5d4002;
case 0x5d4004:goto L5d4004;
case 0x5d4007:c.instructions+=2;goto B5d4007;
case 0x5d4009:c.instructions+=1;goto B5d4009;
case 0x5d400b:goto L5d400b;
case 0x5d4012:c.instructions+=2;goto B5d4012;
case 0x5d4014:c.instructions+=1;goto B5d4014;
case 0x5d4016:goto L5d4016;
case 0x5d4019:c.instructions+=3;goto B5d4019;
case 0x5d401c:c.instructions+=2;goto B5d401c;
case 0x5d4023:c.instructions+=1;goto B5d4023;
case 0x5d4024:goto L5d4024;
case 0x5d4026:c.instructions+=1;goto B5d4026;
case 0x5d4030:goto L5d4030;
case 0x5d4031:c.instructions+=4;goto B5d4031;
case 0x5d4036:c.instructions+=3;goto B5d4036;
case 0x5d403a:c.instructions+=2;goto B5d403a;
case 0x5d403f:c.instructions+=1;goto B5d403f;
case 0x5d4041:goto L5d4041;
case 0x5d4045:c.instructions+=4;goto B5d4045;
case 0x5d404b:c.instructions+=3;goto B5d404b;
case 0x5d404d:c.instructions+=2;goto B5d404d;
case 0x5d4050:c.instructions+=1;goto B5d4050;
case 0x5d4052:goto L5d4052;
case 0x5d405a:goto L5d405a;
case 0x5d405e:c.instructions+=16;goto B5d405e;
case 0x5d4061:c.instructions+=15;goto B5d4061;
case 0x5d4064:c.instructions+=14;goto B5d4064;
case 0x5d4067:c.instructions+=13;goto B5d4067;
case 0x5d406a:c.instructions+=12;goto B5d406a;
case 0x5d406c:c.instructions+=11;goto B5d406c;
case 0x5d406e:c.instructions+=10;goto B5d406e;
case 0x5d4070:c.instructions+=9;goto B5d4070;
case 0x5d4072:c.instructions+=8;goto B5d4072;
case 0x5d4074:c.instructions+=7;goto B5d4074;
case 0x5d4076:c.instructions+=6;goto B5d4076;
case 0x5d4078:c.instructions+=5;goto B5d4078;
case 0x5d407a:c.instructions+=4;goto B5d407a;
case 0x5d407e:c.instructions+=3;goto B5d407e;
case 0x5d4080:c.instructions+=2;goto B5d4080;
case 0x5d4083:c.instructions+=1;goto B5d4083;
case 0x5d4085:goto L5d4085;
case 0x5d4087:c.instructions+=1;goto B5d4087;
case 0x5d4089:goto L5d4089;
case 0x5d408b:goto L5d408b;
case 0x5d4090:c.instructions+=2;goto B5d4090;
case 0x5d4092:c.instructions+=1;goto B5d4092;
case 0x5d4094:goto L5d4094;
case 0x5d4097:c.instructions+=10;goto B5d4097;
case 0x5d409d:c.instructions+=9;goto B5d409d;
case 0x5d40a1:c.instructions+=8;goto B5d40a1;
case 0x5d40a5:c.instructions+=7;goto B5d40a5;
case 0x5d40a9:c.instructions+=6;goto B5d40a9;
case 0x5d40ab:c.instructions+=5;goto B5d40ab;
case 0x5d40ad:c.instructions+=4;goto B5d40ad;
case 0x5d40af:c.instructions+=3;goto B5d40af;
case 0x5d40b1:c.instructions+=2;goto B5d40b1;
case 0x5d40b4:c.instructions+=1;goto B5d40b4;
case 0x5d40b6:goto L5d40b6;
case 0x5d40b8:c.instructions+=1;goto B5d40b8;
case 0x5d40ba:goto L5d40ba;
case 0x5d40be:c.instructions+=4;goto B5d40be;
case 0x5d40c0:c.instructions+=3;goto B5d40c0;
case 0x5d40c2:c.instructions+=2;goto B5d40c2;
case 0x5d40c5:c.instructions+=1;goto B5d40c5;
case 0x5d40c7:goto L5d40c7;
case 0x5d40c9:c.instructions+=1;goto B5d40c9;
case 0x5d40cd:goto L5d40cd;
case 0x5d40cf:c.instructions+=5;goto B5d40cf;
case 0x5d40d1:c.instructions+=4;goto B5d40d1;
case 0x5d40d3:c.instructions+=3;goto B5d40d3;
case 0x5d40d5:c.instructions+=2;goto B5d40d5;
case 0x5d40d8:c.instructions+=1;goto B5d40d8;
case 0x5d40da:goto L5d40da;
case 0x5d40df:c.instructions+=4;goto B5d40df;
case 0x5d40e1:c.instructions+=3;goto B5d40e1;
case 0x5d40e3:c.instructions+=2;goto B5d40e3;
case 0x5d40e4:c.instructions+=1;goto B5d40e4;
case 0x5d40e5:goto L5d40e5;
case 0x5d40e7:c.instructions+=1;goto B5d40e7;
case 0x5d40e9:goto L5d40e9;
case 0x5d40eb:c.instructions+=2;goto B5d40eb;
case 0x5d40ec:c.instructions+=1;goto B5d40ec;
case 0x5d40f0:goto L5d40f0;
case 0x5d40f3:c.instructions+=4;goto B5d40f3;
case 0x5d40f4:c.instructions+=3;goto B5d40f4;
case 0x5d40f8:c.instructions+=2;goto B5d40f8;
case 0x5d40fb:c.instructions+=1;goto B5d40fb;
case 0x5d4101:goto L5d4101;
case 0x5d4102:c.instructions+=6;goto B5d4102;
case 0x5d4106:c.instructions+=5;goto B5d4106;
case 0x5d4107:c.instructions+=4;goto B5d4107;
case 0x5d4108:c.instructions+=3;goto B5d4108;
case 0x5d410a:c.instructions+=2;goto B5d410a;
case 0x5d410b:c.instructions+=1;goto B5d410b;
case 0x5d4110:goto L5d4110;
case 0x5d4114:c.instructions+=22;goto B5d4114;
case 0x5d4116:c.instructions+=21;goto B5d4116;
case 0x5d4118:c.instructions+=20;goto B5d4118;
case 0x5d4119:c.instructions+=19;goto B5d4119;
case 0x5d411b:c.instructions+=18;goto B5d411b;
case 0x5d411d:c.instructions+=17;goto B5d411d;
case 0x5d4120:c.instructions+=16;goto B5d4120;
case 0x5d4121:c.instructions+=15;goto B5d4121;
case 0x5d4124:c.instructions+=14;goto B5d4124;
case 0x5d4128:c.instructions+=13;goto B5d4128;
case 0x5d412b:c.instructions+=12;goto B5d412b;
case 0x5d412e:c.instructions+=11;goto B5d412e;
case 0x5d4131:c.instructions+=10;goto B5d4131;
case 0x5d4133:c.instructions+=9;goto B5d4133;
case 0x5d4135:c.instructions+=8;goto B5d4135;
case 0x5d4137:c.instructions+=7;goto B5d4137;
case 0x5d4139:c.instructions+=6;goto B5d4139;
case 0x5d413d:c.instructions+=5;goto B5d413d;
case 0x5d4141:c.instructions+=4;goto B5d4141;
case 0x5d4145:c.instructions+=3;goto B5d4145;
case 0x5d4149:c.instructions+=2;goto B5d4149;
case 0x5d414d:c.instructions+=1;goto B5d414d;
case 0x5d4150:goto L5d4150;
case 0x5d4153:c.instructions+=1;goto B5d4153;
case 0x5d4155:goto L5d4155;
case 0x5d4157:c.instructions+=4;goto B5d4157;
case 0x5d4159:c.instructions+=3;goto B5d4159;
case 0x5d415b:c.instructions+=2;goto B5d415b;
case 0x5d415e:c.instructions+=1;goto B5d415e;
case 0x5d4162:goto L5d4162;
case 0x5d4164:goto L5d4164;
case 0x5d4165:c.instructions+=3;goto B5d4165;
case 0x5d4167:c.instructions+=2;goto B5d4167;
case 0x5d416a:c.instructions+=1;goto B5d416a;
case 0x5d416e:goto L5d416e;
case 0x5d4170:goto L5d4170;
case 0x5d4172:goto L5d4172;
case 0x5d4174:c.instructions+=3;goto B5d4174;
case 0x5d4176:c.instructions+=2;goto B5d4176;
case 0x5d4179:c.instructions+=1;goto B5d4179;
case 0x5d417b:goto L5d417b;
case 0x5d417d:goto L5d417d;
case 0x5d417f:c.instructions+=1;goto B5d417f;
case 0x5d4182:goto L5d4182;
case 0x5d4184:goto L5d4184;
case 0x5d4188:c.instructions+=3;goto B5d4188;
case 0x5d418a:c.instructions+=2;goto B5d418a;
case 0x5d418d:c.instructions+=1;goto B5d418d;
case 0x5d418f:goto L5d418f;
case 0x5d4191:goto L5d4191;
case 0x5d4193:c.instructions+=1;goto B5d4193;
case 0x5d4196:goto L5d4196;
case 0x5d4198:goto L5d4198;
case 0x5d419c:c.instructions+=7;goto B5d419c;
case 0x5d41a0:c.instructions+=6;goto B5d41a0;
case 0x5d41a1:c.instructions+=5;goto B5d41a1;
case 0x5d41a3:c.instructions+=4;goto B5d41a3;
case 0x5d41a6:c.instructions+=3;goto B5d41a6;
case 0x5d41aa:c.instructions+=2;goto B5d41aa;
case 0x5d41ae:c.instructions+=1;goto B5d41ae;
case 0x5d41b4:goto L5d41b4;
case 0x5d41b8:c.instructions+=4;goto B5d41b8;
case 0x5d41bb:c.instructions+=3;goto B5d41bb;
case 0x5d41bd:c.instructions+=2;goto B5d41bd;
case 0x5d41bf:c.instructions+=1;goto B5d41bf;
case 0x5d41c5:goto L5d41c5;
case 0x5d41c9:c.instructions+=2;goto B5d41c9;
case 0x5d41cd:c.instructions+=1;goto B5d41cd;
case 0x5d41cf:goto L5d41cf;
case 0x5d41d1:c.instructions+=8;goto B5d41d1;
case 0x5d41d4:c.instructions+=7;goto B5d41d4;
case 0x5d41d7:c.instructions+=6;goto B5d41d7;
case 0x5d41da:c.instructions+=5;goto B5d41da;
case 0x5d41dc:c.instructions+=4;goto B5d41dc;
case 0x5d41dd:c.instructions+=3;goto B5d41dd;
case 0x5d41df:c.instructions+=2;goto B5d41df;
case 0x5d41e0:c.instructions+=1;goto B5d41e0;
case 0x5d41e4:goto L5d41e4;
case 0x5d41e7:c.instructions+=4;goto B5d41e7;
case 0x5d41ed:c.instructions+=3;goto B5d41ed;
case 0x5d41ef:c.instructions+=2;goto B5d41ef;
case 0x5d41f2:c.instructions+=1;goto B5d41f2;
case 0x5d41f4:goto L5d41f4;
case 0x5d41f5:goto L5d41f5;
case 0x5d41f9:c.instructions+=6;goto B5d41f9;
case 0x5d41fc:c.instructions+=5;goto B5d41fc;
case 0x5d41ff:c.instructions+=4;goto B5d41ff;
case 0x5d4201:c.instructions+=3;goto B5d4201;
case 0x5d4202:c.instructions+=2;goto B5d4202;
case 0x5d4203:c.instructions+=1;goto B5d4203;
case 0x5d4207:goto L5d4207;
case 0x5d420a:c.instructions+=4;goto B5d420a;
case 0x5d4210:c.instructions+=3;goto B5d4210;
case 0x5d4212:c.instructions+=2;goto B5d4212;
case 0x5d4215:c.instructions+=1;goto B5d4215;
case 0x5d4217:goto L5d4217;
case 0x5d421b:c.instructions+=6;goto B5d421b;
case 0x5d421c:c.instructions+=5;goto B5d421c;
case 0x5d421f:c.instructions+=4;goto B5d421f;
case 0x5d4221:c.instructions+=3;goto B5d4221;
case 0x5d4223:c.instructions+=2;goto B5d4223;
case 0x5d4225:c.instructions+=1;goto B5d4225;
case 0x5d4228:goto L5d4228;
case 0x5d422a:goto L5d422a;
case 0x5d422c:c.instructions+=1;goto B5d422c;
case 0x5d422f:goto L5d422f;
case 0x5d4231:goto L5d4231;
case 0x5d4233:c.instructions+=2;goto B5d4233;
case 0x5d4235:c.instructions+=1;goto B5d4235;
case 0x5d4237:goto L5d4237;
case 0x5d423b:c.instructions+=1;goto B5d423b;
case 0x5d423c:goto L5d423c;
case 0x5d4240:c.instructions+=1;goto B5d4240;
case 0x5d4242:goto L5d4242;
case 0x5d4246:c.instructions+=1;goto B5d4246;
case 0x5d424a:goto L5d424a;
case 0x5d424e:c.instructions+=7;goto B5d424e;
case 0x5d4252:c.instructions+=6;goto B5d4252;
case 0x5d4253:c.instructions+=5;goto B5d4253;
case 0x5d4256:c.instructions+=4;goto B5d4256;
case 0x5d4258:c.instructions+=3;goto B5d4258;
case 0x5d425a:c.instructions+=2;goto B5d425a;
case 0x5d425c:c.instructions+=1;goto B5d425c;
case 0x5d425f:goto L5d425f;
case 0x5d4261:goto L5d4261;
case 0x5d4263:c.instructions+=1;goto B5d4263;
case 0x5d4266:goto L5d4266;
case 0x5d4268:goto L5d4268;
case 0x5d426c:c.instructions+=3;goto B5d426c;
case 0x5d4270:c.instructions+=2;goto B5d4270;
case 0x5d4274:c.instructions+=1;goto B5d4274;
case 0x5d4279:goto L5d4279;
case 0x5d427d:c.instructions+=5;goto B5d427d;
case 0x5d4281:c.instructions+=4;goto B5d4281;
case 0x5d4283:c.instructions+=3;goto B5d4283;
case 0x5d4285:c.instructions+=2;goto B5d4285;
case 0x5d4288:c.instructions+=1;goto B5d4288;
case 0x5d428a:goto L5d428a;
case 0x5d428c:goto L5d428c;
case 0x5d428e:c.instructions+=2;goto B5d428e;
case 0x5d4291:c.instructions+=1;goto B5d4291;
case 0x5d4292:goto L5d4292;
case 0x5d4294:goto L5d4294;
case 0x5d4299:goto L5d4299;
case 0x5d429c:c.instructions+=3;goto B5d429c;
case 0x5d429d:c.instructions+=2;goto B5d429d;
case 0x5d429e:c.instructions+=1;goto B5d429e;
case 0x5d429f:goto L5d429f;
case 0x5d42a0:c.instructions+=2;goto B5d42a0;
case 0x5d42a3:c.instructions+=1;goto B5d42a3;
case 0x5d42b0:goto L5d42b0;
case 0x5d42b4:c.instructions+=6;goto B5d42b4;
case 0x5d42b6:c.instructions+=5;goto B5d42b6;
case 0x5d42b8:c.instructions+=4;goto B5d42b8;
case 0x5d42bc:c.instructions+=3;goto B5d42bc;
case 0x5d42be:c.instructions+=2;goto B5d42be;
case 0x5d42c0:c.instructions+=1;goto B5d42c0;
case 0x5d42d0:goto L5d42d0;
case 0x5d42d1:c.instructions+=7;goto B5d42d1;
case 0x5d42d7:c.instructions+=6;goto B5d42d7;
case 0x5d42d8:c.instructions+=5;goto B5d42d8;
case 0x5d42d9:c.instructions+=4;goto B5d42d9;
case 0x5d42df:c.instructions+=3;goto B5d42df;
case 0x5d42e1:c.instructions+=2;goto B5d42e1;
case 0x5d42e4:c.instructions+=1;goto B5d42e4;
case 0x5d42e6:goto L5d42e6;
case 0x5d42eb:c.instructions+=1;goto B5d42eb;
case 0x5d42ee:goto L5d42ee;
case 0x5d42f1:c.instructions+=4;goto B5d42f1;
case 0x5d42f5:c.instructions+=3;goto B5d42f5;
case 0x5d42f7:c.instructions+=2;goto B5d42f7;
case 0x5d42fa:c.instructions+=1;goto B5d42fa;
case 0x5d42fc:goto L5d42fc;
case 0x5d42ff:c.instructions+=4;goto B5d42ff;
case 0x5d4303:c.instructions+=3;goto B5d4303;
case 0x5d4305:c.instructions+=2;goto B5d4305;
case 0x5d4308:c.instructions+=1;goto B5d4308;
case 0x5d430a:goto L5d430a;
case 0x5d430c:c.instructions+=4;goto B5d430c;
case 0x5d4310:c.instructions+=3;goto B5d4310;
case 0x5d4312:c.instructions+=2;goto B5d4312;
case 0x5d4315:c.instructions+=1;goto B5d4315;
case 0x5d4317:goto L5d4317;
case 0x5d431a:c.instructions+=4;goto B5d431a;
case 0x5d431e:c.instructions+=3;goto B5d431e;
case 0x5d4320:c.instructions+=2;goto B5d4320;
case 0x5d4323:c.instructions+=1;goto B5d4323;
case 0x5d4325:goto L5d4325;
case 0x5d4328:c.instructions+=4;goto B5d4328;
case 0x5d432b:c.instructions+=3;goto B5d432b;
case 0x5d4331:c.instructions+=2;goto B5d4331;
case 0x5d4333:c.instructions+=1;goto B5d4333;
case 0x5d4335:goto L5d4335;
case 0x5d4337:c.instructions+=1;goto B5d4337;
case 0x5d4339:goto L5d4339;
case 0x5d433b:c.instructions+=2;goto B5d433b;
case 0x5d433e:c.instructions+=1;goto B5d433e;
case 0x5d4340:goto L5d4340;
case 0x5d4342:c.instructions+=4;goto B5d4342;
case 0x5d4346:c.instructions+=3;goto B5d4346;
case 0x5d4348:c.instructions+=2;goto B5d4348;
case 0x5d434b:c.instructions+=1;goto B5d434b;
case 0x5d434d:goto L5d434d;
case 0x5d434e:c.instructions+=3;goto B5d434e;
case 0x5d4351:c.instructions+=2;goto B5d4351;
case 0x5d4353:c.instructions+=1;goto B5d4353;
case 0x5d4355:goto L5d4355;
case 0x5d4356:c.instructions+=4;goto B5d4356;
case 0x5d4357:c.instructions+=3;goto B5d4357;
case 0x5d4359:c.instructions+=2;goto B5d4359;
case 0x5d435a:c.instructions+=1;goto B5d435a;
case 0x5d435b:goto L5d435b;
case 0x5d435c:c.instructions+=1;goto B5d435c;
case 0x5d435e:goto L5d435e;
case 0x5d4361:c.instructions+=1;goto B5d4361;
case 0x5d4363:goto L5d4363;
case 0x5d4366:goto L5d4366;
case 0x5d4368:c.instructions+=1;goto B5d4368;
case 0x5d436a:goto L5d436a;
case 0x5d436b:c.instructions+=4;goto B5d436b;
case 0x5d436c:c.instructions+=3;goto B5d436c;
case 0x5d436e:c.instructions+=2;goto B5d436e;
case 0x5d436f:c.instructions+=1;goto B5d436f;
case 0x5d4370:goto L5d4370;
case 0x5d4371:c.instructions+=4;goto B5d4371;
case 0x5d4372:c.instructions+=3;goto B5d4372;
case 0x5d4374:c.instructions+=2;goto B5d4374;
case 0x5d4375:c.instructions+=1;goto B5d4375;
case 0x5d4380:goto L5d4380;
case 0x5d4384:c.instructions+=5;goto B5d4384;
case 0x5d4386:c.instructions+=4;goto B5d4386;
case 0x5d438c:c.instructions+=3;goto B5d438c;
case 0x5d438d:c.instructions+=2;goto B5d438d;
case 0x5d4393:c.instructions+=1;goto B5d4393;
case 0x5d4395:goto L5d4395;
case 0x5d4397:c.instructions+=1;goto B5d4397;
case 0x5d4399:goto L5d4399;
case 0x5d439e:goto L5d439e;
case 0x5d43a2:c.instructions+=2;goto B5d43a2;
case 0x5d43a8:c.instructions+=1;goto B5d43a8;
case 0x5d43aa:goto L5d43aa;
case 0x5d43ac:c.instructions+=1;goto B5d43ac;
case 0x5d43ae:goto L5d43ae;
case 0x5d43af:goto L5d43af;
case 0x5d43b0:c.instructions+=1;goto B5d43b0;
case 0x5d43c0:goto L5d43c0;
case 0x5d43c1:c.instructions+=7;goto B5d43c1;
case 0x5d43c7:c.instructions+=6;goto B5d43c7;
case 0x5d43c8:c.instructions+=5;goto B5d43c8;
case 0x5d43c9:c.instructions+=4;goto B5d43c9;
case 0x5d43cd:c.instructions+=3;goto B5d43cd;
case 0x5d43cf:c.instructions+=2;goto B5d43cf;
case 0x5d43d1:c.instructions+=1;goto B5d43d1;
case 0x5d43d4:goto L5d43d4;
case 0x5d43d7:c.instructions+=2;goto B5d43d7;
case 0x5d43dc:c.instructions+=1;goto B5d43dc;
case 0x5d43de:goto L5d43de;
case 0x5d43e0:c.instructions+=1;goto B5d43e0;
case 0x5d43e2:goto L5d43e2;
case 0x5d43e4:c.instructions+=1;goto B5d43e4;
case 0x5d43e6:goto L5d43e6;
case 0x5d43e7:goto L5d43e7;
case 0x5d43e8:c.instructions+=3;goto B5d43e8;
case 0x5d43eb:c.instructions+=2;goto B5d43eb;
case 0x5d43ee:c.instructions+=1;goto B5d43ee;
case 0x5d43f0:goto L5d43f0;
case 0x5d43f1:c.instructions+=4;goto B5d43f1;
case 0x5d43f2:c.instructions+=3;goto B5d43f2;
case 0x5d43f4:c.instructions+=2;goto B5d43f4;
case 0x5d43f5:c.instructions+=1;goto B5d43f5;
case 0x5d43f8:goto L5d43f8;
case 0x5d43fe:c.instructions+=6;goto B5d43fe;
case 0x5d43ff:c.instructions+=5;goto B5d43ff;
case 0x5d4402:c.instructions+=4;goto B5d4402;
case 0x5d4403:c.instructions+=3;goto B5d4403;
case 0x5d4405:c.instructions+=2;goto B5d4405;
case 0x5d4406:c.instructions+=1;goto B5d4406;
case 0x5d4410:goto L5d4410;
case 0x5d4411:c.instructions+=18;goto B5d4411;
case 0x5d4413:c.instructions+=17;goto B5d4413;
case 0x5d4416:c.instructions+=16;goto B5d4416;
case 0x5d4419:c.instructions+=15;goto B5d4419;
case 0x5d441b:c.instructions+=14;goto B5d441b;
case 0x5d441e:c.instructions+=13;goto B5d441e;
case 0x5d4422:c.instructions+=12;goto B5d4422;
case 0x5d4426:c.instructions+=11;goto B5d4426;
case 0x5d4429:c.instructions+=10;goto B5d4429;
case 0x5d442c:c.instructions+=9;goto B5d442c;
case 0x5d4430:c.instructions+=8;goto B5d4430;
case 0x5d4434:c.instructions+=7;goto B5d4434;
case 0x5d4435:c.instructions+=6;goto B5d4435;
case 0x5d4439:c.instructions+=5;goto B5d4439;
case 0x5d443d:c.instructions+=4;goto B5d443d;
case 0x5d443e:c.instructions+=3;goto B5d443e;
case 0x5d4444:c.instructions+=2;goto B5d4444;
case 0x5d4448:c.instructions+=1;goto B5d4448;
case 0x5d444d:goto L5d444d;
case 0x5d4450:c.instructions+=3;goto B5d4450;
case 0x5d4452:c.instructions+=2;goto B5d4452;
case 0x5d4453:c.instructions+=1;goto B5d4453;
case 0x5d4460:goto L5d4460;
case 0x5d4462:goto L5d4462;
case 0x5d4469:c.instructions+=2;goto B5d4469;
case 0x5d446b:c.instructions+=1;goto B5d446b;
case 0x5d446d:goto L5d446d;
case 0x5d446e:c.instructions+=2;goto B5d446e;
case 0x5d4471:c.instructions+=1;goto B5d4471;
case 0x5d4473:goto L5d4473;
case 0x5d4475:c.instructions+=1;goto B5d4475;
case 0x5d4476:goto L5d4476;
case 0x5d447b:c.instructions+=1;goto B5d447b;
case 0x5d4480:goto L5d4480;
case 0x5d4484:c.instructions+=7;goto B5d4484;
case 0x5d4486:c.instructions+=6;goto B5d4486;
case 0x5d4488:c.instructions+=5;goto B5d4488;
case 0x5d448b:c.instructions+=4;goto B5d448b;
case 0x5d448d:c.instructions+=3;goto B5d448d;
case 0x5d4494:c.instructions+=2;goto B5d4494;
case 0x5d449b:c.instructions+=1;goto B5d449b;
case 0x5d44a0:goto L5d44a0;
case 0x5d44a4:c.instructions+=1;goto B5d44a4;
case 0x5d44a6:goto L5d44a6;
case 0x5d44a7:c.instructions+=2;goto B5d44a7;
case 0x5d44aa:c.instructions+=1;goto B5d44aa;
case 0x5d44ac:goto L5d44ac;
case 0x5d44ae:c.instructions+=1;goto B5d44ae;
case 0x5d44b1:goto L5d44b1;
case 0x5d44b6:c.instructions+=1;goto B5d44b6;
case 0x5d44c0:goto L5d44c0;
case 0x5d44c4:c.instructions+=5;goto B5d44c4;
case 0x5d44c5:c.instructions+=4;goto B5d44c5;
case 0x5d44c8:c.instructions+=3;goto B5d44c8;
case 0x5d44ca:c.instructions+=2;goto B5d44ca;
case 0x5d44cd:c.instructions+=1;goto B5d44cd;
case 0x5d44cf:goto L5d44cf;
case 0x5d44d1:c.instructions+=1;goto B5d44d1;
case 0x5d44d3:goto L5d44d3;
case 0x5d44d5:goto L5d44d5;
case 0x5d44d9:c.instructions+=4;goto B5d44d9;
case 0x5d44dc:c.instructions+=3;goto B5d44dc;
case 0x5d44de:c.instructions+=2;goto B5d44de;
case 0x5d44e1:c.instructions+=1;goto B5d44e1;
case 0x5d44e3:goto L5d44e3;
case 0x5d44e5:c.instructions+=1;goto B5d44e5;
case 0x5d44e7:goto L5d44e7;
case 0x5d44e9:goto L5d44e9;
case 0x5d44ec:c.instructions+=4;goto B5d44ec;
case 0x5d44ef:c.instructions+=3;goto B5d44ef;
case 0x5d44f1:c.instructions+=2;goto B5d44f1;
case 0x5d44f4:c.instructions+=1;goto B5d44f4;
case 0x5d44f6:goto L5d44f6;
case 0x5d44f8:c.instructions+=1;goto B5d44f8;
case 0x5d44fa:goto L5d44fa;
case 0x5d44fc:c.instructions+=1;goto B5d44fc;
case 0x5d44fe:goto L5d44fe;
case 0x5d4503:c.instructions+=2;goto B5d4503;
case 0x5d4504:c.instructions+=1;goto B5d4504;
case 0x5d4507:goto L5d4507;
case 0x5d4509:c.instructions+=1;goto B5d4509;
case 0x5d450b:goto L5d450b;
case 0x5d450d:c.instructions+=1;goto B5d450d;
case 0x5d450f:goto L5d450f;
case 0x5d4511:c.instructions+=2;goto B5d4511;
case 0x5d4512:c.instructions+=1;goto B5d4512;
case 0x5d4520:goto L5d4520;
case 0x5d4523:c.instructions+=5;goto B5d4523;
case 0x5d4526:c.instructions+=4;goto B5d4526;
case 0x5d452c:c.instructions+=3;goto B5d452c;
case 0x5d452e:c.instructions+=2;goto B5d452e;
case 0x5d4531:c.instructions+=1;goto B5d4531;
case 0x5d4533:goto L5d4533;
case 0x5d4539:goto L5d4539;
case 0x5d4540:goto L5d4540;
case 0x5d4543:c.instructions+=9;goto B5d4543;
case 0x5d4544:c.instructions+=8;goto B5d4544;
case 0x5d4546:c.instructions+=7;goto B5d4546;
case 0x5d4549:c.instructions+=6;goto B5d4549;
case 0x5d454c:c.instructions+=5;goto B5d454c;
case 0x5d4550:c.instructions+=4;goto B5d4550;
case 0x5d4556:c.instructions+=3;goto B5d4556;
case 0x5d4558:c.instructions+=2;goto B5d4558;
case 0x5d455b:c.instructions+=1;goto B5d455b;
case 0x5d455d:goto L5d455d;
case 0x5d4563:c.instructions+=2;goto B5d4563;
case 0x5d4567:c.instructions+=1;goto B5d4567;
case 0x5d456b:goto L5d456b;
case 0x5d456f:c.instructions+=5;goto B5d456f;
case 0x5d4571:c.instructions+=4;goto B5d4571;
case 0x5d4577:c.instructions+=3;goto B5d4577;
case 0x5d4579:c.instructions+=2;goto B5d4579;
case 0x5d457c:c.instructions+=1;goto B5d457c;
case 0x5d457e:goto L5d457e;
case 0x5d4584:c.instructions+=3;goto B5d4584;
case 0x5d4585:c.instructions+=2;goto B5d4585;
case 0x5d4588:c.instructions+=1;goto B5d4588;
case 0x5d458b:goto L5d458b;
case 0x5d458f:c.instructions+=7;goto B5d458f;
case 0x5d4594:c.instructions+=6;goto B5d4594;
case 0x5d459a:c.instructions+=5;goto B5d459a;
case 0x5d459b:c.instructions+=4;goto B5d459b;
case 0x5d459c:c.instructions+=3;goto B5d459c;
case 0x5d459f:c.instructions+=2;goto B5d459f;
case 0x5d45a2:c.instructions+=1;goto B5d45a2;
case 0x5d45a7:goto L5d45a7;
case 0x5d45ad:c.instructions+=11;goto B5d45ad;
case 0x5d45b3:c.instructions+=10;goto B5d45b3;
case 0x5d45b5:c.instructions+=9;goto B5d45b5;
case 0x5d45b8:c.instructions+=8;goto B5d45b8;
case 0x5d45b9:c.instructions+=7;goto B5d45b9;
case 0x5d45ba:c.instructions+=6;goto B5d45ba;
case 0x5d45be:c.instructions+=5;goto B5d45be;
case 0x5d45c0:c.instructions+=4;goto B5d45c0;
case 0x5d45c4:c.instructions+=3;goto B5d45c4;
case 0x5d45c7:c.instructions+=2;goto B5d45c7;
case 0x5d45ca:c.instructions+=1;goto B5d45ca;
case 0x5d45cf:goto L5d45cf;
case 0x5d45d5:c.instructions+=8;goto B5d45d5;
case 0x5d45d9:c.instructions+=7;goto B5d45d9;
case 0x5d45dd:c.instructions+=6;goto B5d45dd;
case 0x5d45e0:c.instructions+=5;goto B5d45e0;
case 0x5d45e4:c.instructions+=4;goto B5d45e4;
case 0x5d45e5:c.instructions+=3;goto B5d45e5;
case 0x5d45e6:c.instructions+=2;goto B5d45e6;
case 0x5d45e9:c.instructions+=1;goto B5d45e9;
case 0x5d45ee:goto L5d45ee;
case 0x5d45f2:c.instructions+=5;goto B5d45f2;
case 0x5d45f5:c.instructions+=4;goto B5d45f5;
case 0x5d45f6:c.instructions+=3;goto B5d45f6;
case 0x5d45fa:c.instructions+=2;goto B5d45fa;
case 0x5d45fd:c.instructions+=1;goto B5d45fd;
case 0x5d4600:goto L5d4600;
case 0x5d4601:c.instructions+=4;goto B5d4601;
case 0x5d4605:c.instructions+=3;goto B5d4605;
case 0x5d4608:c.instructions+=2;goto B5d4608;
case 0x5d460b:c.instructions+=1;goto B5d460b;
case 0x5d4610:goto L5d4610;
case 0x5d4616:c.instructions+=7;goto B5d4616;
case 0x5d4619:c.instructions+=6;goto B5d4619;
case 0x5d461c:c.instructions+=5;goto B5d461c;
case 0x5d461e:c.instructions+=4;goto B5d461e;
case 0x5d4624:c.instructions+=3;goto B5d4624;
case 0x5d4626:c.instructions+=2;goto B5d4626;
case 0x5d4627:c.instructions+=1;goto B5d4627;
case 0x5d4629:goto L5d4629;
case 0x5d462f:c.instructions+=2;goto B5d462f;
case 0x5d4631:c.instructions+=1;goto B5d4631;
case 0x5d4633:goto L5d4633;
case 0x5d463a:c.instructions+=1;goto B5d463a;
case 0x5d463b:goto L5d463b;
case 0x5d4642:c.instructions+=1;goto B5d4642;
case 0x5d4650:goto L5d4650;
case 0x5d4651:c.instructions+=4;goto B5d4651;
case 0x5d4655:c.instructions+=3;goto B5d4655;
case 0x5d4658:c.instructions+=2;goto B5d4658;
case 0x5d465b:c.instructions+=1;goto B5d465b;
case 0x5d4660:goto L5d4660;
case 0x5d4666:c.instructions+=7;goto B5d4666;
case 0x5d4669:c.instructions+=6;goto B5d4669;
case 0x5d466c:c.instructions+=5;goto B5d466c;
case 0x5d466e:c.instructions+=4;goto B5d466e;
case 0x5d4674:c.instructions+=3;goto B5d4674;
case 0x5d4676:c.instructions+=2;goto B5d4676;
case 0x5d4677:c.instructions+=1;goto B5d4677;
case 0x5d4679:goto L5d4679;
case 0x5d467f:c.instructions+=2;goto B5d467f;
case 0x5d4681:c.instructions+=1;goto B5d4681;
case 0x5d4683:goto L5d4683;
case 0x5d468a:c.instructions+=1;goto B5d468a;
case 0x5d468b:goto L5d468b;
case 0x5d4692:c.instructions+=1;goto B5d4692;
case 0x5d46a0:goto L5d46a0;
case 0x5d46a4:c.instructions+=11;goto B5d46a4;
case 0x5d46aa:c.instructions+=10;goto B5d46aa;
case 0x5d46ae:c.instructions+=9;goto B5d46ae;
case 0x5d46b2:c.instructions+=8;goto B5d46b2;
case 0x5d46b4:c.instructions+=7;goto B5d46b4;
case 0x5d46b8:c.instructions+=6;goto B5d46b8;
case 0x5d46ba:c.instructions+=5;goto B5d46ba;
case 0x5d46be:c.instructions+=4;goto B5d46be;
case 0x5d46c2:c.instructions+=3;goto B5d46c2;
case 0x5d46c4:c.instructions+=2;goto B5d46c4;
case 0x5d46c7:c.instructions+=1;goto B5d46c7;
case 0x5d46c9:goto L5d46c9;
case 0x5d46cb:c.instructions+=1;goto B5d46cb;
case 0x5d46cf:goto L5d46cf;
case 0x5d46d1:c.instructions+=4;goto B5d46d1;
case 0x5d46d3:c.instructions+=3;goto B5d46d3;
case 0x5d46d5:c.instructions+=2;goto B5d46d5;
case 0x5d46d7:c.instructions+=1;goto B5d46d7;
case 0x5d46e0:goto L5d46e0;
case 0x5d46e4:c.instructions+=20;goto B5d46e4;
case 0x5d46e8:c.instructions+=19;goto B5d46e8;
case 0x5d46eb:c.instructions+=18;goto B5d46eb;
case 0x5d46ee:c.instructions+=17;goto B5d46ee;
case 0x5d46f2:c.instructions+=16;goto B5d46f2;
case 0x5d46f4:c.instructions+=15;goto B5d46f4;
case 0x5d46f7:c.instructions+=14;goto B5d46f7;
case 0x5d46f9:c.instructions+=13;goto B5d46f9;
case 0x5d46fa:c.instructions+=12;goto B5d46fa;
case 0x5d46fe:c.instructions+=11;goto B5d46fe;
case 0x5d4700:c.instructions+=10;goto B5d4700;
case 0x5d4702:c.instructions+=9;goto B5d4702;
case 0x5d4704:c.instructions+=8;goto B5d4704;
case 0x5d4707:c.instructions+=7;goto B5d4707;
case 0x5d470a:c.instructions+=6;goto B5d470a;
case 0x5d470c:c.instructions+=5;goto B5d470c;
case 0x5d470e:c.instructions+=4;goto B5d470e;
case 0x5d4714:c.instructions+=3;goto B5d4714;
case 0x5d4716:c.instructions+=2;goto B5d4716;
case 0x5d4719:c.instructions+=1;goto B5d4719;
case 0x5d471b:goto L5d471b;
case 0x5d471d:c.instructions+=6;goto B5d471d;
case 0x5d471f:c.instructions+=5;goto B5d471f;
case 0x5d4721:c.instructions+=4;goto B5d4721;
case 0x5d4722:c.instructions+=3;goto B5d4722;
case 0x5d4724:c.instructions+=2;goto B5d4724;
case 0x5d4727:c.instructions+=1;goto B5d4727;
case 0x5d4728:goto L5d4728;
case 0x5d472a:c.instructions+=24;goto B5d472a;
case 0x5d472b:c.instructions+=23;goto B5d472b;
case 0x5d472d:c.instructions+=22;goto B5d472d;
case 0x5d4731:c.instructions+=21;goto B5d4731;
case 0x5d4735:c.instructions+=20;goto B5d4735;
case 0x5d4738:c.instructions+=19;goto B5d4738;
case 0x5d473b:c.instructions+=18;goto B5d473b;
case 0x5d473f:c.instructions+=17;goto B5d473f;
case 0x5d4742:c.instructions+=16;goto B5d4742;
case 0x5d4745:c.instructions+=15;goto B5d4745;
case 0x5d4747:c.instructions+=14;goto B5d4747;
case 0x5d4749:c.instructions+=13;goto B5d4749;
case 0x5d474b:c.instructions+=12;goto B5d474b;
case 0x5d474d:c.instructions+=11;goto B5d474d;
case 0x5d474f:c.instructions+=10;goto B5d474f;
case 0x5d4751:c.instructions+=9;goto B5d4751;
case 0x5d4754:c.instructions+=8;goto B5d4754;
case 0x5d4755:c.instructions+=7;goto B5d4755;
case 0x5d4756:c.instructions+=6;goto B5d4756;
case 0x5d4758:c.instructions+=5;goto B5d4758;
case 0x5d475c:c.instructions+=4;goto B5d475c;
case 0x5d475e:c.instructions+=3;goto B5d475e;
case 0x5d475f:c.instructions+=2;goto B5d475f;
case 0x5d4761:c.instructions+=1;goto B5d4761;
case 0x5d4766:goto L5d4766;
case 0x5d4769:c.instructions+=4;goto B5d4769;
case 0x5d476b:c.instructions+=3;goto B5d476b;
case 0x5d476c:c.instructions+=2;goto B5d476c;
case 0x5d476f:c.instructions+=1;goto B5d476f;
case 0x5d4770:goto L5d4770;
case 0x5d4773:c.instructions+=24;goto B5d4773;
case 0x5d4777:c.instructions+=23;goto B5d4777;
case 0x5d4779:c.instructions+=22;goto B5d4779;
case 0x5d477a:c.instructions+=21;goto B5d477a;
case 0x5d477e:c.instructions+=20;goto B5d477e;
case 0x5d4780:c.instructions+=19;goto B5d4780;
case 0x5d4781:c.instructions+=18;goto B5d4781;
case 0x5d4786:c.instructions+=17;goto B5d4786;
case 0x5d478a:c.instructions+=16;goto B5d478a;
case 0x5d478e:c.instructions+=15;goto B5d478e;
case 0x5d4791:c.instructions+=14;goto B5d4791;
case 0x5d4795:c.instructions+=13;goto B5d4795;
case 0x5d4798:c.instructions+=12;goto B5d4798;
case 0x5d479c:c.instructions+=11;goto B5d479c;
case 0x5d479e:c.instructions+=10;goto B5d479e;
case 0x5d47a0:c.instructions+=9;goto B5d47a0;
case 0x5d47a4:c.instructions+=8;goto B5d47a4;
case 0x5d47a7:c.instructions+=7;goto B5d47a7;
case 0x5d47ab:c.instructions+=6;goto B5d47ab;
case 0x5d47ac:c.instructions+=5;goto B5d47ac;
case 0x5d47af:c.instructions+=4;goto B5d47af;
case 0x5d47b0:c.instructions+=3;goto B5d47b0;
case 0x5d47b1:c.instructions+=2;goto B5d47b1;
case 0x5d47b5:c.instructions+=1;goto B5d47b5;
case 0x5d47ba:goto L5d47ba;
case 0x5d47bf:c.instructions+=6;goto B5d47bf;
case 0x5d47c3:c.instructions+=5;goto B5d47c3;
case 0x5d47c4:c.instructions+=4;goto B5d47c4;
case 0x5d47c8:c.instructions+=3;goto B5d47c8;
case 0x5d47c9:c.instructions+=2;goto B5d47c9;
case 0x5d47ca:c.instructions+=1;goto B5d47ca;
case 0x5d47cf:goto L5d47cf;
case 0x5d47d3:c.instructions+=22;goto B5d47d3;
case 0x5d47d7:c.instructions+=21;goto B5d47d7;
case 0x5d47db:c.instructions+=20;goto B5d47db;
case 0x5d47dc:c.instructions+=19;goto B5d47dc;
case 0x5d47e0:c.instructions+=18;goto B5d47e0;
case 0x5d47e4:c.instructions+=17;goto B5d47e4;
case 0x5d47e5:c.instructions+=16;goto B5d47e5;
case 0x5d47e9:c.instructions+=15;goto B5d47e9;
case 0x5d47ed:c.instructions+=14;goto B5d47ed;
case 0x5d47f1:c.instructions+=13;goto B5d47f1;
case 0x5d47f2:c.instructions+=12;goto B5d47f2;
case 0x5d47f6:c.instructions+=11;goto B5d47f6;
case 0x5d47f7:c.instructions+=10;goto B5d47f7;
case 0x5d47fb:c.instructions+=9;goto B5d47fb;
case 0x5d47ff:c.instructions+=8;goto B5d47ff;
case 0x5d4803:c.instructions+=7;goto B5d4803;
case 0x5d4807:c.instructions+=6;goto B5d4807;
case 0x5d4808:c.instructions+=5;goto B5d4808;
case 0x5d480c:c.instructions+=4;goto B5d480c;
case 0x5d4810:c.instructions+=3;goto B5d4810;
case 0x5d4814:c.instructions+=2;goto B5d4814;
case 0x5d4818:c.instructions+=1;goto B5d4818;
case 0x5d481d:goto L5d481d;
case 0x5d4820:c.instructions+=2;goto B5d4820;
case 0x5d4822:c.instructions+=1;goto B5d4822;
case 0x5d4824:goto L5d4824;
case 0x5d482a:c.instructions+=4;goto B5d482a;
case 0x5d482b:c.instructions+=3;goto B5d482b;
case 0x5d482c:c.instructions+=2;goto B5d482c;
case 0x5d482f:c.instructions+=1;goto B5d482f;
case 0x5d4830:goto L5d4830;
case 0x5d4832:c.instructions+=15;goto B5d4832;
case 0x5d4834:c.instructions+=14;goto B5d4834;
case 0x5d4837:c.instructions+=13;goto B5d4837;
case 0x5d483a:c.instructions+=12;goto B5d483a;
case 0x5d483c:c.instructions+=11;goto B5d483c;
case 0x5d483e:c.instructions+=10;goto B5d483e;
case 0x5d4840:c.instructions+=9;goto B5d4840;
case 0x5d4842:c.instructions+=8;goto B5d4842;
case 0x5d4844:c.instructions+=7;goto B5d4844;
case 0x5d4846:c.instructions+=6;goto B5d4846;
case 0x5d4848:c.instructions+=5;goto B5d4848;
case 0x5d484a:c.instructions+=4;goto B5d484a;
case 0x5d4850:c.instructions+=3;goto B5d4850;
case 0x5d4852:c.instructions+=2;goto B5d4852;
case 0x5d4855:c.instructions+=1;goto B5d4855;
case 0x5d4857:goto L5d4857;
case 0x5d4859:c.instructions+=1;goto B5d4859;
case 0x5d485f:goto L5d485f;
case 0x5d4865:c.instructions+=9;goto B5d4865;
case 0x5d4869:c.instructions+=8;goto B5d4869;
case 0x5d486d:c.instructions+=7;goto B5d486d;
case 0x5d4871:c.instructions+=6;goto B5d4871;
case 0x5d4875:c.instructions+=5;goto B5d4875;
case 0x5d4877:c.instructions+=4;goto B5d4877;
case 0x5d487d:c.instructions+=3;goto B5d487d;
case 0x5d487f:c.instructions+=2;goto B5d487f;
case 0x5d4882:c.instructions+=1;goto B5d4882;
case 0x5d4884:goto L5d4884;
case 0x5d4886:goto L5d4886;
case 0x5d4887:c.instructions+=3;goto B5d4887;
case 0x5d4888:c.instructions+=2;goto B5d4888;
case 0x5d488b:c.instructions+=1;goto B5d488b;
case 0x5d4890:goto L5d4890;
case 0x5d4893:c.instructions+=9;goto B5d4893;
case 0x5d4896:c.instructions+=8;goto B5d4896;
case 0x5d4898:c.instructions+=7;goto B5d4898;
case 0x5d489b:c.instructions+=6;goto B5d489b;
case 0x5d489d:c.instructions+=5;goto B5d489d;
case 0x5d48a0:c.instructions+=4;goto B5d48a0;
case 0x5d48a3:c.instructions+=3;goto B5d48a3;
case 0x5d48a9:c.instructions+=2;goto B5d48a9;
case 0x5d48ac:c.instructions+=1;goto B5d48ac;
case 0x5d48ae:goto L5d48ae;
case 0x5d48b0:goto L5d48b0;
case 0x5d48b3:c.instructions+=9;goto B5d48b3;
case 0x5d48b6:c.instructions+=8;goto B5d48b6;
case 0x5d48b9:c.instructions+=7;goto B5d48b9;
case 0x5d48bc:c.instructions+=6;goto B5d48bc;
case 0x5d48bf:c.instructions+=5;goto B5d48bf;
case 0x5d48c5:c.instructions+=4;goto B5d48c5;
case 0x5d48c8:c.instructions+=3;goto B5d48c8;
case 0x5d48cb:c.instructions+=2;goto B5d48cb;
case 0x5d48cd:c.instructions+=1;goto B5d48cd;
case 0x5d48cf:goto L5d48cf;
case 0x5d48d2:c.instructions+=2;goto B5d48d2;
case 0x5d48d4:c.instructions+=1;goto B5d48d4;
case 0x5d48d6:goto L5d48d6;
case 0x5d48d9:c.instructions+=9;goto B5d48d9;
case 0x5d48dc:c.instructions+=8;goto B5d48dc;
case 0x5d48df:c.instructions+=7;goto B5d48df;
case 0x5d48e2:c.instructions+=6;goto B5d48e2;
case 0x5d48e5:c.instructions+=5;goto B5d48e5;
case 0x5d48eb:c.instructions+=4;goto B5d48eb;
case 0x5d48ee:c.instructions+=3;goto B5d48ee;
case 0x5d48f1:c.instructions+=2;goto B5d48f1;
case 0x5d48f3:c.instructions+=1;goto B5d48f3;
case 0x5d48f5:goto L5d48f5;
case 0x5d4900:goto L5d4900;
case 0x5d4901:c.instructions+=15;goto B5d4901;
case 0x5d4905:c.instructions+=14;goto B5d4905;
case 0x5d4906:c.instructions+=13;goto B5d4906;
case 0x5d490a:c.instructions+=12;goto B5d490a;
case 0x5d490e:c.instructions+=11;goto B5d490e;
case 0x5d490f:c.instructions+=10;goto B5d490f;
case 0x5d4912:c.instructions+=9;goto B5d4912;
case 0x5d4916:c.instructions+=8;goto B5d4916;
case 0x5d4918:c.instructions+=7;goto B5d4918;
case 0x5d491a:c.instructions+=6;goto B5d491a;
case 0x5d4920:c.instructions+=5;goto B5d4920;
case 0x5d4926:c.instructions+=4;goto B5d4926;
case 0x5d4927:c.instructions+=3;goto B5d4927;
case 0x5d492a:c.instructions+=2;goto B5d492a;
case 0x5d492e:c.instructions+=1;goto B5d492e;
case 0x5d4930:goto L5d4930;
case 0x5d4932:c.instructions+=14;goto B5d4932;
case 0x5d4935:c.instructions+=13;goto B5d4935;
case 0x5d4938:c.instructions+=12;goto B5d4938;
case 0x5d493b:c.instructions+=11;goto B5d493b;
case 0x5d493d:c.instructions+=10;goto B5d493d;
case 0x5d493f:c.instructions+=9;goto B5d493f;
case 0x5d4941:c.instructions+=8;goto B5d4941;
case 0x5d4943:c.instructions+=7;goto B5d4943;
case 0x5d4945:c.instructions+=6;goto B5d4945;
case 0x5d4949:c.instructions+=5;goto B5d4949;
case 0x5d494b:c.instructions+=4;goto B5d494b;
case 0x5d494d:c.instructions+=3;goto B5d494d;
case 0x5d4950:c.instructions+=2;goto B5d4950;
case 0x5d4952:c.instructions+=1;goto B5d4952;
case 0x5d4954:goto L5d4954;
case 0x5d4957:c.instructions+=5;goto B5d4957;
case 0x5d495a:c.instructions+=4;goto B5d495a;
case 0x5d4960:c.instructions+=3;goto B5d4960;
case 0x5d4962:c.instructions+=2;goto B5d4962;
case 0x5d4965:c.instructions+=1;goto B5d4965;
case 0x5d4967:goto L5d4967;
case 0x5d496a:c.instructions+=14;goto B5d496a;
case 0x5d496d:c.instructions+=13;goto B5d496d;
case 0x5d4970:c.instructions+=12;goto B5d4970;
case 0x5d4973:c.instructions+=11;goto B5d4973;
case 0x5d4975:c.instructions+=10;goto B5d4975;
case 0x5d4977:c.instructions+=9;goto B5d4977;
case 0x5d4979:c.instructions+=8;goto B5d4979;
case 0x5d497b:c.instructions+=7;goto B5d497b;
case 0x5d497d:c.instructions+=6;goto B5d497d;
case 0x5d4981:c.instructions+=5;goto B5d4981;
case 0x5d4983:c.instructions+=4;goto B5d4983;
case 0x5d4985:c.instructions+=3;goto B5d4985;
case 0x5d4988:c.instructions+=2;goto B5d4988;
case 0x5d498a:c.instructions+=1;goto B5d498a;
case 0x5d498c:goto L5d498c;
case 0x5d498e:c.instructions+=3;goto B5d498e;
case 0x5d4991:c.instructions+=2;goto B5d4991;
case 0x5d4993:c.instructions+=1;goto B5d4993;
case 0x5d4995:goto L5d4995;
case 0x5d4997:c.instructions+=2;goto B5d4997;
case 0x5d4999:c.instructions+=1;goto B5d4999;
case 0x5d499b:goto L5d499b;
case 0x5d49a0:goto L5d49a0;
case 0x5d49a2:c.instructions+=14;goto B5d49a2;
case 0x5d49a5:c.instructions+=13;goto B5d49a5;
case 0x5d49a8:c.instructions+=12;goto B5d49a8;
case 0x5d49ab:c.instructions+=11;goto B5d49ab;
case 0x5d49ad:c.instructions+=10;goto B5d49ad;
case 0x5d49af:c.instructions+=9;goto B5d49af;
case 0x5d49b1:c.instructions+=8;goto B5d49b1;
case 0x5d49b3:c.instructions+=7;goto B5d49b3;
case 0x5d49b5:c.instructions+=6;goto B5d49b5;
case 0x5d49b9:c.instructions+=5;goto B5d49b9;
case 0x5d49bb:c.instructions+=4;goto B5d49bb;
case 0x5d49bd:c.instructions+=3;goto B5d49bd;
case 0x5d49c0:c.instructions+=2;goto B5d49c0;
case 0x5d49c2:c.instructions+=1;goto B5d49c2;
case 0x5d49c4:goto L5d49c4;
case 0x5d49c7:c.instructions+=5;goto B5d49c7;
case 0x5d49ca:c.instructions+=4;goto B5d49ca;
case 0x5d49d0:c.instructions+=3;goto B5d49d0;
case 0x5d49d2:c.instructions+=2;goto B5d49d2;
case 0x5d49d5:c.instructions+=1;goto B5d49d5;
case 0x5d49d7:goto L5d49d7;
case 0x5d49da:c.instructions+=14;goto B5d49da;
case 0x5d49dd:c.instructions+=13;goto B5d49dd;
case 0x5d49e0:c.instructions+=12;goto B5d49e0;
case 0x5d49e3:c.instructions+=11;goto B5d49e3;
case 0x5d49e5:c.instructions+=10;goto B5d49e5;
case 0x5d49e7:c.instructions+=9;goto B5d49e7;
case 0x5d49e9:c.instructions+=8;goto B5d49e9;
case 0x5d49eb:c.instructions+=7;goto B5d49eb;
case 0x5d49ed:c.instructions+=6;goto B5d49ed;
case 0x5d49f1:c.instructions+=5;goto B5d49f1;
case 0x5d49f3:c.instructions+=4;goto B5d49f3;
case 0x5d49f5:c.instructions+=3;goto B5d49f5;
case 0x5d49f8:c.instructions+=2;goto B5d49f8;
case 0x5d49fa:c.instructions+=1;goto B5d49fa;
case 0x5d49fc:goto L5d49fc;
case 0x5d49fe:c.instructions+=3;goto B5d49fe;
case 0x5d4a01:c.instructions+=2;goto B5d4a01;
case 0x5d4a03:c.instructions+=1;goto B5d4a03;
case 0x5d4a05:goto L5d4a05;
case 0x5d4a09:c.instructions+=8;goto B5d4a09;
case 0x5d4a0d:c.instructions+=7;goto B5d4a0d;
case 0x5d4a0f:c.instructions+=6;goto B5d4a0f;
case 0x5d4a10:c.instructions+=5;goto B5d4a10;
case 0x5d4a12:c.instructions+=4;goto B5d4a12;
case 0x5d4a13:c.instructions+=3;goto B5d4a13;
case 0x5d4a14:c.instructions+=2;goto B5d4a14;
case 0x5d4a15:c.instructions+=1;goto B5d4a15;
case 0x5d4a20:goto L5d4a20;
case 0x5d4a24:c.instructions+=5;goto B5d4a24;
case 0x5d4a25:c.instructions+=4;goto B5d4a25;
case 0x5d4a29:c.instructions+=3;goto B5d4a29;
case 0x5d4a2b:c.instructions+=2;goto B5d4a2b;
case 0x5d4a2d:c.instructions+=1;goto B5d4a2d;
case 0x5d4a2f:goto L5d4a2f;
case 0x5d4a32:c.instructions+=1;goto B5d4a32;
case 0x5d4a34:goto L5d4a34;
case 0x5d4a36:goto L5d4a36;
case 0x5d4a37:c.instructions+=3;goto B5d4a37;
case 0x5d4a3b:c.instructions+=2;goto B5d4a3b;
case 0x5d4a3d:c.instructions+=1;goto B5d4a3d;
case 0x5d4a3f:goto L5d4a3f;
case 0x5d4a42:c.instructions+=1;goto B5d4a42;
case 0x5d4a44:goto L5d4a44;
case 0x5d4a46:goto L5d4a46;
case 0x5d4a48:c.instructions+=9;goto B5d4a48;
case 0x5d4a4e:c.instructions+=8;goto B5d4a4e;
case 0x5d4a51:c.instructions+=7;goto B5d4a51;
case 0x5d4a58:c.instructions+=6;goto B5d4a58;
case 0x5d4a5f:c.instructions+=5;goto B5d4a5f;
case 0x5d4a62:c.instructions+=4;goto B5d4a62;
case 0x5d4a65:c.instructions+=3;goto B5d4a65;
case 0x5d4a68:c.instructions+=2;goto B5d4a68;
case 0x5d4a6b:c.instructions+=1;goto B5d4a6b;
case 0x5d4a6d:goto L5d4a6d;
case 0x5d4a73:c.instructions+=1;goto B5d4a73;
case 0x5d4a75:goto L5d4a75;
case 0x5d4a77:goto L5d4a77;
case 0x5d4a79:c.instructions+=2;goto B5d4a79;
case 0x5d4a7a:c.instructions+=1;goto B5d4a7a;
case 0x5d4a7c:goto L5d4a7c;
case 0x5d4a82:c.instructions+=1;goto B5d4a82;
case 0x5d4a84:goto L5d4a84;
case 0x5d4a86:goto L5d4a86;
case 0x5d4a8c:c.instructions+=9;goto B5d4a8c;
case 0x5d4a92:c.instructions+=8;goto B5d4a92;
case 0x5d4a9c:c.instructions+=7;goto B5d4a9c;
case 0x5d4aa6:c.instructions+=6;goto B5d4aa6;
case 0x5d4aac:c.instructions+=5;goto B5d4aac;
case 0x5d4ab2:c.instructions+=4;goto B5d4ab2;
case 0x5d4ab8:c.instructions+=3;goto B5d4ab8;
case 0x5d4abe:c.instructions+=2;goto B5d4abe;
case 0x5d4abf:c.instructions+=1;goto B5d4abf;
case 0x5d4ad0:goto L5d4ad0;
case 0x5d4ad1:c.instructions+=12;goto B5d4ad1;
case 0x5d4ad3:c.instructions+=11;goto B5d4ad3;
case 0x5d4ad6:c.instructions+=10;goto B5d4ad6;
case 0x5d4ad9:c.instructions+=9;goto B5d4ad9;
case 0x5d4ada:c.instructions+=8;goto B5d4ada;
case 0x5d4adb:c.instructions+=7;goto B5d4adb;
case 0x5d4adc:c.instructions+=6;goto B5d4adc;
case 0x5d4adf:c.instructions+=5;goto B5d4adf;
case 0x5d4ae0:c.instructions+=4;goto B5d4ae0;
case 0x5d4ae4:c.instructions+=3;goto B5d4ae4;
case 0x5d4ae7:c.instructions+=2;goto B5d4ae7;
case 0x5d4aef:c.instructions+=1;goto B5d4aef;
case 0x5d4af1:goto L5d4af1;
case 0x5d4af3:c.instructions+=2;goto B5d4af3;
case 0x5d4af6:c.instructions+=1;goto B5d4af6;
case 0x5d4af8:goto L5d4af8;
case 0x5d4afb:c.instructions+=1;goto B5d4afb;
case 0x5d4afd:goto L5d4afd;
case 0x5d4aff:c.instructions+=1;goto B5d4aff;
case 0x5d4b01:goto L5d4b01;
case 0x5d4b04:c.instructions+=12;goto B5d4b04;
case 0x5d4b07:c.instructions+=11;goto B5d4b07;
case 0x5d4b0b:c.instructions+=10;goto B5d4b0b;
case 0x5d4b0c:c.instructions+=9;goto B5d4b0c;
case 0x5d4b0f:c.instructions+=8;goto B5d4b0f;
case 0x5d4b10:c.instructions+=7;goto B5d4b10;
case 0x5d4b13:c.instructions+=6;goto B5d4b13;
case 0x5d4b16:c.instructions+=5;goto B5d4b16;
case 0x5d4b17:c.instructions+=4;goto B5d4b17;
case 0x5d4b18:c.instructions+=3;goto B5d4b18;
case 0x5d4b20:c.instructions+=2;goto B5d4b20;
case 0x5d4b28:c.instructions+=1;goto B5d4b28;
case 0x5d4b2d:goto L5d4b2d;
case 0x5d4b30:c.instructions+=8;goto B5d4b30;
case 0x5d4b34:c.instructions+=7;goto B5d4b34;
case 0x5d4b38:c.instructions+=6;goto B5d4b38;
case 0x5d4b3b:c.instructions+=5;goto B5d4b3b;
case 0x5d4b3e:c.instructions+=4;goto B5d4b3e;
case 0x5d4b41:c.instructions+=3;goto B5d4b41;
case 0x5d4b44:c.instructions+=2;goto B5d4b44;
case 0x5d4b47:c.instructions+=1;goto B5d4b47;
case 0x5d4b4a:goto L5d4b4a;
case 0x5d4b4d:c.instructions+=4;goto B5d4b4d;
case 0x5d4b4e:c.instructions+=3;goto B5d4b4e;
case 0x5d4b51:c.instructions+=2;goto B5d4b51;
case 0x5d4b53:c.instructions+=1;goto B5d4b53;
case 0x5d4b55:goto L5d4b55;
case 0x5d4b59:c.instructions+=7;goto B5d4b59;
case 0x5d4b5d:c.instructions+=6;goto B5d4b5d;
case 0x5d4b63:c.instructions+=5;goto B5d4b63;
case 0x5d4b66:c.instructions+=4;goto B5d4b66;
case 0x5d4b67:c.instructions+=3;goto B5d4b67;
case 0x5d4b6b:c.instructions+=2;goto B5d4b6b;
case 0x5d4b6f:c.instructions+=1;goto B5d4b6f;
case 0x5d4b71:goto L5d4b71;
case 0x5d4b72:c.instructions+=6;goto B5d4b72;
case 0x5d4b73:c.instructions+=5;goto B5d4b73;
case 0x5d4b74:c.instructions+=4;goto B5d4b74;
case 0x5d4b75:c.instructions+=3;goto B5d4b75;
case 0x5d4b77:c.instructions+=2;goto B5d4b77;
case 0x5d4b78:c.instructions+=1;goto B5d4b78;
case 0x5d4b80:goto L5d4b80;
case 0x5d4b81:c.instructions+=26;goto B5d4b81;
case 0x5d4b82:c.instructions+=25;goto B5d4b82;
case 0x5d4b84:c.instructions+=24;goto B5d4b84;
case 0x5d4b86:c.instructions+=23;goto B5d4b86;
case 0x5d4b88:c.instructions+=22;goto B5d4b88;
case 0x5d4b8b:c.instructions+=21;goto B5d4b8b;
case 0x5d4b90:c.instructions+=20;goto B5d4b90;
case 0x5d4b93:c.instructions+=19;goto B5d4b93;
case 0x5d4b97:c.instructions+=18;goto B5d4b97;
case 0x5d4b9b:c.instructions+=17;goto B5d4b9b;
case 0x5d4b9d:c.instructions+=16;goto B5d4b9d;
case 0x5d4ba1:c.instructions+=15;goto B5d4ba1;
case 0x5d4ba4:c.instructions+=14;goto B5d4ba4;
case 0x5d4ba6:c.instructions+=13;goto B5d4ba6;
case 0x5d4bab:c.instructions+=12;goto B5d4bab;
case 0x5d4bae:c.instructions+=11;goto B5d4bae;
case 0x5d4bb4:c.instructions+=10;goto B5d4bb4;
case 0x5d4bb8:c.instructions+=9;goto B5d4bb8;
case 0x5d4bbb:c.instructions+=8;goto B5d4bbb;
case 0x5d4bbf:c.instructions+=7;goto B5d4bbf;
case 0x5d4bc3:c.instructions+=6;goto B5d4bc3;
case 0x5d4bc4:c.instructions+=5;goto B5d4bc4;
case 0x5d4bc7:c.instructions+=4;goto B5d4bc7;
case 0x5d4bc8:c.instructions+=3;goto B5d4bc8;
case 0x5d4bce:c.instructions+=2;goto B5d4bce;
case 0x5d4bd2:c.instructions+=1;goto B5d4bd2;
case 0x5d4bd7:goto L5d4bd7;
case 0x5d4bdb:c.instructions+=11;goto B5d4bdb;
case 0x5d4bde:c.instructions+=10;goto B5d4bde;
case 0x5d4be0:c.instructions+=9;goto B5d4be0;
case 0x5d4be4:c.instructions+=8;goto B5d4be4;
case 0x5d4be8:c.instructions+=7;goto B5d4be8;
case 0x5d4bea:c.instructions+=6;goto B5d4bea;
case 0x5d4bec:c.instructions+=5;goto B5d4bec;
case 0x5d4bf0:c.instructions+=4;goto B5d4bf0;
case 0x5d4bf2:c.instructions+=3;goto B5d4bf2;
case 0x5d4bf4:c.instructions+=2;goto B5d4bf4;
case 0x5d4bf7:c.instructions+=1;goto B5d4bf7;
case 0x5d4bf9:goto L5d4bf9;
case 0x5d4bff:c.instructions+=1;goto B5d4bff;
case 0x5d4c04:goto L5d4c04;
case 0x5d4c06:c.instructions+=8;goto B5d4c06;
case 0x5d4c08:c.instructions+=7;goto B5d4c08;
case 0x5d4c0b:c.instructions+=6;goto B5d4c0b;
case 0x5d4c0e:c.instructions+=5;goto B5d4c0e;
case 0x5d4c12:c.instructions+=4;goto B5d4c12;
case 0x5d4c14:c.instructions+=3;goto B5d4c14;
case 0x5d4c15:c.instructions+=2;goto B5d4c15;
case 0x5d4c16:c.instructions+=1;goto B5d4c16;
case 0x5d4c19:goto L5d4c19;
case 0x5d4c1b:c.instructions+=4;goto B5d4c1b;
case 0x5d4c1d:c.instructions+=3;goto B5d4c1d;
case 0x5d4c1e:c.instructions+=2;goto B5d4c1e;
case 0x5d4c1f:c.instructions+=1;goto B5d4c1f;
case 0x5d4c30:goto L5d4c30;
case 0x5d4c35:c.instructions+=8;goto B5d4c35;
case 0x5d4c36:c.instructions+=7;goto B5d4c36;
case 0x5d4c37:c.instructions+=6;goto B5d4c37;
case 0x5d4c3d:c.instructions+=5;goto B5d4c3d;
case 0x5d4c40:c.instructions+=4;goto B5d4c40;
case 0x5d4c41:c.instructions+=3;goto B5d4c41;
case 0x5d4c47:c.instructions+=2;goto B5d4c47;
case 0x5d4c4c:c.instructions+=1;goto B5d4c4c;
case 0x5d4c51:goto L5d4c51;
case 0x5d4c53:goto L5d4c53;
case 0x5d4c55:c.instructions+=4;goto B5d4c55;
case 0x5d4c57:c.instructions+=3;goto B5d4c57;
case 0x5d4c5c:c.instructions+=2;goto B5d4c5c;
case 0x5d4c61:c.instructions+=1;goto B5d4c61;
case 0x5d4c63:goto L5d4c63;
case 0x5d4c64:c.instructions+=2;goto B5d4c64;
case 0x5d4c69:c.instructions+=1;goto B5d4c69;
case 0x5d4c6e:goto L5d4c6e;
case 0x5d4c71:c.instructions+=1;goto B5d4c71;
case 0x5d4c73:goto L5d4c73;
case 0x5d4c77:c.instructions+=1;goto B5d4c77;
case 0x5d4c79:goto L5d4c79;
case 0x5d4c7c:c.instructions+=4;goto B5d4c7c;
case 0x5d4c82:c.instructions+=3;goto B5d4c82;
case 0x5d4c88:c.instructions+=2;goto B5d4c88;
case 0x5d4c8a:c.instructions+=1;goto B5d4c8a;
case 0x5d4c8c:goto L5d4c8c;
case 0x5d4c92:c.instructions+=2;goto B5d4c92;
case 0x5d4c94:c.instructions+=1;goto B5d4c94;
case 0x5d4c96:goto L5d4c96;
case 0x5d4c9b:c.instructions+=3;goto B5d4c9b;
case 0x5d4c9c:c.instructions+=2;goto B5d4c9c;
case 0x5d4c9e:c.instructions+=1;goto B5d4c9e;
case 0x5d4ca0:goto L5d4ca0;
case 0x5d4ca2:goto L5d4ca2;
case 0x5d4ca7:c.instructions+=1;goto B5d4ca7;
case 0x5d4cac:goto L5d4cac;
case 0x5d4cb0:c.instructions+=10;goto B5d4cb0;
case 0x5d4cb6:c.instructions+=9;goto B5d4cb6;
case 0x5d4cb9:c.instructions+=8;goto B5d4cb9;
case 0x5d4cba:c.instructions+=7;goto B5d4cba;
case 0x5d4cbb:c.instructions+=6;goto B5d4cbb;
case 0x5d4cc1:c.instructions+=5;goto B5d4cc1;
case 0x5d4cc7:c.instructions+=4;goto B5d4cc7;
case 0x5d4cca:c.instructions+=3;goto B5d4cca;
case 0x5d4ccb:c.instructions+=2;goto B5d4ccb;
case 0x5d4cd1:c.instructions+=1;goto B5d4cd1;
case 0x5d4ce0:goto L5d4ce0;
case 0x5d4ce2:c.instructions+=33;goto B5d4ce2;
case 0x5d4ce6:c.instructions+=32;goto B5d4ce6;
case 0x5d4ce8:c.instructions+=31;goto B5d4ce8;
case 0x5d4cea:c.instructions+=30;goto B5d4cea;
case 0x5d4ced:c.instructions+=29;goto B5d4ced;
case 0x5d4cf0:c.instructions+=28;goto B5d4cf0;
case 0x5d4cf3:c.instructions+=27;goto B5d4cf3;
case 0x5d4cf6:c.instructions+=26;goto B5d4cf6;
case 0x5d4cf9:c.instructions+=25;goto B5d4cf9;
case 0x5d4cfc:c.instructions+=24;goto B5d4cfc;
case 0x5d4cff:c.instructions+=23;goto B5d4cff;
case 0x5d4d02:c.instructions+=22;goto B5d4d02;
case 0x5d4d05:c.instructions+=21;goto B5d4d05;
case 0x5d4d08:c.instructions+=20;goto B5d4d08;
case 0x5d4d0b:c.instructions+=19;goto B5d4d0b;
case 0x5d4d0e:c.instructions+=18;goto B5d4d0e;
case 0x5d4d11:c.instructions+=17;goto B5d4d11;
case 0x5d4d14:c.instructions+=16;goto B5d4d14;
case 0x5d4d17:c.instructions+=15;goto B5d4d17;
case 0x5d4d1a:c.instructions+=14;goto B5d4d1a;
case 0x5d4d1d:c.instructions+=13;goto B5d4d1d;
case 0x5d4d20:c.instructions+=12;goto B5d4d20;
case 0x5d4d23:c.instructions+=11;goto B5d4d23;
case 0x5d4d26:c.instructions+=10;goto B5d4d26;
case 0x5d4d29:c.instructions+=9;goto B5d4d29;
case 0x5d4d2c:c.instructions+=8;goto B5d4d2c;
case 0x5d4d2f:c.instructions+=7;goto B5d4d2f;
case 0x5d4d32:c.instructions+=6;goto B5d4d32;
case 0x5d4d35:c.instructions+=5;goto B5d4d35;
case 0x5d4d37:c.instructions+=4;goto B5d4d37;
case 0x5d4d3a:c.instructions+=3;goto B5d4d3a;
case 0x5d4d3d:c.instructions+=2;goto B5d4d3d;
case 0x5d4d40:c.instructions+=1;goto B5d4d40;
case 0x5d4d50:goto L5d4d50;
case 0x5d4d51:c.instructions+=25;goto B5d4d51;
case 0x5d4d55:c.instructions+=24;goto B5d4d55;
case 0x5d4d59:c.instructions+=23;goto B5d4d59;
case 0x5d4d5c:c.instructions+=22;goto B5d4d5c;
case 0x5d4d5f:c.instructions+=21;goto B5d4d5f;
case 0x5d4d63:c.instructions+=20;goto B5d4d63;
case 0x5d4d64:c.instructions+=19;goto B5d4d64;
case 0x5d4d68:c.instructions+=18;goto B5d4d68;
case 0x5d4d6a:c.instructions+=17;goto B5d4d6a;
case 0x5d4d6c:c.instructions+=16;goto B5d4d6c;
case 0x5d4d70:c.instructions+=15;goto B5d4d70;
case 0x5d4d73:c.instructions+=14;goto B5d4d73;
case 0x5d4d74:c.instructions+=13;goto B5d4d74;
case 0x5d4d77:c.instructions+=12;goto B5d4d77;
case 0x5d4d7b:c.instructions+=11;goto B5d4d7b;
case 0x5d4d7d:c.instructions+=10;goto B5d4d7d;
case 0x5d4d7f:c.instructions+=9;goto B5d4d7f;
case 0x5d4d83:c.instructions+=8;goto B5d4d83;
case 0x5d4d85:c.instructions+=7;goto B5d4d85;
case 0x5d4d87:c.instructions+=6;goto B5d4d87;
case 0x5d4d8b:c.instructions+=5;goto B5d4d8b;
case 0x5d4d8d:c.instructions+=4;goto B5d4d8d;
case 0x5d4d93:c.instructions+=3;goto B5d4d93;
case 0x5d4d95:c.instructions+=2;goto B5d4d95;
case 0x5d4d98:c.instructions+=1;goto B5d4d98;
case 0x5d4d9a:goto L5d4d9a;
case 0x5d4d9c:c.instructions+=1;goto B5d4d9c;
case 0x5d4d9e:goto L5d4d9e;
case 0x5d4da0:goto L5d4da0;
case 0x5d4da2:c.instructions+=2;goto B5d4da2;
case 0x5d4da3:c.instructions+=1;goto B5d4da3;
case 0x5d4da4:goto L5d4da4;
case 0x5d4da7:c.instructions+=21;goto B5d4da7;
case 0x5d4daa:c.instructions+=20;goto B5d4daa;
case 0x5d4dae:c.instructions+=19;goto B5d4dae;
case 0x5d4db0:c.instructions+=18;goto B5d4db0;
case 0x5d4db2:c.instructions+=17;goto B5d4db2;
case 0x5d4db6:c.instructions+=16;goto B5d4db6;
case 0x5d4dbc:c.instructions+=15;goto B5d4dbc;
case 0x5d4dbe:c.instructions+=14;goto B5d4dbe;
case 0x5d4dc2:c.instructions+=13;goto B5d4dc2;
case 0x5d4dc4:c.instructions+=12;goto B5d4dc4;
case 0x5d4dc8:c.instructions+=11;goto B5d4dc8;
case 0x5d4dca:c.instructions+=10;goto B5d4dca;
case 0x5d4dce:c.instructions+=9;goto B5d4dce;
case 0x5d4dd0:c.instructions+=8;goto B5d4dd0;
case 0x5d4dd2:c.instructions+=7;goto B5d4dd2;
case 0x5d4dd6:c.instructions+=6;goto B5d4dd6;
case 0x5d4dd8:c.instructions+=5;goto B5d4dd8;
case 0x5d4dda:c.instructions+=4;goto B5d4dda;
case 0x5d4de0:c.instructions+=3;goto B5d4de0;
case 0x5d4de2:c.instructions+=2;goto B5d4de2;
case 0x5d4de5:c.instructions+=1;goto B5d4de5;
case 0x5d4de7:goto L5d4de7;
case 0x5d4ded:c.instructions+=3;goto B5d4ded;
case 0x5d4def:c.instructions+=2;goto B5d4def;
case 0x5d4df2:c.instructions+=1;goto B5d4df2;
case 0x5d4df4:goto L5d4df4;
case 0x5d4df8:c.instructions+=9;goto B5d4df8;
case 0x5d4dfc:c.instructions+=8;goto B5d4dfc;
case 0x5d4e00:c.instructions+=7;goto B5d4e00;
case 0x5d4e04:c.instructions+=6;goto B5d4e04;
case 0x5d4e06:c.instructions+=5;goto B5d4e06;
case 0x5d4e0a:c.instructions+=4;goto B5d4e0a;
case 0x5d4e10:c.instructions+=3;goto B5d4e10;
case 0x5d4e12:c.instructions+=2;goto B5d4e12;
case 0x5d4e15:c.instructions+=1;goto B5d4e15;
case 0x5d4e17:goto L5d4e17;
case 0x5d4e1d:c.instructions+=3;goto B5d4e1d;
case 0x5d4e1f:c.instructions+=2;goto B5d4e1f;
case 0x5d4e22:c.instructions+=1;goto B5d4e22;
case 0x5d4e28:goto L5d4e28;
case 0x5d4e2a:c.instructions+=2;goto B5d4e2a;
case 0x5d4e2b:c.instructions+=1;goto B5d4e2b;
case 0x5d4e30:goto L5d4e30;
case 0x5d4e33:c.instructions+=37;goto B5d4e33;
case 0x5d4e37:c.instructions+=36;goto B5d4e37;
case 0x5d4e3b:c.instructions+=35;goto B5d4e3b;
case 0x5d4e3d:c.instructions+=34;goto B5d4e3d;
case 0x5d4e3f:c.instructions+=33;goto B5d4e3f;
case 0x5d4e43:c.instructions+=32;goto B5d4e43;
case 0x5d4e47:c.instructions+=31;goto B5d4e47;
case 0x5d4e4a:c.instructions+=30;goto B5d4e4a;
case 0x5d4e4d:c.instructions+=29;goto B5d4e4d;
case 0x5d4e51:c.instructions+=28;goto B5d4e51;
case 0x5d4e53:c.instructions+=27;goto B5d4e53;
case 0x5d4e55:c.instructions+=26;goto B5d4e55;
case 0x5d4e58:c.instructions+=25;goto B5d4e58;
case 0x5d4e5b:c.instructions+=24;goto B5d4e5b;
case 0x5d4e5d:c.instructions+=23;goto B5d4e5d;
case 0x5d4e5f:c.instructions+=22;goto B5d4e5f;
case 0x5d4e63:c.instructions+=21;goto B5d4e63;
case 0x5d4e66:c.instructions+=20;goto B5d4e66;
case 0x5d4e69:c.instructions+=19;goto B5d4e69;
case 0x5d4e6d:c.instructions+=18;goto B5d4e6d;
case 0x5d4e71:c.instructions+=17;goto B5d4e71;
case 0x5d4e73:c.instructions+=16;goto B5d4e73;
case 0x5d4e77:c.instructions+=15;goto B5d4e77;
case 0x5d4e79:c.instructions+=14;goto B5d4e79;
case 0x5d4e7b:c.instructions+=13;goto B5d4e7b;
case 0x5d4e7f:c.instructions+=12;goto B5d4e7f;
case 0x5d4e83:c.instructions+=11;goto B5d4e83;
case 0x5d4e87:c.instructions+=10;goto B5d4e87;
case 0x5d4e8b:c.instructions+=9;goto B5d4e8b;
case 0x5d4e8f:c.instructions+=8;goto B5d4e8f;
case 0x5d4e91:c.instructions+=7;goto B5d4e91;
case 0x5d4e93:c.instructions+=6;goto B5d4e93;
case 0x5d4e97:c.instructions+=5;goto B5d4e97;
case 0x5d4e9b:c.instructions+=4;goto B5d4e9b;
case 0x5d4ea1:c.instructions+=3;goto B5d4ea1;
case 0x5d4ea3:c.instructions+=2;goto B5d4ea3;
case 0x5d4ea6:c.instructions+=1;goto B5d4ea6;
case 0x5d4ea8:goto L5d4ea8;
case 0x5d4eac:c.instructions+=2;goto B5d4eac;
case 0x5d4eae:c.instructions+=1;goto B5d4eae;
case 0x5d4eb0:goto L5d4eb0;
case 0x5d4eb6:goto L5d4eb6;
case 0x5d4eb8:c.instructions+=9;goto B5d4eb8;
case 0x5d4eba:c.instructions+=8;goto B5d4eba;
case 0x5d4ebc:c.instructions+=7;goto B5d4ebc;
case 0x5d4ebe:c.instructions+=6;goto B5d4ebe;
case 0x5d4ec0:c.instructions+=5;goto B5d4ec0;
case 0x5d4ec2:c.instructions+=4;goto B5d4ec2;
case 0x5d4ec4:c.instructions+=3;goto B5d4ec4;
case 0x5d4ec6:c.instructions+=2;goto B5d4ec6;
case 0x5d4ec9:c.instructions+=1;goto B5d4ec9;
case 0x5d4eca:goto L5d4eca;
case 0x5d4ece:c.instructions+=4;goto B5d4ece;
case 0x5d4ed4:c.instructions+=3;goto B5d4ed4;
case 0x5d4ed6:c.instructions+=2;goto B5d4ed6;
case 0x5d4ed9:c.instructions+=1;goto B5d4ed9;
case 0x5d4edb:goto L5d4edb;
case 0x5d4edf:c.instructions+=4;goto B5d4edf;
case 0x5d4ee1:c.instructions+=3;goto B5d4ee1;
case 0x5d4ee3:c.instructions+=2;goto B5d4ee3;
case 0x5d4ee5:c.instructions+=1;goto B5d4ee5;
case 0x5d4ee7:goto L5d4ee7;
case 0x5d4eed:goto L5d4eed;
case 0x5d4ef1:c.instructions+=7;goto B5d4ef1;
case 0x5d4ef5:c.instructions+=6;goto B5d4ef5;
case 0x5d4ef9:c.instructions+=5;goto B5d4ef9;
case 0x5d4efd:c.instructions+=4;goto B5d4efd;
case 0x5d4eff:c.instructions+=3;goto B5d4eff;
case 0x5d4f01:c.instructions+=2;goto B5d4f01;
case 0x5d4f04:c.instructions+=1;goto B5d4f04;
case 0x5d4f05:goto L5d4f05;
case 0x5d4f09:c.instructions+=2;goto B5d4f09;
case 0x5d4f0b:c.instructions+=1;goto B5d4f0b;
case 0x5d4f0d:goto L5d4f0d;
case 0x5d4f11:c.instructions+=4;goto B5d4f11;
case 0x5d4f15:c.instructions+=3;goto B5d4f15;
case 0x5d4f17:c.instructions+=2;goto B5d4f17;
case 0x5d4f1a:c.instructions+=1;goto B5d4f1a;
case 0x5d4f1c:goto L5d4f1c;
case 0x5d4f21:c.instructions+=1;goto B5d4f21;
case 0x5d4f23:goto L5d4f23;
case 0x5d4f25:goto L5d4f25;
case 0x5d4f27:goto L5d4f27;
case 0x5d4f2b:c.instructions+=18;goto B5d4f2b;
case 0x5d4f2d:c.instructions+=17;goto B5d4f2d;
case 0x5d4f31:c.instructions+=16;goto B5d4f31;
case 0x5d4f33:c.instructions+=15;goto B5d4f33;
case 0x5d4f35:c.instructions+=14;goto B5d4f35;
case 0x5d4f37:c.instructions+=13;goto B5d4f37;
case 0x5d4f39:c.instructions+=12;goto B5d4f39;
case 0x5d4f3b:c.instructions+=11;goto B5d4f3b;
case 0x5d4f3f:c.instructions+=10;goto B5d4f3f;
case 0x5d4f43:c.instructions+=9;goto B5d4f43;
case 0x5d4f47:c.instructions+=8;goto B5d4f47;
case 0x5d4f4b:c.instructions+=7;goto B5d4f4b;
case 0x5d4f4d:c.instructions+=6;goto B5d4f4d;
case 0x5d4f4f:c.instructions+=5;goto B5d4f4f;
case 0x5d4f51:c.instructions+=4;goto B5d4f51;
case 0x5d4f53:c.instructions+=3;goto B5d4f53;
case 0x5d4f55:c.instructions+=2;goto B5d4f55;
case 0x5d4f58:c.instructions+=1;goto B5d4f58;
case 0x5d4f60:goto L5d4f60;
case 0x5d4f66:c.instructions+=2;goto B5d4f66;
case 0x5d4f68:c.instructions+=1;goto B5d4f68;
case 0x5d4f6a:goto L5d4f6a;
case 0x5d4f70:c.instructions+=2;goto B5d4f70;
case 0x5d4f72:c.instructions+=1;goto B5d4f72;
case 0x5d4f74:goto L5d4f74;
case 0x5d4f76:c.instructions+=1;goto B5d4f76;
case 0x5d4f79:goto L5d4f79;
case 0x5d4f7b:c.instructions+=3;goto B5d4f7b;
case 0x5d4f7c:c.instructions+=2;goto B5d4f7c;
case 0x5d4f7d:c.instructions+=1;goto B5d4f7d;
case 0x5d4f7f:goto L5d4f7f;
case 0x5d4f82:c.instructions+=3;goto B5d4f82;
case 0x5d4f84:c.instructions+=2;goto B5d4f84;
case 0x5d4f86:c.instructions+=1;goto B5d4f86;
case 0x5d4f88:goto L5d4f88;
case 0x5d4f8c:c.instructions+=1;goto B5d4f8c;
case 0x5d4f92:goto L5d4f92;
case 0x5d4f95:c.instructions+=2;goto B5d4f95;
case 0x5d4f97:c.instructions+=1;goto B5d4f97;
case 0x5d4f99:goto L5d4f99;
case 0x5d4f9a:c.instructions+=3;goto B5d4f9a;
case 0x5d4f9d:c.instructions+=2;goto B5d4f9d;
case 0x5d4f9f:c.instructions+=1;goto B5d4f9f;
case 0x5d4fa1:goto L5d4fa1;
case 0x5d4fa2:c.instructions+=3;goto B5d4fa2;
case 0x5d4fa4:c.instructions+=2;goto B5d4fa4;
case 0x5d4fa5:c.instructions+=1;goto B5d4fa5;
case 0x5d4fa8:goto L5d4fa8;
case 0x5d4fae:c.instructions+=2;goto B5d4fae;
case 0x5d4fb0:c.instructions+=1;goto B5d4fb0;
case 0x5d4fb2:goto L5d4fb2;
case 0x5d4fb5:c.instructions+=3;goto B5d4fb5;
case 0x5d4fb7:c.instructions+=2;goto B5d4fb7;
case 0x5d4fb9:c.instructions+=1;goto B5d4fb9;
case 0x5d4fbb:goto L5d4fbb;
case 0x5d4fbf:c.instructions+=1;goto B5d4fbf;
case 0x5d4fc5:goto L5d4fc5;
case 0x5d4fc8:c.instructions+=2;goto B5d4fc8;
case 0x5d4fca:c.instructions+=1;goto B5d4fca;
case 0x5d4fcc:goto L5d4fcc;
case 0x5d4fcd:c.instructions+=3;goto B5d4fcd;
case 0x5d4fd0:c.instructions+=2;goto B5d4fd0;
case 0x5d4fd2:c.instructions+=1;goto B5d4fd2;
case 0x5d4fd4:goto L5d4fd4;
case 0x5d4fd5:c.instructions+=3;goto B5d4fd5;
case 0x5d4fd7:c.instructions+=2;goto B5d4fd7;
case 0x5d4fd8:c.instructions+=1;goto B5d4fd8;
case 0x5d4fe0:goto L5d4fe0;
case 0x5d4fe6:c.instructions+=3;goto B5d4fe6;
case 0x5d4fe8:c.instructions+=2;goto B5d4fe8;
case 0x5d4fea:c.instructions+=1;goto B5d4fea;
case 0x5d4fec:goto L5d4fec;
case 0x5d4fee:c.instructions+=5;goto B5d4fee;
case 0x5d4fef:c.instructions+=4;goto B5d4fef;
case 0x5d4ff0:c.instructions+=3;goto B5d4ff0;
case 0x5d4ff6:c.instructions+=2;goto B5d4ff6;
case 0x5d4ffb:c.instructions+=1;goto B5d4ffb;
default:missing_instruction(c.pc);}
B5d4002:L5d4002:{c.instructions+=1;NFSU2_TR(0x5d4002);
if(r1(R+518)){{goto L5d4024;}}
}
B5d4004:L5d4004:{c.instructions+=3;NFSU2_TR(0x5d4004);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5d4007:{NFSU2_TR(0x5d4007);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d4009:{NFSU2_TR(0x5d4009);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d4024;}}
}
B5d400b:L5d400b:{c.instructions+=3;NFSU2_TR(0x5d400b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d4012:{NFSU2_TR(0x5d4012);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4014:{NFSU2_TR(0x5d4014);
if(r1(R+518)){{goto L5d4024;}}
}
B5d4016:L5d4016:{c.instructions+=4;NFSU2_TR(0x5d4016);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5d4019:{NFSU2_TR(0x5d4019);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d401c:{NFSU2_TR(0x5d401c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d4023:{NFSU2_TR(0x5d4023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4024:L5d4024:{c.instructions+=2;NFSU2_TR(0x5d4024);
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
B5d4026:{NFSU2_TR(0x5d4026);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4030:L5d4030:{c.instructions+=5;NFSU2_TR(0x5d4030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4031:{NFSU2_TR(0x5d4031);
__builtin_memmove((R+0),gp(0x88f2b8),4);
}
B5d4036:{NFSU2_TR(0x5d4036);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d403a:{NFSU2_TR(0x5d403a);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d403f:{NFSU2_TR(0x5d403f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d405a;}}
}
B5d4041:L5d4041:{c.instructions+=5;NFSU2_TR(0x5d4041);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4045:{NFSU2_TR(0x5d4045);
{u32 ea_=u32(u32(7906692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d404b:{NFSU2_TR(0x5d404b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d404d:{NFSU2_TR(0x5d404d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4050:{NFSU2_TR(0x5d4050);
if(r1(R+518)){{goto L5d405a;}}
}
B5d4052:L5d4052:{c.instructions+=1;NFSU2_TR(0x5d4052);
u8 U[4];
w4(U+0,u32(0x43160000ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5d405a:L5d405a:{c.instructions+=17;NFSU2_TR(0x5d405a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d405e:{NFSU2_TR(0x5d405e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4061:{NFSU2_TR(0x5d4061);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4064:{NFSU2_TR(0x5d4064);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4067:{NFSU2_TR(0x5d4067);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d406a:{NFSU2_TR(0x5d406a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d406c:{NFSU2_TR(0x5d406c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d406e:{NFSU2_TR(0x5d406e);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d4070:{NFSU2_TR(0x5d4070);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d4072:{NFSU2_TR(0x5d4072);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4074:{NFSU2_TR(0x5d4074);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d4076:{NFSU2_TR(0x5d4076);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d4078:{NFSU2_TR(0x5d4078);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d407a:{NFSU2_TR(0x5d407a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d407e:{NFSU2_TR(0x5d407e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4080:{NFSU2_TR(0x5d4080);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4083:{NFSU2_TR(0x5d4083);
if(r1(R+514)){{goto L5d4089;}}
}
B5d4085:L5d4085:{c.instructions+=2;NFSU2_TR(0x5d4085);
w1(R+8,u8(0x1ull));
}
B5d4087:{NFSU2_TR(0x5d4087);
{goto L5d408b;}
}
B5d4089:L5d4089:{c.instructions+=1;NFSU2_TR(0x5d4089);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5d408b:L5d408b:{c.instructions+=3;NFSU2_TR(0x5d408b);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5d4090:{NFSU2_TR(0x5d4090);
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
B5d4092:{NFSU2_TR(0x5d4092);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d40e9;}}
}
B5d4094:L5d4094:{c.instructions+=11;NFSU2_TR(0x5d4094);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4097:{NFSU2_TR(0x5d4097);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d409d:{NFSU2_TR(0x5d409d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d40a1:{NFSU2_TR(0x5d40a1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d40a5:{NFSU2_TR(0x5d40a5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d40a9:{NFSU2_TR(0x5d40a9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d40ab:{NFSU2_TR(0x5d40ab);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d40ad:{NFSU2_TR(0x5d40ad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d40af:{NFSU2_TR(0x5d40af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d40b1:{NFSU2_TR(0x5d40b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d40b4:{NFSU2_TR(0x5d40b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d40ba;}}
}
B5d40b6:L5d40b6:{c.instructions+=2;NFSU2_TR(0x5d40b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d40b8:{NFSU2_TR(0x5d40b8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d40ba:L5d40ba:{c.instructions+=5;NFSU2_TR(0x5d40ba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d40be:{NFSU2_TR(0x5d40be);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d40c0:{NFSU2_TR(0x5d40c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d40c2:{NFSU2_TR(0x5d40c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d40c5:{NFSU2_TR(0x5d40c5);
if(r1(R+514)){{goto L5d40cd;}}
}
B5d40c7:L5d40c7:{c.instructions+=2;NFSU2_TR(0x5d40c7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d40c9:{NFSU2_TR(0x5d40c9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d40cd:L5d40cd:{c.instructions+=6;NFSU2_TR(0x5d40cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d40cf:{NFSU2_TR(0x5d40cf);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d40d1:{NFSU2_TR(0x5d40d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d40d3:{NFSU2_TR(0x5d40d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d40d5:{NFSU2_TR(0x5d40d5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d40d8:{NFSU2_TR(0x5d40d8);
if(r1(R+514)){{goto L5d40e5;}}
}
B5d40da:L5d40da:{c.instructions+=5;NFSU2_TR(0x5d40da);
w4(R+0,u32(0x1ull));
}
B5d40df:{NFSU2_TR(0x5d40df);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d40e1:{NFSU2_TR(0x5d40e1);
__builtin_memmove((R+0),(R+8),1);
}
B5d40e3:{NFSU2_TR(0x5d40e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d40e4:{NFSU2_TR(0x5d40e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d40e5:L5d40e5:{c.instructions+=2;NFSU2_TR(0x5d40e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d40e7:{NFSU2_TR(0x5d40e7);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d40e9:L5d40e9:{c.instructions+=3;NFSU2_TR(0x5d40e9);
__builtin_memmove((R+0),(R+8),1);
}
B5d40eb:{NFSU2_TR(0x5d40eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d40ec:{NFSU2_TR(0x5d40ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d40f0:L5d40f0:{c.instructions+=5;NFSU2_TR(0x5d40f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5d40f3:{NFSU2_TR(0x5d40f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d40f4:{NFSU2_TR(0x5d40f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d40f8:{NFSU2_TR(0x5d40f8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d40fb:{NFSU2_TR(0x5d40fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d429f;}}
}
B5d4101:L5d4101:{c.instructions+=7;NFSU2_TR(0x5d4101);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4102:{NFSU2_TR(0x5d4102);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d4106:{NFSU2_TR(0x5d4106);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4107:{NFSU2_TR(0x5d4107);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4108:{NFSU2_TR(0x5d4108);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d410a:{NFSU2_TR(0x5d410a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d410b:{NFSU2_TR(0x5d410b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4110ull));
TAIL_STATIC(0x440820u,440);
}
B5d4110:L5d4110:{c.instructions+=23;NFSU2_TR(0x5d4110);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d4114:{NFSU2_TR(0x5d4114);
__builtin_memmove((R+28),(R+0),4);
}
B5d4116:{NFSU2_TR(0x5d4116);
__builtin_memmove((R+0),(R+24),4);
}
B5d4118:{NFSU2_TR(0x5d4118);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d4119:{NFSU2_TR(0x5d4119);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5d411b:{NFSU2_TR(0x5d411b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5d411d:{NFSU2_TR(0x5d411d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d4120:{NFSU2_TR(0x5d4120);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d4121:{NFSU2_TR(0x5d4121);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d4124:{NFSU2_TR(0x5d4124);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4128:{NFSU2_TR(0x5d4128);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5d412b:{NFSU2_TR(0x5d412b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d412e:{NFSU2_TR(0x5d412e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5d4131:{NFSU2_TR(0x5d4131);
__builtin_memmove((R+4),(R+12),4);
}
B5d4133:{NFSU2_TR(0x5d4133);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5d4135:{NFSU2_TR(0x5d4135);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B5d4137:{NFSU2_TR(0x5d4137);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5d4139:{NFSU2_TR(0x5d4139);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d413d:{NFSU2_TR(0x5d413d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4141:{NFSU2_TR(0x5d4141);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4145:{NFSU2_TR(0x5d4145);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4149:{NFSU2_TR(0x5d4149);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d414d:{NFSU2_TR(0x5d414d);
__builtin_memmove((R+4),(R+4),4);
}
B5d4150:L5d4150:{c.instructions+=2;NFSU2_TR(0x5d4150);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d4153:{NFSU2_TR(0x5d4153);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d4172;}}
}
B5d4155:L5d4155:{c.instructions+=5;NFSU2_TR(0x5d4155);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5d4157:{NFSU2_TR(0x5d4157);
__builtin_memmove((R+4),(R+12),4);
}
B5d4159:{NFSU2_TR(0x5d4159);
__builtin_memmove((R+20),(R+4),4);
}
B5d415b:{NFSU2_TR(0x5d415b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d415e:{NFSU2_TR(0x5d415e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4162:L5d4162:{c.instructions+=1;NFSU2_TR(0x5d4162);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d4164;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4162u);}goto L5d4162;}
}
B5d4164:L5d4164:{c.instructions+=4;NFSU2_TR(0x5d4164);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5d4165:{NFSU2_TR(0x5d4165);
__builtin_memmove((R+4),(R+20),4);
}
B5d4167:{NFSU2_TR(0x5d4167);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d416a:{NFSU2_TR(0x5d416a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d416e:L5d416e:{c.instructions+=1;NFSU2_TR(0x5d416e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d4170;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d416eu);}goto L5d416e;}
}
B5d4170:L5d4170:{c.instructions+=1;NFSU2_TR(0x5d4170);
{goto L5d41b4;}
}
B5d4172:L5d4172:{c.instructions+=4;NFSU2_TR(0x5d4172);
__builtin_memmove((R+4),(R+12),4);
}
B5d4174:{NFSU2_TR(0x5d4174);
__builtin_memmove((R+20),(R+4),4);
}
B5d4176:{NFSU2_TR(0x5d4176);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d4179:{NFSU2_TR(0x5d4179);
__builtin_memmove((R+24),(R+8),4);
}
B5d417b:L5d417b:{c.instructions+=1;NFSU2_TR(0x5d417b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d417d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d417bu);}goto L5d417b;}
}
B5d417d:L5d417d:{c.instructions+=2;NFSU2_TR(0x5d417d);
__builtin_memmove((R+4),(R+20),4);
}
B5d417f:{NFSU2_TR(0x5d417f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d4182:L5d4182:{c.instructions+=1;NFSU2_TR(0x5d4182);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d4184;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4182u);}goto L5d4182;}
}
B5d4184:L5d4184:{c.instructions+=4;NFSU2_TR(0x5d4184);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4188:{NFSU2_TR(0x5d4188);
__builtin_memmove((R+4),(R+12),4);
}
B5d418a:{NFSU2_TR(0x5d418a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d418d:{NFSU2_TR(0x5d418d);
__builtin_memmove((R+28),(R+8),4);
}
B5d418f:L5d418f:{c.instructions+=1;NFSU2_TR(0x5d418f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d4191;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d418fu);}goto L5d418f;}
}
B5d4191:L5d4191:{c.instructions+=2;NFSU2_TR(0x5d4191);
__builtin_memmove((R+4),(R+20),4);
}
B5d4193:{NFSU2_TR(0x5d4193);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d4196:L5d4196:{c.instructions+=1;NFSU2_TR(0x5d4196);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d4198;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4196u);}goto L5d4196;}
}
B5d4198:L5d4198:{c.instructions+=8;NFSU2_TR(0x5d4198);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d419c:{NFSU2_TR(0x5d419c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d41a0:{NFSU2_TR(0x5d41a0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5d41a1:{NFSU2_TR(0x5d41a1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5d41a3:{NFSU2_TR(0x5d41a3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d41a6:{NFSU2_TR(0x5d41a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d41aa:{NFSU2_TR(0x5d41aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d41ae:{NFSU2_TR(0x5d41ae);
if(r1(R+518)){{goto L5d4279;}}
}
B5d41b4:L5d41b4:{c.instructions+=5;NFSU2_TR(0x5d41b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d41b8:{NFSU2_TR(0x5d41b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5d41bb:{NFSU2_TR(0x5d41bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d41bd:{NFSU2_TR(0x5d41bd);
__builtin_memmove((R+28),(R+0),4);
}
B5d41bf:{NFSU2_TR(0x5d41bf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5d424a;}}
}
B5d41c5:L5d41c5:{c.instructions+=3;NFSU2_TR(0x5d41c5);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5d41c9:{NFSU2_TR(0x5d41c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d41cd:{NFSU2_TR(0x5d41cd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d41f5;}}
}
B5d41cf:L5d41cf:{c.instructions+=9;NFSU2_TR(0x5d41cf);
__builtin_memmove((R+0),(R+20),4);
}
B5d41d1:{NFSU2_TR(0x5d41d1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d41d4:{NFSU2_TR(0x5d41d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d41d7:{NFSU2_TR(0x5d41d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d41da:{NFSU2_TR(0x5d41da);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5d41dc:{NFSU2_TR(0x5d41dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d41dd:{NFSU2_TR(0x5d41dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d41df:{NFSU2_TR(0x5d41df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d41e0:{NFSU2_TR(0x5d41e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d41e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d41e4:L5d41e4:{c.instructions+=5;NFSU2_TR(0x5d41e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d41e7:{NFSU2_TR(0x5d41e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d41ed:{NFSU2_TR(0x5d41ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d41ef:{NFSU2_TR(0x5d41ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d41f2:{NFSU2_TR(0x5d41f2);
if(r1(R+514)){{goto L5d41f5;}}
}
B5d41f4:L5d41f4:{c.instructions+=1;NFSU2_TR(0x5d41f4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d41f5:L5d41f5:{c.instructions+=7;NFSU2_TR(0x5d41f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d41f9:{NFSU2_TR(0x5d41f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d41fc:{NFSU2_TR(0x5d41fc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5d41ff:{NFSU2_TR(0x5d41ff);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4201:{NFSU2_TR(0x5d4201);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4202:{NFSU2_TR(0x5d4202);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4203:{NFSU2_TR(0x5d4203);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4207ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5d4207:L5d4207:{c.instructions+=5;NFSU2_TR(0x5d4207);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d420a:{NFSU2_TR(0x5d420a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4210:{NFSU2_TR(0x5d4210);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4212:{NFSU2_TR(0x5d4212);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4215:{NFSU2_TR(0x5d4215);
if(r1(R+514)){{goto L5d4237;}}
}
B5d4217:L5d4217:{c.instructions+=7;NFSU2_TR(0x5d4217);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d421b:{NFSU2_TR(0x5d421b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5d421c:{NFSU2_TR(0x5d421c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5d421f:{NFSU2_TR(0x5d421f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B5d4221:{NFSU2_TR(0x5d4221);
__builtin_memmove((R+4),(R+12),4);
}
B5d4223:{NFSU2_TR(0x5d4223);
__builtin_memmove((R+8),(R+4),4);
}
B5d4225:{NFSU2_TR(0x5d4225);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d4228:L5d4228:{c.instructions+=1;NFSU2_TR(0x5d4228);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d422a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4228u);}goto L5d4228;}
}
B5d422a:L5d422a:{c.instructions+=2;NFSU2_TR(0x5d422a);
__builtin_memmove((R+4),(R+8),4);
}
B5d422c:{NFSU2_TR(0x5d422c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d422f:L5d422f:{c.instructions+=1;NFSU2_TR(0x5d422f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d4231;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d422fu);}goto L5d422f;}
}
B5d4231:L5d4231:{c.instructions+=3;NFSU2_TR(0x5d4231);
__builtin_memmove((R+28),(R+20),4);
}
B5d4233:{NFSU2_TR(0x5d4233);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+20))));
}
B5d4235:{NFSU2_TR(0x5d4235);
{goto L5d423c;}
}
B5d4237:L5d4237:{c.instructions+=2;NFSU2_TR(0x5d4237);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d423b:{NFSU2_TR(0x5d423b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d423c:L5d423c:{c.instructions+=2;NFSU2_TR(0x5d423c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d4240:{NFSU2_TR(0x5d4240);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d41c5u);}goto L5d41c5;}}
}
B5d4242:L5d4242:{c.instructions+=2;NFSU2_TR(0x5d4242);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4246:{NFSU2_TR(0x5d4246);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d424a:L5d424a:{c.instructions+=8;NFSU2_TR(0x5d424a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d424e:{NFSU2_TR(0x5d424e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4252:{NFSU2_TR(0x5d4252);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5d4253:{NFSU2_TR(0x5d4253);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5d4256:{NFSU2_TR(0x5d4256);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5d4258:{NFSU2_TR(0x5d4258);
__builtin_memmove((R+4),(R+12),4);
}
B5d425a:{NFSU2_TR(0x5d425a);
__builtin_memmove((R+20),(R+4),4);
}
B5d425c:{NFSU2_TR(0x5d425c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d425f:L5d425f:{c.instructions+=1;NFSU2_TR(0x5d425f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d4261;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d425fu);}goto L5d425f;}
}
B5d4261:L5d4261:{c.instructions+=2;NFSU2_TR(0x5d4261);
__builtin_memmove((R+4),(R+20),4);
}
B5d4263:{NFSU2_TR(0x5d4263);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d4266:L5d4266:{c.instructions+=1;NFSU2_TR(0x5d4266);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d4268;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4266u);}goto L5d4266;}
}
B5d4268:L5d4268:{c.instructions+=4;NFSU2_TR(0x5d4268);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d426c:{NFSU2_TR(0x5d426c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4270:{NFSU2_TR(0x5d4270);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4274:{NFSU2_TR(0x5d4274);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4150u);}goto L5d4150;}
}
B5d4279:L5d4279:{c.instructions+=6;NFSU2_TR(0x5d4279);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d427d:{NFSU2_TR(0x5d427d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d4281:{NFSU2_TR(0x5d4281);
__builtin_memmove((R+4),(R+12),4);
}
B5d4283:{NFSU2_TR(0x5d4283);
__builtin_memmove((R+8),(R+4),4);
}
B5d4285:{NFSU2_TR(0x5d4285);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d4288:{NFSU2_TR(0x5d4288);
__builtin_memmove((R+24),(R+0),4);
}
B5d428a:L5d428a:{c.instructions+=1;NFSU2_TR(0x5d428a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d428c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d428au);}goto L5d428a;}
}
B5d428c:L5d428c:{c.instructions+=3;NFSU2_TR(0x5d428c);
__builtin_memmove((R+4),(R+8),4);
}
B5d428e:{NFSU2_TR(0x5d428e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5d4291:{NFSU2_TR(0x5d4291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4292:L5d4292:{c.instructions+=1;NFSU2_TR(0x5d4292);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5d4294;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4292u);}goto L5d4292;}
}
B5d4294:L5d4294:{c.instructions+=1;NFSU2_TR(0x5d4294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4299ull));
TAIL_STATIC(0x440540u,440);
}
B5d4299:L5d4299:{c.instructions+=4;NFSU2_TR(0x5d4299);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d429c:{NFSU2_TR(0x5d429c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d429d:{NFSU2_TR(0x5d429d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d429e:{NFSU2_TR(0x5d429e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d429f:L5d429f:{c.instructions+=3;NFSU2_TR(0x5d429f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d42a0:{NFSU2_TR(0x5d42a0);
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
B5d42a3:{NFSU2_TR(0x5d42a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d42b0:L5d42b0:{c.instructions+=7;NFSU2_TR(0x5d42b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d42b4:{NFSU2_TR(0x5d42b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d42b6:{NFSU2_TR(0x5d42b6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d42b8:{NFSU2_TR(0x5d42b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d42bc:{NFSU2_TR(0x5d42bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d42be:{NFSU2_TR(0x5d42be);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d42c0:{NFSU2_TR(0x5d42c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d42d0:L5d42d0:{c.instructions+=8;NFSU2_TR(0x5d42d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d42d1:{NFSU2_TR(0x5d42d1);
__builtin_memmove((R+12),gp(0x883db0),4);
}
B5d42d7:{NFSU2_TR(0x5d42d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d42d8:{NFSU2_TR(0x5d42d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d42d9:{NFSU2_TR(0x5d42d9);
__builtin_memmove((R+28),gp(0x883db4),4);
}
B5d42df:{NFSU2_TR(0x5d42df);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d42e1:{NFSU2_TR(0x5d42e1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d42e4:{NFSU2_TR(0x5d42e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d4335;}}
}
B5d42e6:L5d42e6:{c.instructions+=2;NFSU2_TR(0x5d42e6);
w4(R+24,u32(0x3ull));
}
B5d42eb:{NFSU2_TR(0x5d42eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d42ee:L5d42ee:{c.instructions+=5;NFSU2_TR(0x5d42ee);
{u32 ea_=u32(r4(R+8)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d42f1:{NFSU2_TR(0x5d42f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d42f5:{NFSU2_TR(0x5d42f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d42f7:{NFSU2_TR(0x5d42f7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d42fa:{NFSU2_TR(0x5d42fa);
if(r1(R+514)){{goto L5d4366;}}
}
B5d42fc:L5d42fc:{c.instructions+=5;NFSU2_TR(0x5d42fc);
{u32 ea_=u32(r4(R+8)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d42ff:{NFSU2_TR(0x5d42ff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4303:{NFSU2_TR(0x5d4303);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4305:{NFSU2_TR(0x5d4305);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4308:{NFSU2_TR(0x5d4308);
if(r1(R+514)){{goto L5d435b;}}
}
B5d430a:L5d430a:{c.instructions+=5;NFSU2_TR(0x5d430a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d430c:{NFSU2_TR(0x5d430c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4310:{NFSU2_TR(0x5d4310);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4312:{NFSU2_TR(0x5d4312);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4315:{NFSU2_TR(0x5d4315);
if(r1(R+514)){{goto L5d435e;}}
}
B5d4317:L5d4317:{c.instructions+=5;NFSU2_TR(0x5d4317);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d431a:{NFSU2_TR(0x5d431a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d431e:{NFSU2_TR(0x5d431e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4320:{NFSU2_TR(0x5d4320);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4323:{NFSU2_TR(0x5d4323);
if(r1(R+514)){{goto L5d4363;}}
}
B5d4325:L5d4325:{c.instructions+=5;NFSU2_TR(0x5d4325);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d4328:{NFSU2_TR(0x5d4328);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5d432b:{NFSU2_TR(0x5d432b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x80ull))));
}
B5d4331:{NFSU2_TR(0x5d4331);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B5d4333:{NFSU2_TR(0x5d4333);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d42eeu);}goto L5d42ee;}}
}
B5d4335:L5d4335:{c.instructions+=2;NFSU2_TR(0x5d4335);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5d4337:{NFSU2_TR(0x5d4337);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d436a;}}
}
B5d4339:L5d4339:{c.instructions+=3;NFSU2_TR(0x5d4339);
__builtin_memmove((R+8),(R+4),4);
}
B5d433b:{NFSU2_TR(0x5d433b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d433e:{NFSU2_TR(0x5d433e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B5d4340:L5d4340:{c.instructions+=5;NFSU2_TR(0x5d4340);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4342:{NFSU2_TR(0x5d4342);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4346:{NFSU2_TR(0x5d4346);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4348:{NFSU2_TR(0x5d4348);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d434b:{NFSU2_TR(0x5d434b);
if(r1(R+514)){{goto L5d4366;}}
}
B5d434d:L5d434d:{c.instructions+=4;NFSU2_TR(0x5d434d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d434e:{NFSU2_TR(0x5d434e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5d4351:{NFSU2_TR(0x5d4351);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5d4353:{NFSU2_TR(0x5d4353);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4340u);}goto L5d4340;}}
}
B5d4355:L5d4355:{c.instructions+=5;NFSU2_TR(0x5d4355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4356:{NFSU2_TR(0x5d4356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4357:{NFSU2_TR(0x5d4357);
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
B5d4359:{NFSU2_TR(0x5d4359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d435a:{NFSU2_TR(0x5d435a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d435b:L5d435b:{c.instructions+=2;NFSU2_TR(0x5d435b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d435c:{NFSU2_TR(0x5d435c);
{goto L5d4366;}
}
B5d435e:L5d435e:{c.instructions+=2;NFSU2_TR(0x5d435e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5d4361:{NFSU2_TR(0x5d4361);
{goto L5d4366;}
}
B5d4363:L5d4363:{c.instructions+=1;NFSU2_TR(0x5d4363);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B5d4366:L5d4366:{c.instructions+=2;NFSU2_TR(0x5d4366);
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
B5d4368:{NFSU2_TR(0x5d4368);
if(r1(R+512)){{goto L5d4370;}}
}
B5d436a:L5d436a:{c.instructions+=5;NFSU2_TR(0x5d436a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d436b:{NFSU2_TR(0x5d436b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d436c:{NFSU2_TR(0x5d436c);
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
B5d436e:{NFSU2_TR(0x5d436e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d436f:{NFSU2_TR(0x5d436f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4370:L5d4370:{c.instructions+=5;NFSU2_TR(0x5d4370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4371:{NFSU2_TR(0x5d4371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4372:{NFSU2_TR(0x5d4372);
__builtin_memmove((R+0),(R+4),4);
}
B5d4374:{NFSU2_TR(0x5d4374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4375:{NFSU2_TR(0x5d4375);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4380:L5d4380:{c.instructions+=6;NFSU2_TR(0x5d4380);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5d4384:{NFSU2_TR(0x5d4384);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d4386:{NFSU2_TR(0x5d4386);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d438c:{NFSU2_TR(0x5d438c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d438d:{NFSU2_TR(0x5d438d);
__builtin_memmove((R+24),gp(0x883db4),4);
}
B5d4393:{NFSU2_TR(0x5d4393);
if(r1(R+518)){{goto L5d439e;}}
}
B5d4395:L5d4395:{c.instructions+=2;NFSU2_TR(0x5d4395);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d4397:{NFSU2_TR(0x5d4397);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d439e;}}
}
B5d4399:L5d4399:{c.instructions+=1;NFSU2_TR(0x5d4399);
w4(R+0,u32(0x1ull));
}
B5d439e:L5d439e:{c.instructions+=3;NFSU2_TR(0x5d439e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5d43a2:{NFSU2_TR(0x5d43a2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d43a8:{NFSU2_TR(0x5d43a8);
if(r1(R+518)){{goto L5d43af;}}
}
B5d43aa:L5d43aa:{c.instructions+=2;NFSU2_TR(0x5d43aa);
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
B5d43ac:{NFSU2_TR(0x5d43ac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d43af;}}
}
B5d43ae:L5d43ae:{c.instructions+=1;NFSU2_TR(0x5d43ae);
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
B5d43af:L5d43af:{c.instructions+=2;NFSU2_TR(0x5d43af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d43b0:{NFSU2_TR(0x5d43b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d43c0:L5d43c0:{c.instructions+=8;NFSU2_TR(0x5d43c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d43c1:{NFSU2_TR(0x5d43c1);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5d43c7:{NFSU2_TR(0x5d43c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d43c8:{NFSU2_TR(0x5d43c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d43c9:{NFSU2_TR(0x5d43c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d43cd:{NFSU2_TR(0x5d43cd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d43cf:{NFSU2_TR(0x5d43cf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d43d1:{NFSU2_TR(0x5d43d1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B5d43d4:L5d43d4:{c.instructions+=3;NFSU2_TR(0x5d43d4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5d43d7:{NFSU2_TR(0x5d43d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d43dc:{NFSU2_TR(0x5d43dc);
if(r1(R+518)){{goto L5d43e7;}}
}
B5d43de:L5d43de:{c.instructions+=2;NFSU2_TR(0x5d43de);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d43e0:{NFSU2_TR(0x5d43e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d43e7;}}
}
B5d43e2:L5d43e2:{c.instructions+=2;NFSU2_TR(0x5d43e2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d43e4:{NFSU2_TR(0x5d43e4);
if(r1(R+518)){{goto L5d43f8;}}
}
B5d43e6:L5d43e6:{c.instructions+=1;NFSU2_TR(0x5d43e6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d43e7:L5d43e7:{c.instructions+=4;NFSU2_TR(0x5d43e7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d43e8:{NFSU2_TR(0x5d43e8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5d43eb:{NFSU2_TR(0x5d43eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d43ee:{NFSU2_TR(0x5d43ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d43d4u);}goto L5d43d4;}}
}
B5d43f0:L5d43f0:{c.instructions+=5;NFSU2_TR(0x5d43f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d43f1:{NFSU2_TR(0x5d43f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d43f2:{NFSU2_TR(0x5d43f2);
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
B5d43f4:{NFSU2_TR(0x5d43f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d43f5:{NFSU2_TR(0x5d43f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d43f8:L5d43f8:{c.instructions+=7;NFSU2_TR(0x5d43f8);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5d43fe:{NFSU2_TR(0x5d43fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d43ff:{NFSU2_TR(0x5d43ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d4402:{NFSU2_TR(0x5d4402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4403:{NFSU2_TR(0x5d4403);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4405:{NFSU2_TR(0x5d4405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4406:{NFSU2_TR(0x5d4406);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4410:L5d4410:{c.instructions+=19;NFSU2_TR(0x5d4410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4411:{NFSU2_TR(0x5d4411);
__builtin_memmove((R+20),(R+16),4);
}
B5d4413:{NFSU2_TR(0x5d4413);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d4416:{NFSU2_TR(0x5d4416);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4419:{NFSU2_TR(0x5d4419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d441b:{NFSU2_TR(0x5d441b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d441e:{NFSU2_TR(0x5d441e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4422:{NFSU2_TR(0x5d4422);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d4426:{NFSU2_TR(0x5d4426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4429:{NFSU2_TR(0x5d4429);
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
B5d442c:{NFSU2_TR(0x5d442c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4430:{NFSU2_TR(0x5d4430);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4434:{NFSU2_TR(0x5d4434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4435:{NFSU2_TR(0x5d4435);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d4439:{NFSU2_TR(0x5d4439);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d443d:{NFSU2_TR(0x5d443d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d443e:{NFSU2_TR(0x5d443e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4444:{NFSU2_TR(0x5d4444);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4448:{NFSU2_TR(0x5d4448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d444dull));
TAIL_STATIC(0x43ce10u,43c);
}
B5d444d:L5d444d:{c.instructions+=4;NFSU2_TR(0x5d444d);
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
B5d4450:{NFSU2_TR(0x5d4450);
__builtin_memmove((R+16),(R+20),4);
}
B5d4452:{NFSU2_TR(0x5d4452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d4453:{NFSU2_TR(0x5d4453);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4460:L5d4460:{c.instructions+=1;NFSU2_TR(0x5d4460);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d4462:L5d4462:{c.instructions+=3;NFSU2_TR(0x5d4462);
u8 U[13];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5d4469:{NFSU2_TR(0x5d4469);
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
B5d446b:{NFSU2_TR(0x5d446b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4476;}}
}
B5d446d:L5d446d:{c.instructions+=3;NFSU2_TR(0x5d446d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d446e:{NFSU2_TR(0x5d446e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d4471:{NFSU2_TR(0x5d4471);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4462u);}goto L5d4462;}}
}
B5d4473:L5d4473:{c.instructions+=2;NFSU2_TR(0x5d4473);
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
B5d4475:{NFSU2_TR(0x5d4475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4476:L5d4476:{c.instructions+=2;NFSU2_TR(0x5d4476);
w4(R+0,u32(0x1ull));
}
B5d447b:{NFSU2_TR(0x5d447b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4480:L5d4480:{c.instructions+=8;NFSU2_TR(0x5d4480);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d4484:{NFSU2_TR(0x5d4484);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d4486:{NFSU2_TR(0x5d4486);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4488:{NFSU2_TR(0x5d4488);
__builtin_memmove((R+8),(R+518),1);
}
B5d448b:{NFSU2_TR(0x5d448b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d448d:{NFSU2_TR(0x5d448d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x2ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d4494:{NFSU2_TR(0x5d4494);
u8 U[12];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5d449b:{NFSU2_TR(0x5d449b);
{goto L5d44a0;}
}
B5d44a0:L5d44a0:{c.instructions+=2;NFSU2_TR(0x5d44a0);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+12),u8(0x0ull)));
w1(U+13,u8(u32(r1(U+12))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B5d44a4:{NFSU2_TR(0x5d44a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d44b1;}}
}
B5d44a6:L5d44a6:{c.instructions+=3;NFSU2_TR(0x5d44a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d44a7:{NFSU2_TR(0x5d44a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d44aa:{NFSU2_TR(0x5d44aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d44a0u);}goto L5d44a0;}}
}
B5d44ac:L5d44ac:{c.instructions+=2;NFSU2_TR(0x5d44ac);
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
B5d44ae:{NFSU2_TR(0x5d44ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d44b1:L5d44b1:{c.instructions+=2;NFSU2_TR(0x5d44b1);
w4(R+0,u32(0x1ull));
}
B5d44b6:{NFSU2_TR(0x5d44b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d44c0:L5d44c0:{c.instructions+=6;NFSU2_TR(0x5d44c0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d44c4:{NFSU2_TR(0x5d44c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d44c5:{NFSU2_TR(0x5d44c5);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d44c8:{NFSU2_TR(0x5d44c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d44ca:{NFSU2_TR(0x5d44ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d44cd:{NFSU2_TR(0x5d44cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d44d3;}}
}
B5d44cf:L5d44cf:{c.instructions+=2;NFSU2_TR(0x5d44cf);
w1(R+12,u8(0x1ull));
}
B5d44d1:{NFSU2_TR(0x5d44d1);
{goto L5d44d5;}
}
B5d44d3:L5d44d3:{c.instructions+=1;NFSU2_TR(0x5d44d3);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5d44d5:L5d44d5:{c.instructions+=5;NFSU2_TR(0x5d44d5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d44d9:{NFSU2_TR(0x5d44d9);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d44dc:{NFSU2_TR(0x5d44dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d44de:{NFSU2_TR(0x5d44de);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d44e1:{NFSU2_TR(0x5d44e1);
if(r1(R+514)){{goto L5d44e7;}}
}
B5d44e3:L5d44e3:{c.instructions+=2;NFSU2_TR(0x5d44e3);
w1(R+8,u8(0x1ull));
}
B5d44e5:{NFSU2_TR(0x5d44e5);
{goto L5d44e9;}
}
B5d44e7:L5d44e7:{c.instructions+=1;NFSU2_TR(0x5d44e7);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5d44e9:L5d44e9:{c.instructions+=5;NFSU2_TR(0x5d44e9);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d44ec:{NFSU2_TR(0x5d44ec);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d44ef:{NFSU2_TR(0x5d44ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d44f1:{NFSU2_TR(0x5d44f1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d44f4:{NFSU2_TR(0x5d44f4);
if(r1(R+514)){{goto L5d4507;}}
}
B5d44f6:L5d44f6:{c.instructions+=2;NFSU2_TR(0x5d44f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d44f8:{NFSU2_TR(0x5d44f8);
if(r1(R+518)){{goto L5d450f;}}
}
B5d44fa:L5d44fa:{c.instructions+=2;NFSU2_TR(0x5d44fa);
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
B5d44fc:{NFSU2_TR(0x5d44fc);
if(r1(R+518)){{goto L5d450f;}}
}
B5d44fe:L5d44fe:{c.instructions+=3;NFSU2_TR(0x5d44fe);
w4(R+0,u32(0x1ull));
}
B5d4503:{NFSU2_TR(0x5d4503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4504:{NFSU2_TR(0x5d4504);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4507:L5d4507:{c.instructions+=2;NFSU2_TR(0x5d4507);
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
B5d4509:{NFSU2_TR(0x5d4509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d44feu);}goto L5d44fe;}}
}
B5d450b:L5d450b:{c.instructions+=2;NFSU2_TR(0x5d450b);
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
B5d450d:{NFSU2_TR(0x5d450d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d44feu);}goto L5d44fe;}}
}
B5d450f:L5d450f:{c.instructions+=3;NFSU2_TR(0x5d450f);
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
B5d4511:{NFSU2_TR(0x5d4511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4512:{NFSU2_TR(0x5d4512);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4520:L5d4520:{c.instructions+=6;NFSU2_TR(0x5d4520);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4523:{NFSU2_TR(0x5d4523);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4526:{NFSU2_TR(0x5d4526);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d452c:{NFSU2_TR(0x5d452c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d452e:{NFSU2_TR(0x5d452e);
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
B5d4531:{NFSU2_TR(0x5d4531);
if(r1(R+514)){{goto L5d4539;}}
}
B5d4533:L5d4533:{c.instructions+=1;NFSU2_TR(0x5d4533);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d4539:L5d4539:{c.instructions+=1;NFSU2_TR(0x5d4539);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4540:L5d4540:{c.instructions+=10;NFSU2_TR(0x5d4540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d4543:{NFSU2_TR(0x5d4543);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4544:{NFSU2_TR(0x5d4544);
__builtin_memmove((R+24),(R+4),4);
}
B5d4546:{NFSU2_TR(0x5d4546);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4549:{NFSU2_TR(0x5d4549);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d454c:{NFSU2_TR(0x5d454c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d4550:{NFSU2_TR(0x5d4550);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4556:{NFSU2_TR(0x5d4556);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4558:{NFSU2_TR(0x5d4558);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d455b:{NFSU2_TR(0x5d455b);
if(r1(R+514)){{goto L5d456b;}}
}
B5d455d:L5d455d:{c.instructions+=3;NFSU2_TR(0x5d455d);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4563:{NFSU2_TR(0x5d4563);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d4567:{NFSU2_TR(0x5d4567);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d456b:L5d456b:{c.instructions+=6;NFSU2_TR(0x5d456b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d456f:{NFSU2_TR(0x5d456f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d4571:{NFSU2_TR(0x5d4571);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4577:{NFSU2_TR(0x5d4577);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4579:{NFSU2_TR(0x5d4579);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d457c:{NFSU2_TR(0x5d457c);
if(r1(R+514)){{goto L5d458b;}}
}
B5d457e:L5d457e:{c.instructions+=4;NFSU2_TR(0x5d457e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4584:{NFSU2_TR(0x5d4584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4585:{NFSU2_TR(0x5d4585);
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
B5d4588:{NFSU2_TR(0x5d4588);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d458b:L5d458b:{c.instructions+=8;NFSU2_TR(0x5d458b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d458f:{NFSU2_TR(0x5d458f);
__builtin_memmove((R+0),gp(0x88f2b0),4);
}
B5d4594:{NFSU2_TR(0x5d4594);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d459a:{NFSU2_TR(0x5d459a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d459b:{NFSU2_TR(0x5d459b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d459c:{NFSU2_TR(0x5d459c);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d459f:{NFSU2_TR(0x5d459f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d45a2:{NFSU2_TR(0x5d45a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d45a7ull));
TAIL_STATIC(0x43c240u,43c);
}
B5d45a7:L5d45a7:{c.instructions+=12;NFSU2_TR(0x5d45a7);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d45ad:{NFSU2_TR(0x5d45ad);
__builtin_memmove((R+4),gp(0x88f2b0),4);
}
B5d45b3:{NFSU2_TR(0x5d45b3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5d45b5:{NFSU2_TR(0x5d45b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d45b8:{NFSU2_TR(0x5d45b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d45b9:{NFSU2_TR(0x5d45b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d45ba:{NFSU2_TR(0x5d45ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d45be:{NFSU2_TR(0x5d45be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d45c0:{NFSU2_TR(0x5d45c0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d45c4:{NFSU2_TR(0x5d45c4);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d45c7:{NFSU2_TR(0x5d45c7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d45ca:{NFSU2_TR(0x5d45ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d45cfull));
TAIL_STATIC(0x43c240u,43c);
}
B5d45cf:L5d45cf:{c.instructions+=9;NFSU2_TR(0x5d45cf);
__builtin_memmove((R+8),gp(0x88f2b0),4);
}
B5d45d5:{NFSU2_TR(0x5d45d5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d45d9:{NFSU2_TR(0x5d45d9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d45dd:{NFSU2_TR(0x5d45dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d45e0:{NFSU2_TR(0x5d45e0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d45e4:{NFSU2_TR(0x5d45e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d45e5:{NFSU2_TR(0x5d45e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d45e6:{NFSU2_TR(0x5d45e6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d45e9:{NFSU2_TR(0x5d45e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d45eeull));
TAIL_STATIC(0x43c240u,43c);
}
B5d45ee:L5d45ee:{c.instructions+=6;NFSU2_TR(0x5d45ee);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d45f2:{NFSU2_TR(0x5d45f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d45f5:{NFSU2_TR(0x5d45f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d45f6:{NFSU2_TR(0x5d45f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5d45fa:{NFSU2_TR(0x5d45fa);
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
B5d45fd:{NFSU2_TR(0x5d45fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4600:L5d4600:{c.instructions+=5;NFSU2_TR(0x5d4600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4601:{NFSU2_TR(0x5d4601);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4605:{NFSU2_TR(0x5d4605);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4608:{NFSU2_TR(0x5d4608);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d460b:{NFSU2_TR(0x5d460b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4610ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B5d4610:L5d4610:{c.instructions+=8;NFSU2_TR(0x5d4610);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B5d4616:{NFSU2_TR(0x5d4616);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B5d4619:{NFSU2_TR(0x5d4619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d461c:{NFSU2_TR(0x5d461c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d461e:{NFSU2_TR(0x5d461e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d4624:{NFSU2_TR(0x5d4624);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4626:{NFSU2_TR(0x5d4626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4627:{NFSU2_TR(0x5d4627);
if(r1(R+518)){{goto L5d463b;}}
}
B5d4629:L5d4629:{c.instructions+=3;NFSU2_TR(0x5d4629);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d462f:{NFSU2_TR(0x5d462f);
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
B5d4631:{NFSU2_TR(0x5d4631);
if(r1(R+518)){{goto L5d463b;}}
}
B5d4633:L5d4633:{c.instructions+=2;NFSU2_TR(0x5d4633);
{u32 ea_=u32((r4(R+4)*4u)+u32(8013680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d463a:{NFSU2_TR(0x5d463a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d463b:L5d463b:{c.instructions+=2;NFSU2_TR(0x5d463b);
{u32 ea_=u32((r4(R+4)*4u)+u32(8013648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4642:{NFSU2_TR(0x5d4642);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4650:L5d4650:{c.instructions+=5;NFSU2_TR(0x5d4650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4651:{NFSU2_TR(0x5d4651);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4655:{NFSU2_TR(0x5d4655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4658:{NFSU2_TR(0x5d4658);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d465b:{NFSU2_TR(0x5d465b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4660ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B5d4660:L5d4660:{c.instructions+=8;NFSU2_TR(0x5d4660);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B5d4666:{NFSU2_TR(0x5d4666);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B5d4669:{NFSU2_TR(0x5d4669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d466c:{NFSU2_TR(0x5d466c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d466e:{NFSU2_TR(0x5d466e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d4674:{NFSU2_TR(0x5d4674);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4676:{NFSU2_TR(0x5d4676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4677:{NFSU2_TR(0x5d4677);
if(r1(R+518)){{goto L5d468b;}}
}
B5d4679:L5d4679:{c.instructions+=3;NFSU2_TR(0x5d4679);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d467f:{NFSU2_TR(0x5d467f);
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
B5d4681:{NFSU2_TR(0x5d4681);
if(r1(R+518)){{goto L5d468b;}}
}
B5d4683:L5d4683:{c.instructions+=2;NFSU2_TR(0x5d4683);
{u32 ea_=u32((r4(R+4)*4u)+u32(8013664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d468a:{NFSU2_TR(0x5d468a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d468b:L5d468b:{c.instructions+=2;NFSU2_TR(0x5d468b);
{u32 ea_=u32((r4(R+4)*4u)+u32(8013632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4692:{NFSU2_TR(0x5d4692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d46a0:L5d46a0:{c.instructions+=12;NFSU2_TR(0x5d46a0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d46a4:{NFSU2_TR(0x5d46a4);
{u32 ea_=u32(u32(8016312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d46aa:{NFSU2_TR(0x5d46aa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d46ae:{NFSU2_TR(0x5d46ae);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d46b2:{NFSU2_TR(0x5d46b2);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5d46b4:{NFSU2_TR(0x5d46b4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d46b8:{NFSU2_TR(0x5d46b8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d46ba:{NFSU2_TR(0x5d46ba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d46be:{NFSU2_TR(0x5d46be);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d46c2:{NFSU2_TR(0x5d46c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d46c4:{NFSU2_TR(0x5d46c4);
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
B5d46c7:{NFSU2_TR(0x5d46c7);
if(r1(R+518)){{goto L5d46cf;}}
}
B5d46c9:L5d46c9:{c.instructions+=2;NFSU2_TR(0x5d46c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d46cb:{NFSU2_TR(0x5d46cb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d46cf:L5d46cf:{c.instructions+=5;NFSU2_TR(0x5d46cf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d46d1:{NFSU2_TR(0x5d46d1);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5d46d3:{NFSU2_TR(0x5d46d3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d46d5:{NFSU2_TR(0x5d46d5);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5d46d7:{NFSU2_TR(0x5d46d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d46e0:L5d46e0:{c.instructions+=21;NFSU2_TR(0x5d46e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d46e4:{NFSU2_TR(0x5d46e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d46e8:{NFSU2_TR(0x5d46e8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d46eb:{NFSU2_TR(0x5d46eb);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d46ee:{NFSU2_TR(0x5d46ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d46f2:{NFSU2_TR(0x5d46f2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d46f4:{NFSU2_TR(0x5d46f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d46f7:{NFSU2_TR(0x5d46f7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d46f9:{NFSU2_TR(0x5d46f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d46fa:{NFSU2_TR(0x5d46fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d46fe:{NFSU2_TR(0x5d46fe);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4700:{NFSU2_TR(0x5d4700);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4702:{NFSU2_TR(0x5d4702);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d4704:{NFSU2_TR(0x5d4704);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4707:{NFSU2_TR(0x5d4707);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d470a:{NFSU2_TR(0x5d470a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d470c:{NFSU2_TR(0x5d470c);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d470e:{NFSU2_TR(0x5d470e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d4714:{NFSU2_TR(0x5d4714);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4716:{NFSU2_TR(0x5d4716);
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
B5d4719:{NFSU2_TR(0x5d4719);
if(r1(R+514)){{goto L5d4728;}}
}
B5d471b:L5d471b:{c.instructions+=7;NFSU2_TR(0x5d471b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d471d:{NFSU2_TR(0x5d471d);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5d471f:{NFSU2_TR(0x5d471f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4721:{NFSU2_TR(0x5d4721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4722:{NFSU2_TR(0x5d4722);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4724:{NFSU2_TR(0x5d4724);
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
B5d4727:{NFSU2_TR(0x5d4727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4728:L5d4728:{c.instructions+=25;NFSU2_TR(0x5d4728);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d472a:{NFSU2_TR(0x5d472a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d472b:{NFSU2_TR(0x5d472b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d472d:{NFSU2_TR(0x5d472d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d4731:{NFSU2_TR(0x5d4731);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4735:{NFSU2_TR(0x5d4735);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4738:{NFSU2_TR(0x5d4738);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d473b:{NFSU2_TR(0x5d473b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d473f:{NFSU2_TR(0x5d473f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4742:{NFSU2_TR(0x5d4742);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4745:{NFSU2_TR(0x5d4745);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d4747:{NFSU2_TR(0x5d4747);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4749:{NFSU2_TR(0x5d4749);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d474b:{NFSU2_TR(0x5d474b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5d474d:{NFSU2_TR(0x5d474d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d474f:{NFSU2_TR(0x5d474f);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5d4751:{NFSU2_TR(0x5d4751);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4754:{NFSU2_TR(0x5d4754);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4755:{NFSU2_TR(0x5d4755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4756:{NFSU2_TR(0x5d4756);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4758:{NFSU2_TR(0x5d4758);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d475c:{NFSU2_TR(0x5d475c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d475e:{NFSU2_TR(0x5d475e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d475f:{NFSU2_TR(0x5d475f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4761:{NFSU2_TR(0x5d4761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4766ull));
TAIL_STATIC(0x43d090u,43d);
}
B5d4766:L5d4766:{c.instructions+=5;NFSU2_TR(0x5d4766);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d4769:{NFSU2_TR(0x5d4769);
w1(R+0,u8(0x1ull));
}
B5d476b:{NFSU2_TR(0x5d476b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d476c:{NFSU2_TR(0x5d476c);
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
B5d476f:{NFSU2_TR(0x5d476f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4770:L5d4770:{c.instructions+=25;NFSU2_TR(0x5d4770);
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
B5d4773:{NFSU2_TR(0x5d4773);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4777:{NFSU2_TR(0x5d4777);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4779:{NFSU2_TR(0x5d4779);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d477a:{NFSU2_TR(0x5d477a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d477e:{NFSU2_TR(0x5d477e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4780:{NFSU2_TR(0x5d4780);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4781:{NFSU2_TR(0x5d4781);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4786:{NFSU2_TR(0x5d4786);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d478a:{NFSU2_TR(0x5d478a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d478e:{NFSU2_TR(0x5d478e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4791:{NFSU2_TR(0x5d4791);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4795:{NFSU2_TR(0x5d4795);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4798:{NFSU2_TR(0x5d4798);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d479c:{NFSU2_TR(0x5d479c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d479e:{NFSU2_TR(0x5d479e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d47a0:{NFSU2_TR(0x5d47a0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d47a4:{NFSU2_TR(0x5d47a4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d47a7:{NFSU2_TR(0x5d47a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d47ab:{NFSU2_TR(0x5d47ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47ac:{NFSU2_TR(0x5d47ac);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d47af:{NFSU2_TR(0x5d47af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47b0:{NFSU2_TR(0x5d47b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47b1:{NFSU2_TR(0x5d47b1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d47b5:{NFSU2_TR(0x5d47b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d47baull));
TAIL_STATIC(0x43d090u,43d);
}
B5d47ba:L5d47ba:{c.instructions+=7;NFSU2_TR(0x5d47ba);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47bf:{NFSU2_TR(0x5d47bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d47c3:{NFSU2_TR(0x5d47c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47c4:{NFSU2_TR(0x5d47c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d47c8:{NFSU2_TR(0x5d47c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47c9:{NFSU2_TR(0x5d47c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47ca:{NFSU2_TR(0x5d47ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d47cfull));
TAIL_STATIC(0x43d090u,43d);
}
B5d47cf:L5d47cf:{c.instructions+=23;NFSU2_TR(0x5d47cf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d47d3:{NFSU2_TR(0x5d47d3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d47d7:{NFSU2_TR(0x5d47d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d47db:{NFSU2_TR(0x5d47db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47dc:{NFSU2_TR(0x5d47dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d47e0:{NFSU2_TR(0x5d47e0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d47e4:{NFSU2_TR(0x5d47e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47e5:{NFSU2_TR(0x5d47e5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d47e9:{NFSU2_TR(0x5d47e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d47ed:{NFSU2_TR(0x5d47ed);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d47f1:{NFSU2_TR(0x5d47f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47f2:{NFSU2_TR(0x5d47f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d47f6:{NFSU2_TR(0x5d47f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d47f7:{NFSU2_TR(0x5d47f7);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d47fb:{NFSU2_TR(0x5d47fb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d47ff:{NFSU2_TR(0x5d47ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d4803:{NFSU2_TR(0x5d4803);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d4807:{NFSU2_TR(0x5d4807);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4808:{NFSU2_TR(0x5d4808);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d480c:{NFSU2_TR(0x5d480c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4810:{NFSU2_TR(0x5d4810);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4814:{NFSU2_TR(0x5d4814);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4818:{NFSU2_TR(0x5d4818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d481dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d46e0u);}goto L5d46e0;}
}
B5d481d:L5d481d:{c.instructions+=3;NFSU2_TR(0x5d481d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B5d4820:{NFSU2_TR(0x5d4820);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4822:{NFSU2_TR(0x5d4822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4830;}}
}
B5d4824:L5d4824:{c.instructions+=5;NFSU2_TR(0x5d4824);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d482a:{NFSU2_TR(0x5d482a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d482b:{NFSU2_TR(0x5d482b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d482c:{NFSU2_TR(0x5d482c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d482f:{NFSU2_TR(0x5d482f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4830:L5d4830:{c.instructions+=16;NFSU2_TR(0x5d4830);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4832:{NFSU2_TR(0x5d4832);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4834:{NFSU2_TR(0x5d4834);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4837:{NFSU2_TR(0x5d4837);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d483a:{NFSU2_TR(0x5d483a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d483c:{NFSU2_TR(0x5d483c);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B5d483e:{NFSU2_TR(0x5d483e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d4840:{NFSU2_TR(0x5d4840);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d4842:{NFSU2_TR(0x5d4842);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5d4844:{NFSU2_TR(0x5d4844);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d4846:{NFSU2_TR(0x5d4846);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d4848:{NFSU2_TR(0x5d4848);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5d484a:{NFSU2_TR(0x5d484a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d4850:{NFSU2_TR(0x5d4850);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4852:{NFSU2_TR(0x5d4852);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4855:{NFSU2_TR(0x5d4855);
if(r1(R+518)){{goto L5d485f;}}
}
B5d4857:L5d4857:{c.instructions+=2;NFSU2_TR(0x5d4857);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4859:{NFSU2_TR(0x5d4859);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d485f:L5d485f:{c.instructions+=10;NFSU2_TR(0x5d485f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5d4865:{NFSU2_TR(0x5d4865);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4869:{NFSU2_TR(0x5d4869);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d486d:{NFSU2_TR(0x5d486d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4871:{NFSU2_TR(0x5d4871);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4875:{NFSU2_TR(0x5d4875);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d4877:{NFSU2_TR(0x5d4877);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d487d:{NFSU2_TR(0x5d487d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d487f:{NFSU2_TR(0x5d487f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4882:{NFSU2_TR(0x5d4882);
if(r1(R+514)){{goto L5d4886;}}
}
B5d4884:L5d4884:{c.instructions+=1;NFSU2_TR(0x5d4884);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d4886:L5d4886:{c.instructions+=4;NFSU2_TR(0x5d4886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4887:{NFSU2_TR(0x5d4887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4888:{NFSU2_TR(0x5d4888);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d488b:{NFSU2_TR(0x5d488b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4890:L5d4890:{c.instructions+=10;NFSU2_TR(0x5d4890);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4893:{NFSU2_TR(0x5d4893);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4896:{NFSU2_TR(0x5d4896);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d4898:{NFSU2_TR(0x5d4898);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d489b:{NFSU2_TR(0x5d489b);
__builtin_memmove((R+0),(R+4),4);
}
B5d489d:{NFSU2_TR(0x5d489d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d48a0:{NFSU2_TR(0x5d48a0);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d48a3:{NFSU2_TR(0x5d48a3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d48a9:{NFSU2_TR(0x5d48a9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d48ac:{NFSU2_TR(0x5d48ac);
if(r1(R+518)){{goto L5d48cf;}}
}
B5d48ae:L5d48ae:{c.instructions+=1;NFSU2_TR(0x5d48ae);
__builtin_memmove((R+28),(R+28),4);
}
B5d48b0:L5d48b0:{c.instructions+=10;NFSU2_TR(0x5d48b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d48b3:{NFSU2_TR(0x5d48b3);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d48b6:{NFSU2_TR(0x5d48b6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d48b9:{NFSU2_TR(0x5d48b9);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d48bc:{NFSU2_TR(0x5d48bc);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d48bf:{NFSU2_TR(0x5d48bf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d48c5:{NFSU2_TR(0x5d48c5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d48c8:{NFSU2_TR(0x5d48c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d48cb:{NFSU2_TR(0x5d48cb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d48cd:{NFSU2_TR(0x5d48cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d48b0u);}goto L5d48b0;}}
}
B5d48cf:L5d48cf:{c.instructions+=3;NFSU2_TR(0x5d48cf);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d48d2:{NFSU2_TR(0x5d48d2);
__builtin_memmove((R+0),(R+4),4);
}
B5d48d4:{NFSU2_TR(0x5d48d4);
if(r1(R+518)){{goto L5d48f5;}}
}
B5d48d6:L5d48d6:{c.instructions+=10;NFSU2_TR(0x5d48d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d48d9:{NFSU2_TR(0x5d48d9);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d48dc:{NFSU2_TR(0x5d48dc);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d48df:{NFSU2_TR(0x5d48df);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d48e2:{NFSU2_TR(0x5d48e2);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d48e5:{NFSU2_TR(0x5d48e5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d48eb:{NFSU2_TR(0x5d48eb);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d48ee:{NFSU2_TR(0x5d48ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d48f1:{NFSU2_TR(0x5d48f1);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d48f3:{NFSU2_TR(0x5d48f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d48d6u);}goto L5d48d6;}}
}
B5d48f5:L5d48f5:{c.instructions+=1;NFSU2_TR(0x5d48f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4900:L5d4900:{c.instructions+=16;NFSU2_TR(0x5d4900);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4901:{NFSU2_TR(0x5d4901);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4905:{NFSU2_TR(0x5d4905);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4906:{NFSU2_TR(0x5d4906);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d490a:{NFSU2_TR(0x5d490a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d490e:{NFSU2_TR(0x5d490e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d490f:{NFSU2_TR(0x5d490f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4912:{NFSU2_TR(0x5d4912);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4916:{NFSU2_TR(0x5d4916);
__builtin_memmove((R+8),(R+24),4);
}
B5d4918:{NFSU2_TR(0x5d4918);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d491a:{NFSU2_TR(0x5d491a);
{u32 ea_=u32(u32(8875296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4920:{NFSU2_TR(0x5d4920);
{u32 ea_=u32(u32(8875296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4926:{NFSU2_TR(0x5d4926);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4927:{NFSU2_TR(0x5d4927);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d492a:{NFSU2_TR(0x5d492a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d492e:{NFSU2_TR(0x5d492e);
if(r1(R+518)){{goto L5d4995;}}
}
B5d4930:L5d4930:{c.instructions+=15;NFSU2_TR(0x5d4930);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4932:{NFSU2_TR(0x5d4932);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4935:{NFSU2_TR(0x5d4935);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4938:{NFSU2_TR(0x5d4938);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d493b:{NFSU2_TR(0x5d493b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d493d:{NFSU2_TR(0x5d493d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d493f:{NFSU2_TR(0x5d493f);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d4941:{NFSU2_TR(0x5d4941);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d4943:{NFSU2_TR(0x5d4943);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4945:{NFSU2_TR(0x5d4945);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4949:{NFSU2_TR(0x5d4949);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d494b:{NFSU2_TR(0x5d494b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d494d:{NFSU2_TR(0x5d494d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4950:{NFSU2_TR(0x5d4950);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4952:{NFSU2_TR(0x5d4952);
if(r1(R+518)){{goto L5d4995;}}
}
B5d4954:L5d4954:{c.instructions+=6;NFSU2_TR(0x5d4954);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4957:{NFSU2_TR(0x5d4957);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d495a:{NFSU2_TR(0x5d495a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4960:{NFSU2_TR(0x5d4960);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4962:{NFSU2_TR(0x5d4962);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4965:{NFSU2_TR(0x5d4965);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d4995;}}
}
B5d4967:L5d4967:{c.instructions+=15;NFSU2_TR(0x5d4967);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d496a:{NFSU2_TR(0x5d496a);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d496d:{NFSU2_TR(0x5d496d);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4970:{NFSU2_TR(0x5d4970);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4973:{NFSU2_TR(0x5d4973);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d4975:{NFSU2_TR(0x5d4975);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d4977:{NFSU2_TR(0x5d4977);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d4979:{NFSU2_TR(0x5d4979);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d497b:{NFSU2_TR(0x5d497b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d497d:{NFSU2_TR(0x5d497d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4981:{NFSU2_TR(0x5d4981);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4983:{NFSU2_TR(0x5d4983);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4985:{NFSU2_TR(0x5d4985);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4988:{NFSU2_TR(0x5d4988);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d498a:{NFSU2_TR(0x5d498a);
if(r1(R+518)){{goto L5d4995;}}
}
B5d498c:L5d498c:{c.instructions+=4;NFSU2_TR(0x5d498c);
__builtin_memmove((R+24),(R+8),4);
}
B5d498e:{NFSU2_TR(0x5d498e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4991:{NFSU2_TR(0x5d4991);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4993:{NFSU2_TR(0x5d4993);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4930u);}goto L5d4930;}}
}
B5d4995:L5d4995:{c.instructions+=3;NFSU2_TR(0x5d4995);
__builtin_memmove((R+8),(R+28),4);
}
B5d4997:{NFSU2_TR(0x5d4997);
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
B5d4999:{NFSU2_TR(0x5d4999);
if(r1(R+518)){{goto L5d4a05;}}
}
B5d499b:L5d499b:{c.instructions+=1;NFSU2_TR(0x5d499b);
{goto L5d49a0;}
}
B5d49a0:L5d49a0:{c.instructions+=15;NFSU2_TR(0x5d49a0);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d49a2:{NFSU2_TR(0x5d49a2);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d49a5:{NFSU2_TR(0x5d49a5);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d49a8:{NFSU2_TR(0x5d49a8);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d49ab:{NFSU2_TR(0x5d49ab);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d49ad:{NFSU2_TR(0x5d49ad);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d49af:{NFSU2_TR(0x5d49af);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d49b1:{NFSU2_TR(0x5d49b1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d49b3:{NFSU2_TR(0x5d49b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d49b5:{NFSU2_TR(0x5d49b5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d49b9:{NFSU2_TR(0x5d49b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d49bb:{NFSU2_TR(0x5d49bb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d49bd:{NFSU2_TR(0x5d49bd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d49c0:{NFSU2_TR(0x5d49c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d49c2:{NFSU2_TR(0x5d49c2);
if(r1(R+518)){{goto L5d4a05;}}
}
B5d49c4:L5d49c4:{c.instructions+=6;NFSU2_TR(0x5d49c4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d49c7:{NFSU2_TR(0x5d49c7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d49ca:{NFSU2_TR(0x5d49ca);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d49d0:{NFSU2_TR(0x5d49d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d49d2:{NFSU2_TR(0x5d49d2);
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
B5d49d5:{NFSU2_TR(0x5d49d5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d4a05;}}
}
B5d49d7:L5d49d7:{c.instructions+=15;NFSU2_TR(0x5d49d7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d49da:{NFSU2_TR(0x5d49da);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d49dd:{NFSU2_TR(0x5d49dd);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d49e0:{NFSU2_TR(0x5d49e0);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d49e3:{NFSU2_TR(0x5d49e3);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d49e5:{NFSU2_TR(0x5d49e5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d49e7:{NFSU2_TR(0x5d49e7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d49e9:{NFSU2_TR(0x5d49e9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d49eb:{NFSU2_TR(0x5d49eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d49ed:{NFSU2_TR(0x5d49ed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d49f1:{NFSU2_TR(0x5d49f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d49f3:{NFSU2_TR(0x5d49f3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d49f5:{NFSU2_TR(0x5d49f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d49f8:{NFSU2_TR(0x5d49f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d49fa:{NFSU2_TR(0x5d49fa);
if(r1(R+518)){{goto L5d4a05;}}
}
B5d49fc:L5d49fc:{c.instructions+=4;NFSU2_TR(0x5d49fc);
__builtin_memmove((R+28),(R+8),4);
}
B5d49fe:{NFSU2_TR(0x5d49fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4a01:{NFSU2_TR(0x5d4a01);
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
B5d4a03:{NFSU2_TR(0x5d4a03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d49a0u);}goto L5d49a0;}}
}
B5d4a05:L5d4a05:{c.instructions+=9;NFSU2_TR(0x5d4a05);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4a09:{NFSU2_TR(0x5d4a09);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4a0d:{NFSU2_TR(0x5d4a0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d4a0f:{NFSU2_TR(0x5d4a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4a10:{NFSU2_TR(0x5d4a10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d4a12:{NFSU2_TR(0x5d4a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4a13:{NFSU2_TR(0x5d4a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4a14:{NFSU2_TR(0x5d4a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d4a15:{NFSU2_TR(0x5d4a15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4a20:L5d4a20:{c.instructions+=6;NFSU2_TR(0x5d4a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4a24:{NFSU2_TR(0x5d4a24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4a25:{NFSU2_TR(0x5d4a25);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d4a29:{NFSU2_TR(0x5d4a29);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4a2b:{NFSU2_TR(0x5d4a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d4a2d:{NFSU2_TR(0x5d4a2d);
if(r1(R+518)){{goto L5d4a34;}}
}
B5d4a2f:L5d4a2f:{c.instructions+=2;NFSU2_TR(0x5d4a2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d4a32:{NFSU2_TR(0x5d4a32);
{goto L5d4a36;}
}
B5d4a34:L5d4a34:{c.instructions+=1;NFSU2_TR(0x5d4a34);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d4a36:L5d4a36:{c.instructions+=4;NFSU2_TR(0x5d4a36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4a37:{NFSU2_TR(0x5d4a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4a3b:{NFSU2_TR(0x5d4a3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4a3d:{NFSU2_TR(0x5d4a3d);
if(r1(R+518)){{goto L5d4a44;}}
}
B5d4a3f:L5d4a3f:{c.instructions+=2;NFSU2_TR(0x5d4a3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d4a42:{NFSU2_TR(0x5d4a42);
{goto L5d4a46;}
}
B5d4a44:L5d4a44:{c.instructions+=1;NFSU2_TR(0x5d4a44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d4a46:L5d4a46:{c.instructions+=10;NFSU2_TR(0x5d4a46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4a48:{NFSU2_TR(0x5d4a48);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5d4a4e:{NFSU2_TR(0x5d4a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a51:{NFSU2_TR(0x5d4a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a58:{NFSU2_TR(0x5d4a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a5f:{NFSU2_TR(0x5d4a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a62:{NFSU2_TR(0x5d4a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a65:{NFSU2_TR(0x5d4a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a68:{NFSU2_TR(0x5d4a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a6b:{NFSU2_TR(0x5d4a6b);
if(r1(R+518)){{goto L5d4a75;}}
}
B5d4a6d:L5d4a6d:{c.instructions+=2;NFSU2_TR(0x5d4a6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d4a73:{NFSU2_TR(0x5d4a73);
{goto L5d4a77;}
}
B5d4a75:L5d4a75:{c.instructions+=1;NFSU2_TR(0x5d4a75);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d4a77:L5d4a77:{c.instructions+=3;NFSU2_TR(0x5d4a77);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4a79:{NFSU2_TR(0x5d4a79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4a7a:{NFSU2_TR(0x5d4a7a);
if(r1(R+518)){{goto L5d4a84;}}
}
B5d4a7c:L5d4a7c:{c.instructions+=2;NFSU2_TR(0x5d4a7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d4a82:{NFSU2_TR(0x5d4a82);
{goto L5d4a86;}
}
B5d4a84:L5d4a84:{c.instructions+=1;NFSU2_TR(0x5d4a84);
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
B5d4a86:L5d4a86:{c.instructions+=10;NFSU2_TR(0x5d4a86);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5d4a8c:{NFSU2_TR(0x5d4a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a92:{NFSU2_TR(0x5d4a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d4a9c:{NFSU2_TR(0x5d4a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d4aa6:{NFSU2_TR(0x5d4aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4aac:{NFSU2_TR(0x5d4aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4ab2:{NFSU2_TR(0x5d4ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4ab8:{NFSU2_TR(0x5d4ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4abe:{NFSU2_TR(0x5d4abe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d4abf:{NFSU2_TR(0x5d4abf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4ad0:L5d4ad0:{c.instructions+=13;NFSU2_TR(0x5d4ad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4ad1:{NFSU2_TR(0x5d4ad1);
__builtin_memmove((R+20),(R+16),4);
}
B5d4ad3:{NFSU2_TR(0x5d4ad3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5d4ad6:{NFSU2_TR(0x5d4ad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5d4ad9:{NFSU2_TR(0x5d4ad9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4ada:{NFSU2_TR(0x5d4ada);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4adb:{NFSU2_TR(0x5d4adb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4adc:{NFSU2_TR(0x5d4adc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4adf:{NFSU2_TR(0x5d4adf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4ae0:{NFSU2_TR(0x5d4ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4ae4:{NFSU2_TR(0x5d4ae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4ae7:{NFSU2_TR(0x5d4ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d4aef:{NFSU2_TR(0x5d4aef);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d4af1:L5d4af1:{c.instructions+=3;NFSU2_TR(0x5d4af1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d4af3:{NFSU2_TR(0x5d4af3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+523,sborrow<u16>(r2(U+2),r2(R+20)));
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+20))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5d4af6:{NFSU2_TR(0x5d4af6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d4b55;}}
}
B5d4af8:L5d4af8:{c.instructions+=2;NFSU2_TR(0x5d4af8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d4afb:{NFSU2_TR(0x5d4afb);
if(r1(R+518)){{goto L5d4b4a;}}
}
B5d4afd:L5d4afd:{c.instructions+=2;NFSU2_TR(0x5d4afd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d4aff:{NFSU2_TR(0x5d4aff);
if(r1(R+518)){{goto L5d4b4a;}}
}
B5d4b01:L5d4b01:{c.instructions+=13;NFSU2_TR(0x5d4b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4b04:{NFSU2_TR(0x5d4b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4b07:{NFSU2_TR(0x5d4b07);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d4b0b:{NFSU2_TR(0x5d4b0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4b0c:{NFSU2_TR(0x5d4b0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5d4b0f:{NFSU2_TR(0x5d4b0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4b10:{NFSU2_TR(0x5d4b10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d4b13:{NFSU2_TR(0x5d4b13);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5d4b16:{NFSU2_TR(0x5d4b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4b17:{NFSU2_TR(0x5d4b17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4b18:{NFSU2_TR(0x5d4b18);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b20:{NFSU2_TR(0x5d4b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b28:{NFSU2_TR(0x5d4b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4b2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4770u);}goto L5d4770;}
}
B5d4b2d:L5d4b2d:{c.instructions+=9;NFSU2_TR(0x5d4b2d);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4b30:{NFSU2_TR(0x5d4b30);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4b34:{NFSU2_TR(0x5d4b34);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4b38:{NFSU2_TR(0x5d4b38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d4b3b:{NFSU2_TR(0x5d4b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b3e:{NFSU2_TR(0x5d4b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b41:{NFSU2_TR(0x5d4b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b44:{NFSU2_TR(0x5d4b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b47:{NFSU2_TR(0x5d4b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b4a:L5d4b4a:{c.instructions+=5;NFSU2_TR(0x5d4b4a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5d4b4d:{NFSU2_TR(0x5d4b4d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d4b4e:{NFSU2_TR(0x5d4b4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5d4b51:{NFSU2_TR(0x5d4b51);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d4b53:{NFSU2_TR(0x5d4b53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4af8u);}goto L5d4af8;}}
}
B5d4b55:L5d4b55:{c.instructions+=8;NFSU2_TR(0x5d4b55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4b59:{NFSU2_TR(0x5d4b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4b5d:{NFSU2_TR(0x5d4b5d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
}
B5d4b63:{NFSU2_TR(0x5d4b63);
w1(R+512,carry<u32>(r4(R+12),u32(0x2ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B5d4b66:{NFSU2_TR(0x5d4b66);
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
B5d4b67:{NFSU2_TR(0x5d4b67);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b6b:{NFSU2_TR(0x5d4b6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b6f:{NFSU2_TR(0x5d4b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4af1u);}goto L5d4af1;}}
}
B5d4b71:L5d4b71:{c.instructions+=7;NFSU2_TR(0x5d4b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4b72:{NFSU2_TR(0x5d4b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4b73:{NFSU2_TR(0x5d4b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d4b74:{NFSU2_TR(0x5d4b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4b75:{NFSU2_TR(0x5d4b75);
__builtin_memmove((R+16),(R+20),4);
}
B5d4b77:{NFSU2_TR(0x5d4b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d4b78:{NFSU2_TR(0x5d4b78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4b80:L5d4b80:{c.instructions+=27;NFSU2_TR(0x5d4b80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4b81:{NFSU2_TR(0x5d4b81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4b82:{NFSU2_TR(0x5d4b82);
__builtin_memmove((R+24),(R+4),4);
}
B5d4b84:{NFSU2_TR(0x5d4b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d4b86:{NFSU2_TR(0x5d4b86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d4b88:{NFSU2_TR(0x5d4b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4b8b:{NFSU2_TR(0x5d4b8b);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B5d4b90:{NFSU2_TR(0x5d4b90);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d4b93:{NFSU2_TR(0x5d4b93);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4b97:{NFSU2_TR(0x5d4b97);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4b9b:{NFSU2_TR(0x5d4b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d4b9d:{NFSU2_TR(0x5d4b9d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d4ba1:{NFSU2_TR(0x5d4ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4ba4:{NFSU2_TR(0x5d4ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d4ba6:{NFSU2_TR(0x5d4ba6);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5d4bab:{NFSU2_TR(0x5d4bab);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d4bae:{NFSU2_TR(0x5d4bae);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4bb4:{NFSU2_TR(0x5d4bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4bb8:{NFSU2_TR(0x5d4bb8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4bbb:{NFSU2_TR(0x5d4bbb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4bbf:{NFSU2_TR(0x5d4bbf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d4bc3:{NFSU2_TR(0x5d4bc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4bc4:{NFSU2_TR(0x5d4bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d4bc7:{NFSU2_TR(0x5d4bc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4bc8:{NFSU2_TR(0x5d4bc8);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4bce:{NFSU2_TR(0x5d4bce);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4bd2:{NFSU2_TR(0x5d4bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4bd7ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5d4bd7:L5d4bd7:{c.instructions+=12;NFSU2_TR(0x5d4bd7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4bdb:{NFSU2_TR(0x5d4bdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d4bde:{NFSU2_TR(0x5d4bde);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5d4be0:{NFSU2_TR(0x5d4be0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4be4:{NFSU2_TR(0x5d4be4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4be8:{NFSU2_TR(0x5d4be8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4bea:{NFSU2_TR(0x5d4bea);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d4bec:{NFSU2_TR(0x5d4bec);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4bf0:{NFSU2_TR(0x5d4bf0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d4bf2:{NFSU2_TR(0x5d4bf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4bf4:{NFSU2_TR(0x5d4bf4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4bf7:{NFSU2_TR(0x5d4bf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4c19;}}
}
B5d4bf9:L5d4bf9:{c.instructions+=2;NFSU2_TR(0x5d4bf9);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4bff:{NFSU2_TR(0x5d4bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4c04ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d4c04:L5d4c04:{c.instructions+=9;NFSU2_TR(0x5d4c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d4c06:{NFSU2_TR(0x5d4c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d4c08:{NFSU2_TR(0x5d4c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4c0b:{NFSU2_TR(0x5d4c0b);
u8 U[47];
w4(U+39,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B5d4c0e:{NFSU2_TR(0x5d4c0e);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d4c12:{NFSU2_TR(0x5d4c12);
w1(R+0,u8(0x1ull));
}
B5d4c14:{NFSU2_TR(0x5d4c14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4c15:{NFSU2_TR(0x5d4c15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d4c16:{NFSU2_TR(0x5d4c16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4c19:L5d4c19:{c.instructions+=5;NFSU2_TR(0x5d4c19);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4c1b:{NFSU2_TR(0x5d4c1b);
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
B5d4c1d:{NFSU2_TR(0x5d4c1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4c1e:{NFSU2_TR(0x5d4c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d4c1f:{NFSU2_TR(0x5d4c1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4c30:L5d4c30:{c.instructions+=9;NFSU2_TR(0x5d4c30);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B5d4c35:{NFSU2_TR(0x5d4c35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4c36:{NFSU2_TR(0x5d4c36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4c37:{NFSU2_TR(0x5d4c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4688ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4c3d:{NFSU2_TR(0x5d4c3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5d4c40:{NFSU2_TR(0x5d4c40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4c41:{NFSU2_TR(0x5d4c41);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7a4660ull))));
}
B5d4c47:{NFSU2_TR(0x5d4c47);
w4(R+4,u32(0x8ull));
}
B5d4c4c:{NFSU2_TR(0x5d4c4c);
w4(R+28,u32(0x876d10ull));
}
B5d4c51:L5d4c51:{c.instructions+=1;NFSU2_TR(0x5d4c51);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d4c53;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4c51u);}goto L5d4c51;}
}
B5d4c53:L5d4c53:{c.instructions+=5;NFSU2_TR(0x5d4c53);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d4c55:{NFSU2_TR(0x5d4c55);
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
B5d4c57:{NFSU2_TR(0x5d4c57);
w4(R+28,u32(0x7a4740ull));
}
B5d4c5c:{NFSU2_TR(0x5d4c5c);
w4(R+12,u32(0x7a4750ull));
}
B5d4c61:{NFSU2_TR(0x5d4c61);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d4cac;}}
}
B5d4c63:L5d4c63:{c.instructions+=3;NFSU2_TR(0x5d4c63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4c64:{NFSU2_TR(0x5d4c64);
w4(R+4,u32(0x89e7a0ull));
}
B5d4c69:{NFSU2_TR(0x5d4c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d4c6eull));
TAIL_STATIC(0x5ed900u,5ed);
}
B5d4c6e:L5d4c6e:{c.instructions+=2;NFSU2_TR(0x5d4c6e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4c71:{NFSU2_TR(0x5d4c71);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5d4c96;}}
}
B5d4c73:L5d4c73:{c.instructions+=2;NFSU2_TR(0x5d4c73);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d4c77:{NFSU2_TR(0x5d4c77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4c96;}}
}
B5d4c79:L5d4c79:{c.instructions+=5;NFSU2_TR(0x5d4c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4c7c:{NFSU2_TR(0x5d4c7c);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5d4c82:{NFSU2_TR(0x5d4c82);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d4c88:{NFSU2_TR(0x5d4c88);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d4c8a:{NFSU2_TR(0x5d4c8a);
if(r1(R+518)){{goto L5d4c96;}}
}
B5d4c8c:L5d4c8c:{c.instructions+=3;NFSU2_TR(0x5d4c8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5d4c92:{NFSU2_TR(0x5d4c92);
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
B5d4c94:{NFSU2_TR(0x5d4c94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4ca2;}}
}
B5d4c96:L5d4c96:{c.instructions+=4;NFSU2_TR(0x5d4c96);
__builtin_memmove((R+0),gp(0x89e814),4);
}
B5d4c9b:{NFSU2_TR(0x5d4c9b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d4c9c:{NFSU2_TR(0x5d4c9c);
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
B5d4c9e:{NFSU2_TR(0x5d4c9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4c63u);}goto L5d4c63;}}
}
B5d4ca0:L5d4ca0:{c.instructions+=1;NFSU2_TR(0x5d4ca0);
{goto L5d4cac;}
}
B5d4ca2:L5d4ca2:{c.instructions+=2;NFSU2_TR(0x5d4ca2);
w4(R+28,u32(0x7a4760ull));
}
B5d4ca7:{NFSU2_TR(0x5d4ca7);
w4(R+12,u32(0x7a4770ull));
}
B5d4cac:L5d4cac:{c.instructions+=11;NFSU2_TR(0x5d4cac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4cb0:{NFSU2_TR(0x5d4cb0);
{u32 ea_=u32(u32(8875304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4cb6:{NFSU2_TR(0x5d4cb6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4cb9:{NFSU2_TR(0x5d4cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4cba:{NFSU2_TR(0x5d4cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4cbb:{NFSU2_TR(0x5d4cbb);
{u32 ea_=u32(u32(8875304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4cc1:{NFSU2_TR(0x5d4cc1);
{u32 ea_=u32(u32(8875308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4cc7:{NFSU2_TR(0x5d4cc7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4cca:{NFSU2_TR(0x5d4cca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d4ccb:{NFSU2_TR(0x5d4ccb);
{u32 ea_=u32(u32(8875308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4cd1:{NFSU2_TR(0x5d4cd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4ce0:L5d4ce0:{c.instructions+=34;NFSU2_TR(0x5d4ce0);
__builtin_memmove((R+0),(R+4),4);
}
B5d4ce2:{NFSU2_TR(0x5d4ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4ce6:{NFSU2_TR(0x5d4ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d4ce8:{NFSU2_TR(0x5d4ce8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d4cea:{NFSU2_TR(0x5d4cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4ced:{NFSU2_TR(0x5d4ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4cf0:{NFSU2_TR(0x5d4cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4cf3:{NFSU2_TR(0x5d4cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4cf6:{NFSU2_TR(0x5d4cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4cf9:{NFSU2_TR(0x5d4cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4cfc:{NFSU2_TR(0x5d4cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4cff:{NFSU2_TR(0x5d4cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d02:{NFSU2_TR(0x5d4d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d05:{NFSU2_TR(0x5d4d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d08:{NFSU2_TR(0x5d4d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d0b:{NFSU2_TR(0x5d4d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d0e:{NFSU2_TR(0x5d4d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d11:{NFSU2_TR(0x5d4d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d14:{NFSU2_TR(0x5d4d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d17:{NFSU2_TR(0x5d4d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d1a:{NFSU2_TR(0x5d4d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d1d:{NFSU2_TR(0x5d4d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d20:{NFSU2_TR(0x5d4d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d23:{NFSU2_TR(0x5d4d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d26:{NFSU2_TR(0x5d4d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d29:{NFSU2_TR(0x5d4d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d2c:{NFSU2_TR(0x5d4d2c);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4d2f:{NFSU2_TR(0x5d4d2f);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4d32:{NFSU2_TR(0x5d4d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4d35:{NFSU2_TR(0x5d4d35);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d4d37:{NFSU2_TR(0x5d4d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d4d3a:{NFSU2_TR(0x5d4d3a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4d3d:{NFSU2_TR(0x5d4d3d);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4d40:{NFSU2_TR(0x5d4d40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4d50:L5d4d50:{c.instructions+=26;NFSU2_TR(0x5d4d50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4d51:{NFSU2_TR(0x5d4d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4d55:{NFSU2_TR(0x5d4d55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4d59:{NFSU2_TR(0x5d4d59);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4d5c:{NFSU2_TR(0x5d4d5c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4d5f:{NFSU2_TR(0x5d4d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4d63:{NFSU2_TR(0x5d4d63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4d64:{NFSU2_TR(0x5d4d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4d68:{NFSU2_TR(0x5d4d68);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4d6a:{NFSU2_TR(0x5d4d6a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4d6c:{NFSU2_TR(0x5d4d6c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4d70:{NFSU2_TR(0x5d4d70);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4d73:{NFSU2_TR(0x5d4d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4d74:{NFSU2_TR(0x5d4d74);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4d77:{NFSU2_TR(0x5d4d77);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4d7b:{NFSU2_TR(0x5d4d7b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4d7d:{NFSU2_TR(0x5d4d7d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4d7f:{NFSU2_TR(0x5d4d7f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4d83:{NFSU2_TR(0x5d4d83);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d4d85:{NFSU2_TR(0x5d4d85);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d4d87:{NFSU2_TR(0x5d4d87);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4d8b:{NFSU2_TR(0x5d4d8b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d4d8d:{NFSU2_TR(0x5d4d8d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d4d93:{NFSU2_TR(0x5d4d93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4d95:{NFSU2_TR(0x5d4d95);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4d98:{NFSU2_TR(0x5d4d98);
if(r1(R+514)){{goto L5d4da4;}}
}
B5d4d9a:L5d4d9a:{c.instructions+=2;NFSU2_TR(0x5d4d9a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4d9c:{NFSU2_TR(0x5d4d9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4d9e:L5d4d9e:{c.instructions+=1;NFSU2_TR(0x5d4d9e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4da0:L5d4da0:{c.instructions+=3;NFSU2_TR(0x5d4da0);
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
B5d4da2:{NFSU2_TR(0x5d4da2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d4da3:{NFSU2_TR(0x5d4da3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4da4:L5d4da4:{c.instructions+=22;NFSU2_TR(0x5d4da4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4da7:{NFSU2_TR(0x5d4da7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4daa:{NFSU2_TR(0x5d4daa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4dae:{NFSU2_TR(0x5d4dae);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4db0:{NFSU2_TR(0x5d4db0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4db2:{NFSU2_TR(0x5d4db2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4db6:{NFSU2_TR(0x5d4db6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4dbc:{NFSU2_TR(0x5d4dbc);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5d4dbe:{NFSU2_TR(0x5d4dbe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4dc2:{NFSU2_TR(0x5d4dc2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4dc4:{NFSU2_TR(0x5d4dc4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4dc8:{NFSU2_TR(0x5d4dc8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d4dca:{NFSU2_TR(0x5d4dca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4dce:{NFSU2_TR(0x5d4dce);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d4dd0:{NFSU2_TR(0x5d4dd0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d4dd2:{NFSU2_TR(0x5d4dd2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4dd6:{NFSU2_TR(0x5d4dd6);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d4dd8:{NFSU2_TR(0x5d4dd8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4dda:{NFSU2_TR(0x5d4dda);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d4de0:{NFSU2_TR(0x5d4de0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4de2:{NFSU2_TR(0x5d4de2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4de5:{NFSU2_TR(0x5d4de5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4d9eu);}goto L5d4d9e;}}
}
B5d4de7:L5d4de7:{c.instructions+=4;NFSU2_TR(0x5d4de7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4ded:{NFSU2_TR(0x5d4ded);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4def:{NFSU2_TR(0x5d4def);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4df2:{NFSU2_TR(0x5d4df2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4da0u);}goto L5d4da0;}}
}
B5d4df4:L5d4df4:{c.instructions+=10;NFSU2_TR(0x5d4df4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4df8:{NFSU2_TR(0x5d4df8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4dfc:{NFSU2_TR(0x5d4dfc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e00:{NFSU2_TR(0x5d4e00);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4e04:{NFSU2_TR(0x5d4e04);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d4e06:{NFSU2_TR(0x5d4e06);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4e0a:{NFSU2_TR(0x5d4e0a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d4e10:{NFSU2_TR(0x5d4e10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4e12:{NFSU2_TR(0x5d4e12);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4e15:{NFSU2_TR(0x5d4e15);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4d9eu);}goto L5d4d9e;}}
}
B5d4e17:L5d4e17:{c.instructions+=4;NFSU2_TR(0x5d4e17);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4e1d:{NFSU2_TR(0x5d4e1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4e1f:{NFSU2_TR(0x5d4e1f);
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
B5d4e22:{NFSU2_TR(0x5d4e22);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4da0u);}goto L5d4da0;}}
}
B5d4e28:L5d4e28:{c.instructions+=3;NFSU2_TR(0x5d4e28);
w1(R+0,u8(0x1ull));
}
B5d4e2a:{NFSU2_TR(0x5d4e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d4e2b:{NFSU2_TR(0x5d4e2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4e30:L5d4e30:{c.instructions+=38;NFSU2_TR(0x5d4e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5d4e33:{NFSU2_TR(0x5d4e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4e37:{NFSU2_TR(0x5d4e37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4e3b:{NFSU2_TR(0x5d4e3b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e3d:{NFSU2_TR(0x5d4e3d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4e3f:{NFSU2_TR(0x5d4e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4e43:{NFSU2_TR(0x5d4e43);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4e47:{NFSU2_TR(0x5d4e47);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e4a:{NFSU2_TR(0x5d4e4a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4e4d:{NFSU2_TR(0x5d4e4d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4e51:{NFSU2_TR(0x5d4e51);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e53:{NFSU2_TR(0x5d4e53);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4e55:{NFSU2_TR(0x5d4e55);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e58:{NFSU2_TR(0x5d4e58);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4e5b:{NFSU2_TR(0x5d4e5b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e5d:{NFSU2_TR(0x5d4e5d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4e5f:{NFSU2_TR(0x5d4e5f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4e63:{NFSU2_TR(0x5d4e63);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e66:{NFSU2_TR(0x5d4e66);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d4e69:{NFSU2_TR(0x5d4e69);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4e6d:{NFSU2_TR(0x5d4e6d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e71:{NFSU2_TR(0x5d4e71);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d4e73:{NFSU2_TR(0x5d4e73);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e77:{NFSU2_TR(0x5d4e77);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d4e79:{NFSU2_TR(0x5d4e79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4e7b:{NFSU2_TR(0x5d4e7b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4e7f:{NFSU2_TR(0x5d4e7f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e83:{NFSU2_TR(0x5d4e83);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4e87:{NFSU2_TR(0x5d4e87);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e8b:{NFSU2_TR(0x5d4e8b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4e8f:{NFSU2_TR(0x5d4e8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4e91:{NFSU2_TR(0x5d4e91);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d4e93:{NFSU2_TR(0x5d4e93);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d4e97:{NFSU2_TR(0x5d4e97);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4e9b:{NFSU2_TR(0x5d4e9b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4ea1:{NFSU2_TR(0x5d4ea1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4ea3:{NFSU2_TR(0x5d4ea3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4ea6:{NFSU2_TR(0x5d4ea6);
if(r1(R+514)){{goto L5d4eca;}}
}
B5d4ea8:L5d4ea8:{c.instructions+=3;NFSU2_TR(0x5d4ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4eac:{NFSU2_TR(0x5d4eac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4eae:{NFSU2_TR(0x5d4eae);
if(r1(R+518)){{goto L5d4eb6;}}
}
B5d4eb0:L5d4eb0:{c.instructions+=1;NFSU2_TR(0x5d4eb0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d4eb6:L5d4eb6:{c.instructions+=10;NFSU2_TR(0x5d4eb6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d4eb8:{NFSU2_TR(0x5d4eb8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d4eba:{NFSU2_TR(0x5d4eba);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d4ebc:{NFSU2_TR(0x5d4ebc);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d4ebe:{NFSU2_TR(0x5d4ebe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4ec0:{NFSU2_TR(0x5d4ec0);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d4ec2:{NFSU2_TR(0x5d4ec2);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d4ec4:{NFSU2_TR(0x5d4ec4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4ec6:{NFSU2_TR(0x5d4ec6);
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
B5d4ec9:{NFSU2_TR(0x5d4ec9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4eca:L5d4eca:{c.instructions+=5;NFSU2_TR(0x5d4eca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4ece:{NFSU2_TR(0x5d4ece);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4ed4:{NFSU2_TR(0x5d4ed4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4ed6:{NFSU2_TR(0x5d4ed6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d4ed9:{NFSU2_TR(0x5d4ed9);
if(r1(R+514)){{goto L5d4f05;}}
}
B5d4edb:L5d4edb:{c.instructions+=5;NFSU2_TR(0x5d4edb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d4edf:{NFSU2_TR(0x5d4edf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4ee1:{NFSU2_TR(0x5d4ee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4ee3:{NFSU2_TR(0x5d4ee3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d4ee5:{NFSU2_TR(0x5d4ee5);
if(r1(R+518)){{goto L5d4eed;}}
}
B5d4ee7:L5d4ee7:{c.instructions+=1;NFSU2_TR(0x5d4ee7);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d4eed:L5d4eed:{c.instructions+=8;NFSU2_TR(0x5d4eed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4ef1:{NFSU2_TR(0x5d4ef1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4ef5:{NFSU2_TR(0x5d4ef5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4ef9:{NFSU2_TR(0x5d4ef9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4efd:{NFSU2_TR(0x5d4efd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4eff:{NFSU2_TR(0x5d4eff);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d4f01:{NFSU2_TR(0x5d4f01);
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
B5d4f04:{NFSU2_TR(0x5d4f04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4f05:L5d4f05:{c.instructions+=3;NFSU2_TR(0x5d4f05);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d4f09:{NFSU2_TR(0x5d4f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4f0b:{NFSU2_TR(0x5d4f0b);
if(r1(R+518)){{goto L5d4f27;}}
}
B5d4f0d:L5d4f0d:{c.instructions+=5;NFSU2_TR(0x5d4f0d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4f11:{NFSU2_TR(0x5d4f11);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d4f15:{NFSU2_TR(0x5d4f15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d4f17:{NFSU2_TR(0x5d4f17);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4f1a:{NFSU2_TR(0x5d4f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4f23;}}
}
B5d4f1c:L5d4f1c:{c.instructions+=2;NFSU2_TR(0x5d4f1c);
w4(R+0,u32(0x1ull));
}
B5d4f21:{NFSU2_TR(0x5d4f21);
{goto L5d4f25;}
}
B5d4f23:L5d4f23:{c.instructions+=1;NFSU2_TR(0x5d4f23);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d4f25:L5d4f25:{c.instructions+=1;NFSU2_TR(0x5d4f25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d4f27:L5d4f27:{c.instructions+=19;NFSU2_TR(0x5d4f27);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4f2b:{NFSU2_TR(0x5d4f2b);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B5d4f2d:{NFSU2_TR(0x5d4f2d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4f31:{NFSU2_TR(0x5d4f31);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d4f33:{NFSU2_TR(0x5d4f33);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B5d4f35:{NFSU2_TR(0x5d4f35);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d4f37:{NFSU2_TR(0x5d4f37);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d4f39:{NFSU2_TR(0x5d4f39);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5d4f3b:{NFSU2_TR(0x5d4f3b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4f3f:{NFSU2_TR(0x5d4f3f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4f43:{NFSU2_TR(0x5d4f43);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d4f47:{NFSU2_TR(0x5d4f47);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d4f4b:{NFSU2_TR(0x5d4f4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d4f4d:{NFSU2_TR(0x5d4f4d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d4f4f:{NFSU2_TR(0x5d4f4f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d4f51:{NFSU2_TR(0x5d4f51);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d4f53:{NFSU2_TR(0x5d4f53);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5d4f55:{NFSU2_TR(0x5d4f55);
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
B5d4f58:{NFSU2_TR(0x5d4f58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4f60:L5d4f60:{c.instructions+=3;NFSU2_TR(0x5d4f60);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d4f66:{NFSU2_TR(0x5d4f66);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4f68:{NFSU2_TR(0x5d4f68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4f79;}}
}
B5d4f6a:L5d4f6a:{c.instructions+=3;NFSU2_TR(0x5d4f6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d4f70:{NFSU2_TR(0x5d4f70);
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
B5d4f72:{NFSU2_TR(0x5d4f72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d4f79;}}
}
B5d4f74:L5d4f74:{c.instructions+=2;NFSU2_TR(0x5d4f74);
w1(R+0,u8(0x1ull));
}
B5d4f76:{NFSU2_TR(0x5d4f76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4f79:L5d4f79:{c.instructions+=4;NFSU2_TR(0x5d4f79);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d4f7b:{NFSU2_TR(0x5d4f7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4f7c:{NFSU2_TR(0x5d4f7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4f7d:{NFSU2_TR(0x5d4f7d);
if(r1(R+518)){{goto L5d4fa8;}}
}
B5d4f7f:L5d4f7f:{c.instructions+=4;NFSU2_TR(0x5d4f7f);
w4(R+8,u32(r1(R+8)));
}
B5d4f82:{NFSU2_TR(0x5d4f82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d4f84:{NFSU2_TR(0x5d4f84);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d4f86:{NFSU2_TR(0x5d4f86);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d4fa1;}}
}
B5d4f88:L5d4f88:{c.instructions+=2;NFSU2_TR(0x5d4f88);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4f8c:{NFSU2_TR(0x5d4f8c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xaeull))));
}
B5d4f92:L5d4f92:{c.instructions+=3;NFSU2_TR(0x5d4f92);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B5d4f95:{NFSU2_TR(0x5d4f95);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d4f97:{NFSU2_TR(0x5d4f97);
if(r1(R+518)){{goto L5d4fd4;}}
}
B5d4f99:L5d4f99:{c.instructions+=4;NFSU2_TR(0x5d4f99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d4f9a:{NFSU2_TR(0x5d4f9a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5d4f9d:{NFSU2_TR(0x5d4f9d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d4f9f:{NFSU2_TR(0x5d4f9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4f92u);}goto L5d4f92;}}
}
B5d4fa1:L5d4fa1:{c.instructions+=4;NFSU2_TR(0x5d4fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4fa2:{NFSU2_TR(0x5d4fa2);
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
B5d4fa4:{NFSU2_TR(0x5d4fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4fa5:{NFSU2_TR(0x5d4fa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4fa8:L5d4fa8:{c.instructions+=3;NFSU2_TR(0x5d4fa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d4fae:{NFSU2_TR(0x5d4fae);
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
B5d4fb0:{NFSU2_TR(0x5d4fb0);
if(r1(R+518)){{goto L5d4fd4;}}
}
B5d4fb2:L5d4fb2:{c.instructions+=4;NFSU2_TR(0x5d4fb2);
w4(R+8,u32(r1(R+8)));
}
B5d4fb5:{NFSU2_TR(0x5d4fb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d4fb7:{NFSU2_TR(0x5d4fb7);
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
B5d4fb9:{NFSU2_TR(0x5d4fb9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d4fd4;}}
}
B5d4fbb:L5d4fbb:{c.instructions+=2;NFSU2_TR(0x5d4fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4fbf:{NFSU2_TR(0x5d4fbf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xaeull))));
}
B5d4fc5:L5d4fc5:{c.instructions+=3;NFSU2_TR(0x5d4fc5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B5d4fc8:{NFSU2_TR(0x5d4fc8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d4fca:{NFSU2_TR(0x5d4fca);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4fa1u);}goto L5d4fa1;}}
}
B5d4fcc:L5d4fcc:{c.instructions+=4;NFSU2_TR(0x5d4fcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d4fcd:{NFSU2_TR(0x5d4fcd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5d4fd0:{NFSU2_TR(0x5d4fd0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d4fd2:{NFSU2_TR(0x5d4fd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d4fc5u);}goto L5d4fc5;}}
}
B5d4fd4:L5d4fd4:{c.instructions+=4;NFSU2_TR(0x5d4fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d4fd5:{NFSU2_TR(0x5d4fd5);
w1(R+0,u8(0x1ull));
}
B5d4fd7:{NFSU2_TR(0x5d4fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d4fd8:{NFSU2_TR(0x5d4fd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d4fe0:L5d4fe0:{c.instructions+=4;NFSU2_TR(0x5d4fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d4fe6:{NFSU2_TR(0x5d4fe6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d4fe8:{NFSU2_TR(0x5d4fe8);
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
B5d4fea:{NFSU2_TR(0x5d4fea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5d500au,5d5);}
}
B5d4fec:L5d4fec:{c.instructions+=6;NFSU2_TR(0x5d4fec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d4fee:{NFSU2_TR(0x5d4fee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d4fef:{NFSU2_TR(0x5d4fef);
}
B5d4ff0:{NFSU2_TR(0x5d4ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x49cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d4ff6:{NFSU2_TR(0x5d4ff6);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5d4ffb:{NFSU2_TR(0x5d4ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
TAIL_STATIC(0x5d5001u,5d5);
}
XIT:NFSU2_TR_EXIT(0x5d4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
