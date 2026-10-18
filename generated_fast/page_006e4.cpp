#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e5(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 page_6e4(Cpu& c){return body_6e4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e4002:goto L6e4002;
case 0x6e4004:c.instructions+=2;goto B6e4004;
case 0x6e4007:c.instructions+=1;goto B6e4007;
case 0x6e4009:goto L6e4009;
case 0x6e400c:c.instructions+=4;goto B6e400c;
case 0x6e400f:c.instructions+=3;goto B6e400f;
case 0x6e4012:c.instructions+=2;goto B6e4012;
case 0x6e4014:c.instructions+=1;goto B6e4014;
case 0x6e4016:goto L6e4016;
case 0x6e4018:c.instructions+=1;goto B6e4018;
case 0x6e401a:goto L6e401a;
case 0x6e401c:c.instructions+=2;goto B6e401c;
case 0x6e401f:c.instructions+=1;goto B6e401f;
case 0x6e4023:goto L6e4023;
case 0x6e4025:c.instructions+=4;goto B6e4025;
case 0x6e4029:c.instructions+=3;goto B6e4029;
case 0x6e402b:c.instructions+=2;goto B6e402b;
case 0x6e402e:c.instructions+=1;goto B6e402e;
case 0x6e4030:goto L6e4030;
case 0x6e4031:c.instructions+=3;goto B6e4031;
case 0x6e4034:c.instructions+=2;goto B6e4034;
case 0x6e4036:c.instructions+=1;goto B6e4036;
case 0x6e4038:goto L6e4038;
case 0x6e403a:goto L6e403a;
case 0x6e403b:c.instructions+=1;goto B6e403b;
case 0x6e403d:goto L6e403d;
case 0x6e4040:c.instructions+=1;goto B6e4040;
case 0x6e4042:goto L6e4042;
case 0x6e4045:goto L6e4045;
case 0x6e4049:c.instructions+=6;goto B6e4049;
case 0x6e404d:c.instructions+=5;goto B6e404d;
case 0x6e4051:c.instructions+=4;goto B6e4051;
case 0x6e4053:c.instructions+=3;goto B6e4053;
case 0x6e4055:c.instructions+=2;goto B6e4055;
case 0x6e4058:c.instructions+=1;goto B6e4058;
case 0x6e405a:goto L6e405a;
case 0x6e405c:c.instructions+=1;goto B6e405c;
case 0x6e405e:goto L6e405e;
case 0x6e4061:c.instructions+=1;goto B6e4061;
case 0x6e4063:goto L6e4063;
case 0x6e4065:c.instructions+=2;goto B6e4065;
case 0x6e4067:c.instructions+=1;goto B6e4067;
case 0x6e4069:goto L6e4069;
case 0x6e406d:c.instructions+=3;goto B6e406d;
case 0x6e406f:c.instructions+=2;goto B6e406f;
case 0x6e4072:c.instructions+=1;goto B6e4072;
case 0x6e4076:goto L6e4076;
case 0x6e4078:c.instructions+=4;goto B6e4078;
case 0x6e407c:c.instructions+=3;goto B6e407c;
case 0x6e407e:c.instructions+=2;goto B6e407e;
case 0x6e4081:c.instructions+=1;goto B6e4081;
case 0x6e4083:goto L6e4083;
case 0x6e4084:c.instructions+=3;goto B6e4084;
case 0x6e4087:c.instructions+=2;goto B6e4087;
case 0x6e4089:c.instructions+=1;goto B6e4089;
case 0x6e408b:goto L6e408b;
case 0x6e408c:c.instructions+=2;goto B6e408c;
case 0x6e408e:c.instructions+=1;goto B6e408e;
case 0x6e4090:goto L6e4090;
case 0x6e4094:c.instructions+=4;goto B6e4094;
case 0x6e4098:c.instructions+=3;goto B6e4098;
case 0x6e409a:c.instructions+=2;goto B6e409a;
case 0x6e409d:c.instructions+=1;goto B6e409d;
case 0x6e409f:goto L6e409f;
case 0x6e40a1:c.instructions+=1;goto B6e40a1;
case 0x6e40a3:goto L6e40a3;
case 0x6e40a7:c.instructions+=5;goto B6e40a7;
case 0x6e40a9:c.instructions+=4;goto B6e40a9;
case 0x6e40ac:c.instructions+=3;goto B6e40ac;
case 0x6e40ae:c.instructions+=2;goto B6e40ae;
case 0x6e40b0:c.instructions+=1;goto B6e40b0;
case 0x6e40b2:goto L6e40b2;
case 0x6e40b4:c.instructions+=4;goto B6e40b4;
case 0x6e40b8:c.instructions+=3;goto B6e40b8;
case 0x6e40bb:c.instructions+=2;goto B6e40bb;
case 0x6e40bd:c.instructions+=1;goto B6e40bd;
case 0x6e40bf:goto L6e40bf;
case 0x6e40c3:c.instructions+=5;goto B6e40c3;
case 0x6e40c5:c.instructions+=4;goto B6e40c5;
case 0x6e40c6:c.instructions+=3;goto B6e40c6;
case 0x6e40c7:c.instructions+=2;goto B6e40c7;
case 0x6e40c8:c.instructions+=1;goto B6e40c8;
case 0x6e40ca:goto L6e40ca;
case 0x6e40cd:c.instructions+=2;goto B6e40cd;
case 0x6e40ce:c.instructions+=1;goto B6e40ce;
case 0x6e40d0:goto L6e40d0;
case 0x6e40d4:goto L6e40d4;
case 0x6e40da:goto L6e40da;
case 0x6e40dc:c.instructions+=2;goto B6e40dc;
case 0x6e40de:c.instructions+=1;goto B6e40de;
case 0x6e40e0:goto L6e40e0;
case 0x6e40e4:c.instructions+=4;goto B6e40e4;
case 0x6e40e6:c.instructions+=3;goto B6e40e6;
case 0x6e40e9:c.instructions+=2;goto B6e40e9;
case 0x6e40eb:c.instructions+=1;goto B6e40eb;
case 0x6e40f0:goto L6e40f0;
case 0x6e40f3:c.instructions+=4;goto B6e40f3;
case 0x6e40f7:c.instructions+=3;goto B6e40f7;
case 0x6e40f9:c.instructions+=2;goto B6e40f9;
case 0x6e40fc:c.instructions+=1;goto B6e40fc;
case 0x6e40fe:goto L6e40fe;
case 0x6e4100:c.instructions+=4;goto B6e4100;
case 0x6e4104:c.instructions+=3;goto B6e4104;
case 0x6e4107:c.instructions+=2;goto B6e4107;
case 0x6e4109:c.instructions+=1;goto B6e4109;
case 0x6e410b:goto L6e410b;
case 0x6e410f:c.instructions+=5;goto B6e410f;
case 0x6e4111:c.instructions+=4;goto B6e4111;
case 0x6e4112:c.instructions+=3;goto B6e4112;
case 0x6e4113:c.instructions+=2;goto B6e4113;
case 0x6e4114:c.instructions+=1;goto B6e4114;
case 0x6e4116:goto L6e4116;
case 0x6e4117:c.instructions+=3;goto B6e4117;
case 0x6e411a:c.instructions+=2;goto B6e411a;
case 0x6e411c:c.instructions+=1;goto B6e411c;
case 0x6e411e:goto L6e411e;
case 0x6e4120:c.instructions+=4;goto B6e4120;
case 0x6e4124:c.instructions+=3;goto B6e4124;
case 0x6e4126:c.instructions+=2;goto B6e4126;
case 0x6e4127:c.instructions+=1;goto B6e4127;
case 0x6e4129:goto L6e4129;
case 0x6e412d:c.instructions+=9;goto B6e412d;
case 0x6e4131:c.instructions+=8;goto B6e4131;
case 0x6e4132:c.instructions+=7;goto B6e4132;
case 0x6e4133:c.instructions+=6;goto B6e4133;
case 0x6e4135:c.instructions+=5;goto B6e4135;
case 0x6e4136:c.instructions+=4;goto B6e4136;
case 0x6e4138:c.instructions+=3;goto B6e4138;
case 0x6e4139:c.instructions+=2;goto B6e4139;
case 0x6e413a:c.instructions+=1;goto B6e413a;
case 0x6e413d:goto L6e413d;
case 0x6e4141:c.instructions+=7;goto B6e4141;
case 0x6e4145:c.instructions+=6;goto B6e4145;
case 0x6e4146:c.instructions+=5;goto B6e4146;
case 0x6e4147:c.instructions+=4;goto B6e4147;
case 0x6e4149:c.instructions+=3;goto B6e4149;
case 0x6e414a:c.instructions+=2;goto B6e414a;
case 0x6e414b:c.instructions+=1;goto B6e414b;
case 0x6e4150:goto L6e4150;
case 0x6e4156:c.instructions+=35;goto B6e4156;
case 0x6e415d:c.instructions+=34;goto B6e415d;
case 0x6e4160:c.instructions+=33;goto B6e4160;
case 0x6e4163:c.instructions+=32;goto B6e4163;
case 0x6e4164:c.instructions+=31;goto B6e4164;
case 0x6e4165:c.instructions+=30;goto B6e4165;
case 0x6e4166:c.instructions+=29;goto B6e4166;
case 0x6e4169:c.instructions+=28;goto B6e4169;
case 0x6e416c:c.instructions+=27;goto B6e416c;
case 0x6e416f:c.instructions+=26;goto B6e416f;
case 0x6e4173:c.instructions+=25;goto B6e4173;
case 0x6e4176:c.instructions+=24;goto B6e4176;
case 0x6e417a:c.instructions+=23;goto B6e417a;
case 0x6e417e:c.instructions+=22;goto B6e417e;
case 0x6e4186:c.instructions+=21;goto B6e4186;
case 0x6e418e:c.instructions+=20;goto B6e418e;
case 0x6e4192:c.instructions+=19;goto B6e4192;
case 0x6e4196:c.instructions+=18;goto B6e4196;
case 0x6e419b:c.instructions+=17;goto B6e419b;
case 0x6e419f:c.instructions+=16;goto B6e419f;
case 0x6e41a3:c.instructions+=15;goto B6e41a3;
case 0x6e41aa:c.instructions+=14;goto B6e41aa;
case 0x6e41ae:c.instructions+=13;goto B6e41ae;
case 0x6e41b1:c.instructions+=12;goto B6e41b1;
case 0x6e41b5:c.instructions+=11;goto B6e41b5;
case 0x6e41b9:c.instructions+=10;goto B6e41b9;
case 0x6e41bc:c.instructions+=9;goto B6e41bc;
case 0x6e41c0:c.instructions+=8;goto B6e41c0;
case 0x6e41c2:c.instructions+=7;goto B6e41c2;
case 0x6e41c4:c.instructions+=6;goto B6e41c4;
case 0x6e41c6:c.instructions+=5;goto B6e41c6;
case 0x6e41ca:c.instructions+=4;goto B6e41ca;
case 0x6e41ce:c.instructions+=3;goto B6e41ce;
case 0x6e41d2:c.instructions+=2;goto B6e41d2;
case 0x6e41d6:c.instructions+=1;goto B6e41d6;
case 0x6e41dc:goto L6e41dc;
case 0x6e41dd:c.instructions+=1;goto B6e41dd;
case 0x6e41e0:goto L6e41e0;
case 0x6e41e3:c.instructions+=6;goto B6e41e3;
case 0x6e41e6:c.instructions+=5;goto B6e41e6;
case 0x6e41e9:c.instructions+=4;goto B6e41e9;
case 0x6e41eb:c.instructions+=3;goto B6e41eb;
case 0x6e41ef:c.instructions+=2;goto B6e41ef;
case 0x6e41f1:c.instructions+=1;goto B6e41f1;
case 0x6e41f5:goto L6e41f5;
case 0x6e41fa:c.instructions+=3;goto B6e41fa;
case 0x6e41fc:c.instructions+=2;goto B6e41fc;
case 0x6e41fe:c.instructions+=1;goto B6e41fe;
case 0x6e4200:goto L6e4200;
case 0x6e4202:goto L6e4202;
case 0x6e4206:c.instructions+=18;goto B6e4206;
case 0x6e4209:c.instructions+=17;goto B6e4209;
case 0x6e420b:c.instructions+=16;goto B6e420b;
case 0x6e420d:c.instructions+=15;goto B6e420d;
case 0x6e420f:c.instructions+=14;goto B6e420f;
case 0x6e4214:c.instructions+=13;goto B6e4214;
case 0x6e4216:c.instructions+=12;goto B6e4216;
case 0x6e4218:c.instructions+=11;goto B6e4218;
case 0x6e421a:c.instructions+=10;goto B6e421a;
case 0x6e421c:c.instructions+=9;goto B6e421c;
case 0x6e421d:c.instructions+=8;goto B6e421d;
case 0x6e421f:c.instructions+=7;goto B6e421f;
case 0x6e4221:c.instructions+=6;goto B6e4221;
case 0x6e4225:c.instructions+=5;goto B6e4225;
case 0x6e4227:c.instructions+=4;goto B6e4227;
case 0x6e4229:c.instructions+=3;goto B6e4229;
case 0x6e422c:c.instructions+=2;goto B6e422c;
case 0x6e4230:c.instructions+=1;goto B6e4230;
case 0x6e4232:goto L6e4232;
case 0x6e4236:c.instructions+=3;goto B6e4236;
case 0x6e4238:c.instructions+=2;goto B6e4238;
case 0x6e4239:c.instructions+=1;goto B6e4239;
case 0x6e423d:goto L6e423d;
case 0x6e423f:c.instructions+=1;goto B6e423f;
case 0x6e4241:goto L6e4241;
case 0x6e4245:c.instructions+=15;goto B6e4245;
case 0x6e4249:c.instructions+=14;goto B6e4249;
case 0x6e424c:c.instructions+=13;goto B6e424c;
case 0x6e4250:c.instructions+=12;goto B6e4250;
case 0x6e4253:c.instructions+=11;goto B6e4253;
case 0x6e4255:c.instructions+=10;goto B6e4255;
case 0x6e4259:c.instructions+=9;goto B6e4259;
case 0x6e425c:c.instructions+=8;goto B6e425c;
case 0x6e425f:c.instructions+=7;goto B6e425f;
case 0x6e4261:c.instructions+=6;goto B6e4261;
case 0x6e4265:c.instructions+=5;goto B6e4265;
case 0x6e4269:c.instructions+=4;goto B6e4269;
case 0x6e426a:c.instructions+=3;goto B6e426a;
case 0x6e426c:c.instructions+=2;goto B6e426c;
case 0x6e4270:c.instructions+=1;goto B6e4270;
case 0x6e4276:goto L6e4276;
case 0x6e4277:goto L6e4277;
case 0x6e427e:c.instructions+=7;goto B6e427e;
case 0x6e4282:c.instructions+=6;goto B6e4282;
case 0x6e4285:c.instructions+=5;goto B6e4285;
case 0x6e4287:c.instructions+=4;goto B6e4287;
case 0x6e4288:c.instructions+=3;goto B6e4288;
case 0x6e4289:c.instructions+=2;goto B6e4289;
case 0x6e428a:c.instructions+=1;goto B6e428a;
case 0x6e428c:goto L6e428c;
case 0x6e428e:c.instructions+=7;goto B6e428e;
case 0x6e4292:c.instructions+=6;goto B6e4292;
case 0x6e4293:c.instructions+=5;goto B6e4293;
case 0x6e4297:c.instructions+=4;goto B6e4297;
case 0x6e4298:c.instructions+=3;goto B6e4298;
case 0x6e429f:c.instructions+=2;goto B6e429f;
case 0x6e42a0:c.instructions+=1;goto B6e42a0;
case 0x6e42a2:goto L6e42a2;
case 0x6e42a8:c.instructions+=1;goto B6e42a8;
case 0x6e42b0:goto L6e42b0;
case 0x6e42b4:c.instructions+=11;goto B6e42b4;
case 0x6e42b8:c.instructions+=10;goto B6e42b8;
case 0x6e42ba:c.instructions+=9;goto B6e42ba;
case 0x6e42bb:c.instructions+=8;goto B6e42bb;
case 0x6e42bc:c.instructions+=7;goto B6e42bc;
case 0x6e42be:c.instructions+=6;goto B6e42be;
case 0x6e42c1:c.instructions+=5;goto B6e42c1;
case 0x6e42c3:c.instructions+=4;goto B6e42c3;
case 0x6e42c4:c.instructions+=3;goto B6e42c4;
case 0x6e42c8:c.instructions+=2;goto B6e42c8;
case 0x6e42cb:c.instructions+=1;goto B6e42cb;
case 0x6e42cd:goto L6e42cd;
case 0x6e42cf:c.instructions+=2;goto B6e42cf;
case 0x6e42d1:c.instructions+=1;goto B6e42d1;
case 0x6e42d3:goto L6e42d3;
case 0x6e42d7:goto L6e42d7;
case 0x6e42d9:c.instructions+=4;goto B6e42d9;
case 0x6e42dd:c.instructions+=3;goto B6e42dd;
case 0x6e42df:c.instructions+=2;goto B6e42df;
case 0x6e42e2:c.instructions+=1;goto B6e42e2;
case 0x6e42e4:goto L6e42e4;
case 0x6e42e5:c.instructions+=3;goto B6e42e5;
case 0x6e42e8:c.instructions+=2;goto B6e42e8;
case 0x6e42ea:c.instructions+=1;goto B6e42ea;
case 0x6e42ec:goto L6e42ec;
case 0x6e42ed:c.instructions+=1;goto B6e42ed;
case 0x6e42ef:goto L6e42ef;
case 0x6e42f1:c.instructions+=5;goto B6e42f1;
case 0x6e42f3:c.instructions+=4;goto B6e42f3;
case 0x6e42f5:c.instructions+=3;goto B6e42f5;
case 0x6e42f8:c.instructions+=2;goto B6e42f8;
case 0x6e42f9:c.instructions+=1;goto B6e42f9;
case 0x6e42fb:goto L6e42fb;
case 0x6e42fe:c.instructions+=1;goto B6e42fe;
case 0x6e4302:goto L6e4302;
case 0x6e4305:c.instructions+=4;goto B6e4305;
case 0x6e4309:c.instructions+=3;goto B6e4309;
case 0x6e430b:c.instructions+=2;goto B6e430b;
case 0x6e430e:c.instructions+=1;goto B6e430e;
case 0x6e4310:goto L6e4310;
case 0x6e4312:c.instructions+=4;goto B6e4312;
case 0x6e4316:c.instructions+=3;goto B6e4316;
case 0x6e4318:c.instructions+=2;goto B6e4318;
case 0x6e431b:c.instructions+=1;goto B6e431b;
case 0x6e431d:goto L6e431d;
case 0x6e4320:c.instructions+=4;goto B6e4320;
case 0x6e4324:c.instructions+=3;goto B6e4324;
case 0x6e4326:c.instructions+=2;goto B6e4326;
case 0x6e4329:c.instructions+=1;goto B6e4329;
case 0x6e432b:goto L6e432b;
case 0x6e432e:c.instructions+=4;goto B6e432e;
case 0x6e4332:c.instructions+=3;goto B6e4332;
case 0x6e4334:c.instructions+=2;goto B6e4334;
case 0x6e4337:c.instructions+=1;goto B6e4337;
case 0x6e4339:goto L6e4339;
case 0x6e433c:c.instructions+=4;goto B6e433c;
case 0x6e433f:c.instructions+=3;goto B6e433f;
case 0x6e4342:c.instructions+=2;goto B6e4342;
case 0x6e4344:c.instructions+=1;goto B6e4344;
case 0x6e4346:goto L6e4346;
case 0x6e4348:c.instructions+=1;goto B6e4348;
case 0x6e434a:goto L6e434a;
case 0x6e434e:c.instructions+=1;goto B6e434e;
case 0x6e4350:goto L6e4350;
case 0x6e4352:c.instructions+=4;goto B6e4352;
case 0x6e4356:c.instructions+=3;goto B6e4356;
case 0x6e4358:c.instructions+=2;goto B6e4358;
case 0x6e435b:c.instructions+=1;goto B6e435b;
case 0x6e435d:goto L6e435d;
case 0x6e435e:c.instructions+=3;goto B6e435e;
case 0x6e4361:c.instructions+=2;goto B6e4361;
case 0x6e4363:c.instructions+=1;goto B6e4363;
case 0x6e4365:goto L6e4365;
case 0x6e4367:goto L6e4367;
case 0x6e4368:c.instructions+=1;goto B6e4368;
case 0x6e436a:goto L6e436a;
case 0x6e436d:c.instructions+=1;goto B6e436d;
case 0x6e436f:goto L6e436f;
case 0x6e4372:goto L6e4372;
case 0x6e4376:c.instructions+=6;goto B6e4376;
case 0x6e4378:c.instructions+=5;goto B6e4378;
case 0x6e437c:c.instructions+=4;goto B6e437c;
case 0x6e437e:c.instructions+=3;goto B6e437e;
case 0x6e4380:c.instructions+=2;goto B6e4380;
case 0x6e4383:c.instructions+=1;goto B6e4383;
case 0x6e4385:goto L6e4385;
case 0x6e4387:c.instructions+=1;goto B6e4387;
case 0x6e4389:goto L6e4389;
case 0x6e438c:c.instructions+=1;goto B6e438c;
case 0x6e438e:goto L6e438e;
case 0x6e4390:c.instructions+=2;goto B6e4390;
case 0x6e4392:c.instructions+=1;goto B6e4392;
case 0x6e4394:goto L6e4394;
case 0x6e4398:goto L6e4398;
case 0x6e439a:c.instructions+=3;goto B6e439a;
case 0x6e439c:c.instructions+=2;goto B6e439c;
case 0x6e439f:c.instructions+=1;goto B6e439f;
case 0x6e43a1:goto L6e43a1;
case 0x6e43a2:c.instructions+=3;goto B6e43a2;
case 0x6e43a5:c.instructions+=2;goto B6e43a5;
case 0x6e43a7:c.instructions+=1;goto B6e43a7;
case 0x6e43a9:goto L6e43a9;
case 0x6e43aa:c.instructions+=2;goto B6e43aa;
case 0x6e43ac:c.instructions+=1;goto B6e43ac;
case 0x6e43ae:goto L6e43ae;
case 0x6e43b2:c.instructions+=3;goto B6e43b2;
case 0x6e43b4:c.instructions+=2;goto B6e43b4;
case 0x6e43b7:c.instructions+=1;goto B6e43b7;
case 0x6e43b9:goto L6e43b9;
case 0x6e43bb:c.instructions+=1;goto B6e43bb;
case 0x6e43bd:goto L6e43bd;
case 0x6e43bf:c.instructions+=3;goto B6e43bf;
case 0x6e43c3:c.instructions+=2;goto B6e43c3;
case 0x6e43c5:c.instructions+=1;goto B6e43c5;
case 0x6e43d0:goto L6e43d0;
case 0x6e43d4:c.instructions+=8;goto B6e43d4;
case 0x6e43d8:c.instructions+=7;goto B6e43d8;
case 0x6e43dc:c.instructions+=6;goto B6e43dc;
case 0x6e43dd:c.instructions+=5;goto B6e43dd;
case 0x6e43de:c.instructions+=4;goto B6e43de;
case 0x6e43df:c.instructions+=3;goto B6e43df;
case 0x6e43e0:c.instructions+=2;goto B6e43e0;
case 0x6e43e2:c.instructions+=1;goto B6e43e2;
case 0x6e43e7:goto L6e43e7;
case 0x6e43ea:c.instructions+=2;goto B6e43ea;
case 0x6e43eb:c.instructions+=1;goto B6e43eb;
case 0x6e43ed:goto L6e43ed;
case 0x6e43f1:goto L6e43f1;
case 0x6e43f7:goto L6e43f7;
case 0x6e43f9:c.instructions+=2;goto B6e43f9;
case 0x6e43fb:c.instructions+=1;goto B6e43fb;
case 0x6e43fd:goto L6e43fd;
case 0x6e4401:goto L6e4401;
case 0x6e4404:c.instructions+=3;goto B6e4404;
case 0x6e4406:c.instructions+=2;goto B6e4406;
case 0x6e4409:c.instructions+=1;goto B6e4409;
case 0x6e440b:goto L6e440b;
case 0x6e440f:c.instructions+=8;goto B6e440f;
case 0x6e4413:c.instructions+=7;goto B6e4413;
case 0x6e4417:c.instructions+=6;goto B6e4417;
case 0x6e4418:c.instructions+=5;goto B6e4418;
case 0x6e4419:c.instructions+=4;goto B6e4419;
case 0x6e441a:c.instructions+=3;goto B6e441a;
case 0x6e441b:c.instructions+=2;goto B6e441b;
case 0x6e441d:c.instructions+=1;goto B6e441d;
case 0x6e4422:goto L6e4422;
case 0x6e4423:c.instructions+=3;goto B6e4423;
case 0x6e4426:c.instructions+=2;goto B6e4426;
case 0x6e4428:c.instructions+=1;goto B6e4428;
case 0x6e442a:goto L6e442a;
case 0x6e442e:goto L6e442e;
case 0x6e4430:c.instructions+=3;goto B6e4430;
case 0x6e4432:c.instructions+=2;goto B6e4432;
case 0x6e4433:c.instructions+=1;goto B6e4433;
case 0x6e4435:goto L6e4435;
case 0x6e4439:c.instructions+=7;goto B6e4439;
case 0x6e443a:c.instructions+=6;goto B6e443a;
case 0x6e443c:c.instructions+=5;goto B6e443c;
case 0x6e443e:c.instructions+=4;goto B6e443e;
case 0x6e443f:c.instructions+=3;goto B6e443f;
case 0x6e4440:c.instructions+=2;goto B6e4440;
case 0x6e4441:c.instructions+=1;goto B6e4441;
case 0x6e4444:goto L6e4444;
case 0x6e4448:c.instructions+=5;goto B6e4448;
case 0x6e4449:c.instructions+=4;goto B6e4449;
case 0x6e444b:c.instructions+=3;goto B6e444b;
case 0x6e444c:c.instructions+=2;goto B6e444c;
case 0x6e444d:c.instructions+=1;goto B6e444d;
case 0x6e4450:goto L6e4450;
case 0x6e4454:c.instructions+=17;goto B6e4454;
case 0x6e4458:c.instructions+=16;goto B6e4458;
case 0x6e445a:c.instructions+=15;goto B6e445a;
case 0x6e445c:c.instructions+=14;goto B6e445c;
case 0x6e445f:c.instructions+=13;goto B6e445f;
case 0x6e4462:c.instructions+=12;goto B6e4462;
case 0x6e4464:c.instructions+=11;goto B6e4464;
case 0x6e4467:c.instructions+=10;goto B6e4467;
case 0x6e446a:c.instructions+=9;goto B6e446a;
case 0x6e446c:c.instructions+=8;goto B6e446c;
case 0x6e446f:c.instructions+=7;goto B6e446f;
case 0x6e4472:c.instructions+=6;goto B6e4472;
case 0x6e4474:c.instructions+=5;goto B6e4474;
case 0x6e447a:c.instructions+=4;goto B6e447a;
case 0x6e447c:c.instructions+=3;goto B6e447c;
case 0x6e447f:c.instructions+=2;goto B6e447f;
case 0x6e4483:c.instructions+=1;goto B6e4483;
case 0x6e4485:goto L6e4485;
case 0x6e4487:c.instructions+=19;goto B6e4487;
case 0x6e4489:c.instructions+=18;goto B6e4489;
case 0x6e448d:c.instructions+=17;goto B6e448d;
case 0x6e448f:c.instructions+=16;goto B6e448f;
case 0x6e4491:c.instructions+=15;goto B6e4491;
case 0x6e4494:c.instructions+=14;goto B6e4494;
case 0x6e4497:c.instructions+=13;goto B6e4497;
case 0x6e449b:c.instructions+=12;goto B6e449b;
case 0x6e449e:c.instructions+=11;goto B6e449e;
case 0x6e44a1:c.instructions+=10;goto B6e44a1;
case 0x6e44a4:c.instructions+=9;goto B6e44a4;
case 0x6e44a7:c.instructions+=8;goto B6e44a7;
case 0x6e44ab:c.instructions+=7;goto B6e44ab;
case 0x6e44ae:c.instructions+=6;goto B6e44ae;
case 0x6e44b1:c.instructions+=5;goto B6e44b1;
case 0x6e44b4:c.instructions+=4;goto B6e44b4;
case 0x6e44b7:c.instructions+=3;goto B6e44b7;
case 0x6e44bb:c.instructions+=2;goto B6e44bb;
case 0x6e44be:c.instructions+=1;goto B6e44be;
case 0x6e44c0:goto L6e44c0;
case 0x6e44c2:c.instructions+=18;goto B6e44c2;
case 0x6e44c4:c.instructions+=17;goto B6e44c4;
case 0x6e44c8:c.instructions+=16;goto B6e44c8;
case 0x6e44ca:c.instructions+=15;goto B6e44ca;
case 0x6e44cc:c.instructions+=14;goto B6e44cc;
case 0x6e44cf:c.instructions+=13;goto B6e44cf;
case 0x6e44d2:c.instructions+=12;goto B6e44d2;
case 0x6e44d6:c.instructions+=11;goto B6e44d6;
case 0x6e44d9:c.instructions+=10;goto B6e44d9;
case 0x6e44dc:c.instructions+=9;goto B6e44dc;
case 0x6e44df:c.instructions+=8;goto B6e44df;
case 0x6e44e2:c.instructions+=7;goto B6e44e2;
case 0x6e44e6:c.instructions+=6;goto B6e44e6;
case 0x6e44e9:c.instructions+=5;goto B6e44e9;
case 0x6e44ec:c.instructions+=4;goto B6e44ec;
case 0x6e44ef:c.instructions+=3;goto B6e44ef;
case 0x6e44f2:c.instructions+=2;goto B6e44f2;
case 0x6e44f6:c.instructions+=1;goto B6e44f6;
case 0x6e44f9:goto L6e44f9;
case 0x6e44fc:c.instructions+=33;goto B6e44fc;
case 0x6e44ff:c.instructions+=32;goto B6e44ff;
case 0x6e4502:c.instructions+=31;goto B6e4502;
case 0x6e4505:c.instructions+=30;goto B6e4505;
case 0x6e4507:c.instructions+=29;goto B6e4507;
case 0x6e4509:c.instructions+=28;goto B6e4509;
case 0x6e450b:c.instructions+=27;goto B6e450b;
case 0x6e450d:c.instructions+=26;goto B6e450d;
case 0x6e450f:c.instructions+=25;goto B6e450f;
case 0x6e4511:c.instructions+=24;goto B6e4511;
case 0x6e4513:c.instructions+=23;goto B6e4513;
case 0x6e4515:c.instructions+=22;goto B6e4515;
case 0x6e4517:c.instructions+=21;goto B6e4517;
case 0x6e4519:c.instructions+=20;goto B6e4519;
case 0x6e451b:c.instructions+=19;goto B6e451b;
case 0x6e451d:c.instructions+=18;goto B6e451d;
case 0x6e451f:c.instructions+=17;goto B6e451f;
case 0x6e4521:c.instructions+=16;goto B6e4521;
case 0x6e4523:c.instructions+=15;goto B6e4523;
case 0x6e4525:c.instructions+=14;goto B6e4525;
case 0x6e4527:c.instructions+=13;goto B6e4527;
case 0x6e452d:c.instructions+=12;goto B6e452d;
case 0x6e452f:c.instructions+=11;goto B6e452f;
case 0x6e4531:c.instructions+=10;goto B6e4531;
case 0x6e4533:c.instructions+=9;goto B6e4533;
case 0x6e4535:c.instructions+=8;goto B6e4535;
case 0x6e4538:c.instructions+=7;goto B6e4538;
case 0x6e453b:c.instructions+=6;goto B6e453b;
case 0x6e453d:c.instructions+=5;goto B6e453d;
case 0x6e4540:c.instructions+=4;goto B6e4540;
case 0x6e4543:c.instructions+=3;goto B6e4543;
case 0x6e4546:c.instructions+=2;goto B6e4546;
case 0x6e4549:c.instructions+=1;goto B6e4549;
case 0x6e4550:goto L6e4550;
case 0x6e4551:c.instructions+=5;goto B6e4551;
case 0x6e4553:c.instructions+=4;goto B6e4553;
case 0x6e4556:c.instructions+=3;goto B6e4556;
case 0x6e4558:c.instructions+=2;goto B6e4558;
case 0x6e455e:c.instructions+=1;goto B6e455e;
case 0x6e4560:goto L6e4560;
case 0x6e4566:c.instructions+=3;goto B6e4566;
case 0x6e4568:c.instructions+=2;goto B6e4568;
case 0x6e4569:c.instructions+=1;goto B6e4569;
case 0x6e456c:goto L6e456c;
case 0x6e456f:c.instructions+=2;goto B6e456f;
case 0x6e4571:c.instructions+=1;goto B6e4571;
case 0x6e4573:goto L6e4573;
case 0x6e4579:c.instructions+=3;goto B6e4579;
case 0x6e457b:c.instructions+=2;goto B6e457b;
case 0x6e457c:c.instructions+=1;goto B6e457c;
case 0x6e457f:goto L6e457f;
case 0x6e4581:c.instructions+=2;goto B6e4581;
case 0x6e4582:c.instructions+=1;goto B6e4582;
case 0x6e4590:goto L6e4590;
case 0x6e4594:c.instructions+=6;goto B6e4594;
case 0x6e4596:c.instructions+=5;goto B6e4596;
case 0x6e4597:c.instructions+=4;goto B6e4597;
case 0x6e459b:c.instructions+=3;goto B6e459b;
case 0x6e459c:c.instructions+=2;goto B6e459c;
case 0x6e459d:c.instructions+=1;goto B6e459d;
case 0x6e45a0:goto L6e45a0;
case 0x6e45a2:c.instructions+=1;goto B6e45a2;
case 0x6e45b0:goto L6e45b0;
case 0x6e45b1:c.instructions+=5;goto B6e45b1;
case 0x6e45b4:c.instructions+=4;goto B6e45b4;
case 0x6e45b7:c.instructions+=3;goto B6e45b7;
case 0x6e45ba:c.instructions+=2;goto B6e45ba;
case 0x6e45bb:c.instructions+=1;goto B6e45bb;
case 0x6e45bd:goto L6e45bd;
case 0x6e45be:c.instructions+=9;goto B6e45be;
case 0x6e45c2:c.instructions+=8;goto B6e45c2;
case 0x6e45c3:c.instructions+=7;goto B6e45c3;
case 0x6e45c7:c.instructions+=6;goto B6e45c7;
case 0x6e45c8:c.instructions+=5;goto B6e45c8;
case 0x6e45cc:c.instructions+=4;goto B6e45cc;
case 0x6e45cd:c.instructions+=3;goto B6e45cd;
case 0x6e45d1:c.instructions+=2;goto B6e45d1;
case 0x6e45d2:c.instructions+=1;goto B6e45d2;
case 0x6e45d6:goto L6e45d6;
case 0x6e45d9:c.instructions+=14;goto B6e45d9;
case 0x6e45de:c.instructions+=13;goto B6e45de;
case 0x6e45e0:c.instructions+=12;goto B6e45e0;
case 0x6e45e2:c.instructions+=11;goto B6e45e2;
case 0x6e45e4:c.instructions+=10;goto B6e45e4;
case 0x6e45e7:c.instructions+=9;goto B6e45e7;
case 0x6e45e9:c.instructions+=8;goto B6e45e9;
case 0x6e45eb:c.instructions+=7;goto B6e45eb;
case 0x6e45ee:c.instructions+=6;goto B6e45ee;
case 0x6e45f3:c.instructions+=5;goto B6e45f3;
case 0x6e45f5:c.instructions+=4;goto B6e45f5;
case 0x6e45f7:c.instructions+=3;goto B6e45f7;
case 0x6e45fa:c.instructions+=2;goto B6e45fa;
case 0x6e45fd:c.instructions+=1;goto B6e45fd;
case 0x6e45ff:goto L6e45ff;
case 0x6e4602:c.instructions+=2;goto B6e4602;
case 0x6e4606:c.instructions+=1;goto B6e4606;
case 0x6e4608:goto L6e4608;
case 0x6e460a:c.instructions+=1;goto B6e460a;
case 0x6e460c:goto L6e460c;
case 0x6e460e:c.instructions+=1;goto B6e460e;
case 0x6e4610:goto L6e4610;
case 0x6e4612:goto L6e4612;
case 0x6e4615:c.instructions+=1;goto B6e4615;
case 0x6e4617:goto L6e4617;
case 0x6e461a:goto L6e461a;
case 0x6e461c:c.instructions+=6;goto B6e461c;
case 0x6e461e:c.instructions+=5;goto B6e461e;
case 0x6e461f:c.instructions+=4;goto B6e461f;
case 0x6e4620:c.instructions+=3;goto B6e4620;
case 0x6e4622:c.instructions+=2;goto B6e4622;
case 0x6e4624:c.instructions+=1;goto B6e4624;
case 0x6e4629:goto L6e4629;
case 0x6e462d:c.instructions+=4;goto B6e462d;
case 0x6e4630:c.instructions+=3;goto B6e4630;
case 0x6e4631:c.instructions+=2;goto B6e4631;
case 0x6e4635:c.instructions+=1;goto B6e4635;
case 0x6e4637:goto L6e4637;
case 0x6e4638:c.instructions+=3;goto B6e4638;
case 0x6e4639:c.instructions+=2;goto B6e4639;
case 0x6e463a:c.instructions+=1;goto B6e463a;
case 0x6e463b:goto L6e463b;
case 0x6e463d:c.instructions+=2;goto B6e463d;
case 0x6e463e:c.instructions+=1;goto B6e463e;
case 0x6e4650:goto L6e4650;
case 0x6e4651:c.instructions+=6;goto B6e4651;
case 0x6e4654:c.instructions+=5;goto B6e4654;
case 0x6e4657:c.instructions+=4;goto B6e4657;
case 0x6e465a:c.instructions+=3;goto B6e465a;
case 0x6e465d:c.instructions+=2;goto B6e465d;
case 0x6e465e:c.instructions+=1;goto B6e465e;
case 0x6e4664:goto L6e4664;
case 0x6e4665:c.instructions+=10;goto B6e4665;
case 0x6e4669:c.instructions+=9;goto B6e4669;
case 0x6e466a:c.instructions+=8;goto B6e466a;
case 0x6e466e:c.instructions+=7;goto B6e466e;
case 0x6e466f:c.instructions+=6;goto B6e466f;
case 0x6e4673:c.instructions+=5;goto B6e4673;
case 0x6e4674:c.instructions+=4;goto B6e4674;
case 0x6e4678:c.instructions+=3;goto B6e4678;
case 0x6e4679:c.instructions+=2;goto B6e4679;
case 0x6e467d:c.instructions+=1;goto B6e467d;
case 0x6e4680:goto L6e4680;
case 0x6e4683:c.instructions+=14;goto B6e4683;
case 0x6e4688:c.instructions+=13;goto B6e4688;
case 0x6e468a:c.instructions+=12;goto B6e468a;
case 0x6e468c:c.instructions+=11;goto B6e468c;
case 0x6e468e:c.instructions+=10;goto B6e468e;
case 0x6e4691:c.instructions+=9;goto B6e4691;
case 0x6e4693:c.instructions+=8;goto B6e4693;
case 0x6e4695:c.instructions+=7;goto B6e4695;
case 0x6e4698:c.instructions+=6;goto B6e4698;
case 0x6e469d:c.instructions+=5;goto B6e469d;
case 0x6e469f:c.instructions+=4;goto B6e469f;
case 0x6e46a1:c.instructions+=3;goto B6e46a1;
case 0x6e46a4:c.instructions+=2;goto B6e46a4;
case 0x6e46a7:c.instructions+=1;goto B6e46a7;
case 0x6e46a9:goto L6e46a9;
case 0x6e46ac:c.instructions+=2;goto B6e46ac;
case 0x6e46b0:c.instructions+=1;goto B6e46b0;
case 0x6e46b2:goto L6e46b2;
case 0x6e46b4:c.instructions+=1;goto B6e46b4;
case 0x6e46b6:goto L6e46b6;
case 0x6e46b8:c.instructions+=1;goto B6e46b8;
case 0x6e46ba:goto L6e46ba;
case 0x6e46bc:goto L6e46bc;
case 0x6e46bf:c.instructions+=1;goto B6e46bf;
case 0x6e46c1:goto L6e46c1;
case 0x6e46c4:goto L6e46c4;
case 0x6e46c6:c.instructions+=6;goto B6e46c6;
case 0x6e46c8:c.instructions+=5;goto B6e46c8;
case 0x6e46c9:c.instructions+=4;goto B6e46c9;
case 0x6e46ca:c.instructions+=3;goto B6e46ca;
case 0x6e46cc:c.instructions+=2;goto B6e46cc;
case 0x6e46ce:c.instructions+=1;goto B6e46ce;
case 0x6e46d3:goto L6e46d3;
case 0x6e46d7:c.instructions+=4;goto B6e46d7;
case 0x6e46da:c.instructions+=3;goto B6e46da;
case 0x6e46db:c.instructions+=2;goto B6e46db;
case 0x6e46df:c.instructions+=1;goto B6e46df;
case 0x6e46e1:goto L6e46e1;
case 0x6e46e2:c.instructions+=3;goto B6e46e2;
case 0x6e46e3:c.instructions+=2;goto B6e46e3;
case 0x6e46e4:c.instructions+=1;goto B6e46e4;
case 0x6e46e5:goto L6e46e5;
case 0x6e46e7:c.instructions+=2;goto B6e46e7;
case 0x6e46e8:c.instructions+=1;goto B6e46e8;
case 0x6e46f0:goto L6e46f0;
case 0x6e46f1:c.instructions+=5;goto B6e46f1;
case 0x6e46f3:c.instructions+=4;goto B6e46f3;
case 0x6e46f6:c.instructions+=3;goto B6e46f6;
case 0x6e46f8:c.instructions+=2;goto B6e46f8;
case 0x6e46fe:c.instructions+=1;goto B6e46fe;
case 0x6e4700:goto L6e4700;
case 0x6e4706:c.instructions+=3;goto B6e4706;
case 0x6e4708:c.instructions+=2;goto B6e4708;
case 0x6e4709:c.instructions+=1;goto B6e4709;
case 0x6e470c:goto L6e470c;
case 0x6e470f:c.instructions+=2;goto B6e470f;
case 0x6e4711:c.instructions+=1;goto B6e4711;
case 0x6e4713:goto L6e4713;
case 0x6e4719:c.instructions+=3;goto B6e4719;
case 0x6e471b:c.instructions+=2;goto B6e471b;
case 0x6e471c:c.instructions+=1;goto B6e471c;
case 0x6e471f:goto L6e471f;
case 0x6e4721:c.instructions+=2;goto B6e4721;
case 0x6e4722:c.instructions+=1;goto B6e4722;
case 0x6e4730:goto L6e4730;
case 0x6e4731:c.instructions+=6;goto B6e4731;
case 0x6e4733:c.instructions+=5;goto B6e4733;
case 0x6e4736:c.instructions+=4;goto B6e4736;
case 0x6e4738:c.instructions+=3;goto B6e4738;
case 0x6e4739:c.instructions+=2;goto B6e4739;
case 0x6e473d:c.instructions+=1;goto B6e473d;
case 0x6e473f:goto L6e473f;
case 0x6e4742:c.instructions+=5;goto B6e4742;
case 0x6e4745:c.instructions+=4;goto B6e4745;
case 0x6e4748:c.instructions+=3;goto B6e4748;
case 0x6e474b:c.instructions+=2;goto B6e474b;
case 0x6e474e:c.instructions+=1;goto B6e474e;
case 0x6e4750:goto L6e4750;
case 0x6e4756:c.instructions+=3;goto B6e4756;
case 0x6e4758:c.instructions+=2;goto B6e4758;
case 0x6e4759:c.instructions+=1;goto B6e4759;
case 0x6e475c:goto L6e475c;
case 0x6e475f:c.instructions+=2;goto B6e475f;
case 0x6e4762:c.instructions+=1;goto B6e4762;
case 0x6e4764:goto L6e4764;
case 0x6e4767:c.instructions+=1;goto B6e4767;
case 0x6e476a:goto L6e476a;
case 0x6e4770:c.instructions+=5;goto B6e4770;
case 0x6e4772:c.instructions+=4;goto B6e4772;
case 0x6e4775:c.instructions+=3;goto B6e4775;
case 0x6e4778:c.instructions+=2;goto B6e4778;
case 0x6e4779:c.instructions+=1;goto B6e4779;
case 0x6e477c:goto L6e477c;
case 0x6e477f:goto L6e477f;
case 0x6e4782:c.instructions+=4;goto B6e4782;
case 0x6e4783:c.instructions+=3;goto B6e4783;
case 0x6e478a:c.instructions+=2;goto B6e478a;
case 0x6e478b:c.instructions+=1;goto B6e478b;
case 0x6e4790:goto L6e4790;
case 0x6e4791:c.instructions+=12;goto B6e4791;
case 0x6e4794:c.instructions+=11;goto B6e4794;
case 0x6e4798:c.instructions+=10;goto B6e4798;
case 0x6e479b:c.instructions+=9;goto B6e479b;
case 0x6e47a0:c.instructions+=8;goto B6e47a0;
case 0x6e47a4:c.instructions+=7;goto B6e47a4;
case 0x6e47a5:c.instructions+=6;goto B6e47a5;
case 0x6e47a9:c.instructions+=5;goto B6e47a9;
case 0x6e47ab:c.instructions+=4;goto B6e47ab;
case 0x6e47af:c.instructions+=3;goto B6e47af;
case 0x6e47b1:c.instructions+=2;goto B6e47b1;
case 0x6e47b2:c.instructions+=1;goto B6e47b2;
case 0x6e47c0:goto L6e47c0;
case 0x6e47c1:c.instructions+=5;goto B6e47c1;
case 0x6e47c4:c.instructions+=4;goto B6e47c4;
case 0x6e47c7:c.instructions+=3;goto B6e47c7;
case 0x6e47ca:c.instructions+=2;goto B6e47ca;
case 0x6e47cb:c.instructions+=1;goto B6e47cb;
case 0x6e47cd:goto L6e47cd;
case 0x6e47ce:c.instructions+=9;goto B6e47ce;
case 0x6e47d2:c.instructions+=8;goto B6e47d2;
case 0x6e47d3:c.instructions+=7;goto B6e47d3;
case 0x6e47d7:c.instructions+=6;goto B6e47d7;
case 0x6e47d8:c.instructions+=5;goto B6e47d8;
case 0x6e47dc:c.instructions+=4;goto B6e47dc;
case 0x6e47dd:c.instructions+=3;goto B6e47dd;
case 0x6e47e1:c.instructions+=2;goto B6e47e1;
case 0x6e47e2:c.instructions+=1;goto B6e47e2;
case 0x6e47e6:goto L6e47e6;
case 0x6e47e9:c.instructions+=14;goto B6e47e9;
case 0x6e47ee:c.instructions+=13;goto B6e47ee;
case 0x6e47f0:c.instructions+=12;goto B6e47f0;
case 0x6e47f2:c.instructions+=11;goto B6e47f2;
case 0x6e47f4:c.instructions+=10;goto B6e47f4;
case 0x6e47f7:c.instructions+=9;goto B6e47f7;
case 0x6e47f9:c.instructions+=8;goto B6e47f9;
case 0x6e47fb:c.instructions+=7;goto B6e47fb;
case 0x6e47fe:c.instructions+=6;goto B6e47fe;
case 0x6e4803:c.instructions+=5;goto B6e4803;
case 0x6e4805:c.instructions+=4;goto B6e4805;
case 0x6e4807:c.instructions+=3;goto B6e4807;
case 0x6e480a:c.instructions+=2;goto B6e480a;
case 0x6e480d:c.instructions+=1;goto B6e480d;
case 0x6e480f:goto L6e480f;
case 0x6e4812:c.instructions+=2;goto B6e4812;
case 0x6e4816:c.instructions+=1;goto B6e4816;
case 0x6e4818:goto L6e4818;
case 0x6e481a:c.instructions+=1;goto B6e481a;
case 0x6e481c:goto L6e481c;
case 0x6e481e:c.instructions+=1;goto B6e481e;
case 0x6e4820:goto L6e4820;
case 0x6e4822:goto L6e4822;
case 0x6e4825:c.instructions+=1;goto B6e4825;
case 0x6e4827:goto L6e4827;
case 0x6e482a:goto L6e482a;
case 0x6e482c:c.instructions+=6;goto B6e482c;
case 0x6e482e:c.instructions+=5;goto B6e482e;
case 0x6e482f:c.instructions+=4;goto B6e482f;
case 0x6e4830:c.instructions+=3;goto B6e4830;
case 0x6e4832:c.instructions+=2;goto B6e4832;
case 0x6e4834:c.instructions+=1;goto B6e4834;
case 0x6e4839:goto L6e4839;
case 0x6e483d:c.instructions+=4;goto B6e483d;
case 0x6e4840:c.instructions+=3;goto B6e4840;
case 0x6e4841:c.instructions+=2;goto B6e4841;
case 0x6e4845:c.instructions+=1;goto B6e4845;
case 0x6e4847:goto L6e4847;
case 0x6e4848:c.instructions+=3;goto B6e4848;
case 0x6e4849:c.instructions+=2;goto B6e4849;
case 0x6e484a:c.instructions+=1;goto B6e484a;
case 0x6e484b:goto L6e484b;
case 0x6e484d:c.instructions+=2;goto B6e484d;
case 0x6e484e:c.instructions+=1;goto B6e484e;
case 0x6e4860:goto L6e4860;
case 0x6e4861:c.instructions+=6;goto B6e4861;
case 0x6e4864:c.instructions+=5;goto B6e4864;
case 0x6e4867:c.instructions+=4;goto B6e4867;
case 0x6e486a:c.instructions+=3;goto B6e486a;
case 0x6e486d:c.instructions+=2;goto B6e486d;
case 0x6e486e:c.instructions+=1;goto B6e486e;
case 0x6e4874:goto L6e4874;
case 0x6e4875:c.instructions+=10;goto B6e4875;
case 0x6e4879:c.instructions+=9;goto B6e4879;
case 0x6e487a:c.instructions+=8;goto B6e487a;
case 0x6e487e:c.instructions+=7;goto B6e487e;
case 0x6e487f:c.instructions+=6;goto B6e487f;
case 0x6e4883:c.instructions+=5;goto B6e4883;
case 0x6e4884:c.instructions+=4;goto B6e4884;
case 0x6e4888:c.instructions+=3;goto B6e4888;
case 0x6e4889:c.instructions+=2;goto B6e4889;
case 0x6e488d:c.instructions+=1;goto B6e488d;
case 0x6e4890:goto L6e4890;
case 0x6e4893:c.instructions+=14;goto B6e4893;
case 0x6e4898:c.instructions+=13;goto B6e4898;
case 0x6e489a:c.instructions+=12;goto B6e489a;
case 0x6e489c:c.instructions+=11;goto B6e489c;
case 0x6e489e:c.instructions+=10;goto B6e489e;
case 0x6e48a1:c.instructions+=9;goto B6e48a1;
case 0x6e48a3:c.instructions+=8;goto B6e48a3;
case 0x6e48a5:c.instructions+=7;goto B6e48a5;
case 0x6e48a8:c.instructions+=6;goto B6e48a8;
case 0x6e48ad:c.instructions+=5;goto B6e48ad;
case 0x6e48af:c.instructions+=4;goto B6e48af;
case 0x6e48b1:c.instructions+=3;goto B6e48b1;
case 0x6e48b4:c.instructions+=2;goto B6e48b4;
case 0x6e48b7:c.instructions+=1;goto B6e48b7;
case 0x6e48b9:goto L6e48b9;
case 0x6e48bc:c.instructions+=2;goto B6e48bc;
case 0x6e48c0:c.instructions+=1;goto B6e48c0;
case 0x6e48c2:goto L6e48c2;
case 0x6e48c4:c.instructions+=1;goto B6e48c4;
case 0x6e48c6:goto L6e48c6;
case 0x6e48c8:c.instructions+=1;goto B6e48c8;
case 0x6e48ca:goto L6e48ca;
case 0x6e48cc:goto L6e48cc;
case 0x6e48cf:c.instructions+=1;goto B6e48cf;
case 0x6e48d1:goto L6e48d1;
case 0x6e48d4:goto L6e48d4;
case 0x6e48d6:c.instructions+=6;goto B6e48d6;
case 0x6e48d8:c.instructions+=5;goto B6e48d8;
case 0x6e48d9:c.instructions+=4;goto B6e48d9;
case 0x6e48da:c.instructions+=3;goto B6e48da;
case 0x6e48dc:c.instructions+=2;goto B6e48dc;
case 0x6e48de:c.instructions+=1;goto B6e48de;
case 0x6e48e3:goto L6e48e3;
case 0x6e48e7:c.instructions+=4;goto B6e48e7;
case 0x6e48ea:c.instructions+=3;goto B6e48ea;
case 0x6e48eb:c.instructions+=2;goto B6e48eb;
case 0x6e48ef:c.instructions+=1;goto B6e48ef;
case 0x6e48f1:goto L6e48f1;
case 0x6e48f2:c.instructions+=3;goto B6e48f2;
case 0x6e48f3:c.instructions+=2;goto B6e48f3;
case 0x6e48f4:c.instructions+=1;goto B6e48f4;
case 0x6e48f5:goto L6e48f5;
case 0x6e48f7:c.instructions+=2;goto B6e48f7;
case 0x6e48f8:c.instructions+=1;goto B6e48f8;
case 0x6e4900:goto L6e4900;
case 0x6e4901:c.instructions+=6;goto B6e4901;
case 0x6e4905:c.instructions+=5;goto B6e4905;
case 0x6e490b:c.instructions+=4;goto B6e490b;
case 0x6e490f:c.instructions+=3;goto B6e490f;
case 0x6e4911:c.instructions+=2;goto B6e4911;
case 0x6e4914:c.instructions+=1;goto B6e4914;
case 0x6e4916:goto L6e4916;
case 0x6e491c:c.instructions+=6;goto B6e491c;
case 0x6e4920:c.instructions+=5;goto B6e4920;
case 0x6e4924:c.instructions+=4;goto B6e4924;
case 0x6e4928:c.instructions+=3;goto B6e4928;
case 0x6e492c:c.instructions+=2;goto B6e492c;
case 0x6e492d:c.instructions+=1;goto B6e492d;
case 0x6e492e:goto L6e492e;
case 0x6e4934:c.instructions+=6;goto B6e4934;
case 0x6e4938:c.instructions+=5;goto B6e4938;
case 0x6e493c:c.instructions+=4;goto B6e493c;
case 0x6e4940:c.instructions+=3;goto B6e4940;
case 0x6e4944:c.instructions+=2;goto B6e4944;
case 0x6e4945:c.instructions+=1;goto B6e4945;
case 0x6e4950:goto L6e4950;
case 0x6e4953:c.instructions+=11;goto B6e4953;
case 0x6e4957:c.instructions+=10;goto B6e4957;
case 0x6e4958:c.instructions+=9;goto B6e4958;
case 0x6e495e:c.instructions+=8;goto B6e495e;
case 0x6e495f:c.instructions+=7;goto B6e495f;
case 0x6e4963:c.instructions+=6;goto B6e4963;
case 0x6e4964:c.instructions+=5;goto B6e4964;
case 0x6e4965:c.instructions+=4;goto B6e4965;
case 0x6e4969:c.instructions+=3;goto B6e4969;
case 0x6e496b:c.instructions+=2;goto B6e496b;
case 0x6e496e:c.instructions+=1;goto B6e496e;
case 0x6e4970:goto L6e4970;
case 0x6e4976:c.instructions+=5;goto B6e4976;
case 0x6e497a:c.instructions+=4;goto B6e497a;
case 0x6e497e:c.instructions+=3;goto B6e497e;
case 0x6e4982:c.instructions+=2;goto B6e4982;
case 0x6e4986:c.instructions+=1;goto B6e4986;
case 0x6e4988:goto L6e4988;
case 0x6e498e:c.instructions+=4;goto B6e498e;
case 0x6e4992:c.instructions+=3;goto B6e4992;
case 0x6e4996:c.instructions+=2;goto B6e4996;
case 0x6e499a:c.instructions+=1;goto B6e499a;
case 0x6e499e:goto L6e499e;
case 0x6e49a2:c.instructions+=7;goto B6e49a2;
case 0x6e49a5:c.instructions+=6;goto B6e49a5;
case 0x6e49a8:c.instructions+=5;goto B6e49a8;
case 0x6e49ac:c.instructions+=4;goto B6e49ac;
case 0x6e49ae:c.instructions+=3;goto B6e49ae;
case 0x6e49b2:c.instructions+=2;goto B6e49b2;
case 0x6e49b4:c.instructions+=1;goto B6e49b4;
case 0x6e49b6:goto L6e49b6;
case 0x6e49b9:c.instructions+=1;goto B6e49b9;
case 0x6e49bb:goto L6e49bb;
case 0x6e49bd:c.instructions+=1;goto B6e49bd;
case 0x6e49bf:goto L6e49bf;
case 0x6e49c1:goto L6e49c1;
case 0x6e49c4:c.instructions+=9;goto B6e49c4;
case 0x6e49c5:c.instructions+=8;goto B6e49c5;
case 0x6e49c6:c.instructions+=7;goto B6e49c6;
case 0x6e49c9:c.instructions+=6;goto B6e49c9;
case 0x6e49cc:c.instructions+=5;goto B6e49cc;
case 0x6e49cd:c.instructions+=4;goto B6e49cd;
case 0x6e49ce:c.instructions+=3;goto B6e49ce;
case 0x6e49cf:c.instructions+=2;goto B6e49cf;
case 0x6e49d1:c.instructions+=1;goto B6e49d1;
case 0x6e49d6:goto L6e49d6;
case 0x6e49da:c.instructions+=13;goto B6e49da;
case 0x6e49de:c.instructions+=12;goto B6e49de;
case 0x6e49e1:c.instructions+=11;goto B6e49e1;
case 0x6e49e5:c.instructions+=10;goto B6e49e5;
case 0x6e49e8:c.instructions+=9;goto B6e49e8;
case 0x6e49eb:c.instructions+=8;goto B6e49eb;
case 0x6e49ef:c.instructions+=7;goto B6e49ef;
case 0x6e49f3:c.instructions+=6;goto B6e49f3;
case 0x6e49f6:c.instructions+=5;goto B6e49f6;
case 0x6e49fa:c.instructions+=4;goto B6e49fa;
case 0x6e49fd:c.instructions+=3;goto B6e49fd;
case 0x6e49ff:c.instructions+=2;goto B6e49ff;
case 0x6e4a02:c.instructions+=1;goto B6e4a02;
case 0x6e4a04:goto L6e4a04;
case 0x6e4a08:c.instructions+=3;goto B6e4a08;
case 0x6e4a0b:c.instructions+=2;goto B6e4a0b;
case 0x6e4a0d:c.instructions+=1;goto B6e4a0d;
case 0x6e4a0f:goto L6e4a0f;
case 0x6e4a13:c.instructions+=15;goto B6e4a13;
case 0x6e4a17:c.instructions+=14;goto B6e4a17;
case 0x6e4a1b:c.instructions+=13;goto B6e4a1b;
case 0x6e4a1c:c.instructions+=12;goto B6e4a1c;
case 0x6e4a1f:c.instructions+=11;goto B6e4a1f;
case 0x6e4a20:c.instructions+=10;goto B6e4a20;
case 0x6e4a22:c.instructions+=9;goto B6e4a22;
case 0x6e4a23:c.instructions+=8;goto B6e4a23;
case 0x6e4a26:c.instructions+=7;goto B6e4a26;
case 0x6e4a27:c.instructions+=6;goto B6e4a27;
case 0x6e4a28:c.instructions+=5;goto B6e4a28;
case 0x6e4a2b:c.instructions+=4;goto B6e4a2b;
case 0x6e4a2c:c.instructions+=3;goto B6e4a2c;
case 0x6e4a2d:c.instructions+=2;goto B6e4a2d;
case 0x6e4a2f:c.instructions+=1;goto B6e4a2f;
case 0x6e4a34:goto L6e4a34;
case 0x6e4a35:c.instructions+=5;goto B6e4a35;
case 0x6e4a36:c.instructions+=4;goto B6e4a36;
case 0x6e4a37:c.instructions+=3;goto B6e4a37;
case 0x6e4a38:c.instructions+=2;goto B6e4a38;
case 0x6e4a3b:c.instructions+=1;goto B6e4a3b;
case 0x6e4a3e:goto L6e4a3e;
case 0x6e4a41:c.instructions+=3;goto B6e4a41;
case 0x6e4a43:c.instructions+=2;goto B6e4a43;
case 0x6e4a45:c.instructions+=1;goto B6e4a45;
case 0x6e4a47:goto L6e4a47;
case 0x6e4a49:goto L6e4a49;
case 0x6e4a4d:c.instructions+=1;goto B6e4a4d;
case 0x6e4a50:goto L6e4a50;
case 0x6e4a53:c.instructions+=7;goto B6e4a53;
case 0x6e4a57:c.instructions+=6;goto B6e4a57;
case 0x6e4a5a:c.instructions+=5;goto B6e4a5a;
case 0x6e4a5e:c.instructions+=4;goto B6e4a5e;
case 0x6e4a5f:c.instructions+=3;goto B6e4a5f;
case 0x6e4a61:c.instructions+=2;goto B6e4a61;
case 0x6e4a64:c.instructions+=1;goto B6e4a64;
case 0x6e4a66:goto L6e4a66;
case 0x6e4a67:c.instructions+=5;goto B6e4a67;
case 0x6e4a68:c.instructions+=4;goto B6e4a68;
case 0x6e4a69:c.instructions+=3;goto B6e4a69;
case 0x6e4a6a:c.instructions+=2;goto B6e4a6a;
case 0x6e4a6d:c.instructions+=1;goto B6e4a6d;
case 0x6e4a70:goto L6e4a70;
case 0x6e4a73:c.instructions+=4;goto B6e4a73;
case 0x6e4a77:c.instructions+=3;goto B6e4a77;
case 0x6e4a7b:c.instructions+=2;goto B6e4a7b;
case 0x6e4a7e:c.instructions+=1;goto B6e4a7e;
case 0x6e4a80:goto L6e4a80;
case 0x6e4a87:c.instructions+=4;goto B6e4a87;
case 0x6e4a8b:c.instructions+=3;goto B6e4a8b;
case 0x6e4a8f:c.instructions+=2;goto B6e4a8f;
case 0x6e4a92:c.instructions+=1;goto B6e4a92;
case 0x6e4a96:goto L6e4a96;
case 0x6e4a99:c.instructions+=13;goto B6e4a99;
case 0x6e4a9d:c.instructions+=12;goto B6e4a9d;
case 0x6e4a9e:c.instructions+=11;goto B6e4a9e;
case 0x6e4aa2:c.instructions+=10;goto B6e4aa2;
case 0x6e4aa5:c.instructions+=9;goto B6e4aa5;
case 0x6e4aa6:c.instructions+=8;goto B6e4aa6;
case 0x6e4aa9:c.instructions+=7;goto B6e4aa9;
case 0x6e4aac:c.instructions+=6;goto B6e4aac;
case 0x6e4aae:c.instructions+=5;goto B6e4aae;
case 0x6e4aaf:c.instructions+=4;goto B6e4aaf;
case 0x6e4ab3:c.instructions+=3;goto B6e4ab3;
case 0x6e4ab6:c.instructions+=2;goto B6e4ab6;
case 0x6e4ab7:c.instructions+=1;goto B6e4ab7;
case 0x6e4ab9:goto L6e4ab9;
case 0x6e4abc:c.instructions+=1;goto B6e4abc;
case 0x6e4abe:goto L6e4abe;
case 0x6e4ac4:c.instructions+=5;goto B6e4ac4;
case 0x6e4ac6:c.instructions+=4;goto B6e4ac6;
case 0x6e4ac9:c.instructions+=3;goto B6e4ac9;
case 0x6e4acc:c.instructions+=2;goto B6e4acc;
case 0x6e4acd:c.instructions+=1;goto B6e4acd;
case 0x6e4ad0:goto L6e4ad0;
case 0x6e4ad4:c.instructions+=4;goto B6e4ad4;
case 0x6e4ad6:c.instructions+=3;goto B6e4ad6;
case 0x6e4ad8:c.instructions+=2;goto B6e4ad8;
case 0x6e4adb:c.instructions+=1;goto B6e4adb;
case 0x6e4add:goto L6e4add;
case 0x6e4ae0:goto L6e4ae0;
case 0x6e4ae4:c.instructions+=12;goto B6e4ae4;
case 0x6e4ae9:c.instructions+=11;goto B6e4ae9;
case 0x6e4aeb:c.instructions+=10;goto B6e4aeb;
case 0x6e4aee:c.instructions+=9;goto B6e4aee;
case 0x6e4af1:c.instructions+=8;goto B6e4af1;
case 0x6e4af3:c.instructions+=7;goto B6e4af3;
case 0x6e4af6:c.instructions+=6;goto B6e4af6;
case 0x6e4afb:c.instructions+=5;goto B6e4afb;
case 0x6e4afd:c.instructions+=4;goto B6e4afd;
case 0x6e4b01:c.instructions+=3;goto B6e4b01;
case 0x6e4b04:c.instructions+=2;goto B6e4b04;
case 0x6e4b07:c.instructions+=1;goto B6e4b07;
case 0x6e4b09:goto L6e4b09;
case 0x6e4b0d:c.instructions+=5;goto B6e4b0d;
case 0x6e4b10:c.instructions+=4;goto B6e4b10;
case 0x6e4b13:c.instructions+=3;goto B6e4b13;
case 0x6e4b17:c.instructions+=2;goto B6e4b17;
case 0x6e4b1b:c.instructions+=1;goto B6e4b1b;
case 0x6e4b1e:goto L6e4b1e;
case 0x6e4b1f:c.instructions+=2;goto B6e4b1f;
case 0x6e4b21:c.instructions+=1;goto B6e4b21;
case 0x6e4b23:goto L6e4b23;
case 0x6e4b27:c.instructions+=5;goto B6e4b27;
case 0x6e4b2d:c.instructions+=4;goto B6e4b2d;
case 0x6e4b31:c.instructions+=3;goto B6e4b31;
case 0x6e4b33:c.instructions+=2;goto B6e4b33;
case 0x6e4b36:c.instructions+=1;goto B6e4b36;
case 0x6e4b38:goto L6e4b38;
case 0x6e4b3e:c.instructions+=5;goto B6e4b3e;
case 0x6e4b42:c.instructions+=4;goto B6e4b42;
case 0x6e4b46:c.instructions+=3;goto B6e4b46;
case 0x6e4b4a:c.instructions+=2;goto B6e4b4a;
case 0x6e4b4e:c.instructions+=1;goto B6e4b4e;
case 0x6e4b50:goto L6e4b50;
case 0x6e4b56:c.instructions+=4;goto B6e4b56;
case 0x6e4b5a:c.instructions+=3;goto B6e4b5a;
case 0x6e4b5e:c.instructions+=2;goto B6e4b5e;
case 0x6e4b62:c.instructions+=1;goto B6e4b62;
case 0x6e4b66:goto L6e4b66;
case 0x6e4b6a:c.instructions+=9;goto B6e4b6a;
case 0x6e4b6d:c.instructions+=8;goto B6e4b6d;
case 0x6e4b70:c.instructions+=7;goto B6e4b70;
case 0x6e4b74:c.instructions+=6;goto B6e4b74;
case 0x6e4b76:c.instructions+=5;goto B6e4b76;
case 0x6e4b7a:c.instructions+=4;goto B6e4b7a;
case 0x6e4b7d:c.instructions+=3;goto B6e4b7d;
case 0x6e4b7f:c.instructions+=2;goto B6e4b7f;
case 0x6e4b83:c.instructions+=1;goto B6e4b83;
case 0x6e4b85:goto L6e4b85;
case 0x6e4b88:c.instructions+=1;goto B6e4b88;
case 0x6e4b8a:goto L6e4b8a;
case 0x6e4b8c:c.instructions+=1;goto B6e4b8c;
case 0x6e4b8e:goto L6e4b8e;
case 0x6e4b90:goto L6e4b90;
case 0x6e4b93:c.instructions+=12;goto B6e4b93;
case 0x6e4b96:c.instructions+=11;goto B6e4b96;
case 0x6e4b97:c.instructions+=10;goto B6e4b97;
case 0x6e4b9a:c.instructions+=9;goto B6e4b9a;
case 0x6e4b9b:c.instructions+=8;goto B6e4b9b;
case 0x6e4b9f:c.instructions+=7;goto B6e4b9f;
case 0x6e4ba0:c.instructions+=6;goto B6e4ba0;
case 0x6e4ba1:c.instructions+=5;goto B6e4ba1;
case 0x6e4ba4:c.instructions+=4;goto B6e4ba4;
case 0x6e4ba5:c.instructions+=3;goto B6e4ba5;
case 0x6e4ba6:c.instructions+=2;goto B6e4ba6;
case 0x6e4ba8:c.instructions+=1;goto B6e4ba8;
case 0x6e4bad:goto L6e4bad;
case 0x6e4bb1:c.instructions+=8;goto B6e4bb1;
case 0x6e4bb5:c.instructions+=7;goto B6e4bb5;
case 0x6e4bb8:c.instructions+=6;goto B6e4bb8;
case 0x6e4bbc:c.instructions+=5;goto B6e4bbc;
case 0x6e4bc0:c.instructions+=4;goto B6e4bc0;
case 0x6e4bc4:c.instructions+=3;goto B6e4bc4;
case 0x6e4bc6:c.instructions+=2;goto B6e4bc6;
case 0x6e4bc9:c.instructions+=1;goto B6e4bc9;
case 0x6e4bcb:goto L6e4bcb;
case 0x6e4bcf:c.instructions+=1;goto B6e4bcf;
case 0x6e4bd1:goto L6e4bd1;
case 0x6e4bd5:c.instructions+=18;goto B6e4bd5;
case 0x6e4bd9:c.instructions+=17;goto B6e4bd9;
case 0x6e4bdc:c.instructions+=16;goto B6e4bdc;
case 0x6e4be0:c.instructions+=15;goto B6e4be0;
case 0x6e4be3:c.instructions+=14;goto B6e4be3;
case 0x6e4be4:c.instructions+=13;goto B6e4be4;
case 0x6e4be5:c.instructions+=12;goto B6e4be5;
case 0x6e4be8:c.instructions+=11;goto B6e4be8;
case 0x6e4be9:c.instructions+=10;goto B6e4be9;
case 0x6e4bed:c.instructions+=9;goto B6e4bed;
case 0x6e4bf0:c.instructions+=8;goto B6e4bf0;
case 0x6e4bf1:c.instructions+=7;goto B6e4bf1;
case 0x6e4bf3:c.instructions+=6;goto B6e4bf3;
case 0x6e4bf4:c.instructions+=5;goto B6e4bf4;
case 0x6e4bf8:c.instructions+=4;goto B6e4bf8;
case 0x6e4bf9:c.instructions+=3;goto B6e4bf9;
case 0x6e4bfa:c.instructions+=2;goto B6e4bfa;
case 0x6e4bfb:c.instructions+=1;goto B6e4bfb;
case 0x6e4c00:goto L6e4c00;
case 0x6e4c01:c.instructions+=6;goto B6e4c01;
case 0x6e4c02:c.instructions+=5;goto B6e4c02;
case 0x6e4c03:c.instructions+=4;goto B6e4c03;
case 0x6e4c05:c.instructions+=3;goto B6e4c05;
case 0x6e4c06:c.instructions+=2;goto B6e4c06;
case 0x6e4c09:c.instructions+=1;goto B6e4c09;
case 0x6e4c0c:goto L6e4c0c;
case 0x6e4c10:c.instructions+=4;goto B6e4c10;
case 0x6e4c13:c.instructions+=3;goto B6e4c13;
case 0x6e4c15:c.instructions+=2;goto B6e4c15;
case 0x6e4c17:c.instructions+=1;goto B6e4c17;
case 0x6e4c19:goto L6e4c19;
case 0x6e4c20:goto L6e4c20;
case 0x6e4c23:c.instructions+=11;goto B6e4c23;
case 0x6e4c27:c.instructions+=10;goto B6e4c27;
case 0x6e4c2a:c.instructions+=9;goto B6e4c2a;
case 0x6e4c2e:c.instructions+=8;goto B6e4c2e;
case 0x6e4c31:c.instructions+=7;goto B6e4c31;
case 0x6e4c35:c.instructions+=6;goto B6e4c35;
case 0x6e4c38:c.instructions+=5;goto B6e4c38;
case 0x6e4c3c:c.instructions+=4;goto B6e4c3c;
case 0x6e4c3f:c.instructions+=3;goto B6e4c3f;
case 0x6e4c40:c.instructions+=2;goto B6e4c40;
case 0x6e4c42:c.instructions+=1;goto B6e4c42;
case 0x6e4c44:goto L6e4c44;
case 0x6e4c45:c.instructions+=6;goto B6e4c45;
case 0x6e4c46:c.instructions+=5;goto B6e4c46;
case 0x6e4c47:c.instructions+=4;goto B6e4c47;
case 0x6e4c49:c.instructions+=3;goto B6e4c49;
case 0x6e4c4a:c.instructions+=2;goto B6e4c4a;
case 0x6e4c4d:c.instructions+=1;goto B6e4c4d;
case 0x6e4c50:goto L6e4c50;
case 0x6e4c53:c.instructions+=11;goto B6e4c53;
case 0x6e4c57:c.instructions+=10;goto B6e4c57;
case 0x6e4c58:c.instructions+=9;goto B6e4c58;
case 0x6e4c5e:c.instructions+=8;goto B6e4c5e;
case 0x6e4c5f:c.instructions+=7;goto B6e4c5f;
case 0x6e4c63:c.instructions+=6;goto B6e4c63;
case 0x6e4c64:c.instructions+=5;goto B6e4c64;
case 0x6e4c65:c.instructions+=4;goto B6e4c65;
case 0x6e4c69:c.instructions+=3;goto B6e4c69;
case 0x6e4c6b:c.instructions+=2;goto B6e4c6b;
case 0x6e4c6e:c.instructions+=1;goto B6e4c6e;
case 0x6e4c70:goto L6e4c70;
case 0x6e4c76:c.instructions+=5;goto B6e4c76;
case 0x6e4c7a:c.instructions+=4;goto B6e4c7a;
case 0x6e4c7e:c.instructions+=3;goto B6e4c7e;
case 0x6e4c82:c.instructions+=2;goto B6e4c82;
case 0x6e4c86:c.instructions+=1;goto B6e4c86;
case 0x6e4c88:goto L6e4c88;
case 0x6e4c8e:c.instructions+=4;goto B6e4c8e;
case 0x6e4c92:c.instructions+=3;goto B6e4c92;
case 0x6e4c96:c.instructions+=2;goto B6e4c96;
case 0x6e4c9a:c.instructions+=1;goto B6e4c9a;
case 0x6e4c9e:goto L6e4c9e;
case 0x6e4ca2:c.instructions+=7;goto B6e4ca2;
case 0x6e4ca5:c.instructions+=6;goto B6e4ca5;
case 0x6e4ca8:c.instructions+=5;goto B6e4ca8;
case 0x6e4cac:c.instructions+=4;goto B6e4cac;
case 0x6e4cae:c.instructions+=3;goto B6e4cae;
case 0x6e4cb2:c.instructions+=2;goto B6e4cb2;
case 0x6e4cb4:c.instructions+=1;goto B6e4cb4;
case 0x6e4cb6:goto L6e4cb6;
case 0x6e4cb9:c.instructions+=1;goto B6e4cb9;
case 0x6e4cbb:goto L6e4cbb;
case 0x6e4cbd:c.instructions+=1;goto B6e4cbd;
case 0x6e4cbf:goto L6e4cbf;
case 0x6e4cc1:goto L6e4cc1;
case 0x6e4cc4:c.instructions+=9;goto B6e4cc4;
case 0x6e4cc5:c.instructions+=8;goto B6e4cc5;
case 0x6e4cc6:c.instructions+=7;goto B6e4cc6;
case 0x6e4cc9:c.instructions+=6;goto B6e4cc9;
case 0x6e4ccc:c.instructions+=5;goto B6e4ccc;
case 0x6e4ccd:c.instructions+=4;goto B6e4ccd;
case 0x6e4cce:c.instructions+=3;goto B6e4cce;
case 0x6e4ccf:c.instructions+=2;goto B6e4ccf;
case 0x6e4cd1:c.instructions+=1;goto B6e4cd1;
case 0x6e4cd6:goto L6e4cd6;
case 0x6e4cda:c.instructions+=13;goto B6e4cda;
case 0x6e4cde:c.instructions+=12;goto B6e4cde;
case 0x6e4ce1:c.instructions+=11;goto B6e4ce1;
case 0x6e4ce5:c.instructions+=10;goto B6e4ce5;
case 0x6e4ce8:c.instructions+=9;goto B6e4ce8;
case 0x6e4ceb:c.instructions+=8;goto B6e4ceb;
case 0x6e4cef:c.instructions+=7;goto B6e4cef;
case 0x6e4cf3:c.instructions+=6;goto B6e4cf3;
case 0x6e4cf6:c.instructions+=5;goto B6e4cf6;
case 0x6e4cfa:c.instructions+=4;goto B6e4cfa;
case 0x6e4cfd:c.instructions+=3;goto B6e4cfd;
case 0x6e4cff:c.instructions+=2;goto B6e4cff;
case 0x6e4d02:c.instructions+=1;goto B6e4d02;
case 0x6e4d04:goto L6e4d04;
case 0x6e4d08:c.instructions+=3;goto B6e4d08;
case 0x6e4d0b:c.instructions+=2;goto B6e4d0b;
case 0x6e4d0d:c.instructions+=1;goto B6e4d0d;
case 0x6e4d0f:goto L6e4d0f;
case 0x6e4d13:c.instructions+=15;goto B6e4d13;
case 0x6e4d17:c.instructions+=14;goto B6e4d17;
case 0x6e4d1b:c.instructions+=13;goto B6e4d1b;
case 0x6e4d1c:c.instructions+=12;goto B6e4d1c;
case 0x6e4d1f:c.instructions+=11;goto B6e4d1f;
case 0x6e4d20:c.instructions+=10;goto B6e4d20;
case 0x6e4d22:c.instructions+=9;goto B6e4d22;
case 0x6e4d23:c.instructions+=8;goto B6e4d23;
case 0x6e4d26:c.instructions+=7;goto B6e4d26;
case 0x6e4d27:c.instructions+=6;goto B6e4d27;
case 0x6e4d28:c.instructions+=5;goto B6e4d28;
case 0x6e4d2b:c.instructions+=4;goto B6e4d2b;
case 0x6e4d2c:c.instructions+=3;goto B6e4d2c;
case 0x6e4d2d:c.instructions+=2;goto B6e4d2d;
case 0x6e4d2f:c.instructions+=1;goto B6e4d2f;
case 0x6e4d34:goto L6e4d34;
case 0x6e4d35:c.instructions+=5;goto B6e4d35;
case 0x6e4d36:c.instructions+=4;goto B6e4d36;
case 0x6e4d37:c.instructions+=3;goto B6e4d37;
case 0x6e4d38:c.instructions+=2;goto B6e4d38;
case 0x6e4d3b:c.instructions+=1;goto B6e4d3b;
case 0x6e4d3e:goto L6e4d3e;
case 0x6e4d41:c.instructions+=3;goto B6e4d41;
case 0x6e4d43:c.instructions+=2;goto B6e4d43;
case 0x6e4d45:c.instructions+=1;goto B6e4d45;
case 0x6e4d47:goto L6e4d47;
case 0x6e4d49:c.instructions+=1;goto B6e4d49;
case 0x6e4d4b:goto L6e4d4b;
case 0x6e4d4f:c.instructions+=1;goto B6e4d4f;
case 0x6e4d50:goto L6e4d50;
case 0x6e4d53:c.instructions+=16;goto B6e4d53;
case 0x6e4d56:c.instructions+=15;goto B6e4d56;
case 0x6e4d5a:c.instructions+=14;goto B6e4d5a;
case 0x6e4d5d:c.instructions+=13;goto B6e4d5d;
case 0x6e4d60:c.instructions+=12;goto B6e4d60;
case 0x6e4d62:c.instructions+=11;goto B6e4d62;
case 0x6e4d64:c.instructions+=10;goto B6e4d64;
case 0x6e4d67:c.instructions+=9;goto B6e4d67;
case 0x6e4d6a:c.instructions+=8;goto B6e4d6a;
case 0x6e4d6d:c.instructions+=7;goto B6e4d6d;
case 0x6e4d70:c.instructions+=6;goto B6e4d70;
case 0x6e4d73:c.instructions+=5;goto B6e4d73;
case 0x6e4d76:c.instructions+=4;goto B6e4d76;
case 0x6e4d79:c.instructions+=3;goto B6e4d79;
case 0x6e4d7b:c.instructions+=2;goto B6e4d7b;
case 0x6e4d7e:c.instructions+=1;goto B6e4d7e;
case 0x6e4d80:goto L6e4d80;
case 0x6e4d81:c.instructions+=5;goto B6e4d81;
case 0x6e4d82:c.instructions+=4;goto B6e4d82;
case 0x6e4d83:c.instructions+=3;goto B6e4d83;
case 0x6e4d84:c.instructions+=2;goto B6e4d84;
case 0x6e4d87:c.instructions+=1;goto B6e4d87;
case 0x6e4d90:goto L6e4d90;
case 0x6e4d93:c.instructions+=4;goto B6e4d93;
case 0x6e4d97:c.instructions+=3;goto B6e4d97;
case 0x6e4d9b:c.instructions+=2;goto B6e4d9b;
case 0x6e4d9e:c.instructions+=1;goto B6e4d9e;
case 0x6e4da0:goto L6e4da0;
case 0x6e4da7:c.instructions+=4;goto B6e4da7;
case 0x6e4dab:c.instructions+=3;goto B6e4dab;
case 0x6e4daf:c.instructions+=2;goto B6e4daf;
case 0x6e4db2:c.instructions+=1;goto B6e4db2;
case 0x6e4db6:goto L6e4db6;
case 0x6e4db9:c.instructions+=13;goto B6e4db9;
case 0x6e4dbd:c.instructions+=12;goto B6e4dbd;
case 0x6e4dbe:c.instructions+=11;goto B6e4dbe;
case 0x6e4dc2:c.instructions+=10;goto B6e4dc2;
case 0x6e4dc5:c.instructions+=9;goto B6e4dc5;
case 0x6e4dc6:c.instructions+=8;goto B6e4dc6;
case 0x6e4dc9:c.instructions+=7;goto B6e4dc9;
case 0x6e4dcc:c.instructions+=6;goto B6e4dcc;
case 0x6e4dce:c.instructions+=5;goto B6e4dce;
case 0x6e4dcf:c.instructions+=4;goto B6e4dcf;
case 0x6e4dd3:c.instructions+=3;goto B6e4dd3;
case 0x6e4dd6:c.instructions+=2;goto B6e4dd6;
case 0x6e4dd7:c.instructions+=1;goto B6e4dd7;
case 0x6e4dd9:goto L6e4dd9;
case 0x6e4ddc:c.instructions+=1;goto B6e4ddc;
case 0x6e4dde:goto L6e4dde;
case 0x6e4de4:c.instructions+=5;goto B6e4de4;
case 0x6e4de6:c.instructions+=4;goto B6e4de6;
case 0x6e4de9:c.instructions+=3;goto B6e4de9;
case 0x6e4dec:c.instructions+=2;goto B6e4dec;
case 0x6e4ded:c.instructions+=1;goto B6e4ded;
case 0x6e4df0:goto L6e4df0;
case 0x6e4df4:c.instructions+=4;goto B6e4df4;
case 0x6e4df6:c.instructions+=3;goto B6e4df6;
case 0x6e4df8:c.instructions+=2;goto B6e4df8;
case 0x6e4dfb:c.instructions+=1;goto B6e4dfb;
case 0x6e4dfd:goto L6e4dfd;
case 0x6e4dfe:c.instructions+=2;goto B6e4dfe;
case 0x6e4e01:c.instructions+=1;goto B6e4e01;
case 0x6e4e02:goto L6e4e02;
case 0x6e4e06:c.instructions+=12;goto B6e4e06;
case 0x6e4e0b:c.instructions+=11;goto B6e4e0b;
case 0x6e4e0d:c.instructions+=10;goto B6e4e0d;
case 0x6e4e10:c.instructions+=9;goto B6e4e10;
case 0x6e4e13:c.instructions+=8;goto B6e4e13;
case 0x6e4e15:c.instructions+=7;goto B6e4e15;
case 0x6e4e18:c.instructions+=6;goto B6e4e18;
case 0x6e4e1d:c.instructions+=5;goto B6e4e1d;
case 0x6e4e1f:c.instructions+=4;goto B6e4e1f;
case 0x6e4e23:c.instructions+=3;goto B6e4e23;
case 0x6e4e26:c.instructions+=2;goto B6e4e26;
case 0x6e4e29:c.instructions+=1;goto B6e4e29;
case 0x6e4e2b:goto L6e4e2b;
case 0x6e4e2f:c.instructions+=5;goto B6e4e2f;
case 0x6e4e32:c.instructions+=4;goto B6e4e32;
case 0x6e4e35:c.instructions+=3;goto B6e4e35;
case 0x6e4e39:c.instructions+=2;goto B6e4e39;
case 0x6e4e3d:c.instructions+=1;goto B6e4e3d;
case 0x6e4e40:goto L6e4e40;
case 0x6e4e41:c.instructions+=2;goto B6e4e41;
case 0x6e4e42:c.instructions+=1;goto B6e4e42;
case 0x6e4e44:goto L6e4e44;
case 0x6e4e48:c.instructions+=5;goto B6e4e48;
case 0x6e4e4e:c.instructions+=4;goto B6e4e4e;
case 0x6e4e52:c.instructions+=3;goto B6e4e52;
case 0x6e4e54:c.instructions+=2;goto B6e4e54;
case 0x6e4e57:c.instructions+=1;goto B6e4e57;
case 0x6e4e59:goto L6e4e59;
case 0x6e4e5f:c.instructions+=5;goto B6e4e5f;
case 0x6e4e63:c.instructions+=4;goto B6e4e63;
case 0x6e4e67:c.instructions+=3;goto B6e4e67;
case 0x6e4e6b:c.instructions+=2;goto B6e4e6b;
case 0x6e4e6f:c.instructions+=1;goto B6e4e6f;
case 0x6e4e71:goto L6e4e71;
case 0x6e4e77:c.instructions+=4;goto B6e4e77;
case 0x6e4e7b:c.instructions+=3;goto B6e4e7b;
case 0x6e4e7f:c.instructions+=2;goto B6e4e7f;
case 0x6e4e83:c.instructions+=1;goto B6e4e83;
case 0x6e4e87:goto L6e4e87;
case 0x6e4e8b:c.instructions+=9;goto B6e4e8b;
case 0x6e4e8e:c.instructions+=8;goto B6e4e8e;
case 0x6e4e91:c.instructions+=7;goto B6e4e91;
case 0x6e4e95:c.instructions+=6;goto B6e4e95;
case 0x6e4e97:c.instructions+=5;goto B6e4e97;
case 0x6e4e9b:c.instructions+=4;goto B6e4e9b;
case 0x6e4e9e:c.instructions+=3;goto B6e4e9e;
case 0x6e4ea0:c.instructions+=2;goto B6e4ea0;
case 0x6e4ea4:c.instructions+=1;goto B6e4ea4;
case 0x6e4ea6:goto L6e4ea6;
case 0x6e4ea9:c.instructions+=1;goto B6e4ea9;
case 0x6e4eab:goto L6e4eab;
case 0x6e4ead:c.instructions+=1;goto B6e4ead;
case 0x6e4eaf:goto L6e4eaf;
case 0x6e4eb1:goto L6e4eb1;
case 0x6e4eb4:c.instructions+=12;goto B6e4eb4;
case 0x6e4eb7:c.instructions+=11;goto B6e4eb7;
case 0x6e4eb8:c.instructions+=10;goto B6e4eb8;
case 0x6e4ebb:c.instructions+=9;goto B6e4ebb;
case 0x6e4ebc:c.instructions+=8;goto B6e4ebc;
case 0x6e4ec0:c.instructions+=7;goto B6e4ec0;
case 0x6e4ec1:c.instructions+=6;goto B6e4ec1;
case 0x6e4ec2:c.instructions+=5;goto B6e4ec2;
case 0x6e4ec5:c.instructions+=4;goto B6e4ec5;
case 0x6e4ec6:c.instructions+=3;goto B6e4ec6;
case 0x6e4ec7:c.instructions+=2;goto B6e4ec7;
case 0x6e4ec9:c.instructions+=1;goto B6e4ec9;
case 0x6e4ece:goto L6e4ece;
case 0x6e4ed2:c.instructions+=8;goto B6e4ed2;
case 0x6e4ed6:c.instructions+=7;goto B6e4ed6;
case 0x6e4ed9:c.instructions+=6;goto B6e4ed9;
case 0x6e4edd:c.instructions+=5;goto B6e4edd;
case 0x6e4ee1:c.instructions+=4;goto B6e4ee1;
case 0x6e4ee5:c.instructions+=3;goto B6e4ee5;
case 0x6e4ee7:c.instructions+=2;goto B6e4ee7;
case 0x6e4eea:c.instructions+=1;goto B6e4eea;
case 0x6e4eec:goto L6e4eec;
case 0x6e4ef0:c.instructions+=1;goto B6e4ef0;
case 0x6e4ef2:goto L6e4ef2;
case 0x6e4ef6:c.instructions+=18;goto B6e4ef6;
case 0x6e4efa:c.instructions+=17;goto B6e4efa;
case 0x6e4efd:c.instructions+=16;goto B6e4efd;
case 0x6e4f01:c.instructions+=15;goto B6e4f01;
case 0x6e4f04:c.instructions+=14;goto B6e4f04;
case 0x6e4f05:c.instructions+=13;goto B6e4f05;
case 0x6e4f06:c.instructions+=12;goto B6e4f06;
case 0x6e4f09:c.instructions+=11;goto B6e4f09;
case 0x6e4f0a:c.instructions+=10;goto B6e4f0a;
case 0x6e4f0e:c.instructions+=9;goto B6e4f0e;
case 0x6e4f11:c.instructions+=8;goto B6e4f11;
case 0x6e4f12:c.instructions+=7;goto B6e4f12;
case 0x6e4f14:c.instructions+=6;goto B6e4f14;
case 0x6e4f15:c.instructions+=5;goto B6e4f15;
case 0x6e4f19:c.instructions+=4;goto B6e4f19;
case 0x6e4f1a:c.instructions+=3;goto B6e4f1a;
case 0x6e4f1b:c.instructions+=2;goto B6e4f1b;
case 0x6e4f1c:c.instructions+=1;goto B6e4f1c;
case 0x6e4f21:goto L6e4f21;
case 0x6e4f22:c.instructions+=6;goto B6e4f22;
case 0x6e4f23:c.instructions+=5;goto B6e4f23;
case 0x6e4f24:c.instructions+=4;goto B6e4f24;
case 0x6e4f26:c.instructions+=3;goto B6e4f26;
case 0x6e4f27:c.instructions+=2;goto B6e4f27;
case 0x6e4f2a:c.instructions+=1;goto B6e4f2a;
case 0x6e4f2d:goto L6e4f2d;
case 0x6e4f31:c.instructions+=4;goto B6e4f31;
case 0x6e4f34:c.instructions+=3;goto B6e4f34;
case 0x6e4f36:c.instructions+=2;goto B6e4f36;
case 0x6e4f38:c.instructions+=1;goto B6e4f38;
case 0x6e4f3a:goto L6e4f3a;
case 0x6e4f40:goto L6e4f40;
case 0x6e4f43:c.instructions+=21;goto B6e4f43;
case 0x6e4f47:c.instructions+=20;goto B6e4f47;
case 0x6e4f4a:c.instructions+=19;goto B6e4f4a;
case 0x6e4f4e:c.instructions+=18;goto B6e4f4e;
case 0x6e4f50:c.instructions+=17;goto B6e4f50;
case 0x6e4f54:c.instructions+=16;goto B6e4f54;
case 0x6e4f57:c.instructions+=15;goto B6e4f57;
case 0x6e4f5a:c.instructions+=14;goto B6e4f5a;
case 0x6e4f5c:c.instructions+=13;goto B6e4f5c;
case 0x6e4f5e:c.instructions+=12;goto B6e4f5e;
case 0x6e4f60:c.instructions+=11;goto B6e4f60;
case 0x6e4f63:c.instructions+=10;goto B6e4f63;
case 0x6e4f66:c.instructions+=9;goto B6e4f66;
case 0x6e4f69:c.instructions+=8;goto B6e4f69;
case 0x6e4f6c:c.instructions+=7;goto B6e4f6c;
case 0x6e4f6f:c.instructions+=6;goto B6e4f6f;
case 0x6e4f72:c.instructions+=5;goto B6e4f72;
case 0x6e4f76:c.instructions+=4;goto B6e4f76;
case 0x6e4f79:c.instructions+=3;goto B6e4f79;
case 0x6e4f7a:c.instructions+=2;goto B6e4f7a;
case 0x6e4f7c:c.instructions+=1;goto B6e4f7c;
case 0x6e4f7e:goto L6e4f7e;
case 0x6e4f7f:c.instructions+=6;goto B6e4f7f;
case 0x6e4f80:c.instructions+=5;goto B6e4f80;
case 0x6e4f81:c.instructions+=4;goto B6e4f81;
case 0x6e4f83:c.instructions+=3;goto B6e4f83;
case 0x6e4f84:c.instructions+=2;goto B6e4f84;
case 0x6e4f87:c.instructions+=1;goto B6e4f87;
case 0x6e4f90:goto L6e4f90;
case 0x6e4f93:c.instructions+=9;goto B6e4f93;
case 0x6e4f97:c.instructions+=8;goto B6e4f97;
case 0x6e4f98:c.instructions+=7;goto B6e4f98;
case 0x6e4f9e:c.instructions+=6;goto B6e4f9e;
case 0x6e4f9f:c.instructions+=5;goto B6e4f9f;
case 0x6e4fa3:c.instructions+=4;goto B6e4fa3;
case 0x6e4fa7:c.instructions+=3;goto B6e4fa7;
case 0x6e4fa9:c.instructions+=2;goto B6e4fa9;
case 0x6e4fac:c.instructions+=1;goto B6e4fac;
case 0x6e4fae:goto L6e4fae;
case 0x6e4fb4:c.instructions+=5;goto B6e4fb4;
case 0x6e4fb8:c.instructions+=4;goto B6e4fb8;
case 0x6e4fbc:c.instructions+=3;goto B6e4fbc;
case 0x6e4fc0:c.instructions+=2;goto B6e4fc0;
case 0x6e4fc4:c.instructions+=1;goto B6e4fc4;
case 0x6e4fc6:goto L6e4fc6;
case 0x6e4fcc:c.instructions+=4;goto B6e4fcc;
case 0x6e4fd0:c.instructions+=3;goto B6e4fd0;
case 0x6e4fd4:c.instructions+=2;goto B6e4fd4;
case 0x6e4fd8:c.instructions+=1;goto B6e4fd8;
case 0x6e4fdc:goto L6e4fdc;
case 0x6e4fe0:c.instructions+=10;goto B6e4fe0;
case 0x6e4fe3:c.instructions+=9;goto B6e4fe3;
case 0x6e4fe6:c.instructions+=8;goto B6e4fe6;
case 0x6e4fea:c.instructions+=7;goto B6e4fea;
case 0x6e4fed:c.instructions+=6;goto B6e4fed;
case 0x6e4ff1:c.instructions+=5;goto B6e4ff1;
case 0x6e4ff5:c.instructions+=4;goto B6e4ff5;
case 0x6e4ff9:c.instructions+=3;goto B6e4ff9;
case 0x6e4ffb:c.instructions+=2;goto B6e4ffb;
case 0x6e4ffe:c.instructions+=1;goto B6e4ffe;
default:missing_instruction(c.pc);}
B6e4002:L6e4002:{c.instructions+=3;NFSU2_TR(0x6e4002);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4004:{NFSU2_TR(0x6e4004);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4007:{NFSU2_TR(0x6e4007);
if(r1(R+518)){{goto L6e4042;}}
}
B6e4009:L6e4009:{c.instructions+=5;NFSU2_TR(0x6e4009);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e400c:{NFSU2_TR(0x6e400c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e400f:{NFSU2_TR(0x6e400f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B6e4012:{NFSU2_TR(0x6e4012);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4014:{NFSU2_TR(0x6e4014);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e3fd2u,6e3);}
}
B6e4016:L6e4016:{c.instructions+=2;NFSU2_TR(0x6e4016);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4018:{NFSU2_TR(0x6e4018);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4045;}}
}
B6e401a:L6e401a:{c.instructions+=3;NFSU2_TR(0x6e401a);
__builtin_memmove((R+0),(R+4),4);
}
B6e401c:{NFSU2_TR(0x6e401c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e401f:{NFSU2_TR(0x6e401f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e4023:L6e4023:{c.instructions+=5;NFSU2_TR(0x6e4023);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4025:{NFSU2_TR(0x6e4025);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4029:{NFSU2_TR(0x6e4029);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e402b:{NFSU2_TR(0x6e402b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e402e:{NFSU2_TR(0x6e402e);
if(r1(R+518)){{goto L6e4045;}}
}
B6e4030:L6e4030:{c.instructions+=4;NFSU2_TR(0x6e4030);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e4031:{NFSU2_TR(0x6e4031);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e4034:{NFSU2_TR(0x6e4034);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4036:{NFSU2_TR(0x6e4036);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4023u);}goto L6e4023;}}
}
B6e4038:L6e4038:{c.instructions+=1;NFSU2_TR(0x6e4038);
{goto L6e4045;}
}
B6e403a:L6e403a:{c.instructions+=2;NFSU2_TR(0x6e403a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e403b:{NFSU2_TR(0x6e403b);
{goto L6e4045;}
}
B6e403d:L6e403d:{c.instructions+=2;NFSU2_TR(0x6e403d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e4040:{NFSU2_TR(0x6e4040);
{goto L6e4045;}
}
B6e4042:L6e4042:{c.instructions+=1;NFSU2_TR(0x6e4042);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B6e4045:L6e4045:{c.instructions+=7;NFSU2_TR(0x6e4045);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4049:{NFSU2_TR(0x6e4049);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e404d:{NFSU2_TR(0x6e404d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4051:{NFSU2_TR(0x6e4051);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e4053:{NFSU2_TR(0x6e4053);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4055:{NFSU2_TR(0x6e4055);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e4058:{NFSU2_TR(0x6e4058);
if(r1(R+514)){{goto L6e4090;}}
}
B6e405a:L6e405a:{c.instructions+=2;NFSU2_TR(0x6e405a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e405c:{NFSU2_TR(0x6e405c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e4063;}}
}
B6e405e:L6e405e:{c.instructions+=2;NFSU2_TR(0x6e405e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e4061:{NFSU2_TR(0x6e4061);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e4063:L6e4063:{c.instructions+=3;NFSU2_TR(0x6e4063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e4065:{NFSU2_TR(0x6e4065);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e4067:{NFSU2_TR(0x6e4067);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e408b;}}
}
B6e4069:L6e4069:{c.instructions+=4;NFSU2_TR(0x6e4069);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e406d:{NFSU2_TR(0x6e406d);
__builtin_memmove((R+8),(R+4),4);
}
B6e406f:{NFSU2_TR(0x6e406f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e4072:{NFSU2_TR(0x6e4072);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e4076:L6e4076:{c.instructions+=5;NFSU2_TR(0x6e4076);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4078:{NFSU2_TR(0x6e4078);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e407c:{NFSU2_TR(0x6e407c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e407e:{NFSU2_TR(0x6e407e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e4081:{NFSU2_TR(0x6e4081);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e408b;}}
}
B6e4083:L6e4083:{c.instructions+=4;NFSU2_TR(0x6e4083);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e4084:{NFSU2_TR(0x6e4084);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x10ull))));
}
B6e4087:{NFSU2_TR(0x6e4087);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e4089:{NFSU2_TR(0x6e4089);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4076u);}goto L6e4076;}}
}
B6e408b:L6e408b:{c.instructions+=3;NFSU2_TR(0x6e408b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e408c:{NFSU2_TR(0x6e408c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e408e:{NFSU2_TR(0x6e408e);
{goto L6e40da;}
}
B6e4090:L6e4090:{c.instructions+=5;NFSU2_TR(0x6e4090);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4094:{NFSU2_TR(0x6e4094);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4098:{NFSU2_TR(0x6e4098);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e409a:{NFSU2_TR(0x6e409a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e409d:{NFSU2_TR(0x6e409d);
if(r1(R+514)){{goto L6e40da;}}
}
B6e409f:L6e409f:{c.instructions+=2;NFSU2_TR(0x6e409f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e40a1:{NFSU2_TR(0x6e40a1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e40d4;}}
}
B6e40a3:L6e40a3:{c.instructions+=6;NFSU2_TR(0x6e40a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e40a7:{NFSU2_TR(0x6e40a7);
__builtin_memmove((R+24),(R+4),4);
}
B6e40a9:{NFSU2_TR(0x6e40a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e40ac:{NFSU2_TR(0x6e40ac);
__builtin_memmove((R+28),(R+12),4);
}
B6e40ae:{NFSU2_TR(0x6e40ae);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6e40b0:{NFSU2_TR(0x6e40b0);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B6e40b2:L6e40b2:{c.instructions+=5;NFSU2_TR(0x6e40b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e40b4:{NFSU2_TR(0x6e40b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e40b8:{NFSU2_TR(0x6e40b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e40bb:{NFSU2_TR(0x6e40bb);
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
B6e40bd:{NFSU2_TR(0x6e40bd);
if(r1(R+518)){{goto L6e40ca;}}
}
B6e40bf:L6e40bf:{c.instructions+=6;NFSU2_TR(0x6e40bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e40c3:{NFSU2_TR(0x6e40c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e40c5:{NFSU2_TR(0x6e40c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e40c6:{NFSU2_TR(0x6e40c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e40c7:{NFSU2_TR(0x6e40c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e40c8:{NFSU2_TR(0x6e40c8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e40caull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6e40ca:L6e40ca:{c.instructions+=3;NFSU2_TR(0x6e40ca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e40cd:{NFSU2_TR(0x6e40cd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e40ce:{NFSU2_TR(0x6e40ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e40b2u);}goto L6e40b2;}}
}
B6e40d0:L6e40d0:{c.instructions+=1;NFSU2_TR(0x6e40d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e40d4:L6e40d4:{c.instructions+=1;NFSU2_TR(0x6e40d4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6e40da:L6e40da:{c.instructions+=3;NFSU2_TR(0x6e40da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e40dc:{NFSU2_TR(0x6e40dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e40de:{NFSU2_TR(0x6e40de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e411e;}}
}
B6e40e0:L6e40e0:{c.instructions+=5;NFSU2_TR(0x6e40e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e40e4:{NFSU2_TR(0x6e40e4);
__builtin_memmove((R+24),(R+28),4);
}
B6e40e6:{NFSU2_TR(0x6e40e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e40e9:{NFSU2_TR(0x6e40e9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6e40eb:{NFSU2_TR(0x6e40eb);
{goto L6e40f0;}
}
B6e40f0:L6e40f0:{c.instructions+=5;NFSU2_TR(0x6e40f0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e40f3:{NFSU2_TR(0x6e40f3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e40f7:{NFSU2_TR(0x6e40f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e40f9:{NFSU2_TR(0x6e40f9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e40fc:{NFSU2_TR(0x6e40fc);
if(r1(R+514)){{goto L6e411e;}}
}
B6e40fe:L6e40fe:{c.instructions+=5;NFSU2_TR(0x6e40fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e4100:{NFSU2_TR(0x6e4100);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4104:{NFSU2_TR(0x6e4104);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e4107:{NFSU2_TR(0x6e4107);
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
B6e4109:{NFSU2_TR(0x6e4109);
if(r1(R+518)){{goto L6e4116;}}
}
B6e410b:L6e410b:{c.instructions+=6;NFSU2_TR(0x6e410b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e410f:{NFSU2_TR(0x6e410f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e4111:{NFSU2_TR(0x6e4111);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4112:{NFSU2_TR(0x6e4112);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4113:{NFSU2_TR(0x6e4113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4114:{NFSU2_TR(0x6e4114);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4116ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6e4116:L6e4116:{c.instructions+=4;NFSU2_TR(0x6e4116);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e4117:{NFSU2_TR(0x6e4117);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e411a:{NFSU2_TR(0x6e411a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e411c:{NFSU2_TR(0x6e411c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e40f0u);}goto L6e40f0;}}
}
B6e411e:L6e411e:{c.instructions+=5;NFSU2_TR(0x6e411e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6e4120:{NFSU2_TR(0x6e4120);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4124:{NFSU2_TR(0x6e4124);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e4126:{NFSU2_TR(0x6e4126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4127:{NFSU2_TR(0x6e4127);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e413d;}}
}
B6e4129:L6e4129:{c.instructions+=10;NFSU2_TR(0x6e4129);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e412d:{NFSU2_TR(0x6e412d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4131:{NFSU2_TR(0x6e4131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4132:{NFSU2_TR(0x6e4132);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e4133:{NFSU2_TR(0x6e4133);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e4135:{NFSU2_TR(0x6e4135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4136:{NFSU2_TR(0x6e4136);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6e4138:{NFSU2_TR(0x6e4138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4139:{NFSU2_TR(0x6e4139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e413a:{NFSU2_TR(0x6e413a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e413d:L6e413d:{c.instructions+=8;NFSU2_TR(0x6e413d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4141:{NFSU2_TR(0x6e4141);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4145:{NFSU2_TR(0x6e4145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4146:{NFSU2_TR(0x6e4146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4147:{NFSU2_TR(0x6e4147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e4149:{NFSU2_TR(0x6e4149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e414a:{NFSU2_TR(0x6e414a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e414b:{NFSU2_TR(0x6e414b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4150:L6e4150:{c.instructions+=36;NFSU2_TR(0x6e4150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x434ull))));
}
B6e4156:{NFSU2_TR(0x6e4156);
u8 U[8];
w4(U+0,u32(u32(u32(0x444ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e415d:{NFSU2_TR(0x6e415d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B6e4160:{NFSU2_TR(0x6e4160);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e4163:{NFSU2_TR(0x6e4163);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4164:{NFSU2_TR(0x6e4164);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4165:{NFSU2_TR(0x6e4165);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4166:{NFSU2_TR(0x6e4166);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4169:{NFSU2_TR(0x6e4169);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e416c:{NFSU2_TR(0x6e416c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e416f:{NFSU2_TR(0x6e416f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4173:{NFSU2_TR(0x6e4173);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4176:{NFSU2_TR(0x6e4176);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e417a:{NFSU2_TR(0x6e417a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e417e:{NFSU2_TR(0x6e417e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e4186:{NFSU2_TR(0x6e4186);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e418e:{NFSU2_TR(0x6e418e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e4192:{NFSU2_TR(0x6e4192);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6e4196:{NFSU2_TR(0x6e4196);
u8 U[6];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6e419b:{NFSU2_TR(0x6e419b);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6e419f:{NFSU2_TR(0x6e419f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41a3:{NFSU2_TR(0x6e41a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e41aa:{NFSU2_TR(0x6e41aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41ae:{NFSU2_TR(0x6e41ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e41b1:{NFSU2_TR(0x6e41b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41b5:{NFSU2_TR(0x6e41b5);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6e41b9:{NFSU2_TR(0x6e41b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6e41bc:{NFSU2_TR(0x6e41bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41c0:{NFSU2_TR(0x6e41c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e41c2:{NFSU2_TR(0x6e41c2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e41c4:{NFSU2_TR(0x6e41c4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e41c6:{NFSU2_TR(0x6e41c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41ca:{NFSU2_TR(0x6e41ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41ce:{NFSU2_TR(0x6e41ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41d2:{NFSU2_TR(0x6e41d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41d6:{NFSU2_TR(0x6e41d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e4277;}}
}
B6e41dc:L6e41dc:{c.instructions+=2;NFSU2_TR(0x6e41dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e41dd:{NFSU2_TR(0x6e41dd);
__builtin_memmove((R+4),(R+4),4);
}
B6e41e0:L6e41e0:{c.instructions+=7;NFSU2_TR(0x6e41e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e41e3:{NFSU2_TR(0x6e41e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e41e6:{NFSU2_TR(0x6e41e6);
w4(R+0,u32(r2(R+0)));
}
B6e41e9:{NFSU2_TR(0x6e41e9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6e41eb:{NFSU2_TR(0x6e41eb);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B6e41ef:{NFSU2_TR(0x6e41ef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e41f1:{NFSU2_TR(0x6e41f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e41f5:L6e41f5:{c.instructions+=4;NFSU2_TR(0x6e41f5);
w4(R+0,u32(0x8ull));
}
B6e41fa:{NFSU2_TR(0x6e41fa);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6e41fc:{NFSU2_TR(0x6e41fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e41fe:{NFSU2_TR(0x6e41fe);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e4202;}}
}
B6e4200:L6e4200:{c.instructions+=1;NFSU2_TR(0x6e4200);
__builtin_memmove((R+0),(R+24),4);
}
B6e4202:L6e4202:{c.instructions+=19;NFSU2_TR(0x6e4202);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4206:{NFSU2_TR(0x6e4206);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B6e4209:{NFSU2_TR(0x6e4209);
__builtin_memmove((R+4),(R+8),1);
}
B6e420b:{NFSU2_TR(0x6e420b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B6e420d:{NFSU2_TR(0x6e420d);
__builtin_memmove((R+4),(R+0),4);
}
B6e420f:{NFSU2_TR(0x6e420f);
w4(R+20,u32(0x1ull));
}
B6e4214:{NFSU2_TR(0x6e4214);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e4216:{NFSU2_TR(0x6e4216);
__builtin_memmove((R+4),(R+28),4);
}
B6e4218:{NFSU2_TR(0x6e4218);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6e421a:{NFSU2_TR(0x6e421a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B6e421c:{NFSU2_TR(0x6e421c);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B6e421d:{NFSU2_TR(0x6e421d);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+20))));
}
B6e421f:{NFSU2_TR(0x6e421f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6e4221:{NFSU2_TR(0x6e4221);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4225:{NFSU2_TR(0x6e4225);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6e4227:{NFSU2_TR(0x6e4227);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B6e4229:{NFSU2_TR(0x6e4229);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6e422c:{NFSU2_TR(0x6e422c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4230:{NFSU2_TR(0x6e4230);
if(r1(R+512)){{goto L6e423d;}}
}
B6e4232:L6e4232:{c.instructions+=4;NFSU2_TR(0x6e4232);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4236:{NFSU2_TR(0x6e4236);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e4238:{NFSU2_TR(0x6e4238);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e4239:{NFSU2_TR(0x6e4239);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e423d:L6e423d:{c.instructions+=2;NFSU2_TR(0x6e423d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e423f:{NFSU2_TR(0x6e423f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e41f5u);}goto L6e41f5;}}
}
B6e4241:L6e4241:{c.instructions+=16;NFSU2_TR(0x6e4241);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4245:{NFSU2_TR(0x6e4245);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4249:{NFSU2_TR(0x6e4249);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e424c:{NFSU2_TR(0x6e424c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e4250:{NFSU2_TR(0x6e4250);
w4(R+28,u32(r2(R+0)));
}
B6e4253:{NFSU2_TR(0x6e4253);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e4255:{NFSU2_TR(0x6e4255);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4259:{NFSU2_TR(0x6e4259);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e425c:{NFSU2_TR(0x6e425c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e425f:{NFSU2_TR(0x6e425f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6e4261:{NFSU2_TR(0x6e4261);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e4265:{NFSU2_TR(0x6e4265);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4269:{NFSU2_TR(0x6e4269);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e426a:{NFSU2_TR(0x6e426a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e426c:{NFSU2_TR(0x6e426c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4270:{NFSU2_TR(0x6e4270);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e41e0u);}goto L6e41e0;}}
}
B6e4276:L6e4276:{c.instructions+=1;NFSU2_TR(0x6e4276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4277:L6e4277:{c.instructions+=8;NFSU2_TR(0x6e4277);
u8 U[8];
w4(U+0,u32(u32(u32(0x448ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e427e:{NFSU2_TR(0x6e427e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4282:{NFSU2_TR(0x6e4282);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e4285:{NFSU2_TR(0x6e4285);
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
B6e4287:{NFSU2_TR(0x6e4287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4288:{NFSU2_TR(0x6e4288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4289:{NFSU2_TR(0x6e4289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e428a:{NFSU2_TR(0x6e428a);
if(r1(R+518)){{goto L6e42a2;}}
}
B6e428c:L6e428c:{c.instructions+=8;NFSU2_TR(0x6e428c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e428e:{NFSU2_TR(0x6e428e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e4292:{NFSU2_TR(0x6e4292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4293:{NFSU2_TR(0x6e4293);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6e4297:{NFSU2_TR(0x6e4297);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4298:{NFSU2_TR(0x6e4298);
u8 U[8];
w4(U+0,u32(u32(u32(0x440ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e429f:{NFSU2_TR(0x6e429f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e42a0:{NFSU2_TR(0x6e42a0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e42a2ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6e42a2:L6e42a2:{c.instructions+=2;NFSU2_TR(0x6e42a2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x434ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x434ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x434ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e42a8:{NFSU2_TR(0x6e42a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e42b0:L6e42b0:{c.instructions+=12;NFSU2_TR(0x6e42b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e42b4:{NFSU2_TR(0x6e42b4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e42b8:{NFSU2_TR(0x6e42b8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e42ba:{NFSU2_TR(0x6e42ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e42bb:{NFSU2_TR(0x6e42bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e42bc:{NFSU2_TR(0x6e42bc);
__builtin_memmove((R+20),(R+4),4);
}
B6e42be:{NFSU2_TR(0x6e42be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e42c1:{NFSU2_TR(0x6e42c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e42c3:{NFSU2_TR(0x6e42c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e42c4:{NFSU2_TR(0x6e42c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e42c8:{NFSU2_TR(0x6e42c8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e42cb:{NFSU2_TR(0x6e42cb);
if(r1(R+514)){{goto L6e42ef;}}
}
B6e42cd:L6e42cd:{c.instructions+=3;NFSU2_TR(0x6e42cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e42cf:{NFSU2_TR(0x6e42cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e42d1:{NFSU2_TR(0x6e42d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e42ec;}}
}
B6e42d3:L6e42d3:{c.instructions+=1;NFSU2_TR(0x6e42d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e42d7:L6e42d7:{c.instructions+=5;NFSU2_TR(0x6e42d7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e42d9:{NFSU2_TR(0x6e42d9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e42dd:{NFSU2_TR(0x6e42dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e42df:{NFSU2_TR(0x6e42df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e42e2:{NFSU2_TR(0x6e42e2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e42ec;}}
}
B6e42e4:L6e42e4:{c.instructions+=4;NFSU2_TR(0x6e42e4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e42e5:{NFSU2_TR(0x6e42e5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
}
B6e42e8:{NFSU2_TR(0x6e42e8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e42ea:{NFSU2_TR(0x6e42ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e42d7u);}goto L6e42d7;}}
}
B6e42ec:L6e42ec:{c.instructions+=2;NFSU2_TR(0x6e42ec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e42ed:{NFSU2_TR(0x6e42ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e42ef:L6e42ef:{c.instructions+=6;NFSU2_TR(0x6e42ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e42f1:{NFSU2_TR(0x6e42f1);
__builtin_memmove((R+8),(R+12),4);
}
B6e42f3:{NFSU2_TR(0x6e42f3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6e42f5:{NFSU2_TR(0x6e42f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e42f8:{NFSU2_TR(0x6e42f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e42f9:{NFSU2_TR(0x6e42f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e4346;}}
}
B6e42fb:L6e42fb:{c.instructions+=2;NFSU2_TR(0x6e42fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e42fe:{NFSU2_TR(0x6e42fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e4302:L6e4302:{c.instructions+=5;NFSU2_TR(0x6e4302);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4305:{NFSU2_TR(0x6e4305);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4309:{NFSU2_TR(0x6e4309);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e430b:{NFSU2_TR(0x6e430b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e430e:{NFSU2_TR(0x6e430e);
if(r1(R+518)){{goto L6e4372;}}
}
B6e4310:L6e4310:{c.instructions+=5;NFSU2_TR(0x6e4310);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4312:{NFSU2_TR(0x6e4312);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4316:{NFSU2_TR(0x6e4316);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4318:{NFSU2_TR(0x6e4318);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e431b:{NFSU2_TR(0x6e431b);
if(r1(R+518)){{goto L6e4367;}}
}
B6e431d:L6e431d:{c.instructions+=5;NFSU2_TR(0x6e431d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4320:{NFSU2_TR(0x6e4320);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4324:{NFSU2_TR(0x6e4324);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4326:{NFSU2_TR(0x6e4326);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4329:{NFSU2_TR(0x6e4329);
if(r1(R+518)){{goto L6e436a;}}
}
B6e432b:L6e432b:{c.instructions+=5;NFSU2_TR(0x6e432b);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e432e:{NFSU2_TR(0x6e432e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4332:{NFSU2_TR(0x6e4332);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4334:{NFSU2_TR(0x6e4334);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4337:{NFSU2_TR(0x6e4337);
if(r1(R+518)){{goto L6e436f;}}
}
B6e4339:L6e4339:{c.instructions+=5;NFSU2_TR(0x6e4339);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e433c:{NFSU2_TR(0x6e433c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6e433f:{NFSU2_TR(0x6e433f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6e4342:{NFSU2_TR(0x6e4342);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4344:{NFSU2_TR(0x6e4344);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4302u);}goto L6e4302;}}
}
B6e4346:L6e4346:{c.instructions+=2;NFSU2_TR(0x6e4346);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4348:{NFSU2_TR(0x6e4348);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4372;}}
}
B6e434a:L6e434a:{c.instructions+=2;NFSU2_TR(0x6e434a);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e434e:{NFSU2_TR(0x6e434e);
__builtin_memmove((R+28),(R+28),4);
}
B6e4350:L6e4350:{c.instructions+=5;NFSU2_TR(0x6e4350);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4352:{NFSU2_TR(0x6e4352);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4356:{NFSU2_TR(0x6e4356);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4358:{NFSU2_TR(0x6e4358);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e435b:{NFSU2_TR(0x6e435b);
if(r1(R+518)){{goto L6e4372;}}
}
B6e435d:L6e435d:{c.instructions+=4;NFSU2_TR(0x6e435d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e435e:{NFSU2_TR(0x6e435e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6e4361:{NFSU2_TR(0x6e4361);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4363:{NFSU2_TR(0x6e4363);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4350u);}goto L6e4350;}}
}
B6e4365:L6e4365:{c.instructions+=1;NFSU2_TR(0x6e4365);
{goto L6e4372;}
}
B6e4367:L6e4367:{c.instructions+=2;NFSU2_TR(0x6e4367);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e4368:{NFSU2_TR(0x6e4368);
{goto L6e4372;}
}
B6e436a:L6e436a:{c.instructions+=2;NFSU2_TR(0x6e436a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e436d:{NFSU2_TR(0x6e436d);
{goto L6e4372;}
}
B6e436f:L6e436f:{c.instructions+=1;NFSU2_TR(0x6e436f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B6e4372:L6e4372:{c.instructions+=7;NFSU2_TR(0x6e4372);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4376:{NFSU2_TR(0x6e4376);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e4378:{NFSU2_TR(0x6e4378);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e437c:{NFSU2_TR(0x6e437c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e437e:{NFSU2_TR(0x6e437e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4380:{NFSU2_TR(0x6e4380);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e4383:{NFSU2_TR(0x6e4383);
if(r1(R+514)){{goto L6e43ae;}}
}
B6e4385:L6e4385:{c.instructions+=2;NFSU2_TR(0x6e4385);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4387:{NFSU2_TR(0x6e4387);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e438e;}}
}
B6e4389:L6e4389:{c.instructions+=2;NFSU2_TR(0x6e4389);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e438c:{NFSU2_TR(0x6e438c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e438e:L6e438e:{c.instructions+=3;NFSU2_TR(0x6e438e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e4390:{NFSU2_TR(0x6e4390);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e4392:{NFSU2_TR(0x6e4392);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e43a9;}}
}
B6e4394:L6e4394:{c.instructions+=1;NFSU2_TR(0x6e4394);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e4398:L6e4398:{c.instructions+=4;NFSU2_TR(0x6e4398);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6e439a:{NFSU2_TR(0x6e439a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e439c:{NFSU2_TR(0x6e439c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e439f:{NFSU2_TR(0x6e439f);
if(r1(R+518)){{goto L6e43a9;}}
}
B6e43a1:L6e43a1:{c.instructions+=4;NFSU2_TR(0x6e43a1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e43a2:{NFSU2_TR(0x6e43a2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
}
B6e43a5:{NFSU2_TR(0x6e43a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e43a7:{NFSU2_TR(0x6e43a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4398u);}goto L6e4398;}}
}
B6e43a9:L6e43a9:{c.instructions+=3;NFSU2_TR(0x6e43a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e43aa:{NFSU2_TR(0x6e43aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e43ac:{NFSU2_TR(0x6e43ac);
{goto L6e43f7;}
}
B6e43ae:L6e43ae:{c.instructions+=4;NFSU2_TR(0x6e43ae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6e43b2:{NFSU2_TR(0x6e43b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e43b4:{NFSU2_TR(0x6e43b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e43b7:{NFSU2_TR(0x6e43b7);
if(r1(R+514)){{goto L6e43f7;}}
}
B6e43b9:L6e43b9:{c.instructions+=2;NFSU2_TR(0x6e43b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e43bb:{NFSU2_TR(0x6e43bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e43f1;}}
}
B6e43bd:L6e43bd:{c.instructions+=4;NFSU2_TR(0x6e43bd);
__builtin_memmove((R+28),(R+12),4);
}
B6e43bf:{NFSU2_TR(0x6e43bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6e43c3:{NFSU2_TR(0x6e43c3);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B6e43c5:{NFSU2_TR(0x6e43c5);
{goto L6e43d0;}
}
B6e43d0:L6e43d0:{c.instructions+=9;NFSU2_TR(0x6e43d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e43d4:{NFSU2_TR(0x6e43d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e43d8:{NFSU2_TR(0x6e43d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e43dc:{NFSU2_TR(0x6e43dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e43dd:{NFSU2_TR(0x6e43dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e43de:{NFSU2_TR(0x6e43de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e43df:{NFSU2_TR(0x6e43df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e43e0:{NFSU2_TR(0x6e43e0);
__builtin_memmove((R+4),(R+20),4);
}
B6e43e2:{NFSU2_TR(0x6e43e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e43e7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4150u);}goto L6e4150;}
}
B6e43e7:L6e43e7:{c.instructions+=3;NFSU2_TR(0x6e43e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6e43ea:{NFSU2_TR(0x6e43ea);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e43eb:{NFSU2_TR(0x6e43eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e43d0u);}goto L6e43d0;}}
}
B6e43ed:L6e43ed:{c.instructions+=1;NFSU2_TR(0x6e43ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e43f1:L6e43f1:{c.instructions+=1;NFSU2_TR(0x6e43f1);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6e43f7:L6e43f7:{c.instructions+=3;NFSU2_TR(0x6e43f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6e43f9:{NFSU2_TR(0x6e43f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e43fb:{NFSU2_TR(0x6e43fb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e442e;}}
}
B6e43fd:L6e43fd:{c.instructions+=1;NFSU2_TR(0x6e43fd);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e4401:L6e4401:{c.instructions+=4;NFSU2_TR(0x6e4401);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6e4404:{NFSU2_TR(0x6e4404);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4406:{NFSU2_TR(0x6e4406);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4409:{NFSU2_TR(0x6e4409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e442a;}}
}
B6e440b:L6e440b:{c.instructions+=9;NFSU2_TR(0x6e440b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e440f:{NFSU2_TR(0x6e440f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4413:{NFSU2_TR(0x6e4413);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4417:{NFSU2_TR(0x6e4417);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4418:{NFSU2_TR(0x6e4418);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4419:{NFSU2_TR(0x6e4419);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e441a:{NFSU2_TR(0x6e441a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e441b:{NFSU2_TR(0x6e441b);
__builtin_memmove((R+4),(R+20),4);
}
B6e441d:{NFSU2_TR(0x6e441d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4422ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4150u);}goto L6e4150;}
}
B6e4422:L6e4422:{c.instructions+=4;NFSU2_TR(0x6e4422);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e4423:{NFSU2_TR(0x6e4423);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B6e4426:{NFSU2_TR(0x6e4426);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4428:{NFSU2_TR(0x6e4428);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4401u);}goto L6e4401;}}
}
B6e442a:L6e442a:{c.instructions+=1;NFSU2_TR(0x6e442a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e442e:L6e442e:{c.instructions+=4;NFSU2_TR(0x6e442e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e4430:{NFSU2_TR(0x6e4430);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6e4432:{NFSU2_TR(0x6e4432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4433:{NFSU2_TR(0x6e4433);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e4444;}}
}
B6e4435:L6e4435:{c.instructions+=8;NFSU2_TR(0x6e4435);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4439:{NFSU2_TR(0x6e4439);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e443a:{NFSU2_TR(0x6e443a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e443c:{NFSU2_TR(0x6e443c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e443e:{NFSU2_TR(0x6e443e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e443f:{NFSU2_TR(0x6e443f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4440:{NFSU2_TR(0x6e4440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4441:{NFSU2_TR(0x6e4441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4444:L6e4444:{c.instructions+=6;NFSU2_TR(0x6e4444);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4448:{NFSU2_TR(0x6e4448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4449:{NFSU2_TR(0x6e4449);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e444b:{NFSU2_TR(0x6e444b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e444c:{NFSU2_TR(0x6e444c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e444d:{NFSU2_TR(0x6e444d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4450:L6e4450:{c.instructions+=18;NFSU2_TR(0x6e4450);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4454:{NFSU2_TR(0x6e4454);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4458:{NFSU2_TR(0x6e4458);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e445a:{NFSU2_TR(0x6e445a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e445c:{NFSU2_TR(0x6e445c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e445f:{NFSU2_TR(0x6e445f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e4462:{NFSU2_TR(0x6e4462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e4464:{NFSU2_TR(0x6e4464);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4467:{NFSU2_TR(0x6e4467);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e446a:{NFSU2_TR(0x6e446a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e446c:{NFSU2_TR(0x6e446c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e446f:{NFSU2_TR(0x6e446f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e4472:{NFSU2_TR(0x6e4472);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e4474:{NFSU2_TR(0x6e4474);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e447a:{NFSU2_TR(0x6e447a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e447c:{NFSU2_TR(0x6e447c);
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
B6e447f:{NFSU2_TR(0x6e447f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4483:{NFSU2_TR(0x6e4483);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e44c0;}}
}
B6e4485:L6e4485:{c.instructions+=20;NFSU2_TR(0x6e4485);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4487:{NFSU2_TR(0x6e4487);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4489:{NFSU2_TR(0x6e4489);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e448d:{NFSU2_TR(0x6e448d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e448f:{NFSU2_TR(0x6e448f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4491:{NFSU2_TR(0x6e4491);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4494:{NFSU2_TR(0x6e4494);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4497:{NFSU2_TR(0x6e4497);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e449b:{NFSU2_TR(0x6e449b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e449e:{NFSU2_TR(0x6e449e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e44a1:{NFSU2_TR(0x6e44a1);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e44a4:{NFSU2_TR(0x6e44a4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e44a7:{NFSU2_TR(0x6e44a7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e44ab:{NFSU2_TR(0x6e44ab);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e44ae:{NFSU2_TR(0x6e44ae);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e44b1:{NFSU2_TR(0x6e44b1);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e44b4:{NFSU2_TR(0x6e44b4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e44b7:{NFSU2_TR(0x6e44b7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e44bb:{NFSU2_TR(0x6e44bb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e44be:{NFSU2_TR(0x6e44be);
{goto L6e44f9;}
}
B6e44c0:L6e44c0:{c.instructions+=19;NFSU2_TR(0x6e44c0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e44c2:{NFSU2_TR(0x6e44c2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e44c4:{NFSU2_TR(0x6e44c4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e44c8:{NFSU2_TR(0x6e44c8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e44ca:{NFSU2_TR(0x6e44ca);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e44cc:{NFSU2_TR(0x6e44cc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e44cf:{NFSU2_TR(0x6e44cf);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e44d2:{NFSU2_TR(0x6e44d2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e44d6:{NFSU2_TR(0x6e44d6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e44d9:{NFSU2_TR(0x6e44d9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e44dc:{NFSU2_TR(0x6e44dc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e44df:{NFSU2_TR(0x6e44df);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e44e2:{NFSU2_TR(0x6e44e2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e44e6:{NFSU2_TR(0x6e44e6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e44e9:{NFSU2_TR(0x6e44e9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e44ec:{NFSU2_TR(0x6e44ec);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e44ef:{NFSU2_TR(0x6e44ef);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e44f2:{NFSU2_TR(0x6e44f2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e44f6:{NFSU2_TR(0x6e44f6);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e44f9:L6e44f9:{c.instructions+=34;NFSU2_TR(0x6e44f9);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e44fc:{NFSU2_TR(0x6e44fc);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e44ff:{NFSU2_TR(0x6e44ff);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4502:{NFSU2_TR(0x6e4502);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4505:{NFSU2_TR(0x6e4505);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4507:{NFSU2_TR(0x6e4507);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e4509:{NFSU2_TR(0x6e4509);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6e450b:{NFSU2_TR(0x6e450b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6e450d:{NFSU2_TR(0x6e450d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6e450f:{NFSU2_TR(0x6e450f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e4511:{NFSU2_TR(0x6e4511);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6e4513:{NFSU2_TR(0x6e4513);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B6e4515:{NFSU2_TR(0x6e4515);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e4517:{NFSU2_TR(0x6e4517);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B6e4519:{NFSU2_TR(0x6e4519);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B6e451b:{NFSU2_TR(0x6e451b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6e451d:{NFSU2_TR(0x6e451d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6e451f:{NFSU2_TR(0x6e451f);
__asm__ volatile(".byte 0xdd,0xdc":::"memory");
}
B6e4521:{NFSU2_TR(0x6e4521);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e4523:{NFSU2_TR(0x6e4523);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e4525:{NFSU2_TR(0x6e4525);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e4527:{NFSU2_TR(0x6e4527);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e452d:{NFSU2_TR(0x6e452d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e452f:{NFSU2_TR(0x6e452f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e4531:{NFSU2_TR(0x6e4531);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4533:{NFSU2_TR(0x6e4533);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e4535:{NFSU2_TR(0x6e4535);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e4538:{NFSU2_TR(0x6e4538);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e453b:{NFSU2_TR(0x6e453b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e453d:{NFSU2_TR(0x6e453d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e4540:{NFSU2_TR(0x6e4540);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4543:{NFSU2_TR(0x6e4543);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e4546:{NFSU2_TR(0x6e4546);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4549:{NFSU2_TR(0x6e4549);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4550:L6e4550:{c.instructions+=6;NFSU2_TR(0x6e4550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4551:{NFSU2_TR(0x6e4551);
__builtin_memmove((R+24),(R+4),4);
}
B6e4553:{NFSU2_TR(0x6e4553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4556:{NFSU2_TR(0x6e4556);
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
B6e4558:{NFSU2_TR(0x6e4558);
u8 U[4];
w4(U+0,u32(0x7c1760ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e455e:{NFSU2_TR(0x6e455e);
if(r1(R+518)){{goto L6e456c;}}
}
B6e4560:L6e4560:{c.instructions+=4;NFSU2_TR(0x6e4560);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4566:{NFSU2_TR(0x6e4566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e4568:{NFSU2_TR(0x6e4568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4569:{NFSU2_TR(0x6e4569);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e456cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e456c:L6e456c:{c.instructions+=3;NFSU2_TR(0x6e456c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e456f:{NFSU2_TR(0x6e456f);
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
B6e4571:{NFSU2_TR(0x6e4571);
if(r1(R+518)){{goto L6e457f;}}
}
B6e4573:L6e4573:{c.instructions+=4;NFSU2_TR(0x6e4573);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4579:{NFSU2_TR(0x6e4579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e457b:{NFSU2_TR(0x6e457b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e457c:{NFSU2_TR(0x6e457c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e457full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e457f:L6e457f:{c.instructions+=3;NFSU2_TR(0x6e457f);
__builtin_memmove((R+4),(R+24),4);
}
B6e4581:{NFSU2_TR(0x6e4581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4582:{NFSU2_TR(0x6e4582);
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e4590:L6e4590:{c.instructions+=7;NFSU2_TR(0x6e4590);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4594:{NFSU2_TR(0x6e4594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e4596:{NFSU2_TR(0x6e4596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4597:{NFSU2_TR(0x6e4597);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e459b:{NFSU2_TR(0x6e459b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e459c:{NFSU2_TR(0x6e459c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e459d:{NFSU2_TR(0x6e459d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e45a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e45a0:L6e45a0:{c.instructions+=2;NFSU2_TR(0x6e45a0);
w1(R+0,u8(0x1ull));
}
B6e45a2:{NFSU2_TR(0x6e45a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e45b0:L6e45b0:{c.instructions+=6;NFSU2_TR(0x6e45b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e45b1:{NFSU2_TR(0x6e45b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e45b4:{NFSU2_TR(0x6e45b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e45b7:{NFSU2_TR(0x6e45b7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B6e45ba:{NFSU2_TR(0x6e45ba);
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
B6e45bb:{NFSU2_TR(0x6e45bb);
if(r1(R+519)){{goto L6e463b;}}
}
B6e45bd:L6e45bd:{c.instructions+=10;NFSU2_TR(0x6e45bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e45be:{NFSU2_TR(0x6e45be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e45c2:{NFSU2_TR(0x6e45c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e45c3:{NFSU2_TR(0x6e45c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e45c7:{NFSU2_TR(0x6e45c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e45c8:{NFSU2_TR(0x6e45c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e45cc:{NFSU2_TR(0x6e45cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e45cd:{NFSU2_TR(0x6e45cd);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e45d1:{NFSU2_TR(0x6e45d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e45d2:{NFSU2_TR(0x6e45d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e45d6:L6e45d6:{c.instructions+=15;NFSU2_TR(0x6e45d6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B6e45d9:{NFSU2_TR(0x6e45d9);
w4(R+0,u32(0x2aaaaaabull));
}
B6e45de:{NFSU2_TR(0x6e45de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e45e0:{NFSU2_TR(0x6e45e0);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e45e2:{NFSU2_TR(0x6e45e2);
__builtin_memmove((R+4),(R+8),4);
}
B6e45e4:{NFSU2_TR(0x6e45e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6e45e7:{NFSU2_TR(0x6e45e7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e45e9:{NFSU2_TR(0x6e45e9);
__builtin_memmove((R+4),(R+8),4);
}
B6e45eb:{NFSU2_TR(0x6e45eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e45ee:{NFSU2_TR(0x6e45ee);
w4(R+0,u32(0x1ull));
}
B6e45f3:{NFSU2_TR(0x6e45f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e45f5:{NFSU2_TR(0x6e45f5);
__builtin_memmove((R+4),(R+8),4);
}
B6e45f7:{NFSU2_TR(0x6e45f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e45fa:{NFSU2_TR(0x6e45fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e45fd:{NFSU2_TR(0x6e45fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4629;}}
}
B6e45ff:L6e45ff:{c.instructions+=3;NFSU2_TR(0x6e45ff);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e4602:{NFSU2_TR(0x6e4602);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4606:{NFSU2_TR(0x6e4606);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e460c;}}
}
B6e4608:L6e4608:{c.instructions+=2;NFSU2_TR(0x6e4608);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e460a:{NFSU2_TR(0x6e460a);
{goto L6e4617;}
}
B6e460c:L6e460c:{c.instructions+=2;NFSU2_TR(0x6e460c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6e460e:{NFSU2_TR(0x6e460e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4612;}}
}
B6e4610:L6e4610:{c.instructions+=1;NFSU2_TR(0x6e4610);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e4612:L6e4612:{c.instructions+=2;NFSU2_TR(0x6e4612);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e4615:{NFSU2_TR(0x6e4615);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e461a;}}
}
B6e4617:L6e4617:{c.instructions+=1;NFSU2_TR(0x6e4617);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6e461a:L6e461a:{c.instructions+=7;NFSU2_TR(0x6e461a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e461c:{NFSU2_TR(0x6e461c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e461e:{NFSU2_TR(0x6e461e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e461f:{NFSU2_TR(0x6e461f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4620:{NFSU2_TR(0x6e4620);
__builtin_memmove((R+4),(R+24),4);
}
B6e4622:{NFSU2_TR(0x6e4622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6e4624:{NFSU2_TR(0x6e4624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4629ull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6e4629:L6e4629:{c.instructions+=5;NFSU2_TR(0x6e4629);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e462d:{NFSU2_TR(0x6e462d);
w1(R+512,u8((r4(R+28))<(u32(0x2ull))));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B6e4630:{NFSU2_TR(0x6e4630);
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
B6e4631:{NFSU2_TR(0x6e4631);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4635:{NFSU2_TR(0x6e4635);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e45d6u);}goto L6e45d6;}}
}
B6e4637:L6e4637:{c.instructions+=4;NFSU2_TR(0x6e4637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4638:{NFSU2_TR(0x6e4638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4639:{NFSU2_TR(0x6e4639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e463a:{NFSU2_TR(0x6e463a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e463b:L6e463b:{c.instructions+=3;NFSU2_TR(0x6e463b);
w1(R+0,u8(0x1ull));
}
B6e463d:{NFSU2_TR(0x6e463d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e463e:{NFSU2_TR(0x6e463e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4650:L6e4650:{c.instructions+=7;NFSU2_TR(0x6e4650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4651:{NFSU2_TR(0x6e4651);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4654:{NFSU2_TR(0x6e4654);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4657:{NFSU2_TR(0x6e4657);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B6e465a:{NFSU2_TR(0x6e465a);
u8 U[27];
w4(U+19,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B6e465d:{NFSU2_TR(0x6e465d);
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
B6e465e:{NFSU2_TR(0x6e465e);
if(r1(R+519)){{goto L6e46e5;}}
}
B6e4664:L6e4664:{c.instructions+=11;NFSU2_TR(0x6e4664);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4665:{NFSU2_TR(0x6e4665);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e4669:{NFSU2_TR(0x6e4669);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e466a:{NFSU2_TR(0x6e466a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e466e:{NFSU2_TR(0x6e466e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e466f:{NFSU2_TR(0x6e466f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4673:{NFSU2_TR(0x6e4673);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4674:{NFSU2_TR(0x6e4674);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e4678:{NFSU2_TR(0x6e4678);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e4679:{NFSU2_TR(0x6e4679);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e467d:{NFSU2_TR(0x6e467d);
__builtin_memmove((R+4),(R+4),4);
}
B6e4680:L6e4680:{c.instructions+=15;NFSU2_TR(0x6e4680);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B6e4683:{NFSU2_TR(0x6e4683);
w4(R+0,u32(0x2aaaaaabull));
}
B6e4688:{NFSU2_TR(0x6e4688);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e468a:{NFSU2_TR(0x6e468a);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e468c:{NFSU2_TR(0x6e468c);
__builtin_memmove((R+4),(R+8),4);
}
B6e468e:{NFSU2_TR(0x6e468e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6e4691:{NFSU2_TR(0x6e4691);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e4693:{NFSU2_TR(0x6e4693);
__builtin_memmove((R+4),(R+8),4);
}
B6e4695:{NFSU2_TR(0x6e4695);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e4698:{NFSU2_TR(0x6e4698);
w4(R+0,u32(0x1ull));
}
B6e469d:{NFSU2_TR(0x6e469d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e469f:{NFSU2_TR(0x6e469f);
__builtin_memmove((R+4),(R+8),4);
}
B6e46a1:{NFSU2_TR(0x6e46a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e46a4:{NFSU2_TR(0x6e46a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e46a7:{NFSU2_TR(0x6e46a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e46d3;}}
}
B6e46a9:L6e46a9:{c.instructions+=3;NFSU2_TR(0x6e46a9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e46ac:{NFSU2_TR(0x6e46ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e46b0:{NFSU2_TR(0x6e46b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e46b6;}}
}
B6e46b2:L6e46b2:{c.instructions+=2;NFSU2_TR(0x6e46b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e46b4:{NFSU2_TR(0x6e46b4);
{goto L6e46c1;}
}
B6e46b6:L6e46b6:{c.instructions+=2;NFSU2_TR(0x6e46b6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6e46b8:{NFSU2_TR(0x6e46b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e46bc;}}
}
B6e46ba:L6e46ba:{c.instructions+=1;NFSU2_TR(0x6e46ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e46bc:L6e46bc:{c.instructions+=2;NFSU2_TR(0x6e46bc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e46bf:{NFSU2_TR(0x6e46bf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e46c4;}}
}
B6e46c1:L6e46c1:{c.instructions+=1;NFSU2_TR(0x6e46c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6e46c4:L6e46c4:{c.instructions+=7;NFSU2_TR(0x6e46c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e46c6:{NFSU2_TR(0x6e46c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e46c8:{NFSU2_TR(0x6e46c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e46c9:{NFSU2_TR(0x6e46c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e46ca:{NFSU2_TR(0x6e46ca);
__builtin_memmove((R+4),(R+24),4);
}
B6e46cc:{NFSU2_TR(0x6e46cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6e46ce:{NFSU2_TR(0x6e46ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e46d3ull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6e46d3:L6e46d3:{c.instructions+=5;NFSU2_TR(0x6e46d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e46d7:{NFSU2_TR(0x6e46d7);
w1(R+512,u8((r4(R+28))<(u32(0x2ull))));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B6e46da:{NFSU2_TR(0x6e46da);
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
B6e46db:{NFSU2_TR(0x6e46db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e46df:{NFSU2_TR(0x6e46df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4680u);}goto L6e4680;}}
}
B6e46e1:L6e46e1:{c.instructions+=4;NFSU2_TR(0x6e46e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e46e2:{NFSU2_TR(0x6e46e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e46e3:{NFSU2_TR(0x6e46e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e46e4:{NFSU2_TR(0x6e46e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e46e5:L6e46e5:{c.instructions+=3;NFSU2_TR(0x6e46e5);
w1(R+0,u8(0x1ull));
}
B6e46e7:{NFSU2_TR(0x6e46e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e46e8:{NFSU2_TR(0x6e46e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e46f0:L6e46f0:{c.instructions+=6;NFSU2_TR(0x6e46f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e46f1:{NFSU2_TR(0x6e46f1);
__builtin_memmove((R+24),(R+4),4);
}
B6e46f3:{NFSU2_TR(0x6e46f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e46f6:{NFSU2_TR(0x6e46f6);
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
B6e46f8:{NFSU2_TR(0x6e46f8);
u8 U[4];
w4(U+0,u32(0x7c1658ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e46fe:{NFSU2_TR(0x6e46fe);
if(r1(R+518)){{goto L6e470c;}}
}
B6e4700:L6e4700:{c.instructions+=4;NFSU2_TR(0x6e4700);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4706:{NFSU2_TR(0x6e4706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e4708:{NFSU2_TR(0x6e4708);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4709:{NFSU2_TR(0x6e4709);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e470cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e470c:L6e470c:{c.instructions+=3;NFSU2_TR(0x6e470c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e470f:{NFSU2_TR(0x6e470f);
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
B6e4711:{NFSU2_TR(0x6e4711);
if(r1(R+518)){{goto L6e471f;}}
}
B6e4713:L6e4713:{c.instructions+=4;NFSU2_TR(0x6e4713);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4719:{NFSU2_TR(0x6e4719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e471b:{NFSU2_TR(0x6e471b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e471c:{NFSU2_TR(0x6e471c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e471full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e471f:L6e471f:{c.instructions+=3;NFSU2_TR(0x6e471f);
__builtin_memmove((R+4),(R+24),4);
}
B6e4721:{NFSU2_TR(0x6e4721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4722:{NFSU2_TR(0x6e4722);
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e4730:L6e4730:{c.instructions+=7;NFSU2_TR(0x6e4730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4731:{NFSU2_TR(0x6e4731);
__builtin_memmove((R+24),(R+4),4);
}
B6e4733:{NFSU2_TR(0x6e4733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4736:{NFSU2_TR(0x6e4736);
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
B6e4738:{NFSU2_TR(0x6e4738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4739:{NFSU2_TR(0x6e4739);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e473d:{NFSU2_TR(0x6e473d);
if(r1(R+518)){{goto L6e4764;}}
}
B6e473f:L6e473f:{c.instructions+=6;NFSU2_TR(0x6e473f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4742:{NFSU2_TR(0x6e4742);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4745:{NFSU2_TR(0x6e4745);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4748:{NFSU2_TR(0x6e4748);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B6e474b:{NFSU2_TR(0x6e474b);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+6)));
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e474e:{NFSU2_TR(0x6e474e);
if(r1(R+512)){{goto L6e477f;}}
}
B6e4750:L6e4750:{c.instructions+=4;NFSU2_TR(0x6e4750);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4756:{NFSU2_TR(0x6e4756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e4758:{NFSU2_TR(0x6e4758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4759:{NFSU2_TR(0x6e4759);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e475cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e475c:L6e475c:{c.instructions+=3;NFSU2_TR(0x6e475c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e475f:{NFSU2_TR(0x6e475f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6e4762:{NFSU2_TR(0x6e4762);
{goto L6e476a;}
}
B6e4764:L6e4764:{c.instructions+=2;NFSU2_TR(0x6e4764);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4767:{NFSU2_TR(0x6e4767);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6e476a:L6e476a:{c.instructions+=6;NFSU2_TR(0x6e476a);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4770:{NFSU2_TR(0x6e4770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e4772:{NFSU2_TR(0x6e4772);
w4(R+0,u32(r2(R+0)));
}
B6e4775:{NFSU2_TR(0x6e4775);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B6e4778:{NFSU2_TR(0x6e4778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4779:{NFSU2_TR(0x6e4779);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e477cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e477c:L6e477c:{c.instructions+=1;NFSU2_TR(0x6e477c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e477f:L6e477f:{c.instructions+=5;NFSU2_TR(0x6e477f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4782:{NFSU2_TR(0x6e4782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4783:{NFSU2_TR(0x6e4783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e478a:{NFSU2_TR(0x6e478a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e478b:{NFSU2_TR(0x6e478b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4790:L6e4790:{c.instructions+=13;NFSU2_TR(0x6e4790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4791:{NFSU2_TR(0x6e4791);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4794:{NFSU2_TR(0x6e4794);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e4798:{NFSU2_TR(0x6e4798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e479b:{NFSU2_TR(0x6e479b);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e47a0:{NFSU2_TR(0x6e47a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e47a4:{NFSU2_TR(0x6e47a4);
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
B6e47a5:{NFSU2_TR(0x6e47a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e47a9:{NFSU2_TR(0x6e47a9);
w1(R+0,u8(0x1ull));
}
B6e47ab:{NFSU2_TR(0x6e47ab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e47af:{NFSU2_TR(0x6e47af);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e47b1:{NFSU2_TR(0x6e47b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e47b2:{NFSU2_TR(0x6e47b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e47c0:L6e47c0:{c.instructions+=6;NFSU2_TR(0x6e47c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e47c1:{NFSU2_TR(0x6e47c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e47c4:{NFSU2_TR(0x6e47c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e47c7:{NFSU2_TR(0x6e47c7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B6e47ca:{NFSU2_TR(0x6e47ca);
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
B6e47cb:{NFSU2_TR(0x6e47cb);
if(r1(R+519)){{goto L6e484b;}}
}
B6e47cd:L6e47cd:{c.instructions+=10;NFSU2_TR(0x6e47cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e47ce:{NFSU2_TR(0x6e47ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e47d2:{NFSU2_TR(0x6e47d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e47d3:{NFSU2_TR(0x6e47d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e47d7:{NFSU2_TR(0x6e47d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e47d8:{NFSU2_TR(0x6e47d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e47dc:{NFSU2_TR(0x6e47dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e47dd:{NFSU2_TR(0x6e47dd);
u8 U[12];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e47e1:{NFSU2_TR(0x6e47e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e47e2:{NFSU2_TR(0x6e47e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e47e6:L6e47e6:{c.instructions+=15;NFSU2_TR(0x6e47e6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B6e47e9:{NFSU2_TR(0x6e47e9);
w4(R+0,u32(0x2aaaaaabull));
}
B6e47ee:{NFSU2_TR(0x6e47ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e47f0:{NFSU2_TR(0x6e47f0);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e47f2:{NFSU2_TR(0x6e47f2);
__builtin_memmove((R+4),(R+8),4);
}
B6e47f4:{NFSU2_TR(0x6e47f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6e47f7:{NFSU2_TR(0x6e47f7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e47f9:{NFSU2_TR(0x6e47f9);
__builtin_memmove((R+4),(R+8),4);
}
B6e47fb:{NFSU2_TR(0x6e47fb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e47fe:{NFSU2_TR(0x6e47fe);
w4(R+0,u32(0x1ull));
}
B6e4803:{NFSU2_TR(0x6e4803);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e4805:{NFSU2_TR(0x6e4805);
__builtin_memmove((R+4),(R+8),4);
}
B6e4807:{NFSU2_TR(0x6e4807);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e480a:{NFSU2_TR(0x6e480a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e480d:{NFSU2_TR(0x6e480d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4839;}}
}
B6e480f:L6e480f:{c.instructions+=3;NFSU2_TR(0x6e480f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e4812:{NFSU2_TR(0x6e4812);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4816:{NFSU2_TR(0x6e4816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e481c;}}
}
B6e4818:L6e4818:{c.instructions+=2;NFSU2_TR(0x6e4818);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e481a:{NFSU2_TR(0x6e481a);
{goto L6e4827;}
}
B6e481c:L6e481c:{c.instructions+=2;NFSU2_TR(0x6e481c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6e481e:{NFSU2_TR(0x6e481e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4822;}}
}
B6e4820:L6e4820:{c.instructions+=1;NFSU2_TR(0x6e4820);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e4822:L6e4822:{c.instructions+=2;NFSU2_TR(0x6e4822);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e4825:{NFSU2_TR(0x6e4825);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e482a;}}
}
B6e4827:L6e4827:{c.instructions+=1;NFSU2_TR(0x6e4827);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6e482a:L6e482a:{c.instructions+=7;NFSU2_TR(0x6e482a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e482c:{NFSU2_TR(0x6e482c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e482e:{NFSU2_TR(0x6e482e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e482f:{NFSU2_TR(0x6e482f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4830:{NFSU2_TR(0x6e4830);
__builtin_memmove((R+4),(R+24),4);
}
B6e4832:{NFSU2_TR(0x6e4832);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6e4834:{NFSU2_TR(0x6e4834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4839ull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6e4839:L6e4839:{c.instructions+=5;NFSU2_TR(0x6e4839);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e483d:{NFSU2_TR(0x6e483d);
w1(R+512,u8((r4(R+28))<(u32(0x2ull))));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B6e4840:{NFSU2_TR(0x6e4840);
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
B6e4841:{NFSU2_TR(0x6e4841);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4845:{NFSU2_TR(0x6e4845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e47e6u);}goto L6e47e6;}}
}
B6e4847:L6e4847:{c.instructions+=4;NFSU2_TR(0x6e4847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4848:{NFSU2_TR(0x6e4848);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4849:{NFSU2_TR(0x6e4849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e484a:{NFSU2_TR(0x6e484a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e484b:L6e484b:{c.instructions+=3;NFSU2_TR(0x6e484b);
w1(R+0,u8(0x1ull));
}
B6e484d:{NFSU2_TR(0x6e484d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e484e:{NFSU2_TR(0x6e484e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4860:L6e4860:{c.instructions+=7;NFSU2_TR(0x6e4860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4861:{NFSU2_TR(0x6e4861);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4864:{NFSU2_TR(0x6e4864);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4867:{NFSU2_TR(0x6e4867);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B6e486a:{NFSU2_TR(0x6e486a);
u8 U[27];
w4(U+19,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,shr<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B6e486d:{NFSU2_TR(0x6e486d);
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
B6e486e:{NFSU2_TR(0x6e486e);
if(r1(R+519)){{goto L6e48f5;}}
}
B6e4874:L6e4874:{c.instructions+=11;NFSU2_TR(0x6e4874);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4875:{NFSU2_TR(0x6e4875);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e4879:{NFSU2_TR(0x6e4879);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e487a:{NFSU2_TR(0x6e487a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e487e:{NFSU2_TR(0x6e487e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e487f:{NFSU2_TR(0x6e487f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4883:{NFSU2_TR(0x6e4883);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4884:{NFSU2_TR(0x6e4884);
u8 U[12];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e4888:{NFSU2_TR(0x6e4888);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e4889:{NFSU2_TR(0x6e4889);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e488d:{NFSU2_TR(0x6e488d);
__builtin_memmove((R+4),(R+4),4);
}
B6e4890:L6e4890:{c.instructions+=15;NFSU2_TR(0x6e4890);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B6e4893:{NFSU2_TR(0x6e4893);
w4(R+0,u32(0x2aaaaaabull));
}
B6e4898:{NFSU2_TR(0x6e4898);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e489a:{NFSU2_TR(0x6e489a);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e489c:{NFSU2_TR(0x6e489c);
__builtin_memmove((R+4),(R+8),4);
}
B6e489e:{NFSU2_TR(0x6e489e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6e48a1:{NFSU2_TR(0x6e48a1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e48a3:{NFSU2_TR(0x6e48a3);
__builtin_memmove((R+4),(R+8),4);
}
B6e48a5:{NFSU2_TR(0x6e48a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e48a8:{NFSU2_TR(0x6e48a8);
w4(R+0,u32(0x1ull));
}
B6e48ad:{NFSU2_TR(0x6e48ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e48af:{NFSU2_TR(0x6e48af);
__builtin_memmove((R+4),(R+8),4);
}
B6e48b1:{NFSU2_TR(0x6e48b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e48b4:{NFSU2_TR(0x6e48b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e48b7:{NFSU2_TR(0x6e48b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e48e3;}}
}
B6e48b9:L6e48b9:{c.instructions+=3;NFSU2_TR(0x6e48b9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e48bc:{NFSU2_TR(0x6e48bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e48c0:{NFSU2_TR(0x6e48c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e48c6;}}
}
B6e48c2:L6e48c2:{c.instructions+=2;NFSU2_TR(0x6e48c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e48c4:{NFSU2_TR(0x6e48c4);
{goto L6e48d1;}
}
B6e48c6:L6e48c6:{c.instructions+=2;NFSU2_TR(0x6e48c6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6e48c8:{NFSU2_TR(0x6e48c8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e48cc;}}
}
B6e48ca:L6e48ca:{c.instructions+=1;NFSU2_TR(0x6e48ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e48cc:L6e48cc:{c.instructions+=2;NFSU2_TR(0x6e48cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e48cf:{NFSU2_TR(0x6e48cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e48d4;}}
}
B6e48d1:L6e48d1:{c.instructions+=1;NFSU2_TR(0x6e48d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6e48d4:L6e48d4:{c.instructions+=7;NFSU2_TR(0x6e48d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e48d6:{NFSU2_TR(0x6e48d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e48d8:{NFSU2_TR(0x6e48d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e48d9:{NFSU2_TR(0x6e48d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e48da:{NFSU2_TR(0x6e48da);
__builtin_memmove((R+4),(R+24),4);
}
B6e48dc:{NFSU2_TR(0x6e48dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6e48de:{NFSU2_TR(0x6e48de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e48e3ull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6e48e3:L6e48e3:{c.instructions+=5;NFSU2_TR(0x6e48e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e48e7:{NFSU2_TR(0x6e48e7);
w1(R+512,u8((r4(R+28))<(u32(0x2ull))));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B6e48ea:{NFSU2_TR(0x6e48ea);
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
B6e48eb:{NFSU2_TR(0x6e48eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e48ef:{NFSU2_TR(0x6e48ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4890u);}goto L6e4890;}}
}
B6e48f1:L6e48f1:{c.instructions+=4;NFSU2_TR(0x6e48f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e48f2:{NFSU2_TR(0x6e48f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e48f3:{NFSU2_TR(0x6e48f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e48f4:{NFSU2_TR(0x6e48f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e48f5:L6e48f5:{c.instructions+=3;NFSU2_TR(0x6e48f5);
w1(R+0,u8(0x1ull));
}
B6e48f7:{NFSU2_TR(0x6e48f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e48f8:{NFSU2_TR(0x6e48f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4900:L6e4900:{c.instructions+=7;NFSU2_TR(0x6e4900);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4901:{NFSU2_TR(0x6e4901);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4905:{NFSU2_TR(0x6e4905);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e490b:{NFSU2_TR(0x6e490b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e490f:{NFSU2_TR(0x6e490f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4911:{NFSU2_TR(0x6e4911);
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
B6e4914:{NFSU2_TR(0x6e4914);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e492e;}}
}
B6e4916:L6e4916:{c.instructions+=7;NFSU2_TR(0x6e4916);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e491c:{NFSU2_TR(0x6e491c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4920:{NFSU2_TR(0x6e4920);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4924:{NFSU2_TR(0x6e4924);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4928:{NFSU2_TR(0x6e4928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e492c:{NFSU2_TR(0x6e492c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e492d:{NFSU2_TR(0x6e492d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e492e:L6e492e:{c.instructions+=7;NFSU2_TR(0x6e492e);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e4934:{NFSU2_TR(0x6e4934);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4938:{NFSU2_TR(0x6e4938);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e493c:{NFSU2_TR(0x6e493c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4940:{NFSU2_TR(0x6e4940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e4944:{NFSU2_TR(0x6e4944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e4945:{NFSU2_TR(0x6e4945);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4950:L6e4950:{c.instructions+=12;NFSU2_TR(0x6e4950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e4953:{NFSU2_TR(0x6e4953);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4957:{NFSU2_TR(0x6e4957);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4958:{NFSU2_TR(0x6e4958);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e495e:{NFSU2_TR(0x6e495e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e495f:{NFSU2_TR(0x6e495f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4963:{NFSU2_TR(0x6e4963);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4964:{NFSU2_TR(0x6e4964);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4965:{NFSU2_TR(0x6e4965);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4969:{NFSU2_TR(0x6e4969);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e496b:{NFSU2_TR(0x6e496b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e496e:{NFSU2_TR(0x6e496e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4988;}}
}
B6e4970:L6e4970:{c.instructions+=6;NFSU2_TR(0x6e4970);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4976:{NFSU2_TR(0x6e4976);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e497a:{NFSU2_TR(0x6e497a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e497e:{NFSU2_TR(0x6e497e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4982:{NFSU2_TR(0x6e4982);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4986:{NFSU2_TR(0x6e4986);
{goto L6e499e;}
}
B6e4988:L6e4988:{c.instructions+=5;NFSU2_TR(0x6e4988);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e498e:{NFSU2_TR(0x6e498e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4992:{NFSU2_TR(0x6e4992);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4996:{NFSU2_TR(0x6e4996);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e499a:{NFSU2_TR(0x6e499a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e499e:L6e499e:{c.instructions+=8;NFSU2_TR(0x6e499e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e49a2:{NFSU2_TR(0x6e49a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e49a5:{NFSU2_TR(0x6e49a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e49a8:{NFSU2_TR(0x6e49a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e49ac:{NFSU2_TR(0x6e49ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e49ae:{NFSU2_TR(0x6e49ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e49b2:{NFSU2_TR(0x6e49b2);
__builtin_memmove((R+24),(R+28),4);
}
B6e49b4:{NFSU2_TR(0x6e49b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e49bb;}}
}
B6e49b6:L6e49b6:{c.instructions+=2;NFSU2_TR(0x6e49b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e49b9:{NFSU2_TR(0x6e49b9);
{goto L6e49c1;}
}
B6e49bb:L6e49bb:{c.instructions+=2;NFSU2_TR(0x6e49bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e49bd:{NFSU2_TR(0x6e49bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e49c1;}}
}
B6e49bf:L6e49bf:{c.instructions+=1;NFSU2_TR(0x6e49bf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e49c1:L6e49c1:{c.instructions+=10;NFSU2_TR(0x6e49c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e49c4:{NFSU2_TR(0x6e49c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e49c5:{NFSU2_TR(0x6e49c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e49c6:{NFSU2_TR(0x6e49c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e49c9:{NFSU2_TR(0x6e49c9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e49cc:{NFSU2_TR(0x6e49cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e49cd:{NFSU2_TR(0x6e49cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e49ce:{NFSU2_TR(0x6e49ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e49cf:{NFSU2_TR(0x6e49cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e49d1:{NFSU2_TR(0x6e49d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e49d6ull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e49d6:L6e49d6:{c.instructions+=14;NFSU2_TR(0x6e49d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e49da:{NFSU2_TR(0x6e49da);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e49de:{NFSU2_TR(0x6e49de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e49e1:{NFSU2_TR(0x6e49e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e49e5:{NFSU2_TR(0x6e49e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e49e8:{NFSU2_TR(0x6e49e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e49eb:{NFSU2_TR(0x6e49eb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e49ef:{NFSU2_TR(0x6e49ef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e49f3:{NFSU2_TR(0x6e49f3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+20),(U+0),2);
}
B6e49f6:{NFSU2_TR(0x6e49f6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e49fa:{NFSU2_TR(0x6e49fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e49fd:{NFSU2_TR(0x6e49fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e49ff:{NFSU2_TR(0x6e49ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e4a02:{NFSU2_TR(0x6e4a02);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e4a3e;}}
}
B6e4a04:L6e4a04:{c.instructions+=4;NFSU2_TR(0x6e4a04);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e4a08:{NFSU2_TR(0x6e4a08);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e4a0b:{NFSU2_TR(0x6e4a0b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4a0d:{NFSU2_TR(0x6e4a0d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4a3e;}}
}
B6e4a0f:L6e4a0f:{c.instructions+=16;NFSU2_TR(0x6e4a0f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4a13:{NFSU2_TR(0x6e4a13);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4a17:{NFSU2_TR(0x6e4a17);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4a1b:{NFSU2_TR(0x6e4a1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a1c:{NFSU2_TR(0x6e4a1c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4a1f:{NFSU2_TR(0x6e4a1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a20:{NFSU2_TR(0x6e4a20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a22:{NFSU2_TR(0x6e4a22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a23:{NFSU2_TR(0x6e4a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4a26:{NFSU2_TR(0x6e4a26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a27:{NFSU2_TR(0x6e4a27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a28:{NFSU2_TR(0x6e4a28);
w4(R+0,u32(r2(R+20)));
}
B6e4a2b:{NFSU2_TR(0x6e4a2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a2c:{NFSU2_TR(0x6e4a2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a2d:{NFSU2_TR(0x6e4a2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a2f:{NFSU2_TR(0x6e4a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4a34ull));
TAIL_STATIC(0x6efe40u,6ef);
}
B6e4a34:L6e4a34:{c.instructions+=6;NFSU2_TR(0x6e4a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4a35:{NFSU2_TR(0x6e4a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4a36:{NFSU2_TR(0x6e4a36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4a37:{NFSU2_TR(0x6e4a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4a38:{NFSU2_TR(0x6e4a38);
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
B6e4a3b:{NFSU2_TR(0x6e4a3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4a3e:L6e4a3e:{c.instructions+=4;NFSU2_TR(0x6e4a3e);
w4(R+4,u32(r2(R+20)));
}
B6e4a41:{NFSU2_TR(0x6e4a41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e4a43:{NFSU2_TR(0x6e4a43);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4a45:{NFSU2_TR(0x6e4a45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e4a66;}}
}
B6e4a47:L6e4a47:{c.instructions+=1;NFSU2_TR(0x6e4a47);
{goto L6e4a50;}
}
B6e4a49:L6e4a49:{c.instructions+=2;NFSU2_TR(0x6e4a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4a4d:{NFSU2_TR(0x6e4a4d);
__builtin_memmove((R+4),(R+4),4);
}
B6e4a50:L6e4a50:{c.instructions+=8;NFSU2_TR(0x6e4a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4a53:{NFSU2_TR(0x6e4a53);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6e4a57:{NFSU2_TR(0x6e4a57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6e4a5a:{NFSU2_TR(0x6e4a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4a5e:{NFSU2_TR(0x6e4a5e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e4a5f:{NFSU2_TR(0x6e4a5f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4a61:{NFSU2_TR(0x6e4a61);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e4a64:{NFSU2_TR(0x6e4a64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4a49u);}goto L6e4a49;}}
}
B6e4a66:L6e4a66:{c.instructions+=6;NFSU2_TR(0x6e4a66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4a67:{NFSU2_TR(0x6e4a67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4a68:{NFSU2_TR(0x6e4a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4a69:{NFSU2_TR(0x6e4a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4a6a:{NFSU2_TR(0x6e4a6a);
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
B6e4a6d:{NFSU2_TR(0x6e4a6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4a70:L6e4a70:{c.instructions+=5;NFSU2_TR(0x6e4a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6e4a73:{NFSU2_TR(0x6e4a73);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4a77:{NFSU2_TR(0x6e4a77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a7b:{NFSU2_TR(0x6e4a7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e4a7e:{NFSU2_TR(0x6e4a7e);
if(r1(R+518)){{goto L6e4a96;}}
}
B6e4a80:L6e4a80:{c.instructions+=5;NFSU2_TR(0x6e4a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e4a87:{NFSU2_TR(0x6e4a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e4a8b:{NFSU2_TR(0x6e4a8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4a8f:{NFSU2_TR(0x6e4a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4a92:{NFSU2_TR(0x6e4a92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e4a96:L6e4a96:{c.instructions+=14;NFSU2_TR(0x6e4a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4a99:{NFSU2_TR(0x6e4a99);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e4a9d:{NFSU2_TR(0x6e4a9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4a9e:{NFSU2_TR(0x6e4a9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4aa2:{NFSU2_TR(0x6e4aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4aa5:{NFSU2_TR(0x6e4aa5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4aa6:{NFSU2_TR(0x6e4aa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4aa9:{NFSU2_TR(0x6e4aa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4aac:{NFSU2_TR(0x6e4aac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4aae:{NFSU2_TR(0x6e4aae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4aaf:{NFSU2_TR(0x6e4aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4ab3:{NFSU2_TR(0x6e4ab3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+8),(U+0),2);
}
B6e4ab6:{NFSU2_TR(0x6e4ab6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ab7:{NFSU2_TR(0x6e4ab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4b23;}}
}
B6e4ab9:L6e4ab9:{c.instructions+=2;NFSU2_TR(0x6e4ab9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e4abc:{NFSU2_TR(0x6e4abc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e4b23;}}
}
B6e4abe:L6e4abe:{c.instructions+=6;NFSU2_TR(0x6e4abe);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4ac4:{NFSU2_TR(0x6e4ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e4ac6:{NFSU2_TR(0x6e4ac6);
w4(R+28,u32(r2(R+8)));
}
B6e4ac9:{NFSU2_TR(0x6e4ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e4acc:{NFSU2_TR(0x6e4acc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4acd:{NFSU2_TR(0x6e4acd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4ad0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e4ad0:L6e4ad0:{c.instructions+=5;NFSU2_TR(0x6e4ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4ad4:{NFSU2_TR(0x6e4ad4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e4ad6:{NFSU2_TR(0x6e4ad6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4ad8:{NFSU2_TR(0x6e4ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4adb:{NFSU2_TR(0x6e4adb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e4b23;}}
}
B6e4add:L6e4add:{c.instructions+=1;NFSU2_TR(0x6e4add);
__builtin_memmove((R+4),(R+4),4);
}
B6e4ae0:L6e4ae0:{c.instructions+=13;NFSU2_TR(0x6e4ae0);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e4ae4:{NFSU2_TR(0x6e4ae4);
w4(R+0,u32(0xaaaaaaabull));
}
B6e4ae9:{NFSU2_TR(0x6e4ae9);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e4aeb:{NFSU2_TR(0x6e4aeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6e4aee:{NFSU2_TR(0x6e4aee);
w4(R+0,u32(r1(R+8)));
}
B6e4af1:{NFSU2_TR(0x6e4af1);
__builtin_memmove((R+4),(R+0),4);
}
B6e4af3:{NFSU2_TR(0x6e4af3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e4af6:{NFSU2_TR(0x6e4af6);
w4(R+8,u32(0x1ull));
}
B6e4afb:{NFSU2_TR(0x6e4afb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e4afd:{NFSU2_TR(0x6e4afd);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4b01:{NFSU2_TR(0x6e4b01);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e4b04:{NFSU2_TR(0x6e4b04);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e4b07:{NFSU2_TR(0x6e4b07);
if(r1(R+518)){{goto L6e4b1e;}}
}
B6e4b09:L6e4b09:{c.instructions+=6;NFSU2_TR(0x6e4b09);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4b0d:{NFSU2_TR(0x6e4b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4b10:{NFSU2_TR(0x6e4b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4b13:{NFSU2_TR(0x6e4b13);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6e4b17:{NFSU2_TR(0x6e4b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4b1b:{NFSU2_TR(0x6e4b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6e4b1e:L6e4b1e:{c.instructions+=3;NFSU2_TR(0x6e4b1e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e4b1f:{NFSU2_TR(0x6e4b1f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4b21:{NFSU2_TR(0x6e4b21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4ae0u);}goto L6e4ae0;}}
}
B6e4b23:L6e4b23:{c.instructions+=6;NFSU2_TR(0x6e4b23);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4b27:{NFSU2_TR(0x6e4b27);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4b2d:{NFSU2_TR(0x6e4b2d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4b31:{NFSU2_TR(0x6e4b31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4b33:{NFSU2_TR(0x6e4b33);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4b36:{NFSU2_TR(0x6e4b36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4b50;}}
}
B6e4b38:L6e4b38:{c.instructions+=6;NFSU2_TR(0x6e4b38);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4b3e:{NFSU2_TR(0x6e4b3e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4b42:{NFSU2_TR(0x6e4b42);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4b46:{NFSU2_TR(0x6e4b46);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4b4a:{NFSU2_TR(0x6e4b4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4b4e:{NFSU2_TR(0x6e4b4e);
{goto L6e4b66;}
}
B6e4b50:L6e4b50:{c.instructions+=5;NFSU2_TR(0x6e4b50);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e4b56:{NFSU2_TR(0x6e4b56);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4b5a:{NFSU2_TR(0x6e4b5a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4b5e:{NFSU2_TR(0x6e4b5e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4b62:{NFSU2_TR(0x6e4b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4b66:L6e4b66:{c.instructions+=10;NFSU2_TR(0x6e4b66);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4b6a:{NFSU2_TR(0x6e4b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4b6d:{NFSU2_TR(0x6e4b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4b70:{NFSU2_TR(0x6e4b70);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e4b74:{NFSU2_TR(0x6e4b74);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4b76:{NFSU2_TR(0x6e4b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4b7a:{NFSU2_TR(0x6e4b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4b7d:{NFSU2_TR(0x6e4b7d);
__builtin_memmove((R+28),(R+24),4);
}
B6e4b7f:{NFSU2_TR(0x6e4b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4b83:{NFSU2_TR(0x6e4b83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e4b8a;}}
}
B6e4b85:L6e4b85:{c.instructions+=2;NFSU2_TR(0x6e4b85);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4b88:{NFSU2_TR(0x6e4b88);
{goto L6e4b90;}
}
B6e4b8a:L6e4b8a:{c.instructions+=2;NFSU2_TR(0x6e4b8a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e4b8c:{NFSU2_TR(0x6e4b8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4b90;}}
}
B6e4b8e:L6e4b8e:{c.instructions+=1;NFSU2_TR(0x6e4b8e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e4b90:L6e4b90:{c.instructions+=13;NFSU2_TR(0x6e4b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4b93:{NFSU2_TR(0x6e4b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4b96:{NFSU2_TR(0x6e4b96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4b97:{NFSU2_TR(0x6e4b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4b9a:{NFSU2_TR(0x6e4b9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4b9b:{NFSU2_TR(0x6e4b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4b9f:{NFSU2_TR(0x6e4b9f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ba0:{NFSU2_TR(0x6e4ba0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ba1:{NFSU2_TR(0x6e4ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4ba4:{NFSU2_TR(0x6e4ba4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ba5:{NFSU2_TR(0x6e4ba5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ba6:{NFSU2_TR(0x6e4ba6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ba8:{NFSU2_TR(0x6e4ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4badull));
TAIL_STATIC(0x6f03c0u,6f0);
}
B6e4bad:L6e4bad:{c.instructions+=9;NFSU2_TR(0x6e4bad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e4bb1:{NFSU2_TR(0x6e4bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4bb5:{NFSU2_TR(0x6e4bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4bb8:{NFSU2_TR(0x6e4bb8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4bbc:{NFSU2_TR(0x6e4bbc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4bc0:{NFSU2_TR(0x6e4bc0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4bc4:{NFSU2_TR(0x6e4bc4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4bc6:{NFSU2_TR(0x6e4bc6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e4bc9:{NFSU2_TR(0x6e4bc9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e4c0c;}}
}
B6e4bcb:L6e4bcb:{c.instructions+=2;NFSU2_TR(0x6e4bcb);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6e4bcf:{NFSU2_TR(0x6e4bcf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4c0c;}}
}
B6e4bd1:L6e4bd1:{c.instructions+=19;NFSU2_TR(0x6e4bd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4bd5:{NFSU2_TR(0x6e4bd5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4bd9:{NFSU2_TR(0x6e4bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4bdc:{NFSU2_TR(0x6e4bdc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4be0:{NFSU2_TR(0x6e4be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4be3:{NFSU2_TR(0x6e4be3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4be4:{NFSU2_TR(0x6e4be4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4be5:{NFSU2_TR(0x6e4be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4be8:{NFSU2_TR(0x6e4be8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4be9:{NFSU2_TR(0x6e4be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4bed:{NFSU2_TR(0x6e4bed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4bf0:{NFSU2_TR(0x6e4bf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4bf1:{NFSU2_TR(0x6e4bf1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4bf3:{NFSU2_TR(0x6e4bf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4bf4:{NFSU2_TR(0x6e4bf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4bf8:{NFSU2_TR(0x6e4bf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4bf9:{NFSU2_TR(0x6e4bf9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4bfa:{NFSU2_TR(0x6e4bfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4bfb:{NFSU2_TR(0x6e4bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4c00ull));
TAIL_STATIC(0x6f0770u,6f0);
}
B6e4c00:L6e4c00:{c.instructions+=7;NFSU2_TR(0x6e4c00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4c01:{NFSU2_TR(0x6e4c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4c02:{NFSU2_TR(0x6e4c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4c03:{NFSU2_TR(0x6e4c03);
w1(R+0,u8(0x1ull));
}
B6e4c05:{NFSU2_TR(0x6e4c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4c06:{NFSU2_TR(0x6e4c06);
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
B6e4c09:{NFSU2_TR(0x6e4c09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4c0c:L6e4c0c:{c.instructions+=5;NFSU2_TR(0x6e4c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4c10:{NFSU2_TR(0x6e4c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4c13:{NFSU2_TR(0x6e4c13);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e4c15:{NFSU2_TR(0x6e4c15);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4c17:{NFSU2_TR(0x6e4c17);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e4c44;}}
}
B6e4c19:L6e4c19:{c.instructions+=1;NFSU2_TR(0x6e4c19);
__builtin_memmove((R+16),(R+16),4);
}
B6e4c20:L6e4c20:{c.instructions+=12;NFSU2_TR(0x6e4c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4c23:{NFSU2_TR(0x6e4c23);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e4c27:{NFSU2_TR(0x6e4c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4c2a:{NFSU2_TR(0x6e4c2a);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6e4c2e:{NFSU2_TR(0x6e4c2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6e4c31:{NFSU2_TR(0x6e4c31);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4c35:{NFSU2_TR(0x6e4c35);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e4c38:{NFSU2_TR(0x6e4c38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4c3c:{NFSU2_TR(0x6e4c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4c3f:{NFSU2_TR(0x6e4c3f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e4c40:{NFSU2_TR(0x6e4c40);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4c42:{NFSU2_TR(0x6e4c42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4c20u);}goto L6e4c20;}}
}
B6e4c44:L6e4c44:{c.instructions+=7;NFSU2_TR(0x6e4c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4c45:{NFSU2_TR(0x6e4c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4c46:{NFSU2_TR(0x6e4c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4c47:{NFSU2_TR(0x6e4c47);
w1(R+0,u8(0x1ull));
}
B6e4c49:{NFSU2_TR(0x6e4c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4c4a:{NFSU2_TR(0x6e4c4a);
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
B6e4c4d:{NFSU2_TR(0x6e4c4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4c50:L6e4c50:{c.instructions+=12;NFSU2_TR(0x6e4c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e4c53:{NFSU2_TR(0x6e4c53);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4c57:{NFSU2_TR(0x6e4c57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4c58:{NFSU2_TR(0x6e4c58);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4c5e:{NFSU2_TR(0x6e4c5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4c5f:{NFSU2_TR(0x6e4c5f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4c63:{NFSU2_TR(0x6e4c63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4c64:{NFSU2_TR(0x6e4c64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4c65:{NFSU2_TR(0x6e4c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4c69:{NFSU2_TR(0x6e4c69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4c6b:{NFSU2_TR(0x6e4c6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4c6e:{NFSU2_TR(0x6e4c6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4c88;}}
}
B6e4c70:L6e4c70:{c.instructions+=6;NFSU2_TR(0x6e4c70);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4c76:{NFSU2_TR(0x6e4c76);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4c7a:{NFSU2_TR(0x6e4c7a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4c7e:{NFSU2_TR(0x6e4c7e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4c82:{NFSU2_TR(0x6e4c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4c86:{NFSU2_TR(0x6e4c86);
{goto L6e4c9e;}
}
B6e4c88:L6e4c88:{c.instructions+=5;NFSU2_TR(0x6e4c88);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e4c8e:{NFSU2_TR(0x6e4c8e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4c92:{NFSU2_TR(0x6e4c92);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4c96:{NFSU2_TR(0x6e4c96);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4c9a:{NFSU2_TR(0x6e4c9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4c9e:L6e4c9e:{c.instructions+=8;NFSU2_TR(0x6e4c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4ca2:{NFSU2_TR(0x6e4ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4ca5:{NFSU2_TR(0x6e4ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4ca8:{NFSU2_TR(0x6e4ca8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e4cac:{NFSU2_TR(0x6e4cac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4cae:{NFSU2_TR(0x6e4cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4cb2:{NFSU2_TR(0x6e4cb2);
__builtin_memmove((R+24),(R+28),4);
}
B6e4cb4:{NFSU2_TR(0x6e4cb4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e4cbb;}}
}
B6e4cb6:L6e4cb6:{c.instructions+=2;NFSU2_TR(0x6e4cb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4cb9:{NFSU2_TR(0x6e4cb9);
{goto L6e4cc1;}
}
B6e4cbb:L6e4cbb:{c.instructions+=2;NFSU2_TR(0x6e4cbb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e4cbd:{NFSU2_TR(0x6e4cbd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4cc1;}}
}
B6e4cbf:L6e4cbf:{c.instructions+=1;NFSU2_TR(0x6e4cbf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e4cc1:L6e4cc1:{c.instructions+=10;NFSU2_TR(0x6e4cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4cc4:{NFSU2_TR(0x6e4cc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4cc5:{NFSU2_TR(0x6e4cc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4cc6:{NFSU2_TR(0x6e4cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4cc9:{NFSU2_TR(0x6e4cc9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e4ccc:{NFSU2_TR(0x6e4ccc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ccd:{NFSU2_TR(0x6e4ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4cce:{NFSU2_TR(0x6e4cce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ccf:{NFSU2_TR(0x6e4ccf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4cd1:{NFSU2_TR(0x6e4cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4cd6ull));
TAIL_STATIC(0x6efa20u,6ef);
}
B6e4cd6:L6e4cd6:{c.instructions+=14;NFSU2_TR(0x6e4cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4cda:{NFSU2_TR(0x6e4cda);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e4cde:{NFSU2_TR(0x6e4cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4ce1:{NFSU2_TR(0x6e4ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4ce5:{NFSU2_TR(0x6e4ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4ce8:{NFSU2_TR(0x6e4ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4ceb:{NFSU2_TR(0x6e4ceb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4cef:{NFSU2_TR(0x6e4cef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4cf3:{NFSU2_TR(0x6e4cf3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+12),(U+0),2);
}
B6e4cf6:{NFSU2_TR(0x6e4cf6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4cfa:{NFSU2_TR(0x6e4cfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4cfd:{NFSU2_TR(0x6e4cfd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4cff:{NFSU2_TR(0x6e4cff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e4d02:{NFSU2_TR(0x6e4d02);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e4d3e;}}
}
B6e4d04:L6e4d04:{c.instructions+=4;NFSU2_TR(0x6e4d04);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e4d08:{NFSU2_TR(0x6e4d08);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e4d0b:{NFSU2_TR(0x6e4d0b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4d0d:{NFSU2_TR(0x6e4d0d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4d3e;}}
}
B6e4d0f:L6e4d0f:{c.instructions+=16;NFSU2_TR(0x6e4d0f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4d13:{NFSU2_TR(0x6e4d13);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4d17:{NFSU2_TR(0x6e4d17);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4d1b:{NFSU2_TR(0x6e4d1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d1c:{NFSU2_TR(0x6e4d1c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4d1f:{NFSU2_TR(0x6e4d1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d20:{NFSU2_TR(0x6e4d20);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d22:{NFSU2_TR(0x6e4d22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d23:{NFSU2_TR(0x6e4d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4d26:{NFSU2_TR(0x6e4d26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d27:{NFSU2_TR(0x6e4d27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d28:{NFSU2_TR(0x6e4d28);
w4(R+0,u32(r2(R+12)));
}
B6e4d2b:{NFSU2_TR(0x6e4d2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d2c:{NFSU2_TR(0x6e4d2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d2d:{NFSU2_TR(0x6e4d2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d2f:{NFSU2_TR(0x6e4d2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4d34ull));
TAIL_STATIC(0x6efe40u,6ef);
}
B6e4d34:L6e4d34:{c.instructions+=6;NFSU2_TR(0x6e4d34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4d35:{NFSU2_TR(0x6e4d35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4d36:{NFSU2_TR(0x6e4d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4d37:{NFSU2_TR(0x6e4d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4d38:{NFSU2_TR(0x6e4d38);
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
B6e4d3b:{NFSU2_TR(0x6e4d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4d3e:L6e4d3e:{c.instructions+=4;NFSU2_TR(0x6e4d3e);
w4(R+8,u32(r2(R+12)));
}
B6e4d41:{NFSU2_TR(0x6e4d41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e4d43:{NFSU2_TR(0x6e4d43);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4d45:{NFSU2_TR(0x6e4d45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e4d80;}}
}
B6e4d47:L6e4d47:{c.instructions+=2;NFSU2_TR(0x6e4d47);
__builtin_memmove((R+4),(R+20),4);
}
B6e4d49:{NFSU2_TR(0x6e4d49);
{goto L6e4d50;}
}
B6e4d4b:L6e4d4b:{c.instructions+=2;NFSU2_TR(0x6e4d4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4d4f:{NFSU2_TR(0x6e4d4f);
}
B6e4d50:L6e4d50:{c.instructions+=17;NFSU2_TR(0x6e4d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4d53:{NFSU2_TR(0x6e4d53);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B6e4d56:{NFSU2_TR(0x6e4d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e4d5a:{NFSU2_TR(0x6e4d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e4d5d:{NFSU2_TR(0x6e4d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6e4d60:{NFSU2_TR(0x6e4d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e4d62:{NFSU2_TR(0x6e4d62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e4d64:{NFSU2_TR(0x6e4d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e4d67:{NFSU2_TR(0x6e4d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4d6a:{NFSU2_TR(0x6e4d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e4d6d:{NFSU2_TR(0x6e4d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4d70:{NFSU2_TR(0x6e4d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4d73:{NFSU2_TR(0x6e4d73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6e4d76:{NFSU2_TR(0x6e4d76);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e4d79:{NFSU2_TR(0x6e4d79);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4d7b:{NFSU2_TR(0x6e4d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4d7e:{NFSU2_TR(0x6e4d7e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4d4bu);}goto L6e4d4b;}}
}
B6e4d80:L6e4d80:{c.instructions+=6;NFSU2_TR(0x6e4d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4d81:{NFSU2_TR(0x6e4d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4d82:{NFSU2_TR(0x6e4d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4d83:{NFSU2_TR(0x6e4d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4d84:{NFSU2_TR(0x6e4d84);
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
B6e4d87:{NFSU2_TR(0x6e4d87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4d90:L6e4d90:{c.instructions+=5;NFSU2_TR(0x6e4d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6e4d93:{NFSU2_TR(0x6e4d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4d97:{NFSU2_TR(0x6e4d97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6e4d9b:{NFSU2_TR(0x6e4d9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e4d9e:{NFSU2_TR(0x6e4d9e);
if(r1(R+518)){{goto L6e4db6;}}
}
B6e4da0:L6e4da0:{c.instructions+=5;NFSU2_TR(0x6e4da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e4da7:{NFSU2_TR(0x6e4da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e4dab:{NFSU2_TR(0x6e4dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4daf:{NFSU2_TR(0x6e4daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4db2:{NFSU2_TR(0x6e4db2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e4db6:L6e4db6:{c.instructions+=14;NFSU2_TR(0x6e4db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4db9:{NFSU2_TR(0x6e4db9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e4dbd:{NFSU2_TR(0x6e4dbd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4dbe:{NFSU2_TR(0x6e4dbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4dc2:{NFSU2_TR(0x6e4dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4dc5:{NFSU2_TR(0x6e4dc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4dc6:{NFSU2_TR(0x6e4dc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4dc9:{NFSU2_TR(0x6e4dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4dcc:{NFSU2_TR(0x6e4dcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4dce:{NFSU2_TR(0x6e4dce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4dcf:{NFSU2_TR(0x6e4dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4dd3:{NFSU2_TR(0x6e4dd3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+8),(U+0),2);
}
B6e4dd6:{NFSU2_TR(0x6e4dd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4dd7:{NFSU2_TR(0x6e4dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4e44;}}
}
B6e4dd9:L6e4dd9:{c.instructions+=2;NFSU2_TR(0x6e4dd9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e4ddc:{NFSU2_TR(0x6e4ddc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e4e44;}}
}
B6e4dde:L6e4dde:{c.instructions+=6;NFSU2_TR(0x6e4dde);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e4de4:{NFSU2_TR(0x6e4de4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e4de6:{NFSU2_TR(0x6e4de6);
w4(R+28,u32(r2(R+8)));
}
B6e4de9:{NFSU2_TR(0x6e4de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e4dec:{NFSU2_TR(0x6e4dec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ded:{NFSU2_TR(0x6e4ded);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4df0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e4df0:L6e4df0:{c.instructions+=5;NFSU2_TR(0x6e4df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4df4:{NFSU2_TR(0x6e4df4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e4df6:{NFSU2_TR(0x6e4df6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4df8:{NFSU2_TR(0x6e4df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4dfb:{NFSU2_TR(0x6e4dfb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e4e44;}}
}
B6e4dfd:L6e4dfd:{c.instructions+=3;NFSU2_TR(0x6e4dfd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6e4dfe:{NFSU2_TR(0x6e4dfe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6e4e01:{NFSU2_TR(0x6e4e01);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e4e02:L6e4e02:{c.instructions+=13;NFSU2_TR(0x6e4e02);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e4e06:{NFSU2_TR(0x6e4e06);
w4(R+0,u32(0xaaaaaaabull));
}
B6e4e0b:{NFSU2_TR(0x6e4e0b);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e4e0d:{NFSU2_TR(0x6e4e0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6e4e10:{NFSU2_TR(0x6e4e10);
w4(R+0,u32(r1(R+8)));
}
B6e4e13:{NFSU2_TR(0x6e4e13);
__builtin_memmove((R+4),(R+0),4);
}
B6e4e15:{NFSU2_TR(0x6e4e15);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e4e18:{NFSU2_TR(0x6e4e18);
w4(R+8,u32(0x1ull));
}
B6e4e1d:{NFSU2_TR(0x6e4e1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e4e1f:{NFSU2_TR(0x6e4e1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4e23:{NFSU2_TR(0x6e4e23);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e4e26:{NFSU2_TR(0x6e4e26);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e4e29:{NFSU2_TR(0x6e4e29);
if(r1(R+518)){{goto L6e4e40;}}
}
B6e4e2b:L6e4e2b:{c.instructions+=6;NFSU2_TR(0x6e4e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4e2f:{NFSU2_TR(0x6e4e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4e32:{NFSU2_TR(0x6e4e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4e35:{NFSU2_TR(0x6e4e35);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6e4e39:{NFSU2_TR(0x6e4e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4e3d:{NFSU2_TR(0x6e4e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6e4e40:L6e4e40:{c.instructions+=3;NFSU2_TR(0x6e4e40);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e4e41:{NFSU2_TR(0x6e4e41);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6e4e42:{NFSU2_TR(0x6e4e42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4e02u);}goto L6e4e02;}}
}
B6e4e44:L6e4e44:{c.instructions+=6;NFSU2_TR(0x6e4e44);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4e48:{NFSU2_TR(0x6e4e48);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4e4e:{NFSU2_TR(0x6e4e4e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4e52:{NFSU2_TR(0x6e4e52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4e54:{NFSU2_TR(0x6e4e54);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4e57:{NFSU2_TR(0x6e4e57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4e71;}}
}
B6e4e59:L6e4e59:{c.instructions+=6;NFSU2_TR(0x6e4e59);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4e5f:{NFSU2_TR(0x6e4e5f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4e63:{NFSU2_TR(0x6e4e63);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4e67:{NFSU2_TR(0x6e4e67);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4e6b:{NFSU2_TR(0x6e4e6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4e6f:{NFSU2_TR(0x6e4e6f);
{goto L6e4e87;}
}
B6e4e71:L6e4e71:{c.instructions+=5;NFSU2_TR(0x6e4e71);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e4e77:{NFSU2_TR(0x6e4e77);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4e7b:{NFSU2_TR(0x6e4e7b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4e7f:{NFSU2_TR(0x6e4e7f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4e83:{NFSU2_TR(0x6e4e83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e4e87:L6e4e87:{c.instructions+=10;NFSU2_TR(0x6e4e87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4e8b:{NFSU2_TR(0x6e4e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4e8e:{NFSU2_TR(0x6e4e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4e91:{NFSU2_TR(0x6e4e91);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e4e95:{NFSU2_TR(0x6e4e95);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4e97:{NFSU2_TR(0x6e4e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4e9b:{NFSU2_TR(0x6e4e9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4e9e:{NFSU2_TR(0x6e4e9e);
__builtin_memmove((R+28),(R+24),4);
}
B6e4ea0:{NFSU2_TR(0x6e4ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4ea4:{NFSU2_TR(0x6e4ea4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e4eab;}}
}
B6e4ea6:L6e4ea6:{c.instructions+=2;NFSU2_TR(0x6e4ea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4ea9:{NFSU2_TR(0x6e4ea9);
{goto L6e4eb1;}
}
B6e4eab:L6e4eab:{c.instructions+=2;NFSU2_TR(0x6e4eab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e4ead:{NFSU2_TR(0x6e4ead);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4eb1;}}
}
B6e4eaf:L6e4eaf:{c.instructions+=1;NFSU2_TR(0x6e4eaf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e4eb1:L6e4eb1:{c.instructions+=13;NFSU2_TR(0x6e4eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4eb4:{NFSU2_TR(0x6e4eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4eb7:{NFSU2_TR(0x6e4eb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4eb8:{NFSU2_TR(0x6e4eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4ebb:{NFSU2_TR(0x6e4ebb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ebc:{NFSU2_TR(0x6e4ebc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4ec0:{NFSU2_TR(0x6e4ec0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ec1:{NFSU2_TR(0x6e4ec1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ec2:{NFSU2_TR(0x6e4ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4ec5:{NFSU2_TR(0x6e4ec5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ec6:{NFSU2_TR(0x6e4ec6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ec7:{NFSU2_TR(0x6e4ec7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4ec9:{NFSU2_TR(0x6e4ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4eceull));
TAIL_STATIC(0x6f03c0u,6f0);
}
B6e4ece:L6e4ece:{c.instructions+=9;NFSU2_TR(0x6e4ece);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e4ed2:{NFSU2_TR(0x6e4ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4ed6:{NFSU2_TR(0x6e4ed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4ed9:{NFSU2_TR(0x6e4ed9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4edd:{NFSU2_TR(0x6e4edd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4ee1:{NFSU2_TR(0x6e4ee1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4ee5:{NFSU2_TR(0x6e4ee5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4ee7:{NFSU2_TR(0x6e4ee7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e4eea:{NFSU2_TR(0x6e4eea);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e4f2d;}}
}
B6e4eec:L6e4eec:{c.instructions+=2;NFSU2_TR(0x6e4eec);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6e4ef0:{NFSU2_TR(0x6e4ef0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e4f2d;}}
}
B6e4ef2:L6e4ef2:{c.instructions+=19;NFSU2_TR(0x6e4ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4ef6:{NFSU2_TR(0x6e4ef6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4efa:{NFSU2_TR(0x6e4efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4efd:{NFSU2_TR(0x6e4efd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4f01:{NFSU2_TR(0x6e4f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f04:{NFSU2_TR(0x6e4f04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f05:{NFSU2_TR(0x6e4f05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f06:{NFSU2_TR(0x6e4f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f09:{NFSU2_TR(0x6e4f09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f0a:{NFSU2_TR(0x6e4f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4f0e:{NFSU2_TR(0x6e4f0e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4f11:{NFSU2_TR(0x6e4f11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f12:{NFSU2_TR(0x6e4f12);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f14:{NFSU2_TR(0x6e4f14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f15:{NFSU2_TR(0x6e4f15);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4f19:{NFSU2_TR(0x6e4f19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f1a:{NFSU2_TR(0x6e4f1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f1b:{NFSU2_TR(0x6e4f1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f1c:{NFSU2_TR(0x6e4f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e4f21ull));
TAIL_STATIC(0x6f0770u,6f0);
}
B6e4f21:L6e4f21:{c.instructions+=7;NFSU2_TR(0x6e4f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4f22:{NFSU2_TR(0x6e4f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4f23:{NFSU2_TR(0x6e4f23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4f24:{NFSU2_TR(0x6e4f24);
w1(R+0,u8(0x1ull));
}
B6e4f26:{NFSU2_TR(0x6e4f26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4f27:{NFSU2_TR(0x6e4f27);
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
B6e4f2a:{NFSU2_TR(0x6e4f2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4f2d:L6e4f2d:{c.instructions+=5;NFSU2_TR(0x6e4f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4f31:{NFSU2_TR(0x6e4f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f34:{NFSU2_TR(0x6e4f34);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e4f36:{NFSU2_TR(0x6e4f36);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e4f38:{NFSU2_TR(0x6e4f38);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e4f7e;}}
}
B6e4f3a:L6e4f3a:{c.instructions+=1;NFSU2_TR(0x6e4f3a);
__builtin_memmove((R+12),(R+12),4);
}
B6e4f40:L6e4f40:{c.instructions+=22;NFSU2_TR(0x6e4f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f43:{NFSU2_TR(0x6e4f43);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e4f47:{NFSU2_TR(0x6e4f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4f4a:{NFSU2_TR(0x6e4f4a);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e4f4e:{NFSU2_TR(0x6e4f4e);
__builtin_memmove((R+24),(R+8),4);
}
B6e4f50:{NFSU2_TR(0x6e4f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f54:{NFSU2_TR(0x6e4f54);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6e4f57:{NFSU2_TR(0x6e4f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e4f5a:{NFSU2_TR(0x6e4f5a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B6e4f5c:{NFSU2_TR(0x6e4f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e4f5e:{NFSU2_TR(0x6e4f5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e4f60:{NFSU2_TR(0x6e4f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f63:{NFSU2_TR(0x6e4f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4f66:{NFSU2_TR(0x6e4f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f69:{NFSU2_TR(0x6e4f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4f6c:{NFSU2_TR(0x6e4f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f6f:{NFSU2_TR(0x6e4f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4f72:{NFSU2_TR(0x6e4f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4f76:{NFSU2_TR(0x6e4f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4f79:{NFSU2_TR(0x6e4f79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e4f7a:{NFSU2_TR(0x6e4f7a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e4f7c:{NFSU2_TR(0x6e4f7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e4f40u);}goto L6e4f40;}}
}
B6e4f7e:L6e4f7e:{c.instructions+=7;NFSU2_TR(0x6e4f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e4f7f:{NFSU2_TR(0x6e4f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e4f80:{NFSU2_TR(0x6e4f80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e4f81:{NFSU2_TR(0x6e4f81);
w1(R+0,u8(0x1ull));
}
B6e4f83:{NFSU2_TR(0x6e4f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e4f84:{NFSU2_TR(0x6e4f84);
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
B6e4f87:{NFSU2_TR(0x6e4f87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e4f90:L6e4f90:{c.instructions+=10;NFSU2_TR(0x6e4f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6e4f93:{NFSU2_TR(0x6e4f93);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4f97:{NFSU2_TR(0x6e4f97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f98:{NFSU2_TR(0x6e4f98);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4f9e:{NFSU2_TR(0x6e4f9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e4f9f:{NFSU2_TR(0x6e4f9f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4fa3:{NFSU2_TR(0x6e4fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4fa7:{NFSU2_TR(0x6e4fa7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4fa9:{NFSU2_TR(0x6e4fa9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4fac:{NFSU2_TR(0x6e4fac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e4fc6;}}
}
B6e4fae:L6e4fae:{c.instructions+=6;NFSU2_TR(0x6e4fae);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e4fb4:{NFSU2_TR(0x6e4fb4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4fb8:{NFSU2_TR(0x6e4fb8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4fbc:{NFSU2_TR(0x6e4fbc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4fc0:{NFSU2_TR(0x6e4fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4fc4:{NFSU2_TR(0x6e4fc4);
{goto L6e4fdc;}
}
B6e4fc6:L6e4fc6:{c.instructions+=5;NFSU2_TR(0x6e4fc6);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e4fcc:{NFSU2_TR(0x6e4fcc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e4fd0:{NFSU2_TR(0x6e4fd0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e4fd4:{NFSU2_TR(0x6e4fd4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e4fd8:{NFSU2_TR(0x6e4fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e4fdc:L6e4fdc:{c.instructions+=11;NFSU2_TR(0x6e4fdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e4fe0:{NFSU2_TR(0x6e4fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e4fe3:{NFSU2_TR(0x6e4fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e4fe6:{NFSU2_TR(0x6e4fe6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e4fea:{NFSU2_TR(0x6e4fea);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6e4fed:{NFSU2_TR(0x6e4fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e4ff1:{NFSU2_TR(0x6e4ff1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e4ff5:{NFSU2_TR(0x6e4ff5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e4ff9:{NFSU2_TR(0x6e4ff9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e4ffb:{NFSU2_TR(0x6e4ffb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e4ffe:{NFSU2_TR(0x6e4ffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6e500au,6e5);}
TAIL_STATIC(0x6e5000u,6e5);
}
XIT:NFSU2_TR_EXIT(0x6e4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
