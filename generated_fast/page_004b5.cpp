#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_49a(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b5(u8* __restrict R,Cpu& c);
u32 page_4b5(Cpu& c){return body_4b5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b5002:goto L4b5002;
case 0x4b5003:c.instructions+=1;goto B4b5003;
case 0x4b5008:goto L4b5008;
case 0x4b500b:c.instructions+=3;goto B4b500b;
case 0x4b5010:c.instructions+=2;goto B4b5010;
case 0x4b5011:c.instructions+=1;goto B4b5011;
case 0x4b5016:goto L4b5016;
case 0x4b5017:c.instructions+=1;goto B4b5017;
case 0x4b501c:goto L4b501c;
case 0x4b501f:c.instructions+=3;goto B4b501f;
case 0x4b5026:c.instructions+=2;goto B4b5026;
case 0x4b5029:c.instructions+=1;goto B4b5029;
case 0x4b502b:goto L4b502b;
case 0x4b5030:c.instructions+=2;goto B4b5030;
case 0x4b5031:c.instructions+=1;goto B4b5031;
case 0x4b5036:goto L4b5036;
case 0x4b5037:c.instructions+=1;goto B4b5037;
case 0x4b503c:goto L4b503c;
case 0x4b503f:c.instructions+=3;goto B4b503f;
case 0x4b5044:c.instructions+=2;goto B4b5044;
case 0x4b5045:c.instructions+=1;goto B4b5045;
case 0x4b504a:goto L4b504a;
case 0x4b504b:c.instructions+=1;goto B4b504b;
case 0x4b5050:goto L4b5050;
case 0x4b5053:c.instructions+=3;goto B4b5053;
case 0x4b5058:c.instructions+=2;goto B4b5058;
case 0x4b5059:c.instructions+=1;goto B4b5059;
case 0x4b505e:goto L4b505e;
case 0x4b505f:c.instructions+=1;goto B4b505f;
case 0x4b5064:goto L4b5064;
case 0x4b5067:c.instructions+=3;goto B4b5067;
case 0x4b506c:c.instructions+=2;goto B4b506c;
case 0x4b506d:c.instructions+=1;goto B4b506d;
case 0x4b5072:goto L4b5072;
case 0x4b5073:c.instructions+=1;goto B4b5073;
case 0x4b5078:goto L4b5078;
case 0x4b507b:c.instructions+=1;goto B4b507b;
case 0x4b507d:goto L4b507d;
case 0x4b5082:c.instructions+=3;goto B4b5082;
case 0x4b5087:c.instructions+=2;goto B4b5087;
case 0x4b5088:c.instructions+=1;goto B4b5088;
case 0x4b508d:goto L4b508d;
case 0x4b5090:c.instructions+=2;goto B4b5090;
case 0x4b5091:c.instructions+=1;goto B4b5091;
case 0x4b5096:goto L4b5096;
case 0x4b5099:goto L4b5099;
case 0x4b509c:c.instructions+=4;goto B4b509c;
case 0x4b50a1:c.instructions+=3;goto B4b50a1;
case 0x4b50a6:c.instructions+=2;goto B4b50a6;
case 0x4b50a7:c.instructions+=1;goto B4b50a7;
case 0x4b50ac:goto L4b50ac;
case 0x4b50af:c.instructions+=2;goto B4b50af;
case 0x4b50b0:c.instructions+=1;goto B4b50b0;
case 0x4b50b5:goto L4b50b5;
case 0x4b50b8:c.instructions+=5;goto B4b50b8;
case 0x4b50bb:c.instructions+=4;goto B4b50bb;
case 0x4b50c0:c.instructions+=3;goto B4b50c0;
case 0x4b50c5:c.instructions+=2;goto B4b50c5;
case 0x4b50c6:c.instructions+=1;goto B4b50c6;
case 0x4b50cb:goto L4b50cb;
case 0x4b50ce:c.instructions+=2;goto B4b50ce;
case 0x4b50cf:c.instructions+=1;goto B4b50cf;
case 0x4b50d4:goto L4b50d4;
case 0x4b50d7:c.instructions+=6;goto B4b50d7;
case 0x4b50d8:c.instructions+=5;goto B4b50d8;
case 0x4b50d9:c.instructions+=4;goto B4b50d9;
case 0x4b50da:c.instructions+=3;goto B4b50da;
case 0x4b50db:c.instructions+=2;goto B4b50db;
case 0x4b50de:c.instructions+=1;goto B4b50de;
case 0x4b5100:goto L4b5100;
case 0x4b5106:c.instructions+=10;goto B4b5106;
case 0x4b5107:c.instructions+=9;goto B4b5107;
case 0x4b5109:c.instructions+=8;goto B4b5109;
case 0x4b510c:c.instructions+=7;goto B4b510c;
case 0x4b510f:c.instructions+=6;goto B4b510f;
case 0x4b5114:c.instructions+=5;goto B4b5114;
case 0x4b5116:c.instructions+=4;goto B4b5116;
case 0x4b5119:c.instructions+=3;goto B4b5119;
case 0x4b511f:c.instructions+=2;goto B4b511f;
case 0x4b5125:c.instructions+=1;goto B4b5125;
case 0x4b5127:goto L4b5127;
case 0x4b5128:c.instructions+=4;goto B4b5128;
case 0x4b512c:c.instructions+=3;goto B4b512c;
case 0x4b512e:c.instructions+=2;goto B4b512e;
case 0x4b512f:c.instructions+=1;goto B4b512f;
case 0x4b5134:goto L4b5134;
case 0x4b5137:c.instructions+=4;goto B4b5137;
case 0x4b513a:c.instructions+=3;goto B4b513a;
case 0x4b513e:c.instructions+=2;goto B4b513e;
case 0x4b513f:c.instructions+=1;goto B4b513f;
case 0x4b5144:goto L4b5144;
case 0x4b5145:c.instructions+=2;goto B4b5145;
case 0x4b514b:c.instructions+=1;goto B4b514b;
case 0x4b514c:goto L4b514c;
case 0x4b514d:c.instructions+=6;goto B4b514d;
case 0x4b514e:c.instructions+=5;goto B4b514e;
case 0x4b514f:c.instructions+=4;goto B4b514f;
case 0x4b5150:c.instructions+=3;goto B4b5150;
case 0x4b5154:c.instructions+=2;goto B4b5154;
case 0x4b5155:c.instructions+=1;goto B4b5155;
case 0x4b515a:goto L4b515a;
case 0x4b515d:c.instructions+=3;goto B4b515d;
case 0x4b5160:c.instructions+=2;goto B4b5160;
case 0x4b5161:c.instructions+=1;goto B4b5161;
case 0x4b5166:goto L4b5166;
case 0x4b5168:c.instructions+=8;goto B4b5168;
case 0x4b516b:c.instructions+=7;goto B4b516b;
case 0x4b516e:c.instructions+=6;goto B4b516e;
case 0x4b5171:c.instructions+=5;goto B4b5171;
case 0x4b5174:c.instructions+=4;goto B4b5174;
case 0x4b517a:c.instructions+=3;goto B4b517a;
case 0x4b517e:c.instructions+=2;goto B4b517e;
case 0x4b5182:c.instructions+=1;goto B4b5182;
case 0x4b5184:goto L4b5184;
case 0x4b5188:c.instructions+=2;goto B4b5188;
case 0x4b518c:c.instructions+=1;goto B4b518c;
case 0x4b5190:goto L4b5190;
case 0x4b5192:c.instructions+=5;goto B4b5192;
case 0x4b5194:c.instructions+=4;goto B4b5194;
case 0x4b5195:c.instructions+=3;goto B4b5195;
case 0x4b5196:c.instructions+=2;goto B4b5196;
case 0x4b5198:c.instructions+=1;goto B4b5198;
case 0x4b519d:goto L4b519d;
case 0x4b51a1:c.instructions+=3;goto B4b51a1;
case 0x4b51a3:c.instructions+=2;goto B4b51a3;
case 0x4b51a6:c.instructions+=1;goto B4b51a6;
case 0x4b51a8:goto L4b51a8;
case 0x4b51ab:c.instructions+=2;goto B4b51ab;
case 0x4b51af:c.instructions+=1;goto B4b51af;
case 0x4b51b1:goto L4b51b1;
case 0x4b51b4:c.instructions+=2;goto B4b51b4;
case 0x4b51b5:c.instructions+=1;goto B4b51b5;
case 0x4b51ba:goto L4b51ba;
case 0x4b51bb:c.instructions+=5;goto B4b51bb;
case 0x4b51bc:c.instructions+=4;goto B4b51bc;
case 0x4b51bd:c.instructions+=3;goto B4b51bd;
case 0x4b51be:c.instructions+=2;goto B4b51be;
case 0x4b51c4:c.instructions+=1;goto B4b51c4;
case 0x4b51d0:goto L4b51d0;
case 0x4b51d1:c.instructions+=5;goto B4b51d1;
case 0x4b51d3:c.instructions+=4;goto B4b51d3;
case 0x4b51d9:c.instructions+=3;goto B4b51d9;
case 0x4b51da:c.instructions+=2;goto B4b51da;
case 0x4b51db:c.instructions+=1;goto B4b51db;
case 0x4b51e0:goto L4b51e0;
case 0x4b51e2:c.instructions+=3;goto B4b51e2;
case 0x4b51e5:c.instructions+=2;goto B4b51e5;
case 0x4b51e7:c.instructions+=1;goto B4b51e7;
case 0x4b51e9:goto L4b51e9;
case 0x4b51ec:c.instructions+=2;goto B4b51ec;
case 0x4b51ee:c.instructions+=1;goto B4b51ee;
case 0x4b51f0:goto L4b51f0;
case 0x4b51f3:c.instructions+=2;goto B4b51f3;
case 0x4b51f5:c.instructions+=1;goto B4b51f5;
case 0x4b51f7:goto L4b51f7;
case 0x4b51f9:c.instructions+=1;goto B4b51f9;
case 0x4b51fb:goto L4b51fb;
case 0x4b5200:c.instructions+=3;goto B4b5200;
case 0x4b5202:c.instructions+=2;goto B4b5202;
case 0x4b5206:c.instructions+=1;goto B4b5206;
case 0x4b520b:goto L4b520b;
case 0x4b520d:goto L4b520d;
case 0x4b5210:c.instructions+=3;goto B4b5210;
case 0x4b5211:c.instructions+=2;goto B4b5211;
case 0x4b5213:c.instructions+=1;goto B4b5213;
case 0x4b5215:goto L4b5215;
case 0x4b5220:goto L4b5220;
case 0x4b5226:c.instructions+=6;goto B4b5226;
case 0x4b522a:c.instructions+=5;goto B4b522a;
case 0x4b522c:c.instructions+=4;goto B4b522c;
case 0x4b522d:c.instructions+=3;goto B4b522d;
case 0x4b522f:c.instructions+=2;goto B4b522f;
case 0x4b5231:c.instructions+=1;goto B4b5231;
case 0x4b5233:goto L4b5233;
case 0x4b5239:c.instructions+=2;goto B4b5239;
case 0x4b523e:c.instructions+=1;goto B4b523e;
case 0x4b5241:goto L4b5241;
case 0x4b5243:c.instructions+=1;goto B4b5243;
case 0x4b5248:goto L4b5248;
case 0x4b524b:c.instructions+=3;goto B4b524b;
case 0x4b524d:c.instructions+=2;goto B4b524d;
case 0x4b524e:c.instructions+=1;goto B4b524e;
case 0x4b5253:goto L4b5253;
case 0x4b5256:goto L4b5256;
case 0x4b5257:c.instructions+=2;goto B4b5257;
case 0x4b5258:c.instructions+=1;goto B4b5258;
case 0x4b5260:goto L4b5260;
case 0x4b5262:c.instructions+=11;goto B4b5262;
case 0x4b5267:c.instructions+=10;goto B4b5267;
case 0x4b526d:c.instructions+=9;goto B4b526d;
case 0x4b526e:c.instructions+=8;goto B4b526e;
case 0x4b5275:c.instructions+=7;goto B4b5275;
case 0x4b5276:c.instructions+=6;goto B4b5276;
case 0x4b527a:c.instructions+=5;goto B4b527a;
case 0x4b527b:c.instructions+=4;goto B4b527b;
case 0x4b527d:c.instructions+=3;goto B4b527d;
case 0x4b527e:c.instructions+=2;goto B4b527e;
case 0x4b5282:c.instructions+=1;goto B4b5282;
case 0x4b5287:goto L4b5287;
case 0x4b5289:c.instructions+=6;goto B4b5289;
case 0x4b5291:c.instructions+=5;goto B4b5291;
case 0x4b5297:c.instructions+=4;goto B4b5297;
case 0x4b529e:c.instructions+=3;goto B4b529e;
case 0x4b52a5:c.instructions+=2;goto B4b52a5;
case 0x4b52ac:c.instructions+=1;goto B4b52ac;
case 0x4b52b1:goto L4b52b1;
case 0x4b52b5:c.instructions+=5;goto B4b52b5;
case 0x4b52b7:c.instructions+=4;goto B4b52b7;
case 0x4b52b8:c.instructions+=3;goto B4b52b8;
case 0x4b52bf:c.instructions+=2;goto B4b52bf;
case 0x4b52c2:c.instructions+=1;goto B4b52c2;
case 0x4b52d0:goto L4b52d0;
case 0x4b52d1:c.instructions+=2;goto B4b52d1;
case 0x4b52d3:c.instructions+=1;goto B4b52d3;
case 0x4b52d8:goto L4b52d8;
case 0x4b52dd:c.instructions+=1;goto B4b52dd;
case 0x4b52df:goto L4b52df;
case 0x4b52e0:c.instructions+=1;goto B4b52e0;
case 0x4b52e5:goto L4b52e5;
case 0x4b52e8:goto L4b52e8;
case 0x4b52ea:c.instructions+=2;goto B4b52ea;
case 0x4b52eb:c.instructions+=1;goto B4b52eb;
case 0x4b52f0:goto L4b52f0;
case 0x4b52f6:c.instructions+=1;goto B4b52f6;
case 0x4b5300:goto L4b5300;
case 0x4b5302:c.instructions+=11;goto B4b5302;
case 0x4b5307:c.instructions+=10;goto B4b5307;
case 0x4b530d:c.instructions+=9;goto B4b530d;
case 0x4b530e:c.instructions+=8;goto B4b530e;
case 0x4b5315:c.instructions+=7;goto B4b5315;
case 0x4b5316:c.instructions+=6;goto B4b5316;
case 0x4b531a:c.instructions+=5;goto B4b531a;
case 0x4b531b:c.instructions+=4;goto B4b531b;
case 0x4b531d:c.instructions+=3;goto B4b531d;
case 0x4b531e:c.instructions+=2;goto B4b531e;
case 0x4b5322:c.instructions+=1;goto B4b5322;
case 0x4b5327:goto L4b5327;
case 0x4b5329:c.instructions+=7;goto B4b5329;
case 0x4b532b:c.instructions+=6;goto B4b532b;
case 0x4b532f:c.instructions+=5;goto B4b532f;
case 0x4b5335:c.instructions+=4;goto B4b5335;
case 0x4b533c:c.instructions+=3;goto B4b533c;
case 0x4b5343:c.instructions+=2;goto B4b5343;
case 0x4b5346:c.instructions+=1;goto B4b5346;
case 0x4b534b:goto L4b534b;
case 0x4b534f:c.instructions+=5;goto B4b534f;
case 0x4b5351:c.instructions+=4;goto B4b5351;
case 0x4b5352:c.instructions+=3;goto B4b5352;
case 0x4b5359:c.instructions+=2;goto B4b5359;
case 0x4b535c:c.instructions+=1;goto B4b535c;
case 0x4b5360:goto L4b5360;
case 0x4b5361:c.instructions+=2;goto B4b5361;
case 0x4b5363:c.instructions+=1;goto B4b5363;
case 0x4b5368:goto L4b5368;
case 0x4b536d:c.instructions+=1;goto B4b536d;
case 0x4b536f:goto L4b536f;
case 0x4b5370:c.instructions+=1;goto B4b5370;
case 0x4b5375:goto L4b5375;
case 0x4b5378:goto L4b5378;
case 0x4b537a:c.instructions+=2;goto B4b537a;
case 0x4b537b:c.instructions+=1;goto B4b537b;
case 0x4b5380:goto L4b5380;
case 0x4b5381:c.instructions+=2;goto B4b5381;
case 0x4b5383:c.instructions+=1;goto B4b5383;
case 0x4b5388:goto L4b5388;
case 0x4b538d:c.instructions+=1;goto B4b538d;
case 0x4b538f:goto L4b538f;
case 0x4b5390:c.instructions+=1;goto B4b5390;
case 0x4b5395:goto L4b5395;
case 0x4b5398:goto L4b5398;
case 0x4b539a:c.instructions+=2;goto B4b539a;
case 0x4b539b:c.instructions+=1;goto B4b539b;
case 0x4b53a0:goto L4b53a0;
case 0x4b53a4:c.instructions+=6;goto B4b53a4;
case 0x4b53a6:c.instructions+=5;goto B4b53a6;
case 0x4b53aa:c.instructions+=4;goto B4b53aa;
case 0x4b53ad:c.instructions+=3;goto B4b53ad;
case 0x4b53af:c.instructions+=2;goto B4b53af;
case 0x4b53b0:c.instructions+=1;goto B4b53b0;
case 0x4b53b5:goto L4b53b5;
case 0x4b53b8:c.instructions+=1;goto B4b53b8;
case 0x4b53c0:goto L4b53c0;
case 0x4b53c5:c.instructions+=7;goto B4b53c5;
case 0x4b53cb:c.instructions+=6;goto B4b53cb;
case 0x4b53cc:c.instructions+=5;goto B4b53cc;
case 0x4b53cd:c.instructions+=4;goto B4b53cd;
case 0x4b53cf:c.instructions+=3;goto B4b53cf;
case 0x4b53d2:c.instructions+=2;goto B4b53d2;
case 0x4b53d3:c.instructions+=1;goto B4b53d3;
case 0x4b53d8:goto L4b53d8;
case 0x4b53d9:c.instructions+=2;goto B4b53d9;
case 0x4b53da:c.instructions+=1;goto B4b53da;
case 0x4b53df:goto L4b53df;
case 0x4b53e4:c.instructions+=3;goto B4b53e4;
case 0x4b53e7:c.instructions+=2;goto B4b53e7;
case 0x4b53e9:c.instructions+=1;goto B4b53e9;
case 0x4b53ef:goto L4b53ef;
case 0x4b53f5:c.instructions+=2;goto B4b53f5;
case 0x4b53f7:c.instructions+=1;goto B4b53f7;
case 0x4b53fd:goto L4b53fd;
case 0x4b5401:c.instructions+=4;goto B4b5401;
case 0x4b5402:c.instructions+=3;goto B4b5402;
case 0x4b5403:c.instructions+=2;goto B4b5403;
case 0x4b5406:c.instructions+=1;goto B4b5406;
case 0x4b540b:goto L4b540b;
case 0x4b540e:c.instructions+=11;goto B4b540e;
case 0x4b5410:c.instructions+=10;goto B4b5410;
case 0x4b5415:c.instructions+=9;goto B4b5415;
case 0x4b5417:c.instructions+=8;goto B4b5417;
case 0x4b541a:c.instructions+=7;goto B4b541a;
case 0x4b541c:c.instructions+=6;goto B4b541c;
case 0x4b5420:c.instructions+=5;goto B4b5420;
case 0x4b5422:c.instructions+=4;goto B4b5422;
case 0x4b5427:c.instructions+=3;goto B4b5427;
case 0x4b542c:c.instructions+=2;goto B4b542c;
case 0x4b542d:c.instructions+=1;goto B4b542d;
case 0x4b5432:goto L4b5432;
case 0x4b5438:c.instructions+=5;goto B4b5438;
case 0x4b543e:c.instructions+=4;goto B4b543e;
case 0x4b5441:c.instructions+=3;goto B4b5441;
case 0x4b5443:c.instructions+=2;goto B4b5443;
case 0x4b5444:c.instructions+=1;goto B4b5444;
case 0x4b5446:goto L4b5446;
case 0x4b544c:goto L4b544c;
case 0x4b5452:c.instructions+=7;goto B4b5452;
case 0x4b5456:c.instructions+=6;goto B4b5456;
case 0x4b5459:c.instructions+=5;goto B4b5459;
case 0x4b545c:c.instructions+=4;goto B4b545c;
case 0x4b5461:c.instructions+=3;goto B4b5461;
case 0x4b5466:c.instructions+=2;goto B4b5466;
case 0x4b5467:c.instructions+=1;goto B4b5467;
case 0x4b546c:goto L4b546c;
case 0x4b546f:c.instructions+=4;goto B4b546f;
case 0x4b5472:c.instructions+=3;goto B4b5472;
case 0x4b5473:c.instructions+=2;goto B4b5473;
case 0x4b5478:c.instructions+=1;goto B4b5478;
case 0x4b547d:goto L4b547d;
case 0x4b547e:c.instructions+=4;goto B4b547e;
case 0x4b5483:c.instructions+=3;goto B4b5483;
case 0x4b5488:c.instructions+=2;goto B4b5488;
case 0x4b5489:c.instructions+=1;goto B4b5489;
case 0x4b548e:goto L4b548e;
case 0x4b5491:c.instructions+=6;goto B4b5491;
case 0x4b5492:c.instructions+=5;goto B4b5492;
case 0x4b5497:c.instructions+=4;goto B4b5497;
case 0x4b549b:c.instructions+=3;goto B4b549b;
case 0x4b549d:c.instructions+=2;goto B4b549d;
case 0x4b549e:c.instructions+=1;goto B4b549e;
case 0x4b54a3:goto L4b54a3;
case 0x4b54a6:c.instructions+=3;goto B4b54a6;
case 0x4b54a7:c.instructions+=2;goto B4b54a7;
case 0x4b54ac:c.instructions+=1;goto B4b54ac;
case 0x4b54b1:goto L4b54b1;
case 0x4b54b5:c.instructions+=3;goto B4b54b5;
case 0x4b54b6:c.instructions+=2;goto B4b54b6;
case 0x4b54b9:c.instructions+=1;goto B4b54b9;
case 0x4b54be:goto L4b54be;
case 0x4b54c1:c.instructions+=6;goto B4b54c1;
case 0x4b54c3:c.instructions+=5;goto B4b54c3;
case 0x4b54c5:c.instructions+=4;goto B4b54c5;
case 0x4b54ca:c.instructions+=3;goto B4b54ca;
case 0x4b54cb:c.instructions+=2;goto B4b54cb;
case 0x4b54d0:c.instructions+=1;goto B4b54d0;
case 0x4b54d5:goto L4b54d5;
case 0x4b54d6:c.instructions+=7;goto B4b54d6;
case 0x4b54d8:c.instructions+=6;goto B4b54d8;
case 0x4b54da:c.instructions+=5;goto B4b54da;
case 0x4b54de:c.instructions+=4;goto B4b54de;
case 0x4b54e0:c.instructions+=3;goto B4b54e0;
case 0x4b54e1:c.instructions+=2;goto B4b54e1;
case 0x4b54e5:c.instructions+=1;goto B4b54e5;
case 0x4b54ea:goto L4b54ea;
case 0x4b54ee:c.instructions+=8;goto B4b54ee;
case 0x4b54f1:c.instructions+=7;goto B4b54f1;
case 0x4b54f5:c.instructions+=6;goto B4b54f5;
case 0x4b54f8:c.instructions+=5;goto B4b54f8;
case 0x4b54f9:c.instructions+=4;goto B4b54f9;
case 0x4b54ff:c.instructions+=3;goto B4b54ff;
case 0x4b5501:c.instructions+=2;goto B4b5501;
case 0x4b5503:c.instructions+=1;goto B4b5503;
case 0x4b5508:goto L4b5508;
case 0x4b550b:c.instructions+=3;goto B4b550b;
case 0x4b550c:c.instructions+=2;goto B4b550c;
case 0x4b5511:c.instructions+=1;goto B4b5511;
case 0x4b5516:goto L4b5516;
case 0x4b5519:c.instructions+=2;goto B4b5519;
case 0x4b551b:c.instructions+=1;goto B4b551b;
case 0x4b5520:goto L4b5520;
case 0x4b5521:c.instructions+=3;goto B4b5521;
case 0x4b5526:c.instructions+=2;goto B4b5526;
case 0x4b5527:c.instructions+=1;goto B4b5527;
case 0x4b552c:goto L4b552c;
case 0x4b552f:c.instructions+=2;goto B4b552f;
case 0x4b5530:c.instructions+=1;goto B4b5530;
case 0x4b5535:goto L4b5535;
case 0x4b553a:c.instructions+=4;goto B4b553a;
case 0x4b5541:c.instructions+=3;goto B4b5541;
case 0x4b5546:c.instructions+=2;goto B4b5546;
case 0x4b5547:c.instructions+=1;goto B4b5547;
case 0x4b554c:goto L4b554c;
case 0x4b5551:c.instructions+=7;goto B4b5551;
case 0x4b5554:c.instructions+=6;goto B4b5554;
case 0x4b5559:c.instructions+=5;goto B4b5559;
case 0x4b555d:c.instructions+=4;goto B4b555d;
case 0x4b5560:c.instructions+=3;goto B4b5560;
case 0x4b5562:c.instructions+=2;goto B4b5562;
case 0x4b5564:c.instructions+=1;goto B4b5564;
case 0x4b5566:goto L4b5566;
case 0x4b5569:c.instructions+=1;goto B4b5569;
case 0x4b556b:goto L4b556b;
case 0x4b556e:c.instructions+=1;goto B4b556e;
case 0x4b5570:goto L4b5570;
case 0x4b5572:c.instructions+=1;goto B4b5572;
case 0x4b5574:goto L4b5574;
case 0x4b5579:c.instructions+=2;goto B4b5579;
case 0x4b5581:c.instructions+=1;goto B4b5581;
case 0x4b5586:goto L4b5586;
case 0x4b5588:c.instructions+=1;goto B4b5588;
case 0x4b558e:goto L4b558e;
case 0x4b5592:c.instructions+=2;goto B4b5592;
case 0x4b5595:c.instructions+=1;goto B4b5595;
case 0x4b559b:goto L4b559b;
case 0x4b55a2:goto L4b55a2;
case 0x4b55a7:c.instructions+=2;goto B4b55a7;
case 0x4b55ab:c.instructions+=1;goto B4b55ab;
case 0x4b55b0:goto L4b55b0;
case 0x4b55b5:c.instructions+=2;goto B4b55b5;
case 0x4b55bd:c.instructions+=1;goto B4b55bd;
case 0x4b55bf:goto L4b55bf;
case 0x4b55c4:c.instructions+=2;goto B4b55c4;
case 0x4b55cc:c.instructions+=1;goto B4b55cc;
case 0x4b55ce:goto L4b55ce;
case 0x4b55d3:c.instructions+=2;goto B4b55d3;
case 0x4b55db:c.instructions+=1;goto B4b55db;
case 0x4b55dd:goto L4b55dd;
case 0x4b55e2:c.instructions+=1;goto B4b55e2;
case 0x4b55e4:goto L4b55e4;
case 0x4b55e8:c.instructions+=2;goto B4b55e8;
case 0x4b55eb:c.instructions+=1;goto B4b55eb;
case 0x4b55ed:goto L4b55ed;
case 0x4b55f4:goto L4b55f4;
case 0x4b55f9:c.instructions+=2;goto B4b55f9;
case 0x4b55fd:c.instructions+=1;goto B4b55fd;
case 0x4b55ff:goto L4b55ff;
case 0x4b5604:c.instructions+=2;goto B4b5604;
case 0x4b560c:c.instructions+=1;goto B4b560c;
case 0x4b560e:goto L4b560e;
case 0x4b5613:c.instructions+=2;goto B4b5613;
case 0x4b561b:c.instructions+=1;goto B4b561b;
case 0x4b561d:goto L4b561d;
case 0x4b5622:c.instructions+=2;goto B4b5622;
case 0x4b562a:c.instructions+=1;goto B4b562a;
case 0x4b562c:goto L4b562c;
case 0x4b5631:goto L4b5631;
case 0x4b5639:goto L4b5639;
case 0x4b563c:c.instructions+=3;goto B4b563c;
case 0x4b5641:c.instructions+=2;goto B4b5641;
case 0x4b5642:c.instructions+=1;goto B4b5642;
case 0x4b5647:goto L4b5647;
case 0x4b5648:c.instructions+=1;goto B4b5648;
case 0x4b564d:goto L4b564d;
case 0x4b5650:c.instructions+=3;goto B4b5650;
case 0x4b5651:c.instructions+=2;goto B4b5651;
case 0x4b5655:c.instructions+=1;goto B4b5655;
case 0x4b565a:goto L4b565a;
case 0x4b565b:c.instructions+=6;goto B4b565b;
case 0x4b565f:c.instructions+=5;goto B4b565f;
case 0x4b5666:c.instructions+=4;goto B4b5666;
case 0x4b5667:c.instructions+=3;goto B4b5667;
case 0x4b566c:c.instructions+=2;goto B4b566c;
case 0x4b566d:c.instructions+=1;goto B4b566d;
case 0x4b5672:goto L4b5672;
case 0x4b5676:c.instructions+=3;goto B4b5676;
case 0x4b5679:c.instructions+=2;goto B4b5679;
case 0x4b567a:c.instructions+=1;goto B4b567a;
case 0x4b567f:goto L4b567f;
case 0x4b5680:c.instructions+=3;goto B4b5680;
case 0x4b5685:c.instructions+=2;goto B4b5685;
case 0x4b5686:c.instructions+=1;goto B4b5686;
case 0x4b568b:goto L4b568b;
case 0x4b568e:c.instructions+=5;goto B4b568e;
case 0x4b5690:c.instructions+=4;goto B4b5690;
case 0x4b5694:c.instructions+=3;goto B4b5694;
case 0x4b5695:c.instructions+=2;goto B4b5695;
case 0x4b5697:c.instructions+=1;goto B4b5697;
case 0x4b569c:goto L4b569c;
case 0x4b56a1:c.instructions+=4;goto B4b56a1;
case 0x4b56a5:c.instructions+=3;goto B4b56a5;
case 0x4b56aa:c.instructions+=2;goto B4b56aa;
case 0x4b56ab:c.instructions+=1;goto B4b56ab;
case 0x4b56b0:goto L4b56b0;
case 0x4b56b3:c.instructions+=7;goto B4b56b3;
case 0x4b56b7:c.instructions+=6;goto B4b56b7;
case 0x4b56b8:c.instructions+=5;goto B4b56b8;
case 0x4b56bf:c.instructions+=4;goto B4b56bf;
case 0x4b56c0:c.instructions+=3;goto B4b56c0;
case 0x4b56c5:c.instructions+=2;goto B4b56c5;
case 0x4b56c6:c.instructions+=1;goto B4b56c6;
case 0x4b56cb:goto L4b56cb;
case 0x4b56ce:c.instructions+=1;goto B4b56ce;
case 0x4b56cf:goto L4b56cf;
case 0x4b56d0:c.instructions+=3;goto B4b56d0;
case 0x4b56d1:c.instructions+=2;goto B4b56d1;
case 0x4b56d7:c.instructions+=1;goto B4b56d7;
case 0x4b5710:goto L4b5710;
case 0x4b5711:c.instructions+=2;goto B4b5711;
case 0x4b5713:c.instructions+=1;goto B4b5713;
case 0x4b5718:goto L4b5718;
case 0x4b571d:c.instructions+=1;goto B4b571d;
case 0x4b571f:goto L4b571f;
case 0x4b5720:c.instructions+=1;goto B4b5720;
case 0x4b5725:goto L4b5725;
case 0x4b5728:goto L4b5728;
case 0x4b572a:c.instructions+=2;goto B4b572a;
case 0x4b572b:c.instructions+=1;goto B4b572b;
case 0x4b5730:goto L4b5730;
case 0x4b5736:c.instructions+=4;goto B4b5736;
case 0x4b573c:c.instructions+=3;goto B4b573c;
case 0x4b573d:c.instructions+=2;goto B4b573d;
case 0x4b573e:c.instructions+=1;goto B4b573e;
case 0x4b5743:goto L4b5743;
case 0x4b5745:c.instructions+=2;goto B4b5745;
case 0x4b5747:c.instructions+=1;goto B4b5747;
case 0x4b5749:goto L4b5749;
case 0x4b574b:c.instructions+=1;goto B4b574b;
case 0x4b5750:goto L4b5750;
case 0x4b5753:c.instructions+=2;goto B4b5753;
case 0x4b5755:c.instructions+=1;goto B4b5755;
case 0x4b5757:goto L4b5757;
case 0x4b575a:c.instructions+=3;goto B4b575a;
case 0x4b575d:c.instructions+=2;goto B4b575d;
case 0x4b575f:c.instructions+=1;goto B4b575f;
case 0x4b5761:goto L4b5761;
case 0x4b5763:c.instructions+=1;goto B4b5763;
case 0x4b5765:goto L4b5765;
case 0x4b5768:c.instructions+=1;goto B4b5768;
case 0x4b576a:goto L4b576a;
case 0x4b576c:goto L4b576c;
case 0x4b5770:c.instructions+=1;goto B4b5770;
case 0x4b5772:goto L4b5772;
case 0x4b5774:c.instructions+=2;goto B4b5774;
case 0x4b5776:c.instructions+=1;goto B4b5776;
case 0x4b5778:goto L4b5778;
case 0x4b577a:c.instructions+=2;goto B4b577a;
case 0x4b577c:c.instructions+=1;goto B4b577c;
case 0x4b577e:goto L4b577e;
case 0x4b5781:c.instructions+=1;goto B4b5781;
case 0x4b5783:goto L4b5783;
case 0x4b5785:goto L4b5785;
case 0x4b5788:c.instructions+=18;goto B4b5788;
case 0x4b578b:c.instructions+=17;goto B4b578b;
case 0x4b578c:c.instructions+=16;goto B4b578c;
case 0x4b578f:c.instructions+=15;goto B4b578f;
case 0x4b5790:c.instructions+=14;goto B4b5790;
case 0x4b5793:c.instructions+=13;goto B4b5793;
case 0x4b5794:c.instructions+=12;goto B4b5794;
case 0x4b5797:c.instructions+=11;goto B4b5797;
case 0x4b5798:c.instructions+=10;goto B4b5798;
case 0x4b579b:c.instructions+=9;goto B4b579b;
case 0x4b579c:c.instructions+=8;goto B4b579c;
case 0x4b579f:c.instructions+=7;goto B4b579f;
case 0x4b57a0:c.instructions+=6;goto B4b57a0;
case 0x4b57a3:c.instructions+=5;goto B4b57a3;
case 0x4b57a4:c.instructions+=4;goto B4b57a4;
case 0x4b57a7:c.instructions+=3;goto B4b57a7;
case 0x4b57a8:c.instructions+=2;goto B4b57a8;
case 0x4b57a9:c.instructions+=1;goto B4b57a9;
case 0x4b57ae:goto L4b57ae;
case 0x4b57af:c.instructions+=1;goto B4b57af;
case 0x4b57b0:goto L4b57b0;
case 0x4b57b1:c.instructions+=7;goto B4b57b1;
case 0x4b57b5:c.instructions+=6;goto B4b57b5;
case 0x4b57b6:c.instructions+=5;goto B4b57b6;
case 0x4b57b8:c.instructions+=4;goto B4b57b8;
case 0x4b57bb:c.instructions+=3;goto B4b57bb;
case 0x4b57bd:c.instructions+=2;goto B4b57bd;
case 0x4b57be:c.instructions+=1;goto B4b57be;
case 0x4b57c0:goto L4b57c0;
case 0x4b57c2:c.instructions+=1;goto B4b57c2;
case 0x4b57c4:goto L4b57c4;
case 0x4b57c9:c.instructions+=1;goto B4b57c9;
case 0x4b57ce:goto L4b57ce;
case 0x4b57d3:goto L4b57d3;
case 0x4b57d5:c.instructions+=1;goto B4b57d5;
case 0x4b57d7:goto L4b57d7;
case 0x4b57da:c.instructions+=4;goto B4b57da;
case 0x4b57de:c.instructions+=3;goto B4b57de;
case 0x4b57e4:c.instructions+=2;goto B4b57e4;
case 0x4b57e6:c.instructions+=1;goto B4b57e6;
case 0x4b57eb:goto L4b57eb;
case 0x4b57ed:c.instructions+=1;goto B4b57ed;
case 0x4b57ef:goto L4b57ef;
case 0x4b57f5:c.instructions+=1;goto B4b57f5;
case 0x4b57fa:goto L4b57fa;
case 0x4b57fc:c.instructions+=1;goto B4b57fc;
case 0x4b57fd:goto L4b57fd;
case 0x4b57ff:c.instructions+=1;goto B4b57ff;
case 0x4b5801:goto L4b5801;
case 0x4b5803:goto L4b5803;
case 0x4b5806:c.instructions+=2;goto B4b5806;
case 0x4b5807:c.instructions+=1;goto B4b5807;
case 0x4b5809:goto L4b5809;
case 0x4b580e:goto L4b580e;
case 0x4b5814:c.instructions+=2;goto B4b5814;
case 0x4b5815:c.instructions+=1;goto B4b5815;
case 0x4b581a:goto L4b581a;
case 0x4b581c:c.instructions+=2;goto B4b581c;
case 0x4b581f:c.instructions+=1;goto B4b581f;
case 0x4b5821:goto L4b5821;
case 0x4b5822:goto L4b5822;
case 0x4b5828:c.instructions+=1;goto B4b5828;
case 0x4b582d:goto L4b582d;
case 0x4b5830:goto L4b5830;
case 0x4b5833:c.instructions+=3;goto B4b5833;
case 0x4b5839:c.instructions+=2;goto B4b5839;
case 0x4b583a:c.instructions+=1;goto B4b583a;
case 0x4b583f:goto L4b583f;
case 0x4b5841:c.instructions+=1;goto B4b5841;
case 0x4b5846:goto L4b5846;
case 0x4b584c:c.instructions+=3;goto B4b584c;
case 0x4b5852:c.instructions+=2;goto B4b5852;
case 0x4b5853:c.instructions+=1;goto B4b5853;
case 0x4b5858:goto L4b5858;
case 0x4b585a:c.instructions+=1;goto B4b585a;
case 0x4b585c:goto L4b585c;
case 0x4b5862:c.instructions+=7;goto B4b5862;
case 0x4b5864:c.instructions+=6;goto B4b5864;
case 0x4b5865:c.instructions+=5;goto B4b5865;
case 0x4b5867:c.instructions+=4;goto B4b5867;
case 0x4b5868:c.instructions+=3;goto B4b5868;
case 0x4b586a:c.instructions+=2;goto B4b586a;
case 0x4b586f:c.instructions+=1;goto B4b586f;
case 0x4b5874:goto L4b5874;
case 0x4b5875:c.instructions+=3;goto B4b5875;
case 0x4b5876:c.instructions+=2;goto B4b5876;
case 0x4b5877:c.instructions+=1;goto B4b5877;
case 0x4b5880:goto L4b5880;
case 0x4b5881:c.instructions+=6;goto B4b5881;
case 0x4b5882:c.instructions+=5;goto B4b5882;
case 0x4b5883:c.instructions+=4;goto B4b5883;
case 0x4b5885:c.instructions+=3;goto B4b5885;
case 0x4b5888:c.instructions+=2;goto B4b5888;
case 0x4b588d:c.instructions+=1;goto B4b588d;
case 0x4b5892:goto L4b5892;
case 0x4b5893:c.instructions+=2;goto B4b5893;
case 0x4b5894:c.instructions+=1;goto B4b5894;
case 0x4b5899:goto L4b5899;
case 0x4b589a:c.instructions+=1;goto B4b589a;
case 0x4b589f:goto L4b589f;
case 0x4b58a2:c.instructions+=2;goto B4b58a2;
case 0x4b58a7:c.instructions+=1;goto B4b58a7;
case 0x4b58ac:goto L4b58ac;
case 0x4b58ad:c.instructions+=2;goto B4b58ad;
case 0x4b58ae:c.instructions+=1;goto B4b58ae;
case 0x4b58b3:goto L4b58b3;
case 0x4b58b4:c.instructions+=1;goto B4b58b4;
case 0x4b58b9:goto L4b58b9;
case 0x4b58bd:c.instructions+=6;goto B4b58bd;
case 0x4b58c0:c.instructions+=5;goto B4b58c0;
case 0x4b58c2:c.instructions+=4;goto B4b58c2;
case 0x4b58c4:c.instructions+=3;goto B4b58c4;
case 0x4b58c6:c.instructions+=2;goto B4b58c6;
case 0x4b58cb:c.instructions+=1;goto B4b58cb;
case 0x4b58cd:goto L4b58cd;
case 0x4b58d0:c.instructions+=3;goto B4b58d0;
case 0x4b58d5:c.instructions+=2;goto B4b58d5;
case 0x4b58d6:c.instructions+=1;goto B4b58d6;
case 0x4b58db:goto L4b58db;
case 0x4b58de:c.instructions+=5;goto B4b58de;
case 0x4b58e0:c.instructions+=4;goto B4b58e0;
case 0x4b58e5:c.instructions+=3;goto B4b58e5;
case 0x4b58ea:c.instructions+=2;goto B4b58ea;
case 0x4b58eb:c.instructions+=1;goto B4b58eb;
case 0x4b58f0:goto L4b58f0;
case 0x4b58f3:c.instructions+=2;goto B4b58f3;
case 0x4b58f8:c.instructions+=1;goto B4b58f8;
case 0x4b58fd:goto L4b58fd;
case 0x4b5902:c.instructions+=1;goto B4b5902;
case 0x4b5907:goto L4b5907;
case 0x4b5908:c.instructions+=3;goto B4b5908;
case 0x4b5909:c.instructions+=2;goto B4b5909;
case 0x4b590a:c.instructions+=1;goto B4b590a;
case 0x4b590d:goto L4b590d;
case 0x4b5910:c.instructions+=3;goto B4b5910;
case 0x4b5915:c.instructions+=2;goto B4b5915;
case 0x4b5916:c.instructions+=1;goto B4b5916;
case 0x4b591b:goto L4b591b;
case 0x4b5921:c.instructions+=4;goto B4b5921;
case 0x4b5924:c.instructions+=3;goto B4b5924;
case 0x4b5925:c.instructions+=2;goto B4b5925;
case 0x4b5926:c.instructions+=1;goto B4b5926;
case 0x4b592b:goto L4b592b;
case 0x4b592c:c.instructions+=1;goto B4b592c;
case 0x4b5931:goto L4b5931;
case 0x4b5937:c.instructions+=4;goto B4b5937;
case 0x4b593a:c.instructions+=3;goto B4b593a;
case 0x4b593b:c.instructions+=2;goto B4b593b;
case 0x4b593c:c.instructions+=1;goto B4b593c;
case 0x4b5941:goto L4b5941;
case 0x4b5942:c.instructions+=1;goto B4b5942;
case 0x4b5947:goto L4b5947;
case 0x4b594d:c.instructions+=6;goto B4b594d;
case 0x4b5950:c.instructions+=5;goto B4b5950;
case 0x4b5956:c.instructions+=4;goto B4b5956;
case 0x4b595c:c.instructions+=3;goto B4b595c;
case 0x4b595d:c.instructions+=2;goto B4b595d;
case 0x4b595e:c.instructions+=1;goto B4b595e;
case 0x4b5963:goto L4b5963;
case 0x4b5964:c.instructions+=1;goto B4b5964;
case 0x4b5969:goto L4b5969;
case 0x4b596f:c.instructions+=4;goto B4b596f;
case 0x4b5972:c.instructions+=3;goto B4b5972;
case 0x4b5973:c.instructions+=2;goto B4b5973;
case 0x4b5974:c.instructions+=1;goto B4b5974;
case 0x4b5979:goto L4b5979;
case 0x4b597a:c.instructions+=1;goto B4b597a;
case 0x4b597f:goto L4b597f;
case 0x4b5985:c.instructions+=7;goto B4b5985;
case 0x4b5988:c.instructions+=6;goto B4b5988;
case 0x4b598e:c.instructions+=5;goto B4b598e;
case 0x4b5994:c.instructions+=4;goto B4b5994;
case 0x4b5997:c.instructions+=3;goto B4b5997;
case 0x4b5998:c.instructions+=2;goto B4b5998;
case 0x4b5999:c.instructions+=1;goto B4b5999;
case 0x4b599e:goto L4b599e;
case 0x4b599f:c.instructions+=1;goto B4b599f;
case 0x4b59a4:goto L4b59a4;
case 0x4b59aa:c.instructions+=4;goto B4b59aa;
case 0x4b59ad:c.instructions+=3;goto B4b59ad;
case 0x4b59ae:c.instructions+=2;goto B4b59ae;
case 0x4b59af:c.instructions+=1;goto B4b59af;
case 0x4b59b4:goto L4b59b4;
case 0x4b59b5:c.instructions+=1;goto B4b59b5;
case 0x4b59ba:goto L4b59ba;
case 0x4b59bd:c.instructions+=6;goto B4b59bd;
case 0x4b59c3:c.instructions+=5;goto B4b59c3;
case 0x4b59c4:c.instructions+=4;goto B4b59c4;
case 0x4b59ca:c.instructions+=3;goto B4b59ca;
case 0x4b59cb:c.instructions+=2;goto B4b59cb;
case 0x4b59cc:c.instructions+=1;goto B4b59cc;
case 0x4b59d0:goto L4b59d0;
case 0x4b59d1:c.instructions+=4;goto B4b59d1;
case 0x4b59d3:c.instructions+=3;goto B4b59d3;
case 0x4b59d9:c.instructions+=2;goto B4b59d9;
case 0x4b59db:c.instructions+=1;goto B4b59db;
case 0x4b59e1:goto L4b59e1;
case 0x4b59e6:c.instructions+=1;goto B4b59e6;
case 0x4b59eb:goto L4b59eb;
case 0x4b59ed:c.instructions+=1;goto B4b59ed;
case 0x4b59ef:goto L4b59ef;
case 0x4b59f0:c.instructions+=5;goto B4b59f0;
case 0x4b59f1:c.instructions+=4;goto B4b59f1;
case 0x4b59f3:c.instructions+=3;goto B4b59f3;
case 0x4b59f5:c.instructions+=2;goto B4b59f5;
case 0x4b59fc:c.instructions+=1;goto B4b59fc;
case 0x4b5a01:goto L4b5a01;
case 0x4b5a07:c.instructions+=3;goto B4b5a07;
case 0x4b5a09:c.instructions+=2;goto B4b5a09;
case 0x4b5a0e:c.instructions+=1;goto B4b5a0e;
case 0x4b5a13:goto L4b5a13;
case 0x4b5a15:c.instructions+=1;goto B4b5a15;
case 0x4b5a1a:goto L4b5a1a;
case 0x4b5a20:c.instructions+=2;goto B4b5a20;
case 0x4b5a22:c.instructions+=1;goto B4b5a22;
case 0x4b5a24:goto L4b5a24;
case 0x4b5a27:c.instructions+=6;goto B4b5a27;
case 0x4b5a2c:c.instructions+=5;goto B4b5a2c;
case 0x4b5a33:c.instructions+=4;goto B4b5a33;
case 0x4b5a39:c.instructions+=3;goto B4b5a39;
case 0x4b5a3c:c.instructions+=2;goto B4b5a3c;
case 0x4b5a42:c.instructions+=1;goto B4b5a42;
case 0x4b5a45:goto L4b5a45;
case 0x4b5a48:c.instructions+=8;goto B4b5a48;
case 0x4b5a4d:c.instructions+=7;goto B4b5a4d;
case 0x4b5a52:c.instructions+=6;goto B4b5a52;
case 0x4b5a54:c.instructions+=5;goto B4b5a54;
case 0x4b5a56:c.instructions+=4;goto B4b5a56;
case 0x4b5a5b:c.instructions+=3;goto B4b5a5b;
case 0x4b5a5c:c.instructions+=2;goto B4b5a5c;
case 0x4b5a5d:c.instructions+=1;goto B4b5a5d;
case 0x4b5a62:goto L4b5a62;
case 0x4b5a65:c.instructions+=3;goto B4b5a65;
case 0x4b5a66:c.instructions+=2;goto B4b5a66;
case 0x4b5a6d:c.instructions+=1;goto B4b5a6d;
case 0x4b5a6e:goto L4b5a6e;
case 0x4b5a6f:c.instructions+=1;goto B4b5a6f;
case 0x4b5a70:goto L4b5a70;
case 0x4b5a71:c.instructions+=6;goto B4b5a71;
case 0x4b5a73:c.instructions+=5;goto B4b5a73;
case 0x4b5a76:c.instructions+=4;goto B4b5a76;
case 0x4b5a7b:c.instructions+=3;goto B4b5a7b;
case 0x4b5a7c:c.instructions+=2;goto B4b5a7c;
case 0x4b5a7e:c.instructions+=1;goto B4b5a7e;
case 0x4b5a80:goto L4b5a80;
case 0x4b5a85:c.instructions+=1;goto B4b5a85;
case 0x4b5a87:goto L4b5a87;
case 0x4b5a8a:c.instructions+=5;goto B4b5a8a;
case 0x4b5a8d:c.instructions+=4;goto B4b5a8d;
case 0x4b5a8e:c.instructions+=3;goto B4b5a8e;
case 0x4b5a90:c.instructions+=2;goto B4b5a90;
case 0x4b5a91:c.instructions+=1;goto B4b5a91;
case 0x4b5a96:goto L4b5a96;
case 0x4b5a9c:c.instructions+=4;goto B4b5a9c;
case 0x4b5a9f:c.instructions+=3;goto B4b5a9f;
case 0x4b5aa2:c.instructions+=2;goto B4b5aa2;
case 0x4b5aa5:c.instructions+=1;goto B4b5aa5;
case 0x4b5aaa:goto L4b5aaa;
case 0x4b5aaf:c.instructions+=1;goto B4b5aaf;
case 0x4b5ab4:goto L4b5ab4;
case 0x4b5ab6:c.instructions+=1;goto B4b5ab6;
case 0x4b5abb:goto L4b5abb;
case 0x4b5ac2:goto L4b5ac2;
case 0x4b5ac3:c.instructions+=2;goto B4b5ac3;
case 0x4b5ac4:c.instructions+=1;goto B4b5ac4;
case 0x4b5ad0:goto L4b5ad0;
case 0x4b5ad1:c.instructions+=10;goto B4b5ad1;
case 0x4b5ad3:c.instructions+=9;goto B4b5ad3;
case 0x4b5ad4:c.instructions+=8;goto B4b5ad4;
case 0x4b5ad6:c.instructions+=7;goto B4b5ad6;
case 0x4b5adc:c.instructions+=6;goto B4b5adc;
case 0x4b5adf:c.instructions+=5;goto B4b5adf;
case 0x4b5ae0:c.instructions+=4;goto B4b5ae0;
case 0x4b5ae6:c.instructions+=3;goto B4b5ae6;
case 0x4b5ae9:c.instructions+=2;goto B4b5ae9;
case 0x4b5aee:c.instructions+=1;goto B4b5aee;
case 0x4b5af4:goto L4b5af4;
case 0x4b5afa:goto L4b5afa;
case 0x4b5aff:c.instructions+=1;goto B4b5aff;
case 0x4b5b01:goto L4b5b01;
case 0x4b5b06:c.instructions+=1;goto B4b5b06;
case 0x4b5b0c:goto L4b5b0c;
case 0x4b5b11:c.instructions+=1;goto B4b5b11;
case 0x4b5b17:goto L4b5b17;
case 0x4b5b1d:c.instructions+=3;goto B4b5b1d;
case 0x4b5b1f:c.instructions+=2;goto B4b5b1f;
case 0x4b5b24:c.instructions+=1;goto B4b5b24;
case 0x4b5b26:goto L4b5b26;
case 0x4b5b28:c.instructions+=4;goto B4b5b28;
case 0x4b5b2a:c.instructions+=3;goto B4b5b2a;
case 0x4b5b2b:c.instructions+=2;goto B4b5b2b;
case 0x4b5b32:c.instructions+=1;goto B4b5b32;
case 0x4b5b37:goto L4b5b37;
case 0x4b5b3a:c.instructions+=4;goto B4b5b3a;
case 0x4b5b3b:c.instructions+=3;goto B4b5b3b;
case 0x4b5b3c:c.instructions+=2;goto B4b5b3c;
case 0x4b5b3d:c.instructions+=1;goto B4b5b3d;
case 0x4b5b40:goto L4b5b40;
case 0x4b5b42:c.instructions+=4;goto B4b5b42;
case 0x4b5b44:c.instructions+=3;goto B4b5b44;
case 0x4b5b45:c.instructions+=2;goto B4b5b45;
case 0x4b5b4c:c.instructions+=1;goto B4b5b4c;
case 0x4b5b51:goto L4b5b51;
case 0x4b5b54:c.instructions+=4;goto B4b5b54;
case 0x4b5b55:c.instructions+=3;goto B4b5b55;
case 0x4b5b56:c.instructions+=2;goto B4b5b56;
case 0x4b5b57:c.instructions+=1;goto B4b5b57;
case 0x4b5b5a:goto L4b5b5a;
case 0x4b5b60:c.instructions+=3;goto B4b5b60;
case 0x4b5b62:c.instructions+=2;goto B4b5b62;
case 0x4b5b67:c.instructions+=1;goto B4b5b67;
case 0x4b5b69:goto L4b5b69;
case 0x4b5b6b:c.instructions+=4;goto B4b5b6b;
case 0x4b5b6d:c.instructions+=3;goto B4b5b6d;
case 0x4b5b6e:c.instructions+=2;goto B4b5b6e;
case 0x4b5b75:c.instructions+=1;goto B4b5b75;
case 0x4b5b7a:goto L4b5b7a;
case 0x4b5b7d:c.instructions+=4;goto B4b5b7d;
case 0x4b5b7e:c.instructions+=3;goto B4b5b7e;
case 0x4b5b7f:c.instructions+=2;goto B4b5b7f;
case 0x4b5b80:c.instructions+=1;goto B4b5b80;
case 0x4b5b83:goto L4b5b83;
case 0x4b5b85:c.instructions+=4;goto B4b5b85;
case 0x4b5b87:c.instructions+=3;goto B4b5b87;
case 0x4b5b88:c.instructions+=2;goto B4b5b88;
case 0x4b5b8f:c.instructions+=1;goto B4b5b8f;
case 0x4b5b94:goto L4b5b94;
case 0x4b5b97:c.instructions+=4;goto B4b5b97;
case 0x4b5b98:c.instructions+=3;goto B4b5b98;
case 0x4b5b99:c.instructions+=2;goto B4b5b99;
case 0x4b5b9a:c.instructions+=1;goto B4b5b9a;
case 0x4b5b9d:goto L4b5b9d;
case 0x4b5ba2:c.instructions+=1;goto B4b5ba2;
case 0x4b5ba4:goto L4b5ba4;
case 0x4b5ba9:c.instructions+=1;goto B4b5ba9;
case 0x4b5baf:goto L4b5baf;
case 0x4b5bb5:c.instructions+=3;goto B4b5bb5;
case 0x4b5bb7:c.instructions+=2;goto B4b5bb7;
case 0x4b5bbc:c.instructions+=1;goto B4b5bbc;
case 0x4b5bbe:goto L4b5bbe;
case 0x4b5bc0:c.instructions+=4;goto B4b5bc0;
case 0x4b5bc2:c.instructions+=3;goto B4b5bc2;
case 0x4b5bc3:c.instructions+=2;goto B4b5bc3;
case 0x4b5bca:c.instructions+=1;goto B4b5bca;
case 0x4b5bcf:goto L4b5bcf;
case 0x4b5bd4:c.instructions+=4;goto B4b5bd4;
case 0x4b5bd6:c.instructions+=3;goto B4b5bd6;
case 0x4b5bd8:c.instructions+=2;goto B4b5bd8;
case 0x4b5bd9:c.instructions+=1;goto B4b5bd9;
case 0x4b5bde:goto L4b5bde;
case 0x4b5be1:c.instructions+=4;goto B4b5be1;
case 0x4b5be2:c.instructions+=3;goto B4b5be2;
case 0x4b5be3:c.instructions+=2;goto B4b5be3;
case 0x4b5be4:c.instructions+=1;goto B4b5be4;
case 0x4b5be7:goto L4b5be7;
case 0x4b5be9:c.instructions+=4;goto B4b5be9;
case 0x4b5beb:c.instructions+=3;goto B4b5beb;
case 0x4b5bec:c.instructions+=2;goto B4b5bec;
case 0x4b5bf3:c.instructions+=1;goto B4b5bf3;
case 0x4b5bf8:goto L4b5bf8;
case 0x4b5bfd:c.instructions+=4;goto B4b5bfd;
case 0x4b5bff:c.instructions+=3;goto B4b5bff;
case 0x4b5c01:c.instructions+=2;goto B4b5c01;
case 0x4b5c02:c.instructions+=1;goto B4b5c02;
case 0x4b5c07:goto L4b5c07;
case 0x4b5c0a:c.instructions+=4;goto B4b5c0a;
case 0x4b5c0b:c.instructions+=3;goto B4b5c0b;
case 0x4b5c0c:c.instructions+=2;goto B4b5c0c;
case 0x4b5c0d:c.instructions+=1;goto B4b5c0d;
case 0x4b5c10:goto L4b5c10;
case 0x4b5c17:c.instructions+=5;goto B4b5c17;
case 0x4b5c1a:c.instructions+=4;goto B4b5c1a;
case 0x4b5c1b:c.instructions+=3;goto B4b5c1b;
case 0x4b5c1d:c.instructions+=2;goto B4b5c1d;
case 0x4b5c1f:c.instructions+=1;goto B4b5c1f;
case 0x4b5c24:goto L4b5c24;
case 0x4b5c27:c.instructions+=4;goto B4b5c27;
case 0x4b5c2a:c.instructions+=3;goto B4b5c2a;
case 0x4b5c2c:c.instructions+=2;goto B4b5c2c;
case 0x4b5c2f:c.instructions+=1;goto B4b5c2f;
case 0x4b5c34:goto L4b5c34;
case 0x4b5c37:c.instructions+=2;goto B4b5c37;
case 0x4b5c38:c.instructions+=1;goto B4b5c38;
case 0x4b5c3b:goto L4b5c3b;
case 0x4b5c3e:c.instructions+=4;goto B4b5c3e;
case 0x4b5c40:c.instructions+=3;goto B4b5c40;
case 0x4b5c42:c.instructions+=2;goto B4b5c42;
case 0x4b5c44:c.instructions+=1;goto B4b5c44;
case 0x4b5c47:goto L4b5c47;
case 0x4b5c4c:c.instructions+=1;goto B4b5c4c;
case 0x4b5c51:goto L4b5c51;
case 0x4b5c53:c.instructions+=1;goto B4b5c53;
case 0x4b5c58:goto L4b5c58;
case 0x4b5c5f:c.instructions+=1;goto B4b5c5f;
case 0x4b5c60:goto L4b5c60;
case 0x4b5c61:c.instructions+=3;goto B4b5c61;
case 0x4b5c62:c.instructions+=2;goto B4b5c62;
case 0x4b5c63:c.instructions+=1;goto B4b5c63;
case 0x4b5c70:goto L4b5c70;
case 0x4b5c71:c.instructions+=3;goto B4b5c71;
case 0x4b5c72:c.instructions+=2;goto B4b5c72;
case 0x4b5c74:c.instructions+=1;goto B4b5c74;
case 0x4b5c79:goto L4b5c79;
case 0x4b5c7c:c.instructions+=5;goto B4b5c7c;
case 0x4b5c7f:c.instructions+=4;goto B4b5c7f;
case 0x4b5c80:c.instructions+=3;goto B4b5c80;
case 0x4b5c82:c.instructions+=2;goto B4b5c82;
case 0x4b5c83:c.instructions+=1;goto B4b5c83;
case 0x4b5c88:goto L4b5c88;
case 0x4b5c8e:c.instructions+=4;goto B4b5c8e;
case 0x4b5c91:c.instructions+=3;goto B4b5c91;
case 0x4b5c92:c.instructions+=2;goto B4b5c92;
case 0x4b5c93:c.instructions+=1;goto B4b5c93;
case 0x4b5c98:goto L4b5c98;
case 0x4b5c99:c.instructions+=1;goto B4b5c99;
case 0x4b5c9e:goto L4b5c9e;
case 0x4b5ca4:c.instructions+=4;goto B4b5ca4;
case 0x4b5ca7:c.instructions+=3;goto B4b5ca7;
case 0x4b5ca8:c.instructions+=2;goto B4b5ca8;
case 0x4b5ca9:c.instructions+=1;goto B4b5ca9;
case 0x4b5cae:goto L4b5cae;
case 0x4b5caf:c.instructions+=1;goto B4b5caf;
case 0x4b5cb4:goto L4b5cb4;
case 0x4b5cb6:c.instructions+=7;goto B4b5cb6;
case 0x4b5cbc:c.instructions+=6;goto B4b5cbc;
case 0x4b5cbf:c.instructions+=5;goto B4b5cbf;
case 0x4b5cc5:c.instructions+=4;goto B4b5cc5;
case 0x4b5ccb:c.instructions+=3;goto B4b5ccb;
case 0x4b5ccc:c.instructions+=2;goto B4b5ccc;
case 0x4b5ccd:c.instructions+=1;goto B4b5ccd;
case 0x4b5cd2:goto L4b5cd2;
case 0x4b5cd3:c.instructions+=1;goto B4b5cd3;
case 0x4b5cd8:goto L4b5cd8;
case 0x4b5cde:c.instructions+=4;goto B4b5cde;
case 0x4b5ce1:c.instructions+=3;goto B4b5ce1;
case 0x4b5ce2:c.instructions+=2;goto B4b5ce2;
case 0x4b5ce3:c.instructions+=1;goto B4b5ce3;
case 0x4b5ce8:goto L4b5ce8;
case 0x4b5ce9:c.instructions+=1;goto B4b5ce9;
case 0x4b5cee:goto L4b5cee;
case 0x4b5cf4:c.instructions+=6;goto B4b5cf4;
case 0x4b5cf7:c.instructions+=5;goto B4b5cf7;
case 0x4b5cfd:c.instructions+=4;goto B4b5cfd;
case 0x4b5d03:c.instructions+=3;goto B4b5d03;
case 0x4b5d04:c.instructions+=2;goto B4b5d04;
case 0x4b5d05:c.instructions+=1;goto B4b5d05;
case 0x4b5d0a:goto L4b5d0a;
case 0x4b5d0d:c.instructions+=2;goto B4b5d0d;
case 0x4b5d0e:c.instructions+=1;goto B4b5d0e;
case 0x4b5d13:goto L4b5d13;
case 0x4b5d19:c.instructions+=6;goto B4b5d19;
case 0x4b5d1c:c.instructions+=5;goto B4b5d1c;
case 0x4b5d1f:c.instructions+=4;goto B4b5d1f;
case 0x4b5d24:c.instructions+=3;goto B4b5d24;
case 0x4b5d25:c.instructions+=2;goto B4b5d25;
case 0x4b5d26:c.instructions+=1;goto B4b5d26;
case 0x4b5d2b:goto L4b5d2b;
case 0x4b5d2e:c.instructions+=2;goto B4b5d2e;
case 0x4b5d2f:c.instructions+=1;goto B4b5d2f;
case 0x4b5d34:goto L4b5d34;
case 0x4b5d3a:c.instructions+=4;goto B4b5d3a;
case 0x4b5d3d:c.instructions+=3;goto B4b5d3d;
case 0x4b5d3e:c.instructions+=2;goto B4b5d3e;
case 0x4b5d3f:c.instructions+=1;goto B4b5d3f;
case 0x4b5d44:goto L4b5d44;
case 0x4b5d45:c.instructions+=1;goto B4b5d45;
case 0x4b5d4a:goto L4b5d4a;
case 0x4b5d54:c.instructions+=4;goto B4b5d54;
case 0x4b5d57:c.instructions+=3;goto B4b5d57;
case 0x4b5d59:c.instructions+=2;goto B4b5d59;
case 0x4b5d60:c.instructions+=1;goto B4b5d60;
case 0x4b5d65:goto L4b5d65;
case 0x4b5d6c:c.instructions+=4;goto B4b5d6c;
case 0x4b5d6d:c.instructions+=3;goto B4b5d6d;
case 0x4b5d72:c.instructions+=2;goto B4b5d72;
case 0x4b5d73:c.instructions+=1;goto B4b5d73;
case 0x4b5d80:goto L4b5d80;
case 0x4b5d81:c.instructions+=7;goto B4b5d81;
case 0x4b5d82:c.instructions+=6;goto B4b5d82;
case 0x4b5d84:c.instructions+=5;goto B4b5d84;
case 0x4b5d8a:c.instructions+=4;goto B4b5d8a;
case 0x4b5d8d:c.instructions+=3;goto B4b5d8d;
case 0x4b5d8e:c.instructions+=2;goto B4b5d8e;
case 0x4b5d8f:c.instructions+=1;goto B4b5d8f;
case 0x4b5d94:goto L4b5d94;
case 0x4b5d95:c.instructions+=1;goto B4b5d95;
case 0x4b5d9a:goto L4b5d9a;
case 0x4b5da0:c.instructions+=4;goto B4b5da0;
case 0x4b5da3:c.instructions+=3;goto B4b5da3;
case 0x4b5da4:c.instructions+=2;goto B4b5da4;
case 0x4b5da5:c.instructions+=1;goto B4b5da5;
case 0x4b5daa:goto L4b5daa;
case 0x4b5dab:c.instructions+=1;goto B4b5dab;
case 0x4b5db0:goto L4b5db0;
case 0x4b5db2:c.instructions+=7;goto B4b5db2;
case 0x4b5db8:c.instructions+=6;goto B4b5db8;
case 0x4b5dbb:c.instructions+=5;goto B4b5dbb;
case 0x4b5dc1:c.instructions+=4;goto B4b5dc1;
case 0x4b5dc7:c.instructions+=3;goto B4b5dc7;
case 0x4b5dc8:c.instructions+=2;goto B4b5dc8;
case 0x4b5dc9:c.instructions+=1;goto B4b5dc9;
case 0x4b5dce:goto L4b5dce;
case 0x4b5dcf:c.instructions+=1;goto B4b5dcf;
case 0x4b5dd4:goto L4b5dd4;
case 0x4b5dda:c.instructions+=4;goto B4b5dda;
case 0x4b5ddd:c.instructions+=3;goto B4b5ddd;
case 0x4b5dde:c.instructions+=2;goto B4b5dde;
case 0x4b5ddf:c.instructions+=1;goto B4b5ddf;
case 0x4b5de4:goto L4b5de4;
case 0x4b5de5:c.instructions+=1;goto B4b5de5;
case 0x4b5dea:goto L4b5dea;
case 0x4b5df0:c.instructions+=6;goto B4b5df0;
case 0x4b5df3:c.instructions+=5;goto B4b5df3;
case 0x4b5df9:c.instructions+=4;goto B4b5df9;
case 0x4b5dff:c.instructions+=3;goto B4b5dff;
case 0x4b5e00:c.instructions+=2;goto B4b5e00;
case 0x4b5e01:c.instructions+=1;goto B4b5e01;
case 0x4b5e06:goto L4b5e06;
case 0x4b5e07:c.instructions+=1;goto B4b5e07;
case 0x4b5e0c:goto L4b5e0c;
case 0x4b5e12:c.instructions+=6;goto B4b5e12;
case 0x4b5e15:c.instructions+=5;goto B4b5e15;
case 0x4b5e18:c.instructions+=4;goto B4b5e18;
case 0x4b5e1d:c.instructions+=3;goto B4b5e1d;
case 0x4b5e1e:c.instructions+=2;goto B4b5e1e;
case 0x4b5e1f:c.instructions+=1;goto B4b5e1f;
case 0x4b5e24:goto L4b5e24;
case 0x4b5e27:c.instructions+=2;goto B4b5e27;
case 0x4b5e28:c.instructions+=1;goto B4b5e28;
case 0x4b5e2d:goto L4b5e2d;
case 0x4b5e33:c.instructions+=4;goto B4b5e33;
case 0x4b5e36:c.instructions+=3;goto B4b5e36;
case 0x4b5e37:c.instructions+=2;goto B4b5e37;
case 0x4b5e38:c.instructions+=1;goto B4b5e38;
case 0x4b5e3d:goto L4b5e3d;
case 0x4b5e3e:c.instructions+=1;goto B4b5e3e;
case 0x4b5e43:goto L4b5e43;
case 0x4b5e4d:c.instructions+=4;goto B4b5e4d;
case 0x4b5e50:c.instructions+=3;goto B4b5e50;
case 0x4b5e52:c.instructions+=2;goto B4b5e52;
case 0x4b5e59:c.instructions+=1;goto B4b5e59;
case 0x4b5e5e:goto L4b5e5e;
case 0x4b5e65:c.instructions+=3;goto B4b5e65;
case 0x4b5e6a:c.instructions+=2;goto B4b5e6a;
case 0x4b5e71:c.instructions+=1;goto B4b5e71;
case 0x4b5e76:goto L4b5e76;
case 0x4b5e7b:c.instructions+=3;goto B4b5e7b;
case 0x4b5e7e:c.instructions+=2;goto B4b5e7e;
case 0x4b5e7f:c.instructions+=1;goto B4b5e7f;
case 0x4b5e84:goto L4b5e84;
case 0x4b5e8a:c.instructions+=4;goto B4b5e8a;
case 0x4b5e8d:c.instructions+=3;goto B4b5e8d;
case 0x4b5e90:c.instructions+=2;goto B4b5e90;
case 0x4b5e95:c.instructions+=1;goto B4b5e95;
case 0x4b5e9a:goto L4b5e9a;
case 0x4b5e9b:c.instructions+=2;goto B4b5e9b;
case 0x4b5e9c:c.instructions+=1;goto B4b5e9c;
case 0x4b5ea0:goto L4b5ea0;
case 0x4b5ea1:c.instructions+=7;goto B4b5ea1;
case 0x4b5ea3:c.instructions+=6;goto B4b5ea3;
case 0x4b5ea6:c.instructions+=5;goto B4b5ea6;
case 0x4b5ea9:c.instructions+=4;goto B4b5ea9;
case 0x4b5eaa:c.instructions+=3;goto B4b5eaa;
case 0x4b5eac:c.instructions+=2;goto B4b5eac;
case 0x4b5ead:c.instructions+=1;goto B4b5ead;
case 0x4b5eb2:goto L4b5eb2;
case 0x4b5eb5:c.instructions+=4;goto B4b5eb5;
case 0x4b5eb8:c.instructions+=3;goto B4b5eb8;
case 0x4b5ebe:c.instructions+=2;goto B4b5ebe;
case 0x4b5ebf:c.instructions+=1;goto B4b5ebf;
case 0x4b5ec4:goto L4b5ec4;
case 0x4b5ec6:c.instructions+=2;goto B4b5ec6;
case 0x4b5ec7:c.instructions+=1;goto B4b5ec7;
case 0x4b5ed0:goto L4b5ed0;
case 0x4b5ed1:c.instructions+=14;goto B4b5ed1;
case 0x4b5ed3:c.instructions+=13;goto B4b5ed3;
case 0x4b5ed5:c.instructions+=12;goto B4b5ed5;
case 0x4b5eda:c.instructions+=11;goto B4b5eda;
case 0x4b5ee0:c.instructions+=10;goto B4b5ee0;
case 0x4b5ee1:c.instructions+=9;goto B4b5ee1;
case 0x4b5ee8:c.instructions+=8;goto B4b5ee8;
case 0x4b5ee9:c.instructions+=7;goto B4b5ee9;
case 0x4b5eec:c.instructions+=6;goto B4b5eec;
case 0x4b5eed:c.instructions+=5;goto B4b5eed;
case 0x4b5eee:c.instructions+=4;goto B4b5eee;
case 0x4b5ef0:c.instructions+=3;goto B4b5ef0;
case 0x4b5ef1:c.instructions+=2;goto B4b5ef1;
case 0x4b5ef4:c.instructions+=1;goto B4b5ef4;
case 0x4b5ef9:goto L4b5ef9;
case 0x4b5efc:c.instructions+=5;goto B4b5efc;
case 0x4b5f02:c.instructions+=4;goto B4b5f02;
case 0x4b5f08:c.instructions+=3;goto B4b5f08;
case 0x4b5f09:c.instructions+=2;goto B4b5f09;
case 0x4b5f10:c.instructions+=1;goto B4b5f10;
case 0x4b5f15:goto L4b5f15;
case 0x4b5f16:c.instructions+=2;goto B4b5f16;
case 0x4b5f17:c.instructions+=1;goto B4b5f17;
case 0x4b5f1c:goto L4b5f1c;
case 0x4b5f1f:c.instructions+=8;goto B4b5f1f;
case 0x4b5f22:c.instructions+=7;goto B4b5f22;
case 0x4b5f23:c.instructions+=6;goto B4b5f23;
case 0x4b5f25:c.instructions+=5;goto B4b5f25;
case 0x4b5f26:c.instructions+=4;goto B4b5f26;
case 0x4b5f2d:c.instructions+=3;goto B4b5f2d;
case 0x4b5f2f:c.instructions+=2;goto B4b5f2f;
case 0x4b5f30:c.instructions+=1;goto B4b5f30;
case 0x4b5f40:goto L4b5f40;
case 0x4b5f41:c.instructions+=2;goto B4b5f41;
case 0x4b5f43:c.instructions+=1;goto B4b5f43;
case 0x4b5f48:goto L4b5f48;
case 0x4b5f4d:c.instructions+=1;goto B4b5f4d;
case 0x4b5f4f:goto L4b5f4f;
case 0x4b5f50:c.instructions+=1;goto B4b5f50;
case 0x4b5f55:goto L4b5f55;
case 0x4b5f58:goto L4b5f58;
case 0x4b5f5a:c.instructions+=2;goto B4b5f5a;
case 0x4b5f5b:c.instructions+=1;goto B4b5f5b;
case 0x4b5f60:goto L4b5f60;
case 0x4b5f66:c.instructions+=1;goto B4b5f66;
case 0x4b5f70:goto L4b5f70;
case 0x4b5f71:c.instructions+=7;goto B4b5f71;
case 0x4b5f73:c.instructions+=6;goto B4b5f73;
case 0x4b5f76:c.instructions+=5;goto B4b5f76;
case 0x4b5f78:c.instructions+=4;goto B4b5f78;
case 0x4b5f7d:c.instructions+=3;goto B4b5f7d;
case 0x4b5f7e:c.instructions+=2;goto B4b5f7e;
case 0x4b5f82:c.instructions+=1;goto B4b5f82;
case 0x4b5f87:goto L4b5f87;
case 0x4b5f8a:c.instructions+=4;goto B4b5f8a;
case 0x4b5f8c:c.instructions+=3;goto B4b5f8c;
case 0x4b5f91:c.instructions+=2;goto B4b5f91;
case 0x4b5f92:c.instructions+=1;goto B4b5f92;
case 0x4b5f97:goto L4b5f97;
case 0x4b5f9a:c.instructions+=2;goto B4b5f9a;
case 0x4b5f9b:c.instructions+=1;goto B4b5f9b;
case 0x4b5fa0:goto L4b5fa0;
case 0x4b5fa1:c.instructions+=7;goto B4b5fa1;
case 0x4b5fa3:c.instructions+=6;goto B4b5fa3;
case 0x4b5fa6:c.instructions+=5;goto B4b5fa6;
case 0x4b5fa8:c.instructions+=4;goto B4b5fa8;
case 0x4b5fad:c.instructions+=3;goto B4b5fad;
case 0x4b5fae:c.instructions+=2;goto B4b5fae;
case 0x4b5fb2:c.instructions+=1;goto B4b5fb2;
case 0x4b5fb7:goto L4b5fb7;
case 0x4b5fba:c.instructions+=4;goto B4b5fba;
case 0x4b5fbc:c.instructions+=3;goto B4b5fbc;
case 0x4b5fc1:c.instructions+=2;goto B4b5fc1;
case 0x4b5fc2:c.instructions+=1;goto B4b5fc2;
case 0x4b5fc7:goto L4b5fc7;
case 0x4b5fca:c.instructions+=2;goto B4b5fca;
case 0x4b5fcb:c.instructions+=1;goto B4b5fcb;
case 0x4b5fd0:goto L4b5fd0;
case 0x4b5fd3:c.instructions+=5;goto B4b5fd3;
case 0x4b5fd5:c.instructions+=4;goto B4b5fd5;
case 0x4b5fda:c.instructions+=3;goto B4b5fda;
case 0x4b5fdb:c.instructions+=2;goto B4b5fdb;
case 0x4b5fdf:c.instructions+=1;goto B4b5fdf;
case 0x4b5fe4:goto L4b5fe4;
case 0x4b5fe7:c.instructions+=1;goto B4b5fe7;
case 0x4b5ff0:goto L4b5ff0;
case 0x4b5ff3:c.instructions+=5;goto B4b5ff3;
case 0x4b5ff5:c.instructions+=4;goto B4b5ff5;
case 0x4b5ffa:c.instructions+=3;goto B4b5ffa;
case 0x4b5ffb:c.instructions+=2;goto B4b5ffb;
case 0x4b5fff:c.instructions+=1;goto B4b5fff;
default:missing_instruction(c.pc);}
B4b5002:L4b5002:{c.instructions+=2;NFSU2_TR(0x4b5002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5003:{NFSU2_TR(0x4b5003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5008ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5008:L4b5008:{c.instructions+=4;NFSU2_TR(0x4b5008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b500b:{NFSU2_TR(0x4b500b);
u8 U[4];
w4(U+0,u32(0x261a66d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5010:{NFSU2_TR(0x4b5010);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5011:{NFSU2_TR(0x4b5011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5016ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5016:L4b5016:{c.instructions+=2;NFSU2_TR(0x4b5016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5017:{NFSU2_TR(0x4b5017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b501cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b501c:L4b501c:{c.instructions+=4;NFSU2_TR(0x4b501c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4b501f:{NFSU2_TR(0x4b501f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b5026:{NFSU2_TR(0x4b5026);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5029:{NFSU2_TR(0x4b5029);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b507d;}}
}
B4b502b:L4b502b:{c.instructions+=3;NFSU2_TR(0x4b502b);
u8 U[4];
w4(U+0,u32(0x261a66ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5030:{NFSU2_TR(0x4b5030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5031:{NFSU2_TR(0x4b5031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5036ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5036:L4b5036:{c.instructions+=2;NFSU2_TR(0x4b5036);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5037:{NFSU2_TR(0x4b5037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b503cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b503c:L4b503c:{c.instructions+=4;NFSU2_TR(0x4b503c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b503f:{NFSU2_TR(0x4b503f);
u8 U[4];
w4(U+0,u32(0x261a66cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5044:{NFSU2_TR(0x4b5044);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5045:{NFSU2_TR(0x4b5045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b504aull));
TAIL_STATIC(0x5379c0u,537);
}
B4b504a:L4b504a:{c.instructions+=2;NFSU2_TR(0x4b504a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b504b:{NFSU2_TR(0x4b504b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5050ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5050:L4b5050:{c.instructions+=4;NFSU2_TR(0x4b5050);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5053:{NFSU2_TR(0x4b5053);
u8 U[4];
w4(U+0,u32(0x2a7d443dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5058:{NFSU2_TR(0x4b5058);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5059:{NFSU2_TR(0x4b5059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b505eull));
TAIL_STATIC(0x5379c0u,537);
}
B4b505e:L4b505e:{c.instructions+=2;NFSU2_TR(0x4b505e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b505f:{NFSU2_TR(0x4b505f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5064ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5064:L4b5064:{c.instructions+=4;NFSU2_TR(0x4b5064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5067:{NFSU2_TR(0x4b5067);
u8 U[4];
w4(U+0,u32(0xca67c5a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b506c:{NFSU2_TR(0x4b506c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b506d:{NFSU2_TR(0x4b506d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5072ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5072:L4b5072:{c.instructions+=2;NFSU2_TR(0x4b5072);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5073:{NFSU2_TR(0x4b5073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5078ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5078:L4b5078:{c.instructions+=2;NFSU2_TR(0x4b5078);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4b507b:{NFSU2_TR(0x4b507b);
{goto L4b5099;}
}
B4b507d:L4b507d:{c.instructions+=4;NFSU2_TR(0x4b507d);
u8 U[4];
w4(U+0,u32(0xe013d55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5082:{NFSU2_TR(0x4b5082);
u8 U[4];
w4(U+0,u32(0xca67c5a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5087:{NFSU2_TR(0x4b5087);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5088:{NFSU2_TR(0x4b5088);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b508dull));
TAIL_STATIC(0x537a10u,537);
}
B4b508d:L4b508d:{c.instructions+=3;NFSU2_TR(0x4b508d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b5090:{NFSU2_TR(0x4b5090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5091:{NFSU2_TR(0x4b5091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5096ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b5096:L4b5096:{c.instructions+=1;NFSU2_TR(0x4b5096);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b5099:L4b5099:{c.instructions+=5;NFSU2_TR(0x4b5099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b509c:{NFSU2_TR(0x4b509c);
u8 U[4];
w4(U+0,u32(0x7f042bcdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50a1:{NFSU2_TR(0x4b50a1);
u8 U[4];
w4(U+0,u32(0x59c69891ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50a6:{NFSU2_TR(0x4b50a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50a7:{NFSU2_TR(0x4b50a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b50acull));
TAIL_STATIC(0x537a10u,537);
}
B4b50ac:L4b50ac:{c.instructions+=3;NFSU2_TR(0x4b50ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b50af:{NFSU2_TR(0x4b50af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50b0:{NFSU2_TR(0x4b50b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b50b5ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b50b5:L4b50b5:{c.instructions+=6;NFSU2_TR(0x4b50b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b50b8:{NFSU2_TR(0x4b50b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b50bb:{NFSU2_TR(0x4b50bb);
u8 U[4];
w4(U+0,u32(0x95e10f41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50c0:{NFSU2_TR(0x4b50c0);
u8 U[4];
w4(U+0,u32(0x64aff8d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50c5:{NFSU2_TR(0x4b50c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50c6:{NFSU2_TR(0x4b50c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b50cbull));
TAIL_STATIC(0x537a10u,537);
}
B4b50cb:L4b50cb:{c.instructions+=3;NFSU2_TR(0x4b50cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b50ce:{NFSU2_TR(0x4b50ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b50cf:{NFSU2_TR(0x4b50cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b50d4ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b50d4:L4b50d4:{c.instructions+=7;NFSU2_TR(0x4b50d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b50d7:{NFSU2_TR(0x4b50d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b50d8:{NFSU2_TR(0x4b50d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b50d9:{NFSU2_TR(0x4b50d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b50da:{NFSU2_TR(0x4b50da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b50db:{NFSU2_TR(0x4b50db);
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
B4b50de:{NFSU2_TR(0x4b50de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5100:L4b5100:{c.instructions+=11;NFSU2_TR(0x4b5100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x244ull))));
}
B4b5106:{NFSU2_TR(0x4b5106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5107:{NFSU2_TR(0x4b5107);
__builtin_memmove((R+28),(R+4),4);
}
B4b5109:{NFSU2_TR(0x4b5109);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b510c:{NFSU2_TR(0x4b510c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b510f:{NFSU2_TR(0x4b510f);
w4(R+4,u32(0x2ull));
}
B4b5114:{NFSU2_TR(0x4b5114);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B4b5116:{NFSU2_TR(0x4b5116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5119:{NFSU2_TR(0x4b5119);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4b511f:{NFSU2_TR(0x4b511f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5125:{NFSU2_TR(0x4b5125);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b514c;}}
}
B4b5127:L4b5127:{c.instructions+=5;NFSU2_TR(0x4b5127);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5128:{NFSU2_TR(0x4b5128);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b512c:{NFSU2_TR(0x4b512c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b512e:{NFSU2_TR(0x4b512e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b512f:{NFSU2_TR(0x4b512f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5134ull));
TAIL_STATIC(0x50d310u,50d);
}
B4b5134:L4b5134:{c.instructions+=5;NFSU2_TR(0x4b5134);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5137:{NFSU2_TR(0x4b5137);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b513a:{NFSU2_TR(0x4b513a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b513e:{NFSU2_TR(0x4b513e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b513f:{NFSU2_TR(0x4b513f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5144ull));
TAIL_STATIC(0x535fe0u,535);
}
B4b5144:L4b5144:{c.instructions+=3;NFSU2_TR(0x4b5144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5145:{NFSU2_TR(0x4b5145);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b514b:{NFSU2_TR(0x4b514b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b514c:L4b514c:{c.instructions+=7;NFSU2_TR(0x4b514c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b514d:{NFSU2_TR(0x4b514d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b514e:{NFSU2_TR(0x4b514e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b514f:{NFSU2_TR(0x4b514f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5150:{NFSU2_TR(0x4b5150);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b5154:{NFSU2_TR(0x4b5154);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5155:{NFSU2_TR(0x4b5155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b515aull));
TAIL_STATIC(0x43e000u,43e);
}
B4b515a:L4b515a:{c.instructions+=4;NFSU2_TR(0x4b515a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b515d:{NFSU2_TR(0x4b515d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5160:{NFSU2_TR(0x4b5160);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5161:{NFSU2_TR(0x4b5161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5166ull));
TAIL_STATIC(0x51bd70u,51b);
}
B4b5166:L4b5166:{c.instructions+=9;NFSU2_TR(0x4b5166);
__builtin_memmove((R+12),(R+0),4);
}
B4b5168:{NFSU2_TR(0x4b5168);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b516b:{NFSU2_TR(0x4b516b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b516e:{NFSU2_TR(0x4b516e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4b5171:{NFSU2_TR(0x4b5171);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b5174:{NFSU2_TR(0x4b5174);
u8 U[10];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B4b517a:{NFSU2_TR(0x4b517a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b517e:{NFSU2_TR(0x4b517e);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5182:{NFSU2_TR(0x4b5182);
if(r1(R+518)){{goto L4b51b1;}}
}
B4b5184:L4b5184:{c.instructions+=3;NFSU2_TR(0x4b5184);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4b5188:{NFSU2_TR(0x4b5188);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4b518c:{NFSU2_TR(0x4b518c);
__builtin_memmove((R+16),(R+16),4);
}
B4b5190:L4b5190:{c.instructions+=6;NFSU2_TR(0x4b5190);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5192:{NFSU2_TR(0x4b5192);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5194:{NFSU2_TR(0x4b5194);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5195:{NFSU2_TR(0x4b5195);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5196:{NFSU2_TR(0x4b5196);
__builtin_memmove((R+4),(R+12),4);
}
B4b5198:{NFSU2_TR(0x4b5198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b519dull));
TAIL_STATIC(0x50bce0u,50b);
}
B4b519d:L4b519d:{c.instructions+=4;NFSU2_TR(0x4b519d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4b51a1:{NFSU2_TR(0x4b51a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4b51a3:{NFSU2_TR(0x4b51a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b51a6:{NFSU2_TR(0x4b51a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b51b1;}}
}
B4b51a8:L4b51a8:{c.instructions+=3;NFSU2_TR(0x4b51a8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B4b51ab:{NFSU2_TR(0x4b51ab);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4b51af:{NFSU2_TR(0x4b51af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b5190u);}goto L4b5190;}}
}
B4b51b1:L4b51b1:{c.instructions+=3;NFSU2_TR(0x4b51b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b51b4:{NFSU2_TR(0x4b51b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b51b5:{NFSU2_TR(0x4b51b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b51baull));
TAIL_STATIC(0x535f40u,535);
}
B4b51ba:L4b51ba:{c.instructions+=6;NFSU2_TR(0x4b51ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b51bb:{NFSU2_TR(0x4b51bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b51bc:{NFSU2_TR(0x4b51bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b51bd:{NFSU2_TR(0x4b51bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b51be:{NFSU2_TR(0x4b51be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b51c4:{NFSU2_TR(0x4b51c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b51d0:L4b51d0:{c.instructions+=6;NFSU2_TR(0x4b51d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b51d1:{NFSU2_TR(0x4b51d1);
__builtin_memmove((R+24),(R+4),4);
}
B4b51d3:{NFSU2_TR(0x4b51d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b51d9:{NFSU2_TR(0x4b51d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b51da:{NFSU2_TR(0x4b51da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b51db:{NFSU2_TR(0x4b51db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b51e0ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4b51e0:L4b51e0:{c.instructions+=4;NFSU2_TR(0x4b51e0);
__builtin_memmove((R+28),(R+0),4);
}
B4b51e2:{NFSU2_TR(0x4b51e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b51e5:{NFSU2_TR(0x4b51e5);
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
B4b51e7:{NFSU2_TR(0x4b51e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b5256;}}
}
B4b51e9:L4b51e9:{c.instructions+=3;NFSU2_TR(0x4b51e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b51ec:{NFSU2_TR(0x4b51ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b51ee:{NFSU2_TR(0x4b51ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b51fb;}}
}
B4b51f0:L4b51f0:{c.instructions+=3;NFSU2_TR(0x4b51f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b51f3:{NFSU2_TR(0x4b51f3);
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
B4b51f5:{NFSU2_TR(0x4b51f5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b5256;}}
}
B4b51f7:L4b51f7:{c.instructions+=2;NFSU2_TR(0x4b51f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b51f9:{NFSU2_TR(0x4b51f9);
if(r1(R+518)){{goto L4b520d;}}
}
B4b51fb:L4b51fb:{c.instructions+=4;NFSU2_TR(0x4b51fb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5200:{NFSU2_TR(0x4b5200);
__builtin_memmove((R+4),(R+24),4);
}
B4b5202:{NFSU2_TR(0x4b5202);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5206:{NFSU2_TR(0x4b5206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b520bull));
TAIL_STATIC(0x498b40u,498);
}
B4b520b:L4b520b:{c.instructions+=1;NFSU2_TR(0x4b520b);
{goto L4b5241;}
}
B4b520d:L4b520d:{c.instructions+=4;NFSU2_TR(0x4b520d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5210:{NFSU2_TR(0x4b5210);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4b5211:{NFSU2_TR(0x4b5211);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b5213:{NFSU2_TR(0x4b5213);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b5233;}}
}
B4b5215:L4b5215:{c.instructions+=1;NFSU2_TR(0x4b5215);
{goto L4b5220;}
}
B4b5220:L4b5220:{c.instructions+=7;NFSU2_TR(0x4b5220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b5226:{NFSU2_TR(0x4b5226);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B4b522a:{NFSU2_TR(0x4b522a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4b522c:{NFSU2_TR(0x4b522c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4b522d:{NFSU2_TR(0x4b522d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b522f:{NFSU2_TR(0x4b522f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B4b5231:{NFSU2_TR(0x4b5231);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b5220u);}goto L4b5220;}}
}
B4b5233:L4b5233:{c.instructions+=3;NFSU2_TR(0x4b5233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5239:{NFSU2_TR(0x4b5239);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4b523e:{NFSU2_TR(0x4b523e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5241:L4b5241:{c.instructions+=2;NFSU2_TR(0x4b5241);
__builtin_memmove((R+4),(R+24),4);
}
B4b5243:{NFSU2_TR(0x4b5243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5248ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b5100u);}goto L4b5100;}
}
B4b5248:L4b5248:{c.instructions+=4;NFSU2_TR(0x4b5248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b524b:{NFSU2_TR(0x4b524b);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b524d:{NFSU2_TR(0x4b524d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b524e:{NFSU2_TR(0x4b524e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5253ull));
TAIL_STATIC(0x51de60u,51d);
}
B4b5253:L4b5253:{c.instructions+=1;NFSU2_TR(0x4b5253);
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
B4b5256:L4b5256:{c.instructions+=3;NFSU2_TR(0x4b5256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5257:{NFSU2_TR(0x4b5257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5258:{NFSU2_TR(0x4b5258);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5260:L4b5260:{c.instructions+=12;NFSU2_TR(0x4b5260);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5262:{NFSU2_TR(0x4b5262);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5267:{NFSU2_TR(0x4b5267);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b526d:{NFSU2_TR(0x4b526d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b526e:{NFSU2_TR(0x4b526e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5275:{NFSU2_TR(0x4b5275);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5276:{NFSU2_TR(0x4b5276);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b527a:{NFSU2_TR(0x4b527a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b527b:{NFSU2_TR(0x4b527b);
__builtin_memmove((R+24),(R+4),4);
}
B4b527d:{NFSU2_TR(0x4b527d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b527e:{NFSU2_TR(0x4b527e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5282:{NFSU2_TR(0x4b5282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5287ull));
TAIL_STATIC(0x551de0u,551);
}
B4b5287:L4b5287:{c.instructions+=7;NFSU2_TR(0x4b5287);
__builtin_memmove((R+4),(R+24),4);
}
B4b5289:{NFSU2_TR(0x4b5289);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5291:{NFSU2_TR(0x4b5291);
u8 U[4];
w4(U+0,u32(0x791838ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b5297:{NFSU2_TR(0x4b5297);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x791828ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b529e:{NFSU2_TR(0x4b529e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x791818ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b52a5:{NFSU2_TR(0x4b52a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x78fd08ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b52ac:{NFSU2_TR(0x4b52ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b52b1ull));
TAIL_STATIC(0x4991b0u,499);
}
B4b52b1:L4b52b1:{c.instructions+=6;NFSU2_TR(0x4b52b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b52b5:{NFSU2_TR(0x4b52b5);
__builtin_memmove((R+0),(R+24),4);
}
B4b52b7:{NFSU2_TR(0x4b52b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b52b8:{NFSU2_TR(0x4b52b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b52bf:{NFSU2_TR(0x4b52bf);
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
B4b52c2:{NFSU2_TR(0x4b52c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b52d0:L4b52d0:{c.instructions+=3;NFSU2_TR(0x4b52d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b52d1:{NFSU2_TR(0x4b52d1);
__builtin_memmove((R+24),(R+4),4);
}
B4b52d3:{NFSU2_TR(0x4b52d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b52d8ull));
{goto L4b52f0;}
}
B4b52d8:L4b52d8:{c.instructions+=2;NFSU2_TR(0x4b52d8);
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
B4b52dd:{NFSU2_TR(0x4b52dd);
if(r1(R+518)){{goto L4b52e8;}}
}
B4b52df:L4b52df:{c.instructions+=2;NFSU2_TR(0x4b52df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b52e0:{NFSU2_TR(0x4b52e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b52e5ull));
TAIL_STATIC(0x575630u,575);
}
B4b52e5:L4b52e5:{c.instructions+=1;NFSU2_TR(0x4b52e5);
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
B4b52e8:L4b52e8:{c.instructions+=3;NFSU2_TR(0x4b52e8);
__builtin_memmove((R+0),(R+24),4);
}
B4b52ea:{NFSU2_TR(0x4b52ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b52eb:{NFSU2_TR(0x4b52eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b52f0:L4b52f0:{c.instructions+=2;NFSU2_TR(0x4b52f0);
u8 U[4];
w4(U+0,u32(0x791838ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4b52f6:{NFSU2_TR(0x4b52f6);
TAIL_STATIC(0x510d40u,510);
}
B4b5300:L4b5300:{c.instructions+=12;NFSU2_TR(0x4b5300);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5302:{NFSU2_TR(0x4b5302);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5307:{NFSU2_TR(0x4b5307);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b530d:{NFSU2_TR(0x4b530d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b530e:{NFSU2_TR(0x4b530e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5315:{NFSU2_TR(0x4b5315);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5316:{NFSU2_TR(0x4b5316);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b531a:{NFSU2_TR(0x4b531a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b531b:{NFSU2_TR(0x4b531b);
__builtin_memmove((R+24),(R+4),4);
}
B4b531d:{NFSU2_TR(0x4b531d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b531e:{NFSU2_TR(0x4b531e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5322:{NFSU2_TR(0x4b5322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5327ull));
TAIL_STATIC(0x551de0u,551);
}
B4b5327:L4b5327:{c.instructions+=8;NFSU2_TR(0x4b5327);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b5329:{NFSU2_TR(0x4b5329);
__builtin_memmove((R+4),(R+24),4);
}
B4b532b:{NFSU2_TR(0x4b532b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b532f:{NFSU2_TR(0x4b532f);
u8 U[4];
w4(U+0,u32(0x78f978ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b5335:{NFSU2_TR(0x4b5335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x791828ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b533c:{NFSU2_TR(0x4b533c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x791818ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5343:{NFSU2_TR(0x4b5343);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b5346:{NFSU2_TR(0x4b5346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b534bull));
TAIL_STATIC(0x4998e0u,499);
}
B4b534b:L4b534b:{c.instructions+=6;NFSU2_TR(0x4b534b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b534f:{NFSU2_TR(0x4b534f);
__builtin_memmove((R+0),(R+24),4);
}
B4b5351:{NFSU2_TR(0x4b5351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5352:{NFSU2_TR(0x4b5352);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5359:{NFSU2_TR(0x4b5359);
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
B4b535c:{NFSU2_TR(0x4b535c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5360:L4b5360:{c.instructions+=3;NFSU2_TR(0x4b5360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5361:{NFSU2_TR(0x4b5361);
__builtin_memmove((R+24),(R+4),4);
}
B4b5363:{NFSU2_TR(0x4b5363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5368ull));
TAIL_STATIC(0x4993e0u,499);
}
B4b5368:L4b5368:{c.instructions+=2;NFSU2_TR(0x4b5368);
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
B4b536d:{NFSU2_TR(0x4b536d);
if(r1(R+518)){{goto L4b5378;}}
}
B4b536f:L4b536f:{c.instructions+=2;NFSU2_TR(0x4b536f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5370:{NFSU2_TR(0x4b5370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5375ull));
TAIL_STATIC(0x575630u,575);
}
B4b5375:L4b5375:{c.instructions+=1;NFSU2_TR(0x4b5375);
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
B4b5378:L4b5378:{c.instructions+=3;NFSU2_TR(0x4b5378);
__builtin_memmove((R+0),(R+24),4);
}
B4b537a:{NFSU2_TR(0x4b537a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b537b:{NFSU2_TR(0x4b537b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5380:L4b5380:{c.instructions+=3;NFSU2_TR(0x4b5380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5381:{NFSU2_TR(0x4b5381);
__builtin_memmove((R+24),(R+4),4);
}
B4b5383:{NFSU2_TR(0x4b5383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5388ull));
TAIL_STATIC(0x499a70u,499);
}
B4b5388:L4b5388:{c.instructions+=2;NFSU2_TR(0x4b5388);
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
B4b538d:{NFSU2_TR(0x4b538d);
if(r1(R+518)){{goto L4b5398;}}
}
B4b538f:L4b538f:{c.instructions+=2;NFSU2_TR(0x4b538f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5390:{NFSU2_TR(0x4b5390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5395ull));
TAIL_STATIC(0x575630u,575);
}
B4b5395:L4b5395:{c.instructions+=1;NFSU2_TR(0x4b5395);
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
B4b5398:L4b5398:{c.instructions+=3;NFSU2_TR(0x4b5398);
__builtin_memmove((R+0),(R+24),4);
}
B4b539a:{NFSU2_TR(0x4b539a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b539b:{NFSU2_TR(0x4b539b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b53a0:L4b53a0:{c.instructions+=7;NFSU2_TR(0x4b53a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b53a4:{NFSU2_TR(0x4b53a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53a6:{NFSU2_TR(0x4b53a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b53aa:{NFSU2_TR(0x4b53aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b53ad:{NFSU2_TR(0x4b53ad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53af:{NFSU2_TR(0x4b53af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53b0:{NFSU2_TR(0x4b53b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b53b5ull));
TAIL_STATIC(0x4901d0u,490);
}
B4b53b5:L4b53b5:{c.instructions+=2;NFSU2_TR(0x4b53b5);
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
B4b53b8:{NFSU2_TR(0x4b53b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b53c0:L4b53c0:{c.instructions+=8;NFSU2_TR(0x4b53c0);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B4b53c5:{NFSU2_TR(0x4b53c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1e8ull))));
}
B4b53cb:{NFSU2_TR(0x4b53cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53cc:{NFSU2_TR(0x4b53cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53cd:{NFSU2_TR(0x4b53cd);
__builtin_memmove((R+24),(R+4),4);
}
B4b53cf:{NFSU2_TR(0x4b53cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b53d2:{NFSU2_TR(0x4b53d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53d3:{NFSU2_TR(0x4b53d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b53d8ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4b53d8:L4b53d8:{c.instructions+=3;NFSU2_TR(0x4b53d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53d9:{NFSU2_TR(0x4b53d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b53da:{NFSU2_TR(0x4b53da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b53dfull));
TAIL_STATIC(0x537950u,537);
}
B4b53df:L4b53df:{c.instructions+=4;NFSU2_TR(0x4b53df);
__builtin_memmove((R+0),gp(0x863444),4);
}
B4b53e4:{NFSU2_TR(0x4b53e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b53e7:{NFSU2_TR(0x4b53e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b53e9:{NFSU2_TR(0x4b53e9);
if(r1(R+518)){{goto L4b56cf;}}
}
B4b53ef:L4b53ef:{c.instructions+=3;NFSU2_TR(0x4b53ef);
__builtin_memmove((R+28),gp(0x863448),4);
}
B4b53f5:{NFSU2_TR(0x4b53f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b53f7:{NFSU2_TR(0x4b53f7);
if(r1(R+518)){{goto L4b56cf;}}
}
B4b53fd:L4b53fd:{c.instructions+=5;NFSU2_TR(0x4b53fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4b5401:{NFSU2_TR(0x4b5401);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5402:{NFSU2_TR(0x4b5402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5403:{NFSU2_TR(0x4b5403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5406:{NFSU2_TR(0x4b5406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b540bull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4b540b:L4b540b:{c.instructions+=12;NFSU2_TR(0x4b540b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b540e:{NFSU2_TR(0x4b540e);
__builtin_memmove((R+12),(R+0),4);
}
B4b5410:{NFSU2_TR(0x4b5410);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4b5415:{NFSU2_TR(0x4b5415);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b5417:{NFSU2_TR(0x4b5417);
__builtin_memmove((R+0),(R+518),1);
}
B4b541a:{NFSU2_TR(0x4b541a);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b541c:{NFSU2_TR(0x4b541c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5420:{NFSU2_TR(0x4b5420);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b5422:{NFSU2_TR(0x4b5422);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf6640e9bull))));
}
B4b5427:{NFSU2_TR(0x4b5427);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb5d640b1ull))));
}
B4b542c:{NFSU2_TR(0x4b542c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b542d:{NFSU2_TR(0x4b542d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5432ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b5432:L4b5432:{c.instructions+=6;NFSU2_TR(0x4b5432);
{u32 ea_=u32(r4(R+12)+u32(152u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4b5438:{NFSU2_TR(0x4b5438);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b543e:{NFSU2_TR(0x4b543e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b5441:{NFSU2_TR(0x4b5441);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4b5443:{NFSU2_TR(0x4b5443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5444:{NFSU2_TR(0x4b5444);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b544c;}}
}
B4b5446:L4b5446:{c.instructions+=1;NFSU2_TR(0x4b5446);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4b544c:L4b544c:{c.instructions+=8;NFSU2_TR(0x4b544c);
{u32 ea_=u32(u32(7936132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4b5452:{NFSU2_TR(0x4b5452);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5456:{NFSU2_TR(0x4b5456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4b5459:{NFSU2_TR(0x4b5459);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4b545c:{NFSU2_TR(0x4b545c);
u8 U[4];
w4(U+0,u32(0x79187cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5461:{NFSU2_TR(0x4b5461);
u8 U[4];
w4(U+0,u32(0x80c9daaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5466:{NFSU2_TR(0x4b5466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5467:{NFSU2_TR(0x4b5467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b546cull));
TAIL_STATIC(0x537b80u,537);
}
B4b546c:L4b546c:{c.instructions+=5;NFSU2_TR(0x4b546c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b546f:{NFSU2_TR(0x4b546f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b5472:{NFSU2_TR(0x4b5472);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5473:{NFSU2_TR(0x4b5473);
w4(R+4,u32(0x85ad40ull));
}
B4b5478:{NFSU2_TR(0x4b5478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b547dull));
TAIL_STATIC(0x500c30u,500);
}
B4b547d:L4b547d:{c.instructions+=5;NFSU2_TR(0x4b547d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b547e:{NFSU2_TR(0x4b547e);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5483:{NFSU2_TR(0x4b5483);
u8 U[4];
w4(U+0,u32(0xb54b81a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5488:{NFSU2_TR(0x4b5488);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5489:{NFSU2_TR(0x4b5489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b548eull));
TAIL_STATIC(0x537b80u,537);
}
B4b548e:L4b548e:{c.instructions+=7;NFSU2_TR(0x4b548e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5491:{NFSU2_TR(0x4b5491);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5492:{NFSU2_TR(0x4b5492);
u8 U[4];
w4(U+0,u32(0x791864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5497:{NFSU2_TR(0x4b5497);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b549b:{NFSU2_TR(0x4b549b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b549d:{NFSU2_TR(0x4b549d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b549e:{NFSU2_TR(0x4b549e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b54a3ull));
TAIL_STATIC(0x50c960u,50c);
}
B4b54a3:L4b54a3:{c.instructions+=4;NFSU2_TR(0x4b54a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b54a6:{NFSU2_TR(0x4b54a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54a7:{NFSU2_TR(0x4b54a7);
u8 U[4];
w4(U+0,u32(0x791858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54ac:{NFSU2_TR(0x4b54ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b54b1ull));
TAIL_STATIC(0x50b990u,50b);
}
B4b54b1:L4b54b1:{c.instructions+=4;NFSU2_TR(0x4b54b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b54b5:{NFSU2_TR(0x4b54b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54b6:{NFSU2_TR(0x4b54b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b54b9:{NFSU2_TR(0x4b54b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b54beull));
TAIL_STATIC(0x57d900u,57d);
}
B4b54be:L4b54be:{c.instructions+=7;NFSU2_TR(0x4b54be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B4b54c1:{NFSU2_TR(0x4b54c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54c3:{NFSU2_TR(0x4b54c3);
__builtin_memmove((R+12),(R+0),4);
}
B4b54c5:{NFSU2_TR(0x4b54c5);
u8 U[4];
w4(U+0,u32(0x791848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54ca:{NFSU2_TR(0x4b54ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54cb:{NFSU2_TR(0x4b54cb);
w4(R+4,u32(0x88eb00ull));
}
B4b54d0:{NFSU2_TR(0x4b54d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b54d5ull));
TAIL_STATIC(0x5e8670u,5e8);
}
B4b54d5:L4b54d5:{c.instructions+=8;NFSU2_TR(0x4b54d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54d6:{NFSU2_TR(0x4b54d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54d8:{NFSU2_TR(0x4b54d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54da:{NFSU2_TR(0x4b54da);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b54de:{NFSU2_TR(0x4b54de);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54e0:{NFSU2_TR(0x4b54e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54e1:{NFSU2_TR(0x4b54e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b54e5:{NFSU2_TR(0x4b54e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b54eaull));
TAIL_STATIC(0x57cef0u,57c);
}
B4b54ea:L4b54ea:{c.instructions+=9;NFSU2_TR(0x4b54ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b54ee:{NFSU2_TR(0x4b54ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b54f1:{NFSU2_TR(0x4b54f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b54f5:{NFSU2_TR(0x4b54f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b54f8:{NFSU2_TR(0x4b54f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b54f9:{NFSU2_TR(0x4b54f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b54ff:{NFSU2_TR(0x4b54ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5501:{NFSU2_TR(0x4b5501);
__builtin_memmove((R+4),(R+0),4);
}
B4b5503:{NFSU2_TR(0x4b5503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5508ull));
TAIL_STATIC(0x570fa0u,570);
}
B4b5508:L4b5508:{c.instructions+=4;NFSU2_TR(0x4b5508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b550b:{NFSU2_TR(0x4b550b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b550c:{NFSU2_TR(0x4b550c);
u8 U[4];
w4(U+0,u32(0x4b53a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5511:{NFSU2_TR(0x4b5511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5516ull));
TAIL_STATIC(0x57bd70u,57b);
}
B4b5516:L4b5516:{c.instructions+=3;NFSU2_TR(0x4b5516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b5519:{NFSU2_TR(0x4b5519);
__builtin_memmove((R+4),(R+28),4);
}
B4b551b:{NFSU2_TR(0x4b551b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5520ull));
TAIL_STATIC(0x512620u,512);
}
B4b5520:L4b5520:{c.instructions+=4;NFSU2_TR(0x4b5520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5521:{NFSU2_TR(0x4b5521);
u8 U[4];
w4(U+0,u32(0xde075b62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5526:{NFSU2_TR(0x4b5526);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5527:{NFSU2_TR(0x4b5527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b552cull));
TAIL_STATIC(0x537a10u,537);
}
B4b552c:L4b552c:{c.instructions+=3;NFSU2_TR(0x4b552c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b552f:{NFSU2_TR(0x4b552f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5530:{NFSU2_TR(0x4b5530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5535ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b5535:L4b5535:{c.instructions+=5;NFSU2_TR(0x4b5535);
u8 U[4];
w4(U+0,u32(0x17ea64f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b553a:{NFSU2_TR(0x4b553a);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b5541:{NFSU2_TR(0x4b5541);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5546:{NFSU2_TR(0x4b5546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5547:{NFSU2_TR(0x4b5547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b554cull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4b554c:L4b554c:{c.instructions+=8;NFSU2_TR(0x4b554c);
w4(R+8,u32(0x268d063cull));
}
B4b5551:{NFSU2_TR(0x4b5551);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b5554:{NFSU2_TR(0x4b5554);
w4(R+12,u32(0x9b39c122ull));
}
B4b5559:{NFSU2_TR(0x4b5559);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b555d:{NFSU2_TR(0x4b555d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b5560:{NFSU2_TR(0x4b5560);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b5562:{NFSU2_TR(0x4b5562);
w1(R+4,u8(0x1ull));
}
B4b5564:{NFSU2_TR(0x4b5564);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b556b;}}
}
B4b5566:L4b5566:{c.instructions+=2;NFSU2_TR(0x4b5566);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4b5569:{NFSU2_TR(0x4b5569);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b55e4;}}
}
B4b556b:L4b556b:{c.instructions+=2;NFSU2_TR(0x4b556b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+4))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4b556e:{NFSU2_TR(0x4b556e);
if(r1(R+518)){{goto L4b55e4;}}
}
B4b5570:L4b5570:{c.instructions+=2;NFSU2_TR(0x4b5570);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b5572:{NFSU2_TR(0x4b5572);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b5586;}}
}
B4b5574:L4b5574:{c.instructions+=3;NFSU2_TR(0x4b5574);
w4(R+12,u32(0x80b8267cull));
}
B4b5579:{NFSU2_TR(0x4b5579);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xb46377bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5581:{NFSU2_TR(0x4b5581);
{goto L4b5639;}
}
B4b5586:L4b5586:{c.instructions+=2;NFSU2_TR(0x4b5586);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4b5588:{NFSU2_TR(0x4b5588);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b5639;}}
}
B4b558e:L4b558e:{c.instructions+=3;NFSU2_TR(0x4b558e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4b5592:{NFSU2_TR(0x4b5592);
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
B4b5595:{NFSU2_TR(0x4b5595);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b5639;}}
}
B4b559b:L4b559b:{c.instructions+=1;NFSU2_TR(0x4b559b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4b56d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b55a2:L4b55a2:{c.instructions+=3;NFSU2_TR(0x4b55a2);
w4(R+12,u32(0xf037a7bull));
}
B4b55a7:{NFSU2_TR(0x4b55a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b55ab:{NFSU2_TR(0x4b55ab);
{goto L4b5639;}
}
B4b55b0:L4b55b0:{c.instructions+=3;NFSU2_TR(0x4b55b0);
w4(R+12,u32(0x7216a68ull));
}
B4b55b5:{NFSU2_TR(0x4b55b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xba613729ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b55bd:{NFSU2_TR(0x4b55bd);
{goto L4b5639;}
}
B4b55bf:L4b55bf:{c.instructions+=3;NFSU2_TR(0x4b55bf);
w4(R+12,u32(0xc5f7902cull));
}
B4b55c4:{NFSU2_TR(0x4b55c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xfda6758ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b55cc:{NFSU2_TR(0x4b55cc);
{goto L4b5639;}
}
B4b55ce:L4b55ce:{c.instructions+=3;NFSU2_TR(0x4b55ce);
w4(R+12,u32(0x3d6a70e6ull));
}
B4b55d3:{NFSU2_TR(0x4b55d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x40c91ba7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b55db:{NFSU2_TR(0x4b55db);
{goto L4b5639;}
}
B4b55dd:L4b55dd:{c.instructions+=2;NFSU2_TR(0x4b55dd);
w4(R+12,u32(0xb5205101ull));
}
B4b55e2:{NFSU2_TR(0x4b55e2);
{goto L4b5631;}
}
B4b55e4:L4b55e4:{c.instructions+=3;NFSU2_TR(0x4b55e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4b55e8:{NFSU2_TR(0x4b55e8);
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
B4b55eb:{NFSU2_TR(0x4b55eb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b5639;}}
}
B4b55ed:L4b55ed:{c.instructions+=1;NFSU2_TR(0x4b55ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4b56f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b55f4:L4b55f4:{c.instructions+=3;NFSU2_TR(0x4b55f4);
w4(R+12,u32(0x9b39c122ull));
}
B4b55f9:{NFSU2_TR(0x4b55f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b55fd:{NFSU2_TR(0x4b55fd);
{goto L4b5639;}
}
B4b55ff:L4b55ff:{c.instructions+=3;NFSU2_TR(0x4b55ff);
w4(R+12,u32(0x9ec5f82full));
}
B4b5604:{NFSU2_TR(0x4b5604);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xba613729ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b560c:{NFSU2_TR(0x4b560c);
{goto L4b5639;}
}
B4b560e:L4b560e:{c.instructions+=3;NFSU2_TR(0x4b560e);
w4(R+12,u32(0x57f833adull));
}
B4b5613:{NFSU2_TR(0x4b5613);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xfda6758ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b561b:{NFSU2_TR(0x4b561b);
{goto L4b5639;}
}
B4b561d:L4b561d:{c.instructions+=3;NFSU2_TR(0x4b561d);
w4(R+12,u32(0xe45a7387ull));
}
B4b5622:{NFSU2_TR(0x4b5622);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x40c91ba7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b562a:{NFSU2_TR(0x4b562a);
{goto L4b5639;}
}
B4b562c:L4b562c:{c.instructions+=1;NFSU2_TR(0x4b562c);
w4(R+12,u32(0x3a10a7c2ull));
}
B4b5631:L4b5631:{c.instructions+=1;NFSU2_TR(0x4b5631);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x59ecb2c2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5639:L4b5639:{c.instructions+=4;NFSU2_TR(0x4b5639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b563c:{NFSU2_TR(0x4b563c);
u8 U[4];
w4(U+0,u32(0xf365871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5641:{NFSU2_TR(0x4b5641);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5642:{NFSU2_TR(0x4b5642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5647ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5647:L4b5647:{c.instructions+=2;NFSU2_TR(0x4b5647);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5648:{NFSU2_TR(0x4b5648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b564dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b564d:L4b564d:{c.instructions+=4;NFSU2_TR(0x4b564d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5650:{NFSU2_TR(0x4b5650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5651:{NFSU2_TR(0x4b5651);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5655:{NFSU2_TR(0x4b5655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b565aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b565a:L4b565a:{c.instructions+=7;NFSU2_TR(0x4b565a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b565b:{NFSU2_TR(0x4b565b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b565f:{NFSU2_TR(0x4b565f);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b5666:{NFSU2_TR(0x4b5666);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5667:{NFSU2_TR(0x4b5667);
u8 U[4];
w4(U+0,u32(0x2c167533ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b566c:{NFSU2_TR(0x4b566c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b566d:{NFSU2_TR(0x4b566d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5672ull));
TAIL_STATIC(0x537b80u,537);
}
B4b5672:L4b5672:{c.instructions+=4;NFSU2_TR(0x4b5672);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5676:{NFSU2_TR(0x4b5676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b5679:{NFSU2_TR(0x4b5679);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b567a:{NFSU2_TR(0x4b567a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b567full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b567f:L4b567f:{c.instructions+=4;NFSU2_TR(0x4b567f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5680:{NFSU2_TR(0x4b5680);
u8 U[4];
w4(U+0,u32(0x15e1351bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5685:{NFSU2_TR(0x4b5685);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5686:{NFSU2_TR(0x4b5686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b568bull));
TAIL_STATIC(0x537b80u,537);
}
B4b568b:L4b568b:{c.instructions+=6;NFSU2_TR(0x4b568b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4b568e:{NFSU2_TR(0x4b568e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5690:{NFSU2_TR(0x4b5690);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b5694:{NFSU2_TR(0x4b5694);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5695:{NFSU2_TR(0x4b5695);
__builtin_memmove((R+4),(R+28),4);
}
B4b5697:{NFSU2_TR(0x4b5697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b569cull));
TAIL_STATIC(0x512820u,512);
}
B4b569c:L4b569c:{c.instructions+=5;NFSU2_TR(0x4b569c);
u8 U[4];
w4(U+0,u32(0x9f29d70dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b56a1:{NFSU2_TR(0x4b56a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4b56a5:{NFSU2_TR(0x4b56a5);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b56aa:{NFSU2_TR(0x4b56aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b56ab:{NFSU2_TR(0x4b56ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b56b0ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4b56b0:L4b56b0:{c.instructions+=8;NFSU2_TR(0x4b56b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b56b3:{NFSU2_TR(0x4b56b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b56b7:{NFSU2_TR(0x4b56b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b56b8:{NFSU2_TR(0x4b56b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b56bf:{NFSU2_TR(0x4b56bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b56c0:{NFSU2_TR(0x4b56c0);
u8 U[4];
w4(U+0,u32(0xfeced617ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b56c5:{NFSU2_TR(0x4b56c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b56c6:{NFSU2_TR(0x4b56c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b56cbull));
TAIL_STATIC(0x537b80u,537);
}
B4b56cb:L4b56cb:{c.instructions+=2;NFSU2_TR(0x4b56cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4b56ce:{NFSU2_TR(0x4b56ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b56cf:L4b56cf:{c.instructions+=4;NFSU2_TR(0x4b56cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b56d0:{NFSU2_TR(0x4b56d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b56d1:{NFSU2_TR(0x4b56d1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1e8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1e8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1e8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b56d7:{NFSU2_TR(0x4b56d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5710:L4b5710:{c.instructions+=3;NFSU2_TR(0x4b5710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5711:{NFSU2_TR(0x4b5711);
__builtin_memmove((R+24),(R+4),4);
}
B4b5713:{NFSU2_TR(0x4b5713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5718ull));
TAIL_STATIC(0x499dd0u,499);
}
B4b5718:L4b5718:{c.instructions+=2;NFSU2_TR(0x4b5718);
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
B4b571d:{NFSU2_TR(0x4b571d);
if(r1(R+518)){{goto L4b5728;}}
}
B4b571f:L4b571f:{c.instructions+=2;NFSU2_TR(0x4b571f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5720:{NFSU2_TR(0x4b5720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5725ull));
TAIL_STATIC(0x575630u,575);
}
B4b5725:L4b5725:{c.instructions+=1;NFSU2_TR(0x4b5725);
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
B4b5728:L4b5728:{c.instructions+=3;NFSU2_TR(0x4b5728);
__builtin_memmove((R+0),(R+24),4);
}
B4b572a:{NFSU2_TR(0x4b572a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b572b:{NFSU2_TR(0x4b572b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5730:L4b5730:{c.instructions+=5;NFSU2_TR(0x4b5730);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5736:{NFSU2_TR(0x4b5736);
__builtin_memmove((R+4),gp(0x838574),4);
}
B4b573c:{NFSU2_TR(0x4b573c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b573d:{NFSU2_TR(0x4b573d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b573e:{NFSU2_TR(0x4b573e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5743ull));
TAIL_STATIC(0x5107d0u,510);
}
B4b5743:L4b5743:{c.instructions+=3;NFSU2_TR(0x4b5743);
__builtin_memmove((R+24),(R+0),4);
}
B4b5745:{NFSU2_TR(0x4b5745);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b5747:{NFSU2_TR(0x4b5747);
if(r1(R+518)){{goto L4b57ae;}}
}
B4b5749:L4b5749:{c.instructions+=2;NFSU2_TR(0x4b5749);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b574b:{NFSU2_TR(0x4b574b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5750ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4b5750:L4b5750:{c.instructions+=3;NFSU2_TR(0x4b5750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b5753:{NFSU2_TR(0x4b5753);
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
B4b5755:{NFSU2_TR(0x4b5755);
if(r1(R+518)){{goto L4b57ae;}}
}
B4b5757:L4b5757:{c.instructions+=4;NFSU2_TR(0x4b5757);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b575a:{NFSU2_TR(0x4b575a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B4b575d:{NFSU2_TR(0x4b575d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b575f:{NFSU2_TR(0x4b575f);
if(r1(R+518)){{goto L4b576a;}}
}
B4b5761:L4b5761:{c.instructions+=2;NFSU2_TR(0x4b5761);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b5763:{NFSU2_TR(0x4b5763);
if(r1(R+518)){{goto L4b576a;}}
}
B4b5765:L4b5765:{c.instructions+=2;NFSU2_TR(0x4b5765);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B4b5768:{NFSU2_TR(0x4b5768);
{goto L4b576c;}
}
B4b576a:L4b576a:{c.instructions+=1;NFSU2_TR(0x4b576a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4b576c:L4b576c:{c.instructions+=2;NFSU2_TR(0x4b576c);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x14ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b5770:{NFSU2_TR(0x4b5770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b57ae;}}
}
B4b5772:L4b5772:{c.instructions+=3;NFSU2_TR(0x4b5772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4b5774:{NFSU2_TR(0x4b5774);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b5776:{NFSU2_TR(0x4b5776);
if(r1(R+518)){{goto L4b5783;}}
}
B4b5778:L4b5778:{c.instructions+=3;NFSU2_TR(0x4b5778);
__builtin_memmove((R+0),(R+4),4);
}
B4b577a:{NFSU2_TR(0x4b577a);
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
B4b577c:{NFSU2_TR(0x4b577c);
if(r1(R+518)){{goto L4b5783;}}
}
B4b577e:L4b577e:{c.instructions+=2;NFSU2_TR(0x4b577e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b5781:{NFSU2_TR(0x4b5781);
{goto L4b5785;}
}
B4b5783:L4b5783:{c.instructions+=1;NFSU2_TR(0x4b5783);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b5785:L4b5785:{c.instructions+=19;NFSU2_TR(0x4b5785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b5788:{NFSU2_TR(0x4b5788);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b578b:{NFSU2_TR(0x4b578b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b578c:{NFSU2_TR(0x4b578c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b578f:{NFSU2_TR(0x4b578f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5790:{NFSU2_TR(0x4b5790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5793:{NFSU2_TR(0x4b5793);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5794:{NFSU2_TR(0x4b5794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b5797:{NFSU2_TR(0x4b5797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5798:{NFSU2_TR(0x4b5798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b579b:{NFSU2_TR(0x4b579b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b579c:{NFSU2_TR(0x4b579c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b579f:{NFSU2_TR(0x4b579f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b57a0:{NFSU2_TR(0x4b57a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b57a3:{NFSU2_TR(0x4b57a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b57a4:{NFSU2_TR(0x4b57a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b57a7:{NFSU2_TR(0x4b57a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b57a8:{NFSU2_TR(0x4b57a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b57a9:{NFSU2_TR(0x4b57a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b57aeull));
TAIL_STATIC(0x4463c0u,446);
}
B4b57ae:L4b57ae:{c.instructions+=2;NFSU2_TR(0x4b57ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b57af:{NFSU2_TR(0x4b57af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b57b0:L4b57b0:{c.instructions+=8;NFSU2_TR(0x4b57b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b57b1:{NFSU2_TR(0x4b57b1);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4b57b5:{NFSU2_TR(0x4b57b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b57b6:{NFSU2_TR(0x4b57b6);
__builtin_memmove((R+24),(R+4),4);
}
B4b57b8:{NFSU2_TR(0x4b57b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b57bb:{NFSU2_TR(0x4b57bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b57bd:{NFSU2_TR(0x4b57bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b57be:{NFSU2_TR(0x4b57be);
if(r1(R+518)){{goto L4b57ce;}}
}
B4b57c0:L4b57c0:{c.instructions+=2;NFSU2_TR(0x4b57c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b57c2:{NFSU2_TR(0x4b57c2);
if(r1(R+518)){{goto L4b57ce;}}
}
B4b57c4:L4b57c4:{c.instructions+=2;NFSU2_TR(0x4b57c4);
w4(R+4,u32(0x8364f4ull));
}
B4b57c9:{NFSU2_TR(0x4b57c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b57ceull));
TAIL_STATIC(0x510a70u,510);
}
B4b57ce:L4b57ce:{c.instructions+=1;NFSU2_TR(0x4b57ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b57d3ull));
TAIL_STATIC(0x50d510u,50d);
}
B4b57d3:L4b57d3:{c.instructions+=2;NFSU2_TR(0x4b57d3);
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
B4b57d5:{NFSU2_TR(0x4b57d5);
if(r1(R+518)){{goto L4b5809;}}
}
B4b57d7:L4b57d7:{c.instructions+=5;NFSU2_TR(0x4b57d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b57da:{NFSU2_TR(0x4b57da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b57de:{NFSU2_TR(0x4b57de);
__builtin_memmove((R+4),gp(0x838574),4);
}
B4b57e4:{NFSU2_TR(0x4b57e4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+8)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b57e6:{NFSU2_TR(0x4b57e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b57ebull));
TAIL_STATIC(0x430660u,430);
}
B4b57eb:L4b57eb:{c.instructions+=2;NFSU2_TR(0x4b57eb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4b57ed:{NFSU2_TR(0x4b57ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4b57fd;}}
}
B4b57ef:L4b57ef:{c.instructions+=2;NFSU2_TR(0x4b57ef);
__builtin_memmove((R+4),gp(0x838574),4);
}
B4b57f5:{NFSU2_TR(0x4b57f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b57faull));
TAIL_STATIC(0x430660u,430);
}
B4b57fa:L4b57fa:{c.instructions+=2;NFSU2_TR(0x4b57fa);
__builtin_memmove((R+28),(R+0),4);
}
B4b57fc:{NFSU2_TR(0x4b57fc);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4b57fd:L4b57fd:{c.instructions+=2;NFSU2_TR(0x4b57fd);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b57ff:{NFSU2_TR(0x4b57ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b5803;}}
}
B4b5801:L4b5801:{c.instructions+=1;NFSU2_TR(0x4b5801);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b5803:L4b5803:{c.instructions+=3;NFSU2_TR(0x4b5803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5806:{NFSU2_TR(0x4b5806);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5807:{NFSU2_TR(0x4b5807);
{goto L4b5822;}
}
B4b5809:L4b5809:{c.instructions+=1;NFSU2_TR(0x4b5809);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b580eull));
TAIL_STATIC(0x510c40u,510);
}
B4b580e:L4b580e:{c.instructions+=3;NFSU2_TR(0x4b580e);
__builtin_memmove((R+4),gp(0x838574),4);
}
B4b5814:{NFSU2_TR(0x4b5814);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5815:{NFSU2_TR(0x4b5815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b581aull));
TAIL_STATIC(0x510840u,510);
}
B4b581a:L4b581a:{c.instructions+=3;NFSU2_TR(0x4b581a);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b581c:{NFSU2_TR(0x4b581c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b581f:{NFSU2_TR(0x4b581f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b5830;}}
}
B4b5821:L4b5821:{c.instructions+=1;NFSU2_TR(0x4b5821);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5822:L4b5822:{c.instructions+=2;NFSU2_TR(0x4b5822);
__builtin_memmove((R+4),gp(0x838574),4);
}
B4b5828:{NFSU2_TR(0x4b5828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b582dull));
TAIL_STATIC(0x510880u,510);
}
B4b582d:L4b582d:{c.instructions+=1;NFSU2_TR(0x4b582d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5830:L4b5830:{c.instructions+=4;NFSU2_TR(0x4b5830);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5833:{NFSU2_TR(0x4b5833);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5839:{NFSU2_TR(0x4b5839);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b583a:{NFSU2_TR(0x4b583a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b583full));
TAIL_STATIC(0x510680u,510);
}
B4b583f:L4b583f:{c.instructions+=2;NFSU2_TR(0x4b583f);
__builtin_memmove((R+4),(R+24),4);
}
B4b5841:{NFSU2_TR(0x4b5841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5846ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b5730u);}goto L4b5730;}
}
B4b5846:L4b5846:{c.instructions+=4;NFSU2_TR(0x4b5846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b584c:{NFSU2_TR(0x4b584c);
__builtin_memmove((R+4),gp(0x838574),4);
}
B4b5852:{NFSU2_TR(0x4b5852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5853:{NFSU2_TR(0x4b5853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5858ull));
TAIL_STATIC(0x510800u,510);
}
B4b5858:L4b5858:{c.instructions+=2;NFSU2_TR(0x4b5858);
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
B4b585a:{NFSU2_TR(0x4b585a);
if(r1(R+518)){{goto L4b5874;}}
}
B4b585c:L4b585c:{c.instructions+=8;NFSU2_TR(0x4b585c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5862:{NFSU2_TR(0x4b5862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b5864:{NFSU2_TR(0x4b5864);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5865:{NFSU2_TR(0x4b5865);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5867:{NFSU2_TR(0x4b5867);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5868:{NFSU2_TR(0x4b5868);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b586a:{NFSU2_TR(0x4b586a);
w4(R+4,u32(0x8364f4ull));
}
B4b586f:{NFSU2_TR(0x4b586f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5874ull));
TAIL_STATIC(0x523bc0u,523);
}
B4b5874:L4b5874:{c.instructions+=4;NFSU2_TR(0x4b5874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5875:{NFSU2_TR(0x4b5875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5876:{NFSU2_TR(0x4b5876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b5877:{NFSU2_TR(0x4b5877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5880:L4b5880:{c.instructions+=7;NFSU2_TR(0x4b5880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5881:{NFSU2_TR(0x4b5881);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5882:{NFSU2_TR(0x4b5882);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5883:{NFSU2_TR(0x4b5883);
__builtin_memmove((R+24),(R+4),4);
}
B4b5885:{NFSU2_TR(0x4b5885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b5888:{NFSU2_TR(0x4b5888);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b588d:{NFSU2_TR(0x4b588d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5892ull));
TAIL_STATIC(0x505450u,505);
}
B4b5892:L4b5892:{c.instructions+=3;NFSU2_TR(0x4b5892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5893:{NFSU2_TR(0x4b5893);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5894:{NFSU2_TR(0x4b5894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5899ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5899:L4b5899:{c.instructions+=2;NFSU2_TR(0x4b5899);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b589a:{NFSU2_TR(0x4b589a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b589full));
TAIL_STATIC(0x50ca00u,50c);
}
B4b589f:L4b589f:{c.instructions+=3;NFSU2_TR(0x4b589f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b58a2:{NFSU2_TR(0x4b58a2);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58a7:{NFSU2_TR(0x4b58a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b58acull));
TAIL_STATIC(0x505450u,505);
}
B4b58ac:L4b58ac:{c.instructions+=3;NFSU2_TR(0x4b58ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58ad:{NFSU2_TR(0x4b58ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58ae:{NFSU2_TR(0x4b58ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b58b3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b58b3:L4b58b3:{c.instructions+=2;NFSU2_TR(0x4b58b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58b4:{NFSU2_TR(0x4b58b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b58b9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b58b9:L4b58b9:{c.instructions+=7;NFSU2_TR(0x4b58b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b58bd:{NFSU2_TR(0x4b58bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4b58c0:{NFSU2_TR(0x4b58c0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b58c2:{NFSU2_TR(0x4b58c2);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4b58c4:{NFSU2_TR(0x4b58c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58c6:{NFSU2_TR(0x4b58c6);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58cb:{NFSU2_TR(0x4b58cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b590d;}}
}
B4b58cd:L4b58cd:{c.instructions+=4;NFSU2_TR(0x4b58cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b58d0:{NFSU2_TR(0x4b58d0);
u8 U[4];
w4(U+0,u32(0xb6638240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58d5:{NFSU2_TR(0x4b58d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58d6:{NFSU2_TR(0x4b58d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b58dbull));
TAIL_STATIC(0x537c00u,537);
}
B4b58db:L4b58db:{c.instructions+=6;NFSU2_TR(0x4b58db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b58de:{NFSU2_TR(0x4b58de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58e0:{NFSU2_TR(0x4b58e0);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58e5:{NFSU2_TR(0x4b58e5);
u8 U[4];
w4(U+0,u32(0x824fa72full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58ea:{NFSU2_TR(0x4b58ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b58eb:{NFSU2_TR(0x4b58eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b58f0ull));
TAIL_STATIC(0x537c00u,537);
}
B4b58f0:L4b58f0:{c.instructions+=3;NFSU2_TR(0x4b58f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4b58f3:{NFSU2_TR(0x4b58f3);
w4(R+4,u32(0x8364f4ull));
}
B4b58f8:{NFSU2_TR(0x4b58f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b58fdull));
TAIL_STATIC(0x510a70u,510);
}
B4b58fd:L4b58fd:{c.instructions+=2;NFSU2_TR(0x4b58fd);
w4(R+4,u32(0x8364f4ull));
}
B4b5902:{NFSU2_TR(0x4b5902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5907ull));
TAIL_STATIC(0x523b40u,523);
}
B4b5907:L4b5907:{c.instructions+=4;NFSU2_TR(0x4b5907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5908:{NFSU2_TR(0x4b5908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5909:{NFSU2_TR(0x4b5909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b590a:{NFSU2_TR(0x4b590a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b590d:L4b590d:{c.instructions+=4;NFSU2_TR(0x4b590d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b5910:{NFSU2_TR(0x4b5910);
u8 U[4];
w4(U+0,u32(0x2253bd97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5915:{NFSU2_TR(0x4b5915);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5916:{NFSU2_TR(0x4b5916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b591bull));
TAIL_STATIC(0x537c00u,537);
}
B4b591b:L4b591b:{c.instructions+=5;NFSU2_TR(0x4b591b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5921:{NFSU2_TR(0x4b5921);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5924:{NFSU2_TR(0x4b5924);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5925:{NFSU2_TR(0x4b5925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5926:{NFSU2_TR(0x4b5926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b592bull));
TAIL_STATIC(0x5379c0u,537);
}
B4b592b:L4b592b:{c.instructions+=2;NFSU2_TR(0x4b592b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b592c:{NFSU2_TR(0x4b592c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5931ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5931:L4b5931:{c.instructions+=5;NFSU2_TR(0x4b5931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5937:{NFSU2_TR(0x4b5937);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b593a:{NFSU2_TR(0x4b593a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b593b:{NFSU2_TR(0x4b593b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b593c:{NFSU2_TR(0x4b593c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5941ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5941:L4b5941:{c.instructions+=2;NFSU2_TR(0x4b5941);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5942:{NFSU2_TR(0x4b5942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5947ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5947:L4b5947:{c.instructions+=7;NFSU2_TR(0x4b5947);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b594d:{NFSU2_TR(0x4b594d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5950:{NFSU2_TR(0x4b5950);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b5956:{NFSU2_TR(0x4b5956);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b595c:{NFSU2_TR(0x4b595c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b595d:{NFSU2_TR(0x4b595d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b595e:{NFSU2_TR(0x4b595e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5963ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5963:L4b5963:{c.instructions+=2;NFSU2_TR(0x4b5963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5964:{NFSU2_TR(0x4b5964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5969ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5969:L4b5969:{c.instructions+=5;NFSU2_TR(0x4b5969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b596f:{NFSU2_TR(0x4b596f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5972:{NFSU2_TR(0x4b5972);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5973:{NFSU2_TR(0x4b5973);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5974:{NFSU2_TR(0x4b5974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5979ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5979:L4b5979:{c.instructions+=2;NFSU2_TR(0x4b5979);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b597a:{NFSU2_TR(0x4b597a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b597full));
TAIL_STATIC(0x50ca00u,50c);
}
B4b597f:L4b597f:{c.instructions+=8;NFSU2_TR(0x4b597f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5985:{NFSU2_TR(0x4b5985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5988:{NFSU2_TR(0x4b5988);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b598e:{NFSU2_TR(0x4b598e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5994:{NFSU2_TR(0x4b5994);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4b5997:{NFSU2_TR(0x4b5997);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5998:{NFSU2_TR(0x4b5998);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5999:{NFSU2_TR(0x4b5999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b599eull));
TAIL_STATIC(0x5379c0u,537);
}
B4b599e:L4b599e:{c.instructions+=2;NFSU2_TR(0x4b599e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b599f:{NFSU2_TR(0x4b599f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b59a4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b59a4:L4b59a4:{c.instructions+=5;NFSU2_TR(0x4b59a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b59aa:{NFSU2_TR(0x4b59aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b59ad:{NFSU2_TR(0x4b59ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b59ae:{NFSU2_TR(0x4b59ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b59af:{NFSU2_TR(0x4b59af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b59b4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b59b4:L4b59b4:{c.instructions+=2;NFSU2_TR(0x4b59b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b59b5:{NFSU2_TR(0x4b59b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b59baull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b59ba:L4b59ba:{c.instructions+=7;NFSU2_TR(0x4b59ba);
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
B4b59bd:{NFSU2_TR(0x4b59bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b59c3:{NFSU2_TR(0x4b59c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b59c4:{NFSU2_TR(0x4b59c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b59ca:{NFSU2_TR(0x4b59ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b59cb:{NFSU2_TR(0x4b59cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b59cc:{NFSU2_TR(0x4b59cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b59d0:L4b59d0:{c.instructions+=5;NFSU2_TR(0x4b59d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b59d1:{NFSU2_TR(0x4b59d1);
__builtin_memmove((R+24),(R+4),4);
}
B4b59d3:{NFSU2_TR(0x4b59d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b59d9:{NFSU2_TR(0x4b59d9);
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
B4b59db:{NFSU2_TR(0x4b59db);
if(r1(R+518)){{goto L4b5a6e;}}
}
B4b59e1:L4b59e1:{c.instructions+=2;NFSU2_TR(0x4b59e1);
w4(R+4,u32(0x832dacull));
}
B4b59e6:{NFSU2_TR(0x4b59e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b59ebull));
TAIL_STATIC(0x488b80u,488);
}
B4b59eb:L4b59eb:{c.instructions+=2;NFSU2_TR(0x4b59eb);
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
B4b59ed:{NFSU2_TR(0x4b59ed);
if(r1(R+518)){{goto L4b5a6e;}}
}
B4b59ef:L4b59ef:{c.instructions+=6;NFSU2_TR(0x4b59ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b59f0:{NFSU2_TR(0x4b59f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b59f1:{NFSU2_TR(0x4b59f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b59f3:{NFSU2_TR(0x4b59f3);
__builtin_memmove((R+4),(R+24),4);
}
B4b59f5:{NFSU2_TR(0x4b59f5);
s1(0x7fa29c,u8(0x1ull));
}
B4b59fc:{NFSU2_TR(0x4b59fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5a01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b5880u);}goto L4b5880;}
}
B4b5a01:L4b5a01:{c.instructions+=4;NFSU2_TR(0x4b5a01);
__builtin_memmove((R+28),gp(0x832db4),4);
}
B4b5a07:{NFSU2_TR(0x4b5a07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a09:{NFSU2_TR(0x4b5a09);
w4(R+4,u32(0x832dacull));
}
B4b5a0e:{NFSU2_TR(0x4b5a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5a13ull));
TAIL_STATIC(0x5ba030u,5ba);
}
B4b5a13:L4b5a13:{c.instructions+=2;NFSU2_TR(0x4b5a13);
__builtin_memmove((R+12),(R+0),4);
}
B4b5a15:{NFSU2_TR(0x4b5a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5a1aull));
TAIL_STATIC(0x523c70u,523);
}
B4b5a1a:L4b5a1a:{c.instructions+=3;NFSU2_TR(0x4b5a1a);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4b5a20:{NFSU2_TR(0x4b5a20);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b5a22:{NFSU2_TR(0x4b5a22);
if(r1(R+518)){{goto L4b5a45;}}
}
B4b5a24:L4b5a24:{c.instructions+=7;NFSU2_TR(0x4b5a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5a27:{NFSU2_TR(0x4b5a27);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4b5a2c:{NFSU2_TR(0x4b5a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5a33:{NFSU2_TR(0x4b5a33);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4b5a39:{NFSU2_TR(0x4b5a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5a3c:{NFSU2_TR(0x4b5a3c);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4b5a42:{NFSU2_TR(0x4b5a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5a45:L4b5a45:{c.instructions+=9;NFSU2_TR(0x4b5a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5a48:{NFSU2_TR(0x4b5a48);
u8 U[4];
w4(U+0,u32(0x36fad7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a4d:{NFSU2_TR(0x4b5a4d);
u8 U[4];
w4(U+0,u32(0x172176e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a52:{NFSU2_TR(0x4b5a52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a54:{NFSU2_TR(0x4b5a54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a56:{NFSU2_TR(0x4b5a56);
u8 U[4];
w4(U+0,u32(0xcb1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a5b:{NFSU2_TR(0x4b5a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a5c:{NFSU2_TR(0x4b5a5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a5d:{NFSU2_TR(0x4b5a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5a62ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4b5a62:L4b5a62:{c.instructions+=4;NFSU2_TR(0x4b5a62);
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
B4b5a65:{NFSU2_TR(0x4b5a65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5a66:{NFSU2_TR(0x4b5a66);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5a6d:{NFSU2_TR(0x4b5a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b5a6e:L4b5a6e:{c.instructions+=2;NFSU2_TR(0x4b5a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5a6f:{NFSU2_TR(0x4b5a6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5a70:L4b5a70:{c.instructions+=7;NFSU2_TR(0x4b5a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a71:{NFSU2_TR(0x4b5a71);
__builtin_memmove((R+20),(R+16),4);
}
B4b5a73:{NFSU2_TR(0x4b5a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5a76:{NFSU2_TR(0x4b5a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b5a7b:{NFSU2_TR(0x4b5a7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a7c:{NFSU2_TR(0x4b5a7c);
__builtin_memmove((R+24),(R+4),4);
}
B4b5a7e:{NFSU2_TR(0x4b5a7e);
if(r1(R+518)){{goto L4b5a87;}}
}
B4b5a80:L4b5a80:{c.instructions+=2;NFSU2_TR(0x4b5a80);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb4623f67ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb4623f67ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b5a85:{NFSU2_TR(0x4b5a85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b5ac2;}}
}
B4b5a87:L4b5a87:{c.instructions+=6;NFSU2_TR(0x4b5a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5a8a:{NFSU2_TR(0x4b5a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5a8d:{NFSU2_TR(0x4b5a8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a8e:{NFSU2_TR(0x4b5a8e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a90:{NFSU2_TR(0x4b5a90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5a91:{NFSU2_TR(0x4b5a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5a96ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b5a96:L4b5a96:{c.instructions+=5;NFSU2_TR(0x4b5a96);
__builtin_memmove((R+8),gp(0x8900ac),4);
}
B4b5a9c:{NFSU2_TR(0x4b5a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5a9f:{NFSU2_TR(0x4b5a9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b5aa2:{NFSU2_TR(0x4b5aa2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B4b5aa5:{NFSU2_TR(0x4b5aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5aaaull));
TAIL_STATIC(0x592500u,592);
}
B4b5aaa:L4b5aaa:{c.instructions+=2;NFSU2_TR(0x4b5aaa);
w4(R+4,u32(0x85ef50ull));
}
B4b5aaf:{NFSU2_TR(0x4b5aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5ab4ull));
TAIL_STATIC(0x5295b0u,529);
}
B4b5ab4:L4b5ab4:{c.instructions+=2;NFSU2_TR(0x4b5ab4);
__builtin_memmove((R+4),(R+24),4);
}
B4b5ab6:{NFSU2_TR(0x4b5ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5abbull));
TAIL_STATIC(0x49a460u,49a);
}
B4b5abb:L4b5abb:{c.instructions+=1;NFSU2_TR(0x4b5abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x4cea70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5ac2:L4b5ac2:{c.instructions+=3;NFSU2_TR(0x4b5ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5ac3:{NFSU2_TR(0x4b5ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5ac4:{NFSU2_TR(0x4b5ac4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5ad0:L4b5ad0:{c.instructions+=11;NFSU2_TR(0x4b5ad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ad1:{NFSU2_TR(0x4b5ad1);
__builtin_memmove((R+20),(R+16),4);
}
B4b5ad3:{NFSU2_TR(0x4b5ad3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ad4:{NFSU2_TR(0x4b5ad4);
__builtin_memmove((R+24),(R+4),4);
}
B4b5ad6:{NFSU2_TR(0x4b5ad6);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B4b5adc:{NFSU2_TR(0x4b5adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5adf:{NFSU2_TR(0x4b5adf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ae0:{NFSU2_TR(0x4b5ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b5ae6:{NFSU2_TR(0x4b5ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5ae9:{NFSU2_TR(0x4b5ae9);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b5aee:{NFSU2_TR(0x4b5aee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b5b9d;}}
}
B4b5af4:L4b5af4:{c.instructions+=1;NFSU2_TR(0x4b5af4);
if(r1(R+518)){{goto L4b5baf;}}
}
B4b5afa:L4b5afa:{c.instructions+=2;NFSU2_TR(0x4b5afa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b5aff:{NFSU2_TR(0x4b5aff);
if(r1(R+518)){{goto L4b5b5a;}}
}
B4b5b01:L4b5b01:{c.instructions+=2;NFSU2_TR(0x4b5b01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b5b06:{NFSU2_TR(0x4b5b06);
if(r1(R+518)){{goto L4b5c10;}}
}
B4b5b0c:L4b5b0c:{c.instructions+=2;NFSU2_TR(0x4b5b0c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b5b11:{NFSU2_TR(0x4b5b11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b5c60;}}
}
B4b5b17:L4b5b17:{c.instructions+=4;NFSU2_TR(0x4b5b17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xebull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b5b1d:{NFSU2_TR(0x4b5b1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b5b1f:{NFSU2_TR(0x4b5b1f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b24:{NFSU2_TR(0x4b5b24);
if(r1(R+518)){{goto L4b5b40;}}
}
B4b5b26:L4b5b26:{c.instructions+=5;NFSU2_TR(0x4b5b26);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b28:{NFSU2_TR(0x4b5b28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b2a:{NFSU2_TR(0x4b5b2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b2b:{NFSU2_TR(0x4b5b2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xebull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5b32:{NFSU2_TR(0x4b5b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5b37ull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5b37:L4b5b37:{c.instructions+=5;NFSU2_TR(0x4b5b37);
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
B4b5b3a:{NFSU2_TR(0x4b5b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5b3b:{NFSU2_TR(0x4b5b3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5b3c:{NFSU2_TR(0x4b5b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5b3d:{NFSU2_TR(0x4b5b3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5b40:L4b5b40:{c.instructions+=5;NFSU2_TR(0x4b5b40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b42:{NFSU2_TR(0x4b5b42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b44:{NFSU2_TR(0x4b5b44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b45:{NFSU2_TR(0x4b5b45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xebull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5b4c:{NFSU2_TR(0x4b5b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5b51ull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5b51:L4b5b51:{c.instructions+=5;NFSU2_TR(0x4b5b51);
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
B4b5b54:{NFSU2_TR(0x4b5b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5b55:{NFSU2_TR(0x4b5b55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5b56:{NFSU2_TR(0x4b5b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5b57:{NFSU2_TR(0x4b5b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5b5a:L4b5b5a:{c.instructions+=4;NFSU2_TR(0x4b5b5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b5b60:{NFSU2_TR(0x4b5b60);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b5b62:{NFSU2_TR(0x4b5b62);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b67:{NFSU2_TR(0x4b5b67);
if(r1(R+518)){{goto L4b5b83;}}
}
B4b5b69:L4b5b69:{c.instructions+=5;NFSU2_TR(0x4b5b69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b6b:{NFSU2_TR(0x4b5b6b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b6d:{NFSU2_TR(0x4b5b6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b6e:{NFSU2_TR(0x4b5b6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5b75:{NFSU2_TR(0x4b5b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5b7aull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5b7a:L4b5b7a:{c.instructions+=5;NFSU2_TR(0x4b5b7a);
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
B4b5b7d:{NFSU2_TR(0x4b5b7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5b7e:{NFSU2_TR(0x4b5b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5b7f:{NFSU2_TR(0x4b5b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5b80:{NFSU2_TR(0x4b5b80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5b83:L4b5b83:{c.instructions+=5;NFSU2_TR(0x4b5b83);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b85:{NFSU2_TR(0x4b5b85);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b87:{NFSU2_TR(0x4b5b87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5b88:{NFSU2_TR(0x4b5b88);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5b8f:{NFSU2_TR(0x4b5b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5b94ull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5b94:L4b5b94:{c.instructions+=5;NFSU2_TR(0x4b5b94);
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
B4b5b97:{NFSU2_TR(0x4b5b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5b98:{NFSU2_TR(0x4b5b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5b99:{NFSU2_TR(0x4b5b99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5b9a:{NFSU2_TR(0x4b5b9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5b9d:L4b5b9d:{c.instructions+=2;NFSU2_TR(0x4b5b9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b5ba2:{NFSU2_TR(0x4b5ba2);
if(r1(R+518)){{goto L4b5c10;}}
}
B4b5ba4:L4b5ba4:{c.instructions+=2;NFSU2_TR(0x4b5ba4);
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
B4b5ba9:{NFSU2_TR(0x4b5ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b5c60;}}
}
B4b5baf:L4b5baf:{c.instructions+=4;NFSU2_TR(0x4b5baf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b5bb5:{NFSU2_TR(0x4b5bb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b5bb7:{NFSU2_TR(0x4b5bb7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bbc:{NFSU2_TR(0x4b5bbc);
if(r1(R+518)){{goto L4b5be7;}}
}
B4b5bbe:L4b5bbe:{c.instructions+=5;NFSU2_TR(0x4b5bbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bc0:{NFSU2_TR(0x4b5bc0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bc2:{NFSU2_TR(0x4b5bc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bc3:{NFSU2_TR(0x4b5bc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5bca:{NFSU2_TR(0x4b5bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5bcfull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5bcf:L4b5bcf:{c.instructions+=5;NFSU2_TR(0x4b5bcf);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bd4:{NFSU2_TR(0x4b5bd4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bd6:{NFSU2_TR(0x4b5bd6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bd8:{NFSU2_TR(0x4b5bd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bd9:{NFSU2_TR(0x4b5bd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5bdeull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5bde:L4b5bde:{c.instructions+=5;NFSU2_TR(0x4b5bde);
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
B4b5be1:{NFSU2_TR(0x4b5be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5be2:{NFSU2_TR(0x4b5be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5be3:{NFSU2_TR(0x4b5be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5be4:{NFSU2_TR(0x4b5be4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5be7:L4b5be7:{c.instructions+=5;NFSU2_TR(0x4b5be7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5be9:{NFSU2_TR(0x4b5be9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5beb:{NFSU2_TR(0x4b5beb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bec:{NFSU2_TR(0x4b5bec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeaull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5bf3:{NFSU2_TR(0x4b5bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5bf8ull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5bf8:L4b5bf8:{c.instructions+=5;NFSU2_TR(0x4b5bf8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bfd:{NFSU2_TR(0x4b5bfd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5bff:{NFSU2_TR(0x4b5bff);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c01:{NFSU2_TR(0x4b5c01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c02:{NFSU2_TR(0x4b5c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c07ull));
TAIL_STATIC(0x61f820u,61f);
}
B4b5c07:L4b5c07:{c.instructions+=5;NFSU2_TR(0x4b5c07);
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
B4b5c0a:{NFSU2_TR(0x4b5c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5c0b:{NFSU2_TR(0x4b5c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5c0c:{NFSU2_TR(0x4b5c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5c0d:{NFSU2_TR(0x4b5c0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5c10:L4b5c10:{c.instructions+=6;NFSU2_TR(0x4b5c10);
s1(0x836353,u8(0x0ull));
}
B4b5c17:{NFSU2_TR(0x4b5c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b5c1a:{NFSU2_TR(0x4b5c1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c1b:{NFSU2_TR(0x4b5c1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c1d:{NFSU2_TR(0x4b5c1d);
__builtin_memmove((R+4),(R+28),4);
}
B4b5c1f:{NFSU2_TR(0x4b5c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c24ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B4b5c24:L4b5c24:{c.instructions+=5;NFSU2_TR(0x4b5c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5c27:{NFSU2_TR(0x4b5c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5c2a:{NFSU2_TR(0x4b5c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4b5c2c:{NFSU2_TR(0x4b5c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5c2f:{NFSU2_TR(0x4b5c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c34ull));
TAIL_STATIC(0x5eb430u,5eb);
}
B4b5c34:L4b5c34:{c.instructions+=3;NFSU2_TR(0x4b5c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5c37:{NFSU2_TR(0x4b5c37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c38:{NFSU2_TR(0x4b5c38);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c3bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b5c3b:L4b5c3b:{c.instructions+=5;NFSU2_TR(0x4b5c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b5c3e:{NFSU2_TR(0x4b5c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b5c40:{NFSU2_TR(0x4b5c40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c42:{NFSU2_TR(0x4b5c42);
__builtin_memmove((R+4),(R+28),4);
}
B4b5c44:{NFSU2_TR(0x4b5c44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b5c47:L4b5c47:{c.instructions+=2;NFSU2_TR(0x4b5c47);
w4(R+4,u32(0x85ef50ull));
}
B4b5c4c:{NFSU2_TR(0x4b5c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c51ull));
TAIL_STATIC(0x5295b0u,529);
}
B4b5c51:L4b5c51:{c.instructions+=2;NFSU2_TR(0x4b5c51);
__builtin_memmove((R+4),(R+24),4);
}
B4b5c53:{NFSU2_TR(0x4b5c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c58ull));
TAIL_STATIC(0x49a460u,49a);
}
B4b5c58:L4b5c58:{c.instructions+=2;NFSU2_TR(0x4b5c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x4cea70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5c5f:{NFSU2_TR(0x4b5c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b5c60:L4b5c60:{c.instructions+=4;NFSU2_TR(0x4b5c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5c61:{NFSU2_TR(0x4b5c61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5c62:{NFSU2_TR(0x4b5c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5c63:{NFSU2_TR(0x4b5c63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5c70:L4b5c70:{c.instructions+=4;NFSU2_TR(0x4b5c70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c71:{NFSU2_TR(0x4b5c71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c72:{NFSU2_TR(0x4b5c72);
__builtin_memmove((R+24),(R+4),4);
}
B4b5c74:{NFSU2_TR(0x4b5c74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c79ull));
TAIL_STATIC(0x499f10u,499);
}
B4b5c79:L4b5c79:{c.instructions+=6;NFSU2_TR(0x4b5c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5c7c:{NFSU2_TR(0x4b5c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5c7f:{NFSU2_TR(0x4b5c7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c80:{NFSU2_TR(0x4b5c80);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c82:{NFSU2_TR(0x4b5c82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c83:{NFSU2_TR(0x4b5c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c88ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b5c88:L4b5c88:{c.instructions+=5;NFSU2_TR(0x4b5c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5c8e:{NFSU2_TR(0x4b5c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5c91:{NFSU2_TR(0x4b5c91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c92:{NFSU2_TR(0x4b5c92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c93:{NFSU2_TR(0x4b5c93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c98ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5c98:L4b5c98:{c.instructions+=2;NFSU2_TR(0x4b5c98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5c99:{NFSU2_TR(0x4b5c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5c9eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5c9e:L4b5c9e:{c.instructions+=5;NFSU2_TR(0x4b5c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5ca4:{NFSU2_TR(0x4b5ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5ca7:{NFSU2_TR(0x4b5ca7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ca8:{NFSU2_TR(0x4b5ca8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ca9:{NFSU2_TR(0x4b5ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5caeull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5cae:L4b5cae:{c.instructions+=2;NFSU2_TR(0x4b5cae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5caf:{NFSU2_TR(0x4b5caf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5cb4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5cb4:L4b5cb4:{c.instructions+=8;NFSU2_TR(0x4b5cb4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b5cb6:{NFSU2_TR(0x4b5cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5cbc:{NFSU2_TR(0x4b5cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5cbf:{NFSU2_TR(0x4b5cbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b5cc5:{NFSU2_TR(0x4b5cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5ccb:{NFSU2_TR(0x4b5ccb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ccc:{NFSU2_TR(0x4b5ccc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ccd:{NFSU2_TR(0x4b5ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5cd2ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5cd2:L4b5cd2:{c.instructions+=2;NFSU2_TR(0x4b5cd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5cd3:{NFSU2_TR(0x4b5cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5cd8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5cd8:L4b5cd8:{c.instructions+=5;NFSU2_TR(0x4b5cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5cde:{NFSU2_TR(0x4b5cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5ce1:{NFSU2_TR(0x4b5ce1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ce2:{NFSU2_TR(0x4b5ce2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ce3:{NFSU2_TR(0x4b5ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5ce8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5ce8:L4b5ce8:{c.instructions+=2;NFSU2_TR(0x4b5ce8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ce9:{NFSU2_TR(0x4b5ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5ceeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5cee:L4b5cee:{c.instructions+=7;NFSU2_TR(0x4b5cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5cf4:{NFSU2_TR(0x4b5cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5cf7:{NFSU2_TR(0x4b5cf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b5cfd:{NFSU2_TR(0x4b5cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5d03:{NFSU2_TR(0x4b5d03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d04:{NFSU2_TR(0x4b5d04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d05:{NFSU2_TR(0x4b5d05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d0aull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5d0a:L4b5d0a:{c.instructions+=3;NFSU2_TR(0x4b5d0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4b5d0d:{NFSU2_TR(0x4b5d0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d0e:{NFSU2_TR(0x4b5d0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d13ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b5d13:L4b5d13:{c.instructions+=7;NFSU2_TR(0x4b5d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5d19:{NFSU2_TR(0x4b5d19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5d1c:{NFSU2_TR(0x4b5d1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b5d1f:{NFSU2_TR(0x4b5d1f);
u8 U[4];
w4(U+0,u32(0x1335f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d24:{NFSU2_TR(0x4b5d24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d25:{NFSU2_TR(0x4b5d25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d26:{NFSU2_TR(0x4b5d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d2bull));
TAIL_STATIC(0x537a10u,537);
}
B4b5d2b:L4b5d2b:{c.instructions+=3;NFSU2_TR(0x4b5d2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b5d2e:{NFSU2_TR(0x4b5d2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d2f:{NFSU2_TR(0x4b5d2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d34ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b5d34:L4b5d34:{c.instructions+=5;NFSU2_TR(0x4b5d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5d3a:{NFSU2_TR(0x4b5d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5d3d:{NFSU2_TR(0x4b5d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d3e:{NFSU2_TR(0x4b5d3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d3f:{NFSU2_TR(0x4b5d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d44ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5d44:L4b5d44:{c.instructions+=2;NFSU2_TR(0x4b5d44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d45:{NFSU2_TR(0x4b5d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d4aull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b5d4a:L4b5d4a:{c.instructions+=5;NFSU2_TR(0x4b5d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5d54:{NFSU2_TR(0x4b5d54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b5d57:{NFSU2_TR(0x4b5d57);
__builtin_memmove((R+4),(R+24),4);
}
B4b5d59:{NFSU2_TR(0x4b5d59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5d60:{NFSU2_TR(0x4b5d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d65ull));
TAIL_STATIC(0x49a2e0u,49a);
}
B4b5d65:L4b5d65:{c.instructions+=5;NFSU2_TR(0x4b5d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x4b5a70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5d6c:{NFSU2_TR(0x4b5d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5d6d:{NFSU2_TR(0x4b5d6d);
w4(R+4,u32(0x85ef50ull));
}
B4b5d72:{NFSU2_TR(0x4b5d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b5d73:{NFSU2_TR(0x4b5d73);
TAIL_STATIC(0x529580u,529);
}
B4b5d80:L4b5d80:{c.instructions+=8;NFSU2_TR(0x4b5d80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d81:{NFSU2_TR(0x4b5d81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d82:{NFSU2_TR(0x4b5d82);
__builtin_memmove((R+24),(R+4),4);
}
B4b5d84:{NFSU2_TR(0x4b5d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5d8a:{NFSU2_TR(0x4b5d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5d8d:{NFSU2_TR(0x4b5d8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d8e:{NFSU2_TR(0x4b5d8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d8f:{NFSU2_TR(0x4b5d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d94ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5d94:L4b5d94:{c.instructions+=2;NFSU2_TR(0x4b5d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5d95:{NFSU2_TR(0x4b5d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5d9aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5d9a:L4b5d9a:{c.instructions+=5;NFSU2_TR(0x4b5d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5da0:{NFSU2_TR(0x4b5da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5da3:{NFSU2_TR(0x4b5da3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5da4:{NFSU2_TR(0x4b5da4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5da5:{NFSU2_TR(0x4b5da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5daaull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5daa:L4b5daa:{c.instructions+=2;NFSU2_TR(0x4b5daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5dab:{NFSU2_TR(0x4b5dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5db0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5db0:L4b5db0:{c.instructions+=8;NFSU2_TR(0x4b5db0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4b5db2:{NFSU2_TR(0x4b5db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5db8:{NFSU2_TR(0x4b5db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5dbb:{NFSU2_TR(0x4b5dbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b5dc1:{NFSU2_TR(0x4b5dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5dc7:{NFSU2_TR(0x4b5dc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5dc8:{NFSU2_TR(0x4b5dc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5dc9:{NFSU2_TR(0x4b5dc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5dceull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5dce:L4b5dce:{c.instructions+=2;NFSU2_TR(0x4b5dce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5dcf:{NFSU2_TR(0x4b5dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5dd4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5dd4:L4b5dd4:{c.instructions+=5;NFSU2_TR(0x4b5dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5dda:{NFSU2_TR(0x4b5dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5ddd:{NFSU2_TR(0x4b5ddd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5dde:{NFSU2_TR(0x4b5dde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ddf:{NFSU2_TR(0x4b5ddf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5de4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5de4:L4b5de4:{c.instructions+=2;NFSU2_TR(0x4b5de4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5de5:{NFSU2_TR(0x4b5de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5deaull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b5dea:L4b5dea:{c.instructions+=7;NFSU2_TR(0x4b5dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5df0:{NFSU2_TR(0x4b5df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5df3:{NFSU2_TR(0x4b5df3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b5df9:{NFSU2_TR(0x4b5df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5dff:{NFSU2_TR(0x4b5dff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e00:{NFSU2_TR(0x4b5e00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e01:{NFSU2_TR(0x4b5e01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e06ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5e06:L4b5e06:{c.instructions+=2;NFSU2_TR(0x4b5e06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e07:{NFSU2_TR(0x4b5e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e0cull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b5e0c:L4b5e0c:{c.instructions+=7;NFSU2_TR(0x4b5e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5e12:{NFSU2_TR(0x4b5e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5e15:{NFSU2_TR(0x4b5e15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B4b5e18:{NFSU2_TR(0x4b5e18);
u8 U[4];
w4(U+0,u32(0x1335f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e1d:{NFSU2_TR(0x4b5e1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e1e:{NFSU2_TR(0x4b5e1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e1f:{NFSU2_TR(0x4b5e1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e24ull));
TAIL_STATIC(0x537a10u,537);
}
B4b5e24:L4b5e24:{c.instructions+=3;NFSU2_TR(0x4b5e24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b5e27:{NFSU2_TR(0x4b5e27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e28:{NFSU2_TR(0x4b5e28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e2dull));
TAIL_STATIC(0x50c900u,50c);
}
B4b5e2d:L4b5e2d:{c.instructions+=5;NFSU2_TR(0x4b5e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5e33:{NFSU2_TR(0x4b5e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5e36:{NFSU2_TR(0x4b5e36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e37:{NFSU2_TR(0x4b5e37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e38:{NFSU2_TR(0x4b5e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e3dull));
TAIL_STATIC(0x5379c0u,537);
}
B4b5e3d:L4b5e3d:{c.instructions+=2;NFSU2_TR(0x4b5e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e3e:{NFSU2_TR(0x4b5e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e43ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b5e43:L4b5e43:{c.instructions+=5;NFSU2_TR(0x4b5e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5e4d:{NFSU2_TR(0x4b5e4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b5e50:{NFSU2_TR(0x4b5e50);
__builtin_memmove((R+4),(R+24),4);
}
B4b5e52:{NFSU2_TR(0x4b5e52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5e59:{NFSU2_TR(0x4b5e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e5eull));
TAIL_STATIC(0x49a3a0u,49a);
}
B4b5e5e:L4b5e5e:{c.instructions+=4;NFSU2_TR(0x4b5e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x4b5ad0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5e65:{NFSU2_TR(0x4b5e65);
w4(R+4,u32(0x85ef50ull));
}
B4b5e6a:{NFSU2_TR(0x4b5e6a);
s1(0x836353,u8(0x1ull));
}
B4b5e71:{NFSU2_TR(0x4b5e71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e76ull));
TAIL_STATIC(0x529580u,529);
}
B4b5e76:L4b5e76:{c.instructions+=4;NFSU2_TR(0x4b5e76);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4b5e7b:{NFSU2_TR(0x4b5e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5e7e:{NFSU2_TR(0x4b5e7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e7f:{NFSU2_TR(0x4b5e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e84ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B4b5e84:L4b5e84:{c.instructions+=5;NFSU2_TR(0x4b5e84);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B4b5e8a:{NFSU2_TR(0x4b5e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b5e8d:{NFSU2_TR(0x4b5e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5e90:{NFSU2_TR(0x4b5e90);
u8 U[4];
w4(U+0,u32(0x3f4ccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5e95:{NFSU2_TR(0x4b5e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5e9aull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B4b5e9a:L4b5e9a:{c.instructions+=3;NFSU2_TR(0x4b5e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5e9b:{NFSU2_TR(0x4b5e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b5e9c:{NFSU2_TR(0x4b5e9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5ea0:L4b5ea0:{c.instructions+=8;NFSU2_TR(0x4b5ea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ea1:{NFSU2_TR(0x4b5ea1);
__builtin_memmove((R+24),(R+4),4);
}
B4b5ea3:{NFSU2_TR(0x4b5ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5ea6:{NFSU2_TR(0x4b5ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5ea9:{NFSU2_TR(0x4b5ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5eaa:{NFSU2_TR(0x4b5eaa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5eac:{NFSU2_TR(0x4b5eac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ead:{NFSU2_TR(0x4b5ead);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5eb2ull));
TAIL_STATIC(0x50d150u,50d);
}
B4b5eb2:L4b5eb2:{c.instructions+=5;NFSU2_TR(0x4b5eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5eb5:{NFSU2_TR(0x4b5eb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b5eb8:{NFSU2_TR(0x4b5eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b5ebe:{NFSU2_TR(0x4b5ebe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ebf:{NFSU2_TR(0x4b5ebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5ec4ull));
TAIL_STATIC(0x510710u,510);
}
B4b5ec4:L4b5ec4:{c.instructions+=3;NFSU2_TR(0x4b5ec4);
__builtin_memmove((R+4),(R+24),4);
}
B4b5ec6:{NFSU2_TR(0x4b5ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5ec7:{NFSU2_TR(0x4b5ec7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b5730u);}goto L4b5730;}
}
B4b5ed0:L4b5ed0:{c.instructions+=15;NFSU2_TR(0x4b5ed0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ed1:{NFSU2_TR(0x4b5ed1);
__builtin_memmove((R+20),(R+16),4);
}
B4b5ed3:{NFSU2_TR(0x4b5ed3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ed5:{NFSU2_TR(0x4b5ed5);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5eda:{NFSU2_TR(0x4b5eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5ee0:{NFSU2_TR(0x4b5ee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ee1:{NFSU2_TR(0x4b5ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5ee8:{NFSU2_TR(0x4b5ee8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ee9:{NFSU2_TR(0x4b5ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5eec:{NFSU2_TR(0x4b5eec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5eed:{NFSU2_TR(0x4b5eed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5eee:{NFSU2_TR(0x4b5eee);
__builtin_memmove((R+24),(R+4),4);
}
B4b5ef0:{NFSU2_TR(0x4b5ef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ef1:{NFSU2_TR(0x4b5ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5ef4:{NFSU2_TR(0x4b5ef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5ef9ull));
TAIL_STATIC(0x551de0u,551);
}
B4b5ef9:L4b5ef9:{c.instructions+=6;NFSU2_TR(0x4b5ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b5efc:{NFSU2_TR(0x4b5efc);
u8 U[4];
w4(U+0,u32(0x7918a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b5f02:{NFSU2_TR(0x4b5f02);
__builtin_memmove((R+4),gp(0x83a9d8),4);
}
B4b5f08:{NFSU2_TR(0x4b5f08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f09:{NFSU2_TR(0x4b5f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b5f10:{NFSU2_TR(0x4b5f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5f15ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4b5f15:L4b5f15:{c.instructions+=3;NFSU2_TR(0x4b5f15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f16:{NFSU2_TR(0x4b5f16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f17:{NFSU2_TR(0x4b5f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5f1cull));
TAIL_STATIC(0x537950u,537);
}
B4b5f1c:L4b5f1c:{c.instructions+=9;NFSU2_TR(0x4b5f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5f1f:{NFSU2_TR(0x4b5f1f);
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
B4b5f22:{NFSU2_TR(0x4b5f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b5f23:{NFSU2_TR(0x4b5f23);
__builtin_memmove((R+0),(R+24),4);
}
B4b5f25:{NFSU2_TR(0x4b5f25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5f26:{NFSU2_TR(0x4b5f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b5f2d:{NFSU2_TR(0x4b5f2d);
__builtin_memmove((R+16),(R+20),4);
}
B4b5f2f:{NFSU2_TR(0x4b5f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b5f30:{NFSU2_TR(0x4b5f30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5f40:L4b5f40:{c.instructions+=3;NFSU2_TR(0x4b5f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f41:{NFSU2_TR(0x4b5f41);
__builtin_memmove((R+24),(R+4),4);
}
B4b5f43:{NFSU2_TR(0x4b5f43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5f48ull));
{goto L4b5f60;}
}
B4b5f48:L4b5f48:{c.instructions+=2;NFSU2_TR(0x4b5f48);
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
B4b5f4d:{NFSU2_TR(0x4b5f4d);
if(r1(R+518)){{goto L4b5f58;}}
}
B4b5f4f:L4b5f4f:{c.instructions+=2;NFSU2_TR(0x4b5f4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f50:{NFSU2_TR(0x4b5f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5f55ull));
TAIL_STATIC(0x575630u,575);
}
B4b5f55:L4b5f55:{c.instructions+=1;NFSU2_TR(0x4b5f55);
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
B4b5f58:L4b5f58:{c.instructions+=3;NFSU2_TR(0x4b5f58);
__builtin_memmove((R+0),(R+24),4);
}
B4b5f5a:{NFSU2_TR(0x4b5f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5f5b:{NFSU2_TR(0x4b5f5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5f60:L4b5f60:{c.instructions+=2;NFSU2_TR(0x4b5f60);
u8 U[4];
w4(U+0,u32(0x7918a8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4b5f66:{NFSU2_TR(0x4b5f66);
TAIL_STATIC(0x510d40u,510);
}
B4b5f70:L4b5f70:{c.instructions+=8;NFSU2_TR(0x4b5f70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f71:{NFSU2_TR(0x4b5f71);
__builtin_memmove((R+24),(R+4),4);
}
B4b5f73:{NFSU2_TR(0x4b5f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5f76:{NFSU2_TR(0x4b5f76);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f78:{NFSU2_TR(0x4b5f78);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f7d:{NFSU2_TR(0x4b5f7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f7e:{NFSU2_TR(0x4b5f7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5f82:{NFSU2_TR(0x4b5f82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5f87ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b5f87:L4b5f87:{c.instructions+=5;NFSU2_TR(0x4b5f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5f8a:{NFSU2_TR(0x4b5f8a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f8c:{NFSU2_TR(0x4b5f8c);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f91:{NFSU2_TR(0x4b5f91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5f92:{NFSU2_TR(0x4b5f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5f97ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b5f97:L4b5f97:{c.instructions+=3;NFSU2_TR(0x4b5f97);
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
B4b5f9a:{NFSU2_TR(0x4b5f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5f9b:{NFSU2_TR(0x4b5f9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5fa0:L4b5fa0:{c.instructions+=8;NFSU2_TR(0x4b5fa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fa1:{NFSU2_TR(0x4b5fa1);
__builtin_memmove((R+24),(R+4),4);
}
B4b5fa3:{NFSU2_TR(0x4b5fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5fa6:{NFSU2_TR(0x4b5fa6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fa8:{NFSU2_TR(0x4b5fa8);
u8 U[4];
w4(U+0,u32(0x791df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fad:{NFSU2_TR(0x4b5fad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fae:{NFSU2_TR(0x4b5fae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5fb2:{NFSU2_TR(0x4b5fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5fb7ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b5fb7:L4b5fb7:{c.instructions+=5;NFSU2_TR(0x4b5fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b5fba:{NFSU2_TR(0x4b5fba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fbc:{NFSU2_TR(0x4b5fbc);
u8 U[4];
w4(U+0,u32(0x791df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fc1:{NFSU2_TR(0x4b5fc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fc2:{NFSU2_TR(0x4b5fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5fc7ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b5fc7:L4b5fc7:{c.instructions+=3;NFSU2_TR(0x4b5fc7);
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
B4b5fca:{NFSU2_TR(0x4b5fca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b5fcb:{NFSU2_TR(0x4b5fcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5fd0:L4b5fd0:{c.instructions+=6;NFSU2_TR(0x4b5fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5fd3:{NFSU2_TR(0x4b5fd3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fd5:{NFSU2_TR(0x4b5fd5);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fda:{NFSU2_TR(0x4b5fda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5fdb:{NFSU2_TR(0x4b5fdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5fdf:{NFSU2_TR(0x4b5fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b5fe4ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b5fe4:L4b5fe4:{c.instructions+=2;NFSU2_TR(0x4b5fe4);
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
B4b5fe7:{NFSU2_TR(0x4b5fe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b5ff0:L4b5ff0:{c.instructions+=6;NFSU2_TR(0x4b5ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b5ff3:{NFSU2_TR(0x4b5ff3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ff5:{NFSU2_TR(0x4b5ff5);
u8 U[4];
w4(U+0,u32(0x791df4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ffa:{NFSU2_TR(0x4b5ffa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b5ffb:{NFSU2_TR(0x4b5ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b5fff:{NFSU2_TR(0x4b5fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b6004ull));
TAIL_STATIC(0x51cf70u,51c);
}
XIT:NFSU2_TR_EXIT(0x4b5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
