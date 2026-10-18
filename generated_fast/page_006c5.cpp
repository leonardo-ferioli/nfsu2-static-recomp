#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c4(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c5,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c5,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c5(u8* __restrict R,Cpu& c);
u32 page_6c5(Cpu& c){return body_6c5(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c5(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c5005:goto L6c5005;
case 0x6c5007:c.instructions+=2;goto B6c5007;
case 0x6c500a:c.instructions+=1;goto B6c500a;
case 0x6c5010:goto L6c5010;
case 0x6c5013:c.instructions+=1;goto B6c5013;
case 0x6c5019:goto L6c5019;
case 0x6c501b:c.instructions+=3;goto B6c501b;
case 0x6c501e:c.instructions+=2;goto B6c501e;
case 0x6c5021:c.instructions+=1;goto B6c5021;
case 0x6c5027:goto L6c5027;
case 0x6c502e:c.instructions+=5;goto B6c502e;
case 0x6c5031:c.instructions+=4;goto B6c5031;
case 0x6c5033:c.instructions+=3;goto B6c5033;
case 0x6c5036:c.instructions+=2;goto B6c5036;
case 0x6c5039:c.instructions+=1;goto B6c5039;
case 0x6c503f:goto L6c503f;
case 0x6c5042:c.instructions+=3;goto B6c5042;
case 0x6c5045:c.instructions+=2;goto B6c5045;
case 0x6c5047:c.instructions+=1;goto B6c5047;
case 0x6c504d:goto L6c504d;
case 0x6c5050:c.instructions+=2;goto B6c5050;
case 0x6c5053:c.instructions+=1;goto B6c5053;
case 0x6c5056:goto L6c5056;
case 0x6c5058:c.instructions+=2;goto B6c5058;
case 0x6c505a:c.instructions+=1;goto B6c505a;
case 0x6c505c:goto L6c505c;
case 0x6c505e:c.instructions+=1;goto B6c505e;
case 0x6c5060:goto L6c5060;
case 0x6c5063:c.instructions+=3;goto B6c5063;
case 0x6c5065:c.instructions+=2;goto B6c5065;
case 0x6c5068:c.instructions+=1;goto B6c5068;
case 0x6c506a:goto L6c506a;
case 0x6c506d:c.instructions+=6;goto B6c506d;
case 0x6c5074:c.instructions+=5;goto B6c5074;
case 0x6c5077:c.instructions+=4;goto B6c5077;
case 0x6c507a:c.instructions+=3;goto B6c507a;
case 0x6c507d:c.instructions+=2;goto B6c507d;
case 0x6c5080:c.instructions+=1;goto B6c5080;
case 0x6c5082:goto L6c5082;
case 0x6c5084:c.instructions+=2;goto B6c5084;
case 0x6c5086:c.instructions+=1;goto B6c5086;
case 0x6c5088:goto L6c5088;
case 0x6c508b:c.instructions+=5;goto B6c508b;
case 0x6c508e:c.instructions+=4;goto B6c508e;
case 0x6c5091:c.instructions+=3;goto B6c5091;
case 0x6c5093:c.instructions+=2;goto B6c5093;
case 0x6c5096:c.instructions+=1;goto B6c5096;
case 0x6c5098:goto L6c5098;
case 0x6c509f:goto L6c509f;
case 0x6c50a2:c.instructions+=2;goto B6c50a2;
case 0x6c50a3:c.instructions+=1;goto B6c50a3;
case 0x6c50a5:goto L6c50a5;
case 0x6c50a8:c.instructions+=1;goto B6c50a8;
case 0x6c50aa:goto L6c50aa;
case 0x6c50ac:c.instructions+=1;goto B6c50ac;
case 0x6c50ae:goto L6c50ae;
case 0x6c50b1:goto L6c50b1;
case 0x6c50b3:c.instructions+=1;goto B6c50b3;
case 0x6c50b5:goto L6c50b5;
case 0x6c50b7:goto L6c50b7;
case 0x6c50be:c.instructions+=1;goto B6c50be;
case 0x6c50c0:goto L6c50c0;
case 0x6c50c2:goto L6c50c2;
case 0x6c50c3:c.instructions+=2;goto B6c50c3;
case 0x6c50c6:c.instructions+=1;goto B6c50c6;
case 0x6c50c8:goto L6c50c8;
case 0x6c50ca:c.instructions+=1;goto B6c50ca;
case 0x6c50cc:goto L6c50cc;
case 0x6c50d3:goto L6c50d3;
case 0x6c50d6:c.instructions+=4;goto B6c50d6;
case 0x6c50d9:c.instructions+=3;goto B6c50d9;
case 0x6c50dc:c.instructions+=2;goto B6c50dc;
case 0x6c50df:c.instructions+=1;goto B6c50df;
case 0x6c50e5:goto L6c50e5;
case 0x6c50e8:c.instructions+=3;goto B6c50e8;
case 0x6c50eb:c.instructions+=2;goto B6c50eb;
case 0x6c50ee:c.instructions+=1;goto B6c50ee;
case 0x6c50f4:goto L6c50f4;
case 0x6c50f7:c.instructions+=4;goto B6c50f7;
case 0x6c50f8:c.instructions+=3;goto B6c50f8;
case 0x6c50fb:c.instructions+=2;goto B6c50fb;
case 0x6c50fe:c.instructions+=1;goto B6c50fe;
case 0x6c5104:goto L6c5104;
case 0x6c5107:goto L6c5107;
case 0x6c510a:c.instructions+=3;goto B6c510a;
case 0x6c5111:c.instructions+=2;goto B6c5111;
case 0x6c5114:c.instructions+=1;goto B6c5114;
case 0x6c5116:goto L6c5116;
case 0x6c5118:c.instructions+=2;goto B6c5118;
case 0x6c511b:c.instructions+=1;goto B6c511b;
case 0x6c511d:goto L6c511d;
case 0x6c5120:c.instructions+=2;goto B6c5120;
case 0x6c5123:c.instructions+=1;goto B6c5123;
case 0x6c5126:goto L6c5126;
case 0x6c512d:c.instructions+=3;goto B6c512d;
case 0x6c5130:c.instructions+=2;goto B6c5130;
case 0x6c5132:c.instructions+=1;goto B6c5132;
case 0x6c5134:goto L6c5134;
case 0x6c5137:goto L6c5137;
case 0x6c5139:c.instructions+=2;goto B6c5139;
case 0x6c513b:c.instructions+=1;goto B6c513b;
case 0x6c513d:goto L6c513d;
case 0x6c5140:c.instructions+=1;goto B6c5140;
case 0x6c5142:goto L6c5142;
case 0x6c5149:goto L6c5149;
case 0x6c514c:c.instructions+=2;goto B6c514c;
case 0x6c514d:c.instructions+=1;goto B6c514d;
case 0x6c514f:goto L6c514f;
case 0x6c5150:c.instructions+=2;goto B6c5150;
case 0x6c5153:c.instructions+=1;goto B6c5153;
case 0x6c5155:goto L6c5155;
case 0x6c5158:c.instructions+=2;goto B6c5158;
case 0x6c515c:c.instructions+=1;goto B6c515c;
case 0x6c515e:goto L6c515e;
case 0x6c5162:c.instructions+=1;goto B6c5162;
case 0x6c5164:goto L6c5164;
case 0x6c5167:c.instructions+=2;goto B6c5167;
case 0x6c516b:c.instructions+=1;goto B6c516b;
case 0x6c5171:goto L6c5171;
case 0x6c5175:c.instructions+=1;goto B6c5175;
case 0x6c5177:goto L6c5177;
case 0x6c517a:c.instructions+=2;goto B6c517a;
case 0x6c517e:c.instructions+=1;goto B6c517e;
case 0x6c5184:goto L6c5184;
case 0x6c5186:goto L6c5186;
case 0x6c5189:c.instructions+=7;goto B6c5189;
case 0x6c518b:c.instructions+=6;goto B6c518b;
case 0x6c518e:c.instructions+=5;goto B6c518e;
case 0x6c5190:c.instructions+=4;goto B6c5190;
case 0x6c5192:c.instructions+=3;goto B6c5192;
case 0x6c5195:c.instructions+=2;goto B6c5195;
case 0x6c519b:c.instructions+=1;goto B6c519b;
case 0x6c51a1:goto L6c51a1;
case 0x6c51a3:goto L6c51a3;
case 0x6c51a5:c.instructions+=1;goto B6c51a5;
case 0x6c51a8:goto L6c51a8;
case 0x6c51aa:goto L6c51aa;
case 0x6c51ad:c.instructions+=4;goto B6c51ad;
case 0x6c51ae:c.instructions+=3;goto B6c51ae;
case 0x6c51b5:c.instructions+=2;goto B6c51b5;
case 0x6c51b8:c.instructions+=1;goto B6c51b8;
case 0x6c51ba:goto L6c51ba;
case 0x6c51c1:c.instructions+=2;goto B6c51c1;
case 0x6c51c4:c.instructions+=1;goto B6c51c4;
case 0x6c51c6:goto L6c51c6;
case 0x6c51cd:c.instructions+=2;goto B6c51cd;
case 0x6c51d0:c.instructions+=1;goto B6c51d0;
case 0x6c51d2:goto L6c51d2;
case 0x6c51d9:goto L6c51d9;
case 0x6c51dc:c.instructions+=2;goto B6c51dc;
case 0x6c51e1:c.instructions+=1;goto B6c51e1;
case 0x6c51e3:goto L6c51e3;
case 0x6c51e7:goto L6c51e7;
case 0x6c51ea:c.instructions+=2;goto B6c51ea;
case 0x6c51ed:c.instructions+=1;goto B6c51ed;
case 0x6c51f3:goto L6c51f3;
case 0x6c51f6:c.instructions+=8;goto B6c51f6;
case 0x6c51fc:c.instructions+=7;goto B6c51fc;
case 0x6c51ff:c.instructions+=6;goto B6c51ff;
case 0x6c5201:c.instructions+=5;goto B6c5201;
case 0x6c5203:c.instructions+=4;goto B6c5203;
case 0x6c5209:c.instructions+=3;goto B6c5209;
case 0x6c520c:c.instructions+=2;goto B6c520c;
case 0x6c520f:c.instructions+=1;goto B6c520f;
case 0x6c5211:goto L6c5211;
case 0x6c5216:c.instructions+=2;goto B6c5216;
case 0x6c521b:c.instructions+=1;goto B6c521b;
case 0x6c521d:goto L6c521d;
case 0x6c521f:c.instructions+=2;goto B6c521f;
case 0x6c5220:c.instructions+=1;goto B6c5220;
case 0x6c5225:goto L6c5225;
case 0x6c5228:c.instructions+=3;goto B6c5228;
case 0x6c522c:c.instructions+=2;goto B6c522c;
case 0x6c522f:c.instructions+=1;goto B6c522f;
case 0x6c5232:goto L6c5232;
case 0x6c5236:goto L6c5236;
case 0x6c5239:c.instructions+=4;goto B6c5239;
case 0x6c523b:c.instructions+=3;goto B6c523b;
case 0x6c523e:c.instructions+=2;goto B6c523e;
case 0x6c5244:c.instructions+=1;goto B6c5244;
case 0x6c524a:goto L6c524a;
case 0x6c524c:goto L6c524c;
case 0x6c524e:c.instructions+=1;goto B6c524e;
case 0x6c5251:goto L6c5251;
case 0x6c5253:goto L6c5253;
case 0x6c5255:c.instructions+=3;goto B6c5255;
case 0x6c5256:c.instructions+=2;goto B6c5256;
case 0x6c5259:c.instructions+=1;goto B6c5259;
case 0x6c525f:goto L6c525f;
case 0x6c5261:goto L6c5261;
case 0x6c5263:c.instructions+=2;goto B6c5263;
case 0x6c5264:c.instructions+=1;goto B6c5264;
case 0x6c526a:goto L6c526a;
case 0x6c526c:goto L6c526c;
case 0x6c526f:c.instructions+=4;goto B6c526f;
case 0x6c5271:c.instructions+=3;goto B6c5271;
case 0x6c5274:c.instructions+=2;goto B6c5274;
case 0x6c5277:c.instructions+=1;goto B6c5277;
case 0x6c527a:goto L6c527a;
case 0x6c527e:c.instructions+=1;goto B6c527e;
case 0x6c5280:goto L6c5280;
case 0x6c5282:c.instructions+=3;goto B6c5282;
case 0x6c5283:c.instructions+=2;goto B6c5283;
case 0x6c5286:c.instructions+=1;goto B6c5286;
case 0x6c5288:goto L6c5288;
case 0x6c528b:goto L6c528b;
case 0x6c528e:c.instructions+=9;goto B6c528e;
case 0x6c5291:c.instructions+=8;goto B6c5291;
case 0x6c5294:c.instructions+=7;goto B6c5294;
case 0x6c529b:c.instructions+=6;goto B6c529b;
case 0x6c529e:c.instructions+=5;goto B6c529e;
case 0x6c52a1:c.instructions+=4;goto B6c52a1;
case 0x6c52a4:c.instructions+=3;goto B6c52a4;
case 0x6c52a6:c.instructions+=2;goto B6c52a6;
case 0x6c52a9:c.instructions+=1;goto B6c52a9;
case 0x6c52ab:goto L6c52ab;
case 0x6c52ae:c.instructions+=2;goto B6c52ae;
case 0x6c52b1:c.instructions+=1;goto B6c52b1;
case 0x6c52b7:goto L6c52b7;
case 0x6c52ba:c.instructions+=15;goto B6c52ba;
case 0x6c52bc:c.instructions+=14;goto B6c52bc;
case 0x6c52bf:c.instructions+=13;goto B6c52bf;
case 0x6c52c2:c.instructions+=12;goto B6c52c2;
case 0x6c52c5:c.instructions+=11;goto B6c52c5;
case 0x6c52c8:c.instructions+=10;goto B6c52c8;
case 0x6c52ca:c.instructions+=9;goto B6c52ca;
case 0x6c52d0:c.instructions+=8;goto B6c52d0;
case 0x6c52d3:c.instructions+=7;goto B6c52d3;
case 0x6c52d4:c.instructions+=6;goto B6c52d4;
case 0x6c52d7:c.instructions+=5;goto B6c52d7;
case 0x6c52d8:c.instructions+=4;goto B6c52d8;
case 0x6c52db:c.instructions+=3;goto B6c52db;
case 0x6c52dc:c.instructions+=2;goto B6c52dc;
case 0x6c52dd:c.instructions+=1;goto B6c52dd;
case 0x6c52e2:goto L6c52e2;
case 0x6c52e4:c.instructions+=1;goto B6c52e4;
case 0x6c52e6:goto L6c52e6;
case 0x6c52e9:c.instructions+=14;goto B6c52e9;
case 0x6c52ea:c.instructions+=13;goto B6c52ea;
case 0x6c52ed:c.instructions+=12;goto B6c52ed;
case 0x6c52f0:c.instructions+=11;goto B6c52f0;
case 0x6c52f1:c.instructions+=10;goto B6c52f1;
case 0x6c52f7:c.instructions+=9;goto B6c52f7;
case 0x6c52f8:c.instructions+=8;goto B6c52f8;
case 0x6c52fb:c.instructions+=7;goto B6c52fb;
case 0x6c52fc:c.instructions+=6;goto B6c52fc;
case 0x6c5302:c.instructions+=5;goto B6c5302;
case 0x6c5303:c.instructions+=4;goto B6c5303;
case 0x6c5309:c.instructions+=3;goto B6c5309;
case 0x6c530a:c.instructions+=2;goto B6c530a;
case 0x6c530b:c.instructions+=1;goto B6c530b;
case 0x6c5310:goto L6c5310;
case 0x6c5313:c.instructions+=1;goto B6c5313;
case 0x6c5315:goto L6c5315;
case 0x6c5318:c.instructions+=3;goto B6c5318;
case 0x6c531a:c.instructions+=2;goto B6c531a;
case 0x6c531d:c.instructions+=1;goto B6c531d;
case 0x6c5324:goto L6c5324;
case 0x6c5328:c.instructions+=2;goto B6c5328;
case 0x6c532b:c.instructions+=1;goto B6c532b;
case 0x6c532d:goto L6c532d;
case 0x6c532f:c.instructions+=3;goto B6c532f;
case 0x6c5332:c.instructions+=2;goto B6c5332;
case 0x6c5334:c.instructions+=1;goto B6c5334;
case 0x6c5336:goto L6c5336;
case 0x6c5339:goto L6c5339;
case 0x6c533a:c.instructions+=3;goto B6c533a;
case 0x6c533d:c.instructions+=2;goto B6c533d;
case 0x6c5340:c.instructions+=1;goto B6c5340;
case 0x6c5342:goto L6c5342;
case 0x6c5346:c.instructions+=1;goto B6c5346;
case 0x6c5348:goto L6c5348;
case 0x6c534b:c.instructions+=3;goto B6c534b;
case 0x6c534e:c.instructions+=2;goto B6c534e;
case 0x6c5352:c.instructions+=1;goto B6c5352;
case 0x6c5358:goto L6c5358;
case 0x6c535a:goto L6c535a;
case 0x6c5361:goto L6c5361;
case 0x6c5365:c.instructions+=1;goto B6c5365;
case 0x6c5369:goto L6c5369;
case 0x6c536d:c.instructions+=1;goto B6c536d;
case 0x6c536f:goto L6c536f;
case 0x6c5371:c.instructions+=3;goto B6c5371;
case 0x6c5372:c.instructions+=2;goto B6c5372;
case 0x6c5375:c.instructions+=1;goto B6c5375;
case 0x6c5377:goto L6c5377;
case 0x6c537a:goto L6c537a;
case 0x6c5382:c.instructions+=1;goto B6c5382;
case 0x6c5384:goto L6c5384;
case 0x6c5388:c.instructions+=2;goto B6c5388;
case 0x6c538c:c.instructions+=1;goto B6c538c;
case 0x6c538e:goto L6c538e;
case 0x6c5390:c.instructions+=2;goto B6c5390;
case 0x6c5393:c.instructions+=1;goto B6c5393;
case 0x6c5395:goto L6c5395;
case 0x6c5398:c.instructions+=2;goto B6c5398;
case 0x6c539f:c.instructions+=1;goto B6c539f;
case 0x6c53a2:goto L6c53a2;
case 0x6c53a6:c.instructions+=2;goto B6c53a6;
case 0x6c53a8:c.instructions+=1;goto B6c53a8;
case 0x6c53aa:goto L6c53aa;
case 0x6c53ad:c.instructions+=5;goto B6c53ad;
case 0x6c53b0:c.instructions+=4;goto B6c53b0;
case 0x6c53b3:c.instructions+=3;goto B6c53b3;
case 0x6c53b5:c.instructions+=2;goto B6c53b5;
case 0x6c53b8:c.instructions+=1;goto B6c53b8;
case 0x6c53bb:goto L6c53bb;
case 0x6c53bd:c.instructions+=1;goto B6c53bd;
case 0x6c53bf:goto L6c53bf;
case 0x6c53c2:c.instructions+=3;goto B6c53c2;
case 0x6c53c5:c.instructions+=2;goto B6c53c5;
case 0x6c53c8:c.instructions+=1;goto B6c53c8;
case 0x6c53ca:goto L6c53ca;
case 0x6c53cb:c.instructions+=2;goto B6c53cb;
case 0x6c53ce:c.instructions+=1;goto B6c53ce;
case 0x6c53d0:goto L6c53d0;
case 0x6c53d2:goto L6c53d2;
case 0x6c53d9:goto L6c53d9;
case 0x6c53dc:c.instructions+=3;goto B6c53dc;
case 0x6c53df:c.instructions+=2;goto B6c53df;
case 0x6c53e2:c.instructions+=1;goto B6c53e2;
case 0x6c53e4:goto L6c53e4;
case 0x6c53e7:c.instructions+=4;goto B6c53e7;
case 0x6c53ea:c.instructions+=3;goto B6c53ea;
case 0x6c53ed:c.instructions+=2;goto B6c53ed;
case 0x6c53f1:c.instructions+=1;goto B6c53f1;
case 0x6c53f7:goto L6c53f7;
case 0x6c53f9:c.instructions+=2;goto B6c53f9;
case 0x6c53fc:c.instructions+=1;goto B6c53fc;
case 0x6c5402:goto L6c5402;
case 0x6c5405:c.instructions+=1;goto B6c5405;
case 0x6c540b:goto L6c540b;
case 0x6c540d:c.instructions+=3;goto B6c540d;
case 0x6c5410:c.instructions+=2;goto B6c5410;
case 0x6c5413:c.instructions+=1;goto B6c5413;
case 0x6c5419:goto L6c5419;
case 0x6c5420:c.instructions+=5;goto B6c5420;
case 0x6c5423:c.instructions+=4;goto B6c5423;
case 0x6c5425:c.instructions+=3;goto B6c5425;
case 0x6c5428:c.instructions+=2;goto B6c5428;
case 0x6c542b:c.instructions+=1;goto B6c542b;
case 0x6c5431:goto L6c5431;
case 0x6c5434:c.instructions+=3;goto B6c5434;
case 0x6c5437:c.instructions+=2;goto B6c5437;
case 0x6c5439:c.instructions+=1;goto B6c5439;
case 0x6c543f:goto L6c543f;
case 0x6c5442:c.instructions+=2;goto B6c5442;
case 0x6c5445:c.instructions+=1;goto B6c5445;
case 0x6c5448:goto L6c5448;
case 0x6c544a:c.instructions+=2;goto B6c544a;
case 0x6c544c:c.instructions+=1;goto B6c544c;
case 0x6c544e:goto L6c544e;
case 0x6c5450:c.instructions+=1;goto B6c5450;
case 0x6c5452:goto L6c5452;
case 0x6c5455:c.instructions+=3;goto B6c5455;
case 0x6c5457:c.instructions+=2;goto B6c5457;
case 0x6c545a:c.instructions+=1;goto B6c545a;
case 0x6c545c:goto L6c545c;
case 0x6c545f:c.instructions+=6;goto B6c545f;
case 0x6c5466:c.instructions+=5;goto B6c5466;
case 0x6c5469:c.instructions+=4;goto B6c5469;
case 0x6c546c:c.instructions+=3;goto B6c546c;
case 0x6c546f:c.instructions+=2;goto B6c546f;
case 0x6c5472:c.instructions+=1;goto B6c5472;
case 0x6c5474:goto L6c5474;
case 0x6c5476:c.instructions+=2;goto B6c5476;
case 0x6c5478:c.instructions+=1;goto B6c5478;
case 0x6c547a:goto L6c547a;
case 0x6c547d:c.instructions+=4;goto B6c547d;
case 0x6c5480:c.instructions+=3;goto B6c5480;
case 0x6c5483:c.instructions+=2;goto B6c5483;
case 0x6c5486:c.instructions+=1;goto B6c5486;
case 0x6c5488:goto L6c5488;
case 0x6c548f:goto L6c548f;
case 0x6c5492:c.instructions+=2;goto B6c5492;
case 0x6c5493:c.instructions+=1;goto B6c5493;
case 0x6c5495:goto L6c5495;
case 0x6c5497:goto L6c5497;
case 0x6c549a:c.instructions+=1;goto B6c549a;
case 0x6c549c:goto L6c549c;
case 0x6c549e:c.instructions+=1;goto B6c549e;
case 0x6c54a0:goto L6c54a0;
case 0x6c54a3:goto L6c54a3;
case 0x6c54a5:c.instructions+=1;goto B6c54a5;
case 0x6c54a7:goto L6c54a7;
case 0x6c54a9:goto L6c54a9;
case 0x6c54b0:c.instructions+=1;goto B6c54b0;
case 0x6c54b2:goto L6c54b2;
case 0x6c54b4:goto L6c54b4;
case 0x6c54b5:c.instructions+=2;goto B6c54b5;
case 0x6c54b8:c.instructions+=1;goto B6c54b8;
case 0x6c54ba:goto L6c54ba;
case 0x6c54bc:c.instructions+=1;goto B6c54bc;
case 0x6c54be:goto L6c54be;
case 0x6c54c5:goto L6c54c5;
case 0x6c54c8:c.instructions+=4;goto B6c54c8;
case 0x6c54cb:c.instructions+=3;goto B6c54cb;
case 0x6c54ce:c.instructions+=2;goto B6c54ce;
case 0x6c54d1:c.instructions+=1;goto B6c54d1;
case 0x6c54d7:goto L6c54d7;
case 0x6c54da:c.instructions+=3;goto B6c54da;
case 0x6c54dd:c.instructions+=2;goto B6c54dd;
case 0x6c54e0:c.instructions+=1;goto B6c54e0;
case 0x6c54e6:goto L6c54e6;
case 0x6c54e9:c.instructions+=4;goto B6c54e9;
case 0x6c54ea:c.instructions+=3;goto B6c54ea;
case 0x6c54ed:c.instructions+=2;goto B6c54ed;
case 0x6c54f0:c.instructions+=1;goto B6c54f0;
case 0x6c54f6:goto L6c54f6;
case 0x6c54f9:goto L6c54f9;
case 0x6c54fc:c.instructions+=3;goto B6c54fc;
case 0x6c5503:c.instructions+=2;goto B6c5503;
case 0x6c5506:c.instructions+=1;goto B6c5506;
case 0x6c5508:goto L6c5508;
case 0x6c550a:c.instructions+=2;goto B6c550a;
case 0x6c550d:c.instructions+=1;goto B6c550d;
case 0x6c550f:goto L6c550f;
case 0x6c5512:c.instructions+=2;goto B6c5512;
case 0x6c5515:c.instructions+=1;goto B6c5515;
case 0x6c5518:goto L6c5518;
case 0x6c551f:c.instructions+=3;goto B6c551f;
case 0x6c5522:c.instructions+=2;goto B6c5522;
case 0x6c5524:c.instructions+=1;goto B6c5524;
case 0x6c5526:goto L6c5526;
case 0x6c5529:goto L6c5529;
case 0x6c552b:c.instructions+=2;goto B6c552b;
case 0x6c552d:c.instructions+=1;goto B6c552d;
case 0x6c552f:goto L6c552f;
case 0x6c5532:c.instructions+=1;goto B6c5532;
case 0x6c5534:goto L6c5534;
case 0x6c553b:goto L6c553b;
case 0x6c553e:c.instructions+=2;goto B6c553e;
case 0x6c553f:c.instructions+=1;goto B6c553f;
case 0x6c5541:goto L6c5541;
case 0x6c5542:c.instructions+=2;goto B6c5542;
case 0x6c5545:c.instructions+=1;goto B6c5545;
case 0x6c5547:goto L6c5547;
case 0x6c554a:c.instructions+=2;goto B6c554a;
case 0x6c554e:c.instructions+=1;goto B6c554e;
case 0x6c5550:goto L6c5550;
case 0x6c5554:c.instructions+=1;goto B6c5554;
case 0x6c5556:goto L6c5556;
case 0x6c5559:c.instructions+=2;goto B6c5559;
case 0x6c555d:c.instructions+=1;goto B6c555d;
case 0x6c5563:goto L6c5563;
case 0x6c5567:c.instructions+=1;goto B6c5567;
case 0x6c5569:goto L6c5569;
case 0x6c556c:c.instructions+=2;goto B6c556c;
case 0x6c5570:c.instructions+=1;goto B6c5570;
case 0x6c5576:goto L6c5576;
case 0x6c5578:goto L6c5578;
case 0x6c557b:c.instructions+=7;goto B6c557b;
case 0x6c557d:c.instructions+=6;goto B6c557d;
case 0x6c5580:c.instructions+=5;goto B6c5580;
case 0x6c5582:c.instructions+=4;goto B6c5582;
case 0x6c5584:c.instructions+=3;goto B6c5584;
case 0x6c5587:c.instructions+=2;goto B6c5587;
case 0x6c558d:c.instructions+=1;goto B6c558d;
case 0x6c5593:goto L6c5593;
case 0x6c5595:goto L6c5595;
case 0x6c5597:c.instructions+=1;goto B6c5597;
case 0x6c559a:goto L6c559a;
case 0x6c559c:goto L6c559c;
case 0x6c559f:c.instructions+=4;goto B6c559f;
case 0x6c55a0:c.instructions+=3;goto B6c55a0;
case 0x6c55a7:c.instructions+=2;goto B6c55a7;
case 0x6c55aa:c.instructions+=1;goto B6c55aa;
case 0x6c55ac:goto L6c55ac;
case 0x6c55b3:c.instructions+=2;goto B6c55b3;
case 0x6c55b6:c.instructions+=1;goto B6c55b6;
case 0x6c55b8:goto L6c55b8;
case 0x6c55bf:c.instructions+=2;goto B6c55bf;
case 0x6c55c2:c.instructions+=1;goto B6c55c2;
case 0x6c55c4:goto L6c55c4;
case 0x6c55cb:goto L6c55cb;
case 0x6c55ce:c.instructions+=2;goto B6c55ce;
case 0x6c55d3:c.instructions+=1;goto B6c55d3;
case 0x6c55d5:goto L6c55d5;
case 0x6c55d9:goto L6c55d9;
case 0x6c55dc:goto L6c55dc;
case 0x6c55e0:goto L6c55e0;
case 0x6c55e2:c.instructions+=2;goto B6c55e2;
case 0x6c55e4:c.instructions+=1;goto B6c55e4;
case 0x6c55ea:goto L6c55ea;
case 0x6c55ed:c.instructions+=2;goto B6c55ed;
case 0x6c55f0:c.instructions+=1;goto B6c55f0;
case 0x6c55f6:goto L6c55f6;
case 0x6c55f9:c.instructions+=11;goto B6c55f9;
case 0x6c55fc:c.instructions+=10;goto B6c55fc;
case 0x6c55ff:c.instructions+=9;goto B6c55ff;
case 0x6c5602:c.instructions+=8;goto B6c5602;
case 0x6c5609:c.instructions+=7;goto B6c5609;
case 0x6c560c:c.instructions+=6;goto B6c560c;
case 0x6c5613:c.instructions+=5;goto B6c5613;
case 0x6c561a:c.instructions+=4;goto B6c561a;
case 0x6c5621:c.instructions+=3;goto B6c5621;
case 0x6c5624:c.instructions+=2;goto B6c5624;
case 0x6c5627:c.instructions+=1;goto B6c5627;
case 0x6c562d:goto L6c562d;
case 0x6c5634:c.instructions+=2;goto B6c5634;
case 0x6c563b:c.instructions+=1;goto B6c563b;
case 0x6c5641:goto L6c5641;
case 0x6c5648:c.instructions+=2;goto B6c5648;
case 0x6c564f:c.instructions+=1;goto B6c564f;
case 0x6c5655:goto L6c5655;
case 0x6c5657:c.instructions+=1;goto B6c5657;
case 0x6c565d:goto L6c565d;
case 0x6c5660:c.instructions+=6;goto B6c5660;
case 0x6c5663:c.instructions+=5;goto B6c5663;
case 0x6c5666:c.instructions+=4;goto B6c5666;
case 0x6c5669:c.instructions+=3;goto B6c5669;
case 0x6c566d:c.instructions+=2;goto B6c566d;
case 0x6c5670:c.instructions+=1;goto B6c5670;
case 0x6c5676:goto L6c5676;
case 0x6c5679:c.instructions+=4;goto B6c5679;
case 0x6c567c:c.instructions+=3;goto B6c567c;
case 0x6c567f:c.instructions+=2;goto B6c567f;
case 0x6c5683:c.instructions+=1;goto B6c5683;
case 0x6c5689:goto L6c5689;
case 0x6c568c:c.instructions+=3;goto B6c568c;
case 0x6c568f:c.instructions+=2;goto B6c568f;
case 0x6c5693:c.instructions+=1;goto B6c5693;
case 0x6c5699:goto L6c5699;
case 0x6c569f:c.instructions+=5;goto B6c569f;
case 0x6c56a2:c.instructions+=4;goto B6c56a2;
case 0x6c56a4:c.instructions+=3;goto B6c56a4;
case 0x6c56a6:c.instructions+=2;goto B6c56a6;
case 0x6c56a9:c.instructions+=1;goto B6c56a9;
case 0x6c56af:goto L6c56af;
case 0x6c56b1:c.instructions+=11;goto B6c56b1;
case 0x6c56b4:c.instructions+=10;goto B6c56b4;
case 0x6c56b7:c.instructions+=9;goto B6c56b7;
case 0x6c56bb:c.instructions+=8;goto B6c56bb;
case 0x6c56be:c.instructions+=7;goto B6c56be;
case 0x6c56c1:c.instructions+=6;goto B6c56c1;
case 0x6c56c4:c.instructions+=5;goto B6c56c4;
case 0x6c56c7:c.instructions+=4;goto B6c56c7;
case 0x6c56c9:c.instructions+=3;goto B6c56c9;
case 0x6c56cb:c.instructions+=2;goto B6c56cb;
case 0x6c56ce:c.instructions+=1;goto B6c56ce;
case 0x6c56d4:goto L6c56d4;
case 0x6c56da:c.instructions+=5;goto B6c56da;
case 0x6c56dd:c.instructions+=4;goto B6c56dd;
case 0x6c56df:c.instructions+=3;goto B6c56df;
case 0x6c56e1:c.instructions+=2;goto B6c56e1;
case 0x6c56e4:c.instructions+=1;goto B6c56e4;
case 0x6c56ea:goto L6c56ea;
case 0x6c56ed:c.instructions+=4;goto B6c56ed;
case 0x6c56f0:c.instructions+=3;goto B6c56f0;
case 0x6c56f3:c.instructions+=2;goto B6c56f3;
case 0x6c56f9:c.instructions+=1;goto B6c56f9;
case 0x6c56fb:goto L6c56fb;
case 0x6c5702:goto L6c5702;
case 0x6c5705:c.instructions+=3;goto B6c5705;
case 0x6c5707:c.instructions+=2;goto B6c5707;
case 0x6c5709:c.instructions+=1;goto B6c5709;
case 0x6c570b:goto L6c570b;
case 0x6c570e:goto L6c570e;
case 0x6c5712:c.instructions+=1;goto B6c5712;
case 0x6c5714:goto L6c5714;
case 0x6c5715:c.instructions+=2;goto B6c5715;
case 0x6c5717:c.instructions+=1;goto B6c5717;
case 0x6c5719:goto L6c5719;
case 0x6c571b:c.instructions+=1;goto B6c571b;
case 0x6c571d:goto L6c571d;
case 0x6c5721:c.instructions+=1;goto B6c5721;
case 0x6c5723:goto L6c5723;
case 0x6c5726:c.instructions+=3;goto B6c5726;
case 0x6c572a:c.instructions+=2;goto B6c572a;
case 0x6c572b:c.instructions+=1;goto B6c572b;
case 0x6c572e:goto L6c572e;
case 0x6c5731:c.instructions+=3;goto B6c5731;
case 0x6c5734:c.instructions+=2;goto B6c5734;
case 0x6c5737:c.instructions+=1;goto B6c5737;
case 0x6c573d:goto L6c573d;
case 0x6c5743:c.instructions+=2;goto B6c5743;
case 0x6c5746:c.instructions+=1;goto B6c5746;
case 0x6c574b:goto L6c574b;
case 0x6c574e:c.instructions+=1;goto B6c574e;
case 0x6c5754:goto L6c5754;
case 0x6c5757:c.instructions+=8;goto B6c5757;
case 0x6c575d:c.instructions+=7;goto B6c575d;
case 0x6c5760:c.instructions+=6;goto B6c5760;
case 0x6c5762:c.instructions+=5;goto B6c5762;
case 0x6c5764:c.instructions+=4;goto B6c5764;
case 0x6c576a:c.instructions+=3;goto B6c576a;
case 0x6c576d:c.instructions+=2;goto B6c576d;
case 0x6c5770:c.instructions+=1;goto B6c5770;
case 0x6c5772:goto L6c5772;
case 0x6c5777:c.instructions+=2;goto B6c5777;
case 0x6c577c:c.instructions+=1;goto B6c577c;
case 0x6c577e:goto L6c577e;
case 0x6c5780:c.instructions+=1;goto B6c5780;
case 0x6c5781:goto L6c5781;
case 0x6c5784:c.instructions+=5;goto B6c5784;
case 0x6c5786:c.instructions+=4;goto B6c5786;
case 0x6c578a:c.instructions+=3;goto B6c578a;
case 0x6c578d:c.instructions+=2;goto B6c578d;
case 0x6c5790:c.instructions+=1;goto B6c5790;
case 0x6c5796:goto L6c5796;
case 0x6c5799:c.instructions+=7;goto B6c5799;
case 0x6c579a:c.instructions+=6;goto B6c579a;
case 0x6c57a0:c.instructions+=5;goto B6c57a0;
case 0x6c57a1:c.instructions+=4;goto B6c57a1;
case 0x6c57a4:c.instructions+=3;goto B6c57a4;
case 0x6c57a5:c.instructions+=2;goto B6c57a5;
case 0x6c57a7:c.instructions+=1;goto B6c57a7;
case 0x6c57ac:goto L6c57ac;
case 0x6c57ae:c.instructions+=1;goto B6c57ae;
case 0x6c57b0:goto L6c57b0;
case 0x6c57b3:c.instructions+=7;goto B6c57b3;
case 0x6c57b4:c.instructions+=6;goto B6c57b4;
case 0x6c57ba:c.instructions+=5;goto B6c57ba;
case 0x6c57bb:c.instructions+=4;goto B6c57bb;
case 0x6c57be:c.instructions+=3;goto B6c57be;
case 0x6c57bf:c.instructions+=2;goto B6c57bf;
case 0x6c57c1:c.instructions+=1;goto B6c57c1;
case 0x6c57c6:goto L6c57c6;
case 0x6c57c8:c.instructions+=1;goto B6c57c8;
case 0x6c57ce:goto L6c57ce;
case 0x6c57d1:c.instructions+=2;goto B6c57d1;
case 0x6c57d4:c.instructions+=1;goto B6c57d4;
case 0x6c57d9:goto L6c57d9;
case 0x6c57dc:goto L6c57dc;
case 0x6c57e0:goto L6c57e0;
case 0x6c57e3:c.instructions+=6;goto B6c57e3;
case 0x6c57e5:c.instructions+=5;goto B6c57e5;
case 0x6c57e8:c.instructions+=4;goto B6c57e8;
case 0x6c57ea:c.instructions+=3;goto B6c57ea;
case 0x6c57ed:c.instructions+=2;goto B6c57ed;
case 0x6c57f3:c.instructions+=1;goto B6c57f3;
case 0x6c57f9:goto L6c57f9;
case 0x6c57fb:goto L6c57fb;
case 0x6c57fd:c.instructions+=1;goto B6c57fd;
case 0x6c5800:goto L6c5800;
case 0x6c5802:goto L6c5802;
case 0x6c5804:c.instructions+=3;goto B6c5804;
case 0x6c5805:c.instructions+=2;goto B6c5805;
case 0x6c5808:c.instructions+=1;goto B6c5808;
case 0x6c580e:goto L6c580e;
case 0x6c5810:goto L6c5810;
case 0x6c5812:c.instructions+=3;goto B6c5812;
case 0x6c5814:c.instructions+=2;goto B6c5814;
case 0x6c5815:c.instructions+=1;goto B6c5815;
case 0x6c581b:goto L6c581b;
case 0x6c581d:goto L6c581d;
case 0x6c5820:c.instructions+=2;goto B6c5820;
case 0x6c5823:c.instructions+=1;goto B6c5823;
case 0x6c5826:goto L6c5826;
case 0x6c582a:c.instructions+=1;goto B6c582a;
case 0x6c582c:goto L6c582c;
case 0x6c582e:c.instructions+=3;goto B6c582e;
case 0x6c582f:c.instructions+=2;goto B6c582f;
case 0x6c5832:c.instructions+=1;goto B6c5832;
case 0x6c5834:goto L6c5834;
case 0x6c5837:goto L6c5837;
case 0x6c583a:c.instructions+=9;goto B6c583a;
case 0x6c583d:c.instructions+=8;goto B6c583d;
case 0x6c5840:c.instructions+=7;goto B6c5840;
case 0x6c5847:c.instructions+=6;goto B6c5847;
case 0x6c584a:c.instructions+=5;goto B6c584a;
case 0x6c584d:c.instructions+=4;goto B6c584d;
case 0x6c5850:c.instructions+=3;goto B6c5850;
case 0x6c5852:c.instructions+=2;goto B6c5852;
case 0x6c5855:c.instructions+=1;goto B6c5855;
case 0x6c5857:goto L6c5857;
case 0x6c585a:c.instructions+=2;goto B6c585a;
case 0x6c585d:c.instructions+=1;goto B6c585d;
case 0x6c5863:goto L6c5863;
case 0x6c5866:c.instructions+=15;goto B6c5866;
case 0x6c5868:c.instructions+=14;goto B6c5868;
case 0x6c586b:c.instructions+=13;goto B6c586b;
case 0x6c586e:c.instructions+=12;goto B6c586e;
case 0x6c5871:c.instructions+=11;goto B6c5871;
case 0x6c5874:c.instructions+=10;goto B6c5874;
case 0x6c5876:c.instructions+=9;goto B6c5876;
case 0x6c587c:c.instructions+=8;goto B6c587c;
case 0x6c587f:c.instructions+=7;goto B6c587f;
case 0x6c5880:c.instructions+=6;goto B6c5880;
case 0x6c5883:c.instructions+=5;goto B6c5883;
case 0x6c5884:c.instructions+=4;goto B6c5884;
case 0x6c5887:c.instructions+=3;goto B6c5887;
case 0x6c5888:c.instructions+=2;goto B6c5888;
case 0x6c5889:c.instructions+=1;goto B6c5889;
case 0x6c588e:goto L6c588e;
case 0x6c5890:c.instructions+=1;goto B6c5890;
case 0x6c5892:goto L6c5892;
case 0x6c5895:c.instructions+=14;goto B6c5895;
case 0x6c5896:c.instructions+=13;goto B6c5896;
case 0x6c5899:c.instructions+=12;goto B6c5899;
case 0x6c589c:c.instructions+=11;goto B6c589c;
case 0x6c589d:c.instructions+=10;goto B6c589d;
case 0x6c58a3:c.instructions+=9;goto B6c58a3;
case 0x6c58a4:c.instructions+=8;goto B6c58a4;
case 0x6c58a7:c.instructions+=7;goto B6c58a7;
case 0x6c58a8:c.instructions+=6;goto B6c58a8;
case 0x6c58ae:c.instructions+=5;goto B6c58ae;
case 0x6c58af:c.instructions+=4;goto B6c58af;
case 0x6c58b5:c.instructions+=3;goto B6c58b5;
case 0x6c58b6:c.instructions+=2;goto B6c58b6;
case 0x6c58b7:c.instructions+=1;goto B6c58b7;
case 0x6c58bc:goto L6c58bc;
case 0x6c58bf:c.instructions+=1;goto B6c58bf;
case 0x6c58c1:goto L6c58c1;
case 0x6c58c4:c.instructions+=3;goto B6c58c4;
case 0x6c58c6:c.instructions+=2;goto B6c58c6;
case 0x6c58c9:c.instructions+=1;goto B6c58c9;
case 0x6c58d0:goto L6c58d0;
case 0x6c58d4:c.instructions+=2;goto B6c58d4;
case 0x6c58d7:c.instructions+=1;goto B6c58d7;
case 0x6c58d9:goto L6c58d9;
case 0x6c58db:c.instructions+=3;goto B6c58db;
case 0x6c58de:c.instructions+=2;goto B6c58de;
case 0x6c58e0:c.instructions+=1;goto B6c58e0;
case 0x6c58e2:goto L6c58e2;
case 0x6c58e5:goto L6c58e5;
case 0x6c58e6:c.instructions+=3;goto B6c58e6;
case 0x6c58e9:c.instructions+=2;goto B6c58e9;
case 0x6c58ec:c.instructions+=1;goto B6c58ec;
case 0x6c58ee:goto L6c58ee;
case 0x6c58f2:c.instructions+=1;goto B6c58f2;
case 0x6c58f4:goto L6c58f4;
case 0x6c58f7:c.instructions+=3;goto B6c58f7;
case 0x6c58fa:c.instructions+=2;goto B6c58fa;
case 0x6c58fe:c.instructions+=1;goto B6c58fe;
case 0x6c5904:goto L6c5904;
case 0x6c5906:goto L6c5906;
case 0x6c590d:goto L6c590d;
case 0x6c5911:c.instructions+=1;goto B6c5911;
case 0x6c5915:goto L6c5915;
case 0x6c5919:c.instructions+=1;goto B6c5919;
case 0x6c591b:goto L6c591b;
case 0x6c591d:c.instructions+=3;goto B6c591d;
case 0x6c591e:c.instructions+=2;goto B6c591e;
case 0x6c5921:c.instructions+=1;goto B6c5921;
case 0x6c5923:goto L6c5923;
case 0x6c5926:goto L6c5926;
case 0x6c592e:c.instructions+=1;goto B6c592e;
case 0x6c5930:goto L6c5930;
case 0x6c5934:c.instructions+=2;goto B6c5934;
case 0x6c5938:c.instructions+=1;goto B6c5938;
case 0x6c593a:goto L6c593a;
case 0x6c593c:c.instructions+=2;goto B6c593c;
case 0x6c593f:c.instructions+=1;goto B6c593f;
case 0x6c5941:goto L6c5941;
case 0x6c5944:c.instructions+=2;goto B6c5944;
case 0x6c594b:c.instructions+=1;goto B6c594b;
case 0x6c594e:goto L6c594e;
case 0x6c5952:c.instructions+=2;goto B6c5952;
case 0x6c5954:c.instructions+=1;goto B6c5954;
case 0x6c5956:goto L6c5956;
case 0x6c5959:c.instructions+=5;goto B6c5959;
case 0x6c595c:c.instructions+=4;goto B6c595c;
case 0x6c595f:c.instructions+=3;goto B6c595f;
case 0x6c5961:c.instructions+=2;goto B6c5961;
case 0x6c5964:c.instructions+=1;goto B6c5964;
case 0x6c5967:goto L6c5967;
case 0x6c5969:c.instructions+=1;goto B6c5969;
case 0x6c596b:goto L6c596b;
case 0x6c596e:c.instructions+=3;goto B6c596e;
case 0x6c5971:c.instructions+=2;goto B6c5971;
case 0x6c5974:c.instructions+=1;goto B6c5974;
case 0x6c5976:goto L6c5976;
case 0x6c5977:c.instructions+=2;goto B6c5977;
case 0x6c597a:c.instructions+=1;goto B6c597a;
case 0x6c597c:goto L6c597c;
case 0x6c597e:goto L6c597e;
case 0x6c5985:goto L6c5985;
case 0x6c5988:c.instructions+=3;goto B6c5988;
case 0x6c598b:c.instructions+=2;goto B6c598b;
case 0x6c598e:c.instructions+=1;goto B6c598e;
case 0x6c5990:goto L6c5990;
case 0x6c5993:c.instructions+=4;goto B6c5993;
case 0x6c5996:c.instructions+=3;goto B6c5996;
case 0x6c5999:c.instructions+=2;goto B6c5999;
case 0x6c599d:c.instructions+=1;goto B6c599d;
case 0x6c59a3:goto L6c59a3;
case 0x6c59a5:c.instructions+=2;goto B6c59a5;
case 0x6c59a8:c.instructions+=1;goto B6c59a8;
case 0x6c59ae:goto L6c59ae;
case 0x6c59b1:c.instructions+=1;goto B6c59b1;
case 0x6c59b7:goto L6c59b7;
case 0x6c59b9:c.instructions+=3;goto B6c59b9;
case 0x6c59bc:c.instructions+=2;goto B6c59bc;
case 0x6c59bf:c.instructions+=1;goto B6c59bf;
case 0x6c59c5:goto L6c59c5;
case 0x6c59cc:c.instructions+=5;goto B6c59cc;
case 0x6c59cf:c.instructions+=4;goto B6c59cf;
case 0x6c59d1:c.instructions+=3;goto B6c59d1;
case 0x6c59d4:c.instructions+=2;goto B6c59d4;
case 0x6c59d7:c.instructions+=1;goto B6c59d7;
case 0x6c59dd:goto L6c59dd;
case 0x6c59e0:c.instructions+=3;goto B6c59e0;
case 0x6c59e3:c.instructions+=2;goto B6c59e3;
case 0x6c59e5:c.instructions+=1;goto B6c59e5;
case 0x6c59eb:goto L6c59eb;
case 0x6c59ee:c.instructions+=2;goto B6c59ee;
case 0x6c59f1:c.instructions+=1;goto B6c59f1;
case 0x6c59f4:goto L6c59f4;
case 0x6c59f6:c.instructions+=2;goto B6c59f6;
case 0x6c59f8:c.instructions+=1;goto B6c59f8;
case 0x6c59fa:goto L6c59fa;
case 0x6c59fc:c.instructions+=1;goto B6c59fc;
case 0x6c59fe:goto L6c59fe;
case 0x6c5a01:c.instructions+=3;goto B6c5a01;
case 0x6c5a03:c.instructions+=2;goto B6c5a03;
case 0x6c5a06:c.instructions+=1;goto B6c5a06;
case 0x6c5a08:goto L6c5a08;
case 0x6c5a0b:c.instructions+=6;goto B6c5a0b;
case 0x6c5a12:c.instructions+=5;goto B6c5a12;
case 0x6c5a15:c.instructions+=4;goto B6c5a15;
case 0x6c5a18:c.instructions+=3;goto B6c5a18;
case 0x6c5a1b:c.instructions+=2;goto B6c5a1b;
case 0x6c5a1e:c.instructions+=1;goto B6c5a1e;
case 0x6c5a20:goto L6c5a20;
case 0x6c5a22:c.instructions+=2;goto B6c5a22;
case 0x6c5a24:c.instructions+=1;goto B6c5a24;
case 0x6c5a26:goto L6c5a26;
case 0x6c5a29:c.instructions+=4;goto B6c5a29;
case 0x6c5a2c:c.instructions+=3;goto B6c5a2c;
case 0x6c5a2f:c.instructions+=2;goto B6c5a2f;
case 0x6c5a32:c.instructions+=1;goto B6c5a32;
case 0x6c5a34:goto L6c5a34;
case 0x6c5a3b:goto L6c5a3b;
case 0x6c5a3e:c.instructions+=2;goto B6c5a3e;
case 0x6c5a3f:c.instructions+=1;goto B6c5a3f;
case 0x6c5a41:goto L6c5a41;
case 0x6c5a43:goto L6c5a43;
case 0x6c5a46:c.instructions+=1;goto B6c5a46;
case 0x6c5a48:goto L6c5a48;
case 0x6c5a4a:c.instructions+=1;goto B6c5a4a;
case 0x6c5a4c:goto L6c5a4c;
case 0x6c5a4f:goto L6c5a4f;
case 0x6c5a51:c.instructions+=1;goto B6c5a51;
case 0x6c5a53:goto L6c5a53;
case 0x6c5a55:goto L6c5a55;
case 0x6c5a5c:c.instructions+=1;goto B6c5a5c;
case 0x6c5a5e:goto L6c5a5e;
case 0x6c5a60:goto L6c5a60;
case 0x6c5a61:c.instructions+=2;goto B6c5a61;
case 0x6c5a64:c.instructions+=1;goto B6c5a64;
case 0x6c5a66:goto L6c5a66;
case 0x6c5a68:c.instructions+=1;goto B6c5a68;
case 0x6c5a6a:goto L6c5a6a;
case 0x6c5a71:goto L6c5a71;
case 0x6c5a74:c.instructions+=4;goto B6c5a74;
case 0x6c5a77:c.instructions+=3;goto B6c5a77;
case 0x6c5a7a:c.instructions+=2;goto B6c5a7a;
case 0x6c5a7d:c.instructions+=1;goto B6c5a7d;
case 0x6c5a83:goto L6c5a83;
case 0x6c5a86:c.instructions+=3;goto B6c5a86;
case 0x6c5a89:c.instructions+=2;goto B6c5a89;
case 0x6c5a8c:c.instructions+=1;goto B6c5a8c;
case 0x6c5a92:goto L6c5a92;
case 0x6c5a95:c.instructions+=4;goto B6c5a95;
case 0x6c5a96:c.instructions+=3;goto B6c5a96;
case 0x6c5a99:c.instructions+=2;goto B6c5a99;
case 0x6c5a9c:c.instructions+=1;goto B6c5a9c;
case 0x6c5aa2:goto L6c5aa2;
case 0x6c5aa5:goto L6c5aa5;
case 0x6c5aa8:c.instructions+=3;goto B6c5aa8;
case 0x6c5aaf:c.instructions+=2;goto B6c5aaf;
case 0x6c5ab2:c.instructions+=1;goto B6c5ab2;
case 0x6c5ab4:goto L6c5ab4;
case 0x6c5ab6:c.instructions+=2;goto B6c5ab6;
case 0x6c5ab9:c.instructions+=1;goto B6c5ab9;
case 0x6c5abb:goto L6c5abb;
case 0x6c5abe:c.instructions+=2;goto B6c5abe;
case 0x6c5ac1:c.instructions+=1;goto B6c5ac1;
case 0x6c5ac4:goto L6c5ac4;
case 0x6c5acb:c.instructions+=3;goto B6c5acb;
case 0x6c5ace:c.instructions+=2;goto B6c5ace;
case 0x6c5ad0:c.instructions+=1;goto B6c5ad0;
case 0x6c5ad2:goto L6c5ad2;
case 0x6c5ad5:goto L6c5ad5;
case 0x6c5ad7:c.instructions+=2;goto B6c5ad7;
case 0x6c5ad9:c.instructions+=1;goto B6c5ad9;
case 0x6c5adb:goto L6c5adb;
case 0x6c5ade:c.instructions+=1;goto B6c5ade;
case 0x6c5ae0:goto L6c5ae0;
case 0x6c5ae7:goto L6c5ae7;
case 0x6c5aea:c.instructions+=2;goto B6c5aea;
case 0x6c5aeb:c.instructions+=1;goto B6c5aeb;
case 0x6c5aed:goto L6c5aed;
case 0x6c5aee:c.instructions+=2;goto B6c5aee;
case 0x6c5af1:c.instructions+=1;goto B6c5af1;
case 0x6c5af3:goto L6c5af3;
case 0x6c5af6:c.instructions+=2;goto B6c5af6;
case 0x6c5afa:c.instructions+=1;goto B6c5afa;
case 0x6c5afc:goto L6c5afc;
case 0x6c5b00:c.instructions+=1;goto B6c5b00;
case 0x6c5b02:goto L6c5b02;
case 0x6c5b05:c.instructions+=2;goto B6c5b05;
case 0x6c5b09:c.instructions+=1;goto B6c5b09;
case 0x6c5b0f:goto L6c5b0f;
case 0x6c5b13:c.instructions+=1;goto B6c5b13;
case 0x6c5b15:goto L6c5b15;
case 0x6c5b18:c.instructions+=2;goto B6c5b18;
case 0x6c5b1c:c.instructions+=1;goto B6c5b1c;
case 0x6c5b22:goto L6c5b22;
case 0x6c5b24:goto L6c5b24;
case 0x6c5b27:c.instructions+=7;goto B6c5b27;
case 0x6c5b29:c.instructions+=6;goto B6c5b29;
case 0x6c5b2c:c.instructions+=5;goto B6c5b2c;
case 0x6c5b2e:c.instructions+=4;goto B6c5b2e;
case 0x6c5b30:c.instructions+=3;goto B6c5b30;
case 0x6c5b33:c.instructions+=2;goto B6c5b33;
case 0x6c5b39:c.instructions+=1;goto B6c5b39;
case 0x6c5b3f:goto L6c5b3f;
case 0x6c5b41:goto L6c5b41;
case 0x6c5b43:c.instructions+=1;goto B6c5b43;
case 0x6c5b46:goto L6c5b46;
case 0x6c5b48:goto L6c5b48;
case 0x6c5b4b:c.instructions+=4;goto B6c5b4b;
case 0x6c5b4c:c.instructions+=3;goto B6c5b4c;
case 0x6c5b53:c.instructions+=2;goto B6c5b53;
case 0x6c5b56:c.instructions+=1;goto B6c5b56;
case 0x6c5b58:goto L6c5b58;
case 0x6c5b5f:c.instructions+=2;goto B6c5b5f;
case 0x6c5b62:c.instructions+=1;goto B6c5b62;
case 0x6c5b64:goto L6c5b64;
case 0x6c5b6b:c.instructions+=2;goto B6c5b6b;
case 0x6c5b6e:c.instructions+=1;goto B6c5b6e;
case 0x6c5b70:goto L6c5b70;
case 0x6c5b77:goto L6c5b77;
case 0x6c5b7a:c.instructions+=2;goto B6c5b7a;
case 0x6c5b7f:c.instructions+=1;goto B6c5b7f;
case 0x6c5b81:goto L6c5b81;
case 0x6c5b85:goto L6c5b85;
case 0x6c5b88:c.instructions+=3;goto B6c5b88;
case 0x6c5b8a:c.instructions+=2;goto B6c5b8a;
case 0x6c5b8c:c.instructions+=1;goto B6c5b8c;
case 0x6c5b92:goto L6c5b92;
case 0x6c5b95:c.instructions+=2;goto B6c5b95;
case 0x6c5b98:c.instructions+=1;goto B6c5b98;
case 0x6c5b9e:goto L6c5b9e;
case 0x6c5ba2:c.instructions+=5;goto B6c5ba2;
case 0x6c5ba9:c.instructions+=4;goto B6c5ba9;
case 0x6c5bac:c.instructions+=3;goto B6c5bac;
case 0x6c5baf:c.instructions+=2;goto B6c5baf;
case 0x6c5bb2:c.instructions+=1;goto B6c5bb2;
case 0x6c5bb8:goto L6c5bb8;
case 0x6c5bbb:c.instructions+=3;goto B6c5bbb;
case 0x6c5bbd:c.instructions+=2;goto B6c5bbd;
case 0x6c5bc0:c.instructions+=1;goto B6c5bc0;
case 0x6c5bc6:goto L6c5bc6;
case 0x6c5bc9:c.instructions+=2;goto B6c5bc9;
case 0x6c5bcc:c.instructions+=1;goto B6c5bcc;
case 0x6c5bd2:goto L6c5bd2;
case 0x6c5bd5:c.instructions+=2;goto B6c5bd5;
case 0x6c5bd8:c.instructions+=1;goto B6c5bd8;
case 0x6c5bde:goto L6c5bde;
case 0x6c5be1:c.instructions+=12;goto B6c5be1;
case 0x6c5be4:c.instructions+=11;goto B6c5be4;
case 0x6c5be7:c.instructions+=10;goto B6c5be7;
case 0x6c5bea:c.instructions+=9;goto B6c5bea;
case 0x6c5bed:c.instructions+=8;goto B6c5bed;
case 0x6c5bf0:c.instructions+=7;goto B6c5bf0;
case 0x6c5bf3:c.instructions+=6;goto B6c5bf3;
case 0x6c5bf7:c.instructions+=5;goto B6c5bf7;
case 0x6c5bfa:c.instructions+=4;goto B6c5bfa;
case 0x6c5bfd:c.instructions+=3;goto B6c5bfd;
case 0x6c5c00:c.instructions+=2;goto B6c5c00;
case 0x6c5c03:c.instructions+=1;goto B6c5c03;
case 0x6c5c05:goto L6c5c05;
case 0x6c5c09:c.instructions+=1;goto B6c5c09;
case 0x6c5c0b:goto L6c5c0b;
case 0x6c5c11:c.instructions+=5;goto B6c5c11;
case 0x6c5c14:c.instructions+=4;goto B6c5c14;
case 0x6c5c16:c.instructions+=3;goto B6c5c16;
case 0x6c5c18:c.instructions+=2;goto B6c5c18;
case 0x6c5c1b:c.instructions+=1;goto B6c5c1b;
case 0x6c5c1d:goto L6c5c1d;
case 0x6c5c20:c.instructions+=1;goto B6c5c20;
case 0x6c5c22:goto L6c5c22;
case 0x6c5c25:c.instructions+=2;goto B6c5c25;
case 0x6c5c29:c.instructions+=1;goto B6c5c29;
case 0x6c5c2b:goto L6c5c2b;
case 0x6c5c31:c.instructions+=5;goto B6c5c31;
case 0x6c5c34:c.instructions+=4;goto B6c5c34;
case 0x6c5c36:c.instructions+=3;goto B6c5c36;
case 0x6c5c38:c.instructions+=2;goto B6c5c38;
case 0x6c5c3b:c.instructions+=1;goto B6c5c3b;
case 0x6c5c3d:goto L6c5c3d;
case 0x6c5c44:goto L6c5c44;
case 0x6c5c48:c.instructions+=4;goto B6c5c48;
case 0x6c5c4b:c.instructions+=3;goto B6c5c4b;
case 0x6c5c51:c.instructions+=2;goto B6c5c51;
case 0x6c5c54:c.instructions+=1;goto B6c5c54;
case 0x6c5c5a:goto L6c5c5a;
case 0x6c5c5d:c.instructions+=5;goto B6c5c5d;
case 0x6c5c60:c.instructions+=4;goto B6c5c60;
case 0x6c5c63:c.instructions+=3;goto B6c5c63;
case 0x6c5c66:c.instructions+=2;goto B6c5c66;
case 0x6c5c68:c.instructions+=1;goto B6c5c68;
case 0x6c5c6a:goto L6c5c6a;
case 0x6c5c6d:c.instructions+=1;goto B6c5c6d;
case 0x6c5c6f:goto L6c5c6f;
case 0x6c5c72:c.instructions+=1;goto B6c5c72;
case 0x6c5c74:goto L6c5c74;
case 0x6c5c77:c.instructions+=3;goto B6c5c77;
case 0x6c5c7c:c.instructions+=2;goto B6c5c7c;
case 0x6c5c7f:c.instructions+=1;goto B6c5c7f;
case 0x6c5c81:goto L6c5c81;
case 0x6c5c85:c.instructions+=1;goto B6c5c85;
case 0x6c5c87:goto L6c5c87;
case 0x6c5c8d:c.instructions+=5;goto B6c5c8d;
case 0x6c5c90:c.instructions+=4;goto B6c5c90;
case 0x6c5c92:c.instructions+=3;goto B6c5c92;
case 0x6c5c94:c.instructions+=2;goto B6c5c94;
case 0x6c5c97:c.instructions+=1;goto B6c5c97;
case 0x6c5c99:goto L6c5c99;
case 0x6c5ca0:goto L6c5ca0;
case 0x6c5ca3:c.instructions+=2;goto B6c5ca3;
case 0x6c5ca5:c.instructions+=1;goto B6c5ca5;
case 0x6c5ca7:goto L6c5ca7;
case 0x6c5caa:c.instructions+=1;goto B6c5caa;
case 0x6c5cac:goto L6c5cac;
case 0x6c5caf:c.instructions+=1;goto B6c5caf;
case 0x6c5cb1:goto L6c5cb1;
case 0x6c5cb4:c.instructions+=3;goto B6c5cb4;
case 0x6c5cb9:c.instructions+=2;goto B6c5cb9;
case 0x6c5cbc:c.instructions+=1;goto B6c5cbc;
case 0x6c5cbe:goto L6c5cbe;
case 0x6c5cc1:c.instructions+=2;goto B6c5cc1;
case 0x6c5cc5:c.instructions+=1;goto B6c5cc5;
case 0x6c5cc7:goto L6c5cc7;
case 0x6c5ccd:c.instructions+=5;goto B6c5ccd;
case 0x6c5cd0:c.instructions+=4;goto B6c5cd0;
case 0x6c5cd2:c.instructions+=3;goto B6c5cd2;
case 0x6c5cd4:c.instructions+=2;goto B6c5cd4;
case 0x6c5cd7:c.instructions+=1;goto B6c5cd7;
case 0x6c5cd9:goto L6c5cd9;
case 0x6c5cdb:c.instructions+=3;goto B6c5cdb;
case 0x6c5cdc:c.instructions+=2;goto B6c5cdc;
case 0x6c5cdf:c.instructions+=1;goto B6c5cdf;
case 0x6c5ce1:goto L6c5ce1;
case 0x6c5ce3:c.instructions+=1;goto B6c5ce3;
case 0x6c5ce4:goto L6c5ce4;
case 0x6c5ce8:c.instructions+=2;goto B6c5ce8;
case 0x6c5ceb:c.instructions+=1;goto B6c5ceb;
case 0x6c5cf1:goto L6c5cf1;
case 0x6c5cf7:c.instructions+=1;goto B6c5cf7;
case 0x6c5cfa:goto L6c5cfa;
case 0x6c5cfe:c.instructions+=7;goto B6c5cfe;
case 0x6c5d01:c.instructions+=6;goto B6c5d01;
case 0x6c5d04:c.instructions+=5;goto B6c5d04;
case 0x6c5d07:c.instructions+=4;goto B6c5d07;
case 0x6c5d0e:c.instructions+=3;goto B6c5d0e;
case 0x6c5d11:c.instructions+=2;goto B6c5d11;
case 0x6c5d14:c.instructions+=1;goto B6c5d14;
case 0x6c5d16:goto L6c5d16;
case 0x6c5d19:c.instructions+=2;goto B6c5d19;
case 0x6c5d1c:c.instructions+=1;goto B6c5d1c;
case 0x6c5d1e:goto L6c5d1e;
case 0x6c5d21:goto L6c5d21;
case 0x6c5d24:c.instructions+=4;goto B6c5d24;
case 0x6c5d27:c.instructions+=3;goto B6c5d27;
case 0x6c5d2a:c.instructions+=2;goto B6c5d2a;
case 0x6c5d2e:c.instructions+=1;goto B6c5d2e;
case 0x6c5d34:goto L6c5d34;
case 0x6c5d3a:c.instructions+=5;goto B6c5d3a;
case 0x6c5d3d:c.instructions+=4;goto B6c5d3d;
case 0x6c5d3f:c.instructions+=3;goto B6c5d3f;
case 0x6c5d41:c.instructions+=2;goto B6c5d41;
case 0x6c5d44:c.instructions+=1;goto B6c5d44;
case 0x6c5d4a:goto L6c5d4a;
case 0x6c5d4d:c.instructions+=3;goto B6c5d4d;
case 0x6c5d50:c.instructions+=2;goto B6c5d50;
case 0x6c5d54:c.instructions+=1;goto B6c5d54;
case 0x6c5d5a:goto L6c5d5a;
case 0x6c5d60:c.instructions+=5;goto B6c5d60;
case 0x6c5d63:c.instructions+=4;goto B6c5d63;
case 0x6c5d65:c.instructions+=3;goto B6c5d65;
case 0x6c5d67:c.instructions+=2;goto B6c5d67;
case 0x6c5d6a:c.instructions+=1;goto B6c5d6a;
case 0x6c5d70:goto L6c5d70;
case 0x6c5d73:c.instructions+=6;goto B6c5d73;
case 0x6c5d76:c.instructions+=5;goto B6c5d76;
case 0x6c5d79:c.instructions+=4;goto B6c5d79;
case 0x6c5d7c:c.instructions+=3;goto B6c5d7c;
case 0x6c5d7f:c.instructions+=2;goto B6c5d7f;
case 0x6c5d85:c.instructions+=1;goto B6c5d85;
case 0x6c5d87:goto L6c5d87;
case 0x6c5d8e:goto L6c5d8e;
case 0x6c5d91:c.instructions+=3;goto B6c5d91;
case 0x6c5d93:c.instructions+=2;goto B6c5d93;
case 0x6c5d95:c.instructions+=1;goto B6c5d95;
case 0x6c5d97:goto L6c5d97;
case 0x6c5d9a:goto L6c5d9a;
case 0x6c5d9e:c.instructions+=1;goto B6c5d9e;
case 0x6c5da0:goto L6c5da0;
case 0x6c5da1:c.instructions+=2;goto B6c5da1;
case 0x6c5da3:c.instructions+=1;goto B6c5da3;
case 0x6c5da5:goto L6c5da5;
case 0x6c5da7:c.instructions+=1;goto B6c5da7;
case 0x6c5da9:goto L6c5da9;
case 0x6c5dad:c.instructions+=1;goto B6c5dad;
case 0x6c5daf:goto L6c5daf;
case 0x6c5db2:c.instructions+=3;goto B6c5db2;
case 0x6c5db6:c.instructions+=2;goto B6c5db6;
case 0x6c5db7:c.instructions+=1;goto B6c5db7;
case 0x6c5dba:goto L6c5dba;
case 0x6c5dbb:c.instructions+=3;goto B6c5dbb;
case 0x6c5dbe:c.instructions+=2;goto B6c5dbe;
case 0x6c5dc1:c.instructions+=1;goto B6c5dc1;
case 0x6c5dc7:goto L6c5dc7;
case 0x6c5dcc:goto L6c5dcc;
case 0x6c5dd2:c.instructions+=4;goto B6c5dd2;
case 0x6c5dd4:c.instructions+=3;goto B6c5dd4;
case 0x6c5ddb:c.instructions+=2;goto B6c5ddb;
case 0x6c5de1:c.instructions+=1;goto B6c5de1;
case 0x6c5de4:goto L6c5de4;
case 0x6c5de6:c.instructions+=1;goto B6c5de6;
case 0x6c5dec:goto L6c5dec;
case 0x6c5dee:c.instructions+=4;goto B6c5dee;
case 0x6c5df0:c.instructions+=3;goto B6c5df0;
case 0x6c5df6:c.instructions+=2;goto B6c5df6;
case 0x6c5dfc:c.instructions+=1;goto B6c5dfc;
case 0x6c5e02:goto L6c5e02;
case 0x6c5e07:c.instructions+=10;goto B6c5e07;
case 0x6c5e09:c.instructions+=9;goto B6c5e09;
case 0x6c5e0c:c.instructions+=8;goto B6c5e0c;
case 0x6c5e0f:c.instructions+=7;goto B6c5e0f;
case 0x6c5e11:c.instructions+=6;goto B6c5e11;
case 0x6c5e14:c.instructions+=5;goto B6c5e14;
case 0x6c5e17:c.instructions+=4;goto B6c5e17;
case 0x6c5e1a:c.instructions+=3;goto B6c5e1a;
case 0x6c5e1d:c.instructions+=2;goto B6c5e1d;
case 0x6c5e20:c.instructions+=1;goto B6c5e20;
case 0x6c5e22:goto L6c5e22;
case 0x6c5e25:goto L6c5e25;
case 0x6c5e29:c.instructions+=2;goto B6c5e29;
case 0x6c5e2d:c.instructions+=1;goto B6c5e2d;
case 0x6c5e33:goto L6c5e33;
case 0x6c5e36:c.instructions+=5;goto B6c5e36;
case 0x6c5e39:c.instructions+=4;goto B6c5e39;
case 0x6c5e3c:c.instructions+=3;goto B6c5e3c;
case 0x6c5e3f:c.instructions+=2;goto B6c5e3f;
case 0x6c5e41:c.instructions+=1;goto B6c5e41;
case 0x6c5e44:goto L6c5e44;
case 0x6c5e47:c.instructions+=7;goto B6c5e47;
case 0x6c5e4a:c.instructions+=6;goto B6c5e4a;
case 0x6c5e4e:c.instructions+=5;goto B6c5e4e;
case 0x6c5e51:c.instructions+=4;goto B6c5e51;
case 0x6c5e53:c.instructions+=3;goto B6c5e53;
case 0x6c5e56:c.instructions+=2;goto B6c5e56;
case 0x6c5e59:c.instructions+=1;goto B6c5e59;
case 0x6c5e5b:goto L6c5e5b;
case 0x6c5e5e:c.instructions+=1;goto B6c5e5e;
case 0x6c5e60:goto L6c5e60;
case 0x6c5e63:goto L6c5e63;
case 0x6c5e65:goto L6c5e65;
case 0x6c5e68:c.instructions+=5;goto B6c5e68;
case 0x6c5e6b:c.instructions+=4;goto B6c5e6b;
case 0x6c5e6e:c.instructions+=3;goto B6c5e6e;
case 0x6c5e71:c.instructions+=2;goto B6c5e71;
case 0x6c5e75:c.instructions+=1;goto B6c5e75;
case 0x6c5e77:goto L6c5e77;
case 0x6c5e7d:c.instructions+=6;goto B6c5e7d;
case 0x6c5e80:c.instructions+=5;goto B6c5e80;
case 0x6c5e83:c.instructions+=4;goto B6c5e83;
case 0x6c5e85:c.instructions+=3;goto B6c5e85;
case 0x6c5e87:c.instructions+=2;goto B6c5e87;
case 0x6c5e8a:c.instructions+=1;goto B6c5e8a;
case 0x6c5e8c:goto L6c5e8c;
case 0x6c5e90:c.instructions+=1;goto B6c5e90;
case 0x6c5e92:goto L6c5e92;
case 0x6c5e95:c.instructions+=8;goto B6c5e95;
case 0x6c5e98:c.instructions+=7;goto B6c5e98;
case 0x6c5e9b:c.instructions+=6;goto B6c5e9b;
case 0x6c5e9e:c.instructions+=5;goto B6c5e9e;
case 0x6c5ea1:c.instructions+=4;goto B6c5ea1;
case 0x6c5ea5:c.instructions+=3;goto B6c5ea5;
case 0x6c5ea8:c.instructions+=2;goto B6c5ea8;
case 0x6c5eae:c.instructions+=1;goto B6c5eae;
case 0x6c5eb0:goto L6c5eb0;
case 0x6c5eb7:goto L6c5eb7;
case 0x6c5ebb:c.instructions+=5;goto B6c5ebb;
case 0x6c5ebc:c.instructions+=4;goto B6c5ebc;
case 0x6c5ebf:c.instructions+=3;goto B6c5ebf;
case 0x6c5ec2:c.instructions+=2;goto B6c5ec2;
case 0x6c5ec5:c.instructions+=1;goto B6c5ec5;
case 0x6c5ecb:goto L6c5ecb;
case 0x6c5ece:c.instructions+=2;goto B6c5ece;
case 0x6c5ed1:c.instructions+=1;goto B6c5ed1;
case 0x6c5ed3:goto L6c5ed3;
case 0x6c5ed6:c.instructions+=7;goto B6c5ed6;
case 0x6c5ed9:c.instructions+=6;goto B6c5ed9;
case 0x6c5edc:c.instructions+=5;goto B6c5edc;
case 0x6c5edf:c.instructions+=4;goto B6c5edf;
case 0x6c5ee2:c.instructions+=3;goto B6c5ee2;
case 0x6c5ee6:c.instructions+=2;goto B6c5ee6;
case 0x6c5ee9:c.instructions+=1;goto B6c5ee9;
case 0x6c5eef:goto L6c5eef;
case 0x6c5ef1:goto L6c5ef1;
case 0x6c5ef3:c.instructions+=1;goto B6c5ef3;
case 0x6c5ef5:goto L6c5ef5;
case 0x6c5ef8:c.instructions+=7;goto B6c5ef8;
case 0x6c5efb:c.instructions+=6;goto B6c5efb;
case 0x6c5efe:c.instructions+=5;goto B6c5efe;
case 0x6c5f01:c.instructions+=4;goto B6c5f01;
case 0x6c5f04:c.instructions+=3;goto B6c5f04;
case 0x6c5f07:c.instructions+=2;goto B6c5f07;
case 0x6c5f0a:c.instructions+=1;goto B6c5f0a;
case 0x6c5f0c:goto L6c5f0c;
case 0x6c5f0e:c.instructions+=3;goto B6c5f0e;
case 0x6c5f11:c.instructions+=2;goto B6c5f11;
case 0x6c5f15:c.instructions+=1;goto B6c5f15;
case 0x6c5f17:goto L6c5f17;
case 0x6c5f19:c.instructions+=2;goto B6c5f19;
case 0x6c5f1c:c.instructions+=1;goto B6c5f1c;
case 0x6c5f1e:goto L6c5f1e;
case 0x6c5f21:goto L6c5f21;
case 0x6c5f25:c.instructions+=1;goto B6c5f25;
case 0x6c5f27:goto L6c5f27;
case 0x6c5f28:c.instructions+=2;goto B6c5f28;
case 0x6c5f2b:c.instructions+=1;goto B6c5f2b;
case 0x6c5f2d:goto L6c5f2d;
case 0x6c5f30:c.instructions+=1;goto B6c5f30;
case 0x6c5f32:goto L6c5f32;
case 0x6c5f36:c.instructions+=1;goto B6c5f36;
case 0x6c5f38:goto L6c5f38;
case 0x6c5f3b:c.instructions+=4;goto B6c5f3b;
case 0x6c5f3e:c.instructions+=3;goto B6c5f3e;
case 0x6c5f41:c.instructions+=2;goto B6c5f41;
case 0x6c5f45:c.instructions+=1;goto B6c5f45;
case 0x6c5f47:goto L6c5f47;
case 0x6c5f4e:goto L6c5f4e;
case 0x6c5f51:c.instructions+=2;goto B6c5f51;
case 0x6c5f52:c.instructions+=1;goto B6c5f52;
case 0x6c5f54:goto L6c5f54;
case 0x6c5f58:c.instructions+=1;goto B6c5f58;
case 0x6c5f5e:goto L6c5f5e;
case 0x6c5f61:c.instructions+=2;goto B6c5f61;
case 0x6c5f64:c.instructions+=1;goto B6c5f64;
case 0x6c5f66:goto L6c5f66;
case 0x6c5f69:c.instructions+=2;goto B6c5f69;
case 0x6c5f6b:c.instructions+=1;goto B6c5f6b;
case 0x6c5f6d:goto L6c5f6d;
case 0x6c5f6f:c.instructions+=1;goto B6c5f6f;
case 0x6c5f74:goto L6c5f74;
case 0x6c5f76:c.instructions+=1;goto B6c5f76;
case 0x6c5f7c:goto L6c5f7c;
case 0x6c5f80:c.instructions+=2;goto B6c5f80;
case 0x6c5f84:c.instructions+=1;goto B6c5f84;
case 0x6c5f86:goto L6c5f86;
case 0x6c5f89:c.instructions+=3;goto B6c5f89;
case 0x6c5f8d:c.instructions+=2;goto B6c5f8d;
case 0x6c5f90:c.instructions+=1;goto B6c5f90;
case 0x6c5f96:goto L6c5f96;
case 0x6c5f99:c.instructions+=6;goto B6c5f99;
case 0x6c5f9c:c.instructions+=5;goto B6c5f9c;
case 0x6c5f9f:c.instructions+=4;goto B6c5f9f;
case 0x6c5fa1:c.instructions+=3;goto B6c5fa1;
case 0x6c5fa7:c.instructions+=2;goto B6c5fa7;
case 0x6c5fad:c.instructions+=1;goto B6c5fad;
case 0x6c5fb3:goto L6c5fb3;
case 0x6c5fb6:c.instructions+=4;goto B6c5fb6;
case 0x6c5fb8:c.instructions+=3;goto B6c5fb8;
case 0x6c5fbb:c.instructions+=2;goto B6c5fbb;
case 0x6c5fbe:c.instructions+=1;goto B6c5fbe;
case 0x6c5fc0:goto L6c5fc0;
case 0x6c5fc2:c.instructions+=1;goto B6c5fc2;
case 0x6c5fc4:goto L6c5fc4;
case 0x6c5fc7:c.instructions+=3;goto B6c5fc7;
case 0x6c5fca:c.instructions+=2;goto B6c5fca;
case 0x6c5fcd:c.instructions+=1;goto B6c5fcd;
case 0x6c5fd0:goto L6c5fd0;
case 0x6c5fd2:c.instructions+=1;goto B6c5fd2;
case 0x6c5fd4:goto L6c5fd4;
case 0x6c5fd7:goto L6c5fd7;
case 0x6c5fda:c.instructions+=2;goto B6c5fda;
case 0x6c5fdd:c.instructions+=1;goto B6c5fdd;
case 0x6c5fdf:goto L6c5fdf;
case 0x6c5fe0:c.instructions+=2;goto B6c5fe0;
case 0x6c5fe3:c.instructions+=1;goto B6c5fe3;
case 0x6c5fe5:goto L6c5fe5;
case 0x6c5fe8:c.instructions+=1;goto B6c5fe8;
case 0x6c5fea:goto L6c5fea;
case 0x6c5fed:c.instructions+=3;goto B6c5fed;
case 0x6c5ff0:c.instructions+=2;goto B6c5ff0;
case 0x6c5ff3:c.instructions+=1;goto B6c5ff3;
case 0x6c5ff5:goto L6c5ff5;
case 0x6c5ff7:goto L6c5ff7;
case 0x6c5ffe:goto L6c5ffe;
default:missing_instruction(c.pc);}
B6c5005:L6c5005:{c.instructions+=3;NFSU2_TR(0x6c5005);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c5007:{NFSU2_TR(0x6c5007);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c500a:{NFSU2_TR(0x6c500a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5164;}}
}
B6c5010:L6c5010:{c.instructions+=2;NFSU2_TR(0x6c5010);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5013:{NFSU2_TR(0x6c5013);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5186;}}
}
B6c5019:L6c5019:{c.instructions+=4;NFSU2_TR(0x6c5019);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c501b:{NFSU2_TR(0x6c501b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c501e:{NFSU2_TR(0x6c501e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5021:{NFSU2_TR(0x6c5021);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5104;}}
}
B6c5027:L6c5027:{c.instructions+=6;NFSU2_TR(0x6c5027);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c502e:{NFSU2_TR(0x6c502e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5031:{NFSU2_TR(0x6c5031);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5033:{NFSU2_TR(0x6c5033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5036:{NFSU2_TR(0x6c5036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5039:{NFSU2_TR(0x6c5039);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c50f4;}}
}
B6c503f:L6c503f:{c.instructions+=4;NFSU2_TR(0x6c503f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5042:{NFSU2_TR(0x6c5042);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5045:{NFSU2_TR(0x6c5045);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5047:{NFSU2_TR(0x6c5047);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c50e5;}}
}
B6c504d:L6c504d:{c.instructions+=3;NFSU2_TR(0x6c504d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5050:{NFSU2_TR(0x6c5050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5053:{NFSU2_TR(0x6c5053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5056:L6c5056:{c.instructions+=3;NFSU2_TR(0x6c5056);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c5058:{NFSU2_TR(0x6c5058);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c505a:{NFSU2_TR(0x6c505a);
if(r1(R+518)){{goto L6c50d3;}}
}
B6c505c:L6c505c:{c.instructions+=2;NFSU2_TR(0x6c505c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c505e:{NFSU2_TR(0x6c505e);
if(r1(R+518)){{goto L6c50d3;}}
}
B6c5060:L6c5060:{c.instructions+=4;NFSU2_TR(0x6c5060);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5063:{NFSU2_TR(0x6c5063);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5065:{NFSU2_TR(0x6c5065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5068:{NFSU2_TR(0x6c5068);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c50a5;}}
}
B6c506a:L6c506a:{c.instructions+=7;NFSU2_TR(0x6c506a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c506d:{NFSU2_TR(0x6c506d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5074:{NFSU2_TR(0x6c5074);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5077:{NFSU2_TR(0x6c5077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c507a:{NFSU2_TR(0x6c507a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c507d:{NFSU2_TR(0x6c507d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5080:{NFSU2_TR(0x6c5080);
__builtin_memmove((R+0),(R+28),4);
}
B6c5082:L6c5082:{c.instructions+=3;NFSU2_TR(0x6c5082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c5084:{NFSU2_TR(0x6c5084);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5086:{NFSU2_TR(0x6c5086);
if(r1(R+518)){{goto L6c5098;}}
}
B6c5088:L6c5088:{c.instructions+=6;NFSU2_TR(0x6c5088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c508b:{NFSU2_TR(0x6c508b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c508e:{NFSU2_TR(0x6c508e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5091:{NFSU2_TR(0x6c5091);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c5093:{NFSU2_TR(0x6c5093);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5096:{NFSU2_TR(0x6c5096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c509f;}}
}
B6c5098:L6c5098:{c.instructions+=1;NFSU2_TR(0x6c5098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c509f:L6c509f:{c.instructions+=3;NFSU2_TR(0x6c509f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c50a2:{NFSU2_TR(0x6c50a2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c50a3:{NFSU2_TR(0x6c50a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5082u);}goto L6c5082;}}
}
B6c50a5:L6c50a5:{c.instructions+=2;NFSU2_TR(0x6c50a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c50a8:{NFSU2_TR(0x6c50a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c50ae;}}
}
B6c50aa:L6c50aa:{c.instructions+=2;NFSU2_TR(0x6c50aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c50ac:{NFSU2_TR(0x6c50ac);
{goto L6c50b1;}
}
B6c50ae:L6c50ae:{c.instructions+=1;NFSU2_TR(0x6c50ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c50b1:L6c50b1:{c.instructions+=2;NFSU2_TR(0x6c50b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c50b3:{NFSU2_TR(0x6c50b3);
if(r1(R+518)){{goto L6c50d3;}}
}
B6c50b5:L6c50b5:{c.instructions+=1;NFSU2_TR(0x6c50b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c50b7:L6c50b7:{c.instructions+=2;NFSU2_TR(0x6c50b7);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c50be:{NFSU2_TR(0x6c50be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c50c2;}}
}
B6c50c0:L6c50c0:{c.instructions+=1;NFSU2_TR(0x6c50c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c50c2:L6c50c2:{c.instructions+=3;NFSU2_TR(0x6c50c2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c50c3:{NFSU2_TR(0x6c50c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c50c6:{NFSU2_TR(0x6c50c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c50b7u);}goto L6c50b7;}}
}
B6c50c8:L6c50c8:{c.instructions+=2;NFSU2_TR(0x6c50c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c50ca:{NFSU2_TR(0x6c50ca);
if(r1(R+518)){{goto L6c50d3;}}
}
B6c50cc:L6c50cc:{c.instructions+=1;NFSU2_TR(0x6c50cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c50d3:L6c50d3:{c.instructions+=5;NFSU2_TR(0x6c50d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c50d6:{NFSU2_TR(0x6c50d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c50d9:{NFSU2_TR(0x6c50d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c50dc:{NFSU2_TR(0x6c50dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c50df:{NFSU2_TR(0x6c50df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5056u);}goto L6c5056;}}
}
B6c50e5:L6c50e5:{c.instructions+=4;NFSU2_TR(0x6c50e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c50e8:{NFSU2_TR(0x6c50e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c50eb:{NFSU2_TR(0x6c50eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c50ee:{NFSU2_TR(0x6c50ee);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c503fu);}goto L6c503f;}}
}
B6c50f4:L6c50f4:{c.instructions+=5;NFSU2_TR(0x6c50f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c50f7:{NFSU2_TR(0x6c50f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c50f8:{NFSU2_TR(0x6c50f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c50fb:{NFSU2_TR(0x6c50fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c50fe:{NFSU2_TR(0x6c50fe);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5027u);}goto L6c5027;}}
}
B6c5104:L6c5104:{c.instructions+=1;NFSU2_TR(0x6c5104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5107:L6c5107:{c.instructions+=4;NFSU2_TR(0x6c5107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c510a:{NFSU2_TR(0x6c510a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5111:{NFSU2_TR(0x6c5111);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5114:{NFSU2_TR(0x6c5114);
if(r1(R+518)){{goto L6c5155;}}
}
B6c5116:L6c5116:{c.instructions+=3;NFSU2_TR(0x6c5116);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c5118:{NFSU2_TR(0x6c5118);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c511b:{NFSU2_TR(0x6c511b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5155;}}
}
B6c511d:L6c511d:{c.instructions+=3;NFSU2_TR(0x6c511d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5120:{NFSU2_TR(0x6c5120);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5123:{NFSU2_TR(0x6c5123);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c5126:L6c5126:{c.instructions+=4;NFSU2_TR(0x6c5126);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c512d:{NFSU2_TR(0x6c512d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5130:{NFSU2_TR(0x6c5130);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5132:{NFSU2_TR(0x6c5132);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c514f;}}
}
B6c5134:L6c5134:{c.instructions+=1;NFSU2_TR(0x6c5134);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5137:L6c5137:{c.instructions+=3;NFSU2_TR(0x6c5137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c5139:{NFSU2_TR(0x6c5139);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c513b:{NFSU2_TR(0x6c513b);
if(r1(R+518)){{goto L6c5142;}}
}
B6c513d:L6c513d:{c.instructions+=2;NFSU2_TR(0x6c513d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5140:{NFSU2_TR(0x6c5140);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5149;}}
}
B6c5142:L6c5142:{c.instructions+=1;NFSU2_TR(0x6c5142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5149:L6c5149:{c.instructions+=3;NFSU2_TR(0x6c5149);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c514c:{NFSU2_TR(0x6c514c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c514d:{NFSU2_TR(0x6c514d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5137u);}goto L6c5137;}}
}
B6c514f:L6c514f:{c.instructions+=3;NFSU2_TR(0x6c514f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c5150:{NFSU2_TR(0x6c5150);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c5153:{NFSU2_TR(0x6c5153);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5126u);}goto L6c5126;}}
}
B6c5155:L6c5155:{c.instructions+=3;NFSU2_TR(0x6c5155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5158:{NFSU2_TR(0x6c5158);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c515c:{NFSU2_TR(0x6c515c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5107u);}goto L6c5107;}}
}
B6c515e:L6c515e:{c.instructions+=2;NFSU2_TR(0x6c515e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5162:{NFSU2_TR(0x6c5162);
if(r1(R+518)){{goto L6c5186;}}
}
B6c5164:L6c5164:{c.instructions+=3;NFSU2_TR(0x6c5164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5167:{NFSU2_TR(0x6c5167);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c516b:{NFSU2_TR(0x6c516b);
if(r1(R+512)){TAIL_STATIC(0x6c4e43u,6c4);}
}
B6c5171:L6c5171:{c.instructions+=2;NFSU2_TR(0x6c5171);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5175:{NFSU2_TR(0x6c5175);
if(r1(R+518)){{goto L6c5186;}}
}
B6c5177:L6c5177:{c.instructions+=3;NFSU2_TR(0x6c5177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c517a:{NFSU2_TR(0x6c517a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c517e:{NFSU2_TR(0x6c517e);
if(r1(R+512)){TAIL_STATIC(0x6c4e3fu,6c4);}
}
B6c5184:L6c5184:{c.instructions+=1;NFSU2_TR(0x6c5184);
{goto L6c51e7;}
}
B6c5186:L6c5186:{c.instructions+=8;NFSU2_TR(0x6c5186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5189:{NFSU2_TR(0x6c5189);
__builtin_memmove((R+0),(R+8),4);
}
B6c518b:{NFSU2_TR(0x6c518b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c518e:{NFSU2_TR(0x6c518e);
__builtin_memmove((R+4),(R+0),4);
}
B6c5190:{NFSU2_TR(0x6c5190);
__builtin_memmove((R+12),(R+4),4);
}
B6c5192:{NFSU2_TR(0x6c5192);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c5195:{NFSU2_TR(0x6c5195);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c519b:{NFSU2_TR(0x6c519b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c51a1:L6c51a1:{c.instructions+=1;NFSU2_TR(0x6c51a1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c51a3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c51a1u);}goto L6c51a1;}
}
B6c51a3:L6c51a3:{c.instructions+=2;NFSU2_TR(0x6c51a3);
__builtin_memmove((R+4),(R+12),4);
}
B6c51a5:{NFSU2_TR(0x6c51a5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c51a8:L6c51a8:{c.instructions+=1;NFSU2_TR(0x6c51a8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c51aa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c51a8u);}goto L6c51a8;}
}
B6c51aa:L6c51aa:{c.instructions+=5;NFSU2_TR(0x6c51aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c51ad:{NFSU2_TR(0x6c51ad);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c51ae:{NFSU2_TR(0x6c51ae);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c51b5:{NFSU2_TR(0x6c51b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c51b8:{NFSU2_TR(0x6c51b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c51ba:L6c51ba:{c.instructions+=3;NFSU2_TR(0x6c51ba);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c51c1:{NFSU2_TR(0x6c51c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c51c4:{NFSU2_TR(0x6c51c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c51d2;}}
}
B6c51c6:L6c51c6:{c.instructions+=3;NFSU2_TR(0x6c51c6);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c51cd:{NFSU2_TR(0x6c51cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c51d0:{NFSU2_TR(0x6c51d0);
if(r1(R+518)){{goto L6c51d9;}}
}
B6c51d2:L6c51d2:{c.instructions+=1;NFSU2_TR(0x6c51d2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c51d9:L6c51d9:{c.instructions+=3;NFSU2_TR(0x6c51d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c51dc:{NFSU2_TR(0x6c51dc);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c51e1:{NFSU2_TR(0x6c51e1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c51bau);}goto L6c51ba;}}
}
B6c51e3:L6c51e3:{c.instructions+=1;NFSU2_TR(0x6c51e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c51e7:L6c51e7:{c.instructions+=3;NFSU2_TR(0x6c51e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c51ea:{NFSU2_TR(0x6c51ea);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c51ed:{NFSU2_TR(0x6c51ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c55e0;}}
}
B6c51f3:L6c51f3:{c.instructions+=9;NFSU2_TR(0x6c51f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c51f6:{NFSU2_TR(0x6c51f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c51fc:{NFSU2_TR(0x6c51fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c51ff:{NFSU2_TR(0x6c51ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c5201:{NFSU2_TR(0x6c5201);
__builtin_memmove((R+4),(R+0),4);
}
B6c5203:{NFSU2_TR(0x6c5203);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c5209:{NFSU2_TR(0x6c5209);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c520c:{NFSU2_TR(0x6c520c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c520f:{NFSU2_TR(0x6c520f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c521d;}}
}
B6c5211:L6c5211:{c.instructions+=3;NFSU2_TR(0x6c5211);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c5216:{NFSU2_TR(0x6c5216);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c521b:{NFSU2_TR(0x6c521b);
if(r1(R+518)){{goto L6c5225;}}
}
B6c521d:L6c521d:{c.instructions+=3;NFSU2_TR(0x6c521d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c521f:{NFSU2_TR(0x6c521f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c5220:{NFSU2_TR(0x6c5220);
{goto L6c55dc;}
}
B6c5225:L6c5225:{c.instructions+=4;NFSU2_TR(0x6c5225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5228:{NFSU2_TR(0x6c5228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c522c:{NFSU2_TR(0x6c522c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c522f:{NFSU2_TR(0x6c522f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5232:L6c5232:{c.instructions+=1;NFSU2_TR(0x6c5232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5236:L6c5236:{c.instructions+=5;NFSU2_TR(0x6c5236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5239:{NFSU2_TR(0x6c5239);
__builtin_memmove((R+0),(R+4),4);
}
B6c523b:{NFSU2_TR(0x6c523b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c523e:{NFSU2_TR(0x6c523e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c5244:{NFSU2_TR(0x6c5244);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c524a:L6c524a:{c.instructions+=1;NFSU2_TR(0x6c524a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c524c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c524au);}goto L6c524a;}
}
B6c524c:L6c524c:{c.instructions+=2;NFSU2_TR(0x6c524c);
__builtin_memmove((R+4),(R+0),4);
}
B6c524e:{NFSU2_TR(0x6c524e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c5251:L6c5251:{c.instructions+=1;NFSU2_TR(0x6c5251);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c5253;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5251u);}goto L6c5251;}
}
B6c5253:L6c5253:{c.instructions+=4;NFSU2_TR(0x6c5253);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5255:{NFSU2_TR(0x6c5255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c5256:{NFSU2_TR(0x6c5256);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c5259:{NFSU2_TR(0x6c5259);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c525f:L6c525f:{c.instructions+=1;NFSU2_TR(0x6c525f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c5261;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c525fu);}goto L6c525f;}
}
B6c5261:L6c5261:{c.instructions+=3;NFSU2_TR(0x6c5261);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5263:{NFSU2_TR(0x6c5263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c5264:{NFSU2_TR(0x6c5264);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c526a:L6c526a:{c.instructions+=1;NFSU2_TR(0x6c526a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c526c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c526au);}goto L6c526a;}
}
B6c526c:L6c526c:{c.instructions+=5;NFSU2_TR(0x6c526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c526f:{NFSU2_TR(0x6c526f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c5271:{NFSU2_TR(0x6c5271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5274:{NFSU2_TR(0x6c5274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5277:{NFSU2_TR(0x6c5277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c527a:L6c527a:{c.instructions+=2;NFSU2_TR(0x6c527a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c527e:{NFSU2_TR(0x6c527e);
if(r1(R+518)){{goto L6c5288;}}
}
B6c5280:L6c5280:{c.instructions+=4;NFSU2_TR(0x6c5280);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c5282:{NFSU2_TR(0x6c5282);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c5283:{NFSU2_TR(0x6c5283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c5286:{NFSU2_TR(0x6c5286);
{goto L6c528b;}
}
B6c5288:L6c5288:{c.instructions+=1;NFSU2_TR(0x6c5288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c528b:L6c528b:{c.instructions+=10;NFSU2_TR(0x6c528b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c528e:{NFSU2_TR(0x6c528e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5291:{NFSU2_TR(0x6c5291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5294:{NFSU2_TR(0x6c5294);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd8acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c529b:{NFSU2_TR(0x6c529b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c529e:{NFSU2_TR(0x6c529e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c52a1:{NFSU2_TR(0x6c52a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c52a4:{NFSU2_TR(0x6c52a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c52a6:{NFSU2_TR(0x6c52a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c52a9:{NFSU2_TR(0x6c52a9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c5315;}}
}
B6c52ab:L6c52ab:{c.instructions+=3;NFSU2_TR(0x6c52ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c52ae:{NFSU2_TR(0x6c52ae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c52b1:{NFSU2_TR(0x6c52b1);
if(r1(R+518)){{goto L6c535a;}}
}
B6c52b7:L6c52b7:{c.instructions+=16;NFSU2_TR(0x6c52b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c52ba:{NFSU2_TR(0x6c52ba);
__builtin_memmove((R+24),(R+4),4);
}
B6c52bc:{NFSU2_TR(0x6c52bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c52bf:{NFSU2_TR(0x6c52bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c52c2:{NFSU2_TR(0x6c52c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c52c5:{NFSU2_TR(0x6c52c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c52c8:{NFSU2_TR(0x6c52c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52ca:{NFSU2_TR(0x6c52ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd8b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c52d0:{NFSU2_TR(0x6c52d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c52d3:{NFSU2_TR(0x6c52d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52d4:{NFSU2_TR(0x6c52d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c52d7:{NFSU2_TR(0x6c52d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52d8:{NFSU2_TR(0x6c52d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c52db:{NFSU2_TR(0x6c52db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52dc:{NFSU2_TR(0x6c52dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52dd:{NFSU2_TR(0x6c52dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c52e2ull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6c52e2:L6c52e2:{c.instructions+=2;NFSU2_TR(0x6c52e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c52e4:{NFSU2_TR(0x6c52e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c535a;}}
}
B6c52e6:L6c52e6:{c.instructions+=15;NFSU2_TR(0x6c52e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c52e9:{NFSU2_TR(0x6c52e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52ea:{NFSU2_TR(0x6c52ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c52ed:{NFSU2_TR(0x6c52ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c52f0:{NFSU2_TR(0x6c52f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52f1:{NFSU2_TR(0x6c52f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c52f7:{NFSU2_TR(0x6c52f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52f8:{NFSU2_TR(0x6c52f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c52fb:{NFSU2_TR(0x6c52fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c52fc:{NFSU2_TR(0x6c52fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5302:{NFSU2_TR(0x6c5302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5303:{NFSU2_TR(0x6c5303);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd8a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5309:{NFSU2_TR(0x6c5309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c530a:{NFSU2_TR(0x6c530a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c530b:{NFSU2_TR(0x6c530b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c5310ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c5310:L6c5310:{c.instructions+=2;NFSU2_TR(0x6c5310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5313:{NFSU2_TR(0x6c5313);
{goto L6c5342;}
}
B6c5315:L6c5315:{c.instructions+=4;NFSU2_TR(0x6c5315);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c5318:{NFSU2_TR(0x6c5318);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c531a:{NFSU2_TR(0x6c531a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c531d:{NFSU2_TR(0x6c531d);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c5324:L6c5324:{c.instructions+=3;NFSU2_TR(0x6c5324);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c5328:{NFSU2_TR(0x6c5328);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c532b:{NFSU2_TR(0x6c532b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c5336;}}
}
B6c532d:L6c532d:{c.instructions+=4;NFSU2_TR(0x6c532d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6c532f:{NFSU2_TR(0x6c532f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5332:{NFSU2_TR(0x6c5332);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c5334:{NFSU2_TR(0x6c5334);
{goto L6c5339;}
}
B6c5336:L6c5336:{c.instructions+=1;NFSU2_TR(0x6c5336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c5339:L6c5339:{c.instructions+=4;NFSU2_TR(0x6c5339);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c533a:{NFSU2_TR(0x6c533a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c533d:{NFSU2_TR(0x6c533d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c5340:{NFSU2_TR(0x6c5340);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5324u);}goto L6c5324;}}
}
B6c5342:L6c5342:{c.instructions+=2;NFSU2_TR(0x6c5342);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5346:{NFSU2_TR(0x6c5346);
if(r1(R+518)){{goto L6c5361;}}
}
B6c5348:L6c5348:{c.instructions+=4;NFSU2_TR(0x6c5348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c534b:{NFSU2_TR(0x6c534b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6c534e:{NFSU2_TR(0x6c534e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6c5352:{NFSU2_TR(0x6c5352);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c527au);}goto L6c527a;}}
}
B6c5358:L6c5358:{c.instructions+=1;NFSU2_TR(0x6c5358);
{goto L6c5361;}
}
B6c535a:L6c535a:{c.instructions+=1;NFSU2_TR(0x6c535a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5361:L6c5361:{c.instructions+=2;NFSU2_TR(0x6c5361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5365:{NFSU2_TR(0x6c5365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5369:L6c5369:{c.instructions+=2;NFSU2_TR(0x6c5369);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c536d:{NFSU2_TR(0x6c536d);
if(r1(R+518)){{goto L6c5377;}}
}
B6c536f:L6c536f:{c.instructions+=4;NFSU2_TR(0x6c536f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c5371:{NFSU2_TR(0x6c5371);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c5372:{NFSU2_TR(0x6c5372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c5375:{NFSU2_TR(0x6c5375);
{goto L6c537a;}
}
B6c5377:L6c5377:{c.instructions+=1;NFSU2_TR(0x6c5377);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c537a:L6c537a:{c.instructions+=2;NFSU2_TR(0x6c537a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd8acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6c5382:{NFSU2_TR(0x6c5382);
if(r1(R+512)){{goto L6c53e4;}}
}
B6c5384:L6c5384:{c.instructions+=3;NFSU2_TR(0x6c5384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5388:{NFSU2_TR(0x6c5388);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c538c:{NFSU2_TR(0x6c538c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c53e4;}}
}
B6c538e:L6c538e:{c.instructions+=3;NFSU2_TR(0x6c538e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c5390:{NFSU2_TR(0x6c5390);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5393:{NFSU2_TR(0x6c5393);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c53d9;}}
}
B6c5395:L6c5395:{c.instructions+=3;NFSU2_TR(0x6c5395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5398:{NFSU2_TR(0x6c5398);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c539f:{NFSU2_TR(0x6c539f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c53a2:L6c53a2:{c.instructions+=3;NFSU2_TR(0x6c53a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c53a6:{NFSU2_TR(0x6c53a6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c53a8:{NFSU2_TR(0x6c53a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c53ca;}}
}
B6c53aa:L6c53aa:{c.instructions+=6;NFSU2_TR(0x6c53aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c53ad:{NFSU2_TR(0x6c53ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c53b0:{NFSU2_TR(0x6c53b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c53b3:{NFSU2_TR(0x6c53b3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6c53b5:{NFSU2_TR(0x6c53b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c53b8:{NFSU2_TR(0x6c53b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c53bb:L6c53bb:{c.instructions+=2;NFSU2_TR(0x6c53bb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c53bd:{NFSU2_TR(0x6c53bd);
if(r1(R+518)){{goto L6c53d2;}}
}
B6c53bf:L6c53bf:{c.instructions+=4;NFSU2_TR(0x6c53bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c53c2:{NFSU2_TR(0x6c53c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c53c5:{NFSU2_TR(0x6c53c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c53c8:{NFSU2_TR(0x6c53c8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c53bbu);}goto L6c53bb;}}
}
B6c53ca:L6c53ca:{c.instructions+=3;NFSU2_TR(0x6c53ca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c53cb:{NFSU2_TR(0x6c53cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c53ce:{NFSU2_TR(0x6c53ce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c53a2u);}goto L6c53a2;}}
}
B6c53d0:L6c53d0:{c.instructions+=1;NFSU2_TR(0x6c53d0);
{goto L6c53d9;}
}
B6c53d2:L6c53d2:{c.instructions+=1;NFSU2_TR(0x6c53d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c53d9:L6c53d9:{c.instructions+=4;NFSU2_TR(0x6c53d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c53dc:{NFSU2_TR(0x6c53dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c53df:{NFSU2_TR(0x6c53df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c53e2:{NFSU2_TR(0x6c53e2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c538eu);}goto L6c538e;}}
}
B6c53e4:L6c53e4:{c.instructions+=5;NFSU2_TR(0x6c53e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c53e7:{NFSU2_TR(0x6c53e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c53ea:{NFSU2_TR(0x6c53ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c53ed:{NFSU2_TR(0x6c53ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6c53f1:{NFSU2_TR(0x6c53f1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5369u);}goto L6c5369;}}
}
B6c53f7:L6c53f7:{c.instructions+=3;NFSU2_TR(0x6c53f7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c53f9:{NFSU2_TR(0x6c53f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c53fc:{NFSU2_TR(0x6c53fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5556;}}
}
B6c5402:L6c5402:{c.instructions+=2;NFSU2_TR(0x6c5402);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5405:{NFSU2_TR(0x6c5405);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5578;}}
}
B6c540b:L6c540b:{c.instructions+=4;NFSU2_TR(0x6c540b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c540d:{NFSU2_TR(0x6c540d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5410:{NFSU2_TR(0x6c5410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5413:{NFSU2_TR(0x6c5413);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c54f6;}}
}
B6c5419:L6c5419:{c.instructions+=6;NFSU2_TR(0x6c5419);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5420:{NFSU2_TR(0x6c5420);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5423:{NFSU2_TR(0x6c5423);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5425:{NFSU2_TR(0x6c5425);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5428:{NFSU2_TR(0x6c5428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c542b:{NFSU2_TR(0x6c542b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c54e6;}}
}
B6c5431:L6c5431:{c.instructions+=4;NFSU2_TR(0x6c5431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5434:{NFSU2_TR(0x6c5434);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5437:{NFSU2_TR(0x6c5437);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5439:{NFSU2_TR(0x6c5439);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c54d7;}}
}
B6c543f:L6c543f:{c.instructions+=3;NFSU2_TR(0x6c543f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5442:{NFSU2_TR(0x6c5442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5445:{NFSU2_TR(0x6c5445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5448:L6c5448:{c.instructions+=3;NFSU2_TR(0x6c5448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c544a:{NFSU2_TR(0x6c544a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c544c:{NFSU2_TR(0x6c544c);
if(r1(R+518)){{goto L6c54c5;}}
}
B6c544e:L6c544e:{c.instructions+=2;NFSU2_TR(0x6c544e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c5450:{NFSU2_TR(0x6c5450);
if(r1(R+518)){{goto L6c54c5;}}
}
B6c5452:L6c5452:{c.instructions+=4;NFSU2_TR(0x6c5452);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5455:{NFSU2_TR(0x6c5455);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5457:{NFSU2_TR(0x6c5457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c545a:{NFSU2_TR(0x6c545a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5497;}}
}
B6c545c:L6c545c:{c.instructions+=7;NFSU2_TR(0x6c545c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c545f:{NFSU2_TR(0x6c545f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5466:{NFSU2_TR(0x6c5466);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5469:{NFSU2_TR(0x6c5469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c546c:{NFSU2_TR(0x6c546c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c546f:{NFSU2_TR(0x6c546f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5472:{NFSU2_TR(0x6c5472);
__builtin_memmove((R+0),(R+28),4);
}
B6c5474:L6c5474:{c.instructions+=3;NFSU2_TR(0x6c5474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c5476:{NFSU2_TR(0x6c5476);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5478:{NFSU2_TR(0x6c5478);
if(r1(R+518)){{goto L6c5488;}}
}
B6c547a:L6c547a:{c.instructions+=5;NFSU2_TR(0x6c547a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c547d:{NFSU2_TR(0x6c547d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5480:{NFSU2_TR(0x6c5480);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5483:{NFSU2_TR(0x6c5483);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5486:{NFSU2_TR(0x6c5486);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c548f;}}
}
B6c5488:L6c5488:{c.instructions+=1;NFSU2_TR(0x6c5488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c548f:L6c548f:{c.instructions+=3;NFSU2_TR(0x6c548f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c5492:{NFSU2_TR(0x6c5492);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c5493:{NFSU2_TR(0x6c5493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5474u);}goto L6c5474;}}
}
B6c5495:L6c5495:{c.instructions+=1;NFSU2_TR(0x6c5495);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c5497:L6c5497:{c.instructions+=2;NFSU2_TR(0x6c5497);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c549a:{NFSU2_TR(0x6c549a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c54a0;}}
}
B6c549c:L6c549c:{c.instructions+=2;NFSU2_TR(0x6c549c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c549e:{NFSU2_TR(0x6c549e);
{goto L6c54a3;}
}
B6c54a0:L6c54a0:{c.instructions+=1;NFSU2_TR(0x6c54a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c54a3:L6c54a3:{c.instructions+=2;NFSU2_TR(0x6c54a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c54a5:{NFSU2_TR(0x6c54a5);
if(r1(R+518)){{goto L6c54c5;}}
}
B6c54a7:L6c54a7:{c.instructions+=1;NFSU2_TR(0x6c54a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c54a9:L6c54a9:{c.instructions+=2;NFSU2_TR(0x6c54a9);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c54b0:{NFSU2_TR(0x6c54b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c54b4;}}
}
B6c54b2:L6c54b2:{c.instructions+=1;NFSU2_TR(0x6c54b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c54b4:L6c54b4:{c.instructions+=3;NFSU2_TR(0x6c54b4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c54b5:{NFSU2_TR(0x6c54b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c54b8:{NFSU2_TR(0x6c54b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c54a9u);}goto L6c54a9;}}
}
B6c54ba:L6c54ba:{c.instructions+=2;NFSU2_TR(0x6c54ba);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c54bc:{NFSU2_TR(0x6c54bc);
if(r1(R+518)){{goto L6c54c5;}}
}
B6c54be:L6c54be:{c.instructions+=1;NFSU2_TR(0x6c54be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c54c5:L6c54c5:{c.instructions+=5;NFSU2_TR(0x6c54c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c54c8:{NFSU2_TR(0x6c54c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c54cb:{NFSU2_TR(0x6c54cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c54ce:{NFSU2_TR(0x6c54ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c54d1:{NFSU2_TR(0x6c54d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5448u);}goto L6c5448;}}
}
B6c54d7:L6c54d7:{c.instructions+=4;NFSU2_TR(0x6c54d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c54da:{NFSU2_TR(0x6c54da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c54dd:{NFSU2_TR(0x6c54dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c54e0:{NFSU2_TR(0x6c54e0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5431u);}goto L6c5431;}}
}
B6c54e6:L6c54e6:{c.instructions+=5;NFSU2_TR(0x6c54e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c54e9:{NFSU2_TR(0x6c54e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c54ea:{NFSU2_TR(0x6c54ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c54ed:{NFSU2_TR(0x6c54ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c54f0:{NFSU2_TR(0x6c54f0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5419u);}goto L6c5419;}}
}
B6c54f6:L6c54f6:{c.instructions+=1;NFSU2_TR(0x6c54f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c54f9:L6c54f9:{c.instructions+=4;NFSU2_TR(0x6c54f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c54fc:{NFSU2_TR(0x6c54fc);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5503:{NFSU2_TR(0x6c5503);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5506:{NFSU2_TR(0x6c5506);
if(r1(R+518)){{goto L6c5547;}}
}
B6c5508:L6c5508:{c.instructions+=3;NFSU2_TR(0x6c5508);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c550a:{NFSU2_TR(0x6c550a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c550d:{NFSU2_TR(0x6c550d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5547;}}
}
B6c550f:L6c550f:{c.instructions+=3;NFSU2_TR(0x6c550f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5512:{NFSU2_TR(0x6c5512);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5515:{NFSU2_TR(0x6c5515);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c5518:L6c5518:{c.instructions+=4;NFSU2_TR(0x6c5518);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c551f:{NFSU2_TR(0x6c551f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5522:{NFSU2_TR(0x6c5522);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5524:{NFSU2_TR(0x6c5524);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5541;}}
}
B6c5526:L6c5526:{c.instructions+=1;NFSU2_TR(0x6c5526);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5529:L6c5529:{c.instructions+=3;NFSU2_TR(0x6c5529);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c552b:{NFSU2_TR(0x6c552b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c552d:{NFSU2_TR(0x6c552d);
if(r1(R+518)){{goto L6c5534;}}
}
B6c552f:L6c552f:{c.instructions+=2;NFSU2_TR(0x6c552f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5532:{NFSU2_TR(0x6c5532);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c553b;}}
}
B6c5534:L6c5534:{c.instructions+=1;NFSU2_TR(0x6c5534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c553b:L6c553b:{c.instructions+=3;NFSU2_TR(0x6c553b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c553e:{NFSU2_TR(0x6c553e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c553f:{NFSU2_TR(0x6c553f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5529u);}goto L6c5529;}}
}
B6c5541:L6c5541:{c.instructions+=3;NFSU2_TR(0x6c5541);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c5542:{NFSU2_TR(0x6c5542);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c5545:{NFSU2_TR(0x6c5545);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5518u);}goto L6c5518;}}
}
B6c5547:L6c5547:{c.instructions+=3;NFSU2_TR(0x6c5547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c554a:{NFSU2_TR(0x6c554a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c554e:{NFSU2_TR(0x6c554e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c54f9u);}goto L6c54f9;}}
}
B6c5550:L6c5550:{c.instructions+=2;NFSU2_TR(0x6c5550);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5554:{NFSU2_TR(0x6c5554);
if(r1(R+518)){{goto L6c5578;}}
}
B6c5556:L6c5556:{c.instructions+=3;NFSU2_TR(0x6c5556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5559:{NFSU2_TR(0x6c5559);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c555d:{NFSU2_TR(0x6c555d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5236u);}goto L6c5236;}}
}
B6c5563:L6c5563:{c.instructions+=2;NFSU2_TR(0x6c5563);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5567:{NFSU2_TR(0x6c5567);
if(r1(R+518)){{goto L6c5578;}}
}
B6c5569:L6c5569:{c.instructions+=3;NFSU2_TR(0x6c5569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c556c:{NFSU2_TR(0x6c556c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c5570:{NFSU2_TR(0x6c5570);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5232u);}goto L6c5232;}}
}
B6c5576:L6c5576:{c.instructions+=1;NFSU2_TR(0x6c5576);
{goto L6c55d9;}
}
B6c5578:L6c5578:{c.instructions+=8;NFSU2_TR(0x6c5578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c557b:{NFSU2_TR(0x6c557b);
__builtin_memmove((R+0),(R+8),4);
}
B6c557d:{NFSU2_TR(0x6c557d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c5580:{NFSU2_TR(0x6c5580);
__builtin_memmove((R+4),(R+0),4);
}
B6c5582:{NFSU2_TR(0x6c5582);
__builtin_memmove((R+12),(R+4),4);
}
B6c5584:{NFSU2_TR(0x6c5584);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c5587:{NFSU2_TR(0x6c5587);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c558d:{NFSU2_TR(0x6c558d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c5593:L6c5593:{c.instructions+=1;NFSU2_TR(0x6c5593);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c5595;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5593u);}goto L6c5593;}
}
B6c5595:L6c5595:{c.instructions+=2;NFSU2_TR(0x6c5595);
__builtin_memmove((R+4),(R+12),4);
}
B6c5597:{NFSU2_TR(0x6c5597);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c559a:L6c559a:{c.instructions+=1;NFSU2_TR(0x6c559a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c559c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c559au);}goto L6c559a;}
}
B6c559c:L6c559c:{c.instructions+=5;NFSU2_TR(0x6c559c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c559f:{NFSU2_TR(0x6c559f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c55a0:{NFSU2_TR(0x6c55a0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c55a7:{NFSU2_TR(0x6c55a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c55aa:{NFSU2_TR(0x6c55aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c55ac:L6c55ac:{c.instructions+=3;NFSU2_TR(0x6c55ac);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c55b3:{NFSU2_TR(0x6c55b3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c55b6:{NFSU2_TR(0x6c55b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c55c4;}}
}
B6c55b8:L6c55b8:{c.instructions+=3;NFSU2_TR(0x6c55b8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c55bf:{NFSU2_TR(0x6c55bf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c55c2:{NFSU2_TR(0x6c55c2);
if(r1(R+518)){{goto L6c55cb;}}
}
B6c55c4:L6c55c4:{c.instructions+=1;NFSU2_TR(0x6c55c4);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c55cb:L6c55cb:{c.instructions+=3;NFSU2_TR(0x6c55cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c55ce:{NFSU2_TR(0x6c55ce);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c55d3:{NFSU2_TR(0x6c55d3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c55acu);}goto L6c55ac;}}
}
B6c55d5:L6c55d5:{c.instructions+=1;NFSU2_TR(0x6c55d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c55d9:L6c55d9:{c.instructions+=1;NFSU2_TR(0x6c55d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c55dc:L6c55dc:{c.instructions+=1;NFSU2_TR(0x6c55dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c55e0:L6c55e0:{c.instructions+=3;NFSU2_TR(0x6c55e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c55e2:{NFSU2_TR(0x6c55e2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c55e4:{NFSU2_TR(0x6c55e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c574b;}}
}
B6c55ea:L6c55ea:{c.instructions+=3;NFSU2_TR(0x6c55ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c55ed:{NFSU2_TR(0x6c55ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c55f0:{NFSU2_TR(0x6c55f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c573d;}}
}
B6c55f6:L6c55f6:{c.instructions+=12;NFSU2_TR(0x6c55f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c55f9:{NFSU2_TR(0x6c55f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c55fc:{NFSU2_TR(0x6c55fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c55ff:{NFSU2_TR(0x6c55ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c5602:{NFSU2_TR(0x6c5602);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c5609:{NFSU2_TR(0x6c5609);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c560c:{NFSU2_TR(0x6c560c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe84ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c5613:{NFSU2_TR(0x6c5613);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6c561a:{NFSU2_TR(0x6c561a);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffec4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+28))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c5621:{NFSU2_TR(0x6c5621);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c5624:{NFSU2_TR(0x6c5624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5627:{NFSU2_TR(0x6c5627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c562d:L6c562d:{c.instructions+=3;NFSU2_TR(0x6c562d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffea4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c5634:{NFSU2_TR(0x6c5634);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffed4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c563b:{NFSU2_TR(0x6c563b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5641:L6c5641:{c.instructions+=3;NFSU2_TR(0x6c5641);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffeb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c5648:{NFSU2_TR(0x6c5648);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffee4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+8))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c564f:{NFSU2_TR(0x6c564f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5655:L6c5655:{c.instructions+=2;NFSU2_TR(0x6c5655);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5657:{NFSU2_TR(0x6c5657);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c565d:L6c565d:{c.instructions+=7;NFSU2_TR(0x6c565d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5660:{NFSU2_TR(0x6c5660);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5663:{NFSU2_TR(0x6c5663);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5666:{NFSU2_TR(0x6c5666);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c5669:{NFSU2_TR(0x6c5669);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c566d:{NFSU2_TR(0x6c566d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c5670:{NFSU2_TR(0x6c5670);
if(r1(R+518)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5676:L6c5676:{c.instructions+=5;NFSU2_TR(0x6c5676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5679:{NFSU2_TR(0x6c5679);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c567c:{NFSU2_TR(0x6c567c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c567f:{NFSU2_TR(0x6c567f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5683:{NFSU2_TR(0x6c5683);
if(r1(R+518)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5689:L6c5689:{c.instructions+=4;NFSU2_TR(0x6c5689);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c568c:{NFSU2_TR(0x6c568c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c568f:{NFSU2_TR(0x6c568f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5693:{NFSU2_TR(0x6c5693);
if(r1(R+518)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5699:L6c5699:{c.instructions+=6;NFSU2_TR(0x6c5699);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c569f:{NFSU2_TR(0x6c569f);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c56a2:{NFSU2_TR(0x6c56a2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c56a4:{NFSU2_TR(0x6c56a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c56a6:{NFSU2_TR(0x6c56a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c56a9:{NFSU2_TR(0x6c56a9);
if(r1(R+514)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c56af:L6c56af:{c.instructions+=12;NFSU2_TR(0x6c56af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c56b1:{NFSU2_TR(0x6c56b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c56b4:{NFSU2_TR(0x6c56b4);
__builtin_memmove((R+0),(R+518),1);
}
B6c56b7:{NFSU2_TR(0x6c56b7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c56bb:{NFSU2_TR(0x6c56bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c56be:{NFSU2_TR(0x6c56be);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6c56c1:{NFSU2_TR(0x6c56c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c56c4:{NFSU2_TR(0x6c56c4);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c56c7:{NFSU2_TR(0x6c56c7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c56c9:{NFSU2_TR(0x6c56c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c56cb:{NFSU2_TR(0x6c56cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c56ce:{NFSU2_TR(0x6c56ce);
if(r1(R+514)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c56d4:L6c56d4:{c.instructions+=6;NFSU2_TR(0x6c56d4);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c56da:{NFSU2_TR(0x6c56da);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c56dd:{NFSU2_TR(0x6c56dd);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c56df:{NFSU2_TR(0x6c56df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c56e1:{NFSU2_TR(0x6c56e1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c56e4:{NFSU2_TR(0x6c56e4);
if(r1(R+514)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c56ea:L6c56ea:{c.instructions+=5;NFSU2_TR(0x6c56ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c56ed:{NFSU2_TR(0x6c56ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c56f0:{NFSU2_TR(0x6c56f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c56f3:{NFSU2_TR(0x6c56f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c56f9:{NFSU2_TR(0x6c56f9);
if(r1(R+518)){{goto L6c5702;}}
}
B6c56fb:L6c56fb:{c.instructions+=1;NFSU2_TR(0x6c56fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5702:L6c5702:{c.instructions+=4;NFSU2_TR(0x6c5702);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5705:{NFSU2_TR(0x6c5705);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c5707:{NFSU2_TR(0x6c5707);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5709:{NFSU2_TR(0x6c5709);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5719;}}
}
B6c570b:L6c570b:{c.instructions+=1;NFSU2_TR(0x6c570b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c570e:L6c570e:{c.instructions+=2;NFSU2_TR(0x6c570e);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+8))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c5712:{NFSU2_TR(0x6c5712);
if(r1(R+518)){{goto L6c5719;}}
}
B6c5714:L6c5714:{c.instructions+=3;NFSU2_TR(0x6c5714);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c5715:{NFSU2_TR(0x6c5715);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6c5717:{NFSU2_TR(0x6c5717);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c570eu);}goto L6c570e;}}
}
B6c5719:L6c5719:{c.instructions+=2;NFSU2_TR(0x6c5719);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c571b:{NFSU2_TR(0x6c571b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c572e;}}
}
B6c571d:L6c571d:{c.instructions+=2;NFSU2_TR(0x6c571d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5721:{NFSU2_TR(0x6c5721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c572e;}}
}
B6c5723:L6c5723:{c.instructions+=4;NFSU2_TR(0x6c5723);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5726:{NFSU2_TR(0x6c5726);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c572a:{NFSU2_TR(0x6c572a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c572b:{NFSU2_TR(0x6c572b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c572e:L6c572e:{c.instructions+=4;NFSU2_TR(0x6c572e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5731:{NFSU2_TR(0x6c5731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5734:{NFSU2_TR(0x6c5734);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c5737:{NFSU2_TR(0x6c5737);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c55f6u);}goto L6c55f6;}}
}
B6c573d:L6c573d:{c.instructions+=3;NFSU2_TR(0x6c573d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5743:{NFSU2_TR(0x6c5743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5746:{NFSU2_TR(0x6c5746);
{goto L6c5f7c;}
}
B6c574b:L6c574b:{c.instructions+=2;NFSU2_TR(0x6c574b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c574e:{NFSU2_TR(0x6c574e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5f74;}}
}
B6c5754:L6c5754:{c.instructions+=9;NFSU2_TR(0x6c5754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5757:{NFSU2_TR(0x6c5757);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c575d:{NFSU2_TR(0x6c575d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5760:{NFSU2_TR(0x6c5760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c5762:{NFSU2_TR(0x6c5762);
__builtin_memmove((R+4),(R+0),4);
}
B6c5764:{NFSU2_TR(0x6c5764);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c576a:{NFSU2_TR(0x6c576a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c576d:{NFSU2_TR(0x6c576d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5770:{NFSU2_TR(0x6c5770);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c577e;}}
}
B6c5772:L6c5772:{c.instructions+=3;NFSU2_TR(0x6c5772);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c5777:{NFSU2_TR(0x6c5777);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c577c:{NFSU2_TR(0x6c577c);
if(r1(R+518)){{goto L6c57d9;}}
}
B6c577e:L6c577e:{c.instructions+=2;NFSU2_TR(0x6c577e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c5780:{NFSU2_TR(0x6c5780);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c5781:L6c5781:{c.instructions+=6;NFSU2_TR(0x6c5781);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5784:{NFSU2_TR(0x6c5784);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c5786:{NFSU2_TR(0x6c5786);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c578a:{NFSU2_TR(0x6c578a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c578d:{NFSU2_TR(0x6c578d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5790:{NFSU2_TR(0x6c5790);
if(r1(R+518)){{goto L6c5dcc;}}
}
B6c5796:L6c5796:{c.instructions+=8;NFSU2_TR(0x6c5796);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5799:{NFSU2_TR(0x6c5799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c579a:{NFSU2_TR(0x6c579a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c57a0:{NFSU2_TR(0x6c57a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c57a1:{NFSU2_TR(0x6c57a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c57a4:{NFSU2_TR(0x6c57a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c57a5:{NFSU2_TR(0x6c57a5);
__builtin_memmove((R+4),(R+28),4);
}
B6c57a7:{NFSU2_TR(0x6c57a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c57acull));
TAIL_STATIC(0x6c3b49u,6c3);
}
B6c57ac:L6c57ac:{c.instructions+=2;NFSU2_TR(0x6c57ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c57ae:{NFSU2_TR(0x6c57ae);
if(r1(R+518)){{goto L6c57ce;}}
}
B6c57b0:L6c57b0:{c.instructions+=8;NFSU2_TR(0x6c57b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c57b3:{NFSU2_TR(0x6c57b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c57b4:{NFSU2_TR(0x6c57b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c57ba:{NFSU2_TR(0x6c57ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c57bb:{NFSU2_TR(0x6c57bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c57be:{NFSU2_TR(0x6c57be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c57bf:{NFSU2_TR(0x6c57bf);
__builtin_memmove((R+4),(R+28),4);
}
B6c57c1:{NFSU2_TR(0x6c57c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c57c6ull));
TAIL_STATIC(0x6c4145u,6c4);
}
B6c57c6:L6c57c6:{c.instructions+=2;NFSU2_TR(0x6c57c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c57c8:{NFSU2_TR(0x6c57c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5dcc;}}
}
B6c57ce:L6c57ce:{c.instructions+=3;NFSU2_TR(0x6c57ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c57d1:{NFSU2_TR(0x6c57d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c57d4:{NFSU2_TR(0x6c57d4);
{goto L6c5de4;}
}
B6c57d9:L6c57d9:{c.instructions+=1;NFSU2_TR(0x6c57d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c57dc:L6c57dc:{c.instructions+=1;NFSU2_TR(0x6c57dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c57e0:L6c57e0:{c.instructions+=7;NFSU2_TR(0x6c57e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c57e3:{NFSU2_TR(0x6c57e3);
__builtin_memmove((R+4),(R+8),4);
}
B6c57e5:{NFSU2_TR(0x6c57e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c57e8:{NFSU2_TR(0x6c57e8);
__builtin_memmove((R+0),(R+4),4);
}
B6c57ea:{NFSU2_TR(0x6c57ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c57ed:{NFSU2_TR(0x6c57ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c57f3:{NFSU2_TR(0x6c57f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c57f9:L6c57f9:{c.instructions+=1;NFSU2_TR(0x6c57f9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c57fb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c57f9u);}goto L6c57f9;}
}
B6c57fb:L6c57fb:{c.instructions+=2;NFSU2_TR(0x6c57fb);
__builtin_memmove((R+4),(R+0),4);
}
B6c57fd:{NFSU2_TR(0x6c57fd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c5800:L6c5800:{c.instructions+=1;NFSU2_TR(0x6c5800);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c5802;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5800u);}goto L6c5800;}
}
B6c5802:L6c5802:{c.instructions+=4;NFSU2_TR(0x6c5802);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5804:{NFSU2_TR(0x6c5804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c5805:{NFSU2_TR(0x6c5805);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c5808:{NFSU2_TR(0x6c5808);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c580e:L6c580e:{c.instructions+=1;NFSU2_TR(0x6c580e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c5810;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c580eu);}goto L6c580e;}
}
B6c5810:L6c5810:{c.instructions+=4;NFSU2_TR(0x6c5810);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5812:{NFSU2_TR(0x6c5812);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c5814:{NFSU2_TR(0x6c5814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c5815:{NFSU2_TR(0x6c5815);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c581b:L6c581b:{c.instructions+=1;NFSU2_TR(0x6c581b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c581d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c581bu);}goto L6c581b;}
}
B6c581d:L6c581d:{c.instructions+=3;NFSU2_TR(0x6c581d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5820:{NFSU2_TR(0x6c5820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5823:{NFSU2_TR(0x6c5823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5826:L6c5826:{c.instructions+=2;NFSU2_TR(0x6c5826);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c582a:{NFSU2_TR(0x6c582a);
if(r1(R+518)){{goto L6c5834;}}
}
B6c582c:L6c582c:{c.instructions+=4;NFSU2_TR(0x6c582c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c582e:{NFSU2_TR(0x6c582e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c582f:{NFSU2_TR(0x6c582f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c5832:{NFSU2_TR(0x6c5832);
{goto L6c5837;}
}
B6c5834:L6c5834:{c.instructions+=1;NFSU2_TR(0x6c5834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5837:L6c5837:{c.instructions+=10;NFSU2_TR(0x6c5837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c583a:{NFSU2_TR(0x6c583a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c583d:{NFSU2_TR(0x6c583d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5840:{NFSU2_TR(0x6c5840);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd7ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c5847:{NFSU2_TR(0x6c5847);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c584a:{NFSU2_TR(0x6c584a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c584d:{NFSU2_TR(0x6c584d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c5850:{NFSU2_TR(0x6c5850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c5852:{NFSU2_TR(0x6c5852);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5855:{NFSU2_TR(0x6c5855);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c58c1;}}
}
B6c5857:L6c5857:{c.instructions+=3;NFSU2_TR(0x6c5857);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c585a:{NFSU2_TR(0x6c585a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c585d:{NFSU2_TR(0x6c585d);
if(r1(R+518)){{goto L6c5906;}}
}
B6c5863:L6c5863:{c.instructions+=16;NFSU2_TR(0x6c5863);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c5866:{NFSU2_TR(0x6c5866);
__builtin_memmove((R+24),(R+4),4);
}
B6c5868:{NFSU2_TR(0x6c5868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c586b:{NFSU2_TR(0x6c586b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c586e:{NFSU2_TR(0x6c586e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5871:{NFSU2_TR(0x6c5871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5874:{NFSU2_TR(0x6c5874);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5876:{NFSU2_TR(0x6c5876);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd7f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c587c:{NFSU2_TR(0x6c587c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c587f:{NFSU2_TR(0x6c587f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5880:{NFSU2_TR(0x6c5880);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5883:{NFSU2_TR(0x6c5883);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5884:{NFSU2_TR(0x6c5884);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c5887:{NFSU2_TR(0x6c5887);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5888:{NFSU2_TR(0x6c5888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5889:{NFSU2_TR(0x6c5889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c588eull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6c588e:L6c588e:{c.instructions+=2;NFSU2_TR(0x6c588e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5890:{NFSU2_TR(0x6c5890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5906;}}
}
B6c5892:L6c5892:{c.instructions+=15;NFSU2_TR(0x6c5892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5895:{NFSU2_TR(0x6c5895);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5896:{NFSU2_TR(0x6c5896);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c5899:{NFSU2_TR(0x6c5899);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c589c:{NFSU2_TR(0x6c589c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c589d:{NFSU2_TR(0x6c589d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c58a3:{NFSU2_TR(0x6c58a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c58a4:{NFSU2_TR(0x6c58a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c58a7:{NFSU2_TR(0x6c58a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c58a8:{NFSU2_TR(0x6c58a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c58ae:{NFSU2_TR(0x6c58ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c58af:{NFSU2_TR(0x6c58af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bd7e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c58b5:{NFSU2_TR(0x6c58b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c58b6:{NFSU2_TR(0x6c58b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c58b7:{NFSU2_TR(0x6c58b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c58bcull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c58bc:L6c58bc:{c.instructions+=2;NFSU2_TR(0x6c58bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c58bf:{NFSU2_TR(0x6c58bf);
{goto L6c58ee;}
}
B6c58c1:L6c58c1:{c.instructions+=4;NFSU2_TR(0x6c58c1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c58c4:{NFSU2_TR(0x6c58c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c58c6:{NFSU2_TR(0x6c58c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c58c9:{NFSU2_TR(0x6c58c9);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c58d0:L6c58d0:{c.instructions+=3;NFSU2_TR(0x6c58d0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c58d4:{NFSU2_TR(0x6c58d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c58d7:{NFSU2_TR(0x6c58d7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c58e2;}}
}
B6c58d9:L6c58d9:{c.instructions+=4;NFSU2_TR(0x6c58d9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6c58db:{NFSU2_TR(0x6c58db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c58de:{NFSU2_TR(0x6c58de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c58e0:{NFSU2_TR(0x6c58e0);
{goto L6c58e5;}
}
B6c58e2:L6c58e2:{c.instructions+=1;NFSU2_TR(0x6c58e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c58e5:L6c58e5:{c.instructions+=4;NFSU2_TR(0x6c58e5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c58e6:{NFSU2_TR(0x6c58e6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c58e9:{NFSU2_TR(0x6c58e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c58ec:{NFSU2_TR(0x6c58ec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c58d0u);}goto L6c58d0;}}
}
B6c58ee:L6c58ee:{c.instructions+=2;NFSU2_TR(0x6c58ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c58f2:{NFSU2_TR(0x6c58f2);
if(r1(R+518)){{goto L6c590d;}}
}
B6c58f4:L6c58f4:{c.instructions+=4;NFSU2_TR(0x6c58f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c58f7:{NFSU2_TR(0x6c58f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6c58fa:{NFSU2_TR(0x6c58fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6c58fe:{NFSU2_TR(0x6c58fe);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5826u);}goto L6c5826;}}
}
B6c5904:L6c5904:{c.instructions+=1;NFSU2_TR(0x6c5904);
{goto L6c590d;}
}
B6c5906:L6c5906:{c.instructions+=1;NFSU2_TR(0x6c5906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c590d:L6c590d:{c.instructions+=2;NFSU2_TR(0x6c590d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5911:{NFSU2_TR(0x6c5911);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5915:L6c5915:{c.instructions+=2;NFSU2_TR(0x6c5915);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5919:{NFSU2_TR(0x6c5919);
if(r1(R+518)){{goto L6c5923;}}
}
B6c591b:L6c591b:{c.instructions+=4;NFSU2_TR(0x6c591b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c591d:{NFSU2_TR(0x6c591d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c591e:{NFSU2_TR(0x6c591e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c5921:{NFSU2_TR(0x6c5921);
{goto L6c5926;}
}
B6c5923:L6c5923:{c.instructions+=1;NFSU2_TR(0x6c5923);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5926:L6c5926:{c.instructions+=2;NFSU2_TR(0x6c5926);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd7ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6c592e:{NFSU2_TR(0x6c592e);
if(r1(R+512)){{goto L6c5990;}}
}
B6c5930:L6c5930:{c.instructions+=3;NFSU2_TR(0x6c5930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5934:{NFSU2_TR(0x6c5934);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5938:{NFSU2_TR(0x6c5938);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5990;}}
}
B6c593a:L6c593a:{c.instructions+=3;NFSU2_TR(0x6c593a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c593c:{NFSU2_TR(0x6c593c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c593f:{NFSU2_TR(0x6c593f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5985;}}
}
B6c5941:L6c5941:{c.instructions+=3;NFSU2_TR(0x6c5941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5944:{NFSU2_TR(0x6c5944);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c594b:{NFSU2_TR(0x6c594b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c594e:L6c594e:{c.instructions+=3;NFSU2_TR(0x6c594e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5952:{NFSU2_TR(0x6c5952);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5954:{NFSU2_TR(0x6c5954);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5976;}}
}
B6c5956:L6c5956:{c.instructions+=6;NFSU2_TR(0x6c5956);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5959:{NFSU2_TR(0x6c5959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c595c:{NFSU2_TR(0x6c595c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c595f:{NFSU2_TR(0x6c595f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6c5961:{NFSU2_TR(0x6c5961);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c5964:{NFSU2_TR(0x6c5964);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5967:L6c5967:{c.instructions+=2;NFSU2_TR(0x6c5967);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c5969:{NFSU2_TR(0x6c5969);
if(r1(R+518)){{goto L6c597e;}}
}
B6c596b:L6c596b:{c.instructions+=4;NFSU2_TR(0x6c596b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c596e:{NFSU2_TR(0x6c596e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c5971:{NFSU2_TR(0x6c5971);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c5974:{NFSU2_TR(0x6c5974);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5967u);}goto L6c5967;}}
}
B6c5976:L6c5976:{c.instructions+=3;NFSU2_TR(0x6c5976);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c5977:{NFSU2_TR(0x6c5977);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c597a:{NFSU2_TR(0x6c597a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c594eu);}goto L6c594e;}}
}
B6c597c:L6c597c:{c.instructions+=1;NFSU2_TR(0x6c597c);
{goto L6c5985;}
}
B6c597e:L6c597e:{c.instructions+=1;NFSU2_TR(0x6c597e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5985:L6c5985:{c.instructions+=4;NFSU2_TR(0x6c5985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5988:{NFSU2_TR(0x6c5988);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c598b:{NFSU2_TR(0x6c598b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c598e:{NFSU2_TR(0x6c598e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c593au);}goto L6c593a;}}
}
B6c5990:L6c5990:{c.instructions+=5;NFSU2_TR(0x6c5990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5993:{NFSU2_TR(0x6c5993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5996:{NFSU2_TR(0x6c5996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5999:{NFSU2_TR(0x6c5999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6c599d:{NFSU2_TR(0x6c599d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5915u);}goto L6c5915;}}
}
B6c59a3:L6c59a3:{c.instructions+=3;NFSU2_TR(0x6c59a3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c59a5:{NFSU2_TR(0x6c59a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c59a8:{NFSU2_TR(0x6c59a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5b02;}}
}
B6c59ae:L6c59ae:{c.instructions+=2;NFSU2_TR(0x6c59ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c59b1:{NFSU2_TR(0x6c59b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5b24;}}
}
B6c59b7:L6c59b7:{c.instructions+=4;NFSU2_TR(0x6c59b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c59b9:{NFSU2_TR(0x6c59b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c59bc:{NFSU2_TR(0x6c59bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c59bf:{NFSU2_TR(0x6c59bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5aa2;}}
}
B6c59c5:L6c59c5:{c.instructions+=6;NFSU2_TR(0x6c59c5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c59cc:{NFSU2_TR(0x6c59cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c59cf:{NFSU2_TR(0x6c59cf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c59d1:{NFSU2_TR(0x6c59d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c59d4:{NFSU2_TR(0x6c59d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c59d7:{NFSU2_TR(0x6c59d7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5a92;}}
}
B6c59dd:L6c59dd:{c.instructions+=4;NFSU2_TR(0x6c59dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c59e0:{NFSU2_TR(0x6c59e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c59e3:{NFSU2_TR(0x6c59e3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c59e5:{NFSU2_TR(0x6c59e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5a83;}}
}
B6c59eb:L6c59eb:{c.instructions+=3;NFSU2_TR(0x6c59eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c59ee:{NFSU2_TR(0x6c59ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c59f1:{NFSU2_TR(0x6c59f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c59f4:L6c59f4:{c.instructions+=3;NFSU2_TR(0x6c59f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c59f6:{NFSU2_TR(0x6c59f6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c59f8:{NFSU2_TR(0x6c59f8);
if(r1(R+518)){{goto L6c5a71;}}
}
B6c59fa:L6c59fa:{c.instructions+=2;NFSU2_TR(0x6c59fa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c59fc:{NFSU2_TR(0x6c59fc);
if(r1(R+518)){{goto L6c5a71;}}
}
B6c59fe:L6c59fe:{c.instructions+=4;NFSU2_TR(0x6c59fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5a01:{NFSU2_TR(0x6c5a01);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5a03:{NFSU2_TR(0x6c5a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5a06:{NFSU2_TR(0x6c5a06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5a43;}}
}
B6c5a08:L6c5a08:{c.instructions+=7;NFSU2_TR(0x6c5a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5a0b:{NFSU2_TR(0x6c5a0b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5a12:{NFSU2_TR(0x6c5a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5a15:{NFSU2_TR(0x6c5a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5a18:{NFSU2_TR(0x6c5a18);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c5a1b:{NFSU2_TR(0x6c5a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5a1e:{NFSU2_TR(0x6c5a1e);
__builtin_memmove((R+0),(R+28),4);
}
B6c5a20:L6c5a20:{c.instructions+=3;NFSU2_TR(0x6c5a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c5a22:{NFSU2_TR(0x6c5a22);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5a24:{NFSU2_TR(0x6c5a24);
if(r1(R+518)){{goto L6c5a34;}}
}
B6c5a26:L6c5a26:{c.instructions+=5;NFSU2_TR(0x6c5a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5a29:{NFSU2_TR(0x6c5a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5a2c:{NFSU2_TR(0x6c5a2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5a2f:{NFSU2_TR(0x6c5a2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5a32:{NFSU2_TR(0x6c5a32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5a3b;}}
}
B6c5a34:L6c5a34:{c.instructions+=1;NFSU2_TR(0x6c5a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5a3b:L6c5a3b:{c.instructions+=3;NFSU2_TR(0x6c5a3b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c5a3e:{NFSU2_TR(0x6c5a3e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c5a3f:{NFSU2_TR(0x6c5a3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5a20u);}goto L6c5a20;}}
}
B6c5a41:L6c5a41:{c.instructions+=1;NFSU2_TR(0x6c5a41);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c5a43:L6c5a43:{c.instructions+=2;NFSU2_TR(0x6c5a43);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5a46:{NFSU2_TR(0x6c5a46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5a4c;}}
}
B6c5a48:L6c5a48:{c.instructions+=2;NFSU2_TR(0x6c5a48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c5a4a:{NFSU2_TR(0x6c5a4a);
{goto L6c5a4f;}
}
B6c5a4c:L6c5a4c:{c.instructions+=1;NFSU2_TR(0x6c5a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5a4f:L6c5a4f:{c.instructions+=2;NFSU2_TR(0x6c5a4f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5a51:{NFSU2_TR(0x6c5a51);
if(r1(R+518)){{goto L6c5a71;}}
}
B6c5a53:L6c5a53:{c.instructions+=1;NFSU2_TR(0x6c5a53);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c5a55:L6c5a55:{c.instructions+=2;NFSU2_TR(0x6c5a55);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c5a5c:{NFSU2_TR(0x6c5a5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5a60;}}
}
B6c5a5e:L6c5a5e:{c.instructions+=1;NFSU2_TR(0x6c5a5e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c5a60:L6c5a60:{c.instructions+=3;NFSU2_TR(0x6c5a60);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c5a61:{NFSU2_TR(0x6c5a61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c5a64:{NFSU2_TR(0x6c5a64);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5a55u);}goto L6c5a55;}}
}
B6c5a66:L6c5a66:{c.instructions+=2;NFSU2_TR(0x6c5a66);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5a68:{NFSU2_TR(0x6c5a68);
if(r1(R+518)){{goto L6c5a71;}}
}
B6c5a6a:L6c5a6a:{c.instructions+=1;NFSU2_TR(0x6c5a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5a71:L6c5a71:{c.instructions+=5;NFSU2_TR(0x6c5a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5a74:{NFSU2_TR(0x6c5a74);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c5a77:{NFSU2_TR(0x6c5a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5a7a:{NFSU2_TR(0x6c5a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5a7d:{NFSU2_TR(0x6c5a7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c59f4u);}goto L6c59f4;}}
}
B6c5a83:L6c5a83:{c.instructions+=4;NFSU2_TR(0x6c5a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5a86:{NFSU2_TR(0x6c5a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5a89:{NFSU2_TR(0x6c5a89);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c5a8c:{NFSU2_TR(0x6c5a8c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c59ddu);}goto L6c59dd;}}
}
B6c5a92:L6c5a92:{c.instructions+=5;NFSU2_TR(0x6c5a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5a95:{NFSU2_TR(0x6c5a95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c5a96:{NFSU2_TR(0x6c5a96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c5a99:{NFSU2_TR(0x6c5a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5a9c:{NFSU2_TR(0x6c5a9c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c59c5u);}goto L6c59c5;}}
}
B6c5aa2:L6c5aa2:{c.instructions+=1;NFSU2_TR(0x6c5aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5aa5:L6c5aa5:{c.instructions+=4;NFSU2_TR(0x6c5aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5aa8:{NFSU2_TR(0x6c5aa8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5aaf:{NFSU2_TR(0x6c5aaf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5ab2:{NFSU2_TR(0x6c5ab2);
if(r1(R+518)){{goto L6c5af3;}}
}
B6c5ab4:L6c5ab4:{c.instructions+=3;NFSU2_TR(0x6c5ab4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c5ab6:{NFSU2_TR(0x6c5ab6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5ab9:{NFSU2_TR(0x6c5ab9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5af3;}}
}
B6c5abb:L6c5abb:{c.instructions+=3;NFSU2_TR(0x6c5abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5abe:{NFSU2_TR(0x6c5abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5ac1:{NFSU2_TR(0x6c5ac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c5ac4:L6c5ac4:{c.instructions+=4;NFSU2_TR(0x6c5ac4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c5acb:{NFSU2_TR(0x6c5acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5ace:{NFSU2_TR(0x6c5ace);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5ad0:{NFSU2_TR(0x6c5ad0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5aed;}}
}
B6c5ad2:L6c5ad2:{c.instructions+=1;NFSU2_TR(0x6c5ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5ad5:L6c5ad5:{c.instructions+=3;NFSU2_TR(0x6c5ad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c5ad7:{NFSU2_TR(0x6c5ad7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5ad9:{NFSU2_TR(0x6c5ad9);
if(r1(R+518)){{goto L6c5ae0;}}
}
B6c5adb:L6c5adb:{c.instructions+=2;NFSU2_TR(0x6c5adb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5ade:{NFSU2_TR(0x6c5ade);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5ae7;}}
}
B6c5ae0:L6c5ae0:{c.instructions+=1;NFSU2_TR(0x6c5ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ae7:L6c5ae7:{c.instructions+=3;NFSU2_TR(0x6c5ae7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c5aea:{NFSU2_TR(0x6c5aea);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c5aeb:{NFSU2_TR(0x6c5aeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5ad5u);}goto L6c5ad5;}}
}
B6c5aed:L6c5aed:{c.instructions+=3;NFSU2_TR(0x6c5aed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c5aee:{NFSU2_TR(0x6c5aee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c5af1:{NFSU2_TR(0x6c5af1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5ac4u);}goto L6c5ac4;}}
}
B6c5af3:L6c5af3:{c.instructions+=3;NFSU2_TR(0x6c5af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5af6:{NFSU2_TR(0x6c5af6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c5afa:{NFSU2_TR(0x6c5afa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5aa5u);}goto L6c5aa5;}}
}
B6c5afc:L6c5afc:{c.instructions+=2;NFSU2_TR(0x6c5afc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5b00:{NFSU2_TR(0x6c5b00);
if(r1(R+518)){{goto L6c5b24;}}
}
B6c5b02:L6c5b02:{c.instructions+=3;NFSU2_TR(0x6c5b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5b05:{NFSU2_TR(0x6c5b05);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c5b09:{NFSU2_TR(0x6c5b09);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c57e0u);}goto L6c57e0;}}
}
B6c5b0f:L6c5b0f:{c.instructions+=2;NFSU2_TR(0x6c5b0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5b13:{NFSU2_TR(0x6c5b13);
if(r1(R+518)){{goto L6c5b24;}}
}
B6c5b15:L6c5b15:{c.instructions+=3;NFSU2_TR(0x6c5b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5b18:{NFSU2_TR(0x6c5b18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c5b1c:{NFSU2_TR(0x6c5b1c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c57dcu);}goto L6c57dc;}}
}
B6c5b22:L6c5b22:{c.instructions+=1;NFSU2_TR(0x6c5b22);
{goto L6c5b85;}
}
B6c5b24:L6c5b24:{c.instructions+=8;NFSU2_TR(0x6c5b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5b27:{NFSU2_TR(0x6c5b27);
__builtin_memmove((R+0),(R+8),4);
}
B6c5b29:{NFSU2_TR(0x6c5b29);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c5b2c:{NFSU2_TR(0x6c5b2c);
__builtin_memmove((R+4),(R+0),4);
}
B6c5b2e:{NFSU2_TR(0x6c5b2e);
__builtin_memmove((R+12),(R+4),4);
}
B6c5b30:{NFSU2_TR(0x6c5b30);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c5b33:{NFSU2_TR(0x6c5b33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c5b39:{NFSU2_TR(0x6c5b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c5b3f:L6c5b3f:{c.instructions+=1;NFSU2_TR(0x6c5b3f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c5b41;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5b3fu);}goto L6c5b3f;}
}
B6c5b41:L6c5b41:{c.instructions+=2;NFSU2_TR(0x6c5b41);
__builtin_memmove((R+4),(R+12),4);
}
B6c5b43:{NFSU2_TR(0x6c5b43);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c5b46:L6c5b46:{c.instructions+=1;NFSU2_TR(0x6c5b46);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c5b48;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5b46u);}goto L6c5b46;}
}
B6c5b48:L6c5b48:{c.instructions+=5;NFSU2_TR(0x6c5b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5b4b:{NFSU2_TR(0x6c5b4b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c5b4c:{NFSU2_TR(0x6c5b4c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c5b53:{NFSU2_TR(0x6c5b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5b56:{NFSU2_TR(0x6c5b56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c5b58:L6c5b58:{c.instructions+=3;NFSU2_TR(0x6c5b58);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffdd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c5b5f:{NFSU2_TR(0x6c5b5f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5b62:{NFSU2_TR(0x6c5b62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5b70;}}
}
B6c5b64:L6c5b64:{c.instructions+=3;NFSU2_TR(0x6c5b64);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd34ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c5b6b:{NFSU2_TR(0x6c5b6b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5b6e:{NFSU2_TR(0x6c5b6e);
if(r1(R+518)){{goto L6c5b77;}}
}
B6c5b70:L6c5b70:{c.instructions+=1;NFSU2_TR(0x6c5b70);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe74ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c5b77:L6c5b77:{c.instructions+=3;NFSU2_TR(0x6c5b77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c5b7a:{NFSU2_TR(0x6c5b7a);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c5b7f:{NFSU2_TR(0x6c5b7f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5b58u);}goto L6c5b58;}}
}
B6c5b81:L6c5b81:{c.instructions+=1;NFSU2_TR(0x6c5b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5b85:L6c5b85:{c.instructions+=4;NFSU2_TR(0x6c5b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5b88:{NFSU2_TR(0x6c5b88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c5b8a:{NFSU2_TR(0x6c5b8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5b8c:{NFSU2_TR(0x6c5b8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5781u);}goto L6c5781;}}
}
B6c5b92:L6c5b92:{c.instructions+=3;NFSU2_TR(0x6c5b92);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5b95:{NFSU2_TR(0x6c5b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5b98:{NFSU2_TR(0x6c5b98);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5f7c;}}
}
B6c5b9e:L6c5b9e:{c.instructions+=6;NFSU2_TR(0x6c5b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ba2:{NFSU2_TR(0x6c5ba2);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffeb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c5ba9:{NFSU2_TR(0x6c5ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5bac:{NFSU2_TR(0x6c5bac);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5baf:{NFSU2_TR(0x6c5baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5bb2:{NFSU2_TR(0x6c5bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5bb8:L6c5bb8:{c.instructions+=4;NFSU2_TR(0x6c5bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5bbb:{NFSU2_TR(0x6c5bbb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c5bbd:{NFSU2_TR(0x6c5bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5bc0:{NFSU2_TR(0x6c5bc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5bc6:L6c5bc6:{c.instructions+=3;NFSU2_TR(0x6c5bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5bc9:{NFSU2_TR(0x6c5bc9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5bcc:{NFSU2_TR(0x6c5bcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5bd2:L6c5bd2:{c.instructions+=3;NFSU2_TR(0x6c5bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5bd5:{NFSU2_TR(0x6c5bd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5bd8:{NFSU2_TR(0x6c5bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5bde:L6c5bde:{c.instructions+=13;NFSU2_TR(0x6c5bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5be1:{NFSU2_TR(0x6c5be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5be4:{NFSU2_TR(0x6c5be4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c5be7:{NFSU2_TR(0x6c5be7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c5bea:{NFSU2_TR(0x6c5bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5bed:{NFSU2_TR(0x6c5bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5bf0:{NFSU2_TR(0x6c5bf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c5bf3:{NFSU2_TR(0x6c5bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5bf7:{NFSU2_TR(0x6c5bf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5bfa:{NFSU2_TR(0x6c5bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5bfd:{NFSU2_TR(0x6c5bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5c00:{NFSU2_TR(0x6c5c00);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c5c03:{NFSU2_TR(0x6c5c03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5c1d;}}
}
B6c5c05:L6c5c05:{c.instructions+=2;NFSU2_TR(0x6c5c05);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5c09:{NFSU2_TR(0x6c5c09);
if(r1(R+518)){{goto L6c5c1d;}}
}
B6c5c0b:L6c5c0b:{c.instructions+=6;NFSU2_TR(0x6c5c0b);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5c11:{NFSU2_TR(0x6c5c11);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5c14:{NFSU2_TR(0x6c5c14);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c5c16:{NFSU2_TR(0x6c5c16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c5c18:{NFSU2_TR(0x6c5c18);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c5c1b:{NFSU2_TR(0x6c5c1b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c5c3d;}}
}
B6c5c1d:L6c5c1d:{c.instructions+=2;NFSU2_TR(0x6c5c1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5c20:{NFSU2_TR(0x6c5c20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5c44;}}
}
B6c5c22:L6c5c22:{c.instructions+=3;NFSU2_TR(0x6c5c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5c25:{NFSU2_TR(0x6c5c25);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5c29:{NFSU2_TR(0x6c5c29);
if(r1(R+518)){{goto L6c5c44;}}
}
B6c5c2b:L6c5c2b:{c.instructions+=6;NFSU2_TR(0x6c5c2b);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5c31:{NFSU2_TR(0x6c5c31);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5c34:{NFSU2_TR(0x6c5c34);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c5c36:{NFSU2_TR(0x6c5c36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c5c38:{NFSU2_TR(0x6c5c38);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c5c3b:{NFSU2_TR(0x6c5c3b);
if(r1(R+514)){{goto L6c5c44;}}
}
B6c5c3d:L6c5c3d:{c.instructions+=1;NFSU2_TR(0x6c5c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5c44:L6c5c44:{c.instructions+=5;NFSU2_TR(0x6c5c44);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5c48:{NFSU2_TR(0x6c5c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5c4b:{NFSU2_TR(0x6c5c4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5c51:{NFSU2_TR(0x6c5c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5c54:{NFSU2_TR(0x6c5c54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5cfa;}}
}
B6c5c5a:L6c5c5a:{c.instructions+=6;NFSU2_TR(0x6c5c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5c5d:{NFSU2_TR(0x6c5c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5c60:{NFSU2_TR(0x6c5c60);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c5c63:{NFSU2_TR(0x6c5c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5c66:{NFSU2_TR(0x6c5c66);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5c68:{NFSU2_TR(0x6c5c68);
if(r1(R+518)){{goto L6c5c74;}}
}
B6c5c6a:L6c5c6a:{c.instructions+=2;NFSU2_TR(0x6c5c6a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5c6d:{NFSU2_TR(0x6c5c6d);
if(r1(R+518)){{goto L6c5ca0;}}
}
B6c5c6f:L6c5c6f:{c.instructions+=2;NFSU2_TR(0x6c5c6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5c72:{NFSU2_TR(0x6c5c72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5ca0;}}
}
B6c5c74:L6c5c74:{c.instructions+=4;NFSU2_TR(0x6c5c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5c77:{NFSU2_TR(0x6c5c77);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x80000ull))));
}
B6c5c7c:{NFSU2_TR(0x6c5c7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5c7f:{NFSU2_TR(0x6c5c7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5ca0;}}
}
B6c5c81:L6c5c81:{c.instructions+=2;NFSU2_TR(0x6c5c81);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5c85:{NFSU2_TR(0x6c5c85);
if(r1(R+518)){{goto L6c5ca0;}}
}
B6c5c87:L6c5c87:{c.instructions+=6;NFSU2_TR(0x6c5c87);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5c8d:{NFSU2_TR(0x6c5c8d);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5c90:{NFSU2_TR(0x6c5c90);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c5c92:{NFSU2_TR(0x6c5c92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c5c94:{NFSU2_TR(0x6c5c94);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c5c97:{NFSU2_TR(0x6c5c97);
if(r1(R+514)){{goto L6c5ca0;}}
}
B6c5c99:L6c5c99:{c.instructions+=1;NFSU2_TR(0x6c5c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ca0:L6c5ca0:{c.instructions+=3;NFSU2_TR(0x6c5ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5ca3:{NFSU2_TR(0x6c5ca3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5ca5:{NFSU2_TR(0x6c5ca5);
if(r1(R+518)){{goto L6c5cb1;}}
}
B6c5ca7:L6c5ca7:{c.instructions+=2;NFSU2_TR(0x6c5ca7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5caa:{NFSU2_TR(0x6c5caa);
if(r1(R+518)){{goto L6c5ce1;}}
}
B6c5cac:L6c5cac:{c.instructions+=2;NFSU2_TR(0x6c5cac);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5caf:{NFSU2_TR(0x6c5caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5ce1;}}
}
B6c5cb1:L6c5cb1:{c.instructions+=4;NFSU2_TR(0x6c5cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5cb4:{NFSU2_TR(0x6c5cb4);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x80000ull))));
}
B6c5cb9:{NFSU2_TR(0x6c5cb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5cbc:{NFSU2_TR(0x6c5cbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5ce1;}}
}
B6c5cbe:L6c5cbe:{c.instructions+=3;NFSU2_TR(0x6c5cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5cc1:{NFSU2_TR(0x6c5cc1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5cc5:{NFSU2_TR(0x6c5cc5);
if(r1(R+518)){{goto L6c5ce1;}}
}
B6c5cc7:L6c5cc7:{c.instructions+=6;NFSU2_TR(0x6c5cc7);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5ccd:{NFSU2_TR(0x6c5ccd);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5cd0:{NFSU2_TR(0x6c5cd0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c5cd2:{NFSU2_TR(0x6c5cd2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c5cd4:{NFSU2_TR(0x6c5cd4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c5cd7:{NFSU2_TR(0x6c5cd7);
if(r1(R+514)){{goto L6c5ce1;}}
}
B6c5cd9:L6c5cd9:{c.instructions+=4;NFSU2_TR(0x6c5cd9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c5cdb:{NFSU2_TR(0x6c5cdb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c5cdc:{NFSU2_TR(0x6c5cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5cdf:{NFSU2_TR(0x6c5cdf);
{goto L6c5ce4;}
}
B6c5ce1:L6c5ce1:{c.instructions+=2;NFSU2_TR(0x6c5ce1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c5ce3:{NFSU2_TR(0x6c5ce3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c5ce4:L6c5ce4:{c.instructions+=3;NFSU2_TR(0x6c5ce4);
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
B6c5ce8:{NFSU2_TR(0x6c5ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ceb:{NFSU2_TR(0x6c5ceb);
if(r1(R+518)){TAIL_STATIC(0x6c6287u,6c6);}
}
B6c5cf1:L6c5cf1:{c.instructions+=2;NFSU2_TR(0x6c5cf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5cf7:{NFSU2_TR(0x6c5cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5cfa:L6c5cfa:{c.instructions+=8;NFSU2_TR(0x6c5cfa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5cfe:{NFSU2_TR(0x6c5cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5d01:{NFSU2_TR(0x6c5d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5d04:{NFSU2_TR(0x6c5d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5d07:{NFSU2_TR(0x6c5d07);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffeb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6c5d0e:{NFSU2_TR(0x6c5d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5d11:{NFSU2_TR(0x6c5d11);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5d14:{NFSU2_TR(0x6c5d14);
if(r1(R+518)){{goto L6c5d1e;}}
}
B6c5d16:L6c5d16:{c.instructions+=3;NFSU2_TR(0x6c5d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5d19:{NFSU2_TR(0x6c5d19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5d1c:{NFSU2_TR(0x6c5d1c);
{goto L6c5d21;}
}
B6c5d1e:L6c5d1e:{c.instructions+=1;NFSU2_TR(0x6c5d1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5d21:L6c5d21:{c.instructions+=5;NFSU2_TR(0x6c5d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5d24:{NFSU2_TR(0x6c5d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5d27:{NFSU2_TR(0x6c5d27);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c5d2a:{NFSU2_TR(0x6c5d2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5d2e:{NFSU2_TR(0x6c5d2e);
if(r1(R+518)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5d34:L6c5d34:{c.instructions+=6;NFSU2_TR(0x6c5d34);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5d3a:{NFSU2_TR(0x6c5d3a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5d3d:{NFSU2_TR(0x6c5d3d);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c5d3f:{NFSU2_TR(0x6c5d3f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c5d41:{NFSU2_TR(0x6c5d41);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c5d44:{NFSU2_TR(0x6c5d44);
if(r1(R+514)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5d4a:L6c5d4a:{c.instructions+=4;NFSU2_TR(0x6c5d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5d4d:{NFSU2_TR(0x6c5d4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5d50:{NFSU2_TR(0x6c5d50);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5d54:{NFSU2_TR(0x6c5d54);
if(r1(R+518)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5d5a:L6c5d5a:{c.instructions+=6;NFSU2_TR(0x6c5d5a);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5d60:{NFSU2_TR(0x6c5d60);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5d63:{NFSU2_TR(0x6c5d63);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c5d65:{NFSU2_TR(0x6c5d65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c5d67:{NFSU2_TR(0x6c5d67);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c5d6a:{NFSU2_TR(0x6c5d6a);
if(r1(R+514)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5d70:L6c5d70:{c.instructions+=7;NFSU2_TR(0x6c5d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5d73:{NFSU2_TR(0x6c5d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5d76:{NFSU2_TR(0x6c5d76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c5d79:{NFSU2_TR(0x6c5d79);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c5d7c:{NFSU2_TR(0x6c5d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5d7f:{NFSU2_TR(0x6c5d7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5d85:{NFSU2_TR(0x6c5d85);
if(r1(R+518)){{goto L6c5d8e;}}
}
B6c5d87:L6c5d87:{c.instructions+=1;NFSU2_TR(0x6c5d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5d8e:L6c5d8e:{c.instructions+=4;NFSU2_TR(0x6c5d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5d91:{NFSU2_TR(0x6c5d91);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c5d93:{NFSU2_TR(0x6c5d93);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5d95:{NFSU2_TR(0x6c5d95);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5da5;}}
}
B6c5d97:L6c5d97:{c.instructions+=1;NFSU2_TR(0x6c5d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5d9a:L6c5d9a:{c.instructions+=2;NFSU2_TR(0x6c5d9a);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+24))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c5d9e:{NFSU2_TR(0x6c5d9e);
if(r1(R+518)){{goto L6c5da5;}}
}
B6c5da0:L6c5da0:{c.instructions+=3;NFSU2_TR(0x6c5da0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c5da1:{NFSU2_TR(0x6c5da1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6c5da3:{NFSU2_TR(0x6c5da3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5d9au);}goto L6c5d9a;}}
}
B6c5da5:L6c5da5:{c.instructions+=2;NFSU2_TR(0x6c5da5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5da7:{NFSU2_TR(0x6c5da7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5dba;}}
}
B6c5da9:L6c5da9:{c.instructions+=2;NFSU2_TR(0x6c5da9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5dad:{NFSU2_TR(0x6c5dad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5dba;}}
}
B6c5daf:L6c5daf:{c.instructions+=4;NFSU2_TR(0x6c5daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5db2:{NFSU2_TR(0x6c5db2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c5db6:{NFSU2_TR(0x6c5db6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c5db7:{NFSU2_TR(0x6c5db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5dba:L6c5dba:{c.instructions+=4;NFSU2_TR(0x6c5dba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c5dbb:{NFSU2_TR(0x6c5dbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c5dbe:{NFSU2_TR(0x6c5dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5dc1:{NFSU2_TR(0x6c5dc1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5b9eu);}goto L6c5b9e;}}
}
B6c5dc7:L6c5dc7:{c.instructions+=1;NFSU2_TR(0x6c5dc7);
{goto L6c5f7c;}
}
B6c5dcc:L6c5dcc:{c.instructions+=5;NFSU2_TR(0x6c5dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5dd2:{NFSU2_TR(0x6c5dd2);
__builtin_memmove((R+8),(R+0),4);
}
B6c5dd4:{NFSU2_TR(0x6c5dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ddb:{NFSU2_TR(0x6c5ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5de1:{NFSU2_TR(0x6c5de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5de4:L6c5de4:{c.instructions+=2;NFSU2_TR(0x6c5de4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5de6:{NFSU2_TR(0x6c5de6);
if(r1(R+518)){{goto L6c5f66;}}
}
B6c5dec:L6c5dec:{c.instructions+=5;NFSU2_TR(0x6c5dec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c5dee:{NFSU2_TR(0x6c5dee);
__builtin_memmove((R+4),(R+0),4);
}
B6c5df0:{NFSU2_TR(0x6c5df0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6c5df6:{NFSU2_TR(0x6c5df6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70b00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5dfc:{NFSU2_TR(0x6c5dfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5f66;}}
}
B6c5e02:L6c5e02:{c.instructions+=11;NFSU2_TR(0x6c5e02);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c5e07:{NFSU2_TR(0x6c5e07);
__builtin_memmove((R+4),(R+0),4);
}
B6c5e09:{NFSU2_TR(0x6c5e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e0c:{NFSU2_TR(0x6c5e0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c5e0f:{NFSU2_TR(0x6c5e0f);
w4(R+4,u32(0-u32(r4(R+4))));
}
B6c5e11:{NFSU2_TR(0x6c5e11);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c5e14:{NFSU2_TR(0x6c5e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e17:{NFSU2_TR(0x6c5e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e1a:{NFSU2_TR(0x6c5e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e1d:{NFSU2_TR(0x6c5e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e20:{NFSU2_TR(0x6c5e20);
{goto L6c5e25;}
}
B6c5e22:L6c5e22:{c.instructions+=1;NFSU2_TR(0x6c5e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5e25:L6c5e25:{c.instructions+=3;NFSU2_TR(0x6c5e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e29:{NFSU2_TR(0x6c5e29);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5e2d:{NFSU2_TR(0x6c5e2d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5ecb;}}
}
B6c5e33:L6c5e33:{c.instructions+=6;NFSU2_TR(0x6c5e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5e36:{NFSU2_TR(0x6c5e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5e39:{NFSU2_TR(0x6c5e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5e3c:{NFSU2_TR(0x6c5e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5e3f:{NFSU2_TR(0x6c5e3f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6c5e41:{NFSU2_TR(0x6c5e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e44:L6c5e44:{c.instructions+=8;NFSU2_TR(0x6c5e44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5e47:{NFSU2_TR(0x6c5e47);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c5e4a:{NFSU2_TR(0x6c5e4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5e4e:{NFSU2_TR(0x6c5e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5e51:{NFSU2_TR(0x6c5e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c5e53:{NFSU2_TR(0x6c5e53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5e56:{NFSU2_TR(0x6c5e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5e59:{NFSU2_TR(0x6c5e59);
if(r1(R+518)){{goto L6c5e60;}}
}
B6c5e5b:L6c5e5b:{c.instructions+=2;NFSU2_TR(0x6c5e5b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6c5e5e:{NFSU2_TR(0x6c5e5e);
{goto L6c5e63;}
}
B6c5e60:L6c5e60:{c.instructions+=1;NFSU2_TR(0x6c5e60);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6c5e63:L6c5e63:{c.instructions+=1;NFSU2_TR(0x6c5e63);
if(r1(R+518)){{goto L6c5ecb;}}
}
B6c5e65:L6c5e65:{c.instructions+=6;NFSU2_TR(0x6c5e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5e68:{NFSU2_TR(0x6c5e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5e6b:{NFSU2_TR(0x6c5e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5e6e:{NFSU2_TR(0x6c5e6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5e71:{NFSU2_TR(0x6c5e71);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c5e75:{NFSU2_TR(0x6c5e75);
if(r1(R+518)){{goto L6c5ecb;}}
}
B6c5e77:L6c5e77:{c.instructions+=7;NFSU2_TR(0x6c5e77);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5e7d:{NFSU2_TR(0x6c5e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5e80:{NFSU2_TR(0x6c5e80);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c5e83:{NFSU2_TR(0x6c5e83);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c5e85:{NFSU2_TR(0x6c5e85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c5e87:{NFSU2_TR(0x6c5e87);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c5e8a:{NFSU2_TR(0x6c5e8a);
if(r1(R+514)){{goto L6c5ecb;}}
}
B6c5e8c:L6c5e8c:{c.instructions+=2;NFSU2_TR(0x6c5e8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5e90:{NFSU2_TR(0x6c5e90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5ecb;}}
}
B6c5e92:L6c5e92:{c.instructions+=9;NFSU2_TR(0x6c5e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5e95:{NFSU2_TR(0x6c5e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5e98:{NFSU2_TR(0x6c5e98);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c5e9b:{NFSU2_TR(0x6c5e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5e9e:{NFSU2_TR(0x6c5e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5ea1:{NFSU2_TR(0x6c5ea1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff94ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c5ea5:{NFSU2_TR(0x6c5ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c5ea8:{NFSU2_TR(0x6c5ea8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5eae:{NFSU2_TR(0x6c5eae);
if(r1(R+518)){{goto L6c5eb7;}}
}
B6c5eb0:L6c5eb0:{c.instructions+=1;NFSU2_TR(0x6c5eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5eb7:L6c5eb7:{c.instructions+=6;NFSU2_TR(0x6c5eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ebb:{NFSU2_TR(0x6c5ebb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c5ebc:{NFSU2_TR(0x6c5ebc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6c5ebf:{NFSU2_TR(0x6c5ebf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c5ec2:{NFSU2_TR(0x6c5ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ec5:{NFSU2_TR(0x6c5ec5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5e44u);}goto L6c5e44;}}
}
B6c5ecb:L6c5ecb:{c.instructions+=3;NFSU2_TR(0x6c5ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5ece:{NFSU2_TR(0x6c5ece);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5ed1:{NFSU2_TR(0x6c5ed1);
if(r1(R+518)){{goto L6c5ef1;}}
}
B6c5ed3:L6c5ed3:{c.instructions+=8;NFSU2_TR(0x6c5ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ed6:{NFSU2_TR(0x6c5ed6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c5ed9:{NFSU2_TR(0x6c5ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5edc:{NFSU2_TR(0x6c5edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5edf:{NFSU2_TR(0x6c5edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6c5ee2:{NFSU2_TR(0x6c5ee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c5ee6:{NFSU2_TR(0x6c5ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ee9:{NFSU2_TR(0x6c5ee9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5e22u);}goto L6c5e22;}}
}
B6c5eef:L6c5eef:{c.instructions+=1;NFSU2_TR(0x6c5eef);
{goto L6c5f54;}
}
B6c5ef1:L6c5ef1:{c.instructions+=2;NFSU2_TR(0x6c5ef1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5ef3:{NFSU2_TR(0x6c5ef3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5f54;}}
}
B6c5ef5:L6c5ef5:{c.instructions+=8;NFSU2_TR(0x6c5ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5ef8:{NFSU2_TR(0x6c5ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5efb:{NFSU2_TR(0x6c5efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5efe:{NFSU2_TR(0x6c5efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5f01:{NFSU2_TR(0x6c5f01);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6c5f04:{NFSU2_TR(0x6c5f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5f07:{NFSU2_TR(0x6c5f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c5f0a:{NFSU2_TR(0x6c5f0a);
__builtin_memmove((R+12),(R+0),4);
}
B6c5f0c:L6c5f0c:{c.instructions+=4;NFSU2_TR(0x6c5f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c5f0e:{NFSU2_TR(0x6c5f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5f11:{NFSU2_TR(0x6c5f11);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5f15:{NFSU2_TR(0x6c5f15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5f47;}}
}
B6c5f17:L6c5f17:{c.instructions+=3;NFSU2_TR(0x6c5f17);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c5f19:{NFSU2_TR(0x6c5f19);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5f1c:{NFSU2_TR(0x6c5f1c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5f2d;}}
}
B6c5f1e:L6c5f1e:{c.instructions+=1;NFSU2_TR(0x6c5f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c5f21:L6c5f21:{c.instructions+=2;NFSU2_TR(0x6c5f21);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+28))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c5f25:{NFSU2_TR(0x6c5f25);
if(r1(R+518)){{goto L6c5f2d;}}
}
B6c5f27:L6c5f27:{c.instructions+=3;NFSU2_TR(0x6c5f27);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c5f28:{NFSU2_TR(0x6c5f28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c5f2b:{NFSU2_TR(0x6c5f2b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5f21u);}goto L6c5f21;}}
}
B6c5f2d:L6c5f2d:{c.instructions+=2;NFSU2_TR(0x6c5f2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5f30:{NFSU2_TR(0x6c5f30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5f4e;}}
}
B6c5f32:L6c5f32:{c.instructions+=2;NFSU2_TR(0x6c5f32);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5f36:{NFSU2_TR(0x6c5f36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5f4e;}}
}
B6c5f38:L6c5f38:{c.instructions+=5;NFSU2_TR(0x6c5f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c5f3b:{NFSU2_TR(0x6c5f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5f3e:{NFSU2_TR(0x6c5f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5f41:{NFSU2_TR(0x6c5f41);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c5f45:{NFSU2_TR(0x6c5f45);
{goto L6c5f4e;}
}
B6c5f47:L6c5f47:{c.instructions+=1;NFSU2_TR(0x6c5f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5f4e:L6c5f4e:{c.instructions+=3;NFSU2_TR(0x6c5f4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c5f51:{NFSU2_TR(0x6c5f51);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6c5f52:{NFSU2_TR(0x6c5f52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5f0cu);}goto L6c5f0c;}}
}
B6c5f54:L6c5f54:{c.instructions+=2;NFSU2_TR(0x6c5f54);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5f58:{NFSU2_TR(0x6c5f58);
if(r1(R+518)){TAIL_STATIC(0x6c60ebu,6c6);}
}
B6c5f5e:L6c5f5e:{c.instructions+=3;NFSU2_TR(0x6c5f5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c5f61:{NFSU2_TR(0x6c5f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5f64:{NFSU2_TR(0x6c5f64);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c5f66:L6c5f66:{c.instructions+=3;NFSU2_TR(0x6c5f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5f69:{NFSU2_TR(0x6c5f69);
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
B6c5f6b:{NFSU2_TR(0x6c5f6b);
if(r1(R+518)){{goto L6c5f74;}}
}
B6c5f6d:L6c5f6d:{c.instructions+=2;NFSU2_TR(0x6c5f6d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c5f6f:{NFSU2_TR(0x6c5f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c5f74ull));
TAIL_STATIC(0x6739efu,673);
}
B6c5f74:L6c5f74:{c.instructions+=2;NFSU2_TR(0x6c5f74);
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
B6c5f76:{NFSU2_TR(0x6c5f76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c6135u,6c6);}
}
B6c5f7c:L6c5f7c:{c.instructions+=3;NFSU2_TR(0x6c5f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5f80:{NFSU2_TR(0x6c5f80);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5f84:{NFSU2_TR(0x6c5f84);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5ffe;}}
}
B6c5f86:L6c5f86:{c.instructions+=4;NFSU2_TR(0x6c5f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5f89:{NFSU2_TR(0x6c5f89);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c5f8d:{NFSU2_TR(0x6c5f8d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5f90:{NFSU2_TR(0x6c5f90);
if(r1(R+518)){TAIL_STATIC(0x6c60cfu,6c6);}
}
B6c5f96:L6c5f96:{c.instructions+=7;NFSU2_TR(0x6c5f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5f99:{NFSU2_TR(0x6c5f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5f9c:{NFSU2_TR(0x6c5f9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c5f9f:{NFSU2_TR(0x6c5f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c5fa1:{NFSU2_TR(0x6c5fa1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6c5fa7:{NFSU2_TR(0x6c5fa7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5fad:{NFSU2_TR(0x6c5fad);
if(r1(R+518)){TAIL_STATIC(0x6c60cfu,6c6);}
}
B6c5fb3:L6c5fb3:{c.instructions+=5;NFSU2_TR(0x6c5fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c5fb6:{NFSU2_TR(0x6c5fb6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c5fb8:{NFSU2_TR(0x6c5fb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5fbb:{NFSU2_TR(0x6c5fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5fbe:{NFSU2_TR(0x6c5fbe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5fe5;}}
}
B6c5fc0:L6c5fc0:{c.instructions+=2;NFSU2_TR(0x6c5fc0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c5fc2:{NFSU2_TR(0x6c5fc2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c5fdf;}}
}
B6c5fc4:L6c5fc4:{c.instructions+=4;NFSU2_TR(0x6c5fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5fc7:{NFSU2_TR(0x6c5fc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c5fca:{NFSU2_TR(0x6c5fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c5fcd:{NFSU2_TR(0x6c5fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c5fd0:L6c5fd0:{c.instructions+=2;NFSU2_TR(0x6c5fd0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c5fd2:{NFSU2_TR(0x6c5fd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5fd7;}}
}
B6c5fd4:L6c5fd4:{c.instructions+=1;NFSU2_TR(0x6c5fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5fd7:L6c5fd7:{c.instructions+=3;NFSU2_TR(0x6c5fd7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c5fda:{NFSU2_TR(0x6c5fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c5fdd:{NFSU2_TR(0x6c5fdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5fd0u);}goto L6c5fd0;}}
}
B6c5fdf:L6c5fdf:{c.instructions+=3;NFSU2_TR(0x6c5fdf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c5fe0:{NFSU2_TR(0x6c5fe0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c5fe3:{NFSU2_TR(0x6c5fe3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5fc0u);}goto L6c5fc0;}}
}
B6c5fe5:L6c5fe5:{c.instructions+=2;NFSU2_TR(0x6c5fe5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c5fe8:{NFSU2_TR(0x6c5fe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c5ff7;}}
}
B6c5fea:L6c5fea:{c.instructions+=4;NFSU2_TR(0x6c5fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5fed:{NFSU2_TR(0x6c5fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c5ff0:{NFSU2_TR(0x6c5ff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c5ff3:{NFSU2_TR(0x6c5ff3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c5f86u);}goto L6c5f86;}}
}
B6c5ff5:L6c5ff5:{c.instructions+=1;NFSU2_TR(0x6c5ff5);
{goto L6c5ffe;}
}
B6c5ff7:L6c5ff7:{c.instructions+=1;NFSU2_TR(0x6c5ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c5ffe:L6c5ffe:{c.instructions+=1;NFSU2_TR(0x6c5ffe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
TAIL_STATIC(0x6c6000u,6c6);
}
XIT:NFSU2_TR_EXIT(0x6c5,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
