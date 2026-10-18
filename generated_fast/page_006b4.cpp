#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b3(u8* __restrict R,Cpu& c);
u32 body_6b5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b4(u8* __restrict R,Cpu& c);
u32 page_6b4(Cpu& c){return body_6b4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b4004:goto L6b4004;
case 0x6b4008:c.instructions+=2;goto B6b4008;
case 0x6b400b:c.instructions+=1;goto B6b400b;
case 0x6b4011:goto L6b4011;
case 0x6b4014:c.instructions+=12;goto B6b4014;
case 0x6b4017:c.instructions+=11;goto B6b4017;
case 0x6b4019:c.instructions+=10;goto B6b4019;
case 0x6b401c:c.instructions+=9;goto B6b401c;
case 0x6b401f:c.instructions+=8;goto B6b401f;
case 0x6b4020:c.instructions+=7;goto B6b4020;
case 0x6b4021:c.instructions+=6;goto B6b4021;
case 0x6b4024:c.instructions+=5;goto B6b4024;
case 0x6b4027:c.instructions+=4;goto B6b4027;
case 0x6b4029:c.instructions+=3;goto B6b4029;
case 0x6b402c:c.instructions+=2;goto B6b402c;
case 0x6b402f:c.instructions+=1;goto B6b402f;
case 0x6b4034:goto L6b4034;
case 0x6b4037:c.instructions+=2;goto B6b4037;
case 0x6b403a:c.instructions+=1;goto B6b403a;
case 0x6b4040:goto L6b4040;
case 0x6b4046:c.instructions+=4;goto B6b4046;
case 0x6b4049:c.instructions+=3;goto B6b4049;
case 0x6b404b:c.instructions+=2;goto B6b404b;
case 0x6b4051:c.instructions+=1;goto B6b4051;
case 0x6b4053:goto L6b4053;
case 0x6b4059:c.instructions+=10;goto B6b4059;
case 0x6b405c:c.instructions+=9;goto B6b405c;
case 0x6b405f:c.instructions+=8;goto B6b405f;
case 0x6b4062:c.instructions+=7;goto B6b4062;
case 0x6b4068:c.instructions+=6;goto B6b4068;
case 0x6b406b:c.instructions+=5;goto B6b406b;
case 0x6b406d:c.instructions+=4;goto B6b406d;
case 0x6b406e:c.instructions+=3;goto B6b406e;
case 0x6b4074:c.instructions+=2;goto B6b4074;
case 0x6b4076:c.instructions+=1;goto B6b4076;
case 0x6b4078:goto L6b4078;
case 0x6b407b:c.instructions+=6;goto B6b407b;
case 0x6b407e:c.instructions+=5;goto B6b407e;
case 0x6b407f:c.instructions+=4;goto B6b407f;
case 0x6b4081:c.instructions+=3;goto B6b4081;
case 0x6b4085:c.instructions+=2;goto B6b4085;
case 0x6b4088:c.instructions+=1;goto B6b4088;
case 0x6b408d:goto L6b408d;
case 0x6b4090:c.instructions+=2;goto B6b4090;
case 0x6b4093:c.instructions+=1;goto B6b4093;
case 0x6b4096:goto L6b4096;
case 0x6b4099:c.instructions+=1;goto B6b4099;
case 0x6b409e:goto L6b409e;
case 0x6b40a0:c.instructions+=1;goto B6b40a0;
case 0x6b40a6:goto L6b40a6;
case 0x6b40aa:c.instructions+=7;goto B6b40aa;
case 0x6b40b0:c.instructions+=6;goto B6b40b0;
case 0x6b40b3:c.instructions+=5;goto B6b40b3;
case 0x6b40b6:c.instructions+=4;goto B6b40b6;
case 0x6b40b8:c.instructions+=3;goto B6b40b8;
case 0x6b40bb:c.instructions+=2;goto B6b40bb;
case 0x6b40be:c.instructions+=1;goto B6b40be;
case 0x6b40c0:goto L6b40c0;
case 0x6b40c3:c.instructions+=8;goto B6b40c3;
case 0x6b40c4:c.instructions+=7;goto B6b40c4;
case 0x6b40c5:c.instructions+=6;goto B6b40c5;
case 0x6b40c8:c.instructions+=5;goto B6b40c8;
case 0x6b40cb:c.instructions+=4;goto B6b40cb;
case 0x6b40cd:c.instructions+=3;goto B6b40cd;
case 0x6b40d0:c.instructions+=2;goto B6b40d0;
case 0x6b40d3:c.instructions+=1;goto B6b40d3;
case 0x6b40d8:goto L6b40d8;
case 0x6b40db:c.instructions+=2;goto B6b40db;
case 0x6b40de:c.instructions+=1;goto B6b40de;
case 0x6b40e4:goto L6b40e4;
case 0x6b40ea:c.instructions+=4;goto B6b40ea;
case 0x6b40ed:c.instructions+=3;goto B6b40ed;
case 0x6b40ef:c.instructions+=2;goto B6b40ef;
case 0x6b40f5:c.instructions+=1;goto B6b40f5;
case 0x6b40f7:goto L6b40f7;
case 0x6b40fd:c.instructions+=11;goto B6b40fd;
case 0x6b4100:c.instructions+=10;goto B6b4100;
case 0x6b4103:c.instructions+=9;goto B6b4103;
case 0x6b4106:c.instructions+=8;goto B6b4106;
case 0x6b4109:c.instructions+=7;goto B6b4109;
case 0x6b410f:c.instructions+=6;goto B6b410f;
case 0x6b4112:c.instructions+=5;goto B6b4112;
case 0x6b4114:c.instructions+=4;goto B6b4114;
case 0x6b4115:c.instructions+=3;goto B6b4115;
case 0x6b411b:c.instructions+=2;goto B6b411b;
case 0x6b411d:c.instructions+=1;goto B6b411d;
case 0x6b411f:goto L6b411f;
case 0x6b4123:c.instructions+=2;goto B6b4123;
case 0x6b4127:c.instructions+=1;goto B6b4127;
case 0x6b4129:goto L6b4129;
case 0x6b412c:c.instructions+=5;goto B6b412c;
case 0x6b412f:c.instructions+=4;goto B6b412f;
case 0x6b4132:c.instructions+=3;goto B6b4132;
case 0x6b4133:c.instructions+=2;goto B6b4133;
case 0x6b4136:c.instructions+=1;goto B6b4136;
case 0x6b413b:goto L6b413b;
case 0x6b413e:c.instructions+=2;goto B6b413e;
case 0x6b4141:c.instructions+=1;goto B6b4141;
case 0x6b4144:goto L6b4144;
case 0x6b4148:c.instructions+=1;goto B6b4148;
case 0x6b414a:goto L6b414a;
case 0x6b414c:c.instructions+=4;goto B6b414c;
case 0x6b414f:c.instructions+=3;goto B6b414f;
case 0x6b4152:c.instructions+=2;goto B6b4152;
case 0x6b4155:c.instructions+=1;goto B6b4155;
case 0x6b415b:goto L6b415b;
case 0x6b415d:goto L6b415d;
case 0x6b4161:c.instructions+=2;goto B6b4161;
case 0x6b4163:c.instructions+=1;goto B6b4163;
case 0x6b4165:goto L6b4165;
case 0x6b4168:c.instructions+=1;goto B6b4168;
case 0x6b416b:goto L6b416b;
case 0x6b416f:c.instructions+=2;goto B6b416f;
case 0x6b4171:c.instructions+=1;goto B6b4171;
case 0x6b4173:goto L6b4173;
case 0x6b4176:c.instructions+=1;goto B6b4176;
case 0x6b4179:goto L6b4179;
case 0x6b417c:c.instructions+=2;goto B6b417c;
case 0x6b417f:c.instructions+=1;goto B6b417f;
case 0x6b4181:goto L6b4181;
case 0x6b4183:c.instructions+=6;goto B6b4183;
case 0x6b4184:c.instructions+=5;goto B6b4184;
case 0x6b418a:c.instructions+=4;goto B6b418a;
case 0x6b4190:c.instructions+=3;goto B6b4190;
case 0x6b4192:c.instructions+=2;goto B6b4192;
case 0x6b4193:c.instructions+=1;goto B6b4193;
case 0x6b4195:goto L6b4195;
case 0x6b4197:goto L6b4197;
case 0x6b4198:c.instructions+=4;goto B6b4198;
case 0x6b4199:c.instructions+=3;goto B6b4199;
case 0x6b419a:c.instructions+=2;goto B6b419a;
case 0x6b419b:c.instructions+=1;goto B6b419b;
case 0x6b419e:goto L6b419e;
case 0x6b41a0:c.instructions+=12;goto B6b41a0;
case 0x6b41a1:c.instructions+=11;goto B6b41a1;
case 0x6b41a3:c.instructions+=10;goto B6b41a3;
case 0x6b41a9:c.instructions+=9;goto B6b41a9;
case 0x6b41aa:c.instructions+=8;goto B6b41aa;
case 0x6b41ab:c.instructions+=7;goto B6b41ab;
case 0x6b41ad:c.instructions+=6;goto B6b41ad;
case 0x6b41af:c.instructions+=5;goto B6b41af;
case 0x6b41b0:c.instructions+=4;goto B6b41b0;
case 0x6b41b3:c.instructions+=3;goto B6b41b3;
case 0x6b41b6:c.instructions+=2;goto B6b41b6;
case 0x6b41b9:c.instructions+=1;goto B6b41b9;
case 0x6b41bb:goto L6b41bb;
case 0x6b41bd:goto L6b41bd;
case 0x6b41c3:c.instructions+=4;goto B6b41c3;
case 0x6b41c6:c.instructions+=3;goto B6b41c6;
case 0x6b41c9:c.instructions+=2;goto B6b41c9;
case 0x6b41cb:c.instructions+=1;goto B6b41cb;
case 0x6b41d1:goto L6b41d1;
case 0x6b41d4:c.instructions+=1;goto B6b41d4;
case 0x6b41da:goto L6b41da;
case 0x6b41e0:c.instructions+=2;goto B6b41e0;
case 0x6b41e3:c.instructions+=1;goto B6b41e3;
case 0x6b41e9:goto L6b41e9;
case 0x6b41ef:c.instructions+=5;goto B6b41ef;
case 0x6b41f2:c.instructions+=4;goto B6b41f2;
case 0x6b41f5:c.instructions+=3;goto B6b41f5;
case 0x6b41f7:c.instructions+=2;goto B6b41f7;
case 0x6b41fa:c.instructions+=1;goto B6b41fa;
case 0x6b4200:goto L6b4200;
case 0x6b4202:c.instructions+=2;goto B6b4202;
case 0x6b4204:c.instructions+=1;goto B6b4204;
case 0x6b420a:goto L6b420a;
case 0x6b420e:c.instructions+=7;goto B6b420e;
case 0x6b4211:c.instructions+=6;goto B6b4211;
case 0x6b4213:c.instructions+=5;goto B6b4213;
case 0x6b4215:c.instructions+=4;goto B6b4215;
case 0x6b421a:c.instructions+=3;goto B6b421a;
case 0x6b421d:c.instructions+=2;goto B6b421d;
case 0x6b4220:c.instructions+=1;goto B6b4220;
case 0x6b4226:goto L6b4226;
case 0x6b4229:c.instructions+=11;goto B6b4229;
case 0x6b422b:c.instructions+=10;goto B6b422b;
case 0x6b422e:c.instructions+=9;goto B6b422e;
case 0x6b4234:c.instructions+=8;goto B6b4234;
case 0x6b4237:c.instructions+=7;goto B6b4237;
case 0x6b423a:c.instructions+=6;goto B6b423a;
case 0x6b423d:c.instructions+=5;goto B6b423d;
case 0x6b423f:c.instructions+=4;goto B6b423f;
case 0x6b4242:c.instructions+=3;goto B6b4242;
case 0x6b4245:c.instructions+=2;goto B6b4245;
case 0x6b4248:c.instructions+=1;goto B6b4248;
case 0x6b424e:goto L6b424e;
case 0x6b4250:c.instructions+=4;goto B6b4250;
case 0x6b4253:c.instructions+=3;goto B6b4253;
case 0x6b4256:c.instructions+=2;goto B6b4256;
case 0x6b4259:c.instructions+=1;goto B6b4259;
case 0x6b425c:goto L6b425c;
case 0x6b425f:c.instructions+=2;goto B6b425f;
case 0x6b4261:c.instructions+=1;goto B6b4261;
case 0x6b4267:goto L6b4267;
case 0x6b426a:c.instructions+=4;goto B6b426a;
case 0x6b426d:c.instructions+=3;goto B6b426d;
case 0x6b4270:c.instructions+=2;goto B6b4270;
case 0x6b4272:c.instructions+=1;goto B6b4272;
case 0x6b4275:goto L6b4275;
case 0x6b4279:c.instructions+=1;goto B6b4279;
case 0x6b427b:goto L6b427b;
case 0x6b427e:c.instructions+=7;goto B6b427e;
case 0x6b4281:c.instructions+=6;goto B6b4281;
case 0x6b4284:c.instructions+=5;goto B6b4284;
case 0x6b4287:c.instructions+=4;goto B6b4287;
case 0x6b428a:c.instructions+=3;goto B6b428a;
case 0x6b428d:c.instructions+=2;goto B6b428d;
case 0x6b428f:c.instructions+=1;goto B6b428f;
case 0x6b4292:goto L6b4292;
case 0x6b4294:c.instructions+=2;goto B6b4294;
case 0x6b4297:c.instructions+=1;goto B6b4297;
case 0x6b4299:goto L6b4299;
case 0x6b429c:c.instructions+=4;goto B6b429c;
case 0x6b429f:c.instructions+=3;goto B6b429f;
case 0x6b42a2:c.instructions+=2;goto B6b42a2;
case 0x6b42a5:c.instructions+=1;goto B6b42a5;
case 0x6b42a7:goto L6b42a7;
case 0x6b42aa:c.instructions+=2;goto B6b42aa;
case 0x6b42ad:c.instructions+=1;goto B6b42ad;
case 0x6b42af:goto L6b42af;
case 0x6b42b5:c.instructions+=3;goto B6b42b5;
case 0x6b42b8:c.instructions+=2;goto B6b42b8;
case 0x6b42ba:c.instructions+=1;goto B6b42ba;
case 0x6b42bc:goto L6b42bc;
case 0x6b42be:c.instructions+=2;goto B6b42be;
case 0x6b42c0:c.instructions+=1;goto B6b42c0;
case 0x6b42c2:goto L6b42c2;
case 0x6b42c7:c.instructions+=2;goto B6b42c7;
case 0x6b42cc:c.instructions+=1;goto B6b42cc;
case 0x6b42ce:goto L6b42ce;
case 0x6b42d5:c.instructions+=1;goto B6b42d5;
case 0x6b42d8:goto L6b42d8;
case 0x6b42db:c.instructions+=2;goto B6b42db;
case 0x6b42de:c.instructions+=1;goto B6b42de;
case 0x6b42e0:goto L6b42e0;
case 0x6b42e3:c.instructions+=1;goto B6b42e3;
case 0x6b42e6:goto L6b42e6;
case 0x6b42e9:c.instructions+=4;goto B6b42e9;
case 0x6b42ec:c.instructions+=3;goto B6b42ec;
case 0x6b42ee:c.instructions+=2;goto B6b42ee;
case 0x6b42f1:c.instructions+=1;goto B6b42f1;
case 0x6b42f3:goto L6b42f3;
case 0x6b42f6:c.instructions+=3;goto B6b42f6;
case 0x6b42f9:c.instructions+=2;goto B6b42f9;
case 0x6b42fc:c.instructions+=1;goto B6b42fc;
case 0x6b4302:goto L6b4302;
case 0x6b4306:c.instructions+=1;goto B6b4306;
case 0x6b4308:goto L6b4308;
case 0x6b430b:c.instructions+=2;goto B6b430b;
case 0x6b430d:c.instructions+=1;goto B6b430d;
case 0x6b4313:goto L6b4313;
case 0x6b4315:c.instructions+=3;goto B6b4315;
case 0x6b4317:c.instructions+=2;goto B6b4317;
case 0x6b4318:c.instructions+=1;goto B6b4318;
case 0x6b431a:goto L6b431a;
case 0x6b431d:c.instructions+=3;goto B6b431d;
case 0x6b4320:c.instructions+=2;goto B6b4320;
case 0x6b4326:c.instructions+=1;goto B6b4326;
case 0x6b432c:goto L6b432c;
case 0x6b432f:c.instructions+=2;goto B6b432f;
case 0x6b4333:c.instructions+=1;goto B6b4333;
case 0x6b4339:goto L6b4339;
case 0x6b433d:c.instructions+=2;goto B6b433d;
case 0x6b4344:c.instructions+=1;goto B6b4344;
case 0x6b434a:goto L6b434a;
case 0x6b4350:c.instructions+=4;goto B6b4350;
case 0x6b4353:c.instructions+=3;goto B6b4353;
case 0x6b4356:c.instructions+=2;goto B6b4356;
case 0x6b4358:c.instructions+=1;goto B6b4358;
case 0x6b435e:goto L6b435e;
case 0x6b4361:c.instructions+=1;goto B6b4361;
case 0x6b4367:goto L6b4367;
case 0x6b436a:c.instructions+=3;goto B6b436a;
case 0x6b436e:c.instructions+=2;goto B6b436e;
case 0x6b4370:c.instructions+=1;goto B6b4370;
case 0x6b4376:goto L6b4376;
case 0x6b4379:c.instructions+=2;goto B6b4379;
case 0x6b437c:c.instructions+=1;goto B6b437c;
case 0x6b437e:goto L6b437e;
case 0x6b4380:c.instructions+=3;goto B6b4380;
case 0x6b4383:c.instructions+=2;goto B6b4383;
case 0x6b4387:c.instructions+=1;goto B6b4387;
case 0x6b438d:goto L6b438d;
case 0x6b438f:c.instructions+=3;goto B6b438f;
case 0x6b4396:c.instructions+=2;goto B6b4396;
case 0x6b4399:c.instructions+=1;goto B6b4399;
case 0x6b439e:goto L6b439e;
case 0x6b43a1:c.instructions+=10;goto B6b43a1;
case 0x6b43a4:c.instructions+=9;goto B6b43a4;
case 0x6b43a5:c.instructions+=8;goto B6b43a5;
case 0x6b43a6:c.instructions+=7;goto B6b43a6;
case 0x6b43a8:c.instructions+=6;goto B6b43a8;
case 0x6b43ab:c.instructions+=5;goto B6b43ab;
case 0x6b43ac:c.instructions+=4;goto B6b43ac;
case 0x6b43af:c.instructions+=3;goto B6b43af;
case 0x6b43b0:c.instructions+=2;goto B6b43b0;
case 0x6b43b3:c.instructions+=1;goto B6b43b3;
case 0x6b43b5:goto L6b43b5;
case 0x6b43b8:c.instructions+=3;goto B6b43b8;
case 0x6b43bb:c.instructions+=2;goto B6b43bb;
case 0x6b43bd:c.instructions+=1;goto B6b43bd;
case 0x6b43bf:goto L6b43bf;
case 0x6b43c2:c.instructions+=6;goto B6b43c2;
case 0x6b43c5:c.instructions+=5;goto B6b43c5;
case 0x6b43c8:c.instructions+=4;goto B6b43c8;
case 0x6b43cb:c.instructions+=3;goto B6b43cb;
case 0x6b43ce:c.instructions+=2;goto B6b43ce;
case 0x6b43d1:c.instructions+=1;goto B6b43d1;
case 0x6b43d3:goto L6b43d3;
case 0x6b43d6:goto L6b43d6;
case 0x6b43d8:c.instructions+=2;goto B6b43d8;
case 0x6b43da:c.instructions+=1;goto B6b43da;
case 0x6b43dc:goto L6b43dc;
case 0x6b43df:c.instructions+=3;goto B6b43df;
case 0x6b43e2:c.instructions+=2;goto B6b43e2;
case 0x6b43e5:c.instructions+=1;goto B6b43e5;
case 0x6b43e7:goto L6b43e7;
case 0x6b43ea:c.instructions+=3;goto B6b43ea;
case 0x6b43ec:c.instructions+=2;goto B6b43ec;
case 0x6b43ee:c.instructions+=1;goto B6b43ee;
case 0x6b43f0:goto L6b43f0;
case 0x6b43f4:c.instructions+=1;goto B6b43f4;
case 0x6b43f6:goto L6b43f6;
case 0x6b43f7:c.instructions+=2;goto B6b43f7;
case 0x6b43f9:c.instructions+=1;goto B6b43f9;
case 0x6b43fb:goto L6b43fb;
case 0x6b43fd:c.instructions+=1;goto B6b43fd;
case 0x6b43ff:goto L6b43ff;
case 0x6b4403:c.instructions+=2;goto B6b4403;
case 0x6b4404:c.instructions+=1;goto B6b4404;
case 0x6b4407:goto L6b4407;
case 0x6b440a:c.instructions+=2;goto B6b440a;
case 0x6b440d:c.instructions+=1;goto B6b440d;
case 0x6b440f:goto L6b440f;
case 0x6b4412:c.instructions+=3;goto B6b4412;
case 0x6b4415:c.instructions+=2;goto B6b4415;
case 0x6b4418:c.instructions+=1;goto B6b4418;
case 0x6b441a:goto L6b441a;
case 0x6b441c:c.instructions+=1;goto B6b441c;
case 0x6b4421:goto L6b4421;
case 0x6b4423:c.instructions+=1;goto B6b4423;
case 0x6b4425:goto L6b4425;
case 0x6b4427:c.instructions+=1;goto B6b4427;
case 0x6b442c:goto L6b442c;
case 0x6b442f:c.instructions+=1;goto B6b442f;
case 0x6b4431:goto L6b4431;
case 0x6b4435:goto L6b4435;
case 0x6b4439:c.instructions+=1;goto B6b4439;
case 0x6b443f:goto L6b443f;
case 0x6b4442:c.instructions+=8;goto B6b4442;
case 0x6b4445:c.instructions+=7;goto B6b4445;
case 0x6b4447:c.instructions+=6;goto B6b4447;
case 0x6b444a:c.instructions+=5;goto B6b444a;
case 0x6b444f:c.instructions+=4;goto B6b444f;
case 0x6b4452:c.instructions+=3;goto B6b4452;
case 0x6b4457:c.instructions+=2;goto B6b4457;
case 0x6b4458:c.instructions+=1;goto B6b4458;
case 0x6b445d:goto L6b445d;
case 0x6b445f:c.instructions+=3;goto B6b445f;
case 0x6b4461:c.instructions+=2;goto B6b4461;
case 0x6b4464:c.instructions+=1;goto B6b4464;
case 0x6b446a:goto L6b446a;
case 0x6b446d:c.instructions+=3;goto B6b446d;
case 0x6b4470:c.instructions+=2;goto B6b4470;
case 0x6b4473:c.instructions+=1;goto B6b4473;
case 0x6b4476:goto L6b4476;
case 0x6b4478:goto L6b4478;
case 0x6b447a:c.instructions+=3;goto B6b447a;
case 0x6b447d:c.instructions+=2;goto B6b447d;
case 0x6b4480:c.instructions+=1;goto B6b4480;
case 0x6b4486:goto L6b4486;
case 0x6b4489:goto L6b4489;
case 0x6b448c:c.instructions+=2;goto B6b448c;
case 0x6b448f:c.instructions+=1;goto B6b448f;
case 0x6b4495:goto L6b4495;
case 0x6b4498:c.instructions+=10;goto B6b4498;
case 0x6b449b:c.instructions+=9;goto B6b449b;
case 0x6b449e:c.instructions+=8;goto B6b449e;
case 0x6b44a1:c.instructions+=7;goto B6b44a1;
case 0x6b44a4:c.instructions+=6;goto B6b44a4;
case 0x6b44a7:c.instructions+=5;goto B6b44a7;
case 0x6b44aa:c.instructions+=4;goto B6b44aa;
case 0x6b44ad:c.instructions+=3;goto B6b44ad;
case 0x6b44b0:c.instructions+=2;goto B6b44b0;
case 0x6b44b2:c.instructions+=1;goto B6b44b2;
case 0x6b44b4:goto L6b44b4;
case 0x6b44b7:c.instructions+=2;goto B6b44b7;
case 0x6b44ba:c.instructions+=1;goto B6b44ba;
case 0x6b44c0:goto L6b44c0;
case 0x6b44c3:c.instructions+=10;goto B6b44c3;
case 0x6b44c6:c.instructions+=9;goto B6b44c6;
case 0x6b44c8:c.instructions+=8;goto B6b44c8;
case 0x6b44cb:c.instructions+=7;goto B6b44cb;
case 0x6b44ce:c.instructions+=6;goto B6b44ce;
case 0x6b44d1:c.instructions+=5;goto B6b44d1;
case 0x6b44d4:c.instructions+=4;goto B6b44d4;
case 0x6b44d7:c.instructions+=3;goto B6b44d7;
case 0x6b44da:c.instructions+=2;goto B6b44da;
case 0x6b44dd:c.instructions+=1;goto B6b44dd;
case 0x6b44df:goto L6b44df;
case 0x6b44e5:c.instructions+=3;goto B6b44e5;
case 0x6b44e7:c.instructions+=2;goto B6b44e7;
case 0x6b44ea:c.instructions+=1;goto B6b44ea;
case 0x6b44f0:goto L6b44f0;
case 0x6b44f7:c.instructions+=12;goto B6b44f7;
case 0x6b44f8:c.instructions+=11;goto B6b44f8;
case 0x6b44fa:c.instructions+=10;goto B6b44fa;
case 0x6b44fd:c.instructions+=9;goto B6b44fd;
case 0x6b4503:c.instructions+=8;goto B6b4503;
case 0x6b4507:c.instructions+=7;goto B6b4507;
case 0x6b450b:c.instructions+=6;goto B6b450b;
case 0x6b450e:c.instructions+=5;goto B6b450e;
case 0x6b4511:c.instructions+=4;goto B6b4511;
case 0x6b4514:c.instructions+=3;goto B6b4514;
case 0x6b4517:c.instructions+=2;goto B6b4517;
case 0x6b451a:c.instructions+=1;goto B6b451a;
case 0x6b4520:goto L6b4520;
case 0x6b4523:c.instructions+=6;goto B6b4523;
case 0x6b4526:c.instructions+=5;goto B6b4526;
case 0x6b4529:c.instructions+=4;goto B6b4529;
case 0x6b452c:c.instructions+=3;goto B6b452c;
case 0x6b452f:c.instructions+=2;goto B6b452f;
case 0x6b4532:c.instructions+=1;goto B6b4532;
case 0x6b4534:goto L6b4534;
case 0x6b453a:c.instructions+=2;goto B6b453a;
case 0x6b453d:c.instructions+=1;goto B6b453d;
case 0x6b4543:goto L6b4543;
case 0x6b454a:c.instructions+=18;goto B6b454a;
case 0x6b454b:c.instructions+=17;goto B6b454b;
case 0x6b4551:c.instructions+=16;goto B6b4551;
case 0x6b4554:c.instructions+=15;goto B6b4554;
case 0x6b4557:c.instructions+=14;goto B6b4557;
case 0x6b455a:c.instructions+=13;goto B6b455a;
case 0x6b455d:c.instructions+=12;goto B6b455d;
case 0x6b4560:c.instructions+=11;goto B6b4560;
case 0x6b4563:c.instructions+=10;goto B6b4563;
case 0x6b4566:c.instructions+=9;goto B6b4566;
case 0x6b4569:c.instructions+=8;goto B6b4569;
case 0x6b456f:c.instructions+=7;goto B6b456f;
case 0x6b4572:c.instructions+=6;goto B6b4572;
case 0x6b4575:c.instructions+=5;goto B6b4575;
case 0x6b4578:c.instructions+=4;goto B6b4578;
case 0x6b457b:c.instructions+=3;goto B6b457b;
case 0x6b457e:c.instructions+=2;goto B6b457e;
case 0x6b4581:c.instructions+=1;goto B6b4581;
case 0x6b4583:goto L6b4583;
case 0x6b4586:c.instructions+=3;goto B6b4586;
case 0x6b4589:c.instructions+=2;goto B6b4589;
case 0x6b458c:c.instructions+=1;goto B6b458c;
case 0x6b458f:goto L6b458f;
case 0x6b4592:c.instructions+=13;goto B6b4592;
case 0x6b4595:c.instructions+=12;goto B6b4595;
case 0x6b4598:c.instructions+=11;goto B6b4598;
case 0x6b459b:c.instructions+=10;goto B6b459b;
case 0x6b459e:c.instructions+=9;goto B6b459e;
case 0x6b45a1:c.instructions+=8;goto B6b45a1;
case 0x6b45a4:c.instructions+=7;goto B6b45a4;
case 0x6b45a7:c.instructions+=6;goto B6b45a7;
case 0x6b45aa:c.instructions+=5;goto B6b45aa;
case 0x6b45ad:c.instructions+=4;goto B6b45ad;
case 0x6b45b0:c.instructions+=3;goto B6b45b0;
case 0x6b45b3:c.instructions+=2;goto B6b45b3;
case 0x6b45b6:c.instructions+=1;goto B6b45b6;
case 0x6b45ba:goto L6b45ba;
case 0x6b45bd:c.instructions+=4;goto B6b45bd;
case 0x6b45c0:c.instructions+=3;goto B6b45c0;
case 0x6b45c3:c.instructions+=2;goto B6b45c3;
case 0x6b45c6:c.instructions+=1;goto B6b45c6;
case 0x6b45cc:goto L6b45cc;
case 0x6b45cf:c.instructions+=1;goto B6b45cf;
case 0x6b45d1:goto L6b45d1;
case 0x6b45d4:c.instructions+=3;goto B6b45d4;
case 0x6b45d7:c.instructions+=2;goto B6b45d7;
case 0x6b45da:c.instructions+=1;goto B6b45da;
case 0x6b45e0:goto L6b45e0;
case 0x6b45e6:c.instructions+=8;goto B6b45e6;
case 0x6b45ec:c.instructions+=7;goto B6b45ec;
case 0x6b45ee:c.instructions+=6;goto B6b45ee;
case 0x6b45f1:c.instructions+=5;goto B6b45f1;
case 0x6b45f3:c.instructions+=4;goto B6b45f3;
case 0x6b45f9:c.instructions+=3;goto B6b45f9;
case 0x6b45fb:c.instructions+=2;goto B6b45fb;
case 0x6b45fe:c.instructions+=1;goto B6b45fe;
case 0x6b4600:goto L6b4600;
case 0x6b4607:c.instructions+=3;goto B6b4607;
case 0x6b4609:c.instructions+=2;goto B6b4609;
case 0x6b460c:c.instructions+=1;goto B6b460c;
case 0x6b4611:goto L6b4611;
case 0x6b4616:c.instructions+=1;goto B6b4616;
case 0x6b461b:goto L6b461b;
case 0x6b461e:goto L6b461e;
case 0x6b4621:c.instructions+=2;goto B6b4621;
case 0x6b4622:c.instructions+=1;goto B6b4622;
case 0x6b4628:goto L6b4628;
case 0x6b462c:c.instructions+=1;goto B6b462c;
case 0x6b4632:goto L6b4632;
case 0x6b4636:c.instructions+=5;goto B6b4636;
case 0x6b4638:c.instructions+=4;goto B6b4638;
case 0x6b4639:c.instructions+=3;goto B6b4639;
case 0x6b463f:c.instructions+=2;goto B6b463f;
case 0x6b4642:c.instructions+=1;goto B6b4642;
case 0x6b4644:goto L6b4644;
case 0x6b464a:c.instructions+=1;goto B6b464a;
case 0x6b464d:goto L6b464d;
case 0x6b464f:c.instructions+=3;goto B6b464f;
case 0x6b4651:c.instructions+=2;goto B6b4651;
case 0x6b4653:c.instructions+=1;goto B6b4653;
case 0x6b4655:goto L6b4655;
case 0x6b4657:c.instructions+=1;goto B6b4657;
case 0x6b4659:goto L6b4659;
case 0x6b465c:c.instructions+=2;goto B6b465c;
case 0x6b465f:c.instructions+=1;goto B6b465f;
case 0x6b4661:goto L6b4661;
case 0x6b4664:c.instructions+=1;goto B6b4664;
case 0x6b4667:goto L6b4667;
case 0x6b466a:c.instructions+=5;goto B6b466a;
case 0x6b466c:c.instructions+=4;goto B6b466c;
case 0x6b466f:c.instructions+=3;goto B6b466f;
case 0x6b4672:c.instructions+=2;goto B6b4672;
case 0x6b4675:c.instructions+=1;goto B6b4675;
case 0x6b4677:goto L6b4677;
case 0x6b4679:c.instructions+=1;goto B6b4679;
case 0x6b467b:goto L6b467b;
case 0x6b467f:c.instructions+=1;goto B6b467f;
case 0x6b4685:goto L6b4685;
case 0x6b4688:c.instructions+=2;goto B6b4688;
case 0x6b468b:c.instructions+=1;goto B6b468b;
case 0x6b4692:goto L6b4692;
case 0x6b4695:c.instructions+=4;goto B6b4695;
case 0x6b4698:c.instructions+=3;goto B6b4698;
case 0x6b469c:c.instructions+=2;goto B6b469c;
case 0x6b469f:c.instructions+=1;goto B6b469f;
case 0x6b46a1:goto L6b46a1;
case 0x6b46a4:c.instructions+=4;goto B6b46a4;
case 0x6b46a7:c.instructions+=3;goto B6b46a7;
case 0x6b46aa:c.instructions+=2;goto B6b46aa;
case 0x6b46b0:c.instructions+=1;goto B6b46b0;
case 0x6b46b2:goto L6b46b2;
case 0x6b46b5:c.instructions+=2;goto B6b46b5;
case 0x6b46b7:c.instructions+=1;goto B6b46b7;
case 0x6b46b9:goto L6b46b9;
case 0x6b46bd:c.instructions+=2;goto B6b46bd;
case 0x6b46c1:c.instructions+=1;goto B6b46c1;
case 0x6b46c3:goto L6b46c3;
case 0x6b46c6:c.instructions+=1;goto B6b46c6;
case 0x6b46c9:goto L6b46c9;
case 0x6b46cc:c.instructions+=3;goto B6b46cc;
case 0x6b46ce:c.instructions+=2;goto B6b46ce;
case 0x6b46d0:c.instructions+=1;goto B6b46d0;
case 0x6b46d2:goto L6b46d2;
case 0x6b46d5:c.instructions+=1;goto B6b46d5;
case 0x6b46d7:goto L6b46d7;
case 0x6b46db:c.instructions+=1;goto B6b46db;
case 0x6b46dd:goto L6b46dd;
case 0x6b46e0:c.instructions+=3;goto B6b46e0;
case 0x6b46e4:c.instructions+=2;goto B6b46e4;
case 0x6b46e6:c.instructions+=1;goto B6b46e6;
case 0x6b46e8:goto L6b46e8;
case 0x6b46eb:goto L6b46eb;
case 0x6b46ed:c.instructions+=4;goto B6b46ed;
case 0x6b46f0:c.instructions+=3;goto B6b46f0;
case 0x6b46f3:c.instructions+=2;goto B6b46f3;
case 0x6b46f6:c.instructions+=1;goto B6b46f6;
case 0x6b46f8:goto L6b46f8;
case 0x6b46fa:c.instructions+=1;goto B6b46fa;
case 0x6b46fc:goto L6b46fc;
case 0x6b4700:c.instructions+=1;goto B6b4700;
case 0x6b4706:goto L6b4706;
case 0x6b4709:goto L6b4709;
case 0x6b470c:c.instructions+=3;goto B6b470c;
case 0x6b470f:c.instructions+=2;goto B6b470f;
case 0x6b4712:c.instructions+=1;goto B6b4712;
case 0x6b4714:goto L6b4714;
case 0x6b4717:c.instructions+=4;goto B6b4717;
case 0x6b471a:c.instructions+=3;goto B6b471a;
case 0x6b471e:c.instructions+=2;goto B6b471e;
case 0x6b4721:c.instructions+=1;goto B6b4721;
case 0x6b4723:goto L6b4723;
case 0x6b4726:goto L6b4726;
case 0x6b472a:c.instructions+=1;goto B6b472a;
case 0x6b4730:goto L6b4730;
case 0x6b4732:goto L6b4732;
case 0x6b4736:c.instructions+=1;goto B6b4736;
case 0x6b473c:goto L6b473c;
case 0x6b473e:c.instructions+=1;goto B6b473e;
case 0x6b4744:goto L6b4744;
case 0x6b474b:c.instructions+=1;goto B6b474b;
case 0x6b4751:goto L6b4751;
case 0x6b4753:c.instructions+=1;goto B6b4753;
case 0x6b4758:goto L6b4758;
case 0x6b475a:c.instructions+=1;goto B6b475a;
case 0x6b475c:goto L6b475c;
case 0x6b475e:c.instructions+=1;goto B6b475e;
case 0x6b4763:goto L6b4763;
case 0x6b4765:c.instructions+=1;goto B6b4765;
case 0x6b4767:goto L6b4767;
case 0x6b4769:goto L6b4769;
case 0x6b476b:c.instructions+=1;goto B6b476b;
case 0x6b4770:goto L6b4770;
case 0x6b4772:c.instructions+=1;goto B6b4772;
case 0x6b4774:goto L6b4774;
case 0x6b4776:c.instructions+=1;goto B6b4776;
case 0x6b477b:goto L6b477b;
case 0x6b477e:c.instructions+=1;goto B6b477e;
case 0x6b4780:goto L6b4780;
case 0x6b4784:goto L6b4784;
case 0x6b4786:c.instructions+=1;goto B6b4786;
case 0x6b478c:goto L6b478c;
case 0x6b4790:c.instructions+=1;goto B6b4790;
case 0x6b4796:goto L6b4796;
case 0x6b479c:c.instructions+=2;goto B6b479c;
case 0x6b479f:c.instructions+=1;goto B6b479f;
case 0x6b47a5:goto L6b47a5;
case 0x6b47ac:c.instructions+=17;goto B6b47ac;
case 0x6b47b3:c.instructions+=16;goto B6b47b3;
case 0x6b47b6:c.instructions+=15;goto B6b47b6;
case 0x6b47b9:c.instructions+=14;goto B6b47b9;
case 0x6b47bd:c.instructions+=13;goto B6b47bd;
case 0x6b47c4:c.instructions+=12;goto B6b47c4;
case 0x6b47c6:c.instructions+=11;goto B6b47c6;
case 0x6b47c9:c.instructions+=10;goto B6b47c9;
case 0x6b47cc:c.instructions+=9;goto B6b47cc;
case 0x6b47cf:c.instructions+=8;goto B6b47cf;
case 0x6b47d3:c.instructions+=7;goto B6b47d3;
case 0x6b47da:c.instructions+=6;goto B6b47da;
case 0x6b47dd:c.instructions+=5;goto B6b47dd;
case 0x6b47e4:c.instructions+=4;goto B6b47e4;
case 0x6b47e7:c.instructions+=3;goto B6b47e7;
case 0x6b47ea:c.instructions+=2;goto B6b47ea;
case 0x6b47ed:c.instructions+=1;goto B6b47ed;
case 0x6b47ef:goto L6b47ef;
case 0x6b47f2:c.instructions+=4;goto B6b47f2;
case 0x6b47f9:c.instructions+=3;goto B6b47f9;
case 0x6b47fd:c.instructions+=2;goto B6b47fd;
case 0x6b4801:c.instructions+=1;goto B6b4801;
case 0x6b4803:goto L6b4803;
case 0x6b4806:c.instructions+=9;goto B6b4806;
case 0x6b4809:c.instructions+=8;goto B6b4809;
case 0x6b480c:c.instructions+=7;goto B6b480c;
case 0x6b480f:c.instructions+=6;goto B6b480f;
case 0x6b4812:c.instructions+=5;goto B6b4812;
case 0x6b4814:c.instructions+=4;goto B6b4814;
case 0x6b4817:c.instructions+=3;goto B6b4817;
case 0x6b481a:c.instructions+=2;goto B6b481a;
case 0x6b481d:c.instructions+=1;goto B6b481d;
case 0x6b481f:goto L6b481f;
case 0x6b4822:c.instructions+=1;goto B6b4822;
case 0x6b4824:goto L6b4824;
case 0x6b4827:c.instructions+=2;goto B6b4827;
case 0x6b4829:c.instructions+=1;goto B6b4829;
case 0x6b482b:goto L6b482b;
case 0x6b482d:goto L6b482d;
case 0x6b4830:c.instructions+=5;goto B6b4830;
case 0x6b4833:c.instructions+=4;goto B6b4833;
case 0x6b483a:c.instructions+=3;goto B6b483a;
case 0x6b483d:c.instructions+=2;goto B6b483d;
case 0x6b4840:c.instructions+=1;goto B6b4840;
case 0x6b4842:goto L6b4842;
case 0x6b4845:c.instructions+=3;goto B6b4845;
case 0x6b4848:c.instructions+=2;goto B6b4848;
case 0x6b484b:c.instructions+=1;goto B6b484b;
case 0x6b484d:goto L6b484d;
case 0x6b484f:c.instructions+=5;goto B6b484f;
case 0x6b4851:c.instructions+=4;goto B6b4851;
case 0x6b4853:c.instructions+=3;goto B6b4853;
case 0x6b4858:c.instructions+=2;goto B6b4858;
case 0x6b485a:c.instructions+=1;goto B6b485a;
case 0x6b485f:goto L6b485f;
case 0x6b4861:c.instructions+=2;goto B6b4861;
case 0x6b4864:c.instructions+=1;goto B6b4864;
case 0x6b486a:goto L6b486a;
case 0x6b486d:c.instructions+=5;goto B6b486d;
case 0x6b486f:c.instructions+=4;goto B6b486f;
case 0x6b4871:c.instructions+=3;goto B6b4871;
case 0x6b4873:c.instructions+=2;goto B6b4873;
case 0x6b4878:c.instructions+=1;goto B6b4878;
case 0x6b487d:goto L6b487d;
case 0x6b487f:c.instructions+=2;goto B6b487f;
case 0x6b4882:c.instructions+=1;goto B6b4882;
case 0x6b4888:goto L6b4888;
case 0x6b488b:c.instructions+=26;goto B6b488b;
case 0x6b488e:c.instructions+=25;goto B6b488e;
case 0x6b4891:c.instructions+=24;goto B6b4891;
case 0x6b4893:c.instructions+=23;goto B6b4893;
case 0x6b4896:c.instructions+=22;goto B6b4896;
case 0x6b4898:c.instructions+=21;goto B6b4898;
case 0x6b489b:c.instructions+=20;goto B6b489b;
case 0x6b48a2:c.instructions+=19;goto B6b48a2;
case 0x6b48a5:c.instructions+=18;goto B6b48a5;
case 0x6b48a7:c.instructions+=17;goto B6b48a7;
case 0x6b48aa:c.instructions+=16;goto B6b48aa;
case 0x6b48ac:c.instructions+=15;goto B6b48ac;
case 0x6b48ae:c.instructions+=14;goto B6b48ae;
case 0x6b48af:c.instructions+=13;goto B6b48af;
case 0x6b48b2:c.instructions+=12;goto B6b48b2;
case 0x6b48b8:c.instructions+=11;goto B6b48b8;
case 0x6b48bf:c.instructions+=10;goto B6b48bf;
case 0x6b48c5:c.instructions+=9;goto B6b48c5;
case 0x6b48cc:c.instructions+=8;goto B6b48cc;
case 0x6b48d2:c.instructions+=7;goto B6b48d2;
case 0x6b48d8:c.instructions+=6;goto B6b48d8;
case 0x6b48de:c.instructions+=5;goto B6b48de;
case 0x6b48e1:c.instructions+=4;goto B6b48e1;
case 0x6b48e4:c.instructions+=3;goto B6b48e4;
case 0x6b48ea:c.instructions+=2;goto B6b48ea;
case 0x6b48ed:c.instructions+=1;goto B6b48ed;
case 0x6b48f4:goto L6b48f4;
case 0x6b48f7:c.instructions+=3;goto B6b48f7;
case 0x6b48fa:c.instructions+=2;goto B6b48fa;
case 0x6b4900:c.instructions+=1;goto B6b4900;
case 0x6b4906:goto L6b4906;
case 0x6b490c:c.instructions+=4;goto B6b490c;
case 0x6b490f:c.instructions+=3;goto B6b490f;
case 0x6b4912:c.instructions+=2;goto B6b4912;
case 0x6b4917:c.instructions+=1;goto B6b4917;
case 0x6b4919:goto L6b4919;
case 0x6b491e:c.instructions+=1;goto B6b491e;
case 0x6b4920:goto L6b4920;
case 0x6b4925:c.instructions+=1;goto B6b4925;
case 0x6b4927:goto L6b4927;
case 0x6b4929:c.instructions+=2;goto B6b4929;
case 0x6b492a:c.instructions+=1;goto B6b492a;
case 0x6b492c:goto L6b492c;
case 0x6b4931:c.instructions+=1;goto B6b4931;
case 0x6b4933:goto L6b4933;
case 0x6b4936:c.instructions+=1;goto B6b4936;
case 0x6b4938:goto L6b4938;
case 0x6b493b:c.instructions+=1;goto B6b493b;
case 0x6b493e:goto L6b493e;
case 0x6b4944:c.instructions+=6;goto B6b4944;
case 0x6b4947:c.instructions+=5;goto B6b4947;
case 0x6b494a:c.instructions+=4;goto B6b494a;
case 0x6b494b:c.instructions+=3;goto B6b494b;
case 0x6b494e:c.instructions+=2;goto B6b494e;
case 0x6b4951:c.instructions+=1;goto B6b4951;
case 0x6b4953:goto L6b4953;
case 0x6b4955:c.instructions+=1;goto B6b4955;
case 0x6b4957:goto L6b4957;
case 0x6b495a:c.instructions+=4;goto B6b495a;
case 0x6b495c:c.instructions+=3;goto B6b495c;
case 0x6b495d:c.instructions+=2;goto B6b495d;
case 0x6b4963:c.instructions+=1;goto B6b4963;
case 0x6b4965:goto L6b4965;
case 0x6b4968:c.instructions+=5;goto B6b4968;
case 0x6b496e:c.instructions+=4;goto B6b496e;
case 0x6b4971:c.instructions+=3;goto B6b4971;
case 0x6b4974:c.instructions+=2;goto B6b4974;
case 0x6b4975:c.instructions+=1;goto B6b4975;
case 0x6b4977:goto L6b4977;
case 0x6b497a:c.instructions+=2;goto B6b497a;
case 0x6b4980:c.instructions+=1;goto B6b4980;
case 0x6b4982:goto L6b4982;
case 0x6b4986:c.instructions+=1;goto B6b4986;
case 0x6b4988:goto L6b4988;
case 0x6b498b:c.instructions+=2;goto B6b498b;
case 0x6b498d:c.instructions+=1;goto B6b498d;
case 0x6b4992:goto L6b4992;
case 0x6b4994:goto L6b4994;
case 0x6b4997:goto L6b4997;
case 0x6b4999:goto L6b4999;
case 0x6b499a:c.instructions+=4;goto B6b499a;
case 0x6b499b:c.instructions+=3;goto B6b499b;
case 0x6b499c:c.instructions+=2;goto B6b499c;
case 0x6b499d:c.instructions+=1;goto B6b499d;
case 0x6b49a0:goto L6b49a0;
case 0x6b49a2:c.instructions+=8;goto B6b49a2;
case 0x6b49a3:c.instructions+=7;goto B6b49a3;
case 0x6b49a5:c.instructions+=6;goto B6b49a5;
case 0x6b49a8:c.instructions+=5;goto B6b49a8;
case 0x6b49ae:c.instructions+=4;goto B6b49ae;
case 0x6b49af:c.instructions+=3;goto B6b49af;
case 0x6b49b1:c.instructions+=2;goto B6b49b1;
case 0x6b49b8:c.instructions+=1;goto B6b49b8;
case 0x6b49b9:goto L6b49b9;
case 0x6b49bb:c.instructions+=2;goto B6b49bb;
case 0x6b49bd:c.instructions+=1;goto B6b49bd;
case 0x6b49bf:goto L6b49bf;
case 0x6b49c1:c.instructions+=3;goto B6b49c1;
case 0x6b49c7:c.instructions+=2;goto B6b49c7;
case 0x6b49cd:c.instructions+=1;goto B6b49cd;
case 0x6b49cf:goto L6b49cf;
case 0x6b49d3:goto L6b49d3;
case 0x6b49d6:c.instructions+=2;goto B6b49d6;
case 0x6b49d7:c.instructions+=1;goto B6b49d7;
case 0x6b49d9:goto L6b49d9;
case 0x6b49df:c.instructions+=3;goto B6b49df;
case 0x6b49e3:c.instructions+=2;goto B6b49e3;
case 0x6b49e5:c.instructions+=1;goto B6b49e5;
case 0x6b49eb:goto L6b49eb;
case 0x6b49f1:c.instructions+=4;goto B6b49f1;
case 0x6b49f2:c.instructions+=3;goto B6b49f2;
case 0x6b49f5:c.instructions+=2;goto B6b49f5;
case 0x6b49f8:c.instructions+=1;goto B6b49f8;
case 0x6b49f9:goto L6b49f9;
case 0x6b49fc:c.instructions+=3;goto B6b49fc;
case 0x6b49fe:c.instructions+=2;goto B6b49fe;
case 0x6b4a00:c.instructions+=1;goto B6b4a00;
case 0x6b4a06:goto L6b4a06;
case 0x6b4a09:c.instructions+=4;goto B6b4a09;
case 0x6b4a0d:c.instructions+=3;goto B6b4a0d;
case 0x6b4a0f:c.instructions+=2;goto B6b4a0f;
case 0x6b4a12:c.instructions+=1;goto B6b4a12;
case 0x6b4a18:goto L6b4a18;
case 0x6b4a1b:goto L6b4a1b;
case 0x6b4a1f:c.instructions+=2;goto B6b4a1f;
case 0x6b4a21:c.instructions+=1;goto B6b4a21;
case 0x6b4a23:goto L6b4a23;
case 0x6b4a26:c.instructions+=1;goto B6b4a26;
case 0x6b4a29:goto L6b4a29;
case 0x6b4a2c:c.instructions+=3;goto B6b4a2c;
case 0x6b4a2e:c.instructions+=2;goto B6b4a2e;
case 0x6b4a32:c.instructions+=1;goto B6b4a32;
case 0x6b4a34:goto L6b4a34;
case 0x6b4a36:c.instructions+=3;goto B6b4a36;
case 0x6b4a3b:c.instructions+=2;goto B6b4a3b;
case 0x6b4a3c:c.instructions+=1;goto B6b4a3c;
case 0x6b4a41:goto L6b4a41;
case 0x6b4a43:c.instructions+=1;goto B6b4a43;
case 0x6b4a45:goto L6b4a45;
case 0x6b4a48:c.instructions+=4;goto B6b4a48;
case 0x6b4a4b:c.instructions+=3;goto B6b4a4b;
case 0x6b4a4d:c.instructions+=2;goto B6b4a4d;
case 0x6b4a50:c.instructions+=1;goto B6b4a50;
case 0x6b4a52:goto L6b4a52;
case 0x6b4a55:c.instructions+=6;goto B6b4a55;
case 0x6b4a57:c.instructions+=5;goto B6b4a57;
case 0x6b4a5a:c.instructions+=4;goto B6b4a5a;
case 0x6b4a5d:c.instructions+=3;goto B6b4a5d;
case 0x6b4a60:c.instructions+=2;goto B6b4a60;
case 0x6b4a63:c.instructions+=1;goto B6b4a63;
case 0x6b4a66:goto L6b4a66;
case 0x6b4a68:c.instructions+=3;goto B6b4a68;
case 0x6b4a6b:c.instructions+=2;goto B6b4a6b;
case 0x6b4a6e:c.instructions+=1;goto B6b4a6e;
case 0x6b4a70:goto L6b4a70;
case 0x6b4a72:c.instructions+=1;goto B6b4a72;
case 0x6b4a74:goto L6b4a74;
case 0x6b4a77:c.instructions+=4;goto B6b4a77;
case 0x6b4a7a:c.instructions+=3;goto B6b4a7a;
case 0x6b4a7d:c.instructions+=2;goto B6b4a7d;
case 0x6b4a80:c.instructions+=1;goto B6b4a80;
case 0x6b4a82:goto L6b4a82;
case 0x6b4a85:c.instructions+=2;goto B6b4a85;
case 0x6b4a88:c.instructions+=1;goto B6b4a88;
case 0x6b4a8a:goto L6b4a8a;
case 0x6b4a8d:c.instructions+=4;goto B6b4a8d;
case 0x6b4a90:c.instructions+=3;goto B6b4a90;
case 0x6b4a94:c.instructions+=2;goto B6b4a94;
case 0x6b4a97:c.instructions+=1;goto B6b4a97;
case 0x6b4a99:goto L6b4a99;
case 0x6b4a9c:c.instructions+=2;goto B6b4a9c;
case 0x6b4a9f:c.instructions+=1;goto B6b4a9f;
case 0x6b4aa1:goto L6b4aa1;
case 0x6b4aa4:goto L6b4aa4;
case 0x6b4aa7:c.instructions+=3;goto B6b4aa7;
case 0x6b4aaa:c.instructions+=2;goto B6b4aaa;
case 0x6b4aad:c.instructions+=1;goto B6b4aad;
case 0x6b4ab3:goto L6b4ab3;
case 0x6b4ab7:c.instructions+=2;goto B6b4ab7;
case 0x6b4aba:c.instructions+=1;goto B6b4aba;
case 0x6b4ac0:goto L6b4ac0;
case 0x6b4ac3:c.instructions+=4;goto B6b4ac3;
case 0x6b4ac6:c.instructions+=3;goto B6b4ac6;
case 0x6b4ac7:c.instructions+=2;goto B6b4ac7;
case 0x6b4ac8:c.instructions+=1;goto B6b4ac8;
case 0x6b4aca:goto L6b4aca;
case 0x6b4acc:c.instructions+=2;goto B6b4acc;
case 0x6b4acd:c.instructions+=1;goto B6b4acd;
case 0x6b4acf:goto L6b4acf;
case 0x6b4ad1:goto L6b4ad1;
case 0x6b4ad2:c.instructions+=2;goto B6b4ad2;
case 0x6b4ad3:c.instructions+=1;goto B6b4ad3;
case 0x6b4ad4:goto L6b4ad4;
case 0x6b4ad6:c.instructions+=10;goto B6b4ad6;
case 0x6b4ad7:c.instructions+=9;goto B6b4ad7;
case 0x6b4ad9:c.instructions+=8;goto B6b4ad9;
case 0x6b4ada:c.instructions+=7;goto B6b4ada;
case 0x6b4adc:c.instructions+=6;goto B6b4adc;
case 0x6b4add:c.instructions+=5;goto B6b4add;
case 0x6b4ae0:c.instructions+=4;goto B6b4ae0;
case 0x6b4ae1:c.instructions+=3;goto B6b4ae1;
case 0x6b4ae4:c.instructions+=2;goto B6b4ae4;
case 0x6b4ae6:c.instructions+=1;goto B6b4ae6;
case 0x6b4ae8:goto L6b4ae8;
case 0x6b4ae9:c.instructions+=3;goto B6b4ae9;
case 0x6b4aeb:c.instructions+=2;goto B6b4aeb;
case 0x6b4aee:c.instructions+=1;goto B6b4aee;
case 0x6b4af0:goto L6b4af0;
case 0x6b4af3:c.instructions+=5;goto B6b4af3;
case 0x6b4af6:c.instructions+=4;goto B6b4af6;
case 0x6b4af9:c.instructions+=3;goto B6b4af9;
case 0x6b4afc:c.instructions+=2;goto B6b4afc;
case 0x6b4afe:c.instructions+=1;goto B6b4afe;
case 0x6b4b03:goto L6b4b03;
case 0x6b4b05:c.instructions+=1;goto B6b4b05;
case 0x6b4b07:goto L6b4b07;
case 0x6b4b08:c.instructions+=2;goto B6b4b08;
case 0x6b4b0b:c.instructions+=1;goto B6b4b0b;
case 0x6b4b0d:goto L6b4b0d;
case 0x6b4b0f:goto L6b4b0f;
case 0x6b4b10:goto L6b4b10;
case 0x6b4b11:c.instructions+=3;goto B6b4b11;
case 0x6b4b12:c.instructions+=2;goto B6b4b12;
case 0x6b4b13:c.instructions+=1;goto B6b4b13;
case 0x6b4b16:goto L6b4b16;
case 0x6b4b18:c.instructions+=2;goto B6b4b18;
case 0x6b4b19:c.instructions+=1;goto B6b4b19;
case 0x6b4b1b:goto L6b4b1b;
case 0x6b4b1d:c.instructions+=9;goto B6b4b1d;
case 0x6b4b1e:c.instructions+=8;goto B6b4b1e;
case 0x6b4b20:c.instructions+=7;goto B6b4b20;
case 0x6b4b23:c.instructions+=6;goto B6b4b23;
case 0x6b4b26:c.instructions+=5;goto B6b4b26;
case 0x6b4b27:c.instructions+=4;goto B6b4b27;
case 0x6b4b28:c.instructions+=3;goto B6b4b28;
case 0x6b4b29:c.instructions+=2;goto B6b4b29;
case 0x6b4b2c:c.instructions+=1;goto B6b4b2c;
case 0x6b4b31:goto L6b4b31;
case 0x6b4b34:c.instructions+=4;goto B6b4b34;
case 0x6b4b37:c.instructions+=3;goto B6b4b37;
case 0x6b4b39:c.instructions+=2;goto B6b4b39;
case 0x6b4b3c:c.instructions+=1;goto B6b4b3c;
case 0x6b4b42:goto L6b4b42;
case 0x6b4b44:c.instructions+=5;goto B6b4b44;
case 0x6b4b46:c.instructions+=4;goto B6b4b46;
case 0x6b4b4c:c.instructions+=3;goto B6b4b4c;
case 0x6b4b4e:c.instructions+=2;goto B6b4b4e;
case 0x6b4b51:c.instructions+=1;goto B6b4b51;
case 0x6b4b57:goto L6b4b57;
case 0x6b4b5a:c.instructions+=6;goto B6b4b5a;
case 0x6b4b5c:c.instructions+=5;goto B6b4b5c;
case 0x6b4b5e:c.instructions+=4;goto B6b4b5e;
case 0x6b4b62:c.instructions+=3;goto B6b4b62;
case 0x6b4b64:c.instructions+=2;goto B6b4b64;
case 0x6b4b67:c.instructions+=1;goto B6b4b67;
case 0x6b4b6d:goto L6b4b6d;
case 0x6b4b71:goto L6b4b71;
case 0x6b4b75:c.instructions+=2;goto B6b4b75;
case 0x6b4b77:c.instructions+=1;goto B6b4b77;
case 0x6b4b7d:goto L6b4b7d;
case 0x6b4b80:c.instructions+=4;goto B6b4b80;
case 0x6b4b83:c.instructions+=3;goto B6b4b83;
case 0x6b4b86:c.instructions+=2;goto B6b4b86;
case 0x6b4b89:c.instructions+=1;goto B6b4b89;
case 0x6b4b8c:goto L6b4b8c;
case 0x6b4b8e:c.instructions+=4;goto B6b4b8e;
case 0x6b4b91:c.instructions+=3;goto B6b4b91;
case 0x6b4b93:c.instructions+=2;goto B6b4b93;
case 0x6b4b96:c.instructions+=1;goto B6b4b96;
case 0x6b4b98:goto L6b4b98;
case 0x6b4b9b:c.instructions+=3;goto B6b4b9b;
case 0x6b4b9e:c.instructions+=2;goto B6b4b9e;
case 0x6b4ba0:c.instructions+=1;goto B6b4ba0;
case 0x6b4ba2:goto L6b4ba2;
case 0x6b4ba5:c.instructions+=1;goto B6b4ba5;
case 0x6b4ba7:goto L6b4ba7;
case 0x6b4bab:c.instructions+=1;goto B6b4bab;
case 0x6b4bad:goto L6b4bad;
case 0x6b4bb4:goto L6b4bb4;
case 0x6b4bb5:c.instructions+=2;goto B6b4bb5;
case 0x6b4bb8:c.instructions+=1;goto B6b4bb8;
case 0x6b4bba:goto L6b4bba;
case 0x6b4bbd:goto L6b4bbd;
case 0x6b4bc0:c.instructions+=2;goto B6b4bc0;
case 0x6b4bc3:c.instructions+=1;goto B6b4bc3;
case 0x6b4bc5:goto L6b4bc5;
case 0x6b4bc9:c.instructions+=1;goto B6b4bc9;
case 0x6b4bcb:goto L6b4bcb;
case 0x6b4bce:c.instructions+=2;goto B6b4bce;
case 0x6b4bd2:c.instructions+=1;goto B6b4bd2;
case 0x6b4bd5:goto L6b4bd5;
case 0x6b4bd8:c.instructions+=8;goto B6b4bd8;
case 0x6b4bdb:c.instructions+=7;goto B6b4bdb;
case 0x6b4bde:c.instructions+=6;goto B6b4bde;
case 0x6b4be1:c.instructions+=5;goto B6b4be1;
case 0x6b4be4:c.instructions+=4;goto B6b4be4;
case 0x6b4be7:c.instructions+=3;goto B6b4be7;
case 0x6b4bea:c.instructions+=2;goto B6b4bea;
case 0x6b4bed:c.instructions+=1;goto B6b4bed;
case 0x6b4bef:goto L6b4bef;
case 0x6b4bf1:goto L6b4bf1;
case 0x6b4bf4:c.instructions+=4;goto B6b4bf4;
case 0x6b4bf6:c.instructions+=3;goto B6b4bf6;
case 0x6b4bf8:c.instructions+=2;goto B6b4bf8;
case 0x6b4bfa:c.instructions+=1;goto B6b4bfa;
case 0x6b4bfc:goto L6b4bfc;
case 0x6b4bff:c.instructions+=2;goto B6b4bff;
case 0x6b4c02:c.instructions+=1;goto B6b4c02;
case 0x6b4c04:goto L6b4c04;
case 0x6b4c05:c.instructions+=2;goto B6b4c05;
case 0x6b4c07:c.instructions+=1;goto B6b4c07;
case 0x6b4c09:goto L6b4c09;
case 0x6b4c0b:c.instructions+=1;goto B6b4c0b;
case 0x6b4c0d:goto L6b4c0d;
case 0x6b4c10:c.instructions+=1;goto B6b4c10;
case 0x6b4c12:goto L6b4c12;
case 0x6b4c15:c.instructions+=2;goto B6b4c15;
case 0x6b4c18:c.instructions+=1;goto B6b4c18;
case 0x6b4c1a:goto L6b4c1a;
case 0x6b4c1d:c.instructions+=4;goto B6b4c1d;
case 0x6b4c20:c.instructions+=3;goto B6b4c20;
case 0x6b4c24:c.instructions+=2;goto B6b4c24;
case 0x6b4c27:c.instructions+=1;goto B6b4c27;
case 0x6b4c29:goto L6b4c29;
case 0x6b4c2c:goto L6b4c2c;
case 0x6b4c2f:c.instructions+=6;goto B6b4c2f;
case 0x6b4c31:c.instructions+=5;goto B6b4c31;
case 0x6b4c34:c.instructions+=4;goto B6b4c34;
case 0x6b4c37:c.instructions+=3;goto B6b4c37;
case 0x6b4c3a:c.instructions+=2;goto B6b4c3a;
case 0x6b4c3d:c.instructions+=1;goto B6b4c3d;
case 0x6b4c43:goto L6b4c43;
case 0x6b4c46:c.instructions+=1;goto B6b4c46;
case 0x6b4c47:goto L6b4c47;
case 0x6b4c4a:c.instructions+=2;goto B6b4c4a;
case 0x6b4c4d:c.instructions+=1;goto B6b4c4d;
case 0x6b4c53:goto L6b4c53;
case 0x6b4c55:goto L6b4c55;
case 0x6b4c56:c.instructions+=4;goto B6b4c56;
case 0x6b4c57:c.instructions+=3;goto B6b4c57;
case 0x6b4c58:c.instructions+=2;goto B6b4c58;
case 0x6b4c59:c.instructions+=1;goto B6b4c59;
case 0x6b4c5c:goto L6b4c5c;
case 0x6b4c61:c.instructions+=4;goto B6b4c61;
case 0x6b4c66:c.instructions+=3;goto B6b4c66;
case 0x6b4c68:c.instructions+=2;goto B6b4c68;
case 0x6b4c6b:c.instructions+=1;goto B6b4c6b;
case 0x6b4c70:goto L6b4c70;
case 0x6b4c73:c.instructions+=2;goto B6b4c73;
case 0x6b4c78:c.instructions+=1;goto B6b4c78;
case 0x6b4c7a:goto L6b4c7a;
case 0x6b4c7c:c.instructions+=4;goto B6b4c7c;
case 0x6b4c7d:c.instructions+=3;goto B6b4c7d;
case 0x6b4c7f:c.instructions+=2;goto B6b4c7f;
case 0x6b4c82:c.instructions+=1;goto B6b4c82;
case 0x6b4c84:goto L6b4c84;
case 0x6b4c85:goto L6b4c85;
case 0x6b4c88:c.instructions+=4;goto B6b4c88;
case 0x6b4c8b:c.instructions+=3;goto B6b4c8b;
case 0x6b4c8e:c.instructions+=2;goto B6b4c8e;
case 0x6b4c91:c.instructions+=1;goto B6b4c91;
case 0x6b4c93:goto L6b4c93;
case 0x6b4c96:c.instructions+=8;goto B6b4c96;
case 0x6b4c99:c.instructions+=7;goto B6b4c99;
case 0x6b4c9c:c.instructions+=6;goto B6b4c9c;
case 0x6b4c9f:c.instructions+=5;goto B6b4c9f;
case 0x6b4ca2:c.instructions+=4;goto B6b4ca2;
case 0x6b4ca5:c.instructions+=3;goto B6b4ca5;
case 0x6b4ca8:c.instructions+=2;goto B6b4ca8;
case 0x6b4cab:c.instructions+=1;goto B6b4cab;
case 0x6b4cae:goto L6b4cae;
case 0x6b4caf:c.instructions+=2;goto B6b4caf;
case 0x6b4cb2:c.instructions+=1;goto B6b4cb2;
case 0x6b4cb4:goto L6b4cb4;
case 0x6b4cb5:goto L6b4cb5;
case 0x6b4cb7:c.instructions+=2;goto B6b4cb7;
case 0x6b4cb8:c.instructions+=1;goto B6b4cb8;
case 0x6b4cb9:goto L6b4cb9;
case 0x6b4cbb:c.instructions+=15;goto B6b4cbb;
case 0x6b4cbc:c.instructions+=14;goto B6b4cbc;
case 0x6b4cbe:c.instructions+=13;goto B6b4cbe;
case 0x6b4cc1:c.instructions+=12;goto B6b4cc1;
case 0x6b4cc4:c.instructions+=11;goto B6b4cc4;
case 0x6b4cc5:c.instructions+=10;goto B6b4cc5;
case 0x6b4cc7:c.instructions+=9;goto B6b4cc7;
case 0x6b4cc9:c.instructions+=8;goto B6b4cc9;
case 0x6b4ccc:c.instructions+=7;goto B6b4ccc;
case 0x6b4cce:c.instructions+=6;goto B6b4cce;
case 0x6b4cd1:c.instructions+=5;goto B6b4cd1;
case 0x6b4cd4:c.instructions+=4;goto B6b4cd4;
case 0x6b4cd7:c.instructions+=3;goto B6b4cd7;
case 0x6b4cda:c.instructions+=2;goto B6b4cda;
case 0x6b4cdd:c.instructions+=1;goto B6b4cdd;
case 0x6b4ce3:goto L6b4ce3;
case 0x6b4ce4:c.instructions+=3;goto B6b4ce4;
case 0x6b4ce5:c.instructions+=2;goto B6b4ce5;
case 0x6b4ce7:c.instructions+=1;goto B6b4ce7;
case 0x6b4ce8:goto L6b4ce8;
case 0x6b4ceb:c.instructions+=3;goto B6b4ceb;
case 0x6b4cee:c.instructions+=2;goto B6b4cee;
case 0x6b4cf0:c.instructions+=1;goto B6b4cf0;
case 0x6b4cf6:goto L6b4cf6;
case 0x6b4cf8:c.instructions+=2;goto B6b4cf8;
case 0x6b4cfa:c.instructions+=1;goto B6b4cfa;
case 0x6b4d00:goto L6b4d00;
case 0x6b4d05:c.instructions+=10;goto B6b4d05;
case 0x6b4d07:c.instructions+=9;goto B6b4d07;
case 0x6b4d0a:c.instructions+=8;goto B6b4d0a;
case 0x6b4d0c:c.instructions+=7;goto B6b4d0c;
case 0x6b4d0e:c.instructions+=6;goto B6b4d0e;
case 0x6b4d11:c.instructions+=5;goto B6b4d11;
case 0x6b4d14:c.instructions+=4;goto B6b4d14;
case 0x6b4d17:c.instructions+=3;goto B6b4d17;
case 0x6b4d1a:c.instructions+=2;goto B6b4d1a;
case 0x6b4d1c:c.instructions+=1;goto B6b4d1c;
case 0x6b4d22:goto L6b4d22;
case 0x6b4d25:c.instructions+=2;goto B6b4d25;
case 0x6b4d28:c.instructions+=1;goto B6b4d28;
case 0x6b4d2b:goto L6b4d2b;
case 0x6b4d2e:c.instructions+=2;goto B6b4d2e;
case 0x6b4d30:c.instructions+=1;goto B6b4d30;
case 0x6b4d36:goto L6b4d36;
case 0x6b4d39:c.instructions+=1;goto B6b4d39;
case 0x6b4d3c:goto L6b4d3c;
case 0x6b4d3e:c.instructions+=2;goto B6b4d3e;
case 0x6b4d41:c.instructions+=1;goto B6b4d41;
case 0x6b4d47:goto L6b4d47;
case 0x6b4d4a:c.instructions+=1;goto B6b4d4a;
case 0x6b4d4d:goto L6b4d4d;
case 0x6b4d50:c.instructions+=8;goto B6b4d50;
case 0x6b4d53:c.instructions+=7;goto B6b4d53;
case 0x6b4d56:c.instructions+=6;goto B6b4d56;
case 0x6b4d59:c.instructions+=5;goto B6b4d59;
case 0x6b4d5c:c.instructions+=4;goto B6b4d5c;
case 0x6b4d5e:c.instructions+=3;goto B6b4d5e;
case 0x6b4d61:c.instructions+=2;goto B6b4d61;
case 0x6b4d64:c.instructions+=1;goto B6b4d64;
case 0x6b4d66:goto L6b4d66;
case 0x6b4d68:c.instructions+=1;goto B6b4d68;
case 0x6b4d6a:goto L6b4d6a;
case 0x6b4d6d:c.instructions+=5;goto B6b4d6d;
case 0x6b4d70:c.instructions+=4;goto B6b4d70;
case 0x6b4d71:c.instructions+=3;goto B6b4d71;
case 0x6b4d74:c.instructions+=2;goto B6b4d74;
case 0x6b4d77:c.instructions+=1;goto B6b4d77;
case 0x6b4d79:goto L6b4d79;
case 0x6b4d7c:goto L6b4d7c;
case 0x6b4d7e:c.instructions+=3;goto B6b4d7e;
case 0x6b4d7f:c.instructions+=2;goto B6b4d7f;
case 0x6b4d82:c.instructions+=1;goto B6b4d82;
case 0x6b4d84:goto L6b4d84;
case 0x6b4d87:c.instructions+=4;goto B6b4d87;
case 0x6b4d89:c.instructions+=3;goto B6b4d89;
case 0x6b4d8c:c.instructions+=2;goto B6b4d8c;
case 0x6b4d90:c.instructions+=1;goto B6b4d90;
case 0x6b4d92:goto L6b4d92;
case 0x6b4d95:c.instructions+=1;goto B6b4d95;
case 0x6b4d97:goto L6b4d97;
case 0x6b4d99:c.instructions+=3;goto B6b4d99;
case 0x6b4d9f:c.instructions+=2;goto B6b4d9f;
case 0x6b4da5:c.instructions+=1;goto B6b4da5;
case 0x6b4da7:goto L6b4da7;
case 0x6b4da9:c.instructions+=2;goto B6b4da9;
case 0x6b4dac:c.instructions+=1;goto B6b4dac;
case 0x6b4dae:goto L6b4dae;
case 0x6b4db1:c.instructions+=6;goto B6b4db1;
case 0x6b4db4:c.instructions+=5;goto B6b4db4;
case 0x6b4db7:c.instructions+=4;goto B6b4db7;
case 0x6b4dba:c.instructions+=3;goto B6b4dba;
case 0x6b4dbd:c.instructions+=2;goto B6b4dbd;
case 0x6b4dc1:c.instructions+=1;goto B6b4dc1;
case 0x6b4dc3:goto L6b4dc3;
case 0x6b4dc6:c.instructions+=1;goto B6b4dc6;
case 0x6b4dc8:goto L6b4dc8;
case 0x6b4dc9:c.instructions+=2;goto B6b4dc9;
case 0x6b4dcc:c.instructions+=1;goto B6b4dcc;
case 0x6b4dce:goto L6b4dce;
case 0x6b4dd0:goto L6b4dd0;
case 0x6b4dd2:c.instructions+=1;goto B6b4dd2;
case 0x6b4dd3:goto L6b4dd3;
case 0x6b4dd6:c.instructions+=2;goto B6b4dd6;
case 0x6b4dd9:c.instructions+=1;goto B6b4dd9;
case 0x6b4ddf:goto L6b4ddf;
case 0x6b4de2:c.instructions+=1;goto B6b4de2;
case 0x6b4de4:goto L6b4de4;
case 0x6b4de7:c.instructions+=1;goto B6b4de7;
case 0x6b4de9:goto L6b4de9;
case 0x6b4dec:c.instructions+=1;goto B6b4dec;
case 0x6b4dee:goto L6b4dee;
case 0x6b4df1:c.instructions+=1;goto B6b4df1;
case 0x6b4df3:goto L6b4df3;
case 0x6b4df5:c.instructions+=4;goto B6b4df5;
case 0x6b4df8:c.instructions+=3;goto B6b4df8;
case 0x6b4dfb:c.instructions+=2;goto B6b4dfb;
case 0x6b4dfe:c.instructions+=1;goto B6b4dfe;
case 0x6b4e04:goto L6b4e04;
case 0x6b4e08:c.instructions+=2;goto B6b4e08;
case 0x6b4e0b:c.instructions+=1;goto B6b4e0b;
case 0x6b4e11:goto L6b4e11;
case 0x6b4e14:c.instructions+=4;goto B6b4e14;
case 0x6b4e15:c.instructions+=3;goto B6b4e15;
case 0x6b4e18:c.instructions+=2;goto B6b4e18;
case 0x6b4e1b:c.instructions+=1;goto B6b4e1b;
case 0x6b4e21:goto L6b4e21;
case 0x6b4e22:c.instructions+=1;goto B6b4e22;
case 0x6b4e23:goto L6b4e23;
case 0x6b4e26:c.instructions+=6;goto B6b4e26;
case 0x6b4e29:c.instructions+=5;goto B6b4e29;
case 0x6b4e2b:c.instructions+=4;goto B6b4e2b;
case 0x6b4e2d:c.instructions+=3;goto B6b4e2d;
case 0x6b4e2e:c.instructions+=2;goto B6b4e2e;
case 0x6b4e2f:c.instructions+=1;goto B6b4e2f;
case 0x6b4e32:goto L6b4e32;
case 0x6b4e34:c.instructions+=13;goto B6b4e34;
case 0x6b4e35:c.instructions+=12;goto B6b4e35;
case 0x6b4e37:c.instructions+=11;goto B6b4e37;
case 0x6b4e3d:c.instructions+=10;goto B6b4e3d;
case 0x6b4e3e:c.instructions+=9;goto B6b4e3e;
case 0x6b4e3f:c.instructions+=8;goto B6b4e3f;
case 0x6b4e40:c.instructions+=7;goto B6b4e40;
case 0x6b4e42:c.instructions+=6;goto B6b4e42;
case 0x6b4e44:c.instructions+=5;goto B6b4e44;
case 0x6b4e47:c.instructions+=4;goto B6b4e47;
case 0x6b4e48:c.instructions+=3;goto B6b4e48;
case 0x6b4e4a:c.instructions+=2;goto B6b4e4a;
case 0x6b4e4c:c.instructions+=1;goto B6b4e4c;
case 0x6b4e52:goto L6b4e52;
case 0x6b4e54:goto L6b4e54;
case 0x6b4e55:c.instructions+=2;goto B6b4e55;
case 0x6b4e57:c.instructions+=1;goto B6b4e57;
case 0x6b4e5d:goto L6b4e5d;
case 0x6b4e5f:goto L6b4e5f;
case 0x6b4e60:c.instructions+=4;goto B6b4e60;
case 0x6b4e62:c.instructions+=3;goto B6b4e62;
case 0x6b4e64:c.instructions+=2;goto B6b4e64;
case 0x6b4e67:c.instructions+=1;goto B6b4e67;
case 0x6b4e6c:goto L6b4e6c;
case 0x6b4e6e:goto L6b4e6e;
case 0x6b4e73:c.instructions+=3;goto B6b4e73;
case 0x6b4e75:c.instructions+=2;goto B6b4e75;
case 0x6b4e78:c.instructions+=1;goto B6b4e78;
case 0x6b4e7d:goto L6b4e7d;
case 0x6b4e81:c.instructions+=5;goto B6b4e81;
case 0x6b4e83:c.instructions+=4;goto B6b4e83;
case 0x6b4e84:c.instructions+=3;goto B6b4e84;
case 0x6b4e86:c.instructions+=2;goto B6b4e86;
case 0x6b4e89:c.instructions+=1;goto B6b4e89;
case 0x6b4e8b:goto L6b4e8b;
case 0x6b4e8e:c.instructions+=1;goto B6b4e8e;
case 0x6b4e91:goto L6b4e91;
case 0x6b4e93:c.instructions+=5;goto B6b4e93;
case 0x6b4e96:c.instructions+=4;goto B6b4e96;
case 0x6b4e99:c.instructions+=3;goto B6b4e99;
case 0x6b4e9c:c.instructions+=2;goto B6b4e9c;
case 0x6b4e9f:c.instructions+=1;goto B6b4e9f;
case 0x6b4ea1:goto L6b4ea1;
case 0x6b4ea6:c.instructions+=1;goto B6b4ea6;
case 0x6b4ea8:goto L6b4ea8;
case 0x6b4eab:c.instructions+=2;goto B6b4eab;
case 0x6b4eae:c.instructions+=1;goto B6b4eae;
case 0x6b4eb0:goto L6b4eb0;
case 0x6b4eb2:c.instructions+=6;goto B6b4eb2;
case 0x6b4eb5:c.instructions+=5;goto B6b4eb5;
case 0x6b4ebc:c.instructions+=4;goto B6b4ebc;
case 0x6b4ec3:c.instructions+=3;goto B6b4ec3;
case 0x6b4eca:c.instructions+=2;goto B6b4eca;
case 0x6b4ed1:c.instructions+=1;goto B6b4ed1;
case 0x6b4ed5:goto L6b4ed5;
case 0x6b4ed8:c.instructions+=4;goto B6b4ed8;
case 0x6b4edb:c.instructions+=3;goto B6b4edb;
case 0x6b4ede:c.instructions+=2;goto B6b4ede;
case 0x6b4ee1:c.instructions+=1;goto B6b4ee1;
case 0x6b4ee3:goto L6b4ee3;
case 0x6b4ee9:c.instructions+=5;goto B6b4ee9;
case 0x6b4eef:c.instructions+=4;goto B6b4eef;
case 0x6b4ef3:c.instructions+=3;goto B6b4ef3;
case 0x6b4ef6:c.instructions+=2;goto B6b4ef6;
case 0x6b4ef8:c.instructions+=1;goto B6b4ef8;
case 0x6b4efe:goto L6b4efe;
case 0x6b4f01:c.instructions+=1;goto B6b4f01;
case 0x6b4f03:goto L6b4f03;
case 0x6b4f09:c.instructions+=3;goto B6b4f09;
case 0x6b4f0c:c.instructions+=2;goto B6b4f0c;
case 0x6b4f0f:c.instructions+=1;goto B6b4f0f;
case 0x6b4f11:goto L6b4f11;
case 0x6b4f16:c.instructions+=1;goto B6b4f16;
case 0x6b4f1b:goto L6b4f1b;
case 0x6b4f1e:c.instructions+=3;goto B6b4f1e;
case 0x6b4f24:c.instructions+=2;goto B6b4f24;
case 0x6b4f26:c.instructions+=1;goto B6b4f26;
case 0x6b4f29:goto L6b4f29;
case 0x6b4f2d:c.instructions+=3;goto B6b4f2d;
case 0x6b4f2f:c.instructions+=2;goto B6b4f2f;
case 0x6b4f32:c.instructions+=1;goto B6b4f32;
case 0x6b4f38:goto L6b4f38;
case 0x6b4f3c:c.instructions+=1;goto B6b4f3c;
case 0x6b4f42:goto L6b4f42;
case 0x6b4f45:c.instructions+=3;goto B6b4f45;
case 0x6b4f47:c.instructions+=2;goto B6b4f47;
case 0x6b4f4a:c.instructions+=1;goto B6b4f4a;
case 0x6b4f50:goto L6b4f50;
case 0x6b4f52:c.instructions+=3;goto B6b4f52;
case 0x6b4f58:c.instructions+=2;goto B6b4f58;
case 0x6b4f5b:c.instructions+=1;goto B6b4f5b;
case 0x6b4f61:goto L6b4f61;
case 0x6b4f64:c.instructions+=3;goto B6b4f64;
case 0x6b4f67:c.instructions+=2;goto B6b4f67;
case 0x6b4f6b:c.instructions+=1;goto B6b4f6b;
case 0x6b4f6d:goto L6b4f6d;
case 0x6b4f71:c.instructions+=1;goto B6b4f71;
case 0x6b4f73:goto L6b4f73;
case 0x6b4f76:c.instructions+=1;goto B6b4f76;
case 0x6b4f78:goto L6b4f78;
case 0x6b4f7b:c.instructions+=6;goto B6b4f7b;
case 0x6b4f7d:c.instructions+=5;goto B6b4f7d;
case 0x6b4f7f:c.instructions+=4;goto B6b4f7f;
case 0x6b4f80:c.instructions+=3;goto B6b4f80;
case 0x6b4f81:c.instructions+=2;goto B6b4f81;
case 0x6b4f83:c.instructions+=1;goto B6b4f83;
case 0x6b4f85:goto L6b4f85;
case 0x6b4f88:c.instructions+=6;goto B6b4f88;
case 0x6b4f8e:c.instructions+=5;goto B6b4f8e;
case 0x6b4f90:c.instructions+=4;goto B6b4f90;
case 0x6b4f92:c.instructions+=3;goto B6b4f92;
case 0x6b4f94:c.instructions+=2;goto B6b4f94;
case 0x6b4f95:c.instructions+=1;goto B6b4f95;
case 0x6b4f96:goto L6b4f96;
case 0x6b4f99:c.instructions+=2;goto B6b4f99;
case 0x6b4f9b:c.instructions+=1;goto B6b4f9b;
case 0x6b4f9d:goto L6b4f9d;
case 0x6b4fa3:c.instructions+=1;goto B6b4fa3;
case 0x6b4fa5:goto L6b4fa5;
case 0x6b4fa6:c.instructions+=4;goto B6b4fa6;
case 0x6b4fa7:c.instructions+=3;goto B6b4fa7;
case 0x6b4fad:c.instructions+=2;goto B6b4fad;
case 0x6b4faf:c.instructions+=1;goto B6b4faf;
case 0x6b4fb1:goto L6b4fb1;
case 0x6b4fb4:goto L6b4fb4;
case 0x6b4fb6:c.instructions+=4;goto B6b4fb6;
case 0x6b4fb9:c.instructions+=3;goto B6b4fb9;
case 0x6b4fbb:c.instructions+=2;goto B6b4fbb;
case 0x6b4fc1:c.instructions+=1;goto B6b4fc1;
case 0x6b4fc3:goto L6b4fc3;
case 0x6b4fc9:c.instructions+=4;goto B6b4fc9;
case 0x6b4fcc:c.instructions+=3;goto B6b4fcc;
case 0x6b4fd0:c.instructions+=2;goto B6b4fd0;
case 0x6b4fd3:c.instructions+=1;goto B6b4fd3;
case 0x6b4fd5:goto L6b4fd5;
case 0x6b4fd8:c.instructions+=5;goto B6b4fd8;
case 0x6b4fda:c.instructions+=4;goto B6b4fda;
case 0x6b4fdd:c.instructions+=3;goto B6b4fdd;
case 0x6b4fe0:c.instructions+=2;goto B6b4fe0;
case 0x6b4fe4:c.instructions+=1;goto B6b4fe4;
case 0x6b4fe6:goto L6b4fe6;
case 0x6b4fea:goto L6b4fea;
case 0x6b4fed:c.instructions+=6;goto B6b4fed;
case 0x6b4ff2:c.instructions+=5;goto B6b4ff2;
case 0x6b4ff5:c.instructions+=4;goto B6b4ff5;
case 0x6b4ff8:c.instructions+=3;goto B6b4ff8;
case 0x6b4ffa:c.instructions+=2;goto B6b4ffa;
case 0x6b4ffd:c.instructions+=1;goto B6b4ffd;
default:missing_instruction(c.pc);}
B6b4004:L6b4004:{c.instructions+=3;NFSU2_TR(0x6b4004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4008:{NFSU2_TR(0x6b4008);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b400b:{NFSU2_TR(0x6b400b);
if(r1(R+518)){{goto L6b4096;}}
}
B6b4011:L6b4011:{c.instructions+=13;NFSU2_TR(0x6b4011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4014:{NFSU2_TR(0x6b4014);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4017:{NFSU2_TR(0x6b4017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4019:{NFSU2_TR(0x6b4019);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b401c:{NFSU2_TR(0x6b401c);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b401f:{NFSU2_TR(0x6b401f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4020:{NFSU2_TR(0x6b4020);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4021:{NFSU2_TR(0x6b4021);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b4024:{NFSU2_TR(0x6b4024);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b4027:{NFSU2_TR(0x6b4027);
__builtin_memmove((R+4),(R+24),4);
}
B6b4029:{NFSU2_TR(0x6b4029);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b402c:{NFSU2_TR(0x6b402c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b402f:{NFSU2_TR(0x6b402f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4034ull));
TAIL_STATIC(0x699c39u,699);
}
B6b4034:L6b4034:{c.instructions+=3;NFSU2_TR(0x6b4034);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4037:{NFSU2_TR(0x6b4037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b403a:{NFSU2_TR(0x6b403a);
if(r1(R+518)){{goto L6b4195;}}
}
B6b4040:L6b4040:{c.instructions+=5;NFSU2_TR(0x6b4040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4046:{NFSU2_TR(0x6b4046);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b4049:{NFSU2_TR(0x6b4049);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b404b:{NFSU2_TR(0x6b404b);
u8 U[8];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4051:{NFSU2_TR(0x6b4051);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4078;}}
}
B6b4053:L6b4053:{c.instructions+=11;NFSU2_TR(0x6b4053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4059:{NFSU2_TR(0x6b4059);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b405c:{NFSU2_TR(0x6b405c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b405f:{NFSU2_TR(0x6b405f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b4062:{NFSU2_TR(0x6b4062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4068:{NFSU2_TR(0x6b4068);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b406b:{NFSU2_TR(0x6b406b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b406d:{NFSU2_TR(0x6b406d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b406e:{NFSU2_TR(0x6b406e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6b4074:{NFSU2_TR(0x6b4074);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6b4076:{NFSU2_TR(0x6b4076);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4053u);}goto L6b4053;}}
}
B6b4078:L6b4078:{c.instructions+=7;NFSU2_TR(0x6b4078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b407b:{NFSU2_TR(0x6b407b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b407e:{NFSU2_TR(0x6b407e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b407f:{NFSU2_TR(0x6b407f);
__builtin_memmove((R+4),(R+0),4);
}
B6b4081:{NFSU2_TR(0x6b4081);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4085:{NFSU2_TR(0x6b4085);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4088:{NFSU2_TR(0x6b4088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b408dull));
TAIL_STATIC(0x699765u,699);
}
B6b408d:L6b408d:{c.instructions+=3;NFSU2_TR(0x6b408d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4090:{NFSU2_TR(0x6b4090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4093:{NFSU2_TR(0x6b4093);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4096:L6b4096:{c.instructions+=2;NFSU2_TR(0x6b4096);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b4099:{NFSU2_TR(0x6b4099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b409eull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b409e:L6b409e:{c.instructions+=2;NFSU2_TR(0x6b409e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b40a0:{NFSU2_TR(0x6b40a0);
if(r1(R+518)){{goto L6b4144;}}
}
B6b40a6:L6b40a6:{c.instructions+=8;NFSU2_TR(0x6b40a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b40aa:{NFSU2_TR(0x6b40aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b40b0:{NFSU2_TR(0x6b40b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b40b3:{NFSU2_TR(0x6b40b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b40b6:{NFSU2_TR(0x6b40b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b40b8:{NFSU2_TR(0x6b40b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b40bb:{NFSU2_TR(0x6b40bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b40be:{NFSU2_TR(0x6b40be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b40e4;}}
}
B6b40c0:L6b40c0:{c.instructions+=9;NFSU2_TR(0x6b40c0);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b40c3:{NFSU2_TR(0x6b40c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b40c4:{NFSU2_TR(0x6b40c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b40c5:{NFSU2_TR(0x6b40c5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b40c8:{NFSU2_TR(0x6b40c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b40cb:{NFSU2_TR(0x6b40cb);
__builtin_memmove((R+4),(R+24),4);
}
B6b40cd:{NFSU2_TR(0x6b40cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b40d0:{NFSU2_TR(0x6b40d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b40d3:{NFSU2_TR(0x6b40d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b40d8ull));
TAIL_STATIC(0x699c39u,699);
}
B6b40d8:L6b40d8:{c.instructions+=3;NFSU2_TR(0x6b40d8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b40db:{NFSU2_TR(0x6b40db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b40de:{NFSU2_TR(0x6b40de);
if(r1(R+518)){{goto L6b4195;}}
}
B6b40e4:L6b40e4:{c.instructions+=5;NFSU2_TR(0x6b40e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b40ea:{NFSU2_TR(0x6b40ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b40ed:{NFSU2_TR(0x6b40ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b40ef:{NFSU2_TR(0x6b40ef);
u8 U[8];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b40f5:{NFSU2_TR(0x6b40f5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b411f;}}
}
B6b40f7:L6b40f7:{c.instructions+=12;NFSU2_TR(0x6b40f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b40fd:{NFSU2_TR(0x6b40fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4100:{NFSU2_TR(0x6b4100);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4103:{NFSU2_TR(0x6b4103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4106:{NFSU2_TR(0x6b4106);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b4109:{NFSU2_TR(0x6b4109);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b410f:{NFSU2_TR(0x6b410f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4112:{NFSU2_TR(0x6b4112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b4114:{NFSU2_TR(0x6b4114);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b4115:{NFSU2_TR(0x6b4115);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b411b:{NFSU2_TR(0x6b411b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b411d:{NFSU2_TR(0x6b411d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b40f7u);}goto L6b40f7;}}
}
B6b411f:L6b411f:{c.instructions+=3;NFSU2_TR(0x6b411f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4123:{NFSU2_TR(0x6b4123);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4127:{NFSU2_TR(0x6b4127);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4144;}}
}
B6b4129:L6b4129:{c.instructions+=6;NFSU2_TR(0x6b4129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b412c:{NFSU2_TR(0x6b412c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b412f:{NFSU2_TR(0x6b412f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4132:{NFSU2_TR(0x6b4132);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4133:{NFSU2_TR(0x6b4133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4136:{NFSU2_TR(0x6b4136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b413bull));
TAIL_STATIC(0x699765u,699);
}
B6b413b:L6b413b:{c.instructions+=3;NFSU2_TR(0x6b413b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b413e:{NFSU2_TR(0x6b413e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4141:{NFSU2_TR(0x6b4141);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4144:L6b4144:{c.instructions+=2;NFSU2_TR(0x6b4144);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4148:{NFSU2_TR(0x6b4148);
if(r1(R+518)){{goto L6b4195;}}
}
B6b414a:L6b414a:{c.instructions+=5;NFSU2_TR(0x6b414a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b414c:{NFSU2_TR(0x6b414c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b414f:{NFSU2_TR(0x6b414f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b4152:{NFSU2_TR(0x6b4152);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6b4155:{NFSU2_TR(0x6b4155);
if(r1(R+512)){TAIL_STATIC(0x6b3fa3u,6b3);}
}
B6b415b:L6b415b:{c.instructions+=1;NFSU2_TR(0x6b415b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b415d:L6b415d:{c.instructions+=3;NFSU2_TR(0x6b415d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b4161:{NFSU2_TR(0x6b4161);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4163:{NFSU2_TR(0x6b4163);
if(r1(R+518)){{goto L6b416b;}}
}
B6b4165:L6b4165:{c.instructions+=2;NFSU2_TR(0x6b4165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4168:{NFSU2_TR(0x6b4168);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b416b:L6b416b:{c.instructions+=3;NFSU2_TR(0x6b416b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b416f:{NFSU2_TR(0x6b416f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4171:{NFSU2_TR(0x6b4171);
if(r1(R+518)){{goto L6b4179;}}
}
B6b4173:L6b4173:{c.instructions+=2;NFSU2_TR(0x6b4173);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4176:{NFSU2_TR(0x6b4176);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4179:L6b4179:{c.instructions+=3;NFSU2_TR(0x6b4179);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b417c:{NFSU2_TR(0x6b417c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6b417f:{NFSU2_TR(0x6b417f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b415du);}goto L6b415d;}}
}
B6b4181:L6b4181:{c.instructions+=7;NFSU2_TR(0x6b4181);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4183:{NFSU2_TR(0x6b4183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b4184:{NFSU2_TR(0x6b4184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b418a:{NFSU2_TR(0x6b418a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4190:{NFSU2_TR(0x6b4190);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b4192:{NFSU2_TR(0x6b4192);
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
B6b4193:{NFSU2_TR(0x6b4193);
{goto L6b4197;}
}
B6b4195:L6b4195:{c.instructions+=1;NFSU2_TR(0x6b4195);
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
B6b4197:L6b4197:{c.instructions+=5;NFSU2_TR(0x6b4197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4198:{NFSU2_TR(0x6b4198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b4199:{NFSU2_TR(0x6b4199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b419a:{NFSU2_TR(0x6b419a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b419b:{NFSU2_TR(0x6b419b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b419e:L6b419e:{c.instructions+=13;NFSU2_TR(0x6b419e);
__builtin_memmove((R+28),(R+28),4);
}
B6b41a0:{NFSU2_TR(0x6b41a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b41a1:{NFSU2_TR(0x6b41a1);
__builtin_memmove((R+20),(R+16),4);
}
B6b41a3:{NFSU2_TR(0x6b41a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B6b41a9:{NFSU2_TR(0x6b41a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b41aa:{NFSU2_TR(0x6b41aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b41ab:{NFSU2_TR(0x6b41ab);
__builtin_memmove((R+24),(R+4),4);
}
B6b41ad:{NFSU2_TR(0x6b41ad);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b41af:{NFSU2_TR(0x6b41af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b41b0:{NFSU2_TR(0x6b41b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b41b3:{NFSU2_TR(0x6b41b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b41b6:{NFSU2_TR(0x6b41b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b41b9:{NFSU2_TR(0x6b41b9);
{goto L6b41bd;}
}
B6b41bb:L6b41bb:{c.instructions+=1;NFSU2_TR(0x6b41bb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b41bd:L6b41bd:{c.instructions+=5;NFSU2_TR(0x6b41bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b41c3:{NFSU2_TR(0x6b41c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b41c6:{NFSU2_TR(0x6b41c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b41c9:{NFSU2_TR(0x6b41c9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b41cb:{NFSU2_TR(0x6b41cb);
if(r1(R+518)){{goto L6b432c;}}
}
B6b41d1:L6b41d1:{c.instructions+=2;NFSU2_TR(0x6b41d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b41d4:{NFSU2_TR(0x6b41d4);
if(r1(R+518)){{goto L6b432c;}}
}
B6b41da:L6b41da:{c.instructions+=3;NFSU2_TR(0x6b41da);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b41e0:{NFSU2_TR(0x6b41e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b41e3:{NFSU2_TR(0x6b41e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b432c;}}
}
B6b41e9:L6b41e9:{c.instructions+=6;NFSU2_TR(0x6b41e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b41ef:{NFSU2_TR(0x6b41ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b41f2:{NFSU2_TR(0x6b41f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b41f5:{NFSU2_TR(0x6b41f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b41f7:{NFSU2_TR(0x6b41f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b41fa:{NFSU2_TR(0x6b41fa);
if(r1(R+518)){{goto L6b431a;}}
}
B6b4200:L6b4200:{c.instructions+=3;NFSU2_TR(0x6b4200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4202:{NFSU2_TR(0x6b4202);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4204:{NFSU2_TR(0x6b4204);
if(r1(R+518)){{goto L6b431a;}}
}
B6b420a:L6b420a:{c.instructions+=8;NFSU2_TR(0x6b420a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b420e:{NFSU2_TR(0x6b420e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b4211:{NFSU2_TR(0x6b4211);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b4213:{NFSU2_TR(0x6b4213);
w4(R+4,u32(0-u32(r4(R+4))));
}
B6b4215:{NFSU2_TR(0x6b4215);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6b421a:{NFSU2_TR(0x6b421a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b421d:{NFSU2_TR(0x6b421d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4220:{NFSU2_TR(0x6b4220);
if(r1(R+518)){{goto L6b431a;}}
}
B6b4226:L6b4226:{c.instructions+=12;NFSU2_TR(0x6b4226);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4229:{NFSU2_TR(0x6b4229);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b422b:{NFSU2_TR(0x6b422b);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b422b);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b422b);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6b422e:{NFSU2_TR(0x6b422e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4234:{NFSU2_TR(0x6b4234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4237:{NFSU2_TR(0x6b4237);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b423a:{NFSU2_TR(0x6b423a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b423d:{NFSU2_TR(0x6b423d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b423f:{NFSU2_TR(0x6b423f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4242:{NFSU2_TR(0x6b4242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4245:{NFSU2_TR(0x6b4245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4248:{NFSU2_TR(0x6b4248);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b431a;}}
}
B6b424e:L6b424e:{c.instructions+=5;NFSU2_TR(0x6b424e);
__builtin_memmove((R+0),(R+8),4);
}
B6b4250:{NFSU2_TR(0x6b4250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4253:{NFSU2_TR(0x6b4253);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4256:{NFSU2_TR(0x6b4256);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4259:{NFSU2_TR(0x6b4259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b425c:L6b425c:{c.instructions+=3;NFSU2_TR(0x6b425c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b425f:{NFSU2_TR(0x6b425f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6b4261:{NFSU2_TR(0x6b4261);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b42f3;}}
}
B6b4267:L6b4267:{c.instructions+=5;NFSU2_TR(0x6b4267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b426a:{NFSU2_TR(0x6b426a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6b426d:{NFSU2_TR(0x6b426d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b4270:{NFSU2_TR(0x6b4270);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6b4272:{NFSU2_TR(0x6b4272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4275:L6b4275:{c.instructions+=2;NFSU2_TR(0x6b4275);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4279:{NFSU2_TR(0x6b4279);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b42e6;}}
}
B6b427b:L6b427b:{c.instructions+=8;NFSU2_TR(0x6b427b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b427e:{NFSU2_TR(0x6b427e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4281:{NFSU2_TR(0x6b4281);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4284:{NFSU2_TR(0x6b4284);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4287:{NFSU2_TR(0x6b4287);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b428a:{NFSU2_TR(0x6b428a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b428d:{NFSU2_TR(0x6b428d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6b428f:{NFSU2_TR(0x6b428f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4292:L6b4292:{c.instructions+=3;NFSU2_TR(0x6b4292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4294:{NFSU2_TR(0x6b4294);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4297:{NFSU2_TR(0x6b4297);
if(r1(R+518)){{goto L6b42a7;}}
}
B6b4299:L6b4299:{c.instructions+=5;NFSU2_TR(0x6b4299);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b429c:{NFSU2_TR(0x6b429c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b429f:{NFSU2_TR(0x6b429f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b42a2:{NFSU2_TR(0x6b42a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b42a5:{NFSU2_TR(0x6b42a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b42d8;}}
}
B6b42a7:L6b42a7:{c.instructions+=3;NFSU2_TR(0x6b42a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b42aa:{NFSU2_TR(0x6b42aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b42ad:{NFSU2_TR(0x6b42ad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b42d8;}}
}
B6b42af:L6b42af:{c.instructions+=4;NFSU2_TR(0x6b42af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b42b5:{NFSU2_TR(0x6b42b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b42b8:{NFSU2_TR(0x6b42b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b42ba:{NFSU2_TR(0x6b42ba);
if(r1(R+518)){{goto L6b42d8;}}
}
B6b42bc:L6b42bc:{c.instructions+=3;NFSU2_TR(0x6b42bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b42be:{NFSU2_TR(0x6b42be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b42c0:{NFSU2_TR(0x6b42c0);
if(r1(R+518)){{goto L6b42d8;}}
}
B6b42c2:L6b42c2:{c.instructions+=3;NFSU2_TR(0x6b42c2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b42c7:{NFSU2_TR(0x6b42c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b42cc:{NFSU2_TR(0x6b42cc);
if(r1(R+518)){{goto L6b42d8;}}
}
B6b42ce:L6b42ce:{c.instructions+=2;NFSU2_TR(0x6b42ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b42d5:{NFSU2_TR(0x6b42d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b42d8:L6b42d8:{c.instructions+=3;NFSU2_TR(0x6b42d8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b42db:{NFSU2_TR(0x6b42db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b42de:{NFSU2_TR(0x6b42de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4292u);}goto L6b4292;}}
}
B6b42e0:L6b42e0:{c.instructions+=2;NFSU2_TR(0x6b42e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b42e3:{NFSU2_TR(0x6b42e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b42e6:L6b42e6:{c.instructions+=5;NFSU2_TR(0x6b42e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b42e9:{NFSU2_TR(0x6b42e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b42ec:{NFSU2_TR(0x6b42ec);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6b42ee:{NFSU2_TR(0x6b42ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b42f1:{NFSU2_TR(0x6b42f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4275u);}goto L6b4275;}}
}
B6b42f3:L6b42f3:{c.instructions+=4;NFSU2_TR(0x6b42f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b42f6:{NFSU2_TR(0x6b42f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b42f9:{NFSU2_TR(0x6b42f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b42fc:{NFSU2_TR(0x6b42fc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b425cu);}goto L6b425c;}}
}
B6b4302:L6b4302:{c.instructions+=2;NFSU2_TR(0x6b4302);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4306:{NFSU2_TR(0x6b4306);
if(r1(R+518)){{goto L6b431a;}}
}
B6b4308:L6b4308:{c.instructions+=3;NFSU2_TR(0x6b4308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b430b:{NFSU2_TR(0x6b430b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b430d:{NFSU2_TR(0x6b430d);
if(r1(R+518)){{goto L6b439e;}}
}
B6b4313:L6b4313:{c.instructions+=4;NFSU2_TR(0x6b4313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b4315:{NFSU2_TR(0x6b4315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b4317:{NFSU2_TR(0x6b4317);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b4318:{NFSU2_TR(0x6b4318);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b431a:L6b431a:{c.instructions+=4;NFSU2_TR(0x6b431a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b431d:{NFSU2_TR(0x6b431d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4320:{NFSU2_TR(0x6b4320);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4326:{NFSU2_TR(0x6b4326);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b41e9u);}goto L6b41e9;}}
}
B6b432c:L6b432c:{c.instructions+=3;NFSU2_TR(0x6b432c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b432f:{NFSU2_TR(0x6b432f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x6ull))));
}
B6b4333:{NFSU2_TR(0x6b4333);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b41bbu);}goto L6b41bb;}}
}
B6b4339:L6b4339:{c.instructions+=3;NFSU2_TR(0x6b4339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b433d:{NFSU2_TR(0x6b433d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4344:{NFSU2_TR(0x6b4344);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4906;}}
}
B6b434a:L6b434a:{c.instructions+=5;NFSU2_TR(0x6b434a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4350:{NFSU2_TR(0x6b4350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4353:{NFSU2_TR(0x6b4353);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4356:{NFSU2_TR(0x6b4356);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4358:{NFSU2_TR(0x6b4358);
if(r1(R+518)){{goto L6b48f4;}}
}
B6b435e:L6b435e:{c.instructions+=2;NFSU2_TR(0x6b435e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b4361:{NFSU2_TR(0x6b4361);
if(r1(R+518)){{goto L6b48f4;}}
}
B6b4367:L6b4367:{c.instructions+=4;NFSU2_TR(0x6b4367);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b436a:{NFSU2_TR(0x6b436a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b436e:{NFSU2_TR(0x6b436e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4370:{NFSU2_TR(0x6b4370);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b48f4;}}
}
B6b4376:L6b4376:{c.instructions+=3;NFSU2_TR(0x6b4376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4379:{NFSU2_TR(0x6b4379);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b437c:{NFSU2_TR(0x6b437c);
__builtin_memmove((R+28),(R+4),4);
}
B6b437e:L6b437e:{c.instructions+=4;NFSU2_TR(0x6b437e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b4380:{NFSU2_TR(0x6b4380);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b4383:{NFSU2_TR(0x6b4383);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4387:{NFSU2_TR(0x6b4387);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b461b;}}
}
B6b438d:L6b438d:{c.instructions+=4;NFSU2_TR(0x6b438d);
__builtin_memmove((R+12),(R+4),4);
}
B6b438f:{NFSU2_TR(0x6b438f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4396:{NFSU2_TR(0x6b4396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4399:{NFSU2_TR(0x6b4399);
{goto L6b461e;}
}
B6b439e:L6b439e:{c.instructions+=11;NFSU2_TR(0x6b439e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b43a1:{NFSU2_TR(0x6b43a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b43a4:{NFSU2_TR(0x6b43a4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b43a5:{NFSU2_TR(0x6b43a5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b43a6:{NFSU2_TR(0x6b43a6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b43a8:{NFSU2_TR(0x6b43a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b43ab:{NFSU2_TR(0x6b43ab);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b43ac:{NFSU2_TR(0x6b43ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b43af:{NFSU2_TR(0x6b43af);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b43b0:{NFSU2_TR(0x6b43b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b43b3:{NFSU2_TR(0x6b43b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b441a;}}
}
B6b43b5:L6b43b5:{c.instructions+=4;NFSU2_TR(0x6b43b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b43b8:{NFSU2_TR(0x6b43b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b43bb:{NFSU2_TR(0x6b43bb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b43bd:{NFSU2_TR(0x6b43bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b440f;}}
}
B6b43bf:L6b43bf:{c.instructions+=7;NFSU2_TR(0x6b43bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b43c2:{NFSU2_TR(0x6b43c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b43c5:{NFSU2_TR(0x6b43c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b43c8:{NFSU2_TR(0x6b43c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b43cb:{NFSU2_TR(0x6b43cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b43ce:{NFSU2_TR(0x6b43ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b43d1:{NFSU2_TR(0x6b43d1);
{goto L6b43d6;}
}
B6b43d3:L6b43d3:{c.instructions+=1;NFSU2_TR(0x6b43d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b43d6:L6b43d6:{c.instructions+=3;NFSU2_TR(0x6b43d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b43d8:{NFSU2_TR(0x6b43d8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b43da:{NFSU2_TR(0x6b43da);
if(r1(R+518)){{goto L6b43e7;}}
}
B6b43dc:L6b43dc:{c.instructions+=4;NFSU2_TR(0x6b43dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b43df:{NFSU2_TR(0x6b43df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b43e2:{NFSU2_TR(0x6b43e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b43e5:{NFSU2_TR(0x6b43e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4407;}}
}
B6b43e7:L6b43e7:{c.instructions+=4;NFSU2_TR(0x6b43e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b43ea:{NFSU2_TR(0x6b43ea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b43ec:{NFSU2_TR(0x6b43ec);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b43ee:{NFSU2_TR(0x6b43ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b43fb;}}
}
B6b43f0:L6b43f0:{c.instructions+=2;NFSU2_TR(0x6b43f0);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b43f4:{NFSU2_TR(0x6b43f4);
if(r1(R+518)){{goto L6b43fb;}}
}
B6b43f6:L6b43f6:{c.instructions+=3;NFSU2_TR(0x6b43f6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b43f7:{NFSU2_TR(0x6b43f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6b43f9:{NFSU2_TR(0x6b43f9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b43f0u);}goto L6b43f0;}}
}
B6b43fb:L6b43fb:{c.instructions+=2;NFSU2_TR(0x6b43fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b43fd:{NFSU2_TR(0x6b43fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4407;}}
}
B6b43ff:L6b43ff:{c.instructions+=3;NFSU2_TR(0x6b43ff);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4403:{NFSU2_TR(0x6b4403);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4404:{NFSU2_TR(0x6b4404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4407:L6b4407:{c.instructions+=3;NFSU2_TR(0x6b4407);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6b440a:{NFSU2_TR(0x6b440a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b440d:{NFSU2_TR(0x6b440d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b43d3u);}goto L6b43d3;}}
}
B6b440f:L6b440f:{c.instructions+=4;NFSU2_TR(0x6b440f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4412:{NFSU2_TR(0x6b4412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4415:{NFSU2_TR(0x6b4415);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4418:{NFSU2_TR(0x6b4418);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b43b5u);}goto L6b43b5;}}
}
B6b441a:L6b441a:{c.instructions+=2;NFSU2_TR(0x6b441a);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b441c:{NFSU2_TR(0x6b441c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4421ull));
TAIL_STATIC(0x699317u,699);
}
B6b4421:L6b4421:{c.instructions+=2;NFSU2_TR(0x6b4421);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4423:{NFSU2_TR(0x6b4423);
if(r1(R+518)){{goto L6b4431;}}
}
B6b4425:L6b4425:{c.instructions+=2;NFSU2_TR(0x6b4425);
__builtin_memmove((R+4),(R+0),4);
}
B6b4427:{NFSU2_TR(0x6b4427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b442cull));
TAIL_STATIC(0x698e7du,698);
}
B6b442c:L6b442c:{c.instructions+=2;NFSU2_TR(0x6b442c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b442f:{NFSU2_TR(0x6b442f);
{goto L6b4435;}
}
B6b4431:L6b4431:{c.instructions+=1;NFSU2_TR(0x6b4431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4435:L6b4435:{c.instructions+=2;NFSU2_TR(0x6b4435);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4439:{NFSU2_TR(0x6b4439);
if(r1(R+518)){{goto L6b4611;}}
}
B6b443f:L6b443f:{c.instructions+=9;NFSU2_TR(0x6b443f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4442:{NFSU2_TR(0x6b4442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4445:{NFSU2_TR(0x6b4445);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4447:{NFSU2_TR(0x6b4447);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b444a:{NFSU2_TR(0x6b444a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b444f:{NFSU2_TR(0x6b444f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b4452:{NFSU2_TR(0x6b4452);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6b4457:{NFSU2_TR(0x6b4457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4458:{NFSU2_TR(0x6b4458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b445dull));
TAIL_STATIC(0x699362u,699);
}
B6b445d:L6b445d:{c.instructions+=4;NFSU2_TR(0x6b445d);
__builtin_memmove((R+28),(R+0),4);
}
B6b445f:{NFSU2_TR(0x6b445f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b4461:{NFSU2_TR(0x6b4461);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4464:{NFSU2_TR(0x6b4464);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b4982;}}
}
B6b446a:L6b446a:{c.instructions+=4;NFSU2_TR(0x6b446a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b446d:{NFSU2_TR(0x6b446d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4470:{NFSU2_TR(0x6b4470);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4473:{NFSU2_TR(0x6b4473);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b4476:L6b4476:{c.instructions+=1;NFSU2_TR(0x6b4476);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b4478;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4476u);}goto L6b4476;}
}
B6b4478:L6b4478:{c.instructions+=4;NFSU2_TR(0x6b4478);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b447a:{NFSU2_TR(0x6b447a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b447d:{NFSU2_TR(0x6b447d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4480:{NFSU2_TR(0x6b4480);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b45e0;}}
}
B6b4486:L6b4486:{c.instructions+=1;NFSU2_TR(0x6b4486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4489:L6b4489:{c.instructions+=3;NFSU2_TR(0x6b4489);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b448c:{NFSU2_TR(0x6b448c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b448f:{NFSU2_TR(0x6b448f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b45d1;}}
}
B6b4495:L6b4495:{c.instructions+=11;NFSU2_TR(0x6b4495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4498:{NFSU2_TR(0x6b4498);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b449b:{NFSU2_TR(0x6b449b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b449e:{NFSU2_TR(0x6b449e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b44a1:{NFSU2_TR(0x6b44a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b44a4:{NFSU2_TR(0x6b44a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b44a7:{NFSU2_TR(0x6b44a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b44aa:{NFSU2_TR(0x6b44aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b44ad:{NFSU2_TR(0x6b44ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b44b0:{NFSU2_TR(0x6b44b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b44b2:{NFSU2_TR(0x6b44b2);
if(r1(R+518)){{goto L6b44c0;}}
}
B6b44b4:L6b44b4:{c.instructions+=3;NFSU2_TR(0x6b44b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b44b7:{NFSU2_TR(0x6b44b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b44ba:{NFSU2_TR(0x6b44ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b45ba;}}
}
B6b44c0:L6b44c0:{c.instructions+=11;NFSU2_TR(0x6b44c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b44c3:{NFSU2_TR(0x6b44c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b44c6:{NFSU2_TR(0x6b44c6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b44c8:{NFSU2_TR(0x6b44c8);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b44c8);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b44c8);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6b44cb:{NFSU2_TR(0x6b44cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b44ce:{NFSU2_TR(0x6b44ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b44d1:{NFSU2_TR(0x6b44d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b44d4:{NFSU2_TR(0x6b44d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b44d7:{NFSU2_TR(0x6b44d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b44da:{NFSU2_TR(0x6b44da);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b44dd:{NFSU2_TR(0x6b44dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4520;}}
}
B6b44df:L6b44df:{c.instructions+=4;NFSU2_TR(0x6b44df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b44e5:{NFSU2_TR(0x6b44e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b44e7:{NFSU2_TR(0x6b44e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B6b44ea:{NFSU2_TR(0x6b44ea);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4611;}}
}
B6b44f0:L6b44f0:{c.instructions+=13;NFSU2_TR(0x6b44f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x304ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b44f7:{NFSU2_TR(0x6b44f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b44f8:{NFSU2_TR(0x6b44f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6b44fa:{NFSU2_TR(0x6b44fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b44fd:{NFSU2_TR(0x6b44fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4503:{NFSU2_TR(0x6b4503);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4507:{NFSU2_TR(0x6b4507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b450b:{NFSU2_TR(0x6b450b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b450e:{NFSU2_TR(0x6b450e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4511:{NFSU2_TR(0x6b4511);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4514:{NFSU2_TR(0x6b4514);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4517:{NFSU2_TR(0x6b4517);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b451a:{NFSU2_TR(0x6b451a);
if(r1(R+518)){{goto L6b4611;}}
}
B6b4520:L6b4520:{c.instructions+=7;NFSU2_TR(0x6b4520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4523:{NFSU2_TR(0x6b4523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4526:{NFSU2_TR(0x6b4526);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4529:{NFSU2_TR(0x6b4529);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b452c:{NFSU2_TR(0x6b452c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b452f:{NFSU2_TR(0x6b452f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4532:{NFSU2_TR(0x6b4532);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4583;}}
}
B6b4534:L6b4534:{c.instructions+=3;NFSU2_TR(0x6b4534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b453a:{NFSU2_TR(0x6b453a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
}
B6b453d:{NFSU2_TR(0x6b453d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4611;}}
}
B6b4543:L6b4543:{c.instructions+=19;NFSU2_TR(0x6b4543);
u8 U[16];
w4(U+0,u32(u32(u32(0x304ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6b454a:{NFSU2_TR(0x6b454a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b454b:{NFSU2_TR(0x6b454b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4551:{NFSU2_TR(0x6b4551);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4554:{NFSU2_TR(0x6b4554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4557:{NFSU2_TR(0x6b4557);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b455a:{NFSU2_TR(0x6b455a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b455d:{NFSU2_TR(0x6b455d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4560:{NFSU2_TR(0x6b4560);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4563:{NFSU2_TR(0x6b4563);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4566:{NFSU2_TR(0x6b4566);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4569:{NFSU2_TR(0x6b4569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b456f:{NFSU2_TR(0x6b456f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4572:{NFSU2_TR(0x6b4572);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4575:{NFSU2_TR(0x6b4575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4578:{NFSU2_TR(0x6b4578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b457b:{NFSU2_TR(0x6b457b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b457e:{NFSU2_TR(0x6b457e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b4581:{NFSU2_TR(0x6b4581);
{goto L6b458f;}
}
B6b4583:L6b4583:{c.instructions+=4;NFSU2_TR(0x6b4583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4586:{NFSU2_TR(0x6b4586);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4589:{NFSU2_TR(0x6b4589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b458c:{NFSU2_TR(0x6b458c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b458f:L6b458f:{c.instructions+=14;NFSU2_TR(0x6b458f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4592:{NFSU2_TR(0x6b4592);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4595:{NFSU2_TR(0x6b4595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4598:{NFSU2_TR(0x6b4598);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b459b:{NFSU2_TR(0x6b459b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b459e:{NFSU2_TR(0x6b459e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b45a1:{NFSU2_TR(0x6b45a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b45a4:{NFSU2_TR(0x6b45a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b45a7:{NFSU2_TR(0x6b45a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b45aa:{NFSU2_TR(0x6b45aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b45ad:{NFSU2_TR(0x6b45ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b45b0:{NFSU2_TR(0x6b45b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b45b3:{NFSU2_TR(0x6b45b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b45b6:{NFSU2_TR(0x6b45b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b45ba:L6b45ba:{c.instructions+=5;NFSU2_TR(0x6b45ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b45bd:{NFSU2_TR(0x6b45bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b45c0:{NFSU2_TR(0x6b45c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b45c3:{NFSU2_TR(0x6b45c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b45c6:{NFSU2_TR(0x6b45c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4495u);}goto L6b4495;}}
}
B6b45cc:L6b45cc:{c.instructions+=2;NFSU2_TR(0x6b45cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b45cf:{NFSU2_TR(0x6b45cf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b45d1:L6b45d1:{c.instructions+=4;NFSU2_TR(0x6b45d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b45d4:{NFSU2_TR(0x6b45d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b45d7:{NFSU2_TR(0x6b45d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b45da:{NFSU2_TR(0x6b45da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4489u);}goto L6b4489;}}
}
B6b45e0:L6b45e0:{c.instructions+=9;NFSU2_TR(0x6b45e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b45e6:{NFSU2_TR(0x6b45e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b45ec:{NFSU2_TR(0x6b45ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b45ee:{NFSU2_TR(0x6b45ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b45f1:{NFSU2_TR(0x6b45f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b45f3:{NFSU2_TR(0x6b45f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b45f9:{NFSU2_TR(0x6b45f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b45fb:{NFSU2_TR(0x6b45fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
}
B6b45fe:{NFSU2_TR(0x6b45fe);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4611;}}
}
B6b4600:L6b4600:{c.instructions+=4;NFSU2_TR(0x6b4600);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4607:{NFSU2_TR(0x6b4607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b4609:{NFSU2_TR(0x6b4609);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b460c:{NFSU2_TR(0x6b460c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b431au);}goto L6b431a;}
}
B6b4611:L6b4611:{c.instructions+=2;NFSU2_TR(0x6b4611);
w4(R+28,u32(0x8007000eull));
}
B6b4616:{NFSU2_TR(0x6b4616);
{goto L6b4982;}
}
B6b461b:L6b461b:{c.instructions+=1;NFSU2_TR(0x6b461b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b461e:L6b461e:{c.instructions+=3;NFSU2_TR(0x6b461e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b4621:{NFSU2_TR(0x6b4621);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6b4622:{NFSU2_TR(0x6b4622);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b437eu);}goto L6b437e;}}
}
B6b4628:L6b4628:{c.instructions+=2;NFSU2_TR(0x6b4628);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b462c:{NFSU2_TR(0x6b462c);
if(r1(R+518)){{goto L6b48f4;}}
}
B6b4632:L6b4632:{c.instructions+=6;NFSU2_TR(0x6b4632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4636:{NFSU2_TR(0x6b4636);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4638:{NFSU2_TR(0x6b4638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b4639:{NFSU2_TR(0x6b4639);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b463f:{NFSU2_TR(0x6b463f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4642:{NFSU2_TR(0x6b4642);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b46b2;}}
}
B6b4644:L6b4644:{c.instructions+=2;NFSU2_TR(0x6b4644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b464a:{NFSU2_TR(0x6b464a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B6b464d:L6b464d:{c.instructions+=4;NFSU2_TR(0x6b464d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b464f:{NFSU2_TR(0x6b464f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b4651:{NFSU2_TR(0x6b4651);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4653:{NFSU2_TR(0x6b4653);
if(r1(R+518)){{goto L6b46a1;}}
}
B6b4655:L6b4655:{c.instructions+=2;NFSU2_TR(0x6b4655);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b4657:{NFSU2_TR(0x6b4657);
if(r1(R+518)){{goto L6b46a1;}}
}
B6b4659:L6b4659:{c.instructions+=3;NFSU2_TR(0x6b4659);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b465c:{NFSU2_TR(0x6b465c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b465f:{NFSU2_TR(0x6b465f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b46a1;}}
}
B6b4661:L6b4661:{c.instructions+=2;NFSU2_TR(0x6b4661);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4664:{NFSU2_TR(0x6b4664);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4667:L6b4667:{c.instructions+=6;NFSU2_TR(0x6b4667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b466a:{NFSU2_TR(0x6b466a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b466c:{NFSU2_TR(0x6b466c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b466f:{NFSU2_TR(0x6b466f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b4672:{NFSU2_TR(0x6b4672);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4675:{NFSU2_TR(0x6b4675);
if(r1(R+518)){{goto L6b467b;}}
}
B6b4677:L6b4677:{c.instructions+=2;NFSU2_TR(0x6b4677);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4679:{NFSU2_TR(0x6b4679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4692;}}
}
B6b467b:L6b467b:{c.instructions+=2;NFSU2_TR(0x6b467b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b467f:{NFSU2_TR(0x6b467f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4920;}}
}
B6b4685:L6b4685:{c.instructions+=3;NFSU2_TR(0x6b4685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4688:{NFSU2_TR(0x6b4688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b468b:{NFSU2_TR(0x6b468b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4692:L6b4692:{c.instructions+=5;NFSU2_TR(0x6b4692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4695:{NFSU2_TR(0x6b4695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4698:{NFSU2_TR(0x6b4698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b469c:{NFSU2_TR(0x6b469c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b469f:{NFSU2_TR(0x6b469f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4667u);}goto L6b4667;}}
}
B6b46a1:L6b46a1:{c.instructions+=5;NFSU2_TR(0x6b46a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b46a4:{NFSU2_TR(0x6b46a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b46a7:{NFSU2_TR(0x6b46a7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6b46aa:{NFSU2_TR(0x6b46aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b46b0:{NFSU2_TR(0x6b46b0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b464du);}goto L6b464d;}}
}
B6b46b2:L6b46b2:{c.instructions+=3;NFSU2_TR(0x6b46b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b46b5:{NFSU2_TR(0x6b46b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b46b7:{NFSU2_TR(0x6b46b7);
if(r1(R+518)){{goto L6b4732;}}
}
B6b46b9:L6b46b9:{c.instructions+=3;NFSU2_TR(0x6b46b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b46bd:{NFSU2_TR(0x6b46bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b46c1:{NFSU2_TR(0x6b46c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4726;}}
}
B6b46c3:L6b46c3:{c.instructions+=2;NFSU2_TR(0x6b46c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b46c6:{NFSU2_TR(0x6b46c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b46c9:L6b46c9:{c.instructions+=4;NFSU2_TR(0x6b46c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b46cc:{NFSU2_TR(0x6b46cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b46ce:{NFSU2_TR(0x6b46ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b46d0:{NFSU2_TR(0x6b46d0);
if(r1(R+518)){{goto L6b4714;}}
}
B6b46d2:L6b46d2:{c.instructions+=2;NFSU2_TR(0x6b46d2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b46d5:{NFSU2_TR(0x6b46d5);
if(r1(R+518)){{goto L6b4714;}}
}
B6b46d7:L6b46d7:{c.instructions+=2;NFSU2_TR(0x6b46d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b46db:{NFSU2_TR(0x6b46db);
if(r1(R+518)){{goto L6b4714;}}
}
B6b46dd:L6b46dd:{c.instructions+=4;NFSU2_TR(0x6b46dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b46e0:{NFSU2_TR(0x6b46e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b46e4:{NFSU2_TR(0x6b46e4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b46e6:{NFSU2_TR(0x6b46e6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4714;}}
}
B6b46e8:L6b46e8:{c.instructions+=1;NFSU2_TR(0x6b46e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b46eb:L6b46eb:{c.instructions+=5;NFSU2_TR(0x6b46eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b46ed:{NFSU2_TR(0x6b46ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b46f0:{NFSU2_TR(0x6b46f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b46f3:{NFSU2_TR(0x6b46f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b46f6:{NFSU2_TR(0x6b46f6);
if(r1(R+518)){{goto L6b46fc;}}
}
B6b46f8:L6b46f8:{c.instructions+=2;NFSU2_TR(0x6b46f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b46fa:{NFSU2_TR(0x6b46fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4709;}}
}
B6b46fc:L6b46fc:{c.instructions+=2;NFSU2_TR(0x6b46fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x10ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b4700:{NFSU2_TR(0x6b4700);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4920;}}
}
B6b4706:L6b4706:{c.instructions+=1;NFSU2_TR(0x6b4706);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4709:L6b4709:{c.instructions+=4;NFSU2_TR(0x6b4709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b470c:{NFSU2_TR(0x6b470c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b470f:{NFSU2_TR(0x6b470f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6b4712:{NFSU2_TR(0x6b4712);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b46ebu);}goto L6b46eb;}}
}
B6b4714:L6b4714:{c.instructions+=5;NFSU2_TR(0x6b4714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4717:{NFSU2_TR(0x6b4717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b471a:{NFSU2_TR(0x6b471a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b471e:{NFSU2_TR(0x6b471e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4721:{NFSU2_TR(0x6b4721);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b46c9u);}goto L6b46c9;}}
}
B6b4723:L6b4723:{c.instructions+=1;NFSU2_TR(0x6b4723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4726:L6b4726:{c.instructions+=2;NFSU2_TR(0x6b4726);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b472a:{NFSU2_TR(0x6b472a);
if(r1(R+518)){{goto L6b48f4;}}
}
B6b4730:L6b4730:{c.instructions+=1;NFSU2_TR(0x6b4730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b4732:L6b4732:{c.instructions+=2;NFSU2_TR(0x6b4732);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4736:{NFSU2_TR(0x6b4736);
if(r1(R+518)){{goto L6b48f4;}}
}
B6b473c:L6b473c:{c.instructions+=2;NFSU2_TR(0x6b473c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b473e:{NFSU2_TR(0x6b473e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b48f4;}}
}
B6b4744:L6b4744:{c.instructions+=2;NFSU2_TR(0x6b4744);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xcull))));
}
B6b474b:{NFSU2_TR(0x6b474b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4927;}}
}
B6b4751:L6b4751:{c.instructions+=2;NFSU2_TR(0x6b4751);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4753:{NFSU2_TR(0x6b4753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4758ull));
TAIL_STATIC(0x699317u,699);
}
B6b4758:L6b4758:{c.instructions+=2;NFSU2_TR(0x6b4758);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b475a:{NFSU2_TR(0x6b475a);
if(r1(R+518)){{goto L6b4767;}}
}
B6b475c:L6b475c:{c.instructions+=2;NFSU2_TR(0x6b475c);
__builtin_memmove((R+4),(R+0),4);
}
B6b475e:{NFSU2_TR(0x6b475e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4763ull));
TAIL_STATIC(0x698e7du,698);
}
B6b4763:L6b4763:{c.instructions+=2;NFSU2_TR(0x6b4763);
__builtin_memmove((R+28),(R+0),4);
}
B6b4765:{NFSU2_TR(0x6b4765);
{goto L6b4769;}
}
B6b4767:L6b4767:{c.instructions+=1;NFSU2_TR(0x6b4767);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b4769:L6b4769:{c.instructions+=2;NFSU2_TR(0x6b4769);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b476b:{NFSU2_TR(0x6b476b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4770ull));
TAIL_STATIC(0x699317u,699);
}
B6b4770:L6b4770:{c.instructions+=2;NFSU2_TR(0x6b4770);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4772:{NFSU2_TR(0x6b4772);
if(r1(R+518)){{goto L6b4780;}}
}
B6b4774:L6b4774:{c.instructions+=2;NFSU2_TR(0x6b4774);
__builtin_memmove((R+4),(R+0),4);
}
B6b4776:{NFSU2_TR(0x6b4776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b477bull));
TAIL_STATIC(0x698e7du,698);
}
B6b477b:L6b477b:{c.instructions+=2;NFSU2_TR(0x6b477b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b477e:{NFSU2_TR(0x6b477e);
{goto L6b4784;}
}
B6b4780:L6b4780:{c.instructions+=1;NFSU2_TR(0x6b4780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4784:L6b4784:{c.instructions+=2;NFSU2_TR(0x6b4784);
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
B6b4786:{NFSU2_TR(0x6b4786);
if(r1(R+518)){{goto L6b492c;}}
}
B6b478c:L6b478c:{c.instructions+=2;NFSU2_TR(0x6b478c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b4790:{NFSU2_TR(0x6b4790);
if(r1(R+518)){{goto L6b492c;}}
}
B6b4796:L6b4796:{c.instructions+=3;NFSU2_TR(0x6b4796);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b479c:{NFSU2_TR(0x6b479c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b479f:{NFSU2_TR(0x6b479f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b492c;}}
}
B6b47a5:L6b47a5:{c.instructions+=18;NFSU2_TR(0x6b47a5);
u8 U[16];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6b47ac:{NFSU2_TR(0x6b47ac);
u8 U[16];
w4(U+0,u32(u32(u32(0x304ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6b47b3:{NFSU2_TR(0x6b47b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b47b6:{NFSU2_TR(0x6b47b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b47b9:{NFSU2_TR(0x6b47b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b47bd:{NFSU2_TR(0x6b47bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b47c4:{NFSU2_TR(0x6b47c4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b47c6:{NFSU2_TR(0x6b47c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b47c9:{NFSU2_TR(0x6b47c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b47cc:{NFSU2_TR(0x6b47cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b47cf:{NFSU2_TR(0x6b47cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b47d3:{NFSU2_TR(0x6b47d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b47da:{NFSU2_TR(0x6b47da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b47dd:{NFSU2_TR(0x6b47dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b47e4:{NFSU2_TR(0x6b47e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b47e7:{NFSU2_TR(0x6b47e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b47ea:{NFSU2_TR(0x6b47ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b47ed:{NFSU2_TR(0x6b47ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b484d;}}
}
B6b47ef:L6b47ef:{c.instructions+=5;NFSU2_TR(0x6b47ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b47f2:{NFSU2_TR(0x6b47f2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b47f9:{NFSU2_TR(0x6b47f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b47fd:{NFSU2_TR(0x6b47fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4801:{NFSU2_TR(0x6b4801);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4842;}}
}
B6b4803:L6b4803:{c.instructions+=10;NFSU2_TR(0x6b4803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4806:{NFSU2_TR(0x6b4806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4809:{NFSU2_TR(0x6b4809);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b480c:{NFSU2_TR(0x6b480c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b480f:{NFSU2_TR(0x6b480f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4812:{NFSU2_TR(0x6b4812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4814:{NFSU2_TR(0x6b4814);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4817:{NFSU2_TR(0x6b4817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b481a:{NFSU2_TR(0x6b481a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b481d:{NFSU2_TR(0x6b481d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4824;}}
}
B6b481f:L6b481f:{c.instructions+=2;NFSU2_TR(0x6b481f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4822:{NFSU2_TR(0x6b4822);
{goto L6b482d;}
}
B6b4824:L6b4824:{c.instructions+=3;NFSU2_TR(0x6b4824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4827:{NFSU2_TR(0x6b4827);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b4829:{NFSU2_TR(0x6b4829);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b482d;}}
}
B6b482b:L6b482b:{c.instructions+=1;NFSU2_TR(0x6b482b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b482d:L6b482d:{c.instructions+=6;NFSU2_TR(0x6b482d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4830:{NFSU2_TR(0x6b4830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4833:{NFSU2_TR(0x6b4833);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6b483a:{NFSU2_TR(0x6b483a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b483d:{NFSU2_TR(0x6b483d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b4840:{NFSU2_TR(0x6b4840);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4803u);}goto L6b4803;}}
}
B6b4842:L6b4842:{c.instructions+=4;NFSU2_TR(0x6b4842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4845:{NFSU2_TR(0x6b4845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4848:{NFSU2_TR(0x6b4848);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b484b:{NFSU2_TR(0x6b484b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b47efu);}goto L6b47ef;}}
}
B6b484d:L6b484d:{c.instructions+=6;NFSU2_TR(0x6b484d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b484f:{NFSU2_TR(0x6b484f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4851:{NFSU2_TR(0x6b4851);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4853:{NFSU2_TR(0x6b4853);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4858:{NFSU2_TR(0x6b4858);
__builtin_memmove((R+4),(R+28),4);
}
B6b485a:{NFSU2_TR(0x6b485a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b485full));
TAIL_STATIC(0x699362u,699);
}
B6b485f:L6b485f:{c.instructions+=3;NFSU2_TR(0x6b485f);
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
B6b4861:{NFSU2_TR(0x6b4861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4864:{NFSU2_TR(0x6b4864);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b4994;}}
}
B6b486a:L6b486a:{c.instructions+=6;NFSU2_TR(0x6b486a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b486d:{NFSU2_TR(0x6b486d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b486f:{NFSU2_TR(0x6b486f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4871:{NFSU2_TR(0x6b4871);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4873:{NFSU2_TR(0x6b4873);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4878:{NFSU2_TR(0x6b4878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b487dull));
TAIL_STATIC(0x699362u,699);
}
B6b487d:L6b487d:{c.instructions+=3;NFSU2_TR(0x6b487d);
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
B6b487f:{NFSU2_TR(0x6b487f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4882:{NFSU2_TR(0x6b4882);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b4994;}}
}
B6b4888:L6b4888:{c.instructions+=27;NFSU2_TR(0x6b4888);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b488b:{NFSU2_TR(0x6b488b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b488e:{NFSU2_TR(0x6b488e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4891:{NFSU2_TR(0x6b4891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b4893:{NFSU2_TR(0x6b4893);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4896:{NFSU2_TR(0x6b4896);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b4898:{NFSU2_TR(0x6b4898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b489b:{NFSU2_TR(0x6b489b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b48a2:{NFSU2_TR(0x6b48a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b48a5:{NFSU2_TR(0x6b48a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b48a7:{NFSU2_TR(0x6b48a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b48aa:{NFSU2_TR(0x6b48aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b48ac:{NFSU2_TR(0x6b48ac);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b48ae:{NFSU2_TR(0x6b48ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b48af:{NFSU2_TR(0x6b48af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b48b2:{NFSU2_TR(0x6b48b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b48b8:{NFSU2_TR(0x6b48b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b48bf:{NFSU2_TR(0x6b48bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b48c5:{NFSU2_TR(0x6b48c5);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b48cc:{NFSU2_TR(0x6b48cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b48d2:{NFSU2_TR(0x6b48d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b48d8:{NFSU2_TR(0x6b48d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b48de:{NFSU2_TR(0x6b48de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b48e1:{NFSU2_TR(0x6b48e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b48e4:{NFSU2_TR(0x6b48e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b48ea:{NFSU2_TR(0x6b48ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b48ed:{NFSU2_TR(0x6b48ed);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b48f4:L6b48f4:{c.instructions+=4;NFSU2_TR(0x6b48f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b48f7:{NFSU2_TR(0x6b48f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b48fa:{NFSU2_TR(0x6b48fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4900:{NFSU2_TR(0x6b4900);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b434au);}goto L6b434a;}}
}
B6b4906:L6b4906:{c.instructions+=5;NFSU2_TR(0x6b4906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b490c:{NFSU2_TR(0x6b490c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b490f:{NFSU2_TR(0x6b490f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6b4912:{NFSU2_TR(0x6b4912);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b4917:{NFSU2_TR(0x6b4917);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4933;}}
}
B6b4919:L6b4919:{c.instructions+=2;NFSU2_TR(0x6b4919);
w4(R+0,u32(0x80004005ull));
}
B6b491e:{NFSU2_TR(0x6b491e);
{goto L6b4999;}
}
B6b4920:L6b4920:{c.instructions+=2;NFSU2_TR(0x6b4920);
w4(R+28,u32(0x80004005ull));
}
B6b4925:{NFSU2_TR(0x6b4925);
{goto L6b4997;}
}
B6b4927:L6b4927:{c.instructions+=3;NFSU2_TR(0x6b4927);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b4929:{NFSU2_TR(0x6b4929);
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
B6b492a:{NFSU2_TR(0x6b492a);
{goto L6b4999;}
}
B6b492c:L6b492c:{c.instructions+=2;NFSU2_TR(0x6b492c);
w4(R+28,u32(0x8007000eull));
}
B6b4931:{NFSU2_TR(0x6b4931);
{goto L6b4997;}
}
B6b4933:L6b4933:{c.instructions+=2;NFSU2_TR(0x6b4933);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b4936:{NFSU2_TR(0x6b4936);
if(r1(R+512)){{goto L6b4953;}}
}
B6b4938:L6b4938:{c.instructions+=2;NFSU2_TR(0x6b4938);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6b493b:{NFSU2_TR(0x6b493b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b493e:L6b493e:{c.instructions+=7;NFSU2_TR(0x6b493e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4944:{NFSU2_TR(0x6b4944);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b4947:{NFSU2_TR(0x6b4947);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b494a:{NFSU2_TR(0x6b494a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6b494b:{NFSU2_TR(0x6b494b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6b494e:{NFSU2_TR(0x6b494e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b4951:{NFSU2_TR(0x6b4951);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b493eu);}goto L6b493e;}}
}
B6b4953:L6b4953:{c.instructions+=2;NFSU2_TR(0x6b4953);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4955:{NFSU2_TR(0x6b4955);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4977;}}
}
B6b4957:L6b4957:{c.instructions+=5;NFSU2_TR(0x6b4957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b495a:{NFSU2_TR(0x6b495a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b495c:{NFSU2_TR(0x6b495c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b495d:{NFSU2_TR(0x6b495d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b4963:{NFSU2_TR(0x6b4963);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6b4965:L6b4965:{c.instructions+=6;NFSU2_TR(0x6b4965);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b4968:{NFSU2_TR(0x6b4968);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b496e:{NFSU2_TR(0x6b496e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b4971:{NFSU2_TR(0x6b4971);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b4974:{NFSU2_TR(0x6b4974);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6b4975:{NFSU2_TR(0x6b4975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4965u);}goto L6b4965;}}
}
B6b4977:L6b4977:{c.instructions+=3;NFSU2_TR(0x6b4977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b497a:{NFSU2_TR(0x6b497a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4980:{NFSU2_TR(0x6b4980);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b4982:L6b4982:{c.instructions+=2;NFSU2_TR(0x6b4982);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b4986:{NFSU2_TR(0x6b4986);
if(r1(R+518)){{goto L6b4997;}}
}
B6b4988:L6b4988:{c.instructions+=3;NFSU2_TR(0x6b4988);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b498b:{NFSU2_TR(0x6b498b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b498d:{NFSU2_TR(0x6b498d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4992ull));
TAIL_STATIC(0x6739efu,673);
}
B6b4992:L6b4992:{c.instructions+=1;NFSU2_TR(0x6b4992);
{goto L6b4997;}
}
B6b4994:L6b4994:{c.instructions+=1;NFSU2_TR(0x6b4994);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4997:L6b4997:{c.instructions+=1;NFSU2_TR(0x6b4997);
__builtin_memmove((R+0),(R+28),4);
}
B6b4999:L6b4999:{c.instructions+=5;NFSU2_TR(0x6b4999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b499a:{NFSU2_TR(0x6b499a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b499b:{NFSU2_TR(0x6b499b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b499c:{NFSU2_TR(0x6b499c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b499d:{NFSU2_TR(0x6b499d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b49a0:L6b49a0:{c.instructions+=9;NFSU2_TR(0x6b49a0);
__builtin_memmove((R+28),(R+28),4);
}
B6b49a2:{NFSU2_TR(0x6b49a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b49a3:{NFSU2_TR(0x6b49a3);
__builtin_memmove((R+20),(R+16),4);
}
B6b49a5:{NFSU2_TR(0x6b49a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B6b49a8:{NFSU2_TR(0x6b49a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b49ae:{NFSU2_TR(0x6b49ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b49af:{NFSU2_TR(0x6b49af);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b49b1:{NFSU2_TR(0x6b49b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b49b8:{NFSU2_TR(0x6b49b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b49b9:L6b49b9:{c.instructions+=3;NFSU2_TR(0x6b49b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b49bb:{NFSU2_TR(0x6b49bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b49bd:{NFSU2_TR(0x6b49bd);
if(r1(R+518)){{goto L6b49d3;}}
}
B6b49bf:L6b49bf:{c.instructions+=4;NFSU2_TR(0x6b49bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b49c1:{NFSU2_TR(0x6b49c1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b49c7:{NFSU2_TR(0x6b49c7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b49cd:{NFSU2_TR(0x6b49cd);
if(r1(R+518)){{goto L6b49d3;}}
}
B6b49cf:L6b49cf:{c.instructions+=1;NFSU2_TR(0x6b49cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x3ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b49d3:L6b49d3:{c.instructions+=3;NFSU2_TR(0x6b49d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b49d6:{NFSU2_TR(0x6b49d6);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6b49d7:{NFSU2_TR(0x6b49d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b49b9u);}goto L6b49b9;}}
}
B6b49d9:L6b49d9:{c.instructions+=4;NFSU2_TR(0x6b49d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b49df:{NFSU2_TR(0x6b49df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b49e3:{NFSU2_TR(0x6b49e3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b49e5:{NFSU2_TR(0x6b49e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4acf;}}
}
B6b49eb:L6b49eb:{c.instructions+=5;NFSU2_TR(0x6b49eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b49f1:{NFSU2_TR(0x6b49f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b49f2:{NFSU2_TR(0x6b49f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b49f5:{NFSU2_TR(0x6b49f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b49f8:{NFSU2_TR(0x6b49f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b49f9:L6b49f9:{c.instructions+=4;NFSU2_TR(0x6b49f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b49fc:{NFSU2_TR(0x6b49fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b49fe:{NFSU2_TR(0x6b49fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4a00:{NFSU2_TR(0x6b4a00);
if(r1(R+518)){{goto L6b4ab3;}}
}
B6b4a06:L6b4a06:{c.instructions+=5;NFSU2_TR(0x6b4a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a09:{NFSU2_TR(0x6b4a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a0d:{NFSU2_TR(0x6b4a0d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4a0f:{NFSU2_TR(0x6b4a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a12:{NFSU2_TR(0x6b4a12);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4ab3;}}
}
B6b4a18:L6b4a18:{c.instructions+=1;NFSU2_TR(0x6b4a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a1b:L6b4a1b:{c.instructions+=3;NFSU2_TR(0x6b4a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a1f:{NFSU2_TR(0x6b4a1f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4a21:{NFSU2_TR(0x6b4a21);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4a99;}}
}
B6b4a23:L6b4a23:{c.instructions+=2;NFSU2_TR(0x6b4a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a26:{NFSU2_TR(0x6b4a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a29:L6b4a29:{c.instructions+=4;NFSU2_TR(0x6b4a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a2c:{NFSU2_TR(0x6b4a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b4a2e:{NFSU2_TR(0x6b4a2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4a32:{NFSU2_TR(0x6b4a32);
if(r1(R+518)){{goto L6b4a8a;}}
}
B6b4a34:L6b4a34:{c.instructions+=4;NFSU2_TR(0x6b4a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4a36:{NFSU2_TR(0x6b4a36);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b4a3b:{NFSU2_TR(0x6b4a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4a3c:{NFSU2_TR(0x6b4a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4a41ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b4a41:L6b4a41:{c.instructions+=2;NFSU2_TR(0x6b4a41);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4a43:{NFSU2_TR(0x6b4a43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4a8a;}}
}
B6b4a45:L6b4a45:{c.instructions+=5;NFSU2_TR(0x6b4a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a48:{NFSU2_TR(0x6b4a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a4b:{NFSU2_TR(0x6b4a4b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4a4d:{NFSU2_TR(0x6b4a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a50:{NFSU2_TR(0x6b4a50);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4a82;}}
}
B6b4a52:L6b4a52:{c.instructions+=7;NFSU2_TR(0x6b4a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a55:{NFSU2_TR(0x6b4a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4a57:{NFSU2_TR(0x6b4a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a5a:{NFSU2_TR(0x6b4a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4a5d:{NFSU2_TR(0x6b4a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b4a60:{NFSU2_TR(0x6b4a60);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4a63:{NFSU2_TR(0x6b4a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4a66:L6b4a66:{c.instructions+=4;NFSU2_TR(0x6b4a66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b4a68:{NFSU2_TR(0x6b4a68);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b4a6b:{NFSU2_TR(0x6b4a6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4a6e:{NFSU2_TR(0x6b4a6e);
if(r1(R+518)){{goto L6b4a82;}}
}
B6b4a70:L6b4a70:{c.instructions+=2;NFSU2_TR(0x6b4a70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4a72:{NFSU2_TR(0x6b4a72);
if(r1(R+518)){{goto L6b4a82;}}
}
B6b4a74:L6b4a74:{c.instructions+=5;NFSU2_TR(0x6b4a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a77:{NFSU2_TR(0x6b4a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4a7a:{NFSU2_TR(0x6b4a7a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6b4a7d:{NFSU2_TR(0x6b4a7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b4a80:{NFSU2_TR(0x6b4a80);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4a66u);}goto L6b4a66;}}
}
B6b4a82:L6b4a82:{c.instructions+=3;NFSU2_TR(0x6b4a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a85:{NFSU2_TR(0x6b4a85);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4a88:{NFSU2_TR(0x6b4a88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4a99;}}
}
B6b4a8a:L6b4a8a:{c.instructions+=5;NFSU2_TR(0x6b4a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a8d:{NFSU2_TR(0x6b4a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a90:{NFSU2_TR(0x6b4a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4a94:{NFSU2_TR(0x6b4a94);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4a97:{NFSU2_TR(0x6b4a97);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4a29u);}goto L6b4a29;}}
}
B6b4a99:L6b4a99:{c.instructions+=3;NFSU2_TR(0x6b4a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4a9c:{NFSU2_TR(0x6b4a9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4a9f:{NFSU2_TR(0x6b4a9f);
if(r1(R+518)){{goto L6b4aa4;}}
}
B6b4aa1:L6b4aa1:{c.instructions+=1;NFSU2_TR(0x6b4aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4aa4:L6b4aa4:{c.instructions+=4;NFSU2_TR(0x6b4aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4aa7:{NFSU2_TR(0x6b4aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4aaa:{NFSU2_TR(0x6b4aaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b4aad:{NFSU2_TR(0x6b4aad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4a1bu);}goto L6b4a1b;}}
}
B6b4ab3:L6b4ab3:{c.instructions+=3;NFSU2_TR(0x6b4ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4ab7:{NFSU2_TR(0x6b4ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4aba:{NFSU2_TR(0x6b4aba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b49f9u);}goto L6b49f9;}}
}
B6b4ac0:L6b4ac0:{c.instructions+=5;NFSU2_TR(0x6b4ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4ac3:{NFSU2_TR(0x6b4ac3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4ac6:{NFSU2_TR(0x6b4ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4ac7:{NFSU2_TR(0x6b4ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b4ac8:{NFSU2_TR(0x6b4ac8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4acf;}}
}
B6b4aca:L6b4aca:{c.instructions+=3;NFSU2_TR(0x6b4aca);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b4acc:{NFSU2_TR(0x6b4acc);
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
B6b4acd:{NFSU2_TR(0x6b4acd);
{goto L6b4ad1;}
}
B6b4acf:L6b4acf:{c.instructions+=1;NFSU2_TR(0x6b4acf);
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
B6b4ad1:L6b4ad1:{c.instructions+=3;NFSU2_TR(0x6b4ad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b4ad2:{NFSU2_TR(0x6b4ad2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b4ad3:{NFSU2_TR(0x6b4ad3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b4ad4:L6b4ad4:{c.instructions+=11;NFSU2_TR(0x6b4ad4);
__builtin_memmove((R+28),(R+28),4);
}
B6b4ad6:{NFSU2_TR(0x6b4ad6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4ad7:{NFSU2_TR(0x6b4ad7);
__builtin_memmove((R+20),(R+16),4);
}
B6b4ad9:{NFSU2_TR(0x6b4ad9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4ada:{NFSU2_TR(0x6b4ada);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b4adc:{NFSU2_TR(0x6b4adc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4add:{NFSU2_TR(0x6b4add);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b4ae0:{NFSU2_TR(0x6b4ae0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b4ae1:{NFSU2_TR(0x6b4ae1);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
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
B6b4ae4:{NFSU2_TR(0x6b4ae4);
__builtin_memmove((R+12),(R+4),4);
}
B6b4ae6:{NFSU2_TR(0x6b4ae6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4b10;}}
}
B6b4ae8:L6b4ae8:{c.instructions+=4;NFSU2_TR(0x6b4ae8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4ae9:{NFSU2_TR(0x6b4ae9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b4aeb:{NFSU2_TR(0x6b4aeb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4aee:{NFSU2_TR(0x6b4aee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4b0d;}}
}
B6b4af0:L6b4af0:{c.instructions+=6;NFSU2_TR(0x6b4af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4af3:{NFSU2_TR(0x6b4af3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4af6:{NFSU2_TR(0x6b4af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4af9:{NFSU2_TR(0x6b4af9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b4afc:{NFSU2_TR(0x6b4afc);
__builtin_memmove((R+4),(R+12),4);
}
B6b4afe:{NFSU2_TR(0x6b4afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4b03ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4ad4u);}goto L6b4ad4;}
}
B6b4b03:L6b4b03:{c.instructions+=2;NFSU2_TR(0x6b4b03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4b05:{NFSU2_TR(0x6b4b05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4b16;}}
}
B6b4b07:L6b4b07:{c.instructions+=3;NFSU2_TR(0x6b4b07);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4b08:{NFSU2_TR(0x6b4b08);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b4b0b:{NFSU2_TR(0x6b4b0b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4af0u);}goto L6b4af0;}}
}
B6b4b0d:L6b4b0d:{c.instructions+=1;NFSU2_TR(0x6b4b0d);
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
B6b4b0f:L6b4b0f:{c.instructions+=1;NFSU2_TR(0x6b4b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4b10:L6b4b10:{c.instructions+=4;NFSU2_TR(0x6b4b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b4b11:{NFSU2_TR(0x6b4b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b4b12:{NFSU2_TR(0x6b4b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6b4b13:{NFSU2_TR(0x6b4b13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b4b16:L6b4b16:{c.instructions+=3;NFSU2_TR(0x6b4b16);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b4b18:{NFSU2_TR(0x6b4b18);
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
B6b4b19:{NFSU2_TR(0x6b4b19);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4b0fu);}goto L6b4b0f;}
}
B6b4b1b:L6b4b1b:{c.instructions+=10;NFSU2_TR(0x6b4b1b);
__builtin_memmove((R+28),(R+28),4);
}
B6b4b1d:{NFSU2_TR(0x6b4b1d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4b1e:{NFSU2_TR(0x6b4b1e);
__builtin_memmove((R+20),(R+16),4);
}
B6b4b20:{NFSU2_TR(0x6b4b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6b4b23:{NFSU2_TR(0x6b4b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4b26:{NFSU2_TR(0x6b4b26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4b27:{NFSU2_TR(0x6b4b27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4b28:{NFSU2_TR(0x6b4b28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4b29:{NFSU2_TR(0x6b4b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b2c:{NFSU2_TR(0x6b4b2c);
{goto L6b4c47;}
}
B6b4b31:L6b4b31:{c.instructions+=5;NFSU2_TR(0x6b4b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4b34:{NFSU2_TR(0x6b4b34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4b37:{NFSU2_TR(0x6b4b37);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4b39:{NFSU2_TR(0x6b4b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b3c:{NFSU2_TR(0x6b4b3c);
if(r1(R+518)){{goto L6b4c43;}}
}
B6b4b42:L6b4b42:{c.instructions+=6;NFSU2_TR(0x6b4b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4b44:{NFSU2_TR(0x6b4b44);
__builtin_memmove((R+24),(R+0),4);
}
B6b4b46:{NFSU2_TR(0x6b4b46);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6b4b4c:{NFSU2_TR(0x6b4b4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4b4e:{NFSU2_TR(0x6b4b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b51:{NFSU2_TR(0x6b4b51);
if(r1(R+518)){{goto L6b4c43;}}
}
B6b4b57:L6b4b57:{c.instructions+=7;NFSU2_TR(0x6b4b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4b5a:{NFSU2_TR(0x6b4b5a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b4b5c:{NFSU2_TR(0x6b4b5c);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b4b5c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b4b5c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6b4b5e:{NFSU2_TR(0x6b4b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b62:{NFSU2_TR(0x6b4b62);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4b64:{NFSU2_TR(0x6b4b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b67:{NFSU2_TR(0x6b4b67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4c43;}}
}
B6b4b6d:L6b4b6d:{c.instructions+=1;NFSU2_TR(0x6b4b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b71:L6b4b71:{c.instructions+=3;NFSU2_TR(0x6b4b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b75:{NFSU2_TR(0x6b4b75);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4b77:{NFSU2_TR(0x6b4b77);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4c2c;}}
}
B6b4b7d:L6b4b7d:{c.instructions+=5;NFSU2_TR(0x6b4b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4b80:{NFSU2_TR(0x6b4b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4b83:{NFSU2_TR(0x6b4b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4b86:{NFSU2_TR(0x6b4b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6b4b89:{NFSU2_TR(0x6b4b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4b8c:L6b4b8c:{c.instructions+=5;NFSU2_TR(0x6b4b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b4b8e:{NFSU2_TR(0x6b4b8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b4b91:{NFSU2_TR(0x6b4b91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b4b93:{NFSU2_TR(0x6b4b93);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4b96:{NFSU2_TR(0x6b4b96);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4bbd;}}
}
B6b4b98:L6b4b98:{c.instructions+=4;NFSU2_TR(0x6b4b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4b9b:{NFSU2_TR(0x6b4b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4b9e:{NFSU2_TR(0x6b4b9e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4ba0:{NFSU2_TR(0x6b4ba0);
if(r1(R+518)){{goto L6b4ba7;}}
}
B6b4ba2:L6b4ba2:{c.instructions+=2;NFSU2_TR(0x6b4ba2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4ba5:{NFSU2_TR(0x6b4ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4bb4;}}
}
B6b4ba7:L6b4ba7:{c.instructions+=2;NFSU2_TR(0x6b4ba7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4bab:{NFSU2_TR(0x6b4bab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4bb4;}}
}
B6b4bad:L6b4bad:{c.instructions+=1;NFSU2_TR(0x6b4bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4bb4:L6b4bb4:{c.instructions+=3;NFSU2_TR(0x6b4bb4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b4bb5:{NFSU2_TR(0x6b4bb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4bb8:{NFSU2_TR(0x6b4bb8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4b98u);}goto L6b4b98;}}
}
B6b4bba:L6b4bba:{c.instructions+=1;NFSU2_TR(0x6b4bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4bbd:L6b4bbd:{c.instructions+=3;NFSU2_TR(0x6b4bbd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6b4bc0:{NFSU2_TR(0x6b4bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4bc3:{NFSU2_TR(0x6b4bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4b8cu);}goto L6b4b8c;}}
}
B6b4bc5:L6b4bc5:{c.instructions+=2;NFSU2_TR(0x6b4bc5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4bc9:{NFSU2_TR(0x6b4bc9);
if(r1(R+518)){{goto L6b4c29;}}
}
B6b4bcb:L6b4bcb:{c.instructions+=3;NFSU2_TR(0x6b4bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4bce:{NFSU2_TR(0x6b4bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4bd2:{NFSU2_TR(0x6b4bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4bd5:L6b4bd5:{c.instructions+=9;NFSU2_TR(0x6b4bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4bd8:{NFSU2_TR(0x6b4bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4bdb:{NFSU2_TR(0x6b4bdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b4bde:{NFSU2_TR(0x6b4bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4be1:{NFSU2_TR(0x6b4be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4be4:{NFSU2_TR(0x6b4be4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b4be7:{NFSU2_TR(0x6b4be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b4bea:{NFSU2_TR(0x6b4bea);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4bed:{NFSU2_TR(0x6b4bed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4bf1;}}
}
B6b4bef:L6b4bef:{c.instructions+=1;NFSU2_TR(0x6b4bef);
__builtin_memmove((R+24),(R+8),4);
}
B6b4bf1:L6b4bf1:{c.instructions+=5;NFSU2_TR(0x6b4bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4bf4:{NFSU2_TR(0x6b4bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b4bf6:{NFSU2_TR(0x6b4bf6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b4bf8:{NFSU2_TR(0x6b4bf8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4bfa:{NFSU2_TR(0x6b4bfa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4c09;}}
}
B6b4bfc:L6b4bfc:{c.instructions+=3;NFSU2_TR(0x6b4bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4bff:{NFSU2_TR(0x6b4bff);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+24))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b4c02:{NFSU2_TR(0x6b4c02);
if(r1(R+518)){{goto L6b4c09;}}
}
B6b4c04:L6b4c04:{c.instructions+=3;NFSU2_TR(0x6b4c04);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4c05:{NFSU2_TR(0x6b4c05);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+4))));
}
B6b4c07:{NFSU2_TR(0x6b4c07);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4bfcu);}goto L6b4bfc;}}
}
B6b4c09:L6b4c09:{c.instructions+=2;NFSU2_TR(0x6b4c09);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4c0b:{NFSU2_TR(0x6b4c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4c1a;}}
}
B6b4c0d:L6b4c0d:{c.instructions+=2;NFSU2_TR(0x6b4c0d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4c10:{NFSU2_TR(0x6b4c10);
if(r1(R+518)){{goto L6b4c5c;}}
}
B6b4c12:L6b4c12:{c.instructions+=3;NFSU2_TR(0x6b4c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4c15:{NFSU2_TR(0x6b4c15);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b4c18:{NFSU2_TR(0x6b4c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b4c1a:L6b4c1a:{c.instructions+=5;NFSU2_TR(0x6b4c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4c1d:{NFSU2_TR(0x6b4c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4c20:{NFSU2_TR(0x6b4c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4c24:{NFSU2_TR(0x6b4c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4c27:{NFSU2_TR(0x6b4c27);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4bd5u);}goto L6b4bd5;}}
}
B6b4c29:L6b4c29:{c.instructions+=1;NFSU2_TR(0x6b4c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b4c2c:L6b4c2c:{c.instructions+=7;NFSU2_TR(0x6b4c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4c2f:{NFSU2_TR(0x6b4c2f);
__builtin_memmove((R+0),(R+24),4);
}
B6b4c31:{NFSU2_TR(0x6b4c31);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b4c34:{NFSU2_TR(0x6b4c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4c37:{NFSU2_TR(0x6b4c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4c3a:{NFSU2_TR(0x6b4c3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4c3d:{NFSU2_TR(0x6b4c3d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4b71u);}goto L6b4b71;}}
}
B6b4c43:L6b4c43:{c.instructions+=2;NFSU2_TR(0x6b4c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4c46:{NFSU2_TR(0x6b4c46);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b4c47:L6b4c47:{c.instructions+=3;NFSU2_TR(0x6b4c47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4c4a:{NFSU2_TR(0x6b4c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4c4d:{NFSU2_TR(0x6b4c4d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4b31u);}goto L6b4b31;}}
}
B6b4c53:L6b4c53:{c.instructions+=1;NFSU2_TR(0x6b4c53);
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
B6b4c55:L6b4c55:{c.instructions+=5;NFSU2_TR(0x6b4c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4c56:{NFSU2_TR(0x6b4c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b4c57:{NFSU2_TR(0x6b4c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b4c58:{NFSU2_TR(0x6b4c58);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b4c59:{NFSU2_TR(0x6b4c59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b4c5c:L6b4c5c:{c.instructions+=5;NFSU2_TR(0x6b4c5c);
u8 U[4];
w4(U+0,u32(0x7bc73cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4c61:{NFSU2_TR(0x6b4c61);
u8 U[4];
w4(U+0,u32(0x12c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4c66:{NFSU2_TR(0x6b4c66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4c68:{NFSU2_TR(0x6b4c68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b4c6b:{NFSU2_TR(0x6b4c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4c70ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b4c70:L6b4c70:{c.instructions+=3;NFSU2_TR(0x6b4c70);
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
B6b4c73:{NFSU2_TR(0x6b4c73);
w4(R+0,u32(0x80004005ull));
}
B6b4c78:{NFSU2_TR(0x6b4c78);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4c55u);}goto L6b4c55;}
}
B6b4c7a:L6b4c7a:{c.instructions+=5;NFSU2_TR(0x6b4c7a);
__builtin_memmove((R+28),(R+28),4);
}
B6b4c7c:{NFSU2_TR(0x6b4c7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4c7d:{NFSU2_TR(0x6b4c7d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b4c7f:{NFSU2_TR(0x6b4c7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4c82:{NFSU2_TR(0x6b4c82);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4cb5;}}
}
B6b4c84:L6b4c84:{c.instructions+=1;NFSU2_TR(0x6b4c84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4c85:L6b4c85:{c.instructions+=5;NFSU2_TR(0x6b4c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4c88:{NFSU2_TR(0x6b4c88);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4c8b:{NFSU2_TR(0x6b4c8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4c8e:{NFSU2_TR(0x6b4c8e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4c91:{NFSU2_TR(0x6b4c91);
if(r1(R+518)){{goto L6b4cae;}}
}
B6b4c93:L6b4c93:{c.instructions+=9;NFSU2_TR(0x6b4c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4c96:{NFSU2_TR(0x6b4c96);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b4c99:{NFSU2_TR(0x6b4c99);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b4c9c:{NFSU2_TR(0x6b4c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4c9f:{NFSU2_TR(0x6b4c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4ca2:{NFSU2_TR(0x6b4ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4ca5:{NFSU2_TR(0x6b4ca5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b4ca8:{NFSU2_TR(0x6b4ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4cab:{NFSU2_TR(0x6b4cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4cae:L6b4cae:{c.instructions+=3;NFSU2_TR(0x6b4cae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b4caf:{NFSU2_TR(0x6b4caf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6b4cb2:{NFSU2_TR(0x6b4cb2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4c85u);}goto L6b4c85;}}
}
B6b4cb4:L6b4cb4:{c.instructions+=1;NFSU2_TR(0x6b4cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4cb5:L6b4cb5:{c.instructions+=3;NFSU2_TR(0x6b4cb5);
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
B6b4cb7:{NFSU2_TR(0x6b4cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b4cb8:{NFSU2_TR(0x6b4cb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b4cb9:L6b4cb9:{c.instructions+=16;NFSU2_TR(0x6b4cb9);
__builtin_memmove((R+28),(R+28),4);
}
B6b4cbb:{NFSU2_TR(0x6b4cbb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4cbc:{NFSU2_TR(0x6b4cbc);
__builtin_memmove((R+20),(R+16),4);
}
B6b4cbe:{NFSU2_TR(0x6b4cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6b4cc1:{NFSU2_TR(0x6b4cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4cc4:{NFSU2_TR(0x6b4cc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4cc5:{NFSU2_TR(0x6b4cc5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b4cc7:{NFSU2_TR(0x6b4cc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b4cc9:{NFSU2_TR(0x6b4cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4ccc:{NFSU2_TR(0x6b4ccc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b4cce:{NFSU2_TR(0x6b4cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4cd1:{NFSU2_TR(0x6b4cd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4cd4:{NFSU2_TR(0x6b4cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4cd7:{NFSU2_TR(0x6b4cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4cda:{NFSU2_TR(0x6b4cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4cdd:{NFSU2_TR(0x6b4cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4e23;}}
}
B6b4ce3:L6b4ce3:{c.instructions+=4;NFSU2_TR(0x6b4ce3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4ce4:{NFSU2_TR(0x6b4ce4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4ce5:{NFSU2_TR(0x6b4ce5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b4ce7:{NFSU2_TR(0x6b4ce7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4ce8:L6b4ce8:{c.instructions+=4;NFSU2_TR(0x6b4ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4ceb:{NFSU2_TR(0x6b4ceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b4cee:{NFSU2_TR(0x6b4cee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4cf0:{NFSU2_TR(0x6b4cf0);
if(r1(R+518)){{goto L6b4e11;}}
}
B6b4cf6:L6b4cf6:{c.instructions+=3;NFSU2_TR(0x6b4cf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4cf8:{NFSU2_TR(0x6b4cf8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4cfa:{NFSU2_TR(0x6b4cfa);
if(r1(R+518)){{goto L6b4e11;}}
}
B6b4d00:L6b4d00:{c.instructions+=11;NFSU2_TR(0x6b4d00);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b4d05:{NFSU2_TR(0x6b4d05);
__builtin_memmove((R+4),(R+0),4);
}
B6b4d07:{NFSU2_TR(0x6b4d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4d0a:{NFSU2_TR(0x6b4d0a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b4d0c:{NFSU2_TR(0x6b4d0c);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b4d0c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b4d0c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6b4d0e:{NFSU2_TR(0x6b4d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d11:{NFSU2_TR(0x6b4d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d14:{NFSU2_TR(0x6b4d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d17:{NFSU2_TR(0x6b4d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4d1a:{NFSU2_TR(0x6b4d1a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4d1c:{NFSU2_TR(0x6b4d1c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4e11;}}
}
B6b4d22:L6b4d22:{c.instructions+=3;NFSU2_TR(0x6b4d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4d25:{NFSU2_TR(0x6b4d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d28:{NFSU2_TR(0x6b4d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d2b:L6b4d2b:{c.instructions+=3;NFSU2_TR(0x6b4d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4d2e:{NFSU2_TR(0x6b4d2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4d30:{NFSU2_TR(0x6b4d30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4e04;}}
}
B6b4d36:L6b4d36:{c.instructions+=2;NFSU2_TR(0x6b4d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d39:{NFSU2_TR(0x6b4d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d3c:L6b4d3c:{c.instructions+=3;NFSU2_TR(0x6b4d3c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4d3e:{NFSU2_TR(0x6b4d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d41:{NFSU2_TR(0x6b4d41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4de4;}}
}
B6b4d47:L6b4d47:{c.instructions+=2;NFSU2_TR(0x6b4d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4d4a:{NFSU2_TR(0x6b4d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d4d:L6b4d4d:{c.instructions+=9;NFSU2_TR(0x6b4d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4d50:{NFSU2_TR(0x6b4d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b4d53:{NFSU2_TR(0x6b4d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4d56:{NFSU2_TR(0x6b4d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4d59:{NFSU2_TR(0x6b4d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4d5c:{NFSU2_TR(0x6b4d5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b4d5e:{NFSU2_TR(0x6b4d5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4d61:{NFSU2_TR(0x6b4d61);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4d64:{NFSU2_TR(0x6b4d64);
if(r1(R+518)){{goto L6b4d6a;}}
}
B6b4d66:L6b4d66:{c.instructions+=2;NFSU2_TR(0x6b4d66);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4d68:{NFSU2_TR(0x6b4d68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4dd0;}}
}
B6b4d6a:L6b4d6a:{c.instructions+=6;NFSU2_TR(0x6b4d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4d6d:{NFSU2_TR(0x6b4d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d70:{NFSU2_TR(0x6b4d70);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b4d71:{NFSU2_TR(0x6b4d71);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4d74:{NFSU2_TR(0x6b4d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d77:{NFSU2_TR(0x6b4d77);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4d7c;}}
}
B6b4d79:L6b4d79:{c.instructions+=1;NFSU2_TR(0x6b4d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4d7c:L6b4d7c:{c.instructions+=4;NFSU2_TR(0x6b4d7c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b4d7e:{NFSU2_TR(0x6b4d7e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4d7f:{NFSU2_TR(0x6b4d7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4d82:{NFSU2_TR(0x6b4d82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4d97;}}
}
B6b4d84:L6b4d84:{c.instructions+=5;NFSU2_TR(0x6b4d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4d87:{NFSU2_TR(0x6b4d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b4d89:{NFSU2_TR(0x6b4d89);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4d8c:{NFSU2_TR(0x6b4d8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4d90:{NFSU2_TR(0x6b4d90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4d97;}}
}
B6b4d92:L6b4d92:{c.instructions+=2;NFSU2_TR(0x6b4d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4d95:{NFSU2_TR(0x6b4d95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b4d97:L6b4d97:{c.instructions+=4;NFSU2_TR(0x6b4d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b4d99:{NFSU2_TR(0x6b4d99);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b4d9f:{NFSU2_TR(0x6b4d9f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4da5:{NFSU2_TR(0x6b4da5);
if(r1(R+518)){{goto L6b4dd3;}}
}
B6b4da7:L6b4da7:{c.instructions+=3;NFSU2_TR(0x6b4da7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b4da9:{NFSU2_TR(0x6b4da9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4dac:{NFSU2_TR(0x6b4dac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4dd3;}}
}
B6b4dae:L6b4dae:{c.instructions+=7;NFSU2_TR(0x6b4dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4db1:{NFSU2_TR(0x6b4db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4db4:{NFSU2_TR(0x6b4db4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4db7:{NFSU2_TR(0x6b4db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4dba:{NFSU2_TR(0x6b4dba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b4dbd:{NFSU2_TR(0x6b4dbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4dc1:{NFSU2_TR(0x6b4dc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4dc8;}}
}
B6b4dc3:L6b4dc3:{c.instructions+=2;NFSU2_TR(0x6b4dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4dc6:{NFSU2_TR(0x6b4dc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6b4dc8:L6b4dc8:{c.instructions+=3;NFSU2_TR(0x6b4dc8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b4dc9:{NFSU2_TR(0x6b4dc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b4dcc:{NFSU2_TR(0x6b4dcc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4daeu);}goto L6b4dae;}}
}
B6b4dce:L6b4dce:{c.instructions+=1;NFSU2_TR(0x6b4dce);
{goto L6b4dd3;}
}
B6b4dd0:L6b4dd0:{c.instructions+=2;NFSU2_TR(0x6b4dd0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b4dd2:{NFSU2_TR(0x6b4dd2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4dd3:L6b4dd3:{c.instructions+=3;NFSU2_TR(0x6b4dd3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b4dd6:{NFSU2_TR(0x6b4dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4dd9:{NFSU2_TR(0x6b4dd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4d4du);}goto L6b4d4d;}}
}
B6b4ddf:L6b4ddf:{c.instructions+=2;NFSU2_TR(0x6b4ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4de2:{NFSU2_TR(0x6b4de2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b4de4:L6b4de4:{c.instructions+=2;NFSU2_TR(0x6b4de4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4de7:{NFSU2_TR(0x6b4de7);
if(r1(R+518)){{goto L6b4df3;}}
}
B6b4de9:L6b4de9:{c.instructions+=2;NFSU2_TR(0x6b4de9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4dec:{NFSU2_TR(0x6b4dec);
if(r1(R+518)){{goto L6b4df3;}}
}
B6b4dee:L6b4dee:{c.instructions+=2;NFSU2_TR(0x6b4dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4df1:{NFSU2_TR(0x6b4df1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b4df3:L6b4df3:{c.instructions+=5;NFSU2_TR(0x6b4df3);
__builtin_memmove((R+0),(R+4),4);
}
B6b4df5:{NFSU2_TR(0x6b4df5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b4df8:{NFSU2_TR(0x6b4df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4dfb:{NFSU2_TR(0x6b4dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4dfe:{NFSU2_TR(0x6b4dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4d3cu);}goto L6b4d3c;}}
}
B6b4e04:L6b4e04:{c.instructions+=3;NFSU2_TR(0x6b4e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4e08:{NFSU2_TR(0x6b4e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4e0b:{NFSU2_TR(0x6b4e0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4d2bu);}goto L6b4d2b;}}
}
B6b4e11:L6b4e11:{c.instructions+=5;NFSU2_TR(0x6b4e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4e14:{NFSU2_TR(0x6b4e14);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b4e15:{NFSU2_TR(0x6b4e15);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4e18:{NFSU2_TR(0x6b4e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4e1b:{NFSU2_TR(0x6b4e1b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4ce8u);}goto L6b4ce8;}}
}
B6b4e21:L6b4e21:{c.instructions+=2;NFSU2_TR(0x6b4e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4e22:{NFSU2_TR(0x6b4e22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b4e23:L6b4e23:{c.instructions+=7;NFSU2_TR(0x6b4e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4e26:{NFSU2_TR(0x6b4e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4e29:{NFSU2_TR(0x6b4e29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b4e2b:{NFSU2_TR(0x6b4e2b);
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
B6b4e2d:{NFSU2_TR(0x6b4e2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b4e2e:{NFSU2_TR(0x6b4e2e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b4e2f:{NFSU2_TR(0x6b4e2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b4e32:L6b4e32:{c.instructions+=14;NFSU2_TR(0x6b4e32);
__builtin_memmove((R+28),(R+28),4);
}
B6b4e34:{NFSU2_TR(0x6b4e34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e35:{NFSU2_TR(0x6b4e35);
__builtin_memmove((R+20),(R+16),4);
}
B6b4e37:{NFSU2_TR(0x6b4e37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x16cull))));
}
B6b4e3d:{NFSU2_TR(0x6b4e3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e3e:{NFSU2_TR(0x6b4e3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e3f:{NFSU2_TR(0x6b4e3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e40:{NFSU2_TR(0x6b4e40);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e42:{NFSU2_TR(0x6b4e42);
__builtin_memmove((R+24),(R+4),4);
}
B6b4e44:{NFSU2_TR(0x6b4e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4e47:{NFSU2_TR(0x6b4e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b4e48:{NFSU2_TR(0x6b4e48);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e4a:{NFSU2_TR(0x6b4e4a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b4e4c:{NFSU2_TR(0x6b4e4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4e52:L6b4e52:{c.instructions+=1;NFSU2_TR(0x6b4e52);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b4e54;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4e52u);}goto L6b4e52;}
}
B6b4e54:L6b4e54:{c.instructions+=3;NFSU2_TR(0x6b4e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b4e55:{NFSU2_TR(0x6b4e55);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e57:{NFSU2_TR(0x6b4e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4e5d:L6b4e5d:{c.instructions+=1;NFSU2_TR(0x6b4e5d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b4e5f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4e5du);}goto L6b4e5d;}
}
B6b4e5f:L6b4e5f:{c.instructions+=5;NFSU2_TR(0x6b4e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b4e60:{NFSU2_TR(0x6b4e60);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e62:{NFSU2_TR(0x6b4e62);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e64:{NFSU2_TR(0x6b4e64);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b4e67:{NFSU2_TR(0x6b4e67);
u8 U[4];
w4(U+0,u32(0x311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e6c:L6b4e6c:{c.instructions+=1;NFSU2_TR(0x6b4e6c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b4e6e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4e6cu);}goto L6b4e6c;}
}
B6b4e6e:L6b4e6e:{c.instructions+=4;NFSU2_TR(0x6b4e6e);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4e73:{NFSU2_TR(0x6b4e73);
__builtin_memmove((R+4),(R+24),4);
}
B6b4e75:{NFSU2_TR(0x6b4e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4e78:{NFSU2_TR(0x6b4e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b4e7dull));
TAIL_STATIC(0x699be0u,699);
}
B6b4e7d:L6b4e7d:{c.instructions+=6;NFSU2_TR(0x6b4e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4e81:{NFSU2_TR(0x6b4e81);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b4e83:{NFSU2_TR(0x6b4e83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b4e84:{NFSU2_TR(0x6b4e84);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4e86:{NFSU2_TR(0x6b4e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4e89:{NFSU2_TR(0x6b4e89);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b4ee3;}}
}
B6b4e8b:L6b4e8b:{c.instructions+=2;NFSU2_TR(0x6b4e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4e8e:{NFSU2_TR(0x6b4e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4e91:L6b4e91:{c.instructions+=6;NFSU2_TR(0x6b4e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b4e93:{NFSU2_TR(0x6b4e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4e96:{NFSU2_TR(0x6b4e96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b4e99:{NFSU2_TR(0x6b4e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4e9c:{NFSU2_TR(0x6b4e9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b4e9f:{NFSU2_TR(0x6b4e9f);
if(r1(R+518)){{goto L6b4ed5;}}
}
B6b4ea1:L6b4ea1:{c.instructions+=2;NFSU2_TR(0x6b4ea1);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(u16(0x180ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6b4ea6:{NFSU2_TR(0x6b4ea6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4ed5;}}
}
B6b4ea8:L6b4ea8:{c.instructions+=3;NFSU2_TR(0x6b4ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4eab:{NFSU2_TR(0x6b4eab);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4eae:{NFSU2_TR(0x6b4eae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b4f11;}}
}
B6b4eb0:L6b4eb0:{c.instructions+=7;NFSU2_TR(0x6b4eb0);
__builtin_memmove((R+0),(R+8),4);
}
B6b4eb2:{NFSU2_TR(0x6b4eb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b4eb5:{NFSU2_TR(0x6b4eb5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4ebc:{NFSU2_TR(0x6b4ebc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff18ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4ec3:{NFSU2_TR(0x6b4ec3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff1cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4eca:{NFSU2_TR(0x6b4eca);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff20ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4ed1:{NFSU2_TR(0x6b4ed1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b4ed5:L6b4ed5:{c.instructions+=5;NFSU2_TR(0x6b4ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4ed8:{NFSU2_TR(0x6b4ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4edb:{NFSU2_TR(0x6b4edb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b4ede:{NFSU2_TR(0x6b4ede);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b4ee1:{NFSU2_TR(0x6b4ee1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4e91u);}goto L6b4e91;}}
}
B6b4ee3:L6b4ee3:{c.instructions+=6;NFSU2_TR(0x6b4ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4ee9:{NFSU2_TR(0x6b4ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4eef:{NFSU2_TR(0x6b4eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4ef3:{NFSU2_TR(0x6b4ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b4ef6:{NFSU2_TR(0x6b4ef6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4ef8:{NFSU2_TR(0x6b4ef8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b52d7u,6b5);}
}
B6b4efe:L6b4efe:{c.instructions+=2;NFSU2_TR(0x6b4efe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6b4f01:{NFSU2_TR(0x6b4f01);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4f1b;}}
}
B6b4f03:L6b4f03:{c.instructions+=4;NFSU2_TR(0x6b4f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4f09:{NFSU2_TR(0x6b4f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4f0c:{NFSU2_TR(0x6b4f0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b4f0f:{NFSU2_TR(0x6b4f0f);
{goto L6b4f29;}
}
B6b4f11:L6b4f11:{c.instructions+=2;NFSU2_TR(0x6b4f11);
u8 U[4];
w4(U+0,u32(0x7bc7f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b4f16:{NFSU2_TR(0x6b4f16);
TAIL_STATIC(0x6b530bu,6b5);
}
B6b4f1b:L6b4f1b:{c.instructions+=4;NFSU2_TR(0x6b4f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4f1e:{NFSU2_TR(0x6b4f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4f24:{NFSU2_TR(0x6b4f24);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6b4f26:{NFSU2_TR(0x6b4f26);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b4f29:L6b4f29:{c.instructions+=4;NFSU2_TR(0x6b4f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4f2d:{NFSU2_TR(0x6b4f2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4f2f:{NFSU2_TR(0x6b4f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4f32:{NFSU2_TR(0x6b4f32);
if(r1(R+518)){TAIL_STATIC(0x6b52bcu,6b5);}
}
B6b4f38:L6b4f38:{c.instructions+=2;NFSU2_TR(0x6b4f38);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4f3c:{NFSU2_TR(0x6b4f3c);
if(r1(R+518)){TAIL_STATIC(0x6b52bcu,6b5);}
}
B6b4f42:L6b4f42:{c.instructions+=4;NFSU2_TR(0x6b4f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4f45:{NFSU2_TR(0x6b4f45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b4f47:{NFSU2_TR(0x6b4f47);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b4f4a:{NFSU2_TR(0x6b4f4a);
if(r1(R+518)){TAIL_STATIC(0x6b52bcu,6b5);}
}
B6b4f50:L6b4f50:{c.instructions+=4;NFSU2_TR(0x6b4f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b4f52:{NFSU2_TR(0x6b4f52);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4f58:{NFSU2_TR(0x6b4f58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4f5b:{NFSU2_TR(0x6b4f5b);
if(r1(R+518)){TAIL_STATIC(0x6b52bcu,6b5);}
}
B6b4f61:L6b4f61:{c.instructions+=4;NFSU2_TR(0x6b4f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b4f64:{NFSU2_TR(0x6b4f64);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b4f67:{NFSU2_TR(0x6b4f67);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4f6b:{NFSU2_TR(0x6b4f6b);
if(r1(R+518)){{goto L6b4fea;}}
}
B6b4f6d:L6b4f6d:{c.instructions+=2;NFSU2_TR(0x6b4f6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4f71:{NFSU2_TR(0x6b4f71);
if(r1(R+518)){{goto L6b4fea;}}
}
B6b4f73:L6b4f73:{c.instructions+=2;NFSU2_TR(0x6b4f73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6b4f76:{NFSU2_TR(0x6b4f76);
if(r1(R+512)){{goto L6b4fea;}}
}
B6b4f78:L6b4f78:{c.instructions+=7;NFSU2_TR(0x6b4f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b4f7b:{NFSU2_TR(0x6b4f7b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b4f7d:{NFSU2_TR(0x6b4f7d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6b4f7f:{NFSU2_TR(0x6b4f7f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b4f80:{NFSU2_TR(0x6b4f80);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4f81:{NFSU2_TR(0x6b4f81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6b4f83:{NFSU2_TR(0x6b4f83);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4fb4;}}
}
B6b4f85:L6b4f85:{c.instructions+=7;NFSU2_TR(0x6b4f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b4f88:{NFSU2_TR(0x6b4f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4f8e:{NFSU2_TR(0x6b4f8e);
__builtin_memmove((R+28),(R+4),4);
}
B6b4f90:{NFSU2_TR(0x6b4f90);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6b4f92:{NFSU2_TR(0x6b4f92);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6b4f94:{NFSU2_TR(0x6b4f94);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b4f95:{NFSU2_TR(0x6b4f95);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b4f96:L6b4f96:{c.instructions+=3;NFSU2_TR(0x6b4f96);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b4f99:{NFSU2_TR(0x6b4f99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b4f9b:{NFSU2_TR(0x6b4f9b);
if(r1(R+518)){{goto L6b4fa5;}}
}
B6b4f9d:L6b4f9d:{c.instructions+=2;NFSU2_TR(0x6b4f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6b4fa3:{NFSU2_TR(0x6b4fa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4fb1;}}
}
B6b4fa5:L6b4fa5:{c.instructions+=5;NFSU2_TR(0x6b4fa5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b4fa6:{NFSU2_TR(0x6b4fa6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b4fa7:{NFSU2_TR(0x6b4fa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b4fad:{NFSU2_TR(0x6b4fad);
__builtin_memmove((R+28),(R+4),4);
}
B6b4faf:{NFSU2_TR(0x6b4faf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b4f96u);}goto L6b4f96;}}
}
B6b4fb1:L6b4fb1:{c.instructions+=1;NFSU2_TR(0x6b4fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b4fb4:L6b4fb4:{c.instructions+=5;NFSU2_TR(0x6b4fb4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6b4fb6:{NFSU2_TR(0x6b4fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4fb9:{NFSU2_TR(0x6b4fb9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6b4fbb:{NFSU2_TR(0x6b4fbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b4fc1:{NFSU2_TR(0x6b4fc1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b4fea;}}
}
B6b4fc3:L6b4fc3:{c.instructions+=5;NFSU2_TR(0x6b4fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4fc9:{NFSU2_TR(0x6b4fc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4fcc:{NFSU2_TR(0x6b4fcc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4fd0:{NFSU2_TR(0x6b4fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4fd3:{NFSU2_TR(0x6b4fd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b4fe6;}}
}
B6b4fd5:L6b4fd5:{c.instructions+=6;NFSU2_TR(0x6b4fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4fd8:{NFSU2_TR(0x6b4fd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b4fda:{NFSU2_TR(0x6b4fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4fdd:{NFSU2_TR(0x6b4fdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b4fe0:{NFSU2_TR(0x6b4fe0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b4fe4:{NFSU2_TR(0x6b4fe4);
if(r1(R+518)){{goto L6b4fea;}}
}
B6b4fe6:L6b4fe6:{c.instructions+=1;NFSU2_TR(0x6b4fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b4fea:L6b4fea:{c.instructions+=7;NFSU2_TR(0x6b4fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4fed:{NFSU2_TR(0x6b4fed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b4ff2:{NFSU2_TR(0x6b4ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b4ff5:{NFSU2_TR(0x6b4ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b4ff8:{NFSU2_TR(0x6b4ff8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b4ffa:{NFSU2_TR(0x6b4ffa);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b4ffa);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b4ffa);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6b4ffd:{NFSU2_TR(0x6b4ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x6b5001u,6b5);
}
XIT:NFSU2_TR_EXIT(0x6b4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
