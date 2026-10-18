#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 body_4ee(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x775,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x775,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_775(u8* __restrict R,Cpu& c);
u32 page_775(Cpu& c){return body_775(c.regs.data(),c);}
__attribute__((noinline)) u32 body_775(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x775002:goto L775002;
case 0x775003:c.instructions+=1;goto B775003;
case 0x775008:goto L775008;
case 0x77500b:c.instructions+=1;goto B77500b;
case 0x77500c:goto L77500c;
case 0x77500e:c.instructions+=4;goto B77500e;
case 0x775013:c.instructions+=3;goto B775013;
case 0x775016:c.instructions+=2;goto B775016;
case 0x775017:c.instructions+=1;goto B775017;
case 0x77501c:goto L77501c;
case 0x77501f:c.instructions+=1;goto B77501f;
case 0x775020:goto L775020;
case 0x775022:c.instructions+=4;goto B775022;
case 0x775027:c.instructions+=3;goto B775027;
case 0x77502a:c.instructions+=2;goto B77502a;
case 0x77502b:c.instructions+=1;goto B77502b;
case 0x775030:goto L775030;
case 0x775033:c.instructions+=1;goto B775033;
case 0x775034:goto L775034;
case 0x775036:c.instructions+=4;goto B775036;
case 0x77503b:c.instructions+=3;goto B77503b;
case 0x77503e:c.instructions+=2;goto B77503e;
case 0x77503f:c.instructions+=1;goto B77503f;
case 0x775044:goto L775044;
case 0x775047:c.instructions+=1;goto B775047;
case 0x775048:goto L775048;
case 0x77504d:c.instructions+=1;goto B77504d;
case 0x775060:goto L775060;
case 0x775062:c.instructions+=4;goto B775062;
case 0x775067:c.instructions+=3;goto B775067;
case 0x77506a:c.instructions+=2;goto B77506a;
case 0x77506b:c.instructions+=1;goto B77506b;
case 0x775070:goto L775070;
case 0x775073:c.instructions+=1;goto B775073;
case 0x775074:goto L775074;
case 0x775076:c.instructions+=4;goto B775076;
case 0x77507b:c.instructions+=3;goto B77507b;
case 0x77507e:c.instructions+=2;goto B77507e;
case 0x77507f:c.instructions+=1;goto B77507f;
case 0x775084:goto L775084;
case 0x775087:c.instructions+=1;goto B775087;
case 0x775088:goto L775088;
case 0x77508a:c.instructions+=4;goto B77508a;
case 0x77508f:c.instructions+=3;goto B77508f;
case 0x775092:c.instructions+=2;goto B775092;
case 0x775093:c.instructions+=1;goto B775093;
case 0x775098:goto L775098;
case 0x77509b:c.instructions+=1;goto B77509b;
case 0x77509c:goto L77509c;
case 0x77509e:c.instructions+=4;goto B77509e;
case 0x7750a3:c.instructions+=3;goto B7750a3;
case 0x7750a6:c.instructions+=2;goto B7750a6;
case 0x7750a7:c.instructions+=1;goto B7750a7;
case 0x7750ac:goto L7750ac;
case 0x7750af:c.instructions+=1;goto B7750af;
case 0x7750b0:goto L7750b0;
case 0x7750b2:c.instructions+=4;goto B7750b2;
case 0x7750b7:c.instructions+=3;goto B7750b7;
case 0x7750ba:c.instructions+=2;goto B7750ba;
case 0x7750bb:c.instructions+=1;goto B7750bb;
case 0x7750c0:goto L7750c0;
case 0x7750c3:c.instructions+=1;goto B7750c3;
case 0x7750c4:goto L7750c4;
case 0x7750c6:c.instructions+=4;goto B7750c6;
case 0x7750cb:c.instructions+=3;goto B7750cb;
case 0x7750ce:c.instructions+=2;goto B7750ce;
case 0x7750cf:c.instructions+=1;goto B7750cf;
case 0x7750d4:goto L7750d4;
case 0x7750d7:c.instructions+=1;goto B7750d7;
case 0x7750d8:goto L7750d8;
case 0x7750da:c.instructions+=4;goto B7750da;
case 0x7750df:c.instructions+=3;goto B7750df;
case 0x7750e2:c.instructions+=2;goto B7750e2;
case 0x7750e3:c.instructions+=1;goto B7750e3;
case 0x7750e8:goto L7750e8;
case 0x7750eb:c.instructions+=1;goto B7750eb;
case 0x7750ec:goto L7750ec;
case 0x7750ee:c.instructions+=4;goto B7750ee;
case 0x7750f3:c.instructions+=3;goto B7750f3;
case 0x7750f6:c.instructions+=2;goto B7750f6;
case 0x7750f7:c.instructions+=1;goto B7750f7;
case 0x7750fc:goto L7750fc;
case 0x7750ff:c.instructions+=1;goto B7750ff;
case 0x775100:goto L775100;
case 0x775102:c.instructions+=4;goto B775102;
case 0x775107:c.instructions+=3;goto B775107;
case 0x77510a:c.instructions+=2;goto B77510a;
case 0x77510b:c.instructions+=1;goto B77510b;
case 0x775110:goto L775110;
case 0x775113:c.instructions+=1;goto B775113;
case 0x775114:goto L775114;
case 0x775116:c.instructions+=4;goto B775116;
case 0x77511b:c.instructions+=3;goto B77511b;
case 0x77511e:c.instructions+=2;goto B77511e;
case 0x77511f:c.instructions+=1;goto B77511f;
case 0x775124:goto L775124;
case 0x775127:c.instructions+=1;goto B775127;
case 0x775128:goto L775128;
case 0x77512a:c.instructions+=4;goto B77512a;
case 0x77512f:c.instructions+=3;goto B77512f;
case 0x775132:c.instructions+=2;goto B775132;
case 0x775133:c.instructions+=1;goto B775133;
case 0x775138:goto L775138;
case 0x77513b:c.instructions+=1;goto B77513b;
case 0x77513c:goto L77513c;
case 0x77513e:c.instructions+=4;goto B77513e;
case 0x775143:c.instructions+=3;goto B775143;
case 0x775146:c.instructions+=2;goto B775146;
case 0x775147:c.instructions+=1;goto B775147;
case 0x77514c:goto L77514c;
case 0x77514f:c.instructions+=1;goto B77514f;
case 0x775150:goto L775150;
case 0x775152:c.instructions+=4;goto B775152;
case 0x775157:c.instructions+=3;goto B775157;
case 0x77515a:c.instructions+=2;goto B77515a;
case 0x77515b:c.instructions+=1;goto B77515b;
case 0x775160:goto L775160;
case 0x775163:c.instructions+=1;goto B775163;
case 0x775164:goto L775164;
case 0x775166:c.instructions+=4;goto B775166;
case 0x77516b:c.instructions+=3;goto B77516b;
case 0x77516e:c.instructions+=2;goto B77516e;
case 0x77516f:c.instructions+=1;goto B77516f;
case 0x775174:goto L775174;
case 0x775177:c.instructions+=1;goto B775177;
case 0x775178:goto L775178;
case 0x77517a:c.instructions+=4;goto B77517a;
case 0x77517f:c.instructions+=3;goto B77517f;
case 0x775182:c.instructions+=2;goto B775182;
case 0x775183:c.instructions+=1;goto B775183;
case 0x775188:goto L775188;
case 0x77518b:c.instructions+=1;goto B77518b;
case 0x77518c:goto L77518c;
case 0x77518e:c.instructions+=4;goto B77518e;
case 0x775193:c.instructions+=3;goto B775193;
case 0x775196:c.instructions+=2;goto B775196;
case 0x775197:c.instructions+=1;goto B775197;
case 0x77519c:goto L77519c;
case 0x77519f:c.instructions+=1;goto B77519f;
case 0x7751a0:goto L7751a0;
case 0x7751a2:c.instructions+=4;goto B7751a2;
case 0x7751a7:c.instructions+=3;goto B7751a7;
case 0x7751aa:c.instructions+=2;goto B7751aa;
case 0x7751ab:c.instructions+=1;goto B7751ab;
case 0x7751b0:goto L7751b0;
case 0x7751b3:c.instructions+=1;goto B7751b3;
case 0x7751b4:goto L7751b4;
case 0x7751b6:c.instructions+=4;goto B7751b6;
case 0x7751bb:c.instructions+=3;goto B7751bb;
case 0x7751be:c.instructions+=2;goto B7751be;
case 0x7751bf:c.instructions+=1;goto B7751bf;
case 0x7751c4:goto L7751c4;
case 0x7751c7:c.instructions+=1;goto B7751c7;
case 0x7751c8:goto L7751c8;
case 0x7751ca:c.instructions+=4;goto B7751ca;
case 0x7751cf:c.instructions+=3;goto B7751cf;
case 0x7751d2:c.instructions+=2;goto B7751d2;
case 0x7751d3:c.instructions+=1;goto B7751d3;
case 0x7751d8:goto L7751d8;
case 0x7751db:c.instructions+=1;goto B7751db;
case 0x7751dc:goto L7751dc;
case 0x7751de:c.instructions+=4;goto B7751de;
case 0x7751e3:c.instructions+=3;goto B7751e3;
case 0x7751e6:c.instructions+=2;goto B7751e6;
case 0x7751e7:c.instructions+=1;goto B7751e7;
case 0x7751ec:goto L7751ec;
case 0x7751ef:c.instructions+=1;goto B7751ef;
case 0x7751f0:goto L7751f0;
case 0x7751f2:c.instructions+=4;goto B7751f2;
case 0x7751f7:c.instructions+=3;goto B7751f7;
case 0x7751fa:c.instructions+=2;goto B7751fa;
case 0x7751fb:c.instructions+=1;goto B7751fb;
case 0x775200:goto L775200;
case 0x775203:c.instructions+=1;goto B775203;
case 0x775204:goto L775204;
case 0x775206:c.instructions+=4;goto B775206;
case 0x77520b:c.instructions+=3;goto B77520b;
case 0x77520e:c.instructions+=2;goto B77520e;
case 0x77520f:c.instructions+=1;goto B77520f;
case 0x775214:goto L775214;
case 0x775217:c.instructions+=1;goto B775217;
case 0x775218:goto L775218;
case 0x77521a:c.instructions+=4;goto B77521a;
case 0x77521f:c.instructions+=3;goto B77521f;
case 0x775222:c.instructions+=2;goto B775222;
case 0x775223:c.instructions+=1;goto B775223;
case 0x775228:goto L775228;
case 0x77522b:c.instructions+=1;goto B77522b;
case 0x77522c:goto L77522c;
case 0x77522e:c.instructions+=4;goto B77522e;
case 0x775233:c.instructions+=3;goto B775233;
case 0x775236:c.instructions+=2;goto B775236;
case 0x775237:c.instructions+=1;goto B775237;
case 0x77523c:goto L77523c;
case 0x77523f:c.instructions+=1;goto B77523f;
case 0x775240:goto L775240;
case 0x775242:c.instructions+=4;goto B775242;
case 0x775247:c.instructions+=3;goto B775247;
case 0x77524a:c.instructions+=2;goto B77524a;
case 0x77524b:c.instructions+=1;goto B77524b;
case 0x775250:goto L775250;
case 0x775253:c.instructions+=1;goto B775253;
case 0x775254:goto L775254;
case 0x775256:c.instructions+=4;goto B775256;
case 0x77525b:c.instructions+=3;goto B77525b;
case 0x77525e:c.instructions+=2;goto B77525e;
case 0x77525f:c.instructions+=1;goto B77525f;
case 0x775264:goto L775264;
case 0x775267:c.instructions+=1;goto B775267;
case 0x775268:goto L775268;
case 0x77526a:c.instructions+=4;goto B77526a;
case 0x77526f:c.instructions+=3;goto B77526f;
case 0x775272:c.instructions+=2;goto B775272;
case 0x775273:c.instructions+=1;goto B775273;
case 0x775278:goto L775278;
case 0x77527b:c.instructions+=1;goto B77527b;
case 0x77527c:goto L77527c;
case 0x77527e:c.instructions+=4;goto B77527e;
case 0x775283:c.instructions+=3;goto B775283;
case 0x775286:c.instructions+=2;goto B775286;
case 0x775287:c.instructions+=1;goto B775287;
case 0x77528c:goto L77528c;
case 0x77528f:c.instructions+=1;goto B77528f;
case 0x775290:goto L775290;
case 0x775292:c.instructions+=4;goto B775292;
case 0x775297:c.instructions+=3;goto B775297;
case 0x77529a:c.instructions+=2;goto B77529a;
case 0x77529b:c.instructions+=1;goto B77529b;
case 0x7752a0:goto L7752a0;
case 0x7752a3:c.instructions+=1;goto B7752a3;
case 0x7752a4:goto L7752a4;
case 0x7752a6:c.instructions+=4;goto B7752a6;
case 0x7752ab:c.instructions+=3;goto B7752ab;
case 0x7752ae:c.instructions+=2;goto B7752ae;
case 0x7752af:c.instructions+=1;goto B7752af;
case 0x7752b4:goto L7752b4;
case 0x7752b7:c.instructions+=1;goto B7752b7;
case 0x7752b8:goto L7752b8;
case 0x7752ba:c.instructions+=4;goto B7752ba;
case 0x7752bf:c.instructions+=3;goto B7752bf;
case 0x7752c2:c.instructions+=2;goto B7752c2;
case 0x7752c3:c.instructions+=1;goto B7752c3;
case 0x7752c8:goto L7752c8;
case 0x7752cb:c.instructions+=1;goto B7752cb;
case 0x7752cc:goto L7752cc;
case 0x7752ce:c.instructions+=4;goto B7752ce;
case 0x7752d3:c.instructions+=3;goto B7752d3;
case 0x7752d6:c.instructions+=2;goto B7752d6;
case 0x7752d7:c.instructions+=1;goto B7752d7;
case 0x7752dc:goto L7752dc;
case 0x7752df:c.instructions+=1;goto B7752df;
case 0x7752e0:goto L7752e0;
case 0x7752e2:c.instructions+=4;goto B7752e2;
case 0x7752e7:c.instructions+=3;goto B7752e7;
case 0x7752ea:c.instructions+=2;goto B7752ea;
case 0x7752eb:c.instructions+=1;goto B7752eb;
case 0x7752f0:goto L7752f0;
case 0x7752f3:c.instructions+=1;goto B7752f3;
case 0x7752f4:goto L7752f4;
case 0x7752f6:c.instructions+=4;goto B7752f6;
case 0x7752fb:c.instructions+=3;goto B7752fb;
case 0x7752fe:c.instructions+=2;goto B7752fe;
case 0x7752ff:c.instructions+=1;goto B7752ff;
case 0x775304:goto L775304;
case 0x775307:c.instructions+=1;goto B775307;
case 0x775308:goto L775308;
case 0x77530a:c.instructions+=4;goto B77530a;
case 0x77530f:c.instructions+=3;goto B77530f;
case 0x775312:c.instructions+=2;goto B775312;
case 0x775313:c.instructions+=1;goto B775313;
case 0x775318:goto L775318;
case 0x77531b:c.instructions+=1;goto B77531b;
case 0x77531c:goto L77531c;
case 0x77531e:c.instructions+=4;goto B77531e;
case 0x775323:c.instructions+=3;goto B775323;
case 0x775326:c.instructions+=2;goto B775326;
case 0x775327:c.instructions+=1;goto B775327;
case 0x77532c:goto L77532c;
case 0x77532f:c.instructions+=1;goto B77532f;
case 0x775330:goto L775330;
case 0x775332:c.instructions+=4;goto B775332;
case 0x775337:c.instructions+=3;goto B775337;
case 0x77533a:c.instructions+=2;goto B77533a;
case 0x77533b:c.instructions+=1;goto B77533b;
case 0x775340:goto L775340;
case 0x775343:c.instructions+=1;goto B775343;
case 0x775344:goto L775344;
case 0x775346:c.instructions+=4;goto B775346;
case 0x77534b:c.instructions+=3;goto B77534b;
case 0x77534e:c.instructions+=2;goto B77534e;
case 0x77534f:c.instructions+=1;goto B77534f;
case 0x775354:goto L775354;
case 0x775357:c.instructions+=1;goto B775357;
case 0x775358:goto L775358;
case 0x77535a:c.instructions+=4;goto B77535a;
case 0x77535f:c.instructions+=3;goto B77535f;
case 0x775362:c.instructions+=2;goto B775362;
case 0x775363:c.instructions+=1;goto B775363;
case 0x775368:goto L775368;
case 0x77536b:c.instructions+=1;goto B77536b;
case 0x77536c:goto L77536c;
case 0x77536e:c.instructions+=4;goto B77536e;
case 0x775373:c.instructions+=3;goto B775373;
case 0x775376:c.instructions+=2;goto B775376;
case 0x775377:c.instructions+=1;goto B775377;
case 0x77537c:goto L77537c;
case 0x77537f:c.instructions+=1;goto B77537f;
case 0x775380:goto L775380;
case 0x775382:c.instructions+=4;goto B775382;
case 0x775387:c.instructions+=3;goto B775387;
case 0x77538a:c.instructions+=2;goto B77538a;
case 0x77538b:c.instructions+=1;goto B77538b;
case 0x775390:goto L775390;
case 0x775393:c.instructions+=1;goto B775393;
case 0x775394:goto L775394;
case 0x775396:c.instructions+=4;goto B775396;
case 0x77539b:c.instructions+=3;goto B77539b;
case 0x77539e:c.instructions+=2;goto B77539e;
case 0x77539f:c.instructions+=1;goto B77539f;
case 0x7753a4:goto L7753a4;
case 0x7753a7:c.instructions+=1;goto B7753a7;
case 0x7753a8:goto L7753a8;
case 0x7753aa:c.instructions+=4;goto B7753aa;
case 0x7753af:c.instructions+=3;goto B7753af;
case 0x7753b2:c.instructions+=2;goto B7753b2;
case 0x7753b3:c.instructions+=1;goto B7753b3;
case 0x7753b8:goto L7753b8;
case 0x7753bb:c.instructions+=1;goto B7753bb;
case 0x7753bc:goto L7753bc;
case 0x7753be:c.instructions+=4;goto B7753be;
case 0x7753c3:c.instructions+=3;goto B7753c3;
case 0x7753c6:c.instructions+=2;goto B7753c6;
case 0x7753c7:c.instructions+=1;goto B7753c7;
case 0x7753cc:goto L7753cc;
case 0x7753cf:c.instructions+=1;goto B7753cf;
case 0x7753d0:goto L7753d0;
case 0x7753d2:c.instructions+=4;goto B7753d2;
case 0x7753d7:c.instructions+=3;goto B7753d7;
case 0x7753da:c.instructions+=2;goto B7753da;
case 0x7753db:c.instructions+=1;goto B7753db;
case 0x7753e0:goto L7753e0;
case 0x7753e3:c.instructions+=1;goto B7753e3;
case 0x7753e4:goto L7753e4;
case 0x7753e6:c.instructions+=4;goto B7753e6;
case 0x7753eb:c.instructions+=3;goto B7753eb;
case 0x7753ee:c.instructions+=2;goto B7753ee;
case 0x7753ef:c.instructions+=1;goto B7753ef;
case 0x7753f4:goto L7753f4;
case 0x7753f7:c.instructions+=1;goto B7753f7;
case 0x7753f8:goto L7753f8;
case 0x7753fa:c.instructions+=4;goto B7753fa;
case 0x7753ff:c.instructions+=3;goto B7753ff;
case 0x775402:c.instructions+=2;goto B775402;
case 0x775403:c.instructions+=1;goto B775403;
case 0x775408:goto L775408;
case 0x77540b:c.instructions+=1;goto B77540b;
case 0x77540c:goto L77540c;
case 0x77540e:c.instructions+=4;goto B77540e;
case 0x775413:c.instructions+=3;goto B775413;
case 0x775416:c.instructions+=2;goto B775416;
case 0x775417:c.instructions+=1;goto B775417;
case 0x77541c:goto L77541c;
case 0x77541f:c.instructions+=1;goto B77541f;
case 0x775420:goto L775420;
case 0x775422:c.instructions+=4;goto B775422;
case 0x775427:c.instructions+=3;goto B775427;
case 0x77542a:c.instructions+=2;goto B77542a;
case 0x77542b:c.instructions+=1;goto B77542b;
case 0x775430:goto L775430;
case 0x775433:c.instructions+=1;goto B775433;
case 0x775434:goto L775434;
case 0x775436:c.instructions+=4;goto B775436;
case 0x77543b:c.instructions+=3;goto B77543b;
case 0x77543e:c.instructions+=2;goto B77543e;
case 0x77543f:c.instructions+=1;goto B77543f;
case 0x775444:goto L775444;
case 0x775447:c.instructions+=1;goto B775447;
case 0x775448:goto L775448;
case 0x77544a:c.instructions+=4;goto B77544a;
case 0x77544f:c.instructions+=3;goto B77544f;
case 0x775452:c.instructions+=2;goto B775452;
case 0x775453:c.instructions+=1;goto B775453;
case 0x775458:goto L775458;
case 0x77545b:c.instructions+=1;goto B77545b;
case 0x77545c:goto L77545c;
case 0x77545e:c.instructions+=4;goto B77545e;
case 0x775463:c.instructions+=3;goto B775463;
case 0x775466:c.instructions+=2;goto B775466;
case 0x775467:c.instructions+=1;goto B775467;
case 0x77546c:goto L77546c;
case 0x77546f:c.instructions+=1;goto B77546f;
case 0x775470:goto L775470;
case 0x775472:c.instructions+=4;goto B775472;
case 0x775477:c.instructions+=3;goto B775477;
case 0x77547a:c.instructions+=2;goto B77547a;
case 0x77547b:c.instructions+=1;goto B77547b;
case 0x775480:goto L775480;
case 0x775483:c.instructions+=1;goto B775483;
case 0x775484:goto L775484;
case 0x775486:c.instructions+=4;goto B775486;
case 0x77548b:c.instructions+=3;goto B77548b;
case 0x77548e:c.instructions+=2;goto B77548e;
case 0x77548f:c.instructions+=1;goto B77548f;
case 0x775494:goto L775494;
case 0x775497:c.instructions+=1;goto B775497;
case 0x775498:goto L775498;
case 0x77549d:c.instructions+=1;goto B77549d;
case 0x7754b0:goto L7754b0;
case 0x7754b2:c.instructions+=4;goto B7754b2;
case 0x7754b7:c.instructions+=3;goto B7754b7;
case 0x7754ba:c.instructions+=2;goto B7754ba;
case 0x7754bb:c.instructions+=1;goto B7754bb;
case 0x7754c0:goto L7754c0;
case 0x7754c3:c.instructions+=1;goto B7754c3;
case 0x7754c4:goto L7754c4;
case 0x7754c6:c.instructions+=4;goto B7754c6;
case 0x7754cb:c.instructions+=3;goto B7754cb;
case 0x7754ce:c.instructions+=2;goto B7754ce;
case 0x7754cf:c.instructions+=1;goto B7754cf;
case 0x7754d4:goto L7754d4;
case 0x7754d7:c.instructions+=1;goto B7754d7;
case 0x7754d8:goto L7754d8;
case 0x7754da:c.instructions+=4;goto B7754da;
case 0x7754df:c.instructions+=3;goto B7754df;
case 0x7754e2:c.instructions+=2;goto B7754e2;
case 0x7754e3:c.instructions+=1;goto B7754e3;
case 0x7754e8:goto L7754e8;
case 0x7754eb:c.instructions+=1;goto B7754eb;
case 0x7754ec:goto L7754ec;
case 0x7754ee:c.instructions+=4;goto B7754ee;
case 0x7754f3:c.instructions+=3;goto B7754f3;
case 0x7754f6:c.instructions+=2;goto B7754f6;
case 0x7754f7:c.instructions+=1;goto B7754f7;
case 0x7754fc:goto L7754fc;
case 0x7754ff:c.instructions+=1;goto B7754ff;
case 0x775500:goto L775500;
case 0x775502:c.instructions+=4;goto B775502;
case 0x775507:c.instructions+=3;goto B775507;
case 0x77550a:c.instructions+=2;goto B77550a;
case 0x77550b:c.instructions+=1;goto B77550b;
case 0x775510:goto L775510;
case 0x775513:c.instructions+=1;goto B775513;
case 0x775514:goto L775514;
case 0x775516:c.instructions+=4;goto B775516;
case 0x77551b:c.instructions+=3;goto B77551b;
case 0x77551e:c.instructions+=2;goto B77551e;
case 0x77551f:c.instructions+=1;goto B77551f;
case 0x775524:goto L775524;
case 0x775527:c.instructions+=1;goto B775527;
case 0x775528:goto L775528;
case 0x77552a:c.instructions+=4;goto B77552a;
case 0x77552f:c.instructions+=3;goto B77552f;
case 0x775532:c.instructions+=2;goto B775532;
case 0x775533:c.instructions+=1;goto B775533;
case 0x775538:goto L775538;
case 0x77553b:c.instructions+=1;goto B77553b;
case 0x77553c:goto L77553c;
case 0x77553e:c.instructions+=4;goto B77553e;
case 0x775543:c.instructions+=3;goto B775543;
case 0x775546:c.instructions+=2;goto B775546;
case 0x775547:c.instructions+=1;goto B775547;
case 0x77554c:goto L77554c;
case 0x77554f:c.instructions+=1;goto B77554f;
case 0x775550:goto L775550;
case 0x775552:c.instructions+=4;goto B775552;
case 0x775557:c.instructions+=3;goto B775557;
case 0x77555a:c.instructions+=2;goto B77555a;
case 0x77555b:c.instructions+=1;goto B77555b;
case 0x775560:goto L775560;
case 0x775563:c.instructions+=1;goto B775563;
case 0x775564:goto L775564;
case 0x775566:c.instructions+=4;goto B775566;
case 0x77556b:c.instructions+=3;goto B77556b;
case 0x77556e:c.instructions+=2;goto B77556e;
case 0x77556f:c.instructions+=1;goto B77556f;
case 0x775574:goto L775574;
case 0x775577:c.instructions+=1;goto B775577;
case 0x775578:goto L775578;
case 0x77557a:c.instructions+=4;goto B77557a;
case 0x77557f:c.instructions+=3;goto B77557f;
case 0x775582:c.instructions+=2;goto B775582;
case 0x775583:c.instructions+=1;goto B775583;
case 0x775588:goto L775588;
case 0x77558b:c.instructions+=1;goto B77558b;
case 0x77558c:goto L77558c;
case 0x77558e:c.instructions+=4;goto B77558e;
case 0x775593:c.instructions+=3;goto B775593;
case 0x775596:c.instructions+=2;goto B775596;
case 0x775597:c.instructions+=1;goto B775597;
case 0x77559c:goto L77559c;
case 0x77559f:c.instructions+=1;goto B77559f;
case 0x7755a0:goto L7755a0;
case 0x7755a2:c.instructions+=4;goto B7755a2;
case 0x7755a7:c.instructions+=3;goto B7755a7;
case 0x7755aa:c.instructions+=2;goto B7755aa;
case 0x7755ab:c.instructions+=1;goto B7755ab;
case 0x7755b0:goto L7755b0;
case 0x7755b3:c.instructions+=1;goto B7755b3;
case 0x7755b4:goto L7755b4;
case 0x7755b6:c.instructions+=4;goto B7755b6;
case 0x7755bb:c.instructions+=3;goto B7755bb;
case 0x7755be:c.instructions+=2;goto B7755be;
case 0x7755bf:c.instructions+=1;goto B7755bf;
case 0x7755c4:goto L7755c4;
case 0x7755c7:c.instructions+=1;goto B7755c7;
case 0x7755c8:goto L7755c8;
case 0x7755ca:c.instructions+=4;goto B7755ca;
case 0x7755cf:c.instructions+=3;goto B7755cf;
case 0x7755d2:c.instructions+=2;goto B7755d2;
case 0x7755d3:c.instructions+=1;goto B7755d3;
case 0x7755d8:goto L7755d8;
case 0x7755db:c.instructions+=1;goto B7755db;
case 0x7755dc:goto L7755dc;
case 0x7755de:c.instructions+=4;goto B7755de;
case 0x7755e3:c.instructions+=3;goto B7755e3;
case 0x7755e6:c.instructions+=2;goto B7755e6;
case 0x7755e7:c.instructions+=1;goto B7755e7;
case 0x7755ec:goto L7755ec;
case 0x7755ef:c.instructions+=1;goto B7755ef;
case 0x7755f0:goto L7755f0;
case 0x7755f2:c.instructions+=4;goto B7755f2;
case 0x7755f7:c.instructions+=3;goto B7755f7;
case 0x7755fa:c.instructions+=2;goto B7755fa;
case 0x7755fb:c.instructions+=1;goto B7755fb;
case 0x775600:goto L775600;
case 0x775603:c.instructions+=1;goto B775603;
case 0x775604:goto L775604;
case 0x775606:c.instructions+=4;goto B775606;
case 0x77560b:c.instructions+=3;goto B77560b;
case 0x77560e:c.instructions+=2;goto B77560e;
case 0x77560f:c.instructions+=1;goto B77560f;
case 0x775614:goto L775614;
case 0x775617:c.instructions+=1;goto B775617;
case 0x775618:goto L775618;
case 0x77561a:c.instructions+=4;goto B77561a;
case 0x77561f:c.instructions+=3;goto B77561f;
case 0x775622:c.instructions+=2;goto B775622;
case 0x775623:c.instructions+=1;goto B775623;
case 0x775628:goto L775628;
case 0x77562b:c.instructions+=1;goto B77562b;
case 0x77562c:goto L77562c;
case 0x77562e:c.instructions+=4;goto B77562e;
case 0x775633:c.instructions+=3;goto B775633;
case 0x775636:c.instructions+=2;goto B775636;
case 0x775637:c.instructions+=1;goto B775637;
case 0x77563c:goto L77563c;
case 0x77563f:c.instructions+=1;goto B77563f;
case 0x775640:goto L775640;
case 0x775642:c.instructions+=4;goto B775642;
case 0x775647:c.instructions+=3;goto B775647;
case 0x77564a:c.instructions+=2;goto B77564a;
case 0x77564b:c.instructions+=1;goto B77564b;
case 0x775650:goto L775650;
case 0x775653:c.instructions+=1;goto B775653;
case 0x775654:goto L775654;
case 0x775656:c.instructions+=4;goto B775656;
case 0x77565b:c.instructions+=3;goto B77565b;
case 0x77565e:c.instructions+=2;goto B77565e;
case 0x77565f:c.instructions+=1;goto B77565f;
case 0x775664:goto L775664;
case 0x775667:c.instructions+=1;goto B775667;
case 0x775668:goto L775668;
case 0x77566a:c.instructions+=4;goto B77566a;
case 0x77566f:c.instructions+=3;goto B77566f;
case 0x775672:c.instructions+=2;goto B775672;
case 0x775673:c.instructions+=1;goto B775673;
case 0x775678:goto L775678;
case 0x77567b:c.instructions+=1;goto B77567b;
case 0x77567c:goto L77567c;
case 0x77567e:c.instructions+=4;goto B77567e;
case 0x775683:c.instructions+=3;goto B775683;
case 0x775686:c.instructions+=2;goto B775686;
case 0x775687:c.instructions+=1;goto B775687;
case 0x77568c:goto L77568c;
case 0x77568f:c.instructions+=1;goto B77568f;
case 0x775690:goto L775690;
case 0x775692:c.instructions+=4;goto B775692;
case 0x775697:c.instructions+=3;goto B775697;
case 0x77569a:c.instructions+=2;goto B77569a;
case 0x77569b:c.instructions+=1;goto B77569b;
case 0x7756a0:goto L7756a0;
case 0x7756a3:c.instructions+=1;goto B7756a3;
case 0x7756a4:goto L7756a4;
case 0x7756a6:c.instructions+=4;goto B7756a6;
case 0x7756ab:c.instructions+=3;goto B7756ab;
case 0x7756ae:c.instructions+=2;goto B7756ae;
case 0x7756af:c.instructions+=1;goto B7756af;
case 0x7756b4:goto L7756b4;
case 0x7756b7:c.instructions+=1;goto B7756b7;
case 0x7756b8:goto L7756b8;
case 0x7756ba:c.instructions+=4;goto B7756ba;
case 0x7756bf:c.instructions+=3;goto B7756bf;
case 0x7756c2:c.instructions+=2;goto B7756c2;
case 0x7756c3:c.instructions+=1;goto B7756c3;
case 0x7756c8:goto L7756c8;
case 0x7756cb:c.instructions+=1;goto B7756cb;
case 0x7756cc:goto L7756cc;
case 0x7756ce:c.instructions+=4;goto B7756ce;
case 0x7756d3:c.instructions+=3;goto B7756d3;
case 0x7756d6:c.instructions+=2;goto B7756d6;
case 0x7756d7:c.instructions+=1;goto B7756d7;
case 0x7756dc:goto L7756dc;
case 0x7756df:c.instructions+=1;goto B7756df;
case 0x7756e0:goto L7756e0;
case 0x7756e2:c.instructions+=4;goto B7756e2;
case 0x7756e7:c.instructions+=3;goto B7756e7;
case 0x7756ea:c.instructions+=2;goto B7756ea;
case 0x7756eb:c.instructions+=1;goto B7756eb;
case 0x7756f0:goto L7756f0;
case 0x7756f3:c.instructions+=1;goto B7756f3;
case 0x7756f4:goto L7756f4;
case 0x7756f6:c.instructions+=4;goto B7756f6;
case 0x7756fb:c.instructions+=3;goto B7756fb;
case 0x7756fe:c.instructions+=2;goto B7756fe;
case 0x7756ff:c.instructions+=1;goto B7756ff;
case 0x775704:goto L775704;
case 0x775707:c.instructions+=1;goto B775707;
case 0x775708:goto L775708;
case 0x77570a:c.instructions+=4;goto B77570a;
case 0x77570f:c.instructions+=3;goto B77570f;
case 0x775712:c.instructions+=2;goto B775712;
case 0x775713:c.instructions+=1;goto B775713;
case 0x775718:goto L775718;
case 0x77571b:c.instructions+=1;goto B77571b;
case 0x77571c:goto L77571c;
case 0x77571e:c.instructions+=4;goto B77571e;
case 0x775723:c.instructions+=3;goto B775723;
case 0x775726:c.instructions+=2;goto B775726;
case 0x775727:c.instructions+=1;goto B775727;
case 0x77572c:goto L77572c;
case 0x77572f:c.instructions+=1;goto B77572f;
case 0x775730:goto L775730;
case 0x775732:c.instructions+=4;goto B775732;
case 0x775737:c.instructions+=3;goto B775737;
case 0x77573a:c.instructions+=2;goto B77573a;
case 0x77573b:c.instructions+=1;goto B77573b;
case 0x775740:goto L775740;
case 0x775743:c.instructions+=1;goto B775743;
case 0x775744:goto L775744;
case 0x775746:c.instructions+=4;goto B775746;
case 0x77574b:c.instructions+=3;goto B77574b;
case 0x77574e:c.instructions+=2;goto B77574e;
case 0x77574f:c.instructions+=1;goto B77574f;
case 0x775754:goto L775754;
case 0x775757:c.instructions+=1;goto B775757;
case 0x775758:goto L775758;
case 0x77575a:c.instructions+=4;goto B77575a;
case 0x77575f:c.instructions+=3;goto B77575f;
case 0x775762:c.instructions+=2;goto B775762;
case 0x775763:c.instructions+=1;goto B775763;
case 0x775768:goto L775768;
case 0x77576b:c.instructions+=1;goto B77576b;
case 0x77576c:goto L77576c;
case 0x77576e:c.instructions+=4;goto B77576e;
case 0x775773:c.instructions+=3;goto B775773;
case 0x775776:c.instructions+=2;goto B775776;
case 0x775777:c.instructions+=1;goto B775777;
case 0x77577c:goto L77577c;
case 0x77577f:c.instructions+=1;goto B77577f;
case 0x775780:goto L775780;
case 0x775782:c.instructions+=4;goto B775782;
case 0x775787:c.instructions+=3;goto B775787;
case 0x77578a:c.instructions+=2;goto B77578a;
case 0x77578b:c.instructions+=1;goto B77578b;
case 0x775790:goto L775790;
case 0x775793:c.instructions+=1;goto B775793;
case 0x775794:goto L775794;
case 0x775796:c.instructions+=4;goto B775796;
case 0x77579b:c.instructions+=3;goto B77579b;
case 0x77579e:c.instructions+=2;goto B77579e;
case 0x77579f:c.instructions+=1;goto B77579f;
case 0x7757a4:goto L7757a4;
case 0x7757a7:c.instructions+=1;goto B7757a7;
case 0x7757a8:goto L7757a8;
case 0x7757aa:c.instructions+=4;goto B7757aa;
case 0x7757af:c.instructions+=3;goto B7757af;
case 0x7757b2:c.instructions+=2;goto B7757b2;
case 0x7757b3:c.instructions+=1;goto B7757b3;
case 0x7757b8:goto L7757b8;
case 0x7757bb:c.instructions+=1;goto B7757bb;
case 0x7757bc:goto L7757bc;
case 0x7757be:c.instructions+=4;goto B7757be;
case 0x7757c3:c.instructions+=3;goto B7757c3;
case 0x7757c6:c.instructions+=2;goto B7757c6;
case 0x7757c7:c.instructions+=1;goto B7757c7;
case 0x7757cc:goto L7757cc;
case 0x7757cf:c.instructions+=1;goto B7757cf;
case 0x7757d0:goto L7757d0;
case 0x7757d2:c.instructions+=4;goto B7757d2;
case 0x7757d7:c.instructions+=3;goto B7757d7;
case 0x7757da:c.instructions+=2;goto B7757da;
case 0x7757db:c.instructions+=1;goto B7757db;
case 0x7757e0:goto L7757e0;
case 0x7757e3:c.instructions+=1;goto B7757e3;
case 0x7757e4:goto L7757e4;
case 0x7757e6:c.instructions+=4;goto B7757e6;
case 0x7757eb:c.instructions+=3;goto B7757eb;
case 0x7757ee:c.instructions+=2;goto B7757ee;
case 0x7757ef:c.instructions+=1;goto B7757ef;
case 0x7757f4:goto L7757f4;
case 0x7757f7:c.instructions+=1;goto B7757f7;
case 0x7757f8:goto L7757f8;
case 0x7757fa:c.instructions+=4;goto B7757fa;
case 0x7757ff:c.instructions+=3;goto B7757ff;
case 0x775802:c.instructions+=2;goto B775802;
case 0x775803:c.instructions+=1;goto B775803;
case 0x775808:goto L775808;
case 0x77580b:c.instructions+=1;goto B77580b;
case 0x77580c:goto L77580c;
case 0x77580e:c.instructions+=4;goto B77580e;
case 0x775813:c.instructions+=3;goto B775813;
case 0x775816:c.instructions+=2;goto B775816;
case 0x775817:c.instructions+=1;goto B775817;
case 0x77581c:goto L77581c;
case 0x77581f:c.instructions+=1;goto B77581f;
case 0x775820:goto L775820;
case 0x775822:c.instructions+=4;goto B775822;
case 0x775827:c.instructions+=3;goto B775827;
case 0x77582a:c.instructions+=2;goto B77582a;
case 0x77582b:c.instructions+=1;goto B77582b;
case 0x775830:goto L775830;
case 0x775833:c.instructions+=1;goto B775833;
case 0x775834:goto L775834;
case 0x775836:c.instructions+=4;goto B775836;
case 0x77583b:c.instructions+=3;goto B77583b;
case 0x77583e:c.instructions+=2;goto B77583e;
case 0x77583f:c.instructions+=1;goto B77583f;
case 0x775844:goto L775844;
case 0x775847:c.instructions+=1;goto B775847;
case 0x775848:goto L775848;
case 0x77584a:c.instructions+=4;goto B77584a;
case 0x77584f:c.instructions+=3;goto B77584f;
case 0x775852:c.instructions+=2;goto B775852;
case 0x775853:c.instructions+=1;goto B775853;
case 0x775858:goto L775858;
case 0x77585b:c.instructions+=1;goto B77585b;
case 0x77585c:goto L77585c;
case 0x77585e:c.instructions+=4;goto B77585e;
case 0x775863:c.instructions+=3;goto B775863;
case 0x775866:c.instructions+=2;goto B775866;
case 0x775867:c.instructions+=1;goto B775867;
case 0x77586c:goto L77586c;
case 0x77586f:c.instructions+=1;goto B77586f;
case 0x775870:goto L775870;
case 0x775875:c.instructions+=1;goto B775875;
case 0x775880:goto L775880;
case 0x775883:c.instructions+=1;goto B775883;
case 0x775888:goto L775888;
case 0x77588b:c.instructions+=2;goto B77588b;
case 0x77588e:c.instructions+=1;goto B77588e;
case 0x775893:goto L775893;
case 0x775896:c.instructions+=2;goto B775896;
case 0x775899:c.instructions+=1;goto B775899;
case 0x77589e:goto L77589e;
case 0x7758a3:c.instructions+=1;goto B7758a3;
case 0x7758b0:goto L7758b0;
case 0x7758b6:c.instructions+=1;goto B7758b6;
case 0x7758bb:goto L7758bb;
case 0x7758c1:c.instructions+=1;goto B7758c1;
case 0x7758c6:goto L7758c6;
case 0x7758cc:c.instructions+=1;goto B7758cc;
case 0x7758d1:goto L7758d1;
case 0x7758d6:c.instructions+=1;goto B7758d6;
case 0x7758e0:goto L7758e0;
case 0x7758e6:c.instructions+=1;goto B7758e6;
case 0x7758eb:goto L7758eb;
case 0x7758f1:c.instructions+=2;goto B7758f1;
case 0x7758f7:c.instructions+=1;goto B7758f7;
case 0x7758fc:goto L7758fc;
case 0x775902:c.instructions+=1;goto B775902;
case 0x775907:goto L775907;
case 0x77590d:c.instructions+=1;goto B77590d;
case 0x775912:goto L775912;
case 0x775917:c.instructions+=1;goto B775917;
case 0x775920:goto L775920;
case 0x775923:c.instructions+=1;goto B775923;
case 0x775928:goto L775928;
case 0x77592a:c.instructions+=4;goto B77592a;
case 0x77592f:c.instructions+=3;goto B77592f;
case 0x775932:c.instructions+=2;goto B775932;
case 0x775933:c.instructions+=1;goto B775933;
case 0x775938:goto L775938;
case 0x77593b:c.instructions+=1;goto B77593b;
case 0x77593c:goto L77593c;
case 0x775941:c.instructions+=1;goto B775941;
case 0x775950:goto L775950;
case 0x775952:c.instructions+=4;goto B775952;
case 0x775957:c.instructions+=3;goto B775957;
case 0x77595a:c.instructions+=2;goto B77595a;
case 0x77595b:c.instructions+=1;goto B77595b;
case 0x775960:goto L775960;
case 0x775963:c.instructions+=1;goto B775963;
case 0x775964:goto L775964;
case 0x775966:c.instructions+=4;goto B775966;
case 0x77596b:c.instructions+=3;goto B77596b;
case 0x77596e:c.instructions+=2;goto B77596e;
case 0x77596f:c.instructions+=1;goto B77596f;
case 0x775974:goto L775974;
case 0x775977:c.instructions+=1;goto B775977;
case 0x775978:goto L775978;
case 0x77597a:c.instructions+=4;goto B77597a;
case 0x77597f:c.instructions+=3;goto B77597f;
case 0x775982:c.instructions+=2;goto B775982;
case 0x775983:c.instructions+=1;goto B775983;
case 0x775988:goto L775988;
case 0x77598b:c.instructions+=1;goto B77598b;
case 0x77598c:goto L77598c;
case 0x77598f:c.instructions+=2;goto B77598f;
case 0x775992:c.instructions+=1;goto B775992;
case 0x775997:goto L775997;
case 0x77599c:c.instructions+=1;goto B77599c;
case 0x7759b0:goto L7759b0;
case 0x7759b3:c.instructions+=2;goto B7759b3;
case 0x7759b6:c.instructions+=1;goto B7759b6;
case 0x7759bb:goto L7759bb;
case 0x7759be:c.instructions+=2;goto B7759be;
case 0x7759c1:c.instructions+=1;goto B7759c1;
case 0x7759c6:goto L7759c6;
case 0x7759c8:c.instructions+=4;goto B7759c8;
case 0x7759cd:c.instructions+=3;goto B7759cd;
case 0x7759d0:c.instructions+=2;goto B7759d0;
case 0x7759d1:c.instructions+=1;goto B7759d1;
case 0x7759d6:goto L7759d6;
case 0x7759d9:c.instructions+=1;goto B7759d9;
case 0x7759da:goto L7759da;
case 0x7759dc:c.instructions+=4;goto B7759dc;
case 0x7759e1:c.instructions+=3;goto B7759e1;
case 0x7759e4:c.instructions+=2;goto B7759e4;
case 0x7759e5:c.instructions+=1;goto B7759e5;
case 0x7759ea:goto L7759ea;
case 0x7759ed:c.instructions+=1;goto B7759ed;
case 0x7759ee:goto L7759ee;
case 0x7759f0:c.instructions+=4;goto B7759f0;
case 0x7759f5:c.instructions+=3;goto B7759f5;
case 0x7759f8:c.instructions+=2;goto B7759f8;
case 0x7759f9:c.instructions+=1;goto B7759f9;
case 0x7759fe:goto L7759fe;
case 0x775a01:c.instructions+=1;goto B775a01;
case 0x775a02:goto L775a02;
case 0x775a07:c.instructions+=1;goto B775a07;
case 0x775a10:goto L775a10;
case 0x775a13:c.instructions+=2;goto B775a13;
case 0x775a16:c.instructions+=1;goto B775a16;
case 0x775a1b:goto L775a1b;
case 0x775a20:c.instructions+=1;goto B775a20;
case 0x775a30:goto L775a30;
case 0x775a33:c.instructions+=1;goto B775a33;
case 0x775a38:goto L775a38;
case 0x775a3d:c.instructions+=1;goto B775a3d;
case 0x775a50:goto L775a50;
case 0x775a52:c.instructions+=4;goto B775a52;
case 0x775a57:c.instructions+=3;goto B775a57;
case 0x775a5a:c.instructions+=2;goto B775a5a;
case 0x775a5b:c.instructions+=1;goto B775a5b;
case 0x775a60:goto L775a60;
case 0x775a63:c.instructions+=1;goto B775a63;
case 0x775a64:goto L775a64;
case 0x775a69:c.instructions+=1;goto B775a69;
case 0x775a70:goto L775a70;
case 0x775a73:c.instructions+=1;goto B775a73;
case 0x775a78:goto L775a78;
case 0x775a7d:c.instructions+=1;goto B775a7d;
case 0x775a90:goto L775a90;
case 0x775a92:c.instructions+=4;goto B775a92;
case 0x775a97:c.instructions+=3;goto B775a97;
case 0x775a9d:c.instructions+=2;goto B775a9d;
case 0x775a9e:c.instructions+=1;goto B775a9e;
case 0x775aa3:goto L775aa3;
case 0x775aa6:c.instructions+=1;goto B775aa6;
case 0x775aa7:goto L775aa7;
case 0x775aac:c.instructions+=1;goto B775aac;
case 0x775ac0:goto L775ac0;
case 0x775ac2:c.instructions+=4;goto B775ac2;
case 0x775ac7:c.instructions+=3;goto B775ac7;
case 0x775aca:c.instructions+=2;goto B775aca;
case 0x775acb:c.instructions+=1;goto B775acb;
case 0x775ad0:goto L775ad0;
case 0x775ad3:c.instructions+=1;goto B775ad3;
case 0x775ad4:goto L775ad4;
case 0x775ad9:c.instructions+=1;goto B775ad9;
case 0x775ae0:goto L775ae0;
case 0x775ae3:c.instructions+=1;goto B775ae3;
case 0x775ae8:goto L775ae8;
case 0x775aeb:c.instructions+=2;goto B775aeb;
case 0x775aee:c.instructions+=1;goto B775aee;
case 0x775af3:goto L775af3;
case 0x775af6:c.instructions+=2;goto B775af6;
case 0x775afc:c.instructions+=1;goto B775afc;
case 0x775b01:goto L775b01;
case 0x775b03:c.instructions+=4;goto B775b03;
case 0x775b08:c.instructions+=3;goto B775b08;
case 0x775b0b:c.instructions+=2;goto B775b0b;
case 0x775b0c:c.instructions+=1;goto B775b0c;
case 0x775b11:goto L775b11;
case 0x775b14:c.instructions+=1;goto B775b14;
case 0x775b15:goto L775b15;
case 0x775b18:c.instructions+=1;goto B775b18;
case 0x775b1d:goto L775b1d;
case 0x775b22:c.instructions+=1;goto B775b22;
case 0x775b30:goto L775b30;
case 0x775b32:c.instructions+=4;goto B775b32;
case 0x775b37:c.instructions+=3;goto B775b37;
case 0x775b3a:c.instructions+=2;goto B775b3a;
case 0x775b3b:c.instructions+=1;goto B775b3b;
case 0x775b40:goto L775b40;
case 0x775b43:c.instructions+=1;goto B775b43;
case 0x775b44:goto L775b44;
case 0x775b49:c.instructions+=1;goto B775b49;
case 0x775b50:goto L775b50;
case 0x775b56:c.instructions+=1;goto B775b56;
case 0x775b5b:goto L775b5b;
case 0x775b61:c.instructions+=2;goto B775b61;
case 0x775b64:c.instructions+=1;goto B775b64;
case 0x775b69:goto L775b69;
case 0x775b6f:c.instructions+=2;goto B775b6f;
case 0x775b75:c.instructions+=1;goto B775b75;
case 0x775b7a:goto L775b7a;
case 0x775b80:c.instructions+=2;goto B775b80;
case 0x775b86:c.instructions+=1;goto B775b86;
case 0x775b8b:goto L775b8b;
case 0x775b91:c.instructions+=2;goto B775b91;
case 0x775b97:c.instructions+=1;goto B775b97;
case 0x775b9c:goto L775b9c;
case 0x775ba2:c.instructions+=1;goto B775ba2;
case 0x775ba7:goto L775ba7;
case 0x775bac:c.instructions+=1;goto B775bac;
case 0x775bc0:goto L775bc0;
case 0x775bc2:c.instructions+=4;goto B775bc2;
case 0x775bc7:c.instructions+=3;goto B775bc7;
case 0x775bca:c.instructions+=2;goto B775bca;
case 0x775bcb:c.instructions+=1;goto B775bcb;
case 0x775bd0:goto L775bd0;
case 0x775bd3:c.instructions+=1;goto B775bd3;
case 0x775bd4:goto L775bd4;
case 0x775bd9:c.instructions+=1;goto B775bd9;
case 0x775be0:goto L775be0;
case 0x775be3:c.instructions+=1;goto B775be3;
case 0x775be8:goto L775be8;
case 0x775beb:c.instructions+=2;goto B775beb;
case 0x775bee:c.instructions+=1;goto B775bee;
case 0x775bf3:goto L775bf3;
case 0x775bf6:c.instructions+=2;goto B775bf6;
case 0x775bf9:c.instructions+=1;goto B775bf9;
case 0x775bfe:goto L775bfe;
case 0x775c01:c.instructions+=2;goto B775c01;
case 0x775c07:c.instructions+=1;goto B775c07;
case 0x775c0c:goto L775c0c;
case 0x775c11:c.instructions+=1;goto B775c11;
case 0x775c20:goto L775c20;
case 0x775c22:c.instructions+=4;goto B775c22;
case 0x775c27:c.instructions+=3;goto B775c27;
case 0x775c2a:c.instructions+=2;goto B775c2a;
case 0x775c2b:c.instructions+=1;goto B775c2b;
case 0x775c30:goto L775c30;
case 0x775c33:c.instructions+=1;goto B775c33;
case 0x775c34:goto L775c34;
case 0x775c39:c.instructions+=1;goto B775c39;
case 0x775c40:goto L775c40;
case 0x775c42:c.instructions+=4;goto B775c42;
case 0x775c47:c.instructions+=3;goto B775c47;
case 0x775c4a:c.instructions+=2;goto B775c4a;
case 0x775c4b:c.instructions+=1;goto B775c4b;
case 0x775c50:goto L775c50;
case 0x775c53:c.instructions+=1;goto B775c53;
case 0x775c54:goto L775c54;
case 0x775c59:c.instructions+=1;goto B775c59;
case 0x775c60:goto L775c60;
case 0x775c62:c.instructions+=4;goto B775c62;
case 0x775c67:c.instructions+=3;goto B775c67;
case 0x775c6a:c.instructions+=2;goto B775c6a;
case 0x775c6b:c.instructions+=1;goto B775c6b;
case 0x775c70:goto L775c70;
case 0x775c73:c.instructions+=1;goto B775c73;
case 0x775c74:goto L775c74;
case 0x775c79:c.instructions+=1;goto B775c79;
case 0x775c80:goto L775c80;
case 0x775c82:c.instructions+=4;goto B775c82;
case 0x775c87:c.instructions+=3;goto B775c87;
case 0x775c8a:c.instructions+=2;goto B775c8a;
case 0x775c8b:c.instructions+=1;goto B775c8b;
case 0x775c90:goto L775c90;
case 0x775c93:c.instructions+=1;goto B775c93;
case 0x775c94:goto L775c94;
case 0x775c99:c.instructions+=1;goto B775c99;
case 0x775ca0:goto L775ca0;
case 0x775ca2:c.instructions+=4;goto B775ca2;
case 0x775ca7:c.instructions+=3;goto B775ca7;
case 0x775caa:c.instructions+=2;goto B775caa;
case 0x775cab:c.instructions+=1;goto B775cab;
case 0x775cb0:goto L775cb0;
case 0x775cb3:c.instructions+=1;goto B775cb3;
case 0x775cb4:goto L775cb4;
case 0x775cb9:c.instructions+=1;goto B775cb9;
case 0x775cc0:goto L775cc0;
case 0x775cc3:c.instructions+=2;goto B775cc3;
case 0x775cc9:c.instructions+=1;goto B775cc9;
case 0x775cce:goto L775cce;
case 0x775cd3:c.instructions+=1;goto B775cd3;
case 0x775ce0:goto L775ce0;
case 0x775ce2:c.instructions+=4;goto B775ce2;
case 0x775ce7:c.instructions+=3;goto B775ce7;
case 0x775cea:c.instructions+=2;goto B775cea;
case 0x775ceb:c.instructions+=1;goto B775ceb;
case 0x775cf0:goto L775cf0;
case 0x775cf3:c.instructions+=1;goto B775cf3;
case 0x775cf4:goto L775cf4;
case 0x775cf9:c.instructions+=1;goto B775cf9;
case 0x775d00:goto L775d00;
case 0x775d02:c.instructions+=4;goto B775d02;
case 0x775d07:c.instructions+=3;goto B775d07;
case 0x775d0a:c.instructions+=2;goto B775d0a;
case 0x775d0b:c.instructions+=1;goto B775d0b;
case 0x775d10:goto L775d10;
case 0x775d13:c.instructions+=1;goto B775d13;
case 0x775d14:goto L775d14;
case 0x775d19:c.instructions+=1;goto B775d19;
case 0x775d20:goto L775d20;
case 0x775d22:c.instructions+=4;goto B775d22;
case 0x775d27:c.instructions+=3;goto B775d27;
case 0x775d2a:c.instructions+=2;goto B775d2a;
case 0x775d2b:c.instructions+=1;goto B775d2b;
case 0x775d30:goto L775d30;
case 0x775d33:c.instructions+=1;goto B775d33;
case 0x775d34:goto L775d34;
case 0x775d39:c.instructions+=1;goto B775d39;
case 0x775d40:goto L775d40;
case 0x775d42:c.instructions+=4;goto B775d42;
case 0x775d47:c.instructions+=3;goto B775d47;
case 0x775d4a:c.instructions+=2;goto B775d4a;
case 0x775d4b:c.instructions+=1;goto B775d4b;
case 0x775d50:goto L775d50;
case 0x775d53:c.instructions+=1;goto B775d53;
case 0x775d54:goto L775d54;
case 0x775d59:c.instructions+=1;goto B775d59;
case 0x775d60:goto L775d60;
case 0x775d62:c.instructions+=4;goto B775d62;
case 0x775d67:c.instructions+=3;goto B775d67;
case 0x775d6a:c.instructions+=2;goto B775d6a;
case 0x775d6b:c.instructions+=1;goto B775d6b;
case 0x775d70:goto L775d70;
case 0x775d73:c.instructions+=1;goto B775d73;
case 0x775d74:goto L775d74;
case 0x775d79:c.instructions+=1;goto B775d79;
case 0x775d80:goto L775d80;
case 0x775d82:c.instructions+=4;goto B775d82;
case 0x775d87:c.instructions+=3;goto B775d87;
case 0x775d8a:c.instructions+=2;goto B775d8a;
case 0x775d8b:c.instructions+=1;goto B775d8b;
case 0x775d90:goto L775d90;
case 0x775d93:c.instructions+=1;goto B775d93;
case 0x775d94:goto L775d94;
case 0x775d99:c.instructions+=1;goto B775d99;
case 0x775da0:goto L775da0;
case 0x775da2:c.instructions+=4;goto B775da2;
case 0x775da7:c.instructions+=3;goto B775da7;
case 0x775daa:c.instructions+=2;goto B775daa;
case 0x775dab:c.instructions+=1;goto B775dab;
case 0x775db0:goto L775db0;
case 0x775db3:c.instructions+=1;goto B775db3;
case 0x775db4:goto L775db4;
case 0x775db9:c.instructions+=1;goto B775db9;
case 0x775dc0:goto L775dc0;
case 0x775dc3:c.instructions+=1;goto B775dc3;
case 0x775dc8:goto L775dc8;
case 0x775dcb:c.instructions+=2;goto B775dcb;
case 0x775dce:c.instructions+=1;goto B775dce;
case 0x775dd3:goto L775dd3;
case 0x775dd8:c.instructions+=1;goto B775dd8;
case 0x775de0:goto L775de0;
case 0x775de6:c.instructions+=1;goto B775de6;
case 0x775deb:goto L775deb;
case 0x775df1:c.instructions+=2;goto B775df1;
case 0x775df7:c.instructions+=1;goto B775df7;
case 0x775dfc:goto L775dfc;
case 0x775e02:c.instructions+=1;goto B775e02;
case 0x775e07:goto L775e07;
case 0x775e0d:c.instructions+=1;goto B775e0d;
case 0x775e12:goto L775e12;
case 0x775e17:c.instructions+=1;goto B775e17;
case 0x775e20:goto L775e20;
case 0x775e22:c.instructions+=4;goto B775e22;
case 0x775e27:c.instructions+=3;goto B775e27;
case 0x775e2a:c.instructions+=2;goto B775e2a;
case 0x775e2b:c.instructions+=1;goto B775e2b;
case 0x775e30:goto L775e30;
case 0x775e33:c.instructions+=1;goto B775e33;
case 0x775e34:goto L775e34;
case 0x775e39:c.instructions+=1;goto B775e39;
case 0x775e40:goto L775e40;
case 0x775e42:c.instructions+=4;goto B775e42;
case 0x775e47:c.instructions+=3;goto B775e47;
case 0x775e4a:c.instructions+=2;goto B775e4a;
case 0x775e4b:c.instructions+=1;goto B775e4b;
case 0x775e50:goto L775e50;
case 0x775e53:c.instructions+=1;goto B775e53;
case 0x775e54:goto L775e54;
case 0x775e59:c.instructions+=1;goto B775e59;
case 0x775e60:goto L775e60;
case 0x775e63:c.instructions+=1;goto B775e63;
case 0x775e68:goto L775e68;
case 0x775e6b:c.instructions+=2;goto B775e6b;
case 0x775e6e:c.instructions+=1;goto B775e6e;
case 0x775e73:goto L775e73;
case 0x775e76:c.instructions+=2;goto B775e76;
case 0x775e7c:c.instructions+=1;goto B775e7c;
case 0x775e81:goto L775e81;
case 0x775e86:c.instructions+=1;goto B775e86;
case 0x775e90:goto L775e90;
case 0x775e96:c.instructions+=1;goto B775e96;
case 0x775e9b:goto L775e9b;
case 0x775ea1:c.instructions+=2;goto B775ea1;
case 0x775ea4:c.instructions+=1;goto B775ea4;
case 0x775ea9:goto L775ea9;
case 0x775eae:c.instructions+=1;goto B775eae;
case 0x775ec0:goto L775ec0;
case 0x775ec6:c.instructions+=1;goto B775ec6;
case 0x775ecb:goto L775ecb;
case 0x775ed1:c.instructions+=1;goto B775ed1;
case 0x775ed6:goto L775ed6;
case 0x775edb:c.instructions+=1;goto B775edb;
case 0x775ee0:goto L775ee0;
case 0x775ee2:c.instructions+=4;goto B775ee2;
case 0x775ee7:c.instructions+=3;goto B775ee7;
case 0x775eea:c.instructions+=2;goto B775eea;
case 0x775eeb:c.instructions+=1;goto B775eeb;
case 0x775ef0:goto L775ef0;
case 0x775ef3:c.instructions+=1;goto B775ef3;
case 0x775ef4:goto L775ef4;
case 0x775ef9:c.instructions+=1;goto B775ef9;
case 0x775f00:goto L775f00;
case 0x775f03:c.instructions+=1;goto B775f03;
case 0x775f08:goto L775f08;
case 0x775f0b:c.instructions+=2;goto B775f0b;
case 0x775f11:c.instructions+=1;goto B775f11;
case 0x775f16:goto L775f16;
case 0x775f1b:c.instructions+=1;goto B775f1b;
case 0x775f20:goto L775f20;
case 0x775f23:c.instructions+=2;goto B775f23;
case 0x775f26:c.instructions+=1;goto B775f26;
case 0x775f2b:goto L775f2b;
case 0x775f30:c.instructions+=1;goto B775f30;
case 0x775f40:goto L775f40;
case 0x775f42:c.instructions+=4;goto B775f42;
case 0x775f47:c.instructions+=3;goto B775f47;
case 0x775f4a:c.instructions+=2;goto B775f4a;
case 0x775f4b:c.instructions+=1;goto B775f4b;
case 0x775f50:goto L775f50;
case 0x775f53:c.instructions+=1;goto B775f53;
case 0x775f54:goto L775f54;
case 0x775f56:c.instructions+=4;goto B775f56;
case 0x775f5b:c.instructions+=3;goto B775f5b;
case 0x775f5e:c.instructions+=2;goto B775f5e;
case 0x775f5f:c.instructions+=1;goto B775f5f;
case 0x775f64:goto L775f64;
case 0x775f67:c.instructions+=1;goto B775f67;
case 0x775f68:goto L775f68;
case 0x775f6a:c.instructions+=4;goto B775f6a;
case 0x775f6f:c.instructions+=3;goto B775f6f;
case 0x775f72:c.instructions+=2;goto B775f72;
case 0x775f73:c.instructions+=1;goto B775f73;
case 0x775f78:goto L775f78;
case 0x775f7b:c.instructions+=1;goto B775f7b;
case 0x775f7c:goto L775f7c;
case 0x775f7e:c.instructions+=4;goto B775f7e;
case 0x775f83:c.instructions+=3;goto B775f83;
case 0x775f86:c.instructions+=2;goto B775f86;
case 0x775f87:c.instructions+=1;goto B775f87;
case 0x775f8c:goto L775f8c;
case 0x775f8f:c.instructions+=1;goto B775f8f;
case 0x775f90:goto L775f90;
case 0x775f92:c.instructions+=4;goto B775f92;
case 0x775f97:c.instructions+=3;goto B775f97;
case 0x775f9a:c.instructions+=2;goto B775f9a;
case 0x775f9b:c.instructions+=1;goto B775f9b;
case 0x775fa0:goto L775fa0;
case 0x775fa3:c.instructions+=1;goto B775fa3;
case 0x775fa4:goto L775fa4;
case 0x775fa6:c.instructions+=4;goto B775fa6;
case 0x775fab:c.instructions+=3;goto B775fab;
case 0x775fae:c.instructions+=2;goto B775fae;
case 0x775faf:c.instructions+=1;goto B775faf;
case 0x775fb4:goto L775fb4;
case 0x775fb7:c.instructions+=1;goto B775fb7;
case 0x775fb8:goto L775fb8;
case 0x775fba:c.instructions+=4;goto B775fba;
case 0x775fbf:c.instructions+=3;goto B775fbf;
case 0x775fc2:c.instructions+=2;goto B775fc2;
case 0x775fc3:c.instructions+=1;goto B775fc3;
case 0x775fc8:goto L775fc8;
case 0x775fcb:c.instructions+=1;goto B775fcb;
case 0x775fcc:goto L775fcc;
case 0x775fce:c.instructions+=4;goto B775fce;
case 0x775fd3:c.instructions+=3;goto B775fd3;
case 0x775fd6:c.instructions+=2;goto B775fd6;
case 0x775fd7:c.instructions+=1;goto B775fd7;
case 0x775fdc:goto L775fdc;
case 0x775fdf:c.instructions+=1;goto B775fdf;
case 0x775fe0:goto L775fe0;
case 0x775fe2:c.instructions+=4;goto B775fe2;
case 0x775fe7:c.instructions+=3;goto B775fe7;
case 0x775fea:c.instructions+=2;goto B775fea;
case 0x775feb:c.instructions+=1;goto B775feb;
case 0x775ff0:goto L775ff0;
case 0x775ff3:c.instructions+=1;goto B775ff3;
case 0x775ff4:goto L775ff4;
case 0x775ff6:c.instructions+=4;goto B775ff6;
case 0x775ffb:c.instructions+=3;goto B775ffb;
case 0x775ffe:c.instructions+=2;goto B775ffe;
case 0x775fff:c.instructions+=1;goto B775fff;
default:missing_instruction(c.pc);}
B775002:L775002:{c.instructions+=2;NFSU2_TR(0x775002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775003:{NFSU2_TR(0x775003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775008ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775008:L775008:{c.instructions+=2;NFSU2_TR(0x775008);
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
B77500b:{NFSU2_TR(0x77500b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77500c:L77500c:{c.instructions+=5;NFSU2_TR(0x77500c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77500e:{NFSU2_TR(0x77500e);
u8 U[4];
w4(U+0,u32(0x7965c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775013:{NFSU2_TR(0x775013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775016:{NFSU2_TR(0x775016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775017:{NFSU2_TR(0x775017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77501cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77501c:L77501c:{c.instructions+=2;NFSU2_TR(0x77501c);
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
B77501f:{NFSU2_TR(0x77501f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775020:L775020:{c.instructions+=5;NFSU2_TR(0x775020);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775022:{NFSU2_TR(0x775022);
u8 U[4];
w4(U+0,u32(0x7965b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775027:{NFSU2_TR(0x775027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77502a:{NFSU2_TR(0x77502a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77502b:{NFSU2_TR(0x77502b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775030ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775030:L775030:{c.instructions+=2;NFSU2_TR(0x775030);
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
B775033:{NFSU2_TR(0x775033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775034:L775034:{c.instructions+=5;NFSU2_TR(0x775034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775036:{NFSU2_TR(0x775036);
u8 U[4];
w4(U+0,u32(0x7965a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77503b:{NFSU2_TR(0x77503b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77503e:{NFSU2_TR(0x77503e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77503f:{NFSU2_TR(0x77503f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775044ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775044:L775044:{c.instructions+=2;NFSU2_TR(0x775044);
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
B775047:{NFSU2_TR(0x775047);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775048:L775048:{c.instructions+=2;NFSU2_TR(0x775048);
w4(R+0,u32(0x7e0a88ull));
}
B77504d:{NFSU2_TR(0x77504d);
TAIL_STATIC(0x75bfd2u,75b);
}
B775060:L775060:{c.instructions+=5;NFSU2_TR(0x775060);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775062:{NFSU2_TR(0x775062);
u8 U[4];
w4(U+0,u32(0x796fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775067:{NFSU2_TR(0x775067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77506a:{NFSU2_TR(0x77506a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77506b:{NFSU2_TR(0x77506b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775070ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775070:L775070:{c.instructions+=2;NFSU2_TR(0x775070);
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
B775073:{NFSU2_TR(0x775073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775074:L775074:{c.instructions+=5;NFSU2_TR(0x775074);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775076:{NFSU2_TR(0x775076);
u8 U[4];
w4(U+0,u32(0x796fb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77507b:{NFSU2_TR(0x77507b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77507e:{NFSU2_TR(0x77507e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77507f:{NFSU2_TR(0x77507f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775084ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775084:L775084:{c.instructions+=2;NFSU2_TR(0x775084);
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
B775087:{NFSU2_TR(0x775087);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775088:L775088:{c.instructions+=5;NFSU2_TR(0x775088);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77508a:{NFSU2_TR(0x77508a);
u8 U[4];
w4(U+0,u32(0x796f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77508f:{NFSU2_TR(0x77508f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775092:{NFSU2_TR(0x775092);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775093:{NFSU2_TR(0x775093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775098ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775098:L775098:{c.instructions+=2;NFSU2_TR(0x775098);
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
B77509b:{NFSU2_TR(0x77509b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77509c:L77509c:{c.instructions+=5;NFSU2_TR(0x77509c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77509e:{NFSU2_TR(0x77509e);
u8 U[4];
w4(U+0,u32(0x796f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750a3:{NFSU2_TR(0x7750a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7750a6:{NFSU2_TR(0x7750a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750a7:{NFSU2_TR(0x7750a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7750acull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7750ac:L7750ac:{c.instructions+=2;NFSU2_TR(0x7750ac);
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
B7750af:{NFSU2_TR(0x7750af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7750b0:L7750b0:{c.instructions+=5;NFSU2_TR(0x7750b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750b2:{NFSU2_TR(0x7750b2);
u8 U[4];
w4(U+0,u32(0x796f60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750b7:{NFSU2_TR(0x7750b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7750ba:{NFSU2_TR(0x7750ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750bb:{NFSU2_TR(0x7750bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7750c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7750c0:L7750c0:{c.instructions+=2;NFSU2_TR(0x7750c0);
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
B7750c3:{NFSU2_TR(0x7750c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7750c4:L7750c4:{c.instructions+=5;NFSU2_TR(0x7750c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750c6:{NFSU2_TR(0x7750c6);
u8 U[4];
w4(U+0,u32(0x796f44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750cb:{NFSU2_TR(0x7750cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7750ce:{NFSU2_TR(0x7750ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750cf:{NFSU2_TR(0x7750cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7750d4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7750d4:L7750d4:{c.instructions+=2;NFSU2_TR(0x7750d4);
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
B7750d7:{NFSU2_TR(0x7750d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7750d8:L7750d8:{c.instructions+=5;NFSU2_TR(0x7750d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750da:{NFSU2_TR(0x7750da);
u8 U[4];
w4(U+0,u32(0x796f28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750df:{NFSU2_TR(0x7750df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7750e2:{NFSU2_TR(0x7750e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750e3:{NFSU2_TR(0x7750e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7750e8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7750e8:L7750e8:{c.instructions+=2;NFSU2_TR(0x7750e8);
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
B7750eb:{NFSU2_TR(0x7750eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7750ec:L7750ec:{c.instructions+=5;NFSU2_TR(0x7750ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750ee:{NFSU2_TR(0x7750ee);
u8 U[4];
w4(U+0,u32(0x796f0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750f3:{NFSU2_TR(0x7750f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7750f6:{NFSU2_TR(0x7750f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7750f7:{NFSU2_TR(0x7750f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7750fcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7750fc:L7750fc:{c.instructions+=2;NFSU2_TR(0x7750fc);
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
B7750ff:{NFSU2_TR(0x7750ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775100:L775100:{c.instructions+=5;NFSU2_TR(0x775100);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775102:{NFSU2_TR(0x775102);
u8 U[4];
w4(U+0,u32(0x796ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775107:{NFSU2_TR(0x775107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77510a:{NFSU2_TR(0x77510a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77510b:{NFSU2_TR(0x77510b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775110ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775110:L775110:{c.instructions+=2;NFSU2_TR(0x775110);
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
B775113:{NFSU2_TR(0x775113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775114:L775114:{c.instructions+=5;NFSU2_TR(0x775114);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775116:{NFSU2_TR(0x775116);
u8 U[4];
w4(U+0,u32(0x796edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77511b:{NFSU2_TR(0x77511b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77511e:{NFSU2_TR(0x77511e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77511f:{NFSU2_TR(0x77511f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775124ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775124:L775124:{c.instructions+=2;NFSU2_TR(0x775124);
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
B775127:{NFSU2_TR(0x775127);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775128:L775128:{c.instructions+=5;NFSU2_TR(0x775128);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77512a:{NFSU2_TR(0x77512a);
u8 U[4];
w4(U+0,u32(0x796ec4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77512f:{NFSU2_TR(0x77512f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775132:{NFSU2_TR(0x775132);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775133:{NFSU2_TR(0x775133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775138ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775138:L775138:{c.instructions+=2;NFSU2_TR(0x775138);
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
B77513b:{NFSU2_TR(0x77513b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77513c:L77513c:{c.instructions+=5;NFSU2_TR(0x77513c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77513e:{NFSU2_TR(0x77513e);
u8 U[4];
w4(U+0,u32(0x796eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775143:{NFSU2_TR(0x775143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775146:{NFSU2_TR(0x775146);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775147:{NFSU2_TR(0x775147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77514cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77514c:L77514c:{c.instructions+=2;NFSU2_TR(0x77514c);
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
B77514f:{NFSU2_TR(0x77514f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775150:L775150:{c.instructions+=5;NFSU2_TR(0x775150);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775152:{NFSU2_TR(0x775152);
u8 U[4];
w4(U+0,u32(0x796e94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775157:{NFSU2_TR(0x775157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77515a:{NFSU2_TR(0x77515a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77515b:{NFSU2_TR(0x77515b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775160ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775160:L775160:{c.instructions+=2;NFSU2_TR(0x775160);
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
B775163:{NFSU2_TR(0x775163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775164:L775164:{c.instructions+=5;NFSU2_TR(0x775164);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775166:{NFSU2_TR(0x775166);
u8 U[4];
w4(U+0,u32(0x796e78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77516b:{NFSU2_TR(0x77516b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77516e:{NFSU2_TR(0x77516e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77516f:{NFSU2_TR(0x77516f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775174ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775174:L775174:{c.instructions+=2;NFSU2_TR(0x775174);
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
B775177:{NFSU2_TR(0x775177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775178:L775178:{c.instructions+=5;NFSU2_TR(0x775178);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77517a:{NFSU2_TR(0x77517a);
u8 U[4];
w4(U+0,u32(0x796e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77517f:{NFSU2_TR(0x77517f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775182:{NFSU2_TR(0x775182);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775183:{NFSU2_TR(0x775183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775188ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775188:L775188:{c.instructions+=2;NFSU2_TR(0x775188);
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
B77518b:{NFSU2_TR(0x77518b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77518c:L77518c:{c.instructions+=5;NFSU2_TR(0x77518c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77518e:{NFSU2_TR(0x77518e);
u8 U[4];
w4(U+0,u32(0x796e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775193:{NFSU2_TR(0x775193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775196:{NFSU2_TR(0x775196);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775197:{NFSU2_TR(0x775197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77519cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77519c:L77519c:{c.instructions+=2;NFSU2_TR(0x77519c);
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
B77519f:{NFSU2_TR(0x77519f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7751a0:L7751a0:{c.instructions+=5;NFSU2_TR(0x7751a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751a2:{NFSU2_TR(0x7751a2);
u8 U[4];
w4(U+0,u32(0x796e24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751a7:{NFSU2_TR(0x7751a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7751aa:{NFSU2_TR(0x7751aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751ab:{NFSU2_TR(0x7751ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7751b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7751b0:L7751b0:{c.instructions+=2;NFSU2_TR(0x7751b0);
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
B7751b3:{NFSU2_TR(0x7751b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7751b4:L7751b4:{c.instructions+=5;NFSU2_TR(0x7751b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751b6:{NFSU2_TR(0x7751b6);
u8 U[4];
w4(U+0,u32(0x796e08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751bb:{NFSU2_TR(0x7751bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7751be:{NFSU2_TR(0x7751be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751bf:{NFSU2_TR(0x7751bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7751c4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7751c4:L7751c4:{c.instructions+=2;NFSU2_TR(0x7751c4);
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
B7751c7:{NFSU2_TR(0x7751c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7751c8:L7751c8:{c.instructions+=5;NFSU2_TR(0x7751c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751ca:{NFSU2_TR(0x7751ca);
u8 U[4];
w4(U+0,u32(0x796decull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751cf:{NFSU2_TR(0x7751cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7751d2:{NFSU2_TR(0x7751d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751d3:{NFSU2_TR(0x7751d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7751d8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7751d8:L7751d8:{c.instructions+=2;NFSU2_TR(0x7751d8);
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
B7751db:{NFSU2_TR(0x7751db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7751dc:L7751dc:{c.instructions+=5;NFSU2_TR(0x7751dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751de:{NFSU2_TR(0x7751de);
u8 U[4];
w4(U+0,u32(0x796dd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751e3:{NFSU2_TR(0x7751e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7751e6:{NFSU2_TR(0x7751e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751e7:{NFSU2_TR(0x7751e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7751ecull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7751ec:L7751ec:{c.instructions+=2;NFSU2_TR(0x7751ec);
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
B7751ef:{NFSU2_TR(0x7751ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7751f0:L7751f0:{c.instructions+=5;NFSU2_TR(0x7751f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751f2:{NFSU2_TR(0x7751f2);
u8 U[4];
w4(U+0,u32(0x796dbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751f7:{NFSU2_TR(0x7751f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7751fa:{NFSU2_TR(0x7751fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7751fb:{NFSU2_TR(0x7751fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775200ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775200:L775200:{c.instructions+=2;NFSU2_TR(0x775200);
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
B775203:{NFSU2_TR(0x775203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775204:L775204:{c.instructions+=5;NFSU2_TR(0x775204);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775206:{NFSU2_TR(0x775206);
u8 U[4];
w4(U+0,u32(0x796da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77520b:{NFSU2_TR(0x77520b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77520e:{NFSU2_TR(0x77520e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77520f:{NFSU2_TR(0x77520f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775214ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775214:L775214:{c.instructions+=2;NFSU2_TR(0x775214);
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
B775217:{NFSU2_TR(0x775217);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775218:L775218:{c.instructions+=5;NFSU2_TR(0x775218);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77521a:{NFSU2_TR(0x77521a);
u8 U[4];
w4(U+0,u32(0x796d8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77521f:{NFSU2_TR(0x77521f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775222:{NFSU2_TR(0x775222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775223:{NFSU2_TR(0x775223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775228ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775228:L775228:{c.instructions+=2;NFSU2_TR(0x775228);
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
B77522b:{NFSU2_TR(0x77522b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77522c:L77522c:{c.instructions+=5;NFSU2_TR(0x77522c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77522e:{NFSU2_TR(0x77522e);
u8 U[4];
w4(U+0,u32(0x796d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775233:{NFSU2_TR(0x775233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775236:{NFSU2_TR(0x775236);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775237:{NFSU2_TR(0x775237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77523cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77523c:L77523c:{c.instructions+=2;NFSU2_TR(0x77523c);
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
B77523f:{NFSU2_TR(0x77523f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775240:L775240:{c.instructions+=5;NFSU2_TR(0x775240);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775242:{NFSU2_TR(0x775242);
u8 U[4];
w4(U+0,u32(0x796d5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775247:{NFSU2_TR(0x775247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77524a:{NFSU2_TR(0x77524a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77524b:{NFSU2_TR(0x77524b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775250ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775250:L775250:{c.instructions+=2;NFSU2_TR(0x775250);
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
B775253:{NFSU2_TR(0x775253);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775254:L775254:{c.instructions+=5;NFSU2_TR(0x775254);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775256:{NFSU2_TR(0x775256);
u8 U[4];
w4(U+0,u32(0x796d44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77525b:{NFSU2_TR(0x77525b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77525e:{NFSU2_TR(0x77525e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77525f:{NFSU2_TR(0x77525f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775264ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775264:L775264:{c.instructions+=2;NFSU2_TR(0x775264);
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
B775267:{NFSU2_TR(0x775267);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775268:L775268:{c.instructions+=5;NFSU2_TR(0x775268);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77526a:{NFSU2_TR(0x77526a);
u8 U[4];
w4(U+0,u32(0x796d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77526f:{NFSU2_TR(0x77526f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775272:{NFSU2_TR(0x775272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775273:{NFSU2_TR(0x775273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775278ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775278:L775278:{c.instructions+=2;NFSU2_TR(0x775278);
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
B77527b:{NFSU2_TR(0x77527b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77527c:L77527c:{c.instructions+=5;NFSU2_TR(0x77527c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77527e:{NFSU2_TR(0x77527e);
u8 U[4];
w4(U+0,u32(0x796d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775283:{NFSU2_TR(0x775283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775286:{NFSU2_TR(0x775286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775287:{NFSU2_TR(0x775287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77528cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77528c:L77528c:{c.instructions+=2;NFSU2_TR(0x77528c);
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
B77528f:{NFSU2_TR(0x77528f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775290:L775290:{c.instructions+=5;NFSU2_TR(0x775290);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775292:{NFSU2_TR(0x775292);
u8 U[4];
w4(U+0,u32(0x796cf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775297:{NFSU2_TR(0x775297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77529a:{NFSU2_TR(0x77529a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77529b:{NFSU2_TR(0x77529b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7752a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7752a0:L7752a0:{c.instructions+=2;NFSU2_TR(0x7752a0);
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
B7752a3:{NFSU2_TR(0x7752a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7752a4:L7752a4:{c.instructions+=5;NFSU2_TR(0x7752a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752a6:{NFSU2_TR(0x7752a6);
u8 U[4];
w4(U+0,u32(0x796cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752ab:{NFSU2_TR(0x7752ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7752ae:{NFSU2_TR(0x7752ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752af:{NFSU2_TR(0x7752af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7752b4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7752b4:L7752b4:{c.instructions+=2;NFSU2_TR(0x7752b4);
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
B7752b7:{NFSU2_TR(0x7752b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7752b8:L7752b8:{c.instructions+=5;NFSU2_TR(0x7752b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752ba:{NFSU2_TR(0x7752ba);
u8 U[4];
w4(U+0,u32(0x796cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752bf:{NFSU2_TR(0x7752bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7752c2:{NFSU2_TR(0x7752c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752c3:{NFSU2_TR(0x7752c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7752c8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7752c8:L7752c8:{c.instructions+=2;NFSU2_TR(0x7752c8);
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
B7752cb:{NFSU2_TR(0x7752cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7752cc:L7752cc:{c.instructions+=5;NFSU2_TR(0x7752cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752ce:{NFSU2_TR(0x7752ce);
u8 U[4];
w4(U+0,u32(0x796ca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752d3:{NFSU2_TR(0x7752d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7752d6:{NFSU2_TR(0x7752d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752d7:{NFSU2_TR(0x7752d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7752dcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7752dc:L7752dc:{c.instructions+=2;NFSU2_TR(0x7752dc);
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
B7752df:{NFSU2_TR(0x7752df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7752e0:L7752e0:{c.instructions+=5;NFSU2_TR(0x7752e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752e2:{NFSU2_TR(0x7752e2);
u8 U[4];
w4(U+0,u32(0x796c90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752e7:{NFSU2_TR(0x7752e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7752ea:{NFSU2_TR(0x7752ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752eb:{NFSU2_TR(0x7752eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7752f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7752f0:L7752f0:{c.instructions+=2;NFSU2_TR(0x7752f0);
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
B7752f3:{NFSU2_TR(0x7752f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7752f4:L7752f4:{c.instructions+=5;NFSU2_TR(0x7752f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752f6:{NFSU2_TR(0x7752f6);
u8 U[4];
w4(U+0,u32(0x796c74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752fb:{NFSU2_TR(0x7752fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7752fe:{NFSU2_TR(0x7752fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7752ff:{NFSU2_TR(0x7752ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775304ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775304:L775304:{c.instructions+=2;NFSU2_TR(0x775304);
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
B775307:{NFSU2_TR(0x775307);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775308:L775308:{c.instructions+=5;NFSU2_TR(0x775308);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77530a:{NFSU2_TR(0x77530a);
u8 U[4];
w4(U+0,u32(0x796c58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77530f:{NFSU2_TR(0x77530f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775312:{NFSU2_TR(0x775312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775313:{NFSU2_TR(0x775313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775318ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775318:L775318:{c.instructions+=2;NFSU2_TR(0x775318);
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
B77531b:{NFSU2_TR(0x77531b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77531c:L77531c:{c.instructions+=5;NFSU2_TR(0x77531c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77531e:{NFSU2_TR(0x77531e);
u8 U[4];
w4(U+0,u32(0x796c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775323:{NFSU2_TR(0x775323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775326:{NFSU2_TR(0x775326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775327:{NFSU2_TR(0x775327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77532cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77532c:L77532c:{c.instructions+=2;NFSU2_TR(0x77532c);
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
B77532f:{NFSU2_TR(0x77532f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775330:L775330:{c.instructions+=5;NFSU2_TR(0x775330);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775332:{NFSU2_TR(0x775332);
u8 U[4];
w4(U+0,u32(0x796c24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775337:{NFSU2_TR(0x775337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77533a:{NFSU2_TR(0x77533a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77533b:{NFSU2_TR(0x77533b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775340ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775340:L775340:{c.instructions+=2;NFSU2_TR(0x775340);
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
B775343:{NFSU2_TR(0x775343);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775344:L775344:{c.instructions+=5;NFSU2_TR(0x775344);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775346:{NFSU2_TR(0x775346);
u8 U[4];
w4(U+0,u32(0x796c08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77534b:{NFSU2_TR(0x77534b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77534e:{NFSU2_TR(0x77534e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77534f:{NFSU2_TR(0x77534f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775354ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775354:L775354:{c.instructions+=2;NFSU2_TR(0x775354);
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
B775357:{NFSU2_TR(0x775357);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775358:L775358:{c.instructions+=5;NFSU2_TR(0x775358);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77535a:{NFSU2_TR(0x77535a);
u8 U[4];
w4(U+0,u32(0x796bf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77535f:{NFSU2_TR(0x77535f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775362:{NFSU2_TR(0x775362);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775363:{NFSU2_TR(0x775363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775368ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775368:L775368:{c.instructions+=2;NFSU2_TR(0x775368);
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
B77536b:{NFSU2_TR(0x77536b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77536c:L77536c:{c.instructions+=5;NFSU2_TR(0x77536c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77536e:{NFSU2_TR(0x77536e);
u8 U[4];
w4(U+0,u32(0x796bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775373:{NFSU2_TR(0x775373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775376:{NFSU2_TR(0x775376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775377:{NFSU2_TR(0x775377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77537cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77537c:L77537c:{c.instructions+=2;NFSU2_TR(0x77537c);
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
B77537f:{NFSU2_TR(0x77537f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775380:L775380:{c.instructions+=5;NFSU2_TR(0x775380);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775382:{NFSU2_TR(0x775382);
u8 U[4];
w4(U+0,u32(0x796bb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775387:{NFSU2_TR(0x775387);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77538a:{NFSU2_TR(0x77538a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77538b:{NFSU2_TR(0x77538b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775390ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775390:L775390:{c.instructions+=2;NFSU2_TR(0x775390);
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
B775393:{NFSU2_TR(0x775393);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775394:L775394:{c.instructions+=5;NFSU2_TR(0x775394);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775396:{NFSU2_TR(0x775396);
u8 U[4];
w4(U+0,u32(0x796b94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77539b:{NFSU2_TR(0x77539b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77539e:{NFSU2_TR(0x77539e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77539f:{NFSU2_TR(0x77539f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7753a4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7753a4:L7753a4:{c.instructions+=2;NFSU2_TR(0x7753a4);
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
B7753a7:{NFSU2_TR(0x7753a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7753a8:L7753a8:{c.instructions+=5;NFSU2_TR(0x7753a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753aa:{NFSU2_TR(0x7753aa);
u8 U[4];
w4(U+0,u32(0x796b78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753af:{NFSU2_TR(0x7753af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7753b2:{NFSU2_TR(0x7753b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753b3:{NFSU2_TR(0x7753b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7753b8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7753b8:L7753b8:{c.instructions+=2;NFSU2_TR(0x7753b8);
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
B7753bb:{NFSU2_TR(0x7753bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7753bc:L7753bc:{c.instructions+=5;NFSU2_TR(0x7753bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753be:{NFSU2_TR(0x7753be);
u8 U[4];
w4(U+0,u32(0x796b60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753c3:{NFSU2_TR(0x7753c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7753c6:{NFSU2_TR(0x7753c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753c7:{NFSU2_TR(0x7753c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7753ccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7753cc:L7753cc:{c.instructions+=2;NFSU2_TR(0x7753cc);
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
B7753cf:{NFSU2_TR(0x7753cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7753d0:L7753d0:{c.instructions+=5;NFSU2_TR(0x7753d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753d2:{NFSU2_TR(0x7753d2);
u8 U[4];
w4(U+0,u32(0x796698ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753d7:{NFSU2_TR(0x7753d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7753da:{NFSU2_TR(0x7753da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753db:{NFSU2_TR(0x7753db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7753e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7753e0:L7753e0:{c.instructions+=2;NFSU2_TR(0x7753e0);
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
B7753e3:{NFSU2_TR(0x7753e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7753e4:L7753e4:{c.instructions+=5;NFSU2_TR(0x7753e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753e6:{NFSU2_TR(0x7753e6);
u8 U[4];
w4(U+0,u32(0x796b38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753eb:{NFSU2_TR(0x7753eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7753ee:{NFSU2_TR(0x7753ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753ef:{NFSU2_TR(0x7753ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7753f4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7753f4:L7753f4:{c.instructions+=2;NFSU2_TR(0x7753f4);
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
B7753f7:{NFSU2_TR(0x7753f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7753f8:L7753f8:{c.instructions+=5;NFSU2_TR(0x7753f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753fa:{NFSU2_TR(0x7753fa);
u8 U[4];
w4(U+0,u32(0x796b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7753ff:{NFSU2_TR(0x7753ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775402:{NFSU2_TR(0x775402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775403:{NFSU2_TR(0x775403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775408ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775408:L775408:{c.instructions+=2;NFSU2_TR(0x775408);
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
B77540b:{NFSU2_TR(0x77540b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77540c:L77540c:{c.instructions+=5;NFSU2_TR(0x77540c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77540e:{NFSU2_TR(0x77540e);
u8 U[4];
w4(U+0,u32(0x796aecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775413:{NFSU2_TR(0x775413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775416:{NFSU2_TR(0x775416);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775417:{NFSU2_TR(0x775417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77541cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77541c:L77541c:{c.instructions+=2;NFSU2_TR(0x77541c);
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
B77541f:{NFSU2_TR(0x77541f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775420:L775420:{c.instructions+=5;NFSU2_TR(0x775420);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775422:{NFSU2_TR(0x775422);
u8 U[4];
w4(U+0,u32(0x796ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775427:{NFSU2_TR(0x775427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77542a:{NFSU2_TR(0x77542a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77542b:{NFSU2_TR(0x77542b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775430ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775430:L775430:{c.instructions+=2;NFSU2_TR(0x775430);
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
B775433:{NFSU2_TR(0x775433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775434:L775434:{c.instructions+=5;NFSU2_TR(0x775434);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775436:{NFSU2_TR(0x775436);
u8 U[4];
w4(U+0,u32(0x796aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77543b:{NFSU2_TR(0x77543b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77543e:{NFSU2_TR(0x77543e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77543f:{NFSU2_TR(0x77543f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775444ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775444:L775444:{c.instructions+=2;NFSU2_TR(0x775444);
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
B775447:{NFSU2_TR(0x775447);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775448:L775448:{c.instructions+=5;NFSU2_TR(0x775448);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77544a:{NFSU2_TR(0x77544a);
u8 U[4];
w4(U+0,u32(0x796a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77544f:{NFSU2_TR(0x77544f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775452:{NFSU2_TR(0x775452);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775453:{NFSU2_TR(0x775453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775458ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775458:L775458:{c.instructions+=2;NFSU2_TR(0x775458);
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
B77545b:{NFSU2_TR(0x77545b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77545c:L77545c:{c.instructions+=5;NFSU2_TR(0x77545c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77545e:{NFSU2_TR(0x77545e);
u8 U[4];
w4(U+0,u32(0x796a68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775463:{NFSU2_TR(0x775463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775466:{NFSU2_TR(0x775466);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775467:{NFSU2_TR(0x775467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77546cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77546c:L77546c:{c.instructions+=2;NFSU2_TR(0x77546c);
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
B77546f:{NFSU2_TR(0x77546f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775470:L775470:{c.instructions+=5;NFSU2_TR(0x775470);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775472:{NFSU2_TR(0x775472);
u8 U[4];
w4(U+0,u32(0x796a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775477:{NFSU2_TR(0x775477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77547a:{NFSU2_TR(0x77547a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77547b:{NFSU2_TR(0x77547b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775480ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775480:L775480:{c.instructions+=2;NFSU2_TR(0x775480);
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
B775483:{NFSU2_TR(0x775483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775484:L775484:{c.instructions+=5;NFSU2_TR(0x775484);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775486:{NFSU2_TR(0x775486);
u8 U[4];
w4(U+0,u32(0x796a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77548b:{NFSU2_TR(0x77548b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77548e:{NFSU2_TR(0x77548e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77548f:{NFSU2_TR(0x77548f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775494ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775494:L775494:{c.instructions+=2;NFSU2_TR(0x775494);
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
B775497:{NFSU2_TR(0x775497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775498:L775498:{c.instructions+=2;NFSU2_TR(0x775498);
w4(R+0,u32(0x7e0c54ull));
}
B77549d:{NFSU2_TR(0x77549d);
TAIL_STATIC(0x75bfd2u,75b);
}
B7754b0:L7754b0:{c.instructions+=5;NFSU2_TR(0x7754b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754b2:{NFSU2_TR(0x7754b2);
u8 U[4];
w4(U+0,u32(0x7974b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754b7:{NFSU2_TR(0x7754b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7754ba:{NFSU2_TR(0x7754ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754bb:{NFSU2_TR(0x7754bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7754c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7754c0:L7754c0:{c.instructions+=2;NFSU2_TR(0x7754c0);
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
B7754c3:{NFSU2_TR(0x7754c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7754c4:L7754c4:{c.instructions+=5;NFSU2_TR(0x7754c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754c6:{NFSU2_TR(0x7754c6);
u8 U[4];
w4(U+0,u32(0x79749cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754cb:{NFSU2_TR(0x7754cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7754ce:{NFSU2_TR(0x7754ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754cf:{NFSU2_TR(0x7754cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7754d4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7754d4:L7754d4:{c.instructions+=2;NFSU2_TR(0x7754d4);
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
B7754d7:{NFSU2_TR(0x7754d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7754d8:L7754d8:{c.instructions+=5;NFSU2_TR(0x7754d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754da:{NFSU2_TR(0x7754da);
u8 U[4];
w4(U+0,u32(0x797484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754df:{NFSU2_TR(0x7754df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7754e2:{NFSU2_TR(0x7754e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754e3:{NFSU2_TR(0x7754e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7754e8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7754e8:L7754e8:{c.instructions+=2;NFSU2_TR(0x7754e8);
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
B7754eb:{NFSU2_TR(0x7754eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7754ec:L7754ec:{c.instructions+=5;NFSU2_TR(0x7754ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754ee:{NFSU2_TR(0x7754ee);
u8 U[4];
w4(U+0,u32(0x79746cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754f3:{NFSU2_TR(0x7754f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7754f6:{NFSU2_TR(0x7754f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7754f7:{NFSU2_TR(0x7754f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7754fcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7754fc:L7754fc:{c.instructions+=2;NFSU2_TR(0x7754fc);
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
B7754ff:{NFSU2_TR(0x7754ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775500:L775500:{c.instructions+=5;NFSU2_TR(0x775500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775502:{NFSU2_TR(0x775502);
u8 U[4];
w4(U+0,u32(0x797454ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775507:{NFSU2_TR(0x775507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77550a:{NFSU2_TR(0x77550a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77550b:{NFSU2_TR(0x77550b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775510ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775510:L775510:{c.instructions+=2;NFSU2_TR(0x775510);
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
B775513:{NFSU2_TR(0x775513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775514:L775514:{c.instructions+=5;NFSU2_TR(0x775514);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775516:{NFSU2_TR(0x775516);
u8 U[4];
w4(U+0,u32(0x797440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77551b:{NFSU2_TR(0x77551b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77551e:{NFSU2_TR(0x77551e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77551f:{NFSU2_TR(0x77551f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775524ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775524:L775524:{c.instructions+=2;NFSU2_TR(0x775524);
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
B775527:{NFSU2_TR(0x775527);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775528:L775528:{c.instructions+=5;NFSU2_TR(0x775528);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77552a:{NFSU2_TR(0x77552a);
u8 U[4];
w4(U+0,u32(0x797424ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77552f:{NFSU2_TR(0x77552f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775532:{NFSU2_TR(0x775532);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775533:{NFSU2_TR(0x775533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775538ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775538:L775538:{c.instructions+=2;NFSU2_TR(0x775538);
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
B77553b:{NFSU2_TR(0x77553b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77553c:L77553c:{c.instructions+=5;NFSU2_TR(0x77553c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77553e:{NFSU2_TR(0x77553e);
u8 U[4];
w4(U+0,u32(0x79740cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775543:{NFSU2_TR(0x775543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775546:{NFSU2_TR(0x775546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775547:{NFSU2_TR(0x775547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77554cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77554c:L77554c:{c.instructions+=2;NFSU2_TR(0x77554c);
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
B77554f:{NFSU2_TR(0x77554f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775550:L775550:{c.instructions+=5;NFSU2_TR(0x775550);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775552:{NFSU2_TR(0x775552);
u8 U[4];
w4(U+0,u32(0x7973f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775557:{NFSU2_TR(0x775557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77555a:{NFSU2_TR(0x77555a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77555b:{NFSU2_TR(0x77555b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775560ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775560:L775560:{c.instructions+=2;NFSU2_TR(0x775560);
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
B775563:{NFSU2_TR(0x775563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775564:L775564:{c.instructions+=5;NFSU2_TR(0x775564);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775566:{NFSU2_TR(0x775566);
u8 U[4];
w4(U+0,u32(0x7973d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77556b:{NFSU2_TR(0x77556b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77556e:{NFSU2_TR(0x77556e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77556f:{NFSU2_TR(0x77556f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775574ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775574:L775574:{c.instructions+=2;NFSU2_TR(0x775574);
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
B775577:{NFSU2_TR(0x775577);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775578:L775578:{c.instructions+=5;NFSU2_TR(0x775578);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77557a:{NFSU2_TR(0x77557a);
u8 U[4];
w4(U+0,u32(0x7973bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77557f:{NFSU2_TR(0x77557f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775582:{NFSU2_TR(0x775582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775583:{NFSU2_TR(0x775583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775588ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775588:L775588:{c.instructions+=2;NFSU2_TR(0x775588);
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
B77558b:{NFSU2_TR(0x77558b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77558c:L77558c:{c.instructions+=5;NFSU2_TR(0x77558c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77558e:{NFSU2_TR(0x77558e);
u8 U[4];
w4(U+0,u32(0x7973a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775593:{NFSU2_TR(0x775593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775596:{NFSU2_TR(0x775596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775597:{NFSU2_TR(0x775597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77559cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77559c:L77559c:{c.instructions+=2;NFSU2_TR(0x77559c);
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
B77559f:{NFSU2_TR(0x77559f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7755a0:L7755a0:{c.instructions+=5;NFSU2_TR(0x7755a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755a2:{NFSU2_TR(0x7755a2);
u8 U[4];
w4(U+0,u32(0x797388ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755a7:{NFSU2_TR(0x7755a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7755aa:{NFSU2_TR(0x7755aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755ab:{NFSU2_TR(0x7755ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7755b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7755b0:L7755b0:{c.instructions+=2;NFSU2_TR(0x7755b0);
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
B7755b3:{NFSU2_TR(0x7755b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7755b4:L7755b4:{c.instructions+=5;NFSU2_TR(0x7755b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755b6:{NFSU2_TR(0x7755b6);
u8 U[4];
w4(U+0,u32(0x797370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755bb:{NFSU2_TR(0x7755bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7755be:{NFSU2_TR(0x7755be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755bf:{NFSU2_TR(0x7755bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7755c4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7755c4:L7755c4:{c.instructions+=2;NFSU2_TR(0x7755c4);
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
B7755c7:{NFSU2_TR(0x7755c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7755c8:L7755c8:{c.instructions+=5;NFSU2_TR(0x7755c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755ca:{NFSU2_TR(0x7755ca);
u8 U[4];
w4(U+0,u32(0x797358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755cf:{NFSU2_TR(0x7755cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7755d2:{NFSU2_TR(0x7755d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755d3:{NFSU2_TR(0x7755d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7755d8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7755d8:L7755d8:{c.instructions+=2;NFSU2_TR(0x7755d8);
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
B7755db:{NFSU2_TR(0x7755db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7755dc:L7755dc:{c.instructions+=5;NFSU2_TR(0x7755dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755de:{NFSU2_TR(0x7755de);
u8 U[4];
w4(U+0,u32(0x797340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755e3:{NFSU2_TR(0x7755e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7755e6:{NFSU2_TR(0x7755e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755e7:{NFSU2_TR(0x7755e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7755ecull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7755ec:L7755ec:{c.instructions+=2;NFSU2_TR(0x7755ec);
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
B7755ef:{NFSU2_TR(0x7755ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7755f0:L7755f0:{c.instructions+=5;NFSU2_TR(0x7755f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755f2:{NFSU2_TR(0x7755f2);
u8 U[4];
w4(U+0,u32(0x79732cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755f7:{NFSU2_TR(0x7755f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7755fa:{NFSU2_TR(0x7755fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7755fb:{NFSU2_TR(0x7755fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775600ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775600:L775600:{c.instructions+=2;NFSU2_TR(0x775600);
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
B775603:{NFSU2_TR(0x775603);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775604:L775604:{c.instructions+=5;NFSU2_TR(0x775604);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775606:{NFSU2_TR(0x775606);
u8 U[4];
w4(U+0,u32(0x797318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77560b:{NFSU2_TR(0x77560b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77560e:{NFSU2_TR(0x77560e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77560f:{NFSU2_TR(0x77560f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775614ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775614:L775614:{c.instructions+=2;NFSU2_TR(0x775614);
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
B775617:{NFSU2_TR(0x775617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775618:L775618:{c.instructions+=5;NFSU2_TR(0x775618);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77561a:{NFSU2_TR(0x77561a);
u8 U[4];
w4(U+0,u32(0x7972fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77561f:{NFSU2_TR(0x77561f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775622:{NFSU2_TR(0x775622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775623:{NFSU2_TR(0x775623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775628ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775628:L775628:{c.instructions+=2;NFSU2_TR(0x775628);
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
B77562b:{NFSU2_TR(0x77562b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77562c:L77562c:{c.instructions+=5;NFSU2_TR(0x77562c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77562e:{NFSU2_TR(0x77562e);
u8 U[4];
w4(U+0,u32(0x7972e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775633:{NFSU2_TR(0x775633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775636:{NFSU2_TR(0x775636);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775637:{NFSU2_TR(0x775637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77563cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77563c:L77563c:{c.instructions+=2;NFSU2_TR(0x77563c);
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
B77563f:{NFSU2_TR(0x77563f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775640:L775640:{c.instructions+=5;NFSU2_TR(0x775640);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775642:{NFSU2_TR(0x775642);
u8 U[4];
w4(U+0,u32(0x7972ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775647:{NFSU2_TR(0x775647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77564a:{NFSU2_TR(0x77564a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77564b:{NFSU2_TR(0x77564b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775650ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775650:L775650:{c.instructions+=2;NFSU2_TR(0x775650);
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
B775653:{NFSU2_TR(0x775653);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775654:L775654:{c.instructions+=5;NFSU2_TR(0x775654);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775656:{NFSU2_TR(0x775656);
u8 U[4];
w4(U+0,u32(0x7972b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77565b:{NFSU2_TR(0x77565b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77565e:{NFSU2_TR(0x77565e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77565f:{NFSU2_TR(0x77565f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775664ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775664:L775664:{c.instructions+=2;NFSU2_TR(0x775664);
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
B775667:{NFSU2_TR(0x775667);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775668:L775668:{c.instructions+=5;NFSU2_TR(0x775668);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77566a:{NFSU2_TR(0x77566a);
u8 U[4];
w4(U+0,u32(0x797294ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77566f:{NFSU2_TR(0x77566f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775672:{NFSU2_TR(0x775672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775673:{NFSU2_TR(0x775673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775678ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775678:L775678:{c.instructions+=2;NFSU2_TR(0x775678);
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
B77567b:{NFSU2_TR(0x77567b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77567c:L77567c:{c.instructions+=5;NFSU2_TR(0x77567c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77567e:{NFSU2_TR(0x77567e);
u8 U[4];
w4(U+0,u32(0x79727cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775683:{NFSU2_TR(0x775683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775686:{NFSU2_TR(0x775686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775687:{NFSU2_TR(0x775687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77568cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77568c:L77568c:{c.instructions+=2;NFSU2_TR(0x77568c);
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
B77568f:{NFSU2_TR(0x77568f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775690:L775690:{c.instructions+=5;NFSU2_TR(0x775690);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775692:{NFSU2_TR(0x775692);
u8 U[4];
w4(U+0,u32(0x797260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775697:{NFSU2_TR(0x775697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77569a:{NFSU2_TR(0x77569a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77569b:{NFSU2_TR(0x77569b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7756a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7756a0:L7756a0:{c.instructions+=2;NFSU2_TR(0x7756a0);
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
B7756a3:{NFSU2_TR(0x7756a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7756a4:L7756a4:{c.instructions+=5;NFSU2_TR(0x7756a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756a6:{NFSU2_TR(0x7756a6);
u8 U[4];
w4(U+0,u32(0x797248ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756ab:{NFSU2_TR(0x7756ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7756ae:{NFSU2_TR(0x7756ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756af:{NFSU2_TR(0x7756af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7756b4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7756b4:L7756b4:{c.instructions+=2;NFSU2_TR(0x7756b4);
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
B7756b7:{NFSU2_TR(0x7756b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7756b8:L7756b8:{c.instructions+=5;NFSU2_TR(0x7756b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756ba:{NFSU2_TR(0x7756ba);
u8 U[4];
w4(U+0,u32(0x797230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756bf:{NFSU2_TR(0x7756bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7756c2:{NFSU2_TR(0x7756c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756c3:{NFSU2_TR(0x7756c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7756c8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7756c8:L7756c8:{c.instructions+=2;NFSU2_TR(0x7756c8);
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
B7756cb:{NFSU2_TR(0x7756cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7756cc:L7756cc:{c.instructions+=5;NFSU2_TR(0x7756cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756ce:{NFSU2_TR(0x7756ce);
u8 U[4];
w4(U+0,u32(0x797214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756d3:{NFSU2_TR(0x7756d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7756d6:{NFSU2_TR(0x7756d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756d7:{NFSU2_TR(0x7756d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7756dcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7756dc:L7756dc:{c.instructions+=2;NFSU2_TR(0x7756dc);
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
B7756df:{NFSU2_TR(0x7756df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7756e0:L7756e0:{c.instructions+=5;NFSU2_TR(0x7756e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756e2:{NFSU2_TR(0x7756e2);
u8 U[4];
w4(U+0,u32(0x7971f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756e7:{NFSU2_TR(0x7756e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7756ea:{NFSU2_TR(0x7756ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756eb:{NFSU2_TR(0x7756eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7756f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7756f0:L7756f0:{c.instructions+=2;NFSU2_TR(0x7756f0);
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
B7756f3:{NFSU2_TR(0x7756f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7756f4:L7756f4:{c.instructions+=5;NFSU2_TR(0x7756f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756f6:{NFSU2_TR(0x7756f6);
u8 U[4];
w4(U+0,u32(0x7971e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756fb:{NFSU2_TR(0x7756fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7756fe:{NFSU2_TR(0x7756fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7756ff:{NFSU2_TR(0x7756ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775704ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775704:L775704:{c.instructions+=2;NFSU2_TR(0x775704);
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
B775707:{NFSU2_TR(0x775707);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775708:L775708:{c.instructions+=5;NFSU2_TR(0x775708);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77570a:{NFSU2_TR(0x77570a);
u8 U[4];
w4(U+0,u32(0x7971c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77570f:{NFSU2_TR(0x77570f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775712:{NFSU2_TR(0x775712);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775713:{NFSU2_TR(0x775713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775718ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775718:L775718:{c.instructions+=2;NFSU2_TR(0x775718);
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
B77571b:{NFSU2_TR(0x77571b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77571c:L77571c:{c.instructions+=5;NFSU2_TR(0x77571c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77571e:{NFSU2_TR(0x77571e);
u8 U[4];
w4(U+0,u32(0x7971acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775723:{NFSU2_TR(0x775723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775726:{NFSU2_TR(0x775726);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775727:{NFSU2_TR(0x775727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77572cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77572c:L77572c:{c.instructions+=2;NFSU2_TR(0x77572c);
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
B77572f:{NFSU2_TR(0x77572f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775730:L775730:{c.instructions+=5;NFSU2_TR(0x775730);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775732:{NFSU2_TR(0x775732);
u8 U[4];
w4(U+0,u32(0x797194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775737:{NFSU2_TR(0x775737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77573a:{NFSU2_TR(0x77573a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77573b:{NFSU2_TR(0x77573b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775740ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775740:L775740:{c.instructions+=2;NFSU2_TR(0x775740);
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
B775743:{NFSU2_TR(0x775743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775744:L775744:{c.instructions+=5;NFSU2_TR(0x775744);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775746:{NFSU2_TR(0x775746);
u8 U[4];
w4(U+0,u32(0x797174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77574b:{NFSU2_TR(0x77574b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77574e:{NFSU2_TR(0x77574e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77574f:{NFSU2_TR(0x77574f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775754ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775754:L775754:{c.instructions+=2;NFSU2_TR(0x775754);
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
B775757:{NFSU2_TR(0x775757);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775758:L775758:{c.instructions+=5;NFSU2_TR(0x775758);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77575a:{NFSU2_TR(0x77575a);
u8 U[4];
w4(U+0,u32(0x797158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77575f:{NFSU2_TR(0x77575f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775762:{NFSU2_TR(0x775762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775763:{NFSU2_TR(0x775763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775768ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775768:L775768:{c.instructions+=2;NFSU2_TR(0x775768);
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
B77576b:{NFSU2_TR(0x77576b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77576c:L77576c:{c.instructions+=5;NFSU2_TR(0x77576c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77576e:{NFSU2_TR(0x77576e);
u8 U[4];
w4(U+0,u32(0x79713cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775773:{NFSU2_TR(0x775773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775776:{NFSU2_TR(0x775776);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775777:{NFSU2_TR(0x775777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77577cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77577c:L77577c:{c.instructions+=2;NFSU2_TR(0x77577c);
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
B77577f:{NFSU2_TR(0x77577f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775780:L775780:{c.instructions+=5;NFSU2_TR(0x775780);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775782:{NFSU2_TR(0x775782);
u8 U[4];
w4(U+0,u32(0x797124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775787:{NFSU2_TR(0x775787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77578a:{NFSU2_TR(0x77578a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77578b:{NFSU2_TR(0x77578b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775790ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775790:L775790:{c.instructions+=2;NFSU2_TR(0x775790);
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
B775793:{NFSU2_TR(0x775793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775794:L775794:{c.instructions+=5;NFSU2_TR(0x775794);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775796:{NFSU2_TR(0x775796);
u8 U[4];
w4(U+0,u32(0x79710cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77579b:{NFSU2_TR(0x77579b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77579e:{NFSU2_TR(0x77579e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77579f:{NFSU2_TR(0x77579f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7757a4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7757a4:L7757a4:{c.instructions+=2;NFSU2_TR(0x7757a4);
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
B7757a7:{NFSU2_TR(0x7757a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7757a8:L7757a8:{c.instructions+=5;NFSU2_TR(0x7757a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757aa:{NFSU2_TR(0x7757aa);
u8 U[4];
w4(U+0,u32(0x796698ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757af:{NFSU2_TR(0x7757af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7757b2:{NFSU2_TR(0x7757b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757b3:{NFSU2_TR(0x7757b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7757b8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7757b8:L7757b8:{c.instructions+=2;NFSU2_TR(0x7757b8);
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
B7757bb:{NFSU2_TR(0x7757bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7757bc:L7757bc:{c.instructions+=5;NFSU2_TR(0x7757bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757be:{NFSU2_TR(0x7757be);
u8 U[4];
w4(U+0,u32(0x7970e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757c3:{NFSU2_TR(0x7757c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7757c6:{NFSU2_TR(0x7757c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757c7:{NFSU2_TR(0x7757c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7757ccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7757cc:L7757cc:{c.instructions+=2;NFSU2_TR(0x7757cc);
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
B7757cf:{NFSU2_TR(0x7757cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7757d0:L7757d0:{c.instructions+=5;NFSU2_TR(0x7757d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757d2:{NFSU2_TR(0x7757d2);
u8 U[4];
w4(U+0,u32(0x7970c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757d7:{NFSU2_TR(0x7757d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7757da:{NFSU2_TR(0x7757da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757db:{NFSU2_TR(0x7757db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7757e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7757e0:L7757e0:{c.instructions+=2;NFSU2_TR(0x7757e0);
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
B7757e3:{NFSU2_TR(0x7757e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7757e4:L7757e4:{c.instructions+=5;NFSU2_TR(0x7757e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757e6:{NFSU2_TR(0x7757e6);
u8 U[4];
w4(U+0,u32(0x79709cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757eb:{NFSU2_TR(0x7757eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7757ee:{NFSU2_TR(0x7757ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757ef:{NFSU2_TR(0x7757ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7757f4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7757f4:L7757f4:{c.instructions+=2;NFSU2_TR(0x7757f4);
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
B7757f7:{NFSU2_TR(0x7757f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7757f8:L7757f8:{c.instructions+=5;NFSU2_TR(0x7757f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757fa:{NFSU2_TR(0x7757fa);
u8 U[4];
w4(U+0,u32(0x797078ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7757ff:{NFSU2_TR(0x7757ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775802:{NFSU2_TR(0x775802);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775803:{NFSU2_TR(0x775803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775808ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775808:L775808:{c.instructions+=2;NFSU2_TR(0x775808);
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
B77580b:{NFSU2_TR(0x77580b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77580c:L77580c:{c.instructions+=5;NFSU2_TR(0x77580c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77580e:{NFSU2_TR(0x77580e);
u8 U[4];
w4(U+0,u32(0x797058ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775813:{NFSU2_TR(0x775813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775816:{NFSU2_TR(0x775816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775817:{NFSU2_TR(0x775817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77581cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77581c:L77581c:{c.instructions+=2;NFSU2_TR(0x77581c);
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
B77581f:{NFSU2_TR(0x77581f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775820:L775820:{c.instructions+=5;NFSU2_TR(0x775820);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775822:{NFSU2_TR(0x775822);
u8 U[4];
w4(U+0,u32(0x797038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775827:{NFSU2_TR(0x775827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77582a:{NFSU2_TR(0x77582a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77582b:{NFSU2_TR(0x77582b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775830ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775830:L775830:{c.instructions+=2;NFSU2_TR(0x775830);
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
B775833:{NFSU2_TR(0x775833);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775834:L775834:{c.instructions+=5;NFSU2_TR(0x775834);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775836:{NFSU2_TR(0x775836);
u8 U[4];
w4(U+0,u32(0x797020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77583b:{NFSU2_TR(0x77583b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77583e:{NFSU2_TR(0x77583e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77583f:{NFSU2_TR(0x77583f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775844ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775844:L775844:{c.instructions+=2;NFSU2_TR(0x775844);
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
B775847:{NFSU2_TR(0x775847);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775848:L775848:{c.instructions+=5;NFSU2_TR(0x775848);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77584a:{NFSU2_TR(0x77584a);
u8 U[4];
w4(U+0,u32(0x797008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77584f:{NFSU2_TR(0x77584f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775852:{NFSU2_TR(0x775852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775853:{NFSU2_TR(0x775853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775858ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775858:L775858:{c.instructions+=2;NFSU2_TR(0x775858);
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
B77585b:{NFSU2_TR(0x77585b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77585c:L77585c:{c.instructions+=5;NFSU2_TR(0x77585c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77585e:{NFSU2_TR(0x77585e);
u8 U[4];
w4(U+0,u32(0x796ff4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775863:{NFSU2_TR(0x775863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775866:{NFSU2_TR(0x775866);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775867:{NFSU2_TR(0x775867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77586cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77586c:L77586c:{c.instructions+=2;NFSU2_TR(0x77586c);
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
B77586f:{NFSU2_TR(0x77586f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775870:L775870:{c.instructions+=2;NFSU2_TR(0x775870);
w4(R+0,u32(0x7e0df0ull));
}
B775875:{NFSU2_TR(0x775875);
TAIL_STATIC(0x75bfd2u,75b);
}
B775880:L775880:{c.instructions+=2;NFSU2_TR(0x775880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775883:{NFSU2_TR(0x775883);
TAIL_STATIC(0x510d40u,510);
}
B775888:L775888:{c.instructions+=3;NFSU2_TR(0x775888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77588b:{NFSU2_TR(0x77588b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77588e:{NFSU2_TR(0x77588e);
TAIL_STATIC(0x4def30u,4de);
}
B775893:L775893:{c.instructions+=3;NFSU2_TR(0x775893);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775896:{NFSU2_TR(0x775896);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B775899:{NFSU2_TR(0x775899);
TAIL_STATIC(0x52ea90u,52e);
}
B77589e:L77589e:{c.instructions+=2;NFSU2_TR(0x77589e);
w4(R+0,u32(0x7e0e24ull));
}
B7758a3:{NFSU2_TR(0x7758a3);
TAIL_STATIC(0x75bfd2u,75b);
}
B7758b0:L7758b0:{c.instructions+=2;NFSU2_TR(0x7758b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7758b6:{NFSU2_TR(0x7758b6);
TAIL_STATIC(0x4defb0u,4de);
}
B7758bb:L7758bb:{c.instructions+=2;NFSU2_TR(0x7758bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7758c1:{NFSU2_TR(0x7758c1);
TAIL_STATIC(0x4017f0u,401);
}
B7758c6:L7758c6:{c.instructions+=2;NFSU2_TR(0x7758c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7758cc:{NFSU2_TR(0x7758cc);
TAIL_STATIC(0x401800u,401);
}
B7758d1:L7758d1:{c.instructions+=2;NFSU2_TR(0x7758d1);
w4(R+0,u32(0x7e0e58ull));
}
B7758d6:{NFSU2_TR(0x7758d6);
TAIL_STATIC(0x75bfd2u,75b);
}
B7758e0:L7758e0:{c.instructions+=2;NFSU2_TR(0x7758e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7758e6:{NFSU2_TR(0x7758e6);
TAIL_STATIC(0x4defb0u,4de);
}
B7758eb:L7758eb:{c.instructions+=3;NFSU2_TR(0x7758eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7758f1:{NFSU2_TR(0x7758f1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x150ull))));
}
B7758f7:{NFSU2_TR(0x7758f7);
TAIL_STATIC(0x50db70u,50d);
}
B7758fc:L7758fc:{c.instructions+=2;NFSU2_TR(0x7758fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B775902:{NFSU2_TR(0x775902);
TAIL_STATIC(0x4017f0u,401);
}
B775907:L775907:{c.instructions+=2;NFSU2_TR(0x775907);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77590d:{NFSU2_TR(0x77590d);
TAIL_STATIC(0x401800u,401);
}
B775912:L775912:{c.instructions+=2;NFSU2_TR(0x775912);
w4(R+0,u32(0x7e0e94ull));
}
B775917:{NFSU2_TR(0x775917);
TAIL_STATIC(0x75bfd2u,75b);
}
B775920:L775920:{c.instructions+=2;NFSU2_TR(0x775920);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B775923:{NFSU2_TR(0x775923);
TAIL_STATIC(0x4def30u,4de);
}
B775928:L775928:{c.instructions+=5;NFSU2_TR(0x775928);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77592a:{NFSU2_TR(0x77592a);
u8 U[4];
w4(U+0,u32(0x7975c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77592f:{NFSU2_TR(0x77592f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775932:{NFSU2_TR(0x775932);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775933:{NFSU2_TR(0x775933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775938ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775938:L775938:{c.instructions+=2;NFSU2_TR(0x775938);
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
B77593b:{NFSU2_TR(0x77593b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77593c:L77593c:{c.instructions+=2;NFSU2_TR(0x77593c);
w4(R+0,u32(0x7e0ee4ull));
}
B775941:{NFSU2_TR(0x775941);
TAIL_STATIC(0x75bfd2u,75b);
}
B775950:L775950:{c.instructions+=5;NFSU2_TR(0x775950);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775952:{NFSU2_TR(0x775952);
u8 U[4];
w4(U+0,u32(0x7975d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775957:{NFSU2_TR(0x775957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77595a:{NFSU2_TR(0x77595a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77595b:{NFSU2_TR(0x77595b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775960ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775960:L775960:{c.instructions+=2;NFSU2_TR(0x775960);
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
B775963:{NFSU2_TR(0x775963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775964:L775964:{c.instructions+=5;NFSU2_TR(0x775964);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775966:{NFSU2_TR(0x775966);
u8 U[4];
w4(U+0,u32(0x7975d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77596b:{NFSU2_TR(0x77596b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77596e:{NFSU2_TR(0x77596e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77596f:{NFSU2_TR(0x77596f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775974ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775974:L775974:{c.instructions+=2;NFSU2_TR(0x775974);
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
B775977:{NFSU2_TR(0x775977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775978:L775978:{c.instructions+=5;NFSU2_TR(0x775978);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77597a:{NFSU2_TR(0x77597a);
u8 U[4];
w4(U+0,u32(0x7975d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77597f:{NFSU2_TR(0x77597f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775982:{NFSU2_TR(0x775982);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775983:{NFSU2_TR(0x775983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775988ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775988:L775988:{c.instructions+=2;NFSU2_TR(0x775988);
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
B77598b:{NFSU2_TR(0x77598b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77598c:L77598c:{c.instructions+=3;NFSU2_TR(0x77598c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77598f:{NFSU2_TR(0x77598f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B775992:{NFSU2_TR(0x775992);
TAIL_STATIC(0x4017f0u,401);
}
B775997:L775997:{c.instructions+=2;NFSU2_TR(0x775997);
w4(R+0,u32(0x7e0f20ull));
}
B77599c:{NFSU2_TR(0x77599c);
TAIL_STATIC(0x75bfd2u,75b);
}
B7759b0:L7759b0:{c.instructions+=3;NFSU2_TR(0x7759b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7759b3:{NFSU2_TR(0x7759b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7759b6:{NFSU2_TR(0x7759b6);
TAIL_STATIC(0x4def30u,4de);
}
B7759bb:L7759bb:{c.instructions+=3;NFSU2_TR(0x7759bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7759be:{NFSU2_TR(0x7759be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B7759c1:{NFSU2_TR(0x7759c1);
TAIL_STATIC(0x4def30u,4de);
}
B7759c6:L7759c6:{c.instructions+=5;NFSU2_TR(0x7759c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759c8:{NFSU2_TR(0x7759c8);
u8 U[4];
w4(U+0,u32(0x7975ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759cd:{NFSU2_TR(0x7759cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7759d0:{NFSU2_TR(0x7759d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759d1:{NFSU2_TR(0x7759d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7759d6ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7759d6:L7759d6:{c.instructions+=2;NFSU2_TR(0x7759d6);
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
B7759d9:{NFSU2_TR(0x7759d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7759da:L7759da:{c.instructions+=5;NFSU2_TR(0x7759da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759dc:{NFSU2_TR(0x7759dc);
u8 U[4];
w4(U+0,u32(0x7975ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759e1:{NFSU2_TR(0x7759e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7759e4:{NFSU2_TR(0x7759e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759e5:{NFSU2_TR(0x7759e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7759eaull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7759ea:L7759ea:{c.instructions+=2;NFSU2_TR(0x7759ea);
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
B7759ed:{NFSU2_TR(0x7759ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7759ee:L7759ee:{c.instructions+=5;NFSU2_TR(0x7759ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759f0:{NFSU2_TR(0x7759f0);
u8 U[4];
w4(U+0,u32(0x7975ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759f5:{NFSU2_TR(0x7759f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7759f8:{NFSU2_TR(0x7759f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7759f9:{NFSU2_TR(0x7759f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7759feull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7759fe:L7759fe:{c.instructions+=2;NFSU2_TR(0x7759fe);
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
B775a01:{NFSU2_TR(0x775a01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775a02:L775a02:{c.instructions+=2;NFSU2_TR(0x775a02);
w4(R+0,u32(0x7e0f64ull));
}
B775a07:{NFSU2_TR(0x775a07);
TAIL_STATIC(0x75bfd2u,75b);
}
B775a10:L775a10:{c.instructions+=3;NFSU2_TR(0x775a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775a13:{NFSU2_TR(0x775a13);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B775a16:{NFSU2_TR(0x775a16);
TAIL_STATIC(0x4def30u,4de);
}
B775a1b:L775a1b:{c.instructions+=2;NFSU2_TR(0x775a1b);
w4(R+0,u32(0x7e0f88ull));
}
B775a20:{NFSU2_TR(0x775a20);
TAIL_STATIC(0x75bfd2u,75b);
}
B775a30:L775a30:{c.instructions+=2;NFSU2_TR(0x775a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775a33:{NFSU2_TR(0x775a33);
TAIL_STATIC(0x4ee670u,4ee);
}
B775a38:L775a38:{c.instructions+=2;NFSU2_TR(0x775a38);
w4(R+0,u32(0x7e0facull));
}
B775a3d:{NFSU2_TR(0x775a3d);
TAIL_STATIC(0x75bfd2u,75b);
}
B775a50:L775a50:{c.instructions+=5;NFSU2_TR(0x775a50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775a52:{NFSU2_TR(0x775a52);
u8 U[4];
w4(U+0,u32(0x797608ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775a57:{NFSU2_TR(0x775a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775a5a:{NFSU2_TR(0x775a5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775a5b:{NFSU2_TR(0x775a5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775a60ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775a60:L775a60:{c.instructions+=2;NFSU2_TR(0x775a60);
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
B775a63:{NFSU2_TR(0x775a63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775a64:L775a64:{c.instructions+=2;NFSU2_TR(0x775a64);
w4(R+0,u32(0x7e0fd0ull));
}
B775a69:{NFSU2_TR(0x775a69);
TAIL_STATIC(0x75bfd2u,75b);
}
B775a70:L775a70:{c.instructions+=2;NFSU2_TR(0x775a70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B775a73:{NFSU2_TR(0x775a73);
TAIL_STATIC(0x4358e0u,435);
}
B775a78:L775a78:{c.instructions+=2;NFSU2_TR(0x775a78);
w4(R+0,u32(0x7e0ff4ull));
}
B775a7d:{NFSU2_TR(0x775a7d);
TAIL_STATIC(0x75bfd2u,75b);
}
B775a90:L775a90:{c.instructions+=5;NFSU2_TR(0x775a90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775a92:{NFSU2_TR(0x775a92);
u8 U[4];
w4(U+0,u32(0x790f3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775a97:{NFSU2_TR(0x775a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775a9d:{NFSU2_TR(0x775a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775a9e:{NFSU2_TR(0x775a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775aa3ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775aa3:L775aa3:{c.instructions+=2;NFSU2_TR(0x775aa3);
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
B775aa6:{NFSU2_TR(0x775aa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775aa7:L775aa7:{c.instructions+=2;NFSU2_TR(0x775aa7);
w4(R+0,u32(0x7e1018ull));
}
B775aac:{NFSU2_TR(0x775aac);
TAIL_STATIC(0x75bfd2u,75b);
}
B775ac0:L775ac0:{c.instructions+=5;NFSU2_TR(0x775ac0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ac2:{NFSU2_TR(0x775ac2);
u8 U[4];
w4(U+0,u32(0x79767cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ac7:{NFSU2_TR(0x775ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775aca:{NFSU2_TR(0x775aca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775acb:{NFSU2_TR(0x775acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775ad0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775ad0:L775ad0:{c.instructions+=2;NFSU2_TR(0x775ad0);
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
B775ad3:{NFSU2_TR(0x775ad3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775ad4:L775ad4:{c.instructions+=2;NFSU2_TR(0x775ad4);
w4(R+0,u32(0x7e103cull));
}
B775ad9:{NFSU2_TR(0x775ad9);
TAIL_STATIC(0x75bfd2u,75b);
}
B775ae0:L775ae0:{c.instructions+=2;NFSU2_TR(0x775ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775ae3:{NFSU2_TR(0x775ae3);
TAIL_STATIC(0x510d40u,510);
}
B775ae8:L775ae8:{c.instructions+=3;NFSU2_TR(0x775ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775aeb:{NFSU2_TR(0x775aeb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B775aee:{NFSU2_TR(0x775aee);
TAIL_STATIC(0x4cbba0u,4cb);
}
B775af3:L775af3:{c.instructions+=3;NFSU2_TR(0x775af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775af6:{NFSU2_TR(0x775af6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfcull))));
}
B775afc:{NFSU2_TR(0x775afc);
TAIL_STATIC(0x4cbba0u,4cb);
}
B775b01:L775b01:{c.instructions+=5;NFSU2_TR(0x775b01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775b03:{NFSU2_TR(0x775b03);
u8 U[4];
w4(U+0,u32(0x797690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775b08:{NFSU2_TR(0x775b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775b0b:{NFSU2_TR(0x775b0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775b0c:{NFSU2_TR(0x775b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775b11ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775b11:L775b11:{c.instructions+=2;NFSU2_TR(0x775b11);
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
B775b14:{NFSU2_TR(0x775b14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775b15:L775b15:{c.instructions+=2;NFSU2_TR(0x775b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775b18:{NFSU2_TR(0x775b18);
TAIL_STATIC(0x531610u,531);
}
B775b1d:L775b1d:{c.instructions+=2;NFSU2_TR(0x775b1d);
w4(R+0,u32(0x7e1080ull));
}
B775b22:{NFSU2_TR(0x775b22);
TAIL_STATIC(0x75bfd2u,75b);
}
B775b30:L775b30:{c.instructions+=5;NFSU2_TR(0x775b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775b32:{NFSU2_TR(0x775b32);
u8 U[4];
w4(U+0,u32(0x7976e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775b37:{NFSU2_TR(0x775b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775b3a:{NFSU2_TR(0x775b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775b3b:{NFSU2_TR(0x775b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775b40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775b40:L775b40:{c.instructions+=2;NFSU2_TR(0x775b40);
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
B775b43:{NFSU2_TR(0x775b43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775b44:L775b44:{c.instructions+=2;NFSU2_TR(0x775b44);
w4(R+0,u32(0x7e10a4ull));
}
B775b49:{NFSU2_TR(0x775b49);
TAIL_STATIC(0x75bfd2u,75b);
}
B775b50:L775b50:{c.instructions+=2;NFSU2_TR(0x775b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775b56:{NFSU2_TR(0x775b56);
TAIL_STATIC(0x510d40u,510);
}
B775b5b:L775b5b:{c.instructions+=3;NFSU2_TR(0x775b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775b61:{NFSU2_TR(0x775b61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B775b64:{NFSU2_TR(0x775b64);
TAIL_STATIC(0x479100u,479);
}
B775b69:L775b69:{c.instructions+=3;NFSU2_TR(0x775b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775b6f:{NFSU2_TR(0x775b6f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xd8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xd8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B775b75:{NFSU2_TR(0x775b75);
TAIL_STATIC(0x4957a0u,495);
}
B775b7a:L775b7a:{c.instructions+=3;NFSU2_TR(0x775b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775b80:{NFSU2_TR(0x775b80);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x11cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x11cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x11cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B775b86:{NFSU2_TR(0x775b86);
TAIL_STATIC(0x4957a0u,495);
}
B775b8b:L775b8b:{c.instructions+=3;NFSU2_TR(0x775b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775b91:{NFSU2_TR(0x775b91);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x160ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x160ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x160ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B775b97:{NFSU2_TR(0x775b97);
TAIL_STATIC(0x4957a0u,495);
}
B775b9c:L775b9c:{c.instructions+=2;NFSU2_TR(0x775b9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B775ba2:{NFSU2_TR(0x775ba2);
TAIL_STATIC(0x401800u,401);
}
B775ba7:L775ba7:{c.instructions+=2;NFSU2_TR(0x775ba7);
w4(R+0,u32(0x7e10f0ull));
}
B775bac:{NFSU2_TR(0x775bac);
TAIL_STATIC(0x75bfd2u,75b);
}
B775bc0:L775bc0:{c.instructions+=5;NFSU2_TR(0x775bc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775bc2:{NFSU2_TR(0x775bc2);
u8 U[4];
w4(U+0,u32(0x7975c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775bc7:{NFSU2_TR(0x775bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775bca:{NFSU2_TR(0x775bca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775bcb:{NFSU2_TR(0x775bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775bd0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775bd0:L775bd0:{c.instructions+=2;NFSU2_TR(0x775bd0);
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
B775bd3:{NFSU2_TR(0x775bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775bd4:L775bd4:{c.instructions+=2;NFSU2_TR(0x775bd4);
w4(R+0,u32(0x7e1114ull));
}
B775bd9:{NFSU2_TR(0x775bd9);
TAIL_STATIC(0x75bfd2u,75b);
}
B775be0:L775be0:{c.instructions+=2;NFSU2_TR(0x775be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775be3:{NFSU2_TR(0x775be3);
TAIL_STATIC(0x510d40u,510);
}
B775be8:L775be8:{c.instructions+=3;NFSU2_TR(0x775be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775beb:{NFSU2_TR(0x775beb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B775bee:{NFSU2_TR(0x775bee);
TAIL_STATIC(0x4def30u,4de);
}
B775bf3:L775bf3:{c.instructions+=3;NFSU2_TR(0x775bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775bf6:{NFSU2_TR(0x775bf6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B775bf9:{NFSU2_TR(0x775bf9);
TAIL_STATIC(0x52ea90u,52e);
}
B775bfe:L775bfe:{c.instructions+=3;NFSU2_TR(0x775bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775c01:{NFSU2_TR(0x775c01);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x118ull))));
}
B775c07:{NFSU2_TR(0x775c07);
TAIL_STATIC(0x4985a0u,498);
}
B775c0c:L775c0c:{c.instructions+=2;NFSU2_TR(0x775c0c);
w4(R+0,u32(0x7e1150ull));
}
B775c11:{NFSU2_TR(0x775c11);
TAIL_STATIC(0x75bfd2u,75b);
}
B775c20:L775c20:{c.instructions+=5;NFSU2_TR(0x775c20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c22:{NFSU2_TR(0x775c22);
u8 U[4];
w4(U+0,u32(0x797768ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c27:{NFSU2_TR(0x775c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775c2a:{NFSU2_TR(0x775c2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c2b:{NFSU2_TR(0x775c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775c30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775c30:L775c30:{c.instructions+=2;NFSU2_TR(0x775c30);
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
B775c33:{NFSU2_TR(0x775c33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775c34:L775c34:{c.instructions+=2;NFSU2_TR(0x775c34);
w4(R+0,u32(0x7e1174ull));
}
B775c39:{NFSU2_TR(0x775c39);
TAIL_STATIC(0x75bfd2u,75b);
}
B775c40:L775c40:{c.instructions+=5;NFSU2_TR(0x775c40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c42:{NFSU2_TR(0x775c42);
u8 U[4];
w4(U+0,u32(0x79777cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c47:{NFSU2_TR(0x775c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775c4a:{NFSU2_TR(0x775c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c4b:{NFSU2_TR(0x775c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775c50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775c50:L775c50:{c.instructions+=2;NFSU2_TR(0x775c50);
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
B775c53:{NFSU2_TR(0x775c53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775c54:L775c54:{c.instructions+=2;NFSU2_TR(0x775c54);
w4(R+0,u32(0x7e1198ull));
}
B775c59:{NFSU2_TR(0x775c59);
TAIL_STATIC(0x75bfd2u,75b);
}
B775c60:L775c60:{c.instructions+=5;NFSU2_TR(0x775c60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c62:{NFSU2_TR(0x775c62);
u8 U[4];
w4(U+0,u32(0x7977b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c67:{NFSU2_TR(0x775c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775c6a:{NFSU2_TR(0x775c6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c6b:{NFSU2_TR(0x775c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775c70ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775c70:L775c70:{c.instructions+=2;NFSU2_TR(0x775c70);
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
B775c73:{NFSU2_TR(0x775c73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775c74:L775c74:{c.instructions+=2;NFSU2_TR(0x775c74);
w4(R+0,u32(0x7e11bcull));
}
B775c79:{NFSU2_TR(0x775c79);
TAIL_STATIC(0x75bfd2u,75b);
}
B775c80:L775c80:{c.instructions+=5;NFSU2_TR(0x775c80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c82:{NFSU2_TR(0x775c82);
u8 U[4];
w4(U+0,u32(0x7977ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c87:{NFSU2_TR(0x775c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775c8a:{NFSU2_TR(0x775c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775c8b:{NFSU2_TR(0x775c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775c90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775c90:L775c90:{c.instructions+=2;NFSU2_TR(0x775c90);
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
B775c93:{NFSU2_TR(0x775c93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775c94:L775c94:{c.instructions+=2;NFSU2_TR(0x775c94);
w4(R+0,u32(0x7e11e0ull));
}
B775c99:{NFSU2_TR(0x775c99);
TAIL_STATIC(0x75bfd2u,75b);
}
B775ca0:L775ca0:{c.instructions+=5;NFSU2_TR(0x775ca0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ca2:{NFSU2_TR(0x775ca2);
u8 U[4];
w4(U+0,u32(0x7977dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ca7:{NFSU2_TR(0x775ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775caa:{NFSU2_TR(0x775caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775cab:{NFSU2_TR(0x775cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775cb0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775cb0:L775cb0:{c.instructions+=2;NFSU2_TR(0x775cb0);
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
B775cb3:{NFSU2_TR(0x775cb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775cb4:L775cb4:{c.instructions+=2;NFSU2_TR(0x775cb4);
w4(R+0,u32(0x7e1204ull));
}
B775cb9:{NFSU2_TR(0x775cb9);
TAIL_STATIC(0x75bfd2u,75b);
}
B775cc0:L775cc0:{c.instructions+=3;NFSU2_TR(0x775cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775cc3:{NFSU2_TR(0x775cc3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x138ull))));
}
B775cc9:{NFSU2_TR(0x775cc9);
TAIL_STATIC(0x4def30u,4de);
}
B775cce:L775cce:{c.instructions+=2;NFSU2_TR(0x775cce);
w4(R+0,u32(0x7e1228ull));
}
B775cd3:{NFSU2_TR(0x775cd3);
TAIL_STATIC(0x75bfd2u,75b);
}
B775ce0:L775ce0:{c.instructions+=5;NFSU2_TR(0x775ce0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ce2:{NFSU2_TR(0x775ce2);
u8 U[4];
w4(U+0,u32(0x7977f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ce7:{NFSU2_TR(0x775ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775cea:{NFSU2_TR(0x775cea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ceb:{NFSU2_TR(0x775ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775cf0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775cf0:L775cf0:{c.instructions+=2;NFSU2_TR(0x775cf0);
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
B775cf3:{NFSU2_TR(0x775cf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775cf4:L775cf4:{c.instructions+=2;NFSU2_TR(0x775cf4);
w4(R+0,u32(0x7e124cull));
}
B775cf9:{NFSU2_TR(0x775cf9);
TAIL_STATIC(0x75bfd2u,75b);
}
B775d00:L775d00:{c.instructions+=5;NFSU2_TR(0x775d00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d02:{NFSU2_TR(0x775d02);
u8 U[4];
w4(U+0,u32(0x79780cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d07:{NFSU2_TR(0x775d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775d0a:{NFSU2_TR(0x775d0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d0b:{NFSU2_TR(0x775d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775d10ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775d10:L775d10:{c.instructions+=2;NFSU2_TR(0x775d10);
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
B775d13:{NFSU2_TR(0x775d13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775d14:L775d14:{c.instructions+=2;NFSU2_TR(0x775d14);
w4(R+0,u32(0x7e1270ull));
}
B775d19:{NFSU2_TR(0x775d19);
TAIL_STATIC(0x75bfd2u,75b);
}
B775d20:L775d20:{c.instructions+=5;NFSU2_TR(0x775d20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d22:{NFSU2_TR(0x775d22);
u8 U[4];
w4(U+0,u32(0x797818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d27:{NFSU2_TR(0x775d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775d2a:{NFSU2_TR(0x775d2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d2b:{NFSU2_TR(0x775d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775d30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775d30:L775d30:{c.instructions+=2;NFSU2_TR(0x775d30);
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
B775d33:{NFSU2_TR(0x775d33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775d34:L775d34:{c.instructions+=2;NFSU2_TR(0x775d34);
w4(R+0,u32(0x7e1294ull));
}
B775d39:{NFSU2_TR(0x775d39);
TAIL_STATIC(0x75bfd2u,75b);
}
B775d40:L775d40:{c.instructions+=5;NFSU2_TR(0x775d40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d42:{NFSU2_TR(0x775d42);
u8 U[4];
w4(U+0,u32(0x797828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d47:{NFSU2_TR(0x775d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775d4a:{NFSU2_TR(0x775d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d4b:{NFSU2_TR(0x775d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775d50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775d50:L775d50:{c.instructions+=2;NFSU2_TR(0x775d50);
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
B775d53:{NFSU2_TR(0x775d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775d54:L775d54:{c.instructions+=2;NFSU2_TR(0x775d54);
w4(R+0,u32(0x7e12b8ull));
}
B775d59:{NFSU2_TR(0x775d59);
TAIL_STATIC(0x75bfd2u,75b);
}
B775d60:L775d60:{c.instructions+=5;NFSU2_TR(0x775d60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d62:{NFSU2_TR(0x775d62);
u8 U[4];
w4(U+0,u32(0x79783cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d67:{NFSU2_TR(0x775d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775d6a:{NFSU2_TR(0x775d6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d6b:{NFSU2_TR(0x775d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775d70ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775d70:L775d70:{c.instructions+=2;NFSU2_TR(0x775d70);
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
B775d73:{NFSU2_TR(0x775d73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775d74:L775d74:{c.instructions+=2;NFSU2_TR(0x775d74);
w4(R+0,u32(0x7e12dcull));
}
B775d79:{NFSU2_TR(0x775d79);
TAIL_STATIC(0x75bfd2u,75b);
}
B775d80:L775d80:{c.instructions+=5;NFSU2_TR(0x775d80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d82:{NFSU2_TR(0x775d82);
u8 U[4];
w4(U+0,u32(0x79784cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d87:{NFSU2_TR(0x775d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775d8a:{NFSU2_TR(0x775d8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775d8b:{NFSU2_TR(0x775d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775d90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775d90:L775d90:{c.instructions+=2;NFSU2_TR(0x775d90);
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
B775d93:{NFSU2_TR(0x775d93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775d94:L775d94:{c.instructions+=2;NFSU2_TR(0x775d94);
w4(R+0,u32(0x7e1300ull));
}
B775d99:{NFSU2_TR(0x775d99);
TAIL_STATIC(0x75bfd2u,75b);
}
B775da0:L775da0:{c.instructions+=5;NFSU2_TR(0x775da0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775da2:{NFSU2_TR(0x775da2);
u8 U[4];
w4(U+0,u32(0x7978b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775da7:{NFSU2_TR(0x775da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775daa:{NFSU2_TR(0x775daa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775dab:{NFSU2_TR(0x775dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775db0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775db0:L775db0:{c.instructions+=2;NFSU2_TR(0x775db0);
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
B775db3:{NFSU2_TR(0x775db3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775db4:L775db4:{c.instructions+=2;NFSU2_TR(0x775db4);
w4(R+0,u32(0x7e1324ull));
}
B775db9:{NFSU2_TR(0x775db9);
TAIL_STATIC(0x75bfd2u,75b);
}
B775dc0:L775dc0:{c.instructions+=2;NFSU2_TR(0x775dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775dc3:{NFSU2_TR(0x775dc3);
TAIL_STATIC(0x510d40u,510);
}
B775dc8:L775dc8:{c.instructions+=3;NFSU2_TR(0x775dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775dcb:{NFSU2_TR(0x775dcb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B775dce:{NFSU2_TR(0x775dce);
TAIL_STATIC(0x4cbba0u,4cb);
}
B775dd3:L775dd3:{c.instructions+=2;NFSU2_TR(0x775dd3);
w4(R+0,u32(0x7e1350ull));
}
B775dd8:{NFSU2_TR(0x775dd8);
TAIL_STATIC(0x75bfd2u,75b);
}
B775de0:L775de0:{c.instructions+=2;NFSU2_TR(0x775de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775de6:{NFSU2_TR(0x775de6);
TAIL_STATIC(0x4defb0u,4de);
}
B775deb:L775deb:{c.instructions+=3;NFSU2_TR(0x775deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775df1:{NFSU2_TR(0x775df1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x150ull))));
}
B775df7:{NFSU2_TR(0x775df7);
TAIL_STATIC(0x49d870u,49d);
}
B775dfc:L775dfc:{c.instructions+=2;NFSU2_TR(0x775dfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B775e02:{NFSU2_TR(0x775e02);
TAIL_STATIC(0x4017f0u,401);
}
B775e07:L775e07:{c.instructions+=2;NFSU2_TR(0x775e07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B775e0d:{NFSU2_TR(0x775e0d);
TAIL_STATIC(0x401800u,401);
}
B775e12:L775e12:{c.instructions+=2;NFSU2_TR(0x775e12);
w4(R+0,u32(0x7e13b8ull));
}
B775e17:{NFSU2_TR(0x775e17);
TAIL_STATIC(0x75bfd2u,75b);
}
B775e20:L775e20:{c.instructions+=5;NFSU2_TR(0x775e20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775e22:{NFSU2_TR(0x775e22);
u8 U[4];
w4(U+0,u32(0x797964ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775e27:{NFSU2_TR(0x775e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775e2a:{NFSU2_TR(0x775e2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775e2b:{NFSU2_TR(0x775e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775e30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775e30:L775e30:{c.instructions+=2;NFSU2_TR(0x775e30);
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
B775e33:{NFSU2_TR(0x775e33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775e34:L775e34:{c.instructions+=2;NFSU2_TR(0x775e34);
w4(R+0,u32(0x7e1408ull));
}
B775e39:{NFSU2_TR(0x775e39);
TAIL_STATIC(0x75bfd2u,75b);
}
B775e40:L775e40:{c.instructions+=5;NFSU2_TR(0x775e40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775e42:{NFSU2_TR(0x775e42);
u8 U[4];
w4(U+0,u32(0x79797cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775e47:{NFSU2_TR(0x775e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775e4a:{NFSU2_TR(0x775e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775e4b:{NFSU2_TR(0x775e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775e50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775e50:L775e50:{c.instructions+=2;NFSU2_TR(0x775e50);
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
B775e53:{NFSU2_TR(0x775e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775e54:L775e54:{c.instructions+=2;NFSU2_TR(0x775e54);
w4(R+0,u32(0x7e142cull));
}
B775e59:{NFSU2_TR(0x775e59);
TAIL_STATIC(0x75bfd2u,75b);
}
B775e60:L775e60:{c.instructions+=2;NFSU2_TR(0x775e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775e63:{NFSU2_TR(0x775e63);
TAIL_STATIC(0x510d40u,510);
}
B775e68:L775e68:{c.instructions+=3;NFSU2_TR(0x775e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775e6b:{NFSU2_TR(0x775e6b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B775e6e:{NFSU2_TR(0x775e6e);
TAIL_STATIC(0x4cbba0u,4cb);
}
B775e73:L775e73:{c.instructions+=3;NFSU2_TR(0x775e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775e76:{NFSU2_TR(0x775e76);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x128ull))));
}
B775e7c:{NFSU2_TR(0x775e7c);
TAIL_STATIC(0x4956a0u,495);
}
B775e81:L775e81:{c.instructions+=2;NFSU2_TR(0x775e81);
w4(R+0,u32(0x7e0694ull));
}
B775e86:{NFSU2_TR(0x775e86);
TAIL_STATIC(0x75bfd2u,75b);
}
B775e90:L775e90:{c.instructions+=2;NFSU2_TR(0x775e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775e96:{NFSU2_TR(0x775e96);
TAIL_STATIC(0x510d40u,510);
}
B775e9b:L775e9b:{c.instructions+=3;NFSU2_TR(0x775e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775ea1:{NFSU2_TR(0x775ea1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B775ea4:{NFSU2_TR(0x775ea4);
TAIL_STATIC(0x4cbba0u,4cb);
}
B775ea9:L775ea9:{c.instructions+=2;NFSU2_TR(0x775ea9);
w4(R+0,u32(0x7e1458ull));
}
B775eae:{NFSU2_TR(0x775eae);
TAIL_STATIC(0x75bfd2u,75b);
}
B775ec0:L775ec0:{c.instructions+=2;NFSU2_TR(0x775ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775ec6:{NFSU2_TR(0x775ec6);
TAIL_STATIC(0x4e20b0u,4e2);
}
B775ecb:L775ecb:{c.instructions+=2;NFSU2_TR(0x775ecb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B775ed1:{NFSU2_TR(0x775ed1);
TAIL_STATIC(0x401800u,401);
}
B775ed6:L775ed6:{c.instructions+=2;NFSU2_TR(0x775ed6);
w4(R+0,u32(0x7e14b0ull));
}
B775edb:{NFSU2_TR(0x775edb);
TAIL_STATIC(0x75bfd2u,75b);
}
B775ee0:L775ee0:{c.instructions+=5;NFSU2_TR(0x775ee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ee2:{NFSU2_TR(0x775ee2);
u8 U[4];
w4(U+0,u32(0x797a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ee7:{NFSU2_TR(0x775ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775eea:{NFSU2_TR(0x775eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775eeb:{NFSU2_TR(0x775eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775ef0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775ef0:L775ef0:{c.instructions+=2;NFSU2_TR(0x775ef0);
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
B775ef3:{NFSU2_TR(0x775ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775ef4:L775ef4:{c.instructions+=2;NFSU2_TR(0x775ef4);
w4(R+0,u32(0x7e14d4ull));
}
B775ef9:{NFSU2_TR(0x775ef9);
TAIL_STATIC(0x75bfd2u,75b);
}
B775f00:L775f00:{c.instructions+=2;NFSU2_TR(0x775f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775f03:{NFSU2_TR(0x775f03);
TAIL_STATIC(0x495930u,495);
}
B775f08:L775f08:{c.instructions+=3;NFSU2_TR(0x775f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775f0b:{NFSU2_TR(0x775f0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B775f11:{NFSU2_TR(0x775f11);
TAIL_STATIC(0x4def30u,4de);
}
B775f16:L775f16:{c.instructions+=2;NFSU2_TR(0x775f16);
w4(R+0,u32(0x7e1500ull));
}
B775f1b:{NFSU2_TR(0x775f1b);
TAIL_STATIC(0x75bfd2u,75b);
}
B775f20:L775f20:{c.instructions+=3;NFSU2_TR(0x775f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B775f23:{NFSU2_TR(0x775f23);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B775f26:{NFSU2_TR(0x775f26);
TAIL_STATIC(0x4835c0u,483);
}
B775f2b:L775f2b:{c.instructions+=2;NFSU2_TR(0x775f2b);
w4(R+0,u32(0x7e1524ull));
}
B775f30:{NFSU2_TR(0x775f30);
TAIL_STATIC(0x75bfd2u,75b);
}
B775f40:L775f40:{c.instructions+=5;NFSU2_TR(0x775f40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f42:{NFSU2_TR(0x775f42);
u8 U[4];
w4(U+0,u32(0x797b40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f47:{NFSU2_TR(0x775f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775f4a:{NFSU2_TR(0x775f4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f4b:{NFSU2_TR(0x775f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775f50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775f50:L775f50:{c.instructions+=2;NFSU2_TR(0x775f50);
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
B775f53:{NFSU2_TR(0x775f53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775f54:L775f54:{c.instructions+=5;NFSU2_TR(0x775f54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f56:{NFSU2_TR(0x775f56);
u8 U[4];
w4(U+0,u32(0x797b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f5b:{NFSU2_TR(0x775f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775f5e:{NFSU2_TR(0x775f5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f5f:{NFSU2_TR(0x775f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775f64ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775f64:L775f64:{c.instructions+=2;NFSU2_TR(0x775f64);
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
B775f67:{NFSU2_TR(0x775f67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775f68:L775f68:{c.instructions+=5;NFSU2_TR(0x775f68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f6a:{NFSU2_TR(0x775f6a);
u8 U[4];
w4(U+0,u32(0x797b1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f6f:{NFSU2_TR(0x775f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775f72:{NFSU2_TR(0x775f72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f73:{NFSU2_TR(0x775f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775f78ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775f78:L775f78:{c.instructions+=2;NFSU2_TR(0x775f78);
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
B775f7b:{NFSU2_TR(0x775f7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775f7c:L775f7c:{c.instructions+=5;NFSU2_TR(0x775f7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f7e:{NFSU2_TR(0x775f7e);
u8 U[4];
w4(U+0,u32(0x797b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f83:{NFSU2_TR(0x775f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775f86:{NFSU2_TR(0x775f86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f87:{NFSU2_TR(0x775f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775f8cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775f8c:L775f8c:{c.instructions+=2;NFSU2_TR(0x775f8c);
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
B775f8f:{NFSU2_TR(0x775f8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775f90:L775f90:{c.instructions+=5;NFSU2_TR(0x775f90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f92:{NFSU2_TR(0x775f92);
u8 U[4];
w4(U+0,u32(0x797b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f97:{NFSU2_TR(0x775f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775f9a:{NFSU2_TR(0x775f9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775f9b:{NFSU2_TR(0x775f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775fa0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775fa0:L775fa0:{c.instructions+=2;NFSU2_TR(0x775fa0);
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
B775fa3:{NFSU2_TR(0x775fa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775fa4:L775fa4:{c.instructions+=5;NFSU2_TR(0x775fa4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fa6:{NFSU2_TR(0x775fa6);
u8 U[4];
w4(U+0,u32(0x797af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fab:{NFSU2_TR(0x775fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775fae:{NFSU2_TR(0x775fae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775faf:{NFSU2_TR(0x775faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775fb4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775fb4:L775fb4:{c.instructions+=2;NFSU2_TR(0x775fb4);
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
B775fb7:{NFSU2_TR(0x775fb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775fb8:L775fb8:{c.instructions+=5;NFSU2_TR(0x775fb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fba:{NFSU2_TR(0x775fba);
u8 U[4];
w4(U+0,u32(0x797ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fbf:{NFSU2_TR(0x775fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775fc2:{NFSU2_TR(0x775fc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fc3:{NFSU2_TR(0x775fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775fc8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775fc8:L775fc8:{c.instructions+=2;NFSU2_TR(0x775fc8);
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
B775fcb:{NFSU2_TR(0x775fcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775fcc:L775fcc:{c.instructions+=5;NFSU2_TR(0x775fcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fce:{NFSU2_TR(0x775fce);
u8 U[4];
w4(U+0,u32(0x797b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fd3:{NFSU2_TR(0x775fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775fd6:{NFSU2_TR(0x775fd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fd7:{NFSU2_TR(0x775fd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775fdcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775fdc:L775fdc:{c.instructions+=2;NFSU2_TR(0x775fdc);
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
B775fdf:{NFSU2_TR(0x775fdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775fe0:L775fe0:{c.instructions+=5;NFSU2_TR(0x775fe0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fe2:{NFSU2_TR(0x775fe2);
u8 U[4];
w4(U+0,u32(0x797b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fe7:{NFSU2_TR(0x775fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775fea:{NFSU2_TR(0x775fea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775feb:{NFSU2_TR(0x775feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x775ff0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B775ff0:L775ff0:{c.instructions+=2;NFSU2_TR(0x775ff0);
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
B775ff3:{NFSU2_TR(0x775ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B775ff4:L775ff4:{c.instructions+=5;NFSU2_TR(0x775ff4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ff6:{NFSU2_TR(0x775ff6);
u8 U[4];
w4(U+0,u32(0x797ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775ffb:{NFSU2_TR(0x775ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B775ffe:{NFSU2_TR(0x775ffe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B775fff:{NFSU2_TR(0x775fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x776004ull));
TAIL_STATIC(0x6d7120u,6d7);
}
XIT:NFSU2_TR_EXIT(0x775,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
