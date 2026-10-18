#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_44f(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f5(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_5fc(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5fb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5fb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 page_5fb(Cpu& c){return body_5fb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5fb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5fb001:goto L5fb001;
case 0x5fb003:goto L5fb003;
case 0x5fb005:c.instructions+=2;goto B5fb005;
case 0x5fb007:c.instructions+=1;goto B5fb007;
case 0x5fb00a:goto L5fb00a;
case 0x5fb011:c.instructions+=1;goto B5fb011;
case 0x5fb013:goto L5fb013;
case 0x5fb016:c.instructions+=4;goto B5fb016;
case 0x5fb017:c.instructions+=3;goto B5fb017;
case 0x5fb01c:c.instructions+=2;goto B5fb01c;
case 0x5fb01e:c.instructions+=1;goto B5fb01e;
case 0x5fb024:goto L5fb024;
case 0x5fb026:c.instructions+=2;goto B5fb026;
case 0x5fb028:c.instructions+=1;goto B5fb028;
case 0x5fb02d:goto L5fb02d;
case 0x5fb033:c.instructions+=2;goto B5fb033;
case 0x5fb035:c.instructions+=1;goto B5fb035;
case 0x5fb037:goto L5fb037;
case 0x5fb03d:c.instructions+=4;goto B5fb03d;
case 0x5fb044:c.instructions+=3;goto B5fb044;
case 0x5fb046:c.instructions+=2;goto B5fb046;
case 0x5fb047:c.instructions+=1;goto B5fb047;
case 0x5fb04a:goto L5fb04a;
case 0x5fb04b:c.instructions+=2;goto B5fb04b;
case 0x5fb04c:c.instructions+=1;goto B5fb04c;
case 0x5fb050:goto L5fb050;
case 0x5fb053:c.instructions+=7;goto B5fb053;
case 0x5fb054:c.instructions+=6;goto B5fb054;
case 0x5fb056:c.instructions+=5;goto B5fb056;
case 0x5fb05c:c.instructions+=4;goto B5fb05c;
case 0x5fb05e:c.instructions+=3;goto B5fb05e;
case 0x5fb061:c.instructions+=2;goto B5fb061;
case 0x5fb063:c.instructions+=1;goto B5fb063;
case 0x5fb065:goto L5fb065;
case 0x5fb06f:c.instructions+=1;goto B5fb06f;
case 0x5fb071:goto L5fb071;
case 0x5fb076:c.instructions+=2;goto B5fb076;
case 0x5fb078:c.instructions+=1;goto B5fb078;
case 0x5fb07a:goto L5fb07a;
case 0x5fb081:c.instructions+=1;goto B5fb081;
case 0x5fb083:goto L5fb083;
case 0x5fb089:c.instructions+=4;goto B5fb089;
case 0x5fb08b:c.instructions+=3;goto B5fb08b;
case 0x5fb08e:c.instructions+=2;goto B5fb08e;
case 0x5fb090:c.instructions+=1;goto B5fb090;
case 0x5fb092:goto L5fb092;
case 0x5fb098:c.instructions+=2;goto B5fb098;
case 0x5fb09a:c.instructions+=1;goto B5fb09a;
case 0x5fb09c:goto L5fb09c;
case 0x5fb0a2:c.instructions+=4;goto B5fb0a2;
case 0x5fb0a8:c.instructions+=3;goto B5fb0a8;
case 0x5fb0aa:c.instructions+=2;goto B5fb0aa;
case 0x5fb0ad:c.instructions+=1;goto B5fb0ad;
case 0x5fb0af:goto L5fb0af;
case 0x5fb0b2:c.instructions+=1;goto B5fb0b2;
case 0x5fb0b4:goto L5fb0b4;
case 0x5fb0b9:c.instructions+=2;goto B5fb0b9;
case 0x5fb0bb:c.instructions+=1;goto B5fb0bb;
case 0x5fb0bd:goto L5fb0bd;
case 0x5fb0c0:c.instructions+=1;goto B5fb0c0;
case 0x5fb0c2:goto L5fb0c2;
case 0x5fb0c8:c.instructions+=2;goto B5fb0c8;
case 0x5fb0ca:c.instructions+=1;goto B5fb0ca;
case 0x5fb0d0:goto L5fb0d0;
case 0x5fb0d1:c.instructions+=1;goto B5fb0d1;
case 0x5fb0d6:goto L5fb0d6;
case 0x5fb0da:c.instructions+=4;goto B5fb0da;
case 0x5fb0df:c.instructions+=3;goto B5fb0df;
case 0x5fb0e2:c.instructions+=2;goto B5fb0e2;
case 0x5fb0e4:c.instructions+=1;goto B5fb0e4;
case 0x5fb0e6:goto L5fb0e6;
case 0x5fb0e9:c.instructions+=1;goto B5fb0e9;
case 0x5fb0eb:goto L5fb0eb;
case 0x5fb0f0:c.instructions+=4;goto B5fb0f0;
case 0x5fb0f3:c.instructions+=3;goto B5fb0f3;
case 0x5fb0f5:c.instructions+=2;goto B5fb0f5;
case 0x5fb0fa:c.instructions+=1;goto B5fb0fa;
case 0x5fb100:goto L5fb100;
case 0x5fb106:c.instructions+=2;goto B5fb106;
case 0x5fb108:c.instructions+=1;goto B5fb108;
case 0x5fb10a:goto L5fb10a;
case 0x5fb10d:c.instructions+=1;goto B5fb10d;
case 0x5fb10f:goto L5fb10f;
case 0x5fb114:c.instructions+=1;goto B5fb114;
case 0x5fb116:goto L5fb116;
case 0x5fb118:goto L5fb118;
case 0x5fb11b:c.instructions+=2;goto B5fb11b;
case 0x5fb11f:c.instructions+=1;goto B5fb11f;
case 0x5fb121:goto L5fb121;
case 0x5fb124:c.instructions+=1;goto B5fb124;
case 0x5fb12a:goto L5fb12a;
case 0x5fb12b:c.instructions+=9;goto B5fb12b;
case 0x5fb131:c.instructions+=8;goto B5fb131;
case 0x5fb132:c.instructions+=7;goto B5fb132;
case 0x5fb133:c.instructions+=6;goto B5fb133;
case 0x5fb136:c.instructions+=5;goto B5fb136;
case 0x5fb138:c.instructions+=4;goto B5fb138;
case 0x5fb13a:c.instructions+=3;goto B5fb13a;
case 0x5fb13f:c.instructions+=2;goto B5fb13f;
case 0x5fb143:c.instructions+=1;goto B5fb143;
case 0x5fb145:goto L5fb145;
case 0x5fb14b:c.instructions+=3;goto B5fb14b;
case 0x5fb151:c.instructions+=2;goto B5fb151;
case 0x5fb153:c.instructions+=1;goto B5fb153;
case 0x5fb155:goto L5fb155;
case 0x5fb157:c.instructions+=1;goto B5fb157;
case 0x5fb15b:goto L5fb15b;
case 0x5fb161:c.instructions+=6;goto B5fb161;
case 0x5fb165:c.instructions+=5;goto B5fb165;
case 0x5fb167:c.instructions+=4;goto B5fb167;
case 0x5fb16c:c.instructions+=3;goto B5fb16c;
case 0x5fb16e:c.instructions+=2;goto B5fb16e;
case 0x5fb174:c.instructions+=1;goto B5fb174;
case 0x5fb176:goto L5fb176;
case 0x5fb178:c.instructions+=1;goto B5fb178;
case 0x5fb17e:goto L5fb17e;
case 0x5fb181:c.instructions+=1;goto B5fb181;
case 0x5fb183:goto L5fb183;
case 0x5fb185:c.instructions+=1;goto B5fb185;
case 0x5fb18a:goto L5fb18a;
case 0x5fb190:c.instructions+=3;goto B5fb190;
case 0x5fb192:c.instructions+=2;goto B5fb192;
case 0x5fb195:c.instructions+=1;goto B5fb195;
case 0x5fb197:goto L5fb197;
case 0x5fb199:c.instructions+=1;goto B5fb199;
case 0x5fb19e:goto L5fb19e;
case 0x5fb1a4:c.instructions+=3;goto B5fb1a4;
case 0x5fb1a6:c.instructions+=2;goto B5fb1a6;
case 0x5fb1a9:c.instructions+=1;goto B5fb1a9;
case 0x5fb1af:goto L5fb1af;
case 0x5fb1b1:c.instructions+=1;goto B5fb1b1;
case 0x5fb1b3:goto L5fb1b3;
case 0x5fb1b8:c.instructions+=3;goto B5fb1b8;
case 0x5fb1bb:c.instructions+=2;goto B5fb1bb;
case 0x5fb1bd:c.instructions+=1;goto B5fb1bd;
case 0x5fb1bf:goto L5fb1bf;
case 0x5fb1c5:c.instructions+=2;goto B5fb1c5;
case 0x5fb1c7:c.instructions+=1;goto B5fb1c7;
case 0x5fb1c9:goto L5fb1c9;
case 0x5fb1ce:c.instructions+=1;goto B5fb1ce;
case 0x5fb1d3:goto L5fb1d3;
case 0x5fb1d9:c.instructions+=3;goto B5fb1d9;
case 0x5fb1db:c.instructions+=2;goto B5fb1db;
case 0x5fb1dd:c.instructions+=1;goto B5fb1dd;
case 0x5fb1df:goto L5fb1df;
case 0x5fb1e4:c.instructions+=1;goto B5fb1e4;
case 0x5fb1e6:goto L5fb1e6;
case 0x5fb1ec:c.instructions+=2;goto B5fb1ec;
case 0x5fb1ee:c.instructions+=1;goto B5fb1ee;
case 0x5fb1f0:goto L5fb1f0;
case 0x5fb1f2:c.instructions+=1;goto B5fb1f2;
case 0x5fb1f7:goto L5fb1f7;
case 0x5fb1fd:c.instructions+=3;goto B5fb1fd;
case 0x5fb1ff:c.instructions+=2;goto B5fb1ff;
case 0x5fb202:c.instructions+=1;goto B5fb202;
case 0x5fb204:goto L5fb204;
case 0x5fb206:c.instructions+=1;goto B5fb206;
case 0x5fb20a:goto L5fb20a;
case 0x5fb210:c.instructions+=2;goto B5fb210;
case 0x5fb212:c.instructions+=1;goto B5fb212;
case 0x5fb218:goto L5fb218;
case 0x5fb21a:c.instructions+=4;goto B5fb21a;
case 0x5fb21c:c.instructions+=3;goto B5fb21c;
case 0x5fb21e:c.instructions+=2;goto B5fb21e;
case 0x5fb21f:c.instructions+=1;goto B5fb21f;
case 0x5fb224:goto L5fb224;
case 0x5fb226:c.instructions+=2;goto B5fb226;
case 0x5fb228:c.instructions+=1;goto B5fb228;
case 0x5fb22a:goto L5fb22a;
case 0x5fb22e:c.instructions+=1;goto B5fb22e;
case 0x5fb230:goto L5fb230;
case 0x5fb232:goto L5fb232;
case 0x5fb238:c.instructions+=2;goto B5fb238;
case 0x5fb23a:c.instructions+=1;goto B5fb23a;
case 0x5fb23c:goto L5fb23c;
case 0x5fb240:c.instructions+=2;goto B5fb240;
case 0x5fb242:c.instructions+=1;goto B5fb242;
case 0x5fb244:goto L5fb244;
case 0x5fb249:c.instructions+=1;goto B5fb249;
case 0x5fb24b:goto L5fb24b;
case 0x5fb24d:c.instructions+=1;goto B5fb24d;
case 0x5fb252:goto L5fb252;
case 0x5fb254:c.instructions+=1;goto B5fb254;
case 0x5fb256:goto L5fb256;
case 0x5fb25d:c.instructions+=3;goto B5fb25d;
case 0x5fb263:c.instructions+=2;goto B5fb263;
case 0x5fb267:c.instructions+=1;goto B5fb267;
case 0x5fb269:goto L5fb269;
case 0x5fb26f:c.instructions+=2;goto B5fb26f;
case 0x5fb271:c.instructions+=1;goto B5fb271;
case 0x5fb273:goto L5fb273;
case 0x5fb27a:c.instructions+=1;goto B5fb27a;
case 0x5fb27c:goto L5fb27c;
case 0x5fb27d:c.instructions+=1;goto B5fb27d;
case 0x5fb282:goto L5fb282;
case 0x5fb288:c.instructions+=4;goto B5fb288;
case 0x5fb28b:c.instructions+=3;goto B5fb28b;
case 0x5fb28d:c.instructions+=2;goto B5fb28d;
case 0x5fb290:c.instructions+=1;goto B5fb290;
case 0x5fb292:goto L5fb292;
case 0x5fb297:goto L5fb297;
case 0x5fb29d:c.instructions+=4;goto B5fb29d;
case 0x5fb2a3:c.instructions+=3;goto B5fb2a3;
case 0x5fb2a5:c.instructions+=2;goto B5fb2a5;
case 0x5fb2a8:c.instructions+=1;goto B5fb2a8;
case 0x5fb2aa:goto L5fb2aa;
case 0x5fb2af:goto L5fb2af;
case 0x5fb2b3:c.instructions+=4;goto B5fb2b3;
case 0x5fb2b5:c.instructions+=3;goto B5fb2b5;
case 0x5fb2bb:c.instructions+=2;goto B5fb2bb;
case 0x5fb2c1:c.instructions+=1;goto B5fb2c1;
case 0x5fb2c7:goto L5fb2c7;
case 0x5fb2cd:c.instructions+=2;goto B5fb2cd;
case 0x5fb2cf:c.instructions+=1;goto B5fb2cf;
case 0x5fb2d5:goto L5fb2d5;
case 0x5fb2da:c.instructions+=1;goto B5fb2da;
case 0x5fb2df:goto L5fb2df;
case 0x5fb2e5:c.instructions+=4;goto B5fb2e5;
case 0x5fb2e8:c.instructions+=3;goto B5fb2e8;
case 0x5fb2ea:c.instructions+=2;goto B5fb2ea;
case 0x5fb2ed:c.instructions+=1;goto B5fb2ed;
case 0x5fb2f3:goto L5fb2f3;
case 0x5fb2f5:goto L5fb2f5;
case 0x5fb2f7:goto L5fb2f7;
case 0x5fb2fc:c.instructions+=2;goto B5fb2fc;
case 0x5fb2fe:c.instructions+=1;goto B5fb2fe;
case 0x5fb300:goto L5fb300;
case 0x5fb304:c.instructions+=5;goto B5fb304;
case 0x5fb30a:c.instructions+=4;goto B5fb30a;
case 0x5fb310:c.instructions+=3;goto B5fb310;
case 0x5fb312:c.instructions+=2;goto B5fb312;
case 0x5fb315:c.instructions+=1;goto B5fb315;
case 0x5fb317:goto L5fb317;
case 0x5fb319:c.instructions+=1;goto B5fb319;
case 0x5fb31f:goto L5fb31f;
case 0x5fb322:c.instructions+=1;goto B5fb322;
case 0x5fb328:goto L5fb328;
case 0x5fb32e:c.instructions+=6;goto B5fb32e;
case 0x5fb330:c.instructions+=5;goto B5fb330;
case 0x5fb333:c.instructions+=4;goto B5fb333;
case 0x5fb335:c.instructions+=3;goto B5fb335;
case 0x5fb33b:c.instructions+=2;goto B5fb33b;
case 0x5fb340:c.instructions+=1;goto B5fb340;
case 0x5fb346:goto L5fb346;
case 0x5fb34b:c.instructions+=1;goto B5fb34b;
case 0x5fb34d:goto L5fb34d;
case 0x5fb353:c.instructions+=2;goto B5fb353;
case 0x5fb355:c.instructions+=1;goto B5fb355;
case 0x5fb35b:goto L5fb35b;
case 0x5fb35f:c.instructions+=2;goto B5fb35f;
case 0x5fb361:c.instructions+=1;goto B5fb361;
case 0x5fb363:goto L5fb363;
case 0x5fb369:c.instructions+=2;goto B5fb369;
case 0x5fb36b:c.instructions+=1;goto B5fb36b;
case 0x5fb371:goto L5fb371;
case 0x5fb373:c.instructions+=1;goto B5fb373;
case 0x5fb379:goto L5fb379;
case 0x5fb37d:c.instructions+=1;goto B5fb37d;
case 0x5fb383:goto L5fb383;
case 0x5fb389:c.instructions+=2;goto B5fb389;
case 0x5fb38b:c.instructions+=1;goto B5fb38b;
case 0x5fb38d:goto L5fb38d;
case 0x5fb38f:c.instructions+=1;goto B5fb38f;
case 0x5fb392:goto L5fb392;
case 0x5fb396:c.instructions+=1;goto B5fb396;
case 0x5fb398:goto L5fb398;
case 0x5fb39c:c.instructions+=4;goto B5fb39c;
case 0x5fb39e:c.instructions+=3;goto B5fb39e;
case 0x5fb39f:c.instructions+=2;goto B5fb39f;
case 0x5fb3a1:c.instructions+=1;goto B5fb3a1;
case 0x5fb3a6:goto L5fb3a6;
case 0x5fb3ac:c.instructions+=2;goto B5fb3ac;
case 0x5fb3ae:c.instructions+=1;goto B5fb3ae;
case 0x5fb3b0:goto L5fb3b0;
case 0x5fb3b6:c.instructions+=3;goto B5fb3b6;
case 0x5fb3b9:c.instructions+=2;goto B5fb3b9;
case 0x5fb3bb:c.instructions+=1;goto B5fb3bb;
case 0x5fb3c1:goto L5fb3c1;
case 0x5fb3c7:c.instructions+=2;goto B5fb3c7;
case 0x5fb3c9:c.instructions+=1;goto B5fb3c9;
case 0x5fb3cf:goto L5fb3cf;
case 0x5fb3d5:c.instructions+=5;goto B5fb3d5;
case 0x5fb3d7:c.instructions+=4;goto B5fb3d7;
case 0x5fb3da:c.instructions+=3;goto B5fb3da;
case 0x5fb3dc:c.instructions+=2;goto B5fb3dc;
case 0x5fb3e0:c.instructions+=1;goto B5fb3e0;
case 0x5fb3e6:goto L5fb3e6;
case 0x5fb3ea:c.instructions+=5;goto B5fb3ea;
case 0x5fb3f0:c.instructions+=4;goto B5fb3f0;
case 0x5fb3f6:c.instructions+=3;goto B5fb3f6;
case 0x5fb3f8:c.instructions+=2;goto B5fb3f8;
case 0x5fb3fb:c.instructions+=1;goto B5fb3fb;
case 0x5fb401:goto L5fb401;
case 0x5fb407:c.instructions+=1;goto B5fb407;
case 0x5fb40c:goto L5fb40c;
case 0x5fb40e:c.instructions+=1;goto B5fb40e;
case 0x5fb410:goto L5fb410;
case 0x5fb412:c.instructions+=1;goto B5fb412;
case 0x5fb417:goto L5fb417;
case 0x5fb41d:c.instructions+=3;goto B5fb41d;
case 0x5fb41f:c.instructions+=2;goto B5fb41f;
case 0x5fb422:c.instructions+=1;goto B5fb422;
case 0x5fb424:goto L5fb424;
case 0x5fb429:c.instructions+=1;goto B5fb429;
case 0x5fb42e:goto L5fb42e;
case 0x5fb434:c.instructions+=4;goto B5fb434;
case 0x5fb437:c.instructions+=3;goto B5fb437;
case 0x5fb439:c.instructions+=2;goto B5fb439;
case 0x5fb43c:c.instructions+=1;goto B5fb43c;
case 0x5fb442:goto L5fb442;
case 0x5fb444:goto L5fb444;
case 0x5fb448:c.instructions+=7;goto B5fb448;
case 0x5fb44a:c.instructions+=6;goto B5fb44a;
case 0x5fb44c:c.instructions+=5;goto B5fb44c;
case 0x5fb44e:c.instructions+=4;goto B5fb44e;
case 0x5fb44f:c.instructions+=3;goto B5fb44f;
case 0x5fb450:c.instructions+=2;goto B5fb450;
case 0x5fb455:c.instructions+=1;goto B5fb455;
case 0x5fb45a:goto L5fb45a;
case 0x5fb45c:goto L5fb45c;
case 0x5fb45e:c.instructions+=1;goto B5fb45e;
case 0x5fb464:goto L5fb464;
case 0x5fb468:c.instructions+=1;goto B5fb468;
case 0x5fb46d:goto L5fb46d;
case 0x5fb46f:c.instructions+=1;goto B5fb46f;
case 0x5fb471:goto L5fb471;
case 0x5fb474:c.instructions+=2;goto B5fb474;
case 0x5fb476:c.instructions+=1;goto B5fb476;
case 0x5fb478:goto L5fb478;
case 0x5fb47a:c.instructions+=1;goto B5fb47a;
case 0x5fb47c:goto L5fb47c;
case 0x5fb481:goto L5fb481;
case 0x5fb482:c.instructions+=2;goto B5fb482;
case 0x5fb484:c.instructions+=1;goto B5fb484;
case 0x5fb489:goto L5fb489;
case 0x5fb48b:c.instructions+=1;goto B5fb48b;
case 0x5fb48e:goto L5fb48e;
case 0x5fb490:c.instructions+=1;goto B5fb490;
case 0x5fb496:goto L5fb496;
case 0x5fb49c:c.instructions+=9;goto B5fb49c;
case 0x5fb4a2:c.instructions+=8;goto B5fb4a2;
case 0x5fb4a8:c.instructions+=7;goto B5fb4a8;
case 0x5fb4ae:c.instructions+=6;goto B5fb4ae;
case 0x5fb4b4:c.instructions+=5;goto B5fb4b4;
case 0x5fb4ba:c.instructions+=4;goto B5fb4ba;
case 0x5fb4be:c.instructions+=3;goto B5fb4be;
case 0x5fb4c2:c.instructions+=2;goto B5fb4c2;
case 0x5fb4c3:c.instructions+=1;goto B5fb4c3;
case 0x5fb4c8:goto L5fb4c8;
case 0x5fb4cc:c.instructions+=5;goto B5fb4cc;
case 0x5fb4d2:c.instructions+=4;goto B5fb4d2;
case 0x5fb4d5:c.instructions+=3;goto B5fb4d5;
case 0x5fb4d9:c.instructions+=2;goto B5fb4d9;
case 0x5fb4db:c.instructions+=1;goto B5fb4db;
case 0x5fb4e0:goto L5fb4e0;
case 0x5fb4e4:c.instructions+=6;goto B5fb4e4;
case 0x5fb4e8:c.instructions+=5;goto B5fb4e8;
case 0x5fb4ea:c.instructions+=4;goto B5fb4ea;
case 0x5fb4f0:c.instructions+=3;goto B5fb4f0;
case 0x5fb4f6:c.instructions+=2;goto B5fb4f6;
case 0x5fb4fa:c.instructions+=1;goto B5fb4fa;
case 0x5fb4fc:goto L5fb4fc;
case 0x5fb502:c.instructions+=2;goto B5fb502;
case 0x5fb504:c.instructions+=1;goto B5fb504;
case 0x5fb507:goto L5fb507;
case 0x5fb509:c.instructions+=1;goto B5fb509;
case 0x5fb50b:goto L5fb50b;
case 0x5fb50f:c.instructions+=4;goto B5fb50f;
case 0x5fb513:c.instructions+=3;goto B5fb513;
case 0x5fb515:c.instructions+=2;goto B5fb515;
case 0x5fb518:c.instructions+=1;goto B5fb518;
case 0x5fb51a:goto L5fb51a;
case 0x5fb51d:c.instructions+=2;goto B5fb51d;
case 0x5fb520:c.instructions+=1;goto B5fb520;
case 0x5fb522:goto L5fb522;
case 0x5fb528:c.instructions+=2;goto B5fb528;
case 0x5fb52a:c.instructions+=1;goto B5fb52a;
case 0x5fb52c:goto L5fb52c;
case 0x5fb52e:c.instructions+=2;goto B5fb52e;
case 0x5fb52f:c.instructions+=1;goto B5fb52f;
case 0x5fb532:goto L5fb532;
case 0x5fb537:c.instructions+=11;goto B5fb537;
case 0x5fb53d:c.instructions+=10;goto B5fb53d;
case 0x5fb543:c.instructions+=9;goto B5fb543;
case 0x5fb544:c.instructions+=8;goto B5fb544;
case 0x5fb54a:c.instructions+=7;goto B5fb54a;
case 0x5fb550:c.instructions+=6;goto B5fb550;
case 0x5fb551:c.instructions+=5;goto B5fb551;
case 0x5fb552:c.instructions+=4;goto B5fb552;
case 0x5fb558:c.instructions+=3;goto B5fb558;
case 0x5fb559:c.instructions+=2;goto B5fb559;
case 0x5fb55c:c.instructions+=1;goto B5fb55c;
case 0x5fb55d:goto L5fb55d;
case 0x5fb563:c.instructions+=2;goto B5fb563;
case 0x5fb565:c.instructions+=1;goto B5fb565;
case 0x5fb567:goto L5fb567;
case 0x5fb56c:c.instructions+=1;goto B5fb56c;
case 0x5fb56e:goto L5fb56e;
case 0x5fb570:c.instructions+=1;goto B5fb570;
case 0x5fb572:goto L5fb572;
case 0x5fb576:c.instructions+=2;goto B5fb576;
case 0x5fb578:c.instructions+=1;goto B5fb578;
case 0x5fb57a:goto L5fb57a;
case 0x5fb57f:c.instructions+=7;goto B5fb57f;
case 0x5fb581:c.instructions+=6;goto B5fb581;
case 0x5fb588:c.instructions+=5;goto B5fb588;
case 0x5fb58d:c.instructions+=4;goto B5fb58d;
case 0x5fb58e:c.instructions+=3;goto B5fb58e;
case 0x5fb591:c.instructions+=2;goto B5fb591;
case 0x5fb596:c.instructions+=1;goto B5fb596;
case 0x5fb598:goto L5fb598;
case 0x5fb5a2:goto L5fb5a2;
case 0x5fb5a4:c.instructions+=3;goto B5fb5a4;
case 0x5fb5a6:c.instructions+=2;goto B5fb5a6;
case 0x5fb5a8:c.instructions+=1;goto B5fb5a8;
case 0x5fb5ad:goto L5fb5ad;
case 0x5fb5b4:goto L5fb5b4;
case 0x5fb5b5:c.instructions+=2;goto B5fb5b5;
case 0x5fb5b6:c.instructions+=1;goto B5fb5b6;
case 0x5fb5b7:goto L5fb5b7;
case 0x5fb5bd:c.instructions+=4;goto B5fb5bd;
case 0x5fb5c3:c.instructions+=3;goto B5fb5c3;
case 0x5fb5c4:c.instructions+=2;goto B5fb5c4;
case 0x5fb5c7:c.instructions+=1;goto B5fb5c7;
case 0x5fb5c8:goto L5fb5c8;
case 0x5fb5ce:c.instructions+=2;goto B5fb5ce;
case 0x5fb5d0:c.instructions+=1;goto B5fb5d0;
case 0x5fb5d2:goto L5fb5d2;
case 0x5fb5d6:c.instructions+=1;goto B5fb5d6;
case 0x5fb5d8:goto L5fb5d8;
case 0x5fb5da:c.instructions+=2;goto B5fb5da;
case 0x5fb5dc:c.instructions+=1;goto B5fb5dc;
case 0x5fb5e1:goto L5fb5e1;
case 0x5fb5e2:c.instructions+=2;goto B5fb5e2;
case 0x5fb5e5:c.instructions+=1;goto B5fb5e5;
case 0x5fb5f0:goto L5fb5f0;
case 0x5fb5f1:c.instructions+=18;goto B5fb5f1;
case 0x5fb5f3:c.instructions+=17;goto B5fb5f3;
case 0x5fb5f6:c.instructions+=16;goto B5fb5f6;
case 0x5fb5f8:c.instructions+=15;goto B5fb5f8;
case 0x5fb5fd:c.instructions+=14;goto B5fb5fd;
case 0x5fb603:c.instructions+=13;goto B5fb603;
case 0x5fb604:c.instructions+=12;goto B5fb604;
case 0x5fb60b:c.instructions+=11;goto B5fb60b;
case 0x5fb60e:c.instructions+=10;goto B5fb60e;
case 0x5fb60f:c.instructions+=9;goto B5fb60f;
case 0x5fb610:c.instructions+=8;goto B5fb610;
case 0x5fb612:c.instructions+=7;goto B5fb612;
case 0x5fb616:c.instructions+=6;goto B5fb616;
case 0x5fb617:c.instructions+=5;goto B5fb617;
case 0x5fb618:c.instructions+=4;goto B5fb618;
case 0x5fb61c:c.instructions+=3;goto B5fb61c;
case 0x5fb621:c.instructions+=2;goto B5fb621;
case 0x5fb622:c.instructions+=1;goto B5fb622;
case 0x5fb627:goto L5fb627;
case 0x5fb62a:c.instructions+=6;goto B5fb62a;
case 0x5fb62d:c.instructions+=5;goto B5fb62d;
case 0x5fb631:c.instructions+=4;goto B5fb631;
case 0x5fb632:c.instructions+=3;goto B5fb632;
case 0x5fb634:c.instructions+=2;goto B5fb634;
case 0x5fb636:c.instructions+=1;goto B5fb636;
case 0x5fb63b:goto L5fb63b;
case 0x5fb63d:c.instructions+=6;goto B5fb63d;
case 0x5fb63f:c.instructions+=5;goto B5fb63f;
case 0x5fb641:c.instructions+=4;goto B5fb641;
case 0x5fb647:c.instructions+=3;goto B5fb647;
case 0x5fb648:c.instructions+=2;goto B5fb648;
case 0x5fb64a:c.instructions+=1;goto B5fb64a;
case 0x5fb64f:goto L5fb64f;
case 0x5fb651:c.instructions+=6;goto B5fb651;
case 0x5fb653:c.instructions+=5;goto B5fb653;
case 0x5fb655:c.instructions+=4;goto B5fb655;
case 0x5fb65b:c.instructions+=3;goto B5fb65b;
case 0x5fb65c:c.instructions+=2;goto B5fb65c;
case 0x5fb65e:c.instructions+=1;goto B5fb65e;
case 0x5fb663:goto L5fb663;
case 0x5fb669:c.instructions+=3;goto B5fb669;
case 0x5fb66a:c.instructions+=2;goto B5fb66a;
case 0x5fb66c:c.instructions+=1;goto B5fb66c;
case 0x5fb671:goto L5fb671;
case 0x5fb677:c.instructions+=3;goto B5fb677;
case 0x5fb678:c.instructions+=2;goto B5fb678;
case 0x5fb67a:c.instructions+=1;goto B5fb67a;
case 0x5fb67f:goto L5fb67f;
case 0x5fb685:c.instructions+=3;goto B5fb685;
case 0x5fb686:c.instructions+=2;goto B5fb686;
case 0x5fb688:c.instructions+=1;goto B5fb688;
case 0x5fb68d:goto L5fb68d;
case 0x5fb693:c.instructions+=3;goto B5fb693;
case 0x5fb694:c.instructions+=2;goto B5fb694;
case 0x5fb696:c.instructions+=1;goto B5fb696;
case 0x5fb69b:goto L5fb69b;
case 0x5fb69d:c.instructions+=6;goto B5fb69d;
case 0x5fb69f:c.instructions+=5;goto B5fb69f;
case 0x5fb6a1:c.instructions+=4;goto B5fb6a1;
case 0x5fb6a7:c.instructions+=3;goto B5fb6a7;
case 0x5fb6a8:c.instructions+=2;goto B5fb6a8;
case 0x5fb6aa:c.instructions+=1;goto B5fb6aa;
case 0x5fb6af:goto L5fb6af;
case 0x5fb6b1:c.instructions+=6;goto B5fb6b1;
case 0x5fb6b3:c.instructions+=5;goto B5fb6b3;
case 0x5fb6b5:c.instructions+=4;goto B5fb6b5;
case 0x5fb6bb:c.instructions+=3;goto B5fb6bb;
case 0x5fb6bc:c.instructions+=2;goto B5fb6bc;
case 0x5fb6be:c.instructions+=1;goto B5fb6be;
case 0x5fb6c3:goto L5fb6c3;
case 0x5fb6c5:c.instructions+=6;goto B5fb6c5;
case 0x5fb6c7:c.instructions+=5;goto B5fb6c7;
case 0x5fb6c9:c.instructions+=4;goto B5fb6c9;
case 0x5fb6cf:c.instructions+=3;goto B5fb6cf;
case 0x5fb6d0:c.instructions+=2;goto B5fb6d0;
case 0x5fb6d2:c.instructions+=1;goto B5fb6d2;
case 0x5fb6d7:goto L5fb6d7;
case 0x5fb6d9:c.instructions+=6;goto B5fb6d9;
case 0x5fb6db:c.instructions+=5;goto B5fb6db;
case 0x5fb6dd:c.instructions+=4;goto B5fb6dd;
case 0x5fb6e3:c.instructions+=3;goto B5fb6e3;
case 0x5fb6e4:c.instructions+=2;goto B5fb6e4;
case 0x5fb6e6:c.instructions+=1;goto B5fb6e6;
case 0x5fb6eb:goto L5fb6eb;
case 0x5fb6ed:c.instructions+=6;goto B5fb6ed;
case 0x5fb6ef:c.instructions+=5;goto B5fb6ef;
case 0x5fb6f5:c.instructions+=4;goto B5fb6f5;
case 0x5fb6f7:c.instructions+=3;goto B5fb6f7;
case 0x5fb6f8:c.instructions+=2;goto B5fb6f8;
case 0x5fb6fa:c.instructions+=1;goto B5fb6fa;
case 0x5fb6ff:goto L5fb6ff;
case 0x5fb701:c.instructions+=6;goto B5fb701;
case 0x5fb703:c.instructions+=5;goto B5fb703;
case 0x5fb705:c.instructions+=4;goto B5fb705;
case 0x5fb70b:c.instructions+=3;goto B5fb70b;
case 0x5fb70c:c.instructions+=2;goto B5fb70c;
case 0x5fb70e:c.instructions+=1;goto B5fb70e;
case 0x5fb713:goto L5fb713;
case 0x5fb719:c.instructions+=3;goto B5fb719;
case 0x5fb71a:c.instructions+=2;goto B5fb71a;
case 0x5fb71c:c.instructions+=1;goto B5fb71c;
case 0x5fb721:goto L5fb721;
case 0x5fb723:c.instructions+=6;goto B5fb723;
case 0x5fb725:c.instructions+=5;goto B5fb725;
case 0x5fb727:c.instructions+=4;goto B5fb727;
case 0x5fb72d:c.instructions+=3;goto B5fb72d;
case 0x5fb72e:c.instructions+=2;goto B5fb72e;
case 0x5fb730:c.instructions+=1;goto B5fb730;
case 0x5fb735:goto L5fb735;
case 0x5fb73b:c.instructions+=3;goto B5fb73b;
case 0x5fb73c:c.instructions+=2;goto B5fb73c;
case 0x5fb73e:c.instructions+=1;goto B5fb73e;
case 0x5fb743:goto L5fb743;
case 0x5fb749:c.instructions+=3;goto B5fb749;
case 0x5fb74a:c.instructions+=2;goto B5fb74a;
case 0x5fb74c:c.instructions+=1;goto B5fb74c;
case 0x5fb751:goto L5fb751;
case 0x5fb753:c.instructions+=6;goto B5fb753;
case 0x5fb755:c.instructions+=5;goto B5fb755;
case 0x5fb757:c.instructions+=4;goto B5fb757;
case 0x5fb75d:c.instructions+=3;goto B5fb75d;
case 0x5fb75e:c.instructions+=2;goto B5fb75e;
case 0x5fb760:c.instructions+=1;goto B5fb760;
case 0x5fb765:goto L5fb765;
case 0x5fb76b:c.instructions+=3;goto B5fb76b;
case 0x5fb76c:c.instructions+=2;goto B5fb76c;
case 0x5fb76e:c.instructions+=1;goto B5fb76e;
case 0x5fb773:goto L5fb773;
case 0x5fb779:c.instructions+=3;goto B5fb779;
case 0x5fb77a:c.instructions+=2;goto B5fb77a;
case 0x5fb77c:c.instructions+=1;goto B5fb77c;
case 0x5fb781:goto L5fb781;
case 0x5fb783:c.instructions+=6;goto B5fb783;
case 0x5fb785:c.instructions+=5;goto B5fb785;
case 0x5fb787:c.instructions+=4;goto B5fb787;
case 0x5fb78d:c.instructions+=3;goto B5fb78d;
case 0x5fb78e:c.instructions+=2;goto B5fb78e;
case 0x5fb790:c.instructions+=1;goto B5fb790;
case 0x5fb795:goto L5fb795;
case 0x5fb79b:c.instructions+=3;goto B5fb79b;
case 0x5fb79c:c.instructions+=2;goto B5fb79c;
case 0x5fb79e:c.instructions+=1;goto B5fb79e;
case 0x5fb7a3:goto L5fb7a3;
case 0x5fb7a9:c.instructions+=2;goto B5fb7a9;
case 0x5fb7ab:c.instructions+=1;goto B5fb7ab;
case 0x5fb7ad:goto L5fb7ad;
case 0x5fb7ae:c.instructions+=1;goto B5fb7ae;
case 0x5fb7b3:goto L5fb7b3;
case 0x5fb7b6:c.instructions+=5;goto B5fb7b6;
case 0x5fb7b9:c.instructions+=4;goto B5fb7b9;
case 0x5fb7bc:c.instructions+=3;goto B5fb7bc;
case 0x5fb7bd:c.instructions+=2;goto B5fb7bd;
case 0x5fb7bf:c.instructions+=1;goto B5fb7bf;
case 0x5fb7c4:goto L5fb7c4;
case 0x5fb7c7:c.instructions+=2;goto B5fb7c7;
case 0x5fb7c9:c.instructions+=1;goto B5fb7c9;
case 0x5fb7cb:goto L5fb7cb;
case 0x5fb7ce:c.instructions+=3;goto B5fb7ce;
case 0x5fb7d1:c.instructions+=2;goto B5fb7d1;
case 0x5fb7d3:c.instructions+=1;goto B5fb7d3;
case 0x5fb7d5:goto L5fb7d5;
case 0x5fb7d8:c.instructions+=3;goto B5fb7d8;
case 0x5fb7d9:c.instructions+=2;goto B5fb7d9;
case 0x5fb7db:c.instructions+=1;goto B5fb7db;
case 0x5fb7e0:goto L5fb7e0;
case 0x5fb7e3:c.instructions+=2;goto B5fb7e3;
case 0x5fb7e5:c.instructions+=1;goto B5fb7e5;
case 0x5fb7e7:goto L5fb7e7;
case 0x5fb7ea:c.instructions+=5;goto B5fb7ea;
case 0x5fb7ec:c.instructions+=4;goto B5fb7ec;
case 0x5fb7f2:c.instructions+=3;goto B5fb7f2;
case 0x5fb7f8:c.instructions+=2;goto B5fb7f8;
case 0x5fb7fa:c.instructions+=1;goto B5fb7fa;
case 0x5fb7fd:goto L5fb7fd;
case 0x5fb7ff:c.instructions+=6;goto B5fb7ff;
case 0x5fb801:c.instructions+=5;goto B5fb801;
case 0x5fb803:c.instructions+=4;goto B5fb803;
case 0x5fb809:c.instructions+=3;goto B5fb809;
case 0x5fb80a:c.instructions+=2;goto B5fb80a;
case 0x5fb80c:c.instructions+=1;goto B5fb80c;
case 0x5fb811:goto L5fb811;
case 0x5fb814:c.instructions+=10;goto B5fb814;
case 0x5fb817:c.instructions+=9;goto B5fb817;
case 0x5fb819:c.instructions+=8;goto B5fb819;
case 0x5fb81b:c.instructions+=7;goto B5fb81b;
case 0x5fb81d:c.instructions+=6;goto B5fb81d;
case 0x5fb821:c.instructions+=5;goto B5fb821;
case 0x5fb822:c.instructions+=4;goto B5fb822;
case 0x5fb824:c.instructions+=3;goto B5fb824;
case 0x5fb828:c.instructions+=2;goto B5fb828;
case 0x5fb82c:c.instructions+=1;goto B5fb82c;
case 0x5fb831:goto L5fb831;
case 0x5fb833:c.instructions+=6;goto B5fb833;
case 0x5fb835:c.instructions+=5;goto B5fb835;
case 0x5fb837:c.instructions+=4;goto B5fb837;
case 0x5fb83b:c.instructions+=3;goto B5fb83b;
case 0x5fb83c:c.instructions+=2;goto B5fb83c;
case 0x5fb83e:c.instructions+=1;goto B5fb83e;
case 0x5fb843:goto L5fb843;
case 0x5fb846:c.instructions+=2;goto B5fb846;
case 0x5fb848:c.instructions+=1;goto B5fb848;
case 0x5fb84e:goto L5fb84e;
case 0x5fb851:c.instructions+=5;goto B5fb851;
case 0x5fb853:c.instructions+=4;goto B5fb853;
case 0x5fb855:c.instructions+=3;goto B5fb855;
case 0x5fb858:c.instructions+=2;goto B5fb858;
case 0x5fb85b:c.instructions+=1;goto B5fb85b;
case 0x5fb860:goto L5fb860;
case 0x5fb863:c.instructions+=4;goto B5fb863;
case 0x5fb867:c.instructions+=3;goto B5fb867;
case 0x5fb869:c.instructions+=2;goto B5fb869;
case 0x5fb871:c.instructions+=1;goto B5fb871;
case 0x5fb873:goto L5fb873;
case 0x5fb874:c.instructions+=2;goto B5fb874;
case 0x5fb876:c.instructions+=1;goto B5fb876;
case 0x5fb87b:goto L5fb87b;
case 0x5fb87d:goto L5fb87d;
case 0x5fb87f:goto L5fb87f;
case 0x5fb881:c.instructions+=3;goto B5fb881;
case 0x5fb889:c.instructions+=2;goto B5fb889;
case 0x5fb88c:c.instructions+=1;goto B5fb88c;
case 0x5fb88e:goto L5fb88e;
case 0x5fb890:c.instructions+=3;goto B5fb890;
case 0x5fb892:c.instructions+=2;goto B5fb892;
case 0x5fb894:c.instructions+=1;goto B5fb894;
case 0x5fb896:goto L5fb896;
case 0x5fb899:c.instructions+=16;goto B5fb899;
case 0x5fb89c:c.instructions+=15;goto B5fb89c;
case 0x5fb89f:c.instructions+=14;goto B5fb89f;
case 0x5fb8a2:c.instructions+=13;goto B5fb8a2;
case 0x5fb8a5:c.instructions+=12;goto B5fb8a5;
case 0x5fb8a9:c.instructions+=11;goto B5fb8a9;
case 0x5fb8ac:c.instructions+=10;goto B5fb8ac;
case 0x5fb8b3:c.instructions+=9;goto B5fb8b3;
case 0x5fb8b7:c.instructions+=8;goto B5fb8b7;
case 0x5fb8ba:c.instructions+=7;goto B5fb8ba;
case 0x5fb8c1:c.instructions+=6;goto B5fb8c1;
case 0x5fb8c5:c.instructions+=5;goto B5fb8c5;
case 0x5fb8c8:c.instructions+=4;goto B5fb8c8;
case 0x5fb8cf:c.instructions+=3;goto B5fb8cf;
case 0x5fb8d1:c.instructions+=2;goto B5fb8d1;
case 0x5fb8d3:c.instructions+=1;goto B5fb8d3;
case 0x5fb8d8:goto L5fb8d8;
case 0x5fb8dc:c.instructions+=3;goto B5fb8dc;
case 0x5fb8dd:c.instructions+=2;goto B5fb8dd;
case 0x5fb8df:c.instructions+=1;goto B5fb8df;
case 0x5fb8e4:goto L5fb8e4;
case 0x5fb8e8:c.instructions+=3;goto B5fb8e8;
case 0x5fb8e9:c.instructions+=2;goto B5fb8e9;
case 0x5fb8eb:c.instructions+=1;goto B5fb8eb;
case 0x5fb8f0:goto L5fb8f0;
case 0x5fb8f3:c.instructions+=3;goto B5fb8f3;
case 0x5fb8f5:c.instructions+=2;goto B5fb8f5;
case 0x5fb8f6:c.instructions+=1;goto B5fb8f6;
case 0x5fb8f9:goto L5fb8f9;
case 0x5fb8fc:c.instructions+=3;goto B5fb8fc;
case 0x5fb8fe:c.instructions+=2;goto B5fb8fe;
case 0x5fb8ff:c.instructions+=1;goto B5fb8ff;
case 0x5fb902:goto L5fb902;
case 0x5fb904:c.instructions+=6;goto B5fb904;
case 0x5fb906:c.instructions+=5;goto B5fb906;
case 0x5fb908:c.instructions+=4;goto B5fb908;
case 0x5fb90b:c.instructions+=3;goto B5fb90b;
case 0x5fb90c:c.instructions+=2;goto B5fb90c;
case 0x5fb90e:c.instructions+=1;goto B5fb90e;
case 0x5fb913:goto L5fb913;
case 0x5fb914:c.instructions+=2;goto B5fb914;
case 0x5fb917:c.instructions+=1;goto B5fb917;
case 0x5fb91c:goto L5fb91c;
case 0x5fb91f:c.instructions+=2;goto B5fb91f;
case 0x5fb921:c.instructions+=1;goto B5fb921;
case 0x5fb923:goto L5fb923;
case 0x5fb926:c.instructions+=3;goto B5fb926;
case 0x5fb928:c.instructions+=2;goto B5fb928;
case 0x5fb92c:c.instructions+=1;goto B5fb92c;
case 0x5fb92e:goto L5fb92e;
case 0x5fb930:c.instructions+=2;goto B5fb930;
case 0x5fb932:c.instructions+=1;goto B5fb932;
case 0x5fb934:goto L5fb934;
case 0x5fb939:c.instructions+=2;goto B5fb939;
case 0x5fb93a:c.instructions+=1;goto B5fb93a;
case 0x5fb93f:goto L5fb93f;
case 0x5fb942:c.instructions+=4;goto B5fb942;
case 0x5fb946:c.instructions+=3;goto B5fb946;
case 0x5fb948:c.instructions+=2;goto B5fb948;
case 0x5fb950:c.instructions+=1;goto B5fb950;
case 0x5fb952:goto L5fb952;
case 0x5fb953:c.instructions+=3;goto B5fb953;
case 0x5fb954:c.instructions+=2;goto B5fb954;
case 0x5fb956:c.instructions+=1;goto B5fb956;
case 0x5fb95b:goto L5fb95b;
case 0x5fb95d:goto L5fb95d;
case 0x5fb95f:goto L5fb95f;
case 0x5fb967:c.instructions+=1;goto B5fb967;
case 0x5fb96a:goto L5fb96a;
case 0x5fb96d:c.instructions+=3;goto B5fb96d;
case 0x5fb96f:c.instructions+=2;goto B5fb96f;
case 0x5fb970:c.instructions+=1;goto B5fb970;
case 0x5fb973:goto L5fb973;
case 0x5fb979:c.instructions+=3;goto B5fb979;
case 0x5fb97a:c.instructions+=2;goto B5fb97a;
case 0x5fb97c:c.instructions+=1;goto B5fb97c;
case 0x5fb981:goto L5fb981;
case 0x5fb983:c.instructions+=6;goto B5fb983;
case 0x5fb985:c.instructions+=5;goto B5fb985;
case 0x5fb987:c.instructions+=4;goto B5fb987;
case 0x5fb98d:c.instructions+=3;goto B5fb98d;
case 0x5fb98e:c.instructions+=2;goto B5fb98e;
case 0x5fb990:c.instructions+=1;goto B5fb990;
case 0x5fb995:goto L5fb995;
case 0x5fb997:c.instructions+=6;goto B5fb997;
case 0x5fb999:c.instructions+=5;goto B5fb999;
case 0x5fb99b:c.instructions+=4;goto B5fb99b;
case 0x5fb9a1:c.instructions+=3;goto B5fb9a1;
case 0x5fb9a2:c.instructions+=2;goto B5fb9a2;
case 0x5fb9a4:c.instructions+=1;goto B5fb9a4;
case 0x5fb9a9:goto L5fb9a9;
case 0x5fb9af:c.instructions+=3;goto B5fb9af;
case 0x5fb9b0:c.instructions+=2;goto B5fb9b0;
case 0x5fb9b2:c.instructions+=1;goto B5fb9b2;
case 0x5fb9b7:goto L5fb9b7;
case 0x5fb9bd:c.instructions+=3;goto B5fb9bd;
case 0x5fb9be:c.instructions+=2;goto B5fb9be;
case 0x5fb9c0:c.instructions+=1;goto B5fb9c0;
case 0x5fb9c5:goto L5fb9c5;
case 0x5fb9c7:c.instructions+=6;goto B5fb9c7;
case 0x5fb9c9:c.instructions+=5;goto B5fb9c9;
case 0x5fb9cb:c.instructions+=4;goto B5fb9cb;
case 0x5fb9d1:c.instructions+=3;goto B5fb9d1;
case 0x5fb9d2:c.instructions+=2;goto B5fb9d2;
case 0x5fb9d4:c.instructions+=1;goto B5fb9d4;
case 0x5fb9d9:goto L5fb9d9;
case 0x5fb9df:c.instructions+=3;goto B5fb9df;
case 0x5fb9e0:c.instructions+=2;goto B5fb9e0;
case 0x5fb9e2:c.instructions+=1;goto B5fb9e2;
case 0x5fb9e7:goto L5fb9e7;
case 0x5fb9ed:c.instructions+=3;goto B5fb9ed;
case 0x5fb9ee:c.instructions+=2;goto B5fb9ee;
case 0x5fb9f0:c.instructions+=1;goto B5fb9f0;
case 0x5fb9f5:goto L5fb9f5;
case 0x5fb9fb:c.instructions+=3;goto B5fb9fb;
case 0x5fb9fc:c.instructions+=2;goto B5fb9fc;
case 0x5fb9fe:c.instructions+=1;goto B5fb9fe;
case 0x5fba03:goto L5fba03;
case 0x5fba04:c.instructions+=2;goto B5fba04;
case 0x5fba0a:c.instructions+=1;goto B5fba0a;
case 0x5fba0f:goto L5fba0f;
case 0x5fba15:c.instructions+=3;goto B5fba15;
case 0x5fba16:c.instructions+=2;goto B5fba16;
case 0x5fba17:c.instructions+=1;goto B5fba17;
case 0x5fba1c:goto L5fba1c;
case 0x5fba1f:c.instructions+=3;goto B5fba1f;
case 0x5fba22:c.instructions+=2;goto B5fba22;
case 0x5fba24:c.instructions+=1;goto B5fba24;
case 0x5fba26:goto L5fba26;
case 0x5fba2c:c.instructions+=9;goto B5fba2c;
case 0x5fba2d:c.instructions+=8;goto B5fba2d;
case 0x5fba33:c.instructions+=7;goto B5fba33;
case 0x5fba34:c.instructions+=6;goto B5fba34;
case 0x5fba36:c.instructions+=5;goto B5fba36;
case 0x5fba39:c.instructions+=4;goto B5fba39;
case 0x5fba3a:c.instructions+=3;goto B5fba3a;
case 0x5fba3d:c.instructions+=2;goto B5fba3d;
case 0x5fba3e:c.instructions+=1;goto B5fba3e;
case 0x5fba43:goto L5fba43;
case 0x5fba45:c.instructions+=4;goto B5fba45;
case 0x5fba48:c.instructions+=3;goto B5fba48;
case 0x5fba4b:c.instructions+=2;goto B5fba4b;
case 0x5fba4d:c.instructions+=1;goto B5fba4d;
case 0x5fba4f:goto L5fba4f;
case 0x5fba53:c.instructions+=3;goto B5fba53;
case 0x5fba54:c.instructions+=2;goto B5fba54;
case 0x5fba56:c.instructions+=1;goto B5fba56;
case 0x5fba5b:goto L5fba5b;
case 0x5fba60:c.instructions+=6;goto B5fba60;
case 0x5fba62:c.instructions+=5;goto B5fba62;
case 0x5fba65:c.instructions+=4;goto B5fba65;
case 0x5fba68:c.instructions+=3;goto B5fba68;
case 0x5fba6e:c.instructions+=2;goto B5fba6e;
case 0x5fba74:c.instructions+=1;goto B5fba74;
case 0x5fba76:goto L5fba76;
case 0x5fba7c:c.instructions+=8;goto B5fba7c;
case 0x5fba82:c.instructions+=7;goto B5fba82;
case 0x5fba85:c.instructions+=6;goto B5fba85;
case 0x5fba89:c.instructions+=5;goto B5fba89;
case 0x5fba8b:c.instructions+=4;goto B5fba8b;
case 0x5fba8c:c.instructions+=3;goto B5fba8c;
case 0x5fba8e:c.instructions+=2;goto B5fba8e;
case 0x5fba92:c.instructions+=1;goto B5fba92;
case 0x5fba97:goto L5fba97;
case 0x5fba99:c.instructions+=7;goto B5fba99;
case 0x5fba9a:c.instructions+=6;goto B5fba9a;
case 0x5fba9c:c.instructions+=5;goto B5fba9c;
case 0x5fba9e:c.instructions+=4;goto B5fba9e;
case 0x5fbaa4:c.instructions+=3;goto B5fbaa4;
case 0x5fbaa5:c.instructions+=2;goto B5fbaa5;
case 0x5fbaa7:c.instructions+=1;goto B5fbaa7;
case 0x5fbaac:goto L5fbaac;
case 0x5fbaad:c.instructions+=6;goto B5fbaad;
case 0x5fbaaf:c.instructions+=5;goto B5fbaaf;
case 0x5fbab1:c.instructions+=4;goto B5fbab1;
case 0x5fbab7:c.instructions+=3;goto B5fbab7;
case 0x5fbab8:c.instructions+=2;goto B5fbab8;
case 0x5fbaba:c.instructions+=1;goto B5fbaba;
case 0x5fbabf:goto L5fbabf;
case 0x5fbac5:c.instructions+=3;goto B5fbac5;
case 0x5fbac6:c.instructions+=2;goto B5fbac6;
case 0x5fbac8:c.instructions+=1;goto B5fbac8;
case 0x5fbacd:goto L5fbacd;
case 0x5fbad3:c.instructions+=3;goto B5fbad3;
case 0x5fbad4:c.instructions+=2;goto B5fbad4;
case 0x5fbad6:c.instructions+=1;goto B5fbad6;
case 0x5fbadb:goto L5fbadb;
case 0x5fbadc:c.instructions+=6;goto B5fbadc;
case 0x5fbade:c.instructions+=5;goto B5fbade;
case 0x5fbae0:c.instructions+=4;goto B5fbae0;
case 0x5fbae6:c.instructions+=3;goto B5fbae6;
case 0x5fbae7:c.instructions+=2;goto B5fbae7;
case 0x5fbae9:c.instructions+=1;goto B5fbae9;
case 0x5fbaee:goto L5fbaee;
case 0x5fbaef:c.instructions+=6;goto B5fbaef;
case 0x5fbaf1:c.instructions+=5;goto B5fbaf1;
case 0x5fbaf3:c.instructions+=4;goto B5fbaf3;
case 0x5fbaf9:c.instructions+=3;goto B5fbaf9;
case 0x5fbafa:c.instructions+=2;goto B5fbafa;
case 0x5fbafc:c.instructions+=1;goto B5fbafc;
case 0x5fbb01:goto L5fbb01;
case 0x5fbb07:c.instructions+=3;goto B5fbb07;
case 0x5fbb08:c.instructions+=2;goto B5fbb08;
case 0x5fbb0a:c.instructions+=1;goto B5fbb0a;
case 0x5fbb0f:goto L5fbb0f;
case 0x5fbb12:c.instructions+=2;goto B5fbb12;
case 0x5fbb15:c.instructions+=1;goto B5fbb15;
case 0x5fbb17:goto L5fbb17;
case 0x5fbb1d:c.instructions+=9;goto B5fbb1d;
case 0x5fbb23:c.instructions+=8;goto B5fbb23;
case 0x5fbb29:c.instructions+=7;goto B5fbb29;
case 0x5fbb2f:c.instructions+=6;goto B5fbb2f;
case 0x5fbb35:c.instructions+=5;goto B5fbb35;
case 0x5fbb3b:c.instructions+=4;goto B5fbb3b;
case 0x5fbb41:c.instructions+=3;goto B5fbb41;
case 0x5fbb47:c.instructions+=2;goto B5fbb47;
case 0x5fbb4d:c.instructions+=1;goto B5fbb4d;
case 0x5fbb53:goto L5fbb53;
case 0x5fbb54:c.instructions+=6;goto B5fbb54;
case 0x5fbb56:c.instructions+=5;goto B5fbb56;
case 0x5fbb58:c.instructions+=4;goto B5fbb58;
case 0x5fbb5e:c.instructions+=3;goto B5fbb5e;
case 0x5fbb5f:c.instructions+=2;goto B5fbb5f;
case 0x5fbb61:c.instructions+=1;goto B5fbb61;
case 0x5fbb66:goto L5fbb66;
case 0x5fbb6c:c.instructions+=3;goto B5fbb6c;
case 0x5fbb6d:c.instructions+=2;goto B5fbb6d;
case 0x5fbb6f:c.instructions+=1;goto B5fbb6f;
case 0x5fbb74:goto L5fbb74;
case 0x5fbb7a:c.instructions+=3;goto B5fbb7a;
case 0x5fbb7b:c.instructions+=2;goto B5fbb7b;
case 0x5fbb7d:c.instructions+=1;goto B5fbb7d;
case 0x5fbb82:goto L5fbb82;
case 0x5fbb83:c.instructions+=6;goto B5fbb83;
case 0x5fbb85:c.instructions+=5;goto B5fbb85;
case 0x5fbb87:c.instructions+=4;goto B5fbb87;
case 0x5fbb8d:c.instructions+=3;goto B5fbb8d;
case 0x5fbb8e:c.instructions+=2;goto B5fbb8e;
case 0x5fbb90:c.instructions+=1;goto B5fbb90;
case 0x5fbb95:goto L5fbb95;
case 0x5fbb96:c.instructions+=6;goto B5fbb96;
case 0x5fbb98:c.instructions+=5;goto B5fbb98;
case 0x5fbb9a:c.instructions+=4;goto B5fbb9a;
case 0x5fbba0:c.instructions+=3;goto B5fbba0;
case 0x5fbba1:c.instructions+=2;goto B5fbba1;
case 0x5fbba3:c.instructions+=1;goto B5fbba3;
case 0x5fbba8:goto L5fbba8;
case 0x5fbbae:c.instructions+=3;goto B5fbbae;
case 0x5fbbaf:c.instructions+=2;goto B5fbbaf;
case 0x5fbbb1:c.instructions+=1;goto B5fbbb1;
case 0x5fbbb6:goto L5fbbb6;
case 0x5fbbbc:c.instructions+=3;goto B5fbbbc;
case 0x5fbbbd:c.instructions+=2;goto B5fbbbd;
case 0x5fbbbf:c.instructions+=1;goto B5fbbbf;
case 0x5fbbc4:goto L5fbbc4;
case 0x5fbbc6:c.instructions+=1;goto B5fbbc6;
case 0x5fbbcb:goto L5fbbcb;
case 0x5fbbcf:c.instructions+=7;goto B5fbbcf;
case 0x5fbbd0:c.instructions+=6;goto B5fbbd0;
case 0x5fbbd1:c.instructions+=5;goto B5fbbd1;
case 0x5fbbd8:c.instructions+=4;goto B5fbbd8;
case 0x5fbbd9:c.instructions+=3;goto B5fbbd9;
case 0x5fbbdb:c.instructions+=2;goto B5fbbdb;
case 0x5fbbdc:c.instructions+=1;goto B5fbbdc;
case 0x5fbbe0:goto L5fbbe0;
case 0x5fbbe1:c.instructions+=8;goto B5fbbe1;
case 0x5fbbe5:c.instructions+=7;goto B5fbbe5;
case 0x5fbbe6:c.instructions+=6;goto B5fbbe6;
case 0x5fbbec:c.instructions+=5;goto B5fbbec;
case 0x5fbbed:c.instructions+=4;goto B5fbbed;
case 0x5fbbef:c.instructions+=3;goto B5fbbef;
case 0x5fbbf1:c.instructions+=2;goto B5fbbf1;
case 0x5fbbf4:c.instructions+=1;goto B5fbbf4;
case 0x5fbbf6:goto L5fbbf6;
case 0x5fbbf9:c.instructions+=20;goto B5fbbf9;
case 0x5fbbfc:c.instructions+=19;goto B5fbbfc;
case 0x5fbbff:c.instructions+=18;goto B5fbbff;
case 0x5fbc05:c.instructions+=17;goto B5fbc05;
case 0x5fbc07:c.instructions+=16;goto B5fbc07;
case 0x5fbc0d:c.instructions+=15;goto B5fbc0d;
case 0x5fbc13:c.instructions+=14;goto B5fbc13;
case 0x5fbc16:c.instructions+=13;goto B5fbc16;
case 0x5fbc19:c.instructions+=12;goto B5fbc19;
case 0x5fbc1c:c.instructions+=11;goto B5fbc1c;
case 0x5fbc22:c.instructions+=10;goto B5fbc22;
case 0x5fbc24:c.instructions+=9;goto B5fbc24;
case 0x5fbc2a:c.instructions+=8;goto B5fbc2a;
case 0x5fbc30:c.instructions+=7;goto B5fbc30;
case 0x5fbc36:c.instructions+=6;goto B5fbc36;
case 0x5fbc3c:c.instructions+=5;goto B5fbc3c;
case 0x5fbc42:c.instructions+=4;goto B5fbc42;
case 0x5fbc48:c.instructions+=3;goto B5fbc48;
case 0x5fbc4a:c.instructions+=2;goto B5fbc4a;
case 0x5fbc50:c.instructions+=1;goto B5fbc50;
case 0x5fbc56:goto L5fbc56;
case 0x5fbc5b:c.instructions+=4;goto B5fbc5b;
case 0x5fbc5d:c.instructions+=3;goto B5fbc5d;
case 0x5fbc5e:c.instructions+=2;goto B5fbc5e;
case 0x5fbc61:c.instructions+=1;goto B5fbc61;
case 0x5fbc63:goto L5fbc63;
case 0x5fbc66:c.instructions+=21;goto B5fbc66;
case 0x5fbc67:c.instructions+=20;goto B5fbc67;
case 0x5fbc6a:c.instructions+=19;goto B5fbc6a;
case 0x5fbc6d:c.instructions+=18;goto B5fbc6d;
case 0x5fbc6f:c.instructions+=17;goto B5fbc6f;
case 0x5fbc72:c.instructions+=16;goto B5fbc72;
case 0x5fbc74:c.instructions+=15;goto B5fbc74;
case 0x5fbc76:c.instructions+=14;goto B5fbc76;
case 0x5fbc78:c.instructions+=13;goto B5fbc78;
case 0x5fbc7a:c.instructions+=12;goto B5fbc7a;
case 0x5fbc7c:c.instructions+=11;goto B5fbc7c;
case 0x5fbc7e:c.instructions+=10;goto B5fbc7e;
case 0x5fbc80:c.instructions+=9;goto B5fbc80;
case 0x5fbc82:c.instructions+=8;goto B5fbc82;
case 0x5fbc84:c.instructions+=7;goto B5fbc84;
case 0x5fbc86:c.instructions+=6;goto B5fbc86;
case 0x5fbc88:c.instructions+=5;goto B5fbc88;
case 0x5fbc8a:c.instructions+=4;goto B5fbc8a;
case 0x5fbc8c:c.instructions+=3;goto B5fbc8c;
case 0x5fbc92:c.instructions+=2;goto B5fbc92;
case 0x5fbc96:c.instructions+=1;goto B5fbc96;
case 0x5fbc99:goto L5fbc99;
case 0x5fbc9f:c.instructions+=4;goto B5fbc9f;
case 0x5fbca1:c.instructions+=3;goto B5fbca1;
case 0x5fbca3:c.instructions+=2;goto B5fbca3;
case 0x5fbca6:c.instructions+=1;goto B5fbca6;
case 0x5fbca8:goto L5fbca8;
case 0x5fbcaa:c.instructions+=1;goto B5fbcaa;
case 0x5fbcb0:goto L5fbcb0;
case 0x5fbcb4:c.instructions+=7;goto B5fbcb4;
case 0x5fbcb5:c.instructions+=6;goto B5fbcb5;
case 0x5fbcb6:c.instructions+=5;goto B5fbcb6;
case 0x5fbcbc:c.instructions+=4;goto B5fbcbc;
case 0x5fbcbf:c.instructions+=3;goto B5fbcbf;
case 0x5fbcc0:c.instructions+=2;goto B5fbcc0;
case 0x5fbcc2:c.instructions+=1;goto B5fbcc2;
case 0x5fbcc7:goto L5fbcc7;
case 0x5fbcc8:c.instructions+=1;goto B5fbcc8;
case 0x5fbcca:goto L5fbcca;
case 0x5fbccc:c.instructions+=4;goto B5fbccc;
case 0x5fbcd2:c.instructions+=3;goto B5fbcd2;
case 0x5fbcd3:c.instructions+=2;goto B5fbcd3;
case 0x5fbcd5:c.instructions+=1;goto B5fbcd5;
case 0x5fbcda:goto L5fbcda;
case 0x5fbce0:c.instructions+=2;goto B5fbce0;
case 0x5fbce2:c.instructions+=1;goto B5fbce2;
case 0x5fbce4:goto L5fbce4;
case 0x5fbce5:c.instructions+=2;goto B5fbce5;
case 0x5fbce7:c.instructions+=1;goto B5fbce7;
case 0x5fbcec:goto L5fbcec;
case 0x5fbcee:c.instructions+=1;goto B5fbcee;
case 0x5fbcf0:goto L5fbcf0;
case 0x5fbcf7:c.instructions+=1;goto B5fbcf7;
case 0x5fbcf9:goto L5fbcf9;
case 0x5fbcfc:c.instructions+=3;goto B5fbcfc;
case 0x5fbcff:c.instructions+=2;goto B5fbcff;
case 0x5fbd05:c.instructions+=1;goto B5fbd05;
case 0x5fbd0b:goto L5fbd0b;
case 0x5fbd0e:c.instructions+=4;goto B5fbd0e;
case 0x5fbd14:c.instructions+=3;goto B5fbd14;
case 0x5fbd16:c.instructions+=2;goto B5fbd16;
case 0x5fbd17:c.instructions+=1;goto B5fbd17;
case 0x5fbd19:goto L5fbd19;
case 0x5fbd1f:c.instructions+=2;goto B5fbd1f;
case 0x5fbd21:c.instructions+=1;goto B5fbd21;
case 0x5fbd23:goto L5fbd23;
case 0x5fbd29:c.instructions+=2;goto B5fbd29;
case 0x5fbd2c:c.instructions+=1;goto B5fbd2c;
case 0x5fbd2e:goto L5fbd2e;
case 0x5fbd33:goto L5fbd33;
case 0x5fbd35:c.instructions+=1;goto B5fbd35;
case 0x5fbd37:goto L5fbd37;
case 0x5fbd3b:c.instructions+=3;goto B5fbd3b;
case 0x5fbd3c:c.instructions+=2;goto B5fbd3c;
case 0x5fbd3e:c.instructions+=1;goto B5fbd3e;
case 0x5fbd43:goto L5fbd43;
case 0x5fbd46:c.instructions+=1;goto B5fbd46;
case 0x5fbd4b:goto L5fbd4b;
case 0x5fbd4c:c.instructions+=3;goto B5fbd4c;
case 0x5fbd4d:c.instructions+=2;goto B5fbd4d;
case 0x5fbd4e:c.instructions+=1;goto B5fbd4e;
case 0x5fbd60:goto L5fbd60;
case 0x5fbd64:c.instructions+=9;goto B5fbd64;
case 0x5fbd68:c.instructions+=8;goto B5fbd68;
case 0x5fbd69:c.instructions+=7;goto B5fbd69;
case 0x5fbd6b:c.instructions+=6;goto B5fbd6b;
case 0x5fbd6f:c.instructions+=5;goto B5fbd6f;
case 0x5fbd70:c.instructions+=4;goto B5fbd70;
case 0x5fbd71:c.instructions+=3;goto B5fbd71;
case 0x5fbd72:c.instructions+=2;goto B5fbd72;
case 0x5fbd74:c.instructions+=1;goto B5fbd74;
case 0x5fbd79:goto L5fbd79;
case 0x5fbd7c:c.instructions+=3;goto B5fbd7c;
case 0x5fbd7d:c.instructions+=2;goto B5fbd7d;
case 0x5fbd83:c.instructions+=1;goto B5fbd83;
case 0x5fbd88:goto L5fbd88;
case 0x5fbd8b:c.instructions+=3;goto B5fbd8b;
case 0x5fbd8d:c.instructions+=2;goto B5fbd8d;
case 0x5fbd8f:c.instructions+=1;goto B5fbd8f;
case 0x5fbd92:goto L5fbd92;
case 0x5fbd95:c.instructions+=2;goto B5fbd95;
case 0x5fbd97:c.instructions+=1;goto B5fbd97;
case 0x5fbd9a:goto L5fbd9a;
case 0x5fbd9e:c.instructions+=2;goto B5fbd9e;
case 0x5fbda0:c.instructions+=1;goto B5fbda0;
case 0x5fbda2:goto L5fbda2;
case 0x5fbda8:c.instructions+=5;goto B5fbda8;
case 0x5fbdae:c.instructions+=4;goto B5fbdae;
case 0x5fbdb4:c.instructions+=3;goto B5fbdb4;
case 0x5fbdb6:c.instructions+=2;goto B5fbdb6;
case 0x5fbdb9:c.instructions+=1;goto B5fbdb9;
case 0x5fbdbb:goto L5fbdbb;
case 0x5fbdbd:c.instructions+=1;goto B5fbdbd;
case 0x5fbdc3:goto L5fbdc3;
case 0x5fbdc9:c.instructions+=4;goto B5fbdc9;
case 0x5fbdcf:c.instructions+=3;goto B5fbdcf;
case 0x5fbdd5:c.instructions+=2;goto B5fbdd5;
case 0x5fbdd7:c.instructions+=1;goto B5fbdd7;
case 0x5fbddc:goto L5fbddc;
case 0x5fbddd:c.instructions+=1;goto B5fbddd;
case 0x5fbde0:goto L5fbde0;
case 0x5fbde2:c.instructions+=2;goto B5fbde2;
case 0x5fbdec:c.instructions+=1;goto B5fbdec;
case 0x5fbdf1:goto L5fbdf1;
case 0x5fbdf2:c.instructions+=1;goto B5fbdf2;
case 0x5fbe00:goto L5fbe00;
case 0x5fbe01:c.instructions+=13;goto B5fbe01;
case 0x5fbe03:c.instructions+=12;goto B5fbe03;
case 0x5fbe06:c.instructions+=11;goto B5fbe06;
case 0x5fbe09:c.instructions+=10;goto B5fbe09;
case 0x5fbe0a:c.instructions+=9;goto B5fbe0a;
case 0x5fbe0b:c.instructions+=8;goto B5fbe0b;
case 0x5fbe0e:c.instructions+=7;goto B5fbe0e;
case 0x5fbe11:c.instructions+=6;goto B5fbe11;
case 0x5fbe12:c.instructions+=5;goto B5fbe12;
case 0x5fbe18:c.instructions+=4;goto B5fbe18;
case 0x5fbe1a:c.instructions+=3;goto B5fbe1a;
case 0x5fbe1c:c.instructions+=2;goto B5fbe1c;
case 0x5fbe1f:c.instructions+=1;goto B5fbe1f;
case 0x5fbe21:goto L5fbe21;
case 0x5fbe27:c.instructions+=2;goto B5fbe27;
case 0x5fbe29:c.instructions+=1;goto B5fbe29;
case 0x5fbe2f:goto L5fbe2f;
case 0x5fbe32:c.instructions+=4;goto B5fbe32;
case 0x5fbe35:c.instructions+=3;goto B5fbe35;
case 0x5fbe37:c.instructions+=2;goto B5fbe37;
case 0x5fbe3a:c.instructions+=1;goto B5fbe3a;
case 0x5fbe3c:goto L5fbe3c;
case 0x5fbe41:c.instructions+=1;goto B5fbe41;
case 0x5fbe43:goto L5fbe43;
case 0x5fbe45:goto L5fbe45;
case 0x5fbe47:c.instructions+=1;goto B5fbe47;
case 0x5fbe49:goto L5fbe49;
case 0x5fbe4c:c.instructions+=1;goto B5fbe4c;
case 0x5fbe4e:goto L5fbe4e;
case 0x5fbe51:c.instructions+=2;goto B5fbe51;
case 0x5fbe56:c.instructions+=1;goto B5fbe56;
case 0x5fbe5b:goto L5fbe5b;
case 0x5fbe5e:c.instructions+=2;goto B5fbe5e;
case 0x5fbe60:c.instructions+=1;goto B5fbe60;
case 0x5fbe62:goto L5fbe62;
case 0x5fbe65:c.instructions+=9;goto B5fbe65;
case 0x5fbe68:c.instructions+=8;goto B5fbe68;
case 0x5fbe6b:c.instructions+=7;goto B5fbe6b;
case 0x5fbe6e:c.instructions+=6;goto B5fbe6e;
case 0x5fbe6f:c.instructions+=5;goto B5fbe6f;
case 0x5fbe73:c.instructions+=4;goto B5fbe73;
case 0x5fbe74:c.instructions+=3;goto B5fbe74;
case 0x5fbe78:c.instructions+=2;goto B5fbe78;
case 0x5fbe80:c.instructions+=1;goto B5fbe80;
case 0x5fbe85:goto L5fbe85;
case 0x5fbe88:c.instructions+=8;goto B5fbe88;
case 0x5fbe8a:c.instructions+=7;goto B5fbe8a;
case 0x5fbe8e:c.instructions+=6;goto B5fbe8e;
case 0x5fbe8f:c.instructions+=5;goto B5fbe8f;
case 0x5fbe94:c.instructions+=4;goto B5fbe94;
case 0x5fbe95:c.instructions+=3;goto B5fbe95;
case 0x5fbe96:c.instructions+=2;goto B5fbe96;
case 0x5fbe98:c.instructions+=1;goto B5fbe98;
case 0x5fbe9d:goto L5fbe9d;
case 0x5fbe9f:c.instructions+=6;goto B5fbe9f;
case 0x5fbea0:c.instructions+=5;goto B5fbea0;
case 0x5fbea1:c.instructions+=4;goto B5fbea1;
case 0x5fbea2:c.instructions+=3;goto B5fbea2;
case 0x5fbea4:c.instructions+=2;goto B5fbea4;
case 0x5fbea5:c.instructions+=1;goto B5fbea5;
case 0x5fbea8:goto L5fbea8;
case 0x5fbeb2:c.instructions+=7;goto B5fbeb2;
case 0x5fbeb4:c.instructions+=6;goto B5fbeb4;
case 0x5fbeb5:c.instructions+=5;goto B5fbeb5;
case 0x5fbeb6:c.instructions+=4;goto B5fbeb6;
case 0x5fbeb7:c.instructions+=3;goto B5fbeb7;
case 0x5fbeb9:c.instructions+=2;goto B5fbeb9;
case 0x5fbeba:c.instructions+=1;goto B5fbeba;
case 0x5fbebd:goto L5fbebd;
case 0x5fbebe:c.instructions+=6;goto B5fbebe;
case 0x5fbebf:c.instructions+=5;goto B5fbebf;
case 0x5fbec1:c.instructions+=4;goto B5fbec1;
case 0x5fbec2:c.instructions+=3;goto B5fbec2;
case 0x5fbec4:c.instructions+=2;goto B5fbec4;
case 0x5fbec5:c.instructions+=1;goto B5fbec5;
case 0x5fbed0:goto L5fbed0;
case 0x5fbed1:c.instructions+=10;goto B5fbed1;
case 0x5fbed3:c.instructions+=9;goto B5fbed3;
case 0x5fbed6:c.instructions+=8;goto B5fbed6;
case 0x5fbed9:c.instructions+=7;goto B5fbed9;
case 0x5fbedc:c.instructions+=6;goto B5fbedc;
case 0x5fbede:c.instructions+=5;goto B5fbede;
case 0x5fbedf:c.instructions+=4;goto B5fbedf;
case 0x5fbee0:c.instructions+=3;goto B5fbee0;
case 0x5fbee1:c.instructions+=2;goto B5fbee1;
case 0x5fbee3:c.instructions+=1;goto B5fbee3;
case 0x5fbee9:goto L5fbee9;
case 0x5fbeec:c.instructions+=2;goto B5fbeec;
case 0x5fbeee:c.instructions+=1;goto B5fbeee;
case 0x5fbef4:goto L5fbef4;
case 0x5fbef6:c.instructions+=1;goto B5fbef6;
case 0x5fbefb:goto L5fbefb;
case 0x5fbefe:c.instructions+=10;goto B5fbefe;
case 0x5fbf01:c.instructions+=9;goto B5fbf01;
case 0x5fbf03:c.instructions+=8;goto B5fbf03;
case 0x5fbf06:c.instructions+=7;goto B5fbf06;
case 0x5fbf07:c.instructions+=6;goto B5fbf07;
case 0x5fbf0b:c.instructions+=5;goto B5fbf0b;
case 0x5fbf0c:c.instructions+=4;goto B5fbf0c;
case 0x5fbf10:c.instructions+=3;goto B5fbf10;
case 0x5fbf11:c.instructions+=2;goto B5fbf11;
case 0x5fbf13:c.instructions+=1;goto B5fbf13;
case 0x5fbf18:goto L5fbf18;
case 0x5fbf1c:c.instructions+=10;goto B5fbf1c;
case 0x5fbf1f:c.instructions+=9;goto B5fbf1f;
case 0x5fbf23:c.instructions+=8;goto B5fbf23;
case 0x5fbf27:c.instructions+=7;goto B5fbf27;
case 0x5fbf2d:c.instructions+=6;goto B5fbf2d;
case 0x5fbf31:c.instructions+=5;goto B5fbf31;
case 0x5fbf34:c.instructions+=4;goto B5fbf34;
case 0x5fbf3a:c.instructions+=3;goto B5fbf3a;
case 0x5fbf3c:c.instructions+=2;goto B5fbf3c;
case 0x5fbf3f:c.instructions+=1;goto B5fbf3f;
case 0x5fbf41:goto L5fbf41;
case 0x5fbf45:c.instructions+=11;goto B5fbf45;
case 0x5fbf49:c.instructions+=10;goto B5fbf49;
case 0x5fbf4d:c.instructions+=9;goto B5fbf4d;
case 0x5fbf51:c.instructions+=8;goto B5fbf51;
case 0x5fbf55:c.instructions+=7;goto B5fbf55;
case 0x5fbf59:c.instructions+=6;goto B5fbf59;
case 0x5fbf5f:c.instructions+=5;goto B5fbf5f;
case 0x5fbf63:c.instructions+=4;goto B5fbf63;
case 0x5fbf67:c.instructions+=3;goto B5fbf67;
case 0x5fbf6d:c.instructions+=2;goto B5fbf6d;
case 0x5fbf71:c.instructions+=1;goto B5fbf71;
case 0x5fbf73:goto L5fbf73;
case 0x5fbf77:c.instructions+=3;goto B5fbf77;
case 0x5fbf78:c.instructions+=2;goto B5fbf78;
case 0x5fbf7a:c.instructions+=1;goto B5fbf7a;
case 0x5fbf7f:goto L5fbf7f;
case 0x5fbf82:c.instructions+=7;goto B5fbf82;
case 0x5fbf84:c.instructions+=6;goto B5fbf84;
case 0x5fbf86:c.instructions+=5;goto B5fbf86;
case 0x5fbf8c:c.instructions+=4;goto B5fbf8c;
case 0x5fbf90:c.instructions+=3;goto B5fbf90;
case 0x5fbf94:c.instructions+=2;goto B5fbf94;
case 0x5fbf96:c.instructions+=1;goto B5fbf96;
case 0x5fbf98:goto L5fbf98;
case 0x5fbf9c:c.instructions+=4;goto B5fbf9c;
case 0x5fbf9e:c.instructions+=3;goto B5fbf9e;
case 0x5fbf9f:c.instructions+=2;goto B5fbf9f;
case 0x5fbfa0:c.instructions+=1;goto B5fbfa0;
case 0x5fbfa5:goto L5fbfa5;
case 0x5fbfa7:goto L5fbfa7;
case 0x5fbfa8:c.instructions+=1;goto B5fbfa8;
case 0x5fbfad:goto L5fbfad;
case 0x5fbfb1:c.instructions+=4;goto B5fbfb1;
case 0x5fbfb5:c.instructions+=3;goto B5fbfb5;
case 0x5fbfb6:c.instructions+=2;goto B5fbfb6;
case 0x5fbfb7:c.instructions+=1;goto B5fbfb7;
case 0x5fbfbc:goto L5fbfbc;
case 0x5fbfbf:c.instructions+=7;goto B5fbfbf;
case 0x5fbfc3:c.instructions+=6;goto B5fbfc3;
case 0x5fbfc4:c.instructions+=5;goto B5fbfc4;
case 0x5fbfc7:c.instructions+=4;goto B5fbfc7;
case 0x5fbfc8:c.instructions+=3;goto B5fbfc8;
case 0x5fbfc9:c.instructions+=2;goto B5fbfc9;
case 0x5fbfcb:c.instructions+=1;goto B5fbfcb;
case 0x5fbfd0:goto L5fbfd0;
case 0x5fbfd3:c.instructions+=3;goto B5fbfd3;
case 0x5fbfd4:c.instructions+=2;goto B5fbfd4;
case 0x5fbfd6:c.instructions+=1;goto B5fbfd6;
case 0x5fbfdb:goto L5fbfdb;
case 0x5fbfe1:c.instructions+=6;goto B5fbfe1;
case 0x5fbfe5:c.instructions+=5;goto B5fbfe5;
case 0x5fbfe6:c.instructions+=4;goto B5fbfe6;
case 0x5fbfe7:c.instructions+=3;goto B5fbfe7;
case 0x5fbfea:c.instructions+=2;goto B5fbfea;
case 0x5fbfef:c.instructions+=1;goto B5fbfef;
case 0x5fbff4:goto L5fbff4;
case 0x5fbff6:c.instructions+=4;goto B5fbff6;
case 0x5fbff9:c.instructions+=3;goto B5fbff9;
case 0x5fbffb:c.instructions+=2;goto B5fbffb;
case 0x5fbffc:c.instructions+=1;goto B5fbffc;
case 0x5fbfff:goto L5fbfff;
default:missing_instruction(c.pc);}
B5fb001:L5fb001:{c.instructions+=1;NFSU2_TR(0x5fb001);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb024;}}
}
B5fb003:L5fb003:{c.instructions+=3;NFSU2_TR(0x5fb003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fb005:{NFSU2_TR(0x5fb005);
__builtin_memmove((R+28),(R+8),4);
}
B5fb007:{NFSU2_TR(0x5fb007);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb00aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb00a:L5fb00a:{c.instructions+=2;NFSU2_TR(0x5fb00a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802130ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5fb011:{NFSU2_TR(0x5fb011);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb024;}}
}
B5fb013:L5fb013:{c.instructions+=5;NFSU2_TR(0x5fb013);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb016:{NFSU2_TR(0x5fb016);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5fb017:{NFSU2_TR(0x5fb017);
w4(R+4,u32(0x6ull));
}
B5fb01c:{NFSU2_TR(0x5fb01c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5fb01c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5fb01c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5fb01e:{NFSU2_TR(0x5fb01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb024:L5fb024:{c.instructions+=3;NFSU2_TR(0x5fb024);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb026:{NFSU2_TR(0x5fb026);
__builtin_memmove((R+4),(R+24),4);
}
B5fb028:{NFSU2_TR(0x5fb028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb02dull));
TAIL_STATIC(0x5fa820u,5fa);
}
B5fb02d:L5fb02d:{c.instructions+=3;NFSU2_TR(0x5fb02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb033:{NFSU2_TR(0x5fb033);
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
B5fb035:{NFSU2_TR(0x5fb035);
if(r1(R+518)){{goto L5fb04a;}}
}
B5fb037:L5fb037:{c.instructions+=5;NFSU2_TR(0x5fb037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb03d:{NFSU2_TR(0x5fb03d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802130ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5fb044:{NFSU2_TR(0x5fb044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fb046:{NFSU2_TR(0x5fb046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb047:{NFSU2_TR(0x5fb047);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb04aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb04a:L5fb04a:{c.instructions+=3;NFSU2_TR(0x5fb04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fb04b:{NFSU2_TR(0x5fb04b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fb04c:{NFSU2_TR(0x5fb04c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fb050:L5fb050:{c.instructions+=8;NFSU2_TR(0x5fb050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5fb053:{NFSU2_TR(0x5fb053);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb054:{NFSU2_TR(0x5fb054);
__builtin_memmove((R+24),(R+4),4);
}
B5fb056:{NFSU2_TR(0x5fb056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fb05c:{NFSU2_TR(0x5fb05c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb05e:{NFSU2_TR(0x5fb05e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5fb061:{NFSU2_TR(0x5fb061);
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
B5fb063:{NFSU2_TR(0x5fb063);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb0d0;}}
}
B5fb065:L5fb065:{c.instructions+=2;NFSU2_TR(0x5fb065);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fb06f:{NFSU2_TR(0x5fb06f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb083;}}
}
B5fb071:L5fb071:{c.instructions+=3;NFSU2_TR(0x5fb071);
__builtin_memmove((R+0),gp(0x86b320),4);
}
B5fb076:{NFSU2_TR(0x5fb076);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb078:{NFSU2_TR(0x5fb078);
if(r1(R+518)){{goto L5fb083;}}
}
B5fb07a:L5fb07a:{c.instructions+=2;NFSU2_TR(0x5fb07a);
u8 U[14];
__builtin_memmove((U+6),gp(0x86b328),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fb081:{NFSU2_TR(0x5fb081);
if(r1(R+518)){{goto L5fb0d0;}}
}
B5fb083:L5fb083:{c.instructions+=5;NFSU2_TR(0x5fb083);
__builtin_memmove((R+8),gp(0x82a3a4),4);
}
B5fb089:{NFSU2_TR(0x5fb089);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb08b:{NFSU2_TR(0x5fb08b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B5fb08e:{NFSU2_TR(0x5fb08e);
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
B5fb090:{NFSU2_TR(0x5fb090);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb0d0;}}
}
B5fb092:L5fb092:{c.instructions+=3;NFSU2_TR(0x5fb092);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5fb098:{NFSU2_TR(0x5fb098);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb09a:{NFSU2_TR(0x5fb09a);
if(r1(R+518)){{goto L5fb0b4;}}
}
B5fb09c:L5fb09c:{c.instructions+=5;NFSU2_TR(0x5fb09c);
{u32 ea_=u32(u32(9037752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fb0a2:{NFSU2_TR(0x5fb0a2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb0a8:{NFSU2_TR(0x5fb0a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb0aa:{NFSU2_TR(0x5fb0aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb0ad:{NFSU2_TR(0x5fb0ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb0b4;}}
}
B5fb0af:L5fb0af:{c.instructions+=2;NFSU2_TR(0x5fb0af);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5fb0b2:{NFSU2_TR(0x5fb0b2);
if(r1(R+518)){{goto L5fb0d0;}}
}
B5fb0b4:L5fb0b4:{c.instructions+=3;NFSU2_TR(0x5fb0b4);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5fb0b9:{NFSU2_TR(0x5fb0b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb0bb:{NFSU2_TR(0x5fb0bb);
if(r1(R+518)){{goto L5fb0c2;}}
}
B5fb0bd:L5fb0bd:{c.instructions+=2;NFSU2_TR(0x5fb0bd);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x5ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5fb0c0:{NFSU2_TR(0x5fb0c0);
if(r1(R+518)){{goto L5fb0d0;}}
}
B5fb0c2:L5fb0c2:{c.instructions+=3;NFSU2_TR(0x5fb0c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb0c8:{NFSU2_TR(0x5fb0c8);
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
B5fb0ca:{NFSU2_TR(0x5fb0ca);
if(r1(R+518)){{goto L5fb5c8;}}
}
B5fb0d0:L5fb0d0:{c.instructions+=2;NFSU2_TR(0x5fb0d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb0d1:{NFSU2_TR(0x5fb0d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb0d6ull));
TAIL_STATIC(0x4a9d50u,4a9);
}
B5fb0d6:L5fb0d6:{c.instructions+=5;NFSU2_TR(0x5fb0d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb0da:{NFSU2_TR(0x5fb0da);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5fb0df:{NFSU2_TR(0x5fb0df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fb0e2:{NFSU2_TR(0x5fb0e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb0e4:{NFSU2_TR(0x5fb0e4);
if(r1(R+518)){{goto L5fb10f;}}
}
B5fb0e6:L5fb0e6:{c.instructions+=2;NFSU2_TR(0x5fb0e6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fb0e9:{NFSU2_TR(0x5fb0e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb10f;}}
}
B5fb0eb:L5fb0eb:{c.instructions+=5;NFSU2_TR(0x5fb0eb);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B5fb0f0:{NFSU2_TR(0x5fb0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb0f3:{NFSU2_TR(0x5fb0f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb0f5:{NFSU2_TR(0x5fb0f5);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb0fa:{NFSU2_TR(0x5fb0fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb5e1;}}
}
B5fb100:L5fb100:{c.instructions+=3;NFSU2_TR(0x5fb100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb106:{NFSU2_TR(0x5fb106);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb108:{NFSU2_TR(0x5fb108);
if(r1(R+518)){{goto L5fb116;}}
}
B5fb10a:L5fb10a:{c.instructions+=2;NFSU2_TR(0x5fb10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb10d:{NFSU2_TR(0x5fb10d);
{goto L5fb118;}
}
B5fb10f:L5fb10f:{c.instructions+=2;NFSU2_TR(0x5fb10f);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb114:{NFSU2_TR(0x5fb114);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fb100u);}goto L5fb100;}
}
B5fb116:L5fb116:{c.instructions+=1;NFSU2_TR(0x5fb116);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fb118:L5fb118:{c.instructions+=3;NFSU2_TR(0x5fb118);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fb11b:{NFSU2_TR(0x5fb11b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb11f:{NFSU2_TR(0x5fb11f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fb12a;}}
}
B5fb121:L5fb121:{c.instructions+=2;NFSU2_TR(0x5fb121);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fb124:{NFSU2_TR(0x5fb124);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fb5b7;}}
}
B5fb12a:L5fb12a:{c.instructions+=10;NFSU2_TR(0x5fb12a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb12b:{NFSU2_TR(0x5fb12b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5fb131:{NFSU2_TR(0x5fb131);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb132:{NFSU2_TR(0x5fb132);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb133:{NFSU2_TR(0x5fb133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fb136:{NFSU2_TR(0x5fb136);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5fb138:{NFSU2_TR(0x5fb138);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb13a:{NFSU2_TR(0x5fb13a);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb13f:{NFSU2_TR(0x5fb13f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb143:{NFSU2_TR(0x5fb143);
if(r1(R+518)){{goto L5fb15b;}}
}
B5fb145:L5fb145:{c.instructions+=4;NFSU2_TR(0x5fb145);
__builtin_memmove((R+8),gp(0x890118),4);
}
B5fb14b:{NFSU2_TR(0x5fb14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb151:{NFSU2_TR(0x5fb151);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb153:{NFSU2_TR(0x5fb153);
if(r1(R+518)){{goto L5fb15b;}}
}
B5fb155:L5fb155:{c.instructions+=2;NFSU2_TR(0x5fb155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5fb157:{NFSU2_TR(0x5fb157);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb15b:L5fb15b:{c.instructions+=7;NFSU2_TR(0x5fb15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fb161:{NFSU2_TR(0x5fb161);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb165:{NFSU2_TR(0x5fb165);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fb167:{NFSU2_TR(0x5fb167);
u8 U[6];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
__builtin_memmove((U+4),(U+5),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fb16c:{NFSU2_TR(0x5fb16c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb16e:{NFSU2_TR(0x5fb16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb174:{NFSU2_TR(0x5fb174);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb17e;}}
}
B5fb176:L5fb176:{c.instructions+=2;NFSU2_TR(0x5fb176);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb178:{NFSU2_TR(0x5fb178);
if(r1(R+518)){{goto L5fb2af;}}
}
B5fb17e:L5fb17e:{c.instructions+=2;NFSU2_TR(0x5fb17e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fb181:{NFSU2_TR(0x5fb181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb1af;}}
}
B5fb183:L5fb183:{c.instructions+=2;NFSU2_TR(0x5fb183);
__builtin_memmove((R+4),(R+24),4);
}
B5fb185:{NFSU2_TR(0x5fb185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb18aull));
TAIL_STATIC(0x5ea150u,5ea);
}
B5fb18a:L5fb18a:{c.instructions+=4;NFSU2_TR(0x5fb18a);
{u32 ea_=u32(u32(8397128u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb190:{NFSU2_TR(0x5fb190);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb192:{NFSU2_TR(0x5fb192);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb195:{NFSU2_TR(0x5fb195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb1af;}}
}
B5fb197:L5fb197:{c.instructions+=2;NFSU2_TR(0x5fb197);
__builtin_memmove((R+4),(R+24),4);
}
B5fb199:{NFSU2_TR(0x5fb199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb19eull));
TAIL_STATIC(0x5ea150u,5ea);
}
B5fb19e:L5fb19e:{c.instructions+=4;NFSU2_TR(0x5fb19e);
{u32 ea_=u32(u32(8017236u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb1a4:{NFSU2_TR(0x5fb1a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb1a6:{NFSU2_TR(0x5fb1a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fb1a9:{NFSU2_TR(0x5fb1a9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fb5b4;}}
}
B5fb1af:L5fb1af:{c.instructions+=2;NFSU2_TR(0x5fb1af);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb1b1:{NFSU2_TR(0x5fb1b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb1d3;}}
}
B5fb1b3:L5fb1b3:{c.instructions+=4;NFSU2_TR(0x5fb1b3);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B5fb1b8:{NFSU2_TR(0x5fb1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb1bb:{NFSU2_TR(0x5fb1bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb1bd:{NFSU2_TR(0x5fb1bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb1c9;}}
}
B5fb1bf:L5fb1bf:{c.instructions+=3;NFSU2_TR(0x5fb1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb1c5:{NFSU2_TR(0x5fb1c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb1c7:{NFSU2_TR(0x5fb1c7);
if(r1(R+518)){{goto L5fb1d3;}}
}
B5fb1c9:L5fb1c9:{c.instructions+=2;NFSU2_TR(0x5fb1c9);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb1ce:{NFSU2_TR(0x5fb1ce);
{goto L5fb2af;}
}
B5fb1d3:L5fb1d3:{c.instructions+=4;NFSU2_TR(0x5fb1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb1d9:{NFSU2_TR(0x5fb1d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb1db:{NFSU2_TR(0x5fb1db);
w1(R+12,u8(0x1ull));
}
B5fb1dd:{NFSU2_TR(0x5fb1dd);
if(r1(R+518)){{goto L5fb20a;}}
}
B5fb1df:L5fb1df:{c.instructions+=2;NFSU2_TR(0x5fb1df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb1e4:{NFSU2_TR(0x5fb1e4);
if(r1(R+518)){{goto L5fb20a;}}
}
B5fb1e6:L5fb1e6:{c.instructions+=3;NFSU2_TR(0x5fb1e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb1ec:{NFSU2_TR(0x5fb1ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb1ee:{NFSU2_TR(0x5fb1ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb20a;}}
}
B5fb1f0:L5fb1f0:{c.instructions+=2;NFSU2_TR(0x5fb1f0);
__builtin_memmove((R+4),(R+24),4);
}
B5fb1f2:{NFSU2_TR(0x5fb1f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb1f7ull));
TAIL_STATIC(0x5ea150u,5ea);
}
B5fb1f7:L5fb1f7:{c.instructions+=4;NFSU2_TR(0x5fb1f7);
{u32 ea_=u32(u32(8397128u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb1fd:{NFSU2_TR(0x5fb1fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb1ff:{NFSU2_TR(0x5fb1ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fb202:{NFSU2_TR(0x5fb202);
if(r1(R+514)){{goto L5fb20a;}}
}
B5fb204:L5fb204:{c.instructions+=2;NFSU2_TR(0x5fb204);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5fb206:{NFSU2_TR(0x5fb206);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fb20a:L5fb20a:{c.instructions+=3;NFSU2_TR(0x5fb20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb210:{NFSU2_TR(0x5fb210);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb212:{NFSU2_TR(0x5fb212);
if(r1(R+518)){{goto L5fb2af;}}
}
B5fb218:L5fb218:{c.instructions+=5;NFSU2_TR(0x5fb218);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb21a:{NFSU2_TR(0x5fb21a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb21c:{NFSU2_TR(0x5fb21c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb21e:{NFSU2_TR(0x5fb21e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb21f:{NFSU2_TR(0x5fb21f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb224ull));
TAIL_STATIC(0x442de0u,442);
}
B5fb224:L5fb224:{c.instructions+=3;NFSU2_TR(0x5fb224);
__builtin_memmove((R+20),(R+0),4);
}
B5fb226:{NFSU2_TR(0x5fb226);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb228:{NFSU2_TR(0x5fb228);
if(r1(R+518)){{goto L5fb230;}}
}
B5fb22a:L5fb22a:{c.instructions+=2;NFSU2_TR(0x5fb22a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(r1(U+0)));
}
B5fb22e:{NFSU2_TR(0x5fb22e);
{goto L5fb232;}
}
B5fb230:L5fb230:{c.instructions+=1;NFSU2_TR(0x5fb230);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fb232:L5fb232:{c.instructions+=3;NFSU2_TR(0x5fb232);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fb238:{NFSU2_TR(0x5fb238);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb23a:{NFSU2_TR(0x5fb23a);
if(r1(R+518)){{goto L5fb24b;}}
}
B5fb23c:L5fb23c:{c.instructions+=3;NFSU2_TR(0x5fb23c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fb240:{NFSU2_TR(0x5fb240);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb242:{NFSU2_TR(0x5fb242);
if(r1(R+518)){{goto L5fb24b;}}
}
B5fb244:L5fb244:{c.instructions+=2;NFSU2_TR(0x5fb244);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb249:{NFSU2_TR(0x5fb249);
{goto L5fb252;}
}
B5fb24b:L5fb24b:{c.instructions+=2;NFSU2_TR(0x5fb24b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb24d:{NFSU2_TR(0x5fb24d);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fb252:L5fb252:{c.instructions+=2;NFSU2_TR(0x5fb252);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb254:{NFSU2_TR(0x5fb254);
if(r1(R+518)){{goto L5fb2af;}}
}
B5fb256:L5fb256:{c.instructions+=4;NFSU2_TR(0x5fb256);
s1(0x828655,u8(0x0ull));
}
B5fb25d:{NFSU2_TR(0x5fb25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb263:{NFSU2_TR(0x5fb263);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fb267:{NFSU2_TR(0x5fb267);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb27c;}}
}
B5fb269:L5fb269:{c.instructions+=3;NFSU2_TR(0x5fb269);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5fb26f:{NFSU2_TR(0x5fb26f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb271:{NFSU2_TR(0x5fb271);
if(r1(R+518)){{goto L5fb27c;}}
}
B5fb273:L5fb273:{c.instructions+=2;NFSU2_TR(0x5fb273);
s1(0x828655,u8(0x1ull));
}
B5fb27a:{NFSU2_TR(0x5fb27a);
{goto L5fb292;}
}
B5fb27c:L5fb27c:{c.instructions+=2;NFSU2_TR(0x5fb27c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb27d:{NFSU2_TR(0x5fb27d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb282ull));
TAIL_STATIC(0x441b40u,441);
}
B5fb282:L5fb282:{c.instructions+=5;NFSU2_TR(0x5fb282);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb288:{NFSU2_TR(0x5fb288);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fb28b:{NFSU2_TR(0x5fb28b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb28d:{NFSU2_TR(0x5fb28d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb290:{NFSU2_TR(0x5fb290);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb297;}}
}
B5fb292:L5fb292:{c.instructions+=1;NFSU2_TR(0x5fb292);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb297:L5fb297:{c.instructions+=5;NFSU2_TR(0x5fb297);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fb29d:{NFSU2_TR(0x5fb29d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb2a3:{NFSU2_TR(0x5fb2a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb2a5:{NFSU2_TR(0x5fb2a5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fb2a8:{NFSU2_TR(0x5fb2a8);
if(r1(R+514)){{goto L5fb2af;}}
}
B5fb2aa:L5fb2aa:{c.instructions+=1;NFSU2_TR(0x5fb2aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb2af:L5fb2af:{c.instructions+=5;NFSU2_TR(0x5fb2af);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb2b3:{NFSU2_TR(0x5fb2b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb2b5:{NFSU2_TR(0x5fb2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fb2bb:{NFSU2_TR(0x5fb2bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fb2c1:{NFSU2_TR(0x5fb2c1);
if(r1(R+518)){{goto L5fb45c;}}
}
B5fb2c7:L5fb2c7:{c.instructions+=3;NFSU2_TR(0x5fb2c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb2cd:{NFSU2_TR(0x5fb2cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb2cf:{NFSU2_TR(0x5fb2cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb444;}}
}
B5fb2d5:L5fb2d5:{c.instructions+=2;NFSU2_TR(0x5fb2d5);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb2da:{NFSU2_TR(0x5fb2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb2dfull));
TAIL_STATIC(0x43c1f0u,43c);
}
B5fb2df:L5fb2df:{c.instructions+=5;NFSU2_TR(0x5fb2df);
{u32 ea_=u32(u32(8017224u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb2e5:{NFSU2_TR(0x5fb2e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fb2e8:{NFSU2_TR(0x5fb2e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb2ea:{NFSU2_TR(0x5fb2ea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fb2ed:{NFSU2_TR(0x5fb2ed);
if(r1(R+514)){{goto L5fb444;}}
}
B5fb2f3:L5fb2f3:{c.instructions+=1;NFSU2_TR(0x5fb2f3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5fb2f5:L5fb2f5:{c.instructions+=1;NFSU2_TR(0x5fb2f5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5fb2f7:L5fb2f7:{c.instructions+=3;NFSU2_TR(0x5fb2f7);
__builtin_memmove((R+0),gp(0x8900c4),4);
}
B5fb2fc:{NFSU2_TR(0x5fb2fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb2fe:{NFSU2_TR(0x5fb2fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb328;}}
}
B5fb300:L5fb300:{c.instructions+=6;NFSU2_TR(0x5fb300);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fb304:{NFSU2_TR(0x5fb304);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fb30a:{NFSU2_TR(0x5fb30a);
{u32 ea_=u32(u32(8017060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb310:{NFSU2_TR(0x5fb310);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb312:{NFSU2_TR(0x5fb312);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fb315:{NFSU2_TR(0x5fb315);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fb328;}}
}
B5fb317:L5fb317:{c.instructions+=2;NFSU2_TR(0x5fb317);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5fb319:{NFSU2_TR(0x5fb319);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fb55d;}}
}
B5fb31f:L5fb31f:{c.instructions+=2;NFSU2_TR(0x5fb31f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fb322:{NFSU2_TR(0x5fb322);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5fb55d;}}
}
B5fb328:L5fb328:{c.instructions+=7;NFSU2_TR(0x5fb328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb32e:{NFSU2_TR(0x5fb32e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb330:{NFSU2_TR(0x5fb330);
__builtin_memmove((R+12),(R+518),1);
}
B5fb333:{NFSU2_TR(0x5fb333);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb335:{NFSU2_TR(0x5fb335);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5fb33b:{NFSU2_TR(0x5fb33b);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb340:{NFSU2_TR(0x5fb340);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb46d;}}
}
B5fb346:L5fb346:{c.instructions+=2;NFSU2_TR(0x5fb346);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fb34b:{NFSU2_TR(0x5fb34b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb35b;}}
}
B5fb34d:L5fb34d:{c.instructions+=3;NFSU2_TR(0x5fb34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb353:{NFSU2_TR(0x5fb353);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb355:{NFSU2_TR(0x5fb355);
if(r1(R+518)){{goto L5fb46d;}}
}
B5fb35b:L5fb35b:{c.instructions+=3;NFSU2_TR(0x5fb35b);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb35f:{NFSU2_TR(0x5fb35f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb361:{NFSU2_TR(0x5fb361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb371;}}
}
B5fb363:L5fb363:{c.instructions+=3;NFSU2_TR(0x5fb363);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb369:{NFSU2_TR(0x5fb369);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb36b:{NFSU2_TR(0x5fb36b);
if(r1(R+518)){{goto L5fb5b4;}}
}
B5fb371:L5fb371:{c.instructions+=2;NFSU2_TR(0x5fb371);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb373:{NFSU2_TR(0x5fb373);
if(r1(R+518)){{goto L5fb5b4;}}
}
B5fb379:L5fb379:{c.instructions+=2;NFSU2_TR(0x5fb379);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fb37d:{NFSU2_TR(0x5fb37d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb5b4;}}
}
B5fb383:L5fb383:{c.instructions+=3;NFSU2_TR(0x5fb383);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb389:{NFSU2_TR(0x5fb389);
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
B5fb38b:{NFSU2_TR(0x5fb38b);
if(r1(R+518)){{goto L5fb3b0;}}
}
B5fb38d:L5fb38d:{c.instructions+=2;NFSU2_TR(0x5fb38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fb38f:{NFSU2_TR(0x5fb38f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb392ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb392:L5fb392:{c.instructions+=2;NFSU2_TR(0x5fb392);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fb396:{NFSU2_TR(0x5fb396);
if(r1(R+518)){{goto L5fb3a6;}}
}
B5fb398:L5fb398:{c.instructions+=5;NFSU2_TR(0x5fb398);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb39c:{NFSU2_TR(0x5fb39c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb39e:{NFSU2_TR(0x5fb39e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb39f:{NFSU2_TR(0x5fb39f);
__builtin_memmove((R+4),(R+24),4);
}
B5fb3a1:{NFSU2_TR(0x5fb3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb3a6ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5fb3a6:L5fb3a6:{c.instructions+=3;NFSU2_TR(0x5fb3a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb3ac:{NFSU2_TR(0x5fb3ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb3ae:{NFSU2_TR(0x5fb3ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb3cf;}}
}
B5fb3b0:L5fb3b0:{c.instructions+=4;NFSU2_TR(0x5fb3b0);
__builtin_memmove((R+8),gp(0x8650b8),4);
}
B5fb3b6:{NFSU2_TR(0x5fb3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb3b9:{NFSU2_TR(0x5fb3b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb3bb:{NFSU2_TR(0x5fb3bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb5b4;}}
}
B5fb3c1:L5fb3c1:{c.instructions+=3;NFSU2_TR(0x5fb3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb3c7:{NFSU2_TR(0x5fb3c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb3c9:{NFSU2_TR(0x5fb3c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb5b4;}}
}
B5fb3cf:L5fb3cf:{c.instructions+=6;NFSU2_TR(0x5fb3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb3d5:{NFSU2_TR(0x5fb3d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb3d7:{NFSU2_TR(0x5fb3d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B5fb3da:{NFSU2_TR(0x5fb3da);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb3dc:{NFSU2_TR(0x5fb3dc);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fb3e0:{NFSU2_TR(0x5fb3e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb496;}}
}
B5fb3e6:L5fb3e6:{c.instructions+=6;NFSU2_TR(0x5fb3e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb3ea:{NFSU2_TR(0x5fb3ea);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fb3f0:{NFSU2_TR(0x5fb3f0);
{u32 ea_=u32(u32(8017228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb3f6:{NFSU2_TR(0x5fb3f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb3f8:{NFSU2_TR(0x5fb3f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb3fb:{NFSU2_TR(0x5fb3fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb48e;}}
}
B5fb401:L5fb401:{c.instructions+=2;NFSU2_TR(0x5fb401);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb407:{NFSU2_TR(0x5fb407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb40cull));
TAIL_STATIC(0x401820u,401);
}
B5fb40c:L5fb40c:{c.instructions+=2;NFSU2_TR(0x5fb40c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb40e:{NFSU2_TR(0x5fb40e);
if(r1(R+518)){{goto L5fb48e;}}
}
B5fb410:L5fb410:{c.instructions+=2;NFSU2_TR(0x5fb410);
__builtin_memmove((R+4),(R+24),4);
}
B5fb412:{NFSU2_TR(0x5fb412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb417ull));
TAIL_STATIC(0x5ea150u,5ea);
}
B5fb417:L5fb417:{c.instructions+=4;NFSU2_TR(0x5fb417);
{u32 ea_=u32(u32(8017236u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb41d:{NFSU2_TR(0x5fb41d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb41f:{NFSU2_TR(0x5fb41f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb422:{NFSU2_TR(0x5fb422);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb48e;}}
}
B5fb424:L5fb424:{c.instructions+=2;NFSU2_TR(0x5fb424);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb429:{NFSU2_TR(0x5fb429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb42eull));
TAIL_STATIC(0x43c1f0u,43c);
}
B5fb42e:L5fb42e:{c.instructions+=5;NFSU2_TR(0x5fb42e);
{u32 ea_=u32(u32(8017232u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb434:{NFSU2_TR(0x5fb434);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fb437:{NFSU2_TR(0x5fb437);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb439:{NFSU2_TR(0x5fb439);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fb43c:{NFSU2_TR(0x5fb43c);
if(r1(R+514)){{goto L5fb5b4;}}
}
B5fb442:L5fb442:{c.instructions+=1;NFSU2_TR(0x5fb442);
{goto L5fb496;}
}
B5fb444:L5fb444:{c.instructions+=8;NFSU2_TR(0x5fb444);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb448:{NFSU2_TR(0x5fb448);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb44a:{NFSU2_TR(0x5fb44a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb44c:{NFSU2_TR(0x5fb44c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb44e:{NFSU2_TR(0x5fb44e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb44f:{NFSU2_TR(0x5fb44f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb450:{NFSU2_TR(0x5fb450);
w4(R+4,u32(0x828770ull));
}
B5fb455:{NFSU2_TR(0x5fb455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb45aull));
TAIL_STATIC(0x44fe80u,44f);
}
B5fb45a:L5fb45a:{c.instructions+=1;NFSU2_TR(0x5fb45a);
__builtin_memmove((R+20),(R+0),4);
}
B5fb45c:L5fb45c:{c.instructions+=2;NFSU2_TR(0x5fb45c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb45e:{NFSU2_TR(0x5fb45e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fb2f5u);}goto L5fb2f5;}}
}
B5fb464:L5fb464:{c.instructions+=2;NFSU2_TR(0x5fb464);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+4,u32(r1(U+0)));
}
B5fb468:{NFSU2_TR(0x5fb468);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fb2f7u);}goto L5fb2f7;}
}
B5fb46d:L5fb46d:{c.instructions+=2;NFSU2_TR(0x5fb46d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb46f:{NFSU2_TR(0x5fb46f);
if(r1(R+518)){{goto L5fb47c;}}
}
B5fb471:L5fb471:{c.instructions+=3;NFSU2_TR(0x5fb471);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb474:{NFSU2_TR(0x5fb474);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb476:{NFSU2_TR(0x5fb476);
if(r1(R+518)){{goto L5fb47c;}}
}
B5fb478:L5fb478:{c.instructions+=2;NFSU2_TR(0x5fb478);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fb47a:{NFSU2_TR(0x5fb47a);
{goto L5fb481;}
}
B5fb47c:L5fb47c:{c.instructions+=1;NFSU2_TR(0x5fb47c);
w4(R+0,u32(0x1ull));
}
B5fb481:L5fb481:{c.instructions+=3;NFSU2_TR(0x5fb481);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb482:{NFSU2_TR(0x5fb482);
__builtin_memmove((R+4),(R+24),4);
}
B5fb484:{NFSU2_TR(0x5fb484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb489ull));
TAIL_STATIC(0x5fa820u,5fa);
}
B5fb489:L5fb489:{c.instructions+=2;NFSU2_TR(0x5fb489);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb48b:{NFSU2_TR(0x5fb48b);
__builtin_memmove((R+12),(R+518),1);
}
B5fb48e:L5fb48e:{c.instructions+=2;NFSU2_TR(0x5fb48e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb490:{NFSU2_TR(0x5fb490);
if(r1(R+518)){{goto L5fb5b4;}}
}
B5fb496:L5fb496:{c.instructions+=10;NFSU2_TR(0x5fb496);
{u32 ea_=u32(u32(8017200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fb49c:{NFSU2_TR(0x5fb49c);
{u32 ea_=u32(u32(8017204u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fb4a2:{NFSU2_TR(0x5fb4a2);
{u32 ea_=u32(u32(8017208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fb4a8:{NFSU2_TR(0x5fb4a8);
{u32 ea_=u32(u32(8017212u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fb4ae:{NFSU2_TR(0x5fb4ae);
{u32 ea_=u32(u32(8017216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fb4b4:{NFSU2_TR(0x5fb4b4);
{u32 ea_=u32(u32(8017220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fb4ba:{NFSU2_TR(0x5fb4ba);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fb4be:{NFSU2_TR(0x5fb4be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb4c2:{NFSU2_TR(0x5fb4c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb4c3:{NFSU2_TR(0x5fb4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb4c8ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B5fb4c8:L5fb4c8:{c.instructions+=6;NFSU2_TR(0x5fb4c8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fb4cc:{NFSU2_TR(0x5fb4cc);
__builtin_memmove((R+8),gp(0x7a5530),4);
}
B5fb4d2:{NFSU2_TR(0x5fb4d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fb4d5:{NFSU2_TR(0x5fb4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb4d9:{NFSU2_TR(0x5fb4d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5fb4db:{NFSU2_TR(0x5fb4db);
{goto L5fb4e0;}
}
B5fb4e0:L5fb4e0:{c.instructions+=7;NFSU2_TR(0x5fb4e0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fb4e4:{NFSU2_TR(0x5fb4e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb4e8:{NFSU2_TR(0x5fb4e8);
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
B5fb4ea:{NFSU2_TR(0x5fb4ea);
{u32 ea_=u32(r4(R+28)+u32(8017204u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fb4f0:{NFSU2_TR(0x5fb4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x802134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5fb4f6:{NFSU2_TR(0x5fb4f6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fb4fa:{NFSU2_TR(0x5fb4fa);
if(r1(R+518)){{goto L5fb50b;}}
}
B5fb4fc:L5fb4fc:{c.instructions+=3;NFSU2_TR(0x5fb4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb502:{NFSU2_TR(0x5fb502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fb504:{NFSU2_TR(0x5fb504);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb507ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb507:L5fb507:{c.instructions+=2;NFSU2_TR(0x5fb507);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fb509:{NFSU2_TR(0x5fb509);
if(r1(R+518)){{goto L5fb51a;}}
}
B5fb50b:L5fb50b:{c.instructions+=5;NFSU2_TR(0x5fb50b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fb50f:{NFSU2_TR(0x5fb50f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fb513:{NFSU2_TR(0x5fb513);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fb515:{NFSU2_TR(0x5fb515);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb518:{NFSU2_TR(0x5fb518);
if(r1(R+518)){{goto L5fb522;}}
}
B5fb51a:L5fb51a:{c.instructions+=3;NFSU2_TR(0x5fb51a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5fb51d:{NFSU2_TR(0x5fb51d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fb520:{NFSU2_TR(0x5fb520);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fb4e0u);}goto L5fb4e0;}}
}
B5fb522:L5fb522:{c.instructions+=3;NFSU2_TR(0x5fb522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb528:{NFSU2_TR(0x5fb528);
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
B5fb52a:{NFSU2_TR(0x5fb52a);
if(r1(R+518)){{goto L5fb532;}}
}
B5fb52c:L5fb52c:{c.instructions+=3;NFSU2_TR(0x5fb52c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fb52e:{NFSU2_TR(0x5fb52e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb52f:{NFSU2_TR(0x5fb52f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb532ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb532:L5fb532:{c.instructions+=12;NFSU2_TR(0x5fb532);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5fb537:{NFSU2_TR(0x5fb537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb53d:{NFSU2_TR(0x5fb53d);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5fb543:{NFSU2_TR(0x5fb543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fb544:{NFSU2_TR(0x5fb544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb54a:{NFSU2_TR(0x5fb54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb550:{NFSU2_TR(0x5fb550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fb551:{NFSU2_TR(0x5fb551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fb552:{NFSU2_TR(0x5fb552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb558:{NFSU2_TR(0x5fb558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fb559:{NFSU2_TR(0x5fb559);
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
B5fb55c:{NFSU2_TR(0x5fb55c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fb55d:L5fb55d:{c.instructions+=3;NFSU2_TR(0x5fb55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb563:{NFSU2_TR(0x5fb563);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb565:{NFSU2_TR(0x5fb565);
if(r1(R+518)){{goto L5fb57a;}}
}
B5fb567:L5fb567:{c.instructions+=2;NFSU2_TR(0x5fb567);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fb56c:{NFSU2_TR(0x5fb56c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb57a;}}
}
B5fb56e:L5fb56e:{c.instructions+=2;NFSU2_TR(0x5fb56e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5fb570:{NFSU2_TR(0x5fb570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb57a;}}
}
B5fb572:L5fb572:{c.instructions+=3;NFSU2_TR(0x5fb572);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb576:{NFSU2_TR(0x5fb576);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb578:{NFSU2_TR(0x5fb578);
if(r1(R+518)){{goto L5fb5b4;}}
}
B5fb57a:L5fb57a:{c.instructions+=8;NFSU2_TR(0x5fb57a);
__builtin_memmove((R+0),gp(0x828770),4);
}
B5fb57f:{NFSU2_TR(0x5fb57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fb581:{NFSU2_TR(0x5fb581);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828774ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5fb588:{NFSU2_TR(0x5fb588);
__builtin_memmove((R+0),gp(0x828770),4);
}
B5fb58d:{NFSU2_TR(0x5fb58d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5fb58e:{NFSU2_TR(0x5fb58e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5fb591:{NFSU2_TR(0x5fb591);
__builtin_memmove(gp(0x828770),(R+0),4);
}
B5fb596:{NFSU2_TR(0x5fb596);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fb5a2;}}
}
B5fb598:L5fb598:{c.instructions+=1;NFSU2_TR(0x5fb598);
s4(0x828770,u32(0x0ull));
}
B5fb5a2:L5fb5a2:{c.instructions+=4;NFSU2_TR(0x5fb5a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb5a4:{NFSU2_TR(0x5fb5a4);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb5a6:{NFSU2_TR(0x5fb5a6);
__builtin_memmove((R+4),(R+24),4);
}
B5fb5a8:{NFSU2_TR(0x5fb5a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb5adull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B5fb5ad:L5fb5ad:{c.instructions+=1;NFSU2_TR(0x5fb5ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5fb5b4:L5fb5b4:{c.instructions+=3;NFSU2_TR(0x5fb5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fb5b5:{NFSU2_TR(0x5fb5b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fb5b6:{NFSU2_TR(0x5fb5b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fb5b7:L5fb5b7:{c.instructions+=5;NFSU2_TR(0x5fb5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb5bd:{NFSU2_TR(0x5fb5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb5c3:{NFSU2_TR(0x5fb5c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fb5c4:{NFSU2_TR(0x5fb5c4);
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
B5fb5c7:{NFSU2_TR(0x5fb5c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fb5c8:L5fb5c8:{c.instructions+=3;NFSU2_TR(0x5fb5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb5ce:{NFSU2_TR(0x5fb5ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb5d0:{NFSU2_TR(0x5fb5d0);
if(r1(R+518)){{goto L5fb5e1;}}
}
B5fb5d2:L5fb5d2:{c.instructions+=2;NFSU2_TR(0x5fb5d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fb5d6:{NFSU2_TR(0x5fb5d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fb5e1;}}
}
B5fb5d8:L5fb5d8:{c.instructions+=3;NFSU2_TR(0x5fb5d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb5da:{NFSU2_TR(0x5fb5da);
__builtin_memmove((R+4),(R+24),4);
}
B5fb5dc:{NFSU2_TR(0x5fb5dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb5e1ull));
TAIL_STATIC(0x5fa820u,5fa);
}
B5fb5e1:L5fb5e1:{c.instructions+=3;NFSU2_TR(0x5fb5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fb5e2:{NFSU2_TR(0x5fb5e2);
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
B5fb5e5:{NFSU2_TR(0x5fb5e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fb5f0:L5fb5f0:{c.instructions+=19;NFSU2_TR(0x5fb5f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb5f1:{NFSU2_TR(0x5fb5f1);
__builtin_memmove((R+20),(R+16),4);
}
B5fb5f3:{NFSU2_TR(0x5fb5f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5fb5f6:{NFSU2_TR(0x5fb5f6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb5f8:{NFSU2_TR(0x5fb5f8);
u8 U[4];
w4(U+0,u32(0x779c3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb5fd:{NFSU2_TR(0x5fb5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb603:{NFSU2_TR(0x5fb603);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb604:{NFSU2_TR(0x5fb604);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb60b:{NFSU2_TR(0x5fb60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B5fb60e:{NFSU2_TR(0x5fb60e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb60f:{NFSU2_TR(0x5fb60f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb610:{NFSU2_TR(0x5fb610);
__builtin_memmove((R+24),(R+4),4);
}
B5fb612:{NFSU2_TR(0x5fb612);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5fb616:{NFSU2_TR(0x5fb616);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb617:{NFSU2_TR(0x5fb617);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb618:{NFSU2_TR(0x5fb618);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb61c:{NFSU2_TR(0x5fb61c);
u8 U[4];
w4(U+0,u32(0x7a2468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb621:{NFSU2_TR(0x5fb621);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb622:{NFSU2_TR(0x5fb622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb627ull));
TAIL_STATIC(0x4400d0u,440);
}
B5fb627:L5fb627:{c.instructions+=7;NFSU2_TR(0x5fb627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fb62a:{NFSU2_TR(0x5fb62a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5fb62d:{NFSU2_TR(0x5fb62d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb631:{NFSU2_TR(0x5fb631);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb632:{NFSU2_TR(0x5fb632);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb634:{NFSU2_TR(0x5fb634);
__builtin_memmove((R+4),(R+28),4);
}
B5fb636:{NFSU2_TR(0x5fb636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb63bull));
TAIL_STATIC(0x578ce0u,578);
}
B5fb63b:L5fb63b:{c.instructions+=7;NFSU2_TR(0x5fb63b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb63d:{NFSU2_TR(0x5fb63d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb63f:{NFSU2_TR(0x5fb63f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb641:{NFSU2_TR(0x5fb641);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb647:{NFSU2_TR(0x5fb647);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb648:{NFSU2_TR(0x5fb648);
__builtin_memmove((R+4),(R+28),4);
}
B5fb64a:{NFSU2_TR(0x5fb64a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb64full));
TAIL_STATIC(0x571640u,571);
}
B5fb64f:L5fb64f:{c.instructions+=7;NFSU2_TR(0x5fb64f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb651:{NFSU2_TR(0x5fb651);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb653:{NFSU2_TR(0x5fb653);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb655:{NFSU2_TR(0x5fb655);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb65b:{NFSU2_TR(0x5fb65b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb65c:{NFSU2_TR(0x5fb65c);
__builtin_memmove((R+4),(R+28),4);
}
B5fb65e:{NFSU2_TR(0x5fb65e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb663ull));
TAIL_STATIC(0x571640u,571);
}
B5fb663:L5fb663:{c.instructions+=4;NFSU2_TR(0x5fb663);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x92cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb669:{NFSU2_TR(0x5fb669);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb66a:{NFSU2_TR(0x5fb66a);
__builtin_memmove((R+4),(R+28),4);
}
B5fb66c:{NFSU2_TR(0x5fb66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb671ull));
TAIL_STATIC(0x571770u,571);
}
B5fb671:L5fb671:{c.instructions+=4;NFSU2_TR(0x5fb671);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x930ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb677:{NFSU2_TR(0x5fb677);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb678:{NFSU2_TR(0x5fb678);
__builtin_memmove((R+4),(R+28),4);
}
B5fb67a:{NFSU2_TR(0x5fb67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb67full));
TAIL_STATIC(0x571770u,571);
}
B5fb67f:L5fb67f:{c.instructions+=4;NFSU2_TR(0x5fb67f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x934ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb685:{NFSU2_TR(0x5fb685);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb686:{NFSU2_TR(0x5fb686);
__builtin_memmove((R+4),(R+28),4);
}
B5fb688:{NFSU2_TR(0x5fb688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb68dull));
TAIL_STATIC(0x571770u,571);
}
B5fb68d:L5fb68d:{c.instructions+=4;NFSU2_TR(0x5fb68d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x938ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb693:{NFSU2_TR(0x5fb693);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb694:{NFSU2_TR(0x5fb694);
__builtin_memmove((R+4),(R+28),4);
}
B5fb696:{NFSU2_TR(0x5fb696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb69bull));
TAIL_STATIC(0x571770u,571);
}
B5fb69b:L5fb69b:{c.instructions+=7;NFSU2_TR(0x5fb69b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb69d:{NFSU2_TR(0x5fb69d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb69f:{NFSU2_TR(0x5fb69f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6a1:{NFSU2_TR(0x5fb6a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93dull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb6a7:{NFSU2_TR(0x5fb6a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6a8:{NFSU2_TR(0x5fb6a8);
__builtin_memmove((R+4),(R+28),4);
}
B5fb6aa:{NFSU2_TR(0x5fb6aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb6afull));
TAIL_STATIC(0x571640u,571);
}
B5fb6af:L5fb6af:{c.instructions+=7;NFSU2_TR(0x5fb6af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6b1:{NFSU2_TR(0x5fb6b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6b3:{NFSU2_TR(0x5fb6b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6b5:{NFSU2_TR(0x5fb6b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x93cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb6bb:{NFSU2_TR(0x5fb6bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6bc:{NFSU2_TR(0x5fb6bc);
__builtin_memmove((R+4),(R+28),4);
}
B5fb6be:{NFSU2_TR(0x5fb6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb6c3ull));
TAIL_STATIC(0x571640u,571);
}
B5fb6c3:L5fb6c3:{c.instructions+=7;NFSU2_TR(0x5fb6c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6c5:{NFSU2_TR(0x5fb6c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6c7:{NFSU2_TR(0x5fb6c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6c9:{NFSU2_TR(0x5fb6c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x926ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb6cf:{NFSU2_TR(0x5fb6cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6d0:{NFSU2_TR(0x5fb6d0);
__builtin_memmove((R+4),(R+28),4);
}
B5fb6d2:{NFSU2_TR(0x5fb6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb6d7ull));
TAIL_STATIC(0x571640u,571);
}
B5fb6d7:L5fb6d7:{c.instructions+=7;NFSU2_TR(0x5fb6d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6d9:{NFSU2_TR(0x5fb6d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6db:{NFSU2_TR(0x5fb6db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6dd:{NFSU2_TR(0x5fb6dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x927ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb6e3:{NFSU2_TR(0x5fb6e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6e4:{NFSU2_TR(0x5fb6e4);
__builtin_memmove((R+4),(R+28),4);
}
B5fb6e6:{NFSU2_TR(0x5fb6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb6ebull));
TAIL_STATIC(0x571640u,571);
}
B5fb6eb:L5fb6eb:{c.instructions+=7;NFSU2_TR(0x5fb6eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6ed:{NFSU2_TR(0x5fb6ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6ef:{NFSU2_TR(0x5fb6ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x928ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb6f5:{NFSU2_TR(0x5fb6f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6f7:{NFSU2_TR(0x5fb6f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb6f8:{NFSU2_TR(0x5fb6f8);
__builtin_memmove((R+4),(R+28),4);
}
B5fb6fa:{NFSU2_TR(0x5fb6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb6ffull));
TAIL_STATIC(0x571640u,571);
}
B5fb6ff:L5fb6ff:{c.instructions+=7;NFSU2_TR(0x5fb6ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb701:{NFSU2_TR(0x5fb701);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb703:{NFSU2_TR(0x5fb703);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb705:{NFSU2_TR(0x5fb705);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x944ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb70b:{NFSU2_TR(0x5fb70b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb70c:{NFSU2_TR(0x5fb70c);
__builtin_memmove((R+4),(R+28),4);
}
B5fb70e:{NFSU2_TR(0x5fb70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb713ull));
TAIL_STATIC(0x571640u,571);
}
B5fb713:L5fb713:{c.instructions+=4;NFSU2_TR(0x5fb713);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x948ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb719:{NFSU2_TR(0x5fb719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb71a:{NFSU2_TR(0x5fb71a);
__builtin_memmove((R+4),(R+28),4);
}
B5fb71c:{NFSU2_TR(0x5fb71c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb721ull));
TAIL_STATIC(0x571770u,571);
}
B5fb721:L5fb721:{c.instructions+=7;NFSU2_TR(0x5fb721);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb723:{NFSU2_TR(0x5fb723);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb725:{NFSU2_TR(0x5fb725);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb727:{NFSU2_TR(0x5fb727);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb72d:{NFSU2_TR(0x5fb72d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb72e:{NFSU2_TR(0x5fb72e);
__builtin_memmove((R+4),(R+28),4);
}
B5fb730:{NFSU2_TR(0x5fb730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb735ull));
TAIL_STATIC(0x571640u,571);
}
B5fb735:L5fb735:{c.instructions+=4;NFSU2_TR(0x5fb735);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb73b:{NFSU2_TR(0x5fb73b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb73c:{NFSU2_TR(0x5fb73c);
__builtin_memmove((R+4),(R+28),4);
}
B5fb73e:{NFSU2_TR(0x5fb73e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb743ull));
TAIL_STATIC(0x571770u,571);
}
B5fb743:L5fb743:{c.instructions+=4;NFSU2_TR(0x5fb743);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x950ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb749:{NFSU2_TR(0x5fb749);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb74a:{NFSU2_TR(0x5fb74a);
__builtin_memmove((R+4),(R+28),4);
}
B5fb74c:{NFSU2_TR(0x5fb74c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb751ull));
TAIL_STATIC(0x571770u,571);
}
B5fb751:L5fb751:{c.instructions+=7;NFSU2_TR(0x5fb751);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb753:{NFSU2_TR(0x5fb753);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb755:{NFSU2_TR(0x5fb755);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb757:{NFSU2_TR(0x5fb757);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x954ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb75d:{NFSU2_TR(0x5fb75d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb75e:{NFSU2_TR(0x5fb75e);
__builtin_memmove((R+4),(R+28),4);
}
B5fb760:{NFSU2_TR(0x5fb760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb765ull));
TAIL_STATIC(0x571640u,571);
}
B5fb765:L5fb765:{c.instructions+=4;NFSU2_TR(0x5fb765);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb76b:{NFSU2_TR(0x5fb76b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb76c:{NFSU2_TR(0x5fb76c);
__builtin_memmove((R+4),(R+28),4);
}
B5fb76e:{NFSU2_TR(0x5fb76e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb773ull));
TAIL_STATIC(0x5716c0u,571);
}
B5fb773:L5fb773:{c.instructions+=4;NFSU2_TR(0x5fb773);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95dull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb779:{NFSU2_TR(0x5fb779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb77a:{NFSU2_TR(0x5fb77a);
__builtin_memmove((R+4),(R+28),4);
}
B5fb77c:{NFSU2_TR(0x5fb77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb781ull));
TAIL_STATIC(0x5716c0u,571);
}
B5fb781:L5fb781:{c.instructions+=7;NFSU2_TR(0x5fb781);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb783:{NFSU2_TR(0x5fb783);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb785:{NFSU2_TR(0x5fb785);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb787:{NFSU2_TR(0x5fb787);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x964ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb78d:{NFSU2_TR(0x5fb78d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb78e:{NFSU2_TR(0x5fb78e);
__builtin_memmove((R+4),(R+28),4);
}
B5fb790:{NFSU2_TR(0x5fb790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb795ull));
TAIL_STATIC(0x571640u,571);
}
B5fb795:L5fb795:{c.instructions+=4;NFSU2_TR(0x5fb795);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x960ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb79b:{NFSU2_TR(0x5fb79b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb79c:{NFSU2_TR(0x5fb79c);
__builtin_memmove((R+4),(R+28),4);
}
B5fb79e:{NFSU2_TR(0x5fb79e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb7a3ull));
TAIL_STATIC(0x571770u,571);
}
B5fb7a3:L5fb7a3:{c.instructions+=3;NFSU2_TR(0x5fb7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb7a9:{NFSU2_TR(0x5fb7a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb7ab:{NFSU2_TR(0x5fb7ab);
if(r1(R+518)){{goto L5fb7b3;}}
}
B5fb7ad:L5fb7ad:{c.instructions+=2;NFSU2_TR(0x5fb7ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb7ae:{NFSU2_TR(0x5fb7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb7b3ull));
TAIL_STATIC(0x610e90u,610);
}
B5fb7b3:L5fb7b3:{c.instructions+=6;NFSU2_TR(0x5fb7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb7b6:{NFSU2_TR(0x5fb7b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5fb7b9:{NFSU2_TR(0x5fb7b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B5fb7bc:{NFSU2_TR(0x5fb7bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb7bd:{NFSU2_TR(0x5fb7bd);
__builtin_memmove((R+4),(R+28),4);
}
B5fb7bf:{NFSU2_TR(0x5fb7bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb7c4ull));
TAIL_STATIC(0x5716c0u,571);
}
B5fb7c4:L5fb7c4:{c.instructions+=3;NFSU2_TR(0x5fb7c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb7c7:{NFSU2_TR(0x5fb7c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb7c9:{NFSU2_TR(0x5fb7c9);
if(r1(R+518)){{goto L5fb7fd;}}
}
B5fb7cb:L5fb7cb:{c.instructions+=4;NFSU2_TR(0x5fb7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb7ce:{NFSU2_TR(0x5fb7ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb7d1:{NFSU2_TR(0x5fb7d1);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5fb7d3:{NFSU2_TR(0x5fb7d3);
if(r1(R+518)){{goto L5fb7e0;}}
}
B5fb7d5:L5fb7d5:{c.instructions+=4;NFSU2_TR(0x5fb7d5);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B5fb7d8:{NFSU2_TR(0x5fb7d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb7d9:{NFSU2_TR(0x5fb7d9);
__builtin_memmove((R+4),(R+24),4);
}
B5fb7db:{NFSU2_TR(0x5fb7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb7e0ull));
TAIL_STATIC(0x6380c0u,638);
}
B5fb7e0:L5fb7e0:{c.instructions+=3;NFSU2_TR(0x5fb7e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb7e3:{NFSU2_TR(0x5fb7e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fb7e5:{NFSU2_TR(0x5fb7e5);
if(r1(R+518)){{goto L5fb7fd;}}
}
B5fb7e7:L5fb7e7:{c.instructions+=6;NFSU2_TR(0x5fb7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fb7ea:{NFSU2_TR(0x5fb7ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fb7ec:{NFSU2_TR(0x5fb7ec);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5fb7f2:{NFSU2_TR(0x5fb7f2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5fb7f8:{NFSU2_TR(0x5fb7f8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5fb7fa:{NFSU2_TR(0x5fb7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb7fd:L5fb7fd:{c.instructions+=7;NFSU2_TR(0x5fb7fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb7ff:{NFSU2_TR(0x5fb7ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb801:{NFSU2_TR(0x5fb801);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb803:{NFSU2_TR(0x5fb803);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb809:{NFSU2_TR(0x5fb809);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb80a:{NFSU2_TR(0x5fb80a);
__builtin_memmove((R+4),(R+28),4);
}
B5fb80c:{NFSU2_TR(0x5fb80c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb811ull));
TAIL_STATIC(0x571640u,571);
}
B5fb811:L5fb811:{c.instructions+=11;NFSU2_TR(0x5fb811);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fb814:{NFSU2_TR(0x5fb814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb817:{NFSU2_TR(0x5fb817);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb819:{NFSU2_TR(0x5fb819);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb81b:{NFSU2_TR(0x5fb81b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb81d:{NFSU2_TR(0x5fb81d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb821:{NFSU2_TR(0x5fb821);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb822:{NFSU2_TR(0x5fb822);
__builtin_memmove((R+4),(R+28),4);
}
B5fb824:{NFSU2_TR(0x5fb824);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb828:{NFSU2_TR(0x5fb828);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb82c:{NFSU2_TR(0x5fb82c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb831ull));
TAIL_STATIC(0x571640u,571);
}
B5fb831:L5fb831:{c.instructions+=7;NFSU2_TR(0x5fb831);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb833:{NFSU2_TR(0x5fb833);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb835:{NFSU2_TR(0x5fb835);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb837:{NFSU2_TR(0x5fb837);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb83b:{NFSU2_TR(0x5fb83b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb83c:{NFSU2_TR(0x5fb83c);
__builtin_memmove((R+4),(R+28),4);
}
B5fb83e:{NFSU2_TR(0x5fb83e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb843ull));
TAIL_STATIC(0x571640u,571);
}
B5fb843:L5fb843:{c.instructions+=3;NFSU2_TR(0x5fb843);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb846:{NFSU2_TR(0x5fb846);
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
B5fb848:{NFSU2_TR(0x5fb848);
if(r1(R+518)){{goto L5fb8f0;}}
}
B5fb84e:L5fb84e:{c.instructions+=6;NFSU2_TR(0x5fb84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fb851:{NFSU2_TR(0x5fb851);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fb853:{NFSU2_TR(0x5fb853);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb855:{NFSU2_TR(0x5fb855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb858:{NFSU2_TR(0x5fb858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb85b:{NFSU2_TR(0x5fb85b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb860ull));
TAIL_STATIC(0x575620u,575);
}
B5fb860:L5fb860:{c.instructions+=5;NFSU2_TR(0x5fb860);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fb863:{NFSU2_TR(0x5fb863);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb867:{NFSU2_TR(0x5fb867);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb869:{NFSU2_TR(0x5fb869);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fb871:{NFSU2_TR(0x5fb871);
if(r1(R+518)){{goto L5fb87d;}}
}
B5fb873:L5fb873:{c.instructions+=3;NFSU2_TR(0x5fb873);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb874:{NFSU2_TR(0x5fb874);
__builtin_memmove((R+4),(R+0),4);
}
B5fb876:{NFSU2_TR(0x5fb876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb87bull));
TAIL_STATIC(0x5eb930u,5eb);
}
B5fb87b:L5fb87b:{c.instructions+=1;NFSU2_TR(0x5fb87b);
{goto L5fb87f;}
}
B5fb87d:L5fb87d:{c.instructions+=1;NFSU2_TR(0x5fb87d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fb87f:L5fb87f:{c.instructions+=4;NFSU2_TR(0x5fb87f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5fb881:{NFSU2_TR(0x5fb881);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fb889:{NFSU2_TR(0x5fb889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb88c:{NFSU2_TR(0x5fb88c);
if(r1(R+518)){{goto L5fb896;}}
}
B5fb88e:L5fb88e:{c.instructions+=4;NFSU2_TR(0x5fb88e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fb890:{NFSU2_TR(0x5fb890);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb892:{NFSU2_TR(0x5fb892);
__builtin_memmove((R+4),(R+12),4);
}
B5fb894:{NFSU2_TR(0x5fb894);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb896ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5fb896:L5fb896:{c.instructions+=17;NFSU2_TR(0x5fb896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb899:{NFSU2_TR(0x5fb899);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb89c:{NFSU2_TR(0x5fb89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb89f:{NFSU2_TR(0x5fb89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb8a2:{NFSU2_TR(0x5fb8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb8a5:{NFSU2_TR(0x5fb8a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5fb8a9:{NFSU2_TR(0x5fb8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb8ac:{NFSU2_TR(0x5fb8ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5fb8b3:{NFSU2_TR(0x5fb8b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5fb8b7:{NFSU2_TR(0x5fb8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fb8ba:{NFSU2_TR(0x5fb8ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5fb8c1:{NFSU2_TR(0x5fb8c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5fb8c5:{NFSU2_TR(0x5fb8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb8c8:{NFSU2_TR(0x5fb8c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ceb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5fb8cf:{NFSU2_TR(0x5fb8cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb8d1:{NFSU2_TR(0x5fb8d1);
__builtin_memmove((R+4),(R+24),4);
}
B5fb8d3:{NFSU2_TR(0x5fb8d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb8d8ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5fb8d8:L5fb8d8:{c.instructions+=4;NFSU2_TR(0x5fb8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fb8dc:{NFSU2_TR(0x5fb8dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb8dd:{NFSU2_TR(0x5fb8dd);
__builtin_memmove((R+4),(R+24),4);
}
B5fb8df:{NFSU2_TR(0x5fb8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb8e4ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5fb8e4:L5fb8e4:{c.instructions+=4;NFSU2_TR(0x5fb8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fb8e8:{NFSU2_TR(0x5fb8e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb8e9:{NFSU2_TR(0x5fb8e9);
__builtin_memmove((R+4),(R+24),4);
}
B5fb8eb:{NFSU2_TR(0x5fb8eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb8f0ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B5fb8f0:L5fb8f0:{c.instructions+=4;NFSU2_TR(0x5fb8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb8f3:{NFSU2_TR(0x5fb8f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fb8f5:{NFSU2_TR(0x5fb8f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb8f6:{NFSU2_TR(0x5fb8f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb8f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb8f9:L5fb8f9:{c.instructions+=4;NFSU2_TR(0x5fb8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb8fc:{NFSU2_TR(0x5fb8fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fb8fe:{NFSU2_TR(0x5fb8fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb8ff:{NFSU2_TR(0x5fb8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb902ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb902:L5fb902:{c.instructions+=7;NFSU2_TR(0x5fb902);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb904:{NFSU2_TR(0x5fb904);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb906:{NFSU2_TR(0x5fb906);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb908:{NFSU2_TR(0x5fb908);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb90b:{NFSU2_TR(0x5fb90b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb90c:{NFSU2_TR(0x5fb90c);
__builtin_memmove((R+4),(R+28),4);
}
B5fb90e:{NFSU2_TR(0x5fb90e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb913ull));
TAIL_STATIC(0x571640u,571);
}
B5fb913:L5fb913:{c.instructions+=3;NFSU2_TR(0x5fb913);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb914:{NFSU2_TR(0x5fb914);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb917:{NFSU2_TR(0x5fb917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb91cull));
TAIL_STATIC(0x59f520u,59f);
}
B5fb91c:L5fb91c:{c.instructions+=3;NFSU2_TR(0x5fb91c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fb91f:{NFSU2_TR(0x5fb91f);
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
B5fb921:{NFSU2_TR(0x5fb921);
if(r1(R+518)){{goto L5fb96a;}}
}
B5fb923:L5fb923:{c.instructions+=4;NFSU2_TR(0x5fb923);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb926:{NFSU2_TR(0x5fb926);
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
B5fb928:{NFSU2_TR(0x5fb928);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(s32(s16(r2(U+4)))));
}
B5fb92c:{NFSU2_TR(0x5fb92c);
if(r1(R+518)){{goto L5fb934;}}
}
B5fb92e:L5fb92e:{c.instructions+=3;NFSU2_TR(0x5fb92e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fb930:{NFSU2_TR(0x5fb930);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb932:{NFSU2_TR(0x5fb932);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb934ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5fb934:L5fb934:{c.instructions+=3;NFSU2_TR(0x5fb934);
__builtin_memmove((R+0),gp(0x86ad60),4);
}
B5fb939:{NFSU2_TR(0x5fb939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb93a:{NFSU2_TR(0x5fb93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb93full));
TAIL_STATIC(0x440e50u,440);
}
B5fb93f:L5fb93f:{c.instructions+=5;NFSU2_TR(0x5fb93f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fb942:{NFSU2_TR(0x5fb942);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb946:{NFSU2_TR(0x5fb946);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fb948:{NFSU2_TR(0x5fb948);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fb950:{NFSU2_TR(0x5fb950);
if(r1(R+518)){{goto L5fb95d;}}
}
B5fb952:L5fb952:{c.instructions+=4;NFSU2_TR(0x5fb952);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb953:{NFSU2_TR(0x5fb953);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb954:{NFSU2_TR(0x5fb954);
__builtin_memmove((R+4),(R+0),4);
}
B5fb956:{NFSU2_TR(0x5fb956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb95bull));
TAIL_STATIC(0x5aec20u,5ae);
}
B5fb95b:L5fb95b:{c.instructions+=1;NFSU2_TR(0x5fb95b);
{goto L5fb95f;}
}
B5fb95d:L5fb95d:{c.instructions+=1;NFSU2_TR(0x5fb95d);
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
B5fb95f:L5fb95f:{c.instructions+=2;NFSU2_TR(0x5fb95f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fb967:{NFSU2_TR(0x5fb967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fb96a:L5fb96a:{c.instructions+=4;NFSU2_TR(0x5fb96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fb96d:{NFSU2_TR(0x5fb96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fb96f:{NFSU2_TR(0x5fb96f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb970:{NFSU2_TR(0x5fb970);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb973ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fb973:L5fb973:{c.instructions+=4;NFSU2_TR(0x5fb973);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb979:{NFSU2_TR(0x5fb979);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb97a:{NFSU2_TR(0x5fb97a);
__builtin_memmove((R+4),(R+28),4);
}
B5fb97c:{NFSU2_TR(0x5fb97c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb981ull));
TAIL_STATIC(0x571770u,571);
}
B5fb981:L5fb981:{c.instructions+=7;NFSU2_TR(0x5fb981);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb983:{NFSU2_TR(0x5fb983);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb985:{NFSU2_TR(0x5fb985);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb987:{NFSU2_TR(0x5fb987);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb98d:{NFSU2_TR(0x5fb98d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb98e:{NFSU2_TR(0x5fb98e);
__builtin_memmove((R+4),(R+28),4);
}
B5fb990:{NFSU2_TR(0x5fb990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb995ull));
TAIL_STATIC(0x571640u,571);
}
B5fb995:L5fb995:{c.instructions+=7;NFSU2_TR(0x5fb995);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb997:{NFSU2_TR(0x5fb997);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb999:{NFSU2_TR(0x5fb999);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb99b:{NFSU2_TR(0x5fb99b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb9a1:{NFSU2_TR(0x5fb9a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9a2:{NFSU2_TR(0x5fb9a2);
__builtin_memmove((R+4),(R+28),4);
}
B5fb9a4:{NFSU2_TR(0x5fb9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb9a9ull));
TAIL_STATIC(0x571640u,571);
}
B5fb9a9:L5fb9a9:{c.instructions+=4;NFSU2_TR(0x5fb9a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb9af:{NFSU2_TR(0x5fb9af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9b0:{NFSU2_TR(0x5fb9b0);
__builtin_memmove((R+4),(R+28),4);
}
B5fb9b2:{NFSU2_TR(0x5fb9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb9b7ull));
TAIL_STATIC(0x571770u,571);
}
B5fb9b7:L5fb9b7:{c.instructions+=4;NFSU2_TR(0x5fb9b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb9bd:{NFSU2_TR(0x5fb9bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9be:{NFSU2_TR(0x5fb9be);
__builtin_memmove((R+4),(R+28),4);
}
B5fb9c0:{NFSU2_TR(0x5fb9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb9c5ull));
TAIL_STATIC(0x5716c0u,571);
}
B5fb9c5:L5fb9c5:{c.instructions+=7;NFSU2_TR(0x5fb9c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9c7:{NFSU2_TR(0x5fb9c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9c9:{NFSU2_TR(0x5fb9c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9cb:{NFSU2_TR(0x5fb9cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x551ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb9d1:{NFSU2_TR(0x5fb9d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9d2:{NFSU2_TR(0x5fb9d2);
__builtin_memmove((R+4),(R+28),4);
}
B5fb9d4:{NFSU2_TR(0x5fb9d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb9d9ull));
TAIL_STATIC(0x571640u,571);
}
B5fb9d9:L5fb9d9:{c.instructions+=4;NFSU2_TR(0x5fb9d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x544ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fb9df:{NFSU2_TR(0x5fb9df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9e0:{NFSU2_TR(0x5fb9e0);
__builtin_memmove((R+4),(R+28),4);
}
B5fb9e2:{NFSU2_TR(0x5fb9e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb9e7ull));
TAIL_STATIC(0x571770u,571);
}
B5fb9e7:L5fb9e7:{c.instructions+=4;NFSU2_TR(0x5fb9e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x548ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fb9ed:{NFSU2_TR(0x5fb9ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9ee:{NFSU2_TR(0x5fb9ee);
__builtin_memmove((R+4),(R+28),4);
}
B5fb9f0:{NFSU2_TR(0x5fb9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fb9f5ull));
TAIL_STATIC(0x571770u,571);
}
B5fb9f5:L5fb9f5:{c.instructions+=4;NFSU2_TR(0x5fb9f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fb9fb:{NFSU2_TR(0x5fb9fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fb9fc:{NFSU2_TR(0x5fb9fc);
__builtin_memmove((R+4),(R+28),4);
}
B5fb9fe:{NFSU2_TR(0x5fb9fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fba03ull));
TAIL_STATIC(0x571770u,571);
}
B5fba03:L5fba03:{c.instructions+=3;NFSU2_TR(0x5fba03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba04:{NFSU2_TR(0x5fba04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fba0a:{NFSU2_TR(0x5fba0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fba0full));
TAIL_STATIC(0x5d5e20u,5d5);
}
B5fba0f:L5fba0f:{c.instructions+=4;NFSU2_TR(0x5fba0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x914ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fba15:{NFSU2_TR(0x5fba15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba16:{NFSU2_TR(0x5fba16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba17:{NFSU2_TR(0x5fba17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fba1cull));
TAIL_STATIC(0x60bd10u,60b);
}
B5fba1c:L5fba1c:{c.instructions+=4;NFSU2_TR(0x5fba1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fba1f:{NFSU2_TR(0x5fba1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fba22:{NFSU2_TR(0x5fba22);
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
B5fba24:{NFSU2_TR(0x5fba24);
if(r1(R+518)){{goto L5fba76;}}
}
B5fba26:L5fba26:{c.instructions+=10;NFSU2_TR(0x5fba26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fba2c:{NFSU2_TR(0x5fba2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba2d:{NFSU2_TR(0x5fba2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fba33:{NFSU2_TR(0x5fba33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba34:{NFSU2_TR(0x5fba34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fba36:{NFSU2_TR(0x5fba36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fba39:{NFSU2_TR(0x5fba39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba3a:{NFSU2_TR(0x5fba3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fba3d:{NFSU2_TR(0x5fba3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba3e:{NFSU2_TR(0x5fba3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fba43ull));
TAIL_STATIC(0x60bcf0u,60b);
}
B5fba43:L5fba43:{c.instructions+=5;NFSU2_TR(0x5fba43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fba45:{NFSU2_TR(0x5fba45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fba48:{NFSU2_TR(0x5fba48);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fba4b:{NFSU2_TR(0x5fba4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fba4d:{NFSU2_TR(0x5fba4d);
if(r1(R+518)){{goto L5fba76;}}
}
B5fba4f:L5fba4f:{c.instructions+=4;NFSU2_TR(0x5fba4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5fba53:{NFSU2_TR(0x5fba53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba54:{NFSU2_TR(0x5fba54);
__builtin_memmove((R+4),(R+28),4);
}
B5fba56:{NFSU2_TR(0x5fba56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fba5bull));
TAIL_STATIC(0x5716c0u,571);
}
B5fba5b:L5fba5b:{c.instructions+=7;NFSU2_TR(0x5fba5b);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5fba60:{NFSU2_TR(0x5fba60);
__builtin_memmove((R+4),(R+0),4);
}
B5fba62:{NFSU2_TR(0x5fba62);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5fba65:{NFSU2_TR(0x5fba65);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5fba68:{NFSU2_TR(0x5fba68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x970ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fba6e:{NFSU2_TR(0x5fba6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fba74:{NFSU2_TR(0x5fba74);
{goto L5fba97;}
}
B5fba76:L5fba76:{c.instructions+=9;NFSU2_TR(0x5fba76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x970ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5fba7c:{NFSU2_TR(0x5fba7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5fba82:{NFSU2_TR(0x5fba82);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B5fba85:{NFSU2_TR(0x5fba85);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fba89:{NFSU2_TR(0x5fba89);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+12))));
}
B5fba8b:{NFSU2_TR(0x5fba8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba8c:{NFSU2_TR(0x5fba8c);
__builtin_memmove((R+4),(R+28),4);
}
B5fba8e:{NFSU2_TR(0x5fba8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5fba92:{NFSU2_TR(0x5fba92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fba97ull));
TAIL_STATIC(0x5716c0u,571);
}
B5fba97:L5fba97:{c.instructions+=8;NFSU2_TR(0x5fba97);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5fba99:{NFSU2_TR(0x5fba99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba9a:{NFSU2_TR(0x5fba9a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba9c:{NFSU2_TR(0x5fba9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fba9e:{NFSU2_TR(0x5fba9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x998ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbaa4:{NFSU2_TR(0x5fbaa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbaa5:{NFSU2_TR(0x5fbaa5);
__builtin_memmove((R+4),(R+28),4);
}
B5fbaa7:{NFSU2_TR(0x5fbaa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbaacull));
TAIL_STATIC(0x571640u,571);
}
B5fbaac:L5fbaac:{c.instructions+=7;NFSU2_TR(0x5fbaac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbaad:{NFSU2_TR(0x5fbaad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbaaf:{NFSU2_TR(0x5fbaaf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbab1:{NFSU2_TR(0x5fbab1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x999ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fbab7:{NFSU2_TR(0x5fbab7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbab8:{NFSU2_TR(0x5fbab8);
__builtin_memmove((R+4),(R+28),4);
}
B5fbaba:{NFSU2_TR(0x5fbaba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbabfull));
TAIL_STATIC(0x571640u,571);
}
B5fbabf:L5fbabf:{c.instructions+=4;NFSU2_TR(0x5fbabf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fbac5:{NFSU2_TR(0x5fbac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbac6:{NFSU2_TR(0x5fbac6);
__builtin_memmove((R+4),(R+28),4);
}
B5fbac8:{NFSU2_TR(0x5fbac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbacdull));
TAIL_STATIC(0x571770u,571);
}
B5fbacd:L5fbacd:{c.instructions+=4;NFSU2_TR(0x5fbacd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x978ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbad3:{NFSU2_TR(0x5fbad3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbad4:{NFSU2_TR(0x5fbad4);
__builtin_memmove((R+4),(R+28),4);
}
B5fbad6:{NFSU2_TR(0x5fbad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbadbull));
TAIL_STATIC(0x571770u,571);
}
B5fbadb:L5fbadb:{c.instructions+=7;NFSU2_TR(0x5fbadb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbadc:{NFSU2_TR(0x5fbadc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbade:{NFSU2_TR(0x5fbade);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbae0:{NFSU2_TR(0x5fbae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x990ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fbae6:{NFSU2_TR(0x5fbae6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbae7:{NFSU2_TR(0x5fbae7);
__builtin_memmove((R+4),(R+28),4);
}
B5fbae9:{NFSU2_TR(0x5fbae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbaeeull));
TAIL_STATIC(0x571640u,571);
}
B5fbaee:L5fbaee:{c.instructions+=7;NFSU2_TR(0x5fbaee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbaef:{NFSU2_TR(0x5fbaef);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbaf1:{NFSU2_TR(0x5fbaf1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbaf3:{NFSU2_TR(0x5fbaf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fbaf9:{NFSU2_TR(0x5fbaf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbafa:{NFSU2_TR(0x5fbafa);
__builtin_memmove((R+4),(R+28),4);
}
B5fbafc:{NFSU2_TR(0x5fbafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbb01ull));
TAIL_STATIC(0x571640u,571);
}
B5fbb01:L5fbb01:{c.instructions+=4;NFSU2_TR(0x5fbb01);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9acull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbb07:{NFSU2_TR(0x5fbb07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb08:{NFSU2_TR(0x5fbb08);
__builtin_memmove((R+4),(R+28),4);
}
B5fbb0a:{NFSU2_TR(0x5fbb0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbb0full));
TAIL_STATIC(0x571770u,571);
}
B5fbb0f:L5fbb0f:{c.instructions+=3;NFSU2_TR(0x5fbb0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5fbb12:{NFSU2_TR(0x5fbb12);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B5fbb15:{NFSU2_TR(0x5fbb15);
if(r1(R+518)){{goto L5fbb53;}}
}
B5fbb17:L5fbb17:{c.instructions+=10;NFSU2_TR(0x5fbb17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb1d:{NFSU2_TR(0x5fbb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x514ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb23:{NFSU2_TR(0x5fbb23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x518ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb29:{NFSU2_TR(0x5fbb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x520ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb2f:{NFSU2_TR(0x5fbb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x524ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb35:{NFSU2_TR(0x5fbb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb3b:{NFSU2_TR(0x5fbb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x530ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb41:{NFSU2_TR(0x5fbb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x534ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb47:{NFSU2_TR(0x5fbb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x538ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb4d:{NFSU2_TR(0x5fbb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbb53:L5fbb53:{c.instructions+=7;NFSU2_TR(0x5fbb53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb54:{NFSU2_TR(0x5fbb54);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb56:{NFSU2_TR(0x5fbb56);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb58:{NFSU2_TR(0x5fbb58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x924ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fbb5e:{NFSU2_TR(0x5fbb5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb5f:{NFSU2_TR(0x5fbb5f);
__builtin_memmove((R+4),(R+28),4);
}
B5fbb61:{NFSU2_TR(0x5fbb61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbb66ull));
TAIL_STATIC(0x571640u,571);
}
B5fbb66:L5fbb66:{c.instructions+=4;NFSU2_TR(0x5fbb66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbb6c:{NFSU2_TR(0x5fbb6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb6d:{NFSU2_TR(0x5fbb6d);
__builtin_memmove((R+4),(R+28),4);
}
B5fbb6f:{NFSU2_TR(0x5fbb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbb74ull));
TAIL_STATIC(0x571770u,571);
}
B5fbb74:L5fbb74:{c.instructions+=4;NFSU2_TR(0x5fbb74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fbb7a:{NFSU2_TR(0x5fbb7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb7b:{NFSU2_TR(0x5fbb7b);
__builtin_memmove((R+4),(R+28),4);
}
B5fbb7d:{NFSU2_TR(0x5fbb7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbb82ull));
TAIL_STATIC(0x571770u,571);
}
B5fbb82:L5fbb82:{c.instructions+=7;NFSU2_TR(0x5fbb82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb83:{NFSU2_TR(0x5fbb83);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb85:{NFSU2_TR(0x5fbb85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb87:{NFSU2_TR(0x5fbb87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x97cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fbb8d:{NFSU2_TR(0x5fbb8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb8e:{NFSU2_TR(0x5fbb8e);
__builtin_memmove((R+4),(R+28),4);
}
B5fbb90:{NFSU2_TR(0x5fbb90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbb95ull));
TAIL_STATIC(0x571640u,571);
}
B5fbb95:L5fbb95:{c.instructions+=7;NFSU2_TR(0x5fbb95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb96:{NFSU2_TR(0x5fbb96);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb98:{NFSU2_TR(0x5fbb98);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbb9a:{NFSU2_TR(0x5fbb9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x980ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbba0:{NFSU2_TR(0x5fbba0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbba1:{NFSU2_TR(0x5fbba1);
__builtin_memmove((R+4),(R+28),4);
}
B5fbba3:{NFSU2_TR(0x5fbba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbba8ull));
TAIL_STATIC(0x571640u,571);
}
B5fbba8:L5fbba8:{c.instructions+=4;NFSU2_TR(0x5fbba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fbbae:{NFSU2_TR(0x5fbbae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbbaf:{NFSU2_TR(0x5fbbaf);
__builtin_memmove((R+4),(R+28),4);
}
B5fbbb1:{NFSU2_TR(0x5fbbb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbbb6ull));
TAIL_STATIC(0x571770u,571);
}
B5fbbb6:L5fbbb6:{c.instructions+=4;NFSU2_TR(0x5fbbb6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x9c0ull))));
}
B5fbbbc:{NFSU2_TR(0x5fbbbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbbbd:{NFSU2_TR(0x5fbbbd);
__builtin_memmove((R+4),(R+28),4);
}
B5fbbbf:{NFSU2_TR(0x5fbbbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbbc4ull));
TAIL_STATIC(0x571770u,571);
}
B5fbbc4:L5fbbc4:{c.instructions+=2;NFSU2_TR(0x5fbbc4);
__builtin_memmove((R+4),(R+28),4);
}
B5fbbc6:{NFSU2_TR(0x5fbbc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbbcbull));
TAIL_STATIC(0x578d90u,578);
}
B5fbbcb:L5fbbcb:{c.instructions+=8;NFSU2_TR(0x5fbbcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbbcf:{NFSU2_TR(0x5fbbcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fbbd0:{NFSU2_TR(0x5fbbd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fbbd1:{NFSU2_TR(0x5fbbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbbd8:{NFSU2_TR(0x5fbbd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fbbd9:{NFSU2_TR(0x5fbbd9);
__builtin_memmove((R+16),(R+20),4);
}
B5fbbdb:{NFSU2_TR(0x5fbbdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fbbdc:{NFSU2_TR(0x5fbbdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fbbe0:L5fbbe0:{c.instructions+=9;NFSU2_TR(0x5fbbe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbbe1:{NFSU2_TR(0x5fbbe1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbbe5:{NFSU2_TR(0x5fbbe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbbe6:{NFSU2_TR(0x5fbbe6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fbbec:{NFSU2_TR(0x5fbbec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbbed:{NFSU2_TR(0x5fbbed);
__builtin_memmove((R+24),(R+4),4);
}
B5fbbef:{NFSU2_TR(0x5fbbef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fbbf1:{NFSU2_TR(0x5fbbf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fbbf4:{NFSU2_TR(0x5fbbf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fbc56;}}
}
B5fbbf6:L5fbbf6:{c.instructions+=21;NFSU2_TR(0x5fbbf6);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbbf9:{NFSU2_TR(0x5fbbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbbfc:{NFSU2_TR(0x5fbbfc);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbbff:{NFSU2_TR(0x5fbbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x510ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbc05:{NFSU2_TR(0x5fbc05);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fbc07:{NFSU2_TR(0x5fbc07);
{u32 ea_=u32(r4(R+24)+u32(1300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbc0d:{NFSU2_TR(0x5fbc0d);
{u32 ea_=u32(r4(R+24)+u32(1304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbc13:{NFSU2_TR(0x5fbc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbc16:{NFSU2_TR(0x5fbc16);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc19:{NFSU2_TR(0x5fbc19);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc1c:{NFSU2_TR(0x5fbc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x520ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbc22:{NFSU2_TR(0x5fbc22);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fbc24:{NFSU2_TR(0x5fbc24);
{u32 ea_=u32(r4(R+24)+u32(1316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbc2a:{NFSU2_TR(0x5fbc2a);
{u32 ea_=u32(r4(R+24)+u32(1320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbc30:{NFSU2_TR(0x5fbc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fbc36:{NFSU2_TR(0x5fbc36);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc3c:{NFSU2_TR(0x5fbc3c);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc42:{NFSU2_TR(0x5fbc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x530ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbc48:{NFSU2_TR(0x5fbc48);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5fbc4a:{NFSU2_TR(0x5fbc4a);
{u32 ea_=u32(r4(R+24)+u32(1332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbc50:{NFSU2_TR(0x5fbc50);
{u32 ea_=u32(r4(R+24)+u32(1336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbc56:L5fbc56:{c.instructions+=5;NFSU2_TR(0x5fbc56);
__builtin_memmove((R+0),gp(0x8900f8),4);
}
B5fbc5b:{NFSU2_TR(0x5fbc5b);
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
B5fbc5d:{NFSU2_TR(0x5fbc5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbc5e:{NFSU2_TR(0x5fbc5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fbc61:{NFSU2_TR(0x5fbc61);
if(r1(R+518)){{goto L5fbcca;}}
}
B5fbc63:L5fbc63:{c.instructions+=22;NFSU2_TR(0x5fbc63);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc66:{NFSU2_TR(0x5fbc66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbc67:{NFSU2_TR(0x5fbc67);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc6a:{NFSU2_TR(0x5fbc6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fbc6d:{NFSU2_TR(0x5fbc6d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc6f:{NFSU2_TR(0x5fbc6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbc72:{NFSU2_TR(0x5fbc72);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5fbc74:{NFSU2_TR(0x5fbc74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fbc76:{NFSU2_TR(0x5fbc76);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B5fbc78:{NFSU2_TR(0x5fbc78);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5fbc7a:{NFSU2_TR(0x5fbc7a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5fbc7c:{NFSU2_TR(0x5fbc7c);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5fbc7e:{NFSU2_TR(0x5fbc7e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5fbc80:{NFSU2_TR(0x5fbc80);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5fbc82:{NFSU2_TR(0x5fbc82);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5fbc84:{NFSU2_TR(0x5fbc84);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5fbc86:{NFSU2_TR(0x5fbc86);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5fbc88:{NFSU2_TR(0x5fbc88);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5fbc8a:{NFSU2_TR(0x5fbc8a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fbc8c:{NFSU2_TR(0x5fbc8c);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fbc92:{NFSU2_TR(0x5fbc92);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbc96:{NFSU2_TR(0x5fbc96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbc99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fbc99:L5fbc99:{c.instructions+=5;NFSU2_TR(0x5fbc99);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbc9f:{NFSU2_TR(0x5fbc9f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5fbca1:{NFSU2_TR(0x5fbca1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fbca3:{NFSU2_TR(0x5fbca3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fbca6:{NFSU2_TR(0x5fbca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fbcb0;}}
}
B5fbca8:L5fbca8:{c.instructions+=2;NFSU2_TR(0x5fbca8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fbcaa:{NFSU2_TR(0x5fbcaa);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbcb0:L5fbcb0:{c.instructions+=8;NFSU2_TR(0x5fbcb0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5fbcb4:{NFSU2_TR(0x5fbcb4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbcb5:{NFSU2_TR(0x5fbcb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbcb6:{NFSU2_TR(0x5fbcb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fbcbc:{NFSU2_TR(0x5fbcbc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbcbf:{NFSU2_TR(0x5fbcbf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbcc0:{NFSU2_TR(0x5fbcc0);
__builtin_memmove((R+4),(R+28),4);
}
B5fbcc2:{NFSU2_TR(0x5fbcc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbcc7ull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B5fbcc7:L5fbcc7:{c.instructions+=2;NFSU2_TR(0x5fbcc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fbcc8:{NFSU2_TR(0x5fbcc8);
{goto L5fbcda;}
}
B5fbcca:L5fbcca:{c.instructions+=5;NFSU2_TR(0x5fbcca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbccc:{NFSU2_TR(0x5fbccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fbcd2:{NFSU2_TR(0x5fbcd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbcd3:{NFSU2_TR(0x5fbcd3);
__builtin_memmove((R+4),(R+28),4);
}
B5fbcd5:{NFSU2_TR(0x5fbcd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbcdaull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B5fbcda:L5fbcda:{c.instructions+=3;NFSU2_TR(0x5fbcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbce0:{NFSU2_TR(0x5fbce0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fbce2:{NFSU2_TR(0x5fbce2);
if(r1(R+518)){{goto L5fbd0b;}}
}
B5fbce4:L5fbce4:{c.instructions+=3;NFSU2_TR(0x5fbce4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbce5:{NFSU2_TR(0x5fbce5);
__builtin_memmove((R+4),(R+28),4);
}
B5fbce7:{NFSU2_TR(0x5fbce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbcecull));
TAIL_STATIC(0x5e7e80u,5e7);
}
B5fbcec:L5fbcec:{c.instructions+=2;NFSU2_TR(0x5fbcec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fbcee:{NFSU2_TR(0x5fbcee);
if(r1(R+518)){{goto L5fbd0b;}}
}
B5fbcf0:L5fbcf0:{c.instructions+=2;NFSU2_TR(0x5fbcf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5fbcf7:{NFSU2_TR(0x5fbcf7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5fbd0b;}}
}
B5fbcf9:L5fbcf9:{c.instructions+=4;NFSU2_TR(0x5fbcf9);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbcfc:{NFSU2_TR(0x5fbcfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5fbcff:{NFSU2_TR(0x5fbcff);
{u32 ea_=u32(r4(R+24)+u32(2452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbd05:{NFSU2_TR(0x5fbd05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x990ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbd0b:L5fbd0b:{c.instructions+=5;NFSU2_TR(0x5fbd0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fbd0e:{NFSU2_TR(0x5fbd0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fbd14:{NFSU2_TR(0x5fbd14);
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
B5fbd16:{NFSU2_TR(0x5fbd16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fbd17:{NFSU2_TR(0x5fbd17);
if(r1(R+518)){{goto L5fbd43;}}
}
B5fbd19:L5fbd19:{c.instructions+=3;NFSU2_TR(0x5fbd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fbd1f:{NFSU2_TR(0x5fbd1f);
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
B5fbd21:{NFSU2_TR(0x5fbd21);
if(r1(R+518)){{goto L5fbd43;}}
}
B5fbd23:L5fbd23:{c.instructions+=3;NFSU2_TR(0x5fbd23);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5fbd29:{NFSU2_TR(0x5fbd29);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5fbd2c:{NFSU2_TR(0x5fbd2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5fbd43;}}
}
B5fbd2e:L5fbd2e:{c.instructions+=1;NFSU2_TR(0x5fbd2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbd33ull));
TAIL_STATIC(0x5f85b0u,5f8);
}
B5fbd33:L5fbd33:{c.instructions+=2;NFSU2_TR(0x5fbd33);
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
B5fbd35:{NFSU2_TR(0x5fbd35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fbd43;}}
}
B5fbd37:L5fbd37:{c.instructions+=4;NFSU2_TR(0x5fbd37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbd3b:{NFSU2_TR(0x5fbd3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbd3c:{NFSU2_TR(0x5fbd3c);
__builtin_memmove((R+4),(R+28),4);
}
B5fbd3e:{NFSU2_TR(0x5fbd3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbd43ull));
TAIL_STATIC(0x5f8af0u,5f8);
}
B5fbd43:L5fbd43:{c.instructions+=2;NFSU2_TR(0x5fbd43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbd46:{NFSU2_TR(0x5fbd46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbd4bull));
TAIL_STATIC(0x591d70u,591);
}
B5fbd4b:L5fbd4b:{c.instructions+=4;NFSU2_TR(0x5fbd4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fbd4c:{NFSU2_TR(0x5fbd4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fbd4d:{NFSU2_TR(0x5fbd4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbd4e:{NFSU2_TR(0x5fbd4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fbd60:L5fbd60:{c.instructions+=10;NFSU2_TR(0x5fbd60);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbd64:{NFSU2_TR(0x5fbd64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fbd68:{NFSU2_TR(0x5fbd68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbd69:{NFSU2_TR(0x5fbd69);
__builtin_memmove((R+24),(R+4),4);
}
B5fbd6b:{NFSU2_TR(0x5fbd6b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbd6f:{NFSU2_TR(0x5fbd6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbd70:{NFSU2_TR(0x5fbd70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbd71:{NFSU2_TR(0x5fbd71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbd72:{NFSU2_TR(0x5fbd72);
__builtin_memmove((R+4),(R+24),4);
}
B5fbd74:{NFSU2_TR(0x5fbd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbd79ull));
TAIL_STATIC(0x5f52c0u,5f5);
}
B5fbd79:L5fbd79:{c.instructions+=4;NFSU2_TR(0x5fbd79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5fbd7c:{NFSU2_TR(0x5fbd7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbd7d:{NFSU2_TR(0x5fbd7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbd83:{NFSU2_TR(0x5fbd83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbd88ull));
TAIL_STATIC(0x5da330u,5da);
}
B5fbd88:L5fbd88:{c.instructions+=4;NFSU2_TR(0x5fbd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbd8b:{NFSU2_TR(0x5fbd8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fbd8d:{NFSU2_TR(0x5fbd8d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbd8f:{NFSU2_TR(0x5fbd8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbd92ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fbd92:L5fbd92:{c.instructions+=3;NFSU2_TR(0x5fbd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbd95:{NFSU2_TR(0x5fbd95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5fbd97:{NFSU2_TR(0x5fbd97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbd9aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fbd9a:L5fbd9a:{c.instructions+=3;NFSU2_TR(0x5fbd9a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5fbd9e:{NFSU2_TR(0x5fbd9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fbda0:{NFSU2_TR(0x5fbda0);
if(r1(R+518)){{goto L5fbde0;}}
}
B5fbda2:L5fbda2:{c.instructions+=6;NFSU2_TR(0x5fbda2);
{u32 ea_=u32(u32(8017348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbda8:{NFSU2_TR(0x5fbda8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbdae:{NFSU2_TR(0x5fbdae);
{u32 ea_=u32(u32(8017348u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fbdb4:{NFSU2_TR(0x5fbdb4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fbdb6:{NFSU2_TR(0x5fbdb6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fbdb9:{NFSU2_TR(0x5fbdb9);
if(r1(R+514)){{goto L5fbdc3;}}
}
B5fbdbb:L5fbdbb:{c.instructions+=2;NFSU2_TR(0x5fbdbb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fbdbd:{NFSU2_TR(0x5fbdbd);
{u32 ea_=u32(u32(8017344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbdc3:L5fbdc3:{c.instructions+=5;NFSU2_TR(0x5fbdc3);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5fbdc9:{NFSU2_TR(0x5fbdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbdcf:{NFSU2_TR(0x5fbdcf);
{u32 ea_=u32(r4(R+24)+u32(2424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbdd5:{NFSU2_TR(0x5fbdd5);
__builtin_memmove((R+4),(R+24),4);
}
B5fbdd7:{NFSU2_TR(0x5fbdd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbddcull));
TAIL_STATIC(0x5f6cd0u,5f6);
}
B5fbddc:L5fbddc:{c.instructions+=2;NFSU2_TR(0x5fbddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fbddd:{NFSU2_TR(0x5fbddd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fbde0:L5fbde0:{c.instructions+=3;NFSU2_TR(0x5fbde0);
__builtin_memmove((R+4),(R+24),4);
}
B5fbde2:{NFSU2_TR(0x5fbde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x974ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fbdec:{NFSU2_TR(0x5fbdec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbdf1ull));
TAIL_STATIC(0x5f6cd0u,5f6);
}
B5fbdf1:L5fbdf1:{c.instructions+=2;NFSU2_TR(0x5fbdf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fbdf2:{NFSU2_TR(0x5fbdf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fbe00:L5fbe00:{c.instructions+=14;NFSU2_TR(0x5fbe00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe01:{NFSU2_TR(0x5fbe01);
__builtin_memmove((R+20),(R+16),4);
}
B5fbe03:{NFSU2_TR(0x5fbe03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5fbe06:{NFSU2_TR(0x5fbe06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5fbe09:{NFSU2_TR(0x5fbe09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe0a:{NFSU2_TR(0x5fbe0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe0b:{NFSU2_TR(0x5fbe0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5fbe0e:{NFSU2_TR(0x5fbe0e);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbe11:{NFSU2_TR(0x5fbe11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe12:{NFSU2_TR(0x5fbe12);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fbe18:{NFSU2_TR(0x5fbe18);
__builtin_memmove((R+28),(R+4),4);
}
B5fbe1a:{NFSU2_TR(0x5fbe1a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fbe1c:{NFSU2_TR(0x5fbe1c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fbe1f:{NFSU2_TR(0x5fbe1f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5fbe49;}}
}
B5fbe21:L5fbe21:{c.instructions+=3;NFSU2_TR(0x5fbe21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbe27:{NFSU2_TR(0x5fbe27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5fbe29:{NFSU2_TR(0x5fbe29);
if(r1(R+518)){{goto L5fbebd;}}
}
B5fbe2f:L5fbe2f:{c.instructions+=5;NFSU2_TR(0x5fbe2f);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbe32:{NFSU2_TR(0x5fbe32);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fbe35:{NFSU2_TR(0x5fbe35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fbe37:{NFSU2_TR(0x5fbe37);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5fbe3a:{NFSU2_TR(0x5fbe3a);
if(r1(R+514)){{goto L5fbe43;}}
}
B5fbe3c:L5fbe3c:{c.instructions+=2;NFSU2_TR(0x5fbe3c);
w4(R+0,u32(0x1ull));
}
B5fbe41:{NFSU2_TR(0x5fbe41);
{goto L5fbe45;}
}
B5fbe43:L5fbe43:{c.instructions+=1;NFSU2_TR(0x5fbe43);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5fbe45:L5fbe45:{c.instructions+=2;NFSU2_TR(0x5fbe45);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fbe47:{NFSU2_TR(0x5fbe47);
if(r1(R+518)){{goto L5fbebd;}}
}
B5fbe49:L5fbe49:{c.instructions+=2;NFSU2_TR(0x5fbe49);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5fbe4c:{NFSU2_TR(0x5fbe4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fbea8;}}
}
B5fbe4e:L5fbe4e:{c.instructions+=3;NFSU2_TR(0x5fbe4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5fbe51:{NFSU2_TR(0x5fbe51);
u8 U[4];
w4(U+0,u32(0x7a63b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe56:{NFSU2_TR(0x5fbe56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbe5bull));
TAIL_STATIC(0x43db50u,43d);
}
B5fbe5b:L5fbe5b:{c.instructions+=3;NFSU2_TR(0x5fbe5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5fbe5e:{NFSU2_TR(0x5fbe5e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5fbe60:{NFSU2_TR(0x5fbe60);
if(r1(R+518)){{goto L5fbebd;}}
}
B5fbe62:L5fbe62:{c.instructions+=10;NFSU2_TR(0x5fbe62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbe65:{NFSU2_TR(0x5fbe65);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbe68:{NFSU2_TR(0x5fbe68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fbe6b:{NFSU2_TR(0x5fbe6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbe6e:{NFSU2_TR(0x5fbe6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe6f:{NFSU2_TR(0x5fbe6f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbe73:{NFSU2_TR(0x5fbe73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe74:{NFSU2_TR(0x5fbe74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbe78:{NFSU2_TR(0x5fbe78);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fbe80:{NFSU2_TR(0x5fbe80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbe85ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5fbe85:L5fbe85:{c.instructions+=9;NFSU2_TR(0x5fbe85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fbe88:{NFSU2_TR(0x5fbe88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe8a:{NFSU2_TR(0x5fbe8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbe8e:{NFSU2_TR(0x5fbe8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe8f:{NFSU2_TR(0x5fbe8f);
__builtin_memmove((R+0),gp(0x8021cc),4);
}
B5fbe94:{NFSU2_TR(0x5fbe94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe95:{NFSU2_TR(0x5fbe95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbe96:{NFSU2_TR(0x5fbe96);
__builtin_memmove((R+4),(R+28),4);
}
B5fbe98:{NFSU2_TR(0x5fbe98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbe9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5fbd60u);}goto L5fbd60;}
}
B5fbe9d:L5fbe9d:{c.instructions+=7;NFSU2_TR(0x5fbe9d);
w1(R+0,u8(0x1ull));
}
B5fbe9f:{NFSU2_TR(0x5fbe9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fbea0:{NFSU2_TR(0x5fbea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fbea1:{NFSU2_TR(0x5fbea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fbea2:{NFSU2_TR(0x5fbea2);
__builtin_memmove((R+16),(R+20),4);
}
B5fbea4:{NFSU2_TR(0x5fbea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fbea5:{NFSU2_TR(0x5fbea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fbea8:L5fbea8:{c.instructions+=8;NFSU2_TR(0x5fbea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x96cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5fbeb2:{NFSU2_TR(0x5fbeb2);
w1(R+0,u8(0x1ull));
}
B5fbeb4:{NFSU2_TR(0x5fbeb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fbeb5:{NFSU2_TR(0x5fbeb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fbeb6:{NFSU2_TR(0x5fbeb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fbeb7:{NFSU2_TR(0x5fbeb7);
__builtin_memmove((R+16),(R+20),4);
}
B5fbeb9:{NFSU2_TR(0x5fbeb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fbeba:{NFSU2_TR(0x5fbeba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fbebd:L5fbebd:{c.instructions+=7;NFSU2_TR(0x5fbebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5fbebe:{NFSU2_TR(0x5fbebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5fbebf:{NFSU2_TR(0x5fbebf);
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
B5fbec1:{NFSU2_TR(0x5fbec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fbec2:{NFSU2_TR(0x5fbec2);
__builtin_memmove((R+16),(R+20),4);
}
B5fbec4:{NFSU2_TR(0x5fbec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5fbec5:{NFSU2_TR(0x5fbec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5fbed0:L5fbed0:{c.instructions+=11;NFSU2_TR(0x5fbed0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbed1:{NFSU2_TR(0x5fbed1);
__builtin_memmove((R+20),(R+16),4);
}
B5fbed3:{NFSU2_TR(0x5fbed3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5fbed6:{NFSU2_TR(0x5fbed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5fbed9:{NFSU2_TR(0x5fbed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbedc:{NFSU2_TR(0x5fbedc);
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
B5fbede:{NFSU2_TR(0x5fbede);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbedf:{NFSU2_TR(0x5fbedf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbee0:{NFSU2_TR(0x5fbee0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbee1:{NFSU2_TR(0x5fbee1);
__builtin_memmove((R+24),(R+4),4);
}
B5fbee3:{NFSU2_TR(0x5fbee3);
if(r1(R+518)){TAIL_STATIC(0x5fc040u,5fc);}
}
B5fbee9:L5fbee9:{c.instructions+=3;NFSU2_TR(0x5fbee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5fbeec:{NFSU2_TR(0x5fbeec);
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
B5fbeee:{NFSU2_TR(0x5fbeee);
if(r1(R+518)){TAIL_STATIC(0x5fc040u,5fc);}
}
B5fbef4:L5fbef4:{c.instructions+=2;NFSU2_TR(0x5fbef4);
__builtin_memmove((R+4),(R+28),4);
}
B5fbef6:{NFSU2_TR(0x5fbef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbefbull));
TAIL_STATIC(0x5dcc80u,5dc);
}
B5fbefb:L5fbefb:{c.instructions+=11;NFSU2_TR(0x5fbefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbefe:{NFSU2_TR(0x5fbefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fbf01:{NFSU2_TR(0x5fbf01);
__builtin_memmove((R+12),(R+0),1);
}
B5fbf03:{NFSU2_TR(0x5fbf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbf06:{NFSU2_TR(0x5fbf06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbf07:{NFSU2_TR(0x5fbf07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbf0b:{NFSU2_TR(0x5fbf0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbf0c:{NFSU2_TR(0x5fbf0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fbf10:{NFSU2_TR(0x5fbf10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbf11:{NFSU2_TR(0x5fbf11);
__builtin_memmove((R+4),(R+28),4);
}
B5fbf13:{NFSU2_TR(0x5fbf13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbf18ull));
TAIL_STATIC(0x5dd360u,5dd);
}
B5fbf18:L5fbf18:{c.instructions+=11;NFSU2_TR(0x5fbf18);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5fbf1c:{NFSU2_TR(0x5fbf1c);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5fbf1f:{NFSU2_TR(0x5fbf1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbf23:{NFSU2_TR(0x5fbf23);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fbf27:{NFSU2_TR(0x5fbf27);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fbf2d:{NFSU2_TR(0x5fbf2d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbf31:{NFSU2_TR(0x5fbf31);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbf34:{NFSU2_TR(0x5fbf34);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5fbf3a:{NFSU2_TR(0x5fbf3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5fbf3c:{NFSU2_TR(0x5fbf3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fbf3f:{NFSU2_TR(0x5fbf3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5fbf73;}}
}
B5fbf41:L5fbf41:{c.instructions+=12;NFSU2_TR(0x5fbf41);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5fbf45:{NFSU2_TR(0x5fbf45);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5fbf49:{NFSU2_TR(0x5fbf49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbf4d:{NFSU2_TR(0x5fbf4d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fbf51:{NFSU2_TR(0x5fbf51);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbf55:{NFSU2_TR(0x5fbf55);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5fbf59:{NFSU2_TR(0x5fbf59);
{u32 ea_=u32(u32(9031432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fbf5f:{NFSU2_TR(0x5fbf5f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbf63:{NFSU2_TR(0x5fbf63);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5fbf67:{NFSU2_TR(0x5fbf67);
{u32 ea_=u32(u32(9031432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5fbf6d:{NFSU2_TR(0x5fbf6d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbf71:{NFSU2_TR(0x5fbf71);
{goto L5fbf7f;}
}
B5fbf73:L5fbf73:{c.instructions+=4;NFSU2_TR(0x5fbf73);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbf77:{NFSU2_TR(0x5fbf77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbf78:{NFSU2_TR(0x5fbf78);
__builtin_memmove((R+4),(R+28),4);
}
B5fbf7a:{NFSU2_TR(0x5fbf7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbf7full));
TAIL_STATIC(0x401aa0u,401);
}
B5fbf7f:L5fbf7f:{c.instructions+=8;NFSU2_TR(0x5fbf7f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbf82:{NFSU2_TR(0x5fbf82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fbf84:{NFSU2_TR(0x5fbf84);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5fbf86:{NFSU2_TR(0x5fbf86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5fbf8c:{NFSU2_TR(0x5fbf8c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbf90:{NFSU2_TR(0x5fbf90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5fbf94:{NFSU2_TR(0x5fbf94);
__builtin_memmove((R+4),(R+12),4);
}
B5fbf96:{NFSU2_TR(0x5fbf96);
if(r1(R+518)){{goto L5fbfa7;}}
}
B5fbf98:L5fbf98:{c.instructions+=5;NFSU2_TR(0x5fbf98);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbf9c:{NFSU2_TR(0x5fbf9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbf9e:{NFSU2_TR(0x5fbf9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbf9f:{NFSU2_TR(0x5fbf9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfa0:{NFSU2_TR(0x5fbfa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbfa5ull));
TAIL_STATIC(0x5da410u,5da);
}
B5fbfa5:L5fbfa5:{c.instructions+=1;NFSU2_TR(0x5fbfa5);
{goto L5fbfad;}
}
B5fbfa7:L5fbfa7:{c.instructions+=2;NFSU2_TR(0x5fbfa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfa8:{NFSU2_TR(0x5fbfa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbfadull));
TAIL_STATIC(0x5da3d0u,5da);
}
B5fbfad:L5fbfad:{c.instructions+=5;NFSU2_TR(0x5fbfad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbfb1:{NFSU2_TR(0x5fbfb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5fbfb5:{NFSU2_TR(0x5fbfb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfb6:{NFSU2_TR(0x5fbfb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfb7:{NFSU2_TR(0x5fbfb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbfbcull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5fbfbc:L5fbfbc:{c.instructions+=8;NFSU2_TR(0x5fbfbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5fbfbf:{NFSU2_TR(0x5fbfbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5fbfc3:{NFSU2_TR(0x5fbfc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfc4:{NFSU2_TR(0x5fbfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbfc7:{NFSU2_TR(0x5fbfc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfc8:{NFSU2_TR(0x5fbfc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfc9:{NFSU2_TR(0x5fbfc9);
__builtin_memmove((R+4),(R+24),4);
}
B5fbfcb:{NFSU2_TR(0x5fbfcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbfd0ull));
TAIL_STATIC(0x5f52c0u,5f5);
}
B5fbfd0:L5fbfd0:{c.instructions+=4;NFSU2_TR(0x5fbfd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5fbfd3:{NFSU2_TR(0x5fbfd3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfd4:{NFSU2_TR(0x5fbfd4);
__builtin_memmove((R+4),(R+12),4);
}
B5fbfd6:{NFSU2_TR(0x5fbfd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbfdbull));
TAIL_STATIC(0x5da330u,5da);
}
B5fbfdb:L5fbfdb:{c.instructions+=7;NFSU2_TR(0x5fbfdb);
{u32 ea_=u32(r4(R+24)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5fbfe1:{NFSU2_TR(0x5fbfe1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5fbfe5:{NFSU2_TR(0x5fbfe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfe6:{NFSU2_TR(0x5fbfe6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbfe7:{NFSU2_TR(0x5fbfe7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5fbfea:{NFSU2_TR(0x5fbfea);
w4(R+4,u32(0x88f298ull));
}
B5fbfef:{NFSU2_TR(0x5fbfef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbff4ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5fbff4:L5fbff4:{c.instructions+=5;NFSU2_TR(0x5fbff4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5fbff6:{NFSU2_TR(0x5fbff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5fbff9:{NFSU2_TR(0x5fbff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5fbffb:{NFSU2_TR(0x5fbffb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5fbffc:{NFSU2_TR(0x5fbffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5fbfffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5fbfff:L5fbfff:{c.instructions+=1;NFSU2_TR(0x5fbfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x5fc002u,5fc);
}
XIT:NFSU2_TR_EXIT(0x5fb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
