#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4c4(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_6fc(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 page_4c5(Cpu& c){return body_4c5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c5002:goto L4c5002;
case 0x4c5004:c.instructions+=1;goto B4c5004;
case 0x4c5006:goto L4c5006;
case 0x4c5009:c.instructions+=1;goto B4c5009;
case 0x4c500b:goto L4c500b;
case 0x4c500d:goto L4c500d;
case 0x4c500f:c.instructions+=5;goto B4c500f;
case 0x4c5011:c.instructions+=4;goto B4c5011;
case 0x4c5014:c.instructions+=3;goto B4c5014;
case 0x4c5019:c.instructions+=2;goto B4c5019;
case 0x4c501b:c.instructions+=1;goto B4c501b;
case 0x4c501d:goto L4c501d;
case 0x4c5022:c.instructions+=2;goto B4c5022;
case 0x4c5023:c.instructions+=1;goto B4c5023;
case 0x4c5028:goto L4c5028;
case 0x4c502b:c.instructions+=2;goto B4c502b;
case 0x4c502d:c.instructions+=1;goto B4c502d;
case 0x4c502f:goto L4c502f;
case 0x4c5032:c.instructions+=3;goto B4c5032;
case 0x4c5033:c.instructions+=2;goto B4c5033;
case 0x4c503d:c.instructions+=1;goto B4c503d;
case 0x4c5042:goto L4c5042;
case 0x4c5045:c.instructions+=4;goto B4c5045;
case 0x4c504a:c.instructions+=3;goto B4c504a;
case 0x4c504f:c.instructions+=2;goto B4c504f;
case 0x4c5054:c.instructions+=1;goto B4c5054;
case 0x4c5059:goto L4c5059;
case 0x4c505a:c.instructions+=2;goto B4c505a;
case 0x4c505f:c.instructions+=1;goto B4c505f;
case 0x4c5064:goto L4c5064;
case 0x4c5065:c.instructions+=2;goto B4c5065;
case 0x4c5066:c.instructions+=1;goto B4c5066;
case 0x4c506b:goto L4c506b;
case 0x4c506e:c.instructions+=4;goto B4c506e;
case 0x4c5070:c.instructions+=3;goto B4c5070;
case 0x4c5071:c.instructions+=2;goto B4c5071;
case 0x4c5072:c.instructions+=1;goto B4c5072;
case 0x4c5077:goto L4c5077;
case 0x4c507a:c.instructions+=3;goto B4c507a;
case 0x4c507b:c.instructions+=2;goto B4c507b;
case 0x4c507c:c.instructions+=1;goto B4c507c;
case 0x4c5080:goto L4c5080;
case 0x4c5086:c.instructions+=2;goto B4c5086;
case 0x4c5088:c.instructions+=1;goto B4c5088;
case 0x4c508a:goto L4c508a;
case 0x4c508b:c.instructions+=5;goto B4c508b;
case 0x4c508f:c.instructions+=4;goto B4c508f;
case 0x4c5090:c.instructions+=3;goto B4c5090;
case 0x4c5091:c.instructions+=2;goto B4c5091;
case 0x4c5093:c.instructions+=1;goto B4c5093;
case 0x4c5098:goto L4c5098;
case 0x4c509a:c.instructions+=1;goto B4c509a;
case 0x4c509c:goto L4c509c;
case 0x4c509f:goto L4c509f;
case 0x4c50a3:c.instructions+=4;goto B4c50a3;
case 0x4c50a5:c.instructions+=3;goto B4c50a5;
case 0x4c50a6:c.instructions+=2;goto B4c50a6;
case 0x4c50a7:c.instructions+=1;goto B4c50a7;
case 0x4c50ac:goto L4c50ac;
case 0x4c50af:c.instructions+=2;goto B4c50af;
case 0x4c50b0:c.instructions+=1;goto B4c50b0;
case 0x4c50b1:goto L4c50b1;
case 0x4c50c0:goto L4c50c0;
case 0x4c50c2:c.instructions+=7;goto B4c50c2;
case 0x4c50c7:c.instructions+=6;goto B4c50c7;
case 0x4c50cd:c.instructions+=5;goto B4c50cd;
case 0x4c50ce:c.instructions+=4;goto B4c50ce;
case 0x4c50d5:c.instructions+=3;goto B4c50d5;
case 0x4c50d6:c.instructions+=2;goto B4c50d6;
case 0x4c50d8:c.instructions+=1;goto B4c50d8;
case 0x4c50dd:goto L4c50dd;
case 0x4c50e0:c.instructions+=4;goto B4c50e0;
case 0x4c50e4:c.instructions+=3;goto B4c50e4;
case 0x4c50e6:c.instructions+=2;goto B4c50e6;
case 0x4c50ee:c.instructions+=1;goto B4c50ee;
case 0x4c50f0:goto L4c50f0;
case 0x4c50f4:c.instructions+=3;goto B4c50f4;
case 0x4c50f5:c.instructions+=2;goto B4c50f5;
case 0x4c50f7:c.instructions+=1;goto B4c50f7;
case 0x4c50fc:goto L4c50fc;
case 0x4c5100:c.instructions+=3;goto B4c5100;
case 0x4c5107:c.instructions+=2;goto B4c5107;
case 0x4c510a:c.instructions+=1;goto B4c510a;
case 0x4c510b:goto L4c510b;
case 0x4c510f:c.instructions+=4;goto B4c510f;
case 0x4c5111:c.instructions+=3;goto B4c5111;
case 0x4c5118:c.instructions+=2;goto B4c5118;
case 0x4c511b:c.instructions+=1;goto B4c511b;
case 0x4c5120:goto L4c5120;
case 0x4c5128:c.instructions+=3;goto B4c5128;
case 0x4c5129:c.instructions+=2;goto B4c5129;
case 0x4c512b:c.instructions+=1;goto B4c512b;
case 0x4c5131:goto L4c5131;
case 0x4c5134:c.instructions+=2;goto B4c5134;
case 0x4c5136:c.instructions+=1;goto B4c5136;
case 0x4c5138:goto L4c5138;
case 0x4c513d:c.instructions+=8;goto B4c513d;
case 0x4c5140:c.instructions+=7;goto B4c5140;
case 0x4c5144:c.instructions+=6;goto B4c5144;
case 0x4c5148:c.instructions+=5;goto B4c5148;
case 0x4c514e:c.instructions+=4;goto B4c514e;
case 0x4c5154:c.instructions+=3;goto B4c5154;
case 0x4c5156:c.instructions+=2;goto B4c5156;
case 0x4c5159:c.instructions+=1;goto B4c5159;
case 0x4c515f:goto L4c515f;
case 0x4c5162:c.instructions+=6;goto B4c5162;
case 0x4c5164:c.instructions+=5;goto B4c5164;
case 0x4c5169:c.instructions+=4;goto B4c5169;
case 0x4c516e:c.instructions+=3;goto B4c516e;
case 0x4c516f:c.instructions+=2;goto B4c516f;
case 0x4c5176:c.instructions+=1;goto B4c5176;
case 0x4c517b:goto L4c517b;
case 0x4c517e:c.instructions+=5;goto B4c517e;
case 0x4c5180:c.instructions+=4;goto B4c5180;
case 0x4c5185:c.instructions+=3;goto B4c5185;
case 0x4c518a:c.instructions+=2;goto B4c518a;
case 0x4c518b:c.instructions+=1;goto B4c518b;
case 0x4c5190:goto L4c5190;
case 0x4c5193:c.instructions+=2;goto B4c5193;
case 0x4c5194:c.instructions+=1;goto B4c5194;
case 0x4c5197:goto L4c5197;
case 0x4c519a:c.instructions+=1;goto B4c519a;
case 0x4c519c:goto L4c519c;
case 0x4c51a1:c.instructions+=10;goto B4c51a1;
case 0x4c51a4:c.instructions+=9;goto B4c51a4;
case 0x4c51a8:c.instructions+=8;goto B4c51a8;
case 0x4c51ac:c.instructions+=7;goto B4c51ac;
case 0x4c51b2:c.instructions+=6;goto B4c51b2;
case 0x4c51b8:c.instructions+=5;goto B4c51b8;
case 0x4c51ba:c.instructions+=4;goto B4c51ba;
case 0x4c51bc:c.instructions+=3;goto B4c51bc;
case 0x4c51be:c.instructions+=2;goto B4c51be;
case 0x4c51c1:c.instructions+=1;goto B4c51c1;
case 0x4c51c3:goto L4c51c3;
case 0x4c51c6:c.instructions+=5;goto B4c51c6;
case 0x4c51c8:c.instructions+=4;goto B4c51c8;
case 0x4c51cd:c.instructions+=3;goto B4c51cd;
case 0x4c51d2:c.instructions+=2;goto B4c51d2;
case 0x4c51d3:c.instructions+=1;goto B4c51d3;
case 0x4c51d8:goto L4c51d8;
case 0x4c51dc:c.instructions+=4;goto B4c51dc;
case 0x4c51df:c.instructions+=3;goto B4c51df;
case 0x4c51e0:c.instructions+=2;goto B4c51e0;
case 0x4c51e1:c.instructions+=1;goto B4c51e1;
case 0x4c51e6:goto L4c51e6;
case 0x4c51e9:goto L4c51e9;
case 0x4c51ea:c.instructions+=1;goto B4c51ea;
case 0x4c51f0:goto L4c51f0;
case 0x4c51f4:c.instructions+=4;goto B4c51f4;
case 0x4c51f9:c.instructions+=3;goto B4c51f9;
case 0x4c51fa:c.instructions+=2;goto B4c51fa;
case 0x4c51fc:c.instructions+=1;goto B4c51fc;
case 0x4c51fe:goto L4c51fe;
case 0x4c5200:goto L4c5200;
case 0x4c5205:c.instructions+=1;goto B4c5205;
case 0x4c5207:goto L4c5207;
case 0x4c520c:c.instructions+=1;goto B4c520c;
case 0x4c520e:goto L4c520e;
case 0x4c5212:c.instructions+=4;goto B4c5212;
case 0x4c5215:c.instructions+=3;goto B4c5215;
case 0x4c5216:c.instructions+=2;goto B4c5216;
case 0x4c5217:c.instructions+=1;goto B4c5217;
case 0x4c521c:goto L4c521c;
case 0x4c521f:c.instructions+=2;goto B4c521f;
case 0x4c5220:c.instructions+=1;goto B4c5220;
case 0x4c5223:goto L4c5223;
case 0x4c5226:c.instructions+=8;goto B4c5226;
case 0x4c5228:c.instructions+=7;goto B4c5228;
case 0x4c522a:c.instructions+=6;goto B4c522a;
case 0x4c522c:c.instructions+=5;goto B4c522c;
case 0x4c522e:c.instructions+=4;goto B4c522e;
case 0x4c5233:c.instructions+=3;goto B4c5233;
case 0x4c5234:c.instructions+=2;goto B4c5234;
case 0x4c5235:c.instructions+=1;goto B4c5235;
case 0x4c523a:goto L4c523a;
case 0x4c523d:c.instructions+=2;goto B4c523d;
case 0x4c523e:c.instructions+=1;goto B4c523e;
case 0x4c5241:goto L4c5241;
case 0x4c5246:c.instructions+=1;goto B4c5246;
case 0x4c5248:goto L4c5248;
case 0x4c524b:c.instructions+=2;goto B4c524b;
case 0x4c524d:c.instructions+=1;goto B4c524d;
case 0x4c524f:goto L4c524f;
case 0x4c5252:c.instructions+=8;goto B4c5252;
case 0x4c5254:c.instructions+=7;goto B4c5254;
case 0x4c5256:c.instructions+=6;goto B4c5256;
case 0x4c5258:c.instructions+=5;goto B4c5258;
case 0x4c525a:c.instructions+=4;goto B4c525a;
case 0x4c525f:c.instructions+=3;goto B4c525f;
case 0x4c5260:c.instructions+=2;goto B4c5260;
case 0x4c5261:c.instructions+=1;goto B4c5261;
case 0x4c5266:goto L4c5266;
case 0x4c526a:c.instructions+=1;goto B4c526a;
case 0x4c526d:goto L4c526d;
case 0x4c526e:c.instructions+=1;goto B4c526e;
case 0x4c5280:goto L4c5280;
case 0x4c5288:c.instructions+=1;goto B4c5288;
case 0x4c528a:goto L4c528a;
case 0x4c528f:c.instructions+=8;goto B4c528f;
case 0x4c5292:c.instructions+=7;goto B4c5292;
case 0x4c5296:c.instructions+=6;goto B4c5296;
case 0x4c529a:c.instructions+=5;goto B4c529a;
case 0x4c52a0:c.instructions+=4;goto B4c52a0;
case 0x4c52a6:c.instructions+=3;goto B4c52a6;
case 0x4c52a8:c.instructions+=2;goto B4c52a8;
case 0x4c52ab:c.instructions+=1;goto B4c52ab;
case 0x4c52ad:goto L4c52ad;
case 0x4c52b1:c.instructions+=4;goto B4c52b1;
case 0x4c52b4:c.instructions+=3;goto B4c52b4;
case 0x4c52b5:c.instructions+=2;goto B4c52b5;
case 0x4c52b6:c.instructions+=1;goto B4c52b6;
case 0x4c52bb:goto L4c52bb;
case 0x4c52be:goto L4c52be;
case 0x4c52d0:goto L4c52d0;
case 0x4c52d2:c.instructions+=7;goto B4c52d2;
case 0x4c52d7:c.instructions+=6;goto B4c52d7;
case 0x4c52dd:c.instructions+=5;goto B4c52dd;
case 0x4c52de:c.instructions+=4;goto B4c52de;
case 0x4c52e5:c.instructions+=3;goto B4c52e5;
case 0x4c52e6:c.instructions+=2;goto B4c52e6;
case 0x4c52e8:c.instructions+=1;goto B4c52e8;
case 0x4c52ed:goto L4c52ed;
case 0x4c52f0:c.instructions+=4;goto B4c52f0;
case 0x4c52f4:c.instructions+=3;goto B4c52f4;
case 0x4c52f6:c.instructions+=2;goto B4c52f6;
case 0x4c52fe:c.instructions+=1;goto B4c52fe;
case 0x4c5300:goto L4c5300;
case 0x4c5304:c.instructions+=3;goto B4c5304;
case 0x4c5305:c.instructions+=2;goto B4c5305;
case 0x4c5307:c.instructions+=1;goto B4c5307;
case 0x4c530c:goto L4c530c;
case 0x4c5310:c.instructions+=3;goto B4c5310;
case 0x4c5317:c.instructions+=2;goto B4c5317;
case 0x4c531a:c.instructions+=1;goto B4c531a;
case 0x4c531b:goto L4c531b;
case 0x4c531f:c.instructions+=4;goto B4c531f;
case 0x4c5321:c.instructions+=3;goto B4c5321;
case 0x4c5328:c.instructions+=2;goto B4c5328;
case 0x4c532b:c.instructions+=1;goto B4c532b;
case 0x4c5330:goto L4c5330;
case 0x4c5334:c.instructions+=4;goto B4c5334;
case 0x4c5339:c.instructions+=3;goto B4c5339;
case 0x4c533a:c.instructions+=2;goto B4c533a;
case 0x4c533c:c.instructions+=1;goto B4c533c;
case 0x4c533e:goto L4c533e;
case 0x4c5343:c.instructions+=1;goto B4c5343;
case 0x4c5345:goto L4c5345;
case 0x4c534a:c.instructions+=1;goto B4c534a;
case 0x4c534c:goto L4c534c;
case 0x4c5356:goto L4c5356;
case 0x4c535b:c.instructions+=2;goto B4c535b;
case 0x4c535d:c.instructions+=1;goto B4c535d;
case 0x4c535f:goto L4c535f;
case 0x4c5365:c.instructions+=1;goto B4c5365;
case 0x4c536a:goto L4c536a;
case 0x4c536d:c.instructions+=4;goto B4c536d;
case 0x4c536f:c.instructions+=3;goto B4c536f;
case 0x4c5374:c.instructions+=2;goto B4c5374;
case 0x4c5375:c.instructions+=1;goto B4c5375;
case 0x4c537a:goto L4c537a;
case 0x4c537d:c.instructions+=2;goto B4c537d;
case 0x4c537e:c.instructions+=1;goto B4c537e;
case 0x4c5381:goto L4c5381;
case 0x4c5385:c.instructions+=4;goto B4c5385;
case 0x4c5388:c.instructions+=3;goto B4c5388;
case 0x4c5389:c.instructions+=2;goto B4c5389;
case 0x4c538a:c.instructions+=1;goto B4c538a;
case 0x4c538f:goto L4c538f;
case 0x4c5392:goto L4c5392;
case 0x4c5393:c.instructions+=1;goto B4c5393;
case 0x4c53a0:goto L4c53a0;
case 0x4c53a8:c.instructions+=1;goto B4c53a8;
case 0x4c53aa:goto L4c53aa;
case 0x4c53ae:c.instructions+=5;goto B4c53ae;
case 0x4c53b8:c.instructions+=4;goto B4c53b8;
case 0x4c53bb:c.instructions+=3;goto B4c53bb;
case 0x4c53bc:c.instructions+=2;goto B4c53bc;
case 0x4c53bd:c.instructions+=1;goto B4c53bd;
case 0x4c53c2:goto L4c53c2;
case 0x4c53c5:goto L4c53c5;
case 0x4c53d0:goto L4c53d0;
case 0x4c53d4:c.instructions+=4;goto B4c53d4;
case 0x4c53d9:c.instructions+=3;goto B4c53d9;
case 0x4c53da:c.instructions+=2;goto B4c53da;
case 0x4c53dc:c.instructions+=1;goto B4c53dc;
case 0x4c53de:goto L4c53de;
case 0x4c53e0:goto L4c53e0;
case 0x4c53e5:c.instructions+=1;goto B4c53e5;
case 0x4c53e7:goto L4c53e7;
case 0x4c53ec:c.instructions+=1;goto B4c53ec;
case 0x4c53ee:goto L4c53ee;
case 0x4c53f3:c.instructions+=2;goto B4c53f3;
case 0x4c53f5:c.instructions+=1;goto B4c53f5;
case 0x4c53f7:goto L4c53f7;
case 0x4c53fa:c.instructions+=2;goto B4c53fa;
case 0x4c53fc:c.instructions+=1;goto B4c53fc;
case 0x4c53fe:goto L4c53fe;
case 0x4c5402:c.instructions+=5;goto B4c5402;
case 0x4c5405:c.instructions+=4;goto B4c5405;
case 0x4c5406:c.instructions+=3;goto B4c5406;
case 0x4c5407:c.instructions+=2;goto B4c5407;
case 0x4c540e:c.instructions+=1;goto B4c540e;
case 0x4c5413:goto L4c5413;
case 0x4c5416:c.instructions+=2;goto B4c5416;
case 0x4c5417:c.instructions+=1;goto B4c5417;
case 0x4c541a:goto L4c541a;
case 0x4c5424:c.instructions+=1;goto B4c5424;
case 0x4c5429:goto L4c5429;
case 0x4c542d:c.instructions+=5;goto B4c542d;
case 0x4c5430:c.instructions+=4;goto B4c5430;
case 0x4c5431:c.instructions+=3;goto B4c5431;
case 0x4c5432:c.instructions+=2;goto B4c5432;
case 0x4c5439:c.instructions+=1;goto B4c5439;
case 0x4c543e:goto L4c543e;
case 0x4c5441:c.instructions+=2;goto B4c5441;
case 0x4c5442:c.instructions+=1;goto B4c5442;
case 0x4c5445:goto L4c5445;
case 0x4c544a:c.instructions+=1;goto B4c544a;
case 0x4c544c:goto L4c544c;
case 0x4c544f:c.instructions+=1;goto B4c544f;
case 0x4c5454:goto L4c5454;
case 0x4c5455:c.instructions+=1;goto B4c5455;
case 0x4c5460:goto L4c5460;
case 0x4c5468:c.instructions+=1;goto B4c5468;
case 0x4c546a:goto L4c546a;
case 0x4c546f:c.instructions+=10;goto B4c546f;
case 0x4c5472:c.instructions+=9;goto B4c5472;
case 0x4c5476:c.instructions+=8;goto B4c5476;
case 0x4c547a:c.instructions+=7;goto B4c547a;
case 0x4c5480:c.instructions+=6;goto B4c5480;
case 0x4c5486:c.instructions+=5;goto B4c5486;
case 0x4c548c:c.instructions+=4;goto B4c548c;
case 0x4c548e:c.instructions+=3;goto B4c548e;
case 0x4c5490:c.instructions+=2;goto B4c5490;
case 0x4c5493:c.instructions+=1;goto B4c5493;
case 0x4c5495:goto L4c5495;
case 0x4c5499:c.instructions+=5;goto B4c5499;
case 0x4c549c:c.instructions+=4;goto B4c549c;
case 0x4c549d:c.instructions+=3;goto B4c549d;
case 0x4c549e:c.instructions+=2;goto B4c549e;
case 0x4c54a5:c.instructions+=1;goto B4c54a5;
case 0x4c54aa:goto L4c54aa;
case 0x4c54ad:goto L4c54ad;
case 0x4c54b0:goto L4c54b0;
case 0x4c54b8:c.instructions+=1;goto B4c54b8;
case 0x4c54ba:goto L4c54ba;
case 0x4c54bf:c.instructions+=8;goto B4c54bf;
case 0x4c54c2:c.instructions+=7;goto B4c54c2;
case 0x4c54c6:c.instructions+=6;goto B4c54c6;
case 0x4c54ca:c.instructions+=5;goto B4c54ca;
case 0x4c54d0:c.instructions+=4;goto B4c54d0;
case 0x4c54d6:c.instructions+=3;goto B4c54d6;
case 0x4c54d8:c.instructions+=2;goto B4c54d8;
case 0x4c54db:c.instructions+=1;goto B4c54db;
case 0x4c54dd:goto L4c54dd;
case 0x4c54e1:c.instructions+=4;goto B4c54e1;
case 0x4c54e4:c.instructions+=3;goto B4c54e4;
case 0x4c54e5:c.instructions+=2;goto B4c54e5;
case 0x4c54e6:c.instructions+=1;goto B4c54e6;
case 0x4c54eb:goto L4c54eb;
case 0x4c54ee:goto L4c54ee;
case 0x4c5500:goto L4c5500;
case 0x4c5502:c.instructions+=7;goto B4c5502;
case 0x4c5507:c.instructions+=6;goto B4c5507;
case 0x4c550d:c.instructions+=5;goto B4c550d;
case 0x4c550e:c.instructions+=4;goto B4c550e;
case 0x4c5515:c.instructions+=3;goto B4c5515;
case 0x4c5516:c.instructions+=2;goto B4c5516;
case 0x4c5518:c.instructions+=1;goto B4c5518;
case 0x4c551d:goto L4c551d;
case 0x4c5520:c.instructions+=4;goto B4c5520;
case 0x4c5524:c.instructions+=3;goto B4c5524;
case 0x4c5526:c.instructions+=2;goto B4c5526;
case 0x4c552e:c.instructions+=1;goto B4c552e;
case 0x4c5530:goto L4c5530;
case 0x4c5534:c.instructions+=3;goto B4c5534;
case 0x4c5535:c.instructions+=2;goto B4c5535;
case 0x4c5537:c.instructions+=1;goto B4c5537;
case 0x4c553c:goto L4c553c;
case 0x4c5540:c.instructions+=3;goto B4c5540;
case 0x4c5547:c.instructions+=2;goto B4c5547;
case 0x4c554a:c.instructions+=1;goto B4c554a;
case 0x4c554b:goto L4c554b;
case 0x4c554f:c.instructions+=4;goto B4c554f;
case 0x4c5551:c.instructions+=3;goto B4c5551;
case 0x4c5558:c.instructions+=2;goto B4c5558;
case 0x4c555b:c.instructions+=1;goto B4c555b;
case 0x4c5560:goto L4c5560;
case 0x4c5561:c.instructions+=2;goto B4c5561;
case 0x4c5563:c.instructions+=1;goto B4c5563;
case 0x4c5568:goto L4c5568;
case 0x4c556d:c.instructions+=1;goto B4c556d;
case 0x4c556f:goto L4c556f;
case 0x4c5570:c.instructions+=1;goto B4c5570;
case 0x4c5575:goto L4c5575;
case 0x4c5578:goto L4c5578;
case 0x4c557a:c.instructions+=2;goto B4c557a;
case 0x4c557b:c.instructions+=1;goto B4c557b;
case 0x4c5580:goto L4c5580;
case 0x4c5584:c.instructions+=4;goto B4c5584;
case 0x4c5589:c.instructions+=3;goto B4c5589;
case 0x4c558a:c.instructions+=2;goto B4c558a;
case 0x4c558c:c.instructions+=1;goto B4c558c;
case 0x4c558e:goto L4c558e;
case 0x4c5590:goto L4c5590;
case 0x4c5595:c.instructions+=1;goto B4c5595;
case 0x4c5597:goto L4c5597;
case 0x4c559c:c.instructions+=1;goto B4c559c;
case 0x4c55a2:goto L4c55a2;
case 0x4c55a7:c.instructions+=2;goto B4c55a7;
case 0x4c55a9:c.instructions+=1;goto B4c55a9;
case 0x4c55af:goto L4c55af;
case 0x4c55b2:c.instructions+=3;goto B4c55b2;
case 0x4c55b4:c.instructions+=2;goto B4c55b4;
case 0x4c55b5:c.instructions+=1;goto B4c55b5;
case 0x4c55ba:goto L4c55ba;
case 0x4c55be:c.instructions+=4;goto B4c55be;
case 0x4c55c1:c.instructions+=3;goto B4c55c1;
case 0x4c55c2:c.instructions+=2;goto B4c55c2;
case 0x4c55c3:c.instructions+=1;goto B4c55c3;
case 0x4c55c8:goto L4c55c8;
case 0x4c55cb:c.instructions+=2;goto B4c55cb;
case 0x4c55cc:c.instructions+=1;goto B4c55cc;
case 0x4c55cf:goto L4c55cf;
case 0x4c55d4:c.instructions+=4;goto B4c55d4;
case 0x4c55d9:c.instructions+=3;goto B4c55d9;
case 0x4c55de:c.instructions+=2;goto B4c55de;
case 0x4c55e1:c.instructions+=1;goto B4c55e1;
case 0x4c55e6:goto L4c55e6;
case 0x4c55e9:c.instructions+=2;goto B4c55e9;
case 0x4c55ea:c.instructions+=1;goto B4c55ea;
case 0x4c55ed:goto L4c55ed;
case 0x4c55f2:c.instructions+=1;goto B4c55f2;
case 0x4c55f8:goto L4c55f8;
case 0x4c55fe:c.instructions+=10;goto B4c55fe;
case 0x4c5601:c.instructions+=9;goto B4c5601;
case 0x4c5603:c.instructions+=8;goto B4c5603;
case 0x4c5605:c.instructions+=7;goto B4c5605;
case 0x4c5609:c.instructions+=6;goto B4c5609;
case 0x4c560d:c.instructions+=5;goto B4c560d;
case 0x4c5613:c.instructions+=4;goto B4c5613;
case 0x4c5619:c.instructions+=3;goto B4c5619;
case 0x4c561b:c.instructions+=2;goto B4c561b;
case 0x4c561e:c.instructions+=1;goto B4c561e;
case 0x4c5620:goto L4c5620;
case 0x4c5623:c.instructions+=3;goto B4c5623;
case 0x4c5628:c.instructions+=2;goto B4c5628;
case 0x4c5629:c.instructions+=1;goto B4c5629;
case 0x4c562e:goto L4c562e;
case 0x4c5631:c.instructions+=2;goto B4c5631;
case 0x4c5632:c.instructions+=1;goto B4c5632;
case 0x4c5635:goto L4c5635;
case 0x4c563a:c.instructions+=2;goto B4c563a;
case 0x4c563c:c.instructions+=1;goto B4c563c;
case 0x4c563e:goto L4c563e;
case 0x4c5641:c.instructions+=2;goto B4c5641;
case 0x4c5643:c.instructions+=1;goto B4c5643;
case 0x4c5645:goto L4c5645;
case 0x4c564a:c.instructions+=1;goto B4c564a;
case 0x4c564c:goto L4c564c;
case 0x4c564e:c.instructions+=3;goto B4c564e;
case 0x4c5650:c.instructions+=2;goto B4c5650;
case 0x4c5656:c.instructions+=1;goto B4c5656;
case 0x4c5658:goto L4c5658;
case 0x4c565a:c.instructions+=6;goto B4c565a;
case 0x4c565f:c.instructions+=5;goto B4c565f;
case 0x4c5666:c.instructions+=4;goto B4c5666;
case 0x4c5669:c.instructions+=3;goto B4c5669;
case 0x4c566e:c.instructions+=2;goto B4c566e;
case 0x4c566f:c.instructions+=1;goto B4c566f;
case 0x4c5674:goto L4c5674;
case 0x4c5677:c.instructions+=5;goto B4c5677;
case 0x4c5679:c.instructions+=4;goto B4c5679;
case 0x4c567e:c.instructions+=3;goto B4c567e;
case 0x4c5683:c.instructions+=2;goto B4c5683;
case 0x4c5684:c.instructions+=1;goto B4c5684;
case 0x4c5689:goto L4c5689;
case 0x4c568c:goto L4c568c;
case 0x4c568d:c.instructions+=1;goto B4c568d;
case 0x4c5690:goto L4c5690;
case 0x4c5695:c.instructions+=1;goto B4c5695;
case 0x4c569a:goto L4c569a;
case 0x4c569d:c.instructions+=2;goto B4c569d;
case 0x4c569f:c.instructions+=1;goto B4c569f;
case 0x4c56a1:goto L4c56a1;
case 0x4c56a4:c.instructions+=3;goto B4c56a4;
case 0x4c56a9:c.instructions+=2;goto B4c56a9;
case 0x4c56aa:c.instructions+=1;goto B4c56aa;
case 0x4c56af:goto L4c56af;
case 0x4c56b2:c.instructions+=2;goto B4c56b2;
case 0x4c56b6:c.instructions+=1;goto B4c56b6;
case 0x4c56bb:goto L4c56bb;
case 0x4c56c0:goto L4c56c0;
case 0x4c56c2:c.instructions+=11;goto B4c56c2;
case 0x4c56c7:c.instructions+=10;goto B4c56c7;
case 0x4c56cd:c.instructions+=9;goto B4c56cd;
case 0x4c56ce:c.instructions+=8;goto B4c56ce;
case 0x4c56d5:c.instructions+=7;goto B4c56d5;
case 0x4c56d6:c.instructions+=6;goto B4c56d6;
case 0x4c56da:c.instructions+=5;goto B4c56da;
case 0x4c56db:c.instructions+=4;goto B4c56db;
case 0x4c56dd:c.instructions+=3;goto B4c56dd;
case 0x4c56de:c.instructions+=2;goto B4c56de;
case 0x4c56e2:c.instructions+=1;goto B4c56e2;
case 0x4c56e7:goto L4c56e7;
case 0x4c56e9:c.instructions+=8;goto B4c56e9;
case 0x4c56ea:c.instructions+=7;goto B4c56ea;
case 0x4c56eb:c.instructions+=6;goto B4c56eb;
case 0x4c56f0:c.instructions+=5;goto B4c56f0;
case 0x4c56f6:c.instructions+=4;goto B4c56f6;
case 0x4c56fb:c.instructions+=3;goto B4c56fb;
case 0x4c56ff:c.instructions+=2;goto B4c56ff;
case 0x4c5702:c.instructions+=1;goto B4c5702;
case 0x4c5707:goto L4c5707;
case 0x4c570a:c.instructions+=2;goto B4c570a;
case 0x4c570b:c.instructions+=1;goto B4c570b;
case 0x4c5710:goto L4c5710;
case 0x4c5713:c.instructions+=3;goto B4c5713;
case 0x4c5718:c.instructions+=2;goto B4c5718;
case 0x4c5719:c.instructions+=1;goto B4c5719;
case 0x4c571e:goto L4c571e;
case 0x4c571f:c.instructions+=1;goto B4c571f;
case 0x4c5724:goto L4c5724;
case 0x4c5728:c.instructions+=6;goto B4c5728;
case 0x4c572b:c.instructions+=5;goto B4c572b;
case 0x4c572d:c.instructions+=4;goto B4c572d;
case 0x4c572e:c.instructions+=3;goto B4c572e;
case 0x4c5735:c.instructions+=2;goto B4c5735;
case 0x4c5738:c.instructions+=1;goto B4c5738;
case 0x4c5740:goto L4c5740;
case 0x4c5741:c.instructions+=2;goto B4c5741;
case 0x4c5743:c.instructions+=1;goto B4c5743;
case 0x4c5748:goto L4c5748;
case 0x4c574d:c.instructions+=1;goto B4c574d;
case 0x4c574f:goto L4c574f;
case 0x4c5750:c.instructions+=1;goto B4c5750;
case 0x4c5755:goto L4c5755;
case 0x4c5758:goto L4c5758;
case 0x4c575a:c.instructions+=2;goto B4c575a;
case 0x4c575b:c.instructions+=1;goto B4c575b;
case 0x4c5760:goto L4c5760;
case 0x4c5766:c.instructions+=1;goto B4c5766;
case 0x4c5770:goto L4c5770;
case 0x4c5778:c.instructions+=3;goto B4c5778;
case 0x4c5779:c.instructions+=2;goto B4c5779;
case 0x4c577b:c.instructions+=1;goto B4c577b;
case 0x4c577d:goto L4c577d;
case 0x4c5781:c.instructions+=2;goto B4c5781;
case 0x4c5783:c.instructions+=1;goto B4c5783;
case 0x4c5785:goto L4c5785;
case 0x4c578c:c.instructions+=1;goto B4c578c;
case 0x4c578e:goto L4c578e;
case 0x4c5793:goto L4c5793;
case 0x4c5795:c.instructions+=1;goto B4c5795;
case 0x4c5797:goto L4c5797;
case 0x4c579b:c.instructions+=4;goto B4c579b;
case 0x4c579e:c.instructions+=3;goto B4c579e;
case 0x4c579f:c.instructions+=2;goto B4c579f;
case 0x4c57a0:c.instructions+=1;goto B4c57a0;
case 0x4c57a5:goto L4c57a5;
case 0x4c57a8:c.instructions+=2;goto B4c57a8;
case 0x4c57a9:c.instructions+=1;goto B4c57a9;
case 0x4c57ac:goto L4c57ac;
case 0x4c57b6:goto L4c57b6;
case 0x4c57b7:c.instructions+=1;goto B4c57b7;
case 0x4c57c0:goto L4c57c0;
case 0x4c57c5:c.instructions+=1;goto B4c57c5;
case 0x4c57ca:goto L4c57ca;
case 0x4c57cd:c.instructions+=2;goto B4c57cd;
case 0x4c57cf:c.instructions+=1;goto B4c57cf;
case 0x4c57d1:goto L4c57d1;
case 0x4c57d3:c.instructions+=2;goto B4c57d3;
case 0x4c57d8:c.instructions+=1;goto B4c57d8;
case 0x4c57dd:goto L4c57dd;
case 0x4c57e0:goto L4c57e0;
case 0x4c57f0:goto L4c57f0;
case 0x4c57f8:c.instructions+=1;goto B4c57f8;
case 0x4c57fa:goto L4c57fa;
case 0x4c57fe:c.instructions+=8;goto B4c57fe;
case 0x4c5800:c.instructions+=7;goto B4c5800;
case 0x4c5802:c.instructions+=6;goto B4c5802;
case 0x4c5804:c.instructions+=5;goto B4c5804;
case 0x4c5806:c.instructions+=4;goto B4c5806;
case 0x4c580b:c.instructions+=3;goto B4c580b;
case 0x4c580c:c.instructions+=2;goto B4c580c;
case 0x4c580d:c.instructions+=1;goto B4c580d;
case 0x4c5812:goto L4c5812;
case 0x4c5815:goto L4c5815;
case 0x4c5820:goto L4c5820;
case 0x4c5828:c.instructions+=1;goto B4c5828;
case 0x4c582a:goto L4c582a;
case 0x4c582e:c.instructions+=8;goto B4c582e;
case 0x4c5833:c.instructions+=7;goto B4c5833;
case 0x4c5838:c.instructions+=6;goto B4c5838;
case 0x4c583a:c.instructions+=5;goto B4c583a;
case 0x4c583c:c.instructions+=4;goto B4c583c;
case 0x4c5841:c.instructions+=3;goto B4c5841;
case 0x4c5842:c.instructions+=2;goto B4c5842;
case 0x4c5843:c.instructions+=1;goto B4c5843;
case 0x4c5848:goto L4c5848;
case 0x4c584b:goto L4c584b;
case 0x4c5850:goto L4c5850;
case 0x4c5858:c.instructions+=1;goto B4c5858;
case 0x4c585a:goto L4c585a;
case 0x4c585e:c.instructions+=8;goto B4c585e;
case 0x4c5860:c.instructions+=7;goto B4c5860;
case 0x4c5862:c.instructions+=6;goto B4c5862;
case 0x4c5864:c.instructions+=5;goto B4c5864;
case 0x4c5866:c.instructions+=4;goto B4c5866;
case 0x4c586b:c.instructions+=3;goto B4c586b;
case 0x4c586c:c.instructions+=2;goto B4c586c;
case 0x4c586d:c.instructions+=1;goto B4c586d;
case 0x4c5872:goto L4c5872;
case 0x4c5875:goto L4c5875;
case 0x4c5880:goto L4c5880;
case 0x4c5888:c.instructions+=1;goto B4c5888;
case 0x4c588a:goto L4c588a;
case 0x4c588e:c.instructions+=8;goto B4c588e;
case 0x4c5890:c.instructions+=7;goto B4c5890;
case 0x4c5892:c.instructions+=6;goto B4c5892;
case 0x4c5894:c.instructions+=5;goto B4c5894;
case 0x4c5896:c.instructions+=4;goto B4c5896;
case 0x4c589b:c.instructions+=3;goto B4c589b;
case 0x4c589c:c.instructions+=2;goto B4c589c;
case 0x4c589d:c.instructions+=1;goto B4c589d;
case 0x4c58a2:goto L4c58a2;
case 0x4c58a5:goto L4c58a5;
case 0x4c58b0:goto L4c58b0;
case 0x4c58b2:c.instructions+=10;goto B4c58b2;
case 0x4c58b7:c.instructions+=9;goto B4c58b7;
case 0x4c58bd:c.instructions+=8;goto B4c58bd;
case 0x4c58be:c.instructions+=7;goto B4c58be;
case 0x4c58c5:c.instructions+=6;goto B4c58c5;
case 0x4c58c6:c.instructions+=5;goto B4c58c6;
case 0x4c58c7:c.instructions+=4;goto B4c58c7;
case 0x4c58c8:c.instructions+=3;goto B4c58c8;
case 0x4c58ca:c.instructions+=2;goto B4c58ca;
case 0x4c58cc:c.instructions+=1;goto B4c58cc;
case 0x4c58d1:goto L4c58d1;
case 0x4c58d3:c.instructions+=5;goto B4c58d3;
case 0x4c58d6:c.instructions+=4;goto B4c58d6;
case 0x4c58da:c.instructions+=3;goto B4c58da;
case 0x4c58dc:c.instructions+=2;goto B4c58dc;
case 0x4c58e4:c.instructions+=1;goto B4c58e4;
case 0x4c58e6:goto L4c58e6;
case 0x4c58e8:c.instructions+=4;goto B4c58e8;
case 0x4c58ed:c.instructions+=3;goto B4c58ed;
case 0x4c58f2:c.instructions+=2;goto B4c58f2;
case 0x4c58f4:c.instructions+=1;goto B4c58f4;
case 0x4c58f9:goto L4c58f9;
case 0x4c58ff:c.instructions+=1;goto B4c58ff;
case 0x4c5901:goto L4c5901;
case 0x4c5903:goto L4c5903;
case 0x4c5904:c.instructions+=5;goto B4c5904;
case 0x4c5907:c.instructions+=4;goto B4c5907;
case 0x4c5909:c.instructions+=3;goto B4c5909;
case 0x4c590d:c.instructions+=2;goto B4c590d;
case 0x4c5913:c.instructions+=1;goto B4c5913;
case 0x4c5918:goto L4c5918;
case 0x4c591a:c.instructions+=5;goto B4c591a;
case 0x4c591d:c.instructions+=4;goto B4c591d;
case 0x4c5921:c.instructions+=3;goto B4c5921;
case 0x4c5923:c.instructions+=2;goto B4c5923;
case 0x4c592b:c.instructions+=1;goto B4c592b;
case 0x4c592d:goto L4c592d;
case 0x4c592f:c.instructions+=4;goto B4c592f;
case 0x4c5934:c.instructions+=3;goto B4c5934;
case 0x4c5939:c.instructions+=2;goto B4c5939;
case 0x4c593b:c.instructions+=1;goto B4c593b;
case 0x4c5940:goto L4c5940;
case 0x4c5946:c.instructions+=1;goto B4c5946;
case 0x4c5948:goto L4c5948;
case 0x4c594a:goto L4c594a;
case 0x4c594c:c.instructions+=4;goto B4c594c;
case 0x4c594d:c.instructions+=3;goto B4c594d;
case 0x4c594f:c.instructions+=2;goto B4c594f;
case 0x4c5953:c.instructions+=1;goto B4c5953;
case 0x4c5956:goto L4c5956;
case 0x4c5958:c.instructions+=1;goto B4c5958;
case 0x4c595d:goto L4c595d;
case 0x4c595f:c.instructions+=5;goto B4c595f;
case 0x4c5962:c.instructions+=4;goto B4c5962;
case 0x4c5966:c.instructions+=3;goto B4c5966;
case 0x4c5968:c.instructions+=2;goto B4c5968;
case 0x4c5970:c.instructions+=1;goto B4c5970;
case 0x4c5972:goto L4c5972;
case 0x4c5974:c.instructions+=4;goto B4c5974;
case 0x4c5979:c.instructions+=3;goto B4c5979;
case 0x4c597e:c.instructions+=2;goto B4c597e;
case 0x4c5980:c.instructions+=1;goto B4c5980;
case 0x4c5985:goto L4c5985;
case 0x4c598b:c.instructions+=1;goto B4c598b;
case 0x4c598d:goto L4c598d;
case 0x4c598f:goto L4c598f;
case 0x4c5991:c.instructions+=4;goto B4c5991;
case 0x4c5992:c.instructions+=3;goto B4c5992;
case 0x4c5994:c.instructions+=2;goto B4c5994;
case 0x4c5998:c.instructions+=1;goto B4c5998;
case 0x4c599b:goto L4c599b;
case 0x4c59a1:c.instructions+=4;goto B4c59a1;
case 0x4c59a3:c.instructions+=3;goto B4c59a3;
case 0x4c59a4:c.instructions+=2;goto B4c59a4;
case 0x4c59a6:c.instructions+=1;goto B4c59a6;
case 0x4c59a9:goto L4c59a9;
case 0x4c59ab:c.instructions+=1;goto B4c59ab;
case 0x4c59b0:goto L4c59b0;
case 0x4c59b2:c.instructions+=5;goto B4c59b2;
case 0x4c59b5:c.instructions+=4;goto B4c59b5;
case 0x4c59b9:c.instructions+=3;goto B4c59b9;
case 0x4c59bb:c.instructions+=2;goto B4c59bb;
case 0x4c59c3:c.instructions+=1;goto B4c59c3;
case 0x4c59c5:goto L4c59c5;
case 0x4c59c7:c.instructions+=4;goto B4c59c7;
case 0x4c59cc:c.instructions+=3;goto B4c59cc;
case 0x4c59d1:c.instructions+=2;goto B4c59d1;
case 0x4c59d3:c.instructions+=1;goto B4c59d3;
case 0x4c59d8:goto L4c59d8;
case 0x4c59de:c.instructions+=1;goto B4c59de;
case 0x4c59e0:goto L4c59e0;
case 0x4c59e2:goto L4c59e2;
case 0x4c59e4:c.instructions+=4;goto B4c59e4;
case 0x4c59e5:c.instructions+=3;goto B4c59e5;
case 0x4c59e7:c.instructions+=2;goto B4c59e7;
case 0x4c59eb:c.instructions+=1;goto B4c59eb;
case 0x4c59ee:goto L4c59ee;
case 0x4c59f0:c.instructions+=1;goto B4c59f0;
case 0x4c59f5:goto L4c59f5;
case 0x4c59f8:c.instructions+=4;goto B4c59f8;
case 0x4c59fb:c.instructions+=3;goto B4c59fb;
case 0x4c59fe:c.instructions+=2;goto B4c59fe;
case 0x4c59ff:c.instructions+=1;goto B4c59ff;
case 0x4c5a04:goto L4c5a04;
case 0x4c5a07:c.instructions+=3;goto B4c5a07;
case 0x4c5a08:c.instructions+=2;goto B4c5a08;
case 0x4c5a0a:c.instructions+=1;goto B4c5a0a;
case 0x4c5a0d:goto L4c5a0d;
case 0x4c5a13:c.instructions+=3;goto B4c5a13;
case 0x4c5a15:c.instructions+=2;goto B4c5a15;
case 0x4c5a16:c.instructions+=1;goto B4c5a16;
case 0x4c5a18:goto L4c5a18;
case 0x4c5a1b:c.instructions+=3;goto B4c5a1b;
case 0x4c5a20:c.instructions+=2;goto B4c5a20;
case 0x4c5a22:c.instructions+=1;goto B4c5a22;
case 0x4c5a27:goto L4c5a27;
case 0x4c5a2b:goto L4c5a2b;
case 0x4c5a2f:c.instructions+=5;goto B4c5a2f;
case 0x4c5a30:c.instructions+=4;goto B4c5a30;
case 0x4c5a31:c.instructions+=3;goto B4c5a31;
case 0x4c5a38:c.instructions+=2;goto B4c5a38;
case 0x4c5a3b:c.instructions+=1;goto B4c5a3b;
case 0x4c5a40:goto L4c5a40;
case 0x4c5a42:c.instructions+=10;goto B4c5a42;
case 0x4c5a47:c.instructions+=9;goto B4c5a47;
case 0x4c5a4d:c.instructions+=8;goto B4c5a4d;
case 0x4c5a4e:c.instructions+=7;goto B4c5a4e;
case 0x4c5a55:c.instructions+=6;goto B4c5a55;
case 0x4c5a56:c.instructions+=5;goto B4c5a56;
case 0x4c5a57:c.instructions+=4;goto B4c5a57;
case 0x4c5a58:c.instructions+=3;goto B4c5a58;
case 0x4c5a5a:c.instructions+=2;goto B4c5a5a;
case 0x4c5a5c:c.instructions+=1;goto B4c5a5c;
case 0x4c5a61:goto L4c5a61;
case 0x4c5a63:c.instructions+=5;goto B4c5a63;
case 0x4c5a66:c.instructions+=4;goto B4c5a66;
case 0x4c5a6a:c.instructions+=3;goto B4c5a6a;
case 0x4c5a6c:c.instructions+=2;goto B4c5a6c;
case 0x4c5a74:c.instructions+=1;goto B4c5a74;
case 0x4c5a76:goto L4c5a76;
case 0x4c5a78:c.instructions+=4;goto B4c5a78;
case 0x4c5a7d:c.instructions+=3;goto B4c5a7d;
case 0x4c5a82:c.instructions+=2;goto B4c5a82;
case 0x4c5a84:c.instructions+=1;goto B4c5a84;
case 0x4c5a89:goto L4c5a89;
case 0x4c5a8f:c.instructions+=1;goto B4c5a8f;
case 0x4c5a91:goto L4c5a91;
case 0x4c5a93:goto L4c5a93;
case 0x4c5a95:c.instructions+=4;goto B4c5a95;
case 0x4c5a96:c.instructions+=3;goto B4c5a96;
case 0x4c5a98:c.instructions+=2;goto B4c5a98;
case 0x4c5aa0:c.instructions+=1;goto B4c5aa0;
case 0x4c5aa3:goto L4c5aa3;
case 0x4c5aa5:c.instructions+=1;goto B4c5aa5;
case 0x4c5aaa:goto L4c5aaa;
case 0x4c5aac:c.instructions+=5;goto B4c5aac;
case 0x4c5aaf:c.instructions+=4;goto B4c5aaf;
case 0x4c5ab3:c.instructions+=3;goto B4c5ab3;
case 0x4c5ab5:c.instructions+=2;goto B4c5ab5;
case 0x4c5abd:c.instructions+=1;goto B4c5abd;
case 0x4c5abf:goto L4c5abf;
case 0x4c5ac1:c.instructions+=4;goto B4c5ac1;
case 0x4c5ac6:c.instructions+=3;goto B4c5ac6;
case 0x4c5acb:c.instructions+=2;goto B4c5acb;
case 0x4c5acd:c.instructions+=1;goto B4c5acd;
case 0x4c5ad2:goto L4c5ad2;
case 0x4c5ad8:c.instructions+=1;goto B4c5ad8;
case 0x4c5ada:goto L4c5ada;
case 0x4c5adc:goto L4c5adc;
case 0x4c5ade:c.instructions+=4;goto B4c5ade;
case 0x4c5adf:c.instructions+=3;goto B4c5adf;
case 0x4c5ae1:c.instructions+=2;goto B4c5ae1;
case 0x4c5ae9:c.instructions+=1;goto B4c5ae9;
case 0x4c5aec:goto L4c5aec;
case 0x4c5aee:c.instructions+=2;goto B4c5aee;
case 0x4c5af0:c.instructions+=1;goto B4c5af0;
case 0x4c5af3:goto L4c5af3;
case 0x4c5af6:c.instructions+=4;goto B4c5af6;
case 0x4c5af9:c.instructions+=3;goto B4c5af9;
case 0x4c5afc:c.instructions+=2;goto B4c5afc;
case 0x4c5afd:c.instructions+=1;goto B4c5afd;
case 0x4c5b02:goto L4c5b02;
case 0x4c5b05:c.instructions+=3;goto B4c5b05;
case 0x4c5b06:c.instructions+=2;goto B4c5b06;
case 0x4c5b08:c.instructions+=1;goto B4c5b08;
case 0x4c5b0b:goto L4c5b0b;
case 0x4c5b0f:c.instructions+=5;goto B4c5b0f;
case 0x4c5b10:c.instructions+=4;goto B4c5b10;
case 0x4c5b11:c.instructions+=3;goto B4c5b11;
case 0x4c5b18:c.instructions+=2;goto B4c5b18;
case 0x4c5b1b:c.instructions+=1;goto B4c5b1b;
case 0x4c5b20:goto L4c5b20;
case 0x4c5b23:c.instructions+=3;goto B4c5b23;
case 0x4c5b24:c.instructions+=2;goto B4c5b24;
case 0x4c5b27:c.instructions+=1;goto B4c5b27;
case 0x4c5b30:goto L4c5b30;
case 0x4c5b33:c.instructions+=4;goto B4c5b33;
case 0x4c5b34:c.instructions+=3;goto B4c5b34;
case 0x4c5b36:c.instructions+=2;goto B4c5b36;
case 0x4c5b39:c.instructions+=1;goto B4c5b39;
case 0x4c5b3b:goto L4c5b3b;
case 0x4c5b3d:c.instructions+=2;goto B4c5b3d;
case 0x4c5b3f:c.instructions+=1;goto B4c5b3f;
case 0x4c5b42:goto L4c5b42;
case 0x4c5b44:goto L4c5b44;
case 0x4c5b50:goto L4c5b50;
case 0x4c5b53:c.instructions+=1;goto B4c5b53;
case 0x4c5b60:goto L4c5b60;
case 0x4c5b63:c.instructions+=1;goto B4c5b63;
case 0x4c5b70:goto L4c5b70;
case 0x4c5b71:c.instructions+=4;goto B4c5b71;
case 0x4c5b73:c.instructions+=3;goto B4c5b73;
case 0x4c5b76:c.instructions+=2;goto B4c5b76;
case 0x4c5b7c:c.instructions+=1;goto B4c5b7c;
case 0x4c5b81:goto L4c5b81;
case 0x4c5b86:c.instructions+=1;goto B4c5b86;
case 0x4c5b88:goto L4c5b88;
case 0x4c5b89:c.instructions+=1;goto B4c5b89;
case 0x4c5b8e:goto L4c5b8e;
case 0x4c5b91:goto L4c5b91;
case 0x4c5b93:c.instructions+=2;goto B4c5b93;
case 0x4c5b94:c.instructions+=1;goto B4c5b94;
case 0x4c5ba0:goto L4c5ba0;
case 0x4c5ba2:c.instructions+=8;goto B4c5ba2;
case 0x4c5ba7:c.instructions+=7;goto B4c5ba7;
case 0x4c5bad:c.instructions+=6;goto B4c5bad;
case 0x4c5bae:c.instructions+=5;goto B4c5bae;
case 0x4c5bb5:c.instructions+=4;goto B4c5bb5;
case 0x4c5bb6:c.instructions+=3;goto B4c5bb6;
case 0x4c5bb7:c.instructions+=2;goto B4c5bb7;
case 0x4c5bb9:c.instructions+=1;goto B4c5bb9;
case 0x4c5bbe:goto L4c5bbe;
case 0x4c5bc0:c.instructions+=6;goto B4c5bc0;
case 0x4c5bc3:c.instructions+=5;goto B4c5bc3;
case 0x4c5bc7:c.instructions+=4;goto B4c5bc7;
case 0x4c5bc9:c.instructions+=3;goto B4c5bc9;
case 0x4c5bcb:c.instructions+=2;goto B4c5bcb;
case 0x4c5bcf:c.instructions+=1;goto B4c5bcf;
case 0x4c5bd1:goto L4c5bd1;
case 0x4c5bd2:c.instructions+=7;goto B4c5bd2;
case 0x4c5bd5:c.instructions+=6;goto B4c5bd5;
case 0x4c5bd7:c.instructions+=5;goto B4c5bd7;
case 0x4c5bd9:c.instructions+=4;goto B4c5bd9;
case 0x4c5bdf:c.instructions+=3;goto B4c5bdf;
case 0x4c5be6:c.instructions+=2;goto B4c5be6;
case 0x4c5beb:c.instructions+=1;goto B4c5beb;
case 0x4c5bf0:goto L4c5bf0;
case 0x4c5bf2:c.instructions+=1;goto B4c5bf2;
case 0x4c5bf3:goto L4c5bf3;
case 0x4c5bf7:c.instructions+=4;goto B4c5bf7;
case 0x4c5bf8:c.instructions+=3;goto B4c5bf8;
case 0x4c5bff:c.instructions+=2;goto B4c5bff;
case 0x4c5c02:c.instructions+=1;goto B4c5c02;
case 0x4c5c10:goto L4c5c10;
case 0x4c5c13:c.instructions+=4;goto B4c5c13;
case 0x4c5c14:c.instructions+=3;goto B4c5c14;
case 0x4c5c16:c.instructions+=2;goto B4c5c16;
case 0x4c5c19:c.instructions+=1;goto B4c5c19;
case 0x4c5c1b:goto L4c5c1b;
case 0x4c5c1d:c.instructions+=2;goto B4c5c1d;
case 0x4c5c1f:c.instructions+=1;goto B4c5c1f;
case 0x4c5c22:goto L4c5c22;
case 0x4c5c24:goto L4c5c24;
case 0x4c5c30:goto L4c5c30;
case 0x4c5c31:c.instructions+=5;goto B4c5c31;
case 0x4c5c33:c.instructions+=4;goto B4c5c33;
case 0x4c5c36:c.instructions+=3;goto B4c5c36;
case 0x4c5c38:c.instructions+=2;goto B4c5c38;
case 0x4c5c39:c.instructions+=1;goto B4c5c39;
case 0x4c5c3e:goto L4c5c3e;
case 0x4c5c41:c.instructions+=2;goto B4c5c41;
case 0x4c5c42:c.instructions+=1;goto B4c5c42;
case 0x4c5c47:goto L4c5c47;
case 0x4c5c4a:c.instructions+=3;goto B4c5c4a;
case 0x4c5c4e:c.instructions+=2;goto B4c5c4e;
case 0x4c5c4f:c.instructions+=1;goto B4c5c4f;
case 0x4c5c60:goto L4c5c60;
case 0x4c5c64:c.instructions+=2;goto B4c5c64;
case 0x4c5c65:c.instructions+=1;goto B4c5c65;
case 0x4c5c6a:goto L4c5c6a;
case 0x4c5c6b:c.instructions+=1;goto B4c5c6b;
case 0x4c5c70:goto L4c5c70;
case 0x4c5c74:c.instructions+=5;goto B4c5c74;
case 0x4c5c77:c.instructions+=4;goto B4c5c77;
case 0x4c5c78:c.instructions+=3;goto B4c5c78;
case 0x4c5c7b:c.instructions+=2;goto B4c5c7b;
case 0x4c5c7c:c.instructions+=1;goto B4c5c7c;
case 0x4c5c81:goto L4c5c81;
case 0x4c5c84:c.instructions+=1;goto B4c5c84;
case 0x4c5c90:goto L4c5c90;
case 0x4c5c92:c.instructions+=1;goto B4c5c92;
case 0x4c5c97:goto L4c5c97;
case 0x4c5c99:c.instructions+=3;goto B4c5c99;
case 0x4c5c9c:c.instructions+=2;goto B4c5c9c;
case 0x4c5c9e:c.instructions+=1;goto B4c5c9e;
case 0x4c5ca0:goto L4c5ca0;
case 0x4c5ca6:c.instructions+=6;goto B4c5ca6;
case 0x4c5cad:c.instructions+=5;goto B4c5cad;
case 0x4c5cb4:c.instructions+=4;goto B4c5cb4;
case 0x4c5cb7:c.instructions+=3;goto B4c5cb7;
case 0x4c5cba:c.instructions+=2;goto B4c5cba;
case 0x4c5cbd:c.instructions+=1;goto B4c5cbd;
case 0x4c5cbe:goto L4c5cbe;
case 0x4c5cc0:c.instructions+=1;goto B4c5cc0;
case 0x4c5cd0:goto L4c5cd0;
case 0x4c5cd4:c.instructions+=6;goto B4c5cd4;
case 0x4c5cd5:c.instructions+=5;goto B4c5cd5;
case 0x4c5cd7:c.instructions+=4;goto B4c5cd7;
case 0x4c5cda:c.instructions+=3;goto B4c5cda;
case 0x4c5cdd:c.instructions+=2;goto B4c5cdd;
case 0x4c5cde:c.instructions+=1;goto B4c5cde;
case 0x4c5ce3:goto L4c5ce3;
case 0x4c5ce6:c.instructions+=10;goto B4c5ce6;
case 0x4c5ce9:c.instructions+=9;goto B4c5ce9;
case 0x4c5cea:c.instructions+=8;goto B4c5cea;
case 0x4c5ceb:c.instructions+=7;goto B4c5ceb;
case 0x4c5cec:c.instructions+=6;goto B4c5cec;
case 0x4c5ced:c.instructions+=5;goto B4c5ced;
case 0x4c5cf0:c.instructions+=4;goto B4c5cf0;
case 0x4c5cf3:c.instructions+=3;goto B4c5cf3;
case 0x4c5cf8:c.instructions+=2;goto B4c5cf8;
case 0x4c5cf9:c.instructions+=1;goto B4c5cf9;
case 0x4c5cfe:goto L4c5cfe;
case 0x4c5d01:c.instructions+=3;goto B4c5d01;
case 0x4c5d05:c.instructions+=2;goto B4c5d05;
case 0x4c5d06:c.instructions+=1;goto B4c5d06;
case 0x4c5d10:goto L4c5d10;
case 0x4c5d11:c.instructions+=4;goto B4c5d11;
case 0x4c5d15:c.instructions+=3;goto B4c5d15;
case 0x4c5d18:c.instructions+=2;goto B4c5d18;
case 0x4c5d1a:c.instructions+=1;goto B4c5d1a;
case 0x4c5d1c:goto L4c5d1c;
case 0x4c5d20:goto L4c5d20;
case 0x4c5d22:c.instructions+=1;goto B4c5d22;
case 0x4c5d27:goto L4c5d27;
case 0x4c5d2a:c.instructions+=3;goto B4c5d2a;
case 0x4c5d2d:c.instructions+=2;goto B4c5d2d;
case 0x4c5d2f:c.instructions+=1;goto B4c5d2f;
case 0x4c5d31:goto L4c5d31;
case 0x4c5d32:c.instructions+=1;goto B4c5d32;
case 0x4c5d35:goto L4c5d35;
case 0x4c5d38:c.instructions+=3;goto B4c5d38;
case 0x4c5d3a:c.instructions+=2;goto B4c5d3a;
case 0x4c5d3b:c.instructions+=1;goto B4c5d3b;
case 0x4c5d40:goto L4c5d40;
case 0x4c5d41:c.instructions+=5;goto B4c5d41;
case 0x4c5d43:c.instructions+=4;goto B4c5d43;
case 0x4c5d46:c.instructions+=3;goto B4c5d46;
case 0x4c5d48:c.instructions+=2;goto B4c5d48;
case 0x4c5d4e:c.instructions+=1;goto B4c5d4e;
case 0x4c5d50:goto L4c5d50;
case 0x4c5d52:c.instructions+=1;goto B4c5d52;
case 0x4c5d57:goto L4c5d57;
case 0x4c5d5a:c.instructions+=2;goto B4c5d5a;
case 0x4c5d5b:c.instructions+=1;goto B4c5d5b;
case 0x4c5d60:goto L4c5d60;
case 0x4c5d63:goto L4c5d63;
case 0x4c5d68:c.instructions+=1;goto B4c5d68;
case 0x4c5d6a:goto L4c5d6a;
case 0x4c5d6b:c.instructions+=1;goto B4c5d6b;
case 0x4c5d70:goto L4c5d70;
case 0x4c5d73:goto L4c5d73;
case 0x4c5d75:c.instructions+=2;goto B4c5d75;
case 0x4c5d76:c.instructions+=1;goto B4c5d76;
case 0x4c5d80:goto L4c5d80;
case 0x4c5d86:c.instructions+=14;goto B4c5d86;
case 0x4c5d88:c.instructions+=13;goto B4c5d88;
case 0x4c5d8d:c.instructions+=12;goto B4c5d8d;
case 0x4c5d8e:c.instructions+=11;goto B4c5d8e;
case 0x4c5d93:c.instructions+=10;goto B4c5d93;
case 0x4c5d9a:c.instructions+=9;goto B4c5d9a;
case 0x4c5d9d:c.instructions+=8;goto B4c5d9d;
case 0x4c5d9e:c.instructions+=7;goto B4c5d9e;
case 0x4c5d9f:c.instructions+=6;goto B4c5d9f;
case 0x4c5da1:c.instructions+=5;goto B4c5da1;
case 0x4c5da3:c.instructions+=4;goto B4c5da3;
case 0x4c5da4:c.instructions+=3;goto B4c5da4;
case 0x4c5da6:c.instructions+=2;goto B4c5da6;
case 0x4c5dab:c.instructions+=1;goto B4c5dab;
case 0x4c5dad:goto L4c5dad;
case 0x4c5daf:c.instructions+=5;goto B4c5daf;
case 0x4c5db4:c.instructions+=4;goto B4c5db4;
case 0x4c5dba:c.instructions+=3;goto B4c5dba;
case 0x4c5dc0:c.instructions+=2;goto B4c5dc0;
case 0x4c5dc6:c.instructions+=1;goto B4c5dc6;
case 0x4c5dcc:goto L4c5dcc;
case 0x4c5dce:c.instructions+=1;goto B4c5dce;
case 0x4c5dd0:goto L4c5dd0;
case 0x4c5dd3:c.instructions+=4;goto B4c5dd3;
case 0x4c5dd8:c.instructions+=3;goto B4c5dd8;
case 0x4c5de2:c.instructions+=2;goto B4c5de2;
case 0x4c5de8:c.instructions+=1;goto B4c5de8;
case 0x4c5dee:goto L4c5dee;
case 0x4c5df4:c.instructions+=1;goto B4c5df4;
case 0x4c5dfa:goto L4c5dfa;
case 0x4c5dfc:c.instructions+=1;goto B4c5dfc;
case 0x4c5e01:goto L4c5e01;
case 0x4c5e04:c.instructions+=2;goto B4c5e04;
case 0x4c5e06:c.instructions+=1;goto B4c5e06;
case 0x4c5e08:goto L4c5e08;
case 0x4c5e0e:c.instructions+=2;goto B4c5e0e;
case 0x4c5e11:c.instructions+=1;goto B4c5e11;
case 0x4c5e13:goto L4c5e13;
case 0x4c5e15:goto L4c5e15;
case 0x4c5e17:c.instructions+=2;goto B4c5e17;
case 0x4c5e1c:c.instructions+=1;goto B4c5e1c;
case 0x4c5e21:goto L4c5e21;
case 0x4c5e24:c.instructions+=2;goto B4c5e24;
case 0x4c5e26:c.instructions+=1;goto B4c5e26;
case 0x4c5e28:goto L4c5e28;
case 0x4c5e2e:c.instructions+=6;goto B4c5e2e;
case 0x4c5e31:c.instructions+=5;goto B4c5e31;
case 0x4c5e38:c.instructions+=4;goto B4c5e38;
case 0x4c5e3b:c.instructions+=3;goto B4c5e3b;
case 0x4c5e3e:c.instructions+=2;goto B4c5e3e;
case 0x4c5e41:c.instructions+=1;goto B4c5e41;
case 0x4c5e43:goto L4c5e43;
case 0x4c5e45:goto L4c5e45;
case 0x4c5e46:c.instructions+=3;goto B4c5e46;
case 0x4c5e48:c.instructions+=2;goto B4c5e48;
case 0x4c5e4d:c.instructions+=1;goto B4c5e4d;
case 0x4c5e52:goto L4c5e52;
case 0x4c5e54:c.instructions+=5;goto B4c5e54;
case 0x4c5e57:c.instructions+=4;goto B4c5e57;
case 0x4c5e5b:c.instructions+=3;goto B4c5e5b;
case 0x4c5e5d:c.instructions+=2;goto B4c5e5d;
case 0x4c5e61:c.instructions+=1;goto B4c5e61;
case 0x4c5e63:goto L4c5e63;
case 0x4c5e66:c.instructions+=6;goto B4c5e66;
case 0x4c5e69:c.instructions+=5;goto B4c5e69;
case 0x4c5e6b:c.instructions+=4;goto B4c5e6b;
case 0x4c5e6d:c.instructions+=3;goto B4c5e6d;
case 0x4c5e73:c.instructions+=2;goto B4c5e73;
case 0x4c5e78:c.instructions+=1;goto B4c5e78;
case 0x4c5e7d:goto L4c5e7d;
case 0x4c5e7f:goto L4c5e7f;
case 0x4c5e81:goto L4c5e81;
case 0x4c5e87:c.instructions+=4;goto B4c5e87;
case 0x4c5e8f:c.instructions+=3;goto B4c5e8f;
case 0x4c5e99:c.instructions+=2;goto B4c5e99;
case 0x4c5ea3:c.instructions+=1;goto B4c5ea3;
case 0x4c5ea4:goto L4c5ea4;
case 0x4c5ea6:c.instructions+=2;goto B4c5ea6;
case 0x4c5eab:c.instructions+=1;goto B4c5eab;
case 0x4c5eaf:goto L4c5eaf;
case 0x4c5eb1:goto L4c5eb1;
case 0x4c5eb3:c.instructions+=10;goto B4c5eb3;
case 0x4c5eb8:c.instructions+=9;goto B4c5eb8;
case 0x4c5ebc:c.instructions+=8;goto B4c5ebc;
case 0x4c5ec1:c.instructions+=7;goto B4c5ec1;
case 0x4c5ec2:c.instructions+=6;goto B4c5ec2;
case 0x4c5ec9:c.instructions+=5;goto B4c5ec9;
case 0x4c5ecd:c.instructions+=4;goto B4c5ecd;
case 0x4c5ed1:c.instructions+=3;goto B4c5ed1;
case 0x4c5ed3:c.instructions+=2;goto B4c5ed3;
case 0x4c5ed7:c.instructions+=1;goto B4c5ed7;
case 0x4c5edc:goto L4c5edc;
case 0x4c5ee0:c.instructions+=6;goto B4c5ee0;
case 0x4c5ee1:c.instructions+=5;goto B4c5ee1;
case 0x4c5ee6:c.instructions+=4;goto B4c5ee6;
case 0x4c5eeb:c.instructions+=3;goto B4c5eeb;
case 0x4c5eef:c.instructions+=2;goto B4c5eef;
case 0x4c5ef3:c.instructions+=1;goto B4c5ef3;
case 0x4c5ef8:goto L4c5ef8;
case 0x4c5efc:c.instructions+=10;goto B4c5efc;
case 0x4c5eff:c.instructions+=9;goto B4c5eff;
case 0x4c5f02:c.instructions+=8;goto B4c5f02;
case 0x4c5f05:c.instructions+=7;goto B4c5f05;
case 0x4c5f06:c.instructions+=6;goto B4c5f06;
case 0x4c5f09:c.instructions+=5;goto B4c5f09;
case 0x4c5f0a:c.instructions+=4;goto B4c5f0a;
case 0x4c5f0b:c.instructions+=3;goto B4c5f0b;
case 0x4c5f12:c.instructions+=2;goto B4c5f12;
case 0x4c5f15:c.instructions+=1;goto B4c5f15;
case 0x4c5f20:goto L4c5f20;
case 0x4c5f21:c.instructions+=6;goto B4c5f21;
case 0x4c5f22:c.instructions+=5;goto B4c5f22;
case 0x4c5f23:c.instructions+=4;goto B4c5f23;
case 0x4c5f25:c.instructions+=3;goto B4c5f25;
case 0x4c5f26:c.instructions+=2;goto B4c5f26;
case 0x4c5f2b:c.instructions+=1;goto B4c5f2b;
case 0x4c5f30:goto L4c5f30;
case 0x4c5f36:c.instructions+=4;goto B4c5f36;
case 0x4c5f3a:c.instructions+=3;goto B4c5f3a;
case 0x4c5f3c:c.instructions+=2;goto B4c5f3c;
case 0x4c5f3e:c.instructions+=1;goto B4c5f3e;
case 0x4c5f40:goto L4c5f40;
case 0x4c5f43:c.instructions+=6;goto B4c5f43;
case 0x4c5f49:c.instructions+=5;goto B4c5f49;
case 0x4c5f4c:c.instructions+=4;goto B4c5f4c;
case 0x4c5f52:c.instructions+=3;goto B4c5f52;
case 0x4c5f55:c.instructions+=2;goto B4c5f55;
case 0x4c5f5b:c.instructions+=1;goto B4c5f5b;
case 0x4c5f5e:goto L4c5f5e;
case 0x4c5f61:c.instructions+=3;goto B4c5f61;
case 0x4c5f63:c.instructions+=2;goto B4c5f63;
case 0x4c5f64:c.instructions+=1;goto B4c5f64;
case 0x4c5f69:goto L4c5f69;
case 0x4c5f6b:c.instructions+=4;goto B4c5f6b;
case 0x4c5f6c:c.instructions+=3;goto B4c5f6c;
case 0x4c5f71:c.instructions+=2;goto B4c5f71;
case 0x4c5f74:c.instructions+=1;goto B4c5f74;
case 0x4c5f79:goto L4c5f79;
case 0x4c5f7a:c.instructions+=4;goto B4c5f7a;
case 0x4c5f7d:c.instructions+=3;goto B4c5f7d;
case 0x4c5f82:c.instructions+=2;goto B4c5f82;
case 0x4c5f83:c.instructions+=1;goto B4c5f83;
case 0x4c5f88:goto L4c5f88;
case 0x4c5f8b:c.instructions+=9;goto B4c5f8b;
case 0x4c5f8e:c.instructions+=8;goto B4c5f8e;
case 0x4c5f91:c.instructions+=7;goto B4c5f91;
case 0x4c5f98:c.instructions+=6;goto B4c5f98;
case 0x4c5f9c:c.instructions+=5;goto B4c5f9c;
case 0x4c5f9f:c.instructions+=4;goto B4c5f9f;
case 0x4c5fa4:c.instructions+=3;goto B4c5fa4;
case 0x4c5fa7:c.instructions+=2;goto B4c5fa7;
case 0x4c5fa9:c.instructions+=1;goto B4c5fa9;
case 0x4c5fab:goto L4c5fab;
case 0x4c5fae:c.instructions+=7;goto B4c5fae;
case 0x4c5faf:c.instructions+=6;goto B4c5faf;
case 0x4c5fb0:c.instructions+=5;goto B4c5fb0;
case 0x4c5fb5:c.instructions+=4;goto B4c5fb5;
case 0x4c5fb6:c.instructions+=3;goto B4c5fb6;
case 0x4c5fb7:c.instructions+=2;goto B4c5fb7;
case 0x4c5fb8:c.instructions+=1;goto B4c5fb8;
case 0x4c5fbd:goto L4c5fbd;
case 0x4c5fbe:c.instructions+=4;goto B4c5fbe;
case 0x4c5fbf:c.instructions+=3;goto B4c5fbf;
case 0x4c5fc0:c.instructions+=2;goto B4c5fc0;
case 0x4c5fc1:c.instructions+=1;goto B4c5fc1;
case 0x4c5fd0:goto L4c5fd0;
case 0x4c5fd1:c.instructions+=8;goto B4c5fd1;
case 0x4c5fd2:c.instructions+=7;goto B4c5fd2;
case 0x4c5fd3:c.instructions+=6;goto B4c5fd3;
case 0x4c5fd7:c.instructions+=5;goto B4c5fd7;
case 0x4c5fd9:c.instructions+=4;goto B4c5fd9;
case 0x4c5fda:c.instructions+=3;goto B4c5fda;
case 0x4c5fdf:c.instructions+=2;goto B4c5fdf;
case 0x4c5fe1:c.instructions+=1;goto B4c5fe1;
case 0x4c5fe6:goto L4c5fe6;
case 0x4c5fe7:c.instructions+=4;goto B4c5fe7;
case 0x4c5fea:c.instructions+=3;goto B4c5fea;
case 0x4c5fef:c.instructions+=2;goto B4c5fef;
case 0x4c5ff0:c.instructions+=1;goto B4c5ff0;
case 0x4c5ff5:goto L4c5ff5;
case 0x4c5ff8:c.instructions+=2;goto B4c5ff8;
case 0x4c5ffb:c.instructions+=1;goto B4c5ffb;
default:missing_instruction(c.pc);}
B4c5002:L4c5002:{c.instructions+=2;NFSU2_TR(0x4c5002);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5004:{NFSU2_TR(0x4c5004);
if(r1(R+518)){{goto L4c500b;}}
}
B4c5006:L4c5006:{c.instructions+=2;NFSU2_TR(0x4c5006);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B4c5009:{NFSU2_TR(0x4c5009);
{goto L4c500d;}
}
B4c500b:L4c500b:{c.instructions+=1;NFSU2_TR(0x4c500b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c500d:L4c500d:{c.instructions+=6;NFSU2_TR(0x4c500d);
__builtin_memmove((R+8),(R+4),4);
}
B4c500f:{NFSU2_TR(0x4c500f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c5011:{NFSU2_TR(0x4c5011);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c5014:{NFSU2_TR(0x4c5014);
__builtin_memmove((R+0),gp(0x83648c),1);
}
B4c5019:{NFSU2_TR(0x4c5019);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c501b:{NFSU2_TR(0x4c501b);
if(r1(R+518)){{goto L4c506b;}}
}
B4c501d:L4c501d:{c.instructions+=3;NFSU2_TR(0x4c501d);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5022:{NFSU2_TR(0x4c5022);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5023:{NFSU2_TR(0x4c5023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5028ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B4c5028:L4c5028:{c.instructions+=3;NFSU2_TR(0x4c5028);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c502b:{NFSU2_TR(0x4c502b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c502d:{NFSU2_TR(0x4c502d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c506b;}}
}
B4c502f:L4c502f:{c.instructions+=4;NFSU2_TR(0x4c502f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5032:{NFSU2_TR(0x4c5032);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5033:{NFSU2_TR(0x4c5033);
s4(0x850078,u32(0x1ull));
}
B4c503d:{NFSU2_TR(0x4c503d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5042ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4c5042:L4c5042:{c.instructions+=5;NFSU2_TR(0x4c5042);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5045:{NFSU2_TR(0x4c5045);
u8 U[4];
w4(U+0,u32(0xdd60e402ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c504a:{NFSU2_TR(0x4c504a);
w4(R+4,u32(0x85ad40ull));
}
B4c504f:{NFSU2_TR(0x4c504f);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4c5054:{NFSU2_TR(0x4c5054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5059ull));
TAIL_STATIC(0x5003f0u,500);
}
B4c5059:L4c5059:{c.instructions+=3;NFSU2_TR(0x4c5059);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c505a:{NFSU2_TR(0x4c505a);
w4(R+4,u32(0x85ad40ull));
}
B4c505f:{NFSU2_TR(0x4c505f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5064ull));
TAIL_STATIC(0x5410e0u,541);
}
B4c5064:L4c5064:{c.instructions+=3;NFSU2_TR(0x4c5064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5065:{NFSU2_TR(0x4c5065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c5066:{NFSU2_TR(0x4c5066);
TAIL_STATIC(0x5404a0u,540);
}
B4c506b:L4c506b:{c.instructions+=5;NFSU2_TR(0x4c506b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c506e:{NFSU2_TR(0x4c506e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5070:{NFSU2_TR(0x4c5070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5071:{NFSU2_TR(0x4c5071);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5072:{NFSU2_TR(0x4c5072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5077ull));
TAIL_STATIC(0x537980u,537);
}
B4c5077:L4c5077:{c.instructions+=4;NFSU2_TR(0x4c5077);
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
B4c507a:{NFSU2_TR(0x4c507a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c507b:{NFSU2_TR(0x4c507b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c507c:{NFSU2_TR(0x4c507c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5080:L4c5080:{c.instructions+=3;NFSU2_TR(0x4c5080);
__builtin_memmove((R+4),gp(0x836488),4);
}
B4c5086:{NFSU2_TR(0x4c5086);
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
B4c5088:{NFSU2_TR(0x4c5088);
if(r1(R+518)){{goto L4c50b1;}}
}
B4c508a:L4c508a:{c.instructions+=6;NFSU2_TR(0x4c508a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c508b:{NFSU2_TR(0x4c508b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c508f:{NFSU2_TR(0x4c508f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5090:{NFSU2_TR(0x4c5090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5091:{NFSU2_TR(0x4c5091);
__builtin_memmove((R+28),(R+4),4);
}
B4c5093:{NFSU2_TR(0x4c5093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5098ull));
TAIL_STATIC(0x4c4ef0u,4c4);
}
B4c5098:L4c5098:{c.instructions+=2;NFSU2_TR(0x4c5098);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c509a:{NFSU2_TR(0x4c509a);
if(r1(R+518)){{goto L4c509f;}}
}
B4c509c:L4c509c:{c.instructions+=1;NFSU2_TR(0x4c509c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c509f:L4c509f:{c.instructions+=5;NFSU2_TR(0x4c509f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c50a3:{NFSU2_TR(0x4c50a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50a5:{NFSU2_TR(0x4c50a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50a6:{NFSU2_TR(0x4c50a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50a7:{NFSU2_TR(0x4c50a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c50acull));
TAIL_STATIC(0x537980u,537);
}
B4c50ac:L4c50ac:{c.instructions+=3;NFSU2_TR(0x4c50ac);
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
B4c50af:{NFSU2_TR(0x4c50af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c50b0:{NFSU2_TR(0x4c50b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c50b1:L4c50b1:{c.instructions+=1;NFSU2_TR(0x4c50b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c50c0:L4c50c0:{c.instructions+=8;NFSU2_TR(0x4c50c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50c2:{NFSU2_TR(0x4c50c2);
u8 U[4];
w4(U+0,u32(0x773fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50c7:{NFSU2_TR(0x4c50c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c50cd:{NFSU2_TR(0x4c50cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50ce:{NFSU2_TR(0x4c50ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c50d5:{NFSU2_TR(0x4c50d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50d6:{NFSU2_TR(0x4c50d6);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50d8:{NFSU2_TR(0x4c50d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c50ddull));
TAIL_STATIC(0x575620u,575);
}
B4c50dd:L4c50dd:{c.instructions+=5;NFSU2_TR(0x4c50dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c50e0:{NFSU2_TR(0x4c50e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4c50e4:{NFSU2_TR(0x4c50e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c50e6:{NFSU2_TR(0x4c50e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c50ee:{NFSU2_TR(0x4c50ee);
if(r1(R+518)){{goto L4c510b;}}
}
B4c50f0:L4c50f0:{c.instructions+=4;NFSU2_TR(0x4c50f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c50f4:{NFSU2_TR(0x4c50f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c50f5:{NFSU2_TR(0x4c50f5);
__builtin_memmove((R+4),(R+0),4);
}
B4c50f7:{NFSU2_TR(0x4c50f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c50fcull));
TAIL_STATIC(0x4a8650u,4a8);
}
B4c50fc:L4c50fc:{c.instructions+=4;NFSU2_TR(0x4c50fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5100:{NFSU2_TR(0x4c5100);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5107:{NFSU2_TR(0x4c5107);
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
B4c510a:{NFSU2_TR(0x4c510a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c510b:L4c510b:{c.instructions+=5;NFSU2_TR(0x4c510b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c510f:{NFSU2_TR(0x4c510f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c5111:{NFSU2_TR(0x4c5111);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5118:{NFSU2_TR(0x4c5118);
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
B4c511b:{NFSU2_TR(0x4c511b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5120:L4c5120:{c.instructions+=4;NFSU2_TR(0x4c5120);
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
B4c5128:{NFSU2_TR(0x4c5128);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5129:{NFSU2_TR(0x4c5129);
__builtin_memmove((R+24),(R+4),4);
}
B4c512b:{NFSU2_TR(0x4c512b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c51e9;}}
}
B4c5131:L4c5131:{c.instructions+=3;NFSU2_TR(0x4c5131);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5134:{NFSU2_TR(0x4c5134);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5136:{NFSU2_TR(0x4c5136);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5197;}}
}
B4c5138:L4c5138:{c.instructions+=9;NFSU2_TR(0x4c5138);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c513d:{NFSU2_TR(0x4c513d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c5140:{NFSU2_TR(0x4c5140);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5144:{NFSU2_TR(0x4c5144);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c5148:{NFSU2_TR(0x4c5148);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c514e:{NFSU2_TR(0x4c514e);
{u32 ea_=u32(u32(7921744u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c5154:{NFSU2_TR(0x4c5154);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c5156:{NFSU2_TR(0x4c5156);
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
B4c5159:{NFSU2_TR(0x4c5159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c51e9;}}
}
B4c515f:L4c515f:{c.instructions+=7;NFSU2_TR(0x4c515f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5162:{NFSU2_TR(0x4c5162);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5164:{NFSU2_TR(0x4c5164);
u8 U[4];
w4(U+0,u32(0x795944ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5169:{NFSU2_TR(0x4c5169);
u8 U[4];
w4(U+0,u32(0x4b98c4b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c516e:{NFSU2_TR(0x4c516e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c516f:{NFSU2_TR(0x4c516f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5176:{NFSU2_TR(0x4c5176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c517bull));
TAIL_STATIC(0x537c00u,537);
}
B4c517b:L4c517b:{c.instructions+=6;NFSU2_TR(0x4c517b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c517e:{NFSU2_TR(0x4c517e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5180:{NFSU2_TR(0x4c5180);
u8 U[4];
w4(U+0,u32(0x795938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5185:{NFSU2_TR(0x4c5185);
u8 U[4];
w4(U+0,u32(0x94dce36aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c518a:{NFSU2_TR(0x4c518a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c518b:{NFSU2_TR(0x4c518b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5190ull));
TAIL_STATIC(0x537c00u,537);
}
B4c5190:L4c5190:{c.instructions+=3;NFSU2_TR(0x4c5190);
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
B4c5193:{NFSU2_TR(0x4c5193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5194:{NFSU2_TR(0x4c5194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5197:L4c5197:{c.instructions+=2;NFSU2_TR(0x4c5197);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c519a:{NFSU2_TR(0x4c519a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c51e9;}}
}
B4c519c:L4c519c:{c.instructions+=11;NFSU2_TR(0x4c519c);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c51a1:{NFSU2_TR(0x4c51a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c51a4:{NFSU2_TR(0x4c51a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c51a8:{NFSU2_TR(0x4c51a8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c51ac:{NFSU2_TR(0x4c51ac);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c51b2:{NFSU2_TR(0x4c51b2);
{u32 ea_=u32(u32(7921744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c51b8:{NFSU2_TR(0x4c51b8);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4c51ba:{NFSU2_TR(0x4c51ba);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4c51bc:{NFSU2_TR(0x4c51bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c51be:{NFSU2_TR(0x4c51be);
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
B4c51c1:{NFSU2_TR(0x4c51c1);
if(r1(R+514)){{goto L4c51e9;}}
}
B4c51c3:L4c51c3:{c.instructions+=6;NFSU2_TR(0x4c51c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c51c6:{NFSU2_TR(0x4c51c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c51c8:{NFSU2_TR(0x4c51c8);
u8 U[4];
w4(U+0,u32(0x795928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c51cd:{NFSU2_TR(0x4c51cd);
u8 U[4];
w4(U+0,u32(0x94dce36aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c51d2:{NFSU2_TR(0x4c51d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c51d3:{NFSU2_TR(0x4c51d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c51d8ull));
TAIL_STATIC(0x537c00u,537);
}
B4c51d8:L4c51d8:{c.instructions+=5;NFSU2_TR(0x4c51d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c51dc:{NFSU2_TR(0x4c51dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c51df:{NFSU2_TR(0x4c51df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c51e0:{NFSU2_TR(0x4c51e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c51e1:{NFSU2_TR(0x4c51e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c51e6ull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c51e6:L4c51e6:{c.instructions+=1;NFSU2_TR(0x4c51e6);
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
B4c51e9:L4c51e9:{c.instructions+=2;NFSU2_TR(0x4c51e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c51ea:{NFSU2_TR(0x4c51ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c51f0:L4c51f0:{c.instructions+=5;NFSU2_TR(0x4c51f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c51f4:{NFSU2_TR(0x4c51f4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x8867412dull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8867412dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c51f9:{NFSU2_TR(0x4c51f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c51fa:{NFSU2_TR(0x4c51fa);
__builtin_memmove((R+24),(R+4),4);
}
B4c51fc:{NFSU2_TR(0x4c51fc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c5241;}}
}
B4c51fe:L4c51fe:{c.instructions+=1;NFSU2_TR(0x4c51fe);
if(r1(R+518)){{goto L4c520e;}}
}
B4c5200:L4c5200:{c.instructions+=2;NFSU2_TR(0x4c5200);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5205:{NFSU2_TR(0x4c5205);
if(r1(R+518)){{goto L4c5223;}}
}
B4c5207:L4c5207:{c.instructions+=2;NFSU2_TR(0x4c5207);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x461a18eeull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x461a18eeull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x461a18eeull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c520c:{NFSU2_TR(0x4c520c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c526d;}}
}
B4c520e:L4c520e:{c.instructions+=5;NFSU2_TR(0x4c520e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5212:{NFSU2_TR(0x4c5212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5215:{NFSU2_TR(0x4c5215);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5216:{NFSU2_TR(0x4c5216);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5217:{NFSU2_TR(0x4c5217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c521cull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c521c:L4c521c:{c.instructions+=3;NFSU2_TR(0x4c521c);
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
B4c521f:{NFSU2_TR(0x4c521f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5220:{NFSU2_TR(0x4c5220);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5223:L4c5223:{c.instructions+=9;NFSU2_TR(0x4c5223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c5226:{NFSU2_TR(0x4c5226);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5228:{NFSU2_TR(0x4c5228);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c522a:{NFSU2_TR(0x4c522a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c522c:{NFSU2_TR(0x4c522c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c522e:{NFSU2_TR(0x4c522e);
u8 U[4];
w4(U+0,u32(0x121ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5233:{NFSU2_TR(0x4c5233);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5234:{NFSU2_TR(0x4c5234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5235:{NFSU2_TR(0x4c5235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c523aull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4c523a:L4c523a:{c.instructions+=3;NFSU2_TR(0x4c523a);
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
B4c523d:{NFSU2_TR(0x4c523d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c523e:{NFSU2_TR(0x4c523e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5241:L4c5241:{c.instructions+=2;NFSU2_TR(0x4c5241);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c5246:{NFSU2_TR(0x4c5246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c526d;}}
}
B4c5248:L4c5248:{c.instructions+=3;NFSU2_TR(0x4c5248);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c524b:{NFSU2_TR(0x4c524b);
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
B4c524d:{NFSU2_TR(0x4c524d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c526d;}}
}
B4c524f:L4c524f:{c.instructions+=9;NFSU2_TR(0x4c524f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5252:{NFSU2_TR(0x4c5252);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5254:{NFSU2_TR(0x4c5254);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5256:{NFSU2_TR(0x4c5256);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5258:{NFSU2_TR(0x4c5258);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c525a:{NFSU2_TR(0x4c525a);
u8 U[4];
w4(U+0,u32(0x121ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c525f:{NFSU2_TR(0x4c525f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5260:{NFSU2_TR(0x4c5260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5261:{NFSU2_TR(0x4c5261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5266ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4c5266:L4c5266:{c.instructions+=2;NFSU2_TR(0x4c5266);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c526a:{NFSU2_TR(0x4c526a);
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
B4c526d:L4c526d:{c.instructions+=2;NFSU2_TR(0x4c526d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c526e:{NFSU2_TR(0x4c526e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5280:L4c5280:{c.instructions+=2;NFSU2_TR(0x4c5280);
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
B4c5288:{NFSU2_TR(0x4c5288);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c52be;}}
}
B4c528a:L4c528a:{c.instructions+=9;NFSU2_TR(0x4c528a);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c528f:{NFSU2_TR(0x4c528f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c5292:{NFSU2_TR(0x4c5292);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5296:{NFSU2_TR(0x4c5296);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c529a:{NFSU2_TR(0x4c529a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c52a0:{NFSU2_TR(0x4c52a0);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c52a6:{NFSU2_TR(0x4c52a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c52a8:{NFSU2_TR(0x4c52a8);
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
B4c52ab:{NFSU2_TR(0x4c52ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c52be;}}
}
B4c52ad:L4c52ad:{c.instructions+=5;NFSU2_TR(0x4c52ad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c52b1:{NFSU2_TR(0x4c52b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c52b4:{NFSU2_TR(0x4c52b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c52b5:{NFSU2_TR(0x4c52b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c52b6:{NFSU2_TR(0x4c52b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c52bbull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c52bb:L4c52bb:{c.instructions+=1;NFSU2_TR(0x4c52bb);
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
B4c52be:L4c52be:{c.instructions+=1;NFSU2_TR(0x4c52be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c52d0:L4c52d0:{c.instructions+=8;NFSU2_TR(0x4c52d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c52d2:{NFSU2_TR(0x4c52d2);
u8 U[4];
w4(U+0,u32(0x773ff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c52d7:{NFSU2_TR(0x4c52d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c52dd:{NFSU2_TR(0x4c52dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c52de:{NFSU2_TR(0x4c52de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c52e5:{NFSU2_TR(0x4c52e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c52e6:{NFSU2_TR(0x4c52e6);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c52e8:{NFSU2_TR(0x4c52e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c52edull));
TAIL_STATIC(0x575620u,575);
}
B4c52ed:L4c52ed:{c.instructions+=5;NFSU2_TR(0x4c52ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c52f0:{NFSU2_TR(0x4c52f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4c52f4:{NFSU2_TR(0x4c52f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c52f6:{NFSU2_TR(0x4c52f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c52fe:{NFSU2_TR(0x4c52fe);
if(r1(R+518)){{goto L4c531b;}}
}
B4c5300:L4c5300:{c.instructions+=4;NFSU2_TR(0x4c5300);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5304:{NFSU2_TR(0x4c5304);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5305:{NFSU2_TR(0x4c5305);
__builtin_memmove((R+4),(R+0),4);
}
B4c5307:{NFSU2_TR(0x4c5307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c530cull));
TAIL_STATIC(0x4a8860u,4a8);
}
B4c530c:L4c530c:{c.instructions+=4;NFSU2_TR(0x4c530c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5310:{NFSU2_TR(0x4c5310);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5317:{NFSU2_TR(0x4c5317);
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
B4c531a:{NFSU2_TR(0x4c531a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c531b:L4c531b:{c.instructions+=5;NFSU2_TR(0x4c531b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c531f:{NFSU2_TR(0x4c531f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c5321:{NFSU2_TR(0x4c5321);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5328:{NFSU2_TR(0x4c5328);
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
B4c532b:{NFSU2_TR(0x4c532b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5330:L4c5330:{c.instructions+=5;NFSU2_TR(0x4c5330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5334:{NFSU2_TR(0x4c5334);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5339:{NFSU2_TR(0x4c5339);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c533a:{NFSU2_TR(0x4c533a);
__builtin_memmove((R+24),(R+4),4);
}
B4c533c:{NFSU2_TR(0x4c533c);
if(r1(R+518)){{goto L4c5356;}}
}
B4c533e:L4c533e:{c.instructions+=2;NFSU2_TR(0x4c533e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5343:{NFSU2_TR(0x4c5343);
if(r1(R+518)){{goto L4c5356;}}
}
B4c5345:L4c5345:{c.instructions+=2;NFSU2_TR(0x4c5345);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc3960eb9ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc3960eb9ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc3960eb9ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c534a:{NFSU2_TR(0x4c534a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5392;}}
}
B4c534c:L4c534c:{c.instructions+=1;NFSU2_TR(0x4c534c);
s4(0x8383a8,u32(0x1ull));
}
B4c5356:L4c5356:{c.instructions+=3;NFSU2_TR(0x4c5356);
__builtin_memmove((R+0),gp(0x836490),4);
}
B4c535b:{NFSU2_TR(0x4c535b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c535d:{NFSU2_TR(0x4c535d);
if(r1(R+518)){{goto L4c5381;}}
}
B4c535f:L4c535f:{c.instructions+=2;NFSU2_TR(0x4c535f);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4c5365:{NFSU2_TR(0x4c5365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c536aull));
TAIL_STATIC(0x480cb0u,480);
}
B4c536a:L4c536a:{c.instructions+=5;NFSU2_TR(0x4c536a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c536d:{NFSU2_TR(0x4c536d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c536f:{NFSU2_TR(0x4c536f);
u8 U[4];
w4(U+0,u32(0x795964ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5374:{NFSU2_TR(0x4c5374);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5375:{NFSU2_TR(0x4c5375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c537aull));
TAIL_STATIC(0x537980u,537);
}
B4c537a:L4c537a:{c.instructions+=3;NFSU2_TR(0x4c537a);
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
B4c537d:{NFSU2_TR(0x4c537d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c537e:{NFSU2_TR(0x4c537e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5381:L4c5381:{c.instructions+=5;NFSU2_TR(0x4c5381);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5385:{NFSU2_TR(0x4c5385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c5388:{NFSU2_TR(0x4c5388);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5389:{NFSU2_TR(0x4c5389);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c538a:{NFSU2_TR(0x4c538a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c538full));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c538f:L4c538f:{c.instructions+=1;NFSU2_TR(0x4c538f);
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
B4c5392:L4c5392:{c.instructions+=2;NFSU2_TR(0x4c5392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5393:{NFSU2_TR(0x4c5393);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c53a0:L4c53a0:{c.instructions+=2;NFSU2_TR(0x4c53a0);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc3960eb9ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc3960eb9ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc3960eb9ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c53a8:{NFSU2_TR(0x4c53a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c53c5;}}
}
B4c53aa:L4c53aa:{c.instructions+=6;NFSU2_TR(0x4c53aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c53ae:{NFSU2_TR(0x4c53ae);
s4(0x8383a8,u32(0x1ull));
}
B4c53b8:{NFSU2_TR(0x4c53b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c53bb:{NFSU2_TR(0x4c53bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c53bc:{NFSU2_TR(0x4c53bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c53bd:{NFSU2_TR(0x4c53bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c53c2ull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c53c2:L4c53c2:{c.instructions+=1;NFSU2_TR(0x4c53c2);
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
B4c53c5:L4c53c5:{c.instructions+=1;NFSU2_TR(0x4c53c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c53d0:L4c53d0:{c.instructions+=5;NFSU2_TR(0x4c53d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c53d4:{NFSU2_TR(0x4c53d4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc3960eb9ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc3960eb9ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc3960eb9ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c53d9:{NFSU2_TR(0x4c53d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c53da:{NFSU2_TR(0x4c53da);
__builtin_memmove((R+24),(R+4),4);
}
B4c53dc:{NFSU2_TR(0x4c53dc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c5445;}}
}
B4c53de:L4c53de:{c.instructions+=1;NFSU2_TR(0x4c53de);
if(r1(R+518)){{goto L4c541a;}}
}
B4c53e0:L4c53e0:{c.instructions+=2;NFSU2_TR(0x4c53e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c53e5:{NFSU2_TR(0x4c53e5);
if(r1(R+518)){{goto L4c53ee;}}
}
B4c53e7:L4c53e7:{c.instructions+=2;NFSU2_TR(0x4c53e7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5af2461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c53ec:{NFSU2_TR(0x4c53ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5454;}}
}
B4c53ee:L4c53ee:{c.instructions+=3;NFSU2_TR(0x4c53ee);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4c53f3:{NFSU2_TR(0x4c53f3);
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
B4c53f5:{NFSU2_TR(0x4c53f5);
if(r1(R+518)){{goto L4c5454;}}
}
B4c53f7:L4c53f7:{c.instructions+=3;NFSU2_TR(0x4c53f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c53fa:{NFSU2_TR(0x4c53fa);
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
B4c53fc:{NFSU2_TR(0x4c53fc);
if(r1(R+518)){{goto L4c5454;}}
}
B4c53fe:L4c53fe:{c.instructions+=6;NFSU2_TR(0x4c53fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5402:{NFSU2_TR(0x4c5402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5405:{NFSU2_TR(0x4c5405);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5406:{NFSU2_TR(0x4c5406);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5407:{NFSU2_TR(0x4c5407);
s1(0x836494,u8(0x1ull));
}
B4c540e:{NFSU2_TR(0x4c540e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5413ull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c5413:L4c5413:{c.instructions+=3;NFSU2_TR(0x4c5413);
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
B4c5416:{NFSU2_TR(0x4c5416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5417:{NFSU2_TR(0x4c5417);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c541a:L4c541a:{c.instructions+=2;NFSU2_TR(0x4c541a);
s4(0x8383a8,u32(0x1ull));
}
B4c5424:{NFSU2_TR(0x4c5424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5429ull));
TAIL_STATIC(0x5beea0u,5be);
}
B4c5429:L4c5429:{c.instructions+=6;NFSU2_TR(0x4c5429);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c542d:{NFSU2_TR(0x4c542d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5430:{NFSU2_TR(0x4c5430);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5431:{NFSU2_TR(0x4c5431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5432:{NFSU2_TR(0x4c5432);
s1(0x836494,u8(0x1ull));
}
B4c5439:{NFSU2_TR(0x4c5439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c543eull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c543e:L4c543e:{c.instructions+=3;NFSU2_TR(0x4c543e);
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
B4c5441:{NFSU2_TR(0x4c5441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5442:{NFSU2_TR(0x4c5442);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5445:L4c5445:{c.instructions+=2;NFSU2_TR(0x4c5445);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c544a:{NFSU2_TR(0x4c544a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5454;}}
}
B4c544c:L4c544c:{c.instructions+=2;NFSU2_TR(0x4c544c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c544f:{NFSU2_TR(0x4c544f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5454ull));
TAIL_STATIC(0x576460u,576);
}
B4c5454:L4c5454:{c.instructions+=2;NFSU2_TR(0x4c5454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5455:{NFSU2_TR(0x4c5455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5460:L4c5460:{c.instructions+=2;NFSU2_TR(0x4c5460);
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
B4c5468:{NFSU2_TR(0x4c5468);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c54ad;}}
}
B4c546a:L4c546a:{c.instructions+=11;NFSU2_TR(0x4c546a);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c546f:{NFSU2_TR(0x4c546f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c5472:{NFSU2_TR(0x4c5472);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5476:{NFSU2_TR(0x4c5476);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c547a:{NFSU2_TR(0x4c547a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c5480:{NFSU2_TR(0x4c5480);
{u32 ea_=u32(u32(7921744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c5486:{NFSU2_TR(0x4c5486);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c548c:{NFSU2_TR(0x4c548c);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4c548e:{NFSU2_TR(0x4c548e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c5490:{NFSU2_TR(0x4c5490);
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
B4c5493:{NFSU2_TR(0x4c5493);
if(r1(R+514)){{goto L4c54ad;}}
}
B4c5495:L4c5495:{c.instructions+=6;NFSU2_TR(0x4c5495);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c5499:{NFSU2_TR(0x4c5499);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c549c:{NFSU2_TR(0x4c549c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c549d:{NFSU2_TR(0x4c549d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c549e:{NFSU2_TR(0x4c549e);
s1(0x836494,u8(0x1ull));
}
B4c54a5:{NFSU2_TR(0x4c54a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c54aaull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c54aa:L4c54aa:{c.instructions+=1;NFSU2_TR(0x4c54aa);
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
B4c54ad:L4c54ad:{c.instructions+=1;NFSU2_TR(0x4c54ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c54b0:L4c54b0:{c.instructions+=2;NFSU2_TR(0x4c54b0);
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
B4c54b8:{NFSU2_TR(0x4c54b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c54ee;}}
}
B4c54ba:L4c54ba:{c.instructions+=9;NFSU2_TR(0x4c54ba);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c54bf:{NFSU2_TR(0x4c54bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c54c2:{NFSU2_TR(0x4c54c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c54c6:{NFSU2_TR(0x4c54c6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c54ca:{NFSU2_TR(0x4c54ca);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c54d0:{NFSU2_TR(0x4c54d0);
{u32 ea_=u32(u32(7921744u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c54d6:{NFSU2_TR(0x4c54d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c54d8:{NFSU2_TR(0x4c54d8);
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
B4c54db:{NFSU2_TR(0x4c54db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c54ee;}}
}
B4c54dd:L4c54dd:{c.instructions+=5;NFSU2_TR(0x4c54dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c54e1:{NFSU2_TR(0x4c54e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c54e4:{NFSU2_TR(0x4c54e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c54e5:{NFSU2_TR(0x4c54e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c54e6:{NFSU2_TR(0x4c54e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c54ebull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c54eb:L4c54eb:{c.instructions+=1;NFSU2_TR(0x4c54eb);
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
B4c54ee:L4c54ee:{c.instructions+=1;NFSU2_TR(0x4c54ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5500:L4c5500:{c.instructions+=8;NFSU2_TR(0x4c5500);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5502:{NFSU2_TR(0x4c5502);
u8 U[4];
w4(U+0,u32(0x774014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5507:{NFSU2_TR(0x4c5507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c550d:{NFSU2_TR(0x4c550d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c550e:{NFSU2_TR(0x4c550e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5515:{NFSU2_TR(0x4c5515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5516:{NFSU2_TR(0x4c5516);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5518:{NFSU2_TR(0x4c5518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c551dull));
TAIL_STATIC(0x575620u,575);
}
B4c551d:L4c551d:{c.instructions+=5;NFSU2_TR(0x4c551d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5520:{NFSU2_TR(0x4c5520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4c5524:{NFSU2_TR(0x4c5524);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5526:{NFSU2_TR(0x4c5526);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c552e:{NFSU2_TR(0x4c552e);
if(r1(R+518)){{goto L4c554b;}}
}
B4c5530:L4c5530:{c.instructions+=4;NFSU2_TR(0x4c5530);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5534:{NFSU2_TR(0x4c5534);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5535:{NFSU2_TR(0x4c5535);
__builtin_memmove((R+4),(R+0),4);
}
B4c5537:{NFSU2_TR(0x4c5537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c553cull));
TAIL_STATIC(0x4a90f0u,4a9);
}
B4c553c:L4c553c:{c.instructions+=4;NFSU2_TR(0x4c553c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5540:{NFSU2_TR(0x4c5540);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5547:{NFSU2_TR(0x4c5547);
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
B4c554a:{NFSU2_TR(0x4c554a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c554b:L4c554b:{c.instructions+=5;NFSU2_TR(0x4c554b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c554f:{NFSU2_TR(0x4c554f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c5551:{NFSU2_TR(0x4c5551);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5558:{NFSU2_TR(0x4c5558);
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
B4c555b:{NFSU2_TR(0x4c555b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5560:L4c5560:{c.instructions+=3;NFSU2_TR(0x4c5560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5561:{NFSU2_TR(0x4c5561);
__builtin_memmove((R+24),(R+4),4);
}
B4c5563:{NFSU2_TR(0x4c5563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5568ull));
TAIL_STATIC(0x4a92b0u,4a9);
}
B4c5568:L4c5568:{c.instructions+=2;NFSU2_TR(0x4c5568);
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
B4c556d:{NFSU2_TR(0x4c556d);
if(r1(R+518)){{goto L4c5578;}}
}
B4c556f:L4c556f:{c.instructions+=2;NFSU2_TR(0x4c556f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5570:{NFSU2_TR(0x4c5570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5575ull));
TAIL_STATIC(0x575630u,575);
}
B4c5575:L4c5575:{c.instructions+=1;NFSU2_TR(0x4c5575);
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
B4c5578:L4c5578:{c.instructions+=3;NFSU2_TR(0x4c5578);
__builtin_memmove((R+0),(R+24),4);
}
B4c557a:{NFSU2_TR(0x4c557a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c557b:{NFSU2_TR(0x4c557b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5580:L4c5580:{c.instructions+=5;NFSU2_TR(0x4c5580);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5584:{NFSU2_TR(0x4c5584);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5589:{NFSU2_TR(0x4c5589);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c558a:{NFSU2_TR(0x4c558a);
__builtin_memmove((R+24),(R+4),4);
}
B4c558c:{NFSU2_TR(0x4c558c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c55ed;}}
}
B4c558e:L4c558e:{c.instructions+=1;NFSU2_TR(0x4c558e);
if(r1(R+518)){{goto L4c55a2;}}
}
B4c5590:L4c5590:{c.instructions+=2;NFSU2_TR(0x4c5590);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5595:{NFSU2_TR(0x4c5595);
if(r1(R+518)){{goto L4c55cf;}}
}
B4c5597:L4c5597:{c.instructions+=2;NFSU2_TR(0x4c5597);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c559c:{NFSU2_TR(0x4c559c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c568c;}}
}
B4c55a2:L4c55a2:{c.instructions+=3;NFSU2_TR(0x4c55a2);
__builtin_memmove((R+0),gp(0x836495),1);
}
B4c55a7:{NFSU2_TR(0x4c55a7);
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
B4c55a9:{NFSU2_TR(0x4c55a9);
if(r1(R+518)){{goto L4c568c;}}
}
B4c55af:L4c55af:{c.instructions+=4;NFSU2_TR(0x4c55af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c55b2:{NFSU2_TR(0x4c55b2);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c55b4:{NFSU2_TR(0x4c55b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c55b5:{NFSU2_TR(0x4c55b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c55baull));
TAIL_STATIC(0x51de60u,51d);
}
B4c55ba:L4c55ba:{c.instructions+=5;NFSU2_TR(0x4c55ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c55be:{NFSU2_TR(0x4c55be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c55c1:{NFSU2_TR(0x4c55c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c55c2:{NFSU2_TR(0x4c55c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c55c3:{NFSU2_TR(0x4c55c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c55c8ull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c55c8:L4c55c8:{c.instructions+=3;NFSU2_TR(0x4c55c8);
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
B4c55cb:{NFSU2_TR(0x4c55cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c55cc:{NFSU2_TR(0x4c55cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c55cf:L4c55cf:{c.instructions+=5;NFSU2_TR(0x4c55cf);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4c55d4:{NFSU2_TR(0x4c55d4);
u8 U[4];
w4(U+0,u32(0x795984ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c55d9:{NFSU2_TR(0x4c55d9);
u8 U[4];
w4(U+0,u32(0x69696969ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c55de:{NFSU2_TR(0x4c55de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c55e1:{NFSU2_TR(0x4c55e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c55e6ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4c55e6:L4c55e6:{c.instructions+=3;NFSU2_TR(0x4c55e6);
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
B4c55e9:{NFSU2_TR(0x4c55e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c55ea:{NFSU2_TR(0x4c55ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c55ed:L4c55ed:{c.instructions+=2;NFSU2_TR(0x4c55ed);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c55f2:{NFSU2_TR(0x4c55f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c568c;}}
}
B4c55f8:L4c55f8:{c.instructions+=11;NFSU2_TR(0x4c55f8);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4c55fe:{NFSU2_TR(0x4c55fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5601:{NFSU2_TR(0x4c5601);
__builtin_memmove((R+8),(R+4),4);
}
B4c5603:{NFSU2_TR(0x4c5603);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4c5605:{NFSU2_TR(0x4c5605);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5609:{NFSU2_TR(0x4c5609);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c560d:{NFSU2_TR(0x4c560d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c5613:{NFSU2_TR(0x4c5613);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c5619:{NFSU2_TR(0x4c5619);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c561b:{NFSU2_TR(0x4c561b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c561e:{NFSU2_TR(0x4c561e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5635;}}
}
B4c5620:L4c5620:{c.instructions+=4;NFSU2_TR(0x4c5620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5623:{NFSU2_TR(0x4c5623);
u8 U[4];
w4(U+0,u32(0x78ea74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5628:{NFSU2_TR(0x4c5628);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5629:{NFSU2_TR(0x4c5629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c562eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c5080u);}goto L4c5080;}
}
B4c562e:L4c562e:{c.instructions+=3;NFSU2_TR(0x4c562e);
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
B4c5631:{NFSU2_TR(0x4c5631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5632:{NFSU2_TR(0x4c5632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5635:L4c5635:{c.instructions+=3;NFSU2_TR(0x4c5635);
__builtin_memmove((R+0),gp(0x836495),1);
}
B4c563a:{NFSU2_TR(0x4c563a);
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
B4c563c:{NFSU2_TR(0x4c563c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c568c;}}
}
B4c563e:L4c563e:{c.instructions+=3;NFSU2_TR(0x4c563e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5641:{NFSU2_TR(0x4c5641);
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
B4c5643:{NFSU2_TR(0x4c5643);
if(r1(R+518)){{goto L4c568c;}}
}
B4c5645:L4c5645:{c.instructions+=2;NFSU2_TR(0x4c5645);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c564a:{NFSU2_TR(0x4c564a);
if(r1(R+518)){{goto L4c568c;}}
}
B4c564c:L4c564c:{c.instructions+=4;NFSU2_TR(0x4c564c);
__builtin_memmove((R+8),(R+0),4);
}
B4c564e:{NFSU2_TR(0x4c564e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B4c5650:{NFSU2_TR(0x4c5650);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3e80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3e80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3e80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c5656:{NFSU2_TR(0x4c5656);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c568c;}}
}
B4c5658:L4c5658:{c.instructions+=7;NFSU2_TR(0x4c5658);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c565a:{NFSU2_TR(0x4c565a);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c565f:{NFSU2_TR(0x4c565f);
s1(0x836495,u8(0x1ull));
}
B4c5666:{NFSU2_TR(0x4c5666);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5669:{NFSU2_TR(0x4c5669);
u8 U[4];
w4(U+0,u32(0x2ddf58cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c566e:{NFSU2_TR(0x4c566e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c566f:{NFSU2_TR(0x4c566f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5674ull));
TAIL_STATIC(0x537c00u,537);
}
B4c5674:L4c5674:{c.instructions+=6;NFSU2_TR(0x4c5674);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c5677:{NFSU2_TR(0x4c5677);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5679:{NFSU2_TR(0x4c5679);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c567e:{NFSU2_TR(0x4c567e);
u8 U[4];
w4(U+0,u32(0x4c46f86aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5683:{NFSU2_TR(0x4c5683);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5684:{NFSU2_TR(0x4c5684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5689ull));
TAIL_STATIC(0x537c00u,537);
}
B4c5689:L4c5689:{c.instructions+=1;NFSU2_TR(0x4c5689);
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
B4c568c:L4c568c:{c.instructions+=2;NFSU2_TR(0x4c568c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c568d:{NFSU2_TR(0x4c568d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5690:L4c5690:{c.instructions+=2;NFSU2_TR(0x4c5690);
u8 U[4];
w4(U+0,u32(0x795990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5695:{NFSU2_TR(0x4c5695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c569aull));
TAIL_STATIC(0x51bd10u,51b);
}
B4c569a:L4c569a:{c.instructions+=3;NFSU2_TR(0x4c569a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c569d:{NFSU2_TR(0x4c569d);
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
B4c569f:{NFSU2_TR(0x4c569f);
if(r1(R+518)){{goto L4c56bb;}}
}
B4c56a1:L4c56a1:{c.instructions+=4;NFSU2_TR(0x4c56a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c56a4:{NFSU2_TR(0x4c56a4);
u8 U[4];
w4(U+0,u32(0x505e82bfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56a9:{NFSU2_TR(0x4c56a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56aa:{NFSU2_TR(0x4c56aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c56afull));
TAIL_STATIC(0x5379c0u,537);
}
B4c56af:L4c56af:{c.instructions+=3;NFSU2_TR(0x4c56af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c56b2:{NFSU2_TR(0x4c56b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c56b6:{NFSU2_TR(0x4c56b6);
TAIL_STATIC(0x50ca50u,50c);
}
B4c56bb:L4c56bb:{c.instructions+=1;NFSU2_TR(0x4c56bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c56c0:L4c56c0:{c.instructions+=12;NFSU2_TR(0x4c56c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56c2:{NFSU2_TR(0x4c56c2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56c7:{NFSU2_TR(0x4c56c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c56cd:{NFSU2_TR(0x4c56cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56ce:{NFSU2_TR(0x4c56ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c56d5:{NFSU2_TR(0x4c56d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56d6:{NFSU2_TR(0x4c56d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c56da:{NFSU2_TR(0x4c56da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56db:{NFSU2_TR(0x4c56db);
__builtin_memmove((R+24),(R+4),4);
}
B4c56dd:{NFSU2_TR(0x4c56dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56de:{NFSU2_TR(0x4c56de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c56e2:{NFSU2_TR(0x4c56e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c56e7ull));
TAIL_STATIC(0x551de0u,551);
}
B4c56e7:L4c56e7:{c.instructions+=9;NFSU2_TR(0x4c56e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c56e9:{NFSU2_TR(0x4c56e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56ea:{NFSU2_TR(0x4c56ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56eb:{NFSU2_TR(0x4c56eb);
u8 U[4];
w4(U+0,u32(0x4c5690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56f0:{NFSU2_TR(0x4c56f0);
u8 U[4];
w4(U+0,u32(0x7959c4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c56f6:{NFSU2_TR(0x4c56f6);
u8 U[4];
w4(U+0,u32(0x7959a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c56fb:{NFSU2_TR(0x4c56fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c56ff:{NFSU2_TR(0x4c56ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5702:{NFSU2_TR(0x4c5702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5707ull));
TAIL_STATIC(0x43db50u,43d);
}
B4c5707:L4c5707:{c.instructions+=3;NFSU2_TR(0x4c5707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c570a:{NFSU2_TR(0x4c570a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c570b:{NFSU2_TR(0x4c570b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5710ull));
TAIL_STATIC(0x494d30u,494);
}
B4c5710:L4c5710:{c.instructions+=4;NFSU2_TR(0x4c5710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5713:{NFSU2_TR(0x4c5713);
u8 U[4];
w4(U+0,u32(0x505e82bfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5718:{NFSU2_TR(0x4c5718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5719:{NFSU2_TR(0x4c5719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c571eull));
TAIL_STATIC(0x5379c0u,537);
}
B4c571e:L4c571e:{c.instructions+=2;NFSU2_TR(0x4c571e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c571f:{NFSU2_TR(0x4c571f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5724ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c5724:L4c5724:{c.instructions+=7;NFSU2_TR(0x4c5724);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5728:{NFSU2_TR(0x4c5728);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4c572b:{NFSU2_TR(0x4c572b);
__builtin_memmove((R+0),(R+24),4);
}
B4c572d:{NFSU2_TR(0x4c572d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c572e:{NFSU2_TR(0x4c572e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5735:{NFSU2_TR(0x4c5735);
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
B4c5738:{NFSU2_TR(0x4c5738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5740:L4c5740:{c.instructions+=3;NFSU2_TR(0x4c5740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5741:{NFSU2_TR(0x4c5741);
__builtin_memmove((R+24),(R+4),4);
}
B4c5743:{NFSU2_TR(0x4c5743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5748ull));
{goto L4c5760;}
}
B4c5748:L4c5748:{c.instructions+=2;NFSU2_TR(0x4c5748);
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
B4c574d:{NFSU2_TR(0x4c574d);
if(r1(R+518)){{goto L4c5758;}}
}
B4c574f:L4c574f:{c.instructions+=2;NFSU2_TR(0x4c574f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5750:{NFSU2_TR(0x4c5750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5755ull));
TAIL_STATIC(0x575630u,575);
}
B4c5755:L4c5755:{c.instructions+=1;NFSU2_TR(0x4c5755);
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
B4c5758:L4c5758:{c.instructions+=3;NFSU2_TR(0x4c5758);
__builtin_memmove((R+0),(R+24),4);
}
B4c575a:{NFSU2_TR(0x4c575a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c575b:{NFSU2_TR(0x4c575b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5760:L4c5760:{c.instructions+=2;NFSU2_TR(0x4c5760);
u8 U[4];
w4(U+0,u32(0x7959c4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4c5766:{NFSU2_TR(0x4c5766);
TAIL_STATIC(0x510d40u,510);
}
B4c5770:L4c5770:{c.instructions+=4;NFSU2_TR(0x4c5770);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c5778:{NFSU2_TR(0x4c5778);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5779:{NFSU2_TR(0x4c5779);
__builtin_memmove((R+24),(R+4),4);
}
B4c577b:{NFSU2_TR(0x4c577b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c57b6;}}
}
B4c577d:L4c577d:{c.instructions+=3;NFSU2_TR(0x4c577d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5781:{NFSU2_TR(0x4c5781);
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
B4c5783:{NFSU2_TR(0x4c5783);
if(r1(R+518)){{goto L4c57b6;}}
}
B4c5785:L4c5785:{c.instructions+=2;NFSU2_TR(0x4c5785);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4f876b6full))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4f876b6full)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4f876b6full))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c578c:{NFSU2_TR(0x4c578c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c57ac;}}
}
B4c578e:L4c578e:{c.instructions+=1;NFSU2_TR(0x4c578e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5793ull));
TAIL_STATIC(0x5bf540u,5bf);
}
B4c5793:L4c5793:{c.instructions+=2;NFSU2_TR(0x4c5793);
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
B4c5795:{NFSU2_TR(0x4c5795);
if(r1(R+518)){{goto L4c57b6;}}
}
B4c5797:L4c5797:{c.instructions+=5;NFSU2_TR(0x4c5797);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c579b:{NFSU2_TR(0x4c579b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c579e:{NFSU2_TR(0x4c579e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c579f:{NFSU2_TR(0x4c579f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c57a0:{NFSU2_TR(0x4c57a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c57a5ull));
TAIL_STATIC(0x4c4f50u,4c4);
}
B4c57a5:L4c57a5:{c.instructions+=3;NFSU2_TR(0x4c57a5);
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
B4c57a8:{NFSU2_TR(0x4c57a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c57a9:{NFSU2_TR(0x4c57a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c57ac:L4c57ac:{c.instructions+=1;NFSU2_TR(0x4c57ac);
s4(0x864f4c,u32(0x1ull));
}
B4c57b6:L4c57b6:{c.instructions+=2;NFSU2_TR(0x4c57b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c57b7:{NFSU2_TR(0x4c57b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c57c0:L4c57c0:{c.instructions+=2;NFSU2_TR(0x4c57c0);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c57c5:{NFSU2_TR(0x4c57c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c57caull));
TAIL_STATIC(0x52cf60u,52c);
}
B4c57ca:L4c57ca:{c.instructions+=3;NFSU2_TR(0x4c57ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c57cd:{NFSU2_TR(0x4c57cd);
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
B4c57cf:{NFSU2_TR(0x4c57cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c57e0;}}
}
B4c57d1:L4c57d1:{c.instructions+=3;NFSU2_TR(0x4c57d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c57d3:{NFSU2_TR(0x4c57d3);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c57d8:{NFSU2_TR(0x4c57d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c57ddull));
TAIL_STATIC(0x555e80u,555);
}
B4c57dd:L4c57dd:{c.instructions+=1;NFSU2_TR(0x4c57dd);
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
B4c57e0:L4c57e0:{c.instructions+=1;NFSU2_TR(0x4c57e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c57f0:L4c57f0:{c.instructions+=2;NFSU2_TR(0x4c57f0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c57f8:{NFSU2_TR(0x4c57f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5815;}}
}
B4c57fa:L4c57fa:{c.instructions+=9;NFSU2_TR(0x4c57fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c57fe:{NFSU2_TR(0x4c57fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5800:{NFSU2_TR(0x4c5800);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5802:{NFSU2_TR(0x4c5802);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5804:{NFSU2_TR(0x4c5804);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5806:{NFSU2_TR(0x4c5806);
u8 U[4];
w4(U+0,u32(0x4a51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c580b:{NFSU2_TR(0x4c580b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c580c:{NFSU2_TR(0x4c580c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c580d:{NFSU2_TR(0x4c580d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5812ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4c5812:L4c5812:{c.instructions+=1;NFSU2_TR(0x4c5812);
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
B4c5815:L4c5815:{c.instructions+=1;NFSU2_TR(0x4c5815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5820:L4c5820:{c.instructions+=2;NFSU2_TR(0x4c5820);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c5828:{NFSU2_TR(0x4c5828);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c584b;}}
}
B4c582a:L4c582a:{c.instructions+=9;NFSU2_TR(0x4c582a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c582e:{NFSU2_TR(0x4c582e);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5833:{NFSU2_TR(0x4c5833);
u8 U[4];
w4(U+0,u32(0x3a2be557ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5838:{NFSU2_TR(0x4c5838);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c583a:{NFSU2_TR(0x4c583a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c583c:{NFSU2_TR(0x4c583c);
u8 U[4];
w4(U+0,u32(0xc11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5841:{NFSU2_TR(0x4c5841);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5842:{NFSU2_TR(0x4c5842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5843:{NFSU2_TR(0x4c5843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5848ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4c5848:L4c5848:{c.instructions+=1;NFSU2_TR(0x4c5848);
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
B4c584b:L4c584b:{c.instructions+=1;NFSU2_TR(0x4c584b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5850:L4c5850:{c.instructions+=2;NFSU2_TR(0x4c5850);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c5858:{NFSU2_TR(0x4c5858);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5875;}}
}
B4c585a:L4c585a:{c.instructions+=9;NFSU2_TR(0x4c585a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c585e:{NFSU2_TR(0x4c585e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5860:{NFSU2_TR(0x4c5860);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5862:{NFSU2_TR(0x4c5862);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5864:{NFSU2_TR(0x4c5864);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5866:{NFSU2_TR(0x4c5866);
u8 U[4];
w4(U+0,u32(0x831ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c586b:{NFSU2_TR(0x4c586b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c586c:{NFSU2_TR(0x4c586c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c586d:{NFSU2_TR(0x4c586d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5872ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4c5872:L4c5872:{c.instructions+=1;NFSU2_TR(0x4c5872);
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
B4c5875:L4c5875:{c.instructions+=1;NFSU2_TR(0x4c5875);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5880:L4c5880:{c.instructions+=2;NFSU2_TR(0x4c5880);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4c5888:{NFSU2_TR(0x4c5888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c58a5;}}
}
B4c588a:L4c588a:{c.instructions+=9;NFSU2_TR(0x4c588a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c588e:{NFSU2_TR(0x4c588e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5890:{NFSU2_TR(0x4c5890);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5892:{NFSU2_TR(0x4c5892);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5894:{NFSU2_TR(0x4c5894);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5896:{NFSU2_TR(0x4c5896);
u8 U[4];
w4(U+0,u32(0x861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c589b:{NFSU2_TR(0x4c589b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c589c:{NFSU2_TR(0x4c589c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c589d:{NFSU2_TR(0x4c589d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c58a2ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4c58a2:L4c58a2:{c.instructions+=1;NFSU2_TR(0x4c58a2);
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
B4c58a5:L4c58a5:{c.instructions+=1;NFSU2_TR(0x4c58a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c58b0:L4c58b0:{c.instructions+=11;NFSU2_TR(0x4c58b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58b2:{NFSU2_TR(0x4c58b2);
u8 U[4];
w4(U+0,u32(0x774070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58b7:{NFSU2_TR(0x4c58b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c58bd:{NFSU2_TR(0x4c58bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58be:{NFSU2_TR(0x4c58be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c58c5:{NFSU2_TR(0x4c58c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58c6:{NFSU2_TR(0x4c58c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58c7:{NFSU2_TR(0x4c58c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58c8:{NFSU2_TR(0x4c58c8);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58ca:{NFSU2_TR(0x4c58ca);
__builtin_memmove((R+24),(R+4),4);
}
B4c58cc:{NFSU2_TR(0x4c58cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c58d1ull));
TAIL_STATIC(0x575620u,575);
}
B4c58d1:L4c58d1:{c.instructions+=6;NFSU2_TR(0x4c58d1);
__builtin_memmove((R+28),(R+0),4);
}
B4c58d3:{NFSU2_TR(0x4c58d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c58d6:{NFSU2_TR(0x4c58d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c58da:{NFSU2_TR(0x4c58da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c58dc:{NFSU2_TR(0x4c58dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c58e4:{NFSU2_TR(0x4c58e4);
if(r1(R+518)){{goto L4c5901;}}
}
B4c58e6:L4c58e6:{c.instructions+=5;NFSU2_TR(0x4c58e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58e8:{NFSU2_TR(0x4c58e8);
u8 U[4];
w4(U+0,u32(0x1c8aceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58ed:{NFSU2_TR(0x4c58ed);
u8 U[4];
w4(U+0,u32(0x228b7e32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c58f2:{NFSU2_TR(0x4c58f2);
__builtin_memmove((R+4),(R+28),4);
}
B4c58f4:{NFSU2_TR(0x4c58f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c58f9ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c58f9:L4c58f9:{c.instructions+=2;NFSU2_TR(0x4c58f9);
u8 U[4];
w4(U+0,u32(0x7959d4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c58ff:{NFSU2_TR(0x4c58ff);
{goto L4c5903;}
}
B4c5901:L4c5901:{c.instructions+=1;NFSU2_TR(0x4c5901);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c5903:L4c5903:{c.instructions+=6;NFSU2_TR(0x4c5903);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5904:{NFSU2_TR(0x4c5904);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4c5907:{NFSU2_TR(0x4c5907);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5909:{NFSU2_TR(0x4c5909);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c590d:{NFSU2_TR(0x4c590d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5913:{NFSU2_TR(0x4c5913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5918ull));
TAIL_STATIC(0x575620u,575);
}
B4c5918:L4c5918:{c.instructions+=6;NFSU2_TR(0x4c5918);
__builtin_memmove((R+28),(R+0),4);
}
B4c591a:{NFSU2_TR(0x4c591a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c591d:{NFSU2_TR(0x4c591d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5921:{NFSU2_TR(0x4c5921);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5923:{NFSU2_TR(0x4c5923);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c592b:{NFSU2_TR(0x4c592b);
if(r1(R+518)){{goto L4c5948;}}
}
B4c592d:L4c592d:{c.instructions+=5;NFSU2_TR(0x4c592d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c592f:{NFSU2_TR(0x4c592f);
u8 U[4];
w4(U+0,u32(0x55423473ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5934:{NFSU2_TR(0x4c5934);
u8 U[4];
w4(U+0,u32(0x56026748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5939:{NFSU2_TR(0x4c5939);
__builtin_memmove((R+4),(R+28),4);
}
B4c593b:{NFSU2_TR(0x4c593b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5940ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c5940:L4c5940:{c.instructions+=2;NFSU2_TR(0x4c5940);
u8 U[4];
w4(U+0,u32(0x7959ecull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c5946:{NFSU2_TR(0x4c5946);
{goto L4c594a;}
}
B4c5948:L4c5948:{c.instructions+=1;NFSU2_TR(0x4c5948);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c594a:L4c594a:{c.instructions+=5;NFSU2_TR(0x4c594a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c594c:{NFSU2_TR(0x4c594c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c594d:{NFSU2_TR(0x4c594d);
__builtin_memmove((R+4),(R+24),4);
}
B4c594f:{NFSU2_TR(0x4c594f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5953:{NFSU2_TR(0x4c5953);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5956ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5956:L4c5956:{c.instructions+=2;NFSU2_TR(0x4c5956);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5958:{NFSU2_TR(0x4c5958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c595dull));
TAIL_STATIC(0x575620u,575);
}
B4c595d:L4c595d:{c.instructions+=6;NFSU2_TR(0x4c595d);
__builtin_memmove((R+28),(R+0),4);
}
B4c595f:{NFSU2_TR(0x4c595f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5962:{NFSU2_TR(0x4c5962);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5966:{NFSU2_TR(0x4c5966);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5968:{NFSU2_TR(0x4c5968);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5970:{NFSU2_TR(0x4c5970);
if(r1(R+518)){{goto L4c598d;}}
}
B4c5972:L4c5972:{c.instructions+=5;NFSU2_TR(0x4c5972);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5974:{NFSU2_TR(0x4c5974);
u8 U[4];
w4(U+0,u32(0x18ecffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5979:{NFSU2_TR(0x4c5979);
u8 U[4];
w4(U+0,u32(0x2287e063ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c597e:{NFSU2_TR(0x4c597e);
__builtin_memmove((R+4),(R+28),4);
}
B4c5980:{NFSU2_TR(0x4c5980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5985ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c5985:L4c5985:{c.instructions+=2;NFSU2_TR(0x4c5985);
u8 U[4];
w4(U+0,u32(0x7959dcull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c598b:{NFSU2_TR(0x4c598b);
{goto L4c598f;}
}
B4c598d:L4c598d:{c.instructions+=1;NFSU2_TR(0x4c598d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c598f:L4c598f:{c.instructions+=5;NFSU2_TR(0x4c598f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c5991:{NFSU2_TR(0x4c5991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5992:{NFSU2_TR(0x4c5992);
__builtin_memmove((R+4),(R+24),4);
}
B4c5994:{NFSU2_TR(0x4c5994);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5998:{NFSU2_TR(0x4c5998);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c599bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c599b:L4c599b:{c.instructions+=5;NFSU2_TR(0x4c599b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c59a1:{NFSU2_TR(0x4c59a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c59a3:{NFSU2_TR(0x4c59a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c59a4:{NFSU2_TR(0x4c59a4);
__builtin_memmove((R+4),(R+24),4);
}
B4c59a6:{NFSU2_TR(0x4c59a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c59a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c59a9:L4c59a9:{c.instructions+=2;NFSU2_TR(0x4c59a9);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c59ab:{NFSU2_TR(0x4c59ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c59b0ull));
TAIL_STATIC(0x575620u,575);
}
B4c59b0:L4c59b0:{c.instructions+=6;NFSU2_TR(0x4c59b0);
__builtin_memmove((R+28),(R+0),4);
}
B4c59b2:{NFSU2_TR(0x4c59b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c59b5:{NFSU2_TR(0x4c59b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c59b9:{NFSU2_TR(0x4c59b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c59bb:{NFSU2_TR(0x4c59bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c59c3:{NFSU2_TR(0x4c59c3);
if(r1(R+518)){{goto L4c59e0;}}
}
B4c59c5:L4c59c5:{c.instructions+=5;NFSU2_TR(0x4c59c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c59c7:{NFSU2_TR(0x4c59c7);
u8 U[4];
w4(U+0,u32(0x56b00632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c59cc:{NFSU2_TR(0x4c59cc);
u8 U[4];
w4(U+0,u32(0xb9929709ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c59d1:{NFSU2_TR(0x4c59d1);
__builtin_memmove((R+4),(R+28),4);
}
B4c59d3:{NFSU2_TR(0x4c59d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c59d8ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c59d8:L4c59d8:{c.instructions+=2;NFSU2_TR(0x4c59d8);
u8 U[4];
w4(U+0,u32(0x7959e4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c59de:{NFSU2_TR(0x4c59de);
{goto L4c59e2;}
}
B4c59e0:L4c59e0:{c.instructions+=1;NFSU2_TR(0x4c59e0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c59e2:L4c59e2:{c.instructions+=5;NFSU2_TR(0x4c59e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c59e4:{NFSU2_TR(0x4c59e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c59e5:{NFSU2_TR(0x4c59e5);
__builtin_memmove((R+4),(R+24),4);
}
B4c59e7:{NFSU2_TR(0x4c59e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c59eb:{NFSU2_TR(0x4c59eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c59eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c59ee:L4c59ee:{c.instructions+=2;NFSU2_TR(0x4c59ee);
__builtin_memmove((R+4),(R+24),4);
}
B4c59f0:{NFSU2_TR(0x4c59f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c59f5ull));
TAIL_STATIC(0x4a9360u,4a9);
}
B4c59f5:L4c59f5:{c.instructions+=5;NFSU2_TR(0x4c59f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c59f8:{NFSU2_TR(0x4c59f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c59fb:{NFSU2_TR(0x4c59fb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B4c59fe:{NFSU2_TR(0x4c59fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c59ff:{NFSU2_TR(0x4c59ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5a04ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4c5a04:L4c5a04:{c.instructions+=4;NFSU2_TR(0x4c5a04);
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
B4c5a07:{NFSU2_TR(0x4c5a07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a08:{NFSU2_TR(0x4c5a08);
__builtin_memmove((R+4),(R+24),4);
}
B4c5a0a:{NFSU2_TR(0x4c5a0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5a0dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5a0d:L4c5a0d:{c.instructions+=4;NFSU2_TR(0x4c5a0d);
__builtin_memmove((R+24),gp(0x836498),4);
}
B4c5a13:{NFSU2_TR(0x4c5a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5a15:{NFSU2_TR(0x4c5a15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c5a16:{NFSU2_TR(0x4c5a16);
if(r1(R+518)){{goto L4c5a2b;}}
}
B4c5a18:L4c5a18:{c.instructions+=4;NFSU2_TR(0x4c5a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5a1b:{NFSU2_TR(0x4c5a1b);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a20:{NFSU2_TR(0x4c5a20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a22:{NFSU2_TR(0x4c5a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5a27ull));
TAIL_STATIC(0x6fbfccu,6fb);
}
B4c5a27:L4c5a27:{c.instructions+=1;NFSU2_TR(0x4c5a27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c5a2b:L4c5a2b:{c.instructions+=6;NFSU2_TR(0x4c5a2b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5a2f:{NFSU2_TR(0x4c5a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5a30:{NFSU2_TR(0x4c5a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5a31:{NFSU2_TR(0x4c5a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5a38:{NFSU2_TR(0x4c5a38);
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
B4c5a3b:{NFSU2_TR(0x4c5a3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5a40:L4c5a40:{c.instructions+=11;NFSU2_TR(0x4c5a40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a42:{NFSU2_TR(0x4c5a42);
u8 U[4];
w4(U+0,u32(0x7740a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a47:{NFSU2_TR(0x4c5a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5a4d:{NFSU2_TR(0x4c5a4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a4e:{NFSU2_TR(0x4c5a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5a55:{NFSU2_TR(0x4c5a55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a56:{NFSU2_TR(0x4c5a56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a57:{NFSU2_TR(0x4c5a57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a58:{NFSU2_TR(0x4c5a58);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a5a:{NFSU2_TR(0x4c5a5a);
__builtin_memmove((R+24),(R+4),4);
}
B4c5a5c:{NFSU2_TR(0x4c5a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5a61ull));
TAIL_STATIC(0x575620u,575);
}
B4c5a61:L4c5a61:{c.instructions+=6;NFSU2_TR(0x4c5a61);
__builtin_memmove((R+28),(R+0),4);
}
B4c5a63:{NFSU2_TR(0x4c5a63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5a66:{NFSU2_TR(0x4c5a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5a6a:{NFSU2_TR(0x4c5a6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5a6c:{NFSU2_TR(0x4c5a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5a74:{NFSU2_TR(0x4c5a74);
if(r1(R+518)){{goto L4c5a91;}}
}
B4c5a76:L4c5a76:{c.instructions+=5;NFSU2_TR(0x4c5a76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a78:{NFSU2_TR(0x4c5a78);
u8 U[4];
w4(U+0,u32(0x55423473ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a7d:{NFSU2_TR(0x4c5a7d);
u8 U[4];
w4(U+0,u32(0x56026748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a82:{NFSU2_TR(0x4c5a82);
__builtin_memmove((R+4),(R+28),4);
}
B4c5a84:{NFSU2_TR(0x4c5a84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5a89ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c5a89:L4c5a89:{c.instructions+=2;NFSU2_TR(0x4c5a89);
u8 U[4];
w4(U+0,u32(0x7959ecull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c5a8f:{NFSU2_TR(0x4c5a8f);
{goto L4c5a93;}
}
B4c5a91:L4c5a91:{c.instructions+=1;NFSU2_TR(0x4c5a91);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c5a93:L4c5a93:{c.instructions+=5;NFSU2_TR(0x4c5a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c5a95:{NFSU2_TR(0x4c5a95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5a96:{NFSU2_TR(0x4c5a96);
__builtin_memmove((R+4),(R+24),4);
}
B4c5a98:{NFSU2_TR(0x4c5a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5aa0:{NFSU2_TR(0x4c5aa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5aa3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5aa3:L4c5aa3:{c.instructions+=2;NFSU2_TR(0x4c5aa3);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5aa5:{NFSU2_TR(0x4c5aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5aaaull));
TAIL_STATIC(0x575620u,575);
}
B4c5aaa:L4c5aaa:{c.instructions+=6;NFSU2_TR(0x4c5aaa);
__builtin_memmove((R+28),(R+0),4);
}
B4c5aac:{NFSU2_TR(0x4c5aac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5aaf:{NFSU2_TR(0x4c5aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5ab3:{NFSU2_TR(0x4c5ab3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c5ab5:{NFSU2_TR(0x4c5ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5abd:{NFSU2_TR(0x4c5abd);
if(r1(R+518)){{goto L4c5ada;}}
}
B4c5abf:L4c5abf:{c.instructions+=5;NFSU2_TR(0x4c5abf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ac1:{NFSU2_TR(0x4c5ac1);
u8 U[4];
w4(U+0,u32(0x56b00632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ac6:{NFSU2_TR(0x4c5ac6);
u8 U[4];
w4(U+0,u32(0xb9929709ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5acb:{NFSU2_TR(0x4c5acb);
__builtin_memmove((R+4),(R+28),4);
}
B4c5acd:{NFSU2_TR(0x4c5acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5ad2ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c5ad2:L4c5ad2:{c.instructions+=2;NFSU2_TR(0x4c5ad2);
u8 U[4];
w4(U+0,u32(0x7959e4ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c5ad8:{NFSU2_TR(0x4c5ad8);
{goto L4c5adc;}
}
B4c5ada:L4c5ada:{c.instructions+=1;NFSU2_TR(0x4c5ada);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c5adc:L4c5adc:{c.instructions+=5;NFSU2_TR(0x4c5adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c5ade:{NFSU2_TR(0x4c5ade);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5adf:{NFSU2_TR(0x4c5adf);
__builtin_memmove((R+4),(R+24),4);
}
B4c5ae1:{NFSU2_TR(0x4c5ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5ae9:{NFSU2_TR(0x4c5ae9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5aecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5aec:L4c5aec:{c.instructions+=3;NFSU2_TR(0x4c5aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c5aee:{NFSU2_TR(0x4c5aee);
__builtin_memmove((R+4),(R+24),4);
}
B4c5af0:{NFSU2_TR(0x4c5af0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5af3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5af3:L4c5af3:{c.instructions+=5;NFSU2_TR(0x4c5af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5af6:{NFSU2_TR(0x4c5af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c5af9:{NFSU2_TR(0x4c5af9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B4c5afc:{NFSU2_TR(0x4c5afc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5afd:{NFSU2_TR(0x4c5afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5b02ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4c5b02:L4c5b02:{c.instructions+=4;NFSU2_TR(0x4c5b02);
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
B4c5b05:{NFSU2_TR(0x4c5b05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5b06:{NFSU2_TR(0x4c5b06);
__builtin_memmove((R+4),(R+24),4);
}
B4c5b08:{NFSU2_TR(0x4c5b08);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5b0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5b0b:L4c5b0b:{c.instructions+=6;NFSU2_TR(0x4c5b0b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5b0f:{NFSU2_TR(0x4c5b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5b10:{NFSU2_TR(0x4c5b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5b11:{NFSU2_TR(0x4c5b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5b18:{NFSU2_TR(0x4c5b18);
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
B4c5b1b:{NFSU2_TR(0x4c5b1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5b20:L4c5b20:{c.instructions+=4;NFSU2_TR(0x4c5b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5b23:{NFSU2_TR(0x4c5b23);
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
B4c5b24:{NFSU2_TR(0x4c5b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5b27:{NFSU2_TR(0x4c5b27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5b30:L4c5b30:{c.instructions+=5;NFSU2_TR(0x4c5b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5b33:{NFSU2_TR(0x4c5b33);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4c5b34:{NFSU2_TR(0x4c5b34);
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
B4c5b36:{NFSU2_TR(0x4c5b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5b39:{NFSU2_TR(0x4c5b39);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4c5b44;}}
}
B4c5b3b:L4c5b3b:{c.instructions+=3;NFSU2_TR(0x4c5b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c5b3d:{NFSU2_TR(0x4c5b3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5b3f:{NFSU2_TR(0x4c5b3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5b42ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5b42:L4c5b42:{c.instructions+=1;NFSU2_TR(0x4c5b42);
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
B4c5b44:L4c5b44:{c.instructions+=1;NFSU2_TR(0x4c5b44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5b50:L4c5b50:{c.instructions+=2;NFSU2_TR(0x4c5b50);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4c5b53:{NFSU2_TR(0x4c5b53);
TAIL_STATIC(0x6f55ddu,6f5);
}
B4c5b60:L4c5b60:{c.instructions+=2;NFSU2_TR(0x4c5b60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4c5b63:{NFSU2_TR(0x4c5b63);
TAIL_STATIC(0x6f55e8u,6f5);
}
B4c5b70:L4c5b70:{c.instructions+=5;NFSU2_TR(0x4c5b70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5b71:{NFSU2_TR(0x4c5b71);
__builtin_memmove((R+24),(R+4),4);
}
B4c5b73:{NFSU2_TR(0x4c5b73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c5b76:{NFSU2_TR(0x4c5b76);
u8 U[4];
w4(U+0,u32(0x795a1cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c5b7c:{NFSU2_TR(0x4c5b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5b81ull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B4c5b81:L4c5b81:{c.instructions+=2;NFSU2_TR(0x4c5b81);
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
B4c5b86:{NFSU2_TR(0x4c5b86);
if(r1(R+518)){{goto L4c5b91;}}
}
B4c5b88:L4c5b88:{c.instructions+=2;NFSU2_TR(0x4c5b88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5b89:{NFSU2_TR(0x4c5b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5b8eull));
TAIL_STATIC(0x575630u,575);
}
B4c5b8e:L4c5b8e:{c.instructions+=1;NFSU2_TR(0x4c5b8e);
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
B4c5b91:L4c5b91:{c.instructions+=3;NFSU2_TR(0x4c5b91);
__builtin_memmove((R+0),(R+24),4);
}
B4c5b93:{NFSU2_TR(0x4c5b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5b94:{NFSU2_TR(0x4c5b94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5ba0:L4c5ba0:{c.instructions+=9;NFSU2_TR(0x4c5ba0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ba2:{NFSU2_TR(0x4c5ba2);
u8 U[4];
w4(U+0,u32(0x7740d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ba7:{NFSU2_TR(0x4c5ba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5bad:{NFSU2_TR(0x4c5bad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5bae:{NFSU2_TR(0x4c5bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5bb5:{NFSU2_TR(0x4c5bb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5bb6:{NFSU2_TR(0x4c5bb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5bb7:{NFSU2_TR(0x4c5bb7);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5bb9:{NFSU2_TR(0x4c5bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5bbeull));
TAIL_STATIC(0x575620u,575);
}
B4c5bbe:L4c5bbe:{c.instructions+=7;NFSU2_TR(0x4c5bbe);
__builtin_memmove((R+24),(R+0),4);
}
B4c5bc0:{NFSU2_TR(0x4c5bc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5bc3:{NFSU2_TR(0x4c5bc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5bc7:{NFSU2_TR(0x4c5bc7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c5bc9:{NFSU2_TR(0x4c5bc9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c5bcb:{NFSU2_TR(0x4c5bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5bcf:{NFSU2_TR(0x4c5bcf);
if(r1(R+518)){{goto L4c5bf3;}}
}
B4c5bd1:L4c5bd1:{c.instructions+=8;NFSU2_TR(0x4c5bd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5bd2:{NFSU2_TR(0x4c5bd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5bd5:{NFSU2_TR(0x4c5bd5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c5bd7:{NFSU2_TR(0x4c5bd7);
__builtin_memmove((R+4),(R+28),4);
}
B4c5bd9:{NFSU2_TR(0x4c5bd9);
u8 U[4];
w4(U+0,u32(0x795a1cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c5bdf:{NFSU2_TR(0x4c5bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5be6:{NFSU2_TR(0x4c5be6);
w4(R+0,u32(0x1cull));
}
B4c5beb:{NFSU2_TR(0x4c5beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5bf0ull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B4c5bf0:L4c5bf0:{c.instructions+=2;NFSU2_TR(0x4c5bf0);
__builtin_memmove((R+0),(R+24),4);
}
B4c5bf2:{NFSU2_TR(0x4c5bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5bf3:L4c5bf3:{c.instructions+=5;NFSU2_TR(0x4c5bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5bf7:{NFSU2_TR(0x4c5bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5bf8:{NFSU2_TR(0x4c5bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5bff:{NFSU2_TR(0x4c5bff);
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
B4c5c02:{NFSU2_TR(0x4c5c02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5c10:L4c5c10:{c.instructions+=5;NFSU2_TR(0x4c5c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5c13:{NFSU2_TR(0x4c5c13);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4c5c14:{NFSU2_TR(0x4c5c14);
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
B4c5c16:{NFSU2_TR(0x4c5c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5c19:{NFSU2_TR(0x4c5c19);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4c5c24;}}
}
B4c5c1b:L4c5c1b:{c.instructions+=3;NFSU2_TR(0x4c5c1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c5c1d:{NFSU2_TR(0x4c5c1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c1f:{NFSU2_TR(0x4c5c1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5c22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5c22:L4c5c22:{c.instructions+=1;NFSU2_TR(0x4c5c22);
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
B4c5c24:L4c5c24:{c.instructions+=1;NFSU2_TR(0x4c5c24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5c30:L4c5c30:{c.instructions+=6;NFSU2_TR(0x4c5c30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c31:{NFSU2_TR(0x4c5c31);
__builtin_memmove((R+24),(R+4),4);
}
B4c5c33:{NFSU2_TR(0x4c5c33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c5c36:{NFSU2_TR(0x4c5c36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c38:{NFSU2_TR(0x4c5c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c39:{NFSU2_TR(0x4c5c39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5c3eull));
TAIL_STATIC(0x6f5a04u,6f5);
}
B4c5c3e:L4c5c3e:{c.instructions+=3;NFSU2_TR(0x4c5c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5c41:{NFSU2_TR(0x4c5c41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c42:{NFSU2_TR(0x4c5c42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5c47ull));
TAIL_STATIC(0x575630u,575);
}
B4c5c47:L4c5c47:{c.instructions+=4;NFSU2_TR(0x4c5c47);
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
B4c5c4a:{NFSU2_TR(0x4c5c4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c5c4e:{NFSU2_TR(0x4c5c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5c4f:{NFSU2_TR(0x4c5c4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5c60:L4c5c60:{c.instructions+=3;NFSU2_TR(0x4c5c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5c64:{NFSU2_TR(0x4c5c64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c65:{NFSU2_TR(0x4c5c65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5c6aull));
TAIL_STATIC(0x6f5889u,6f5);
}
B4c5c6a:L4c5c6a:{c.instructions+=2;NFSU2_TR(0x4c5c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c5c6b:{NFSU2_TR(0x4c5c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5c70:L4c5c70:{c.instructions+=6;NFSU2_TR(0x4c5c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5c74:{NFSU2_TR(0x4c5c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5c77:{NFSU2_TR(0x4c5c77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c78:{NFSU2_TR(0x4c5c78);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B4c5c7b:{NFSU2_TR(0x4c5c7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c7c:{NFSU2_TR(0x4c5c7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5c81ull));
TAIL_STATIC(0x6f5968u,6f5);
}
B4c5c81:L4c5c81:{c.instructions+=2;NFSU2_TR(0x4c5c81);
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
B4c5c84:{NFSU2_TR(0x4c5c84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5c90:L4c5c90:{c.instructions+=2;NFSU2_TR(0x4c5c90);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5c92:{NFSU2_TR(0x4c5c92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5c97ull));
TAIL_STATIC(0x575620u,575);
}
B4c5c97:L4c5c97:{c.instructions+=4;NFSU2_TR(0x4c5c97);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c5c99:{NFSU2_TR(0x4c5c99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5c9c:{NFSU2_TR(0x4c5c9c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4c5c9e:{NFSU2_TR(0x4c5c9e);
if(r1(R+518)){{goto L4c5cbe;}}
}
B4c5ca0:L4c5ca0:{c.instructions+=7;NFSU2_TR(0x4c5ca0);
u8 U[4];
w4(U+0,u32(0x795a44ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4c5ca6:{NFSU2_TR(0x4c5ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5cad:{NFSU2_TR(0x4c5cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5cb4:{NFSU2_TR(0x4c5cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5cb7:{NFSU2_TR(0x4c5cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5cba:{NFSU2_TR(0x4c5cba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5cbd:{NFSU2_TR(0x4c5cbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5cbe:L4c5cbe:{c.instructions+=2;NFSU2_TR(0x4c5cbe);
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
B4c5cc0:{NFSU2_TR(0x4c5cc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5cd0:L4c5cd0:{c.instructions+=7;NFSU2_TR(0x4c5cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5cd4:{NFSU2_TR(0x4c5cd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5cd5:{NFSU2_TR(0x4c5cd5);
__builtin_memmove((R+24),(R+4),4);
}
B4c5cd7:{NFSU2_TR(0x4c5cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5cda:{NFSU2_TR(0x4c5cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5cdd:{NFSU2_TR(0x4c5cdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5cde:{NFSU2_TR(0x4c5cde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5ce3ull));
TAIL_STATIC(0x575620u,575);
}
B4c5ce3:L4c5ce3:{c.instructions+=11;NFSU2_TR(0x4c5ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5ce6:{NFSU2_TR(0x4c5ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c5ce9:{NFSU2_TR(0x4c5ce9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5cea:{NFSU2_TR(0x4c5cea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ceb:{NFSU2_TR(0x4c5ceb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5cec:{NFSU2_TR(0x4c5cec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ced:{NFSU2_TR(0x4c5ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5cf0:{NFSU2_TR(0x4c5cf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c5cf3:{NFSU2_TR(0x4c5cf3);
u8 U[4];
w4(U+0,u32(0x4c5d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5cf8:{NFSU2_TR(0x4c5cf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5cf9:{NFSU2_TR(0x4c5cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5cfeull));
TAIL_STATIC(0x6f5a40u,6f5);
}
B4c5cfe:L4c5cfe:{c.instructions+=4;NFSU2_TR(0x4c5cfe);
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
B4c5d01:{NFSU2_TR(0x4c5d01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c5d05:{NFSU2_TR(0x4c5d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5d06:{NFSU2_TR(0x4c5d06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5d10:L4c5d10:{c.instructions+=5;NFSU2_TR(0x4c5d10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d11:{NFSU2_TR(0x4c5d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c5d15:{NFSU2_TR(0x4c5d15);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c5d18:{NFSU2_TR(0x4c5d18);
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
B4c5d1a:{NFSU2_TR(0x4c5d1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5d31;}}
}
B4c5d1c:L4c5d1c:{c.instructions+=1;NFSU2_TR(0x4c5d1c);
__builtin_memmove((R+16),(R+16),4);
}
B4c5d20:L4c5d20:{c.instructions+=2;NFSU2_TR(0x4c5d20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d22:{NFSU2_TR(0x4c5d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5d27ull));
TAIL_STATIC(0x6f5889u,6f5);
}
B4c5d27:L4c5d27:{c.instructions+=4;NFSU2_TR(0x4c5d27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c5d2a:{NFSU2_TR(0x4c5d2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5d2d:{NFSU2_TR(0x4c5d2d);
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
B4c5d2f:{NFSU2_TR(0x4c5d2f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c5d20u);}goto L4c5d20;}}
}
B4c5d31:L4c5d31:{c.instructions+=2;NFSU2_TR(0x4c5d31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d32:{NFSU2_TR(0x4c5d32);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5d35ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c5d35:L4c5d35:{c.instructions+=4;NFSU2_TR(0x4c5d35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5d38:{NFSU2_TR(0x4c5d38);
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
B4c5d3a:{NFSU2_TR(0x4c5d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5d3b:{NFSU2_TR(0x4c5d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5d40:L4c5d40:{c.instructions+=6;NFSU2_TR(0x4c5d40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d41:{NFSU2_TR(0x4c5d41);
__builtin_memmove((R+24),(R+4),4);
}
B4c5d43:{NFSU2_TR(0x4c5d43);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c5d46:{NFSU2_TR(0x4c5d46);
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
B4c5d48:{NFSU2_TR(0x4c5d48);
u8 U[4];
w4(U+0,u32(0x795a44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c5d4e:{NFSU2_TR(0x4c5d4e);
if(r1(R+518)){{goto L4c5d63;}}
}
B4c5d50:L4c5d50:{c.instructions+=2;NFSU2_TR(0x4c5d50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d52:{NFSU2_TR(0x4c5d52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5d57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c5c30u);}goto L4c5c30;}
}
B4c5d57:L4c5d57:{c.instructions+=3;NFSU2_TR(0x4c5d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c5d5a:{NFSU2_TR(0x4c5d5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d5b:{NFSU2_TR(0x4c5d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5d60ull));
TAIL_STATIC(0x6f5859u,6f5);
}
B4c5d60:L4c5d60:{c.instructions+=1;NFSU2_TR(0x4c5d60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5d63:L4c5d63:{c.instructions+=2;NFSU2_TR(0x4c5d63);
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
B4c5d68:{NFSU2_TR(0x4c5d68);
if(r1(R+518)){{goto L4c5d73;}}
}
B4c5d6a:L4c5d6a:{c.instructions+=2;NFSU2_TR(0x4c5d6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d6b:{NFSU2_TR(0x4c5d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5d70ull));
TAIL_STATIC(0x575630u,575);
}
B4c5d70:L4c5d70:{c.instructions+=1;NFSU2_TR(0x4c5d70);
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
B4c5d73:L4c5d73:{c.instructions+=3;NFSU2_TR(0x4c5d73);
__builtin_memmove((R+0),(R+24),4);
}
B4c5d75:{NFSU2_TR(0x4c5d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5d76:{NFSU2_TR(0x4c5d76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5d80:L4c5d80:{c.instructions+=15;NFSU2_TR(0x4c5d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5d86:{NFSU2_TR(0x4c5d86);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d88:{NFSU2_TR(0x4c5d88);
u8 U[4];
w4(U+0,u32(0x7740f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d8d:{NFSU2_TR(0x4c5d8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d8e:{NFSU2_TR(0x4c5d8e);
__builtin_memmove((R+0),gp(0x837ad8),4);
}
B4c5d93:{NFSU2_TR(0x4c5d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5d9a:{NFSU2_TR(0x4c5d9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B4c5d9d:{NFSU2_TR(0x4c5d9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d9e:{NFSU2_TR(0x4c5d9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5d9f:{NFSU2_TR(0x4c5d9f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c5da1:{NFSU2_TR(0x4c5da1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c5da3:{NFSU2_TR(0x4c5da3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5da4:{NFSU2_TR(0x4c5da4);
__builtin_memmove((R+20),(R+4),4);
}
B4c5da6:{NFSU2_TR(0x4c5da6);
w4(R+28,u32(0x1ull));
}
B4c5dab:{NFSU2_TR(0x4c5dab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5dcc;}}
}
B4c5dad:L4c5dad:{c.instructions+=6;NFSU2_TR(0x4c5dad);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B4c5daf:{NFSU2_TR(0x4c5daf);
__builtin_memmove(gp(0x837ad8),(R+0),4);
}
B4c5db4:{NFSU2_TR(0x4c5db4);
__builtin_memmove(gp(0x837ac8),(R+12),4);
}
B4c5dba:{NFSU2_TR(0x4c5dba);
__builtin_memmove(gp(0x837acc),(R+12),4);
}
B4c5dc0:{NFSU2_TR(0x4c5dc0);
__builtin_memmove(gp(0x837ad0),(R+12),4);
}
B4c5dc6:{NFSU2_TR(0x4c5dc6);
__builtin_memmove(gp(0x837ad4),(R+12),4);
}
B4c5dcc:L4c5dcc:{c.instructions+=2;NFSU2_TR(0x4c5dcc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c5dce:{NFSU2_TR(0x4c5dce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5dee;}}
}
B4c5dd0:L4c5dd0:{c.instructions+=5;NFSU2_TR(0x4c5dd0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B4c5dd3:{NFSU2_TR(0x4c5dd3);
__builtin_memmove(gp(0x837ad8),(R+0),4);
}
B4c5dd8:{NFSU2_TR(0x4c5dd8);
s4(0x837abc,u32(0x837ac0ull));
}
B4c5de2:{NFSU2_TR(0x4c5de2);
__builtin_memmove(gp(0x837ac0),(R+28),4);
}
B4c5de8:{NFSU2_TR(0x4c5de8);
__builtin_memmove(gp(0x837ac4),(R+12),4);
}
B4c5dee:L4c5dee:{c.instructions+=2;NFSU2_TR(0x4c5dee);
u8 U[8];
__builtin_memmove((U+0),gp(0x837ab8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c5df4:{NFSU2_TR(0x4c5df4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5ea4;}}
}
B4c5dfa:L4c5dfa:{c.instructions+=2;NFSU2_TR(0x4c5dfa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5dfc:{NFSU2_TR(0x4c5dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5e01ull));
TAIL_STATIC(0x575620u,575);
}
B4c5e01:L4c5e01:{c.instructions+=3;NFSU2_TR(0x4c5e01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5e04:{NFSU2_TR(0x4c5e04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c5e06:{NFSU2_TR(0x4c5e06);
if(r1(R+518)){{goto L4c5e13;}}
}
B4c5e08:L4c5e08:{c.instructions+=3;NFSU2_TR(0x4c5e08);
u8 U[4];
w4(U+0,u32(0x786de0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4c5e0e:{NFSU2_TR(0x4c5e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e11:{NFSU2_TR(0x4c5e11);
{goto L4c5e15;}
}
B4c5e13:L4c5e13:{c.instructions+=1;NFSU2_TR(0x4c5e13);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c5e15:L4c5e15:{c.instructions+=3;NFSU2_TR(0x4c5e15);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5e17:{NFSU2_TR(0x4c5e17);
__builtin_memmove(gp(0x837ac8),(R+0),4);
}
B4c5e1c:{NFSU2_TR(0x4c5e1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5e21ull));
TAIL_STATIC(0x575620u,575);
}
B4c5e21:L4c5e21:{c.instructions+=3;NFSU2_TR(0x4c5e21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5e24:{NFSU2_TR(0x4c5e24);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c5e26:{NFSU2_TR(0x4c5e26);
if(r1(R+518)){{goto L4c5e43;}}
}
B4c5e28:L4c5e28:{c.instructions+=7;NFSU2_TR(0x4c5e28);
u8 U[4];
w4(U+0,u32(0x795a44ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4c5e2e:{NFSU2_TR(0x4c5e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e31:{NFSU2_TR(0x4c5e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e38:{NFSU2_TR(0x4c5e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e3b:{NFSU2_TR(0x4c5e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e3e:{NFSU2_TR(0x4c5e3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5e41:{NFSU2_TR(0x4c5e41);
{goto L4c5e45;}
}
B4c5e43:L4c5e43:{c.instructions+=1;NFSU2_TR(0x4c5e43);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c5e45:L4c5e45:{c.instructions+=4;NFSU2_TR(0x4c5e45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5e46:{NFSU2_TR(0x4c5e46);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5e48:{NFSU2_TR(0x4c5e48);
__builtin_memmove(gp(0x837acc),(R+0),4);
}
B4c5e4d:{NFSU2_TR(0x4c5e4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5e52ull));
TAIL_STATIC(0x575620u,575);
}
B4c5e52:L4c5e52:{c.instructions+=6;NFSU2_TR(0x4c5e52);
__builtin_memmove((R+24),(R+0),4);
}
B4c5e54:{NFSU2_TR(0x4c5e54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c5e57:{NFSU2_TR(0x4c5e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e5b:{NFSU2_TR(0x4c5e5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c5e5d:{NFSU2_TR(0x4c5e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e61:{NFSU2_TR(0x4c5e61);
if(r1(R+518)){{goto L4c5e7f;}}
}
B4c5e63:L4c5e63:{c.instructions+=7;NFSU2_TR(0x4c5e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e66:{NFSU2_TR(0x4c5e66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5e69:{NFSU2_TR(0x4c5e69);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c5e6b:{NFSU2_TR(0x4c5e6b);
__builtin_memmove((R+4),(R+28),4);
}
B4c5e6d:{NFSU2_TR(0x4c5e6d);
u8 U[4];
w4(U+0,u32(0x795a1cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4c5e73:{NFSU2_TR(0x4c5e73);
w4(R+0,u32(0x1cull));
}
B4c5e78:{NFSU2_TR(0x4c5e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5e7dull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B4c5e7d:L4c5e7d:{c.instructions+=1;NFSU2_TR(0x4c5e7d);
{goto L4c5e81;}
}
B4c5e7f:L4c5e7f:{c.instructions+=1;NFSU2_TR(0x4c5e7f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c5e81:L4c5e81:{c.instructions+=5;NFSU2_TR(0x4c5e81);
__builtin_memmove(gp(0x837ad0),(R+24),4);
}
B4c5e87:{NFSU2_TR(0x4c5e87);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5e8f:{NFSU2_TR(0x4c5e8f);
s4(0x837ad4,u32(0x4a96f0ull));
}
B4c5e99:{NFSU2_TR(0x4c5e99);
s4(0x837ab8,u32(0x837ac8ull));
}
B4c5ea3:{NFSU2_TR(0x4c5ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5ea4:L4c5ea4:{c.instructions+=3;NFSU2_TR(0x4c5ea4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c5ea6:{NFSU2_TR(0x4c5ea6);
w4(R+4,u32(0x10ull));
}
B4c5eab:{NFSU2_TR(0x4c5eab);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5eaf:L4c5eaf:{c.instructions+=1;NFSU2_TR(0x4c5eaf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4c5eb1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c5eafu);}goto L4c5eaf;}
}
B4c5eb1:L4c5eb1:{c.instructions+=11;NFSU2_TR(0x4c5eb1);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4c5eb3:{NFSU2_TR(0x4c5eb3);
w4(R+0,u32(0x44ull));
}
B4c5eb8:{NFSU2_TR(0x4c5eb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c5ebc:{NFSU2_TR(0x4c5ebc);
u8 U[4];
w4(U+0,u32(0x78e8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ec1:{NFSU2_TR(0x4c5ec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ec2:{NFSU2_TR(0x4c5ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
w4(U+4,u32(0x837abcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5ec9:{NFSU2_TR(0x4c5ec9);
u8 U[5];
w4(U+0,u32(u32(u32(0x5aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5ecd:{NFSU2_TR(0x4c5ecd);
u8 U[5];
w4(U+0,u32(u32(u32(0x5bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5ed1:{NFSU2_TR(0x4c5ed1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4c5ed3:{NFSU2_TR(0x4c5ed3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5ed7:{NFSU2_TR(0x4c5ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5edcull));
TAIL_STATIC(0x43e000u,43e);
}
B4c5edc:L4c5edc:{c.instructions+=7;NFSU2_TR(0x4c5edc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c5ee0:{NFSU2_TR(0x4c5ee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ee1:{NFSU2_TR(0x4c5ee1);
u8 U[4];
w4(U+0,u32(0x7f68c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ee6:{NFSU2_TR(0x4c5ee6);
u8 U[4];
w4(U+0,u32(0x837ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5eeb:{NFSU2_TR(0x4c5eeb);
u8 U[5];
w4(U+0,u32(u32(u32(0x66ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5eef:{NFSU2_TR(0x4c5eef);
u8 U[5];
w4(U+0,u32(u32(u32(0x67ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5ef3:{NFSU2_TR(0x4c5ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5ef8ull));
TAIL_STATIC(0x6fc029u,6fc);
}
B4c5ef8:L4c5ef8:{c.instructions+=11;NFSU2_TR(0x4c5ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5efc:{NFSU2_TR(0x4c5efc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c5eff:{NFSU2_TR(0x4c5eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f02:{NFSU2_TR(0x4c5f02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4c5f05:{NFSU2_TR(0x4c5f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5f06:{NFSU2_TR(0x4c5f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f09:{NFSU2_TR(0x4c5f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c5f0a:{NFSU2_TR(0x4c5f0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c5f0b:{NFSU2_TR(0x4c5f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f12:{NFSU2_TR(0x4c5f12);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c5f15:{NFSU2_TR(0x4c5f15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5f20:L4c5f20:{c.instructions+=7;NFSU2_TR(0x4c5f20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f21:{NFSU2_TR(0x4c5f21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f22:{NFSU2_TR(0x4c5f22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f23:{NFSU2_TR(0x4c5f23);
__builtin_memmove((R+24),(R+4),4);
}
B4c5f25:{NFSU2_TR(0x4c5f25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f26:{NFSU2_TR(0x4c5f26);
w4(R+4,u32(0x83a9d0ull));
}
B4c5f2b:{NFSU2_TR(0x4c5f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5f30ull));
TAIL_STATIC(0x52a440u,52a);
}
B4c5f30:L4c5f30:{c.instructions+=5;NFSU2_TR(0x4c5f30);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c5f36:{NFSU2_TR(0x4c5f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c5f3a:{NFSU2_TR(0x4c5f3a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c5f3c:{NFSU2_TR(0x4c5f3c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c5f3e:{NFSU2_TR(0x4c5f3e);
if(r1(R+518)){{goto L4c5f5e;}}
}
B4c5f40:L4c5f40:{c.instructions+=7;NFSU2_TR(0x4c5f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f43:{NFSU2_TR(0x4c5f43);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c5f49:{NFSU2_TR(0x4c5f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f4c:{NFSU2_TR(0x4c5f4c);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4c5f52:{NFSU2_TR(0x4c5f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f55:{NFSU2_TR(0x4c5f55);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4c5f5b:{NFSU2_TR(0x4c5f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f5e:L4c5f5e:{c.instructions+=4;NFSU2_TR(0x4c5f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c5f61:{NFSU2_TR(0x4c5f61);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f63:{NFSU2_TR(0x4c5f63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f64:{NFSU2_TR(0x4c5f64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5f69ull));
TAIL_STATIC(0x440820u,440);
}
B4c5f69:L4c5f69:{c.instructions+=5;NFSU2_TR(0x4c5f69);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f6b:{NFSU2_TR(0x4c5f6b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f6c:{NFSU2_TR(0x4c5f6c);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f71:{NFSU2_TR(0x4c5f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f74:{NFSU2_TR(0x4c5f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5f79ull));
TAIL_STATIC(0x43e030u,43e);
}
B4c5f79:L4c5f79:{c.instructions+=5;NFSU2_TR(0x4c5f79);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f7a:{NFSU2_TR(0x4c5f7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5f7d:{NFSU2_TR(0x4c5f7d);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f82:{NFSU2_TR(0x4c5f82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5f83:{NFSU2_TR(0x4c5f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5f88ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4c5f88:L4c5f88:{c.instructions+=10;NFSU2_TR(0x4c5f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f8b:{NFSU2_TR(0x4c5f8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5f8e:{NFSU2_TR(0x4c5f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f91:{NFSU2_TR(0x4c5f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c5f98:{NFSU2_TR(0x4c5f98);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4c5f9c:{NFSU2_TR(0x4c5f9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c5f9f:{NFSU2_TR(0x4c5f9f);
__builtin_memmove((R+0),gp(0x8650d0),4);
}
B4c5fa4:{NFSU2_TR(0x4c5fa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4c5fa7:{NFSU2_TR(0x4c5fa7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4c5fa9:{NFSU2_TR(0x4c5fa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c5fbd;}}
}
B4c5fab:L4c5fab:{c.instructions+=8;NFSU2_TR(0x4c5fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5fae:{NFSU2_TR(0x4c5fae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5faf:{NFSU2_TR(0x4c5faf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fb0:{NFSU2_TR(0x4c5fb0);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fb5:{NFSU2_TR(0x4c5fb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fb6:{NFSU2_TR(0x4c5fb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fb7:{NFSU2_TR(0x4c5fb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fb8:{NFSU2_TR(0x4c5fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5fbdull));
TAIL_STATIC(0x6fbf1eu,6fb);
}
B4c5fbd:L4c5fbd:{c.instructions+=5;NFSU2_TR(0x4c5fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c5fbe:{NFSU2_TR(0x4c5fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c5fbf:{NFSU2_TR(0x4c5fbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c5fc0:{NFSU2_TR(0x4c5fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c5fc1:{NFSU2_TR(0x4c5fc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c5fd0:L4c5fd0:{c.instructions+=9;NFSU2_TR(0x4c5fd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fd1:{NFSU2_TR(0x4c5fd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fd2:{NFSU2_TR(0x4c5fd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fd3:{NFSU2_TR(0x4c5fd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c5fd7:{NFSU2_TR(0x4c5fd7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fd9:{NFSU2_TR(0x4c5fd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fda:{NFSU2_TR(0x4c5fda);
u8 U[4];
w4(U+0,u32(0x835bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fdf:{NFSU2_TR(0x4c5fdf);
__builtin_memmove((R+24),(R+4),4);
}
B4c5fe1:{NFSU2_TR(0x4c5fe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5fe6ull));
TAIL_STATIC(0x43e030u,43e);
}
B4c5fe6:L4c5fe6:{c.instructions+=5;NFSU2_TR(0x4c5fe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fe7:{NFSU2_TR(0x4c5fe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c5fea:{NFSU2_TR(0x4c5fea);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5fef:{NFSU2_TR(0x4c5fef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c5ff0:{NFSU2_TR(0x4c5ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c5ff5ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4c5ff5:L4c5ff5:{c.instructions+=3;NFSU2_TR(0x4c5ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c5ff8:{NFSU2_TR(0x4c5ff8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c5ffb:{NFSU2_TR(0x4c5ffb);
u8 U[4];
w4(U+0,u32(0x837ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4c6000u,4c6);
}
XIT:NFSU2_TR_EXIT(0x4c5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
