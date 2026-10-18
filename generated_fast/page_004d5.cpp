#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4bc(u8* __restrict R,Cpu& c);
u32 body_4bd(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4d6(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4d5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4d5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4d5(u8* __restrict R,Cpu& c);
u32 page_4d5(Cpu& c){return body_4d5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4d5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4d5003:goto L4d5003;
case 0x4d5005:c.instructions+=2;goto B4d5005;
case 0x4d500a:c.instructions+=1;goto B4d500a;
case 0x4d500e:goto L4d500e;
case 0x4d5010:goto L4d5010;
case 0x4d5014:c.instructions+=3;goto B4d5014;
case 0x4d5017:c.instructions+=2;goto B4d5017;
case 0x4d5019:c.instructions+=1;goto B4d5019;
case 0x4d501b:goto L4d501b;
case 0x4d501f:c.instructions+=2;goto B4d501f;
case 0x4d5021:c.instructions+=1;goto B4d5021;
case 0x4d5023:goto L4d5023;
case 0x4d5025:c.instructions+=1;goto B4d5025;
case 0x4d502a:goto L4d502a;
case 0x4d502b:c.instructions+=5;goto B4d502b;
case 0x4d502c:c.instructions+=4;goto B4d502c;
case 0x4d502d:c.instructions+=3;goto B4d502d;
case 0x4d502f:c.instructions+=2;goto B4d502f;
case 0x4d5030:c.instructions+=1;goto B4d5030;
case 0x4d5031:goto L4d5031;
case 0x4d5036:goto L4d5036;
case 0x4d503c:c.instructions+=4;goto B4d503c;
case 0x4d5040:c.instructions+=3;goto B4d5040;
case 0x4d5041:c.instructions+=2;goto B4d5041;
case 0x4d5042:c.instructions+=1;goto B4d5042;
case 0x4d5047:goto L4d5047;
case 0x4d504a:c.instructions+=2;goto B4d504a;
case 0x4d504c:c.instructions+=1;goto B4d504c;
case 0x4d504e:goto L4d504e;
case 0x4d5051:c.instructions+=3;goto B4d5051;
case 0x4d5052:c.instructions+=2;goto B4d5052;
case 0x4d5053:c.instructions+=1;goto B4d5053;
case 0x4d5058:goto L4d5058;
case 0x4d505b:goto L4d505b;
case 0x4d505d:c.instructions+=1;goto B4d505d;
case 0x4d5062:goto L4d5062;
case 0x4d5063:c.instructions+=5;goto B4d5063;
case 0x4d5064:c.instructions+=4;goto B4d5064;
case 0x4d5065:c.instructions+=3;goto B4d5065;
case 0x4d5067:c.instructions+=2;goto B4d5067;
case 0x4d5068:c.instructions+=1;goto B4d5068;
case 0x4d5070:goto L4d5070;
case 0x4d5072:c.instructions+=7;goto B4d5072;
case 0x4d5077:c.instructions+=6;goto B4d5077;
case 0x4d507d:c.instructions+=5;goto B4d507d;
case 0x4d507e:c.instructions+=4;goto B4d507e;
case 0x4d5085:c.instructions+=3;goto B4d5085;
case 0x4d5086:c.instructions+=2;goto B4d5086;
case 0x4d5088:c.instructions+=1;goto B4d5088;
case 0x4d508d:goto L4d508d;
case 0x4d5090:c.instructions+=4;goto B4d5090;
case 0x4d5094:c.instructions+=3;goto B4d5094;
case 0x4d5096:c.instructions+=2;goto B4d5096;
case 0x4d509e:c.instructions+=1;goto B4d509e;
case 0x4d50a0:goto L4d50a0;
case 0x4d50a4:c.instructions+=3;goto B4d50a4;
case 0x4d50a5:c.instructions+=2;goto B4d50a5;
case 0x4d50a7:c.instructions+=1;goto B4d50a7;
case 0x4d50ac:goto L4d50ac;
case 0x4d50b0:c.instructions+=3;goto B4d50b0;
case 0x4d50b7:c.instructions+=2;goto B4d50b7;
case 0x4d50ba:c.instructions+=1;goto B4d50ba;
case 0x4d50bb:goto L4d50bb;
case 0x4d50bf:c.instructions+=4;goto B4d50bf;
case 0x4d50c1:c.instructions+=3;goto B4d50c1;
case 0x4d50c8:c.instructions+=2;goto B4d50c8;
case 0x4d50cb:c.instructions+=1;goto B4d50cb;
case 0x4d50d0:goto L4d50d0;
case 0x4d50d2:c.instructions+=14;goto B4d50d2;
case 0x4d50d7:c.instructions+=13;goto B4d50d7;
case 0x4d50dd:c.instructions+=12;goto B4d50dd;
case 0x4d50de:c.instructions+=11;goto B4d50de;
case 0x4d50e5:c.instructions+=10;goto B4d50e5;
case 0x4d50e6:c.instructions+=9;goto B4d50e6;
case 0x4d50e7:c.instructions+=8;goto B4d50e7;
case 0x4d50e9:c.instructions+=7;goto B4d50e9;
case 0x4d50ed:c.instructions+=6;goto B4d50ed;
case 0x4d50f3:c.instructions+=5;goto B4d50f3;
case 0x4d50f6:c.instructions+=4;goto B4d50f6;
case 0x4d50f8:c.instructions+=3;goto B4d50f8;
case 0x4d5100:c.instructions+=2;goto B4d5100;
case 0x4d5107:c.instructions+=1;goto B4d5107;
case 0x4d5109:goto L4d5109;
case 0x4d510a:c.instructions+=1;goto B4d510a;
case 0x4d510f:goto L4d510f;
case 0x4d5112:c.instructions+=1;goto B4d5112;
case 0x4d5119:goto L4d5119;
case 0x4d511e:goto L4d511e;
case 0x4d5125:c.instructions+=1;goto B4d5125;
case 0x4d5127:goto L4d5127;
case 0x4d512c:goto L4d512c;
case 0x4d5132:c.instructions+=2;goto B4d5132;
case 0x4d5134:c.instructions+=1;goto B4d5134;
case 0x4d5136:goto L4d5136;
case 0x4d513b:goto L4d513b;
case 0x4d5141:c.instructions+=2;goto B4d5141;
case 0x4d5142:c.instructions+=1;goto B4d5142;
case 0x4d5147:goto L4d5147;
case 0x4d514a:goto L4d514a;
case 0x4d514c:c.instructions+=2;goto B4d514c;
case 0x4d5151:c.instructions+=1;goto B4d5151;
case 0x4d5156:goto L4d5156;
case 0x4d5159:c.instructions+=3;goto B4d5159;
case 0x4d515c:c.instructions+=2;goto B4d515c;
case 0x4d5161:c.instructions+=1;goto B4d5161;
case 0x4d5166:goto L4d5166;
case 0x4d5168:c.instructions+=2;goto B4d5168;
case 0x4d5170:c.instructions+=1;goto B4d5170;
case 0x4d5175:goto L4d5175;
case 0x4d5179:c.instructions+=4;goto B4d5179;
case 0x4d517a:c.instructions+=3;goto B4d517a;
case 0x4d5181:c.instructions+=2;goto B4d5181;
case 0x4d5184:c.instructions+=1;goto B4d5184;
case 0x4d5190:goto L4d5190;
case 0x4d5191:c.instructions+=10;goto B4d5191;
case 0x4d5193:c.instructions+=9;goto B4d5193;
case 0x4d5196:c.instructions+=8;goto B4d5196;
case 0x4d519c:c.instructions+=7;goto B4d519c;
case 0x4d519d:c.instructions+=6;goto B4d519d;
case 0x4d519f:c.instructions+=5;goto B4d519f;
case 0x4d51a2:c.instructions+=4;goto B4d51a2;
case 0x4d51a5:c.instructions+=3;goto B4d51a5;
case 0x4d51a8:c.instructions+=2;goto B4d51a8;
case 0x4d51a9:c.instructions+=1;goto B4d51a9;
case 0x4d51af:goto L4d51af;
case 0x4d51b6:goto L4d51b6;
case 0x4d51c0:c.instructions+=1;goto B4d51c0;
case 0x4d51c2:goto L4d51c2;
case 0x4d51c7:c.instructions+=2;goto B4d51c7;
case 0x4d51c9:c.instructions+=1;goto B4d51c9;
case 0x4d51cb:goto L4d51cb;
case 0x4d51cd:c.instructions+=1;goto B4d51cd;
case 0x4d51d2:goto L4d51d2;
case 0x4d51d3:c.instructions+=4;goto B4d51d3;
case 0x4d51d4:c.instructions+=3;goto B4d51d4;
case 0x4d51d6:c.instructions+=2;goto B4d51d6;
case 0x4d51d7:c.instructions+=1;goto B4d51d7;
case 0x4d51d8:goto L4d51d8;
case 0x4d51da:c.instructions+=1;goto B4d51da;
case 0x4d51df:goto L4d51df;
case 0x4d51e0:c.instructions+=4;goto B4d51e0;
case 0x4d51e1:c.instructions+=3;goto B4d51e1;
case 0x4d51e3:c.instructions+=2;goto B4d51e3;
case 0x4d51e4:c.instructions+=1;goto B4d51e4;
case 0x4d51e5:goto L4d51e5;
case 0x4d51ea:c.instructions+=9;goto B4d51ea;
case 0x4d51f0:c.instructions+=8;goto B4d51f0;
case 0x4d51f2:c.instructions+=7;goto B4d51f2;
case 0x4d51f6:c.instructions+=6;goto B4d51f6;
case 0x4d51fa:c.instructions+=5;goto B4d51fa;
case 0x4d5200:c.instructions+=4;goto B4d5200;
case 0x4d5206:c.instructions+=3;goto B4d5206;
case 0x4d5208:c.instructions+=2;goto B4d5208;
case 0x4d520b:c.instructions+=1;goto B4d520b;
case 0x4d5211:goto L4d5211;
case 0x4d5214:c.instructions+=5;goto B4d5214;
case 0x4d5216:c.instructions+=4;goto B4d5216;
case 0x4d521b:c.instructions+=3;goto B4d521b;
case 0x4d521c:c.instructions+=2;goto B4d521c;
case 0x4d5221:c.instructions+=1;goto B4d5221;
case 0x4d5226:goto L4d5226;
case 0x4d5229:c.instructions+=5;goto B4d5229;
case 0x4d522a:c.instructions+=4;goto B4d522a;
case 0x4d522b:c.instructions+=3;goto B4d522b;
case 0x4d522d:c.instructions+=2;goto B4d522d;
case 0x4d522e:c.instructions+=1;goto B4d522e;
case 0x4d522f:goto L4d522f;
case 0x4d5234:c.instructions+=2;goto B4d5234;
case 0x4d5236:c.instructions+=1;goto B4d5236;
case 0x4d523c:goto L4d523c;
case 0x4d5241:goto L4d5241;
case 0x4d5247:c.instructions+=2;goto B4d5247;
case 0x4d5249:c.instructions+=1;goto B4d5249;
case 0x4d524b:goto L4d524b;
case 0x4d5250:c.instructions+=2;goto B4d5250;
case 0x4d5251:c.instructions+=1;goto B4d5251;
case 0x4d5256:goto L4d5256;
case 0x4d5259:c.instructions+=2;goto B4d5259;
case 0x4d525b:c.instructions+=1;goto B4d525b;
case 0x4d525d:goto L4d525d;
case 0x4d5260:c.instructions+=2;goto B4d5260;
case 0x4d5265:c.instructions+=1;goto B4d5265;
case 0x4d526a:goto L4d526a;
case 0x4d526b:c.instructions+=6;goto B4d526b;
case 0x4d526d:c.instructions+=5;goto B4d526d;
case 0x4d526f:c.instructions+=4;goto B4d526f;
case 0x4d5274:c.instructions+=3;goto B4d5274;
case 0x4d5279:c.instructions+=2;goto B4d5279;
case 0x4d527a:c.instructions+=1;goto B4d527a;
case 0x4d527f:goto L4d527f;
case 0x4d5282:c.instructions+=5;goto B4d5282;
case 0x4d5283:c.instructions+=4;goto B4d5283;
case 0x4d5284:c.instructions+=3;goto B4d5284;
case 0x4d5286:c.instructions+=2;goto B4d5286;
case 0x4d5287:c.instructions+=1;goto B4d5287;
case 0x4d5288:goto L4d5288;
case 0x4d528b:c.instructions+=2;goto B4d528b;
case 0x4d5290:c.instructions+=1;goto B4d5290;
case 0x4d5295:goto L4d5295;
case 0x4d5296:c.instructions+=9;goto B4d5296;
case 0x4d5298:c.instructions+=8;goto B4d5298;
case 0x4d529a:c.instructions+=7;goto B4d529a;
case 0x4d529c:c.instructions+=6;goto B4d529c;
case 0x4d529e:c.instructions+=5;goto B4d529e;
case 0x4d52a3:c.instructions+=4;goto B4d52a3;
case 0x4d52a8:c.instructions+=3;goto B4d52a8;
case 0x4d52ad:c.instructions+=2;goto B4d52ad;
case 0x4d52ae:c.instructions+=1;goto B4d52ae;
case 0x4d52b3:goto L4d52b3;
case 0x4d52b6:c.instructions+=5;goto B4d52b6;
case 0x4d52b7:c.instructions+=4;goto B4d52b7;
case 0x4d52b8:c.instructions+=3;goto B4d52b8;
case 0x4d52ba:c.instructions+=2;goto B4d52ba;
case 0x4d52bb:c.instructions+=1;goto B4d52bb;
case 0x4d52bc:goto L4d52bc;
case 0x4d52c1:c.instructions+=2;goto B4d52c1;
case 0x4d52c3:c.instructions+=1;goto B4d52c3;
case 0x4d52c5:goto L4d52c5;
case 0x4d52c7:c.instructions+=1;goto B4d52c7;
case 0x4d52cc:goto L4d52cc;
case 0x4d52cd:c.instructions+=4;goto B4d52cd;
case 0x4d52ce:c.instructions+=3;goto B4d52ce;
case 0x4d52d0:c.instructions+=2;goto B4d52d0;
case 0x4d52d1:c.instructions+=1;goto B4d52d1;
case 0x4d52d2:goto L4d52d2;
case 0x4d52d7:c.instructions+=2;goto B4d52d7;
case 0x4d52d9:c.instructions+=1;goto B4d52d9;
case 0x4d52db:goto L4d52db;
case 0x4d52dd:c.instructions+=1;goto B4d52dd;
case 0x4d52e2:goto L4d52e2;
case 0x4d52e3:c.instructions+=4;goto B4d52e3;
case 0x4d52e4:c.instructions+=3;goto B4d52e4;
case 0x4d52e6:c.instructions+=2;goto B4d52e6;
case 0x4d52e7:c.instructions+=1;goto B4d52e7;
case 0x4d52e8:goto L4d52e8;
case 0x4d52ed:c.instructions+=2;goto B4d52ed;
case 0x4d52ef:c.instructions+=1;goto B4d52ef;
case 0x4d52f5:goto L4d52f5;
case 0x4d52fa:c.instructions+=2;goto B4d52fa;
case 0x4d52fc:c.instructions+=1;goto B4d52fc;
case 0x4d5301:goto L4d5301;
case 0x4d5302:c.instructions+=4;goto B4d5302;
case 0x4d5303:c.instructions+=3;goto B4d5303;
case 0x4d5305:c.instructions+=2;goto B4d5305;
case 0x4d5306:c.instructions+=1;goto B4d5306;
case 0x4d5307:goto L4d5307;
case 0x4d530a:c.instructions+=5;goto B4d530a;
case 0x4d530c:c.instructions+=4;goto B4d530c;
case 0x4d5311:c.instructions+=3;goto B4d5311;
case 0x4d5312:c.instructions+=2;goto B4d5312;
case 0x4d5317:c.instructions+=1;goto B4d5317;
case 0x4d531c:goto L4d531c;
case 0x4d531f:c.instructions+=6;goto B4d531f;
case 0x4d5326:c.instructions+=5;goto B4d5326;
case 0x4d5327:c.instructions+=4;goto B4d5327;
case 0x4d5328:c.instructions+=3;goto B4d5328;
case 0x4d532a:c.instructions+=2;goto B4d532a;
case 0x4d532b:c.instructions+=1;goto B4d532b;
case 0x4d532c:goto L4d532c;
case 0x4d5331:c.instructions+=2;goto B4d5331;
case 0x4d5333:c.instructions+=1;goto B4d5333;
case 0x4d5339:goto L4d5339;
case 0x4d533e:c.instructions+=2;goto B4d533e;
case 0x4d5340:c.instructions+=1;goto B4d5340;
case 0x4d5342:goto L4d5342;
case 0x4d5347:goto L4d5347;
case 0x4d534d:c.instructions+=6;goto B4d534d;
case 0x4d534e:c.instructions+=5;goto B4d534e;
case 0x4d5353:c.instructions+=4;goto B4d5353;
case 0x4d5355:c.instructions+=3;goto B4d5355;
case 0x4d535a:c.instructions+=2;goto B4d535a;
case 0x4d535b:c.instructions+=1;goto B4d535b;
case 0x4d5360:goto L4d5360;
case 0x4d5363:c.instructions+=2;goto B4d5363;
case 0x4d5365:c.instructions+=1;goto B4d5365;
case 0x4d536b:goto L4d536b;
case 0x4d5370:c.instructions+=3;goto B4d5370;
case 0x4d5375:c.instructions+=2;goto B4d5375;
case 0x4d5377:c.instructions+=1;goto B4d5377;
case 0x4d537c:goto L4d537c;
case 0x4d537d:c.instructions+=4;goto B4d537d;
case 0x4d537e:c.instructions+=3;goto B4d537e;
case 0x4d5380:c.instructions+=2;goto B4d5380;
case 0x4d5381:c.instructions+=1;goto B4d5381;
case 0x4d5382:goto L4d5382;
case 0x4d5387:c.instructions+=3;goto B4d5387;
case 0x4d5389:c.instructions+=2;goto B4d5389;
case 0x4d538e:c.instructions+=1;goto B4d538e;
case 0x4d5392:goto L4d5392;
case 0x4d5394:goto L4d5394;
case 0x4d5396:c.instructions+=4;goto B4d5396;
case 0x4d539b:c.instructions+=3;goto B4d539b;
case 0x4d53a0:c.instructions+=2;goto B4d53a0;
case 0x4d53a1:c.instructions+=1;goto B4d53a1;
case 0x4d53a6:goto L4d53a6;
case 0x4d53a9:c.instructions+=5;goto B4d53a9;
case 0x4d53aa:c.instructions+=4;goto B4d53aa;
case 0x4d53ae:c.instructions+=3;goto B4d53ae;
case 0x4d53b3:c.instructions+=2;goto B4d53b3;
case 0x4d53b4:c.instructions+=1;goto B4d53b4;
case 0x4d53b9:goto L4d53b9;
case 0x4d53bd:c.instructions+=6;goto B4d53bd;
case 0x4d53be:c.instructions+=5;goto B4d53be;
case 0x4d53c0:c.instructions+=4;goto B4d53c0;
case 0x4d53c2:c.instructions+=3;goto B4d53c2;
case 0x4d53c4:c.instructions+=2;goto B4d53c4;
case 0x4d53c6:c.instructions+=1;goto B4d53c6;
case 0x4d53c8:goto L4d53c8;
case 0x4d53cd:c.instructions+=3;goto B4d53cd;
case 0x4d53cf:c.instructions+=2;goto B4d53cf;
case 0x4d53d4:c.instructions+=1;goto B4d53d4;
case 0x4d53d8:goto L4d53d8;
case 0x4d53da:goto L4d53da;
case 0x4d53dc:c.instructions+=4;goto B4d53dc;
case 0x4d53e1:c.instructions+=3;goto B4d53e1;
case 0x4d53e6:c.instructions+=2;goto B4d53e6;
case 0x4d53e7:c.instructions+=1;goto B4d53e7;
case 0x4d53ec:goto L4d53ec;
case 0x4d53ef:c.instructions+=5;goto B4d53ef;
case 0x4d53f0:c.instructions+=4;goto B4d53f0;
case 0x4d53f4:c.instructions+=3;goto B4d53f4;
case 0x4d53f9:c.instructions+=2;goto B4d53f9;
case 0x4d53fa:c.instructions+=1;goto B4d53fa;
case 0x4d53ff:goto L4d53ff;
case 0x4d5403:c.instructions+=5;goto B4d5403;
case 0x4d5404:c.instructions+=4;goto B4d5404;
case 0x4d5406:c.instructions+=3;goto B4d5406;
case 0x4d5408:c.instructions+=2;goto B4d5408;
case 0x4d540a:c.instructions+=1;goto B4d540a;
case 0x4d540c:goto L4d540c;
case 0x4d540f:c.instructions+=5;goto B4d540f;
case 0x4d5414:c.instructions+=4;goto B4d5414;
case 0x4d5419:c.instructions+=3;goto B4d5419;
case 0x4d541e:c.instructions+=2;goto B4d541e;
case 0x4d541f:c.instructions+=1;goto B4d541f;
case 0x4d5424:goto L4d5424;
case 0x4d5427:c.instructions+=5;goto B4d5427;
case 0x4d5428:c.instructions+=4;goto B4d5428;
case 0x4d5429:c.instructions+=3;goto B4d5429;
case 0x4d542b:c.instructions+=2;goto B4d542b;
case 0x4d542c:c.instructions+=1;goto B4d542c;
case 0x4d542d:goto L4d542d;
case 0x4d5430:c.instructions+=5;goto B4d5430;
case 0x4d5432:c.instructions+=4;goto B4d5432;
case 0x4d5437:c.instructions+=3;goto B4d5437;
case 0x4d5438:c.instructions+=2;goto B4d5438;
case 0x4d543d:c.instructions+=1;goto B4d543d;
case 0x4d5442:goto L4d5442;
case 0x4d5445:c.instructions+=6;goto B4d5445;
case 0x4d544c:c.instructions+=5;goto B4d544c;
case 0x4d544d:c.instructions+=4;goto B4d544d;
case 0x4d544e:c.instructions+=3;goto B4d544e;
case 0x4d5450:c.instructions+=2;goto B4d5450;
case 0x4d5451:c.instructions+=1;goto B4d5451;
case 0x4d5452:goto L4d5452;
case 0x4d5458:c.instructions+=2;goto B4d5458;
case 0x4d545a:c.instructions+=1;goto B4d545a;
case 0x4d545c:goto L4d545c;
case 0x4d545f:c.instructions+=1;goto B4d545f;
case 0x4d5461:goto L4d5461;
case 0x4d5462:c.instructions+=3;goto B4d5462;
case 0x4d5465:c.instructions+=2;goto B4d5465;
case 0x4d5466:c.instructions+=1;goto B4d5466;
case 0x4d546b:goto L4d546b;
case 0x4d546e:goto L4d546e;
case 0x4d546f:c.instructions+=4;goto B4d546f;
case 0x4d5470:c.instructions+=3;goto B4d5470;
case 0x4d5472:c.instructions+=2;goto B4d5472;
case 0x4d5473:c.instructions+=1;goto B4d5473;
case 0x4d5490:goto L4d5490;
case 0x4d5493:c.instructions+=9;goto B4d5493;
case 0x4d5494:c.instructions+=8;goto B4d5494;
case 0x4d5495:c.instructions+=7;goto B4d5495;
case 0x4d5496:c.instructions+=6;goto B4d5496;
case 0x4d5497:c.instructions+=5;goto B4d5497;
case 0x4d5499:c.instructions+=4;goto B4d5499;
case 0x4d549b:c.instructions+=3;goto B4d549b;
case 0x4d54a0:c.instructions+=2;goto B4d54a0;
case 0x4d54a5:c.instructions+=1;goto B4d54a5;
case 0x4d54a9:goto L4d54a9;
case 0x4d54ab:goto L4d54ab;
case 0x4d54ad:c.instructions+=6;goto B4d54ad;
case 0x4d54b2:c.instructions+=5;goto B4d54b2;
case 0x4d54b3:c.instructions+=4;goto B4d54b3;
case 0x4d54b7:c.instructions+=3;goto B4d54b7;
case 0x4d54b9:c.instructions+=2;goto B4d54b9;
case 0x4d54ba:c.instructions+=1;goto B4d54ba;
case 0x4d54bf:goto L4d54bf;
case 0x4d54c5:c.instructions+=5;goto B4d54c5;
case 0x4d54c8:c.instructions+=4;goto B4d54c8;
case 0x4d54ca:c.instructions+=3;goto B4d54ca;
case 0x4d54cd:c.instructions+=2;goto B4d54cd;
case 0x4d54cf:c.instructions+=1;goto B4d54cf;
case 0x4d54d1:goto L4d54d1;
case 0x4d54d4:c.instructions+=3;goto B4d54d4;
case 0x4d54d9:c.instructions+=2;goto B4d54d9;
case 0x4d54da:c.instructions+=1;goto B4d54da;
case 0x4d54df:goto L4d54df;
case 0x4d54e1:c.instructions+=1;goto B4d54e1;
case 0x4d54e6:goto L4d54e6;
case 0x4d54ea:c.instructions+=2;goto B4d54ea;
case 0x4d54ee:c.instructions+=1;goto B4d54ee;
case 0x4d54f0:goto L4d54f0;
case 0x4d54f4:c.instructions+=5;goto B4d54f4;
case 0x4d54f7:c.instructions+=4;goto B4d54f7;
case 0x4d54f8:c.instructions+=3;goto B4d54f8;
case 0x4d54fd:c.instructions+=2;goto B4d54fd;
case 0x4d5501:c.instructions+=1;goto B4d5501;
case 0x4d5506:goto L4d5506;
case 0x4d5509:c.instructions+=3;goto B4d5509;
case 0x4d550c:c.instructions+=2;goto B4d550c;
case 0x4d550e:c.instructions+=1;goto B4d550e;
case 0x4d5514:goto L4d5514;
case 0x4d551b:goto L4d551b;
case 0x4d551f:c.instructions+=3;goto B4d551f;
case 0x4d5520:c.instructions+=2;goto B4d5520;
case 0x4d5522:c.instructions+=1;goto B4d5522;
case 0x4d5527:goto L4d5527;
case 0x4d5529:c.instructions+=1;goto B4d5529;
case 0x4d552f:goto L4d552f;
case 0x4d5531:c.instructions+=1;goto B4d5531;
case 0x4d5536:goto L4d5536;
case 0x4d5539:c.instructions+=2;goto B4d5539;
case 0x4d553b:c.instructions+=1;goto B4d553b;
case 0x4d5541:goto L4d5541;
case 0x4d5544:c.instructions+=7;goto B4d5544;
case 0x4d5546:c.instructions+=6;goto B4d5546;
case 0x4d5549:c.instructions+=5;goto B4d5549;
case 0x4d554d:c.instructions+=4;goto B4d554d;
case 0x4d5553:c.instructions+=3;goto B4d5553;
case 0x4d555a:c.instructions+=2;goto B4d555a;
case 0x4d555c:c.instructions+=1;goto B4d555c;
case 0x4d5561:goto L4d5561;
case 0x4d5566:c.instructions+=2;goto B4d5566;
case 0x4d5568:c.instructions+=1;goto B4d5568;
case 0x4d556a:goto L4d556a;
case 0x4d556d:c.instructions+=4;goto B4d556d;
case 0x4d5572:c.instructions+=3;goto B4d5572;
case 0x4d5573:c.instructions+=2;goto B4d5573;
case 0x4d5574:c.instructions+=1;goto B4d5574;
case 0x4d5579:goto L4d5579;
case 0x4d557e:c.instructions+=1;goto B4d557e;
case 0x4d5583:goto L4d5583;
case 0x4d5584:c.instructions+=4;goto B4d5584;
case 0x4d5588:c.instructions+=3;goto B4d5588;
case 0x4d558a:c.instructions+=2;goto B4d558a;
case 0x4d558b:c.instructions+=1;goto B4d558b;
case 0x4d5590:goto L4d5590;
case 0x4d5593:c.instructions+=1;goto B4d5593;
case 0x4d5598:goto L4d5598;
case 0x4d559d:c.instructions+=3;goto B4d559d;
case 0x4d559f:c.instructions+=2;goto B4d559f;
case 0x4d55a4:c.instructions+=1;goto B4d55a4;
case 0x4d55a6:goto L4d55a6;
case 0x4d55a8:c.instructions+=2;goto B4d55a8;
case 0x4d55ab:c.instructions+=1;goto B4d55ab;
case 0x4d55ad:goto L4d55ad;
case 0x4d55b2:c.instructions+=1;goto B4d55b2;
case 0x4d55b7:goto L4d55b7;
case 0x4d55b8:c.instructions+=3;goto B4d55b8;
case 0x4d55b9:c.instructions+=2;goto B4d55b9;
case 0x4d55ba:c.instructions+=1;goto B4d55ba;
case 0x4d55bf:goto L4d55bf;
case 0x4d55c4:c.instructions+=1;goto B4d55c4;
case 0x4d55c9:goto L4d55c9;
case 0x4d55ca:c.instructions+=4;goto B4d55ca;
case 0x4d55ce:c.instructions+=3;goto B4d55ce;
case 0x4d55d0:c.instructions+=2;goto B4d55d0;
case 0x4d55d1:c.instructions+=1;goto B4d55d1;
case 0x4d55d6:goto L4d55d6;
case 0x4d55d9:c.instructions+=1;goto B4d55d9;
case 0x4d55de:goto L4d55de;
case 0x4d55e3:c.instructions+=1;goto B4d55e3;
case 0x4d55e8:goto L4d55e8;
case 0x4d55e9:c.instructions+=3;goto B4d55e9;
case 0x4d55ea:c.instructions+=2;goto B4d55ea;
case 0x4d55eb:c.instructions+=1;goto B4d55eb;
case 0x4d55f0:goto L4d55f0;
case 0x4d55f5:c.instructions+=1;goto B4d55f5;
case 0x4d55fa:goto L4d55fa;
case 0x4d55fb:c.instructions+=4;goto B4d55fb;
case 0x4d55ff:c.instructions+=3;goto B4d55ff;
case 0x4d5601:c.instructions+=2;goto B4d5601;
case 0x4d5602:c.instructions+=1;goto B4d5602;
case 0x4d5607:goto L4d5607;
case 0x4d560a:c.instructions+=1;goto B4d560a;
case 0x4d560f:goto L4d560f;
case 0x4d5611:c.instructions+=1;goto B4d5611;
case 0x4d5613:goto L4d5613;
case 0x4d5616:c.instructions+=4;goto B4d5616;
case 0x4d561b:c.instructions+=3;goto B4d561b;
case 0x4d561c:c.instructions+=2;goto B4d561c;
case 0x4d561d:c.instructions+=1;goto B4d561d;
case 0x4d5622:goto L4d5622;
case 0x4d5627:c.instructions+=1;goto B4d5627;
case 0x4d562c:goto L4d562c;
case 0x4d562d:c.instructions+=4;goto B4d562d;
case 0x4d5631:c.instructions+=3;goto B4d5631;
case 0x4d5633:c.instructions+=2;goto B4d5633;
case 0x4d5634:c.instructions+=1;goto B4d5634;
case 0x4d5639:goto L4d5639;
case 0x4d563c:c.instructions+=1;goto B4d563c;
case 0x4d5641:goto L4d5641;
case 0x4d5644:c.instructions+=4;goto B4d5644;
case 0x4d5649:c.instructions+=3;goto B4d5649;
case 0x4d564a:c.instructions+=2;goto B4d564a;
case 0x4d564b:c.instructions+=1;goto B4d564b;
case 0x4d5650:goto L4d5650;
case 0x4d5655:c.instructions+=1;goto B4d5655;
case 0x4d565a:goto L4d565a;
case 0x4d565b:c.instructions+=4;goto B4d565b;
case 0x4d565f:c.instructions+=3;goto B4d565f;
case 0x4d5661:c.instructions+=2;goto B4d5661;
case 0x4d5662:c.instructions+=1;goto B4d5662;
case 0x4d5667:goto L4d5667;
case 0x4d566a:c.instructions+=1;goto B4d566a;
case 0x4d566f:goto L4d566f;
case 0x4d5674:c.instructions+=2;goto B4d5674;
case 0x4d5676:c.instructions+=1;goto B4d5676;
case 0x4d567c:goto L4d567c;
case 0x4d5681:c.instructions+=3;goto B4d5681;
case 0x4d5683:c.instructions+=2;goto B4d5683;
case 0x4d5686:c.instructions+=1;goto B4d5686;
case 0x4d5688:goto L4d5688;
case 0x4d568d:c.instructions+=1;goto B4d568d;
case 0x4d5692:goto L4d5692;
case 0x4d5693:c.instructions+=3;goto B4d5693;
case 0x4d5694:c.instructions+=2;goto B4d5694;
case 0x4d5695:c.instructions+=1;goto B4d5695;
case 0x4d569a:goto L4d569a;
case 0x4d569f:c.instructions+=1;goto B4d569f;
case 0x4d56a4:goto L4d56a4;
case 0x4d56a5:c.instructions+=4;goto B4d56a5;
case 0x4d56a9:c.instructions+=3;goto B4d56a9;
case 0x4d56ab:c.instructions+=2;goto B4d56ab;
case 0x4d56ac:c.instructions+=1;goto B4d56ac;
case 0x4d56b1:goto L4d56b1;
case 0x4d56b4:c.instructions+=1;goto B4d56b4;
case 0x4d56b9:goto L4d56b9;
case 0x4d56be:c.instructions+=2;goto B4d56be;
case 0x4d56c0:c.instructions+=1;goto B4d56c0;
case 0x4d56c2:goto L4d56c2;
case 0x4d56c7:c.instructions+=1;goto B4d56c7;
case 0x4d56cc:goto L4d56cc;
case 0x4d56cd:c.instructions+=3;goto B4d56cd;
case 0x4d56ce:c.instructions+=2;goto B4d56ce;
case 0x4d56cf:c.instructions+=1;goto B4d56cf;
case 0x4d56d4:goto L4d56d4;
case 0x4d56d9:c.instructions+=1;goto B4d56d9;
case 0x4d56de:goto L4d56de;
case 0x4d56df:c.instructions+=4;goto B4d56df;
case 0x4d56e3:c.instructions+=3;goto B4d56e3;
case 0x4d56e5:c.instructions+=2;goto B4d56e5;
case 0x4d56e6:c.instructions+=1;goto B4d56e6;
case 0x4d56eb:goto L4d56eb;
case 0x4d56ee:c.instructions+=1;goto B4d56ee;
case 0x4d56f3:goto L4d56f3;
case 0x4d56f8:c.instructions+=2;goto B4d56f8;
case 0x4d56fa:c.instructions+=1;goto B4d56fa;
case 0x4d56fc:goto L4d56fc;
case 0x4d5701:c.instructions+=1;goto B4d5701;
case 0x4d5706:goto L4d5706;
case 0x4d5707:c.instructions+=3;goto B4d5707;
case 0x4d5708:c.instructions+=2;goto B4d5708;
case 0x4d5709:c.instructions+=1;goto B4d5709;
case 0x4d570e:goto L4d570e;
case 0x4d5713:c.instructions+=1;goto B4d5713;
case 0x4d5715:goto L4d5715;
case 0x4d571a:c.instructions+=1;goto B4d571a;
case 0x4d571f:goto L4d571f;
case 0x4d5720:c.instructions+=3;goto B4d5720;
case 0x4d5721:c.instructions+=2;goto B4d5721;
case 0x4d5722:c.instructions+=1;goto B4d5722;
case 0x4d5727:goto L4d5727;
case 0x4d572c:c.instructions+=1;goto B4d572c;
case 0x4d5731:goto L4d5731;
case 0x4d5732:c.instructions+=4;goto B4d5732;
case 0x4d5736:c.instructions+=3;goto B4d5736;
case 0x4d5738:c.instructions+=2;goto B4d5738;
case 0x4d5739:c.instructions+=1;goto B4d5739;
case 0x4d573e:goto L4d573e;
case 0x4d5741:c.instructions+=1;goto B4d5741;
case 0x4d5746:goto L4d5746;
case 0x4d574b:c.instructions+=1;goto B4d574b;
case 0x4d5750:goto L4d5750;
case 0x4d5751:c.instructions+=4;goto B4d5751;
case 0x4d5755:c.instructions+=3;goto B4d5755;
case 0x4d5757:c.instructions+=2;goto B4d5757;
case 0x4d5758:c.instructions+=1;goto B4d5758;
case 0x4d575d:goto L4d575d;
case 0x4d5760:c.instructions+=1;goto B4d5760;
case 0x4d5765:goto L4d5765;
case 0x4d576a:c.instructions+=3;goto B4d576a;
case 0x4d576c:c.instructions+=2;goto B4d576c;
case 0x4d576f:c.instructions+=1;goto B4d576f;
case 0x4d5771:goto L4d5771;
case 0x4d5776:c.instructions+=1;goto B4d5776;
case 0x4d577b:goto L4d577b;
case 0x4d577c:c.instructions+=3;goto B4d577c;
case 0x4d577d:c.instructions+=2;goto B4d577d;
case 0x4d577e:c.instructions+=1;goto B4d577e;
case 0x4d5783:goto L4d5783;
case 0x4d5788:goto L4d5788;
case 0x4d578d:goto L4d578d;
case 0x4d578e:c.instructions+=4;goto B4d578e;
case 0x4d5792:c.instructions+=3;goto B4d5792;
case 0x4d5794:c.instructions+=2;goto B4d5794;
case 0x4d5795:c.instructions+=1;goto B4d5795;
case 0x4d579a:goto L4d579a;
case 0x4d579d:c.instructions+=1;goto B4d579d;
case 0x4d57a2:goto L4d57a2;
case 0x4d57a7:c.instructions+=1;goto B4d57a7;
case 0x4d57ac:goto L4d57ac;
case 0x4d57ad:c.instructions+=3;goto B4d57ad;
case 0x4d57ae:c.instructions+=2;goto B4d57ae;
case 0x4d57af:c.instructions+=1;goto B4d57af;
case 0x4d57b4:goto L4d57b4;
case 0x4d57b9:c.instructions+=1;goto B4d57b9;
case 0x4d57be:goto L4d57be;
case 0x4d57bf:c.instructions+=4;goto B4d57bf;
case 0x4d57c3:c.instructions+=3;goto B4d57c3;
case 0x4d57c5:c.instructions+=2;goto B4d57c5;
case 0x4d57c6:c.instructions+=1;goto B4d57c6;
case 0x4d57cb:goto L4d57cb;
case 0x4d57ce:c.instructions+=1;goto B4d57ce;
case 0x4d57d3:goto L4d57d3;
case 0x4d57d8:c.instructions+=2;goto B4d57d8;
case 0x4d57da:c.instructions+=1;goto B4d57da;
case 0x4d57dc:goto L4d57dc;
case 0x4d57df:c.instructions+=2;goto B4d57df;
case 0x4d57e4:c.instructions+=1;goto B4d57e4;
case 0x4d57e9:goto L4d57e9;
case 0x4d57ea:c.instructions+=3;goto B4d57ea;
case 0x4d57eb:c.instructions+=2;goto B4d57eb;
case 0x4d57ec:c.instructions+=1;goto B4d57ec;
case 0x4d57f1:goto L4d57f1;
case 0x4d57f6:c.instructions+=1;goto B4d57f6;
case 0x4d57fb:goto L4d57fb;
case 0x4d57fc:c.instructions+=4;goto B4d57fc;
case 0x4d5800:c.instructions+=3;goto B4d5800;
case 0x4d5802:c.instructions+=2;goto B4d5802;
case 0x4d5803:c.instructions+=1;goto B4d5803;
case 0x4d5808:goto L4d5808;
case 0x4d580b:c.instructions+=1;goto B4d580b;
case 0x4d5810:goto L4d5810;
case 0x4d5812:goto L4d5812;
case 0x4d5814:c.instructions+=5;goto B4d5814;
case 0x4d5816:c.instructions+=4;goto B4d5816;
case 0x4d581a:c.instructions+=3;goto B4d581a;
case 0x4d581b:c.instructions+=2;goto B4d581b;
case 0x4d581d:c.instructions+=1;goto B4d581d;
case 0x4d5822:goto L4d5822;
case 0x4d5826:c.instructions+=4;goto B4d5826;
case 0x4d5827:c.instructions+=3;goto B4d5827;
case 0x4d5829:c.instructions+=2;goto B4d5829;
case 0x4d582c:c.instructions+=1;goto B4d582c;
case 0x4d5831:goto L4d5831;
case 0x4d5832:c.instructions+=2;goto B4d5832;
case 0x4d5834:c.instructions+=1;goto B4d5834;
case 0x4d5839:goto L4d5839;
case 0x4d583d:goto L4d583d;
case 0x4d5841:c.instructions+=3;goto B4d5841;
case 0x4d5844:c.instructions+=2;goto B4d5844;
case 0x4d5848:c.instructions+=1;goto B4d5848;
case 0x4d584e:goto L4d584e;
case 0x4d5852:c.instructions+=3;goto B4d5852;
case 0x4d5854:c.instructions+=2;goto B4d5854;
case 0x4d5857:c.instructions+=1;goto B4d5857;
case 0x4d5859:goto L4d5859;
case 0x4d5860:goto L4d5860;
case 0x4d5862:c.instructions+=1;goto B4d5862;
case 0x4d5867:goto L4d5867;
case 0x4d586a:c.instructions+=2;goto B4d586a;
case 0x4d586c:c.instructions+=1;goto B4d586c;
case 0x4d586e:goto L4d586e;
case 0x4d5871:c.instructions+=7;goto B4d5871;
case 0x4d5873:c.instructions+=6;goto B4d5873;
case 0x4d5876:c.instructions+=5;goto B4d5876;
case 0x4d587a:c.instructions+=4;goto B4d587a;
case 0x4d5880:c.instructions+=3;goto B4d5880;
case 0x4d5887:c.instructions+=2;goto B4d5887;
case 0x4d5889:c.instructions+=1;goto B4d5889;
case 0x4d588b:goto L4d588b;
case 0x4d588d:goto L4d588d;
case 0x4d588e:c.instructions+=3;goto B4d588e;
case 0x4d588f:c.instructions+=2;goto B4d588f;
case 0x4d5894:c.instructions+=1;goto B4d5894;
case 0x4d5899:goto L4d5899;
case 0x4d589c:c.instructions+=4;goto B4d589c;
case 0x4d58a1:c.instructions+=3;goto B4d58a1;
case 0x4d58a2:c.instructions+=2;goto B4d58a2;
case 0x4d58a3:c.instructions+=1;goto B4d58a3;
case 0x4d58a8:goto L4d58a8;
case 0x4d58ab:c.instructions+=5;goto B4d58ab;
case 0x4d58ad:c.instructions+=4;goto B4d58ad;
case 0x4d58af:c.instructions+=3;goto B4d58af;
case 0x4d58b4:c.instructions+=2;goto B4d58b4;
case 0x4d58b6:c.instructions+=1;goto B4d58b6;
case 0x4d58bb:goto L4d58bb;
case 0x4d58bc:c.instructions+=3;goto B4d58bc;
case 0x4d58be:c.instructions+=2;goto B4d58be;
case 0x4d58c5:c.instructions+=1;goto B4d58c5;
case 0x4d58ca:goto L4d58ca;
case 0x4d58cb:c.instructions+=2;goto B4d58cb;
case 0x4d58cd:c.instructions+=1;goto B4d58cd;
case 0x4d58d2:goto L4d58d2;
case 0x4d58d5:c.instructions+=1;goto B4d58d5;
case 0x4d58d7:goto L4d58d7;
case 0x4d58d9:c.instructions+=2;goto B4d58d9;
case 0x4d58db:c.instructions+=1;goto B4d58db;
case 0x4d58e0:goto L4d58e0;
case 0x4d58e3:c.instructions+=2;goto B4d58e3;
case 0x4d58e5:c.instructions+=1;goto B4d58e5;
case 0x4d58e7:goto L4d58e7;
case 0x4d58ea:c.instructions+=3;goto B4d58ea;
case 0x4d58ef:c.instructions+=2;goto B4d58ef;
case 0x4d58f0:c.instructions+=1;goto B4d58f0;
case 0x4d58f5:goto L4d58f5;
case 0x4d58f7:c.instructions+=2;goto B4d58f7;
case 0x4d58f9:c.instructions+=1;goto B4d58f9;
case 0x4d58fe:goto L4d58fe;
case 0x4d58ff:c.instructions+=5;goto B4d58ff;
case 0x4d5900:c.instructions+=4;goto B4d5900;
case 0x4d5901:c.instructions+=3;goto B4d5901;
case 0x4d5902:c.instructions+=2;goto B4d5902;
case 0x4d5905:c.instructions+=1;goto B4d5905;
case 0x4d5920:goto L4d5920;
case 0x4d5922:c.instructions+=13;goto B4d5922;
case 0x4d5927:c.instructions+=12;goto B4d5927;
case 0x4d592d:c.instructions+=11;goto B4d592d;
case 0x4d592e:c.instructions+=10;goto B4d592e;
case 0x4d5935:c.instructions+=9;goto B4d5935;
case 0x4d5936:c.instructions+=8;goto B4d5936;
case 0x4d5937:c.instructions+=7;goto B4d5937;
case 0x4d5939:c.instructions+=6;goto B4d5939;
case 0x4d593d:c.instructions+=5;goto B4d593d;
case 0x4d5943:c.instructions+=4;goto B4d5943;
case 0x4d5946:c.instructions+=3;goto B4d5946;
case 0x4d5948:c.instructions+=2;goto B4d5948;
case 0x4d5950:c.instructions+=1;goto B4d5950;
case 0x4d5952:goto L4d5952;
case 0x4d5953:c.instructions+=1;goto B4d5953;
case 0x4d5958:goto L4d5958;
case 0x4d595b:c.instructions+=1;goto B4d595b;
case 0x4d5962:goto L4d5962;
case 0x4d5965:c.instructions+=2;goto B4d5965;
case 0x4d596a:c.instructions+=1;goto B4d596a;
case 0x4d596f:goto L4d596f;
case 0x4d5971:c.instructions+=2;goto B4d5971;
case 0x4d5979:c.instructions+=1;goto B4d5979;
case 0x4d597e:goto L4d597e;
case 0x4d5982:c.instructions+=4;goto B4d5982;
case 0x4d5983:c.instructions+=3;goto B4d5983;
case 0x4d598a:c.instructions+=2;goto B4d598a;
case 0x4d598d:c.instructions+=1;goto B4d598d;
case 0x4d5990:goto L4d5990;
case 0x4d5991:c.instructions+=6;goto B4d5991;
case 0x4d5992:c.instructions+=5;goto B4d5992;
case 0x4d5993:c.instructions+=4;goto B4d5993;
case 0x4d5994:c.instructions+=3;goto B4d5994;
case 0x4d5996:c.instructions+=2;goto B4d5996;
case 0x4d5998:c.instructions+=1;goto B4d5998;
case 0x4d599d:goto L4d599d;
case 0x4d599f:c.instructions+=3;goto B4d599f;
case 0x4d59a2:c.instructions+=2;goto B4d59a2;
case 0x4d59a4:c.instructions+=1;goto B4d59a4;
case 0x4d59a6:goto L4d59a6;
case 0x4d59a9:c.instructions+=13;goto B4d59a9;
case 0x4d59af:c.instructions+=12;goto B4d59af;
case 0x4d59b1:c.instructions+=11;goto B4d59b1;
case 0x4d59b4:c.instructions+=10;goto B4d59b4;
case 0x4d59b7:c.instructions+=9;goto B4d59b7;
case 0x4d59ba:c.instructions+=8;goto B4d59ba;
case 0x4d59bd:c.instructions+=7;goto B4d59bd;
case 0x4d59c0:c.instructions+=6;goto B4d59c0;
case 0x4d59c3:c.instructions+=5;goto B4d59c3;
case 0x4d59c7:c.instructions+=4;goto B4d59c7;
case 0x4d59ce:c.instructions+=3;goto B4d59ce;
case 0x4d59d5:c.instructions+=2;goto B4d59d5;
case 0x4d59d7:c.instructions+=1;goto B4d59d7;
case 0x4d59d9:goto L4d59d9;
case 0x4d59db:goto L4d59db;
case 0x4d59de:c.instructions+=3;goto B4d59de;
case 0x4d59e3:c.instructions+=2;goto B4d59e3;
case 0x4d59e4:c.instructions+=1;goto B4d59e4;
case 0x4d59e9:goto L4d59e9;
case 0x4d59eb:c.instructions+=2;goto B4d59eb;
case 0x4d59ed:c.instructions+=1;goto B4d59ed;
case 0x4d59f2:goto L4d59f2;
case 0x4d59f5:c.instructions+=2;goto B4d59f5;
case 0x4d59f7:c.instructions+=1;goto B4d59f7;
case 0x4d59f9:goto L4d59f9;
case 0x4d59ff:c.instructions+=3;goto B4d59ff;
case 0x4d5a02:c.instructions+=2;goto B4d5a02;
case 0x4d5a05:c.instructions+=1;goto B4d5a05;
case 0x4d5a07:goto L4d5a07;
case 0x4d5a09:goto L4d5a09;
case 0x4d5a0c:c.instructions+=8;goto B4d5a0c;
case 0x4d5a0f:c.instructions+=7;goto B4d5a0f;
case 0x4d5a11:c.instructions+=6;goto B4d5a11;
case 0x4d5a14:c.instructions+=5;goto B4d5a14;
case 0x4d5a16:c.instructions+=4;goto B4d5a16;
case 0x4d5a17:c.instructions+=3;goto B4d5a17;
case 0x4d5a1a:c.instructions+=2;goto B4d5a1a;
case 0x4d5a1d:c.instructions+=1;goto B4d5a1d;
case 0x4d5a22:goto L4d5a22;
case 0x4d5a23:c.instructions+=4;goto B4d5a23;
case 0x4d5a24:c.instructions+=3;goto B4d5a24;
case 0x4d5a25:c.instructions+=2;goto B4d5a25;
case 0x4d5a26:c.instructions+=1;goto B4d5a26;
case 0x4d5a30:goto L4d5a30;
case 0x4d5a31:c.instructions+=9;goto B4d5a31;
case 0x4d5a33:c.instructions+=8;goto B4d5a33;
case 0x4d5a36:c.instructions+=7;goto B4d5a36;
case 0x4d5a3c:c.instructions+=6;goto B4d5a3c;
case 0x4d5a3d:c.instructions+=5;goto B4d5a3d;
case 0x4d5a3e:c.instructions+=4;goto B4d5a3e;
case 0x4d5a3f:c.instructions+=3;goto B4d5a3f;
case 0x4d5a41:c.instructions+=2;goto B4d5a41;
case 0x4d5a46:c.instructions+=1;goto B4d5a46;
case 0x4d5a4b:goto L4d5a4b;
case 0x4d5a4e:c.instructions+=2;goto B4d5a4e;
case 0x4d5a50:c.instructions+=1;goto B4d5a50;
case 0x4d5a52:goto L4d5a52;
case 0x4d5a54:c.instructions+=2;goto B4d5a54;
case 0x4d5a56:c.instructions+=1;goto B4d5a56;
case 0x4d5a5b:goto L4d5a5b;
case 0x4d5a5e:goto L4d5a5e;
case 0x4d5a63:c.instructions+=1;goto B4d5a63;
case 0x4d5a68:goto L4d5a68;
case 0x4d5a6b:c.instructions+=2;goto B4d5a6b;
case 0x4d5a6d:c.instructions+=1;goto B4d5a6d;
case 0x4d5a6f:goto L4d5a6f;
case 0x4d5a71:c.instructions+=2;goto B4d5a71;
case 0x4d5a73:c.instructions+=1;goto B4d5a73;
case 0x4d5a78:goto L4d5a78;
case 0x4d5a7b:goto L4d5a7b;
case 0x4d5a80:c.instructions+=3;goto B4d5a80;
case 0x4d5a81:c.instructions+=2;goto B4d5a81;
case 0x4d5a8b:c.instructions+=1;goto B4d5a8b;
case 0x4d5a90:goto L4d5a90;
case 0x4d5a93:c.instructions+=2;goto B4d5a93;
case 0x4d5a95:c.instructions+=1;goto B4d5a95;
case 0x4d5a9b:goto L4d5a9b;
case 0x4d5aa1:c.instructions+=4;goto B4d5aa1;
case 0x4d5aa3:c.instructions+=3;goto B4d5aa3;
case 0x4d5aa5:c.instructions+=2;goto B4d5aa5;
case 0x4d5aa6:c.instructions+=1;goto B4d5aa6;
case 0x4d5aab:goto L4d5aab;
case 0x4d5aad:c.instructions+=4;goto B4d5aad;
case 0x4d5aaf:c.instructions+=3;goto B4d5aaf;
case 0x4d5ab6:c.instructions+=2;goto B4d5ab6;
case 0x4d5abb:c.instructions+=1;goto B4d5abb;
case 0x4d5abf:goto L4d5abf;
case 0x4d5ac1:goto L4d5ac1;
case 0x4d5ac6:c.instructions+=6;goto B4d5ac6;
case 0x4d5aca:c.instructions+=5;goto B4d5aca;
case 0x4d5acc:c.instructions+=4;goto B4d5acc;
case 0x4d5acd:c.instructions+=3;goto B4d5acd;
case 0x4d5ad1:c.instructions+=2;goto B4d5ad1;
case 0x4d5ad2:c.instructions+=1;goto B4d5ad2;
case 0x4d5ad7:goto L4d5ad7;
case 0x4d5adc:c.instructions+=5;goto B4d5adc;
case 0x4d5ae0:c.instructions+=4;goto B4d5ae0;
case 0x4d5ae1:c.instructions+=3;goto B4d5ae1;
case 0x4d5ae5:c.instructions+=2;goto B4d5ae5;
case 0x4d5ae6:c.instructions+=1;goto B4d5ae6;
case 0x4d5aeb:goto L4d5aeb;
case 0x4d5af5:c.instructions+=3;goto B4d5af5;
case 0x4d5af7:c.instructions+=2;goto B4d5af7;
case 0x4d5afc:c.instructions+=1;goto B4d5afc;
case 0x4d5b03:goto L4d5b03;
case 0x4d5b05:goto L4d5b05;
case 0x4d5b08:c.instructions+=9;goto B4d5b08;
case 0x4d5b0d:c.instructions+=8;goto B4d5b0d;
case 0x4d5b0f:c.instructions+=7;goto B4d5b0f;
case 0x4d5b12:c.instructions+=6;goto B4d5b12;
case 0x4d5b17:c.instructions+=5;goto B4d5b17;
case 0x4d5b1e:c.instructions+=4;goto B4d5b1e;
case 0x4d5b1f:c.instructions+=3;goto B4d5b1f;
case 0x4d5b24:c.instructions+=2;goto B4d5b24;
case 0x4d5b25:c.instructions+=1;goto B4d5b25;
case 0x4d5b2a:goto L4d5b2a;
case 0x4d5b2d:c.instructions+=2;goto B4d5b2d;
case 0x4d5b2e:c.instructions+=1;goto B4d5b2e;
case 0x4d5b33:goto L4d5b33;
case 0x4d5b3a:c.instructions+=5;goto B4d5b3a;
case 0x4d5b3d:c.instructions+=4;goto B4d5b3d;
case 0x4d5b45:c.instructions+=3;goto B4d5b45;
case 0x4d5b4d:c.instructions+=2;goto B4d5b4d;
case 0x4d5b51:c.instructions+=1;goto B4d5b51;
case 0x4d5b53:goto L4d5b53;
case 0x4d5b5a:c.instructions+=3;goto B4d5b5a;
case 0x4d5b5b:c.instructions+=2;goto B4d5b5b;
case 0x4d5b60:c.instructions+=1;goto B4d5b60;
case 0x4d5b62:goto L4d5b62;
case 0x4d5b66:c.instructions+=2;goto B4d5b66;
case 0x4d5b69:c.instructions+=1;goto B4d5b69;
case 0x4d5b70:goto L4d5b70;
case 0x4d5b72:c.instructions+=3;goto B4d5b72;
case 0x4d5b73:c.instructions+=2;goto B4d5b73;
case 0x4d5b75:c.instructions+=1;goto B4d5b75;
case 0x4d5b77:goto L4d5b77;
case 0x4d5b79:c.instructions+=3;goto B4d5b79;
case 0x4d5b7b:c.instructions+=2;goto B4d5b7b;
case 0x4d5b7f:c.instructions+=1;goto B4d5b7f;
case 0x4d5b82:goto L4d5b82;
case 0x4d5b84:c.instructions+=3;goto B4d5b84;
case 0x4d5b85:c.instructions+=2;goto B4d5b85;
case 0x4d5b87:c.instructions+=1;goto B4d5b87;
case 0x4d5b89:goto L4d5b89;
case 0x4d5b8d:c.instructions+=11;goto B4d5b8d;
case 0x4d5b8e:c.instructions+=10;goto B4d5b8e;
case 0x4d5b90:c.instructions+=9;goto B4d5b90;
case 0x4d5b97:c.instructions+=8;goto B4d5b97;
case 0x4d5b98:c.instructions+=7;goto B4d5b98;
case 0x4d5b9d:c.instructions+=6;goto B4d5b9d;
case 0x4d5b9f:c.instructions+=5;goto B4d5b9f;
case 0x4d5ba1:c.instructions+=4;goto B4d5ba1;
case 0x4d5ba2:c.instructions+=3;goto B4d5ba2;
case 0x4d5ba6:c.instructions+=2;goto B4d5ba6;
case 0x4d5ba7:c.instructions+=1;goto B4d5ba7;
case 0x4d5bac:goto L4d5bac;
case 0x4d5baf:c.instructions+=4;goto B4d5baf;
case 0x4d5bb3:c.instructions+=3;goto B4d5bb3;
case 0x4d5bb4:c.instructions+=2;goto B4d5bb4;
case 0x4d5bb6:c.instructions+=1;goto B4d5bb6;
case 0x4d5bbb:goto L4d5bbb;
case 0x4d5bbc:c.instructions+=5;goto B4d5bbc;
case 0x4d5bbd:c.instructions+=4;goto B4d5bbd;
case 0x4d5bbe:c.instructions+=3;goto B4d5bbe;
case 0x4d5bc0:c.instructions+=2;goto B4d5bc0;
case 0x4d5bc1:c.instructions+=1;goto B4d5bc1;
case 0x4d5bd0:goto L4d5bd0;
case 0x4d5bd1:c.instructions+=12;goto B4d5bd1;
case 0x4d5bd3:c.instructions+=11;goto B4d5bd3;
case 0x4d5bd6:c.instructions+=10;goto B4d5bd6;
case 0x4d5bdc:c.instructions+=9;goto B4d5bdc;
case 0x4d5bdd:c.instructions+=8;goto B4d5bdd;
case 0x4d5bde:c.instructions+=7;goto B4d5bde;
case 0x4d5bdf:c.instructions+=6;goto B4d5bdf;
case 0x4d5be1:c.instructions+=5;goto B4d5be1;
case 0x4d5be6:c.instructions+=4;goto B4d5be6;
case 0x4d5be8:c.instructions+=3;goto B4d5be8;
case 0x4d5bea:c.instructions+=2;goto B4d5bea;
case 0x4d5beb:c.instructions+=1;goto B4d5beb;
case 0x4d5bf0:goto L4d5bf0;
case 0x4d5bf2:c.instructions+=4;goto B4d5bf2;
case 0x4d5bf9:c.instructions+=3;goto B4d5bf9;
case 0x4d5bfb:c.instructions+=2;goto B4d5bfb;
case 0x4d5c00:c.instructions+=1;goto B4d5c00;
case 0x4d5c04:goto L4d5c04;
case 0x4d5c06:goto L4d5c06;
case 0x4d5c0b:c.instructions+=6;goto B4d5c0b;
case 0x4d5c0f:c.instructions+=5;goto B4d5c0f;
case 0x4d5c10:c.instructions+=4;goto B4d5c10;
case 0x4d5c14:c.instructions+=3;goto B4d5c14;
case 0x4d5c15:c.instructions+=2;goto B4d5c15;
case 0x4d5c17:c.instructions+=1;goto B4d5c17;
case 0x4d5c1c:goto L4d5c1c;
case 0x4d5c21:c.instructions+=5;goto B4d5c21;
case 0x4d5c25:c.instructions+=4;goto B4d5c25;
case 0x4d5c26:c.instructions+=3;goto B4d5c26;
case 0x4d5c2a:c.instructions+=2;goto B4d5c2a;
case 0x4d5c2b:c.instructions+=1;goto B4d5c2b;
case 0x4d5c30:goto L4d5c30;
case 0x4d5c33:c.instructions+=4;goto B4d5c33;
case 0x4d5c3d:c.instructions+=3;goto B4d5c3d;
case 0x4d5c3f:c.instructions+=2;goto B4d5c3f;
case 0x4d5c44:c.instructions+=1;goto B4d5c44;
case 0x4d5c4b:goto L4d5c4b;
case 0x4d5c4d:goto L4d5c4d;
case 0x4d5c52:c.instructions+=8;goto B4d5c52;
case 0x4d5c57:c.instructions+=7;goto B4d5c57;
case 0x4d5c5e:c.instructions+=6;goto B4d5c5e;
case 0x4d5c5f:c.instructions+=5;goto B4d5c5f;
case 0x4d5c61:c.instructions+=4;goto B4d5c61;
case 0x4d5c64:c.instructions+=3;goto B4d5c64;
case 0x4d5c69:c.instructions+=2;goto B4d5c69;
case 0x4d5c6a:c.instructions+=1;goto B4d5c6a;
case 0x4d5c6f:goto L4d5c6f;
case 0x4d5c72:c.instructions+=2;goto B4d5c72;
case 0x4d5c73:c.instructions+=1;goto B4d5c73;
case 0x4d5c78:goto L4d5c78;
case 0x4d5c7f:c.instructions+=6;goto B4d5c7f;
case 0x4d5c82:c.instructions+=5;goto B4d5c82;
case 0x4d5c8a:c.instructions+=4;goto B4d5c8a;
case 0x4d5c92:c.instructions+=3;goto B4d5c92;
case 0x4d5c96:c.instructions+=2;goto B4d5c96;
case 0x4d5c98:c.instructions+=1;goto B4d5c98;
case 0x4d5ca0:goto L4d5ca0;
case 0x4d5ca7:c.instructions+=3;goto B4d5ca7;
case 0x4d5ca8:c.instructions+=2;goto B4d5ca8;
case 0x4d5cad:c.instructions+=1;goto B4d5cad;
case 0x4d5caf:goto L4d5caf;
case 0x4d5cb3:c.instructions+=1;goto B4d5cb3;
case 0x4d5cb6:goto L4d5cb6;
case 0x4d5cb8:c.instructions+=3;goto B4d5cb8;
case 0x4d5cb9:c.instructions+=2;goto B4d5cb9;
case 0x4d5cbb:c.instructions+=1;goto B4d5cbb;
case 0x4d5cbd:goto L4d5cbd;
case 0x4d5cbf:c.instructions+=3;goto B4d5cbf;
case 0x4d5cc1:c.instructions+=2;goto B4d5cc1;
case 0x4d5cc5:c.instructions+=1;goto B4d5cc5;
case 0x4d5cc8:goto L4d5cc8;
case 0x4d5cca:c.instructions+=3;goto B4d5cca;
case 0x4d5ccb:c.instructions+=2;goto B4d5ccb;
case 0x4d5ccd:c.instructions+=1;goto B4d5ccd;
case 0x4d5ccf:goto L4d5ccf;
case 0x4d5cd3:c.instructions+=11;goto B4d5cd3;
case 0x4d5cd4:c.instructions+=10;goto B4d5cd4;
case 0x4d5cd6:c.instructions+=9;goto B4d5cd6;
case 0x4d5cdd:c.instructions+=8;goto B4d5cdd;
case 0x4d5cde:c.instructions+=7;goto B4d5cde;
case 0x4d5ce3:c.instructions+=6;goto B4d5ce3;
case 0x4d5ce5:c.instructions+=5;goto B4d5ce5;
case 0x4d5ce7:c.instructions+=4;goto B4d5ce7;
case 0x4d5ce8:c.instructions+=3;goto B4d5ce8;
case 0x4d5cec:c.instructions+=2;goto B4d5cec;
case 0x4d5ced:c.instructions+=1;goto B4d5ced;
case 0x4d5cf2:goto L4d5cf2;
case 0x4d5cf5:c.instructions+=4;goto B4d5cf5;
case 0x4d5cf9:c.instructions+=3;goto B4d5cf9;
case 0x4d5cfa:c.instructions+=2;goto B4d5cfa;
case 0x4d5cfc:c.instructions+=1;goto B4d5cfc;
case 0x4d5d01:goto L4d5d01;
case 0x4d5d02:c.instructions+=5;goto B4d5d02;
case 0x4d5d03:c.instructions+=4;goto B4d5d03;
case 0x4d5d04:c.instructions+=3;goto B4d5d04;
case 0x4d5d06:c.instructions+=2;goto B4d5d06;
case 0x4d5d07:c.instructions+=1;goto B4d5d07;
case 0x4d5d10:goto L4d5d10;
case 0x4d5d12:c.instructions+=12;goto B4d5d12;
case 0x4d5d17:c.instructions+=11;goto B4d5d17;
case 0x4d5d1d:c.instructions+=10;goto B4d5d1d;
case 0x4d5d1e:c.instructions+=9;goto B4d5d1e;
case 0x4d5d25:c.instructions+=8;goto B4d5d25;
case 0x4d5d26:c.instructions+=7;goto B4d5d26;
case 0x4d5d27:c.instructions+=6;goto B4d5d27;
case 0x4d5d29:c.instructions+=5;goto B4d5d29;
case 0x4d5d2d:c.instructions+=4;goto B4d5d2d;
case 0x4d5d33:c.instructions+=3;goto B4d5d33;
case 0x4d5d36:c.instructions+=2;goto B4d5d36;
case 0x4d5d3e:c.instructions+=1;goto B4d5d3e;
case 0x4d5d43:goto L4d5d43;
case 0x4d5d45:c.instructions+=2;goto B4d5d45;
case 0x4d5d4d:c.instructions+=1;goto B4d5d4d;
case 0x4d5d52:goto L4d5d52;
case 0x4d5d56:c.instructions+=4;goto B4d5d56;
case 0x4d5d57:c.instructions+=3;goto B4d5d57;
case 0x4d5d5e:c.instructions+=2;goto B4d5d5e;
case 0x4d5d61:c.instructions+=1;goto B4d5d61;
case 0x4d5d70:goto L4d5d70;
case 0x4d5d73:c.instructions+=7;goto B4d5d73;
case 0x4d5d74:c.instructions+=6;goto B4d5d74;
case 0x4d5d75:c.instructions+=5;goto B4d5d75;
case 0x4d5d76:c.instructions+=4;goto B4d5d76;
case 0x4d5d77:c.instructions+=3;goto B4d5d77;
case 0x4d5d79:c.instructions+=2;goto B4d5d79;
case 0x4d5d7e:c.instructions+=1;goto B4d5d7e;
case 0x4d5d86:goto L4d5d86;
case 0x4d5d88:c.instructions+=1;goto B4d5d88;
case 0x4d5d8d:goto L4d5d8d;
case 0x4d5d8f:c.instructions+=3;goto B4d5d8f;
case 0x4d5d92:c.instructions+=2;goto B4d5d92;
case 0x4d5d94:c.instructions+=1;goto B4d5d94;
case 0x4d5d96:goto L4d5d96;
case 0x4d5d99:c.instructions+=12;goto B4d5d99;
case 0x4d5d9f:c.instructions+=11;goto B4d5d9f;
case 0x4d5da1:c.instructions+=10;goto B4d5da1;
case 0x4d5da4:c.instructions+=9;goto B4d5da4;
case 0x4d5da7:c.instructions+=8;goto B4d5da7;
case 0x4d5daa:c.instructions+=7;goto B4d5daa;
case 0x4d5dad:c.instructions+=6;goto B4d5dad;
case 0x4d5db0:c.instructions+=5;goto B4d5db0;
case 0x4d5db3:c.instructions+=4;goto B4d5db3;
case 0x4d5db7:c.instructions+=3;goto B4d5db7;
case 0x4d5dbe:c.instructions+=2;goto B4d5dbe;
case 0x4d5dc5:c.instructions+=1;goto B4d5dc5;
case 0x4d5dc7:goto L4d5dc7;
case 0x4d5dc8:c.instructions+=5;goto B4d5dc8;
case 0x4d5dcd:c.instructions+=4;goto B4d5dcd;
case 0x4d5dd1:c.instructions+=3;goto B4d5dd1;
case 0x4d5dd3:c.instructions+=2;goto B4d5dd3;
case 0x4d5dd4:c.instructions+=1;goto B4d5dd4;
case 0x4d5dd9:goto L4d5dd9;
case 0x4d5ddc:c.instructions+=3;goto B4d5ddc;
case 0x4d5de0:c.instructions+=2;goto B4d5de0;
case 0x4d5de1:c.instructions+=1;goto B4d5de1;
case 0x4d5de6:goto L4d5de6;
case 0x4d5de7:c.instructions+=2;goto B4d5de7;
case 0x4d5de8:c.instructions+=1;goto B4d5de8;
case 0x4d5ded:goto L4d5ded;
case 0x4d5def:c.instructions+=2;goto B4d5def;
case 0x4d5df1:c.instructions+=1;goto B4d5df1;
case 0x4d5df6:goto L4d5df6;
case 0x4d5df9:c.instructions+=2;goto B4d5df9;
case 0x4d5dfb:c.instructions+=1;goto B4d5dfb;
case 0x4d5dfd:goto L4d5dfd;
case 0x4d5e03:c.instructions+=3;goto B4d5e03;
case 0x4d5e06:c.instructions+=2;goto B4d5e06;
case 0x4d5e09:c.instructions+=1;goto B4d5e09;
case 0x4d5e0b:goto L4d5e0b;
case 0x4d5e0d:goto L4d5e0d;
case 0x4d5e10:c.instructions+=8;goto B4d5e10;
case 0x4d5e13:c.instructions+=7;goto B4d5e13;
case 0x4d5e15:c.instructions+=6;goto B4d5e15;
case 0x4d5e18:c.instructions+=5;goto B4d5e18;
case 0x4d5e1a:c.instructions+=4;goto B4d5e1a;
case 0x4d5e1b:c.instructions+=3;goto B4d5e1b;
case 0x4d5e1e:c.instructions+=2;goto B4d5e1e;
case 0x4d5e21:c.instructions+=1;goto B4d5e21;
case 0x4d5e26:goto L4d5e26;
case 0x4d5e27:c.instructions+=5;goto B4d5e27;
case 0x4d5e2c:c.instructions+=4;goto B4d5e2c;
case 0x4d5e30:c.instructions+=3;goto B4d5e30;
case 0x4d5e32:c.instructions+=2;goto B4d5e32;
case 0x4d5e33:c.instructions+=1;goto B4d5e33;
case 0x4d5e38:goto L4d5e38;
case 0x4d5e3b:c.instructions+=3;goto B4d5e3b;
case 0x4d5e3f:c.instructions+=2;goto B4d5e3f;
case 0x4d5e40:c.instructions+=1;goto B4d5e40;
case 0x4d5e45:goto L4d5e45;
case 0x4d5e46:c.instructions+=2;goto B4d5e46;
case 0x4d5e47:c.instructions+=1;goto B4d5e47;
case 0x4d5e4c:goto L4d5e4c;
case 0x4d5e4f:c.instructions+=6;goto B4d5e4f;
case 0x4d5e53:c.instructions+=5;goto B4d5e53;
case 0x4d5e56:c.instructions+=4;goto B4d5e56;
case 0x4d5e57:c.instructions+=3;goto B4d5e57;
case 0x4d5e58:c.instructions+=2;goto B4d5e58;
case 0x4d5e5c:c.instructions+=1;goto B4d5e5c;
case 0x4d5e62:goto L4d5e62;
case 0x4d5e63:c.instructions+=5;goto B4d5e63;
case 0x4d5e64:c.instructions+=4;goto B4d5e64;
case 0x4d5e65:c.instructions+=3;goto B4d5e65;
case 0x4d5e66:c.instructions+=2;goto B4d5e66;
case 0x4d5e69:c.instructions+=1;goto B4d5e69;
case 0x4d5e70:goto L4d5e70;
case 0x4d5e73:c.instructions+=9;goto B4d5e73;
case 0x4d5e74:c.instructions+=8;goto B4d5e74;
case 0x4d5e75:c.instructions+=7;goto B4d5e75;
case 0x4d5e76:c.instructions+=6;goto B4d5e76;
case 0x4d5e78:c.instructions+=5;goto B4d5e78;
case 0x4d5e79:c.instructions+=4;goto B4d5e79;
case 0x4d5e7c:c.instructions+=3;goto B4d5e7c;
case 0x4d5e7e:c.instructions+=2;goto B4d5e7e;
case 0x4d5e82:c.instructions+=1;goto B4d5e82;
case 0x4d5e87:goto L4d5e87;
case 0x4d5e89:c.instructions+=5;goto B4d5e89;
case 0x4d5e8b:c.instructions+=4;goto B4d5e8b;
case 0x4d5e91:c.instructions+=3;goto B4d5e91;
case 0x4d5e95:c.instructions+=2;goto B4d5e95;
case 0x4d5e99:c.instructions+=1;goto B4d5e99;
case 0x4d5ea0:goto L4d5ea0;
case 0x4d5ea5:goto L4d5ea5;
case 0x4d5eab:c.instructions+=3;goto B4d5eab;
case 0x4d5eac:c.instructions+=2;goto B4d5eac;
case 0x4d5ead:c.instructions+=1;goto B4d5ead;
case 0x4d5eb2:goto L4d5eb2;
case 0x4d5eb5:c.instructions+=2;goto B4d5eb5;
case 0x4d5eb7:c.instructions+=1;goto B4d5eb7;
case 0x4d5eb9:goto L4d5eb9;
case 0x4d5eba:c.instructions+=1;goto B4d5eba;
case 0x4d5ebc:goto L4d5ebc;
case 0x4d5ec2:c.instructions+=3;goto B4d5ec2;
case 0x4d5ec6:c.instructions+=2;goto B4d5ec6;
case 0x4d5ecb:c.instructions+=1;goto B4d5ecb;
case 0x4d5ed1:goto L4d5ed1;
case 0x4d5ed5:c.instructions+=2;goto B4d5ed5;
case 0x4d5ed7:c.instructions+=1;goto B4d5ed7;
case 0x4d5edd:goto L4d5edd;
case 0x4d5ee3:c.instructions+=2;goto B4d5ee3;
case 0x4d5ee7:c.instructions+=1;goto B4d5ee7;
case 0x4d5eec:goto L4d5eec;
case 0x4d5ef2:c.instructions+=3;goto B4d5ef2;
case 0x4d5ef3:c.instructions+=2;goto B4d5ef3;
case 0x4d5ef4:c.instructions+=1;goto B4d5ef4;
case 0x4d5ef9:goto L4d5ef9;
case 0x4d5efb:c.instructions+=4;goto B4d5efb;
case 0x4d5efd:c.instructions+=3;goto B4d5efd;
case 0x4d5f00:c.instructions+=2;goto B4d5f00;
case 0x4d5f02:c.instructions+=1;goto B4d5f02;
case 0x4d5f08:goto L4d5f08;
case 0x4d5f0d:c.instructions+=1;goto B4d5f0d;
case 0x4d5f12:goto L4d5f12;
case 0x4d5f13:c.instructions+=2;goto B4d5f13;
case 0x4d5f14:c.instructions+=1;goto B4d5f14;
case 0x4d5f19:goto L4d5f19;
case 0x4d5f1c:c.instructions+=2;goto B4d5f1c;
case 0x4d5f1e:c.instructions+=1;goto B4d5f1e;
case 0x4d5f24:goto L4d5f24;
case 0x4d5f26:c.instructions+=1;goto B4d5f26;
case 0x4d5f2b:goto L4d5f2b;
case 0x4d5f2e:c.instructions+=2;goto B4d5f2e;
case 0x4d5f30:c.instructions+=1;goto B4d5f30;
case 0x4d5f32:goto L4d5f32;
case 0x4d5f35:c.instructions+=6;goto B4d5f35;
case 0x4d5f37:c.instructions+=5;goto B4d5f37;
case 0x4d5f3a:c.instructions+=4;goto B4d5f3a;
case 0x4d5f3d:c.instructions+=3;goto B4d5f3d;
case 0x4d5f41:c.instructions+=2;goto B4d5f41;
case 0x4d5f47:c.instructions+=1;goto B4d5f47;
case 0x4d5f49:goto L4d5f49;
case 0x4d5f4f:c.instructions+=7;goto B4d5f4f;
case 0x4d5f52:c.instructions+=6;goto B4d5f52;
case 0x4d5f53:c.instructions+=5;goto B4d5f53;
case 0x4d5f58:c.instructions+=4;goto B4d5f58;
case 0x4d5f59:c.instructions+=3;goto B4d5f59;
case 0x4d5f5a:c.instructions+=2;goto B4d5f5a;
case 0x4d5f5f:c.instructions+=1;goto B4d5f5f;
case 0x4d5f64:goto L4d5f64;
case 0x4d5f67:c.instructions+=3;goto B4d5f67;
case 0x4d5f68:c.instructions+=2;goto B4d5f68;
case 0x4d5f69:c.instructions+=1;goto B4d5f69;
case 0x4d5f6e:goto L4d5f6e;
case 0x4d5f71:c.instructions+=5;goto B4d5f71;
case 0x4d5f73:c.instructions+=4;goto B4d5f73;
case 0x4d5f75:c.instructions+=3;goto B4d5f75;
case 0x4d5f76:c.instructions+=2;goto B4d5f76;
case 0x4d5f78:c.instructions+=1;goto B4d5f78;
case 0x4d5f7d:goto L4d5f7d;
case 0x4d5f83:c.instructions+=5;goto B4d5f83;
case 0x4d5f86:c.instructions+=4;goto B4d5f86;
case 0x4d5f87:c.instructions+=3;goto B4d5f87;
case 0x4d5f88:c.instructions+=2;goto B4d5f88;
case 0x4d5f8b:c.instructions+=1;goto B4d5f8b;
case 0x4d5f90:goto L4d5f90;
case 0x4d5f94:c.instructions+=4;goto B4d5f94;
case 0x4d5f97:c.instructions+=3;goto B4d5f97;
case 0x4d5f98:c.instructions+=2;goto B4d5f98;
case 0x4d5f9a:c.instructions+=1;goto B4d5f9a;
case 0x4d5f9f:goto L4d5f9f;
case 0x4d5fa0:c.instructions+=2;goto B4d5fa0;
case 0x4d5fa2:c.instructions+=1;goto B4d5fa2;
case 0x4d5fa7:goto L4d5fa7;
case 0x4d5fad:c.instructions+=3;goto B4d5fad;
case 0x4d5fb1:c.instructions+=2;goto B4d5fb1;
case 0x4d5fb2:c.instructions+=1;goto B4d5fb2;
case 0x4d5fb8:goto L4d5fb8;
case 0x4d5fbc:c.instructions+=1;goto B4d5fbc;
case 0x4d5fbe:goto L4d5fbe;
case 0x4d5fc3:goto L4d5fc3;
case 0x4d5fc9:c.instructions+=2;goto B4d5fc9;
case 0x4d5fcd:c.instructions+=1;goto B4d5fcd;
case 0x4d5fd3:goto L4d5fd3;
case 0x4d5fd9:c.instructions+=2;goto B4d5fd9;
case 0x4d5fdc:c.instructions+=1;goto B4d5fdc;
case 0x4d5fe2:goto L4d5fe2;
case 0x4d5fe3:c.instructions+=3;goto B4d5fe3;
case 0x4d5fe4:c.instructions+=2;goto B4d5fe4;
case 0x4d5fe9:c.instructions+=1;goto B4d5fe9;
case 0x4d5fee:goto L4d5fee;
case 0x4d5ff1:c.instructions+=3;goto B4d5ff1;
case 0x4d5ff2:c.instructions+=2;goto B4d5ff2;
case 0x4d5ff3:c.instructions+=1;goto B4d5ff3;
case 0x4d5ff8:goto L4d5ff8;
case 0x4d5ff9:c.instructions+=1;goto B4d5ff9;
case 0x4d5ffe:goto L4d5ffe;
default:missing_instruction(c.pc);}
B4d5003:L4d5003:{c.instructions+=3;NFSU2_TR(0x4d5003);
__builtin_memmove((R+24),(R+0),4);
}
B4d5005:{NFSU2_TR(0x4d5005);
w4(R+4,u32(0x9full));
}
B4d500a:{NFSU2_TR(0x4d500a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d500e:L4d500e:{c.instructions+=1;NFSU2_TR(0x4d500e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4d5010;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d500eu);}goto L4d500e;}
}
B4d5010:L4d5010:{c.instructions+=4;NFSU2_TR(0x4d5010);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5014:{NFSU2_TR(0x4d5014);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5017:{NFSU2_TR(0x4d5017);
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
B4d5019:{NFSU2_TR(0x4d5019);
if(r1(R+518)){{goto L4d5062;}}
}
B4d501b:L4d501b:{c.instructions+=3;NFSU2_TR(0x4d501b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d501f:{NFSU2_TR(0x4d501f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5021:{NFSU2_TR(0x4d5021);
if(r1(R+518)){{goto L4d5031;}}
}
B4d5023:L4d5023:{c.instructions+=2;NFSU2_TR(0x4d5023);
__builtin_memmove((R+4),(R+12),4);
}
B4d5025:{NFSU2_TR(0x4d5025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d502aull));
TAIL_STATIC(0x4bcff0u,4bc);
}
B4d502a:L4d502a:{c.instructions+=6;NFSU2_TR(0x4d502a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d502b:{NFSU2_TR(0x4d502b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d502c:{NFSU2_TR(0x4d502c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d502d:{NFSU2_TR(0x4d502d);
__builtin_memmove((R+16),(R+20),4);
}
B4d502f:{NFSU2_TR(0x4d502f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5030:{NFSU2_TR(0x4d5030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5031:L4d5031:{c.instructions+=1;NFSU2_TR(0x4d5031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5036ull));
TAIL_STATIC(0x582b60u,582);
}
B4d5036:L4d5036:{c.instructions+=5;NFSU2_TR(0x4d5036);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d503c:{NFSU2_TR(0x4d503c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5040:{NFSU2_TR(0x4d5040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5041:{NFSU2_TR(0x4d5041);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5042:{NFSU2_TR(0x4d5042);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5047ull));
TAIL_STATIC(0x73f050u,73f);
}
B4d5047:L4d5047:{c.instructions+=3;NFSU2_TR(0x4d5047);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d504a:{NFSU2_TR(0x4d504a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d504c:{NFSU2_TR(0x4d504c);
if(r1(R+518)){{goto L4d505b;}}
}
B4d504e:L4d504e:{c.instructions+=4;NFSU2_TR(0x4d504e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d5051:{NFSU2_TR(0x4d5051);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5052:{NFSU2_TR(0x4d5052);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5053:{NFSU2_TR(0x4d5053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5058ull));
TAIL_STATIC(0x49e810u,49e);
}
B4d5058:L4d5058:{c.instructions+=1;NFSU2_TR(0x4d5058);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d505b:L4d505b:{c.instructions+=2;NFSU2_TR(0x4d505b);
__builtin_memmove((R+4),(R+12),4);
}
B4d505d:{NFSU2_TR(0x4d505d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5062ull));
TAIL_STATIC(0x4bcf00u,4bc);
}
B4d5062:L4d5062:{c.instructions+=6;NFSU2_TR(0x4d5062);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5063:{NFSU2_TR(0x4d5063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5064:{NFSU2_TR(0x4d5064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d5065:{NFSU2_TR(0x4d5065);
__builtin_memmove((R+16),(R+20),4);
}
B4d5067:{NFSU2_TR(0x4d5067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5068:{NFSU2_TR(0x4d5068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5070:L4d5070:{c.instructions+=8;NFSU2_TR(0x4d5070);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5072:{NFSU2_TR(0x4d5072);
u8 U[4];
w4(U+0,u32(0x7749b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5077:{NFSU2_TR(0x4d5077);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d507d:{NFSU2_TR(0x4d507d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d507e:{NFSU2_TR(0x4d507e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5085:{NFSU2_TR(0x4d5085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5086:{NFSU2_TR(0x4d5086);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5088:{NFSU2_TR(0x4d5088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d508dull));
TAIL_STATIC(0x575620u,575);
}
B4d508d:L4d508d:{c.instructions+=5;NFSU2_TR(0x4d508d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5090:{NFSU2_TR(0x4d5090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4d5094:{NFSU2_TR(0x4d5094);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5096:{NFSU2_TR(0x4d5096);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d509e:{NFSU2_TR(0x4d509e);
if(r1(R+518)){{goto L4d50bb;}}
}
B4d50a0:L4d50a0:{c.instructions+=4;NFSU2_TR(0x4d50a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d50a4:{NFSU2_TR(0x4d50a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d50a5:{NFSU2_TR(0x4d50a5);
__builtin_memmove((R+4),(R+0),4);
}
B4d50a7:{NFSU2_TR(0x4d50a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d50acull));
TAIL_STATIC(0x4bd310u,4bd);
}
B4d50ac:L4d50ac:{c.instructions+=4;NFSU2_TR(0x4d50ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d50b0:{NFSU2_TR(0x4d50b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d50b7:{NFSU2_TR(0x4d50b7);
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
B4d50ba:{NFSU2_TR(0x4d50ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d50bb:L4d50bb:{c.instructions+=5;NFSU2_TR(0x4d50bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d50bf:{NFSU2_TR(0x4d50bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d50c1:{NFSU2_TR(0x4d50c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d50c8:{NFSU2_TR(0x4d50c8);
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
B4d50cb:{NFSU2_TR(0x4d50cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d50d0:L4d50d0:{c.instructions+=15;NFSU2_TR(0x4d50d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d50d2:{NFSU2_TR(0x4d50d2);
u8 U[4];
w4(U+0,u32(0x7749d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d50d7:{NFSU2_TR(0x4d50d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d50dd:{NFSU2_TR(0x4d50dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d50de:{NFSU2_TR(0x4d50de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d50e5:{NFSU2_TR(0x4d50e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d50e6:{NFSU2_TR(0x4d50e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d50e7:{NFSU2_TR(0x4d50e7);
__builtin_memmove((R+24),(R+4),4);
}
B4d50e9:{NFSU2_TR(0x4d50e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d50ed:{NFSU2_TR(0x4d50ed);
u8 U[4];
w4(U+0,u32(0x7962acull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d50f3:{NFSU2_TR(0x4d50f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d50f6:{NFSU2_TR(0x4d50f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d50f8:{NFSU2_TR(0x4d50f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5100:{NFSU2_TR(0x4d5100);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5107:{NFSU2_TR(0x4d5107);
if(r1(R+518)){{goto L4d5119;}}
}
B4d5109:L4d5109:{c.instructions+=2;NFSU2_TR(0x4d5109);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d510a:{NFSU2_TR(0x4d510a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d510full));
TAIL_STATIC(0x540a60u,540);
}
B4d510f:L4d510f:{c.instructions+=2;NFSU2_TR(0x4d510f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5112:{NFSU2_TR(0x4d5112);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5119:L4d5119:{c.instructions+=1;NFSU2_TR(0x4d5119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d511eull));
TAIL_STATIC(0x582b60u,582);
}
B4d511e:L4d511e:{c.instructions+=2;NFSU2_TR(0x4d511e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4d5125:{NFSU2_TR(0x4d5125);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d514a;}}
}
B4d5127:L4d5127:{c.instructions+=1;NFSU2_TR(0x4d5127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d512cull));
TAIL_STATIC(0x582b60u,582);
}
B4d512c:L4d512c:{c.instructions+=3;NFSU2_TR(0x4d512c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5132:{NFSU2_TR(0x4d5132);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5134:{NFSU2_TR(0x4d5134);
if(r1(R+518)){{goto L4d514a;}}
}
B4d5136:L4d5136:{c.instructions+=1;NFSU2_TR(0x4d5136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d513bull));
TAIL_STATIC(0x582b60u,582);
}
B4d513b:L4d513b:{c.instructions+=3;NFSU2_TR(0x4d513b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5141:{NFSU2_TR(0x4d5141);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5142:{NFSU2_TR(0x4d5142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5147ull));
TAIL_STATIC(0x73ea00u,73e);
}
B4d5147:L4d5147:{c.instructions+=1;NFSU2_TR(0x4d5147);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d514a:L4d514a:{c.instructions+=3;NFSU2_TR(0x4d514a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d514c:{NFSU2_TR(0x4d514c);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5151:{NFSU2_TR(0x4d5151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5156ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4d5156:L4d5156:{c.instructions+=4;NFSU2_TR(0x4d5156);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5159:{NFSU2_TR(0x4d5159);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d515c:{NFSU2_TR(0x4d515c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5161:{NFSU2_TR(0x4d5161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5166ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4d5166:L4d5166:{c.instructions+=3;NFSU2_TR(0x4d5166);
__builtin_memmove((R+4),(R+24),4);
}
B4d5168:{NFSU2_TR(0x4d5168);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5170:{NFSU2_TR(0x4d5170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5175ull));
TAIL_STATIC(0x510d40u,510);
}
B4d5175:L4d5175:{c.instructions+=5;NFSU2_TR(0x4d5175);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5179:{NFSU2_TR(0x4d5179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d517a:{NFSU2_TR(0x4d517a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5181:{NFSU2_TR(0x4d5181);
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
B4d5184:{NFSU2_TR(0x4d5184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5190:L4d5190:{c.instructions+=11;NFSU2_TR(0x4d5190);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5191:{NFSU2_TR(0x4d5191);
__builtin_memmove((R+20),(R+16),4);
}
B4d5193:{NFSU2_TR(0x4d5193);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4d5196:{NFSU2_TR(0x4d5196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x208ull))));
}
B4d519c:{NFSU2_TR(0x4d519c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d519d:{NFSU2_TR(0x4d519d);
__builtin_memmove((R+24),(R+4),4);
}
B4d519f:{NFSU2_TR(0x4d519f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d51a2:{NFSU2_TR(0x4d51a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d51a5:{NFSU2_TR(0x4d51a5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d51a8:{NFSU2_TR(0x4d51a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d51a9:{NFSU2_TR(0x4d51a9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d546e;}}
}
B4d51af:L4d51af:{c.instructions+=1;NFSU2_TR(0x4d51af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4d5474ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d51b6:L4d51b6:{c.instructions+=2;NFSU2_TR(0x4d51b6);
u8 U[4];
w4(U+0,u32(u32(m4(0x836008))&u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d51c0:{NFSU2_TR(0x4d51c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d51d8;}}
}
B4d51c2:L4d51c2:{c.instructions+=3;NFSU2_TR(0x4d51c2);
__builtin_memmove((R+0),gp(0x835fbc),4);
}
B4d51c7:{NFSU2_TR(0x4d51c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d51c9:{NFSU2_TR(0x4d51c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d51d8;}}
}
B4d51cb:L4d51cb:{c.instructions+=2;NFSU2_TR(0x4d51cb);
__builtin_memmove((R+4),(R+24),4);
}
B4d51cd:{NFSU2_TR(0x4d51cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d51d2ull));
TAIL_STATIC(0x4bd730u,4bd);
}
B4d51d2:L4d51d2:{c.instructions+=5;NFSU2_TR(0x4d51d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d51d3:{NFSU2_TR(0x4d51d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d51d4:{NFSU2_TR(0x4d51d4);
__builtin_memmove((R+16),(R+20),4);
}
B4d51d6:{NFSU2_TR(0x4d51d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d51d7:{NFSU2_TR(0x4d51d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d51d8:L4d51d8:{c.instructions+=2;NFSU2_TR(0x4d51d8);
__builtin_memmove((R+4),(R+24),4);
}
B4d51da:{NFSU2_TR(0x4d51da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d51dfull));
TAIL_STATIC(0x4a1c70u,4a1);
}
B4d51df:L4d51df:{c.instructions+=5;NFSU2_TR(0x4d51df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d51e0:{NFSU2_TR(0x4d51e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d51e1:{NFSU2_TR(0x4d51e1);
__builtin_memmove((R+16),(R+20),4);
}
B4d51e3:{NFSU2_TR(0x4d51e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d51e4:{NFSU2_TR(0x4d51e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d51e5:L4d51e5:{c.instructions+=10;NFSU2_TR(0x4d51e5);
__builtin_memmove((R+0),gp(0x83a9c8),4);
}
B4d51ea:{NFSU2_TR(0x4d51ea);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4d51f0:{NFSU2_TR(0x4d51f0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4d51f2:{NFSU2_TR(0x4d51f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d51f6:{NFSU2_TR(0x4d51f6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4d51fa:{NFSU2_TR(0x4d51fa);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4d5200:{NFSU2_TR(0x4d5200);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4d5206:{NFSU2_TR(0x4d5206);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4d5208:{NFSU2_TR(0x4d5208);
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
B4d520b:{NFSU2_TR(0x4d520b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4d546e;}}
}
B4d5211:L4d5211:{c.instructions+=6;NFSU2_TR(0x4d5211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d5214:{NFSU2_TR(0x4d5214);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5216:{NFSU2_TR(0x4d5216);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d521b:{NFSU2_TR(0x4d521b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d521c:{NFSU2_TR(0x4d521c);
u8 U[4];
w4(U+0,u32(0x7962e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5221:{NFSU2_TR(0x4d5221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5226ull));
TAIL_STATIC(0x555eb0u,555);
}
B4d5226:L4d5226:{c.instructions+=6;NFSU2_TR(0x4d5226);
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
B4d5229:{NFSU2_TR(0x4d5229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d522a:{NFSU2_TR(0x4d522a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d522b:{NFSU2_TR(0x4d522b);
__builtin_memmove((R+16),(R+20),4);
}
B4d522d:{NFSU2_TR(0x4d522d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d522e:{NFSU2_TR(0x4d522e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d522f:L4d522f:{c.instructions+=3;NFSU2_TR(0x4d522f);
__builtin_memmove((R+0),gp(0x835fd0),4);
}
B4d5234:{NFSU2_TR(0x4d5234);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5236:{NFSU2_TR(0x4d5236);
if(r1(R+518)){{goto L4d52bc;}}
}
B4d523c:L4d523c:{c.instructions+=1;NFSU2_TR(0x4d523c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5241ull));
TAIL_STATIC(0x582b60u,582);
}
B4d5241:L4d5241:{c.instructions+=3;NFSU2_TR(0x4d5241);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4d5247:{NFSU2_TR(0x4d5247);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d5249:{NFSU2_TR(0x4d5249);
if(r1(R+518)){{goto L4d5288;}}
}
B4d524b:L4d524b:{c.instructions+=3;NFSU2_TR(0x4d524b);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B4d5250:{NFSU2_TR(0x4d5250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5251:{NFSU2_TR(0x4d5251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5256ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4d5256:L4d5256:{c.instructions+=3;NFSU2_TR(0x4d5256);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5259:{NFSU2_TR(0x4d5259);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d525b:{NFSU2_TR(0x4d525b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d5288;}}
}
B4d525d:L4d525d:{c.instructions+=3;NFSU2_TR(0x4d525d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d5260:{NFSU2_TR(0x4d5260);
u8 U[4];
w4(U+0,u32(0x713b9c46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5265:{NFSU2_TR(0x4d5265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d526aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d526a:L4d526a:{c.instructions+=7;NFSU2_TR(0x4d526a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d526b:{NFSU2_TR(0x4d526b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d526d:{NFSU2_TR(0x4d526d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d526f:{NFSU2_TR(0x4d526f);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5274:{NFSU2_TR(0x4d5274);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5279:{NFSU2_TR(0x4d5279);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d527a:{NFSU2_TR(0x4d527a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d527full));
TAIL_STATIC(0x558540u,558);
}
B4d527f:L4d527f:{c.instructions+=6;NFSU2_TR(0x4d527f);
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
B4d5282:{NFSU2_TR(0x4d5282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5283:{NFSU2_TR(0x4d5283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5284:{NFSU2_TR(0x4d5284);
__builtin_memmove((R+16),(R+20),4);
}
B4d5286:{NFSU2_TR(0x4d5286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5287:{NFSU2_TR(0x4d5287);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5288:L4d5288:{c.instructions+=3;NFSU2_TR(0x4d5288);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4d528b:{NFSU2_TR(0x4d528b);
u8 U[4];
w4(U+0,u32(0xcd787311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5290:{NFSU2_TR(0x4d5290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5295ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d5295:L4d5295:{c.instructions+=10;NFSU2_TR(0x4d5295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5296:{NFSU2_TR(0x4d5296);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5298:{NFSU2_TR(0x4d5298);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d529a:{NFSU2_TR(0x4d529a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d529c:{NFSU2_TR(0x4d529c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d529e:{NFSU2_TR(0x4d529e);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d52a3:{NFSU2_TR(0x4d52a3);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d52a8:{NFSU2_TR(0x4d52a8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d52ad:{NFSU2_TR(0x4d52ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d52ae:{NFSU2_TR(0x4d52ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d52b3ull));
TAIL_STATIC(0x558750u,558);
}
B4d52b3:L4d52b3:{c.instructions+=6;NFSU2_TR(0x4d52b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d52b6:{NFSU2_TR(0x4d52b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d52b7:{NFSU2_TR(0x4d52b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d52b8:{NFSU2_TR(0x4d52b8);
__builtin_memmove((R+16),(R+20),4);
}
B4d52ba:{NFSU2_TR(0x4d52ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d52bb:{NFSU2_TR(0x4d52bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d52bc:L4d52bc:{c.instructions+=3;NFSU2_TR(0x4d52bc);
__builtin_memmove((R+0),gp(0x835fd8),4);
}
B4d52c1:{NFSU2_TR(0x4d52c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d52c3:{NFSU2_TR(0x4d52c3);
if(r1(R+518)){{goto L4d52d2;}}
}
B4d52c5:L4d52c5:{c.instructions+=2;NFSU2_TR(0x4d52c5);
__builtin_memmove((R+4),(R+24),4);
}
B4d52c7:{NFSU2_TR(0x4d52c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d52ccull));
TAIL_STATIC(0x4bd690u,4bd);
}
B4d52cc:L4d52cc:{c.instructions+=5;NFSU2_TR(0x4d52cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d52cd:{NFSU2_TR(0x4d52cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d52ce:{NFSU2_TR(0x4d52ce);
__builtin_memmove((R+16),(R+20),4);
}
B4d52d0:{NFSU2_TR(0x4d52d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d52d1:{NFSU2_TR(0x4d52d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d52d2:L4d52d2:{c.instructions+=3;NFSU2_TR(0x4d52d2);
__builtin_memmove((R+0),gp(0x835fd4),4);
}
B4d52d7:{NFSU2_TR(0x4d52d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d52d9:{NFSU2_TR(0x4d52d9);
if(r1(R+518)){{goto L4d52e8;}}
}
B4d52db:L4d52db:{c.instructions+=2;NFSU2_TR(0x4d52db);
__builtin_memmove((R+4),(R+24),4);
}
B4d52dd:{NFSU2_TR(0x4d52dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d52e2ull));
TAIL_STATIC(0x4a1b50u,4a1);
}
B4d52e2:L4d52e2:{c.instructions+=5;NFSU2_TR(0x4d52e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d52e3:{NFSU2_TR(0x4d52e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d52e4:{NFSU2_TR(0x4d52e4);
__builtin_memmove((R+16),(R+20),4);
}
B4d52e6:{NFSU2_TR(0x4d52e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d52e7:{NFSU2_TR(0x4d52e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d52e8:L4d52e8:{c.instructions+=3;NFSU2_TR(0x4d52e8);
__builtin_memmove((R+0),gp(0x835fe8),4);
}
B4d52ed:{NFSU2_TR(0x4d52ed);
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
B4d52ef:{NFSU2_TR(0x4d52ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d546e;}}
}
B4d52f5:L4d52f5:{c.instructions+=3;NFSU2_TR(0x4d52f5);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d52fa:{NFSU2_TR(0x4d52fa);
__builtin_memmove((R+4),(R+24),4);
}
B4d52fc:{NFSU2_TR(0x4d52fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5301ull));
TAIL_STATIC(0x4bd3f0u,4bd);
}
B4d5301:L4d5301:{c.instructions+=5;NFSU2_TR(0x4d5301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5302:{NFSU2_TR(0x4d5302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5303:{NFSU2_TR(0x4d5303);
__builtin_memmove((R+16),(R+20),4);
}
B4d5305:{NFSU2_TR(0x4d5305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5306:{NFSU2_TR(0x4d5306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5307:L4d5307:{c.instructions+=6;NFSU2_TR(0x4d5307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d530a:{NFSU2_TR(0x4d530a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d530c:{NFSU2_TR(0x4d530c);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5311:{NFSU2_TR(0x4d5311);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5312:{NFSU2_TR(0x4d5312);
u8 U[4];
w4(U+0,u32(0x7962d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5317:{NFSU2_TR(0x4d5317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d531cull));
TAIL_STATIC(0x555eb0u,555);
}
B4d531c:L4d531c:{c.instructions+=7;NFSU2_TR(0x4d531c);
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
B4d531f:{NFSU2_TR(0x4d531f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5326:{NFSU2_TR(0x4d5326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5327:{NFSU2_TR(0x4d5327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5328:{NFSU2_TR(0x4d5328);
__builtin_memmove((R+16),(R+20),4);
}
B4d532a:{NFSU2_TR(0x4d532a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d532b:{NFSU2_TR(0x4d532b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d532c:L4d532c:{c.instructions+=3;NFSU2_TR(0x4d532c);
__builtin_memmove((R+0),gp(0x835fe8),4);
}
B4d5331:{NFSU2_TR(0x4d5331);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5333:{NFSU2_TR(0x4d5333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d53c8;}}
}
B4d5339:L4d5339:{c.instructions+=3;NFSU2_TR(0x4d5339);
__builtin_memmove((R+0),gp(0x835fd4),4);
}
B4d533e:{NFSU2_TR(0x4d533e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5340:{NFSU2_TR(0x4d5340);
if(r1(R+518)){{goto L4d5382;}}
}
B4d5342:L4d5342:{c.instructions+=1;NFSU2_TR(0x4d5342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5347ull));
TAIL_STATIC(0x582b60u,582);
}
B4d5347:L4d5347:{c.instructions+=7;NFSU2_TR(0x4d5347);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d534d:{NFSU2_TR(0x4d534d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d534e:{NFSU2_TR(0x4d534e);
u8 U[4];
w4(U+0,u32(0x4ae670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5353:{NFSU2_TR(0x4d5353);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5355:{NFSU2_TR(0x4d5355);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d535a:{NFSU2_TR(0x4d535a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d535b:{NFSU2_TR(0x4d535b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5360ull));
TAIL_STATIC(0x73fad0u,73f);
}
B4d5360:L4d5360:{c.instructions+=3;NFSU2_TR(0x4d5360);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d5363:{NFSU2_TR(0x4d5363);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5365:{NFSU2_TR(0x4d5365);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d5452;}}
}
B4d536b:L4d536b:{c.instructions+=4;NFSU2_TR(0x4d536b);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5370:{NFSU2_TR(0x4d5370);
u8 U[4];
w4(U+0,u32(0x78300ebfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5375:{NFSU2_TR(0x4d5375);
__builtin_memmove((R+4),(R+24),4);
}
B4d5377:{NFSU2_TR(0x4d5377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d537cull));
TAIL_STATIC(0x4a1700u,4a1);
}
B4d537c:L4d537c:{c.instructions+=5;NFSU2_TR(0x4d537c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d537d:{NFSU2_TR(0x4d537d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d537e:{NFSU2_TR(0x4d537e);
__builtin_memmove((R+16),(R+20),4);
}
B4d5380:{NFSU2_TR(0x4d5380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5381:{NFSU2_TR(0x4d5381);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5382:L4d5382:{c.instructions+=4;NFSU2_TR(0x4d5382);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5387:{NFSU2_TR(0x4d5387);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5389:{NFSU2_TR(0x4d5389);
w4(R+4,u32(0x7full));
}
B4d538e:{NFSU2_TR(0x4d538e);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5392:L4d5392:{c.instructions+=1;NFSU2_TR(0x4d5392);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d5394;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5392u);}goto L4d5392;}
}
B4d5394:L4d5394:{c.instructions+=5;NFSU2_TR(0x4d5394);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d5396:{NFSU2_TR(0x4d5396);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d539b:{NFSU2_TR(0x4d539b);
u8 U[4];
w4(U+0,u32(0x8d0a8371ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53a0:{NFSU2_TR(0x4d53a0);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4d53a1:{NFSU2_TR(0x4d53a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d53a6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d53a6:L4d53a6:{c.instructions+=6;NFSU2_TR(0x4d53a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d53a9:{NFSU2_TR(0x4d53a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53aa:{NFSU2_TR(0x4d53aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d53ae:{NFSU2_TR(0x4d53ae);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53b3:{NFSU2_TR(0x4d53b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53b4:{NFSU2_TR(0x4d53b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d53b9ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d53b9:L4d53b9:{c.instructions+=7;NFSU2_TR(0x4d53b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d53bd:{NFSU2_TR(0x4d53bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53be:{NFSU2_TR(0x4d53be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53c0:{NFSU2_TR(0x4d53c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53c2:{NFSU2_TR(0x4d53c2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53c4:{NFSU2_TR(0x4d53c4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53c6:{NFSU2_TR(0x4d53c6);
{goto L4d540c;}
}
B4d53c8:L4d53c8:{c.instructions+=4;NFSU2_TR(0x4d53c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d53cd:{NFSU2_TR(0x4d53cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d53cf:{NFSU2_TR(0x4d53cf);
w4(R+4,u32(0x7full));
}
B4d53d4:{NFSU2_TR(0x4d53d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d53d8:L4d53d8:{c.instructions+=1;NFSU2_TR(0x4d53d8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d53da;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d53d8u);}goto L4d53d8;}
}
B4d53da:L4d53da:{c.instructions+=5;NFSU2_TR(0x4d53da);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d53dc:{NFSU2_TR(0x4d53dc);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53e1:{NFSU2_TR(0x4d53e1);
u8 U[4];
w4(U+0,u32(0x121f05d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53e6:{NFSU2_TR(0x4d53e6);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4d53e7:{NFSU2_TR(0x4d53e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d53ecull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d53ec:L4d53ec:{c.instructions+=6;NFSU2_TR(0x4d53ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d53ef:{NFSU2_TR(0x4d53ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53f0:{NFSU2_TR(0x4d53f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d53f4:{NFSU2_TR(0x4d53f4);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53f9:{NFSU2_TR(0x4d53f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d53fa:{NFSU2_TR(0x4d53fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d53ffull));
TAIL_STATIC(0x50c960u,50c);
}
B4d53ff:L4d53ff:{c.instructions+=6;NFSU2_TR(0x4d53ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5403:{NFSU2_TR(0x4d5403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5404:{NFSU2_TR(0x4d5404);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5406:{NFSU2_TR(0x4d5406);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5408:{NFSU2_TR(0x4d5408);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d540a:{NFSU2_TR(0x4d540a);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d540c:L4d540c:{c.instructions+=6;NFSU2_TR(0x4d540c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d540f:{NFSU2_TR(0x4d540f);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5414:{NFSU2_TR(0x4d5414);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5419:{NFSU2_TR(0x4d5419);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d541e:{NFSU2_TR(0x4d541e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d541f:{NFSU2_TR(0x4d541f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5424ull));
TAIL_STATIC(0x558750u,558);
}
B4d5424:L4d5424:{c.instructions+=6;NFSU2_TR(0x4d5424);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d5427:{NFSU2_TR(0x4d5427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5428:{NFSU2_TR(0x4d5428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5429:{NFSU2_TR(0x4d5429);
__builtin_memmove((R+16),(R+20),4);
}
B4d542b:{NFSU2_TR(0x4d542b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d542c:{NFSU2_TR(0x4d542c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d542d:L4d542d:{c.instructions+=6;NFSU2_TR(0x4d542d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d5430:{NFSU2_TR(0x4d5430);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5432:{NFSU2_TR(0x4d5432);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5437:{NFSU2_TR(0x4d5437);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5438:{NFSU2_TR(0x4d5438);
u8 U[4];
w4(U+0,u32(0x7962bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d543d:{NFSU2_TR(0x4d543d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5442ull));
TAIL_STATIC(0x555eb0u,555);
}
B4d5442:L4d5442:{c.instructions+=7;NFSU2_TR(0x4d5442);
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
B4d5445:{NFSU2_TR(0x4d5445);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d544c:{NFSU2_TR(0x4d544c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d544d:{NFSU2_TR(0x4d544d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d544e:{NFSU2_TR(0x4d544e);
__builtin_memmove((R+16),(R+20),4);
}
B4d5450:{NFSU2_TR(0x4d5450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5451:{NFSU2_TR(0x4d5451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5452:L4d5452:{c.instructions+=3;NFSU2_TR(0x4d5452);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4d5458:{NFSU2_TR(0x4d5458);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d545a:{NFSU2_TR(0x4d545a);
if(r1(R+518)){{goto L4d5461;}}
}
B4d545c:L4d545c:{c.instructions+=2;NFSU2_TR(0x4d545c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffff94ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffff94ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffff94ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d545f:{NFSU2_TR(0x4d545f);
if(r1(R+518)){{goto L4d546e;}}
}
B4d5461:L4d5461:{c.instructions+=4;NFSU2_TR(0x4d5461);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5462:{NFSU2_TR(0x4d5462);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5465:{NFSU2_TR(0x4d5465);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5466:{NFSU2_TR(0x4d5466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d546bull));
TAIL_STATIC(0x49e810u,49e);
}
B4d546b:L4d546b:{c.instructions+=1;NFSU2_TR(0x4d546b);
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
B4d546e:L4d546e:{c.instructions+=5;NFSU2_TR(0x4d546e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d546f:{NFSU2_TR(0x4d546f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5470:{NFSU2_TR(0x4d5470);
__builtin_memmove((R+16),(R+20),4);
}
B4d5472:{NFSU2_TR(0x4d5472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5473:{NFSU2_TR(0x4d5473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5490:L4d5490:{c.instructions+=10;NFSU2_TR(0x4d5490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B4d5493:{NFSU2_TR(0x4d5493);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5494:{NFSU2_TR(0x4d5494);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5495:{NFSU2_TR(0x4d5495);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5496:{NFSU2_TR(0x4d5496);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5497:{NFSU2_TR(0x4d5497);
__builtin_memmove((R+20),(R+4),4);
}
B4d5499:{NFSU2_TR(0x4d5499);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d549b:{NFSU2_TR(0x4d549b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d54a0:{NFSU2_TR(0x4d54a0);
w4(R+4,u32(0xfull));
}
B4d54a5:{NFSU2_TR(0x4d54a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d54a9:L4d54a9:{c.instructions+=1;NFSU2_TR(0x4d54a9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d54ab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d54a9u);}goto L4d54a9;}
}
B4d54ab:L4d54ab:{c.instructions+=7;NFSU2_TR(0x4d54ab);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d54ad:{NFSU2_TR(0x4d54ad);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d54b2:{NFSU2_TR(0x4d54b2);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4d54b3:{NFSU2_TR(0x4d54b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d54b7:{NFSU2_TR(0x4d54b7);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d54b9:{NFSU2_TR(0x4d54b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d54ba:{NFSU2_TR(0x4d54ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d54bfull));
TAIL_STATIC(0x50c960u,50c);
}
B4d54bf:L4d54bf:{c.instructions+=6;NFSU2_TR(0x4d54bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d54c5:{NFSU2_TR(0x4d54c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d54c8:{NFSU2_TR(0x4d54c8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d54ca:{NFSU2_TR(0x4d54ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d54cd:{NFSU2_TR(0x4d54cd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d54cf:{NFSU2_TR(0x4d54cf);
if(r1(R+518)){{goto L4d54df;}}
}
B4d54d1:L4d54d1:{c.instructions+=4;NFSU2_TR(0x4d54d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d54d4:{NFSU2_TR(0x4d54d4);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d54d9:{NFSU2_TR(0x4d54d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d54da:{NFSU2_TR(0x4d54da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d54dfull));
TAIL_STATIC(0x51ee80u,51e);
}
B4d54df:L4d54df:{c.instructions+=2;NFSU2_TR(0x4d54df);
__builtin_memmove((R+4),(R+12),4);
}
B4d54e1:{NFSU2_TR(0x4d54e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d54e6ull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4d54e6:L4d54e6:{c.instructions+=3;NFSU2_TR(0x4d54e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d54ea:{NFSU2_TR(0x4d54ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d54ee:{NFSU2_TR(0x4d54ee);
__builtin_memmove((R+28),(R+28),4);
}
B4d54f0:L4d54f0:{c.instructions+=6;NFSU2_TR(0x4d54f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d54f4:{NFSU2_TR(0x4d54f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4d54f7:{NFSU2_TR(0x4d54f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d54f8:{NFSU2_TR(0x4d54f8);
u8 U[4];
w4(U+0,u32(0x796328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d54fd:{NFSU2_TR(0x4d54fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5501:{NFSU2_TR(0x4d5501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5506ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4d5506:L4d5506:{c.instructions+=4;NFSU2_TR(0x4d5506);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5509:{NFSU2_TR(0x4d5509);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d550c:{NFSU2_TR(0x4d550c);
__builtin_memmove((R+24),(R+0),4);
}
B4d550e:{NFSU2_TR(0x4d550e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4d583d;}}
}
B4d5514:L4d5514:{c.instructions+=1;NFSU2_TR(0x4d5514);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4d5908ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4d551b:L4d551b:{c.instructions+=4;NFSU2_TR(0x4d551b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d551f:{NFSU2_TR(0x4d551f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5520:{NFSU2_TR(0x4d5520);
__builtin_memmove((R+4),(R+20),4);
}
B4d5522:{NFSU2_TR(0x4d5522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5527ull));
TAIL_STATIC(0x4a1d00u,4a1);
}
B4d5527:L4d5527:{c.instructions+=2;NFSU2_TR(0x4d5527);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d5529:{NFSU2_TR(0x4d5529);
if(r1(R+518)){{goto L4d583d;}}
}
B4d552f:L4d552f:{c.instructions+=2;NFSU2_TR(0x4d552f);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5531:{NFSU2_TR(0x4d5531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5536ull));
TAIL_STATIC(0x575620u,575);
}
B4d5536:L4d5536:{c.instructions+=3;NFSU2_TR(0x4d5536);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5539:{NFSU2_TR(0x4d5539);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d553b:{NFSU2_TR(0x4d553b);
if(r1(R+518)){{goto L4d5810;}}
}
B4d5541:L4d5541:{c.instructions+=8;NFSU2_TR(0x4d5541);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5544:{NFSU2_TR(0x4d5544);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d5546:{NFSU2_TR(0x4d5546);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5549:{NFSU2_TR(0x4d5549);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d554d:{NFSU2_TR(0x4d554d);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d5553:{NFSU2_TR(0x4d5553);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d555a:{NFSU2_TR(0x4d555a);
__builtin_memmove((R+24),(R+0),4);
}
B4d555c:{NFSU2_TR(0x4d555c);
{goto L4d5812;}
}
B4d5561:L4d5561:{c.instructions+=3;NFSU2_TR(0x4d5561);
__builtin_memmove((R+0),gp(0x835fe8),4);
}
B4d5566:{NFSU2_TR(0x4d5566);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5568:{NFSU2_TR(0x4d5568);
if(r1(R+518)){{goto L4d5598;}}
}
B4d556a:L4d556a:{c.instructions+=5;NFSU2_TR(0x4d556a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d556d:{NFSU2_TR(0x4d556d);
u8 U[4];
w4(U+0,u32(0x79631cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5572:{NFSU2_TR(0x4d5572);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5573:{NFSU2_TR(0x4d5573);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5574:{NFSU2_TR(0x4d5574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5579ull));
TAIL_STATIC(0x537b80u,537);
}
B4d5579:L4d5579:{c.instructions+=2;NFSU2_TR(0x4d5579);
u8 U[4];
w4(U+0,u32(0x7087ce45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d557e:{NFSU2_TR(0x4d557e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5583ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d5583:L4d5583:{c.instructions+=5;NFSU2_TR(0x4d5583);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5584:{NFSU2_TR(0x4d5584);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5588:{NFSU2_TR(0x4d5588);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d558a:{NFSU2_TR(0x4d558a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d558b:{NFSU2_TR(0x4d558b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5590ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d5590:L4d5590:{c.instructions+=2;NFSU2_TR(0x4d5590);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d5593:{NFSU2_TR(0x4d5593);
{goto L4d583d;}
}
B4d5598:L4d5598:{c.instructions+=4;NFSU2_TR(0x4d5598);
__builtin_memmove((R+0),gp(0x836000),4);
}
B4d559d:{NFSU2_TR(0x4d559d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d559f:{NFSU2_TR(0x4d559f);
__builtin_memmove((R+0),gp(0x835fe0),4);
}
B4d55a4:{NFSU2_TR(0x4d55a4);
if(r1(R+518)){{goto L4d560f;}}
}
B4d55a6:L4d55a6:{c.instructions+=3;NFSU2_TR(0x4d55a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d55a8:{NFSU2_TR(0x4d55a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d55ab:{NFSU2_TR(0x4d55ab);
if(r1(R+518)){{goto L4d55de;}}
}
B4d55ad:L4d55ad:{c.instructions+=2;NFSU2_TR(0x4d55ad);
u8 U[4];
w4(U+0,u32(0x2c248265ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55b2:{NFSU2_TR(0x4d55b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d55b7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d55b7:L4d55b7:{c.instructions+=4;NFSU2_TR(0x4d55b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55b8:{NFSU2_TR(0x4d55b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55b9:{NFSU2_TR(0x4d55b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55ba:{NFSU2_TR(0x4d55ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d55bfull));
TAIL_STATIC(0x537b80u,537);
}
B4d55bf:L4d55bf:{c.instructions+=2;NFSU2_TR(0x4d55bf);
u8 U[4];
w4(U+0,u32(0x2c248265ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55c4:{NFSU2_TR(0x4d55c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d55c9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d55c9:L4d55c9:{c.instructions+=5;NFSU2_TR(0x4d55c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55ca:{NFSU2_TR(0x4d55ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d55ce:{NFSU2_TR(0x4d55ce);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55d0:{NFSU2_TR(0x4d55d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55d1:{NFSU2_TR(0x4d55d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d55d6ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d55d6:L4d55d6:{c.instructions+=2;NFSU2_TR(0x4d55d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d55d9:{NFSU2_TR(0x4d55d9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d55de:L4d55de:{c.instructions+=2;NFSU2_TR(0x4d55de);
u8 U[4];
w4(U+0,u32(0x748bc8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55e3:{NFSU2_TR(0x4d55e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d55e8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d55e8:L4d55e8:{c.instructions+=4;NFSU2_TR(0x4d55e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55e9:{NFSU2_TR(0x4d55e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55ea:{NFSU2_TR(0x4d55ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55eb:{NFSU2_TR(0x4d55eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d55f0ull));
TAIL_STATIC(0x537b80u,537);
}
B4d55f0:L4d55f0:{c.instructions+=2;NFSU2_TR(0x4d55f0);
u8 U[4];
w4(U+0,u32(0x748bc8b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55f5:{NFSU2_TR(0x4d55f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d55faull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d55fa:L4d55fa:{c.instructions+=5;NFSU2_TR(0x4d55fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d55fb:{NFSU2_TR(0x4d55fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d55ff:{NFSU2_TR(0x4d55ff);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5601:{NFSU2_TR(0x4d5601);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5602:{NFSU2_TR(0x4d5602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5607ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d5607:L4d5607:{c.instructions+=2;NFSU2_TR(0x4d5607);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d560a:{NFSU2_TR(0x4d560a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d560f:L4d560f:{c.instructions+=2;NFSU2_TR(0x4d560f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5611:{NFSU2_TR(0x4d5611);
if(r1(R+518)){{goto L4d5641;}}
}
B4d5613:L4d5613:{c.instructions+=5;NFSU2_TR(0x4d5613);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d5616:{NFSU2_TR(0x4d5616);
u8 U[4];
w4(U+0,u32(0x796308ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d561b:{NFSU2_TR(0x4d561b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d561c:{NFSU2_TR(0x4d561c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d561d:{NFSU2_TR(0x4d561d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5622ull));
TAIL_STATIC(0x537b80u,537);
}
B4d5622:L4d5622:{c.instructions+=2;NFSU2_TR(0x4d5622);
u8 U[4];
w4(U+0,u32(0xb8ed90f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5627:{NFSU2_TR(0x4d5627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d562cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d562c:L4d562c:{c.instructions+=5;NFSU2_TR(0x4d562c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d562d:{NFSU2_TR(0x4d562d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5631:{NFSU2_TR(0x4d5631);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5633:{NFSU2_TR(0x4d5633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5634:{NFSU2_TR(0x4d5634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5639ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d5639:L4d5639:{c.instructions+=2;NFSU2_TR(0x4d5639);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d563c:{NFSU2_TR(0x4d563c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d5641:L4d5641:{c.instructions+=5;NFSU2_TR(0x4d5641);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5644:{NFSU2_TR(0x4d5644);
u8 U[4];
w4(U+0,u32(0x7962f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5649:{NFSU2_TR(0x4d5649);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d564a:{NFSU2_TR(0x4d564a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d564b:{NFSU2_TR(0x4d564b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5650ull));
TAIL_STATIC(0x537b80u,537);
}
B4d5650:L4d5650:{c.instructions+=2;NFSU2_TR(0x4d5650);
u8 U[4];
w4(U+0,u32(0x12107ffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5655:{NFSU2_TR(0x4d5655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d565aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d565a:L4d565a:{c.instructions+=5;NFSU2_TR(0x4d565a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d565b:{NFSU2_TR(0x4d565b);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d565f:{NFSU2_TR(0x4d565f);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5661:{NFSU2_TR(0x4d5661);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5662:{NFSU2_TR(0x4d5662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5667ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d5667:L4d5667:{c.instructions+=2;NFSU2_TR(0x4d5667);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d566a:{NFSU2_TR(0x4d566a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d566f:L4d566f:{c.instructions+=3;NFSU2_TR(0x4d566f);
__builtin_memmove((R+0),gp(0x835fe8),4);
}
B4d5674:{NFSU2_TR(0x4d5674);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5676:{NFSU2_TR(0x4d5676);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d583d;}}
}
B4d567c:L4d567c:{c.instructions+=4;NFSU2_TR(0x4d567c);
__builtin_memmove((R+0),gp(0x835fd0),4);
}
B4d5681:{NFSU2_TR(0x4d5681);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5683:{NFSU2_TR(0x4d5683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d5686:{NFSU2_TR(0x4d5686);
if(r1(R+518)){{goto L4d56b9;}}
}
B4d5688:L4d5688:{c.instructions+=2;NFSU2_TR(0x4d5688);
u8 U[4];
w4(U+0,u32(0xab6c5a1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d568d:{NFSU2_TR(0x4d568d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5692ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d5692:L4d5692:{c.instructions+=4;NFSU2_TR(0x4d5692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5693:{NFSU2_TR(0x4d5693);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5694:{NFSU2_TR(0x4d5694);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5695:{NFSU2_TR(0x4d5695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d569aull));
TAIL_STATIC(0x537b80u,537);
}
B4d569a:L4d569a:{c.instructions+=2;NFSU2_TR(0x4d569a);
u8 U[4];
w4(U+0,u32(0xab6c5a1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d569f:{NFSU2_TR(0x4d569f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d56a4ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d56a4:L4d56a4:{c.instructions+=5;NFSU2_TR(0x4d56a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56a5:{NFSU2_TR(0x4d56a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d56a9:{NFSU2_TR(0x4d56a9);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56ab:{NFSU2_TR(0x4d56ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56ac:{NFSU2_TR(0x4d56ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d56b1ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d56b1:L4d56b1:{c.instructions+=2;NFSU2_TR(0x4d56b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d56b4:{NFSU2_TR(0x4d56b4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d56b9:L4d56b9:{c.instructions+=3;NFSU2_TR(0x4d56b9);
__builtin_memmove((R+0),gp(0x835fd8),4);
}
B4d56be:{NFSU2_TR(0x4d56be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d56c0:{NFSU2_TR(0x4d56c0);
if(r1(R+518)){{goto L4d56f3;}}
}
B4d56c2:L4d56c2:{c.instructions+=2;NFSU2_TR(0x4d56c2);
u8 U[4];
w4(U+0,u32(0xe59bfb1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56c7:{NFSU2_TR(0x4d56c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d56ccull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d56cc:L4d56cc:{c.instructions+=4;NFSU2_TR(0x4d56cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56cd:{NFSU2_TR(0x4d56cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56ce:{NFSU2_TR(0x4d56ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56cf:{NFSU2_TR(0x4d56cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d56d4ull));
TAIL_STATIC(0x537b80u,537);
}
B4d56d4:L4d56d4:{c.instructions+=2;NFSU2_TR(0x4d56d4);
u8 U[4];
w4(U+0,u32(0xe59bfb1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56d9:{NFSU2_TR(0x4d56d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d56deull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d56de:L4d56de:{c.instructions+=5;NFSU2_TR(0x4d56de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56df:{NFSU2_TR(0x4d56df);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d56e3:{NFSU2_TR(0x4d56e3);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56e5:{NFSU2_TR(0x4d56e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d56e6:{NFSU2_TR(0x4d56e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d56ebull));
TAIL_STATIC(0x50c960u,50c);
}
B4d56eb:L4d56eb:{c.instructions+=2;NFSU2_TR(0x4d56eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d56ee:{NFSU2_TR(0x4d56ee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d56f3:L4d56f3:{c.instructions+=3;NFSU2_TR(0x4d56f3);
__builtin_memmove((R+0),gp(0x835fd4),4);
}
B4d56f8:{NFSU2_TR(0x4d56f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d56fa:{NFSU2_TR(0x4d56fa);
if(r1(R+518)){{goto L4d5715;}}
}
B4d56fc:L4d56fc:{c.instructions+=2;NFSU2_TR(0x4d56fc);
u8 U[4];
w4(U+0,u32(0xf8bcee28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5701:{NFSU2_TR(0x4d5701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5706ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d5706:L4d5706:{c.instructions+=4;NFSU2_TR(0x4d5706);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5707:{NFSU2_TR(0x4d5707);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5708:{NFSU2_TR(0x4d5708);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5709:{NFSU2_TR(0x4d5709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d570eull));
TAIL_STATIC(0x537b80u,537);
}
B4d570e:L4d570e:{c.instructions+=2;NFSU2_TR(0x4d570e);
u8 U[4];
w4(U+0,u32(0xf8bcee28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5713:{NFSU2_TR(0x4d5713);
{goto L4d5788;}
}
B4d5715:L4d5715:{c.instructions+=2;NFSU2_TR(0x4d5715);
u8 U[4];
w4(U+0,u32(0x333f7902ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d571a:{NFSU2_TR(0x4d571a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d571full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d571f:L4d571f:{c.instructions+=4;NFSU2_TR(0x4d571f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5720:{NFSU2_TR(0x4d5720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5721:{NFSU2_TR(0x4d5721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5722:{NFSU2_TR(0x4d5722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5727ull));
TAIL_STATIC(0x537b80u,537);
}
B4d5727:L4d5727:{c.instructions+=2;NFSU2_TR(0x4d5727);
u8 U[4];
w4(U+0,u32(0x333f7902ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d572c:{NFSU2_TR(0x4d572c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5731ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d5731:L4d5731:{c.instructions+=5;NFSU2_TR(0x4d5731);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5732:{NFSU2_TR(0x4d5732);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5736:{NFSU2_TR(0x4d5736);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5738:{NFSU2_TR(0x4d5738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5739:{NFSU2_TR(0x4d5739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d573eull));
TAIL_STATIC(0x50c960u,50c);
}
B4d573e:L4d573e:{c.instructions+=2;NFSU2_TR(0x4d573e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d5741:{NFSU2_TR(0x4d5741);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d5746:L4d5746:{c.instructions+=2;NFSU2_TR(0x4d5746);
u8 U[4];
w4(U+0,u32(0x9633e6c2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d574b:{NFSU2_TR(0x4d574b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5750ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d5750:L4d5750:{c.instructions+=5;NFSU2_TR(0x4d5750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5751:{NFSU2_TR(0x4d5751);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5755:{NFSU2_TR(0x4d5755);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5757:{NFSU2_TR(0x4d5757);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5758:{NFSU2_TR(0x4d5758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d575dull));
TAIL_STATIC(0x50c960u,50c);
}
B4d575d:L4d575d:{c.instructions+=2;NFSU2_TR(0x4d575d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d5760:{NFSU2_TR(0x4d5760);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d5765:L4d5765:{c.instructions+=4;NFSU2_TR(0x4d5765);
__builtin_memmove((R+0),gp(0x835fe8),4);
}
B4d576a:{NFSU2_TR(0x4d576a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d576c:{NFSU2_TR(0x4d576c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d576f:{NFSU2_TR(0x4d576f);
if(r1(R+518)){{goto L4d57a2;}}
}
B4d5771:L4d5771:{c.instructions+=2;NFSU2_TR(0x4d5771);
u8 U[4];
w4(U+0,u32(0x452383e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5776:{NFSU2_TR(0x4d5776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d577bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d577b:L4d577b:{c.instructions+=4;NFSU2_TR(0x4d577b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d577c:{NFSU2_TR(0x4d577c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d577d:{NFSU2_TR(0x4d577d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d577e:{NFSU2_TR(0x4d577e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5783ull));
TAIL_STATIC(0x537b80u,537);
}
B4d5783:L4d5783:{c.instructions+=1;NFSU2_TR(0x4d5783);
u8 U[4];
w4(U+0,u32(0x452383e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5788:L4d5788:{c.instructions+=1;NFSU2_TR(0x4d5788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d578dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d578d:L4d578d:{c.instructions+=5;NFSU2_TR(0x4d578d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d578e:{NFSU2_TR(0x4d578e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5792:{NFSU2_TR(0x4d5792);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5794:{NFSU2_TR(0x4d5794);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5795:{NFSU2_TR(0x4d5795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d579aull));
TAIL_STATIC(0x50c960u,50c);
}
B4d579a:L4d579a:{c.instructions+=2;NFSU2_TR(0x4d579a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d579d:{NFSU2_TR(0x4d579d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d57a2:L4d57a2:{c.instructions+=2;NFSU2_TR(0x4d57a2);
u8 U[4];
w4(U+0,u32(0x308db484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57a7:{NFSU2_TR(0x4d57a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d57acull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d57ac:L4d57ac:{c.instructions+=4;NFSU2_TR(0x4d57ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57ad:{NFSU2_TR(0x4d57ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57ae:{NFSU2_TR(0x4d57ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57af:{NFSU2_TR(0x4d57af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d57b4ull));
TAIL_STATIC(0x537b80u,537);
}
B4d57b4:L4d57b4:{c.instructions+=2;NFSU2_TR(0x4d57b4);
u8 U[4];
w4(U+0,u32(0x308db484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57b9:{NFSU2_TR(0x4d57b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d57beull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d57be:L4d57be:{c.instructions+=5;NFSU2_TR(0x4d57be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57bf:{NFSU2_TR(0x4d57bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d57c3:{NFSU2_TR(0x4d57c3);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57c5:{NFSU2_TR(0x4d57c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57c6:{NFSU2_TR(0x4d57c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d57cbull));
TAIL_STATIC(0x50c960u,50c);
}
B4d57cb:L4d57cb:{c.instructions+=2;NFSU2_TR(0x4d57cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d57ce:{NFSU2_TR(0x4d57ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d57d3:L4d57d3:{c.instructions+=3;NFSU2_TR(0x4d57d3);
__builtin_memmove((R+0),gp(0x835fd0),4);
}
B4d57d8:{NFSU2_TR(0x4d57d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d57da:{NFSU2_TR(0x4d57da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d583d;}}
}
B4d57dc:L4d57dc:{c.instructions+=3;NFSU2_TR(0x4d57dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d57df:{NFSU2_TR(0x4d57df);
u8 U[4];
w4(U+0,u32(0x6353f07eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57e4:{NFSU2_TR(0x4d57e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d57e9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d57e9:L4d57e9:{c.instructions+=4;NFSU2_TR(0x4d57e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57ea:{NFSU2_TR(0x4d57ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57eb:{NFSU2_TR(0x4d57eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57ec:{NFSU2_TR(0x4d57ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d57f1ull));
TAIL_STATIC(0x537b80u,537);
}
B4d57f1:L4d57f1:{c.instructions+=2;NFSU2_TR(0x4d57f1);
u8 U[4];
w4(U+0,u32(0x6353f07eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57f6:{NFSU2_TR(0x4d57f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d57fbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4d57fb:L4d57fb:{c.instructions+=5;NFSU2_TR(0x4d57fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d57fc:{NFSU2_TR(0x4d57fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5800:{NFSU2_TR(0x4d5800);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5802:{NFSU2_TR(0x4d5802);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5803:{NFSU2_TR(0x4d5803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5808ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d5808:L4d5808:{c.instructions+=2;NFSU2_TR(0x4d5808);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d580b:{NFSU2_TR(0x4d580b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d552fu);}goto L4d552f;}
}
B4d5810:L4d5810:{c.instructions+=1;NFSU2_TR(0x4d5810);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d5812:L4d5812:{c.instructions+=6;NFSU2_TR(0x4d5812);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5814:{NFSU2_TR(0x4d5814);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5816:{NFSU2_TR(0x4d5816);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d581a:{NFSU2_TR(0x4d581a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d581b:{NFSU2_TR(0x4d581b);
__builtin_memmove((R+4),(R+24),4);
}
B4d581d:{NFSU2_TR(0x4d581d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5822ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d5822:L4d5822:{c.instructions+=5;NFSU2_TR(0x4d5822);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5826:{NFSU2_TR(0x4d5826);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5827:{NFSU2_TR(0x4d5827);
__builtin_memmove((R+4),(R+12),4);
}
B4d5829:{NFSU2_TR(0x4d5829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d582c:{NFSU2_TR(0x4d582c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5831ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d5831:L4d5831:{c.instructions+=3;NFSU2_TR(0x4d5831);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5832:{NFSU2_TR(0x4d5832);
__builtin_memmove((R+4),(R+12),4);
}
B4d5834:{NFSU2_TR(0x4d5834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5839ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d5839:L4d5839:{c.instructions+=1;NFSU2_TR(0x4d5839);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4d583d:L4d583d:{c.instructions+=4;NFSU2_TR(0x4d583d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5841:{NFSU2_TR(0x4d5841);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d5844:{NFSU2_TR(0x4d5844);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5848:{NFSU2_TR(0x4d5848);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d54f0u);}goto L4d54f0;}}
}
B4d584e:L4d584e:{c.instructions+=4;NFSU2_TR(0x4d584e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d5852:{NFSU2_TR(0x4d5852);
__builtin_memmove((R+0),(R+28),4);
}
B4d5854:{NFSU2_TR(0x4d5854);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d5857:{NFSU2_TR(0x4d5857);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4d58d7;}}
}
B4d5859:L4d5859:{c.instructions+=1;NFSU2_TR(0x4d5859);
__builtin_memmove((R+16),(R+16),4);
}
B4d5860:L4d5860:{c.instructions+=2;NFSU2_TR(0x4d5860);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5862:{NFSU2_TR(0x4d5862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5867ull));
TAIL_STATIC(0x575620u,575);
}
B4d5867:L4d5867:{c.instructions+=3;NFSU2_TR(0x4d5867);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d586a:{NFSU2_TR(0x4d586a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d586c:{NFSU2_TR(0x4d586c);
if(r1(R+518)){{goto L4d588b;}}
}
B4d586e:L4d586e:{c.instructions+=8;NFSU2_TR(0x4d586e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5871:{NFSU2_TR(0x4d5871);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d5873:{NFSU2_TR(0x4d5873);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5876:{NFSU2_TR(0x4d5876);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d587a:{NFSU2_TR(0x4d587a);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d5880:{NFSU2_TR(0x4d5880);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5887:{NFSU2_TR(0x4d5887);
__builtin_memmove((R+24),(R+0),4);
}
B4d5889:{NFSU2_TR(0x4d5889);
{goto L4d588d;}
}
B4d588b:L4d588b:{c.instructions+=1;NFSU2_TR(0x4d588b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d588d:L4d588d:{c.instructions+=4;NFSU2_TR(0x4d588d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4d588e:{NFSU2_TR(0x4d588e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d588f:{NFSU2_TR(0x4d588f);
u8 U[4];
w4(U+0,u32(0x796328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5894:{NFSU2_TR(0x4d5894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5899ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4d5899:L4d5899:{c.instructions+=5;NFSU2_TR(0x4d5899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d589c:{NFSU2_TR(0x4d589c);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58a1:{NFSU2_TR(0x4d58a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58a2:{NFSU2_TR(0x4d58a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58a3:{NFSU2_TR(0x4d58a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d58a8ull));
TAIL_STATIC(0x537b80u,537);
}
B4d58a8:L4d58a8:{c.instructions+=6;NFSU2_TR(0x4d58a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d58ab:{NFSU2_TR(0x4d58ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58ad:{NFSU2_TR(0x4d58ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58af:{NFSU2_TR(0x4d58af);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58b4:{NFSU2_TR(0x4d58b4);
__builtin_memmove((R+4),(R+24),4);
}
B4d58b6:{NFSU2_TR(0x4d58b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d58bbull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d58bb:L4d58bb:{c.instructions+=4;NFSU2_TR(0x4d58bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58bc:{NFSU2_TR(0x4d58bc);
__builtin_memmove((R+4),(R+12),4);
}
B4d58be:{NFSU2_TR(0x4d58be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d58c5:{NFSU2_TR(0x4d58c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d58caull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d58ca:L4d58ca:{c.instructions+=3;NFSU2_TR(0x4d58ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58cb:{NFSU2_TR(0x4d58cb);
__builtin_memmove((R+4),(R+12),4);
}
B4d58cd:{NFSU2_TR(0x4d58cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d58d2ull));
TAIL_STATIC(0x5434d0u,543);
}
B4d58d2:L4d58d2:{c.instructions+=2;NFSU2_TR(0x4d58d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d58d5:{NFSU2_TR(0x4d58d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5860u);}goto L4d5860;}}
}
B4d58d7:L4d58d7:{c.instructions+=3;NFSU2_TR(0x4d58d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58d9:{NFSU2_TR(0x4d58d9);
__builtin_memmove((R+4),(R+12),4);
}
B4d58db:{NFSU2_TR(0x4d58db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d58e0ull));
TAIL_STATIC(0x543470u,543);
}
B4d58e0:L4d58e0:{c.instructions+=3;NFSU2_TR(0x4d58e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d58e3:{NFSU2_TR(0x4d58e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d58e5:{NFSU2_TR(0x4d58e5);
if(r1(R+518)){{goto L4d58f5;}}
}
B4d58e7:L4d58e7:{c.instructions+=4;NFSU2_TR(0x4d58e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d58ea:{NFSU2_TR(0x4d58ea);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58ef:{NFSU2_TR(0x4d58ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58f0:{NFSU2_TR(0x4d58f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d58f5ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4d58f5:L4d58f5:{c.instructions+=3;NFSU2_TR(0x4d58f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d58f7:{NFSU2_TR(0x4d58f7);
__builtin_memmove((R+4),(R+12),4);
}
B4d58f9:{NFSU2_TR(0x4d58f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d58feull));
TAIL_STATIC(0x538500u,538);
}
B4d58fe:L4d58fe:{c.instructions+=6;NFSU2_TR(0x4d58fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d58ff:{NFSU2_TR(0x4d58ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5900:{NFSU2_TR(0x4d5900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5901:{NFSU2_TR(0x4d5901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d5902:{NFSU2_TR(0x4d5902);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d5905:{NFSU2_TR(0x4d5905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5920:L4d5920:{c.instructions+=14;NFSU2_TR(0x4d5920);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5922:{NFSU2_TR(0x4d5922);
u8 U[4];
w4(U+0,u32(0x7749f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5927:{NFSU2_TR(0x4d5927);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d592d:{NFSU2_TR(0x4d592d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d592e:{NFSU2_TR(0x4d592e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5935:{NFSU2_TR(0x4d5935);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5936:{NFSU2_TR(0x4d5936);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5937:{NFSU2_TR(0x4d5937);
__builtin_memmove((R+24),(R+4),4);
}
B4d5939:{NFSU2_TR(0x4d5939);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d593d:{NFSU2_TR(0x4d593d);
u8 U[4];
w4(U+0,u32(0x796334ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d5943:{NFSU2_TR(0x4d5943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5946:{NFSU2_TR(0x4d5946);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5948:{NFSU2_TR(0x4d5948);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5950:{NFSU2_TR(0x4d5950);
if(r1(R+518)){{goto L4d5962;}}
}
B4d5952:L4d5952:{c.instructions+=2;NFSU2_TR(0x4d5952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5953:{NFSU2_TR(0x4d5953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5958ull));
TAIL_STATIC(0x540a60u,540);
}
B4d5958:L4d5958:{c.instructions+=2;NFSU2_TR(0x4d5958);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d595b:{NFSU2_TR(0x4d595b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5962:L4d5962:{c.instructions+=3;NFSU2_TR(0x4d5962);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5965:{NFSU2_TR(0x4d5965);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d596a:{NFSU2_TR(0x4d596a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d596full));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4d596f:L4d596f:{c.instructions+=3;NFSU2_TR(0x4d596f);
__builtin_memmove((R+4),(R+24),4);
}
B4d5971:{NFSU2_TR(0x4d5971);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5979:{NFSU2_TR(0x4d5979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d597eull));
TAIL_STATIC(0x510d40u,510);
}
B4d597e:L4d597e:{c.instructions+=5;NFSU2_TR(0x4d597e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5982:{NFSU2_TR(0x4d5982);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5983:{NFSU2_TR(0x4d5983);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d598a:{NFSU2_TR(0x4d598a);
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
B4d598d:{NFSU2_TR(0x4d598d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5990:L4d5990:{c.instructions+=7;NFSU2_TR(0x4d5990);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5991:{NFSU2_TR(0x4d5991);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5992:{NFSU2_TR(0x4d5992);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5993:{NFSU2_TR(0x4d5993);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5994:{NFSU2_TR(0x4d5994);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5996:{NFSU2_TR(0x4d5996);
__builtin_memmove((R+20),(R+4),4);
}
B4d5998:{NFSU2_TR(0x4d5998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d599dull));
TAIL_STATIC(0x575620u,575);
}
B4d599d:L4d599d:{c.instructions+=4;NFSU2_TR(0x4d599d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d599f:{NFSU2_TR(0x4d599f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d59a2:{NFSU2_TR(0x4d59a2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d59a4:{NFSU2_TR(0x4d59a4);
if(r1(R+518)){{goto L4d59d9;}}
}
B4d59a6:L4d59a6:{c.instructions+=14;NFSU2_TR(0x4d59a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d59a9:{NFSU2_TR(0x4d59a9);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d59af:{NFSU2_TR(0x4d59af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d59b1:{NFSU2_TR(0x4d59b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d59b4:{NFSU2_TR(0x4d59b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d59b7:{NFSU2_TR(0x4d59b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d59ba:{NFSU2_TR(0x4d59ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d59bd:{NFSU2_TR(0x4d59bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d59c0:{NFSU2_TR(0x4d59c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d59c3:{NFSU2_TR(0x4d59c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d59c7:{NFSU2_TR(0x4d59c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d59ce:{NFSU2_TR(0x4d59ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d59d5:{NFSU2_TR(0x4d59d5);
__builtin_memmove((R+24),(R+0),4);
}
B4d59d7:{NFSU2_TR(0x4d59d7);
{goto L4d59db;}
}
B4d59d9:L4d59d9:{c.instructions+=1;NFSU2_TR(0x4d59d9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d59db:L4d59db:{c.instructions+=4;NFSU2_TR(0x4d59db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d59de:{NFSU2_TR(0x4d59de);
u8 U[4];
w4(U+0,u32(0x6d851451ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d59e3:{NFSU2_TR(0x4d59e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d59e4:{NFSU2_TR(0x4d59e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d59e9ull));
TAIL_STATIC(0x537a10u,537);
}
B4d59e9:L4d59e9:{c.instructions+=3;NFSU2_TR(0x4d59e9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d59eb:{NFSU2_TR(0x4d59eb);
__builtin_memmove((R+12),(R+0),4);
}
B4d59ed:{NFSU2_TR(0x4d59ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d59f2ull));
TAIL_STATIC(0x575620u,575);
}
B4d59f2:L4d59f2:{c.instructions+=3;NFSU2_TR(0x4d59f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4d59f5:{NFSU2_TR(0x4d59f5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d59f7:{NFSU2_TR(0x4d59f7);
if(r1(R+518)){{goto L4d5a07;}}
}
B4d59f9:L4d59f9:{c.instructions+=4;NFSU2_TR(0x4d59f9);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d59ff:{NFSU2_TR(0x4d59ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5a02:{NFSU2_TR(0x4d5a02);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d5a05:{NFSU2_TR(0x4d5a05);
{goto L4d5a09;}
}
B4d5a07:L4d5a07:{c.instructions+=1;NFSU2_TR(0x4d5a07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5a09:L4d5a09:{c.instructions+=9;NFSU2_TR(0x4d5a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d5a0c:{NFSU2_TR(0x4d5a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5a0f:{NFSU2_TR(0x4d5a0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d5a11:{NFSU2_TR(0x4d5a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5a14:{NFSU2_TR(0x4d5a14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d5a16:{NFSU2_TR(0x4d5a16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a17:{NFSU2_TR(0x4d5a17);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5a1a:{NFSU2_TR(0x4d5a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5a1d:{NFSU2_TR(0x4d5a1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5a22ull));
TAIL_STATIC(0x52e770u,52e);
}
B4d5a22:L4d5a22:{c.instructions+=5;NFSU2_TR(0x4d5a22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5a23:{NFSU2_TR(0x4d5a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5a24:{NFSU2_TR(0x4d5a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5a25:{NFSU2_TR(0x4d5a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d5a26:{NFSU2_TR(0x4d5a26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5a30:L4d5a30:{c.instructions+=10;NFSU2_TR(0x4d5a30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a31:{NFSU2_TR(0x4d5a31);
__builtin_memmove((R+20),(R+16),4);
}
B4d5a33:{NFSU2_TR(0x4d5a33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4d5a36:{NFSU2_TR(0x4d5a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30cull))));
}
B4d5a3c:{NFSU2_TR(0x4d5a3c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a3d:{NFSU2_TR(0x4d5a3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a3e:{NFSU2_TR(0x4d5a3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a3f:{NFSU2_TR(0x4d5a3f);
__builtin_memmove((R+20),(R+4),4);
}
B4d5a41:{NFSU2_TR(0x4d5a41);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a46:{NFSU2_TR(0x4d5a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5a4bull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d5a4b:L4d5a4b:{c.instructions+=3;NFSU2_TR(0x4d5a4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5a4e:{NFSU2_TR(0x4d5a4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5a50:{NFSU2_TR(0x4d5a50);
if(r1(R+518)){{goto L4d5a5e;}}
}
B4d5a52:L4d5a52:{c.instructions+=3;NFSU2_TR(0x4d5a52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a54:{NFSU2_TR(0x4d5a54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a56:{NFSU2_TR(0x4d5a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5a5bull));
TAIL_STATIC(0x50cee0u,50c);
}
B4d5a5b:L4d5a5b:{c.instructions+=1;NFSU2_TR(0x4d5a5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5a5e:L4d5a5e:{c.instructions+=2;NFSU2_TR(0x4d5a5e);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a63:{NFSU2_TR(0x4d5a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5a68ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4d5a68:L4d5a68:{c.instructions+=3;NFSU2_TR(0x4d5a68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5a6b:{NFSU2_TR(0x4d5a6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5a6d:{NFSU2_TR(0x4d5a6d);
if(r1(R+518)){{goto L4d5a7b;}}
}
B4d5a6f:L4d5a6f:{c.instructions+=3;NFSU2_TR(0x4d5a6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a71:{NFSU2_TR(0x4d5a71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a73:{NFSU2_TR(0x4d5a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5a78ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4d5a78:L4d5a78:{c.instructions+=1;NFSU2_TR(0x4d5a78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5a7b:L4d5a7b:{c.instructions+=4;NFSU2_TR(0x4d5a7b);
__builtin_memmove((R+0),gp(0x836010),4);
}
B4d5a80:{NFSU2_TR(0x4d5a80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5a81:{NFSU2_TR(0x4d5a81);
s4(0x83637c,u32(0x1ull));
}
B4d5a8b:{NFSU2_TR(0x4d5a8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5a90ull));
TAIL_STATIC(0x73ed70u,73e);
}
B4d5a90:L4d5a90:{c.instructions+=3;NFSU2_TR(0x4d5a90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5a93:{NFSU2_TR(0x4d5a93);
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
B4d5a95:{NFSU2_TR(0x4d5a95);
if(r1(R+518)){{goto L4d5bbb;}}
}
B4d5a9b:L4d5a9b:{c.instructions+=5;NFSU2_TR(0x4d5a9b);
__builtin_memmove((R+4),gp(0x836010),4);
}
B4d5aa1:{NFSU2_TR(0x4d5aa1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5aa3:{NFSU2_TR(0x4d5aa3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5aa5:{NFSU2_TR(0x4d5aa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5aa6:{NFSU2_TR(0x4d5aa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5aabull));
TAIL_STATIC(0x73ed10u,73e);
}
B4d5aab:L4d5aab:{c.instructions+=5;NFSU2_TR(0x4d5aab);
__builtin_memmove((R+24),(R+0),4);
}
B4d5aad:{NFSU2_TR(0x4d5aad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5aaf:{NFSU2_TR(0x4d5aaf);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w2(U+4,u16(0x20ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4d5ab6:{NFSU2_TR(0x4d5ab6);
w4(R+4,u32(0x3full));
}
B4d5abb:{NFSU2_TR(0x4d5abb);
u8 U[4];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5abf:L4d5abf:{c.instructions+=1;NFSU2_TR(0x4d5abf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d5ac1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5abfu);}goto L4d5abf;}
}
B4d5ac1:L4d5ac1:{c.instructions+=7;NFSU2_TR(0x4d5ac1);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ac6:{NFSU2_TR(0x4d5ac6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5aca:{NFSU2_TR(0x4d5aca);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d5acc:{NFSU2_TR(0x4d5acc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5acd:{NFSU2_TR(0x4d5acd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5ad1:{NFSU2_TR(0x4d5ad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ad2:{NFSU2_TR(0x4d5ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5ad7ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4d5ad7:L4d5ad7:{c.instructions+=6;NFSU2_TR(0x4d5ad7);
u8 U[4];
w4(U+0,u32(0x796358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5adc:{NFSU2_TR(0x4d5adc);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5ae0:{NFSU2_TR(0x4d5ae0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ae1:{NFSU2_TR(0x4d5ae1);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5ae5:{NFSU2_TR(0x4d5ae5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ae6:{NFSU2_TR(0x4d5ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5aebull));
TAIL_STATIC(0x43dda0u,43d);
}
B4d5aeb:L4d5aeb:{c.instructions+=4;NFSU2_TR(0x4d5aeb);
u8 U[6];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
w2(U+4,u16(0x20ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4d5af5:{NFSU2_TR(0x4d5af5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5af7:{NFSU2_TR(0x4d5af7);
w4(R+4,u32(0x3full));
}
B4d5afc:{NFSU2_TR(0x4d5afc);
u8 U[4];
w4(U+0,u32(u32(u32(0x13eull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5b03:L4d5b03:{c.instructions+=1;NFSU2_TR(0x4d5b03);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d5b05;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5b03u);}goto L4d5b03;}
}
B4d5b05:L4d5b05:{c.instructions+=10;NFSU2_TR(0x4d5b05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4d5b08:{NFSU2_TR(0x4d5b08);
u8 U[4];
w4(U+0,u32(0x79634cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b0d:{NFSU2_TR(0x4d5b0d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d5b0f:{NFSU2_TR(0x4d5b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5b12:{NFSU2_TR(0x4d5b12);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b17:{NFSU2_TR(0x4d5b17);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5b1e:{NFSU2_TR(0x4d5b1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b1f:{NFSU2_TR(0x4d5b1f);
u8 U[4];
w4(U+0,u32(0x796344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b24:{NFSU2_TR(0x4d5b24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b25:{NFSU2_TR(0x4d5b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5b2aull));
TAIL_STATIC(0x7414a0u,741);
}
B4d5b2a:L4d5b2a:{c.instructions+=3;NFSU2_TR(0x4d5b2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5b2d:{NFSU2_TR(0x4d5b2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b2e:{NFSU2_TR(0x4d5b2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5b33ull));
TAIL_STATIC(0x742360u,742);
}
B4d5b33:L4d5b33:{c.instructions+=6;NFSU2_TR(0x4d5b33);
u8 U[4];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5b3a:{NFSU2_TR(0x4d5b3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d5b3d:{NFSU2_TR(0x4d5b3d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5b45:{NFSU2_TR(0x4d5b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5b4d:{NFSU2_TR(0x4d5b4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5b51:{NFSU2_TR(0x4d5b51);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5b53:L4d5b53:{c.instructions+=4;NFSU2_TR(0x4d5b53);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4d5b5a:{NFSU2_TR(0x4d5b5a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5b5b:{NFSU2_TR(0x4d5b5b);
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
}
B4d5b60:{NFSU2_TR(0x4d5b60);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5b53u);}goto L4d5b53;}}
}
B4d5b62:L4d5b62:{c.instructions+=3;NFSU2_TR(0x4d5b62);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5b66:{NFSU2_TR(0x4d5b66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5b69:{NFSU2_TR(0x4d5b69);
__builtin_memmove((R+16),(R+16),4);
}
B4d5b70:L4d5b70:{c.instructions+=4;NFSU2_TR(0x4d5b70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4d5b72:{NFSU2_TR(0x4d5b72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5b73:{NFSU2_TR(0x4d5b73);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d5b75:{NFSU2_TR(0x4d5b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5b70u);}goto L4d5b70;}}
}
B4d5b77:L4d5b77:{c.instructions+=4;NFSU2_TR(0x4d5b77);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4d5b79:{NFSU2_TR(0x4d5b79);
__builtin_memmove((R+8),(R+0),4);
}
B4d5b7b:{NFSU2_TR(0x4d5b7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5b7f:{NFSU2_TR(0x4d5b7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5b82:L4d5b82:{c.instructions+=4;NFSU2_TR(0x4d5b82);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4d5b84:{NFSU2_TR(0x4d5b84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5b85:{NFSU2_TR(0x4d5b85);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d5b87:{NFSU2_TR(0x4d5b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5b82u);}goto L4d5b82;}}
}
B4d5b89:L4d5b89:{c.instructions+=12;NFSU2_TR(0x4d5b89);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5b8d:{NFSU2_TR(0x4d5b8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b8e:{NFSU2_TR(0x4d5b8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b90:{NFSU2_TR(0x4d5b90);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5b97:{NFSU2_TR(0x4d5b97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5b98:{NFSU2_TR(0x4d5b98);
w4(R+4,u32(0xffull));
}
B4d5b9d:{NFSU2_TR(0x4d5b9d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B4d5b9f:{NFSU2_TR(0x4d5b9f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B4d5ba1:{NFSU2_TR(0x4d5ba1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ba2:{NFSU2_TR(0x4d5ba2);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4d5ba6:{NFSU2_TR(0x4d5ba6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ba7:{NFSU2_TR(0x4d5ba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5bacull));
TAIL_STATIC(0x7434f0u,743);
}
B4d5bac:L4d5bac:{c.instructions+=5;NFSU2_TR(0x4d5bac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d5baf:{NFSU2_TR(0x4d5baf);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5bb3:{NFSU2_TR(0x4d5bb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5bb4:{NFSU2_TR(0x4d5bb4);
__builtin_memmove((R+4),(R+20),4);
}
B4d5bb6:{NFSU2_TR(0x4d5bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5bbbull));
TAIL_STATIC(0x4bdd20u,4bd);
}
B4d5bbb:L4d5bbb:{c.instructions+=6;NFSU2_TR(0x4d5bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5bbc:{NFSU2_TR(0x4d5bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5bbd:{NFSU2_TR(0x4d5bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5bbe:{NFSU2_TR(0x4d5bbe);
__builtin_memmove((R+16),(R+20),4);
}
B4d5bc0:{NFSU2_TR(0x4d5bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5bc1:{NFSU2_TR(0x4d5bc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5bd0:L4d5bd0:{c.instructions+=13;NFSU2_TR(0x4d5bd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5bd1:{NFSU2_TR(0x4d5bd1);
__builtin_memmove((R+20),(R+16),4);
}
B4d5bd3:{NFSU2_TR(0x4d5bd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4d5bd6:{NFSU2_TR(0x4d5bd6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x30cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x30cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d5bdc:{NFSU2_TR(0x4d5bdc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5bdd:{NFSU2_TR(0x4d5bdd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5bde:{NFSU2_TR(0x4d5bde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5bdf:{NFSU2_TR(0x4d5bdf);
__builtin_memmove((R+20),(R+4),4);
}
B4d5be1:{NFSU2_TR(0x4d5be1);
__builtin_memmove((R+0),gp(0x836010),4);
}
B4d5be6:{NFSU2_TR(0x4d5be6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5be8:{NFSU2_TR(0x4d5be8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5bea:{NFSU2_TR(0x4d5bea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5beb:{NFSU2_TR(0x4d5beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5bf0ull));
TAIL_STATIC(0x73ed10u,73e);
}
B4d5bf0:L4d5bf0:{c.instructions+=5;NFSU2_TR(0x4d5bf0);
__builtin_memmove((R+24),(R+0),4);
}
B4d5bf2:{NFSU2_TR(0x4d5bf2);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w2(U+4,u16(0x20ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4d5bf9:{NFSU2_TR(0x4d5bf9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5bfb:{NFSU2_TR(0x4d5bfb);
w4(R+4,u32(0x3full));
}
B4d5c00:{NFSU2_TR(0x4d5c00);
u8 U[4];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5c04:L4d5c04:{c.instructions+=1;NFSU2_TR(0x4d5c04);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d5c06;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5c04u);}goto L4d5c04;}
}
B4d5c06:L4d5c06:{c.instructions+=7;NFSU2_TR(0x4d5c06);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c0b:{NFSU2_TR(0x4d5c0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5c0f:{NFSU2_TR(0x4d5c0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c10:{NFSU2_TR(0x4d5c10);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5c14:{NFSU2_TR(0x4d5c14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c15:{NFSU2_TR(0x4d5c15);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d5c17:{NFSU2_TR(0x4d5c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5c1cull));
TAIL_STATIC(0x43dda0u,43d);
}
B4d5c1c:L4d5c1c:{c.instructions+=6;NFSU2_TR(0x4d5c1c);
u8 U[4];
w4(U+0,u32(0x796358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c21:{NFSU2_TR(0x4d5c21);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5c25:{NFSU2_TR(0x4d5c25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c26:{NFSU2_TR(0x4d5c26);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5c2a:{NFSU2_TR(0x4d5c2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c2b:{NFSU2_TR(0x4d5c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5c30ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4d5c30:L4d5c30:{c.instructions+=5;NFSU2_TR(0x4d5c30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4d5c33:{NFSU2_TR(0x4d5c33);
u8 U[6];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
w2(U+4,u16(0x20ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4d5c3d:{NFSU2_TR(0x4d5c3d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5c3f:{NFSU2_TR(0x4d5c3f);
w4(R+4,u32(0x3full));
}
B4d5c44:{NFSU2_TR(0x4d5c44);
u8 U[4];
w4(U+0,u32(u32(u32(0x11aull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5c4b:L4d5c4b:{c.instructions+=1;NFSU2_TR(0x4d5c4b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4d5c4d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5c4bu);}goto L4d5c4b;}
}
B4d5c4d:L4d5c4d:{c.instructions+=9;NFSU2_TR(0x4d5c4d);
u8 U[4];
w4(U+0,u32(0x79634cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c52:{NFSU2_TR(0x4d5c52);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c57:{NFSU2_TR(0x4d5c57);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5c5e:{NFSU2_TR(0x4d5c5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c5f:{NFSU2_TR(0x4d5c5f);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4d5c61:{NFSU2_TR(0x4d5c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5c64:{NFSU2_TR(0x4d5c64);
u8 U[4];
w4(U+0,u32(0x796344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c69:{NFSU2_TR(0x4d5c69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c6a:{NFSU2_TR(0x4d5c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5c6full));
TAIL_STATIC(0x7414a0u,741);
}
B4d5c6f:L4d5c6f:{c.instructions+=3;NFSU2_TR(0x4d5c6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5c72:{NFSU2_TR(0x4d5c72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5c73:{NFSU2_TR(0x4d5c73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5c78ull));
TAIL_STATIC(0x742360u,742);
}
B4d5c78:L4d5c78:{c.instructions+=7;NFSU2_TR(0x4d5c78);
u8 U[4];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5c7f:{NFSU2_TR(0x4d5c7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d5c82:{NFSU2_TR(0x4d5c82);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5c8a:{NFSU2_TR(0x4d5c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5c92:{NFSU2_TR(0x4d5c92);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5c96:{NFSU2_TR(0x4d5c96);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5c98:{NFSU2_TR(0x4d5c98);
{goto L4d5ca0;}
}
B4d5ca0:L4d5ca0:{c.instructions+=4;NFSU2_TR(0x4d5ca0);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4d5ca7:{NFSU2_TR(0x4d5ca7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5ca8:{NFSU2_TR(0x4d5ca8);
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
}
B4d5cad:{NFSU2_TR(0x4d5cad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5ca0u);}goto L4d5ca0;}}
}
B4d5caf:L4d5caf:{c.instructions+=2;NFSU2_TR(0x4d5caf);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5cb3:{NFSU2_TR(0x4d5cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5cb6:L4d5cb6:{c.instructions+=4;NFSU2_TR(0x4d5cb6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4d5cb8:{NFSU2_TR(0x4d5cb8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5cb9:{NFSU2_TR(0x4d5cb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d5cbb:{NFSU2_TR(0x4d5cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5cb6u);}goto L4d5cb6;}}
}
B4d5cbd:L4d5cbd:{c.instructions+=4;NFSU2_TR(0x4d5cbd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4d5cbf:{NFSU2_TR(0x4d5cbf);
__builtin_memmove((R+8),(R+0),4);
}
B4d5cc1:{NFSU2_TR(0x4d5cc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5cc5:{NFSU2_TR(0x4d5cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5cc8:L4d5cc8:{c.instructions+=4;NFSU2_TR(0x4d5cc8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4d5cca:{NFSU2_TR(0x4d5cca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5ccb:{NFSU2_TR(0x4d5ccb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d5ccd:{NFSU2_TR(0x4d5ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5cc8u);}goto L4d5cc8;}}
}
B4d5ccf:L4d5ccf:{c.instructions+=12;NFSU2_TR(0x4d5ccf);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5cd3:{NFSU2_TR(0x4d5cd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5cd4:{NFSU2_TR(0x4d5cd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5cd6:{NFSU2_TR(0x4d5cd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5cdd:{NFSU2_TR(0x4d5cdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5cde:{NFSU2_TR(0x4d5cde);
w4(R+4,u32(0xffull));
}
B4d5ce3:{NFSU2_TR(0x4d5ce3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B4d5ce5:{NFSU2_TR(0x4d5ce5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B4d5ce7:{NFSU2_TR(0x4d5ce7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ce8:{NFSU2_TR(0x4d5ce8);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4d5cec:{NFSU2_TR(0x4d5cec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ced:{NFSU2_TR(0x4d5ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5cf2ull));
TAIL_STATIC(0x7434f0u,743);
}
B4d5cf2:L4d5cf2:{c.instructions+=5;NFSU2_TR(0x4d5cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4d5cf5:{NFSU2_TR(0x4d5cf5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5cf9:{NFSU2_TR(0x4d5cf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5cfa:{NFSU2_TR(0x4d5cfa);
__builtin_memmove((R+4),(R+20),4);
}
B4d5cfc:{NFSU2_TR(0x4d5cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5d01ull));
TAIL_STATIC(0x4bdd20u,4bd);
}
B4d5d01:L4d5d01:{c.instructions+=6;NFSU2_TR(0x4d5d01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5d02:{NFSU2_TR(0x4d5d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5d03:{NFSU2_TR(0x4d5d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5d04:{NFSU2_TR(0x4d5d04);
__builtin_memmove((R+16),(R+20),4);
}
B4d5d06:{NFSU2_TR(0x4d5d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5d07:{NFSU2_TR(0x4d5d07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5d10:L4d5d10:{c.instructions+=13;NFSU2_TR(0x4d5d10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d12:{NFSU2_TR(0x4d5d12);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d17:{NFSU2_TR(0x4d5d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5d1d:{NFSU2_TR(0x4d5d1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d1e:{NFSU2_TR(0x4d5d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5d25:{NFSU2_TR(0x4d5d25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d26:{NFSU2_TR(0x4d5d26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d27:{NFSU2_TR(0x4d5d27);
__builtin_memmove((R+24),(R+4),4);
}
B4d5d29:{NFSU2_TR(0x4d5d29);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5d2d:{NFSU2_TR(0x4d5d2d);
u8 U[4];
w4(U+0,u32(0x79635cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4d5d33:{NFSU2_TR(0x4d5d33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5d36:{NFSU2_TR(0x4d5d36);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5d3e:{NFSU2_TR(0x4d5d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5d43ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4d5d43:L4d5d43:{c.instructions+=3;NFSU2_TR(0x4d5d43);
__builtin_memmove((R+4),(R+24),4);
}
B4d5d45:{NFSU2_TR(0x4d5d45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5d4d:{NFSU2_TR(0x4d5d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5d52ull));
TAIL_STATIC(0x510d40u,510);
}
B4d5d52:L4d5d52:{c.instructions+=5;NFSU2_TR(0x4d5d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5d56:{NFSU2_TR(0x4d5d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5d57:{NFSU2_TR(0x4d5d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5d5e:{NFSU2_TR(0x4d5d5e);
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
B4d5d61:{NFSU2_TR(0x4d5d61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5d70:L4d5d70:{c.instructions+=8;NFSU2_TR(0x4d5d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4d5d73:{NFSU2_TR(0x4d5d73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d74:{NFSU2_TR(0x4d5d74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d75:{NFSU2_TR(0x4d5d75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d76:{NFSU2_TR(0x4d5d76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d77:{NFSU2_TR(0x4d5d77);
__builtin_memmove((R+12),(R+4),4);
}
B4d5d79:{NFSU2_TR(0x4d5d79);
w4(R+20,u32(0x1ull));
}
B4d5d7e:{NFSU2_TR(0x4d5d7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5d86:L4d5d86:{c.instructions+=2;NFSU2_TR(0x4d5d86);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5d88:{NFSU2_TR(0x4d5d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5d8dull));
TAIL_STATIC(0x575620u,575);
}
B4d5d8d:L4d5d8d:{c.instructions+=4;NFSU2_TR(0x4d5d8d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4d5d8f:{NFSU2_TR(0x4d5d8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5d92:{NFSU2_TR(0x4d5d92);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d5d94:{NFSU2_TR(0x4d5d94);
if(r1(R+518)){{goto L4d5dc7;}}
}
B4d5d96:L4d5d96:{c.instructions+=13;NFSU2_TR(0x4d5d96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5d99:{NFSU2_TR(0x4d5d99);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d5d9f:{NFSU2_TR(0x4d5d9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d5da1:{NFSU2_TR(0x4d5da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5da4:{NFSU2_TR(0x4d5da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5da7:{NFSU2_TR(0x4d5da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5daa:{NFSU2_TR(0x4d5daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5dad:{NFSU2_TR(0x4d5dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5db0:{NFSU2_TR(0x4d5db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5db3:{NFSU2_TR(0x4d5db3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5db7:{NFSU2_TR(0x4d5db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5dbe:{NFSU2_TR(0x4d5dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5dc5:{NFSU2_TR(0x4d5dc5);
__builtin_memmove((R+24),(R+0),4);
}
B4d5dc7:L4d5dc7:{c.instructions+=6;NFSU2_TR(0x4d5dc7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5dc8:{NFSU2_TR(0x4d5dc8);
u8 U[4];
w4(U+0,u32(0x796328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5dcd:{NFSU2_TR(0x4d5dcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5dd1:{NFSU2_TR(0x4d5dd1);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5dd3:{NFSU2_TR(0x4d5dd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5dd4:{NFSU2_TR(0x4d5dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5dd9ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d5dd9:L4d5dd9:{c.instructions+=4;NFSU2_TR(0x4d5dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d5ddc:{NFSU2_TR(0x4d5ddc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5de0:{NFSU2_TR(0x4d5de0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5de1:{NFSU2_TR(0x4d5de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5de6ull));
TAIL_STATIC(0x505450u,505);
}
B4d5de6:L4d5de6:{c.instructions+=3;NFSU2_TR(0x4d5de6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5de7:{NFSU2_TR(0x4d5de7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5de8:{NFSU2_TR(0x4d5de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5dedull));
TAIL_STATIC(0x537a10u,537);
}
B4d5ded:L4d5ded:{c.instructions+=3;NFSU2_TR(0x4d5ded);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5def:{NFSU2_TR(0x4d5def);
__builtin_memmove((R+28),(R+0),4);
}
B4d5df1:{NFSU2_TR(0x4d5df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5df6ull));
TAIL_STATIC(0x575620u,575);
}
B4d5df6:L4d5df6:{c.instructions+=3;NFSU2_TR(0x4d5df6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4d5df9:{NFSU2_TR(0x4d5df9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5dfb:{NFSU2_TR(0x4d5dfb);
if(r1(R+518)){{goto L4d5e0b;}}
}
B4d5dfd:L4d5dfd:{c.instructions+=4;NFSU2_TR(0x4d5dfd);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d5e03:{NFSU2_TR(0x4d5e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e06:{NFSU2_TR(0x4d5e06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4d5e09:{NFSU2_TR(0x4d5e09);
{goto L4d5e0d;}
}
B4d5e0b:L4d5e0b:{c.instructions+=1;NFSU2_TR(0x4d5e0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4d5e0d:L4d5e0d:{c.instructions+=9;NFSU2_TR(0x4d5e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4d5e10:{NFSU2_TR(0x4d5e10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5e13:{NFSU2_TR(0x4d5e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4d5e15:{NFSU2_TR(0x4d5e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e18:{NFSU2_TR(0x4d5e18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4d5e1a:{NFSU2_TR(0x4d5e1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e1b:{NFSU2_TR(0x4d5e1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5e1e:{NFSU2_TR(0x4d5e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e21:{NFSU2_TR(0x4d5e21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5e26ull));
TAIL_STATIC(0x52e770u,52e);
}
B4d5e26:L4d5e26:{c.instructions+=6;NFSU2_TR(0x4d5e26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e27:{NFSU2_TR(0x4d5e27);
u8 U[4];
w4(U+0,u32(0x79603cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e2c:{NFSU2_TR(0x4d5e2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5e30:{NFSU2_TR(0x4d5e30);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e32:{NFSU2_TR(0x4d5e32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e33:{NFSU2_TR(0x4d5e33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5e38ull));
TAIL_STATIC(0x50c960u,50c);
}
B4d5e38:L4d5e38:{c.instructions+=4;NFSU2_TR(0x4d5e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d5e3b:{NFSU2_TR(0x4d5e3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4d5e3f:{NFSU2_TR(0x4d5e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e40:{NFSU2_TR(0x4d5e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5e45ull));
TAIL_STATIC(0x505450u,505);
}
B4d5e45:L4d5e45:{c.instructions+=3;NFSU2_TR(0x4d5e45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e46:{NFSU2_TR(0x4d5e46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e47:{NFSU2_TR(0x4d5e47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5e4cull));
TAIL_STATIC(0x5379c0u,537);
}
B4d5e4c:L4d5e4c:{c.instructions+=7;NFSU2_TR(0x4d5e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e4f:{NFSU2_TR(0x4d5e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5e53:{NFSU2_TR(0x4d5e53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4d5e56:{NFSU2_TR(0x4d5e56);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4d5e57:{NFSU2_TR(0x4d5e57);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4d5e58:{NFSU2_TR(0x4d5e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e5c:{NFSU2_TR(0x4d5e5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5d86u);}goto L4d5d86;}}
}
B4d5e62:L4d5e62:{c.instructions+=6;NFSU2_TR(0x4d5e62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5e63:{NFSU2_TR(0x4d5e63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4d5e64:{NFSU2_TR(0x4d5e64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4d5e65:{NFSU2_TR(0x4d5e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4d5e66:{NFSU2_TR(0x4d5e66);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4d5e69:{NFSU2_TR(0x4d5e69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4d5e70:L4d5e70:{c.instructions+=10;NFSU2_TR(0x4d5e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4d5e73:{NFSU2_TR(0x4d5e73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e74:{NFSU2_TR(0x4d5e74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e75:{NFSU2_TR(0x4d5e75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e76:{NFSU2_TR(0x4d5e76);
__builtin_memmove((R+24),(R+4),4);
}
B4d5e78:{NFSU2_TR(0x4d5e78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5e79:{NFSU2_TR(0x4d5e79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4d5e7c:{NFSU2_TR(0x4d5e7c);
__builtin_memmove((R+4),(R+28),4);
}
B4d5e7e:{NFSU2_TR(0x4d5e7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e82:{NFSU2_TR(0x4d5e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5e87ull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4d5e87:L4d5e87:{c.instructions+=6;NFSU2_TR(0x4d5e87);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4d5e89:{NFSU2_TR(0x4d5e89);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4d5e8b:{NFSU2_TR(0x4d5e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e91:{NFSU2_TR(0x4d5e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e95:{NFSU2_TR(0x4d5e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5e99:{NFSU2_TR(0x4d5e99);
__builtin_memmove((R+16),(R+16),4);
}
B4d5ea0:L4d5ea0:{c.instructions+=1;NFSU2_TR(0x4d5ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5ea5ull));
TAIL_STATIC(0x582b60u,582);
}
B4d5ea5:L4d5ea5:{c.instructions+=4;NFSU2_TR(0x4d5ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5eab:{NFSU2_TR(0x4d5eab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5eac:{NFSU2_TR(0x4d5eac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ead:{NFSU2_TR(0x4d5ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5eb2ull));
TAIL_STATIC(0x73ea30u,73e);
}
B4d5eb2:L4d5eb2:{c.instructions+=3;NFSU2_TR(0x4d5eb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5eb5:{NFSU2_TR(0x4d5eb5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d5eb7:{NFSU2_TR(0x4d5eb7);
if(r1(R+518)){{goto L4d5ebc;}}
}
B4d5eb9:L4d5eb9:{c.instructions+=2;NFSU2_TR(0x4d5eb9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4d5eba:{NFSU2_TR(0x4d5eba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5ea0u);}goto L4d5ea0;}
}
B4d5ebc:L4d5ebc:{c.instructions+=4;NFSU2_TR(0x4d5ebc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4d5ec2:{NFSU2_TR(0x4d5ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5ec6:{NFSU2_TR(0x4d5ec6);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5ecb:{NFSU2_TR(0x4d5ecb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4d5fd3;}}
}
B4d5ed1:L4d5ed1:{c.instructions+=3;NFSU2_TR(0x4d5ed1);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4d5ed5:{NFSU2_TR(0x4d5ed5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4d5ed7:{NFSU2_TR(0x4d5ed7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4d5fd3;}}
}
B4d5edd:L4d5edd:{c.instructions+=3;NFSU2_TR(0x4d5edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d5ee3:{NFSU2_TR(0x4d5ee3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B4d5ee7:{NFSU2_TR(0x4d5ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5eecull));
TAIL_STATIC(0x582b60u,582);
}
B4d5eec:L4d5eec:{c.instructions+=4;NFSU2_TR(0x4d5eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5ef2:{NFSU2_TR(0x4d5ef2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ef3:{NFSU2_TR(0x4d5ef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ef4:{NFSU2_TR(0x4d5ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5ef9ull));
TAIL_STATIC(0x73ea30u,73e);
}
B4d5ef9:L4d5ef9:{c.instructions+=5;NFSU2_TR(0x4d5ef9);
__builtin_memmove((R+20),(R+0),4);
}
B4d5efb:{NFSU2_TR(0x4d5efb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4d5efd:{NFSU2_TR(0x4d5efd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5f00:{NFSU2_TR(0x4d5f00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d5f02:{NFSU2_TR(0x4d5f02);
if(r1(R+518)){{goto L4d5fbe;}}
}
B4d5f08:L4d5f08:{c.instructions+=2;NFSU2_TR(0x4d5f08);
w4(R+4,u32(0x850080ull));
}
B4d5f0d:{NFSU2_TR(0x4d5f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f12ull));
TAIL_STATIC(0x5031f0u,503);
}
B4d5f12:L4d5f12:{c.instructions+=3;NFSU2_TR(0x4d5f12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f13:{NFSU2_TR(0x4d5f13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f14:{NFSU2_TR(0x4d5f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f19ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4d5f19:L4d5f19:{c.instructions+=3;NFSU2_TR(0x4d5f19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5f1c:{NFSU2_TR(0x4d5f1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4d5f1e:{NFSU2_TR(0x4d5f1e);
if(r1(R+518)){{goto L4d5fb8;}}
}
B4d5f24:L4d5f24:{c.instructions+=2;NFSU2_TR(0x4d5f24);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f26:{NFSU2_TR(0x4d5f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f2bull));
TAIL_STATIC(0x575620u,575);
}
B4d5f2b:L4d5f2b:{c.instructions+=3;NFSU2_TR(0x4d5f2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4d5f2e:{NFSU2_TR(0x4d5f2e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4d5f30:{NFSU2_TR(0x4d5f30);
if(r1(R+518)){{goto L4d5f49;}}
}
B4d5f32:L4d5f32:{c.instructions+=7;NFSU2_TR(0x4d5f32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4d5f35:{NFSU2_TR(0x4d5f35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4d5f37:{NFSU2_TR(0x4d5f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5f3a:{NFSU2_TR(0x4d5f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5f3d:{NFSU2_TR(0x4d5f3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5f41:{NFSU2_TR(0x4d5f41);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4d5f47:{NFSU2_TR(0x4d5f47);
__builtin_memmove((R+28),(R+0),4);
}
B4d5f49:L4d5f49:{c.instructions+=8;NFSU2_TR(0x4d5f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5f4f:{NFSU2_TR(0x4d5f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d5f52:{NFSU2_TR(0x4d5f52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f53:{NFSU2_TR(0x4d5f53);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f58:{NFSU2_TR(0x4d5f58);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5f59:{NFSU2_TR(0x4d5f59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f5a:{NFSU2_TR(0x4d5f5a);
u8 U[4];
w4(U+0,u32(0x796328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f5f:{NFSU2_TR(0x4d5f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f64ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4d5f64:L4d5f64:{c.instructions+=4;NFSU2_TR(0x4d5f64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5f67:{NFSU2_TR(0x4d5f67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f68:{NFSU2_TR(0x4d5f68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f69:{NFSU2_TR(0x4d5f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f6eull));
TAIL_STATIC(0x537b80u,537);
}
B4d5f6e:L4d5f6e:{c.instructions+=6;NFSU2_TR(0x4d5f6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4d5f71:{NFSU2_TR(0x4d5f71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f73:{NFSU2_TR(0x4d5f73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f75:{NFSU2_TR(0x4d5f75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f76:{NFSU2_TR(0x4d5f76);
__builtin_memmove((R+4),(R+28),4);
}
B4d5f78:{NFSU2_TR(0x4d5f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f7dull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4d5f7d:L4d5f7d:{c.instructions+=6;NFSU2_TR(0x4d5f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5f83:{NFSU2_TR(0x4d5f83);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4d5f86:{NFSU2_TR(0x4d5f86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f87:{NFSU2_TR(0x4d5f87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f88:{NFSU2_TR(0x4d5f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5f8b:{NFSU2_TR(0x4d5f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f90ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4d5f90:L4d5f90:{c.instructions+=5;NFSU2_TR(0x4d5f90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d5f94:{NFSU2_TR(0x4d5f94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4d5f97:{NFSU2_TR(0x4d5f97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5f98:{NFSU2_TR(0x4d5f98);
__builtin_memmove((R+4),(R+12),4);
}
B4d5f9a:{NFSU2_TR(0x4d5f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5f9full));
TAIL_STATIC(0x51f2e0u,51f);
}
B4d5f9f:L4d5f9f:{c.instructions+=3;NFSU2_TR(0x4d5f9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5fa0:{NFSU2_TR(0x4d5fa0);
__builtin_memmove((R+4),(R+12),4);
}
B4d5fa2:{NFSU2_TR(0x4d5fa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5fa7ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4d5fa7:L4d5fa7:{c.instructions+=4;NFSU2_TR(0x4d5fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4d5fad:{NFSU2_TR(0x4d5fad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4d5fb1:{NFSU2_TR(0x4d5fb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4d5fb2:{NFSU2_TR(0x4d5fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4d5fb8:L4d5fb8:{c.instructions+=2;NFSU2_TR(0x4d5fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4d5fbc:{NFSU2_TR(0x4d5fbc);
{goto L4d5fc3;}
}
B4d5fbe:L4d5fbe:{c.instructions+=1;NFSU2_TR(0x4d5fbe);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4d5fc3:L4d5fc3:{c.instructions+=3;NFSU2_TR(0x4d5fc3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4d5fc9:{NFSU2_TR(0x4d5fc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4d5fcd:{NFSU2_TR(0x4d5fcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4d5ed1u);}goto L4d5ed1;}}
}
B4d5fd3:L4d5fd3:{c.instructions+=3;NFSU2_TR(0x4d5fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4d5fd9:{NFSU2_TR(0x4d5fd9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4d5fdc:{NFSU2_TR(0x4d5fdc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4d6061u,4d6);}
}
B4d5fe2:L4d5fe2:{c.instructions+=4;NFSU2_TR(0x4d5fe2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4d5fe3:{NFSU2_TR(0x4d5fe3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5fe4:{NFSU2_TR(0x4d5fe4);
u8 U[4];
w4(U+0,u32(0x78febcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5fe9:{NFSU2_TR(0x4d5fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5feeull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4d5fee:L4d5fee:{c.instructions+=4;NFSU2_TR(0x4d5fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4d5ff1:{NFSU2_TR(0x4d5ff1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ff2:{NFSU2_TR(0x4d5ff2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ff3:{NFSU2_TR(0x4d5ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5ff8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4d5ff8:L4d5ff8:{c.instructions+=2;NFSU2_TR(0x4d5ff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4d5ff9:{NFSU2_TR(0x4d5ff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4d5ffeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4d5ffe:L4d5ffe:{c.instructions+=1;NFSU2_TR(0x4d5ffe);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4d6000u,4d6);
}
XIT:NFSU2_TR_EXIT(0x4d5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
