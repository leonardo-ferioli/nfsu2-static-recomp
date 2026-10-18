#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c3(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c4(u8* __restrict R,Cpu& c);
u32 page_5c4(Cpu& c){return body_5c4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c4000:goto L5c4000;
case 0x5c4002:c.instructions+=66;goto B5c4002;
case 0x5c4009:c.instructions+=65;goto B5c4009;
case 0x5c400d:c.instructions+=64;goto B5c400d;
case 0x5c4011:c.instructions+=63;goto B5c4011;
case 0x5c4018:c.instructions+=62;goto B5c4018;
case 0x5c401c:c.instructions+=61;goto B5c401c;
case 0x5c401e:c.instructions+=60;goto B5c401e;
case 0x5c4022:c.instructions+=59;goto B5c4022;
case 0x5c4029:c.instructions+=58;goto B5c4029;
case 0x5c402b:c.instructions+=57;goto B5c402b;
case 0x5c402f:c.instructions+=56;goto B5c402f;
case 0x5c4036:c.instructions+=55;goto B5c4036;
case 0x5c4038:c.instructions+=54;goto B5c4038;
case 0x5c403f:c.instructions+=53;goto B5c403f;
case 0x5c4043:c.instructions+=52;goto B5c4043;
case 0x5c404a:c.instructions+=51;goto B5c404a;
case 0x5c404e:c.instructions+=50;goto B5c404e;
case 0x5c4055:c.instructions+=49;goto B5c4055;
case 0x5c4057:c.instructions+=48;goto B5c4057;
case 0x5c405b:c.instructions+=47;goto B5c405b;
case 0x5c4062:c.instructions+=46;goto B5c4062;
case 0x5c4064:c.instructions+=45;goto B5c4064;
case 0x5c4068:c.instructions+=44;goto B5c4068;
case 0x5c406f:c.instructions+=43;goto B5c406f;
case 0x5c4071:c.instructions+=42;goto B5c4071;
case 0x5c4078:c.instructions+=41;goto B5c4078;
case 0x5c407f:c.instructions+=40;goto B5c407f;
case 0x5c4083:c.instructions+=39;goto B5c4083;
case 0x5c4087:c.instructions+=38;goto B5c4087;
case 0x5c408e:c.instructions+=37;goto B5c408e;
case 0x5c4090:c.instructions+=36;goto B5c4090;
case 0x5c4094:c.instructions+=35;goto B5c4094;
case 0x5c409b:c.instructions+=34;goto B5c409b;
case 0x5c409d:c.instructions+=33;goto B5c409d;
case 0x5c40a1:c.instructions+=32;goto B5c40a1;
case 0x5c40a8:c.instructions+=31;goto B5c40a8;
case 0x5c40aa:c.instructions+=30;goto B5c40aa;
case 0x5c40b1:c.instructions+=29;goto B5c40b1;
case 0x5c40b5:c.instructions+=28;goto B5c40b5;
case 0x5c40bc:c.instructions+=27;goto B5c40bc;
case 0x5c40c0:c.instructions+=26;goto B5c40c0;
case 0x5c40c7:c.instructions+=25;goto B5c40c7;
case 0x5c40c9:c.instructions+=24;goto B5c40c9;
case 0x5c40cd:c.instructions+=23;goto B5c40cd;
case 0x5c40d4:c.instructions+=22;goto B5c40d4;
case 0x5c40d6:c.instructions+=21;goto B5c40d6;
case 0x5c40da:c.instructions+=20;goto B5c40da;
case 0x5c40e1:c.instructions+=19;goto B5c40e1;
case 0x5c40e3:c.instructions+=18;goto B5c40e3;
case 0x5c40ea:c.instructions+=17;goto B5c40ea;
case 0x5c40eb:c.instructions+=16;goto B5c40eb;
case 0x5c40f2:c.instructions+=15;goto B5c40f2;
case 0x5c40f6:c.instructions+=14;goto B5c40f6;
case 0x5c40fa:c.instructions+=13;goto B5c40fa;
case 0x5c40fb:c.instructions+=12;goto B5c40fb;
case 0x5c4102:c.instructions+=11;goto B5c4102;
case 0x5c4106:c.instructions+=10;goto B5c4106;
case 0x5c410d:c.instructions+=9;goto B5c410d;
case 0x5c410f:c.instructions+=8;goto B5c410f;
case 0x5c4113:c.instructions+=7;goto B5c4113;
case 0x5c411a:c.instructions+=6;goto B5c411a;
case 0x5c411c:c.instructions+=5;goto B5c411c;
case 0x5c4120:c.instructions+=4;goto B5c4120;
case 0x5c4127:c.instructions+=3;goto B5c4127;
case 0x5c4129:c.instructions+=2;goto B5c4129;
case 0x5c4130:c.instructions+=1;goto B5c4130;
case 0x5c4135:goto L5c4135;
case 0x5c413a:c.instructions+=5;goto B5c413a;
case 0x5c413e:c.instructions+=4;goto B5c413e;
case 0x5c413f:c.instructions+=3;goto B5c413f;
case 0x5c4143:c.instructions+=2;goto B5c4143;
case 0x5c4144:c.instructions+=1;goto B5c4144;
case 0x5c4149:goto L5c4149;
case 0x5c414c:c.instructions+=1;goto B5c414c;
case 0x5c4151:goto L5c4151;
case 0x5c4156:c.instructions+=5;goto B5c4156;
case 0x5c415a:c.instructions+=4;goto B5c415a;
case 0x5c415b:c.instructions+=3;goto B5c415b;
case 0x5c415f:c.instructions+=2;goto B5c415f;
case 0x5c4160:c.instructions+=1;goto B5c4160;
case 0x5c4165:goto L5c4165;
case 0x5c4169:c.instructions+=196;goto B5c4169;
case 0x5c416d:c.instructions+=195;goto B5c416d;
case 0x5c4171:c.instructions+=194;goto B5c4171;
case 0x5c4175:c.instructions+=193;goto B5c4175;
case 0x5c4177:c.instructions+=192;goto B5c4177;
case 0x5c417b:c.instructions+=191;goto B5c417b;
case 0x5c417f:c.instructions+=190;goto B5c417f;
case 0x5c4181:c.instructions+=189;goto B5c4181;
case 0x5c4185:c.instructions+=188;goto B5c4185;
case 0x5c4189:c.instructions+=187;goto B5c4189;
case 0x5c418b:c.instructions+=186;goto B5c418b;
case 0x5c4192:c.instructions+=185;goto B5c4192;
case 0x5c4196:c.instructions+=184;goto B5c4196;
case 0x5c419a:c.instructions+=183;goto B5c419a;
case 0x5c419e:c.instructions+=182;goto B5c419e;
case 0x5c41a2:c.instructions+=181;goto B5c41a2;
case 0x5c41a4:c.instructions+=180;goto B5c41a4;
case 0x5c41a8:c.instructions+=179;goto B5c41a8;
case 0x5c41ac:c.instructions+=178;goto B5c41ac;
case 0x5c41ae:c.instructions+=177;goto B5c41ae;
case 0x5c41b2:c.instructions+=176;goto B5c41b2;
case 0x5c41b6:c.instructions+=175;goto B5c41b6;
case 0x5c41b8:c.instructions+=174;goto B5c41b8;
case 0x5c41bf:c.instructions+=173;goto B5c41bf;
case 0x5c41c3:c.instructions+=172;goto B5c41c3;
case 0x5c41c7:c.instructions+=171;goto B5c41c7;
case 0x5c41cb:c.instructions+=170;goto B5c41cb;
case 0x5c41cf:c.instructions+=169;goto B5c41cf;
case 0x5c41d1:c.instructions+=168;goto B5c41d1;
case 0x5c41d5:c.instructions+=167;goto B5c41d5;
case 0x5c41d9:c.instructions+=166;goto B5c41d9;
case 0x5c41db:c.instructions+=165;goto B5c41db;
case 0x5c41df:c.instructions+=164;goto B5c41df;
case 0x5c41e3:c.instructions+=163;goto B5c41e3;
case 0x5c41e5:c.instructions+=162;goto B5c41e5;
case 0x5c41ec:c.instructions+=161;goto B5c41ec;
case 0x5c41f0:c.instructions+=160;goto B5c41f0;
case 0x5c41f4:c.instructions+=159;goto B5c41f4;
case 0x5c41f8:c.instructions+=158;goto B5c41f8;
case 0x5c41fc:c.instructions+=157;goto B5c41fc;
case 0x5c41fe:c.instructions+=156;goto B5c41fe;
case 0x5c4202:c.instructions+=155;goto B5c4202;
case 0x5c4206:c.instructions+=154;goto B5c4206;
case 0x5c4208:c.instructions+=153;goto B5c4208;
case 0x5c420c:c.instructions+=152;goto B5c420c;
case 0x5c4210:c.instructions+=151;goto B5c4210;
case 0x5c4212:c.instructions+=150;goto B5c4212;
case 0x5c4219:c.instructions+=149;goto B5c4219;
case 0x5c421d:c.instructions+=148;goto B5c421d;
case 0x5c4221:c.instructions+=147;goto B5c4221;
case 0x5c4225:c.instructions+=146;goto B5c4225;
case 0x5c4229:c.instructions+=145;goto B5c4229;
case 0x5c422b:c.instructions+=144;goto B5c422b;
case 0x5c422f:c.instructions+=143;goto B5c422f;
case 0x5c4233:c.instructions+=142;goto B5c4233;
case 0x5c4235:c.instructions+=141;goto B5c4235;
case 0x5c4239:c.instructions+=140;goto B5c4239;
case 0x5c423d:c.instructions+=139;goto B5c423d;
case 0x5c423f:c.instructions+=138;goto B5c423f;
case 0x5c4246:c.instructions+=137;goto B5c4246;
case 0x5c424a:c.instructions+=136;goto B5c424a;
case 0x5c424e:c.instructions+=135;goto B5c424e;
case 0x5c4252:c.instructions+=134;goto B5c4252;
case 0x5c4256:c.instructions+=133;goto B5c4256;
case 0x5c4258:c.instructions+=132;goto B5c4258;
case 0x5c425c:c.instructions+=131;goto B5c425c;
case 0x5c4260:c.instructions+=130;goto B5c4260;
case 0x5c4262:c.instructions+=129;goto B5c4262;
case 0x5c4266:c.instructions+=128;goto B5c4266;
case 0x5c426a:c.instructions+=127;goto B5c426a;
case 0x5c426c:c.instructions+=126;goto B5c426c;
case 0x5c4273:c.instructions+=125;goto B5c4273;
case 0x5c4277:c.instructions+=124;goto B5c4277;
case 0x5c427b:c.instructions+=123;goto B5c427b;
case 0x5c427f:c.instructions+=122;goto B5c427f;
case 0x5c4283:c.instructions+=121;goto B5c4283;
case 0x5c4285:c.instructions+=120;goto B5c4285;
case 0x5c4289:c.instructions+=119;goto B5c4289;
case 0x5c428d:c.instructions+=118;goto B5c428d;
case 0x5c428f:c.instructions+=117;goto B5c428f;
case 0x5c4293:c.instructions+=116;goto B5c4293;
case 0x5c4297:c.instructions+=115;goto B5c4297;
case 0x5c4299:c.instructions+=114;goto B5c4299;
case 0x5c42a0:c.instructions+=113;goto B5c42a0;
case 0x5c42a4:c.instructions+=112;goto B5c42a4;
case 0x5c42a8:c.instructions+=111;goto B5c42a8;
case 0x5c42ac:c.instructions+=110;goto B5c42ac;
case 0x5c42b0:c.instructions+=109;goto B5c42b0;
case 0x5c42b2:c.instructions+=108;goto B5c42b2;
case 0x5c42b6:c.instructions+=107;goto B5c42b6;
case 0x5c42ba:c.instructions+=106;goto B5c42ba;
case 0x5c42bc:c.instructions+=105;goto B5c42bc;
case 0x5c42c0:c.instructions+=104;goto B5c42c0;
case 0x5c42c4:c.instructions+=103;goto B5c42c4;
case 0x5c42c6:c.instructions+=102;goto B5c42c6;
case 0x5c42cd:c.instructions+=101;goto B5c42cd;
case 0x5c42d1:c.instructions+=100;goto B5c42d1;
case 0x5c42d5:c.instructions+=99;goto B5c42d5;
case 0x5c42dc:c.instructions+=98;goto B5c42dc;
case 0x5c42e0:c.instructions+=97;goto B5c42e0;
case 0x5c42e2:c.instructions+=96;goto B5c42e2;
case 0x5c42e6:c.instructions+=95;goto B5c42e6;
case 0x5c42ed:c.instructions+=94;goto B5c42ed;
case 0x5c42ef:c.instructions+=93;goto B5c42ef;
case 0x5c42f3:c.instructions+=92;goto B5c42f3;
case 0x5c42fa:c.instructions+=91;goto B5c42fa;
case 0x5c42fc:c.instructions+=90;goto B5c42fc;
case 0x5c4303:c.instructions+=89;goto B5c4303;
case 0x5c4307:c.instructions+=88;goto B5c4307;
case 0x5c430b:c.instructions+=87;goto B5c430b;
case 0x5c4312:c.instructions+=86;goto B5c4312;
case 0x5c4316:c.instructions+=85;goto B5c4316;
case 0x5c4318:c.instructions+=84;goto B5c4318;
case 0x5c431f:c.instructions+=83;goto B5c431f;
case 0x5c4323:c.instructions+=82;goto B5c4323;
case 0x5c4325:c.instructions+=81;goto B5c4325;
case 0x5c4329:c.instructions+=80;goto B5c4329;
case 0x5c4330:c.instructions+=79;goto B5c4330;
case 0x5c4332:c.instructions+=78;goto B5c4332;
case 0x5c4339:c.instructions+=77;goto B5c4339;
case 0x5c433d:c.instructions+=76;goto B5c433d;
case 0x5c4341:c.instructions+=75;goto B5c4341;
case 0x5c4348:c.instructions+=74;goto B5c4348;
case 0x5c434c:c.instructions+=73;goto B5c434c;
case 0x5c434e:c.instructions+=72;goto B5c434e;
case 0x5c4352:c.instructions+=71;goto B5c4352;
case 0x5c4359:c.instructions+=70;goto B5c4359;
case 0x5c435b:c.instructions+=69;goto B5c435b;
case 0x5c435f:c.instructions+=68;goto B5c435f;
case 0x5c4366:c.instructions+=67;goto B5c4366;
case 0x5c4368:c.instructions+=66;goto B5c4368;
case 0x5c436f:c.instructions+=65;goto B5c436f;
case 0x5c4373:c.instructions+=64;goto B5c4373;
case 0x5c4377:c.instructions+=63;goto B5c4377;
case 0x5c437e:c.instructions+=62;goto B5c437e;
case 0x5c4382:c.instructions+=61;goto B5c4382;
case 0x5c4384:c.instructions+=60;goto B5c4384;
case 0x5c4388:c.instructions+=59;goto B5c4388;
case 0x5c438f:c.instructions+=58;goto B5c438f;
case 0x5c4391:c.instructions+=57;goto B5c4391;
case 0x5c4395:c.instructions+=56;goto B5c4395;
case 0x5c439c:c.instructions+=55;goto B5c439c;
case 0x5c439e:c.instructions+=54;goto B5c439e;
case 0x5c43a5:c.instructions+=53;goto B5c43a5;
case 0x5c43a9:c.instructions+=52;goto B5c43a9;
case 0x5c43b0:c.instructions+=51;goto B5c43b0;
case 0x5c43b4:c.instructions+=50;goto B5c43b4;
case 0x5c43bb:c.instructions+=49;goto B5c43bb;
case 0x5c43bd:c.instructions+=48;goto B5c43bd;
case 0x5c43c1:c.instructions+=47;goto B5c43c1;
case 0x5c43c8:c.instructions+=46;goto B5c43c8;
case 0x5c43ca:c.instructions+=45;goto B5c43ca;
case 0x5c43ce:c.instructions+=44;goto B5c43ce;
case 0x5c43d5:c.instructions+=43;goto B5c43d5;
case 0x5c43d7:c.instructions+=42;goto B5c43d7;
case 0x5c43de:c.instructions+=41;goto B5c43de;
case 0x5c43e5:c.instructions+=40;goto B5c43e5;
case 0x5c43e9:c.instructions+=39;goto B5c43e9;
case 0x5c43ed:c.instructions+=38;goto B5c43ed;
case 0x5c43f4:c.instructions+=37;goto B5c43f4;
case 0x5c43f6:c.instructions+=36;goto B5c43f6;
case 0x5c43fa:c.instructions+=35;goto B5c43fa;
case 0x5c4401:c.instructions+=34;goto B5c4401;
case 0x5c4403:c.instructions+=33;goto B5c4403;
case 0x5c4407:c.instructions+=32;goto B5c4407;
case 0x5c440e:c.instructions+=31;goto B5c440e;
case 0x5c4410:c.instructions+=30;goto B5c4410;
case 0x5c4417:c.instructions+=29;goto B5c4417;
case 0x5c441b:c.instructions+=28;goto B5c441b;
case 0x5c4422:c.instructions+=27;goto B5c4422;
case 0x5c4426:c.instructions+=26;goto B5c4426;
case 0x5c442d:c.instructions+=25;goto B5c442d;
case 0x5c442f:c.instructions+=24;goto B5c442f;
case 0x5c4433:c.instructions+=23;goto B5c4433;
case 0x5c443a:c.instructions+=22;goto B5c443a;
case 0x5c443c:c.instructions+=21;goto B5c443c;
case 0x5c4440:c.instructions+=20;goto B5c4440;
case 0x5c4447:c.instructions+=19;goto B5c4447;
case 0x5c4449:c.instructions+=18;goto B5c4449;
case 0x5c4450:c.instructions+=17;goto B5c4450;
case 0x5c4451:c.instructions+=16;goto B5c4451;
case 0x5c4458:c.instructions+=15;goto B5c4458;
case 0x5c445c:c.instructions+=14;goto B5c445c;
case 0x5c4460:c.instructions+=13;goto B5c4460;
case 0x5c4461:c.instructions+=12;goto B5c4461;
case 0x5c4468:c.instructions+=11;goto B5c4468;
case 0x5c446c:c.instructions+=10;goto B5c446c;
case 0x5c4473:c.instructions+=9;goto B5c4473;
case 0x5c4475:c.instructions+=8;goto B5c4475;
case 0x5c4479:c.instructions+=7;goto B5c4479;
case 0x5c4480:c.instructions+=6;goto B5c4480;
case 0x5c4482:c.instructions+=5;goto B5c4482;
case 0x5c4486:c.instructions+=4;goto B5c4486;
case 0x5c448d:c.instructions+=3;goto B5c448d;
case 0x5c448f:c.instructions+=2;goto B5c448f;
case 0x5c4496:c.instructions+=1;goto B5c4496;
case 0x5c449b:goto L5c449b;
case 0x5c44a0:c.instructions+=5;goto B5c44a0;
case 0x5c44a4:c.instructions+=4;goto B5c44a4;
case 0x5c44a5:c.instructions+=3;goto B5c44a5;
case 0x5c44a9:c.instructions+=2;goto B5c44a9;
case 0x5c44aa:c.instructions+=1;goto B5c44aa;
case 0x5c44af:goto L5c44af;
case 0x5c44b4:c.instructions+=5;goto B5c44b4;
case 0x5c44b8:c.instructions+=4;goto B5c44b8;
case 0x5c44b9:c.instructions+=3;goto B5c44b9;
case 0x5c44bd:c.instructions+=2;goto B5c44bd;
case 0x5c44be:c.instructions+=1;goto B5c44be;
case 0x5c44c3:goto L5c44c3;
case 0x5c44c6:c.instructions+=1;goto B5c44c6;
case 0x5c44cb:goto L5c44cb;
case 0x5c44d0:c.instructions+=5;goto B5c44d0;
case 0x5c44d4:c.instructions+=4;goto B5c44d4;
case 0x5c44d5:c.instructions+=3;goto B5c44d5;
case 0x5c44d9:c.instructions+=2;goto B5c44d9;
case 0x5c44da:c.instructions+=1;goto B5c44da;
case 0x5c44df:goto L5c44df;
case 0x5c44e3:c.instructions+=196;goto B5c44e3;
case 0x5c44e7:c.instructions+=195;goto B5c44e7;
case 0x5c44eb:c.instructions+=194;goto B5c44eb;
case 0x5c44ef:c.instructions+=193;goto B5c44ef;
case 0x5c44f1:c.instructions+=192;goto B5c44f1;
case 0x5c44f5:c.instructions+=191;goto B5c44f5;
case 0x5c44f9:c.instructions+=190;goto B5c44f9;
case 0x5c44fb:c.instructions+=189;goto B5c44fb;
case 0x5c44ff:c.instructions+=188;goto B5c44ff;
case 0x5c4503:c.instructions+=187;goto B5c4503;
case 0x5c4505:c.instructions+=186;goto B5c4505;
case 0x5c450c:c.instructions+=185;goto B5c450c;
case 0x5c4510:c.instructions+=184;goto B5c4510;
case 0x5c4514:c.instructions+=183;goto B5c4514;
case 0x5c4518:c.instructions+=182;goto B5c4518;
case 0x5c451c:c.instructions+=181;goto B5c451c;
case 0x5c451e:c.instructions+=180;goto B5c451e;
case 0x5c4522:c.instructions+=179;goto B5c4522;
case 0x5c4526:c.instructions+=178;goto B5c4526;
case 0x5c4528:c.instructions+=177;goto B5c4528;
case 0x5c452c:c.instructions+=176;goto B5c452c;
case 0x5c4530:c.instructions+=175;goto B5c4530;
case 0x5c4532:c.instructions+=174;goto B5c4532;
case 0x5c4539:c.instructions+=173;goto B5c4539;
case 0x5c453d:c.instructions+=172;goto B5c453d;
case 0x5c4541:c.instructions+=171;goto B5c4541;
case 0x5c4545:c.instructions+=170;goto B5c4545;
case 0x5c4549:c.instructions+=169;goto B5c4549;
case 0x5c454b:c.instructions+=168;goto B5c454b;
case 0x5c454f:c.instructions+=167;goto B5c454f;
case 0x5c4553:c.instructions+=166;goto B5c4553;
case 0x5c4555:c.instructions+=165;goto B5c4555;
case 0x5c4559:c.instructions+=164;goto B5c4559;
case 0x5c455d:c.instructions+=163;goto B5c455d;
case 0x5c455f:c.instructions+=162;goto B5c455f;
case 0x5c4566:c.instructions+=161;goto B5c4566;
case 0x5c456a:c.instructions+=160;goto B5c456a;
case 0x5c456e:c.instructions+=159;goto B5c456e;
case 0x5c4572:c.instructions+=158;goto B5c4572;
case 0x5c4576:c.instructions+=157;goto B5c4576;
case 0x5c4578:c.instructions+=156;goto B5c4578;
case 0x5c457c:c.instructions+=155;goto B5c457c;
case 0x5c4580:c.instructions+=154;goto B5c4580;
case 0x5c4582:c.instructions+=153;goto B5c4582;
case 0x5c4586:c.instructions+=152;goto B5c4586;
case 0x5c458a:c.instructions+=151;goto B5c458a;
case 0x5c458c:c.instructions+=150;goto B5c458c;
case 0x5c4593:c.instructions+=149;goto B5c4593;
case 0x5c4597:c.instructions+=148;goto B5c4597;
case 0x5c459b:c.instructions+=147;goto B5c459b;
case 0x5c459f:c.instructions+=146;goto B5c459f;
case 0x5c45a3:c.instructions+=145;goto B5c45a3;
case 0x5c45a5:c.instructions+=144;goto B5c45a5;
case 0x5c45a9:c.instructions+=143;goto B5c45a9;
case 0x5c45ad:c.instructions+=142;goto B5c45ad;
case 0x5c45af:c.instructions+=141;goto B5c45af;
case 0x5c45b3:c.instructions+=140;goto B5c45b3;
case 0x5c45b7:c.instructions+=139;goto B5c45b7;
case 0x5c45b9:c.instructions+=138;goto B5c45b9;
case 0x5c45c0:c.instructions+=137;goto B5c45c0;
case 0x5c45c4:c.instructions+=136;goto B5c45c4;
case 0x5c45c8:c.instructions+=135;goto B5c45c8;
case 0x5c45cc:c.instructions+=134;goto B5c45cc;
case 0x5c45d0:c.instructions+=133;goto B5c45d0;
case 0x5c45d2:c.instructions+=132;goto B5c45d2;
case 0x5c45d6:c.instructions+=131;goto B5c45d6;
case 0x5c45da:c.instructions+=130;goto B5c45da;
case 0x5c45dc:c.instructions+=129;goto B5c45dc;
case 0x5c45e0:c.instructions+=128;goto B5c45e0;
case 0x5c45e4:c.instructions+=127;goto B5c45e4;
case 0x5c45e6:c.instructions+=126;goto B5c45e6;
case 0x5c45ed:c.instructions+=125;goto B5c45ed;
case 0x5c45f1:c.instructions+=124;goto B5c45f1;
case 0x5c45f5:c.instructions+=123;goto B5c45f5;
case 0x5c45f9:c.instructions+=122;goto B5c45f9;
case 0x5c45fd:c.instructions+=121;goto B5c45fd;
case 0x5c45ff:c.instructions+=120;goto B5c45ff;
case 0x5c4603:c.instructions+=119;goto B5c4603;
case 0x5c4607:c.instructions+=118;goto B5c4607;
case 0x5c4609:c.instructions+=117;goto B5c4609;
case 0x5c460d:c.instructions+=116;goto B5c460d;
case 0x5c4611:c.instructions+=115;goto B5c4611;
case 0x5c4613:c.instructions+=114;goto B5c4613;
case 0x5c461a:c.instructions+=113;goto B5c461a;
case 0x5c461e:c.instructions+=112;goto B5c461e;
case 0x5c4622:c.instructions+=111;goto B5c4622;
case 0x5c4626:c.instructions+=110;goto B5c4626;
case 0x5c462a:c.instructions+=109;goto B5c462a;
case 0x5c462c:c.instructions+=108;goto B5c462c;
case 0x5c4630:c.instructions+=107;goto B5c4630;
case 0x5c4634:c.instructions+=106;goto B5c4634;
case 0x5c4636:c.instructions+=105;goto B5c4636;
case 0x5c463a:c.instructions+=104;goto B5c463a;
case 0x5c463e:c.instructions+=103;goto B5c463e;
case 0x5c4640:c.instructions+=102;goto B5c4640;
case 0x5c4647:c.instructions+=101;goto B5c4647;
case 0x5c464b:c.instructions+=100;goto B5c464b;
case 0x5c464f:c.instructions+=99;goto B5c464f;
case 0x5c4656:c.instructions+=98;goto B5c4656;
case 0x5c465a:c.instructions+=97;goto B5c465a;
case 0x5c465c:c.instructions+=96;goto B5c465c;
case 0x5c4660:c.instructions+=95;goto B5c4660;
case 0x5c4667:c.instructions+=94;goto B5c4667;
case 0x5c4669:c.instructions+=93;goto B5c4669;
case 0x5c466d:c.instructions+=92;goto B5c466d;
case 0x5c4674:c.instructions+=91;goto B5c4674;
case 0x5c4676:c.instructions+=90;goto B5c4676;
case 0x5c467d:c.instructions+=89;goto B5c467d;
case 0x5c4681:c.instructions+=88;goto B5c4681;
case 0x5c4685:c.instructions+=87;goto B5c4685;
case 0x5c468c:c.instructions+=86;goto B5c468c;
case 0x5c4690:c.instructions+=85;goto B5c4690;
case 0x5c4692:c.instructions+=84;goto B5c4692;
case 0x5c4699:c.instructions+=83;goto B5c4699;
case 0x5c469d:c.instructions+=82;goto B5c469d;
case 0x5c469f:c.instructions+=81;goto B5c469f;
case 0x5c46a3:c.instructions+=80;goto B5c46a3;
case 0x5c46aa:c.instructions+=79;goto B5c46aa;
case 0x5c46ac:c.instructions+=78;goto B5c46ac;
case 0x5c46b3:c.instructions+=77;goto B5c46b3;
case 0x5c46b7:c.instructions+=76;goto B5c46b7;
case 0x5c46bb:c.instructions+=75;goto B5c46bb;
case 0x5c46c2:c.instructions+=74;goto B5c46c2;
case 0x5c46c6:c.instructions+=73;goto B5c46c6;
case 0x5c46c8:c.instructions+=72;goto B5c46c8;
case 0x5c46cc:c.instructions+=71;goto B5c46cc;
case 0x5c46d3:c.instructions+=70;goto B5c46d3;
case 0x5c46d5:c.instructions+=69;goto B5c46d5;
case 0x5c46d9:c.instructions+=68;goto B5c46d9;
case 0x5c46e0:c.instructions+=67;goto B5c46e0;
case 0x5c46e2:c.instructions+=66;goto B5c46e2;
case 0x5c46e9:c.instructions+=65;goto B5c46e9;
case 0x5c46ed:c.instructions+=64;goto B5c46ed;
case 0x5c46f1:c.instructions+=63;goto B5c46f1;
case 0x5c46f8:c.instructions+=62;goto B5c46f8;
case 0x5c46fc:c.instructions+=61;goto B5c46fc;
case 0x5c46fe:c.instructions+=60;goto B5c46fe;
case 0x5c4702:c.instructions+=59;goto B5c4702;
case 0x5c4709:c.instructions+=58;goto B5c4709;
case 0x5c470b:c.instructions+=57;goto B5c470b;
case 0x5c470f:c.instructions+=56;goto B5c470f;
case 0x5c4716:c.instructions+=55;goto B5c4716;
case 0x5c4718:c.instructions+=54;goto B5c4718;
case 0x5c471f:c.instructions+=53;goto B5c471f;
case 0x5c4723:c.instructions+=52;goto B5c4723;
case 0x5c472a:c.instructions+=51;goto B5c472a;
case 0x5c472e:c.instructions+=50;goto B5c472e;
case 0x5c4735:c.instructions+=49;goto B5c4735;
case 0x5c4737:c.instructions+=48;goto B5c4737;
case 0x5c473b:c.instructions+=47;goto B5c473b;
case 0x5c4742:c.instructions+=46;goto B5c4742;
case 0x5c4744:c.instructions+=45;goto B5c4744;
case 0x5c4748:c.instructions+=44;goto B5c4748;
case 0x5c474f:c.instructions+=43;goto B5c474f;
case 0x5c4751:c.instructions+=42;goto B5c4751;
case 0x5c4758:c.instructions+=41;goto B5c4758;
case 0x5c475f:c.instructions+=40;goto B5c475f;
case 0x5c4763:c.instructions+=39;goto B5c4763;
case 0x5c4767:c.instructions+=38;goto B5c4767;
case 0x5c476e:c.instructions+=37;goto B5c476e;
case 0x5c4770:c.instructions+=36;goto B5c4770;
case 0x5c4774:c.instructions+=35;goto B5c4774;
case 0x5c477b:c.instructions+=34;goto B5c477b;
case 0x5c477d:c.instructions+=33;goto B5c477d;
case 0x5c4781:c.instructions+=32;goto B5c4781;
case 0x5c4788:c.instructions+=31;goto B5c4788;
case 0x5c478a:c.instructions+=30;goto B5c478a;
case 0x5c4791:c.instructions+=29;goto B5c4791;
case 0x5c4795:c.instructions+=28;goto B5c4795;
case 0x5c479c:c.instructions+=27;goto B5c479c;
case 0x5c47a0:c.instructions+=26;goto B5c47a0;
case 0x5c47a7:c.instructions+=25;goto B5c47a7;
case 0x5c47a9:c.instructions+=24;goto B5c47a9;
case 0x5c47ad:c.instructions+=23;goto B5c47ad;
case 0x5c47b4:c.instructions+=22;goto B5c47b4;
case 0x5c47b6:c.instructions+=21;goto B5c47b6;
case 0x5c47ba:c.instructions+=20;goto B5c47ba;
case 0x5c47c1:c.instructions+=19;goto B5c47c1;
case 0x5c47c3:c.instructions+=18;goto B5c47c3;
case 0x5c47ca:c.instructions+=17;goto B5c47ca;
case 0x5c47cb:c.instructions+=16;goto B5c47cb;
case 0x5c47d2:c.instructions+=15;goto B5c47d2;
case 0x5c47d6:c.instructions+=14;goto B5c47d6;
case 0x5c47da:c.instructions+=13;goto B5c47da;
case 0x5c47db:c.instructions+=12;goto B5c47db;
case 0x5c47e2:c.instructions+=11;goto B5c47e2;
case 0x5c47e6:c.instructions+=10;goto B5c47e6;
case 0x5c47ed:c.instructions+=9;goto B5c47ed;
case 0x5c47ef:c.instructions+=8;goto B5c47ef;
case 0x5c47f3:c.instructions+=7;goto B5c47f3;
case 0x5c47fa:c.instructions+=6;goto B5c47fa;
case 0x5c47fc:c.instructions+=5;goto B5c47fc;
case 0x5c4800:c.instructions+=4;goto B5c4800;
case 0x5c4807:c.instructions+=3;goto B5c4807;
case 0x5c4809:c.instructions+=2;goto B5c4809;
case 0x5c4810:c.instructions+=1;goto B5c4810;
case 0x5c4815:goto L5c4815;
case 0x5c481a:c.instructions+=5;goto B5c481a;
case 0x5c481e:c.instructions+=4;goto B5c481e;
case 0x5c481f:c.instructions+=3;goto B5c481f;
case 0x5c4823:c.instructions+=2;goto B5c4823;
case 0x5c4824:c.instructions+=1;goto B5c4824;
case 0x5c4829:goto L5c4829;
case 0x5c482e:c.instructions+=5;goto B5c482e;
case 0x5c4832:c.instructions+=4;goto B5c4832;
case 0x5c4833:c.instructions+=3;goto B5c4833;
case 0x5c4837:c.instructions+=2;goto B5c4837;
case 0x5c4838:c.instructions+=1;goto B5c4838;
case 0x5c483d:goto L5c483d;
case 0x5c4840:c.instructions+=1;goto B5c4840;
case 0x5c4845:goto L5c4845;
case 0x5c484a:c.instructions+=5;goto B5c484a;
case 0x5c484e:c.instructions+=4;goto B5c484e;
case 0x5c484f:c.instructions+=3;goto B5c484f;
case 0x5c4853:c.instructions+=2;goto B5c4853;
case 0x5c4854:c.instructions+=1;goto B5c4854;
case 0x5c4859:goto L5c4859;
case 0x5c485d:c.instructions+=196;goto B5c485d;
case 0x5c4861:c.instructions+=195;goto B5c4861;
case 0x5c4865:c.instructions+=194;goto B5c4865;
case 0x5c4869:c.instructions+=193;goto B5c4869;
case 0x5c486b:c.instructions+=192;goto B5c486b;
case 0x5c486f:c.instructions+=191;goto B5c486f;
case 0x5c4873:c.instructions+=190;goto B5c4873;
case 0x5c4875:c.instructions+=189;goto B5c4875;
case 0x5c4879:c.instructions+=188;goto B5c4879;
case 0x5c487d:c.instructions+=187;goto B5c487d;
case 0x5c487f:c.instructions+=186;goto B5c487f;
case 0x5c4886:c.instructions+=185;goto B5c4886;
case 0x5c488a:c.instructions+=184;goto B5c488a;
case 0x5c488e:c.instructions+=183;goto B5c488e;
case 0x5c4892:c.instructions+=182;goto B5c4892;
case 0x5c4896:c.instructions+=181;goto B5c4896;
case 0x5c4898:c.instructions+=180;goto B5c4898;
case 0x5c489c:c.instructions+=179;goto B5c489c;
case 0x5c48a0:c.instructions+=178;goto B5c48a0;
case 0x5c48a2:c.instructions+=177;goto B5c48a2;
case 0x5c48a6:c.instructions+=176;goto B5c48a6;
case 0x5c48aa:c.instructions+=175;goto B5c48aa;
case 0x5c48ac:c.instructions+=174;goto B5c48ac;
case 0x5c48b3:c.instructions+=173;goto B5c48b3;
case 0x5c48b7:c.instructions+=172;goto B5c48b7;
case 0x5c48bb:c.instructions+=171;goto B5c48bb;
case 0x5c48bf:c.instructions+=170;goto B5c48bf;
case 0x5c48c3:c.instructions+=169;goto B5c48c3;
case 0x5c48c5:c.instructions+=168;goto B5c48c5;
case 0x5c48c9:c.instructions+=167;goto B5c48c9;
case 0x5c48cd:c.instructions+=166;goto B5c48cd;
case 0x5c48cf:c.instructions+=165;goto B5c48cf;
case 0x5c48d3:c.instructions+=164;goto B5c48d3;
case 0x5c48d7:c.instructions+=163;goto B5c48d7;
case 0x5c48d9:c.instructions+=162;goto B5c48d9;
case 0x5c48e0:c.instructions+=161;goto B5c48e0;
case 0x5c48e4:c.instructions+=160;goto B5c48e4;
case 0x5c48e8:c.instructions+=159;goto B5c48e8;
case 0x5c48ec:c.instructions+=158;goto B5c48ec;
case 0x5c48f0:c.instructions+=157;goto B5c48f0;
case 0x5c48f2:c.instructions+=156;goto B5c48f2;
case 0x5c48f6:c.instructions+=155;goto B5c48f6;
case 0x5c48fa:c.instructions+=154;goto B5c48fa;
case 0x5c48fc:c.instructions+=153;goto B5c48fc;
case 0x5c4900:c.instructions+=152;goto B5c4900;
case 0x5c4904:c.instructions+=151;goto B5c4904;
case 0x5c4906:c.instructions+=150;goto B5c4906;
case 0x5c490d:c.instructions+=149;goto B5c490d;
case 0x5c4911:c.instructions+=148;goto B5c4911;
case 0x5c4915:c.instructions+=147;goto B5c4915;
case 0x5c4919:c.instructions+=146;goto B5c4919;
case 0x5c491d:c.instructions+=145;goto B5c491d;
case 0x5c491f:c.instructions+=144;goto B5c491f;
case 0x5c4923:c.instructions+=143;goto B5c4923;
case 0x5c4927:c.instructions+=142;goto B5c4927;
case 0x5c4929:c.instructions+=141;goto B5c4929;
case 0x5c492d:c.instructions+=140;goto B5c492d;
case 0x5c4931:c.instructions+=139;goto B5c4931;
case 0x5c4933:c.instructions+=138;goto B5c4933;
case 0x5c493a:c.instructions+=137;goto B5c493a;
case 0x5c493e:c.instructions+=136;goto B5c493e;
case 0x5c4942:c.instructions+=135;goto B5c4942;
case 0x5c4946:c.instructions+=134;goto B5c4946;
case 0x5c494a:c.instructions+=133;goto B5c494a;
case 0x5c494c:c.instructions+=132;goto B5c494c;
case 0x5c4950:c.instructions+=131;goto B5c4950;
case 0x5c4954:c.instructions+=130;goto B5c4954;
case 0x5c4956:c.instructions+=129;goto B5c4956;
case 0x5c495a:c.instructions+=128;goto B5c495a;
case 0x5c495e:c.instructions+=127;goto B5c495e;
case 0x5c4960:c.instructions+=126;goto B5c4960;
case 0x5c4967:c.instructions+=125;goto B5c4967;
case 0x5c496b:c.instructions+=124;goto B5c496b;
case 0x5c496f:c.instructions+=123;goto B5c496f;
case 0x5c4973:c.instructions+=122;goto B5c4973;
case 0x5c4977:c.instructions+=121;goto B5c4977;
case 0x5c4979:c.instructions+=120;goto B5c4979;
case 0x5c497d:c.instructions+=119;goto B5c497d;
case 0x5c4981:c.instructions+=118;goto B5c4981;
case 0x5c4983:c.instructions+=117;goto B5c4983;
case 0x5c4987:c.instructions+=116;goto B5c4987;
case 0x5c498b:c.instructions+=115;goto B5c498b;
case 0x5c498d:c.instructions+=114;goto B5c498d;
case 0x5c4994:c.instructions+=113;goto B5c4994;
case 0x5c4998:c.instructions+=112;goto B5c4998;
case 0x5c499c:c.instructions+=111;goto B5c499c;
case 0x5c49a0:c.instructions+=110;goto B5c49a0;
case 0x5c49a4:c.instructions+=109;goto B5c49a4;
case 0x5c49a6:c.instructions+=108;goto B5c49a6;
case 0x5c49aa:c.instructions+=107;goto B5c49aa;
case 0x5c49ae:c.instructions+=106;goto B5c49ae;
case 0x5c49b0:c.instructions+=105;goto B5c49b0;
case 0x5c49b4:c.instructions+=104;goto B5c49b4;
case 0x5c49b8:c.instructions+=103;goto B5c49b8;
case 0x5c49ba:c.instructions+=102;goto B5c49ba;
case 0x5c49c1:c.instructions+=101;goto B5c49c1;
case 0x5c49c5:c.instructions+=100;goto B5c49c5;
case 0x5c49c9:c.instructions+=99;goto B5c49c9;
case 0x5c49d0:c.instructions+=98;goto B5c49d0;
case 0x5c49d4:c.instructions+=97;goto B5c49d4;
case 0x5c49d6:c.instructions+=96;goto B5c49d6;
case 0x5c49da:c.instructions+=95;goto B5c49da;
case 0x5c49e1:c.instructions+=94;goto B5c49e1;
case 0x5c49e3:c.instructions+=93;goto B5c49e3;
case 0x5c49e7:c.instructions+=92;goto B5c49e7;
case 0x5c49ee:c.instructions+=91;goto B5c49ee;
case 0x5c49f0:c.instructions+=90;goto B5c49f0;
case 0x5c49f7:c.instructions+=89;goto B5c49f7;
case 0x5c49fb:c.instructions+=88;goto B5c49fb;
case 0x5c49ff:c.instructions+=87;goto B5c49ff;
case 0x5c4a06:c.instructions+=86;goto B5c4a06;
case 0x5c4a0a:c.instructions+=85;goto B5c4a0a;
case 0x5c4a0c:c.instructions+=84;goto B5c4a0c;
case 0x5c4a13:c.instructions+=83;goto B5c4a13;
case 0x5c4a17:c.instructions+=82;goto B5c4a17;
case 0x5c4a19:c.instructions+=81;goto B5c4a19;
case 0x5c4a1d:c.instructions+=80;goto B5c4a1d;
case 0x5c4a24:c.instructions+=79;goto B5c4a24;
case 0x5c4a26:c.instructions+=78;goto B5c4a26;
case 0x5c4a2d:c.instructions+=77;goto B5c4a2d;
case 0x5c4a31:c.instructions+=76;goto B5c4a31;
case 0x5c4a35:c.instructions+=75;goto B5c4a35;
case 0x5c4a3c:c.instructions+=74;goto B5c4a3c;
case 0x5c4a40:c.instructions+=73;goto B5c4a40;
case 0x5c4a42:c.instructions+=72;goto B5c4a42;
case 0x5c4a46:c.instructions+=71;goto B5c4a46;
case 0x5c4a4d:c.instructions+=70;goto B5c4a4d;
case 0x5c4a4f:c.instructions+=69;goto B5c4a4f;
case 0x5c4a53:c.instructions+=68;goto B5c4a53;
case 0x5c4a5a:c.instructions+=67;goto B5c4a5a;
case 0x5c4a5c:c.instructions+=66;goto B5c4a5c;
case 0x5c4a63:c.instructions+=65;goto B5c4a63;
case 0x5c4a67:c.instructions+=64;goto B5c4a67;
case 0x5c4a6b:c.instructions+=63;goto B5c4a6b;
case 0x5c4a72:c.instructions+=62;goto B5c4a72;
case 0x5c4a76:c.instructions+=61;goto B5c4a76;
case 0x5c4a78:c.instructions+=60;goto B5c4a78;
case 0x5c4a7c:c.instructions+=59;goto B5c4a7c;
case 0x5c4a83:c.instructions+=58;goto B5c4a83;
case 0x5c4a85:c.instructions+=57;goto B5c4a85;
case 0x5c4a89:c.instructions+=56;goto B5c4a89;
case 0x5c4a90:c.instructions+=55;goto B5c4a90;
case 0x5c4a92:c.instructions+=54;goto B5c4a92;
case 0x5c4a99:c.instructions+=53;goto B5c4a99;
case 0x5c4a9d:c.instructions+=52;goto B5c4a9d;
case 0x5c4aa4:c.instructions+=51;goto B5c4aa4;
case 0x5c4aa8:c.instructions+=50;goto B5c4aa8;
case 0x5c4aaf:c.instructions+=49;goto B5c4aaf;
case 0x5c4ab1:c.instructions+=48;goto B5c4ab1;
case 0x5c4ab5:c.instructions+=47;goto B5c4ab5;
case 0x5c4abc:c.instructions+=46;goto B5c4abc;
case 0x5c4abe:c.instructions+=45;goto B5c4abe;
case 0x5c4ac2:c.instructions+=44;goto B5c4ac2;
case 0x5c4ac9:c.instructions+=43;goto B5c4ac9;
case 0x5c4acb:c.instructions+=42;goto B5c4acb;
case 0x5c4ad2:c.instructions+=41;goto B5c4ad2;
case 0x5c4ad9:c.instructions+=40;goto B5c4ad9;
case 0x5c4add:c.instructions+=39;goto B5c4add;
case 0x5c4ae1:c.instructions+=38;goto B5c4ae1;
case 0x5c4ae8:c.instructions+=37;goto B5c4ae8;
case 0x5c4aea:c.instructions+=36;goto B5c4aea;
case 0x5c4aee:c.instructions+=35;goto B5c4aee;
case 0x5c4af5:c.instructions+=34;goto B5c4af5;
case 0x5c4af7:c.instructions+=33;goto B5c4af7;
case 0x5c4afb:c.instructions+=32;goto B5c4afb;
case 0x5c4b02:c.instructions+=31;goto B5c4b02;
case 0x5c4b04:c.instructions+=30;goto B5c4b04;
case 0x5c4b0b:c.instructions+=29;goto B5c4b0b;
case 0x5c4b0f:c.instructions+=28;goto B5c4b0f;
case 0x5c4b16:c.instructions+=27;goto B5c4b16;
case 0x5c4b1a:c.instructions+=26;goto B5c4b1a;
case 0x5c4b21:c.instructions+=25;goto B5c4b21;
case 0x5c4b23:c.instructions+=24;goto B5c4b23;
case 0x5c4b27:c.instructions+=23;goto B5c4b27;
case 0x5c4b2e:c.instructions+=22;goto B5c4b2e;
case 0x5c4b30:c.instructions+=21;goto B5c4b30;
case 0x5c4b34:c.instructions+=20;goto B5c4b34;
case 0x5c4b3b:c.instructions+=19;goto B5c4b3b;
case 0x5c4b3d:c.instructions+=18;goto B5c4b3d;
case 0x5c4b44:c.instructions+=17;goto B5c4b44;
case 0x5c4b45:c.instructions+=16;goto B5c4b45;
case 0x5c4b4c:c.instructions+=15;goto B5c4b4c;
case 0x5c4b50:c.instructions+=14;goto B5c4b50;
case 0x5c4b54:c.instructions+=13;goto B5c4b54;
case 0x5c4b55:c.instructions+=12;goto B5c4b55;
case 0x5c4b5c:c.instructions+=11;goto B5c4b5c;
case 0x5c4b60:c.instructions+=10;goto B5c4b60;
case 0x5c4b67:c.instructions+=9;goto B5c4b67;
case 0x5c4b69:c.instructions+=8;goto B5c4b69;
case 0x5c4b6d:c.instructions+=7;goto B5c4b6d;
case 0x5c4b74:c.instructions+=6;goto B5c4b74;
case 0x5c4b76:c.instructions+=5;goto B5c4b76;
case 0x5c4b7a:c.instructions+=4;goto B5c4b7a;
case 0x5c4b81:c.instructions+=3;goto B5c4b81;
case 0x5c4b83:c.instructions+=2;goto B5c4b83;
case 0x5c4b8a:c.instructions+=1;goto B5c4b8a;
case 0x5c4b8f:goto L5c4b8f;
case 0x5c4b94:c.instructions+=5;goto B5c4b94;
case 0x5c4b98:c.instructions+=4;goto B5c4b98;
case 0x5c4b99:c.instructions+=3;goto B5c4b99;
case 0x5c4b9d:c.instructions+=2;goto B5c4b9d;
case 0x5c4b9e:c.instructions+=1;goto B5c4b9e;
case 0x5c4ba3:goto L5c4ba3;
case 0x5c4ba6:c.instructions+=1;goto B5c4ba6;
case 0x5c4bab:goto L5c4bab;
case 0x5c4bb0:c.instructions+=5;goto B5c4bb0;
case 0x5c4bb4:c.instructions+=4;goto B5c4bb4;
case 0x5c4bb5:c.instructions+=3;goto B5c4bb5;
case 0x5c4bb9:c.instructions+=2;goto B5c4bb9;
case 0x5c4bba:c.instructions+=1;goto B5c4bba;
case 0x5c4bbf:goto L5c4bbf;
case 0x5c4bc3:c.instructions+=196;goto B5c4bc3;
case 0x5c4bc7:c.instructions+=195;goto B5c4bc7;
case 0x5c4bcb:c.instructions+=194;goto B5c4bcb;
case 0x5c4bcf:c.instructions+=193;goto B5c4bcf;
case 0x5c4bd1:c.instructions+=192;goto B5c4bd1;
case 0x5c4bd5:c.instructions+=191;goto B5c4bd5;
case 0x5c4bd9:c.instructions+=190;goto B5c4bd9;
case 0x5c4bdb:c.instructions+=189;goto B5c4bdb;
case 0x5c4bdf:c.instructions+=188;goto B5c4bdf;
case 0x5c4be3:c.instructions+=187;goto B5c4be3;
case 0x5c4be5:c.instructions+=186;goto B5c4be5;
case 0x5c4bec:c.instructions+=185;goto B5c4bec;
case 0x5c4bf0:c.instructions+=184;goto B5c4bf0;
case 0x5c4bf4:c.instructions+=183;goto B5c4bf4;
case 0x5c4bf8:c.instructions+=182;goto B5c4bf8;
case 0x5c4bfc:c.instructions+=181;goto B5c4bfc;
case 0x5c4bfe:c.instructions+=180;goto B5c4bfe;
case 0x5c4c02:c.instructions+=179;goto B5c4c02;
case 0x5c4c06:c.instructions+=178;goto B5c4c06;
case 0x5c4c08:c.instructions+=177;goto B5c4c08;
case 0x5c4c0c:c.instructions+=176;goto B5c4c0c;
case 0x5c4c10:c.instructions+=175;goto B5c4c10;
case 0x5c4c12:c.instructions+=174;goto B5c4c12;
case 0x5c4c19:c.instructions+=173;goto B5c4c19;
case 0x5c4c1d:c.instructions+=172;goto B5c4c1d;
case 0x5c4c21:c.instructions+=171;goto B5c4c21;
case 0x5c4c25:c.instructions+=170;goto B5c4c25;
case 0x5c4c29:c.instructions+=169;goto B5c4c29;
case 0x5c4c2b:c.instructions+=168;goto B5c4c2b;
case 0x5c4c2f:c.instructions+=167;goto B5c4c2f;
case 0x5c4c33:c.instructions+=166;goto B5c4c33;
case 0x5c4c35:c.instructions+=165;goto B5c4c35;
case 0x5c4c39:c.instructions+=164;goto B5c4c39;
case 0x5c4c3d:c.instructions+=163;goto B5c4c3d;
case 0x5c4c3f:c.instructions+=162;goto B5c4c3f;
case 0x5c4c46:c.instructions+=161;goto B5c4c46;
case 0x5c4c4a:c.instructions+=160;goto B5c4c4a;
case 0x5c4c4e:c.instructions+=159;goto B5c4c4e;
case 0x5c4c52:c.instructions+=158;goto B5c4c52;
case 0x5c4c56:c.instructions+=157;goto B5c4c56;
case 0x5c4c58:c.instructions+=156;goto B5c4c58;
case 0x5c4c5c:c.instructions+=155;goto B5c4c5c;
case 0x5c4c60:c.instructions+=154;goto B5c4c60;
case 0x5c4c62:c.instructions+=153;goto B5c4c62;
case 0x5c4c66:c.instructions+=152;goto B5c4c66;
case 0x5c4c6a:c.instructions+=151;goto B5c4c6a;
case 0x5c4c6c:c.instructions+=150;goto B5c4c6c;
case 0x5c4c73:c.instructions+=149;goto B5c4c73;
case 0x5c4c77:c.instructions+=148;goto B5c4c77;
case 0x5c4c7b:c.instructions+=147;goto B5c4c7b;
case 0x5c4c7f:c.instructions+=146;goto B5c4c7f;
case 0x5c4c83:c.instructions+=145;goto B5c4c83;
case 0x5c4c85:c.instructions+=144;goto B5c4c85;
case 0x5c4c89:c.instructions+=143;goto B5c4c89;
case 0x5c4c8d:c.instructions+=142;goto B5c4c8d;
case 0x5c4c8f:c.instructions+=141;goto B5c4c8f;
case 0x5c4c93:c.instructions+=140;goto B5c4c93;
case 0x5c4c97:c.instructions+=139;goto B5c4c97;
case 0x5c4c99:c.instructions+=138;goto B5c4c99;
case 0x5c4ca0:c.instructions+=137;goto B5c4ca0;
case 0x5c4ca4:c.instructions+=136;goto B5c4ca4;
case 0x5c4ca8:c.instructions+=135;goto B5c4ca8;
case 0x5c4cac:c.instructions+=134;goto B5c4cac;
case 0x5c4cb0:c.instructions+=133;goto B5c4cb0;
case 0x5c4cb2:c.instructions+=132;goto B5c4cb2;
case 0x5c4cb6:c.instructions+=131;goto B5c4cb6;
case 0x5c4cba:c.instructions+=130;goto B5c4cba;
case 0x5c4cbc:c.instructions+=129;goto B5c4cbc;
case 0x5c4cc0:c.instructions+=128;goto B5c4cc0;
case 0x5c4cc4:c.instructions+=127;goto B5c4cc4;
case 0x5c4cc6:c.instructions+=126;goto B5c4cc6;
case 0x5c4ccd:c.instructions+=125;goto B5c4ccd;
case 0x5c4cd1:c.instructions+=124;goto B5c4cd1;
case 0x5c4cd5:c.instructions+=123;goto B5c4cd5;
case 0x5c4cd9:c.instructions+=122;goto B5c4cd9;
case 0x5c4cdd:c.instructions+=121;goto B5c4cdd;
case 0x5c4cdf:c.instructions+=120;goto B5c4cdf;
case 0x5c4ce3:c.instructions+=119;goto B5c4ce3;
case 0x5c4ce7:c.instructions+=118;goto B5c4ce7;
case 0x5c4ce9:c.instructions+=117;goto B5c4ce9;
case 0x5c4ced:c.instructions+=116;goto B5c4ced;
case 0x5c4cf1:c.instructions+=115;goto B5c4cf1;
case 0x5c4cf3:c.instructions+=114;goto B5c4cf3;
case 0x5c4cfa:c.instructions+=113;goto B5c4cfa;
case 0x5c4cfe:c.instructions+=112;goto B5c4cfe;
case 0x5c4d02:c.instructions+=111;goto B5c4d02;
case 0x5c4d06:c.instructions+=110;goto B5c4d06;
case 0x5c4d0a:c.instructions+=109;goto B5c4d0a;
case 0x5c4d0c:c.instructions+=108;goto B5c4d0c;
case 0x5c4d10:c.instructions+=107;goto B5c4d10;
case 0x5c4d14:c.instructions+=106;goto B5c4d14;
case 0x5c4d16:c.instructions+=105;goto B5c4d16;
case 0x5c4d1a:c.instructions+=104;goto B5c4d1a;
case 0x5c4d1e:c.instructions+=103;goto B5c4d1e;
case 0x5c4d20:c.instructions+=102;goto B5c4d20;
case 0x5c4d27:c.instructions+=101;goto B5c4d27;
case 0x5c4d2b:c.instructions+=100;goto B5c4d2b;
case 0x5c4d2f:c.instructions+=99;goto B5c4d2f;
case 0x5c4d36:c.instructions+=98;goto B5c4d36;
case 0x5c4d3a:c.instructions+=97;goto B5c4d3a;
case 0x5c4d3c:c.instructions+=96;goto B5c4d3c;
case 0x5c4d40:c.instructions+=95;goto B5c4d40;
case 0x5c4d47:c.instructions+=94;goto B5c4d47;
case 0x5c4d49:c.instructions+=93;goto B5c4d49;
case 0x5c4d4d:c.instructions+=92;goto B5c4d4d;
case 0x5c4d54:c.instructions+=91;goto B5c4d54;
case 0x5c4d56:c.instructions+=90;goto B5c4d56;
case 0x5c4d5d:c.instructions+=89;goto B5c4d5d;
case 0x5c4d61:c.instructions+=88;goto B5c4d61;
case 0x5c4d65:c.instructions+=87;goto B5c4d65;
case 0x5c4d6c:c.instructions+=86;goto B5c4d6c;
case 0x5c4d70:c.instructions+=85;goto B5c4d70;
case 0x5c4d72:c.instructions+=84;goto B5c4d72;
case 0x5c4d79:c.instructions+=83;goto B5c4d79;
case 0x5c4d7d:c.instructions+=82;goto B5c4d7d;
case 0x5c4d7f:c.instructions+=81;goto B5c4d7f;
case 0x5c4d83:c.instructions+=80;goto B5c4d83;
case 0x5c4d8a:c.instructions+=79;goto B5c4d8a;
case 0x5c4d8c:c.instructions+=78;goto B5c4d8c;
case 0x5c4d93:c.instructions+=77;goto B5c4d93;
case 0x5c4d97:c.instructions+=76;goto B5c4d97;
case 0x5c4d9b:c.instructions+=75;goto B5c4d9b;
case 0x5c4da2:c.instructions+=74;goto B5c4da2;
case 0x5c4da6:c.instructions+=73;goto B5c4da6;
case 0x5c4da8:c.instructions+=72;goto B5c4da8;
case 0x5c4dac:c.instructions+=71;goto B5c4dac;
case 0x5c4db3:c.instructions+=70;goto B5c4db3;
case 0x5c4db5:c.instructions+=69;goto B5c4db5;
case 0x5c4db9:c.instructions+=68;goto B5c4db9;
case 0x5c4dc0:c.instructions+=67;goto B5c4dc0;
case 0x5c4dc2:c.instructions+=66;goto B5c4dc2;
case 0x5c4dc9:c.instructions+=65;goto B5c4dc9;
case 0x5c4dcd:c.instructions+=64;goto B5c4dcd;
case 0x5c4dd1:c.instructions+=63;goto B5c4dd1;
case 0x5c4dd8:c.instructions+=62;goto B5c4dd8;
case 0x5c4ddc:c.instructions+=61;goto B5c4ddc;
case 0x5c4dde:c.instructions+=60;goto B5c4dde;
case 0x5c4de2:c.instructions+=59;goto B5c4de2;
case 0x5c4de9:c.instructions+=58;goto B5c4de9;
case 0x5c4deb:c.instructions+=57;goto B5c4deb;
case 0x5c4def:c.instructions+=56;goto B5c4def;
case 0x5c4df6:c.instructions+=55;goto B5c4df6;
case 0x5c4df8:c.instructions+=54;goto B5c4df8;
case 0x5c4dff:c.instructions+=53;goto B5c4dff;
case 0x5c4e03:c.instructions+=52;goto B5c4e03;
case 0x5c4e0a:c.instructions+=51;goto B5c4e0a;
case 0x5c4e0e:c.instructions+=50;goto B5c4e0e;
case 0x5c4e15:c.instructions+=49;goto B5c4e15;
case 0x5c4e17:c.instructions+=48;goto B5c4e17;
case 0x5c4e1b:c.instructions+=47;goto B5c4e1b;
case 0x5c4e22:c.instructions+=46;goto B5c4e22;
case 0x5c4e24:c.instructions+=45;goto B5c4e24;
case 0x5c4e28:c.instructions+=44;goto B5c4e28;
case 0x5c4e2f:c.instructions+=43;goto B5c4e2f;
case 0x5c4e31:c.instructions+=42;goto B5c4e31;
case 0x5c4e38:c.instructions+=41;goto B5c4e38;
case 0x5c4e3f:c.instructions+=40;goto B5c4e3f;
case 0x5c4e43:c.instructions+=39;goto B5c4e43;
case 0x5c4e47:c.instructions+=38;goto B5c4e47;
case 0x5c4e4e:c.instructions+=37;goto B5c4e4e;
case 0x5c4e50:c.instructions+=36;goto B5c4e50;
case 0x5c4e54:c.instructions+=35;goto B5c4e54;
case 0x5c4e5b:c.instructions+=34;goto B5c4e5b;
case 0x5c4e5d:c.instructions+=33;goto B5c4e5d;
case 0x5c4e61:c.instructions+=32;goto B5c4e61;
case 0x5c4e68:c.instructions+=31;goto B5c4e68;
case 0x5c4e6a:c.instructions+=30;goto B5c4e6a;
case 0x5c4e71:c.instructions+=29;goto B5c4e71;
case 0x5c4e75:c.instructions+=28;goto B5c4e75;
case 0x5c4e7c:c.instructions+=27;goto B5c4e7c;
case 0x5c4e80:c.instructions+=26;goto B5c4e80;
case 0x5c4e87:c.instructions+=25;goto B5c4e87;
case 0x5c4e89:c.instructions+=24;goto B5c4e89;
case 0x5c4e8d:c.instructions+=23;goto B5c4e8d;
case 0x5c4e94:c.instructions+=22;goto B5c4e94;
case 0x5c4e96:c.instructions+=21;goto B5c4e96;
case 0x5c4e9a:c.instructions+=20;goto B5c4e9a;
case 0x5c4ea1:c.instructions+=19;goto B5c4ea1;
case 0x5c4ea3:c.instructions+=18;goto B5c4ea3;
case 0x5c4eaa:c.instructions+=17;goto B5c4eaa;
case 0x5c4eab:c.instructions+=16;goto B5c4eab;
case 0x5c4eb2:c.instructions+=15;goto B5c4eb2;
case 0x5c4eb6:c.instructions+=14;goto B5c4eb6;
case 0x5c4eba:c.instructions+=13;goto B5c4eba;
case 0x5c4ebb:c.instructions+=12;goto B5c4ebb;
case 0x5c4ec2:c.instructions+=11;goto B5c4ec2;
case 0x5c4ec6:c.instructions+=10;goto B5c4ec6;
case 0x5c4ecd:c.instructions+=9;goto B5c4ecd;
case 0x5c4ecf:c.instructions+=8;goto B5c4ecf;
case 0x5c4ed3:c.instructions+=7;goto B5c4ed3;
case 0x5c4eda:c.instructions+=6;goto B5c4eda;
case 0x5c4edc:c.instructions+=5;goto B5c4edc;
case 0x5c4ee0:c.instructions+=4;goto B5c4ee0;
case 0x5c4ee7:c.instructions+=3;goto B5c4ee7;
case 0x5c4ee9:c.instructions+=2;goto B5c4ee9;
case 0x5c4ef0:c.instructions+=1;goto B5c4ef0;
case 0x5c4ef5:goto L5c4ef5;
case 0x5c4ef8:c.instructions+=1;goto B5c4ef8;
case 0x5c4efa:goto L5c4efa;
case 0x5c4eff:c.instructions+=2;goto B5c4eff;
case 0x5c4f01:c.instructions+=1;goto B5c4f01;
case 0x5c4f05:goto L5c4f05;
case 0x5c4f07:goto L5c4f07;
case 0x5c4f0a:c.instructions+=37;goto B5c4f0a;
case 0x5c4f0e:c.instructions+=36;goto B5c4f0e;
case 0x5c4f11:c.instructions+=35;goto B5c4f11;
case 0x5c4f17:c.instructions+=34;goto B5c4f17;
case 0x5c4f1b:c.instructions+=33;goto B5c4f1b;
case 0x5c4f22:c.instructions+=32;goto B5c4f22;
case 0x5c4f25:c.instructions+=31;goto B5c4f25;
case 0x5c4f26:c.instructions+=30;goto B5c4f26;
case 0x5c4f28:c.instructions+=29;goto B5c4f28;
case 0x5c4f2a:c.instructions+=28;goto B5c4f2a;
case 0x5c4f2e:c.instructions+=27;goto B5c4f2e;
case 0x5c4f30:c.instructions+=26;goto B5c4f30;
case 0x5c4f32:c.instructions+=25;goto B5c4f32;
case 0x5c4f34:c.instructions+=24;goto B5c4f34;
case 0x5c4f3b:c.instructions+=23;goto B5c4f3b;
case 0x5c4f3f:c.instructions+=22;goto B5c4f3f;
case 0x5c4f42:c.instructions+=21;goto B5c4f42;
case 0x5c4f46:c.instructions+=20;goto B5c4f46;
case 0x5c4f49:c.instructions+=19;goto B5c4f49;
case 0x5c4f4b:c.instructions+=18;goto B5c4f4b;
case 0x5c4f4f:c.instructions+=17;goto B5c4f4f;
case 0x5c4f51:c.instructions+=16;goto B5c4f51;
case 0x5c4f53:c.instructions+=15;goto B5c4f53;
case 0x5c4f55:c.instructions+=14;goto B5c4f55;
case 0x5c4f5c:c.instructions+=13;goto B5c4f5c;
case 0x5c4f60:c.instructions+=12;goto B5c4f60;
case 0x5c4f63:c.instructions+=11;goto B5c4f63;
case 0x5c4f67:c.instructions+=10;goto B5c4f67;
case 0x5c4f6a:c.instructions+=9;goto B5c4f6a;
case 0x5c4f6c:c.instructions+=8;goto B5c4f6c;
case 0x5c4f70:c.instructions+=7;goto B5c4f70;
case 0x5c4f72:c.instructions+=6;goto B5c4f72;
case 0x5c4f76:c.instructions+=5;goto B5c4f76;
case 0x5c4f77:c.instructions+=4;goto B5c4f77;
case 0x5c4f79:c.instructions+=3;goto B5c4f79;
case 0x5c4f7b:c.instructions+=2;goto B5c4f7b;
case 0x5c4f82:c.instructions+=1;goto B5c4f82;
case 0x5c4f87:goto L5c4f87;
case 0x5c4f8d:c.instructions+=3;goto B5c4f8d;
case 0x5c4f8f:c.instructions+=2;goto B5c4f8f;
case 0x5c4f91:c.instructions+=1;goto B5c4f91;
case 0x5c4f93:goto L5c4f93;
case 0x5c4f99:c.instructions+=2;goto B5c4f99;
case 0x5c4f9f:c.instructions+=1;goto B5c4f9f;
case 0x5c4fa1:goto L5c4fa1;
case 0x5c4fa7:goto L5c4fa7;
case 0x5c4fae:c.instructions+=5;goto B5c4fae;
case 0x5c4fb5:c.instructions+=4;goto B5c4fb5;
case 0x5c4fbb:c.instructions+=3;goto B5c4fbb;
case 0x5c4fc1:c.instructions+=2;goto B5c4fc1;
case 0x5c4fc7:c.instructions+=1;goto B5c4fc7;
case 0x5c4fc9:goto L5c4fc9;
case 0x5c4fcf:c.instructions+=1;goto B5c4fcf;
case 0x5c4fd6:goto L5c4fd6;
case 0x5c4fdd:c.instructions+=6;goto B5c4fdd;
case 0x5c4fe4:c.instructions+=5;goto B5c4fe4;
case 0x5c4fe7:c.instructions+=4;goto B5c4fe7;
case 0x5c4fe8:c.instructions+=3;goto B5c4fe8;
case 0x5c4fef:c.instructions+=2;goto B5c4fef;
case 0x5c4ff6:c.instructions+=1;goto B5c4ff6;
case 0x5c4ffc:goto L5c4ffc;
case 0x5c4ffd:c.instructions+=3;goto B5c4ffd;
case 0x5c4ffe:c.instructions+=2;goto B5c4ffe;
case 0x5c4fff:c.instructions+=1;goto B5c4fff;
default:missing_instruction(c.pc);}
B5c4000:L5c4000:{c.instructions+=67;NFSU2_TR(0x5c4000);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4002:{NFSU2_TR(0x5c4002);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4009:{NFSU2_TR(0x5c4009);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c400d:{NFSU2_TR(0x5c400d);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4011:{NFSU2_TR(0x5c4011);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4018:{NFSU2_TR(0x5c4018);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c401c:{NFSU2_TR(0x5c401c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c401e:{NFSU2_TR(0x5c401e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4022:{NFSU2_TR(0x5c4022);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4029:{NFSU2_TR(0x5c4029);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c402b:{NFSU2_TR(0x5c402b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c402f:{NFSU2_TR(0x5c402f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4036:{NFSU2_TR(0x5c4036);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4038:{NFSU2_TR(0x5c4038);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c403f:{NFSU2_TR(0x5c403f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4043:{NFSU2_TR(0x5c4043);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c404a:{NFSU2_TR(0x5c404a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c404e:{NFSU2_TR(0x5c404e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4055:{NFSU2_TR(0x5c4055);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4057:{NFSU2_TR(0x5c4057);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c405b:{NFSU2_TR(0x5c405b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4062:{NFSU2_TR(0x5c4062);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4064:{NFSU2_TR(0x5c4064);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4068:{NFSU2_TR(0x5c4068);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c406f:{NFSU2_TR(0x5c406f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4071:{NFSU2_TR(0x5c4071);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4078:{NFSU2_TR(0x5c4078);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c407f:{NFSU2_TR(0x5c407f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4083:{NFSU2_TR(0x5c4083);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4087:{NFSU2_TR(0x5c4087);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c408e:{NFSU2_TR(0x5c408e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4090:{NFSU2_TR(0x5c4090);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4094:{NFSU2_TR(0x5c4094);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c409b:{NFSU2_TR(0x5c409b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c409d:{NFSU2_TR(0x5c409d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40a1:{NFSU2_TR(0x5c40a1);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40a8:{NFSU2_TR(0x5c40a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40aa:{NFSU2_TR(0x5c40aa);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c40b1:{NFSU2_TR(0x5c40b1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40b5:{NFSU2_TR(0x5c40b5);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40bc:{NFSU2_TR(0x5c40bc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40c0:{NFSU2_TR(0x5c40c0);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40c7:{NFSU2_TR(0x5c40c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40c9:{NFSU2_TR(0x5c40c9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40cd:{NFSU2_TR(0x5c40cd);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40d4:{NFSU2_TR(0x5c40d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40d6:{NFSU2_TR(0x5c40d6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40da:{NFSU2_TR(0x5c40da);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c40e1:{NFSU2_TR(0x5c40e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c40e3:{NFSU2_TR(0x5c40e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c40ea:{NFSU2_TR(0x5c40ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c40eb:{NFSU2_TR(0x5c40eb);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c40f2:{NFSU2_TR(0x5c40f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c40f6:{NFSU2_TR(0x5c40f6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c40fa:{NFSU2_TR(0x5c40fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c40fb:{NFSU2_TR(0x5c40fb);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4102:{NFSU2_TR(0x5c4102);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4106:{NFSU2_TR(0x5c4106);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c410d:{NFSU2_TR(0x5c410d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c410f:{NFSU2_TR(0x5c410f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4113:{NFSU2_TR(0x5c4113);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c411a:{NFSU2_TR(0x5c411a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c411c:{NFSU2_TR(0x5c411c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4120:{NFSU2_TR(0x5c4120);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4127:{NFSU2_TR(0x5c4127);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4129:{NFSU2_TR(0x5c4129);
{u32 ea_=u32(r4(R+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4130:{NFSU2_TR(0x5c4130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4135ull));
TAIL_STATIC(0x4012b0u,401);
}
B5c4135:L5c4135:{c.instructions+=6;NFSU2_TR(0x5c4135);
u8 U[4];
w4(U+0,u32(0xc000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c413a:{NFSU2_TR(0x5c413a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c413e:{NFSU2_TR(0x5c413e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c413f:{NFSU2_TR(0x5c413f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4143:{NFSU2_TR(0x5c4143);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4144:{NFSU2_TR(0x5c4144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4149ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c4149:L5c4149:{c.instructions+=2;NFSU2_TR(0x5c4149);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5c414c:{NFSU2_TR(0x5c414c);
{goto L5c4f07;}
}
B5c4151:L5c4151:{c.instructions+=6;NFSU2_TR(0x5c4151);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4156:{NFSU2_TR(0x5c4156);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c415a:{NFSU2_TR(0x5c415a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c415b:{NFSU2_TR(0x5c415b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c415f:{NFSU2_TR(0x5c415f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4160:{NFSU2_TR(0x5c4160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4165ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c4165:L5c4165:{c.instructions+=197;NFSU2_TR(0x5c4165);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4169:{NFSU2_TR(0x5c4169);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c416d:{NFSU2_TR(0x5c416d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4171:{NFSU2_TR(0x5c4171);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4175:{NFSU2_TR(0x5c4175);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4177:{NFSU2_TR(0x5c4177);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c417b:{NFSU2_TR(0x5c417b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c417f:{NFSU2_TR(0x5c417f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4181:{NFSU2_TR(0x5c4181);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4185:{NFSU2_TR(0x5c4185);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4189:{NFSU2_TR(0x5c4189);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c418b:{NFSU2_TR(0x5c418b);
{u32 ea_=u32(r4(R+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4192:{NFSU2_TR(0x5c4192);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4196:{NFSU2_TR(0x5c4196);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c419a:{NFSU2_TR(0x5c419a);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c419e:{NFSU2_TR(0x5c419e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41a2:{NFSU2_TR(0x5c41a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41a4:{NFSU2_TR(0x5c41a4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41a8:{NFSU2_TR(0x5c41a8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41ac:{NFSU2_TR(0x5c41ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41ae:{NFSU2_TR(0x5c41ae);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41b2:{NFSU2_TR(0x5c41b2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41b6:{NFSU2_TR(0x5c41b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41b8:{NFSU2_TR(0x5c41b8);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c41bf:{NFSU2_TR(0x5c41bf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41c3:{NFSU2_TR(0x5c41c3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41c7:{NFSU2_TR(0x5c41c7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41cb:{NFSU2_TR(0x5c41cb);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41cf:{NFSU2_TR(0x5c41cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41d1:{NFSU2_TR(0x5c41d1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41d5:{NFSU2_TR(0x5c41d5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41d9:{NFSU2_TR(0x5c41d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41db:{NFSU2_TR(0x5c41db);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41df:{NFSU2_TR(0x5c41df);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41e3:{NFSU2_TR(0x5c41e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41e5:{NFSU2_TR(0x5c41e5);
{u32 ea_=u32(r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c41ec:{NFSU2_TR(0x5c41ec);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41f0:{NFSU2_TR(0x5c41f0);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41f4:{NFSU2_TR(0x5c41f4);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c41f8:{NFSU2_TR(0x5c41f8);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c41fc:{NFSU2_TR(0x5c41fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c41fe:{NFSU2_TR(0x5c41fe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4202:{NFSU2_TR(0x5c4202);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4206:{NFSU2_TR(0x5c4206);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4208:{NFSU2_TR(0x5c4208);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c420c:{NFSU2_TR(0x5c420c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4210:{NFSU2_TR(0x5c4210);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4212:{NFSU2_TR(0x5c4212);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4219:{NFSU2_TR(0x5c4219);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c421d:{NFSU2_TR(0x5c421d);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4221:{NFSU2_TR(0x5c4221);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4225:{NFSU2_TR(0x5c4225);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4229:{NFSU2_TR(0x5c4229);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c422b:{NFSU2_TR(0x5c422b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c422f:{NFSU2_TR(0x5c422f);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4233:{NFSU2_TR(0x5c4233);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4235:{NFSU2_TR(0x5c4235);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4239:{NFSU2_TR(0x5c4239);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c423d:{NFSU2_TR(0x5c423d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c423f:{NFSU2_TR(0x5c423f);
{u32 ea_=u32(r4(R+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4246:{NFSU2_TR(0x5c4246);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c424a:{NFSU2_TR(0x5c424a);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c424e:{NFSU2_TR(0x5c424e);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4252:{NFSU2_TR(0x5c4252);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4256:{NFSU2_TR(0x5c4256);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4258:{NFSU2_TR(0x5c4258);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c425c:{NFSU2_TR(0x5c425c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4260:{NFSU2_TR(0x5c4260);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4262:{NFSU2_TR(0x5c4262);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4266:{NFSU2_TR(0x5c4266);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c426a:{NFSU2_TR(0x5c426a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c426c:{NFSU2_TR(0x5c426c);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4273:{NFSU2_TR(0x5c4273);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4277:{NFSU2_TR(0x5c4277);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c427b:{NFSU2_TR(0x5c427b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c427f:{NFSU2_TR(0x5c427f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4283:{NFSU2_TR(0x5c4283);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4285:{NFSU2_TR(0x5c4285);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4289:{NFSU2_TR(0x5c4289);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c428d:{NFSU2_TR(0x5c428d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c428f:{NFSU2_TR(0x5c428f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4293:{NFSU2_TR(0x5c4293);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4297:{NFSU2_TR(0x5c4297);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4299:{NFSU2_TR(0x5c4299);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c42a0:{NFSU2_TR(0x5c42a0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42a4:{NFSU2_TR(0x5c42a4);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42a8:{NFSU2_TR(0x5c42a8);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42ac:{NFSU2_TR(0x5c42ac);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42b0:{NFSU2_TR(0x5c42b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42b2:{NFSU2_TR(0x5c42b2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42b6:{NFSU2_TR(0x5c42b6);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42ba:{NFSU2_TR(0x5c42ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42bc:{NFSU2_TR(0x5c42bc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42c0:{NFSU2_TR(0x5c42c0);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42c4:{NFSU2_TR(0x5c42c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42c6:{NFSU2_TR(0x5c42c6);
{u32 ea_=u32(r4(R+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c42cd:{NFSU2_TR(0x5c42cd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42d1:{NFSU2_TR(0x5c42d1);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42d5:{NFSU2_TR(0x5c42d5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42dc:{NFSU2_TR(0x5c42dc);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42e0:{NFSU2_TR(0x5c42e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42e2:{NFSU2_TR(0x5c42e2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42e6:{NFSU2_TR(0x5c42e6);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42ed:{NFSU2_TR(0x5c42ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42ef:{NFSU2_TR(0x5c42ef);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c42f3:{NFSU2_TR(0x5c42f3);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c42fa:{NFSU2_TR(0x5c42fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c42fc:{NFSU2_TR(0x5c42fc);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4303:{NFSU2_TR(0x5c4303);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4307:{NFSU2_TR(0x5c4307);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c430b:{NFSU2_TR(0x5c430b);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4312:{NFSU2_TR(0x5c4312);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4316:{NFSU2_TR(0x5c4316);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4318:{NFSU2_TR(0x5c4318);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c431f:{NFSU2_TR(0x5c431f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4323:{NFSU2_TR(0x5c4323);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4325:{NFSU2_TR(0x5c4325);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4329:{NFSU2_TR(0x5c4329);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4330:{NFSU2_TR(0x5c4330);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4332:{NFSU2_TR(0x5c4332);
{u32 ea_=u32(r4(R+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4339:{NFSU2_TR(0x5c4339);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c433d:{NFSU2_TR(0x5c433d);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4341:{NFSU2_TR(0x5c4341);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4348:{NFSU2_TR(0x5c4348);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c434c:{NFSU2_TR(0x5c434c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c434e:{NFSU2_TR(0x5c434e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4352:{NFSU2_TR(0x5c4352);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4359:{NFSU2_TR(0x5c4359);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c435b:{NFSU2_TR(0x5c435b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c435f:{NFSU2_TR(0x5c435f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4366:{NFSU2_TR(0x5c4366);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4368:{NFSU2_TR(0x5c4368);
{u32 ea_=u32(r4(R+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c436f:{NFSU2_TR(0x5c436f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4373:{NFSU2_TR(0x5c4373);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4377:{NFSU2_TR(0x5c4377);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c437e:{NFSU2_TR(0x5c437e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4382:{NFSU2_TR(0x5c4382);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4384:{NFSU2_TR(0x5c4384);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4388:{NFSU2_TR(0x5c4388);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c438f:{NFSU2_TR(0x5c438f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4391:{NFSU2_TR(0x5c4391);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4395:{NFSU2_TR(0x5c4395);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c439c:{NFSU2_TR(0x5c439c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c439e:{NFSU2_TR(0x5c439e);
{u32 ea_=u32(r4(R+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c43a5:{NFSU2_TR(0x5c43a5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43a9:{NFSU2_TR(0x5c43a9);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43b0:{NFSU2_TR(0x5c43b0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43b4:{NFSU2_TR(0x5c43b4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43bb:{NFSU2_TR(0x5c43bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43bd:{NFSU2_TR(0x5c43bd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43c1:{NFSU2_TR(0x5c43c1);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43c8:{NFSU2_TR(0x5c43c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43ca:{NFSU2_TR(0x5c43ca);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43ce:{NFSU2_TR(0x5c43ce);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43d5:{NFSU2_TR(0x5c43d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43d7:{NFSU2_TR(0x5c43d7);
{u32 ea_=u32(r4(R+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c43de:{NFSU2_TR(0x5c43de);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43e5:{NFSU2_TR(0x5c43e5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43e9:{NFSU2_TR(0x5c43e9);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43ed:{NFSU2_TR(0x5c43ed);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c43f4:{NFSU2_TR(0x5c43f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c43f6:{NFSU2_TR(0x5c43f6);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c43fa:{NFSU2_TR(0x5c43fa);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4401:{NFSU2_TR(0x5c4401);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4403:{NFSU2_TR(0x5c4403);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4407:{NFSU2_TR(0x5c4407);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c440e:{NFSU2_TR(0x5c440e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4410:{NFSU2_TR(0x5c4410);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4417:{NFSU2_TR(0x5c4417);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c441b:{NFSU2_TR(0x5c441b);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4422:{NFSU2_TR(0x5c4422);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4426:{NFSU2_TR(0x5c4426);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c442d:{NFSU2_TR(0x5c442d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c442f:{NFSU2_TR(0x5c442f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4433:{NFSU2_TR(0x5c4433);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c443a:{NFSU2_TR(0x5c443a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c443c:{NFSU2_TR(0x5c443c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4440:{NFSU2_TR(0x5c4440);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4447:{NFSU2_TR(0x5c4447);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4449:{NFSU2_TR(0x5c4449);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4450:{NFSU2_TR(0x5c4450);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4451:{NFSU2_TR(0x5c4451);
{u32 ea_=u32(r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4458:{NFSU2_TR(0x5c4458);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c445c:{NFSU2_TR(0x5c445c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4460:{NFSU2_TR(0x5c4460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4461:{NFSU2_TR(0x5c4461);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4468:{NFSU2_TR(0x5c4468);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c446c:{NFSU2_TR(0x5c446c);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4473:{NFSU2_TR(0x5c4473);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4475:{NFSU2_TR(0x5c4475);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4479:{NFSU2_TR(0x5c4479);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4480:{NFSU2_TR(0x5c4480);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4482:{NFSU2_TR(0x5c4482);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4486:{NFSU2_TR(0x5c4486);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c448d:{NFSU2_TR(0x5c448d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c448f:{NFSU2_TR(0x5c448f);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4496:{NFSU2_TR(0x5c4496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c449bull));
TAIL_STATIC(0x4012b0u,401);
}
B5c449b:L5c449b:{c.instructions+=6;NFSU2_TR(0x5c449b);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44a0:{NFSU2_TR(0x5c44a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c44a4:{NFSU2_TR(0x5c44a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44a5:{NFSU2_TR(0x5c44a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c44a9:{NFSU2_TR(0x5c44a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44aa:{NFSU2_TR(0x5c44aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c44afull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c44af:L5c44af:{c.instructions+=6;NFSU2_TR(0x5c44af);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44b4:{NFSU2_TR(0x5c44b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c44b8:{NFSU2_TR(0x5c44b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44b9:{NFSU2_TR(0x5c44b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c44bd:{NFSU2_TR(0x5c44bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44be:{NFSU2_TR(0x5c44be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c44c3ull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B5c44c3:L5c44c3:{c.instructions+=2;NFSU2_TR(0x5c44c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B5c44c6:{NFSU2_TR(0x5c44c6);
{goto L5c4f07;}
}
B5c44cb:L5c44cb:{c.instructions+=6;NFSU2_TR(0x5c44cb);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44d0:{NFSU2_TR(0x5c44d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c44d4:{NFSU2_TR(0x5c44d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44d5:{NFSU2_TR(0x5c44d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c44d9:{NFSU2_TR(0x5c44d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c44da:{NFSU2_TR(0x5c44da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c44dfull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c44df:L5c44df:{c.instructions+=197;NFSU2_TR(0x5c44df);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44e3:{NFSU2_TR(0x5c44e3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c44e7:{NFSU2_TR(0x5c44e7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44eb:{NFSU2_TR(0x5c44eb);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c44ef:{NFSU2_TR(0x5c44ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c44f1:{NFSU2_TR(0x5c44f1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44f5:{NFSU2_TR(0x5c44f5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c44f9:{NFSU2_TR(0x5c44f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c44fb:{NFSU2_TR(0x5c44fb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c44ff:{NFSU2_TR(0x5c44ff);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4503:{NFSU2_TR(0x5c4503);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4505:{NFSU2_TR(0x5c4505);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c450c:{NFSU2_TR(0x5c450c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4510:{NFSU2_TR(0x5c4510);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4514:{NFSU2_TR(0x5c4514);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4518:{NFSU2_TR(0x5c4518);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c451c:{NFSU2_TR(0x5c451c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c451e:{NFSU2_TR(0x5c451e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4522:{NFSU2_TR(0x5c4522);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4526:{NFSU2_TR(0x5c4526);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4528:{NFSU2_TR(0x5c4528);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c452c:{NFSU2_TR(0x5c452c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4530:{NFSU2_TR(0x5c4530);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4532:{NFSU2_TR(0x5c4532);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4539:{NFSU2_TR(0x5c4539);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c453d:{NFSU2_TR(0x5c453d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4541:{NFSU2_TR(0x5c4541);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4545:{NFSU2_TR(0x5c4545);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4549:{NFSU2_TR(0x5c4549);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c454b:{NFSU2_TR(0x5c454b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c454f:{NFSU2_TR(0x5c454f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4553:{NFSU2_TR(0x5c4553);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4555:{NFSU2_TR(0x5c4555);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4559:{NFSU2_TR(0x5c4559);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c455d:{NFSU2_TR(0x5c455d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c455f:{NFSU2_TR(0x5c455f);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4566:{NFSU2_TR(0x5c4566);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c456a:{NFSU2_TR(0x5c456a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c456e:{NFSU2_TR(0x5c456e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4572:{NFSU2_TR(0x5c4572);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4576:{NFSU2_TR(0x5c4576);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4578:{NFSU2_TR(0x5c4578);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c457c:{NFSU2_TR(0x5c457c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4580:{NFSU2_TR(0x5c4580);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4582:{NFSU2_TR(0x5c4582);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4586:{NFSU2_TR(0x5c4586);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c458a:{NFSU2_TR(0x5c458a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c458c:{NFSU2_TR(0x5c458c);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4593:{NFSU2_TR(0x5c4593);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4597:{NFSU2_TR(0x5c4597);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c459b:{NFSU2_TR(0x5c459b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c459f:{NFSU2_TR(0x5c459f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45a3:{NFSU2_TR(0x5c45a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45a5:{NFSU2_TR(0x5c45a5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45a9:{NFSU2_TR(0x5c45a9);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45ad:{NFSU2_TR(0x5c45ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45af:{NFSU2_TR(0x5c45af);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45b3:{NFSU2_TR(0x5c45b3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45b7:{NFSU2_TR(0x5c45b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45b9:{NFSU2_TR(0x5c45b9);
{u32 ea_=u32(r4(R+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c45c0:{NFSU2_TR(0x5c45c0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45c4:{NFSU2_TR(0x5c45c4);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45c8:{NFSU2_TR(0x5c45c8);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45cc:{NFSU2_TR(0x5c45cc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45d0:{NFSU2_TR(0x5c45d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45d2:{NFSU2_TR(0x5c45d2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45d6:{NFSU2_TR(0x5c45d6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45da:{NFSU2_TR(0x5c45da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45dc:{NFSU2_TR(0x5c45dc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45e0:{NFSU2_TR(0x5c45e0);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45e4:{NFSU2_TR(0x5c45e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45e6:{NFSU2_TR(0x5c45e6);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c45ed:{NFSU2_TR(0x5c45ed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45f1:{NFSU2_TR(0x5c45f1);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45f5:{NFSU2_TR(0x5c45f5);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c45f9:{NFSU2_TR(0x5c45f9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c45fd:{NFSU2_TR(0x5c45fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c45ff:{NFSU2_TR(0x5c45ff);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4603:{NFSU2_TR(0x5c4603);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4607:{NFSU2_TR(0x5c4607);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4609:{NFSU2_TR(0x5c4609);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c460d:{NFSU2_TR(0x5c460d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4611:{NFSU2_TR(0x5c4611);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4613:{NFSU2_TR(0x5c4613);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c461a:{NFSU2_TR(0x5c461a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c461e:{NFSU2_TR(0x5c461e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4622:{NFSU2_TR(0x5c4622);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4626:{NFSU2_TR(0x5c4626);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c462a:{NFSU2_TR(0x5c462a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c462c:{NFSU2_TR(0x5c462c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4630:{NFSU2_TR(0x5c4630);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4634:{NFSU2_TR(0x5c4634);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4636:{NFSU2_TR(0x5c4636);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c463a:{NFSU2_TR(0x5c463a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c463e:{NFSU2_TR(0x5c463e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4640:{NFSU2_TR(0x5c4640);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4647:{NFSU2_TR(0x5c4647);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c464b:{NFSU2_TR(0x5c464b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c464f:{NFSU2_TR(0x5c464f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4656:{NFSU2_TR(0x5c4656);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c465a:{NFSU2_TR(0x5c465a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c465c:{NFSU2_TR(0x5c465c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4660:{NFSU2_TR(0x5c4660);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4667:{NFSU2_TR(0x5c4667);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4669:{NFSU2_TR(0x5c4669);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c466d:{NFSU2_TR(0x5c466d);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4674:{NFSU2_TR(0x5c4674);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4676:{NFSU2_TR(0x5c4676);
{u32 ea_=u32(r4(R+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c467d:{NFSU2_TR(0x5c467d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4681:{NFSU2_TR(0x5c4681);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4685:{NFSU2_TR(0x5c4685);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c468c:{NFSU2_TR(0x5c468c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4690:{NFSU2_TR(0x5c4690);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4692:{NFSU2_TR(0x5c4692);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4699:{NFSU2_TR(0x5c4699);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c469d:{NFSU2_TR(0x5c469d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c469f:{NFSU2_TR(0x5c469f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46a3:{NFSU2_TR(0x5c46a3);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46aa:{NFSU2_TR(0x5c46aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46ac:{NFSU2_TR(0x5c46ac);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c46b3:{NFSU2_TR(0x5c46b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46b7:{NFSU2_TR(0x5c46b7);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46bb:{NFSU2_TR(0x5c46bb);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46c2:{NFSU2_TR(0x5c46c2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46c6:{NFSU2_TR(0x5c46c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46c8:{NFSU2_TR(0x5c46c8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46cc:{NFSU2_TR(0x5c46cc);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46d3:{NFSU2_TR(0x5c46d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46d5:{NFSU2_TR(0x5c46d5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46d9:{NFSU2_TR(0x5c46d9);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46e0:{NFSU2_TR(0x5c46e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46e2:{NFSU2_TR(0x5c46e2);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c46e9:{NFSU2_TR(0x5c46e9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46ed:{NFSU2_TR(0x5c46ed);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46f1:{NFSU2_TR(0x5c46f1);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c46f8:{NFSU2_TR(0x5c46f8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c46fc:{NFSU2_TR(0x5c46fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c46fe:{NFSU2_TR(0x5c46fe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4702:{NFSU2_TR(0x5c4702);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4709:{NFSU2_TR(0x5c4709);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c470b:{NFSU2_TR(0x5c470b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c470f:{NFSU2_TR(0x5c470f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4716:{NFSU2_TR(0x5c4716);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4718:{NFSU2_TR(0x5c4718);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c471f:{NFSU2_TR(0x5c471f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4723:{NFSU2_TR(0x5c4723);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c472a:{NFSU2_TR(0x5c472a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c472e:{NFSU2_TR(0x5c472e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4735:{NFSU2_TR(0x5c4735);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4737:{NFSU2_TR(0x5c4737);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c473b:{NFSU2_TR(0x5c473b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4742:{NFSU2_TR(0x5c4742);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4744:{NFSU2_TR(0x5c4744);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4748:{NFSU2_TR(0x5c4748);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c474f:{NFSU2_TR(0x5c474f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4751:{NFSU2_TR(0x5c4751);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4758:{NFSU2_TR(0x5c4758);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c475f:{NFSU2_TR(0x5c475f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4763:{NFSU2_TR(0x5c4763);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4767:{NFSU2_TR(0x5c4767);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c476e:{NFSU2_TR(0x5c476e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4770:{NFSU2_TR(0x5c4770);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4774:{NFSU2_TR(0x5c4774);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c477b:{NFSU2_TR(0x5c477b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c477d:{NFSU2_TR(0x5c477d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4781:{NFSU2_TR(0x5c4781);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4788:{NFSU2_TR(0x5c4788);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c478a:{NFSU2_TR(0x5c478a);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4791:{NFSU2_TR(0x5c4791);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4795:{NFSU2_TR(0x5c4795);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c479c:{NFSU2_TR(0x5c479c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47a0:{NFSU2_TR(0x5c47a0);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47a7:{NFSU2_TR(0x5c47a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47a9:{NFSU2_TR(0x5c47a9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47ad:{NFSU2_TR(0x5c47ad);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47b4:{NFSU2_TR(0x5c47b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47b6:{NFSU2_TR(0x5c47b6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47ba:{NFSU2_TR(0x5c47ba);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47c1:{NFSU2_TR(0x5c47c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47c3:{NFSU2_TR(0x5c47c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c47ca:{NFSU2_TR(0x5c47ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c47cb:{NFSU2_TR(0x5c47cb);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c47d2:{NFSU2_TR(0x5c47d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c47d6:{NFSU2_TR(0x5c47d6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47da:{NFSU2_TR(0x5c47da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c47db:{NFSU2_TR(0x5c47db);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47e2:{NFSU2_TR(0x5c47e2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47e6:{NFSU2_TR(0x5c47e6);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47ed:{NFSU2_TR(0x5c47ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47ef:{NFSU2_TR(0x5c47ef);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c47f3:{NFSU2_TR(0x5c47f3);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c47fa:{NFSU2_TR(0x5c47fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c47fc:{NFSU2_TR(0x5c47fc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4800:{NFSU2_TR(0x5c4800);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4807:{NFSU2_TR(0x5c4807);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4809:{NFSU2_TR(0x5c4809);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4810:{NFSU2_TR(0x5c4810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4815ull));
TAIL_STATIC(0x4012b0u,401);
}
B5c4815:L5c4815:{c.instructions+=6;NFSU2_TR(0x5c4815);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c481a:{NFSU2_TR(0x5c481a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c481e:{NFSU2_TR(0x5c481e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c481f:{NFSU2_TR(0x5c481f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c4823:{NFSU2_TR(0x5c4823);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4824:{NFSU2_TR(0x5c4824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4829ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c4829:L5c4829:{c.instructions+=6;NFSU2_TR(0x5c4829);
u8 U[4];
w4(U+0,u32(0xc000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c482e:{NFSU2_TR(0x5c482e);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4832:{NFSU2_TR(0x5c4832);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4833:{NFSU2_TR(0x5c4833);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c4837:{NFSU2_TR(0x5c4837);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4838:{NFSU2_TR(0x5c4838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c483dull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B5c483d:L5c483d:{c.instructions+=2;NFSU2_TR(0x5c483d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B5c4840:{NFSU2_TR(0x5c4840);
{goto L5c4f07;}
}
B5c4845:L5c4845:{c.instructions+=6;NFSU2_TR(0x5c4845);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c484a:{NFSU2_TR(0x5c484a);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c484e:{NFSU2_TR(0x5c484e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c484f:{NFSU2_TR(0x5c484f);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4853:{NFSU2_TR(0x5c4853);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4854:{NFSU2_TR(0x5c4854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4859ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c4859:L5c4859:{c.instructions+=197;NFSU2_TR(0x5c4859);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c485d:{NFSU2_TR(0x5c485d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4861:{NFSU2_TR(0x5c4861);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4865:{NFSU2_TR(0x5c4865);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4869:{NFSU2_TR(0x5c4869);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c486b:{NFSU2_TR(0x5c486b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c486f:{NFSU2_TR(0x5c486f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4873:{NFSU2_TR(0x5c4873);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4875:{NFSU2_TR(0x5c4875);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4879:{NFSU2_TR(0x5c4879);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c487d:{NFSU2_TR(0x5c487d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c487f:{NFSU2_TR(0x5c487f);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4886:{NFSU2_TR(0x5c4886);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c488a:{NFSU2_TR(0x5c488a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c488e:{NFSU2_TR(0x5c488e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4892:{NFSU2_TR(0x5c4892);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4896:{NFSU2_TR(0x5c4896);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4898:{NFSU2_TR(0x5c4898);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c489c:{NFSU2_TR(0x5c489c);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48a0:{NFSU2_TR(0x5c48a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48a2:{NFSU2_TR(0x5c48a2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48a6:{NFSU2_TR(0x5c48a6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48aa:{NFSU2_TR(0x5c48aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48ac:{NFSU2_TR(0x5c48ac);
{u32 ea_=u32(r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c48b3:{NFSU2_TR(0x5c48b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48b7:{NFSU2_TR(0x5c48b7);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48bb:{NFSU2_TR(0x5c48bb);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48bf:{NFSU2_TR(0x5c48bf);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48c3:{NFSU2_TR(0x5c48c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48c5:{NFSU2_TR(0x5c48c5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48c9:{NFSU2_TR(0x5c48c9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48cd:{NFSU2_TR(0x5c48cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48cf:{NFSU2_TR(0x5c48cf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48d3:{NFSU2_TR(0x5c48d3);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48d7:{NFSU2_TR(0x5c48d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48d9:{NFSU2_TR(0x5c48d9);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c48e0:{NFSU2_TR(0x5c48e0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48e4:{NFSU2_TR(0x5c48e4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48e8:{NFSU2_TR(0x5c48e8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48ec:{NFSU2_TR(0x5c48ec);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48f0:{NFSU2_TR(0x5c48f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48f2:{NFSU2_TR(0x5c48f2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c48f6:{NFSU2_TR(0x5c48f6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c48fa:{NFSU2_TR(0x5c48fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c48fc:{NFSU2_TR(0x5c48fc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4900:{NFSU2_TR(0x5c4900);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4904:{NFSU2_TR(0x5c4904);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4906:{NFSU2_TR(0x5c4906);
{u32 ea_=u32(r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c490d:{NFSU2_TR(0x5c490d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4911:{NFSU2_TR(0x5c4911);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4915:{NFSU2_TR(0x5c4915);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4919:{NFSU2_TR(0x5c4919);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c491d:{NFSU2_TR(0x5c491d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c491f:{NFSU2_TR(0x5c491f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4923:{NFSU2_TR(0x5c4923);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4927:{NFSU2_TR(0x5c4927);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4929:{NFSU2_TR(0x5c4929);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c492d:{NFSU2_TR(0x5c492d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4931:{NFSU2_TR(0x5c4931);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4933:{NFSU2_TR(0x5c4933);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c493a:{NFSU2_TR(0x5c493a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c493e:{NFSU2_TR(0x5c493e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4942:{NFSU2_TR(0x5c4942);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4946:{NFSU2_TR(0x5c4946);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c494a:{NFSU2_TR(0x5c494a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c494c:{NFSU2_TR(0x5c494c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4950:{NFSU2_TR(0x5c4950);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4954:{NFSU2_TR(0x5c4954);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4956:{NFSU2_TR(0x5c4956);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c495a:{NFSU2_TR(0x5c495a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c495e:{NFSU2_TR(0x5c495e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4960:{NFSU2_TR(0x5c4960);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4967:{NFSU2_TR(0x5c4967);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c496b:{NFSU2_TR(0x5c496b);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c496f:{NFSU2_TR(0x5c496f);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4973:{NFSU2_TR(0x5c4973);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4977:{NFSU2_TR(0x5c4977);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4979:{NFSU2_TR(0x5c4979);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c497d:{NFSU2_TR(0x5c497d);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4981:{NFSU2_TR(0x5c4981);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4983:{NFSU2_TR(0x5c4983);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4987:{NFSU2_TR(0x5c4987);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c498b:{NFSU2_TR(0x5c498b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c498d:{NFSU2_TR(0x5c498d);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4994:{NFSU2_TR(0x5c4994);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4998:{NFSU2_TR(0x5c4998);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c499c:{NFSU2_TR(0x5c499c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49a0:{NFSU2_TR(0x5c49a0);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49a4:{NFSU2_TR(0x5c49a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49a6:{NFSU2_TR(0x5c49a6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49aa:{NFSU2_TR(0x5c49aa);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49ae:{NFSU2_TR(0x5c49ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49b0:{NFSU2_TR(0x5c49b0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49b4:{NFSU2_TR(0x5c49b4);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49b8:{NFSU2_TR(0x5c49b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49ba:{NFSU2_TR(0x5c49ba);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c49c1:{NFSU2_TR(0x5c49c1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49c5:{NFSU2_TR(0x5c49c5);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49c9:{NFSU2_TR(0x5c49c9);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49d0:{NFSU2_TR(0x5c49d0);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49d4:{NFSU2_TR(0x5c49d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49d6:{NFSU2_TR(0x5c49d6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49da:{NFSU2_TR(0x5c49da);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49e1:{NFSU2_TR(0x5c49e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49e3:{NFSU2_TR(0x5c49e3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49e7:{NFSU2_TR(0x5c49e7);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49ee:{NFSU2_TR(0x5c49ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c49f0:{NFSU2_TR(0x5c49f0);
{u32 ea_=u32(r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c49f7:{NFSU2_TR(0x5c49f7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c49fb:{NFSU2_TR(0x5c49fb);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c49ff:{NFSU2_TR(0x5c49ff);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a06:{NFSU2_TR(0x5c4a06);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a0a:{NFSU2_TR(0x5c4a0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a0c:{NFSU2_TR(0x5c4a0c);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a13:{NFSU2_TR(0x5c4a13);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a17:{NFSU2_TR(0x5c4a17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a19:{NFSU2_TR(0x5c4a19);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a1d:{NFSU2_TR(0x5c4a1d);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a24:{NFSU2_TR(0x5c4a24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a26:{NFSU2_TR(0x5c4a26);
{u32 ea_=u32(r4(R+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4a2d:{NFSU2_TR(0x5c4a2d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a31:{NFSU2_TR(0x5c4a31);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a35:{NFSU2_TR(0x5c4a35);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a3c:{NFSU2_TR(0x5c4a3c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a40:{NFSU2_TR(0x5c4a40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a42:{NFSU2_TR(0x5c4a42);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a46:{NFSU2_TR(0x5c4a46);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a4d:{NFSU2_TR(0x5c4a4d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a4f:{NFSU2_TR(0x5c4a4f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a53:{NFSU2_TR(0x5c4a53);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a5a:{NFSU2_TR(0x5c4a5a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a5c:{NFSU2_TR(0x5c4a5c);
{u32 ea_=u32(r4(R+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4a63:{NFSU2_TR(0x5c4a63);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a67:{NFSU2_TR(0x5c4a67);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a6b:{NFSU2_TR(0x5c4a6b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a72:{NFSU2_TR(0x5c4a72);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a76:{NFSU2_TR(0x5c4a76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a78:{NFSU2_TR(0x5c4a78);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a7c:{NFSU2_TR(0x5c4a7c);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a83:{NFSU2_TR(0x5c4a83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a85:{NFSU2_TR(0x5c4a85);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a89:{NFSU2_TR(0x5c4a89);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4a90:{NFSU2_TR(0x5c4a90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4a92:{NFSU2_TR(0x5c4a92);
{u32 ea_=u32(r4(R+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4a99:{NFSU2_TR(0x5c4a99);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4a9d:{NFSU2_TR(0x5c4a9d);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4aa4:{NFSU2_TR(0x5c4aa4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4aa8:{NFSU2_TR(0x5c4aa8);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4aaf:{NFSU2_TR(0x5c4aaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ab1:{NFSU2_TR(0x5c4ab1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ab5:{NFSU2_TR(0x5c4ab5);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4abc:{NFSU2_TR(0x5c4abc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4abe:{NFSU2_TR(0x5c4abe);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ac2:{NFSU2_TR(0x5c4ac2);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ac9:{NFSU2_TR(0x5c4ac9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4acb:{NFSU2_TR(0x5c4acb);
{u32 ea_=u32(r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ad2:{NFSU2_TR(0x5c4ad2);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ad9:{NFSU2_TR(0x5c4ad9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4add:{NFSU2_TR(0x5c4add);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ae1:{NFSU2_TR(0x5c4ae1);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ae8:{NFSU2_TR(0x5c4ae8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4aea:{NFSU2_TR(0x5c4aea);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4aee:{NFSU2_TR(0x5c4aee);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4af5:{NFSU2_TR(0x5c4af5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4af7:{NFSU2_TR(0x5c4af7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4afb:{NFSU2_TR(0x5c4afb);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b02:{NFSU2_TR(0x5c4b02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b04:{NFSU2_TR(0x5c4b04);
{u32 ea_=u32(r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4b0b:{NFSU2_TR(0x5c4b0b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b0f:{NFSU2_TR(0x5c4b0f);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b16:{NFSU2_TR(0x5c4b16);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b1a:{NFSU2_TR(0x5c4b1a);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b21:{NFSU2_TR(0x5c4b21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b23:{NFSU2_TR(0x5c4b23);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b27:{NFSU2_TR(0x5c4b27);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b2e:{NFSU2_TR(0x5c4b2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b30:{NFSU2_TR(0x5c4b30);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b34:{NFSU2_TR(0x5c4b34);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b3b:{NFSU2_TR(0x5c4b3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b3d:{NFSU2_TR(0x5c4b3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c4b44:{NFSU2_TR(0x5c4b44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4b45:{NFSU2_TR(0x5c4b45);
{u32 ea_=u32(r4(R+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4b4c:{NFSU2_TR(0x5c4b4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c4b50:{NFSU2_TR(0x5c4b50);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b54:{NFSU2_TR(0x5c4b54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4b55:{NFSU2_TR(0x5c4b55);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b5c:{NFSU2_TR(0x5c4b5c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b60:{NFSU2_TR(0x5c4b60);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b67:{NFSU2_TR(0x5c4b67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b69:{NFSU2_TR(0x5c4b69);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b6d:{NFSU2_TR(0x5c4b6d);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b74:{NFSU2_TR(0x5c4b74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b76:{NFSU2_TR(0x5c4b76);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4b7a:{NFSU2_TR(0x5c4b7a);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4b81:{NFSU2_TR(0x5c4b81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4b83:{NFSU2_TR(0x5c4b83);
{u32 ea_=u32(r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4b8a:{NFSU2_TR(0x5c4b8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4b8full));
TAIL_STATIC(0x4012b0u,401);
}
B5c4b8f:L5c4b8f:{c.instructions+=6;NFSU2_TR(0x5c4b8f);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4b94:{NFSU2_TR(0x5c4b94);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4b98:{NFSU2_TR(0x5c4b98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4b99:{NFSU2_TR(0x5c4b99);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c4b9d:{NFSU2_TR(0x5c4b9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4b9e:{NFSU2_TR(0x5c4b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4ba3ull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c4ba3:L5c4ba3:{c.instructions+=2;NFSU2_TR(0x5c4ba3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5c4ba6:{NFSU2_TR(0x5c4ba6);
{goto L5c4f07;}
}
B5c4bab:L5c4bab:{c.instructions+=6;NFSU2_TR(0x5c4bab);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4bb0:{NFSU2_TR(0x5c4bb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c4bb4:{NFSU2_TR(0x5c4bb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4bb5:{NFSU2_TR(0x5c4bb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c4bb9:{NFSU2_TR(0x5c4bb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4bba:{NFSU2_TR(0x5c4bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4bbfull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c4bbf:L5c4bbf:{c.instructions+=197;NFSU2_TR(0x5c4bbf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bc3:{NFSU2_TR(0x5c4bc3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bc7:{NFSU2_TR(0x5c4bc7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bcb:{NFSU2_TR(0x5c4bcb);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bcf:{NFSU2_TR(0x5c4bcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4bd1:{NFSU2_TR(0x5c4bd1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bd5:{NFSU2_TR(0x5c4bd5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bd9:{NFSU2_TR(0x5c4bd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4bdb:{NFSU2_TR(0x5c4bdb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bdf:{NFSU2_TR(0x5c4bdf);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4be3:{NFSU2_TR(0x5c4be3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4be5:{NFSU2_TR(0x5c4be5);
{u32 ea_=u32(r4(R+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4bec:{NFSU2_TR(0x5c4bec);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bf0:{NFSU2_TR(0x5c4bf0);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bf4:{NFSU2_TR(0x5c4bf4);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4bf8:{NFSU2_TR(0x5c4bf8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4bfc:{NFSU2_TR(0x5c4bfc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4bfe:{NFSU2_TR(0x5c4bfe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c02:{NFSU2_TR(0x5c4c02);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c06:{NFSU2_TR(0x5c4c06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c08:{NFSU2_TR(0x5c4c08);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c0c:{NFSU2_TR(0x5c4c0c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c10:{NFSU2_TR(0x5c4c10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c12:{NFSU2_TR(0x5c4c12);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4c19:{NFSU2_TR(0x5c4c19);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c1d:{NFSU2_TR(0x5c4c1d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c21:{NFSU2_TR(0x5c4c21);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c25:{NFSU2_TR(0x5c4c25);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c29:{NFSU2_TR(0x5c4c29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c2b:{NFSU2_TR(0x5c4c2b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c2f:{NFSU2_TR(0x5c4c2f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c33:{NFSU2_TR(0x5c4c33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c35:{NFSU2_TR(0x5c4c35);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c39:{NFSU2_TR(0x5c4c39);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c3d:{NFSU2_TR(0x5c4c3d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c3f:{NFSU2_TR(0x5c4c3f);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4c46:{NFSU2_TR(0x5c4c46);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c4a:{NFSU2_TR(0x5c4c4a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c4e:{NFSU2_TR(0x5c4c4e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c52:{NFSU2_TR(0x5c4c52);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c56:{NFSU2_TR(0x5c4c56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c58:{NFSU2_TR(0x5c4c58);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c5c:{NFSU2_TR(0x5c4c5c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c60:{NFSU2_TR(0x5c4c60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c62:{NFSU2_TR(0x5c4c62);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c66:{NFSU2_TR(0x5c4c66);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c6a:{NFSU2_TR(0x5c4c6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c6c:{NFSU2_TR(0x5c4c6c);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4c73:{NFSU2_TR(0x5c4c73);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c77:{NFSU2_TR(0x5c4c77);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c7b:{NFSU2_TR(0x5c4c7b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c7f:{NFSU2_TR(0x5c4c7f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c83:{NFSU2_TR(0x5c4c83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c85:{NFSU2_TR(0x5c4c85);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c89:{NFSU2_TR(0x5c4c89);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c8d:{NFSU2_TR(0x5c4c8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c8f:{NFSU2_TR(0x5c4c8f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4c93:{NFSU2_TR(0x5c4c93);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4c97:{NFSU2_TR(0x5c4c97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4c99:{NFSU2_TR(0x5c4c99);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ca0:{NFSU2_TR(0x5c4ca0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ca4:{NFSU2_TR(0x5c4ca4);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ca8:{NFSU2_TR(0x5c4ca8);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cac:{NFSU2_TR(0x5c4cac);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cb0:{NFSU2_TR(0x5c4cb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cb2:{NFSU2_TR(0x5c4cb2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cb6:{NFSU2_TR(0x5c4cb6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cba:{NFSU2_TR(0x5c4cba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cbc:{NFSU2_TR(0x5c4cbc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cc0:{NFSU2_TR(0x5c4cc0);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cc4:{NFSU2_TR(0x5c4cc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cc6:{NFSU2_TR(0x5c4cc6);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ccd:{NFSU2_TR(0x5c4ccd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cd1:{NFSU2_TR(0x5c4cd1);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cd5:{NFSU2_TR(0x5c4cd5);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cd9:{NFSU2_TR(0x5c4cd9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cdd:{NFSU2_TR(0x5c4cdd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cdf:{NFSU2_TR(0x5c4cdf);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ce3:{NFSU2_TR(0x5c4ce3);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ce7:{NFSU2_TR(0x5c4ce7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ce9:{NFSU2_TR(0x5c4ce9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ced:{NFSU2_TR(0x5c4ced);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4cf1:{NFSU2_TR(0x5c4cf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4cf3:{NFSU2_TR(0x5c4cf3);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4cfa:{NFSU2_TR(0x5c4cfa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4cfe:{NFSU2_TR(0x5c4cfe);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d02:{NFSU2_TR(0x5c4d02);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d06:{NFSU2_TR(0x5c4d06);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d0a:{NFSU2_TR(0x5c4d0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d0c:{NFSU2_TR(0x5c4d0c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d10:{NFSU2_TR(0x5c4d10);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d14:{NFSU2_TR(0x5c4d14);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d16:{NFSU2_TR(0x5c4d16);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d1a:{NFSU2_TR(0x5c4d1a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d1e:{NFSU2_TR(0x5c4d1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d20:{NFSU2_TR(0x5c4d20);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4d27:{NFSU2_TR(0x5c4d27);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d2b:{NFSU2_TR(0x5c4d2b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d2f:{NFSU2_TR(0x5c4d2f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d36:{NFSU2_TR(0x5c4d36);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d3a:{NFSU2_TR(0x5c4d3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d3c:{NFSU2_TR(0x5c4d3c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d40:{NFSU2_TR(0x5c4d40);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d47:{NFSU2_TR(0x5c4d47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d49:{NFSU2_TR(0x5c4d49);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d4d:{NFSU2_TR(0x5c4d4d);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d54:{NFSU2_TR(0x5c4d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d56:{NFSU2_TR(0x5c4d56);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4d5d:{NFSU2_TR(0x5c4d5d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d61:{NFSU2_TR(0x5c4d61);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d65:{NFSU2_TR(0x5c4d65);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d6c:{NFSU2_TR(0x5c4d6c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d70:{NFSU2_TR(0x5c4d70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d72:{NFSU2_TR(0x5c4d72);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d79:{NFSU2_TR(0x5c4d79);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d7d:{NFSU2_TR(0x5c4d7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d7f:{NFSU2_TR(0x5c4d7f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d83:{NFSU2_TR(0x5c4d83);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d8a:{NFSU2_TR(0x5c4d8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4d8c:{NFSU2_TR(0x5c4d8c);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4d93:{NFSU2_TR(0x5c4d93);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4d97:{NFSU2_TR(0x5c4d97);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4d9b:{NFSU2_TR(0x5c4d9b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4da2:{NFSU2_TR(0x5c4da2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4da6:{NFSU2_TR(0x5c4da6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4da8:{NFSU2_TR(0x5c4da8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4dac:{NFSU2_TR(0x5c4dac);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4db3:{NFSU2_TR(0x5c4db3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4db5:{NFSU2_TR(0x5c4db5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4db9:{NFSU2_TR(0x5c4db9);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4dc0:{NFSU2_TR(0x5c4dc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4dc2:{NFSU2_TR(0x5c4dc2);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4dc9:{NFSU2_TR(0x5c4dc9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4dcd:{NFSU2_TR(0x5c4dcd);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4dd1:{NFSU2_TR(0x5c4dd1);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4dd8:{NFSU2_TR(0x5c4dd8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ddc:{NFSU2_TR(0x5c4ddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4dde:{NFSU2_TR(0x5c4dde);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4de2:{NFSU2_TR(0x5c4de2);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4de9:{NFSU2_TR(0x5c4de9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4deb:{NFSU2_TR(0x5c4deb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4def:{NFSU2_TR(0x5c4def);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4df6:{NFSU2_TR(0x5c4df6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4df8:{NFSU2_TR(0x5c4df8);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4dff:{NFSU2_TR(0x5c4dff);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e03:{NFSU2_TR(0x5c4e03);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e0a:{NFSU2_TR(0x5c4e0a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e0e:{NFSU2_TR(0x5c4e0e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e15:{NFSU2_TR(0x5c4e15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e17:{NFSU2_TR(0x5c4e17);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e1b:{NFSU2_TR(0x5c4e1b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e22:{NFSU2_TR(0x5c4e22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e24:{NFSU2_TR(0x5c4e24);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e28:{NFSU2_TR(0x5c4e28);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e2f:{NFSU2_TR(0x5c4e2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e31:{NFSU2_TR(0x5c4e31);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4e38:{NFSU2_TR(0x5c4e38);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e3f:{NFSU2_TR(0x5c4e3f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e43:{NFSU2_TR(0x5c4e43);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e47:{NFSU2_TR(0x5c4e47);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e4e:{NFSU2_TR(0x5c4e4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e50:{NFSU2_TR(0x5c4e50);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e54:{NFSU2_TR(0x5c4e54);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e5b:{NFSU2_TR(0x5c4e5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e5d:{NFSU2_TR(0x5c4e5d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e61:{NFSU2_TR(0x5c4e61);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e68:{NFSU2_TR(0x5c4e68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e6a:{NFSU2_TR(0x5c4e6a);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4e71:{NFSU2_TR(0x5c4e71);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e75:{NFSU2_TR(0x5c4e75);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e7c:{NFSU2_TR(0x5c4e7c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e80:{NFSU2_TR(0x5c4e80);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e87:{NFSU2_TR(0x5c4e87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e89:{NFSU2_TR(0x5c4e89);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e8d:{NFSU2_TR(0x5c4e8d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4e94:{NFSU2_TR(0x5c4e94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4e96:{NFSU2_TR(0x5c4e96);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4e9a:{NFSU2_TR(0x5c4e9a);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ea1:{NFSU2_TR(0x5c4ea1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ea3:{NFSU2_TR(0x5c4ea3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c4eaa:{NFSU2_TR(0x5c4eaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4eab:{NFSU2_TR(0x5c4eab);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4eb2:{NFSU2_TR(0x5c4eb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c4eb6:{NFSU2_TR(0x5c4eb6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4eba:{NFSU2_TR(0x5c4eba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4ebb:{NFSU2_TR(0x5c4ebb);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ec2:{NFSU2_TR(0x5c4ec2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ec6:{NFSU2_TR(0x5c4ec6);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ecd:{NFSU2_TR(0x5c4ecd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ecf:{NFSU2_TR(0x5c4ecf);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ed3:{NFSU2_TR(0x5c4ed3);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4eda:{NFSU2_TR(0x5c4eda);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4edc:{NFSU2_TR(0x5c4edc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4ee0:{NFSU2_TR(0x5c4ee0);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4ee7:{NFSU2_TR(0x5c4ee7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4ee9:{NFSU2_TR(0x5c4ee9);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4ef0:{NFSU2_TR(0x5c4ef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4ef5ull));
TAIL_STATIC(0x4012b0u,401);
}
B5c4ef5:L5c4ef5:{c.instructions+=2;NFSU2_TR(0x5c4ef5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5c4ef8:{NFSU2_TR(0x5c4ef8);
{goto L5c4f07;}
}
B5c4efa:L5c4efa:{c.instructions+=3;NFSU2_TR(0x5c4efa);
w4(R+4,u32(0x10ull));
}
B5c4eff:{NFSU2_TR(0x5c4eff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c4f01:{NFSU2_TR(0x5c4f01);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c4f05:L5c4f05:{c.instructions+=1;NFSU2_TR(0x5c4f05);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5c4f07;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c4f05u);}goto L5c4f05;}
}
B5c4f07:L5c4f07:{c.instructions+=38;NFSU2_TR(0x5c4f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c4f0a:{NFSU2_TR(0x5c4f0a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f0e:{NFSU2_TR(0x5c4f0e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f11:{NFSU2_TR(0x5c4f11);
__builtin_memmove((R+8),gp(0x865198),4);
}
B5c4f17:{NFSU2_TR(0x5c4f17);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f1b:{NFSU2_TR(0x5c4f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c4f22:{NFSU2_TR(0x5c4f22);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f25:{NFSU2_TR(0x5c4f25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4f26:{NFSU2_TR(0x5c4f26);
__builtin_memmove((R+4),(R+24),4);
}
B5c4f28:{NFSU2_TR(0x5c4f28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f2a:{NFSU2_TR(0x5c4f2a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f2e:{NFSU2_TR(0x5c4f2e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f30:{NFSU2_TR(0x5c4f30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f32:{NFSU2_TR(0x5c4f32);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c4f34:{NFSU2_TR(0x5c4f34);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4f3b:{NFSU2_TR(0x5c4f3b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f3f:{NFSU2_TR(0x5c4f3f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f42:{NFSU2_TR(0x5c4f42);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f46:{NFSU2_TR(0x5c4f46);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f49:{NFSU2_TR(0x5c4f49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f4b:{NFSU2_TR(0x5c4f4b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f4f:{NFSU2_TR(0x5c4f4f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f51:{NFSU2_TR(0x5c4f51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f53:{NFSU2_TR(0x5c4f53);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c4f55:{NFSU2_TR(0x5c4f55);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4f5c:{NFSU2_TR(0x5c4f5c);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f60:{NFSU2_TR(0x5c4f60);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f63:{NFSU2_TR(0x5c4f63);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f67:{NFSU2_TR(0x5c4f67);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f6a:{NFSU2_TR(0x5c4f6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f6c:{NFSU2_TR(0x5c4f6c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c4f70:{NFSU2_TR(0x5c4f70);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c4f72:{NFSU2_TR(0x5c4f72);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c4f76:{NFSU2_TR(0x5c4f76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c4f77:{NFSU2_TR(0x5c4f77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c4f79:{NFSU2_TR(0x5c4f79);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5c4f7b:{NFSU2_TR(0x5c4f7b);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c4f82:{NFSU2_TR(0x5c4f82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c4f87ull));
TAIL_STATIC(0x447280u,447);
}
B5c4f87:L5c4f87:{c.instructions+=4;NFSU2_TR(0x5c4f87);
__builtin_memmove((R+4),gp(0x828640),4);
}
B5c4f8d:{NFSU2_TR(0x5c4f8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c4f8f:{NFSU2_TR(0x5c4f8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c4f91:{NFSU2_TR(0x5c4f91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c4fa7;}}
}
B5c4f93:L5c4f93:{c.instructions+=3;NFSU2_TR(0x5c4f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4f99:{NFSU2_TR(0x5c4f99);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c4f9f:{NFSU2_TR(0x5c4f9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c4fa7;}}
}
B5c4fa1:L5c4fa1:{c.instructions+=1;NFSU2_TR(0x5c4fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4fa7:L5c4fa7:{c.instructions+=6;NFSU2_TR(0x5c4fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c4fae:{NFSU2_TR(0x5c4fae);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c4fb5:{NFSU2_TR(0x5c4fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4fbb:{NFSU2_TR(0x5c4fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4fc1:{NFSU2_TR(0x5c4fc1);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c4fc7:{NFSU2_TR(0x5c4fc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c4fd6;}}
}
B5c4fc9:L5c4fc9:{c.instructions+=2;NFSU2_TR(0x5c4fc9);
__builtin_memmove((R+0),gp(0x871b90),2);
}
B5c4fcf:{NFSU2_TR(0x5c4fcf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5c4fd6:L5c4fd6:{c.instructions+=7;NFSU2_TR(0x5c4fd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c4fdd:{NFSU2_TR(0x5c4fdd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c4fe4:{NFSU2_TR(0x5c4fe4);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5c4fe7:{NFSU2_TR(0x5c4fe7);
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
B5c4fe8:{NFSU2_TR(0x5c4fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4fef:{NFSU2_TR(0x5c4fef);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c4ff6:{NFSU2_TR(0x5c4ff6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5c39c9u,5c3);}
}
B5c4ffc:L5c4ffc:{c.instructions+=4;NFSU2_TR(0x5c4ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c4ffd:{NFSU2_TR(0x5c4ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c4ffe:{NFSU2_TR(0x5c4ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c4fff:{NFSU2_TR(0x5c4fff);
__builtin_memmove((R+16),(R+20),4);
TAIL_STATIC(0x5c5001u,5c5);
}
XIT:NFSU2_TR_EXIT(0x5c4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
