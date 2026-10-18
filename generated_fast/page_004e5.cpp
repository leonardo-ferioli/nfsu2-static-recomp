#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4bb(u8* __restrict R,Cpu& c);
u32 body_4bc(u8* __restrict R,Cpu& c);
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 body_4d2(u8* __restrict R,Cpu& c);
u32 body_4d3(u8* __restrict R,Cpu& c);
u32 body_4e6(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e5(u8* __restrict R,Cpu& c);
u32 page_4e5(Cpu& c){return body_4e5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e5000:goto L4e5000;
case 0x4e5005:goto L4e5005;
case 0x4e5008:c.instructions+=3;goto B4e5008;
case 0x4e500a:c.instructions+=2;goto B4e500a;
case 0x4e500c:c.instructions+=1;goto B4e500c;
case 0x4e5011:goto L4e5011;
case 0x4e5012:c.instructions+=5;goto B4e5012;
case 0x4e5013:c.instructions+=4;goto B4e5013;
case 0x4e5014:c.instructions+=3;goto B4e5014;
case 0x4e5016:c.instructions+=2;goto B4e5016;
case 0x4e5017:c.instructions+=1;goto B4e5017;
case 0x4e501a:goto L4e501a;
case 0x4e501f:c.instructions+=2;goto B4e501f;
case 0x4e5021:c.instructions+=1;goto B4e5021;
case 0x4e5027:goto L4e5027;
case 0x4e502c:c.instructions+=1;goto B4e502c;
case 0x4e5031:goto L4e5031;
case 0x4e5034:c.instructions+=2;goto B4e5034;
case 0x4e5036:c.instructions+=1;goto B4e5036;
case 0x4e503c:goto L4e503c;
case 0x4e5041:c.instructions+=1;goto B4e5041;
case 0x4e5046:goto L4e5046;
case 0x4e5049:c.instructions+=2;goto B4e5049;
case 0x4e504b:c.instructions+=1;goto B4e504b;
case 0x4e5051:goto L4e5051;
case 0x4e5057:c.instructions+=2;goto B4e5057;
case 0x4e505d:c.instructions+=1;goto B4e505d;
case 0x4e5062:goto L4e5062;
case 0x4e5068:c.instructions+=1;goto B4e5068;
case 0x4e506d:goto L4e506d;
case 0x4e506f:c.instructions+=1;goto B4e506f;
case 0x4e5071:goto L4e5071;
case 0x4e5077:c.instructions+=1;goto B4e5077;
case 0x4e5079:goto L4e5079;
case 0x4e507b:goto L4e507b;
case 0x4e507d:c.instructions+=2;goto B4e507d;
case 0x4e5083:c.instructions+=1;goto B4e5083;
case 0x4e5089:goto L4e5089;
case 0x4e508b:c.instructions+=1;goto B4e508b;
case 0x4e508d:goto L4e508d;
case 0x4e5092:c.instructions+=3;goto B4e5092;
case 0x4e5097:c.instructions+=2;goto B4e5097;
case 0x4e509b:c.instructions+=1;goto B4e509b;
case 0x4e50a0:goto L4e50a0;
case 0x4e50a4:c.instructions+=4;goto B4e50a4;
case 0x4e50aa:c.instructions+=3;goto B4e50aa;
case 0x4e50ad:c.instructions+=2;goto B4e50ad;
case 0x4e50af:c.instructions+=1;goto B4e50af;
case 0x4e50b1:goto L4e50b1;
case 0x4e50b6:c.instructions+=1;goto B4e50b6;
case 0x4e50b8:goto L4e50b8;
case 0x4e50bd:goto L4e50bd;
case 0x4e50be:c.instructions+=2;goto B4e50be;
case 0x4e50c3:c.instructions+=1;goto B4e50c3;
case 0x4e50c8:goto L4e50c8;
case 0x4e50cb:c.instructions+=3;goto B4e50cb;
case 0x4e50cc:c.instructions+=2;goto B4e50cc;
case 0x4e50cd:c.instructions+=1;goto B4e50cd;
case 0x4e50d2:goto L4e50d2;
case 0x4e50d6:c.instructions+=8;goto B4e50d6;
case 0x4e50dc:c.instructions+=7;goto B4e50dc;
case 0x4e50df:c.instructions+=6;goto B4e50df;
case 0x4e50e2:c.instructions+=5;goto B4e50e2;
case 0x4e50e3:c.instructions+=4;goto B4e50e3;
case 0x4e50e6:c.instructions+=3;goto B4e50e6;
case 0x4e50e8:c.instructions+=2;goto B4e50e8;
case 0x4e50ec:c.instructions+=1;goto B4e50ec;
case 0x4e50ee:goto L4e50ee;
case 0x4e50f1:c.instructions+=4;goto B4e50f1;
case 0x4e50f3:c.instructions+=3;goto B4e50f3;
case 0x4e50f8:c.instructions+=2;goto B4e50f8;
case 0x4e50fd:c.instructions+=1;goto B4e50fd;
case 0x4e5102:goto L4e5102;
case 0x4e5105:c.instructions+=3;goto B4e5105;
case 0x4e5106:c.instructions+=2;goto B4e5106;
case 0x4e5107:c.instructions+=1;goto B4e5107;
case 0x4e510c:goto L4e510c;
case 0x4e510f:goto L4e510f;
case 0x4e5115:c.instructions+=2;goto B4e5115;
case 0x4e5117:c.instructions+=1;goto B4e5117;
case 0x4e5119:goto L4e5119;
case 0x4e511f:c.instructions+=2;goto B4e511f;
case 0x4e5121:c.instructions+=1;goto B4e5121;
case 0x4e5123:goto L4e5123;
case 0x4e5129:c.instructions+=6;goto B4e5129;
case 0x4e512c:c.instructions+=5;goto B4e512c;
case 0x4e512e:c.instructions+=4;goto B4e512e;
case 0x4e5133:c.instructions+=3;goto B4e5133;
case 0x4e5134:c.instructions+=2;goto B4e5134;
case 0x4e5135:c.instructions+=1;goto B4e5135;
case 0x4e5137:goto L4e5137;
case 0x4e513c:c.instructions+=5;goto B4e513c;
case 0x4e513f:c.instructions+=4;goto B4e513f;
case 0x4e5141:c.instructions+=3;goto B4e5141;
case 0x4e5146:c.instructions+=2;goto B4e5146;
case 0x4e5147:c.instructions+=1;goto B4e5147;
case 0x4e5148:goto L4e5148;
case 0x4e514d:goto L4e514d;
case 0x4e5152:c.instructions+=3;goto B4e5152;
case 0x4e5155:c.instructions+=2;goto B4e5155;
case 0x4e5158:c.instructions+=1;goto B4e5158;
case 0x4e515e:goto L4e515e;
case 0x4e5160:c.instructions+=2;goto B4e5160;
case 0x4e5162:c.instructions+=1;goto B4e5162;
case 0x4e5167:goto L4e5167;
case 0x4e5168:c.instructions+=5;goto B4e5168;
case 0x4e5169:c.instructions+=4;goto B4e5169;
case 0x4e516a:c.instructions+=3;goto B4e516a;
case 0x4e516c:c.instructions+=2;goto B4e516c;
case 0x4e516d:c.instructions+=1;goto B4e516d;
case 0x4e5170:goto L4e5170;
case 0x4e5176:c.instructions+=1;goto B4e5176;
case 0x4e517c:goto L4e517c;
case 0x4e5182:goto L4e5182;
case 0x4e5188:c.instructions+=1;goto B4e5188;
case 0x4e518e:goto L4e518e;
case 0x4e5194:goto L4e5194;
case 0x4e519a:c.instructions+=1;goto B4e519a;
case 0x4e51a0:goto L4e51a0;
case 0x4e51a2:goto L4e51a2;
case 0x4e51a8:c.instructions+=1;goto B4e51a8;
case 0x4e51aa:goto L4e51aa;
case 0x4e51b0:c.instructions+=1;goto B4e51b0;
case 0x4e51b6:goto L4e51b6;
case 0x4e51b9:c.instructions+=5;goto B4e51b9;
case 0x4e51bc:c.instructions+=4;goto B4e51bc;
case 0x4e51bf:c.instructions+=3;goto B4e51bf;
case 0x4e51c0:c.instructions+=2;goto B4e51c0;
case 0x4e51c2:c.instructions+=1;goto B4e51c2;
case 0x4e51c7:goto L4e51c7;
case 0x4e51ca:c.instructions+=1;goto B4e51ca;
case 0x4e51d0:goto L4e51d0;
case 0x4e51d3:c.instructions+=3;goto B4e51d3;
case 0x4e51d4:c.instructions+=2;goto B4e51d4;
case 0x4e51d9:c.instructions+=1;goto B4e51d9;
case 0x4e51de:goto L4e51de;
case 0x4e51e1:c.instructions+=6;goto B4e51e1;
case 0x4e51e2:c.instructions+=5;goto B4e51e2;
case 0x4e51e3:c.instructions+=4;goto B4e51e3;
case 0x4e51e4:c.instructions+=3;goto B4e51e4;
case 0x4e51e6:c.instructions+=2;goto B4e51e6;
case 0x4e51e7:c.instructions+=1;goto B4e51e7;
case 0x4e51ea:goto L4e51ea;
case 0x4e51f0:c.instructions+=2;goto B4e51f0;
case 0x4e51f1:c.instructions+=1;goto B4e51f1;
case 0x4e51f6:goto L4e51f6;
case 0x4e51f9:c.instructions+=8;goto B4e51f9;
case 0x4e5203:c.instructions+=7;goto B4e5203;
case 0x4e520a:c.instructions+=6;goto B4e520a;
case 0x4e520b:c.instructions+=5;goto B4e520b;
case 0x4e520c:c.instructions+=4;goto B4e520c;
case 0x4e520d:c.instructions+=3;goto B4e520d;
case 0x4e520f:c.instructions+=2;goto B4e520f;
case 0x4e5210:c.instructions+=1;goto B4e5210;
case 0x4e5213:goto L4e5213;
case 0x4e5216:c.instructions+=4;goto B4e5216;
case 0x4e5218:c.instructions+=3;goto B4e5218;
case 0x4e521d:c.instructions+=2;goto B4e521d;
case 0x4e521e:c.instructions+=1;goto B4e521e;
case 0x4e5223:goto L4e5223;
case 0x4e5226:c.instructions+=6;goto B4e5226;
case 0x4e5227:c.instructions+=5;goto B4e5227;
case 0x4e5228:c.instructions+=4;goto B4e5228;
case 0x4e5229:c.instructions+=3;goto B4e5229;
case 0x4e522b:c.instructions+=2;goto B4e522b;
case 0x4e522c:c.instructions+=1;goto B4e522c;
case 0x4e522f:goto L4e522f;
case 0x4e5235:c.instructions+=1;goto B4e5235;
case 0x4e5237:goto L4e5237;
case 0x4e523d:c.instructions+=1;goto B4e523d;
case 0x4e5243:goto L4e5243;
case 0x4e5245:c.instructions+=1;goto B4e5245;
case 0x4e524a:goto L4e524a;
case 0x4e524d:c.instructions+=5;goto B4e524d;
case 0x4e524f:c.instructions+=4;goto B4e524f;
case 0x4e5254:c.instructions+=3;goto B4e5254;
case 0x4e5259:c.instructions+=2;goto B4e5259;
case 0x4e525a:c.instructions+=1;goto B4e525a;
case 0x4e525f:goto L4e525f;
case 0x4e5262:c.instructions+=6;goto B4e5262;
case 0x4e5263:c.instructions+=5;goto B4e5263;
case 0x4e5264:c.instructions+=4;goto B4e5264;
case 0x4e5265:c.instructions+=3;goto B4e5265;
case 0x4e5267:c.instructions+=2;goto B4e5267;
case 0x4e5268:c.instructions+=1;goto B4e5268;
case 0x4e526b:goto L4e526b;
case 0x4e526e:c.instructions+=2;goto B4e526e;
case 0x4e526f:c.instructions+=1;goto B4e526f;
case 0x4e5274:goto L4e5274;
case 0x4e5277:c.instructions+=6;goto B4e5277;
case 0x4e5278:c.instructions+=5;goto B4e5278;
case 0x4e5279:c.instructions+=4;goto B4e5279;
case 0x4e527a:c.instructions+=3;goto B4e527a;
case 0x4e527c:c.instructions+=2;goto B4e527c;
case 0x4e527d:c.instructions+=1;goto B4e527d;
case 0x4e5280:goto L4e5280;
case 0x4e5286:c.instructions+=1;goto B4e5286;
case 0x4e528b:goto L4e528b;
case 0x4e528d:c.instructions+=1;goto B4e528d;
case 0x4e528f:goto L4e528f;
case 0x4e5295:c.instructions+=1;goto B4e5295;
case 0x4e529a:goto L4e529a;
case 0x4e52a0:c.instructions+=1;goto B4e52a0;
case 0x4e52a2:goto L4e52a2;
case 0x4e52a4:goto L4e52a4;
case 0x4e52a5:c.instructions+=2;goto B4e52a5;
case 0x4e52aa:c.instructions+=1;goto B4e52aa;
case 0x4e52af:goto L4e52af;
case 0x4e52b1:c.instructions+=2;goto B4e52b1;
case 0x4e52b2:c.instructions+=1;goto B4e52b2;
case 0x4e52b7:goto L4e52b7;
case 0x4e52ba:c.instructions+=4;goto B4e52ba;
case 0x4e52bc:c.instructions+=3;goto B4e52bc;
case 0x4e52c1:c.instructions+=2;goto B4e52c1;
case 0x4e52c8:c.instructions+=1;goto B4e52c8;
case 0x4e52cd:goto L4e52cd;
case 0x4e52d2:c.instructions+=1;goto B4e52d2;
case 0x4e52d7:goto L4e52d7;
case 0x4e52dd:c.instructions+=1;goto B4e52dd;
case 0x4e52e3:goto L4e52e3;
case 0x4e52e9:c.instructions+=2;goto B4e52e9;
case 0x4e52eb:c.instructions+=1;goto B4e52eb;
case 0x4e52ed:goto L4e52ed;
case 0x4e52ee:c.instructions+=1;goto B4e52ee;
case 0x4e52f3:goto L4e52f3;
case 0x4e52f6:c.instructions+=1;goto B4e52f6;
case 0x4e52fc:goto L4e52fc;
case 0x4e52ff:c.instructions+=5;goto B4e52ff;
case 0x4e5304:c.instructions+=4;goto B4e5304;
case 0x4e5309:c.instructions+=3;goto B4e5309;
case 0x4e530a:c.instructions+=2;goto B4e530a;
case 0x4e5310:c.instructions+=1;goto B4e5310;
case 0x4e5315:goto L4e5315;
case 0x4e531b:c.instructions+=6;goto B4e531b;
case 0x4e531e:c.instructions+=5;goto B4e531e;
case 0x4e5324:c.instructions+=4;goto B4e5324;
case 0x4e532a:c.instructions+=3;goto B4e532a;
case 0x4e5330:c.instructions+=2;goto B4e5330;
case 0x4e5333:c.instructions+=1;goto B4e5333;
case 0x4e5338:goto L4e5338;
case 0x4e533f:c.instructions+=6;goto B4e533f;
case 0x4e5340:c.instructions+=5;goto B4e5340;
case 0x4e5341:c.instructions+=4;goto B4e5341;
case 0x4e5342:c.instructions+=3;goto B4e5342;
case 0x4e5344:c.instructions+=2;goto B4e5344;
case 0x4e5345:c.instructions+=1;goto B4e5345;
case 0x4e5348:goto L4e5348;
case 0x4e534e:c.instructions+=1;goto B4e534e;
case 0x4e5354:goto L4e5354;
case 0x4e535a:goto L4e535a;
case 0x4e5360:c.instructions+=1;goto B4e5360;
case 0x4e5366:goto L4e5366;
case 0x4e536c:c.instructions+=1;goto B4e536c;
case 0x4e5372:goto L4e5372;
case 0x4e5378:c.instructions+=1;goto B4e5378;
case 0x4e537d:goto L4e537d;
case 0x4e537e:c.instructions+=5;goto B4e537e;
case 0x4e537f:c.instructions+=4;goto B4e537f;
case 0x4e5380:c.instructions+=3;goto B4e5380;
case 0x4e5382:c.instructions+=2;goto B4e5382;
case 0x4e5383:c.instructions+=1;goto B4e5383;
case 0x4e5386:goto L4e5386;
case 0x4e538b:c.instructions+=2;goto B4e538b;
case 0x4e5391:c.instructions+=1;goto B4e5391;
case 0x4e5396:goto L4e5396;
case 0x4e5397:c.instructions+=2;goto B4e5397;
case 0x4e5398:c.instructions+=1;goto B4e5398;
case 0x4e539d:goto L4e539d;
case 0x4e53a0:c.instructions+=2;goto B4e53a0;
case 0x4e53a2:c.instructions+=1;goto B4e53a2;
case 0x4e53a8:goto L4e53a8;
case 0x4e53ad:c.instructions+=1;goto B4e53ad;
case 0x4e53b2:goto L4e53b2;
case 0x4e53b3:c.instructions+=2;goto B4e53b3;
case 0x4e53b4:c.instructions+=1;goto B4e53b4;
case 0x4e53b9:goto L4e53b9;
case 0x4e53bc:c.instructions+=2;goto B4e53bc;
case 0x4e53be:c.instructions+=1;goto B4e53be;
case 0x4e53c4:goto L4e53c4;
case 0x4e53c7:c.instructions+=3;goto B4e53c7;
case 0x4e53c8:c.instructions+=2;goto B4e53c8;
case 0x4e53ca:c.instructions+=1;goto B4e53ca;
case 0x4e53cf:goto L4e53cf;
case 0x4e53d2:c.instructions+=1;goto B4e53d2;
case 0x4e53d8:goto L4e53d8;
case 0x4e53db:c.instructions+=3;goto B4e53db;
case 0x4e53dc:c.instructions+=2;goto B4e53dc;
case 0x4e53de:c.instructions+=1;goto B4e53de;
case 0x4e53e3:goto L4e53e3;
case 0x4e53e5:c.instructions+=3;goto B4e53e5;
case 0x4e53e7:c.instructions+=2;goto B4e53e7;
case 0x4e53ea:c.instructions+=1;goto B4e53ea;
case 0x4e53ef:goto L4e53ef;
case 0x4e53f2:c.instructions+=2;goto B4e53f2;
case 0x4e53f4:c.instructions+=1;goto B4e53f4;
case 0x4e53f9:goto L4e53f9;
case 0x4e53fc:c.instructions+=4;goto B4e53fc;
case 0x4e5403:c.instructions+=3;goto B4e5403;
case 0x4e5404:c.instructions+=2;goto B4e5404;
case 0x4e5409:c.instructions+=1;goto B4e5409;
case 0x4e540e:goto L4e540e;
case 0x4e5413:c.instructions+=5;goto B4e5413;
case 0x4e5416:c.instructions+=4;goto B4e5416;
case 0x4e5418:c.instructions+=3;goto B4e5418;
case 0x4e541a:c.instructions+=2;goto B4e541a;
case 0x4e541f:c.instructions+=1;goto B4e541f;
case 0x4e5421:goto L4e5421;
case 0x4e5424:c.instructions+=3;goto B4e5424;
case 0x4e5425:c.instructions+=2;goto B4e5425;
case 0x4e542a:c.instructions+=1;goto B4e542a;
case 0x4e542f:goto L4e542f;
case 0x4e5436:c.instructions+=1;goto B4e5436;
case 0x4e5438:goto L4e5438;
case 0x4e543b:c.instructions+=3;goto B4e543b;
case 0x4e543c:c.instructions+=2;goto B4e543c;
case 0x4e5441:c.instructions+=1;goto B4e5441;
case 0x4e5446:goto L4e5446;
case 0x4e544d:goto L4e544d;
case 0x4e5450:c.instructions+=6;goto B4e5450;
case 0x4e5453:c.instructions+=5;goto B4e5453;
case 0x4e5455:c.instructions+=4;goto B4e5455;
case 0x4e545a:c.instructions+=3;goto B4e545a;
case 0x4e545f:c.instructions+=2;goto B4e545f;
case 0x4e5460:c.instructions+=1;goto B4e5460;
case 0x4e5465:goto L4e5465;
case 0x4e5468:c.instructions+=5;goto B4e5468;
case 0x4e546a:c.instructions+=4;goto B4e546a;
case 0x4e546f:c.instructions+=3;goto B4e546f;
case 0x4e5474:c.instructions+=2;goto B4e5474;
case 0x4e5475:c.instructions+=1;goto B4e5475;
case 0x4e547a:goto L4e547a;
case 0x4e5480:c.instructions+=6;goto B4e5480;
case 0x4e5483:c.instructions+=5;goto B4e5483;
case 0x4e5485:c.instructions+=4;goto B4e5485;
case 0x4e548a:c.instructions+=3;goto B4e548a;
case 0x4e548b:c.instructions+=2;goto B4e548b;
case 0x4e548c:c.instructions+=1;goto B4e548c;
case 0x4e5491:goto L4e5491;
case 0x4e5494:c.instructions+=6;goto B4e5494;
case 0x4e5495:c.instructions+=5;goto B4e5495;
case 0x4e5496:c.instructions+=4;goto B4e5496;
case 0x4e5497:c.instructions+=3;goto B4e5497;
case 0x4e5499:c.instructions+=2;goto B4e5499;
case 0x4e549a:c.instructions+=1;goto B4e549a;
case 0x4e549d:goto L4e549d;
case 0x4e54a0:c.instructions+=2;goto B4e54a0;
case 0x4e54a1:c.instructions+=1;goto B4e54a1;
case 0x4e54a6:goto L4e54a6;
case 0x4e54a9:c.instructions+=3;goto B4e54a9;
case 0x4e54ac:c.instructions+=2;goto B4e54ac;
case 0x4e54b2:c.instructions+=1;goto B4e54b2;
case 0x4e54b8:goto L4e54b8;
case 0x4e54bd:c.instructions+=8;goto B4e54bd;
case 0x4e54c3:c.instructions+=7;goto B4e54c3;
case 0x4e54c7:c.instructions+=6;goto B4e54c7;
case 0x4e54cb:c.instructions+=5;goto B4e54cb;
case 0x4e54d1:c.instructions+=4;goto B4e54d1;
case 0x4e54d7:c.instructions+=3;goto B4e54d7;
case 0x4e54d9:c.instructions+=2;goto B4e54d9;
case 0x4e54dc:c.instructions+=1;goto B4e54dc;
case 0x4e54e2:goto L4e54e2;
case 0x4e54e5:c.instructions+=10;goto B4e54e5;
case 0x4e54e7:c.instructions+=9;goto B4e54e7;
case 0x4e54ec:c.instructions+=8;goto B4e54ec;
case 0x4e54f1:c.instructions+=7;goto B4e54f1;
case 0x4e54f6:c.instructions+=6;goto B4e54f6;
case 0x4e54fd:c.instructions+=5;goto B4e54fd;
case 0x4e5500:c.instructions+=4;goto B4e5500;
case 0x4e5502:c.instructions+=3;goto B4e5502;
case 0x4e5503:c.instructions+=2;goto B4e5503;
case 0x4e5505:c.instructions+=1;goto B4e5505;
case 0x4e550a:goto L4e550a;
case 0x4e550b:c.instructions+=5;goto B4e550b;
case 0x4e550c:c.instructions+=4;goto B4e550c;
case 0x4e550d:c.instructions+=3;goto B4e550d;
case 0x4e550f:c.instructions+=2;goto B4e550f;
case 0x4e5510:c.instructions+=1;goto B4e5510;
case 0x4e5513:goto L4e5513;
case 0x4e5519:c.instructions+=1;goto B4e5519;
case 0x4e551e:goto L4e551e;
case 0x4e5520:c.instructions+=1;goto B4e5520;
case 0x4e5526:goto L4e5526;
case 0x4e5529:c.instructions+=4;goto B4e5529;
case 0x4e552c:c.instructions+=3;goto B4e552c;
case 0x4e552d:c.instructions+=2;goto B4e552d;
case 0x4e552f:c.instructions+=1;goto B4e552f;
case 0x4e5534:goto L4e5534;
case 0x4e5537:c.instructions+=1;goto B4e5537;
case 0x4e553d:goto L4e553d;
case 0x4e553f:c.instructions+=1;goto B4e553f;
case 0x4e5544:goto L4e5544;
case 0x4e5546:c.instructions+=1;goto B4e5546;
case 0x4e554b:goto L4e554b;
case 0x4e5551:c.instructions+=1;goto B4e5551;
case 0x4e5557:goto L4e5557;
case 0x4e555d:c.instructions+=1;goto B4e555d;
case 0x4e5562:goto L4e5562;
case 0x4e5564:c.instructions+=1;goto B4e5564;
case 0x4e556a:goto L4e556a;
case 0x4e5571:c.instructions+=1;goto B4e5571;
case 0x4e5577:goto L4e5577;
case 0x4e557c:c.instructions+=2;goto B4e557c;
case 0x4e557e:c.instructions+=1;goto B4e557e;
case 0x4e5580:goto L4e5580;
case 0x4e5583:c.instructions+=9;goto B4e5583;
case 0x4e5588:c.instructions+=8;goto B4e5588;
case 0x4e558a:c.instructions+=7;goto B4e558a;
case 0x4e558c:c.instructions+=6;goto B4e558c;
case 0x4e5591:c.instructions+=5;goto B4e5591;
case 0x4e5596:c.instructions+=4;goto B4e5596;
case 0x4e559b:c.instructions+=3;goto B4e559b;
case 0x4e55a0:c.instructions+=2;goto B4e55a0;
case 0x4e55a1:c.instructions+=1;goto B4e55a1;
case 0x4e55a6:goto L4e55a6;
case 0x4e55a9:c.instructions+=6;goto B4e55a9;
case 0x4e55aa:c.instructions+=5;goto B4e55aa;
case 0x4e55ab:c.instructions+=4;goto B4e55ab;
case 0x4e55ac:c.instructions+=3;goto B4e55ac;
case 0x4e55ae:c.instructions+=2;goto B4e55ae;
case 0x4e55af:c.instructions+=1;goto B4e55af;
case 0x4e55b2:goto L4e55b2;
case 0x4e55b5:c.instructions+=9;goto B4e55b5;
case 0x4e55ba:c.instructions+=8;goto B4e55ba;
case 0x4e55bc:c.instructions+=7;goto B4e55bc;
case 0x4e55be:c.instructions+=6;goto B4e55be;
case 0x4e55c3:c.instructions+=5;goto B4e55c3;
case 0x4e55c8:c.instructions+=4;goto B4e55c8;
case 0x4e55cd:c.instructions+=3;goto B4e55cd;
case 0x4e55d2:c.instructions+=2;goto B4e55d2;
case 0x4e55d3:c.instructions+=1;goto B4e55d3;
case 0x4e55d8:goto L4e55d8;
case 0x4e55db:c.instructions+=6;goto B4e55db;
case 0x4e55dc:c.instructions+=5;goto B4e55dc;
case 0x4e55dd:c.instructions+=4;goto B4e55dd;
case 0x4e55de:c.instructions+=3;goto B4e55de;
case 0x4e55e0:c.instructions+=2;goto B4e55e0;
case 0x4e55e1:c.instructions+=1;goto B4e55e1;
case 0x4e55e4:goto L4e55e4;
case 0x4e55ea:c.instructions+=1;goto B4e55ea;
case 0x4e55ef:goto L4e55ef;
case 0x4e55f1:c.instructions+=1;goto B4e55f1;
case 0x4e55f7:goto L4e55f7;
case 0x4e55fa:c.instructions+=2;goto B4e55fa;
case 0x4e55fc:c.instructions+=1;goto B4e55fc;
case 0x4e5601:goto L4e5601;
case 0x4e5603:goto L4e5603;
case 0x4e5605:c.instructions+=1;goto B4e5605;
case 0x4e560a:goto L4e560a;
case 0x4e560d:c.instructions+=3;goto B4e560d;
case 0x4e560e:c.instructions+=2;goto B4e560e;
case 0x4e5610:c.instructions+=1;goto B4e5610;
case 0x4e5615:goto L4e5615;
case 0x4e561b:c.instructions+=6;goto B4e561b;
case 0x4e561c:c.instructions+=5;goto B4e561c;
case 0x4e561d:c.instructions+=4;goto B4e561d;
case 0x4e561e:c.instructions+=3;goto B4e561e;
case 0x4e5620:c.instructions+=2;goto B4e5620;
case 0x4e5621:c.instructions+=1;goto B4e5621;
case 0x4e5624:goto L4e5624;
case 0x4e562a:c.instructions+=1;goto B4e562a;
case 0x4e5630:goto L4e5630;
case 0x4e5636:goto L4e5636;
case 0x4e563c:c.instructions+=1;goto B4e563c;
case 0x4e5642:goto L4e5642;
case 0x4e5648:goto L4e5648;
case 0x4e564e:c.instructions+=1;goto B4e564e;
case 0x4e5650:goto L4e5650;
case 0x4e5656:c.instructions+=1;goto B4e5656;
case 0x4e565c:goto L4e565c;
case 0x4e565f:c.instructions+=5;goto B4e565f;
case 0x4e5661:c.instructions+=4;goto B4e5661;
case 0x4e5666:c.instructions+=3;goto B4e5666;
case 0x4e566b:c.instructions+=2;goto B4e566b;
case 0x4e566c:c.instructions+=1;goto B4e566c;
case 0x4e5671:goto L4e5671;
case 0x4e5676:c.instructions+=3;goto B4e5676;
case 0x4e5679:c.instructions+=2;goto B4e5679;
case 0x4e567b:c.instructions+=1;goto B4e567b;
case 0x4e5681:goto L4e5681;
case 0x4e5684:c.instructions+=7;goto B4e5684;
case 0x4e5686:c.instructions+=6;goto B4e5686;
case 0x4e568b:c.instructions+=5;goto B4e568b;
case 0x4e5690:c.instructions+=4;goto B4e5690;
case 0x4e5691:c.instructions+=3;goto B4e5691;
case 0x4e5698:c.instructions+=2;goto B4e5698;
case 0x4e569f:c.instructions+=1;goto B4e569f;
case 0x4e56a4:goto L4e56a4;
case 0x4e56a7:c.instructions+=6;goto B4e56a7;
case 0x4e56a8:c.instructions+=5;goto B4e56a8;
case 0x4e56a9:c.instructions+=4;goto B4e56a9;
case 0x4e56aa:c.instructions+=3;goto B4e56aa;
case 0x4e56ac:c.instructions+=2;goto B4e56ac;
case 0x4e56ad:c.instructions+=1;goto B4e56ad;
case 0x4e56b0:goto L4e56b0;
case 0x4e56b6:c.instructions+=1;goto B4e56b6;
case 0x4e56bb:goto L4e56bb;
case 0x4e56bd:c.instructions+=1;goto B4e56bd;
case 0x4e56bf:goto L4e56bf;
case 0x4e56c2:c.instructions+=4;goto B4e56c2;
case 0x4e56c5:c.instructions+=3;goto B4e56c5;
case 0x4e56c6:c.instructions+=2;goto B4e56c6;
case 0x4e56c8:c.instructions+=1;goto B4e56c8;
case 0x4e56cd:goto L4e56cd;
case 0x4e56cf:c.instructions+=2;goto B4e56cf;
case 0x4e56d1:c.instructions+=1;goto B4e56d1;
case 0x4e56d6:goto L4e56d6;
case 0x4e56d9:c.instructions+=3;goto B4e56d9;
case 0x4e56da:c.instructions+=2;goto B4e56da;
case 0x4e56dc:c.instructions+=1;goto B4e56dc;
case 0x4e56e1:goto L4e56e1;
case 0x4e56e3:c.instructions+=1;goto B4e56e3;
case 0x4e56e5:goto L4e56e5;
case 0x4e56e7:c.instructions+=2;goto B4e56e7;
case 0x4e56e9:c.instructions+=1;goto B4e56e9;
case 0x4e56ee:goto L4e56ee;
case 0x4e56f1:c.instructions+=3;goto B4e56f1;
case 0x4e56f6:c.instructions+=2;goto B4e56f6;
case 0x4e56f7:c.instructions+=1;goto B4e56f7;
case 0x4e56fc:goto L4e56fc;
case 0x4e56fd:c.instructions+=1;goto B4e56fd;
case 0x4e5702:goto L4e5702;
case 0x4e5705:c.instructions+=2;goto B4e5705;
case 0x4e5707:c.instructions+=1;goto B4e5707;
case 0x4e5709:goto L4e5709;
case 0x4e570c:c.instructions+=3;goto B4e570c;
case 0x4e570d:c.instructions+=2;goto B4e570d;
case 0x4e5712:c.instructions+=1;goto B4e5712;
case 0x4e5717:goto L4e5717;
case 0x4e571a:goto L4e571a;
case 0x4e5720:c.instructions+=1;goto B4e5720;
case 0x4e5725:goto L4e5725;
case 0x4e572b:c.instructions+=2;goto B4e572b;
case 0x4e572c:c.instructions+=1;goto B4e572c;
case 0x4e5731:goto L4e5731;
case 0x4e5734:c.instructions+=2;goto B4e5734;
case 0x4e5736:c.instructions+=1;goto B4e5736;
case 0x4e5738:goto L4e5738;
case 0x4e573d:c.instructions+=8;goto B4e573d;
case 0x4e5743:c.instructions+=7;goto B4e5743;
case 0x4e5747:c.instructions+=6;goto B4e5747;
case 0x4e574b:c.instructions+=5;goto B4e574b;
case 0x4e5751:c.instructions+=4;goto B4e5751;
case 0x4e5757:c.instructions+=3;goto B4e5757;
case 0x4e5759:c.instructions+=2;goto B4e5759;
case 0x4e575c:c.instructions+=1;goto B4e575c;
case 0x4e5762:goto L4e5762;
case 0x4e5764:c.instructions+=8;goto B4e5764;
case 0x4e5769:c.instructions+=7;goto B4e5769;
case 0x4e576e:c.instructions+=6;goto B4e576e;
case 0x4e5773:c.instructions+=5;goto B4e5773;
case 0x4e5775:c.instructions+=4;goto B4e5775;
case 0x4e577a:c.instructions+=3;goto B4e577a;
case 0x4e577c:c.instructions+=2;goto B4e577c;
case 0x4e5783:c.instructions+=1;goto B4e5783;
case 0x4e5788:goto L4e5788;
case 0x4e578a:goto L4e578a;
case 0x4e5790:c.instructions+=3;goto B4e5790;
case 0x4e5796:c.instructions+=2;goto B4e5796;
case 0x4e5797:c.instructions+=1;goto B4e5797;
case 0x4e579c:goto L4e579c;
case 0x4e579f:c.instructions+=2;goto B4e579f;
case 0x4e57a1:c.instructions+=1;goto B4e57a1;
case 0x4e57a3:goto L4e57a3;
case 0x4e57a5:c.instructions+=1;goto B4e57a5;
case 0x4e57aa:goto L4e57aa;
case 0x4e57ac:goto L4e57ac;
case 0x4e57b2:c.instructions+=2;goto B4e57b2;
case 0x4e57b3:c.instructions+=1;goto B4e57b3;
case 0x4e57b8:goto L4e57b8;
case 0x4e57bb:c.instructions+=2;goto B4e57bb;
case 0x4e57bd:c.instructions+=1;goto B4e57bd;
case 0x4e57bf:goto L4e57bf;
case 0x4e57c1:c.instructions+=1;goto B4e57c1;
case 0x4e57c6:goto L4e57c6;
case 0x4e57cc:c.instructions+=3;goto B4e57cc;
case 0x4e57cf:c.instructions+=2;goto B4e57cf;
case 0x4e57d2:c.instructions+=1;goto B4e57d2;
case 0x4e57d4:goto L4e57d4;
case 0x4e57db:c.instructions+=1;goto B4e57db;
case 0x4e57e2:goto L4e57e2;
case 0x4e57e8:c.instructions+=1;goto B4e57e8;
case 0x4e57ed:goto L4e57ed;
case 0x4e57ef:goto L4e57ef;
case 0x4e57f5:c.instructions+=1;goto B4e57f5;
case 0x4e57fa:goto L4e57fa;
case 0x4e57fe:c.instructions+=2;goto B4e57fe;
case 0x4e57ff:c.instructions+=1;goto B4e57ff;
case 0x4e5804:goto L4e5804;
case 0x4e5808:c.instructions+=5;goto B4e5808;
case 0x4e580e:c.instructions+=4;goto B4e580e;
case 0x4e5811:c.instructions+=3;goto B4e5811;
case 0x4e5813:c.instructions+=2;goto B4e5813;
case 0x4e5816:c.instructions+=1;goto B4e5816;
case 0x4e581c:goto L4e581c;
case 0x4e5820:c.instructions+=4;goto B4e5820;
case 0x4e5826:c.instructions+=3;goto B4e5826;
case 0x4e5828:c.instructions+=2;goto B4e5828;
case 0x4e582b:c.instructions+=1;goto B4e582b;
case 0x4e5831:goto L4e5831;
case 0x4e5835:c.instructions+=4;goto B4e5835;
case 0x4e583b:c.instructions+=3;goto B4e583b;
case 0x4e583d:c.instructions+=2;goto B4e583d;
case 0x4e5840:c.instructions+=1;goto B4e5840;
case 0x4e5846:goto L4e5846;
case 0x4e584c:c.instructions+=1;goto B4e584c;
case 0x4e5851:goto L4e5851;
case 0x4e5852:c.instructions+=5;goto B4e5852;
case 0x4e5853:c.instructions+=4;goto B4e5853;
case 0x4e5854:c.instructions+=3;goto B4e5854;
case 0x4e5856:c.instructions+=2;goto B4e5856;
case 0x4e5857:c.instructions+=1;goto B4e5857;
case 0x4e585a:goto L4e585a;
case 0x4e585f:c.instructions+=9;goto B4e585f;
case 0x4e5865:c.instructions+=8;goto B4e5865;
case 0x4e5867:c.instructions+=7;goto B4e5867;
case 0x4e586b:c.instructions+=6;goto B4e586b;
case 0x4e586f:c.instructions+=5;goto B4e586f;
case 0x4e5875:c.instructions+=4;goto B4e5875;
case 0x4e587b:c.instructions+=3;goto B4e587b;
case 0x4e587d:c.instructions+=2;goto B4e587d;
case 0x4e5880:c.instructions+=1;goto B4e5880;
case 0x4e5886:goto L4e5886;
case 0x4e5888:c.instructions+=3;goto B4e5888;
case 0x4e588d:c.instructions+=2;goto B4e588d;
case 0x4e5892:c.instructions+=1;goto B4e5892;
case 0x4e5897:goto L4e5897;
case 0x4e589a:c.instructions+=6;goto B4e589a;
case 0x4e589b:c.instructions+=5;goto B4e589b;
case 0x4e58a0:c.instructions+=4;goto B4e58a0;
case 0x4e58a2:c.instructions+=3;goto B4e58a2;
case 0x4e58a7:c.instructions+=2;goto B4e58a7;
case 0x4e58a9:c.instructions+=1;goto B4e58a9;
case 0x4e58ae:goto L4e58ae;
case 0x4e58af:c.instructions+=5;goto B4e58af;
case 0x4e58b0:c.instructions+=4;goto B4e58b0;
case 0x4e58b1:c.instructions+=3;goto B4e58b1;
case 0x4e58b3:c.instructions+=2;goto B4e58b3;
case 0x4e58b4:c.instructions+=1;goto B4e58b4;
case 0x4e58b7:goto L4e58b7;
case 0x4e58bd:c.instructions+=1;goto B4e58bd;
case 0x4e58c3:goto L4e58c3;
case 0x4e58c9:c.instructions+=1;goto B4e58c9;
case 0x4e58cf:goto L4e58cf;
case 0x4e58d2:c.instructions+=4;goto B4e58d2;
case 0x4e58d5:c.instructions+=3;goto B4e58d5;
case 0x4e58d6:c.instructions+=2;goto B4e58d6;
case 0x4e58d8:c.instructions+=1;goto B4e58d8;
case 0x4e58dd:goto L4e58dd;
case 0x4e58e0:c.instructions+=1;goto B4e58e0;
case 0x4e58e2:goto L4e58e2;
case 0x4e58e8:c.instructions+=1;goto B4e58e8;
case 0x4e58ed:goto L4e58ed;
case 0x4e58ef:c.instructions+=1;goto B4e58ef;
case 0x4e58f1:goto L4e58f1;
case 0x4e58f3:c.instructions+=1;goto B4e58f3;
case 0x4e58f8:goto L4e58f8;
case 0x4e58fa:c.instructions+=1;goto B4e58fa;
case 0x4e58ff:goto L4e58ff;
case 0x4e5902:c.instructions+=3;goto B4e5902;
case 0x4e5903:c.instructions+=2;goto B4e5903;
case 0x4e5905:c.instructions+=1;goto B4e5905;
case 0x4e590a:goto L4e590a;
case 0x4e5910:goto L4e5910;
case 0x4e5916:c.instructions+=2;goto B4e5916;
case 0x4e5918:c.instructions+=1;goto B4e5918;
case 0x4e591a:goto L4e591a;
case 0x4e591d:c.instructions+=2;goto B4e591d;
case 0x4e591f:c.instructions+=1;goto B4e591f;
case 0x4e5921:goto L4e5921;
case 0x4e5927:c.instructions+=2;goto B4e5927;
case 0x4e5929:c.instructions+=1;goto B4e5929;
case 0x4e592b:goto L4e592b;
case 0x4e592c:c.instructions+=2;goto B4e592c;
case 0x4e592e:c.instructions+=1;goto B4e592e;
case 0x4e5933:goto L4e5933;
case 0x4e5935:goto L4e5935;
case 0x4e593c:goto L4e593c;
case 0x4e5942:c.instructions+=2;goto B4e5942;
case 0x4e5944:c.instructions+=1;goto B4e5944;
case 0x4e5946:goto L4e5946;
case 0x4e5947:c.instructions+=1;goto B4e5947;
case 0x4e594c:goto L4e594c;
case 0x4e594f:goto L4e594f;
case 0x4e5951:c.instructions+=1;goto B4e5951;
case 0x4e5956:goto L4e5956;
case 0x4e595c:c.instructions+=2;goto B4e595c;
case 0x4e595e:c.instructions+=1;goto B4e595e;
case 0x4e5964:goto L4e5964;
case 0x4e5967:c.instructions+=4;goto B4e5967;
case 0x4e596c:c.instructions+=3;goto B4e596c;
case 0x4e5971:c.instructions+=2;goto B4e5971;
case 0x4e5972:c.instructions+=1;goto B4e5972;
case 0x4e5977:goto L4e5977;
case 0x4e597a:c.instructions+=2;goto B4e597a;
case 0x4e597c:c.instructions+=1;goto B4e597c;
case 0x4e5982:goto L4e5982;
case 0x4e5988:c.instructions+=2;goto B4e5988;
case 0x4e598b:c.instructions+=1;goto B4e598b;
case 0x4e598d:goto L4e598d;
case 0x4e5990:c.instructions+=4;goto B4e5990;
case 0x4e5995:c.instructions+=3;goto B4e5995;
case 0x4e599a:c.instructions+=2;goto B4e599a;
case 0x4e599b:c.instructions+=1;goto B4e599b;
case 0x4e59a0:goto L4e59a0;
case 0x4e59a6:c.instructions+=6;goto B4e59a6;
case 0x4e59a9:c.instructions+=5;goto B4e59a9;
case 0x4e59aa:c.instructions+=4;goto B4e59aa;
case 0x4e59ac:c.instructions+=3;goto B4e59ac;
case 0x4e59af:c.instructions+=2;goto B4e59af;
case 0x4e59b5:c.instructions+=1;goto B4e59b5;
case 0x4e59b7:goto L4e59b7;
case 0x4e59bc:c.instructions+=2;goto B4e59bc;
case 0x4e59be:c.instructions+=1;goto B4e59be;
case 0x4e59c0:goto L4e59c0;
case 0x4e59c2:c.instructions+=1;goto B4e59c2;
case 0x4e59c7:goto L4e59c7;
case 0x4e59c9:goto L4e59c9;
case 0x4e59cc:c.instructions+=5;goto B4e59cc;
case 0x4e59cd:c.instructions+=4;goto B4e59cd;
case 0x4e59d0:c.instructions+=3;goto B4e59d0;
case 0x4e59d5:c.instructions+=2;goto B4e59d5;
case 0x4e59db:c.instructions+=1;goto B4e59db;
case 0x4e59e0:goto L4e59e0;
case 0x4e59e3:c.instructions+=4;goto B4e59e3;
case 0x4e59e4:c.instructions+=3;goto B4e59e4;
case 0x4e59e9:c.instructions+=2;goto B4e59e9;
case 0x4e59ea:c.instructions+=1;goto B4e59ea;
case 0x4e59ef:goto L4e59ef;
case 0x4e59f2:goto L4e59f2;
case 0x4e59f5:c.instructions+=5;goto B4e59f5;
case 0x4e59f7:c.instructions+=4;goto B4e59f7;
case 0x4e59fc:c.instructions+=3;goto B4e59fc;
case 0x4e5a01:c.instructions+=2;goto B4e5a01;
case 0x4e5a02:c.instructions+=1;goto B4e5a02;
case 0x4e5a07:goto L4e5a07;
case 0x4e5a0a:goto L4e5a0a;
case 0x4e5a10:c.instructions+=2;goto B4e5a10;
case 0x4e5a12:c.instructions+=1;goto B4e5a12;
case 0x4e5a18:goto L4e5a18;
case 0x4e5a1e:c.instructions+=7;goto B4e5a1e;
case 0x4e5a24:c.instructions+=6;goto B4e5a24;
case 0x4e5a2a:c.instructions+=5;goto B4e5a2a;
case 0x4e5a30:c.instructions+=4;goto B4e5a30;
case 0x4e5a32:c.instructions+=3;goto B4e5a32;
case 0x4e5a34:c.instructions+=2;goto B4e5a34;
case 0x4e5a37:c.instructions+=1;goto B4e5a37;
case 0x4e5a3d:goto L4e5a3d;
case 0x4e5a43:c.instructions+=3;goto B4e5a43;
case 0x4e5a45:c.instructions+=2;goto B4e5a45;
case 0x4e5a4c:c.instructions+=1;goto B4e5a4c;
case 0x4e5a4e:goto L4e5a4e;
case 0x4e5a4f:c.instructions+=1;goto B4e5a4f;
case 0x4e5a54:goto L4e5a54;
case 0x4e5a57:c.instructions+=1;goto B4e5a57;
case 0x4e5a61:goto L4e5a61;
case 0x4e5a64:c.instructions+=2;goto B4e5a64;
case 0x4e5a69:c.instructions+=1;goto B4e5a69;
case 0x4e5a6e:goto L4e5a6e;
case 0x4e5a70:c.instructions+=5;goto B4e5a70;
case 0x4e5a72:c.instructions+=4;goto B4e5a72;
case 0x4e5a77:c.instructions+=3;goto B4e5a77;
case 0x4e5a7c:c.instructions+=2;goto B4e5a7c;
case 0x4e5a7d:c.instructions+=1;goto B4e5a7d;
case 0x4e5a82:goto L4e5a82;
case 0x4e5a83:c.instructions+=6;goto B4e5a83;
case 0x4e5a88:c.instructions+=5;goto B4e5a88;
case 0x4e5a8d:c.instructions+=4;goto B4e5a8d;
case 0x4e5a92:c.instructions+=3;goto B4e5a92;
case 0x4e5a97:c.instructions+=2;goto B4e5a97;
case 0x4e5a98:c.instructions+=1;goto B4e5a98;
case 0x4e5a9d:goto L4e5a9d;
case 0x4e5aa0:c.instructions+=3;goto B4e5aa0;
case 0x4e5aa2:c.instructions+=2;goto B4e5aa2;
case 0x4e5aa7:c.instructions+=1;goto B4e5aa7;
case 0x4e5aac:goto L4e5aac;
case 0x4e5aad:c.instructions+=5;goto B4e5aad;
case 0x4e5aae:c.instructions+=4;goto B4e5aae;
case 0x4e5aaf:c.instructions+=3;goto B4e5aaf;
case 0x4e5ab1:c.instructions+=2;goto B4e5ab1;
case 0x4e5ab2:c.instructions+=1;goto B4e5ab2;
case 0x4e5ab5:goto L4e5ab5;
case 0x4e5ab8:c.instructions+=3;goto B4e5ab8;
case 0x4e5ab9:c.instructions+=2;goto B4e5ab9;
case 0x4e5abb:c.instructions+=1;goto B4e5abb;
case 0x4e5ac0:goto L4e5ac0;
case 0x4e5ac1:c.instructions+=5;goto B4e5ac1;
case 0x4e5ac2:c.instructions+=4;goto B4e5ac2;
case 0x4e5ac3:c.instructions+=3;goto B4e5ac3;
case 0x4e5ac5:c.instructions+=2;goto B4e5ac5;
case 0x4e5ac6:c.instructions+=1;goto B4e5ac6;
case 0x4e5ac9:goto L4e5ac9;
case 0x4e5ad3:c.instructions+=1;goto B4e5ad3;
case 0x4e5ad5:goto L4e5ad5;
case 0x4e5adb:c.instructions+=1;goto B4e5adb;
case 0x4e5ae0:goto L4e5ae0;
case 0x4e5ae2:c.instructions+=2;goto B4e5ae2;
case 0x4e5ae9:c.instructions+=1;goto B4e5ae9;
case 0x4e5aeb:goto L4e5aeb;
case 0x4e5af2:goto L4e5af2;
case 0x4e5af5:c.instructions+=9;goto B4e5af5;
case 0x4e5af7:c.instructions+=8;goto B4e5af7;
case 0x4e5afc:c.instructions+=7;goto B4e5afc;
case 0x4e5b01:c.instructions+=6;goto B4e5b01;
case 0x4e5b02:c.instructions+=5;goto B4e5b02;
case 0x4e5b09:c.instructions+=4;goto B4e5b09;
case 0x4e5b10:c.instructions+=3;goto B4e5b10;
case 0x4e5b17:c.instructions+=2;goto B4e5b17;
case 0x4e5b1e:c.instructions+=1;goto B4e5b1e;
case 0x4e5b23:goto L4e5b23;
case 0x4e5b26:c.instructions+=4;goto B4e5b26;
case 0x4e5b2b:c.instructions+=3;goto B4e5b2b;
case 0x4e5b30:c.instructions+=2;goto B4e5b30;
case 0x4e5b31:c.instructions+=1;goto B4e5b31;
case 0x4e5b36:goto L4e5b36;
case 0x4e5b39:c.instructions+=4;goto B4e5b39;
case 0x4e5b3b:c.instructions+=3;goto B4e5b3b;
case 0x4e5b3d:c.instructions+=2;goto B4e5b3d;
case 0x4e5b3f:c.instructions+=1;goto B4e5b3f;
case 0x4e5b44:goto L4e5b44;
case 0x4e5b46:c.instructions+=2;goto B4e5b46;
case 0x4e5b48:c.instructions+=1;goto B4e5b48;
case 0x4e5b4d:goto L4e5b4d;
case 0x4e5b4e:c.instructions+=5;goto B4e5b4e;
case 0x4e5b4f:c.instructions+=4;goto B4e5b4f;
case 0x4e5b50:c.instructions+=3;goto B4e5b50;
case 0x4e5b52:c.instructions+=2;goto B4e5b52;
case 0x4e5b53:c.instructions+=1;goto B4e5b53;
case 0x4e5b56:goto L4e5b56;
case 0x4e5b5c:c.instructions+=1;goto B4e5b5c;
case 0x4e5b62:goto L4e5b62;
case 0x4e5b64:goto L4e5b64;
case 0x4e5b6a:c.instructions+=1;goto B4e5b6a;
case 0x4e5b6c:goto L4e5b6c;
case 0x4e5b72:c.instructions+=1;goto B4e5b72;
case 0x4e5b78:goto L4e5b78;
case 0x4e5b7e:c.instructions+=1;goto B4e5b7e;
case 0x4e5b83:goto L4e5b83;
case 0x4e5b84:c.instructions+=5;goto B4e5b84;
case 0x4e5b85:c.instructions+=4;goto B4e5b85;
case 0x4e5b86:c.instructions+=3;goto B4e5b86;
case 0x4e5b88:c.instructions+=2;goto B4e5b88;
case 0x4e5b89:c.instructions+=1;goto B4e5b89;
case 0x4e5b8c:goto L4e5b8c;
case 0x4e5b8d:c.instructions+=5;goto B4e5b8d;
case 0x4e5b92:c.instructions+=4;goto B4e5b92;
case 0x4e5b98:c.instructions+=3;goto B4e5b98;
case 0x4e5b99:c.instructions+=2;goto B4e5b99;
case 0x4e5b9e:c.instructions+=1;goto B4e5b9e;
case 0x4e5ba3:goto L4e5ba3;
case 0x4e5ba5:c.instructions+=1;goto B4e5ba5;
case 0x4e5baa:goto L4e5baa;
case 0x4e5bad:c.instructions+=4;goto B4e5bad;
case 0x4e5bb2:c.instructions+=3;goto B4e5bb2;
case 0x4e5bb7:c.instructions+=2;goto B4e5bb7;
case 0x4e5bb8:c.instructions+=1;goto B4e5bb8;
case 0x4e5bbd:goto L4e5bbd;
case 0x4e5bc0:c.instructions+=7;goto B4e5bc0;
case 0x4e5bc6:c.instructions+=6;goto B4e5bc6;
case 0x4e5bc7:c.instructions+=5;goto B4e5bc7;
case 0x4e5bc8:c.instructions+=4;goto B4e5bc8;
case 0x4e5bc9:c.instructions+=3;goto B4e5bc9;
case 0x4e5bcb:c.instructions+=2;goto B4e5bcb;
case 0x4e5bcc:c.instructions+=1;goto B4e5bcc;
case 0x4e5bcf:goto L4e5bcf;
case 0x4e5bd9:c.instructions+=1;goto B4e5bd9;
case 0x4e5bdb:goto L4e5bdb;
case 0x4e5be1:c.instructions+=1;goto B4e5be1;
case 0x4e5be6:goto L4e5be6;
case 0x4e5be8:c.instructions+=2;goto B4e5be8;
case 0x4e5bef:c.instructions+=1;goto B4e5bef;
case 0x4e5bf1:goto L4e5bf1;
case 0x4e5bf8:goto L4e5bf8;
case 0x4e5bfb:c.instructions+=8;goto B4e5bfb;
case 0x4e5bfd:c.instructions+=7;goto B4e5bfd;
case 0x4e5c02:c.instructions+=6;goto B4e5c02;
case 0x4e5c07:c.instructions+=5;goto B4e5c07;
case 0x4e5c08:c.instructions+=4;goto B4e5c08;
case 0x4e5c0f:c.instructions+=3;goto B4e5c0f;
case 0x4e5c16:c.instructions+=2;goto B4e5c16;
case 0x4e5c1d:c.instructions+=1;goto B4e5c1d;
case 0x4e5c22:goto L4e5c22;
case 0x4e5c28:c.instructions+=4;goto B4e5c28;
case 0x4e5c2b:c.instructions+=3;goto B4e5c2b;
case 0x4e5c2e:c.instructions+=2;goto B4e5c2e;
case 0x4e5c30:c.instructions+=1;goto B4e5c30;
case 0x4e5c32:goto L4e5c32;
case 0x4e5c37:c.instructions+=3;goto B4e5c37;
case 0x4e5c39:c.instructions+=2;goto B4e5c39;
case 0x4e5c3e:c.instructions+=1;goto B4e5c3e;
case 0x4e5c42:goto L4e5c42;
case 0x4e5c44:goto L4e5c44;
case 0x4e5c46:c.instructions+=3;goto B4e5c46;
case 0x4e5c48:c.instructions+=2;goto B4e5c48;
case 0x4e5c49:c.instructions+=1;goto B4e5c49;
case 0x4e5c4e:goto L4e5c4e;
case 0x4e5c4f:c.instructions+=5;goto B4e5c4f;
case 0x4e5c54:c.instructions+=4;goto B4e5c54;
case 0x4e5c58:c.instructions+=3;goto B4e5c58;
case 0x4e5c5d:c.instructions+=2;goto B4e5c5d;
case 0x4e5c5e:c.instructions+=1;goto B4e5c5e;
case 0x4e5c63:goto L4e5c63;
case 0x4e5c66:c.instructions+=6;goto B4e5c66;
case 0x4e5c67:c.instructions+=5;goto B4e5c67;
case 0x4e5c69:c.instructions+=4;goto B4e5c69;
case 0x4e5c6f:c.instructions+=3;goto B4e5c6f;
case 0x4e5c70:c.instructions+=2;goto B4e5c70;
case 0x4e5c74:c.instructions+=1;goto B4e5c74;
case 0x4e5c76:goto L4e5c76;
case 0x4e5c77:c.instructions+=4;goto B4e5c77;
case 0x4e5c79:c.instructions+=3;goto B4e5c79;
case 0x4e5c7b:c.instructions+=2;goto B4e5c7b;
case 0x4e5c7d:c.instructions+=1;goto B4e5c7d;
case 0x4e5c82:goto L4e5c82;
case 0x4e5c88:c.instructions+=2;goto B4e5c88;
case 0x4e5c89:c.instructions+=1;goto B4e5c89;
case 0x4e5c8e:goto L4e5c8e;
case 0x4e5c91:c.instructions+=5;goto B4e5c91;
case 0x4e5c96:c.instructions+=4;goto B4e5c96;
case 0x4e5c9b:c.instructions+=3;goto B4e5c9b;
case 0x4e5c9c:c.instructions+=2;goto B4e5c9c;
case 0x4e5ca3:c.instructions+=1;goto B4e5ca3;
case 0x4e5ca8:goto L4e5ca8;
case 0x4e5cab:c.instructions+=4;goto B4e5cab;
case 0x4e5cad:c.instructions+=3;goto B4e5cad;
case 0x4e5caf:c.instructions+=2;goto B4e5caf;
case 0x4e5cb1:c.instructions+=1;goto B4e5cb1;
case 0x4e5cb6:goto L4e5cb6;
case 0x4e5cb8:c.instructions+=2;goto B4e5cb8;
case 0x4e5cba:c.instructions+=1;goto B4e5cba;
case 0x4e5cbf:goto L4e5cbf;
case 0x4e5cc0:c.instructions+=5;goto B4e5cc0;
case 0x4e5cc1:c.instructions+=4;goto B4e5cc1;
case 0x4e5cc2:c.instructions+=3;goto B4e5cc2;
case 0x4e5cc4:c.instructions+=2;goto B4e5cc4;
case 0x4e5cc5:c.instructions+=1;goto B4e5cc5;
case 0x4e5cc8:goto L4e5cc8;
case 0x4e5cce:c.instructions+=1;goto B4e5cce;
case 0x4e5cd0:goto L4e5cd0;
case 0x4e5cd2:c.instructions+=2;goto B4e5cd2;
case 0x4e5cd4:c.instructions+=1;goto B4e5cd4;
case 0x4e5cd9:goto L4e5cd9;
case 0x4e5cda:c.instructions+=5;goto B4e5cda;
case 0x4e5cdb:c.instructions+=4;goto B4e5cdb;
case 0x4e5cdc:c.instructions+=3;goto B4e5cdc;
case 0x4e5cde:c.instructions+=2;goto B4e5cde;
case 0x4e5cdf:c.instructions+=1;goto B4e5cdf;
case 0x4e5d40:goto L4e5d40;
case 0x4e5d42:c.instructions+=12;goto B4e5d42;
case 0x4e5d47:c.instructions+=11;goto B4e5d47;
case 0x4e5d4d:c.instructions+=10;goto B4e5d4d;
case 0x4e5d4e:c.instructions+=9;goto B4e5d4e;
case 0x4e5d55:c.instructions+=8;goto B4e5d55;
case 0x4e5d56:c.instructions+=7;goto B4e5d56;
case 0x4e5d57:c.instructions+=6;goto B4e5d57;
case 0x4e5d58:c.instructions+=5;goto B4e5d58;
case 0x4e5d5c:c.instructions+=4;goto B4e5d5c;
case 0x4e5d5e:c.instructions+=3;goto B4e5d5e;
case 0x4e5d5f:c.instructions+=2;goto B4e5d5f;
case 0x4e5d63:c.instructions+=1;goto B4e5d63;
case 0x4e5d68:goto L4e5d68;
case 0x4e5d6b:c.instructions+=11;goto B4e5d6b;
case 0x4e5d6d:c.instructions+=10;goto B4e5d6d;
case 0x4e5d6f:c.instructions+=9;goto B4e5d6f;
case 0x4e5d71:c.instructions+=8;goto B4e5d71;
case 0x4e5d73:c.instructions+=7;goto B4e5d73;
case 0x4e5d75:c.instructions+=6;goto B4e5d75;
case 0x4e5d77:c.instructions+=5;goto B4e5d77;
case 0x4e5d78:c.instructions+=4;goto B4e5d78;
case 0x4e5d7b:c.instructions+=3;goto B4e5d7b;
case 0x4e5d83:c.instructions+=2;goto B4e5d83;
case 0x4e5d89:c.instructions+=1;goto B4e5d89;
case 0x4e5d8e:goto L4e5d8e;
case 0x4e5d91:c.instructions+=8;goto B4e5d91;
case 0x4e5d93:c.instructions+=7;goto B4e5d93;
case 0x4e5d95:c.instructions+=6;goto B4e5d95;
case 0x4e5d97:c.instructions+=5;goto B4e5d97;
case 0x4e5d9c:c.instructions+=4;goto B4e5d9c;
case 0x4e5d9d:c.instructions+=3;goto B4e5d9d;
case 0x4e5da3:c.instructions+=2;goto B4e5da3;
case 0x4e5da8:c.instructions+=1;goto B4e5da8;
case 0x4e5dad:goto L4e5dad;
case 0x4e5daf:c.instructions+=1;goto B4e5daf;
case 0x4e5db4:goto L4e5db4;
case 0x4e5db7:c.instructions+=2;goto B4e5db7;
case 0x4e5db9:c.instructions+=1;goto B4e5db9;
case 0x4e5dbe:goto L4e5dbe;
case 0x4e5dc1:c.instructions+=3;goto B4e5dc1;
case 0x4e5dc6:c.instructions+=2;goto B4e5dc6;
case 0x4e5dc7:c.instructions+=1;goto B4e5dc7;
case 0x4e5dcc:goto L4e5dcc;
case 0x4e5dcd:c.instructions+=1;goto B4e5dcd;
case 0x4e5dd2:goto L4e5dd2;
case 0x4e5dd5:c.instructions+=3;goto B4e5dd5;
case 0x4e5dda:c.instructions+=2;goto B4e5dda;
case 0x4e5ddb:c.instructions+=1;goto B4e5ddb;
case 0x4e5de0:goto L4e5de0;
case 0x4e5de1:c.instructions+=1;goto B4e5de1;
case 0x4e5de6:goto L4e5de6;
case 0x4e5de9:c.instructions+=3;goto B4e5de9;
case 0x4e5dee:c.instructions+=2;goto B4e5dee;
case 0x4e5def:c.instructions+=1;goto B4e5def;
case 0x4e5df4:goto L4e5df4;
case 0x4e5df5:c.instructions+=1;goto B4e5df5;
case 0x4e5dfa:goto L4e5dfa;
case 0x4e5dfd:c.instructions+=3;goto B4e5dfd;
case 0x4e5e02:c.instructions+=2;goto B4e5e02;
case 0x4e5e03:c.instructions+=1;goto B4e5e03;
case 0x4e5e08:goto L4e5e08;
case 0x4e5e09:c.instructions+=1;goto B4e5e09;
case 0x4e5e0e:goto L4e5e0e;
case 0x4e5e11:c.instructions+=3;goto B4e5e11;
case 0x4e5e16:c.instructions+=2;goto B4e5e16;
case 0x4e5e17:c.instructions+=1;goto B4e5e17;
case 0x4e5e1c:goto L4e5e1c;
case 0x4e5e1d:c.instructions+=1;goto B4e5e1d;
case 0x4e5e22:goto L4e5e22;
case 0x4e5e26:c.instructions+=7;goto B4e5e26;
case 0x4e5e29:c.instructions+=6;goto B4e5e29;
case 0x4e5e2a:c.instructions+=5;goto B4e5e2a;
case 0x4e5e2c:c.instructions+=4;goto B4e5e2c;
case 0x4e5e2d:c.instructions+=3;goto B4e5e2d;
case 0x4e5e34:c.instructions+=2;goto B4e5e34;
case 0x4e5e37:c.instructions+=1;goto B4e5e37;
case 0x4e5e40:goto L4e5e40;
case 0x4e5e41:c.instructions+=2;goto B4e5e41;
case 0x4e5e43:c.instructions+=1;goto B4e5e43;
case 0x4e5e48:goto L4e5e48;
case 0x4e5e4d:c.instructions+=1;goto B4e5e4d;
case 0x4e5e4f:goto L4e5e4f;
case 0x4e5e50:c.instructions+=1;goto B4e5e50;
case 0x4e5e55:goto L4e5e55;
case 0x4e5e58:goto L4e5e58;
case 0x4e5e5a:c.instructions+=2;goto B4e5e5a;
case 0x4e5e5b:c.instructions+=1;goto B4e5e5b;
case 0x4e5e60:goto L4e5e60;
case 0x4e5e62:c.instructions+=12;goto B4e5e62;
case 0x4e5e67:c.instructions+=11;goto B4e5e67;
case 0x4e5e6d:c.instructions+=10;goto B4e5e6d;
case 0x4e5e6e:c.instructions+=9;goto B4e5e6e;
case 0x4e5e75:c.instructions+=8;goto B4e5e75;
case 0x4e5e76:c.instructions+=7;goto B4e5e76;
case 0x4e5e77:c.instructions+=6;goto B4e5e77;
case 0x4e5e78:c.instructions+=5;goto B4e5e78;
case 0x4e5e7c:c.instructions+=4;goto B4e5e7c;
case 0x4e5e7e:c.instructions+=3;goto B4e5e7e;
case 0x4e5e7f:c.instructions+=2;goto B4e5e7f;
case 0x4e5e83:c.instructions+=1;goto B4e5e83;
case 0x4e5e88:goto L4e5e88;
case 0x4e5e8b:c.instructions+=11;goto B4e5e8b;
case 0x4e5e8d:c.instructions+=10;goto B4e5e8d;
case 0x4e5e8f:c.instructions+=9;goto B4e5e8f;
case 0x4e5e91:c.instructions+=8;goto B4e5e91;
case 0x4e5e93:c.instructions+=7;goto B4e5e93;
case 0x4e5e95:c.instructions+=6;goto B4e5e95;
case 0x4e5e97:c.instructions+=5;goto B4e5e97;
case 0x4e5e98:c.instructions+=4;goto B4e5e98;
case 0x4e5e9b:c.instructions+=3;goto B4e5e9b;
case 0x4e5ea3:c.instructions+=2;goto B4e5ea3;
case 0x4e5ea9:c.instructions+=1;goto B4e5ea9;
case 0x4e5eae:goto L4e5eae;
case 0x4e5eb1:c.instructions+=8;goto B4e5eb1;
case 0x4e5eb3:c.instructions+=7;goto B4e5eb3;
case 0x4e5eb5:c.instructions+=6;goto B4e5eb5;
case 0x4e5eb7:c.instructions+=5;goto B4e5eb7;
case 0x4e5ebc:c.instructions+=4;goto B4e5ebc;
case 0x4e5ebd:c.instructions+=3;goto B4e5ebd;
case 0x4e5ec3:c.instructions+=2;goto B4e5ec3;
case 0x4e5ec8:c.instructions+=1;goto B4e5ec8;
case 0x4e5ecd:goto L4e5ecd;
case 0x4e5ecf:c.instructions+=1;goto B4e5ecf;
case 0x4e5ed4:goto L4e5ed4;
case 0x4e5ed7:c.instructions+=2;goto B4e5ed7;
case 0x4e5ed9:c.instructions+=1;goto B4e5ed9;
case 0x4e5ede:goto L4e5ede;
case 0x4e5ee1:c.instructions+=3;goto B4e5ee1;
case 0x4e5ee6:c.instructions+=2;goto B4e5ee6;
case 0x4e5ee7:c.instructions+=1;goto B4e5ee7;
case 0x4e5eec:goto L4e5eec;
case 0x4e5eed:c.instructions+=1;goto B4e5eed;
case 0x4e5ef2:goto L4e5ef2;
case 0x4e5ef5:c.instructions+=3;goto B4e5ef5;
case 0x4e5efa:c.instructions+=2;goto B4e5efa;
case 0x4e5efb:c.instructions+=1;goto B4e5efb;
case 0x4e5f00:goto L4e5f00;
case 0x4e5f01:c.instructions+=1;goto B4e5f01;
case 0x4e5f06:goto L4e5f06;
case 0x4e5f09:c.instructions+=3;goto B4e5f09;
case 0x4e5f0e:c.instructions+=2;goto B4e5f0e;
case 0x4e5f0f:c.instructions+=1;goto B4e5f0f;
case 0x4e5f14:goto L4e5f14;
case 0x4e5f15:c.instructions+=1;goto B4e5f15;
case 0x4e5f1a:goto L4e5f1a;
case 0x4e5f1d:c.instructions+=3;goto B4e5f1d;
case 0x4e5f22:c.instructions+=2;goto B4e5f22;
case 0x4e5f23:c.instructions+=1;goto B4e5f23;
case 0x4e5f28:goto L4e5f28;
case 0x4e5f29:c.instructions+=1;goto B4e5f29;
case 0x4e5f2e:goto L4e5f2e;
case 0x4e5f31:c.instructions+=3;goto B4e5f31;
case 0x4e5f36:c.instructions+=2;goto B4e5f36;
case 0x4e5f37:c.instructions+=1;goto B4e5f37;
case 0x4e5f3c:goto L4e5f3c;
case 0x4e5f3d:c.instructions+=1;goto B4e5f3d;
case 0x4e5f42:goto L4e5f42;
case 0x4e5f46:c.instructions+=7;goto B4e5f46;
case 0x4e5f49:c.instructions+=6;goto B4e5f49;
case 0x4e5f4a:c.instructions+=5;goto B4e5f4a;
case 0x4e5f4c:c.instructions+=4;goto B4e5f4c;
case 0x4e5f4d:c.instructions+=3;goto B4e5f4d;
case 0x4e5f54:c.instructions+=2;goto B4e5f54;
case 0x4e5f57:c.instructions+=1;goto B4e5f57;
case 0x4e5f60:goto L4e5f60;
case 0x4e5f61:c.instructions+=2;goto B4e5f61;
case 0x4e5f63:c.instructions+=1;goto B4e5f63;
case 0x4e5f68:goto L4e5f68;
case 0x4e5f6d:c.instructions+=1;goto B4e5f6d;
case 0x4e5f6f:goto L4e5f6f;
case 0x4e5f70:c.instructions+=1;goto B4e5f70;
case 0x4e5f75:goto L4e5f75;
case 0x4e5f78:goto L4e5f78;
case 0x4e5f7a:c.instructions+=2;goto B4e5f7a;
case 0x4e5f7b:c.instructions+=1;goto B4e5f7b;
case 0x4e5f80:goto L4e5f80;
case 0x4e5f81:c.instructions+=16;goto B4e5f81;
case 0x4e5f83:c.instructions+=15;goto B4e5f83;
case 0x4e5f86:c.instructions+=14;goto B4e5f86;
case 0x4e5f88:c.instructions+=13;goto B4e5f88;
case 0x4e5f8d:c.instructions+=12;goto B4e5f8d;
case 0x4e5f93:c.instructions+=11;goto B4e5f93;
case 0x4e5f94:c.instructions+=10;goto B4e5f94;
case 0x4e5f9b:c.instructions+=9;goto B4e5f9b;
case 0x4e5fa1:c.instructions+=8;goto B4e5fa1;
case 0x4e5fa4:c.instructions+=7;goto B4e5fa4;
case 0x4e5fa5:c.instructions+=6;goto B4e5fa5;
case 0x4e5fa6:c.instructions+=5;goto B4e5fa6;
case 0x4e5fa7:c.instructions+=4;goto B4e5fa7;
case 0x4e5fa9:c.instructions+=3;goto B4e5fa9;
case 0x4e5faa:c.instructions+=2;goto B4e5faa;
case 0x4e5fae:c.instructions+=1;goto B4e5fae;
case 0x4e5fb3:goto L4e5fb3;
case 0x4e5fb5:c.instructions+=19;goto B4e5fb5;
case 0x4e5fbb:c.instructions+=18;goto B4e5fbb;
case 0x4e5fc1:c.instructions+=17;goto B4e5fc1;
case 0x4e5fc8:c.instructions+=16;goto B4e5fc8;
case 0x4e5fca:c.instructions+=15;goto B4e5fca;
case 0x4e5fcd:c.instructions+=14;goto B4e5fcd;
case 0x4e5fd0:c.instructions+=13;goto B4e5fd0;
case 0x4e5fd3:c.instructions+=12;goto B4e5fd3;
case 0x4e5fd6:c.instructions+=11;goto B4e5fd6;
case 0x4e5fd9:c.instructions+=10;goto B4e5fd9;
case 0x4e5fdc:c.instructions+=9;goto B4e5fdc;
case 0x4e5fdf:c.instructions+=8;goto B4e5fdf;
case 0x4e5fe2:c.instructions+=7;goto B4e5fe2;
case 0x4e5fe5:c.instructions+=6;goto B4e5fe5;
case 0x4e5fe8:c.instructions+=5;goto B4e5fe8;
case 0x4e5fed:c.instructions+=4;goto B4e5fed;
case 0x4e5ff2:c.instructions+=3;goto B4e5ff2;
case 0x4e5ff3:c.instructions+=2;goto B4e5ff3;
case 0x4e5ffb:c.instructions+=1;goto B4e5ffb;
default:missing_instruction(c.pc);}
B4e5000:L4e5000:{c.instructions+=1;NFSU2_TR(0x4e5000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5005ull));
TAIL_STATIC(0x537c00u,537);
}
B4e5005:L4e5005:{c.instructions+=4;NFSU2_TR(0x4e5005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e5008:{NFSU2_TR(0x4e5008);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e500a:{NFSU2_TR(0x4e500a);
__builtin_memmove((R+4),(R+24),4);
}
B4e500c:{NFSU2_TR(0x4e500c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5011ull));
TAIL_STATIC(0x4bba20u,4bb);
}
B4e5011:L4e5011:{c.instructions+=6;NFSU2_TR(0x4e5011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5012:{NFSU2_TR(0x4e5012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5013:{NFSU2_TR(0x4e5013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5014:{NFSU2_TR(0x4e5014);
__builtin_memmove((R+16),(R+20),4);
}
B4e5016:{NFSU2_TR(0x4e5016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5017:{NFSU2_TR(0x4e5017);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e501a:L4e501a:{c.instructions+=3;NFSU2_TR(0x4e501a);
__builtin_memmove((R+0),gp(0x838520),1);
}
B4e501f:{NFSU2_TR(0x4e501f);
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
B4e5021:{NFSU2_TR(0x4e5021);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5027:L4e5027:{c.instructions+=2;NFSU2_TR(0x4e5027);
u8 U[4];
w4(U+0,u32(0x78f8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e502c:{NFSU2_TR(0x4e502c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5031ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e5031:L4e5031:{c.instructions+=3;NFSU2_TR(0x4e5031);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e5034:{NFSU2_TR(0x4e5034);
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
B4e5036:{NFSU2_TR(0x4e5036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e503c:L4e503c:{c.instructions+=2;NFSU2_TR(0x4e503c);
u8 U[4];
w4(U+0,u32(0x78fe90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5041:{NFSU2_TR(0x4e5041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5046ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e5046:L4e5046:{c.instructions+=3;NFSU2_TR(0x4e5046);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e5049:{NFSU2_TR(0x4e5049);
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
B4e504b:{NFSU2_TR(0x4e504b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5051:L4e5051:{c.instructions+=3;NFSU2_TR(0x4e5051);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e5057:{NFSU2_TR(0x4e5057);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e505d:{NFSU2_TR(0x4e505d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5062ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4e5062:L4e5062:{c.instructions+=2;NFSU2_TR(0x4e5062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5068:{NFSU2_TR(0x4e5068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e506dull));
TAIL_STATIC(0x582930u,582);
}
B4e506d:L4e506d:{c.instructions+=2;NFSU2_TR(0x4e506d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e506f:{NFSU2_TR(0x4e506f);
if(r1(R+518)){{goto L4e5079;}}
}
B4e5071:L4e5071:{c.instructions+=2;NFSU2_TR(0x4e5071);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5077:{NFSU2_TR(0x4e5077);
{goto L4e507b;}
}
B4e5079:L4e5079:{c.instructions+=1;NFSU2_TR(0x4e5079);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e507b:L4e507b:{c.instructions+=3;NFSU2_TR(0x4e507b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e507d:{NFSU2_TR(0x4e507d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5083:{NFSU2_TR(0x4e5083);
if(r1(R+518)){{goto L4e510f;}}
}
B4e5089:L4e5089:{c.instructions+=2;NFSU2_TR(0x4e5089);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e508b:{NFSU2_TR(0x4e508b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e50ee;}}
}
B4e508d:L4e508d:{c.instructions+=4;NFSU2_TR(0x4e508d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1fcull))));
}
B4e5092:{NFSU2_TR(0x4e5092);
w4(R+28,u32(0x1ull));
}
B4e5097:{NFSU2_TR(0x4e5097);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e509b:{NFSU2_TR(0x4e509b);
{goto L4e50a0;}
}
B4e50a0:L4e50a0:{c.instructions+=5;NFSU2_TR(0x4e50a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e50a4:{NFSU2_TR(0x4e50a4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e50aa:{NFSU2_TR(0x4e50aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e50ad:{NFSU2_TR(0x4e50ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50af:{NFSU2_TR(0x4e50af);
if(r1(R+518)){{goto L4e50b8;}}
}
B4e50b1:L4e50b1:{c.instructions+=2;NFSU2_TR(0x4e50b1);
u8 U[4];
w4(U+0,u32(0x78fea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50b6:{NFSU2_TR(0x4e50b6);
{goto L4e50bd;}
}
B4e50b8:L4e50b8:{c.instructions+=1;NFSU2_TR(0x4e50b8);
u8 U[4];
w4(U+0,u32(0x796078ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50bd:L4e50bd:{c.instructions+=3;NFSU2_TR(0x4e50bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50be:{NFSU2_TR(0x4e50be);
u8 U[4];
w4(U+0,u32(0x78fec8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50c3:{NFSU2_TR(0x4e50c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e50c8ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4e50c8:L4e50c8:{c.instructions+=4;NFSU2_TR(0x4e50c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e50cb:{NFSU2_TR(0x4e50cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50cc:{NFSU2_TR(0x4e50cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50cd:{NFSU2_TR(0x4e50cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e50d2ull));
TAIL_STATIC(0x537c00u,537);
}
B4e50d2:L4e50d2:{c.instructions+=9;NFSU2_TR(0x4e50d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e50d6:{NFSU2_TR(0x4e50d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e50dc:{NFSU2_TR(0x4e50dc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x64ull))));
}
B4e50df:{NFSU2_TR(0x4e50df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e50e2:{NFSU2_TR(0x4e50e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4e50e3:{NFSU2_TR(0x4e50e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e50e6:{NFSU2_TR(0x4e50e6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e50e8:{NFSU2_TR(0x4e50e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e50ec:{NFSU2_TR(0x4e50ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e50a0u);}goto L4e50a0;}}
}
B4e50ee:L4e50ee:{c.instructions+=5;NFSU2_TR(0x4e50ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e50f1:{NFSU2_TR(0x4e50f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50f3:{NFSU2_TR(0x4e50f3);
u8 U[4];
w4(U+0,u32(0x78fea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50f8:{NFSU2_TR(0x4e50f8);
u8 U[4];
w4(U+0,u32(0x796060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e50fd:{NFSU2_TR(0x4e50fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5102ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4e5102:L4e5102:{c.instructions+=4;NFSU2_TR(0x4e5102);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e5105:{NFSU2_TR(0x4e5105);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5106:{NFSU2_TR(0x4e5106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5107:{NFSU2_TR(0x4e5107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e510cull));
TAIL_STATIC(0x537c00u,537);
}
B4e510c:L4e510c:{c.instructions+=1;NFSU2_TR(0x4e510c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e510f:L4e510f:{c.instructions+=3;NFSU2_TR(0x4e510f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e5115:{NFSU2_TR(0x4e5115);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5117:{NFSU2_TR(0x4e5117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5137;}}
}
B4e5119:L4e5119:{c.instructions+=3;NFSU2_TR(0x4e5119);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e511f:{NFSU2_TR(0x4e511f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5121:{NFSU2_TR(0x4e5121);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5137;}}
}
B4e5123:L4e5123:{c.instructions+=7;NFSU2_TR(0x4e5123);
__builtin_memmove((R+4),gp(0x7f44b8),4);
}
B4e5129:{NFSU2_TR(0x4e5129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e512c:{NFSU2_TR(0x4e512c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e512e:{NFSU2_TR(0x4e512e);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5133:{NFSU2_TR(0x4e5133);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5134:{NFSU2_TR(0x4e5134);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5135:{NFSU2_TR(0x4e5135);
{goto L4e5148;}
}
B4e5137:L4e5137:{c.instructions+=6;NFSU2_TR(0x4e5137);
__builtin_memmove((R+0),gp(0x7f44b8),4);
}
B4e513c:{NFSU2_TR(0x4e513c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e513f:{NFSU2_TR(0x4e513f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5141:{NFSU2_TR(0x4e5141);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5146:{NFSU2_TR(0x4e5146);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5147:{NFSU2_TR(0x4e5147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5148:L4e5148:{c.instructions+=1;NFSU2_TR(0x4e5148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e514dull));
TAIL_STATIC(0x5426c0u,542);
}
B4e514d:L4e514d:{c.instructions+=4;NFSU2_TR(0x4e514d);
__builtin_memmove((R+0),gp(0x8500d0),4);
}
B4e5152:{NFSU2_TR(0x4e5152);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e5155:{NFSU2_TR(0x4e5155);
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
B4e5158:{NFSU2_TR(0x4e5158);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e515e:L4e515e:{c.instructions+=3;NFSU2_TR(0x4e515e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5160:{NFSU2_TR(0x4e5160);
__builtin_memmove((R+4),(R+24),4);
}
B4e5162:{NFSU2_TR(0x4e5162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5167ull));
TAIL_STATIC(0x4bba20u,4bb);
}
B4e5167:L4e5167:{c.instructions+=6;NFSU2_TR(0x4e5167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5168:{NFSU2_TR(0x4e5168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5169:{NFSU2_TR(0x4e5169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e516a:{NFSU2_TR(0x4e516a);
__builtin_memmove((R+16),(R+20),4);
}
B4e516c:{NFSU2_TR(0x4e516c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e516d:{NFSU2_TR(0x4e516d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5170:L4e5170:{c.instructions+=2;NFSU2_TR(0x4e5170);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911c0a4bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5176:{NFSU2_TR(0x4e5176);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e5624;}}
}
B4e517c:L4e517c:{c.instructions+=1;NFSU2_TR(0x4e517c);
if(r1(R+518)){{goto L4e55e4;}}
}
B4e5182:L4e5182:{c.instructions+=2;NFSU2_TR(0x4e5182);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x37c873afull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x37c873afull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5188:{NFSU2_TR(0x4e5188);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e5348;}}
}
B4e518e:L4e518e:{c.instructions+=1;NFSU2_TR(0x4e518e);
if(r1(R+518)){{goto L4e5280;}}
}
B4e5194:L4e5194:{c.instructions+=2;NFSU2_TR(0x4e5194);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x2c03fba3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c03fba3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e519a:{NFSU2_TR(0x4e519a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e522f;}}
}
B4e51a0:L4e51a0:{c.instructions+=1;NFSU2_TR(0x4e51a0);
if(r1(R+518)){{goto L4e5213;}}
}
B4e51a2:L4e51a2:{c.instructions+=2;NFSU2_TR(0x4e51a2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ca4ce1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e51a8:{NFSU2_TR(0x4e51a8);
if(r1(R+518)){{goto L4e51ea;}}
}
B4e51aa:L4e51aa:{c.instructions+=2;NFSU2_TR(0x4e51aa);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e51b0:{NFSU2_TR(0x4e51b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e51b6:L4e51b6:{c.instructions+=6;NFSU2_TR(0x4e51b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e51b9:{NFSU2_TR(0x4e51b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e51bc:{NFSU2_TR(0x4e51bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e51bf:{NFSU2_TR(0x4e51bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e51c0:{NFSU2_TR(0x4e51c0);
__builtin_memmove((R+4),(R+28),4);
}
B4e51c2:{NFSU2_TR(0x4e51c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e51c7ull));
TAIL_STATIC(0x51f440u,51f);
}
B4e51c7:L4e51c7:{c.instructions+=2;NFSU2_TR(0x4e51c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e51ca:{NFSU2_TR(0x4e51ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5386;}}
}
B4e51d0:L4e51d0:{c.instructions+=4;NFSU2_TR(0x4e51d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e51d3:{NFSU2_TR(0x4e51d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e51d4:{NFSU2_TR(0x4e51d4);
u8 U[4];
w4(U+0,u32(0xc6f311c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e51d9:{NFSU2_TR(0x4e51d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e51deull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e51de:L4e51de:{c.instructions+=7;NFSU2_TR(0x4e51de);
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
B4e51e1:{NFSU2_TR(0x4e51e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e51e2:{NFSU2_TR(0x4e51e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e51e3:{NFSU2_TR(0x4e51e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e51e4:{NFSU2_TR(0x4e51e4);
__builtin_memmove((R+16),(R+20),4);
}
B4e51e6:{NFSU2_TR(0x4e51e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e51e7:{NFSU2_TR(0x4e51e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e51ea:L4e51ea:{c.instructions+=3;NFSU2_TR(0x4e51ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e51f0:{NFSU2_TR(0x4e51f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e51f1:{NFSU2_TR(0x4e51f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e51f6ull));
TAIL_STATIC(0x540a60u,540);
}
B4e51f6:L4e51f6:{c.instructions+=9;NFSU2_TR(0x4e51f6);
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
B4e51f9:{NFSU2_TR(0x4e51f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e5203:{NFSU2_TR(0x4e5203);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e520a:{NFSU2_TR(0x4e520a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e520b:{NFSU2_TR(0x4e520b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e520c:{NFSU2_TR(0x4e520c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e520d:{NFSU2_TR(0x4e520d);
__builtin_memmove((R+16),(R+20),4);
}
B4e520f:{NFSU2_TR(0x4e520f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5210:{NFSU2_TR(0x4e5210);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5213:L4e5213:{c.instructions+=5;NFSU2_TR(0x4e5213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5216:{NFSU2_TR(0x4e5216);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5218:{NFSU2_TR(0x4e5218);
u8 U[4];
w4(U+0,u32(0x78f240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e521d:{NFSU2_TR(0x4e521d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e521e:{NFSU2_TR(0x4e521e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5223ull));
TAIL_STATIC(0x537980u,537);
}
B4e5223:L4e5223:{c.instructions+=7;NFSU2_TR(0x4e5223);
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
B4e5226:{NFSU2_TR(0x4e5226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5227:{NFSU2_TR(0x4e5227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5228:{NFSU2_TR(0x4e5228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5229:{NFSU2_TR(0x4e5229);
__builtin_memmove((R+16),(R+20),4);
}
B4e522b:{NFSU2_TR(0x4e522b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e522c:{NFSU2_TR(0x4e522c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e522f:L4e522f:{c.instructions+=2;NFSU2_TR(0x4e522f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2c0e485aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5235:{NFSU2_TR(0x4e5235);
if(r1(R+518)){{goto L4e526b;}}
}
B4e5237:L4e5237:{c.instructions+=2;NFSU2_TR(0x4e5237);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e523d:{NFSU2_TR(0x4e523d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5243:L4e5243:{c.instructions+=2;NFSU2_TR(0x4e5243);
__builtin_memmove((R+4),(R+24),4);
}
B4e5245:{NFSU2_TR(0x4e5245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e524aull));
TAIL_STATIC(0x542720u,542);
}
B4e524a:L4e524a:{c.instructions+=6;NFSU2_TR(0x4e524a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e524d:{NFSU2_TR(0x4e524d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e524f:{NFSU2_TR(0x4e524f);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5254:{NFSU2_TR(0x4e5254);
u8 U[4];
w4(U+0,u32(0x7978ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5259:{NFSU2_TR(0x4e5259);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e525a:{NFSU2_TR(0x4e525a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e525full));
TAIL_STATIC(0x5426c0u,542);
}
B4e525f:L4e525f:{c.instructions+=7;NFSU2_TR(0x4e525f);
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
B4e5262:{NFSU2_TR(0x4e5262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5263:{NFSU2_TR(0x4e5263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5264:{NFSU2_TR(0x4e5264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5265:{NFSU2_TR(0x4e5265);
__builtin_memmove((R+16),(R+20),4);
}
B4e5267:{NFSU2_TR(0x4e5267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5268:{NFSU2_TR(0x4e5268);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e526b:L4e526b:{c.instructions+=3;NFSU2_TR(0x4e526b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e526e:{NFSU2_TR(0x4e526e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e526f:{NFSU2_TR(0x4e526f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5274ull));
TAIL_STATIC(0x4a0140u,4a0);
}
B4e5274:L4e5274:{c.instructions+=7;NFSU2_TR(0x4e5274);
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
B4e5277:{NFSU2_TR(0x4e5277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5278:{NFSU2_TR(0x4e5278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5279:{NFSU2_TR(0x4e5279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e527a:{NFSU2_TR(0x4e527a);
__builtin_memmove((R+16),(R+20),4);
}
B4e527c:{NFSU2_TR(0x4e527c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e527d:{NFSU2_TR(0x4e527d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5280:L4e5280:{c.instructions+=2;NFSU2_TR(0x4e5280);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5286:{NFSU2_TR(0x4e5286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e528bull));
TAIL_STATIC(0x582930u,582);
}
B4e528b:L4e528b:{c.instructions+=2;NFSU2_TR(0x4e528b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e528d:{NFSU2_TR(0x4e528d);
if(r1(R+518)){{goto L4e52a2;}}
}
B4e528f:L4e528f:{c.instructions+=2;NFSU2_TR(0x4e528f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5295:{NFSU2_TR(0x4e5295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e529aull));
TAIL_STATIC(0x582930u,582);
}
B4e529a:L4e529a:{c.instructions+=2;NFSU2_TR(0x4e529a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e52a0:{NFSU2_TR(0x4e52a0);
{goto L4e52a4;}
}
B4e52a2:L4e52a2:{c.instructions+=1;NFSU2_TR(0x4e52a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e52a4:L4e52a4:{c.instructions+=3;NFSU2_TR(0x4e52a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e52a5:{NFSU2_TR(0x4e52a5);
w4(R+4,u32(0x89cf48ull));
}
B4e52aa:{NFSU2_TR(0x4e52aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e52afull));
TAIL_STATIC(0x5efea0u,5ef);
}
B4e52af:L4e52af:{c.instructions+=3;NFSU2_TR(0x4e52af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e52b1:{NFSU2_TR(0x4e52b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e52b2:{NFSU2_TR(0x4e52b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e52b7ull));
TAIL_STATIC(0x58fd50u,58f);
}
B4e52b7:L4e52b7:{c.instructions+=5;NFSU2_TR(0x4e52b7);
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
B4e52ba:{NFSU2_TR(0x4e52ba);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e52bc:{NFSU2_TR(0x4e52bc);
w4(R+4,u32(0x850080ull));
}
B4e52c1:{NFSU2_TR(0x4e52c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1181ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e52c8:{NFSU2_TR(0x4e52c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e52cdull));
TAIL_STATIC(0x5031b0u,503);
}
B4e52cd:L4e52cd:{c.instructions+=2;NFSU2_TR(0x4e52cd);
w4(R+4,u32(0x89cf48ull));
}
B4e52d2:{NFSU2_TR(0x4e52d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e52d7ull));
TAIL_STATIC(0x601c80u,601);
}
B4e52d7:L4e52d7:{c.instructions+=2;NFSU2_TR(0x4e52d7);
u8 U[14];
__builtin_memmove((U+6),gp(0x850084),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e52dd:{NFSU2_TR(0x4e52dd);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e52e3:L4e52e3:{c.instructions+=3;NFSU2_TR(0x4e52e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e52e9:{NFSU2_TR(0x4e52e9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e52eb:{NFSU2_TR(0x4e52eb);
if(r1(R+518)){{goto L4e52fc;}}
}
B4e52ed:L4e52ed:{c.instructions+=2;NFSU2_TR(0x4e52ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e52ee:{NFSU2_TR(0x4e52ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e52f3ull));
TAIL_STATIC(0x540a60u,540);
}
B4e52f3:L4e52f3:{c.instructions+=2;NFSU2_TR(0x4e52f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e52f6:{NFSU2_TR(0x4e52f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e52fc:L4e52fc:{c.instructions+=6;NFSU2_TR(0x4e52fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e52ff:{NFSU2_TR(0x4e52ff);
u8 U[4];
w4(U+0,u32(0x9c6e60a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5304:{NFSU2_TR(0x4e5304);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5309:{NFSU2_TR(0x4e5309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e530a:{NFSU2_TR(0x4e530a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5310:{NFSU2_TR(0x4e5310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5315ull));
TAIL_STATIC(0x558330u,558);
}
B4e5315:L4e5315:{c.instructions+=7;NFSU2_TR(0x4e5315);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e531b:{NFSU2_TR(0x4e531b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e531e:{NFSU2_TR(0x4e531e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x119cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5324:{NFSU2_TR(0x4e5324);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e532a:{NFSU2_TR(0x4e532a);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4e5330:{NFSU2_TR(0x4e5330);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4e5333:{NFSU2_TR(0x4e5333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5338ull));
TAIL_STATIC(0x401840u,401);
}
B4e5338:L4e5338:{c.instructions+=7;NFSU2_TR(0x4e5338);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e533f:{NFSU2_TR(0x4e533f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5340:{NFSU2_TR(0x4e5340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5341:{NFSU2_TR(0x4e5341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5342:{NFSU2_TR(0x4e5342);
__builtin_memmove((R+16),(R+20),4);
}
B4e5344:{NFSU2_TR(0x4e5344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5345:{NFSU2_TR(0x4e5345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5348:L4e5348:{c.instructions+=2;NFSU2_TR(0x4e5348);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x72619778ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e534e:{NFSU2_TR(0x4e534e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e554b;}}
}
B4e5354:L4e5354:{c.instructions+=1;NFSU2_TR(0x4e5354);
if(r1(R+518)){{goto L4e5513;}}
}
B4e535a:L4e535a:{c.instructions+=2;NFSU2_TR(0x4e535a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5360:{NFSU2_TR(0x4e5360);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e51b6u);}goto L4e51b6;}}
}
B4e5366:L4e5366:{c.instructions+=2;NFSU2_TR(0x4e5366);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5073ef13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5073ef13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5073ef13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e536c:{NFSU2_TR(0x4e536c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5372:L4e5372:{c.instructions+=2;NFSU2_TR(0x4e5372);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5378:{NFSU2_TR(0x4e5378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e537dull));
TAIL_STATIC(0x4bc120u,4bc);
}
B4e537d:L4e537d:{c.instructions+=6;NFSU2_TR(0x4e537d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e537e:{NFSU2_TR(0x4e537e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e537f:{NFSU2_TR(0x4e537f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5380:{NFSU2_TR(0x4e5380);
__builtin_memmove((R+16),(R+20),4);
}
B4e5382:{NFSU2_TR(0x4e5382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5383:{NFSU2_TR(0x4e5383);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5386:L4e5386:{c.instructions+=3;NFSU2_TR(0x4e5386);
u8 U[4];
w4(U+0,u32(0xf636a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e538b:{NFSU2_TR(0x4e538b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x918ull))));
}
B4e5391:{NFSU2_TR(0x4e5391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5396ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e5396:L4e5396:{c.instructions+=3;NFSU2_TR(0x4e5396);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5397:{NFSU2_TR(0x4e5397);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5398:{NFSU2_TR(0x4e5398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e539dull));
TAIL_STATIC(0x43dc30u,43d);
}
B4e539d:L4e539d:{c.instructions+=3;NFSU2_TR(0x4e539d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e53a0:{NFSU2_TR(0x4e53a0);
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
B4e53a2:{NFSU2_TR(0x4e53a2);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e53a8:L4e53a8:{c.instructions+=2;NFSU2_TR(0x4e53a8);
w4(R+4,u32(0x850080ull));
}
B4e53ad:{NFSU2_TR(0x4e53ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e53b2ull));
TAIL_STATIC(0x5031f0u,503);
}
B4e53b2:L4e53b2:{c.instructions+=3;NFSU2_TR(0x4e53b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e53b3:{NFSU2_TR(0x4e53b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e53b4:{NFSU2_TR(0x4e53b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e53b9ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4e53b9:L4e53b9:{c.instructions+=3;NFSU2_TR(0x4e53b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e53bc:{NFSU2_TR(0x4e53bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e53be:{NFSU2_TR(0x4e53be);
if(r1(R+518)){{goto L4e549d;}}
}
B4e53c4:L4e53c4:{c.instructions+=4;NFSU2_TR(0x4e53c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e53c7:{NFSU2_TR(0x4e53c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e53c8:{NFSU2_TR(0x4e53c8);
__builtin_memmove((R+4),(R+28),4);
}
B4e53ca:{NFSU2_TR(0x4e53ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e53cfull));
TAIL_STATIC(0x51f440u,51f);
}
B4e53cf:L4e53cf:{c.instructions+=2;NFSU2_TR(0x4e53cf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e53d2:{NFSU2_TR(0x4e53d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4e549d;}}
}
B4e53d8:L4e53d8:{c.instructions+=4;NFSU2_TR(0x4e53d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e53db:{NFSU2_TR(0x4e53db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e53dc:{NFSU2_TR(0x4e53dc);
__builtin_memmove((R+4),(R+28),4);
}
B4e53de:{NFSU2_TR(0x4e53de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e53e3ull));
TAIL_STATIC(0x51f440u,51f);
}
B4e53e3:L4e53e3:{c.instructions+=4;NFSU2_TR(0x4e53e3);
__builtin_memmove((R+28),(R+0),4);
}
B4e53e5:{NFSU2_TR(0x4e53e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e53e7:{NFSU2_TR(0x4e53e7);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B4e53ea:{NFSU2_TR(0x4e53ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e53efull));
TAIL_STATIC(0x58f740u,58f);
}
B4e53ef:L4e53ef:{c.instructions+=3;NFSU2_TR(0x4e53ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e53f2:{NFSU2_TR(0x4e53f2);
__builtin_memmove((R+4),(R+0),4);
}
B4e53f4:{NFSU2_TR(0x4e53f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e53f9ull));
TAIL_STATIC(0x582930u,582);
}
B4e53f9:L4e53f9:{c.instructions+=5;NFSU2_TR(0x4e53f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4e53fc:{NFSU2_TR(0x4e53fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4e5403:{NFSU2_TR(0x4e5403);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5404:{NFSU2_TR(0x4e5404);
u8 U[4];
w4(U+0,u32(0x835918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5409:{NFSU2_TR(0x4e5409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e540eull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4e540e:L4e540e:{c.instructions+=6;NFSU2_TR(0x4e540e);
__builtin_memmove((R+0),gp(0x850084),4);
}
B4e5413:{NFSU2_TR(0x4e5413);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e5416:{NFSU2_TR(0x4e5416);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e5418:{NFSU2_TR(0x4e5418);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e541a:{NFSU2_TR(0x4e541a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e541f:{NFSU2_TR(0x4e541f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5438;}}
}
B4e5421:L4e5421:{c.instructions+=4;NFSU2_TR(0x4e5421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5424:{NFSU2_TR(0x4e5424);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5425:{NFSU2_TR(0x4e5425);
u8 U[4];
w4(U+0,u32(0x796230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e542a:{NFSU2_TR(0x4e542a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e542full));
TAIL_STATIC(0x555eb0u,555);
}
B4e542f:L4e542f:{c.instructions+=2;NFSU2_TR(0x4e542f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5436:{NFSU2_TR(0x4e5436);
{goto L4e544d;}
}
B4e5438:L4e5438:{c.instructions+=4;NFSU2_TR(0x4e5438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e543b:{NFSU2_TR(0x4e543b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e543c:{NFSU2_TR(0x4e543c);
u8 U[4];
w4(U+0,u32(0x796214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5441:{NFSU2_TR(0x4e5441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5446ull));
TAIL_STATIC(0x555eb0u,555);
}
B4e5446:L4e5446:{c.instructions+=1;NFSU2_TR(0x4e5446);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e544d:L4e544d:{c.instructions+=7;NFSU2_TR(0x4e544d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e5450:{NFSU2_TR(0x4e5450);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e5453:{NFSU2_TR(0x4e5453);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5455:{NFSU2_TR(0x4e5455);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e545a:{NFSU2_TR(0x4e545a);
u8 U[4];
w4(U+0,u32(0xfc8c5406ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e545f:{NFSU2_TR(0x4e545f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5460:{NFSU2_TR(0x4e5460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5465ull));
TAIL_STATIC(0x537c00u,537);
}
B4e5465:L4e5465:{c.instructions+=6;NFSU2_TR(0x4e5465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5468:{NFSU2_TR(0x4e5468);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e546a:{NFSU2_TR(0x4e546a);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e546f:{NFSU2_TR(0x4e546f);
u8 U[4];
w4(U+0,u32(0xcd3f1d2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5474:{NFSU2_TR(0x4e5474);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5475:{NFSU2_TR(0x4e5475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e547aull));
TAIL_STATIC(0x537c00u,537);
}
B4e547a:L4e547a:{c.instructions+=7;NFSU2_TR(0x4e547a);
__builtin_memmove((R+4),gp(0x7f44b8),4);
}
B4e5480:{NFSU2_TR(0x4e5480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e5483:{NFSU2_TR(0x4e5483);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5485:{NFSU2_TR(0x4e5485);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e548a:{NFSU2_TR(0x4e548a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e548b:{NFSU2_TR(0x4e548b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e548c:{NFSU2_TR(0x4e548c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5491ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e5491:L4e5491:{c.instructions+=7;NFSU2_TR(0x4e5491);
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
B4e5494:{NFSU2_TR(0x4e5494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5495:{NFSU2_TR(0x4e5495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5496:{NFSU2_TR(0x4e5496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5497:{NFSU2_TR(0x4e5497);
__builtin_memmove((R+16),(R+20),4);
}
B4e5499:{NFSU2_TR(0x4e5499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e549a:{NFSU2_TR(0x4e549a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e549d:L4e549d:{c.instructions+=3;NFSU2_TR(0x4e549d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e54a0:{NFSU2_TR(0x4e54a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e54a1:{NFSU2_TR(0x4e54a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e54a6ull));
TAIL_STATIC(0x51cd60u,51c);
}
B4e54a6:L4e54a6:{c.instructions+=4;NFSU2_TR(0x4e54a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e54a9:{NFSU2_TR(0x4e54a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e54ac:{NFSU2_TR(0x4e54ac);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x759898cbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x759898cbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x759898cbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e54b2:{NFSU2_TR(0x4e54b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e54b8:L4e54b8:{c.instructions+=9;NFSU2_TR(0x4e54b8);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e54bd:{NFSU2_TR(0x4e54bd);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x83a9c8))));
}
B4e54c3:{NFSU2_TR(0x4e54c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e54c7:{NFSU2_TR(0x4e54c7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e54cb:{NFSU2_TR(0x4e54cb);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e54d1:{NFSU2_TR(0x4e54d1);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e54d7:{NFSU2_TR(0x4e54d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e54d9:{NFSU2_TR(0x4e54d9);
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
B4e54dc:{NFSU2_TR(0x4e54dc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e54e2:L4e54e2:{c.instructions+=11;NFSU2_TR(0x4e54e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e54e5:{NFSU2_TR(0x4e54e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e54e7:{NFSU2_TR(0x4e54e7);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e54ec:{NFSU2_TR(0x4e54ec);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e54f1:{NFSU2_TR(0x4e54f1);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e54f6:{NFSU2_TR(0x4e54f6);
s1(0x838528,u8(0x0ull));
}
B4e54fd:{NFSU2_TR(0x4e54fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e5500:{NFSU2_TR(0x4e5500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5502:{NFSU2_TR(0x4e5502);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5503:{NFSU2_TR(0x4e5503);
__builtin_memmove((R+4),(R+24),4);
}
B4e5505:{NFSU2_TR(0x4e5505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e550aull));
TAIL_STATIC(0x555f80u,555);
}
B4e550a:L4e550a:{c.instructions+=6;NFSU2_TR(0x4e550a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e550b:{NFSU2_TR(0x4e550b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e550c:{NFSU2_TR(0x4e550c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e550d:{NFSU2_TR(0x4e550d);
__builtin_memmove((R+16),(R+20),4);
}
B4e550f:{NFSU2_TR(0x4e550f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5510:{NFSU2_TR(0x4e5510);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5513:L4e5513:{c.instructions+=2;NFSU2_TR(0x4e5513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5519:{NFSU2_TR(0x4e5519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e551eull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4e551e:L4e551e:{c.instructions+=2;NFSU2_TR(0x4e551e);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4e5520:{NFSU2_TR(0x4e5520);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e5526:L4e5526:{c.instructions+=5;NFSU2_TR(0x4e5526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5529:{NFSU2_TR(0x4e5529);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e552c:{NFSU2_TR(0x4e552c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e552d:{NFSU2_TR(0x4e552d);
__builtin_memmove((R+4),(R+28),4);
}
B4e552f:{NFSU2_TR(0x4e552f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5534ull));
TAIL_STATIC(0x51f440u,51f);
}
B4e5534:L4e5534:{c.instructions+=2;NFSU2_TR(0x4e5534);
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
B4e5537:{NFSU2_TR(0x4e5537);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e553d:L4e553d:{c.instructions+=2;NFSU2_TR(0x4e553d);
__builtin_memmove((R+4),(R+28),4);
}
B4e553f:{NFSU2_TR(0x4e553f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5544ull));
TAIL_STATIC(0x4958b0u,495);
}
B4e5544:L4e5544:{c.instructions+=2;NFSU2_TR(0x4e5544);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5546:{NFSU2_TR(0x4e5546);
{goto L4e5603;}
}
B4e554b:L4e554b:{c.instructions+=2;NFSU2_TR(0x4e554b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e5551:{NFSU2_TR(0x4e5551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5557:L4e5557:{c.instructions+=2;NFSU2_TR(0x4e5557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e555d:{NFSU2_TR(0x4e555d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5562ull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4e5562:L4e5562:{c.instructions+=2;NFSU2_TR(0x4e5562);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4e5564:{NFSU2_TR(0x4e5564);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e556a:L4e556a:{c.instructions+=2;NFSU2_TR(0x4e556a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4e5571:{NFSU2_TR(0x4e5571);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e5577:L4e5577:{c.instructions+=3;NFSU2_TR(0x4e5577);
__builtin_memmove((R+0),gp(0x850084),4);
}
B4e557c:{NFSU2_TR(0x4e557c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e557e:{NFSU2_TR(0x4e557e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e55b2;}}
}
B4e5580:L4e5580:{c.instructions+=10;NFSU2_TR(0x4e5580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5583:{NFSU2_TR(0x4e5583);
u8 U[4];
w4(U+0,u32(0xc304fa53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5588:{NFSU2_TR(0x4e5588);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e558a:{NFSU2_TR(0x4e558a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e558c:{NFSU2_TR(0x4e558c);
u8 U[4];
w4(U+0,u32(0x87f32b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5591:{NFSU2_TR(0x4e5591);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5596:{NFSU2_TR(0x4e5596);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e559b:{NFSU2_TR(0x4e559b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55a0:{NFSU2_TR(0x4e55a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55a1:{NFSU2_TR(0x4e55a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e55a6ull));
TAIL_STATIC(0x558860u,558);
}
B4e55a6:L4e55a6:{c.instructions+=7;NFSU2_TR(0x4e55a6);
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
B4e55a9:{NFSU2_TR(0x4e55a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e55aa:{NFSU2_TR(0x4e55aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e55ab:{NFSU2_TR(0x4e55ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e55ac:{NFSU2_TR(0x4e55ac);
__builtin_memmove((R+16),(R+20),4);
}
B4e55ae:{NFSU2_TR(0x4e55ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e55af:{NFSU2_TR(0x4e55af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e55b2:L4e55b2:{c.instructions+=10;NFSU2_TR(0x4e55b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e55b5:{NFSU2_TR(0x4e55b5);
u8 U[4];
w4(U+0,u32(0xa632eeadull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55ba:{NFSU2_TR(0x4e55ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55bc:{NFSU2_TR(0x4e55bc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55be:{NFSU2_TR(0x4e55be);
u8 U[4];
w4(U+0,u32(0x87f32b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55c3:{NFSU2_TR(0x4e55c3);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55c8:{NFSU2_TR(0x4e55c8);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55cd:{NFSU2_TR(0x4e55cd);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55d2:{NFSU2_TR(0x4e55d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e55d3:{NFSU2_TR(0x4e55d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e55d8ull));
TAIL_STATIC(0x558860u,558);
}
B4e55d8:L4e55d8:{c.instructions+=7;NFSU2_TR(0x4e55d8);
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
B4e55db:{NFSU2_TR(0x4e55db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e55dc:{NFSU2_TR(0x4e55dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e55dd:{NFSU2_TR(0x4e55dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e55de:{NFSU2_TR(0x4e55de);
__builtin_memmove((R+16),(R+20),4);
}
B4e55e0:{NFSU2_TR(0x4e55e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e55e1:{NFSU2_TR(0x4e55e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e55e4:L4e55e4:{c.instructions+=2;NFSU2_TR(0x4e55e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e55ea:{NFSU2_TR(0x4e55ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e55efull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4e55ef:L4e55ef:{c.instructions+=2;NFSU2_TR(0x4e55ef);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4e55f1:{NFSU2_TR(0x4e55f1);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e55f7:L4e55f7:{c.instructions+=3;NFSU2_TR(0x4e55f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e55fa:{NFSU2_TR(0x4e55fa);
__builtin_memmove((R+4),(R+28),4);
}
B4e55fc:{NFSU2_TR(0x4e55fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5601ull));
TAIL_STATIC(0x4958b0u,495);
}
B4e5601:L4e5601:{c.instructions+=1;NFSU2_TR(0x4e5601);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5603:L4e5603:{c.instructions+=2;NFSU2_TR(0x4e5603);
__builtin_memmove((R+4),(R+24),4);
}
B4e5605:{NFSU2_TR(0x4e5605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e560aull));
TAIL_STATIC(0x4bba20u,4bb);
}
B4e560a:L4e560a:{c.instructions+=4;NFSU2_TR(0x4e560a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e560d:{NFSU2_TR(0x4e560d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e560e:{NFSU2_TR(0x4e560e);
__builtin_memmove((R+4),(R+28),4);
}
B4e5610:{NFSU2_TR(0x4e5610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5615ull));
TAIL_STATIC(0x51f440u,51f);
}
B4e5615:L4e5615:{c.instructions+=7;NFSU2_TR(0x4e5615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e561b:{NFSU2_TR(0x4e561b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e561c:{NFSU2_TR(0x4e561c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e561d:{NFSU2_TR(0x4e561d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e561e:{NFSU2_TR(0x4e561e);
__builtin_memmove((R+16),(R+20),4);
}
B4e5620:{NFSU2_TR(0x4e5620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5621:{NFSU2_TR(0x4e5621);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5624:L4e5624:{c.instructions+=2;NFSU2_TR(0x4e5624);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xc9d30688ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e562a:{NFSU2_TR(0x4e562a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e5b56;}}
}
B4e5630:L4e5630:{c.instructions+=1;NFSU2_TR(0x4e5630);
if(r1(R+518)){{goto L4e5ac9;}}
}
B4e5636:L4e5636:{c.instructions+=2;NFSU2_TR(0x4e5636);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xc519bfc1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc519bfc1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e563c:{NFSU2_TR(0x4e563c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e58b7;}}
}
B4e5642:L4e5642:{c.instructions+=1;NFSU2_TR(0x4e5642);
if(r1(R+518)){{goto L4e585a;}}
}
B4e5648:L4e5648:{c.instructions+=2;NFSU2_TR(0x4e5648);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e564e:{NFSU2_TR(0x4e564e);
if(r1(R+518)){{goto L4e56b0;}}
}
B4e5650:L4e5650:{c.instructions+=2;NFSU2_TR(0x4e5650);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc519bfc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e5656:{NFSU2_TR(0x4e5656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e565c:L4e565c:{c.instructions+=6;NFSU2_TR(0x4e565c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e565f:{NFSU2_TR(0x4e565f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5661:{NFSU2_TR(0x4e5661);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5666:{NFSU2_TR(0x4e5666);
u8 U[4];
w4(U+0,u32(0x794d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e566b:{NFSU2_TR(0x4e566b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e566c:{NFSU2_TR(0x4e566c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5671ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e5671:L4e5671:{c.instructions+=4;NFSU2_TR(0x4e5671);
__builtin_memmove((R+0),gp(0x838528),1);
}
B4e5676:{NFSU2_TR(0x4e5676);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e5679:{NFSU2_TR(0x4e5679);
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
B4e567b:{NFSU2_TR(0x4e567b);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e5681:L4e5681:{c.instructions+=8;NFSU2_TR(0x4e5681);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5684:{NFSU2_TR(0x4e5684);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5686:{NFSU2_TR(0x4e5686);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e568b:{NFSU2_TR(0x4e568b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5690:{NFSU2_TR(0x4e5690);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5691:{NFSU2_TR(0x4e5691);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1199ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5698:{NFSU2_TR(0x4e5698);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e569f:{NFSU2_TR(0x4e569f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e56a4ull));
TAIL_STATIC(0x537c00u,537);
}
B4e56a4:L4e56a4:{c.instructions+=7;NFSU2_TR(0x4e56a4);
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
B4e56a7:{NFSU2_TR(0x4e56a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e56a8:{NFSU2_TR(0x4e56a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e56a9:{NFSU2_TR(0x4e56a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e56aa:{NFSU2_TR(0x4e56aa);
__builtin_memmove((R+16),(R+20),4);
}
B4e56ac:{NFSU2_TR(0x4e56ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e56ad:{NFSU2_TR(0x4e56ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e56b0:L4e56b0:{c.instructions+=2;NFSU2_TR(0x4e56b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e56b6:{NFSU2_TR(0x4e56b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e56bbull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4e56bb:L4e56bb:{c.instructions+=2;NFSU2_TR(0x4e56bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e56bd:{NFSU2_TR(0x4e56bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e56ee;}}
}
B4e56bf:L4e56bf:{c.instructions+=5;NFSU2_TR(0x4e56bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e56c2:{NFSU2_TR(0x4e56c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e56c5:{NFSU2_TR(0x4e56c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e56c6:{NFSU2_TR(0x4e56c6);
__builtin_memmove((R+4),(R+28),4);
}
B4e56c8:{NFSU2_TR(0x4e56c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e56cdull));
TAIL_STATIC(0x51f440u,51f);
}
B4e56cd:L4e56cd:{c.instructions+=3;NFSU2_TR(0x4e56cd);
__builtin_memmove((R+4),(R+28),4);
}
B4e56cf:{NFSU2_TR(0x4e56cf);
__builtin_memmove((R+12),(R+0),4);
}
B4e56d1:{NFSU2_TR(0x4e56d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e56d6ull));
TAIL_STATIC(0x54eb80u,54e);
}
B4e56d6:L4e56d6:{c.instructions+=4;NFSU2_TR(0x4e56d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e56d9:{NFSU2_TR(0x4e56d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e56da:{NFSU2_TR(0x4e56da);
__builtin_memmove((R+4),(R+28),4);
}
B4e56dc:{NFSU2_TR(0x4e56dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e56e1ull));
TAIL_STATIC(0x51f440u,51f);
}
B4e56e1:L4e56e1:{c.instructions+=2;NFSU2_TR(0x4e56e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e56e3:{NFSU2_TR(0x4e56e3);
if(r1(R+518)){{goto L4e56ee;}}
}
B4e56e5:L4e56e5:{c.instructions+=3;NFSU2_TR(0x4e56e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e56e7:{NFSU2_TR(0x4e56e7);
__builtin_memmove((R+4),(R+24),4);
}
B4e56e9:{NFSU2_TR(0x4e56e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e56eeull));
TAIL_STATIC(0x4bba20u,4bb);
}
B4e56ee:L4e56ee:{c.instructions+=4;NFSU2_TR(0x4e56ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e56f1:{NFSU2_TR(0x4e56f1);
u8 U[4];
w4(U+0,u32(0xb1000cc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e56f6:{NFSU2_TR(0x4e56f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e56f7:{NFSU2_TR(0x4e56f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e56fcull));
TAIL_STATIC(0x5379c0u,537);
}
B4e56fc:L4e56fc:{c.instructions+=2;NFSU2_TR(0x4e56fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e56fd:{NFSU2_TR(0x4e56fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5702ull));
TAIL_STATIC(0x52d100u,52d);
}
B4e5702:L4e5702:{c.instructions+=3;NFSU2_TR(0x4e5702);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e5705:{NFSU2_TR(0x4e5705);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5707:{NFSU2_TR(0x4e5707);
if(r1(R+518)){{goto L4e571a;}}
}
B4e5709:L4e5709:{c.instructions+=4;NFSU2_TR(0x4e5709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e570c:{NFSU2_TR(0x4e570c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e570d:{NFSU2_TR(0x4e570d);
u8 U[4];
w4(U+0,u32(0xc6f311c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5712:{NFSU2_TR(0x4e5712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5717ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e5717:L4e5717:{c.instructions+=1;NFSU2_TR(0x4e5717);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e571a:L4e571a:{c.instructions+=2;NFSU2_TR(0x4e571a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5720:{NFSU2_TR(0x4e5720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5725ull));
TAIL_STATIC(0x538130u,538);
}
B4e5725:L4e5725:{c.instructions+=3;NFSU2_TR(0x4e5725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e572b:{NFSU2_TR(0x4e572b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e572c:{NFSU2_TR(0x4e572c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5731ull));
TAIL_STATIC(0x52d100u,52d);
}
B4e5731:L4e5731:{c.instructions+=3;NFSU2_TR(0x4e5731);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e5734:{NFSU2_TR(0x4e5734);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5736:{NFSU2_TR(0x4e5736);
if(r1(R+518)){{goto L4e578a;}}
}
B4e5738:L4e5738:{c.instructions+=9;NFSU2_TR(0x4e5738);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e573d:{NFSU2_TR(0x4e573d);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x83a9c8))));
}
B4e5743:{NFSU2_TR(0x4e5743);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5747:{NFSU2_TR(0x4e5747);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e574b:{NFSU2_TR(0x4e574b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e5751:{NFSU2_TR(0x4e5751);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e5757:{NFSU2_TR(0x4e5757);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e5759:{NFSU2_TR(0x4e5759);
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
B4e575c:{NFSU2_TR(0x4e575c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5762:L4e5762:{c.instructions+=9;NFSU2_TR(0x4e5762);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5764:{NFSU2_TR(0x4e5764);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5769:{NFSU2_TR(0x4e5769);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e576e:{NFSU2_TR(0x4e576e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5773:{NFSU2_TR(0x4e5773);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5775:{NFSU2_TR(0x4e5775);
u8 U[4];
w4(U+0,u32(0x759898cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e577a:{NFSU2_TR(0x4e577a);
__builtin_memmove((R+4),(R+24),4);
}
B4e577c:{NFSU2_TR(0x4e577c);
s1(0x838528,u8(0x0ull));
}
B4e5783:{NFSU2_TR(0x4e5783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5788ull));
TAIL_STATIC(0x555f80u,555);
}
B4e5788:L4e5788:{c.instructions+=1;NFSU2_TR(0x4e5788);
{goto L4e57c6;}
}
B4e578a:L4e578a:{c.instructions+=4;NFSU2_TR(0x4e578a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5790:{NFSU2_TR(0x4e5790);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5796:{NFSU2_TR(0x4e5796);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5797:{NFSU2_TR(0x4e5797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e579cull));
TAIL_STATIC(0x52d100u,52d);
}
B4e579c:L4e579c:{c.instructions+=3;NFSU2_TR(0x4e579c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e579f:{NFSU2_TR(0x4e579f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e57a1:{NFSU2_TR(0x4e57a1);
if(r1(R+518)){{goto L4e57ac;}}
}
B4e57a3:L4e57a3:{c.instructions+=2;NFSU2_TR(0x4e57a3);
__builtin_memmove((R+4),(R+28),4);
}
B4e57a5:{NFSU2_TR(0x4e57a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e57aaull));
TAIL_STATIC(0x4bc120u,4bc);
}
B4e57aa:L4e57aa:{c.instructions+=1;NFSU2_TR(0x4e57aa);
{goto L4e57c6;}
}
B4e57ac:L4e57ac:{c.instructions+=3;NFSU2_TR(0x4e57ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e57b2:{NFSU2_TR(0x4e57b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e57b3:{NFSU2_TR(0x4e57b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e57b8ull));
TAIL_STATIC(0x52d100u,52d);
}
B4e57b8:L4e57b8:{c.instructions+=3;NFSU2_TR(0x4e57b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e57bb:{NFSU2_TR(0x4e57bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e57bd:{NFSU2_TR(0x4e57bd);
if(r1(R+518)){{goto L4e57c6;}}
}
B4e57bf:L4e57bf:{c.instructions+=2;NFSU2_TR(0x4e57bf);
__builtin_memmove((R+4),(R+28),4);
}
B4e57c1:{NFSU2_TR(0x4e57c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e57c6ull));
TAIL_STATIC(0x4bc150u,4bc);
}
B4e57c6:L4e57c6:{c.instructions+=4;NFSU2_TR(0x4e57c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e57cc:{NFSU2_TR(0x4e57cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B4e57cf:{NFSU2_TR(0x4e57cf);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e57d2:{NFSU2_TR(0x4e57d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e57fa;}}
}
B4e57d4:L4e57d4:{c.instructions+=2;NFSU2_TR(0x4e57d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4e5d1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4e57db:{NFSU2_TR(0x4e57db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e5d10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e57e2:L4e57e2:{c.instructions+=2;NFSU2_TR(0x4e57e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e57e8:{NFSU2_TR(0x4e57e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e57edull));
TAIL_STATIC(0x4bc150u,4bc);
}
B4e57ed:L4e57ed:{c.instructions+=1;NFSU2_TR(0x4e57ed);
{goto L4e57fa;}
}
B4e57ef:L4e57ef:{c.instructions+=2;NFSU2_TR(0x4e57ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e57f5:{NFSU2_TR(0x4e57f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e57faull));
TAIL_STATIC(0x4bc120u,4bc);
}
B4e57fa:L4e57fa:{c.instructions+=3;NFSU2_TR(0x4e57fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e57fe:{NFSU2_TR(0x4e57fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e57ff:{NFSU2_TR(0x4e57ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5804ull));
TAIL_STATIC(0x50cda0u,50c);
}
B4e5804:L4e5804:{c.instructions+=6;NFSU2_TR(0x4e5804);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e5808:{NFSU2_TR(0x4e5808);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e580e:{NFSU2_TR(0x4e580e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e5811:{NFSU2_TR(0x4e5811);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e5813:{NFSU2_TR(0x4e5813);
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
B4e5816:{NFSU2_TR(0x4e5816);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e581c:L4e581c:{c.instructions+=5;NFSU2_TR(0x4e581c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e5820:{NFSU2_TR(0x4e5820);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e5826:{NFSU2_TR(0x4e5826);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e5828:{NFSU2_TR(0x4e5828);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e582b:{NFSU2_TR(0x4e582b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e5372u);}goto L4e5372;}}
}
B4e5831:L4e5831:{c.instructions+=5;NFSU2_TR(0x4e5831);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4e5835:{NFSU2_TR(0x4e5835);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e583b:{NFSU2_TR(0x4e583b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e583d:{NFSU2_TR(0x4e583d);
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
B4e5840:{NFSU2_TR(0x4e5840);
if(r1(R+514)){{goto L4e5cd9;}}
}
B4e5846:L4e5846:{c.instructions+=2;NFSU2_TR(0x4e5846);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e584c:{NFSU2_TR(0x4e584c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5851ull));
TAIL_STATIC(0x4bc150u,4bc);
}
B4e5851:L4e5851:{c.instructions+=6;NFSU2_TR(0x4e5851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5852:{NFSU2_TR(0x4e5852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5853:{NFSU2_TR(0x4e5853);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5854:{NFSU2_TR(0x4e5854);
__builtin_memmove((R+16),(R+20),4);
}
B4e5856:{NFSU2_TR(0x4e5856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5857:{NFSU2_TR(0x4e5857);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e585a:L4e585a:{c.instructions+=10;NFSU2_TR(0x4e585a);
__builtin_memmove((R+0),gp(0x83a9c8),4);
}
B4e585f:{NFSU2_TR(0x4e585f);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4e5865:{NFSU2_TR(0x4e5865);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4e5867:{NFSU2_TR(0x4e5867);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e586b:{NFSU2_TR(0x4e586b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e586f:{NFSU2_TR(0x4e586f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e5875:{NFSU2_TR(0x4e5875);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e587b:{NFSU2_TR(0x4e587b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e587d:{NFSU2_TR(0x4e587d);
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
B4e5880:{NFSU2_TR(0x4e5880);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5886:L4e5886:{c.instructions+=4;NFSU2_TR(0x4e5886);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5888:{NFSU2_TR(0x4e5888);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e588d:{NFSU2_TR(0x4e588d);
u8 U[4];
w4(U+0,u32(0x53f9fd5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5892:{NFSU2_TR(0x4e5892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5897ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e5897:L4e5897:{c.instructions+=7;NFSU2_TR(0x4e5897);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e589a:{NFSU2_TR(0x4e589a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e589b:{NFSU2_TR(0x4e589b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e58a0:{NFSU2_TR(0x4e58a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e58a2:{NFSU2_TR(0x4e58a2);
u8 U[4];
w4(U+0,u32(0x759898cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e58a7:{NFSU2_TR(0x4e58a7);
__builtin_memmove((R+4),(R+24),4);
}
B4e58a9:{NFSU2_TR(0x4e58a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e58aeull));
TAIL_STATIC(0x555f80u,555);
}
B4e58ae:L4e58ae:{c.instructions+=6;NFSU2_TR(0x4e58ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e58af:{NFSU2_TR(0x4e58af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e58b0:{NFSU2_TR(0x4e58b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e58b1:{NFSU2_TR(0x4e58b1);
__builtin_memmove((R+16),(R+20),4);
}
B4e58b3:{NFSU2_TR(0x4e58b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e58b4:{NFSU2_TR(0x4e58b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e58b7:L4e58b7:{c.instructions+=2;NFSU2_TR(0x4e58b7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc6f311c6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e58bd:{NFSU2_TR(0x4e58bd);
if(r1(R+518)){{goto L4e5ab5;}}
}
B4e58c3:L4e58c3:{c.instructions+=2;NFSU2_TR(0x4e58c3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4e58c9:{NFSU2_TR(0x4e58c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e58cf:L4e58cf:{c.instructions+=5;NFSU2_TR(0x4e58cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e58d2:{NFSU2_TR(0x4e58d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e58d5:{NFSU2_TR(0x4e58d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e58d6:{NFSU2_TR(0x4e58d6);
__builtin_memmove((R+4),(R+28),4);
}
B4e58d8:{NFSU2_TR(0x4e58d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e58ddull));
TAIL_STATIC(0x51f440u,51f);
}
B4e58dd:L4e58dd:{c.instructions+=2;NFSU2_TR(0x4e58dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e58e0:{NFSU2_TR(0x4e58e0);
if(r1(R+518)){{goto L4e5910;}}
}
B4e58e2:L4e58e2:{c.instructions+=2;NFSU2_TR(0x4e58e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e58e8:{NFSU2_TR(0x4e58e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e58edull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4e58ed:L4e58ed:{c.instructions+=2;NFSU2_TR(0x4e58ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e58ef:{NFSU2_TR(0x4e58ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5910;}}
}
B4e58f1:L4e58f1:{c.instructions+=2;NFSU2_TR(0x4e58f1);
__builtin_memmove((R+4),(R+28),4);
}
B4e58f3:{NFSU2_TR(0x4e58f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e58f8ull));
TAIL_STATIC(0x4958b0u,495);
}
B4e58f8:L4e58f8:{c.instructions+=2;NFSU2_TR(0x4e58f8);
__builtin_memmove((R+4),(R+28),4);
}
B4e58fa:{NFSU2_TR(0x4e58fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e58ffull));
TAIL_STATIC(0x54eb60u,54e);
}
B4e58ff:L4e58ff:{c.instructions+=4;NFSU2_TR(0x4e58ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5902:{NFSU2_TR(0x4e5902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5903:{NFSU2_TR(0x4e5903);
__builtin_memmove((R+4),(R+28),4);
}
B4e5905:{NFSU2_TR(0x4e5905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e590aull));
TAIL_STATIC(0x51f440u,51f);
}
B4e590a:L4e590a:{c.instructions+=1;NFSU2_TR(0x4e590a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5910:L4e5910:{c.instructions+=3;NFSU2_TR(0x4e5910);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e5916:{NFSU2_TR(0x4e5916);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5918:{NFSU2_TR(0x4e5918);
if(r1(R+518)){{goto L4e594f;}}
}
B4e591a:L4e591a:{c.instructions+=3;NFSU2_TR(0x4e591a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e591d:{NFSU2_TR(0x4e591d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e591f:{NFSU2_TR(0x4e591f);
if(r1(R+518)){{goto L4e5935;}}
}
B4e5921:L4e5921:{c.instructions+=3;NFSU2_TR(0x4e5921);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4e5927:{NFSU2_TR(0x4e5927);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5929:{NFSU2_TR(0x4e5929);
if(r1(R+518)){{goto L4e594f;}}
}
B4e592b:L4e592b:{c.instructions+=3;NFSU2_TR(0x4e592b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e592c:{NFSU2_TR(0x4e592c);
__builtin_memmove((R+4),(R+24),4);
}
B4e592e:{NFSU2_TR(0x4e592e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5933ull));
TAIL_STATIC(0x49ef50u,49e);
}
B4e5933:L4e5933:{c.instructions+=1;NFSU2_TR(0x4e5933);
{goto L4e593c;}
}
B4e5935:L4e5935:{c.instructions+=1;NFSU2_TR(0x4e5935);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11b4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e593c:L4e593c:{c.instructions+=3;NFSU2_TR(0x4e593c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5942:{NFSU2_TR(0x4e5942);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e5944:{NFSU2_TR(0x4e5944);
if(r1(R+518)){{goto L4e594f;}}
}
B4e5946:L4e5946:{c.instructions+=2;NFSU2_TR(0x4e5946);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5947:{NFSU2_TR(0x4e5947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e594cull));
TAIL_STATIC(0x540a60u,540);
}
B4e594c:L4e594c:{c.instructions+=1;NFSU2_TR(0x4e594c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e594f:L4e594f:{c.instructions+=2;NFSU2_TR(0x4e594f);
__builtin_memmove((R+4),(R+24),4);
}
B4e5951:{NFSU2_TR(0x4e5951);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5956ull));
TAIL_STATIC(0x4bb5d0u,4bb);
}
B4e5956:L4e5956:{c.instructions+=3;NFSU2_TR(0x4e5956);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e595c:{NFSU2_TR(0x4e595c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e595e:{NFSU2_TR(0x4e595e);
if(r1(R+518)){{goto L4e5a0a;}}
}
B4e5964:L4e5964:{c.instructions+=5;NFSU2_TR(0x4e5964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5967:{NFSU2_TR(0x4e5967);
u8 U[4];
w4(U+0,u32(0x796084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e596c:{NFSU2_TR(0x4e596c);
u8 U[4];
w4(U+0,u32(0xa6f52ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5971:{NFSU2_TR(0x4e5971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5972:{NFSU2_TR(0x4e5972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5977ull));
TAIL_STATIC(0x537cc0u,537);
}
B4e5977:L4e5977:{c.instructions+=3;NFSU2_TR(0x4e5977);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e597a:{NFSU2_TR(0x4e597a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e597c:{NFSU2_TR(0x4e597c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5a0a;}}
}
B4e5982:L4e5982:{c.instructions+=3;NFSU2_TR(0x4e5982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5988:{NFSU2_TR(0x4e5988);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e598b:{NFSU2_TR(0x4e598b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e59c9;}}
}
B4e598d:L4e598d:{c.instructions+=5;NFSU2_TR(0x4e598d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5990:{NFSU2_TR(0x4e5990);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5995:{NFSU2_TR(0x4e5995);
u8 U[4];
w4(U+0,u32(0xa6f52ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e599a:{NFSU2_TR(0x4e599a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e599b:{NFSU2_TR(0x4e599b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e59a0ull));
TAIL_STATIC(0x537b80u,537);
}
B4e59a0:L4e59a0:{c.instructions+=7;NFSU2_TR(0x4e59a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e59a6:{NFSU2_TR(0x4e59a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e59a9:{NFSU2_TR(0x4e59a9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4e59aa:{NFSU2_TR(0x4e59aa);
__builtin_memmove((R+0),(R+4),4);
}
B4e59ac:{NFSU2_TR(0x4e59ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e59af:{NFSU2_TR(0x4e59af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e59b5:{NFSU2_TR(0x4e59b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e59f2;}}
}
B4e59b7:L4e59b7:{c.instructions+=3;NFSU2_TR(0x4e59b7);
__builtin_memmove((R+0),gp(0x850084),4);
}
B4e59bc:{NFSU2_TR(0x4e59bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e59be:{NFSU2_TR(0x4e59be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e59f2;}}
}
B4e59c0:L4e59c0:{c.instructions+=2;NFSU2_TR(0x4e59c0);
__builtin_memmove((R+4),(R+24),4);
}
B4e59c2:{NFSU2_TR(0x4e59c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e59c7ull));
TAIL_STATIC(0x4bb6e0u,4bb);
}
B4e59c7:L4e59c7:{c.instructions+=1;NFSU2_TR(0x4e59c7);
{goto L4e59f2;}
}
B4e59c9:L4e59c9:{c.instructions+=6;NFSU2_TR(0x4e59c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e59cc:{NFSU2_TR(0x4e59cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e59cd:{NFSU2_TR(0x4e59cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e59d0:{NFSU2_TR(0x4e59d0);
u8 U[4];
w4(U+0,u32(0x9b8c9d7aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e59d5:{NFSU2_TR(0x4e59d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x117cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e59db:{NFSU2_TR(0x4e59db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e59e0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e59e0:L4e59e0:{c.instructions+=5;NFSU2_TR(0x4e59e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e59e3:{NFSU2_TR(0x4e59e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e59e4:{NFSU2_TR(0x4e59e4);
u8 U[4];
w4(U+0,u32(0xa6f52ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e59e9:{NFSU2_TR(0x4e59e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e59ea:{NFSU2_TR(0x4e59ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e59efull));
TAIL_STATIC(0x537b80u,537);
}
B4e59ef:L4e59ef:{c.instructions+=1;NFSU2_TR(0x4e59ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e59f2:L4e59f2:{c.instructions+=6;NFSU2_TR(0x4e59f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e59f5:{NFSU2_TR(0x4e59f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e59f7:{NFSU2_TR(0x4e59f7);
u8 U[4];
w4(U+0,u32(0x796084ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e59fc:{NFSU2_TR(0x4e59fc);
u8 U[4];
w4(U+0,u32(0xa6f52ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a01:{NFSU2_TR(0x4e5a01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a02:{NFSU2_TR(0x4e5a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5a07ull));
TAIL_STATIC(0x537c00u,537);
}
B4e5a07:L4e5a07:{c.instructions+=1;NFSU2_TR(0x4e5a07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e5a0a:L4e5a0a:{c.instructions+=3;NFSU2_TR(0x4e5a0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e5a10:{NFSU2_TR(0x4e5a10);
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
B4e5a12:{NFSU2_TR(0x4e5a12);
if(r1(R+518)){{goto L4e5cd9;}}
}
B4e5a18:L4e5a18:{c.instructions+=8;NFSU2_TR(0x4e5a18);
{u32 ea_=u32(r4(R+24)+u32(4508u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e5a1e:{NFSU2_TR(0x4e5a1e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e5a24:{NFSU2_TR(0x4e5a24);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e5a2a:{NFSU2_TR(0x4e5a2a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e5a30:{NFSU2_TR(0x4e5a30);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4e5a32:{NFSU2_TR(0x4e5a32);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e5a34:{NFSU2_TR(0x4e5a34);
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
B4e5a37:{NFSU2_TR(0x4e5a37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5a3d:L4e5a3d:{c.instructions+=4;NFSU2_TR(0x4e5a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5a43:{NFSU2_TR(0x4e5a43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e5a45:{NFSU2_TR(0x4e5a45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5a4c:{NFSU2_TR(0x4e5a4c);
if(r1(R+518)){{goto L4e5a61;}}
}
B4e5a4e:L4e5a4e:{c.instructions+=2;NFSU2_TR(0x4e5a4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a4f:{NFSU2_TR(0x4e5a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5a54ull));
TAIL_STATIC(0x540a60u,540);
}
B4e5a54:L4e5a54:{c.instructions+=2;NFSU2_TR(0x4e5a54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e5a57:{NFSU2_TR(0x4e5a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e5a61:L4e5a61:{c.instructions+=3;NFSU2_TR(0x4e5a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e5a64:{NFSU2_TR(0x4e5a64);
w4(R+4,u32(0x89cf48ull));
}
B4e5a69:{NFSU2_TR(0x4e5a69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5a6eull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4e5a6e:L4e5a6e:{c.instructions+=6;NFSU2_TR(0x4e5a6e);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4e5a70:{NFSU2_TR(0x4e5a70);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4e5a72:{NFSU2_TR(0x4e5a72);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe562831full))));
}
B4e5a77:{NFSU2_TR(0x4e5a77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb62e143cull))));
}
B4e5a7c:{NFSU2_TR(0x4e5a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a7d:{NFSU2_TR(0x4e5a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5a82ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e5a82:L4e5a82:{c.instructions+=7;NFSU2_TR(0x4e5a82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a83:{NFSU2_TR(0x4e5a83);
u8 U[4];
w4(U+0,u32(0x2c03fba3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a88:{NFSU2_TR(0x4e5a88);
u8 U[4];
w4(U+0,u32(0x2c03fba3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a8d:{NFSU2_TR(0x4e5a8d);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a92:{NFSU2_TR(0x4e5a92);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a97:{NFSU2_TR(0x4e5a97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5a98:{NFSU2_TR(0x4e5a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5a9dull));
TAIL_STATIC(0x558540u,558);
}
B4e5a9d:L4e5a9d:{c.instructions+=4;NFSU2_TR(0x4e5a9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e5aa0:{NFSU2_TR(0x4e5aa0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5aa2:{NFSU2_TR(0x4e5aa2);
w4(R+4,u32(0x89cf48ull));
}
B4e5aa7:{NFSU2_TR(0x4e5aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5aacull));
TAIL_STATIC(0x5fe2b0u,5fe);
}
B4e5aac:L4e5aac:{c.instructions+=6;NFSU2_TR(0x4e5aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5aad:{NFSU2_TR(0x4e5aad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5aae:{NFSU2_TR(0x4e5aae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5aaf:{NFSU2_TR(0x4e5aaf);
__builtin_memmove((R+16),(R+20),4);
}
B4e5ab1:{NFSU2_TR(0x4e5ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5ab2:{NFSU2_TR(0x4e5ab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5ab5:L4e5ab5:{c.instructions+=4;NFSU2_TR(0x4e5ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5ab8:{NFSU2_TR(0x4e5ab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ab9:{NFSU2_TR(0x4e5ab9);
__builtin_memmove((R+4),(R+24),4);
}
B4e5abb:{NFSU2_TR(0x4e5abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5ac0ull));
TAIL_STATIC(0x4d1bd0u,4d1);
}
B4e5ac0:L4e5ac0:{c.instructions+=6;NFSU2_TR(0x4e5ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5ac1:{NFSU2_TR(0x4e5ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5ac2:{NFSU2_TR(0x4e5ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5ac3:{NFSU2_TR(0x4e5ac3);
__builtin_memmove((R+16),(R+20),4);
}
B4e5ac5:{NFSU2_TR(0x4e5ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5ac6:{NFSU2_TR(0x4e5ac6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5ac9:L4e5ac9:{c.instructions+=2;NFSU2_TR(0x4e5ac9);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5ad3:{NFSU2_TR(0x4e5ad3);
if(r1(R+518)){{goto L4e5aeb;}}
}
B4e5ad5:L4e5ad5:{c.instructions+=2;NFSU2_TR(0x4e5ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5adb:{NFSU2_TR(0x4e5adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5ae0ull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4e5ae0:L4e5ae0:{c.instructions+=3;NFSU2_TR(0x4e5ae0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5ae2:{NFSU2_TR(0x4e5ae2);
s1(0x838528,u8(0x1ull));
}
B4e5ae9:{NFSU2_TR(0x4e5ae9);
if(r1(R+518)){{goto L4e5af2;}}
}
B4e5aeb:L4e5aeb:{c.instructions+=1;NFSU2_TR(0x4e5aeb);
s1(0x838528,u8(0x0ull));
}
B4e5af2:L4e5af2:{c.instructions+=10;NFSU2_TR(0x4e5af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5af5:{NFSU2_TR(0x4e5af5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5af7:{NFSU2_TR(0x4e5af7);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5afc:{NFSU2_TR(0x4e5afc);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b01:{NFSU2_TR(0x4e5b01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b02:{NFSU2_TR(0x4e5b02);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5b09:{NFSU2_TR(0x4e5b09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5b10:{NFSU2_TR(0x4e5b10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5b17:{NFSU2_TR(0x4e5b17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5b1e:{NFSU2_TR(0x4e5b1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5b23ull));
TAIL_STATIC(0x537c00u,537);
}
B4e5b23:L4e5b23:{c.instructions+=5;NFSU2_TR(0x4e5b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e5b26:{NFSU2_TR(0x4e5b26);
u8 U[4];
w4(U+0,u32(0x7d485221ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b2b:{NFSU2_TR(0x4e5b2b);
u8 U[4];
w4(U+0,u32(0x759898cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b30:{NFSU2_TR(0x4e5b30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b31:{NFSU2_TR(0x4e5b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5b36ull));
TAIL_STATIC(0x495460u,495);
}
B4e5b36:L4e5b36:{c.instructions+=5;NFSU2_TR(0x4e5b36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e5b39:{NFSU2_TR(0x4e5b39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b3b:{NFSU2_TR(0x4e5b3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b3d:{NFSU2_TR(0x4e5b3d);
__builtin_memmove((R+4),(R+24),4);
}
B4e5b3f:{NFSU2_TR(0x4e5b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5b44ull));
TAIL_STATIC(0x4d1ea0u,4d1);
}
B4e5b44:L4e5b44:{c.instructions+=3;NFSU2_TR(0x4e5b44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b46:{NFSU2_TR(0x4e5b46);
__builtin_memmove((R+4),(R+24),4);
}
B4e5b48:{NFSU2_TR(0x4e5b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5b4dull));
TAIL_STATIC(0x4bba20u,4bb);
}
B4e5b4d:L4e5b4d:{c.instructions+=6;NFSU2_TR(0x4e5b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5b4e:{NFSU2_TR(0x4e5b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5b4f:{NFSU2_TR(0x4e5b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5b50:{NFSU2_TR(0x4e5b50);
__builtin_memmove((R+16),(R+20),4);
}
B4e5b52:{NFSU2_TR(0x4e5b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5b53:{NFSU2_TR(0x4e5b53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5b56:L4e5b56:{c.instructions+=2;NFSU2_TR(0x4e5b56);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xda5b8712ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5b5c:{NFSU2_TR(0x4e5b5c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e5cc8;}}
}
B4e5b62:L4e5b62:{c.instructions+=1;NFSU2_TR(0x4e5b62);
if(r1(R+518)){{goto L4e5bcf;}}
}
B4e5b64:L4e5b64:{c.instructions+=2;NFSU2_TR(0x4e5b64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5b6a:{NFSU2_TR(0x4e5b6a);
if(r1(R+518)){{goto L4e5b8c;}}
}
B4e5b6c:L4e5b6c:{c.instructions+=2;NFSU2_TR(0x4e5b6c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd9feec59ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e5b72:{NFSU2_TR(0x4e5b72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5b78:L4e5b78:{c.instructions+=2;NFSU2_TR(0x4e5b78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5b7e:{NFSU2_TR(0x4e5b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5b83ull));
TAIL_STATIC(0x4bc150u,4bc);
}
B4e5b83:L4e5b83:{c.instructions+=6;NFSU2_TR(0x4e5b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5b84:{NFSU2_TR(0x4e5b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5b85:{NFSU2_TR(0x4e5b85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5b86:{NFSU2_TR(0x4e5b86);
__builtin_memmove((R+16),(R+20),4);
}
B4e5b88:{NFSU2_TR(0x4e5b88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5b89:{NFSU2_TR(0x4e5b89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5b8c:L4e5b8c:{c.instructions+=6;NFSU2_TR(0x4e5b8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b8d:{NFSU2_TR(0x4e5b8d);
u8 U[4];
w4(U+0,u32(0x4ae640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b92:{NFSU2_TR(0x4e5b92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e5b98:{NFSU2_TR(0x4e5b98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b99:{NFSU2_TR(0x4e5b99);
u8 U[4];
w4(U+0,u32(0x835918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5b9e:{NFSU2_TR(0x4e5b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5ba3ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e5ba3:L4e5ba3:{c.instructions+=2;NFSU2_TR(0x4e5ba3);
__builtin_memmove((R+4),(R+0),4);
}
B4e5ba5:{NFSU2_TR(0x4e5ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5baaull));
TAIL_STATIC(0x58bc60u,58b);
}
B4e5baa:L4e5baa:{c.instructions+=5;NFSU2_TR(0x4e5baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5bad:{NFSU2_TR(0x4e5bad);
u8 U[4];
w4(U+0,u32(0xff12b5c5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5bb2:{NFSU2_TR(0x4e5bb2);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5bb7:{NFSU2_TR(0x4e5bb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5bb8:{NFSU2_TR(0x4e5bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5bbdull));
TAIL_STATIC(0x558330u,558);
}
B4e5bbd:L4e5bbd:{c.instructions+=8;NFSU2_TR(0x4e5bbd);
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
B4e5bc0:{NFSU2_TR(0x4e5bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5bc6:{NFSU2_TR(0x4e5bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5bc7:{NFSU2_TR(0x4e5bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5bc8:{NFSU2_TR(0x4e5bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5bc9:{NFSU2_TR(0x4e5bc9);
__builtin_memmove((R+16),(R+20),4);
}
B4e5bcb:{NFSU2_TR(0x4e5bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5bcc:{NFSU2_TR(0x4e5bcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5bcf:L4e5bcf:{c.instructions+=2;NFSU2_TR(0x4e5bcf);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e5bd9:{NFSU2_TR(0x4e5bd9);
if(r1(R+518)){{goto L4e5bf1;}}
}
B4e5bdb:L4e5bdb:{c.instructions+=2;NFSU2_TR(0x4e5bdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5be1:{NFSU2_TR(0x4e5be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5be6ull));
TAIL_STATIC(0x58d9f0u,58d);
}
B4e5be6:L4e5be6:{c.instructions+=3;NFSU2_TR(0x4e5be6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5be8:{NFSU2_TR(0x4e5be8);
s1(0x838528,u8(0x1ull));
}
B4e5bef:{NFSU2_TR(0x4e5bef);
if(r1(R+518)){{goto L4e5bf8;}}
}
B4e5bf1:L4e5bf1:{c.instructions+=1;NFSU2_TR(0x4e5bf1);
s1(0x838528,u8(0x0ull));
}
B4e5bf8:L4e5bf8:{c.instructions+=9;NFSU2_TR(0x4e5bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5bfb:{NFSU2_TR(0x4e5bfb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5bfd:{NFSU2_TR(0x4e5bfd);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c02:{NFSU2_TR(0x4e5c02);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c07:{NFSU2_TR(0x4e5c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c08:{NFSU2_TR(0x4e5c08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1198ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5c0f:{NFSU2_TR(0x4e5c0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bdull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5c16:{NFSU2_TR(0x4e5c16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11bcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5c1d:{NFSU2_TR(0x4e5c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5c22ull));
TAIL_STATIC(0x537c00u,537);
}
B4e5c22:L4e5c22:{c.instructions+=5;NFSU2_TR(0x4e5c22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e5c28:{NFSU2_TR(0x4e5c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e5c2b:{NFSU2_TR(0x4e5c2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e5c2e:{NFSU2_TR(0x4e5c2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e5c30:{NFSU2_TR(0x4e5c30);
if(r1(R+518)){{goto L4e5c76;}}
}
B4e5c32:L4e5c32:{c.instructions+=4;NFSU2_TR(0x4e5c32);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5c37:{NFSU2_TR(0x4e5c37);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e5c39:{NFSU2_TR(0x4e5c39);
w4(R+4,u32(0x3full));
}
B4e5c3e:{NFSU2_TR(0x4e5c3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5c42:L4e5c42:{c.instructions+=1;NFSU2_TR(0x4e5c42);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e5c44;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e5c42u);}goto L4e5c42;}
}
B4e5c44:L4e5c44:{c.instructions+=4;NFSU2_TR(0x4e5c44);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4e5c46:{NFSU2_TR(0x4e5c46);
__builtin_memmove((R+4),(R+24),4);
}
B4e5c48:{NFSU2_TR(0x4e5c48);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4e5c49:{NFSU2_TR(0x4e5c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5c4eull));
TAIL_STATIC(0x50ced0u,50c);
}
B4e5c4e:L4e5c4e:{c.instructions+=6;NFSU2_TR(0x4e5c4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c4f:{NFSU2_TR(0x4e5c4f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c54:{NFSU2_TR(0x4e5c54);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e5c58:{NFSU2_TR(0x4e5c58);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c5d:{NFSU2_TR(0x4e5c5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c5e:{NFSU2_TR(0x4e5c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5c63ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e5c63:L4e5c63:{c.instructions+=7;NFSU2_TR(0x4e5c63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e5c66:{NFSU2_TR(0x4e5c66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c67:{NFSU2_TR(0x4e5c67);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c69:{NFSU2_TR(0x4e5c69);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x918ull))));
}
B4e5c6f:{NFSU2_TR(0x4e5c6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c70:{NFSU2_TR(0x4e5c70);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e5c74:{NFSU2_TR(0x4e5c74);
{goto L4e5c82;}
}
B4e5c76:L4e5c76:{c.instructions+=5;NFSU2_TR(0x4e5c76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c77:{NFSU2_TR(0x4e5c77);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c79:{NFSU2_TR(0x4e5c79);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c7b:{NFSU2_TR(0x4e5c7b);
__builtin_memmove((R+4),(R+24),4);
}
B4e5c7d:{NFSU2_TR(0x4e5c7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5c82ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4e5c82:L4e5c82:{c.instructions+=3;NFSU2_TR(0x4e5c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5c88:{NFSU2_TR(0x4e5c88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c89:{NFSU2_TR(0x4e5c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5c8eull));
TAIL_STATIC(0x58a4e0u,58a);
}
B4e5c8e:L4e5c8e:{c.instructions+=6;NFSU2_TR(0x4e5c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5c91:{NFSU2_TR(0x4e5c91);
u8 U[4];
w4(U+0,u32(0x7d485221ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c96:{NFSU2_TR(0x4e5c96);
u8 U[4];
w4(U+0,u32(0x759898cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c9b:{NFSU2_TR(0x4e5c9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5c9c:{NFSU2_TR(0x4e5c9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11a1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5ca3:{NFSU2_TR(0x4e5ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5ca8ull));
TAIL_STATIC(0x495460u,495);
}
B4e5ca8:L4e5ca8:{c.instructions+=5;NFSU2_TR(0x4e5ca8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e5cab:{NFSU2_TR(0x4e5cab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5cad:{NFSU2_TR(0x4e5cad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5caf:{NFSU2_TR(0x4e5caf);
__builtin_memmove((R+4),(R+24),4);
}
B4e5cb1:{NFSU2_TR(0x4e5cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5cb6ull));
TAIL_STATIC(0x4d1ea0u,4d1);
}
B4e5cb6:L4e5cb6:{c.instructions+=3;NFSU2_TR(0x4e5cb6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5cb8:{NFSU2_TR(0x4e5cb8);
__builtin_memmove((R+4),(R+24),4);
}
B4e5cba:{NFSU2_TR(0x4e5cba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5cbfull));
TAIL_STATIC(0x4bba20u,4bb);
}
B4e5cbf:L4e5cbf:{c.instructions+=6;NFSU2_TR(0x4e5cbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5cc0:{NFSU2_TR(0x4e5cc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5cc1:{NFSU2_TR(0x4e5cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5cc2:{NFSU2_TR(0x4e5cc2);
__builtin_memmove((R+16),(R+20),4);
}
B4e5cc4:{NFSU2_TR(0x4e5cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5cc5:{NFSU2_TR(0x4e5cc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5cc8:L4e5cc8:{c.instructions+=2;NFSU2_TR(0x4e5cc8);
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
B4e5cce:{NFSU2_TR(0x4e5cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e5cd9;}}
}
B4e5cd0:L4e5cd0:{c.instructions+=3;NFSU2_TR(0x4e5cd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5cd2:{NFSU2_TR(0x4e5cd2);
__builtin_memmove((R+4),(R+24),4);
}
B4e5cd4:{NFSU2_TR(0x4e5cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5cd9ull));
TAIL_STATIC(0x49ee40u,49e);
}
B4e5cd9:L4e5cd9:{c.instructions+=6;NFSU2_TR(0x4e5cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5cda:{NFSU2_TR(0x4e5cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5cdb:{NFSU2_TR(0x4e5cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e5cdc:{NFSU2_TR(0x4e5cdc);
__builtin_memmove((R+16),(R+20),4);
}
B4e5cde:{NFSU2_TR(0x4e5cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e5cdf:{NFSU2_TR(0x4e5cdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5d40:L4e5d40:{c.instructions+=13;NFSU2_TR(0x4e5d40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d42:{NFSU2_TR(0x4e5d42);
u8 U[4];
w4(U+0,u32(0x7748b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d47:{NFSU2_TR(0x4e5d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5d4d:{NFSU2_TR(0x4e5d4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d4e:{NFSU2_TR(0x4e5d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5d55:{NFSU2_TR(0x4e5d55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d56:{NFSU2_TR(0x4e5d56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d57:{NFSU2_TR(0x4e5d57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d58:{NFSU2_TR(0x4e5d58);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e5d5c:{NFSU2_TR(0x4e5d5c);
__builtin_memmove((R+24),(R+4),4);
}
B4e5d5e:{NFSU2_TR(0x4e5d5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d5f:{NFSU2_TR(0x4e5d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5d63:{NFSU2_TR(0x4e5d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5d68ull));
TAIL_STATIC(0x551de0u,551);
}
B4e5d68:L4e5d68:{c.instructions+=12;NFSU2_TR(0x4e5d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5d6b:{NFSU2_TR(0x4e5d6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d6d:{NFSU2_TR(0x4e5d6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d6f:{NFSU2_TR(0x4e5d6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d71:{NFSU2_TR(0x4e5d71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d73:{NFSU2_TR(0x4e5d73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d75:{NFSU2_TR(0x4e5d75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d77:{NFSU2_TR(0x4e5d77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d78:{NFSU2_TR(0x4e5d78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5d7b:{NFSU2_TR(0x4e5d7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e5d83:{NFSU2_TR(0x4e5d83);
u8 U[4];
w4(U+0,u32(0x7960ccull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e5d89:{NFSU2_TR(0x4e5d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5d8eull));
TAIL_STATIC(0x542ca0u,542);
}
B4e5d8e:L4e5d8e:{c.instructions+=9;NFSU2_TR(0x4e5d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5d91:{NFSU2_TR(0x4e5d91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d93:{NFSU2_TR(0x4e5d93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d95:{NFSU2_TR(0x4e5d95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d97:{NFSU2_TR(0x4e5d97);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d9c:{NFSU2_TR(0x4e5d9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5d9d:{NFSU2_TR(0x4e5d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5da3:{NFSU2_TR(0x4e5da3);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5da8:{NFSU2_TR(0x4e5da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5dadull));
TAIL_STATIC(0x542ac0u,542);
}
B4e5dad:L4e5dad:{c.instructions+=2;NFSU2_TR(0x4e5dad);
__builtin_memmove((R+4),(R+24),4);
}
B4e5daf:{NFSU2_TR(0x4e5daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5db4ull));
TAIL_STATIC(0x4d2ba0u,4d2);
}
B4e5db4:L4e5db4:{c.instructions+=3;NFSU2_TR(0x4e5db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5db7:{NFSU2_TR(0x4e5db7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5db9:{NFSU2_TR(0x4e5db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5dbeull));
TAIL_STATIC(0x504820u,504);
}
B4e5dbe:L4e5dbe:{c.instructions+=4;NFSU2_TR(0x4e5dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5dc1:{NFSU2_TR(0x4e5dc1);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5dc6:{NFSU2_TR(0x4e5dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5dc7:{NFSU2_TR(0x4e5dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5dccull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5dcc:L4e5dcc:{c.instructions+=2;NFSU2_TR(0x4e5dcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5dcd:{NFSU2_TR(0x4e5dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5dd2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5dd2:L4e5dd2:{c.instructions+=4;NFSU2_TR(0x4e5dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5dd5:{NFSU2_TR(0x4e5dd5);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5dda:{NFSU2_TR(0x4e5dda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ddb:{NFSU2_TR(0x4e5ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5de0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5de0:L4e5de0:{c.instructions+=2;NFSU2_TR(0x4e5de0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5de1:{NFSU2_TR(0x4e5de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5de6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5de6:L4e5de6:{c.instructions+=4;NFSU2_TR(0x4e5de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5de9:{NFSU2_TR(0x4e5de9);
u8 U[4];
w4(U+0,u32(0x3fbb7a4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5dee:{NFSU2_TR(0x4e5dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5def:{NFSU2_TR(0x4e5def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5df4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5df4:L4e5df4:{c.instructions+=2;NFSU2_TR(0x4e5df4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5df5:{NFSU2_TR(0x4e5df5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5dfaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5dfa:L4e5dfa:{c.instructions+=4;NFSU2_TR(0x4e5dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5dfd:{NFSU2_TR(0x4e5dfd);
u8 U[4];
w4(U+0,u32(0x688a1551ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e02:{NFSU2_TR(0x4e5e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e03:{NFSU2_TR(0x4e5e03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5e08ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5e08:L4e5e08:{c.instructions+=2;NFSU2_TR(0x4e5e08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e09:{NFSU2_TR(0x4e5e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5e0eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5e0e:L4e5e0e:{c.instructions+=4;NFSU2_TR(0x4e5e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5e11:{NFSU2_TR(0x4e5e11);
u8 U[4];
w4(U+0,u32(0x9c7c3c73ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e16:{NFSU2_TR(0x4e5e16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e17:{NFSU2_TR(0x4e5e17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5e1cull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5e1c:L4e5e1c:{c.instructions+=2;NFSU2_TR(0x4e5e1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e1d:{NFSU2_TR(0x4e5e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5e22ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5e22:L4e5e22:{c.instructions+=8;NFSU2_TR(0x4e5e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5e26:{NFSU2_TR(0x4e5e26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4e5e29:{NFSU2_TR(0x4e5e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5e2a:{NFSU2_TR(0x4e5e2a);
__builtin_memmove((R+0),(R+24),4);
}
B4e5e2c:{NFSU2_TR(0x4e5e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5e2d:{NFSU2_TR(0x4e5e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5e34:{NFSU2_TR(0x4e5e34);
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
B4e5e37:{NFSU2_TR(0x4e5e37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5e40:L4e5e40:{c.instructions+=3;NFSU2_TR(0x4e5e40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e41:{NFSU2_TR(0x4e5e41);
__builtin_memmove((R+24),(R+4),4);
}
B4e5e43:{NFSU2_TR(0x4e5e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5e48ull));
TAIL_STATIC(0x4d2b20u,4d2);
}
B4e5e48:L4e5e48:{c.instructions+=2;NFSU2_TR(0x4e5e48);
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
B4e5e4d:{NFSU2_TR(0x4e5e4d);
if(r1(R+518)){{goto L4e5e58;}}
}
B4e5e4f:L4e5e4f:{c.instructions+=2;NFSU2_TR(0x4e5e4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e50:{NFSU2_TR(0x4e5e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5e55ull));
TAIL_STATIC(0x575630u,575);
}
B4e5e55:L4e5e55:{c.instructions+=1;NFSU2_TR(0x4e5e55);
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
B4e5e58:L4e5e58:{c.instructions+=3;NFSU2_TR(0x4e5e58);
__builtin_memmove((R+0),(R+24),4);
}
B4e5e5a:{NFSU2_TR(0x4e5e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5e5b:{NFSU2_TR(0x4e5e5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5e60:L4e5e60:{c.instructions+=13;NFSU2_TR(0x4e5e60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e62:{NFSU2_TR(0x4e5e62);
u8 U[4];
w4(U+0,u32(0x7748b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e67:{NFSU2_TR(0x4e5e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5e6d:{NFSU2_TR(0x4e5e6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e6e:{NFSU2_TR(0x4e5e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5e75:{NFSU2_TR(0x4e5e75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e76:{NFSU2_TR(0x4e5e76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e77:{NFSU2_TR(0x4e5e77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e78:{NFSU2_TR(0x4e5e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e5e7c:{NFSU2_TR(0x4e5e7c);
__builtin_memmove((R+24),(R+4),4);
}
B4e5e7e:{NFSU2_TR(0x4e5e7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e7f:{NFSU2_TR(0x4e5e7f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5e83:{NFSU2_TR(0x4e5e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5e88ull));
TAIL_STATIC(0x551de0u,551);
}
B4e5e88:L4e5e88:{c.instructions+=12;NFSU2_TR(0x4e5e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5e8b:{NFSU2_TR(0x4e5e8b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e8d:{NFSU2_TR(0x4e5e8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e8f:{NFSU2_TR(0x4e5e8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e91:{NFSU2_TR(0x4e5e91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e93:{NFSU2_TR(0x4e5e93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e95:{NFSU2_TR(0x4e5e95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e97:{NFSU2_TR(0x4e5e97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5e98:{NFSU2_TR(0x4e5e98);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5e9b:{NFSU2_TR(0x4e5e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e5ea3:{NFSU2_TR(0x4e5ea3);
u8 U[4];
w4(U+0,u32(0x7960ecull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e5ea9:{NFSU2_TR(0x4e5ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5eaeull));
TAIL_STATIC(0x542ca0u,542);
}
B4e5eae:L4e5eae:{c.instructions+=9;NFSU2_TR(0x4e5eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5eb1:{NFSU2_TR(0x4e5eb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5eb3:{NFSU2_TR(0x4e5eb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5eb5:{NFSU2_TR(0x4e5eb5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5eb7:{NFSU2_TR(0x4e5eb7);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ebc:{NFSU2_TR(0x4e5ebc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ebd:{NFSU2_TR(0x4e5ebd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e5ec3:{NFSU2_TR(0x4e5ec3);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5ec8:{NFSU2_TR(0x4e5ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5ecdull));
TAIL_STATIC(0x542ac0u,542);
}
B4e5ecd:L4e5ecd:{c.instructions+=2;NFSU2_TR(0x4e5ecd);
__builtin_memmove((R+4),(R+24),4);
}
B4e5ecf:{NFSU2_TR(0x4e5ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5ed4ull));
TAIL_STATIC(0x4d3060u,4d3);
}
B4e5ed4:L4e5ed4:{c.instructions+=3;NFSU2_TR(0x4e5ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5ed7:{NFSU2_TR(0x4e5ed7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ed9:{NFSU2_TR(0x4e5ed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5edeull));
TAIL_STATIC(0x504820u,504);
}
B4e5ede:L4e5ede:{c.instructions+=4;NFSU2_TR(0x4e5ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5ee1:{NFSU2_TR(0x4e5ee1);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ee6:{NFSU2_TR(0x4e5ee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ee7:{NFSU2_TR(0x4e5ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5eecull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5eec:L4e5eec:{c.instructions+=2;NFSU2_TR(0x4e5eec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5eed:{NFSU2_TR(0x4e5eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5ef2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5ef2:L4e5ef2:{c.instructions+=4;NFSU2_TR(0x4e5ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5ef5:{NFSU2_TR(0x4e5ef5);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5efa:{NFSU2_TR(0x4e5efa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5efb:{NFSU2_TR(0x4e5efb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f00ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5f00:L4e5f00:{c.instructions+=2;NFSU2_TR(0x4e5f00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f01:{NFSU2_TR(0x4e5f01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f06ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5f06:L4e5f06:{c.instructions+=4;NFSU2_TR(0x4e5f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5f09:{NFSU2_TR(0x4e5f09);
u8 U[4];
w4(U+0,u32(0x3fbb7a4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f0e:{NFSU2_TR(0x4e5f0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f0f:{NFSU2_TR(0x4e5f0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f14ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5f14:L4e5f14:{c.instructions+=2;NFSU2_TR(0x4e5f14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f15:{NFSU2_TR(0x4e5f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f1aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5f1a:L4e5f1a:{c.instructions+=4;NFSU2_TR(0x4e5f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5f1d:{NFSU2_TR(0x4e5f1d);
u8 U[4];
w4(U+0,u32(0x688a1551ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f22:{NFSU2_TR(0x4e5f22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f23:{NFSU2_TR(0x4e5f23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f28ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5f28:L4e5f28:{c.instructions+=2;NFSU2_TR(0x4e5f28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f29:{NFSU2_TR(0x4e5f29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f2eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5f2e:L4e5f2e:{c.instructions+=4;NFSU2_TR(0x4e5f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5f31:{NFSU2_TR(0x4e5f31);
u8 U[4];
w4(U+0,u32(0x9c7c3c73ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f36:{NFSU2_TR(0x4e5f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f37:{NFSU2_TR(0x4e5f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f3cull));
TAIL_STATIC(0x5379c0u,537);
}
B4e5f3c:L4e5f3c:{c.instructions+=2;NFSU2_TR(0x4e5f3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f3d:{NFSU2_TR(0x4e5f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f42ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e5f42:L4e5f42:{c.instructions+=8;NFSU2_TR(0x4e5f42);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e5f46:{NFSU2_TR(0x4e5f46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4e5f49:{NFSU2_TR(0x4e5f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e5f4a:{NFSU2_TR(0x4e5f4a);
__builtin_memmove((R+0),(R+24),4);
}
B4e5f4c:{NFSU2_TR(0x4e5f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5f4d:{NFSU2_TR(0x4e5f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5f54:{NFSU2_TR(0x4e5f54);
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
B4e5f57:{NFSU2_TR(0x4e5f57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5f60:L4e5f60:{c.instructions+=3;NFSU2_TR(0x4e5f60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f61:{NFSU2_TR(0x4e5f61);
__builtin_memmove((R+24),(R+4),4);
}
B4e5f63:{NFSU2_TR(0x4e5f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f68ull));
TAIL_STATIC(0x4d2fe0u,4d2);
}
B4e5f68:L4e5f68:{c.instructions+=2;NFSU2_TR(0x4e5f68);
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
B4e5f6d:{NFSU2_TR(0x4e5f6d);
if(r1(R+518)){{goto L4e5f78;}}
}
B4e5f6f:L4e5f6f:{c.instructions+=2;NFSU2_TR(0x4e5f6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f70:{NFSU2_TR(0x4e5f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5f75ull));
TAIL_STATIC(0x575630u,575);
}
B4e5f75:L4e5f75:{c.instructions+=1;NFSU2_TR(0x4e5f75);
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
B4e5f78:L4e5f78:{c.instructions+=3;NFSU2_TR(0x4e5f78);
__builtin_memmove((R+0),(R+24),4);
}
B4e5f7a:{NFSU2_TR(0x4e5f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5f7b:{NFSU2_TR(0x4e5f7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e5f80:L4e5f80:{c.instructions+=17;NFSU2_TR(0x4e5f80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f81:{NFSU2_TR(0x4e5f81);
__builtin_memmove((R+20),(R+16),4);
}
B4e5f83:{NFSU2_TR(0x4e5f83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e5f86:{NFSU2_TR(0x4e5f86);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f88:{NFSU2_TR(0x4e5f88);
u8 U[4];
w4(U+0,u32(0x775e12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f8d:{NFSU2_TR(0x4e5f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5f93:{NFSU2_TR(0x4e5f93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5f94:{NFSU2_TR(0x4e5f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5f9b:{NFSU2_TR(0x4e5f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x908ull))));
}
B4e5fa1:{NFSU2_TR(0x4e5fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5fa4:{NFSU2_TR(0x4e5fa4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5fa5:{NFSU2_TR(0x4e5fa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5fa6:{NFSU2_TR(0x4e5fa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5fa7:{NFSU2_TR(0x4e5fa7);
__builtin_memmove((R+28),(R+4),4);
}
B4e5fa9:{NFSU2_TR(0x4e5fa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5faa:{NFSU2_TR(0x4e5faa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5fae:{NFSU2_TR(0x4e5fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e5fb3ull));
TAIL_STATIC(0x552330u,552);
}
B4e5fb3:L4e5fb3:{c.instructions+=20;NFSU2_TR(0x4e5fb3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e5fb5:{NFSU2_TR(0x4e5fb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e5fbb:{NFSU2_TR(0x4e5fbb);
u8 U[4];
w4(U+0,u32(0x797908ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e5fc1:{NFSU2_TR(0x4e5fc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5fc8:{NFSU2_TR(0x4e5fc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4e5fca:{NFSU2_TR(0x4e5fca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e5fcd:{NFSU2_TR(0x4e5fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5fd0:{NFSU2_TR(0x4e5fd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e5fd3:{NFSU2_TR(0x4e5fd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e5fd6:{NFSU2_TR(0x4e5fd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e5fd9:{NFSU2_TR(0x4e5fd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e5fdc:{NFSU2_TR(0x4e5fdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e5fdf:{NFSU2_TR(0x4e5fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5fe2:{NFSU2_TR(0x4e5fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e5fe5:{NFSU2_TR(0x4e5fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e5fe8:{NFSU2_TR(0x4e5fe8);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5fed:{NFSU2_TR(0x4e5fed);
u8 U[4];
w4(U+0,u32(0x7978fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ff2:{NFSU2_TR(0x4e5ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e5ff3:{NFSU2_TR(0x4e5ff3);
u8 U[5];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e5ffb:{NFSU2_TR(0x4e5ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x4e6001u,4e6);
}
XIT:NFSU2_TR_EXIT(0x4e5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
