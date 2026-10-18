#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 page_5d5(Cpu& c){return body_5d5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d5001:goto L5d5001;
case 0x5d5002:c.instructions+=3;goto B5d5002;
case 0x5d5005:c.instructions+=2;goto B5d5005;
case 0x5d5007:c.instructions+=1;goto B5d5007;
case 0x5d5009:goto L5d5009;
case 0x5d500a:c.instructions+=1;goto B5d500a;
case 0x5d5010:goto L5d5010;
case 0x5d5014:c.instructions+=5;goto B5d5014;
case 0x5d5015:c.instructions+=4;goto B5d5015;
case 0x5d5016:c.instructions+=3;goto B5d5016;
case 0x5d5017:c.instructions+=2;goto B5d5017;
case 0x5d5019:c.instructions+=1;goto B5d5019;
case 0x5d501e:goto L5d501e;
case 0x5d5022:c.instructions+=5;goto B5d5022;
case 0x5d5028:c.instructions+=4;goto B5d5028;
case 0x5d502b:c.instructions+=3;goto B5d502b;
case 0x5d502d:c.instructions+=2;goto B5d502d;
case 0x5d502f:c.instructions+=1;goto B5d502f;
case 0x5d5031:goto L5d5031;
case 0x5d5032:c.instructions+=3;goto B5d5032;
case 0x5d5033:c.instructions+=2;goto B5d5033;
case 0x5d5035:c.instructions+=1;goto B5d5035;
case 0x5d5040:goto L5d5040;
case 0x5d5046:c.instructions+=5;goto B5d5046;
case 0x5d504a:c.instructions+=4;goto B5d504a;
case 0x5d504c:c.instructions+=3;goto B5d504c;
case 0x5d504e:c.instructions+=2;goto B5d504e;
case 0x5d5050:c.instructions+=1;goto B5d5050;
case 0x5d5052:goto L5d5052;
case 0x5d5055:goto L5d5055;
case 0x5d5059:c.instructions+=2;goto B5d5059;
case 0x5d505b:c.instructions+=1;goto B5d505b;
case 0x5d505d:goto L5d505d;
case 0x5d5061:c.instructions+=4;goto B5d5061;
case 0x5d5062:c.instructions+=3;goto B5d5062;
case 0x5d5065:c.instructions+=2;goto B5d5065;
case 0x5d5067:c.instructions+=1;goto B5d5067;
case 0x5d5069:goto L5d5069;
case 0x5d506b:goto L5d506b;
case 0x5d506d:c.instructions+=2;goto B5d506d;
case 0x5d5070:c.instructions+=1;goto B5d5070;
case 0x5d5073:goto L5d5073;
case 0x5d5079:c.instructions+=4;goto B5d5079;
case 0x5d507a:c.instructions+=3;goto B5d507a;
case 0x5d507d:c.instructions+=2;goto B5d507d;
case 0x5d507f:c.instructions+=1;goto B5d507f;
case 0x5d5081:goto L5d5081;
case 0x5d5082:c.instructions+=1;goto B5d5082;
case 0x5d5083:goto L5d5083;
case 0x5d5084:c.instructions+=2;goto B5d5084;
case 0x5d5085:c.instructions+=1;goto B5d5085;
case 0x5d5090:goto L5d5090;
case 0x5d5091:c.instructions+=17;goto B5d5091;
case 0x5d5093:c.instructions+=16;goto B5d5093;
case 0x5d5096:c.instructions+=15;goto B5d5096;
case 0x5d5098:c.instructions+=14;goto B5d5098;
case 0x5d509d:c.instructions+=13;goto B5d509d;
case 0x5d50a3:c.instructions+=12;goto B5d50a3;
case 0x5d50a4:c.instructions+=11;goto B5d50a4;
case 0x5d50ab:c.instructions+=10;goto B5d50ab;
case 0x5d50ae:c.instructions+=9;goto B5d50ae;
case 0x5d50af:c.instructions+=8;goto B5d50af;
case 0x5d50b0:c.instructions+=7;goto B5d50b0;
case 0x5d50b3:c.instructions+=6;goto B5d50b3;
case 0x5d50b9:c.instructions+=5;goto B5d50b9;
case 0x5d50bb:c.instructions+=4;goto B5d50bb;
case 0x5d50bd:c.instructions+=3;goto B5d50bd;
case 0x5d50be:c.instructions+=2;goto B5d50be;
case 0x5d50c2:c.instructions+=1;goto B5d50c2;
case 0x5d50c8:goto L5d50c8;
case 0x5d50ca:c.instructions+=1;goto B5d50ca;
case 0x5d50cf:goto L5d50cf;
case 0x5d50d2:c.instructions+=4;goto B5d50d2;
case 0x5d50d6:c.instructions+=3;goto B5d50d6;
case 0x5d50d8:c.instructions+=2;goto B5d50d8;
case 0x5d50dc:c.instructions+=1;goto B5d50dc;
case 0x5d50de:goto L5d50de;
case 0x5d50e2:c.instructions+=6;goto B5d50e2;
case 0x5d50e5:c.instructions+=5;goto B5d50e5;
case 0x5d50e6:c.instructions+=4;goto B5d50e6;
case 0x5d50e7:c.instructions+=3;goto B5d50e7;
case 0x5d50e9:c.instructions+=2;goto B5d50e9;
case 0x5d50eb:c.instructions+=1;goto B5d50eb;
case 0x5d50f0:goto L5d50f0;
case 0x5d50f2:goto L5d50f2;
case 0x5d50f4:goto L5d50f4;
case 0x5d50f8:c.instructions+=6;goto B5d50f8;
case 0x5d50fb:c.instructions+=5;goto B5d50fb;
case 0x5d50fc:c.instructions+=4;goto B5d50fc;
case 0x5d50fe:c.instructions+=3;goto B5d50fe;
case 0x5d5106:c.instructions+=2;goto B5d5106;
case 0x5d510c:c.instructions+=1;goto B5d510c;
case 0x5d5111:goto L5d5111;
case 0x5d5115:c.instructions+=4;goto B5d5115;
case 0x5d5119:c.instructions+=3;goto B5d5119;
case 0x5d511b:c.instructions+=2;goto B5d511b;
case 0x5d511d:c.instructions+=1;goto B5d511d;
case 0x5d511f:goto L5d511f;
case 0x5d5122:c.instructions+=3;goto B5d5122;
case 0x5d5125:c.instructions+=2;goto B5d5125;
case 0x5d5129:c.instructions+=1;goto B5d5129;
case 0x5d5130:goto L5d5130;
case 0x5d5132:c.instructions+=1;goto B5d5132;
case 0x5d5134:goto L5d5134;
case 0x5d5136:c.instructions+=1;goto B5d5136;
case 0x5d5138:goto L5d5138;
case 0x5d513c:c.instructions+=2;goto B5d513c;
case 0x5d513f:c.instructions+=1;goto B5d513f;
case 0x5d5141:goto L5d5141;
case 0x5d5145:c.instructions+=23;goto B5d5145;
case 0x5d5148:c.instructions+=22;goto B5d5148;
case 0x5d514e:c.instructions+=21;goto B5d514e;
case 0x5d5150:c.instructions+=20;goto B5d5150;
case 0x5d5152:c.instructions+=19;goto B5d5152;
case 0x5d5154:c.instructions+=18;goto B5d5154;
case 0x5d5157:c.instructions+=17;goto B5d5157;
case 0x5d5158:c.instructions+=16;goto B5d5158;
case 0x5d515b:c.instructions+=15;goto B5d515b;
case 0x5d515d:c.instructions+=14;goto B5d515d;
case 0x5d515f:c.instructions+=13;goto B5d515f;
case 0x5d5161:c.instructions+=12;goto B5d5161;
case 0x5d5164:c.instructions+=11;goto B5d5164;
case 0x5d5167:c.instructions+=10;goto B5d5167;
case 0x5d516a:c.instructions+=9;goto B5d516a;
case 0x5d516e:c.instructions+=8;goto B5d516e;
case 0x5d5170:c.instructions+=7;goto B5d5170;
case 0x5d5173:c.instructions+=6;goto B5d5173;
case 0x5d5177:c.instructions+=5;goto B5d5177;
case 0x5d5178:c.instructions+=4;goto B5d5178;
case 0x5d517b:c.instructions+=3;goto B5d517b;
case 0x5d517d:c.instructions+=2;goto B5d517d;
case 0x5d5181:c.instructions+=1;goto B5d5181;
case 0x5d5183:goto L5d5183;
case 0x5d5186:c.instructions+=2;goto B5d5186;
case 0x5d5188:c.instructions+=1;goto B5d5188;
case 0x5d518a:goto L5d518a;
case 0x5d518c:c.instructions+=2;goto B5d518c;
case 0x5d518f:c.instructions+=1;goto B5d518f;
case 0x5d5191:goto L5d5191;
case 0x5d5195:c.instructions+=14;goto B5d5195;
case 0x5d5198:c.instructions+=13;goto B5d5198;
case 0x5d519b:c.instructions+=12;goto B5d519b;
case 0x5d519e:c.instructions+=11;goto B5d519e;
case 0x5d51a1:c.instructions+=10;goto B5d51a1;
case 0x5d51a3:c.instructions+=9;goto B5d51a3;
case 0x5d51a6:c.instructions+=8;goto B5d51a6;
case 0x5d51a9:c.instructions+=7;goto B5d51a9;
case 0x5d51ab:c.instructions+=6;goto B5d51ab;
case 0x5d51af:c.instructions+=5;goto B5d51af;
case 0x5d51b3:c.instructions+=4;goto B5d51b3;
case 0x5d51b9:c.instructions+=3;goto B5d51b9;
case 0x5d51bd:c.instructions+=2;goto B5d51bd;
case 0x5d51c3:c.instructions+=1;goto B5d51c3;
case 0x5d51c7:goto L5d51c7;
case 0x5d51cd:c.instructions+=10;goto B5d51cd;
case 0x5d51cf:c.instructions+=9;goto B5d51cf;
case 0x5d51d2:c.instructions+=8;goto B5d51d2;
case 0x5d51d4:c.instructions+=7;goto B5d51d4;
case 0x5d51d7:c.instructions+=6;goto B5d51d7;
case 0x5d51da:c.instructions+=5;goto B5d51da;
case 0x5d51dd:c.instructions+=4;goto B5d51dd;
case 0x5d51e0:c.instructions+=3;goto B5d51e0;
case 0x5d51e2:c.instructions+=2;goto B5d51e2;
case 0x5d51e5:c.instructions+=1;goto B5d51e5;
case 0x5d51e7:goto L5d51e7;
case 0x5d51e9:c.instructions+=2;goto B5d51e9;
case 0x5d51ec:c.instructions+=1;goto B5d51ec;
case 0x5d51ee:goto L5d51ee;
case 0x5d51f2:c.instructions+=16;goto B5d51f2;
case 0x5d51f5:c.instructions+=15;goto B5d51f5;
case 0x5d51f9:c.instructions+=14;goto B5d51f9;
case 0x5d51fc:c.instructions+=13;goto B5d51fc;
case 0x5d51ff:c.instructions+=12;goto B5d51ff;
case 0x5d5203:c.instructions+=11;goto B5d5203;
case 0x5d5205:c.instructions+=10;goto B5d5205;
case 0x5d5207:c.instructions+=9;goto B5d5207;
case 0x5d520a:c.instructions+=8;goto B5d520a;
case 0x5d520d:c.instructions+=7;goto B5d520d;
case 0x5d520f:c.instructions+=6;goto B5d520f;
case 0x5d5213:c.instructions+=5;goto B5d5213;
case 0x5d5217:c.instructions+=4;goto B5d5217;
case 0x5d521d:c.instructions+=3;goto B5d521d;
case 0x5d5221:c.instructions+=2;goto B5d5221;
case 0x5d5227:c.instructions+=1;goto B5d5227;
case 0x5d522b:goto L5d522b;
case 0x5d522f:c.instructions+=14;goto B5d522f;
case 0x5d5231:c.instructions+=13;goto B5d5231;
case 0x5d5237:c.instructions+=12;goto B5d5237;
case 0x5d523a:c.instructions+=11;goto B5d523a;
case 0x5d523b:c.instructions+=10;goto B5d523b;
case 0x5d523e:c.instructions+=9;goto B5d523e;
case 0x5d5240:c.instructions+=8;goto B5d5240;
case 0x5d5243:c.instructions+=7;goto B5d5243;
case 0x5d5246:c.instructions+=6;goto B5d5246;
case 0x5d5248:c.instructions+=5;goto B5d5248;
case 0x5d524a:c.instructions+=4;goto B5d524a;
case 0x5d524d:c.instructions+=3;goto B5d524d;
case 0x5d5250:c.instructions+=2;goto B5d5250;
case 0x5d5256:c.instructions+=1;goto B5d5256;
case 0x5d525b:goto L5d525b;
case 0x5d525c:c.instructions+=5;goto B5d525c;
case 0x5d5261:c.instructions+=4;goto B5d5261;
case 0x5d5265:c.instructions+=3;goto B5d5265;
case 0x5d5266:c.instructions+=2;goto B5d5266;
case 0x5d526c:c.instructions+=1;goto B5d526c;
case 0x5d5271:goto L5d5271;
case 0x5d5275:c.instructions+=9;goto B5d5275;
case 0x5d5279:c.instructions+=8;goto B5d5279;
case 0x5d527a:c.instructions+=7;goto B5d527a;
case 0x5d527e:c.instructions+=6;goto B5d527e;
case 0x5d527f:c.instructions+=5;goto B5d527f;
case 0x5d5285:c.instructions+=4;goto B5d5285;
case 0x5d5289:c.instructions+=3;goto B5d5289;
case 0x5d528c:c.instructions+=2;goto B5d528c;
case 0x5d528d:c.instructions+=1;goto B5d528d;
case 0x5d5292:goto L5d5292;
case 0x5d5296:c.instructions+=4;goto B5d5296;
case 0x5d529a:c.instructions+=3;goto B5d529a;
case 0x5d529e:c.instructions+=2;goto B5d529e;
case 0x5d52a1:c.instructions+=1;goto B5d52a1;
case 0x5d52a4:goto L5d52a4;
case 0x5d52a8:c.instructions+=7;goto B5d52a8;
case 0x5d52a9:c.instructions+=6;goto B5d52a9;
case 0x5d52aa:c.instructions+=5;goto B5d52aa;
case 0x5d52b1:c.instructions+=4;goto B5d52b1;
case 0x5d52b2:c.instructions+=3;goto B5d52b2;
case 0x5d52b4:c.instructions+=2;goto B5d52b4;
case 0x5d52b5:c.instructions+=1;goto B5d52b5;
case 0x5d52c0:goto L5d52c0;
case 0x5d52c1:c.instructions+=18;goto B5d52c1;
case 0x5d52c3:c.instructions+=17;goto B5d52c3;
case 0x5d52c6:c.instructions+=16;goto B5d52c6;
case 0x5d52c9:c.instructions+=15;goto B5d52c9;
case 0x5d52cc:c.instructions+=14;goto B5d52cc;
case 0x5d52cf:c.instructions+=13;goto B5d52cf;
case 0x5d52d1:c.instructions+=12;goto B5d52d1;
case 0x5d52d2:c.instructions+=11;goto B5d52d2;
case 0x5d52d3:c.instructions+=10;goto B5d52d3;
case 0x5d52d6:c.instructions+=9;goto B5d52d6;
case 0x5d52d9:c.instructions+=8;goto B5d52d9;
case 0x5d52dd:c.instructions+=7;goto B5d52dd;
case 0x5d52e0:c.instructions+=6;goto B5d52e0;
case 0x5d52e1:c.instructions+=5;goto B5d52e1;
case 0x5d52e4:c.instructions+=4;goto B5d52e4;
case 0x5d52e7:c.instructions+=3;goto B5d52e7;
case 0x5d52ed:c.instructions+=2;goto B5d52ed;
case 0x5d52f3:c.instructions+=1;goto B5d52f3;
case 0x5d52f5:goto L5d52f5;
case 0x5d52f8:c.instructions+=5;goto B5d52f8;
case 0x5d52fb:c.instructions+=4;goto B5d52fb;
case 0x5d52fd:c.instructions+=3;goto B5d52fd;
case 0x5d5300:c.instructions+=2;goto B5d5300;
case 0x5d5303:c.instructions+=1;goto B5d5303;
case 0x5d5305:goto L5d5305;
case 0x5d5308:c.instructions+=5;goto B5d5308;
case 0x5d530b:c.instructions+=4;goto B5d530b;
case 0x5d530e:c.instructions+=3;goto B5d530e;
case 0x5d5311:c.instructions+=2;goto B5d5311;
case 0x5d5313:c.instructions+=1;goto B5d5313;
case 0x5d5316:goto L5d5316;
case 0x5d531a:c.instructions+=3;goto B5d531a;
case 0x5d531e:c.instructions+=2;goto B5d531e;
case 0x5d5320:c.instructions+=1;goto B5d5320;
case 0x5d5322:goto L5d5322;
case 0x5d5325:c.instructions+=1;goto B5d5325;
case 0x5d5328:goto L5d5328;
case 0x5d532c:c.instructions+=12;goto B5d532c;
case 0x5d532e:c.instructions+=11;goto B5d532e;
case 0x5d5330:c.instructions+=10;goto B5d5330;
case 0x5d5331:c.instructions+=9;goto B5d5331;
case 0x5d5335:c.instructions+=8;goto B5d5335;
case 0x5d5337:c.instructions+=7;goto B5d5337;
case 0x5d5338:c.instructions+=6;goto B5d5338;
case 0x5d533c:c.instructions+=5;goto B5d533c;
case 0x5d5342:c.instructions+=4;goto B5d5342;
case 0x5d5346:c.instructions+=3;goto B5d5346;
case 0x5d5349:c.instructions+=2;goto B5d5349;
case 0x5d534a:c.instructions+=1;goto B5d534a;
case 0x5d534f:goto L5d534f;
case 0x5d5351:c.instructions+=1;goto B5d5351;
case 0x5d5353:goto L5d5353;
case 0x5d5355:c.instructions+=1;goto B5d5355;
case 0x5d5357:goto L5d5357;
case 0x5d535b:c.instructions+=2;goto B5d535b;
case 0x5d535e:c.instructions+=1;goto B5d535e;
case 0x5d5360:goto L5d5360;
case 0x5d5364:c.instructions+=9;goto B5d5364;
case 0x5d5365:c.instructions+=8;goto B5d5365;
case 0x5d5368:c.instructions+=7;goto B5d5368;
case 0x5d536b:c.instructions+=6;goto B5d536b;
case 0x5d536e:c.instructions+=5;goto B5d536e;
case 0x5d5371:c.instructions+=4;goto B5d5371;
case 0x5d5374:c.instructions+=3;goto B5d5374;
case 0x5d5378:c.instructions+=2;goto B5d5378;
case 0x5d537a:c.instructions+=1;goto B5d537a;
case 0x5d537c:goto L5d537c;
case 0x5d537d:c.instructions+=5;goto B5d537d;
case 0x5d537e:c.instructions+=4;goto B5d537e;
case 0x5d537f:c.instructions+=3;goto B5d537f;
case 0x5d5381:c.instructions+=2;goto B5d5381;
case 0x5d5382:c.instructions+=1;goto B5d5382;
case 0x5d5390:goto L5d5390;
case 0x5d5393:c.instructions+=6;goto B5d5393;
case 0x5d5394:c.instructions+=5;goto B5d5394;
case 0x5d5395:c.instructions+=4;goto B5d5395;
case 0x5d5397:c.instructions+=3;goto B5d5397;
case 0x5d5399:c.instructions+=2;goto B5d5399;
case 0x5d539a:c.instructions+=1;goto B5d539a;
case 0x5d539c:goto L5d539c;
case 0x5d539f:c.instructions+=2;goto B5d539f;
case 0x5d53a3:c.instructions+=1;goto B5d53a3;
case 0x5d53a5:goto L5d53a5;
case 0x5d53a8:c.instructions+=2;goto B5d53a8;
case 0x5d53aa:c.instructions+=1;goto B5d53aa;
case 0x5d53ac:goto L5d53ac;
case 0x5d53ad:c.instructions+=3;goto B5d53ad;
case 0x5d53b3:c.instructions+=2;goto B5d53b3;
case 0x5d53b5:c.instructions+=1;goto B5d53b5;
case 0x5d53b7:goto L5d53b7;
case 0x5d53b8:c.instructions+=4;goto B5d53b8;
case 0x5d53b9:c.instructions+=3;goto B5d53b9;
case 0x5d53bb:c.instructions+=2;goto B5d53bb;
case 0x5d53bc:c.instructions+=1;goto B5d53bc;
case 0x5d53bf:goto L5d53bf;
case 0x5d53c5:c.instructions+=5;goto B5d53c5;
case 0x5d53c6:c.instructions+=4;goto B5d53c6;
case 0x5d53c8:c.instructions+=3;goto B5d53c8;
case 0x5d53c9:c.instructions+=2;goto B5d53c9;
case 0x5d53ca:c.instructions+=1;goto B5d53ca;
case 0x5d53d0:goto L5d53d0;
case 0x5d53d1:c.instructions+=11;goto B5d53d1;
case 0x5d53d3:c.instructions+=10;goto B5d53d3;
case 0x5d53d6:c.instructions+=9;goto B5d53d6;
case 0x5d53dc:c.instructions+=8;goto B5d53dc;
case 0x5d53dd:c.instructions+=7;goto B5d53dd;
case 0x5d53e0:c.instructions+=6;goto B5d53e0;
case 0x5d53e1:c.instructions+=5;goto B5d53e1;
case 0x5d53e2:c.instructions+=4;goto B5d53e2;
case 0x5d53e5:c.instructions+=3;goto B5d53e5;
case 0x5d53e8:c.instructions+=2;goto B5d53e8;
case 0x5d53ec:c.instructions+=1;goto B5d53ec;
case 0x5d53f2:goto L5d53f2;
case 0x5d53f5:c.instructions+=4;goto B5d53f5;
case 0x5d53f8:c.instructions+=3;goto B5d53f8;
case 0x5d53f9:c.instructions+=2;goto B5d53f9;
case 0x5d53fb:c.instructions+=1;goto B5d53fb;
case 0x5d5400:goto L5d5400;
case 0x5d5402:c.instructions+=1;goto B5d5402;
case 0x5d5408:goto L5d5408;
case 0x5d540a:c.instructions+=2;goto B5d540a;
case 0x5d540c:c.instructions+=1;goto B5d540c;
case 0x5d540e:goto L5d540e;
case 0x5d5411:goto L5d5411;
case 0x5d5413:c.instructions+=1;goto B5d5413;
case 0x5d5415:goto L5d5415;
case 0x5d5418:c.instructions+=1;goto B5d5418;
case 0x5d541e:goto L5d541e;
case 0x5d5421:c.instructions+=4;goto B5d5421;
case 0x5d5422:c.instructions+=3;goto B5d5422;
case 0x5d5425:c.instructions+=2;goto B5d5425;
case 0x5d5427:c.instructions+=1;goto B5d5427;
case 0x5d5429:goto L5d5429;
case 0x5d5430:c.instructions+=3;goto B5d5430;
case 0x5d5432:c.instructions+=2;goto B5d5432;
case 0x5d5434:c.instructions+=1;goto B5d5434;
case 0x5d5436:goto L5d5436;
case 0x5d543a:c.instructions+=3;goto B5d543a;
case 0x5d5440:c.instructions+=2;goto B5d5440;
case 0x5d5446:c.instructions+=1;goto B5d5446;
case 0x5d5450:goto L5d5450;
case 0x5d5453:c.instructions+=3;goto B5d5453;
case 0x5d5456:c.instructions+=2;goto B5d5456;
case 0x5d545b:c.instructions+=1;goto B5d545b;
case 0x5d5461:goto L5d5461;
case 0x5d5468:c.instructions+=4;goto B5d5468;
case 0x5d5469:c.instructions+=3;goto B5d5469;
case 0x5d546c:c.instructions+=2;goto B5d546c;
case 0x5d546e:c.instructions+=1;goto B5d546e;
case 0x5d5470:goto L5d5470;
case 0x5d5473:c.instructions+=2;goto B5d5473;
case 0x5d5475:c.instructions+=1;goto B5d5475;
case 0x5d547b:goto L5d547b;
case 0x5d5481:c.instructions+=2;goto B5d5481;
case 0x5d5483:c.instructions+=1;goto B5d5483;
case 0x5d5485:goto L5d5485;
case 0x5d5488:c.instructions+=2;goto B5d5488;
case 0x5d548b:c.instructions+=1;goto B5d548b;
case 0x5d5491:goto L5d5491;
case 0x5d5494:c.instructions+=2;goto B5d5494;
case 0x5d5497:c.instructions+=1;goto B5d5497;
case 0x5d5499:goto L5d5499;
case 0x5d549b:c.instructions+=1;goto B5d549b;
case 0x5d549e:goto L5d549e;
case 0x5d54a2:c.instructions+=4;goto B5d54a2;
case 0x5d54a8:c.instructions+=3;goto B5d54a8;
case 0x5d54aa:c.instructions+=2;goto B5d54aa;
case 0x5d54ad:c.instructions+=1;goto B5d54ad;
case 0x5d54af:goto L5d54af;
case 0x5d54b3:c.instructions+=3;goto B5d54b3;
case 0x5d54b6:c.instructions+=2;goto B5d54b6;
case 0x5d54b8:c.instructions+=1;goto B5d54b8;
case 0x5d54be:goto L5d54be;
case 0x5d54c1:c.instructions+=1;goto B5d54c1;
case 0x5d54c5:goto L5d54c5;
case 0x5d54c9:c.instructions+=4;goto B5d54c9;
case 0x5d54cc:c.instructions+=3;goto B5d54cc;
case 0x5d54ce:c.instructions+=2;goto B5d54ce;
case 0x5d54d1:c.instructions+=1;goto B5d54d1;
case 0x5d54d3:goto L5d54d3;
case 0x5d54d7:c.instructions+=6;goto B5d54d7;
case 0x5d54da:c.instructions+=5;goto B5d54da;
case 0x5d54dc:c.instructions+=4;goto B5d54dc;
case 0x5d54e2:c.instructions+=3;goto B5d54e2;
case 0x5d54e4:c.instructions+=2;goto B5d54e4;
case 0x5d54e7:c.instructions+=1;goto B5d54e7;
case 0x5d54e9:goto L5d54e9;
case 0x5d54ed:c.instructions+=8;goto B5d54ed;
case 0x5d54f0:c.instructions+=7;goto B5d54f0;
case 0x5d54f2:c.instructions+=6;goto B5d54f2;
case 0x5d54f3:c.instructions+=5;goto B5d54f3;
case 0x5d54f4:c.instructions+=4;goto B5d54f4;
case 0x5d54f5:c.instructions+=3;goto B5d54f5;
case 0x5d54f7:c.instructions+=2;goto B5d54f7;
case 0x5d54f8:c.instructions+=1;goto B5d54f8;
case 0x5d54fb:goto L5d54fb;
case 0x5d54fe:c.instructions+=13;goto B5d54fe;
case 0x5d5501:c.instructions+=12;goto B5d5501;
case 0x5d5505:c.instructions+=11;goto B5d5505;
case 0x5d5508:c.instructions+=10;goto B5d5508;
case 0x5d550c:c.instructions+=9;goto B5d550c;
case 0x5d550f:c.instructions+=8;goto B5d550f;
case 0x5d5512:c.instructions+=7;goto B5d5512;
case 0x5d5513:c.instructions+=6;goto B5d5513;
case 0x5d5515:c.instructions+=5;goto B5d5515;
case 0x5d5518:c.instructions+=4;goto B5d5518;
case 0x5d551b:c.instructions+=3;goto B5d551b;
case 0x5d551d:c.instructions+=2;goto B5d551d;
case 0x5d551f:c.instructions+=1;goto B5d551f;
case 0x5d5521:goto L5d5521;
case 0x5d5523:c.instructions+=1;goto B5d5523;
case 0x5d5525:goto L5d5525;
case 0x5d5527:c.instructions+=7;goto B5d5527;
case 0x5d5529:c.instructions+=6;goto B5d5529;
case 0x5d552a:c.instructions+=5;goto B5d552a;
case 0x5d552b:c.instructions+=4;goto B5d552b;
case 0x5d552c:c.instructions+=3;goto B5d552c;
case 0x5d552e:c.instructions+=2;goto B5d552e;
case 0x5d552f:c.instructions+=1;goto B5d552f;
case 0x5d5532:goto L5d5532;
case 0x5d5535:c.instructions+=5;goto B5d5535;
case 0x5d5538:c.instructions+=4;goto B5d5538;
case 0x5d5539:c.instructions+=3;goto B5d5539;
case 0x5d553b:c.instructions+=2;goto B5d553b;
case 0x5d553e:c.instructions+=1;goto B5d553e;
case 0x5d5540:goto L5d5540;
case 0x5d5542:goto L5d5542;
case 0x5d5544:c.instructions+=6;goto B5d5544;
case 0x5d5545:c.instructions+=5;goto B5d5545;
case 0x5d5546:c.instructions+=4;goto B5d5546;
case 0x5d5547:c.instructions+=3;goto B5d5547;
case 0x5d5549:c.instructions+=2;goto B5d5549;
case 0x5d554a:c.instructions+=1;goto B5d554a;
case 0x5d554d:goto L5d554d;
case 0x5d5550:c.instructions+=3;goto B5d5550;
case 0x5d5552:c.instructions+=2;goto B5d5552;
case 0x5d5555:c.instructions+=1;goto B5d5555;
case 0x5d5557:goto L5d5557;
case 0x5d5559:c.instructions+=2;goto B5d5559;
case 0x5d555e:c.instructions+=1;goto B5d555e;
case 0x5d5565:goto L5d5565;
case 0x5d5567:goto L5d5567;
case 0x5d5569:c.instructions+=2;goto B5d5569;
case 0x5d556e:c.instructions+=1;goto B5d556e;
case 0x5d5572:goto L5d5572;
case 0x5d5575:c.instructions+=8;goto B5d5575;
case 0x5d5577:c.instructions+=7;goto B5d5577;
case 0x5d5579:c.instructions+=6;goto B5d5579;
case 0x5d557c:c.instructions+=5;goto B5d557c;
case 0x5d557f:c.instructions+=4;goto B5d557f;
case 0x5d5583:c.instructions+=3;goto B5d5583;
case 0x5d5586:c.instructions+=2;goto B5d5586;
case 0x5d5588:c.instructions+=1;goto B5d5588;
case 0x5d558a:goto L5d558a;
case 0x5d558e:c.instructions+=3;goto B5d558e;
case 0x5d5593:c.instructions+=2;goto B5d5593;
case 0x5d5595:c.instructions+=1;goto B5d5595;
case 0x5d5599:goto L5d5599;
case 0x5d559b:goto L5d559b;
case 0x5d559e:c.instructions+=7;goto B5d559e;
case 0x5d559f:c.instructions+=6;goto B5d559f;
case 0x5d55a0:c.instructions+=5;goto B5d55a0;
case 0x5d55a1:c.instructions+=4;goto B5d55a1;
case 0x5d55a5:c.instructions+=3;goto B5d55a5;
case 0x5d55a6:c.instructions+=2;goto B5d55a6;
case 0x5d55aa:c.instructions+=1;goto B5d55aa;
case 0x5d55af:goto L5d55af;
case 0x5d55b1:c.instructions+=1;goto B5d55b1;
case 0x5d55b3:goto L5d55b3;
case 0x5d55b7:c.instructions+=2;goto B5d55b7;
case 0x5d55b9:c.instructions+=1;goto B5d55b9;
case 0x5d55bb:goto L5d55bb;
case 0x5d55bf:c.instructions+=4;goto B5d55bf;
case 0x5d55c6:c.instructions+=3;goto B5d55c6;
case 0x5d55c8:c.instructions+=2;goto B5d55c8;
case 0x5d55cb:c.instructions+=1;goto B5d55cb;
case 0x5d55cd:goto L5d55cd;
case 0x5d55d1:c.instructions+=4;goto B5d55d1;
case 0x5d55d6:c.instructions+=3;goto B5d55d6;
case 0x5d55da:c.instructions+=2;goto B5d55da;
case 0x5d55e1:c.instructions+=1;goto B5d55e1;
case 0x5d55e3:goto L5d55e3;
case 0x5d55e5:goto L5d55e5;
case 0x5d55ec:c.instructions+=2;goto B5d55ec;
case 0x5d55ef:c.instructions+=1;goto B5d55ef;
case 0x5d55f4:goto L5d55f4;
case 0x5d55f7:goto L5d55f7;
case 0x5d55fb:c.instructions+=4;goto B5d55fb;
case 0x5d55fc:c.instructions+=3;goto B5d55fc;
case 0x5d55ff:c.instructions+=2;goto B5d55ff;
case 0x5d5603:c.instructions+=1;goto B5d5603;
case 0x5d5609:goto L5d5609;
case 0x5d560d:c.instructions+=2;goto B5d560d;
case 0x5d560f:c.instructions+=1;goto B5d560f;
case 0x5d5611:goto L5d5611;
case 0x5d5616:c.instructions+=2;goto B5d5616;
case 0x5d561d:c.instructions+=1;goto B5d561d;
case 0x5d561f:goto L5d561f;
case 0x5d5621:goto L5d5621;
case 0x5d5622:c.instructions+=5;goto B5d5622;
case 0x5d5623:c.instructions+=4;goto B5d5623;
case 0x5d5624:c.instructions+=3;goto B5d5624;
case 0x5d5626:c.instructions+=2;goto B5d5626;
case 0x5d5627:c.instructions+=1;goto B5d5627;
case 0x5d5630:goto L5d5630;
case 0x5d5633:c.instructions+=8;goto B5d5633;
case 0x5d5635:c.instructions+=7;goto B5d5635;
case 0x5d5636:c.instructions+=6;goto B5d5636;
case 0x5d5638:c.instructions+=5;goto B5d5638;
case 0x5d563a:c.instructions+=4;goto B5d563a;
case 0x5d563b:c.instructions+=3;goto B5d563b;
case 0x5d563c:c.instructions+=2;goto B5d563c;
case 0x5d5640:c.instructions+=1;goto B5d5640;
case 0x5d5642:goto L5d5642;
case 0x5d5646:c.instructions+=2;goto B5d5646;
case 0x5d5647:c.instructions+=1;goto B5d5647;
case 0x5d5650:goto L5d5650;
case 0x5d5653:c.instructions+=6;goto B5d5653;
case 0x5d5657:c.instructions+=5;goto B5d5657;
case 0x5d565a:c.instructions+=4;goto B5d565a;
case 0x5d565d:c.instructions+=3;goto B5d565d;
case 0x5d5660:c.instructions+=2;goto B5d5660;
case 0x5d5663:c.instructions+=1;goto B5d5663;
case 0x5d5668:goto L5d5668;
case 0x5d566a:c.instructions+=3;goto B5d566a;
case 0x5d566c:c.instructions+=2;goto B5d566c;
case 0x5d566e:c.instructions+=1;goto B5d566e;
case 0x5d5670:goto L5d5670;
case 0x5d5672:goto L5d5672;
case 0x5d5675:c.instructions+=8;goto B5d5675;
case 0x5d567b:c.instructions+=7;goto B5d567b;
case 0x5d567e:c.instructions+=6;goto B5d567e;
case 0x5d567f:c.instructions+=5;goto B5d567f;
case 0x5d5682:c.instructions+=4;goto B5d5682;
case 0x5d5685:c.instructions+=3;goto B5d5685;
case 0x5d5688:c.instructions+=2;goto B5d5688;
case 0x5d568a:c.instructions+=1;goto B5d568a;
case 0x5d568c:goto L5d568c;
case 0x5d568d:c.instructions+=3;goto B5d568d;
case 0x5d5690:c.instructions+=2;goto B5d5690;
case 0x5d5691:c.instructions+=1;goto B5d5691;
case 0x5d5693:goto L5d5693;
case 0x5d5697:c.instructions+=8;goto B5d5697;
case 0x5d569b:c.instructions+=7;goto B5d569b;
case 0x5d569d:c.instructions+=6;goto B5d569d;
case 0x5d569e:c.instructions+=5;goto B5d569e;
case 0x5d56a4:c.instructions+=4;goto B5d56a4;
case 0x5d56a6:c.instructions+=3;goto B5d56a6;
case 0x5d56aa:c.instructions+=2;goto B5d56aa;
case 0x5d56ae:c.instructions+=1;goto B5d56ae;
case 0x5d56b0:goto L5d56b0;
case 0x5d56b1:goto L5d56b1;
case 0x5d56b7:c.instructions+=3;goto B5d56b7;
case 0x5d56b9:c.instructions+=2;goto B5d56b9;
case 0x5d56bf:c.instructions+=1;goto B5d56bf;
case 0x5d56c0:goto L5d56c0;
case 0x5d56c6:c.instructions+=3;goto B5d56c6;
case 0x5d56cc:c.instructions+=2;goto B5d56cc;
case 0x5d56ce:c.instructions+=1;goto B5d56ce;
case 0x5d56d0:goto L5d56d0;
case 0x5d56d2:c.instructions+=1;goto B5d56d2;
case 0x5d56d4:goto L5d56d4;
case 0x5d56d8:c.instructions+=6;goto B5d56d8;
case 0x5d56de:c.instructions+=5;goto B5d56de;
case 0x5d56e0:c.instructions+=4;goto B5d56e0;
case 0x5d56e6:c.instructions+=3;goto B5d56e6;
case 0x5d56e8:c.instructions+=2;goto B5d56e8;
case 0x5d56ea:c.instructions+=1;goto B5d56ea;
case 0x5d56ec:goto L5d56ec;
case 0x5d56ee:c.instructions+=4;goto B5d56ee;
case 0x5d56ef:c.instructions+=3;goto B5d56ef;
case 0x5d56f2:c.instructions+=2;goto B5d56f2;
case 0x5d56f5:c.instructions+=1;goto B5d56f5;
case 0x5d56f7:goto L5d56f7;
case 0x5d56fd:c.instructions+=8;goto B5d56fd;
case 0x5d5703:c.instructions+=7;goto B5d5703;
case 0x5d5704:c.instructions+=6;goto B5d5704;
case 0x5d5706:c.instructions+=5;goto B5d5706;
case 0x5d5707:c.instructions+=4;goto B5d5707;
case 0x5d570d:c.instructions+=3;goto B5d570d;
case 0x5d570e:c.instructions+=2;goto B5d570e;
case 0x5d5711:c.instructions+=1;goto B5d5711;
case 0x5d5720:goto L5d5720;
case 0x5d5721:c.instructions+=6;goto B5d5721;
case 0x5d5722:c.instructions+=5;goto B5d5722;
case 0x5d5726:c.instructions+=4;goto B5d5726;
case 0x5d5728:c.instructions+=3;goto B5d5728;
case 0x5d572a:c.instructions+=2;goto B5d572a;
case 0x5d572c:c.instructions+=1;goto B5d572c;
case 0x5d572e:goto L5d572e;
case 0x5d5736:c.instructions+=1;goto B5d5736;
case 0x5d5738:goto L5d5738;
case 0x5d573b:c.instructions+=8;goto B5d573b;
case 0x5d573d:c.instructions+=7;goto B5d573d;
case 0x5d5742:c.instructions+=6;goto B5d5742;
case 0x5d5744:c.instructions+=5;goto B5d5744;
case 0x5d5747:c.instructions+=4;goto B5d5747;
case 0x5d5749:c.instructions+=3;goto B5d5749;
case 0x5d574c:c.instructions+=2;goto B5d574c;
case 0x5d574e:c.instructions+=1;goto B5d574e;
case 0x5d5752:goto L5d5752;
case 0x5d5756:c.instructions+=3;goto B5d5756;
case 0x5d5757:c.instructions+=2;goto B5d5757;
case 0x5d575b:c.instructions+=1;goto B5d575b;
case 0x5d5760:goto L5d5760;
case 0x5d5764:c.instructions+=2;goto B5d5764;
case 0x5d5768:c.instructions+=1;goto B5d5768;
case 0x5d576a:goto L5d576a;
case 0x5d5770:c.instructions+=3;goto B5d5770;
case 0x5d5771:c.instructions+=2;goto B5d5771;
case 0x5d5772:c.instructions+=1;goto B5d5772;
case 0x5d5775:goto L5d5775;
case 0x5d5778:c.instructions+=2;goto B5d5778;
case 0x5d577a:c.instructions+=1;goto B5d577a;
case 0x5d577c:goto L5d577c;
case 0x5d577e:c.instructions+=4;goto B5d577e;
case 0x5d5780:c.instructions+=3;goto B5d5780;
case 0x5d5781:c.instructions+=2;goto B5d5781;
case 0x5d5782:c.instructions+=1;goto B5d5782;
case 0x5d5785:goto L5d5785;
case 0x5d5788:c.instructions+=6;goto B5d5788;
case 0x5d578b:c.instructions+=5;goto B5d578b;
case 0x5d578e:c.instructions+=4;goto B5d578e;
case 0x5d5790:c.instructions+=3;goto B5d5790;
case 0x5d5791:c.instructions+=2;goto B5d5791;
case 0x5d5792:c.instructions+=1;goto B5d5792;
case 0x5d57a0:goto L5d57a0;
case 0x5d57a3:c.instructions+=14;goto B5d57a3;
case 0x5d57a7:c.instructions+=13;goto B5d57a7;
case 0x5d57ab:c.instructions+=12;goto B5d57ab;
case 0x5d57b1:c.instructions+=11;goto B5d57b1;
case 0x5d57b2:c.instructions+=10;goto B5d57b2;
case 0x5d57b3:c.instructions+=9;goto B5d57b3;
case 0x5d57b7:c.instructions+=8;goto B5d57b7;
case 0x5d57b9:c.instructions+=7;goto B5d57b9;
case 0x5d57bb:c.instructions+=6;goto B5d57bb;
case 0x5d57bc:c.instructions+=5;goto B5d57bc;
case 0x5d57bd:c.instructions+=4;goto B5d57bd;
case 0x5d57c0:c.instructions+=3;goto B5d57c0;
case 0x5d57c2:c.instructions+=2;goto B5d57c2;
case 0x5d57c6:c.instructions+=1;goto B5d57c6;
case 0x5d57c8:goto L5d57c8;
case 0x5d57d0:goto L5d57d0;
case 0x5d57d4:c.instructions+=3;goto B5d57d4;
case 0x5d57d6:c.instructions+=2;goto B5d57d6;
case 0x5d57da:c.instructions+=1;goto B5d57da;
case 0x5d57e0:goto L5d57e0;
case 0x5d57e3:c.instructions+=1;goto B5d57e3;
case 0x5d57e9:goto L5d57e9;
case 0x5d57ed:c.instructions+=6;goto B5d57ed;
case 0x5d57f2:c.instructions+=5;goto B5d57f2;
case 0x5d57f5:c.instructions+=4;goto B5d57f5;
case 0x5d57f7:c.instructions+=3;goto B5d57f7;
case 0x5d57fb:c.instructions+=2;goto B5d57fb;
case 0x5d57ff:c.instructions+=1;goto B5d57ff;
case 0x5d5800:goto L5d5800;
case 0x5d5802:c.instructions+=3;goto B5d5802;
case 0x5d5804:c.instructions+=2;goto B5d5804;
case 0x5d5806:c.instructions+=1;goto B5d5806;
case 0x5d580c:goto L5d580c;
case 0x5d580e:c.instructions+=2;goto B5d580e;
case 0x5d5812:c.instructions+=1;goto B5d5812;
case 0x5d5816:goto L5d5816;
case 0x5d581a:c.instructions+=6;goto B5d581a;
case 0x5d581c:c.instructions+=5;goto B5d581c;
case 0x5d581e:c.instructions+=4;goto B5d581e;
case 0x5d5825:c.instructions+=3;goto B5d5825;
case 0x5d582b:c.instructions+=2;goto B5d582b;
case 0x5d582d:c.instructions+=1;goto B5d582d;
case 0x5d5833:goto L5d5833;
case 0x5d5837:c.instructions+=7;goto B5d5837;
case 0x5d5838:c.instructions+=6;goto B5d5838;
case 0x5d5839:c.instructions+=5;goto B5d5839;
case 0x5d583f:c.instructions+=4;goto B5d583f;
case 0x5d5840:c.instructions+=3;goto B5d5840;
case 0x5d5846:c.instructions+=2;goto B5d5846;
case 0x5d5847:c.instructions+=1;goto B5d5847;
case 0x5d584c:goto L5d584c;
case 0x5d584f:c.instructions+=2;goto B5d584f;
case 0x5d5851:c.instructions+=1;goto B5d5851;
case 0x5d5853:goto L5d5853;
case 0x5d5857:c.instructions+=3;goto B5d5857;
case 0x5d585b:c.instructions+=2;goto B5d585b;
case 0x5d585d:c.instructions+=1;goto B5d585d;
case 0x5d585f:goto L5d585f;
case 0x5d5862:c.instructions+=4;goto B5d5862;
case 0x5d5865:c.instructions+=3;goto B5d5865;
case 0x5d5867:c.instructions+=2;goto B5d5867;
case 0x5d5869:c.instructions+=1;goto B5d5869;
case 0x5d5870:goto L5d5870;
case 0x5d5872:c.instructions+=1;goto B5d5872;
case 0x5d5874:goto L5d5874;
case 0x5d5876:c.instructions+=1;goto B5d5876;
case 0x5d5878:goto L5d5878;
case 0x5d587b:c.instructions+=1;goto B5d587b;
case 0x5d587d:goto L5d587d;
case 0x5d587f:c.instructions+=14;goto B5d587f;
case 0x5d5883:c.instructions+=13;goto B5d5883;
case 0x5d5885:c.instructions+=12;goto B5d5885;
case 0x5d5887:c.instructions+=11;goto B5d5887;
case 0x5d588a:c.instructions+=10;goto B5d588a;
case 0x5d588d:c.instructions+=9;goto B5d588d;
case 0x5d588f:c.instructions+=8;goto B5d588f;
case 0x5d5891:c.instructions+=7;goto B5d5891;
case 0x5d5893:c.instructions+=6;goto B5d5893;
case 0x5d5895:c.instructions+=5;goto B5d5895;
case 0x5d5897:c.instructions+=4;goto B5d5897;
case 0x5d5899:c.instructions+=3;goto B5d5899;
case 0x5d589b:c.instructions+=2;goto B5d589b;
case 0x5d589d:c.instructions+=1;goto B5d589d;
case 0x5d589f:goto L5d589f;
case 0x5d58a3:c.instructions+=3;goto B5d58a3;
case 0x5d58a5:c.instructions+=2;goto B5d58a5;
case 0x5d58a8:c.instructions+=1;goto B5d58a8;
case 0x5d58aa:goto L5d58aa;
case 0x5d58ae:c.instructions+=2;goto B5d58ae;
case 0x5d58b2:c.instructions+=1;goto B5d58b2;
case 0x5d58b4:goto L5d58b4;
case 0x5d58b6:goto L5d58b6;
case 0x5d58b9:c.instructions+=2;goto B5d58b9;
case 0x5d58ba:c.instructions+=1;goto B5d58ba;
case 0x5d58bc:goto L5d58bc;
case 0x5d58c0:c.instructions+=4;goto B5d58c0;
case 0x5d58c2:c.instructions+=3;goto B5d58c2;
case 0x5d58c3:c.instructions+=2;goto B5d58c3;
case 0x5d58c5:c.instructions+=1;goto B5d58c5;
case 0x5d58cb:goto L5d58cb;
case 0x5d58cf:c.instructions+=1;goto B5d58cf;
case 0x5d58d3:goto L5d58d3;
case 0x5d58d7:c.instructions+=7;goto B5d58d7;
case 0x5d58da:c.instructions+=6;goto B5d58da;
case 0x5d58db:c.instructions+=5;goto B5d58db;
case 0x5d58de:c.instructions+=4;goto B5d58de;
case 0x5d58e0:c.instructions+=3;goto B5d58e0;
case 0x5d58e4:c.instructions+=2;goto B5d58e4;
case 0x5d58e8:c.instructions+=1;goto B5d58e8;
case 0x5d58ee:goto L5d58ee;
case 0x5d58ef:c.instructions+=6;goto B5d58ef;
case 0x5d58f0:c.instructions+=5;goto B5d58f0;
case 0x5d58f1:c.instructions+=4;goto B5d58f1;
case 0x5d58f3:c.instructions+=3;goto B5d58f3;
case 0x5d58f4:c.instructions+=2;goto B5d58f4;
case 0x5d58f7:c.instructions+=1;goto B5d58f7;
case 0x5d58fa:goto L5d58fa;
case 0x5d58fc:c.instructions+=1;goto B5d58fc;
case 0x5d58fe:goto L5d58fe;
case 0x5d5902:c.instructions+=1;goto B5d5902;
case 0x5d5904:goto L5d5904;
case 0x5d5907:c.instructions+=9;goto B5d5907;
case 0x5d590b:c.instructions+=8;goto B5d590b;
case 0x5d590c:c.instructions+=7;goto B5d590c;
case 0x5d590e:c.instructions+=6;goto B5d590e;
case 0x5d590f:c.instructions+=5;goto B5d590f;
case 0x5d5915:c.instructions+=4;goto B5d5915;
case 0x5d5916:c.instructions+=3;goto B5d5916;
case 0x5d591c:c.instructions+=2;goto B5d591c;
case 0x5d591d:c.instructions+=1;goto B5d591d;
case 0x5d5922:goto L5d5922;
case 0x5d5925:c.instructions+=2;goto B5d5925;
case 0x5d5927:c.instructions+=1;goto B5d5927;
case 0x5d5929:goto L5d5929;
case 0x5d592d:c.instructions+=3;goto B5d592d;
case 0x5d5931:c.instructions+=2;goto B5d5931;
case 0x5d5933:c.instructions+=1;goto B5d5933;
case 0x5d5935:goto L5d5935;
case 0x5d5938:c.instructions+=4;goto B5d5938;
case 0x5d593b:c.instructions+=3;goto B5d593b;
case 0x5d593d:c.instructions+=2;goto B5d593d;
case 0x5d593f:c.instructions+=1;goto B5d593f;
case 0x5d5940:goto L5d5940;
case 0x5d5942:c.instructions+=1;goto B5d5942;
case 0x5d5944:goto L5d5944;
case 0x5d5946:c.instructions+=1;goto B5d5946;
case 0x5d5948:goto L5d5948;
case 0x5d594b:c.instructions+=1;goto B5d594b;
case 0x5d594d:goto L5d594d;
case 0x5d594f:c.instructions+=14;goto B5d594f;
case 0x5d5953:c.instructions+=13;goto B5d5953;
case 0x5d5955:c.instructions+=12;goto B5d5955;
case 0x5d5957:c.instructions+=11;goto B5d5957;
case 0x5d595a:c.instructions+=10;goto B5d595a;
case 0x5d595d:c.instructions+=9;goto B5d595d;
case 0x5d595f:c.instructions+=8;goto B5d595f;
case 0x5d5961:c.instructions+=7;goto B5d5961;
case 0x5d5963:c.instructions+=6;goto B5d5963;
case 0x5d5965:c.instructions+=5;goto B5d5965;
case 0x5d5967:c.instructions+=4;goto B5d5967;
case 0x5d5969:c.instructions+=3;goto B5d5969;
case 0x5d596b:c.instructions+=2;goto B5d596b;
case 0x5d596d:c.instructions+=1;goto B5d596d;
case 0x5d596f:goto L5d596f;
case 0x5d5973:c.instructions+=3;goto B5d5973;
case 0x5d5975:c.instructions+=2;goto B5d5975;
case 0x5d5978:c.instructions+=1;goto B5d5978;
case 0x5d597a:goto L5d597a;
case 0x5d597e:c.instructions+=2;goto B5d597e;
case 0x5d5982:c.instructions+=1;goto B5d5982;
case 0x5d5984:goto L5d5984;
case 0x5d5986:goto L5d5986;
case 0x5d5989:c.instructions+=2;goto B5d5989;
case 0x5d598a:c.instructions+=1;goto B5d598a;
case 0x5d598c:goto L5d598c;
case 0x5d5990:c.instructions+=6;goto B5d5990;
case 0x5d5992:c.instructions+=5;goto B5d5992;
case 0x5d5993:c.instructions+=4;goto B5d5993;
case 0x5d5999:c.instructions+=3;goto B5d5999;
case 0x5d599b:c.instructions+=2;goto B5d599b;
case 0x5d599f:c.instructions+=1;goto B5d599f;
case 0x5d59a5:goto L5d59a5;
case 0x5d59a9:c.instructions+=6;goto B5d59a9;
case 0x5d59aa:c.instructions+=5;goto B5d59aa;
case 0x5d59ab:c.instructions+=4;goto B5d59ab;
case 0x5d59ac:c.instructions+=3;goto B5d59ac;
case 0x5d59ad:c.instructions+=2;goto B5d59ad;
case 0x5d59b0:c.instructions+=1;goto B5d59b0;
case 0x5d59c0:goto L5d59c0;
case 0x5d59c6:c.instructions+=4;goto B5d59c6;
case 0x5d59cc:c.instructions+=3;goto B5d59cc;
case 0x5d59ce:c.instructions+=2;goto B5d59ce;
case 0x5d59d0:c.instructions+=1;goto B5d59d0;
case 0x5d59d2:goto L5d59d2;
case 0x5d59d3:c.instructions+=3;goto B5d59d3;
case 0x5d59d5:c.instructions+=2;goto B5d59d5;
case 0x5d59d6:c.instructions+=1;goto B5d59d6;
case 0x5d59e0:goto L5d59e0;
case 0x5d59e4:c.instructions+=7;goto B5d59e4;
case 0x5d59e8:c.instructions+=6;goto B5d59e8;
case 0x5d59ee:c.instructions+=5;goto B5d59ee;
case 0x5d59f0:c.instructions+=4;goto B5d59f0;
case 0x5d59f6:c.instructions+=3;goto B5d59f6;
case 0x5d59f8:c.instructions+=2;goto B5d59f8;
case 0x5d59fa:c.instructions+=1;goto B5d59fa;
case 0x5d59fc:goto L5d59fc;
case 0x5d59fd:c.instructions+=1;goto B5d59fd;
case 0x5d59fe:goto L5d59fe;
case 0x5d5a00:goto L5d5a00;
case 0x5d5a03:c.instructions+=25;goto B5d5a03;
case 0x5d5a07:c.instructions+=24;goto B5d5a07;
case 0x5d5a08:c.instructions+=23;goto B5d5a08;
case 0x5d5a0b:c.instructions+=22;goto B5d5a0b;
case 0x5d5a0c:c.instructions+=21;goto B5d5a0c;
case 0x5d5a0f:c.instructions+=20;goto B5d5a0f;
case 0x5d5a10:c.instructions+=19;goto B5d5a10;
case 0x5d5a11:c.instructions+=18;goto B5d5a11;
case 0x5d5a13:c.instructions+=17;goto B5d5a13;
case 0x5d5a17:c.instructions+=16;goto B5d5a17;
case 0x5d5a19:c.instructions+=15;goto B5d5a19;
case 0x5d5a1f:c.instructions+=14;goto B5d5a1f;
case 0x5d5a21:c.instructions+=13;goto B5d5a21;
case 0x5d5a26:c.instructions+=12;goto B5d5a26;
case 0x5d5a28:c.instructions+=11;goto B5d5a28;
case 0x5d5a2b:c.instructions+=10;goto B5d5a2b;
case 0x5d5a2d:c.instructions+=9;goto B5d5a2d;
case 0x5d5a30:c.instructions+=8;goto B5d5a30;
case 0x5d5a32:c.instructions+=7;goto B5d5a32;
case 0x5d5a34:c.instructions+=6;goto B5d5a34;
case 0x5d5a36:c.instructions+=5;goto B5d5a36;
case 0x5d5a3a:c.instructions+=4;goto B5d5a3a;
case 0x5d5a3c:c.instructions+=3;goto B5d5a3c;
case 0x5d5a3e:c.instructions+=2;goto B5d5a3e;
case 0x5d5a46:c.instructions+=1;goto B5d5a46;
case 0x5d5a48:goto L5d5a48;
case 0x5d5a4c:c.instructions+=7;goto B5d5a4c;
case 0x5d5a50:c.instructions+=6;goto B5d5a50;
case 0x5d5a51:c.instructions+=5;goto B5d5a51;
case 0x5d5a52:c.instructions+=4;goto B5d5a52;
case 0x5d5a55:c.instructions+=3;goto B5d5a55;
case 0x5d5a56:c.instructions+=2;goto B5d5a56;
case 0x5d5a57:c.instructions+=1;goto B5d5a57;
case 0x5d5a5c:goto L5d5a5c;
case 0x5d5a62:c.instructions+=4;goto B5d5a62;
case 0x5d5a65:c.instructions+=3;goto B5d5a65;
case 0x5d5a67:c.instructions+=2;goto B5d5a67;
case 0x5d5a6a:c.instructions+=1;goto B5d5a6a;
case 0x5d5a6c:goto L5d5a6c;
case 0x5d5a70:c.instructions+=4;goto B5d5a70;
case 0x5d5a74:c.instructions+=3;goto B5d5a74;
case 0x5d5a77:c.instructions+=2;goto B5d5a77;
case 0x5d5a7b:c.instructions+=1;goto B5d5a7b;
case 0x5d5a7d:goto L5d5a7d;
case 0x5d5a7f:goto L5d5a7f;
case 0x5d5a83:c.instructions+=3;goto B5d5a83;
case 0x5d5a84:c.instructions+=2;goto B5d5a84;
case 0x5d5a86:c.instructions+=1;goto B5d5a86;
case 0x5d5a88:goto L5d5a88;
case 0x5d5a8c:c.instructions+=7;goto B5d5a8c;
case 0x5d5a90:c.instructions+=6;goto B5d5a90;
case 0x5d5a91:c.instructions+=5;goto B5d5a91;
case 0x5d5a92:c.instructions+=4;goto B5d5a92;
case 0x5d5a95:c.instructions+=3;goto B5d5a95;
case 0x5d5a96:c.instructions+=2;goto B5d5a96;
case 0x5d5a97:c.instructions+=1;goto B5d5a97;
case 0x5d5a9c:goto L5d5a9c;
case 0x5d5aa0:c.instructions+=4;goto B5d5aa0;
case 0x5d5aa3:c.instructions+=3;goto B5d5aa3;
case 0x5d5aa5:c.instructions+=2;goto B5d5aa5;
case 0x5d5aa8:c.instructions+=1;goto B5d5aa8;
case 0x5d5aaa:goto L5d5aaa;
case 0x5d5aae:c.instructions+=10;goto B5d5aae;
case 0x5d5ab2:c.instructions+=9;goto B5d5ab2;
case 0x5d5ab5:c.instructions+=8;goto B5d5ab5;
case 0x5d5ab8:c.instructions+=7;goto B5d5ab8;
case 0x5d5ab9:c.instructions+=6;goto B5d5ab9;
case 0x5d5aba:c.instructions+=5;goto B5d5aba;
case 0x5d5abb:c.instructions+=4;goto B5d5abb;
case 0x5d5abd:c.instructions+=3;goto B5d5abd;
case 0x5d5abe:c.instructions+=2;goto B5d5abe;
case 0x5d5ac1:c.instructions+=1;goto B5d5ac1;
case 0x5d5ac4:goto L5d5ac4;
case 0x5d5ac8:c.instructions+=9;goto B5d5ac8;
case 0x5d5aca:c.instructions+=8;goto B5d5aca;
case 0x5d5ace:c.instructions+=7;goto B5d5ace;
case 0x5d5acf:c.instructions+=6;goto B5d5acf;
case 0x5d5ad0:c.instructions+=5;goto B5d5ad0;
case 0x5d5ad2:c.instructions+=4;goto B5d5ad2;
case 0x5d5ad3:c.instructions+=3;goto B5d5ad3;
case 0x5d5ad4:c.instructions+=2;goto B5d5ad4;
case 0x5d5ad7:c.instructions+=1;goto B5d5ad7;
case 0x5d5ada:goto L5d5ada;
case 0x5d5ade:c.instructions+=8;goto B5d5ade;
case 0x5d5ae2:c.instructions+=7;goto B5d5ae2;
case 0x5d5ae3:c.instructions+=6;goto B5d5ae3;
case 0x5d5ae4:c.instructions+=5;goto B5d5ae4;
case 0x5d5ae6:c.instructions+=4;goto B5d5ae6;
case 0x5d5ae7:c.instructions+=3;goto B5d5ae7;
case 0x5d5ae8:c.instructions+=2;goto B5d5ae8;
case 0x5d5aeb:c.instructions+=1;goto B5d5aeb;
case 0x5d5af0:goto L5d5af0;
case 0x5d5af1:c.instructions+=12;goto B5d5af1;
case 0x5d5af5:c.instructions+=11;goto B5d5af5;
case 0x5d5af6:c.instructions+=10;goto B5d5af6;
case 0x5d5af7:c.instructions+=9;goto B5d5af7;
case 0x5d5afa:c.instructions+=8;goto B5d5afa;
case 0x5d5afd:c.instructions+=7;goto B5d5afd;
case 0x5d5afe:c.instructions+=6;goto B5d5afe;
case 0x5d5b02:c.instructions+=5;goto B5d5b02;
case 0x5d5b04:c.instructions+=4;goto B5d5b04;
case 0x5d5b06:c.instructions+=3;goto B5d5b06;
case 0x5d5b08:c.instructions+=2;goto B5d5b08;
case 0x5d5b10:c.instructions+=1;goto B5d5b10;
case 0x5d5b12:goto L5d5b12;
case 0x5d5b13:c.instructions+=2;goto B5d5b13;
case 0x5d5b17:c.instructions+=1;goto B5d5b17;
case 0x5d5b20:goto L5d5b20;
case 0x5d5b23:c.instructions+=10;goto B5d5b23;
case 0x5d5b2a:c.instructions+=9;goto B5d5b2a;
case 0x5d5b30:c.instructions+=8;goto B5d5b30;
case 0x5d5b34:c.instructions+=7;goto B5d5b34;
case 0x5d5b3a:c.instructions+=6;goto B5d5b3a;
case 0x5d5b3e:c.instructions+=5;goto B5d5b3e;
case 0x5d5b42:c.instructions+=4;goto B5d5b42;
case 0x5d5b44:c.instructions+=3;goto B5d5b44;
case 0x5d5b46:c.instructions+=2;goto B5d5b46;
case 0x5d5b49:c.instructions+=1;goto B5d5b49;
case 0x5d5b4b:goto L5d5b4b;
case 0x5d5b4d:c.instructions+=1;goto B5d5b4d;
case 0x5d5b51:goto L5d5b51;
case 0x5d5b55:c.instructions+=3;goto B5d5b55;
case 0x5d5b57:c.instructions+=2;goto B5d5b57;
case 0x5d5b5a:c.instructions+=1;goto B5d5b5a;
case 0x5d5b5c:goto L5d5b5c;
case 0x5d5b60:c.instructions+=2;goto B5d5b60;
case 0x5d5b62:c.instructions+=1;goto B5d5b62;
case 0x5d5b64:goto L5d5b64;
case 0x5d5b66:goto L5d5b66;
case 0x5d5b67:c.instructions+=2;goto B5d5b67;
case 0x5d5b69:c.instructions+=1;goto B5d5b69;
case 0x5d5b6b:goto L5d5b6b;
case 0x5d5b6c:goto L5d5b6c;
case 0x5d5b6d:c.instructions+=5;goto B5d5b6d;
case 0x5d5b6e:c.instructions+=4;goto B5d5b6e;
case 0x5d5b70:c.instructions+=3;goto B5d5b70;
case 0x5d5b71:c.instructions+=2;goto B5d5b71;
case 0x5d5b72:c.instructions+=1;goto B5d5b72;
case 0x5d5b80:goto L5d5b80;
case 0x5d5b81:c.instructions+=8;goto B5d5b81;
case 0x5d5b85:c.instructions+=7;goto B5d5b85;
case 0x5d5b89:c.instructions+=6;goto B5d5b89;
case 0x5d5b8d:c.instructions+=5;goto B5d5b8d;
case 0x5d5b8e:c.instructions+=4;goto B5d5b8e;
case 0x5d5b90:c.instructions+=3;goto B5d5b90;
case 0x5d5b92:c.instructions+=2;goto B5d5b92;
case 0x5d5b96:c.instructions+=1;goto B5d5b96;
case 0x5d5b98:goto L5d5b98;
case 0x5d5b99:c.instructions+=8;goto B5d5b99;
case 0x5d5b9d:c.instructions+=7;goto B5d5b9d;
case 0x5d5b9e:c.instructions+=6;goto B5d5b9e;
case 0x5d5b9f:c.instructions+=5;goto B5d5b9f;
case 0x5d5ba2:c.instructions+=4;goto B5d5ba2;
case 0x5d5ba5:c.instructions+=3;goto B5d5ba5;
case 0x5d5ba7:c.instructions+=2;goto B5d5ba7;
case 0x5d5ba9:c.instructions+=1;goto B5d5ba9;
case 0x5d5bb0:goto L5d5bb0;
case 0x5d5bb2:c.instructions+=1;goto B5d5bb2;
case 0x5d5bb4:goto L5d5bb4;
case 0x5d5bb6:c.instructions+=1;goto B5d5bb6;
case 0x5d5bb8:goto L5d5bb8;
case 0x5d5bbb:c.instructions+=1;goto B5d5bbb;
case 0x5d5bbd:goto L5d5bbd;
case 0x5d5bbf:c.instructions+=13;goto B5d5bbf;
case 0x5d5bc1:c.instructions+=12;goto B5d5bc1;
case 0x5d5bc3:c.instructions+=11;goto B5d5bc3;
case 0x5d5bc6:c.instructions+=10;goto B5d5bc6;
case 0x5d5bc9:c.instructions+=9;goto B5d5bc9;
case 0x5d5bcb:c.instructions+=8;goto B5d5bcb;
case 0x5d5bcd:c.instructions+=7;goto B5d5bcd;
case 0x5d5bcf:c.instructions+=6;goto B5d5bcf;
case 0x5d5bd1:c.instructions+=5;goto B5d5bd1;
case 0x5d5bd3:c.instructions+=4;goto B5d5bd3;
case 0x5d5bd5:c.instructions+=3;goto B5d5bd5;
case 0x5d5bd7:c.instructions+=2;goto B5d5bd7;
case 0x5d5bd9:c.instructions+=1;goto B5d5bd9;
case 0x5d5bdb:goto L5d5bdb;
case 0x5d5bdf:c.instructions+=3;goto B5d5bdf;
case 0x5d5be1:c.instructions+=2;goto B5d5be1;
case 0x5d5be4:c.instructions+=1;goto B5d5be4;
case 0x5d5be6:goto L5d5be6;
case 0x5d5bea:c.instructions+=2;goto B5d5bea;
case 0x5d5bec:c.instructions+=1;goto B5d5bec;
case 0x5d5bee:goto L5d5bee;
case 0x5d5bf0:goto L5d5bf0;
case 0x5d5bf3:c.instructions+=2;goto B5d5bf3;
case 0x5d5bf4:c.instructions+=1;goto B5d5bf4;
case 0x5d5bf6:goto L5d5bf6;
case 0x5d5bf7:c.instructions+=2;goto B5d5bf7;
case 0x5d5bf8:c.instructions+=1;goto B5d5bf8;
case 0x5d5bf9:goto L5d5bf9;
case 0x5d5bfb:c.instructions+=3;goto B5d5bfb;
case 0x5d5bfc:c.instructions+=2;goto B5d5bfc;
case 0x5d5bfd:c.instructions+=1;goto B5d5bfd;
case 0x5d5c00:goto L5d5c00;
case 0x5d5c01:c.instructions+=15;goto B5d5c01;
case 0x5d5c03:c.instructions+=14;goto B5d5c03;
case 0x5d5c06:c.instructions+=13;goto B5d5c06;
case 0x5d5c09:c.instructions+=12;goto B5d5c09;
case 0x5d5c0c:c.instructions+=11;goto B5d5c0c;
case 0x5d5c0d:c.instructions+=10;goto B5d5c0d;
case 0x5d5c10:c.instructions+=9;goto B5d5c10;
case 0x5d5c13:c.instructions+=8;goto B5d5c13;
case 0x5d5c19:c.instructions+=7;goto B5d5c19;
case 0x5d5c1a:c.instructions+=6;goto B5d5c1a;
case 0x5d5c1d:c.instructions+=5;goto B5d5c1d;
case 0x5d5c20:c.instructions+=4;goto B5d5c20;
case 0x5d5c24:c.instructions+=3;goto B5d5c24;
case 0x5d5c28:c.instructions+=2;goto B5d5c28;
case 0x5d5c29:c.instructions+=1;goto B5d5c29;
case 0x5d5c2e:goto L5d5c2e;
case 0x5d5c32:c.instructions+=7;goto B5d5c32;
case 0x5d5c36:c.instructions+=6;goto B5d5c36;
case 0x5d5c38:c.instructions+=5;goto B5d5c38;
case 0x5d5c39:c.instructions+=4;goto B5d5c39;
case 0x5d5c3d:c.instructions+=3;goto B5d5c3d;
case 0x5d5c3e:c.instructions+=2;goto B5d5c3e;
case 0x5d5c44:c.instructions+=1;goto B5d5c44;
case 0x5d5c49:goto L5d5c49;
case 0x5d5c4d:c.instructions+=9;goto B5d5c4d;
case 0x5d5c51:c.instructions+=8;goto B5d5c51;
case 0x5d5c53:c.instructions+=7;goto B5d5c53;
case 0x5d5c54:c.instructions+=6;goto B5d5c54;
case 0x5d5c58:c.instructions+=5;goto B5d5c58;
case 0x5d5c59:c.instructions+=4;goto B5d5c59;
case 0x5d5c5f:c.instructions+=3;goto B5d5c5f;
case 0x5d5c63:c.instructions+=2;goto B5d5c63;
case 0x5d5c67:c.instructions+=1;goto B5d5c67;
case 0x5d5c6c:goto L5d5c6c;
case 0x5d5c70:c.instructions+=8;goto B5d5c70;
case 0x5d5c74:c.instructions+=7;goto B5d5c74;
case 0x5d5c78:c.instructions+=6;goto B5d5c78;
case 0x5d5c7c:c.instructions+=5;goto B5d5c7c;
case 0x5d5c7d:c.instructions+=4;goto B5d5c7d;
case 0x5d5c81:c.instructions+=3;goto B5d5c81;
case 0x5d5c82:c.instructions+=2;goto B5d5c82;
case 0x5d5c86:c.instructions+=1;goto B5d5c86;
case 0x5d5c8b:goto L5d5c8b;
case 0x5d5c8f:c.instructions+=19;goto B5d5c8f;
case 0x5d5c92:c.instructions+=18;goto B5d5c92;
case 0x5d5c94:c.instructions+=17;goto B5d5c94;
case 0x5d5c98:c.instructions+=16;goto B5d5c98;
case 0x5d5c9b:c.instructions+=15;goto B5d5c9b;
case 0x5d5c9e:c.instructions+=14;goto B5d5c9e;
case 0x5d5c9f:c.instructions+=13;goto B5d5c9f;
case 0x5d5ca1:c.instructions+=12;goto B5d5ca1;
case 0x5d5ca4:c.instructions+=11;goto B5d5ca4;
case 0x5d5ca5:c.instructions+=10;goto B5d5ca5;
case 0x5d5ca9:c.instructions+=9;goto B5d5ca9;
case 0x5d5cad:c.instructions+=8;goto B5d5cad;
case 0x5d5cb1:c.instructions+=7;goto B5d5cb1;
case 0x5d5cb5:c.instructions+=6;goto B5d5cb5;
case 0x5d5cb7:c.instructions+=5;goto B5d5cb7;
case 0x5d5cb9:c.instructions+=4;goto B5d5cb9;
case 0x5d5cbc:c.instructions+=3;goto B5d5cbc;
case 0x5d5cbe:c.instructions+=2;goto B5d5cbe;
case 0x5d5cbf:c.instructions+=1;goto B5d5cbf;
case 0x5d5cd0:goto L5d5cd0;
case 0x5d5cd3:c.instructions+=4;goto B5d5cd3;
case 0x5d5cd7:c.instructions+=3;goto B5d5cd7;
case 0x5d5cd9:c.instructions+=2;goto B5d5cd9;
case 0x5d5cdd:c.instructions+=1;goto B5d5cdd;
case 0x5d5cdf:goto L5d5cdf;
case 0x5d5ce2:c.instructions+=6;goto B5d5ce2;
case 0x5d5ce4:c.instructions+=5;goto B5d5ce4;
case 0x5d5ce6:c.instructions+=4;goto B5d5ce6;
case 0x5d5ce8:c.instructions+=3;goto B5d5ce8;
case 0x5d5cea:c.instructions+=2;goto B5d5cea;
case 0x5d5ced:c.instructions+=1;goto B5d5ced;
case 0x5d5cef:goto L5d5cef;
case 0x5d5cf2:c.instructions+=1;goto B5d5cf2;
case 0x5d5cf5:goto L5d5cf5;
case 0x5d5cf8:c.instructions+=3;goto B5d5cf8;
case 0x5d5cfa:c.instructions+=2;goto B5d5cfa;
case 0x5d5cfd:c.instructions+=1;goto B5d5cfd;
case 0x5d5cff:goto L5d5cff;
case 0x5d5d02:goto L5d5d02;
case 0x5d5d10:goto L5d5d10;
case 0x5d5d13:c.instructions+=4;goto B5d5d13;
case 0x5d5d17:c.instructions+=3;goto B5d5d17;
case 0x5d5d19:c.instructions+=2;goto B5d5d19;
case 0x5d5d1d:c.instructions+=1;goto B5d5d1d;
case 0x5d5d1f:goto L5d5d1f;
case 0x5d5d25:c.instructions+=3;goto B5d5d25;
case 0x5d5d27:c.instructions+=2;goto B5d5d27;
case 0x5d5d2a:c.instructions+=1;goto B5d5d2a;
case 0x5d5d2c:goto L5d5d2c;
case 0x5d5d32:c.instructions+=1;goto B5d5d32;
case 0x5d5d35:goto L5d5d35;
case 0x5d5d3b:c.instructions+=3;goto B5d5d3b;
case 0x5d5d3d:c.instructions+=2;goto B5d5d3d;
case 0x5d5d40:c.instructions+=1;goto B5d5d40;
case 0x5d5d42:goto L5d5d42;
case 0x5d5d48:goto L5d5d48;
case 0x5d5d50:goto L5d5d50;
case 0x5d5d53:c.instructions+=3;goto B5d5d53;
case 0x5d5d56:c.instructions+=2;goto B5d5d56;
case 0x5d5d58:c.instructions+=1;goto B5d5d58;
case 0x5d5d5a:goto L5d5d5a;
case 0x5d5d5e:c.instructions+=6;goto B5d5d5e;
case 0x5d5d64:c.instructions+=5;goto B5d5d64;
case 0x5d5d67:c.instructions+=4;goto B5d5d67;
case 0x5d5d69:c.instructions+=3;goto B5d5d69;
case 0x5d5d6d:c.instructions+=2;goto B5d5d6d;
case 0x5d5d73:c.instructions+=1;goto B5d5d73;
case 0x5d5d79:goto L5d5d79;
case 0x5d5d7c:c.instructions+=6;goto B5d5d7c;
case 0x5d5d7e:c.instructions+=5;goto B5d5d7e;
case 0x5d5d80:c.instructions+=4;goto B5d5d80;
case 0x5d5d82:c.instructions+=3;goto B5d5d82;
case 0x5d5d84:c.instructions+=2;goto B5d5d84;
case 0x5d5d87:c.instructions+=1;goto B5d5d87;
case 0x5d5d89:goto L5d5d89;
case 0x5d5d8c:c.instructions+=2;goto B5d5d8c;
case 0x5d5d8f:c.instructions+=1;goto B5d5d8f;
case 0x5d5d92:goto L5d5d92;
case 0x5d5d95:c.instructions+=3;goto B5d5d95;
case 0x5d5d97:c.instructions+=2;goto B5d5d97;
case 0x5d5d9a:c.instructions+=1;goto B5d5d9a;
case 0x5d5d9c:goto L5d5d9c;
case 0x5d5d9f:c.instructions+=2;goto B5d5d9f;
case 0x5d5da2:c.instructions+=1;goto B5d5da2;
case 0x5d5da5:goto L5d5da5;
case 0x5d5da9:c.instructions+=6;goto B5d5da9;
case 0x5d5daf:c.instructions+=5;goto B5d5daf;
case 0x5d5db5:c.instructions+=4;goto B5d5db5;
case 0x5d5db7:c.instructions+=3;goto B5d5db7;
case 0x5d5dba:c.instructions+=2;goto B5d5dba;
case 0x5d5dbd:c.instructions+=1;goto B5d5dbd;
case 0x5d5dbf:goto L5d5dbf;
case 0x5d5dc5:goto L5d5dc5;
case 0x5d5dc9:c.instructions+=21;goto B5d5dc9;
case 0x5d5dcc:c.instructions+=20;goto B5d5dcc;
case 0x5d5dcf:c.instructions+=19;goto B5d5dcf;
case 0x5d5dd3:c.instructions+=18;goto B5d5dd3;
case 0x5d5dd6:c.instructions+=17;goto B5d5dd6;
case 0x5d5dd9:c.instructions+=16;goto B5d5dd9;
case 0x5d5ddd:c.instructions+=15;goto B5d5ddd;
case 0x5d5de1:c.instructions+=14;goto B5d5de1;
case 0x5d5de5:c.instructions+=13;goto B5d5de5;
case 0x5d5de9:c.instructions+=12;goto B5d5de9;
case 0x5d5ded:c.instructions+=11;goto B5d5ded;
case 0x5d5def:c.instructions+=10;goto B5d5def;
case 0x5d5df1:c.instructions+=9;goto B5d5df1;
case 0x5d5df5:c.instructions+=8;goto B5d5df5;
case 0x5d5df8:c.instructions+=7;goto B5d5df8;
case 0x5d5dfc:c.instructions+=6;goto B5d5dfc;
case 0x5d5dfe:c.instructions+=5;goto B5d5dfe;
case 0x5d5e00:c.instructions+=4;goto B5d5e00;
case 0x5d5e06:c.instructions+=3;goto B5d5e06;
case 0x5d5e08:c.instructions+=2;goto B5d5e08;
case 0x5d5e0b:c.instructions+=1;goto B5d5e0b;
case 0x5d5e0d:goto L5d5e0d;
case 0x5d5e0f:goto L5d5e0f;
case 0x5d5e12:c.instructions+=1;goto B5d5e12;
case 0x5d5e20:goto L5d5e20;
case 0x5d5e21:c.instructions+=7;goto B5d5e21;
case 0x5d5e25:c.instructions+=6;goto B5d5e25;
case 0x5d5e26:c.instructions+=5;goto B5d5e26;
case 0x5d5e2b:c.instructions+=4;goto B5d5e2b;
case 0x5d5e2d:c.instructions+=3;goto B5d5e2d;
case 0x5d5e2f:c.instructions+=2;goto B5d5e2f;
case 0x5d5e31:c.instructions+=1;goto B5d5e31;
case 0x5d5e36:goto L5d5e36;
case 0x5d5e38:c.instructions+=6;goto B5d5e38;
case 0x5d5e3a:c.instructions+=5;goto B5d5e3a;
case 0x5d5e3c:c.instructions+=4;goto B5d5e3c;
case 0x5d5e3f:c.instructions+=3;goto B5d5e3f;
case 0x5d5e40:c.instructions+=2;goto B5d5e40;
case 0x5d5e42:c.instructions+=1;goto B5d5e42;
case 0x5d5e47:goto L5d5e47;
case 0x5d5e49:c.instructions+=6;goto B5d5e49;
case 0x5d5e4b:c.instructions+=5;goto B5d5e4b;
case 0x5d5e4d:c.instructions+=4;goto B5d5e4d;
case 0x5d5e50:c.instructions+=3;goto B5d5e50;
case 0x5d5e51:c.instructions+=2;goto B5d5e51;
case 0x5d5e53:c.instructions+=1;goto B5d5e53;
case 0x5d5e58:goto L5d5e58;
case 0x5d5e59:c.instructions+=4;goto B5d5e59;
case 0x5d5e5c:c.instructions+=3;goto B5d5e5c;
case 0x5d5e5d:c.instructions+=2;goto B5d5e5d;
case 0x5d5e62:c.instructions+=1;goto B5d5e62;
case 0x5d5e67:goto L5d5e67;
case 0x5d5e6a:c.instructions+=3;goto B5d5e6a;
case 0x5d5e6b:c.instructions+=2;goto B5d5e6b;
case 0x5d5e6d:c.instructions+=1;goto B5d5e6d;
case 0x5d5e72:goto L5d5e72;
case 0x5d5e75:c.instructions+=3;goto B5d5e75;
case 0x5d5e76:c.instructions+=2;goto B5d5e76;
case 0x5d5e78:c.instructions+=1;goto B5d5e78;
case 0x5d5e7d:goto L5d5e7d;
case 0x5d5e80:c.instructions+=3;goto B5d5e80;
case 0x5d5e81:c.instructions+=2;goto B5d5e81;
case 0x5d5e83:c.instructions+=1;goto B5d5e83;
case 0x5d5e88:goto L5d5e88;
case 0x5d5e8a:c.instructions+=6;goto B5d5e8a;
case 0x5d5e8c:c.instructions+=5;goto B5d5e8c;
case 0x5d5e8e:c.instructions+=4;goto B5d5e8e;
case 0x5d5e91:c.instructions+=3;goto B5d5e91;
case 0x5d5e92:c.instructions+=2;goto B5d5e92;
case 0x5d5e94:c.instructions+=1;goto B5d5e94;
case 0x5d5e99:goto L5d5e99;
case 0x5d5e9b:c.instructions+=1;goto B5d5e9b;
case 0x5d5ea0:goto L5d5ea0;
case 0x5d5ea1:c.instructions+=2;goto B5d5ea1;
case 0x5d5ea2:c.instructions+=1;goto B5d5ea2;
case 0x5d5eb0:goto L5d5eb0;
case 0x5d5eb3:c.instructions+=6;goto B5d5eb3;
case 0x5d5eb9:c.instructions+=5;goto B5d5eb9;
case 0x5d5ebb:c.instructions+=4;goto B5d5ebb;
case 0x5d5ebd:c.instructions+=3;goto B5d5ebd;
case 0x5d5ec1:c.instructions+=2;goto B5d5ec1;
case 0x5d5ec5:c.instructions+=1;goto B5d5ec5;
case 0x5d5ecb:goto L5d5ecb;
case 0x5d5ecc:c.instructions+=6;goto B5d5ecc;
case 0x5d5ecd:c.instructions+=5;goto B5d5ecd;
case 0x5d5ece:c.instructions+=4;goto B5d5ece;
case 0x5d5ecf:c.instructions+=3;goto B5d5ecf;
case 0x5d5ed5:c.instructions+=2;goto B5d5ed5;
case 0x5d5ed9:c.instructions+=1;goto B5d5ed9;
case 0x5d5ee0:goto L5d5ee0;
case 0x5d5ee4:c.instructions+=4;goto B5d5ee4;
case 0x5d5ee6:c.instructions+=3;goto B5d5ee6;
case 0x5d5ee8:c.instructions+=2;goto B5d5ee8;
case 0x5d5eea:c.instructions+=1;goto B5d5eea;
case 0x5d5eec:goto L5d5eec;
case 0x5d5ef0:c.instructions+=6;goto B5d5ef0;
case 0x5d5ef1:c.instructions+=5;goto B5d5ef1;
case 0x5d5ef6:c.instructions+=4;goto B5d5ef6;
case 0x5d5ef8:c.instructions+=3;goto B5d5ef8;
case 0x5d5efa:c.instructions+=2;goto B5d5efa;
case 0x5d5efc:c.instructions+=1;goto B5d5efc;
case 0x5d5efe:goto L5d5efe;
case 0x5d5f00:c.instructions+=1;goto B5d5f00;
case 0x5d5f02:goto L5d5f02;
case 0x5d5f07:c.instructions+=2;goto B5d5f07;
case 0x5d5f09:c.instructions+=1;goto B5d5f09;
case 0x5d5f0b:goto L5d5f0b;
case 0x5d5f0d:c.instructions+=2;goto B5d5f0d;
case 0x5d5f0f:c.instructions+=1;goto B5d5f0f;
case 0x5d5f15:goto L5d5f15;
case 0x5d5f19:c.instructions+=11;goto B5d5f19;
case 0x5d5f1c:c.instructions+=10;goto B5d5f1c;
case 0x5d5f21:c.instructions+=9;goto B5d5f21;
case 0x5d5f23:c.instructions+=8;goto B5d5f23;
case 0x5d5f25:c.instructions+=7;goto B5d5f25;
case 0x5d5f28:c.instructions+=6;goto B5d5f28;
case 0x5d5f2a:c.instructions+=5;goto B5d5f2a;
case 0x5d5f2d:c.instructions+=4;goto B5d5f2d;
case 0x5d5f2f:c.instructions+=3;goto B5d5f2f;
case 0x5d5f31:c.instructions+=2;goto B5d5f31;
case 0x5d5f33:c.instructions+=1;goto B5d5f33;
case 0x5d5f35:goto L5d5f35;
case 0x5d5f37:c.instructions+=1;goto B5d5f37;
case 0x5d5f39:goto L5d5f39;
case 0x5d5f3b:c.instructions+=1;goto B5d5f3b;
case 0x5d5f3d:goto L5d5f3d;
case 0x5d5f3f:c.instructions+=1;goto B5d5f3f;
case 0x5d5f41:goto L5d5f41;
case 0x5d5f43:c.instructions+=6;goto B5d5f43;
case 0x5d5f44:c.instructions+=5;goto B5d5f44;
case 0x5d5f49:c.instructions+=4;goto B5d5f49;
case 0x5d5f4b:c.instructions+=3;goto B5d5f4b;
case 0x5d5f4d:c.instructions+=2;goto B5d5f4d;
case 0x5d5f4f:c.instructions+=1;goto B5d5f4f;
case 0x5d5f51:goto L5d5f51;
case 0x5d5f53:c.instructions+=1;goto B5d5f53;
case 0x5d5f55:goto L5d5f55;
case 0x5d5f5a:c.instructions+=3;goto B5d5f5a;
case 0x5d5f5d:c.instructions+=2;goto B5d5f5d;
case 0x5d5f5f:c.instructions+=1;goto B5d5f5f;
case 0x5d5f61:goto L5d5f61;
case 0x5d5f66:c.instructions+=1;goto B5d5f66;
case 0x5d5f68:goto L5d5f68;
case 0x5d5f6d:c.instructions+=1;goto B5d5f6d;
case 0x5d5f6f:goto L5d5f6f;
case 0x5d5f74:c.instructions+=2;goto B5d5f74;
case 0x5d5f79:c.instructions+=1;goto B5d5f79;
case 0x5d5f7b:goto L5d5f7b;
case 0x5d5f80:c.instructions+=1;goto B5d5f80;
case 0x5d5f82:goto L5d5f82;
case 0x5d5f87:goto L5d5f87;
case 0x5d5f8a:c.instructions+=2;goto B5d5f8a;
case 0x5d5f8d:c.instructions+=1;goto B5d5f8d;
case 0x5d5f8f:goto L5d5f8f;
case 0x5d5f92:c.instructions+=1;goto B5d5f92;
case 0x5d5f94:goto L5d5f94;
case 0x5d5f95:goto L5d5f95;
case 0x5d5f99:c.instructions+=1;goto B5d5f99;
case 0x5d5f9b:goto L5d5f9b;
case 0x5d5f9f:c.instructions+=1;goto B5d5f9f;
case 0x5d5fa3:goto L5d5fa3;
case 0x5d5fa7:c.instructions+=4;goto B5d5fa7;
case 0x5d5faa:c.instructions+=3;goto B5d5faa;
case 0x5d5fab:c.instructions+=2;goto B5d5fab;
case 0x5d5faf:c.instructions+=1;goto B5d5faf;
case 0x5d5fb5:goto L5d5fb5;
case 0x5d5fb9:c.instructions+=6;goto B5d5fb9;
case 0x5d5fba:c.instructions+=5;goto B5d5fba;
case 0x5d5fbb:c.instructions+=4;goto B5d5fbb;
case 0x5d5fbc:c.instructions+=3;goto B5d5fbc;
case 0x5d5fbd:c.instructions+=2;goto B5d5fbd;
case 0x5d5fc0:c.instructions+=1;goto B5d5fc0;
case 0x5d5fc3:goto L5d5fc3;
case 0x5d5fc5:c.instructions+=2;goto B5d5fc5;
case 0x5d5fc8:c.instructions+=1;goto B5d5fc8;
case 0x5d5fd0:goto L5d5fd0;
case 0x5d5fd4:c.instructions+=13;goto B5d5fd4;
case 0x5d5fd8:c.instructions+=12;goto B5d5fd8;
case 0x5d5fdb:c.instructions+=11;goto B5d5fdb;
case 0x5d5fe2:c.instructions+=10;goto B5d5fe2;
case 0x5d5fe8:c.instructions+=9;goto B5d5fe8;
case 0x5d5feb:c.instructions+=8;goto B5d5feb;
case 0x5d5fed:c.instructions+=7;goto B5d5fed;
case 0x5d5ff0:c.instructions+=6;goto B5d5ff0;
case 0x5d5ff3:c.instructions+=5;goto B5d5ff3;
case 0x5d5ff5:c.instructions+=4;goto B5d5ff5;
case 0x5d5ff8:c.instructions+=3;goto B5d5ff8;
case 0x5d5ffb:c.instructions+=2;goto B5d5ffb;
case 0x5d5fff:c.instructions+=1;goto B5d5fff;
default:missing_instruction(c.pc);}
B5d5001:L5d5001:{c.instructions+=4;NFSU2_TR(0x5d5001);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d5002:{NFSU2_TR(0x5d5002);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x24ull))));
}
B5d5005:{NFSU2_TR(0x5d5005);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5d5007:{NFSU2_TR(0x5d5007);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5d4ff0u,5d4);}
}
B5d5009:L5d5009:{c.instructions+=2;NFSU2_TR(0x5d5009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d500a:{NFSU2_TR(0x5d500a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5010:L5d5010:{c.instructions+=6;NFSU2_TR(0x5d5010);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5014:{NFSU2_TR(0x5d5014);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5015:{NFSU2_TR(0x5d5015);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5016:{NFSU2_TR(0x5d5016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5017:{NFSU2_TR(0x5d5017);
__builtin_memmove((R+28),(R+4),4);
}
B5d5019:{NFSU2_TR(0x5d5019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d501eull));
TAIL_STATIC(0x43db50u,43d);
}
B5d501e:L5d501e:{c.instructions+=6;NFSU2_TR(0x5d501e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5022:{NFSU2_TR(0x5d5022);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5028:{NFSU2_TR(0x5d5028);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d502b:{NFSU2_TR(0x5d502b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d502d:{NFSU2_TR(0x5d502d);
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
B5d502f:{NFSU2_TR(0x5d502f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d5083;}}
}
B5d5031:L5d5031:{c.instructions+=4;NFSU2_TR(0x5d5031);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5032:{NFSU2_TR(0x5d5032);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5033:{NFSU2_TR(0x5d5033);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d5035:{NFSU2_TR(0x5d5035);
{goto L5d5040;}
}
B5d5040:L5d5040:{c.instructions+=6;NFSU2_TR(0x5d5040);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x49cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5046:{NFSU2_TR(0x5d5046);
u8 U[13];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5d504a:{NFSU2_TR(0x5d504a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B5d504c:{NFSU2_TR(0x5d504c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d504e:{NFSU2_TR(0x5d504e);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5050:{NFSU2_TR(0x5d5050);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d5073;}}
}
B5d5052:L5d5052:{c.instructions+=1;NFSU2_TR(0x5d5052);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5055:L5d5055:{c.instructions+=3;NFSU2_TR(0x5d5055);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5059:{NFSU2_TR(0x5d5059);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d505b:{NFSU2_TR(0x5d505b);
if(r1(R+518)){{goto L5d506b;}}
}
B5d505d:L5d505d:{c.instructions+=5;NFSU2_TR(0x5d505d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5d5061:{NFSU2_TR(0x5d5061);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d5062:{NFSU2_TR(0x5d5062);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d5065:{NFSU2_TR(0x5d5065);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d5067:{NFSU2_TR(0x5d5067);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5055u);}goto L5d5055;}}
}
B5d5069:L5d5069:{c.instructions+=1;NFSU2_TR(0x5d5069);
{goto L5d5073;}
}
B5d506b:L5d506b:{c.instructions+=3;NFSU2_TR(0x5d506b);
w1(R+0,u8(0x1ull));
}
B5d506d:{NFSU2_TR(0x5d506d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d5070:{NFSU2_TR(0x5d5070);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d5073:L5d5073:{c.instructions+=5;NFSU2_TR(0x5d5073);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x498ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5079:{NFSU2_TR(0x5d5079);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d507a:{NFSU2_TR(0x5d507a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x24ull))));
}
B5d507d:{NFSU2_TR(0x5d507d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d507f:{NFSU2_TR(0x5d507f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5040u);}goto L5d5040;}}
}
B5d5081:L5d5081:{c.instructions+=2;NFSU2_TR(0x5d5081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5082:{NFSU2_TR(0x5d5082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5083:L5d5083:{c.instructions+=3;NFSU2_TR(0x5d5083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5084:{NFSU2_TR(0x5d5084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5085:{NFSU2_TR(0x5d5085);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5090:L5d5090:{c.instructions+=18;NFSU2_TR(0x5d5090);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5091:{NFSU2_TR(0x5d5091);
__builtin_memmove((R+20),(R+16),4);
}
B5d5093:{NFSU2_TR(0x5d5093);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d5096:{NFSU2_TR(0x5d5096);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5098:{NFSU2_TR(0x5d5098);
u8 U[4];
w4(U+0,u32(0x77931bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d509d:{NFSU2_TR(0x5d509d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d50a3:{NFSU2_TR(0x5d50a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50a4:{NFSU2_TR(0x5d50a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d50ab:{NFSU2_TR(0x5d50ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5d50ae:{NFSU2_TR(0x5d50ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50af:{NFSU2_TR(0x5d50af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50b0:{NFSU2_TR(0x5d50b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d50b3:{NFSU2_TR(0x5d50b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d50b9:{NFSU2_TR(0x5d50b9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d50bb:{NFSU2_TR(0x5d50bb);
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
B5d50bd:{NFSU2_TR(0x5d50bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50be:{NFSU2_TR(0x5d50be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d50c2:{NFSU2_TR(0x5d50c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d52a4;}}
}
B5d50c8:L5d50c8:{c.instructions+=2;NFSU2_TR(0x5d50c8);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50ca:{NFSU2_TR(0x5d50ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d50cfull));
TAIL_STATIC(0x575620u,575);
}
B5d50cf:L5d50cf:{c.instructions+=5;NFSU2_TR(0x5d50cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d50d2:{NFSU2_TR(0x5d50d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d50d6:{NFSU2_TR(0x5d50d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d50d8:{NFSU2_TR(0x5d50d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d50dc:{NFSU2_TR(0x5d50dc);
if(r1(R+518)){{goto L5d50f2;}}
}
B5d50de:L5d50de:{c.instructions+=7;NFSU2_TR(0x5d50de);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d50e2:{NFSU2_TR(0x5d50e2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5d50e5:{NFSU2_TR(0x5d50e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50e6:{NFSU2_TR(0x5d50e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50e7:{NFSU2_TR(0x5d50e7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50e9:{NFSU2_TR(0x5d50e9);
__builtin_memmove((R+4),(R+0),4);
}
B5d50eb:{NFSU2_TR(0x5d50eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d50f0ull));
TAIL_STATIC(0x57a300u,57a);
}
B5d50f0:L5d50f0:{c.instructions+=1;NFSU2_TR(0x5d50f0);
{goto L5d50f4;}
}
B5d50f2:L5d50f2:{c.instructions+=1;NFSU2_TR(0x5d50f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d50f4:L5d50f4:{c.instructions+=7;NFSU2_TR(0x5d50f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d50f8:{NFSU2_TR(0x5d50f8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B5d50fb:{NFSU2_TR(0x5d50fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d50fc:{NFSU2_TR(0x5d50fc);
__builtin_memmove((R+4),(R+0),4);
}
B5d50fe:{NFSU2_TR(0x5d50fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d5106:{NFSU2_TR(0x5d5106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d510c:{NFSU2_TR(0x5d510c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5111ull));
TAIL_STATIC(0x5701d0u,570);
}
B5d5111:L5d5111:{c.instructions+=5;NFSU2_TR(0x5d5111);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d5115:{NFSU2_TR(0x5d5115);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d5119:{NFSU2_TR(0x5d5119);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d511b:{NFSU2_TR(0x5d511b);
w1(R+8,u8(0x1ull));
}
B5d511d:{NFSU2_TR(0x5d511d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5183;}}
}
B5d511f:L5d511f:{c.instructions+=4;NFSU2_TR(0x5d511f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d5122:{NFSU2_TR(0x5d5122);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d5125:{NFSU2_TR(0x5d5125);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5129:{NFSU2_TR(0x5d5129);
__builtin_memmove((R+16),(R+16),4);
}
B5d5130:L5d5130:{c.instructions+=2;NFSU2_TR(0x5d5130);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d5132:{NFSU2_TR(0x5d5132);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5138;}}
}
B5d5134:L5d5134:{c.instructions+=2;NFSU2_TR(0x5d5134);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d5136:{NFSU2_TR(0x5d5136);
{goto L5d5141;}
}
B5d5138:L5d5138:{c.instructions+=3;NFSU2_TR(0x5d5138);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d513c:{NFSU2_TR(0x5d513c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d513f:{NFSU2_TR(0x5d513f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d5141:L5d5141:{c.instructions+=24;NFSU2_TR(0x5d5141);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B5d5145:{NFSU2_TR(0x5d5145);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5148:{NFSU2_TR(0x5d5148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d514e:{NFSU2_TR(0x5d514e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d5150:{NFSU2_TR(0x5d5150);
__builtin_memmove((R+0),(R+4),4);
}
B5d5152:{NFSU2_TR(0x5d5152);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B5d5154:{NFSU2_TR(0x5d5154);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d5157:{NFSU2_TR(0x5d5157);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d5158:{NFSU2_TR(0x5d5158);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d515b:{NFSU2_TR(0x5d515b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5d515d:{NFSU2_TR(0x5d515d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d515f:{NFSU2_TR(0x5d515f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d5161:{NFSU2_TR(0x5d5161);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5164:{NFSU2_TR(0x5d5164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5167:{NFSU2_TR(0x5d5167);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d516a:{NFSU2_TR(0x5d516a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d516e:{NFSU2_TR(0x5d516e);
w1(R+8,u8(0x1ull));
}
B5d5170:{NFSU2_TR(0x5d5170);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d5173:{NFSU2_TR(0x5d5173);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5d5177:{NFSU2_TR(0x5d5177);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d5178:{NFSU2_TR(0x5d5178);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B5d517b:{NFSU2_TR(0x5d517b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d517d:{NFSU2_TR(0x5d517d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5181:{NFSU2_TR(0x5d5181);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5130u);}goto L5d5130;}}
}
B5d5183:L5d5183:{c.instructions+=3;NFSU2_TR(0x5d5183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5186:{NFSU2_TR(0x5d5186);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d5188:{NFSU2_TR(0x5d5188);
if(r1(R+518)){{goto L5d5191;}}
}
B5d518a:L5d518a:{c.instructions+=3;NFSU2_TR(0x5d518a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d518c:{NFSU2_TR(0x5d518c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d518f:{NFSU2_TR(0x5d518f);
{goto L5d51c7;}
}
B5d5191:L5d5191:{c.instructions+=15;NFSU2_TR(0x5d5191);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d5195:{NFSU2_TR(0x5d5195);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5198:{NFSU2_TR(0x5d5198);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d519b:{NFSU2_TR(0x5d519b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d519e:{NFSU2_TR(0x5d519e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d51a1:{NFSU2_TR(0x5d51a1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d51a3:{NFSU2_TR(0x5d51a3);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d51a6:{NFSU2_TR(0x5d51a6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d51a9:{NFSU2_TR(0x5d51a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d51ab:{NFSU2_TR(0x5d51ab);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d51af:{NFSU2_TR(0x5d51af);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d51b3:{NFSU2_TR(0x5d51b3);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d51b9:{NFSU2_TR(0x5d51b9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d51bd:{NFSU2_TR(0x5d51bd);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d51c3:{NFSU2_TR(0x5d51c3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d51c7:L5d51c7:{c.instructions+=11;NFSU2_TR(0x5d51c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d51cd:{NFSU2_TR(0x5d51cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d51cf:{NFSU2_TR(0x5d51cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d51d2:{NFSU2_TR(0x5d51d2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d51d4:{NFSU2_TR(0x5d51d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d51d7:{NFSU2_TR(0x5d51d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d51da:{NFSU2_TR(0x5d51da);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d51dd:{NFSU2_TR(0x5d51dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d51e0:{NFSU2_TR(0x5d51e0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d51e2:{NFSU2_TR(0x5d51e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d51e5:{NFSU2_TR(0x5d51e5);
if(r1(R+518)){{goto L5d51ee;}}
}
B5d51e7:L5d51e7:{c.instructions+=3;NFSU2_TR(0x5d51e7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d51e9:{NFSU2_TR(0x5d51e9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d51ec:{NFSU2_TR(0x5d51ec);
{goto L5d522b;}
}
B5d51ee:L5d51ee:{c.instructions+=17;NFSU2_TR(0x5d51ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d51f2:{NFSU2_TR(0x5d51f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d51f5:{NFSU2_TR(0x5d51f5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5d51f9:{NFSU2_TR(0x5d51f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5d51fc:{NFSU2_TR(0x5d51fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d51ff:{NFSU2_TR(0x5d51ff);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d5203:{NFSU2_TR(0x5d5203);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5205:{NFSU2_TR(0x5d5205);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5207:{NFSU2_TR(0x5d5207);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d520a:{NFSU2_TR(0x5d520a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d520d:{NFSU2_TR(0x5d520d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d520f:{NFSU2_TR(0x5d520f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5213:{NFSU2_TR(0x5d5213);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5217:{NFSU2_TR(0x5d5217);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d521d:{NFSU2_TR(0x5d521d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5221:{NFSU2_TR(0x5d5221);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5227:{NFSU2_TR(0x5d5227);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d522b:L5d522b:{c.instructions+=15;NFSU2_TR(0x5d522b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d522f:{NFSU2_TR(0x5d522f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d5231:{NFSU2_TR(0x5d5231);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5237:{NFSU2_TR(0x5d5237);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d523a:{NFSU2_TR(0x5d523a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d523b:{NFSU2_TR(0x5d523b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d523e:{NFSU2_TR(0x5d523e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5d5240:{NFSU2_TR(0x5d5240);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5243:{NFSU2_TR(0x5d5243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5246:{NFSU2_TR(0x5d5246);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5248:{NFSU2_TR(0x5d5248);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d524a:{NFSU2_TR(0x5d524a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d524d:{NFSU2_TR(0x5d524d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d5250:{NFSU2_TR(0x5d5250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5256:{NFSU2_TR(0x5d5256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d525bull));
TAIL_STATIC(0x5778d0u,577);
}
B5d525b:L5d525b:{c.instructions+=6;NFSU2_TR(0x5d525b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d525c:{NFSU2_TR(0x5d525c);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5261:{NFSU2_TR(0x5d5261);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5265:{NFSU2_TR(0x5d5265);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5266:{NFSU2_TR(0x5d5266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d526c:{NFSU2_TR(0x5d526c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5271ull));
TAIL_STATIC(0x570640u,570);
}
B5d5271:L5d5271:{c.instructions+=10;NFSU2_TR(0x5d5271);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d5275:{NFSU2_TR(0x5d5275);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5279:{NFSU2_TR(0x5d5279);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d527a:{NFSU2_TR(0x5d527a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d527e:{NFSU2_TR(0x5d527e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d527f:{NFSU2_TR(0x5d527f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5285:{NFSU2_TR(0x5d5285);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d5289:{NFSU2_TR(0x5d5289);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d528c:{NFSU2_TR(0x5d528c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d528d:{NFSU2_TR(0x5d528d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5292ull));
TAIL_STATIC(0x570640u,570);
}
B5d5292:L5d5292:{c.instructions+=5;NFSU2_TR(0x5d5292);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5296:{NFSU2_TR(0x5d5296);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d529a:{NFSU2_TR(0x5d529a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d529e:{NFSU2_TR(0x5d529e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d52a1:{NFSU2_TR(0x5d52a1);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d52a4:L5d52a4:{c.instructions+=8;NFSU2_TR(0x5d52a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d52a8:{NFSU2_TR(0x5d52a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d52a9:{NFSU2_TR(0x5d52a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d52aa:{NFSU2_TR(0x5d52aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d52b1:{NFSU2_TR(0x5d52b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d52b2:{NFSU2_TR(0x5d52b2);
__builtin_memmove((R+16),(R+20),4);
}
B5d52b4:{NFSU2_TR(0x5d52b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d52b5:{NFSU2_TR(0x5d52b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d52c0:L5d52c0:{c.instructions+=19;NFSU2_TR(0x5d52c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d52c1:{NFSU2_TR(0x5d52c1);
__builtin_memmove((R+20),(R+16),4);
}
B5d52c3:{NFSU2_TR(0x5d52c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d52c6:{NFSU2_TR(0x5d52c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5d52c9:{NFSU2_TR(0x5d52c9);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d52cc:{NFSU2_TR(0x5d52cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d52cf:{NFSU2_TR(0x5d52cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d52d1:{NFSU2_TR(0x5d52d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d52d2:{NFSU2_TR(0x5d52d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d52d3:{NFSU2_TR(0x5d52d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d52d6:{NFSU2_TR(0x5d52d6);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d52d9:{NFSU2_TR(0x5d52d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d52dd:{NFSU2_TR(0x5d52dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d52e0:{NFSU2_TR(0x5d52e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d52e1:{NFSU2_TR(0x5d52e1);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d52e4:{NFSU2_TR(0x5d52e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d52e7:{NFSU2_TR(0x5d52e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d52ed:{NFSU2_TR(0x5d52ed);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d52f3:{NFSU2_TR(0x5d52f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5305;}}
}
B5d52f5:L5d52f5:{c.instructions+=6;NFSU2_TR(0x5d52f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d52f8:{NFSU2_TR(0x5d52f8);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d52fb:{NFSU2_TR(0x5d52fb);
__builtin_memmove((R+8),(R+4),4);
}
B5d52fd:{NFSU2_TR(0x5d52fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5300:{NFSU2_TR(0x5d5300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5303:{NFSU2_TR(0x5d5303);
{goto L5d5316;}
}
B5d5305:L5d5305:{c.instructions+=6;NFSU2_TR(0x5d5305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5308:{NFSU2_TR(0x5d5308);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d530b:{NFSU2_TR(0x5d530b);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d530e:{NFSU2_TR(0x5d530e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5311:{NFSU2_TR(0x5d5311);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d5313:{NFSU2_TR(0x5d5313);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5316:L5d5316:{c.instructions+=4;NFSU2_TR(0x5d5316);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5d531a:{NFSU2_TR(0x5d531a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d531e:{NFSU2_TR(0x5d531e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d5320:{NFSU2_TR(0x5d5320);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d537c;}}
}
B5d5322:L5d5322:{c.instructions+=2;NFSU2_TR(0x5d5322);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5d5325:{NFSU2_TR(0x5d5325);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5d5328:L5d5328:{c.instructions+=13;NFSU2_TR(0x5d5328);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d532c:{NFSU2_TR(0x5d532c);
__builtin_memmove((R+4),(R+28),4);
}
B5d532e:{NFSU2_TR(0x5d532e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d5330:{NFSU2_TR(0x5d5330);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d5331:{NFSU2_TR(0x5d5331);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5335:{NFSU2_TR(0x5d5335);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5337:{NFSU2_TR(0x5d5337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5338:{NFSU2_TR(0x5d5338);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d533c:{NFSU2_TR(0x5d533c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5342:{NFSU2_TR(0x5d5342);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d5346:{NFSU2_TR(0x5d5346);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5349:{NFSU2_TR(0x5d5349);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d534a:{NFSU2_TR(0x5d534a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d534full));
TAIL_STATIC(0x570640u,570);
}
B5d534f:L5d534f:{c.instructions+=2;NFSU2_TR(0x5d534f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d5351:{NFSU2_TR(0x5d5351);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5357;}}
}
B5d5353:L5d5353:{c.instructions+=2;NFSU2_TR(0x5d5353);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d5355:{NFSU2_TR(0x5d5355);
{goto L5d5360;}
}
B5d5357:L5d5357:{c.instructions+=3;NFSU2_TR(0x5d5357);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d535b:{NFSU2_TR(0x5d535b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d535e:{NFSU2_TR(0x5d535e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5d5360:L5d5360:{c.instructions+=10;NFSU2_TR(0x5d5360);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5364:{NFSU2_TR(0x5d5364);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d5365:{NFSU2_TR(0x5d5365);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5368:{NFSU2_TR(0x5d5368);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B5d536b:{NFSU2_TR(0x5d536b);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d536e:{NFSU2_TR(0x5d536e);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d5371:{NFSU2_TR(0x5d5371);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5374:{NFSU2_TR(0x5d5374);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d5378:{NFSU2_TR(0x5d5378);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5d537a:{NFSU2_TR(0x5d537a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5328u);}goto L5d5328;}}
}
B5d537c:L5d537c:{c.instructions+=6;NFSU2_TR(0x5d537c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d537d:{NFSU2_TR(0x5d537d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d537e:{NFSU2_TR(0x5d537e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d537f:{NFSU2_TR(0x5d537f);
__builtin_memmove((R+16),(R+20),4);
}
B5d5381:{NFSU2_TR(0x5d5381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5382:{NFSU2_TR(0x5d5382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5390:L5d5390:{c.instructions+=7;NFSU2_TR(0x5d5390);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5393:{NFSU2_TR(0x5d5393);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5394:{NFSU2_TR(0x5d5394);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5395:{NFSU2_TR(0x5d5395);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d5397:{NFSU2_TR(0x5d5397);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5399:{NFSU2_TR(0x5d5399);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d539a:{NFSU2_TR(0x5d539a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d53b7;}}
}
B5d539c:L5d539c:{c.instructions+=3;NFSU2_TR(0x5d539c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d539f:{NFSU2_TR(0x5d539f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d53a3:{NFSU2_TR(0x5d53a3);
__builtin_memmove((R+4),(R+24),4);
}
B5d53a5:L5d53a5:{c.instructions+=3;NFSU2_TR(0x5d53a5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(r2(U+0)));
}
B5d53a8:{NFSU2_TR(0x5d53a8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d53aa:{NFSU2_TR(0x5d53aa);
if(r1(R+518)){{goto L5d53bf;}}
}
B5d53ac:L5d53ac:{c.instructions+=4;NFSU2_TR(0x5d53ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d53ad:{NFSU2_TR(0x5d53ad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110ull))));
}
B5d53b3:{NFSU2_TR(0x5d53b3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d53b5:{NFSU2_TR(0x5d53b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d53a5u);}goto L5d53a5;}}
}
B5d53b7:L5d53b7:{c.instructions+=5;NFSU2_TR(0x5d53b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d53b8:{NFSU2_TR(0x5d53b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d53b9:{NFSU2_TR(0x5d53b9);
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
B5d53bb:{NFSU2_TR(0x5d53bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d53bc:{NFSU2_TR(0x5d53bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d53bf:L5d53bf:{c.instructions+=6;NFSU2_TR(0x5d53bf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d53c5:{NFSU2_TR(0x5d53c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d53c6:{NFSU2_TR(0x5d53c6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d53c8:{NFSU2_TR(0x5d53c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d53c9:{NFSU2_TR(0x5d53c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d53ca:{NFSU2_TR(0x5d53ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d53d0:L5d53d0:{c.instructions+=12;NFSU2_TR(0x5d53d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d53d1:{NFSU2_TR(0x5d53d1);
__builtin_memmove((R+20),(R+16),4);
}
B5d53d3:{NFSU2_TR(0x5d53d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5d53d6:{NFSU2_TR(0x5d53d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xecull))));
}
B5d53dc:{NFSU2_TR(0x5d53dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d53dd:{NFSU2_TR(0x5d53dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d53e0:{NFSU2_TR(0x5d53e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d53e1:{NFSU2_TR(0x5d53e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d53e2:{NFSU2_TR(0x5d53e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d53e5:{NFSU2_TR(0x5d53e5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d53e8:{NFSU2_TR(0x5d53e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d53ec:{NFSU2_TR(0x5d53ec);
if(r1(R+518)){{goto L5d5542;}}
}
B5d53f2:L5d53f2:{c.instructions+=5;NFSU2_TR(0x5d53f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d53f5:{NFSU2_TR(0x5d53f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d53f8:{NFSU2_TR(0x5d53f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d53f9:{NFSU2_TR(0x5d53f9);
__builtin_memmove((R+4),(R+24),4);
}
B5d53fb:{NFSU2_TR(0x5d53fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5400ull));
TAIL_STATIC(0x5d4f60u,5d4);
}
B5d5400:L5d5400:{c.instructions+=2;NFSU2_TR(0x5d5400);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5402:{NFSU2_TR(0x5d5402);
if(r1(R+518)){{goto L5d5542;}}
}
B5d5408:L5d5408:{c.instructions+=3;NFSU2_TR(0x5d5408);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d540a:{NFSU2_TR(0x5d540a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d540c:{NFSU2_TR(0x5d540c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d5429;}}
}
B5d540e:L5d540e:{c.instructions+=1;NFSU2_TR(0x5d540e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5411:L5d5411:{c.instructions+=2;NFSU2_TR(0x5d5411);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d5413:{NFSU2_TR(0x5d5413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d541e;}}
}
B5d5415:L5d5415:{c.instructions+=2;NFSU2_TR(0x5d5415);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d5418:{NFSU2_TR(0x5d5418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5542;}}
}
B5d541e:L5d541e:{c.instructions+=5;NFSU2_TR(0x5d541e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5421:{NFSU2_TR(0x5d5421);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d5422:{NFSU2_TR(0x5d5422);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5d5425:{NFSU2_TR(0x5d5425);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d5427:{NFSU2_TR(0x5d5427);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5411u);}goto L5d5411;}}
}
B5d5429:L5d5429:{c.instructions+=4;NFSU2_TR(0x5d5429);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d5430:{NFSU2_TR(0x5d5430);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d5432:{NFSU2_TR(0x5d5432);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5434:{NFSU2_TR(0x5d5434);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d5470;}}
}
B5d5436:L5d5436:{c.instructions+=4;NFSU2_TR(0x5d5436);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d543a:{NFSU2_TR(0x5d543a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x49cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d5440:{NFSU2_TR(0x5d5440);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5446:{NFSU2_TR(0x5d5446);
{goto L5d5450;}
}
B5d5450:L5d5450:{c.instructions+=4;NFSU2_TR(0x5d5450);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5d5453:{NFSU2_TR(0x5d5453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d5456:{NFSU2_TR(0x5d5456);
u8 U[15];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B5d545b:{NFSU2_TR(0x5d545b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5542;}}
}
B5d5461:L5d5461:{c.instructions+=5;NFSU2_TR(0x5d5461);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d5468:{NFSU2_TR(0x5d5468);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d5469:{NFSU2_TR(0x5d5469);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5d546c:{NFSU2_TR(0x5d546c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d546e:{NFSU2_TR(0x5d546e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5450u);}goto L5d5450;}}
}
B5d5470:L5d5470:{c.instructions+=3;NFSU2_TR(0x5d5470);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5473:{NFSU2_TR(0x5d5473);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5475:{NFSU2_TR(0x5d5475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d54fb;}}
}
B5d547b:L5d547b:{c.instructions+=3;NFSU2_TR(0x5d547b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5481:{NFSU2_TR(0x5d5481);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5483:{NFSU2_TR(0x5d5483);
if(r1(R+518)){{goto L5d54fb;}}
}
B5d5485:L5d5485:{c.instructions+=3;NFSU2_TR(0x5d5485);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5488:{NFSU2_TR(0x5d5488);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d548b:{NFSU2_TR(0x5d548b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5542;}}
}
B5d5491:L5d5491:{c.instructions+=3;NFSU2_TR(0x5d5491);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d5494:{NFSU2_TR(0x5d5494);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5497:{NFSU2_TR(0x5d5497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d549e;}}
}
B5d5499:L5d5499:{c.instructions+=2;NFSU2_TR(0x5d5499);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d549b:{NFSU2_TR(0x5d549b);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d549e:L5d549e:{c.instructions+=5;NFSU2_TR(0x5d549e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d54a2:{NFSU2_TR(0x5d54a2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d54a8:{NFSU2_TR(0x5d54a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d54aa:{NFSU2_TR(0x5d54aa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d54ad:{NFSU2_TR(0x5d54ad);
if(r1(R+514)){{goto L5d54c5;}}
}
B5d54af:L5d54af:{c.instructions+=4;NFSU2_TR(0x5d54af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d54b3:{NFSU2_TR(0x5d54b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5d54b6:{NFSU2_TR(0x5d54b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d54b8:{NFSU2_TR(0x5d54b8);
if(r1(R+518)){{goto L5d5542;}}
}
B5d54be:L5d54be:{c.instructions+=2;NFSU2_TR(0x5d54be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d54c1:{NFSU2_TR(0x5d54c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d54c5:L5d54c5:{c.instructions+=5;NFSU2_TR(0x5d54c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d54c9:{NFSU2_TR(0x5d54c9);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d54cc:{NFSU2_TR(0x5d54cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d54ce:{NFSU2_TR(0x5d54ce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d54d1:{NFSU2_TR(0x5d54d1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d5542;}}
}
B5d54d3:L5d54d3:{c.instructions+=7;NFSU2_TR(0x5d54d3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d54d7:{NFSU2_TR(0x5d54d7);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d54da:{NFSU2_TR(0x5d54da);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5d54dc:{NFSU2_TR(0x5d54dc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d54e2:{NFSU2_TR(0x5d54e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d54e4:{NFSU2_TR(0x5d54e4);
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
B5d54e7:{NFSU2_TR(0x5d54e7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d5542;}}
}
B5d54e9:L5d54e9:{c.instructions+=9;NFSU2_TR(0x5d54e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d54ed:{NFSU2_TR(0x5d54ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d54f0:{NFSU2_TR(0x5d54f0);
w1(R+0,u8(0x1ull));
}
B5d54f2:{NFSU2_TR(0x5d54f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d54f3:{NFSU2_TR(0x5d54f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d54f4:{NFSU2_TR(0x5d54f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d54f5:{NFSU2_TR(0x5d54f5);
__builtin_memmove((R+16),(R+20),4);
}
B5d54f7:{NFSU2_TR(0x5d54f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d54f8:{NFSU2_TR(0x5d54f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d54fb:L5d54fb:{c.instructions+=14;NFSU2_TR(0x5d54fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d54fe:{NFSU2_TR(0x5d54fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5d5501:{NFSU2_TR(0x5d5501);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d5505:{NFSU2_TR(0x5d5505);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5508:{NFSU2_TR(0x5d5508);
u8 U[13];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d550c:{NFSU2_TR(0x5d550c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d550f:{NFSU2_TR(0x5d550f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5512:{NFSU2_TR(0x5d5512);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d5513:{NFSU2_TR(0x5d5513);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5515:{NFSU2_TR(0x5d5515);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5518:{NFSU2_TR(0x5d5518);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d551b:{NFSU2_TR(0x5d551b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d551d:{NFSU2_TR(0x5d551d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d551f:{NFSU2_TR(0x5d551f);
if(r1(R+518)){{goto L5d5532;}}
}
B5d5521:L5d5521:{c.instructions+=2;NFSU2_TR(0x5d5521);
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
B5d5523:{NFSU2_TR(0x5d5523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5532;}}
}
B5d5525:L5d5525:{c.instructions+=8;NFSU2_TR(0x5d5525);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5527:{NFSU2_TR(0x5d5527);
w1(R+0,u8(0x1ull));
}
B5d5529:{NFSU2_TR(0x5d5529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d552a:{NFSU2_TR(0x5d552a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d552b:{NFSU2_TR(0x5d552b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d552c:{NFSU2_TR(0x5d552c);
__builtin_memmove((R+16),(R+20),4);
}
B5d552e:{NFSU2_TR(0x5d552e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d552f:{NFSU2_TR(0x5d552f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5532:L5d5532:{c.instructions+=6;NFSU2_TR(0x5d5532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5535:{NFSU2_TR(0x5d5535);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5538:{NFSU2_TR(0x5d5538);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d5539:{NFSU2_TR(0x5d5539);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d553b:{NFSU2_TR(0x5d553b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d553e:{NFSU2_TR(0x5d553e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d554d;}}
}
B5d5540:L5d5540:{c.instructions+=1;NFSU2_TR(0x5d5540);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5542:L5d5542:{c.instructions+=7;NFSU2_TR(0x5d5542);
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
B5d5544:{NFSU2_TR(0x5d5544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5545:{NFSU2_TR(0x5d5545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5546:{NFSU2_TR(0x5d5546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5547:{NFSU2_TR(0x5d5547);
__builtin_memmove((R+16),(R+20),4);
}
B5d5549:{NFSU2_TR(0x5d5549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d554a:{NFSU2_TR(0x5d554a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d554d:L5d554d:{c.instructions+=4;NFSU2_TR(0x5d554d);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d5550:{NFSU2_TR(0x5d5550);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5552:{NFSU2_TR(0x5d5552);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5555:{NFSU2_TR(0x5d5555);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5542u);}goto L5d5542;}}
}
B5d5557:L5d5557:{c.instructions+=3;NFSU2_TR(0x5d5557);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d5559:{NFSU2_TR(0x5d5559);
w4(R+4,u32(0x1cull));
}
B5d555e:{NFSU2_TR(0x5d555e);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5565:L5d5565:{c.instructions+=1;NFSU2_TR(0x5d5565);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5d5567;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5565u);}goto L5d5565;}
}
B5d5567:L5d5567:{c.instructions+=3;NFSU2_TR(0x5d5567);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d5569:{NFSU2_TR(0x5d5569);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d556e:{NFSU2_TR(0x5d556e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5572:L5d5572:{c.instructions+=9;NFSU2_TR(0x5d5572);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5575:{NFSU2_TR(0x5d5575);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d5577:{NFSU2_TR(0x5d5577);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5579:{NFSU2_TR(0x5d5579);
__builtin_memmove((R+0),(R+518),1);
}
B5d557c:{NFSU2_TR(0x5d557c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d557f:{NFSU2_TR(0x5d557f);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d5583:{NFSU2_TR(0x5d5583);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5586:{NFSU2_TR(0x5d5586);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5588:{NFSU2_TR(0x5d5588);
if(r1(R+518)){{goto L5d55f7;}}
}
B5d558a:L5d558a:{c.instructions+=4;NFSU2_TR(0x5d558a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5d558e:{NFSU2_TR(0x5d558e);
w4(R+4,u32(0x1cull));
}
B5d5593:{NFSU2_TR(0x5d5593);
__builtin_memmove((R+24),(R+12),4);
}
B5d5595:{NFSU2_TR(0x5d5595);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5599:L5d5599:{c.instructions+=1;NFSU2_TR(0x5d5599);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d559b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5599u);}goto L5d5599;}
}
B5d559b:L5d559b:{c.instructions+=8;NFSU2_TR(0x5d559b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d559e:{NFSU2_TR(0x5d559e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d559f:{NFSU2_TR(0x5d559f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d55a0:{NFSU2_TR(0x5d55a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d55a1:{NFSU2_TR(0x5d55a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d55a5:{NFSU2_TR(0x5d55a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d55a6:{NFSU2_TR(0x5d55a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d55aa:{NFSU2_TR(0x5d55aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d55afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d53d0u);}goto L5d53d0;}
}
B5d55af:L5d55af:{c.instructions+=2;NFSU2_TR(0x5d55af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d55b1:{NFSU2_TR(0x5d55b1);
if(r1(R+518)){{goto L5d55f4;}}
}
B5d55b3:L5d55b3:{c.instructions+=3;NFSU2_TR(0x5d55b3);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d55b7:{NFSU2_TR(0x5d55b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d55b9:{NFSU2_TR(0x5d55b9);
if(r1(R+518)){{goto L5d55cd;}}
}
B5d55bb:L5d55bb:{c.instructions+=5;NFSU2_TR(0x5d55bb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d55bf:{NFSU2_TR(0x5d55bf);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d55c6:{NFSU2_TR(0x5d55c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d55c8:{NFSU2_TR(0x5d55c8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d55cb:{NFSU2_TR(0x5d55cb);
if(r1(R+514)){{goto L5d55f4;}}
}
B5d55cd:L5d55cd:{c.instructions+=5;NFSU2_TR(0x5d55cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d55d1:{NFSU2_TR(0x5d55d1);
w4(R+4,u32(0x1cull));
}
B5d55d6:{NFSU2_TR(0x5d55d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5d55da:{NFSU2_TR(0x5d55da);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5d55e1:{NFSU2_TR(0x5d55e1);
__builtin_memmove((R+0),(R+8),4);
}
B5d55e3:L5d55e3:{c.instructions+=1;NFSU2_TR(0x5d55e3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d55e5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d55e3u);}goto L5d55e3;}
}
B5d55e5:L5d55e5:{c.instructions+=3;NFSU2_TR(0x5d55e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d55ec:{NFSU2_TR(0x5d55ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d55ef:{NFSU2_TR(0x5d55ef);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d55f4:L5d55f4:{c.instructions+=1;NFSU2_TR(0x5d55f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d55f7:L5d55f7:{c.instructions+=5;NFSU2_TR(0x5d55f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d55fb:{NFSU2_TR(0x5d55fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d55fc:{NFSU2_TR(0x5d55fc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d55ff:{NFSU2_TR(0x5d55ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5603:{NFSU2_TR(0x5d5603);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5572u);}goto L5d5572;}}
}
B5d5609:L5d5609:{c.instructions+=3;NFSU2_TR(0x5d5609);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d560d:{NFSU2_TR(0x5d560d);
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
B5d560f:{NFSU2_TR(0x5d560f);
if(r1(R+518)){{goto L5d5621;}}
}
B5d5611:L5d5611:{c.instructions+=3;NFSU2_TR(0x5d5611);
w4(R+4,u32(0x1cull));
}
B5d5616:{NFSU2_TR(0x5d5616);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5d561d:{NFSU2_TR(0x5d561d);
__builtin_memmove((R+28),(R+12),4);
}
B5d561f:L5d561f:{c.instructions+=1;NFSU2_TR(0x5d561f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5d5621;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d561fu);}goto L5d561f;}
}
B5d5621:L5d5621:{c.instructions+=6;NFSU2_TR(0x5d5621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5622:{NFSU2_TR(0x5d5622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5623:{NFSU2_TR(0x5d5623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5624:{NFSU2_TR(0x5d5624);
__builtin_memmove((R+16),(R+20),4);
}
B5d5626:{NFSU2_TR(0x5d5626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5627:{NFSU2_TR(0x5d5627);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5630:L5d5630:{c.instructions+=9;NFSU2_TR(0x5d5630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d5633:{NFSU2_TR(0x5d5633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d5635:{NFSU2_TR(0x5d5635);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5636:{NFSU2_TR(0x5d5636);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d5638:{NFSU2_TR(0x5d5638);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d563a:{NFSU2_TR(0x5d563a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d563b:{NFSU2_TR(0x5d563b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d563c:{NFSU2_TR(0x5d563c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5640:{NFSU2_TR(0x5d5640);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d56b1;}}
}
B5d5642:L5d5642:{c.instructions+=3;NFSU2_TR(0x5d5642);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5646:{NFSU2_TR(0x5d5646);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5647:{NFSU2_TR(0x5d5647);
{goto L5d5650;}
}
B5d5650:L5d5650:{c.instructions+=7;NFSU2_TR(0x5d5650);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5653:{NFSU2_TR(0x5d5653);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5d5657:{NFSU2_TR(0x5d5657);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d565a:{NFSU2_TR(0x5d565a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d565d:{NFSU2_TR(0x5d565d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5660:{NFSU2_TR(0x5d5660);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5663:{NFSU2_TR(0x5d5663);
w4(R+12,u32(0x2ull));
}
B5d5668:L5d5668:{c.instructions+=4;NFSU2_TR(0x5d5668);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5d566a:{NFSU2_TR(0x5d566a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d566c:{NFSU2_TR(0x5d566c);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d566e:{NFSU2_TR(0x5d566e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5d568c;}}
}
B5d5670:L5d5670:{c.instructions+=1;NFSU2_TR(0x5d5670);
__builtin_memmove((R+0),(R+28),4);
}
B5d5672:L5d5672:{c.instructions+=9;NFSU2_TR(0x5d5672);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+20,u32(r2(U+0)));
}
B5d5675:{NFSU2_TR(0x5d5675);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5d567b:{NFSU2_TR(0x5d567b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))+u32(r4(U+4))));
}
B5d567e:{NFSU2_TR(0x5d567e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d567f:{NFSU2_TR(0x5d567f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5682:{NFSU2_TR(0x5d5682);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+20,u32(r1(U+0)));
}
B5d5685:{NFSU2_TR(0x5d5685);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5d5688:{NFSU2_TR(0x5d5688);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d568a:{NFSU2_TR(0x5d568a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5672u);}goto L5d5672;}}
}
B5d568c:L5d568c:{c.instructions+=4;NFSU2_TR(0x5d568c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d568d:{NFSU2_TR(0x5d568d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B5d5690:{NFSU2_TR(0x5d5690);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5d5691:{NFSU2_TR(0x5d5691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5668u);}goto L5d5668;}}
}
B5d5693:L5d5693:{c.instructions+=9;NFSU2_TR(0x5d5693);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5697:{NFSU2_TR(0x5d5697);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d569b:{NFSU2_TR(0x5d569b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d569d:{NFSU2_TR(0x5d569d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d569e:{NFSU2_TR(0x5d569e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xdcull))));
}
B5d56a4:{NFSU2_TR(0x5d56a4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d56a6:{NFSU2_TR(0x5d56a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d56aa:{NFSU2_TR(0x5d56aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d56ae:{NFSU2_TR(0x5d56ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5650u);}goto L5d5650;}}
}
B5d56b0:L5d56b0:{c.instructions+=1;NFSU2_TR(0x5d56b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d56b1:L5d56b1:{c.instructions+=4;NFSU2_TR(0x5d56b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d56b7:{NFSU2_TR(0x5d56b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d56b9:{NFSU2_TR(0x5d56b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x440ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d56bf:{NFSU2_TR(0x5d56bf);
}
B5d56c0:L5d56c0:{c.instructions+=4;NFSU2_TR(0x5d56c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d56c6:{NFSU2_TR(0x5d56c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B5d56cc:{NFSU2_TR(0x5d56cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d56ce:{NFSU2_TR(0x5d56ce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d56ec;}}
}
B5d56d0:L5d56d0:{c.instructions+=2;NFSU2_TR(0x5d56d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+8)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B5d56d2:{NFSU2_TR(0x5d56d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d56ec;}}
}
B5d56d4:L5d56d4:{c.instructions+=7;NFSU2_TR(0x5d56d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5d56d8:{NFSU2_TR(0x5d56d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d56de:{NFSU2_TR(0x5d56de);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5d56e0:{NFSU2_TR(0x5d56e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d56e6:{NFSU2_TR(0x5d56e6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5d56e8:{NFSU2_TR(0x5d56e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5d56ea:{NFSU2_TR(0x5d56ea);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d56d0u);}goto L5d56d0;}}
}
B5d56ec:L5d56ec:{c.instructions+=5;NFSU2_TR(0x5d56ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d56ee:{NFSU2_TR(0x5d56ee);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d56ef:{NFSU2_TR(0x5d56ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d56f2:{NFSU2_TR(0x5d56f2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d56f5:{NFSU2_TR(0x5d56f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d56c0u);}goto L5d56c0;}}
}
B5d56f7:L5d56f7:{c.instructions+=9;NFSU2_TR(0x5d56f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d56fd:{NFSU2_TR(0x5d56fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5703:{NFSU2_TR(0x5d5703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5704:{NFSU2_TR(0x5d5704);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d5706:{NFSU2_TR(0x5d5706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5707:{NFSU2_TR(0x5d5707);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x494ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d570d:{NFSU2_TR(0x5d570d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d570e:{NFSU2_TR(0x5d570e);
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
B5d5711:{NFSU2_TR(0x5d5711);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5720:L5d5720:{c.instructions+=7;NFSU2_TR(0x5d5720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5721:{NFSU2_TR(0x5d5721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5722:{NFSU2_TR(0x5d5722);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d5726:{NFSU2_TR(0x5d5726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d5728:{NFSU2_TR(0x5d5728);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d572a:{NFSU2_TR(0x5d572a);
__builtin_memmove((R+24),(R+4),4);
}
B5d572c:{NFSU2_TR(0x5d572c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5738;}}
}
B5d572e:L5d572e:{c.instructions+=2;NFSU2_TR(0x5d572e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d5736:{NFSU2_TR(0x5d5736);
{goto L5d5752;}
}
B5d5738:L5d5738:{c.instructions+=9;NFSU2_TR(0x5d5738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5d573b:{NFSU2_TR(0x5d573b);
__builtin_memmove((R+4),(R+0),4);
}
B5d573d:{NFSU2_TR(0x5d573d);
w4(R+0,u32(0x2aaaaaabull));
}
B5d5742:{NFSU2_TR(0x5d5742);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d5744:{NFSU2_TR(0x5d5744);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5d5747:{NFSU2_TR(0x5d5747);
__builtin_memmove((R+0),(R+8),4);
}
B5d5749:{NFSU2_TR(0x5d5749);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d574c:{NFSU2_TR(0x5d574c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d574e:{NFSU2_TR(0x5d574e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5752:L5d5752:{c.instructions+=4;NFSU2_TR(0x5d5752);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5756:{NFSU2_TR(0x5d5756);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5757:{NFSU2_TR(0x5d5757);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d575b:{NFSU2_TR(0x5d575b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5760ull));
TAIL_STATIC(0x571710u,571);
}
B5d5760:L5d5760:{c.instructions+=3;NFSU2_TR(0x5d5760);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5764:{NFSU2_TR(0x5d5764);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5d5768:{NFSU2_TR(0x5d5768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5775;}}
}
B5d576a:L5d576a:{c.instructions+=4;NFSU2_TR(0x5d576a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5d5770:{NFSU2_TR(0x5d5770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5771:{NFSU2_TR(0x5d5771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5772:{NFSU2_TR(0x5d5772);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5775:L5d5775:{c.instructions+=3;NFSU2_TR(0x5d5775);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5d5778:{NFSU2_TR(0x5d5778);
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
B5d577a:{NFSU2_TR(0x5d577a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5785;}}
}
B5d577c:L5d577c:{c.instructions+=5;NFSU2_TR(0x5d577c);
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
B5d577e:{NFSU2_TR(0x5d577e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5d5780:{NFSU2_TR(0x5d5780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5781:{NFSU2_TR(0x5d5781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5782:{NFSU2_TR(0x5d5782);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5785:L5d5785:{c.instructions+=7;NFSU2_TR(0x5d5785);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d5788:{NFSU2_TR(0x5d5788);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d578b:{NFSU2_TR(0x5d578b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d578e:{NFSU2_TR(0x5d578e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5d5790:{NFSU2_TR(0x5d5790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5791:{NFSU2_TR(0x5d5791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5792:{NFSU2_TR(0x5d5792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d57a0:L5d57a0:{c.instructions+=15;NFSU2_TR(0x5d57a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d57a3:{NFSU2_TR(0x5d57a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d57a7:{NFSU2_TR(0x5d57a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d57ab:{NFSU2_TR(0x5d57ab);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d57b1:{NFSU2_TR(0x5d57b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d57b2:{NFSU2_TR(0x5d57b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d57b3:{NFSU2_TR(0x5d57b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d57b7:{NFSU2_TR(0x5d57b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d57b9:{NFSU2_TR(0x5d57b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d57bb:{NFSU2_TR(0x5d57bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d57bc:{NFSU2_TR(0x5d57bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d57bd:{NFSU2_TR(0x5d57bd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d57c0:{NFSU2_TR(0x5d57c0);
__builtin_memmove((R+12),(R+4),4);
}
B5d57c2:{NFSU2_TR(0x5d57c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d57c6:{NFSU2_TR(0x5d57c6);
if(r1(R+514)){{goto L5d57d0;}}
}
B5d57c8:L5d57c8:{c.instructions+=1;NFSU2_TR(0x5d57c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4cbebc20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d57d0:L5d57d0:{c.instructions+=4;NFSU2_TR(0x5d57d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d57d4:{NFSU2_TR(0x5d57d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d57d6:{NFSU2_TR(0x5d57d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d57da:{NFSU2_TR(0x5d57da);
if(r1(R+518)){{goto L5d58fa;}}
}
B5d57e0:L5d57e0:{c.instructions+=2;NFSU2_TR(0x5d57e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d57e3:{NFSU2_TR(0x5d57e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d58ee;}}
}
B5d57e9:L5d57e9:{c.instructions+=7;NFSU2_TR(0x5d57e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d57ed:{NFSU2_TR(0x5d57ed);
w4(R+4,u32(0xffffffe4ull));
}
B5d57f2:{NFSU2_TR(0x5d57f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d57f5:{NFSU2_TR(0x5d57f5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B5d57f7:{NFSU2_TR(0x5d57f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d57fb:{NFSU2_TR(0x5d57fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d57ff:{NFSU2_TR(0x5d57ff);
}
B5d5800:L5d5800:{c.instructions+=4;NFSU2_TR(0x5d5800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d5802:{NFSU2_TR(0x5d5802);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d5804:{NFSU2_TR(0x5d5804);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5806:{NFSU2_TR(0x5d5806);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d58d3;}}
}
B5d580c:L5d580c:{c.instructions+=3;NFSU2_TR(0x5d580c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5d580e:{NFSU2_TR(0x5d580e);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5d5812:{NFSU2_TR(0x5d5812);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5816:L5d5816:{c.instructions+=7;NFSU2_TR(0x5d5816);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d581a:{NFSU2_TR(0x5d581a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d581c:{NFSU2_TR(0x5d581c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B5d581e:{NFSU2_TR(0x5d581e);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5d5825:{NFSU2_TR(0x5d5825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d582b:{NFSU2_TR(0x5d582b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d582d:{NFSU2_TR(0x5d582d);
if(r1(R+518)){{goto L5d58bc;}}
}
B5d5833:L5d5833:{c.instructions+=8;NFSU2_TR(0x5d5833);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5837:{NFSU2_TR(0x5d5837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5838:{NFSU2_TR(0x5d5838);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5839:{NFSU2_TR(0x5d5839);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d583f:{NFSU2_TR(0x5d583f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5840:{NFSU2_TR(0x5d5840);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d5846:{NFSU2_TR(0x5d5846);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5847:{NFSU2_TR(0x5d5847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d584cull));
TAIL_STATIC(0x43d410u,43d);
}
B5d584c:L5d584c:{c.instructions+=3;NFSU2_TR(0x5d584c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d584f:{NFSU2_TR(0x5d584f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5851:{NFSU2_TR(0x5d5851);
if(r1(R+518)){{goto L5d58bc;}}
}
B5d5853:L5d5853:{c.instructions+=4;NFSU2_TR(0x5d5853);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d5857:{NFSU2_TR(0x5d5857);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d585b:{NFSU2_TR(0x5d585b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d585d:{NFSU2_TR(0x5d585d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d58bc;}}
}
B5d585f:L5d585f:{c.instructions+=5;NFSU2_TR(0x5d585f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d5862:{NFSU2_TR(0x5d5862);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d5865:{NFSU2_TR(0x5d5865);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d5867:{NFSU2_TR(0x5d5867);
__builtin_memmove((R+24),(R+4),4);
}
B5d5869:{NFSU2_TR(0x5d5869);
__builtin_memmove((R+16),(R+16),4);
}
B5d5870:L5d5870:{c.instructions+=2;NFSU2_TR(0x5d5870);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d5872:{NFSU2_TR(0x5d5872);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5878;}}
}
B5d5874:L5d5874:{c.instructions+=2;NFSU2_TR(0x5d5874);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d5876:{NFSU2_TR(0x5d5876);
{goto L5d587d;}
}
B5d5878:L5d5878:{c.instructions+=2;NFSU2_TR(0x5d5878);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d587b:{NFSU2_TR(0x5d587b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5d587d:L5d587d:{c.instructions+=15;NFSU2_TR(0x5d587d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d587f:{NFSU2_TR(0x5d587f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5883:{NFSU2_TR(0x5d5883);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5885:{NFSU2_TR(0x5d5885);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5887:{NFSU2_TR(0x5d5887);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d588a:{NFSU2_TR(0x5d588a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d588d:{NFSU2_TR(0x5d588d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d588f:{NFSU2_TR(0x5d588f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d5891:{NFSU2_TR(0x5d5891);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d5893:{NFSU2_TR(0x5d5893);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d5895:{NFSU2_TR(0x5d5895);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d5897:{NFSU2_TR(0x5d5897);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d5899:{NFSU2_TR(0x5d5899);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d589b:{NFSU2_TR(0x5d589b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d589d:{NFSU2_TR(0x5d589d);
if(r1(R+518)){{goto L5d58aa;}}
}
B5d589f:L5d589f:{c.instructions+=4;NFSU2_TR(0x5d589f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d58a3:{NFSU2_TR(0x5d58a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d58a5:{NFSU2_TR(0x5d58a5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d58a8:{NFSU2_TR(0x5d58a8);
if(r1(R+514)){{goto L5d58b4;}}
}
B5d58aa:L5d58aa:{c.instructions+=3;NFSU2_TR(0x5d58aa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d58ae:{NFSU2_TR(0x5d58ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d58b2:{NFSU2_TR(0x5d58b2);
{goto L5d58b6;}
}
B5d58b4:L5d58b4:{c.instructions+=1;NFSU2_TR(0x5d58b4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d58b6:L5d58b6:{c.instructions+=3;NFSU2_TR(0x5d58b6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B5d58b9:{NFSU2_TR(0x5d58b9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5d58ba:{NFSU2_TR(0x5d58ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5870u);}goto L5d5870;}}
}
B5d58bc:L5d58bc:{c.instructions+=5;NFSU2_TR(0x5d58bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d58c0:{NFSU2_TR(0x5d58c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d58c2:{NFSU2_TR(0x5d58c2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d58c3:{NFSU2_TR(0x5d58c3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d58c5:{NFSU2_TR(0x5d58c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5816u);}goto L5d5816;}}
}
B5d58cb:L5d58cb:{c.instructions+=2;NFSU2_TR(0x5d58cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d58cf:{NFSU2_TR(0x5d58cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d58d3:L5d58d3:{c.instructions+=8;NFSU2_TR(0x5d58d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d58d7:{NFSU2_TR(0x5d58d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d58da:{NFSU2_TR(0x5d58da);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d58db:{NFSU2_TR(0x5d58db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B5d58de:{NFSU2_TR(0x5d58de);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d58e0:{NFSU2_TR(0x5d58e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d58e4:{NFSU2_TR(0x5d58e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d58e8:{NFSU2_TR(0x5d58e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5800u);}goto L5d5800;}}
}
B5d58ee:L5d58ee:{c.instructions+=7;NFSU2_TR(0x5d58ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d58ef:{NFSU2_TR(0x5d58ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d58f0:{NFSU2_TR(0x5d58f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d58f1:{NFSU2_TR(0x5d58f1);
__builtin_memmove((R+0),(R+8),4);
}
B5d58f3:{NFSU2_TR(0x5d58f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d58f4:{NFSU2_TR(0x5d58f4);
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
B5d58f7:{NFSU2_TR(0x5d58f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d58fa:L5d58fa:{c.instructions+=2;NFSU2_TR(0x5d58fa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+8)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d58fc:{NFSU2_TR(0x5d58fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d58eeu);}goto L5d58ee;}}
}
B5d58fe:L5d58fe:{c.instructions+=2;NFSU2_TR(0x5d58fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d5902:{NFSU2_TR(0x5d5902);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d5904:L5d5904:{c.instructions+=10;NFSU2_TR(0x5d5904);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d5907:{NFSU2_TR(0x5d5907);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d590b:{NFSU2_TR(0x5d590b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d590c:{NFSU2_TR(0x5d590c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5d590e:{NFSU2_TR(0x5d590e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d590f:{NFSU2_TR(0x5d590f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d5915:{NFSU2_TR(0x5d5915);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5916:{NFSU2_TR(0x5d5916);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d591c:{NFSU2_TR(0x5d591c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d591d:{NFSU2_TR(0x5d591d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5922ull));
TAIL_STATIC(0x43d410u,43d);
}
B5d5922:L5d5922:{c.instructions+=3;NFSU2_TR(0x5d5922);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d5925:{NFSU2_TR(0x5d5925);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5927:{NFSU2_TR(0x5d5927);
if(r1(R+518)){{goto L5d598c;}}
}
B5d5929:L5d5929:{c.instructions+=4;NFSU2_TR(0x5d5929);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d592d:{NFSU2_TR(0x5d592d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d5931:{NFSU2_TR(0x5d5931);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d5933:{NFSU2_TR(0x5d5933);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d598c;}}
}
B5d5935:L5d5935:{c.instructions+=5;NFSU2_TR(0x5d5935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d5938:{NFSU2_TR(0x5d5938);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d593b:{NFSU2_TR(0x5d593b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d593d:{NFSU2_TR(0x5d593d);
__builtin_memmove((R+24),(R+4),4);
}
B5d593f:{NFSU2_TR(0x5d593f);
}
B5d5940:L5d5940:{c.instructions+=2;NFSU2_TR(0x5d5940);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d5942:{NFSU2_TR(0x5d5942);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5948;}}
}
B5d5944:L5d5944:{c.instructions+=2;NFSU2_TR(0x5d5944);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d5946:{NFSU2_TR(0x5d5946);
{goto L5d594d;}
}
B5d5948:L5d5948:{c.instructions+=2;NFSU2_TR(0x5d5948);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d594b:{NFSU2_TR(0x5d594b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5d594d:L5d594d:{c.instructions+=15;NFSU2_TR(0x5d594d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d594f:{NFSU2_TR(0x5d594f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5953:{NFSU2_TR(0x5d5953);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5955:{NFSU2_TR(0x5d5955);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5957:{NFSU2_TR(0x5d5957);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d595a:{NFSU2_TR(0x5d595a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d595d:{NFSU2_TR(0x5d595d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d595f:{NFSU2_TR(0x5d595f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d5961:{NFSU2_TR(0x5d5961);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d5963:{NFSU2_TR(0x5d5963);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d5965:{NFSU2_TR(0x5d5965);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d5967:{NFSU2_TR(0x5d5967);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d5969:{NFSU2_TR(0x5d5969);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d596b:{NFSU2_TR(0x5d596b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d596d:{NFSU2_TR(0x5d596d);
if(r1(R+518)){{goto L5d597a;}}
}
B5d596f:L5d596f:{c.instructions+=4;NFSU2_TR(0x5d596f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5973:{NFSU2_TR(0x5d5973);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5975:{NFSU2_TR(0x5d5975);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d5978:{NFSU2_TR(0x5d5978);
if(r1(R+514)){{goto L5d5984;}}
}
B5d597a:L5d597a:{c.instructions+=3;NFSU2_TR(0x5d597a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d597e:{NFSU2_TR(0x5d597e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5982:{NFSU2_TR(0x5d5982);
{goto L5d5986;}
}
B5d5984:L5d5984:{c.instructions+=1;NFSU2_TR(0x5d5984);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5986:L5d5986:{c.instructions+=3;NFSU2_TR(0x5d5986);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B5d5989:{NFSU2_TR(0x5d5989);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5d598a:{NFSU2_TR(0x5d598a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5940u);}goto L5d5940;}}
}
B5d598c:L5d598c:{c.instructions+=7;NFSU2_TR(0x5d598c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5990:{NFSU2_TR(0x5d5990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d5992:{NFSU2_TR(0x5d5992);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d5993:{NFSU2_TR(0x5d5993);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xdcull))));
}
B5d5999:{NFSU2_TR(0x5d5999);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d599b:{NFSU2_TR(0x5d599b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d599f:{NFSU2_TR(0x5d599f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5904u);}goto L5d5904;}}
}
B5d59a5:L5d59a5:{c.instructions+=7;NFSU2_TR(0x5d59a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d59a9:{NFSU2_TR(0x5d59a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d59aa:{NFSU2_TR(0x5d59aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d59ab:{NFSU2_TR(0x5d59ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d59ac:{NFSU2_TR(0x5d59ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d59ad:{NFSU2_TR(0x5d59ad);
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
B5d59b0:{NFSU2_TR(0x5d59b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d59c0:L5d59c0:{c.instructions+=5;NFSU2_TR(0x5d59c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d59c6:{NFSU2_TR(0x5d59c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d59cc:{NFSU2_TR(0x5d59cc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5d59ce:{NFSU2_TR(0x5d59ce);
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
B5d59d0:{NFSU2_TR(0x5d59d0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d59fe;}}
}
B5d59d2:L5d59d2:{c.instructions+=4;NFSU2_TR(0x5d59d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d59d3:{NFSU2_TR(0x5d59d3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d59d5:{NFSU2_TR(0x5d59d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d59d6:{NFSU2_TR(0x5d59d6);
{goto L5d59e0;}
}
B5d59e0:L5d59e0:{c.instructions+=8;NFSU2_TR(0x5d59e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5d59e4:{NFSU2_TR(0x5d59e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d59e8:{NFSU2_TR(0x5d59e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x43cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d59ee:{NFSU2_TR(0x5d59ee);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5d59f0:{NFSU2_TR(0x5d59f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d59f6:{NFSU2_TR(0x5d59f6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B5d59f8:{NFSU2_TR(0x5d59f8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5d59fa:{NFSU2_TR(0x5d59fa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d59e0u);}goto L5d59e0;}}
}
B5d59fc:L5d59fc:{c.instructions+=2;NFSU2_TR(0x5d59fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d59fd:{NFSU2_TR(0x5d59fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d59fe:L5d59fe:{c.instructions+=1;NFSU2_TR(0x5d59fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5a00:L5d5a00:{c.instructions+=26;NFSU2_TR(0x5d5a00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d5a03:{NFSU2_TR(0x5d5a03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5a07:{NFSU2_TR(0x5d5a07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a08:{NFSU2_TR(0x5d5a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d5a0b:{NFSU2_TR(0x5d5a0b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a0c:{NFSU2_TR(0x5d5a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d5a0f:{NFSU2_TR(0x5d5a0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a10:{NFSU2_TR(0x5d5a10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a11:{NFSU2_TR(0x5d5a11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5d5a13:{NFSU2_TR(0x5d5a13);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B5d5a17:{NFSU2_TR(0x5d5a17);
__builtin_memmove((R+8),(R+28),4);
}
B5d5a19:{NFSU2_TR(0x5d5a19);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xdcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5d5a1f:{NFSU2_TR(0x5d5a1f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B5d5a21:{NFSU2_TR(0x5d5a21);
w4(R+0,u32(0x2aaaaaabull));
}
B5d5a26:{NFSU2_TR(0x5d5a26);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d5a28:{NFSU2_TR(0x5d5a28);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5d5a2b:{NFSU2_TR(0x5d5a2b);
__builtin_memmove((R+4),(R+8),4);
}
B5d5a2d:{NFSU2_TR(0x5d5a2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d5a30:{NFSU2_TR(0x5d5a30);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5d5a32:{NFSU2_TR(0x5d5a32);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5d5a34:{NFSU2_TR(0x5d5a34);
__builtin_memmove((R+12),(R+8),4);
}
B5d5a36:{NFSU2_TR(0x5d5a36);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d5a3a:{NFSU2_TR(0x5d5a3a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d5a3c:{NFSU2_TR(0x5d5a3c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d5a3e:{NFSU2_TR(0x5d5a3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4b18967full));
s4(u32(r4(U+0)),r4(U+4));
}
B5d5a46:{NFSU2_TR(0x5d5a46);
if(r1(R+518)){{goto L5d5a7f;}}
}
B5d5a48:L5d5a48:{c.instructions+=8;NFSU2_TR(0x5d5a48);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5a4c:{NFSU2_TR(0x5d5a4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d5a50:{NFSU2_TR(0x5d5a50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a51:{NFSU2_TR(0x5d5a51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a52:{NFSU2_TR(0x5d5a52);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d5a55:{NFSU2_TR(0x5d5a55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a56:{NFSU2_TR(0x5d5a56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a57:{NFSU2_TR(0x5d5a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5a5cull));
TAIL_STATIC(0x5d4e30u,5d4);
}
B5d5a5c:L5d5a5c:{c.instructions+=5;NFSU2_TR(0x5d5a5c);
{u32 ea_=u32(u32(7888380u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5a62:{NFSU2_TR(0x5d5a62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d5a65:{NFSU2_TR(0x5d5a65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5a67:{NFSU2_TR(0x5d5a67);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d5a6a:{NFSU2_TR(0x5d5a6a);
if(r1(R+514)){{goto L5d5a7d;}}
}
B5d5a6c:L5d5a6c:{c.instructions+=5;NFSU2_TR(0x5d5a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5a70:{NFSU2_TR(0x5d5a70);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5a74:{NFSU2_TR(0x5d5a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d5a77:{NFSU2_TR(0x5d5a77);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B5d5a7b:{NFSU2_TR(0x5d5a7b);
{goto L5d5a7f;}
}
B5d5a7d:L5d5a7d:{c.instructions+=1;NFSU2_TR(0x5d5a7d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5a7f:L5d5a7f:{c.instructions+=4;NFSU2_TR(0x5d5a7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d5a83:{NFSU2_TR(0x5d5a83);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5d5a84:{NFSU2_TR(0x5d5a84);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d5a86:{NFSU2_TR(0x5d5a86);
if(r1(R+518)){{goto L5d5ada;}}
}
B5d5a88:L5d5a88:{c.instructions+=8;NFSU2_TR(0x5d5a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5a8c:{NFSU2_TR(0x5d5a8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d5a90:{NFSU2_TR(0x5d5a90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a91:{NFSU2_TR(0x5d5a91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a92:{NFSU2_TR(0x5d5a92);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5a95:{NFSU2_TR(0x5d5a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a96:{NFSU2_TR(0x5d5a96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5a97:{NFSU2_TR(0x5d5a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5a9cull));
TAIL_STATIC(0x5d4e30u,5d4);
}
B5d5a9c:L5d5a9c:{c.instructions+=5;NFSU2_TR(0x5d5a9c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5aa0:{NFSU2_TR(0x5d5aa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d5aa3:{NFSU2_TR(0x5d5aa3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5aa5:{NFSU2_TR(0x5d5aa5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d5aa8:{NFSU2_TR(0x5d5aa8);
if(r1(R+514)){{goto L5d5ac4;}}
}
B5d5aaa:L5d5aaa:{c.instructions+=11;NFSU2_TR(0x5d5aaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5aae:{NFSU2_TR(0x5d5aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5ab2:{NFSU2_TR(0x5d5ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5d5ab5:{NFSU2_TR(0x5d5ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d5ab8:{NFSU2_TR(0x5d5ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5ab9:{NFSU2_TR(0x5d5ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5aba:{NFSU2_TR(0x5d5aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5abb:{NFSU2_TR(0x5d5abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d5abd:{NFSU2_TR(0x5d5abd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5abe:{NFSU2_TR(0x5d5abe);
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
B5d5ac1:{NFSU2_TR(0x5d5ac1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5ac4:L5d5ac4:{c.instructions+=10;NFSU2_TR(0x5d5ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5ac8:{NFSU2_TR(0x5d5ac8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5aca:{NFSU2_TR(0x5d5aca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5ace:{NFSU2_TR(0x5d5ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5acf:{NFSU2_TR(0x5d5acf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5ad0:{NFSU2_TR(0x5d5ad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5d5ad2:{NFSU2_TR(0x5d5ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5ad3:{NFSU2_TR(0x5d5ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5ad4:{NFSU2_TR(0x5d5ad4);
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
B5d5ad7:{NFSU2_TR(0x5d5ad7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5ada:L5d5ada:{c.instructions+=9;NFSU2_TR(0x5d5ada);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5ade:{NFSU2_TR(0x5d5ade);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5ae2:{NFSU2_TR(0x5d5ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5ae3:{NFSU2_TR(0x5d5ae3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5ae4:{NFSU2_TR(0x5d5ae4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d5ae6:{NFSU2_TR(0x5d5ae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5ae7:{NFSU2_TR(0x5d5ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5ae8:{NFSU2_TR(0x5d5ae8);
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
B5d5aeb:{NFSU2_TR(0x5d5aeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5af0:L5d5af0:{c.instructions+=13;NFSU2_TR(0x5d5af0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5af1:{NFSU2_TR(0x5d5af1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5af5:{NFSU2_TR(0x5d5af5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5af6:{NFSU2_TR(0x5d5af6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5af7:{NFSU2_TR(0x5d5af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d5afa:{NFSU2_TR(0x5d5afa);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d5afd:{NFSU2_TR(0x5d5afd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5afe:{NFSU2_TR(0x5d5afe);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5d5b02:{NFSU2_TR(0x5d5b02);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d5b04:{NFSU2_TR(0x5d5b04);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d5b06:{NFSU2_TR(0x5d5b06);
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
B5d5b08:{NFSU2_TR(0x5d5b08);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x4b18967full));
s4(u32(r4(U+0)),r4(U+4));
}
B5d5b10:{NFSU2_TR(0x5d5b10);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d5b6c;}}
}
B5d5b12:L5d5b12:{c.instructions+=3;NFSU2_TR(0x5d5b12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5b13:{NFSU2_TR(0x5d5b13);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5d5b17:{NFSU2_TR(0x5d5b17);
{goto L5d5b20;}
}
B5d5b20:L5d5b20:{c.instructions+=11;NFSU2_TR(0x5d5b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d5b23:{NFSU2_TR(0x5d5b23);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5d5b2a:{NFSU2_TR(0x5d5b2a);
{u32 ea_=u32(r4(R+8)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5b30:{NFSU2_TR(0x5d5b30);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d5b34:{NFSU2_TR(0x5d5b34);
{u32 ea_=u32(r4(R+8)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5b3a:{NFSU2_TR(0x5d5b3a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5b3e:{NFSU2_TR(0x5d5b3e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d5b42:{NFSU2_TR(0x5d5b42);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d5b44:{NFSU2_TR(0x5d5b44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5b46:{NFSU2_TR(0x5d5b46);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5b49:{NFSU2_TR(0x5d5b49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5b51;}}
}
B5d5b4b:L5d5b4b:{c.instructions+=2;NFSU2_TR(0x5d5b4b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5b4d:{NFSU2_TR(0x5d5b4d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5b51:L5d5b51:{c.instructions+=4;NFSU2_TR(0x5d5b51);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5b55:{NFSU2_TR(0x5d5b55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5b57:{NFSU2_TR(0x5d5b57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d5b5a:{NFSU2_TR(0x5d5b5a);
if(r1(R+514)){{goto L5d5b64;}}
}
B5d5b5c:L5d5b5c:{c.instructions+=3;NFSU2_TR(0x5d5b5c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5b60:{NFSU2_TR(0x5d5b60);
__builtin_memmove((R+20),(R+8),4);
}
B5d5b62:{NFSU2_TR(0x5d5b62);
{goto L5d5b66;}
}
B5d5b64:L5d5b64:{c.instructions+=1;NFSU2_TR(0x5d5b64);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5b66:L5d5b66:{c.instructions+=3;NFSU2_TR(0x5d5b66);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d5b67:{NFSU2_TR(0x5d5b67);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5d5b69:{NFSU2_TR(0x5d5b69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5b20u);}goto L5d5b20;}}
}
B5d5b6b:L5d5b6b:{c.instructions+=1;NFSU2_TR(0x5d5b6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5b6c:L5d5b6c:{c.instructions+=6;NFSU2_TR(0x5d5b6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5b6d:{NFSU2_TR(0x5d5b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5b6e:{NFSU2_TR(0x5d5b6e);
__builtin_memmove((R+0),(R+20),4);
}
B5d5b70:{NFSU2_TR(0x5d5b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5b71:{NFSU2_TR(0x5d5b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5b72:{NFSU2_TR(0x5d5b72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5b80:L5d5b80:{c.instructions+=9;NFSU2_TR(0x5d5b80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5b81:{NFSU2_TR(0x5d5b81);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5b85:{NFSU2_TR(0x5d5b85);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d5b89:{NFSU2_TR(0x5d5b89);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d5b8d:{NFSU2_TR(0x5d5b8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5b8e:{NFSU2_TR(0x5d5b8e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d5b90:{NFSU2_TR(0x5d5b90);
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
B5d5b92:{NFSU2_TR(0x5d5b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5b96:{NFSU2_TR(0x5d5b96);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5bf9;}}
}
B5d5b98:L5d5b98:{c.instructions+=9;NFSU2_TR(0x5d5b98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5b99:{NFSU2_TR(0x5d5b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d5b9d:{NFSU2_TR(0x5d5b9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5b9e:{NFSU2_TR(0x5d5b9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5b9f:{NFSU2_TR(0x5d5b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d5ba2:{NFSU2_TR(0x5d5ba2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5d5ba5:{NFSU2_TR(0x5d5ba5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5d5ba7:{NFSU2_TR(0x5d5ba7);
__builtin_memmove((R+20),(R+8),4);
}
B5d5ba9:{NFSU2_TR(0x5d5ba9);
__builtin_memmove((R+16),(R+16),4);
}
B5d5bb0:L5d5bb0:{c.instructions+=2;NFSU2_TR(0x5d5bb0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d5bb2:{NFSU2_TR(0x5d5bb2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d5bb8;}}
}
B5d5bb4:L5d5bb4:{c.instructions+=2;NFSU2_TR(0x5d5bb4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d5bb6:{NFSU2_TR(0x5d5bb6);
{goto L5d5bbd;}
}
B5d5bb8:L5d5bb8:{c.instructions+=2;NFSU2_TR(0x5d5bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5bbb:{NFSU2_TR(0x5d5bbb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5d5bbd:L5d5bbd:{c.instructions+=14;NFSU2_TR(0x5d5bbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d5bbf:{NFSU2_TR(0x5d5bbf);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5bc1:{NFSU2_TR(0x5d5bc1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5bc3:{NFSU2_TR(0x5d5bc3);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5bc6:{NFSU2_TR(0x5d5bc6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5bc9:{NFSU2_TR(0x5d5bc9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d5bcb:{NFSU2_TR(0x5d5bcb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d5bcd:{NFSU2_TR(0x5d5bcd);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d5bcf:{NFSU2_TR(0x5d5bcf);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d5bd1:{NFSU2_TR(0x5d5bd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d5bd3:{NFSU2_TR(0x5d5bd3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d5bd5:{NFSU2_TR(0x5d5bd5);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d5bd7:{NFSU2_TR(0x5d5bd7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5bd9:{NFSU2_TR(0x5d5bd9);
if(r1(R+518)){{goto L5d5be6;}}
}
B5d5bdb:L5d5bdb:{c.instructions+=4;NFSU2_TR(0x5d5bdb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5bdf:{NFSU2_TR(0x5d5bdf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5be1:{NFSU2_TR(0x5d5be1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d5be4:{NFSU2_TR(0x5d5be4);
if(r1(R+514)){{goto L5d5bee;}}
}
B5d5be6:L5d5be6:{c.instructions+=3;NFSU2_TR(0x5d5be6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5bea:{NFSU2_TR(0x5d5bea);
__builtin_memmove((R+28),(R+8),4);
}
B5d5bec:{NFSU2_TR(0x5d5bec);
{goto L5d5bf0;}
}
B5d5bee:L5d5bee:{c.instructions+=1;NFSU2_TR(0x5d5bee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d5bf0:L5d5bf0:{c.instructions+=3;NFSU2_TR(0x5d5bf0);
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B5d5bf3:{NFSU2_TR(0x5d5bf3);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d5bf4:{NFSU2_TR(0x5d5bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5bb0u);}goto L5d5bb0;}}
}
B5d5bf6:L5d5bf6:{c.instructions+=3;NFSU2_TR(0x5d5bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5bf7:{NFSU2_TR(0x5d5bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5bf8:{NFSU2_TR(0x5d5bf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5bf9:L5d5bf9:{c.instructions+=4;NFSU2_TR(0x5d5bf9);
__builtin_memmove((R+0),(R+28),4);
}
B5d5bfb:{NFSU2_TR(0x5d5bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5bfc:{NFSU2_TR(0x5d5bfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5bfd:{NFSU2_TR(0x5d5bfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5c00:L5d5c00:{c.instructions+=16;NFSU2_TR(0x5d5c00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c01:{NFSU2_TR(0x5d5c01);
__builtin_memmove((R+20),(R+16),4);
}
B5d5c03:{NFSU2_TR(0x5d5c03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d5c06:{NFSU2_TR(0x5d5c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5d5c09:{NFSU2_TR(0x5d5c09);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5c0c:{NFSU2_TR(0x5d5c0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c0d:{NFSU2_TR(0x5d5c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d5c10:{NFSU2_TR(0x5d5c10);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5c13:{NFSU2_TR(0x5d5c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5c19:{NFSU2_TR(0x5d5c19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c1a:{NFSU2_TR(0x5d5c1a);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5d5c1d:{NFSU2_TR(0x5d5c1d);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d5c20:{NFSU2_TR(0x5d5c20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5c24:{NFSU2_TR(0x5d5c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5c28:{NFSU2_TR(0x5d5c28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c29:{NFSU2_TR(0x5d5c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5c2eull));
TAIL_STATIC(0x577710u,577);
}
B5d5c2e:L5d5c2e:{c.instructions+=8;NFSU2_TR(0x5d5c2e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5c32:{NFSU2_TR(0x5d5c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d5c36:{NFSU2_TR(0x5d5c36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c38:{NFSU2_TR(0x5d5c38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c39:{NFSU2_TR(0x5d5c39);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5c3d:{NFSU2_TR(0x5d5c3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c3e:{NFSU2_TR(0x5d5c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5c44:{NFSU2_TR(0x5d5c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5c49ull));
TAIL_STATIC(0x570640u,570);
}
B5d5c49:L5d5c49:{c.instructions+=10;NFSU2_TR(0x5d5c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5c4d:{NFSU2_TR(0x5d5c4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5c51:{NFSU2_TR(0x5d5c51);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c53:{NFSU2_TR(0x5d5c53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c54:{NFSU2_TR(0x5d5c54);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5c58:{NFSU2_TR(0x5d5c58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c59:{NFSU2_TR(0x5d5c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5c5f:{NFSU2_TR(0x5d5c5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5c63:{NFSU2_TR(0x5d5c63);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5c67:{NFSU2_TR(0x5d5c67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5c6cull));
TAIL_STATIC(0x570640u,570);
}
B5d5c6c:L5d5c6c:{c.instructions+=9;NFSU2_TR(0x5d5c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5c70:{NFSU2_TR(0x5d5c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5c74:{NFSU2_TR(0x5d5c74);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5c78:{NFSU2_TR(0x5d5c78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5c7c:{NFSU2_TR(0x5d5c7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c7d:{NFSU2_TR(0x5d5c7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d5c81:{NFSU2_TR(0x5d5c81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5c82:{NFSU2_TR(0x5d5c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5c86:{NFSU2_TR(0x5d5c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5c8bull));
TAIL_STATIC(0x43ce50u,43c);
}
B5d5c8b:L5d5c8b:{c.instructions+=20;NFSU2_TR(0x5d5c8b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5c8f:{NFSU2_TR(0x5d5c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5c92:{NFSU2_TR(0x5d5c92);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d5c94:{NFSU2_TR(0x5d5c94);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5c98:{NFSU2_TR(0x5d5c98);
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
B5d5c9b:{NFSU2_TR(0x5d5c9b);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d5c9e:{NFSU2_TR(0x5d5c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5c9f:{NFSU2_TR(0x5d5c9f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d5ca1:{NFSU2_TR(0x5d5ca1);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d5ca4:{NFSU2_TR(0x5d5ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5ca5:{NFSU2_TR(0x5d5ca5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5ca9:{NFSU2_TR(0x5d5ca9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d5cad:{NFSU2_TR(0x5d5cad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5cb1:{NFSU2_TR(0x5d5cb1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d5cb5:{NFSU2_TR(0x5d5cb5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d5cb7:{NFSU2_TR(0x5d5cb7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5cb9:{NFSU2_TR(0x5d5cb9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5cbc:{NFSU2_TR(0x5d5cbc);
__builtin_memmove((R+16),(R+20),4);
}
B5d5cbe:{NFSU2_TR(0x5d5cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5cbf:{NFSU2_TR(0x5d5cbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5cd0:L5d5cd0:{c.instructions+=5;NFSU2_TR(0x5d5cd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d5cd3:{NFSU2_TR(0x5d5cd3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5cd7:{NFSU2_TR(0x5d5cd7);
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
B5d5cd9:{NFSU2_TR(0x5d5cd9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5cdd:{NFSU2_TR(0x5d5cdd);
if(r1(R+518)){{goto L5d5d02;}}
}
B5d5cdf:L5d5cdf:{c.instructions+=7;NFSU2_TR(0x5d5cdf);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5ce2:{NFSU2_TR(0x5d5ce2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d5ce4:{NFSU2_TR(0x5d5ce4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d5ce6:{NFSU2_TR(0x5d5ce6);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d5ce8:{NFSU2_TR(0x5d5ce8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5cea:{NFSU2_TR(0x5d5cea);
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
B5d5ced:{NFSU2_TR(0x5d5ced);
if(r1(R+514)){{goto L5d5cf5;}}
}
B5d5cef:L5d5cef:{c.instructions+=2;NFSU2_TR(0x5d5cef);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d5cf2:{NFSU2_TR(0x5d5cf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5cf5:L5d5cf5:{c.instructions+=4;NFSU2_TR(0x5d5cf5);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5cf8:{NFSU2_TR(0x5d5cf8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5cfa:{NFSU2_TR(0x5d5cfa);
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
B5d5cfd:{NFSU2_TR(0x5d5cfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5d02;}}
}
B5d5cff:L5d5cff:{c.instructions+=1;NFSU2_TR(0x5d5cff);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5d02:L5d5d02:{c.instructions+=1;NFSU2_TR(0x5d5d02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5d10:L5d5d10:{c.instructions+=5;NFSU2_TR(0x5d5d10);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d5d13:{NFSU2_TR(0x5d5d13);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5d17:{NFSU2_TR(0x5d5d17);
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
B5d5d19:{NFSU2_TR(0x5d5d19);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5d1d:{NFSU2_TR(0x5d5d1d);
if(r1(R+518)){{goto L5d5d48;}}
}
B5d5d1f:L5d5d1f:{c.instructions+=4;NFSU2_TR(0x5d5d1f);
{u32 ea_=u32(u32(8016320u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5d25:{NFSU2_TR(0x5d5d25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5d27:{NFSU2_TR(0x5d5d27);
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
B5d5d2a:{NFSU2_TR(0x5d5d2a);
if(r1(R+514)){{goto L5d5d35;}}
}
B5d5d2c:L5d5d2c:{c.instructions+=2;NFSU2_TR(0x5d5d2c);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d5d32:{NFSU2_TR(0x5d5d32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5d35:L5d5d35:{c.instructions+=4;NFSU2_TR(0x5d5d35);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5d3b:{NFSU2_TR(0x5d5d3b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5d3d:{NFSU2_TR(0x5d5d3d);
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
B5d5d40:{NFSU2_TR(0x5d5d40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5d48;}}
}
B5d5d42:L5d5d42:{c.instructions+=1;NFSU2_TR(0x5d5d42);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5d48:L5d5d48:{c.instructions+=1;NFSU2_TR(0x5d5d48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5d50:L5d5d50:{c.instructions+=4;NFSU2_TR(0x5d5d50);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d5d53:{NFSU2_TR(0x5d5d53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d5d56:{NFSU2_TR(0x5d5d56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5d58:{NFSU2_TR(0x5d5d58);
if(r1(R+518)){{goto L5d5da5;}}
}
B5d5d5a:L5d5d5a:{c.instructions+=7;NFSU2_TR(0x5d5d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5d5e:{NFSU2_TR(0x5d5d5e);
{u32 ea_=u32(r4(R+0)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5d64:{NFSU2_TR(0x5d5d64);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d5d67:{NFSU2_TR(0x5d5d67);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5d69:{NFSU2_TR(0x5d5d69);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5d6d:{NFSU2_TR(0x5d5d6d);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5d73:{NFSU2_TR(0x5d5d73);
if(r1(R+518)){{goto L5d5e0f;}}
}
B5d5d79:L5d5d79:{c.instructions+=7;NFSU2_TR(0x5d5d79);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5d7c:{NFSU2_TR(0x5d5d7c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d5d7e:{NFSU2_TR(0x5d5d7e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d5d80:{NFSU2_TR(0x5d5d80);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d5d82:{NFSU2_TR(0x5d5d82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5d84:{NFSU2_TR(0x5d5d84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d5d87:{NFSU2_TR(0x5d5d87);
if(r1(R+514)){{goto L5d5d92;}}
}
B5d5d89:L5d5d89:{c.instructions+=3;NFSU2_TR(0x5d5d89);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d5d8c:{NFSU2_TR(0x5d5d8c);
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
B5d5d8f:{NFSU2_TR(0x5d5d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5d92:L5d5d92:{c.instructions+=4;NFSU2_TR(0x5d5d92);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d5d95:{NFSU2_TR(0x5d5d95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5d97:{NFSU2_TR(0x5d5d97);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5d9a:{NFSU2_TR(0x5d5d9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5e0f;}}
}
B5d5d9c:L5d5d9c:{c.instructions+=3;NFSU2_TR(0x5d5d9c);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5d9f:{NFSU2_TR(0x5d5d9f);
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
B5d5da2:{NFSU2_TR(0x5d5da2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5da5:L5d5da5:{c.instructions+=7;NFSU2_TR(0x5d5da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d5da9:{NFSU2_TR(0x5d5da9);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5daf:{NFSU2_TR(0x5d5daf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d5db5:{NFSU2_TR(0x5d5db5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5db7:{NFSU2_TR(0x5d5db7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5dba:{NFSU2_TR(0x5d5dba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d5dbd:{NFSU2_TR(0x5d5dbd);
if(r1(R+518)){{goto L5d5dc5;}}
}
B5d5dbf:L5d5dbf:{c.instructions+=1;NFSU2_TR(0x5d5dbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d5dc5:L5d5dc5:{c.instructions+=22;NFSU2_TR(0x5d5dc5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5dc9:{NFSU2_TR(0x5d5dc9);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5dcc:{NFSU2_TR(0x5d5dcc);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5dcf:{NFSU2_TR(0x5d5dcf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5dd3:{NFSU2_TR(0x5d5dd3);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5dd6:{NFSU2_TR(0x5d5dd6);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d5dd9:{NFSU2_TR(0x5d5dd9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5ddd:{NFSU2_TR(0x5d5ddd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5de1:{NFSU2_TR(0x5d5de1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d5de5:{NFSU2_TR(0x5d5de5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5de9:{NFSU2_TR(0x5d5de9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d5ded:{NFSU2_TR(0x5d5ded);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d5def:{NFSU2_TR(0x5d5def);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d5df1:{NFSU2_TR(0x5d5df1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5df5:{NFSU2_TR(0x5d5df5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d5df8:{NFSU2_TR(0x5d5df8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5dfc:{NFSU2_TR(0x5d5dfc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d5dfe:{NFSU2_TR(0x5d5dfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d5e00:{NFSU2_TR(0x5d5e00);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d5e06:{NFSU2_TR(0x5d5e06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d5e08:{NFSU2_TR(0x5d5e08);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d5e0b:{NFSU2_TR(0x5d5e0b);
if(r1(R+514)){{goto L5d5e0f;}}
}
B5d5e0d:L5d5e0d:{c.instructions+=1;NFSU2_TR(0x5d5e0d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d5e0f:L5d5e0f:{c.instructions+=2;NFSU2_TR(0x5d5e0f);
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
B5d5e12:{NFSU2_TR(0x5d5e12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5e20:L5d5e20:{c.instructions+=8;NFSU2_TR(0x5d5e20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e21:{NFSU2_TR(0x5d5e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d5e25:{NFSU2_TR(0x5d5e25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e26:{NFSU2_TR(0x5d5e26);
u8 U[4];
w4(U+0,u32(0x7a51c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e2b:{NFSU2_TR(0x5d5e2b);
__builtin_memmove((R+28),(R+4),4);
}
B5d5e2d:{NFSU2_TR(0x5d5e2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e2f:{NFSU2_TR(0x5d5e2f);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e31:{NFSU2_TR(0x5d5e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e36ull));
TAIL_STATIC(0x578ce0u,578);
}
B5d5e36:L5d5e36:{c.instructions+=7;NFSU2_TR(0x5d5e36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e38:{NFSU2_TR(0x5d5e38);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e3a:{NFSU2_TR(0x5d5e3a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e3c:{NFSU2_TR(0x5d5e3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d5e3f:{NFSU2_TR(0x5d5e3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e40:{NFSU2_TR(0x5d5e40);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e42:{NFSU2_TR(0x5d5e42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e47ull));
TAIL_STATIC(0x571640u,571);
}
B5d5e47:L5d5e47:{c.instructions+=7;NFSU2_TR(0x5d5e47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e49:{NFSU2_TR(0x5d5e49);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e4b:{NFSU2_TR(0x5d5e4b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e4d:{NFSU2_TR(0x5d5e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5e50:{NFSU2_TR(0x5d5e50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e51:{NFSU2_TR(0x5d5e51);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e53:{NFSU2_TR(0x5d5e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e58ull));
TAIL_STATIC(0x571640u,571);
}
B5d5e58:L5d5e58:{c.instructions+=5;NFSU2_TR(0x5d5e58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e59:{NFSU2_TR(0x5d5e59);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d5e5c:{NFSU2_TR(0x5d5e5c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e5d:{NFSU2_TR(0x5d5e5d);
w4(R+4,u32(0x88f298ull));
}
B5d5e62:{NFSU2_TR(0x5d5e62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5720u);}goto L5d5720;}
}
B5d5e67:L5d5e67:{c.instructions+=4;NFSU2_TR(0x5d5e67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d5e6a:{NFSU2_TR(0x5d5e6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e6b:{NFSU2_TR(0x5d5e6b);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e6d:{NFSU2_TR(0x5d5e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e72ull));
TAIL_STATIC(0x571770u,571);
}
B5d5e72:L5d5e72:{c.instructions+=4;NFSU2_TR(0x5d5e72);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d5e75:{NFSU2_TR(0x5d5e75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e76:{NFSU2_TR(0x5d5e76);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e78:{NFSU2_TR(0x5d5e78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e7dull));
TAIL_STATIC(0x571770u,571);
}
B5d5e7d:L5d5e7d:{c.instructions+=4;NFSU2_TR(0x5d5e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d5e80:{NFSU2_TR(0x5d5e80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e81:{NFSU2_TR(0x5d5e81);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e83:{NFSU2_TR(0x5d5e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e88ull));
TAIL_STATIC(0x571770u,571);
}
B5d5e88:L5d5e88:{c.instructions+=7;NFSU2_TR(0x5d5e88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e8a:{NFSU2_TR(0x5d5e8a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e8c:{NFSU2_TR(0x5d5e8c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e8e:{NFSU2_TR(0x5d5e8e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B5d5e91:{NFSU2_TR(0x5d5e91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5e92:{NFSU2_TR(0x5d5e92);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e94:{NFSU2_TR(0x5d5e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5e99ull));
TAIL_STATIC(0x571640u,571);
}
B5d5e99:L5d5e99:{c.instructions+=2;NFSU2_TR(0x5d5e99);
__builtin_memmove((R+4),(R+24),4);
}
B5d5e9b:{NFSU2_TR(0x5d5e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d5ea0ull));
TAIL_STATIC(0x578d90u,578);
}
B5d5ea0:L5d5ea0:{c.instructions+=3;NFSU2_TR(0x5d5ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5ea1:{NFSU2_TR(0x5d5ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5ea2:{NFSU2_TR(0x5d5ea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5eb0:L5d5eb0:{c.instructions+=7;NFSU2_TR(0x5d5eb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d5eb3:{NFSU2_TR(0x5d5eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5eb9:{NFSU2_TR(0x5d5eb9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d5ebb:{NFSU2_TR(0x5d5ebb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d5ebd:{NFSU2_TR(0x5d5ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5ec1:{NFSU2_TR(0x5d5ec1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d5ec5:{NFSU2_TR(0x5d5ec5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d5fc3;}}
}
B5d5ecb:L5d5ecb:{c.instructions+=7;NFSU2_TR(0x5d5ecb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5ecc:{NFSU2_TR(0x5d5ecc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5ecd:{NFSU2_TR(0x5d5ecd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5ece:{NFSU2_TR(0x5d5ece);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d5ecf:{NFSU2_TR(0x5d5ecf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29cull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5ed5:{NFSU2_TR(0x5d5ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5ed9:{NFSU2_TR(0x5d5ed9);
__builtin_memmove((R+16),(R+16),4);
}
B5d5ee0:L5d5ee0:{c.instructions+=5;NFSU2_TR(0x5d5ee0);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d5ee4:{NFSU2_TR(0x5d5ee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5d5ee6:{NFSU2_TR(0x5d5ee6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d5ee8:{NFSU2_TR(0x5d5ee8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5eea:{NFSU2_TR(0x5d5eea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5f15;}}
}
B5d5eec:L5d5eec:{c.instructions+=7;NFSU2_TR(0x5d5eec);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d5ef0:{NFSU2_TR(0x5d5ef0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d5ef1:{NFSU2_TR(0x5d5ef1);
w4(R+4,u32(0x64ull));
}
B5d5ef6:{NFSU2_TR(0x5d5ef6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d5ef6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d5ef6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d5ef8:{NFSU2_TR(0x5d5ef8);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5d5efa:{NFSU2_TR(0x5d5efa);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5d5efc:{NFSU2_TR(0x5d5efc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d5f15;}}
}
B5d5efe:L5d5efe:{c.instructions+=2;NFSU2_TR(0x5d5efe);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5f00:{NFSU2_TR(0x5d5f00);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5d5f15;}}
}
B5d5f02:L5d5f02:{c.instructions+=3;NFSU2_TR(0x5d5f02);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5d5f07:{NFSU2_TR(0x5d5f07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d5f09:{NFSU2_TR(0x5d5f09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d5f15;}}
}
B5d5f0b:L5d5f0b:{c.instructions+=3;NFSU2_TR(0x5d5f0b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B5d5f0d:{NFSU2_TR(0x5d5f0d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d5f0f:{NFSU2_TR(0x5d5f0f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d5f95;}}
}
B5d5f15:L5d5f15:{c.instructions+=12;NFSU2_TR(0x5d5f15);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5d5f19:{NFSU2_TR(0x5d5f19);
w4(R+24,u32(s32(s16(r2(R+4)))));
}
B5d5f1c:{NFSU2_TR(0x5d5f1c);
w4(R+0,u32(0x51eb851full));
}
B5d5f21:{NFSU2_TR(0x5d5f21);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d5f23:{NFSU2_TR(0x5d5f23);
__builtin_memmove((R+0),(R+8),4);
}
B5d5f25:{NFSU2_TR(0x5d5f25);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d5f28:{NFSU2_TR(0x5d5f28);
__builtin_memmove((R+8),(R+0),4);
}
B5d5f2a:{NFSU2_TR(0x5d5f2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d5f2d:{NFSU2_TR(0x5d5f2d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d5f2f:{NFSU2_TR(0x5d5f2f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5d5f31:{NFSU2_TR(0x5d5f31);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x59ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5f33:{NFSU2_TR(0x5d5f33);
if(r1(R+518)){{goto L5d5f6f;}}
}
B5d5f35:L5d5f35:{c.instructions+=2;NFSU2_TR(0x5d5f35);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x58ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5f37:{NFSU2_TR(0x5d5f37);
if(r1(R+518)){{goto L5d5f6f;}}
}
B5d5f39:L5d5f39:{c.instructions+=2;NFSU2_TR(0x5d5f39);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5d5f3b:{NFSU2_TR(0x5d5f3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d5f95;}}
}
B5d5f3d:L5d5f3d:{c.instructions+=2;NFSU2_TR(0x5d5f3d);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5f3f:{NFSU2_TR(0x5d5f3f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5d5f95;}}
}
B5d5f41:L5d5f41:{c.instructions+=7;NFSU2_TR(0x5d5f41);
__builtin_memmove((R+0),(R+24),4);
}
B5d5f43:{NFSU2_TR(0x5d5f43);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d5f44:{NFSU2_TR(0x5d5f44);
w4(R+4,u32(0x64ull));
}
B5d5f49:{NFSU2_TR(0x5d5f49);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d5f49);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d5f49);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d5f4b:{NFSU2_TR(0x5d5f4b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5d5f4d:{NFSU2_TR(0x5d5f4d);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5d5f4f:{NFSU2_TR(0x5d5f4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d5f68;}}
}
B5d5f51:L5d5f51:{c.instructions+=2;NFSU2_TR(0x5d5f51);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d5f53:{NFSU2_TR(0x5d5f53);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5d5f68;}}
}
B5d5f55:L5d5f55:{c.instructions+=4;NFSU2_TR(0x5d5f55);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5d5f5a:{NFSU2_TR(0x5d5f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5d5f5d:{NFSU2_TR(0x5d5f5d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d5f5f:{NFSU2_TR(0x5d5f5f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d5f68;}}
}
B5d5f61:L5d5f61:{c.instructions+=2;NFSU2_TR(0x5d5f61);
w4(R+20,u32(0x3e7ull));
}
B5d5f66:{NFSU2_TR(0x5d5f66);
{goto L5d5f87;}
}
B5d5f68:L5d5f68:{c.instructions+=2;NFSU2_TR(0x5d5f68);
w4(R+20,u32(0xaull));
}
B5d5f6d:{NFSU2_TR(0x5d5f6d);
{goto L5d5f87;}
}
B5d5f6f:L5d5f6f:{c.instructions+=3;NFSU2_TR(0x5d5f6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x9c4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5d5f74:{NFSU2_TR(0x5d5f74);
w4(R+20,u32(0x2ull));
}
B5d5f79:{NFSU2_TR(0x5d5f79);
if(r1(R+518)){{goto L5d5f82;}}
}
B5d5f7b:L5d5f7b:{c.instructions+=2;NFSU2_TR(0x5d5f7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x960ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5d5f80:{NFSU2_TR(0x5d5f80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d5f87;}}
}
B5d5f82:L5d5f82:{c.instructions+=1;NFSU2_TR(0x5d5f82);
w4(R+20,u32(0x1ull));
}
B5d5f87:L5d5f87:{c.instructions+=3;NFSU2_TR(0x5d5f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5f8a:{NFSU2_TR(0x5d5f8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d5f8d:{NFSU2_TR(0x5d5f8d);
if(r1(R+518)){{goto L5d5f95;}}
}
B5d5f8f:L5d5f8f:{c.instructions+=2;NFSU2_TR(0x5d5f8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d5f92:{NFSU2_TR(0x5d5f92);
if(r1(R+518)){{goto L5d5f95;}}
}
B5d5f94:L5d5f94:{c.instructions+=1;NFSU2_TR(0x5d5f94);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d5f95:L5d5f95:{c.instructions+=2;NFSU2_TR(0x5d5f95);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d5f99:{NFSU2_TR(0x5d5f99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d5fa3;}}
}
B5d5f9b:L5d5f9b:{c.instructions+=2;NFSU2_TR(0x5d5f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5f9f:{NFSU2_TR(0x5d5f9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5fa3:L5d5fa3:{c.instructions+=5;NFSU2_TR(0x5d5fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5fa7:{NFSU2_TR(0x5d5fa7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5d5faa:{NFSU2_TR(0x5d5faa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d5fab:{NFSU2_TR(0x5d5fab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5faf:{NFSU2_TR(0x5d5faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d5ee0u);}goto L5d5ee0;}}
}
B5d5fb5:L5d5fb5:{c.instructions+=7;NFSU2_TR(0x5d5fb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5fb9:{NFSU2_TR(0x5d5fb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d5fba:{NFSU2_TR(0x5d5fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d5fbb:{NFSU2_TR(0x5d5fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d5fbc:{NFSU2_TR(0x5d5fbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d5fbd:{NFSU2_TR(0x5d5fbd);
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
B5d5fc0:{NFSU2_TR(0x5d5fc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5fc3:L5d5fc3:{c.instructions+=3;NFSU2_TR(0x5d5fc3);
__builtin_memmove((R+0),(R+8),4);
}
B5d5fc5:{NFSU2_TR(0x5d5fc5);
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
B5d5fc8:{NFSU2_TR(0x5d5fc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d5fd0:L5d5fd0:{c.instructions+=14;NFSU2_TR(0x5d5fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d5fd4:{NFSU2_TR(0x5d5fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d5fd8:{NFSU2_TR(0x5d5fd8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d5fdb:{NFSU2_TR(0x5d5fdb);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d5fe2:{NFSU2_TR(0x5d5fe2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d5fe8:{NFSU2_TR(0x5d5fe8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d5feb:{NFSU2_TR(0x5d5feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d5fed:{NFSU2_TR(0x5d5fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5ff0:{NFSU2_TR(0x5d5ff0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d5ff3:{NFSU2_TR(0x5d5ff3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d5ff5:{NFSU2_TR(0x5d5ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5ff8:{NFSU2_TR(0x5d5ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d5ffb:{NFSU2_TR(0x5d5ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5d5fff:{NFSU2_TR(0x5d5fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5d6006u,5d6);
}
XIT:NFSU2_TR_EXIT(0x5d5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
