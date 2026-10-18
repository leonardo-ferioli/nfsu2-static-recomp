#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_445(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x444,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x444,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_444(u8* __restrict R,Cpu& c);
u32 page_444(Cpu& c){return body_444(c.regs.data(),c);}
__attribute__((noinline)) u32 body_444(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x444001:goto L444001;
case 0x444005:c.instructions+=4;goto B444005;
case 0x444007:c.instructions+=3;goto B444007;
case 0x444009:c.instructions+=2;goto B444009;
case 0x44400c:c.instructions+=1;goto B44400c;
case 0x44400e:goto L44400e;
case 0x444010:c.instructions+=1;goto B444010;
case 0x444014:goto L444014;
case 0x444016:c.instructions+=5;goto B444016;
case 0x444018:c.instructions+=4;goto B444018;
case 0x44401a:c.instructions+=3;goto B44401a;
case 0x44401d:c.instructions+=2;goto B44401d;
case 0x444020:c.instructions+=1;goto B444020;
case 0x444030:goto L444030;
case 0x444033:c.instructions+=2;goto B444033;
case 0x444035:c.instructions+=1;goto B444035;
case 0x444037:goto L444037;
case 0x44403a:c.instructions+=1;goto B44403a;
case 0x44403b:goto L44403b;
case 0x44403d:c.instructions+=1;goto B44403d;
case 0x444040:goto L444040;
case 0x444041:c.instructions+=4;goto B444041;
case 0x444043:c.instructions+=3;goto B444043;
case 0x444046:c.instructions+=2;goto B444046;
case 0x444048:c.instructions+=1;goto B444048;
case 0x44404a:goto L44404a;
case 0x444051:c.instructions+=3;goto B444051;
case 0x444056:c.instructions+=2;goto B444056;
case 0x444058:c.instructions+=1;goto B444058;
case 0x44405a:goto L44405a;
case 0x44405d:c.instructions+=5;goto B44405d;
case 0x444060:c.instructions+=4;goto B444060;
case 0x444066:c.instructions+=3;goto B444066;
case 0x44406b:c.instructions+=2;goto B44406b;
case 0x44406d:c.instructions+=1;goto B44406d;
case 0x44406f:goto L44406f;
case 0x444072:c.instructions+=2;goto B444072;
case 0x444075:c.instructions+=1;goto B444075;
case 0x44407b:goto L44407b;
case 0x44407e:c.instructions+=2;goto B44407e;
case 0x44407f:c.instructions+=1;goto B44407f;
case 0x444084:goto L444084;
case 0x444087:c.instructions+=1;goto B444087;
case 0x444091:goto L444091;
case 0x444092:c.instructions+=1;goto B444092;
case 0x4440a0:goto L4440a0;
case 0x4440a3:c.instructions+=2;goto B4440a3;
case 0x4440a5:c.instructions+=1;goto B4440a5;
case 0x4440a7:goto L4440a7;
case 0x4440aa:c.instructions+=8;goto B4440aa;
case 0x4440b1:c.instructions+=7;goto B4440b1;
case 0x4440b7:c.instructions+=6;goto B4440b7;
case 0x4440ba:c.instructions+=5;goto B4440ba;
case 0x4440c0:c.instructions+=4;goto B4440c0;
case 0x4440c3:c.instructions+=3;goto B4440c3;
case 0x4440c4:c.instructions+=2;goto B4440c4;
case 0x4440c7:c.instructions+=1;goto B4440c7;
case 0x4440cc:goto L4440cc;
case 0x4440d0:goto L4440d0;
case 0x4440d1:c.instructions+=19;goto B4440d1;
case 0x4440d3:c.instructions+=18;goto B4440d3;
case 0x4440d6:c.instructions+=17;goto B4440d6;
case 0x4440d9:c.instructions+=16;goto B4440d9;
case 0x4440dc:c.instructions+=15;goto B4440dc;
case 0x4440df:c.instructions+=14;goto B4440df;
case 0x4440e1:c.instructions+=13;goto B4440e1;
case 0x4440e3:c.instructions+=12;goto B4440e3;
case 0x4440e7:c.instructions+=11;goto B4440e7;
case 0x4440ea:c.instructions+=10;goto B4440ea;
case 0x4440ed:c.instructions+=9;goto B4440ed;
case 0x4440f1:c.instructions+=8;goto B4440f1;
case 0x4440f4:c.instructions+=7;goto B4440f4;
case 0x4440f8:c.instructions+=6;goto B4440f8;
case 0x4440fb:c.instructions+=5;goto B4440fb;
case 0x4440fc:c.instructions+=4;goto B4440fc;
case 0x444100:c.instructions+=3;goto B444100;
case 0x444101:c.instructions+=2;goto B444101;
case 0x444105:c.instructions+=1;goto B444105;
case 0x44410a:goto L44410a;
case 0x44410d:c.instructions+=6;goto B44410d;
case 0x44410e:c.instructions+=5;goto B44410e;
case 0x444112:c.instructions+=4;goto B444112;
case 0x444113:c.instructions+=3;goto B444113;
case 0x444117:c.instructions+=2;goto B444117;
case 0x444118:c.instructions+=1;goto B444118;
case 0x44411d:goto L44411d;
case 0x444121:c.instructions+=23;goto B444121;
case 0x444125:c.instructions+=22;goto B444125;
case 0x444128:c.instructions+=21;goto B444128;
case 0x44412b:c.instructions+=20;goto B44412b;
case 0x444131:c.instructions+=19;goto B444131;
case 0x444135:c.instructions+=18;goto B444135;
case 0x444139:c.instructions+=17;goto B444139;
case 0x44413d:c.instructions+=16;goto B44413d;
case 0x444141:c.instructions+=15;goto B444141;
case 0x444147:c.instructions+=14;goto B444147;
case 0x44414b:c.instructions+=13;goto B44414b;
case 0x44414f:c.instructions+=12;goto B44414f;
case 0x444153:c.instructions+=11;goto B444153;
case 0x444157:c.instructions+=10;goto B444157;
case 0x44415d:c.instructions+=9;goto B44415d;
case 0x444161:c.instructions+=8;goto B444161;
case 0x444165:c.instructions+=7;goto B444165;
case 0x444167:c.instructions+=6;goto B444167;
case 0x444169:c.instructions+=5;goto B444169;
case 0x44416c:c.instructions+=4;goto B44416c;
case 0x44416f:c.instructions+=3;goto B44416f;
case 0x444171:c.instructions+=2;goto B444171;
case 0x444172:c.instructions+=1;goto B444172;
case 0x444180:goto L444180;
case 0x444186:c.instructions+=1;goto B444186;
case 0x444190:goto L444190;
case 0x444191:c.instructions+=11;goto B444191;
case 0x444193:c.instructions+=10;goto B444193;
case 0x444196:c.instructions+=9;goto B444196;
case 0x444199:c.instructions+=8;goto B444199;
case 0x44419a:c.instructions+=7;goto B44419a;
case 0x44419b:c.instructions+=6;goto B44419b;
case 0x44419e:c.instructions+=5;goto B44419e;
case 0x4441a1:c.instructions+=4;goto B4441a1;
case 0x4441a3:c.instructions+=3;goto B4441a3;
case 0x4441a4:c.instructions+=2;goto B4441a4;
case 0x4441a8:c.instructions+=1;goto B4441a8;
case 0x4441aa:goto L4441aa;
case 0x4441ac:c.instructions+=6;goto B4441ac;
case 0x4441ad:c.instructions+=5;goto B4441ad;
case 0x4441ae:c.instructions+=4;goto B4441ae;
case 0x4441af:c.instructions+=3;goto B4441af;
case 0x4441b1:c.instructions+=2;goto B4441b1;
case 0x4441b2:c.instructions+=1;goto B4441b2;
case 0x4441b5:goto L4441b5;
case 0x4441b8:c.instructions+=17;goto B4441b8;
case 0x4441ba:c.instructions+=16;goto B4441ba;
case 0x4441bd:c.instructions+=15;goto B4441bd;
case 0x4441c0:c.instructions+=14;goto B4441c0;
case 0x4441c5:c.instructions+=13;goto B4441c5;
case 0x4441c9:c.instructions+=12;goto B4441c9;
case 0x4441ce:c.instructions+=11;goto B4441ce;
case 0x4441cf:c.instructions+=10;goto B4441cf;
case 0x4441d3:c.instructions+=9;goto B4441d3;
case 0x4441d7:c.instructions+=8;goto B4441d7;
case 0x4441d8:c.instructions+=7;goto B4441d8;
case 0x4441dc:c.instructions+=6;goto B4441dc;
case 0x4441df:c.instructions+=5;goto B4441df;
case 0x4441e0:c.instructions+=4;goto B4441e0;
case 0x4441e2:c.instructions+=3;goto B4441e2;
case 0x4441e4:c.instructions+=2;goto B4441e4;
case 0x4441e6:c.instructions+=1;goto B4441e6;
case 0x4441eb:goto L4441eb;
case 0x4441ef:c.instructions+=11;goto B4441ef;
case 0x4441f1:c.instructions+=10;goto B4441f1;
case 0x4441f5:c.instructions+=9;goto B4441f5;
case 0x4441fd:c.instructions+=8;goto B4441fd;
case 0x444201:c.instructions+=7;goto B444201;
case 0x444205:c.instructions+=6;goto B444205;
case 0x444208:c.instructions+=5;goto B444208;
case 0x44420c:c.instructions+=4;goto B44420c;
case 0x444210:c.instructions+=3;goto B444210;
case 0x444213:c.instructions+=2;goto B444213;
case 0x444217:c.instructions+=1;goto B444217;
case 0x444219:goto L444219;
case 0x44421c:c.instructions+=1;goto B44421c;
case 0x444220:goto L444220;
case 0x444224:c.instructions+=16;goto B444224;
case 0x44422a:c.instructions+=15;goto B44422a;
case 0x44422c:c.instructions+=14;goto B44422c;
case 0x44422e:c.instructions+=13;goto B44422e;
case 0x444230:c.instructions+=12;goto B444230;
case 0x444234:c.instructions+=11;goto B444234;
case 0x444238:c.instructions+=10;goto B444238;
case 0x44423c:c.instructions+=9;goto B44423c;
case 0x444240:c.instructions+=8;goto B444240;
case 0x444243:c.instructions+=7;goto B444243;
case 0x444247:c.instructions+=6;goto B444247;
case 0x44424b:c.instructions+=5;goto B44424b;
case 0x44424f:c.instructions+=4;goto B44424f;
case 0x444253:c.instructions+=3;goto B444253;
case 0x444256:c.instructions+=2;goto B444256;
case 0x44425a:c.instructions+=1;goto B44425a;
case 0x444260:goto L444260;
case 0x444263:c.instructions+=2;goto B444263;
case 0x444267:c.instructions+=1;goto B444267;
case 0x444270:goto L444270;
case 0x444272:c.instructions+=5;goto B444272;
case 0x444276:c.instructions+=4;goto B444276;
case 0x44427c:c.instructions+=3;goto B44427c;
case 0x444282:c.instructions+=2;goto B444282;
case 0x444284:c.instructions+=1;goto B444284;
case 0x444286:goto L444286;
case 0x44428a:c.instructions+=5;goto B44428a;
case 0x44428b:c.instructions+=4;goto B44428b;
case 0x44428f:c.instructions+=3;goto B44428f;
case 0x444290:c.instructions+=2;goto B444290;
case 0x444292:c.instructions+=1;goto B444292;
case 0x444297:goto L444297;
case 0x444299:c.instructions+=1;goto B444299;
case 0x44429b:goto L44429b;
case 0x44429f:c.instructions+=1;goto B44429f;
case 0x4442a1:goto L4442a1;
case 0x4442a5:c.instructions+=2;goto B4442a5;
case 0x4442a7:c.instructions+=1;goto B4442a7;
case 0x4442aa:goto L4442aa;
case 0x4442ac:goto L4442ac;
case 0x4442b2:goto L4442b2;
case 0x4442b6:c.instructions+=4;goto B4442b6;
case 0x4442bc:c.instructions+=3;goto B4442bc;
case 0x4442be:c.instructions+=2;goto B4442be;
case 0x4442c1:c.instructions+=1;goto B4442c1;
case 0x4442c3:goto L4442c3;
case 0x4442c7:c.instructions+=4;goto B4442c7;
case 0x4442c9:c.instructions+=3;goto B4442c9;
case 0x4442cb:c.instructions+=2;goto B4442cb;
case 0x4442ce:c.instructions+=1;goto B4442ce;
case 0x4442d0:goto L4442d0;
case 0x4442d4:c.instructions+=9;goto B4442d4;
case 0x4442d5:c.instructions+=8;goto B4442d5;
case 0x4442d8:c.instructions+=7;goto B4442d8;
case 0x4442dc:c.instructions+=6;goto B4442dc;
case 0x4442df:c.instructions+=5;goto B4442df;
case 0x4442e0:c.instructions+=4;goto B4442e0;
case 0x4442e1:c.instructions+=3;goto B4442e1;
case 0x4442e5:c.instructions+=2;goto B4442e5;
case 0x4442e6:c.instructions+=1;goto B4442e6;
case 0x4442eb:goto L4442eb;
case 0x4442ef:c.instructions+=4;goto B4442ef;
case 0x4442f2:c.instructions+=3;goto B4442f2;
case 0x4442f3:c.instructions+=2;goto B4442f3;
case 0x4442f7:c.instructions+=1;goto B4442f7;
case 0x4442f9:goto L4442f9;
case 0x4442fb:goto L4442fb;
case 0x4442ff:c.instructions+=7;goto B4442ff;
case 0x444302:c.instructions+=6;goto B444302;
case 0x444308:c.instructions+=5;goto B444308;
case 0x444309:c.instructions+=4;goto B444309;
case 0x44430c:c.instructions+=3;goto B44430c;
case 0x44430e:c.instructions+=2;goto B44430e;
case 0x444312:c.instructions+=1;goto B444312;
case 0x444318:goto L444318;
case 0x44431c:c.instructions+=2;goto B44431c;
case 0x44431e:c.instructions+=1;goto B44431e;
case 0x444320:goto L444320;
case 0x444324:c.instructions+=10;goto B444324;
case 0x444325:c.instructions+=9;goto B444325;
case 0x444329:c.instructions+=8;goto B444329;
case 0x44432d:c.instructions+=7;goto B44432d;
case 0x444333:c.instructions+=6;goto B444333;
case 0x444337:c.instructions+=5;goto B444337;
case 0x44433a:c.instructions+=4;goto B44433a;
case 0x44433b:c.instructions+=3;goto B44433b;
case 0x44433c:c.instructions+=2;goto B44433c;
case 0x44433d:c.instructions+=1;goto B44433d;
case 0x444342:goto L444342;
case 0x444346:c.instructions+=5;goto B444346;
case 0x444349:c.instructions+=4;goto B444349;
case 0x44434a:c.instructions+=3;goto B44434a;
case 0x44434d:c.instructions+=2;goto B44434d;
case 0x444351:c.instructions+=1;goto B444351;
case 0x444357:goto L444357;
case 0x44435a:c.instructions+=14;goto B44435a;
case 0x44435e:c.instructions+=13;goto B44435e;
case 0x444362:c.instructions+=12;goto B444362;
case 0x444364:c.instructions+=11;goto B444364;
case 0x444368:c.instructions+=10;goto B444368;
case 0x444369:c.instructions+=9;goto B444369;
case 0x44436a:c.instructions+=8;goto B44436a;
case 0x44436d:c.instructions+=7;goto B44436d;
case 0x444370:c.instructions+=6;goto B444370;
case 0x444377:c.instructions+=5;goto B444377;
case 0x44437b:c.instructions+=4;goto B44437b;
case 0x44437c:c.instructions+=3;goto B44437c;
case 0x44437e:c.instructions+=2;goto B44437e;
case 0x44437f:c.instructions+=1;goto B44437f;
case 0x444390:goto L444390;
case 0x444391:c.instructions+=25;goto B444391;
case 0x444393:c.instructions+=24;goto B444393;
case 0x444396:c.instructions+=23;goto B444396;
case 0x44439c:c.instructions+=22;goto B44439c;
case 0x44439d:c.instructions+=21;goto B44439d;
case 0x4443a0:c.instructions+=20;goto B4443a0;
case 0x4443a1:c.instructions+=19;goto B4443a1;
case 0x4443a4:c.instructions+=18;goto B4443a4;
case 0x4443a5:c.instructions+=17;goto B4443a5;
case 0x4443a8:c.instructions+=16;goto B4443a8;
case 0x4443ab:c.instructions+=15;goto B4443ab;
case 0x4443af:c.instructions+=14;goto B4443af;
case 0x4443b1:c.instructions+=13;goto B4443b1;
case 0x4443b2:c.instructions+=12;goto B4443b2;
case 0x4443b6:c.instructions+=11;goto B4443b6;
case 0x4443b7:c.instructions+=10;goto B4443b7;
case 0x4443ba:c.instructions+=9;goto B4443ba;
case 0x4443be:c.instructions+=8;goto B4443be;
case 0x4443c0:c.instructions+=7;goto B4443c0;
case 0x4443c1:c.instructions+=6;goto B4443c1;
case 0x4443c5:c.instructions+=5;goto B4443c5;
case 0x4443c8:c.instructions+=4;goto B4443c8;
case 0x4443c9:c.instructions+=3;goto B4443c9;
case 0x4443cb:c.instructions+=2;goto B4443cb;
case 0x4443cf:c.instructions+=1;goto B4443cf;
case 0x4443d4:goto L4443d4;
case 0x4443d8:c.instructions+=4;goto B4443d8;
case 0x4443d9:c.instructions+=3;goto B4443d9;
case 0x4443e0:c.instructions+=2;goto B4443e0;
case 0x4443e1:c.instructions+=1;goto B4443e1;
case 0x4443e6:goto L4443e6;
case 0x4443ed:c.instructions+=80;goto B4443ed;
case 0x4443f0:c.instructions+=79;goto B4443f0;
case 0x4443f3:c.instructions+=78;goto B4443f3;
case 0x4443f7:c.instructions+=77;goto B4443f7;
case 0x4443fa:c.instructions+=76;goto B4443fa;
case 0x4443fc:c.instructions+=75;goto B4443fc;
case 0x444400:c.instructions+=74;goto B444400;
case 0x444402:c.instructions+=73;goto B444402;
case 0x444404:c.instructions+=72;goto B444404;
case 0x44440b:c.instructions+=71;goto B44440b;
case 0x44440f:c.instructions+=70;goto B44440f;
case 0x444412:c.instructions+=69;goto B444412;
case 0x444419:c.instructions+=68;goto B444419;
case 0x44441c:c.instructions+=67;goto B44441c;
case 0x44441e:c.instructions+=66;goto B44441e;
case 0x444422:c.instructions+=65;goto B444422;
case 0x444424:c.instructions+=64;goto B444424;
case 0x444426:c.instructions+=63;goto B444426;
case 0x44442d:c.instructions+=62;goto B44442d;
case 0x444434:c.instructions+=61;goto B444434;
case 0x444437:c.instructions+=60;goto B444437;
case 0x44443e:c.instructions+=59;goto B44443e;
case 0x444441:c.instructions+=58;goto B444441;
case 0x444443:c.instructions+=57;goto B444443;
case 0x444447:c.instructions+=56;goto B444447;
case 0x444449:c.instructions+=55;goto B444449;
case 0x44444b:c.instructions+=54;goto B44444b;
case 0x444452:c.instructions+=53;goto B444452;
case 0x444456:c.instructions+=52;goto B444456;
case 0x44445a:c.instructions+=51;goto B44445a;
case 0x44445c:c.instructions+=50;goto B44445c;
case 0x444460:c.instructions+=49;goto B444460;
case 0x444464:c.instructions+=48;goto B444464;
case 0x444468:c.instructions+=47;goto B444468;
case 0x44446a:c.instructions+=46;goto B44446a;
case 0x44446e:c.instructions+=45;goto B44446e;
case 0x444472:c.instructions+=44;goto B444472;
case 0x444476:c.instructions+=43;goto B444476;
case 0x444479:c.instructions+=42;goto B444479;
case 0x44447b:c.instructions+=41;goto B44447b;
case 0x444482:c.instructions+=40;goto B444482;
case 0x444484:c.instructions+=39;goto B444484;
case 0x44448b:c.instructions+=38;goto B44448b;
case 0x44448f:c.instructions+=37;goto B44448f;
case 0x444491:c.instructions+=36;goto B444491;
case 0x444498:c.instructions+=35;goto B444498;
case 0x44449c:c.instructions+=34;goto B44449c;
case 0x44449e:c.instructions+=33;goto B44449e;
case 0x4444a5:c.instructions+=32;goto B4444a5;
case 0x4444ac:c.instructions+=31;goto B4444ac;
case 0x4444ae:c.instructions+=30;goto B4444ae;
case 0x4444b5:c.instructions+=29;goto B4444b5;
case 0x4444b9:c.instructions+=28;goto B4444b9;
case 0x4444bd:c.instructions+=27;goto B4444bd;
case 0x4444be:c.instructions+=26;goto B4444be;
case 0x4444c2:c.instructions+=25;goto B4444c2;
case 0x4444c4:c.instructions+=24;goto B4444c4;
case 0x4444c5:c.instructions+=23;goto B4444c5;
case 0x4444cc:c.instructions+=22;goto B4444cc;
case 0x4444cd:c.instructions+=21;goto B4444cd;
case 0x4444d1:c.instructions+=20;goto B4444d1;
case 0x4444d2:c.instructions+=19;goto B4444d2;
case 0x4444d4:c.instructions+=18;goto B4444d4;
case 0x4444db:c.instructions+=17;goto B4444db;
case 0x4444e2:c.instructions+=16;goto B4444e2;
case 0x4444e4:c.instructions+=15;goto B4444e4;
case 0x4444eb:c.instructions+=14;goto B4444eb;
case 0x4444ef:c.instructions+=13;goto B4444ef;
case 0x4444f1:c.instructions+=12;goto B4444f1;
case 0x4444f8:c.instructions+=11;goto B4444f8;
case 0x4444fc:c.instructions+=10;goto B4444fc;
case 0x4444fe:c.instructions+=9;goto B4444fe;
case 0x444505:c.instructions+=8;goto B444505;
case 0x444509:c.instructions+=7;goto B444509;
case 0x44450d:c.instructions+=6;goto B44450d;
case 0x44450f:c.instructions+=5;goto B44450f;
case 0x444513:c.instructions+=4;goto B444513;
case 0x444517:c.instructions+=3;goto B444517;
case 0x44451b:c.instructions+=2;goto B44451b;
case 0x44451d:c.instructions+=1;goto B44451d;
case 0x444522:goto L444522;
case 0x444525:c.instructions+=6;goto B444525;
case 0x444526:c.instructions+=5;goto B444526;
case 0x444527:c.instructions+=4;goto B444527;
case 0x444528:c.instructions+=3;goto B444528;
case 0x44452a:c.instructions+=2;goto B44452a;
case 0x44452b:c.instructions+=1;goto B44452b;
case 0x444530:goto L444530;
case 0x444531:c.instructions+=18;goto B444531;
case 0x444533:c.instructions+=17;goto B444533;
case 0x444536:c.instructions+=16;goto B444536;
case 0x444538:c.instructions+=15;goto B444538;
case 0x44453d:c.instructions+=14;goto B44453d;
case 0x444543:c.instructions+=13;goto B444543;
case 0x444544:c.instructions+=12;goto B444544;
case 0x44454b:c.instructions+=11;goto B44454b;
case 0x444551:c.instructions+=10;goto B444551;
case 0x444552:c.instructions+=9;goto B444552;
case 0x444555:c.instructions+=8;goto B444555;
case 0x444556:c.instructions+=7;goto B444556;
case 0x444557:c.instructions+=6;goto B444557;
case 0x44455e:c.instructions+=5;goto B44455e;
case 0x444560:c.instructions+=4;goto B444560;
case 0x444561:c.instructions+=3;goto B444561;
case 0x444562:c.instructions+=2;goto B444562;
case 0x444566:c.instructions+=1;goto B444566;
case 0x44456b:goto L44456b;
case 0x44456e:c.instructions+=4;goto B44456e;
case 0x444571:c.instructions+=3;goto B444571;
case 0x444574:c.instructions+=2;goto B444574;
case 0x444576:c.instructions+=1;goto B444576;
case 0x444578:goto L444578;
case 0x44457b:c.instructions+=6;goto B44457b;
case 0x44457d:c.instructions+=5;goto B44457d;
case 0x444580:c.instructions+=4;goto B444580;
case 0x444582:c.instructions+=3;goto B444582;
case 0x444586:c.instructions+=2;goto B444586;
case 0x44458a:c.instructions+=1;goto B44458a;
case 0x44458c:goto L44458c;
case 0x44458f:c.instructions+=2;goto B44458f;
case 0x444591:c.instructions+=1;goto B444591;
case 0x444593:goto L444593;
case 0x444598:c.instructions+=6;goto B444598;
case 0x444599:c.instructions+=5;goto B444599;
case 0x44459f:c.instructions+=4;goto B44459f;
case 0x4445a0:c.instructions+=3;goto B4445a0;
case 0x4445a4:c.instructions+=2;goto B4445a4;
case 0x4445a5:c.instructions+=1;goto B4445a5;
case 0x4445aa:goto L4445aa;
case 0x4445ad:c.instructions+=15;goto B4445ad;
case 0x4445b0:c.instructions+=14;goto B4445b0;
case 0x4445b3:c.instructions+=13;goto B4445b3;
case 0x4445b5:c.instructions+=12;goto B4445b5;
case 0x4445b9:c.instructions+=11;goto B4445b9;
case 0x4445bd:c.instructions+=10;goto B4445bd;
case 0x4445c0:c.instructions+=9;goto B4445c0;
case 0x4445c4:c.instructions+=8;goto B4445c4;
case 0x4445c8:c.instructions+=7;goto B4445c8;
case 0x4445ca:c.instructions+=6;goto B4445ca;
case 0x4445ce:c.instructions+=5;goto B4445ce;
case 0x4445d0:c.instructions+=4;goto B4445d0;
case 0x4445d4:c.instructions+=3;goto B4445d4;
case 0x4445d8:c.instructions+=2;goto B4445d8;
case 0x4445dc:c.instructions+=1;goto B4445dc;
case 0x4445de:goto L4445de;
case 0x4445e1:c.instructions+=5;goto B4445e1;
case 0x4445e4:c.instructions+=4;goto B4445e4;
case 0x4445e7:c.instructions+=3;goto B4445e7;
case 0x4445e9:c.instructions+=2;goto B4445e9;
case 0x4445ed:c.instructions+=1;goto B4445ed;
case 0x4445f1:goto L4445f1;
case 0x4445f3:c.instructions+=2;goto B4445f3;
case 0x4445f7:c.instructions+=1;goto B4445f7;
case 0x4445fb:goto L4445fb;
case 0x444602:c.instructions+=16;goto B444602;
case 0x444607:c.instructions+=15;goto B444607;
case 0x44460d:c.instructions+=14;goto B44460d;
case 0x444611:c.instructions+=13;goto B444611;
case 0x444612:c.instructions+=12;goto B444612;
case 0x444616:c.instructions+=11;goto B444616;
case 0x44461a:c.instructions+=10;goto B44461a;
case 0x44461b:c.instructions+=9;goto B44461b;
case 0x444622:c.instructions+=8;goto B444622;
case 0x444626:c.instructions+=7;goto B444626;
case 0x44462c:c.instructions+=6;goto B44462c;
case 0x44462d:c.instructions+=5;goto B44462d;
case 0x444631:c.instructions+=4;goto B444631;
case 0x444638:c.instructions+=3;goto B444638;
case 0x44463e:c.instructions+=2;goto B44463e;
case 0x444642:c.instructions+=1;goto B444642;
case 0x444647:goto L444647;
case 0x44464e:c.instructions+=4;goto B44464e;
case 0x44464f:c.instructions+=3;goto B44464f;
case 0x444653:c.instructions+=2;goto B444653;
case 0x444654:c.instructions+=1;goto B444654;
case 0x444659:goto L444659;
case 0x44465f:c.instructions+=5;goto B44465f;
case 0x444662:c.instructions+=4;goto B444662;
case 0x444669:c.instructions+=3;goto B444669;
case 0x44466f:c.instructions+=2;goto B44466f;
case 0x444673:c.instructions+=1;goto B444673;
case 0x444678:goto L444678;
case 0x44467a:c.instructions+=2;goto B44467a;
case 0x444685:c.instructions+=1;goto B444685;
case 0x444687:goto L444687;
case 0x44468d:c.instructions+=2;goto B44468d;
case 0x44468f:c.instructions+=1;goto B44468f;
case 0x444691:goto L444691;
case 0x444697:c.instructions+=3;goto B444697;
case 0x444699:c.instructions+=2;goto B444699;
case 0x4446a0:c.instructions+=1;goto B4446a0;
case 0x4446a2:goto L4446a2;
case 0x4446a8:c.instructions+=1;goto B4446a8;
case 0x4446af:goto L4446af;
case 0x4446b1:goto L4446b1;
case 0x4446b4:c.instructions+=1;goto B4446b4;
case 0x4446b8:goto L4446b8;
case 0x4446bc:c.instructions+=6;goto B4446bc;
case 0x4446be:c.instructions+=5;goto B4446be;
case 0x4446bf:c.instructions+=4;goto B4446bf;
case 0x4446c3:c.instructions+=3;goto B4446c3;
case 0x4446c4:c.instructions+=2;goto B4446c4;
case 0x4446cb:c.instructions+=1;goto B4446cb;
case 0x4446d0:goto L4446d0;
case 0x4446d4:c.instructions+=52;goto B4446d4;
case 0x4446d7:c.instructions+=51;goto B4446d7;
case 0x4446db:c.instructions+=50;goto B4446db;
case 0x4446df:c.instructions+=49;goto B4446df;
case 0x4446e0:c.instructions+=48;goto B4446e0;
case 0x4446e3:c.instructions+=47;goto B4446e3;
case 0x4446ea:c.instructions+=46;goto B4446ea;
case 0x4446eb:c.instructions+=45;goto B4446eb;
case 0x4446ef:c.instructions+=44;goto B4446ef;
case 0x4446f1:c.instructions+=43;goto B4446f1;
case 0x4446f2:c.instructions+=42;goto B4446f2;
case 0x4446f6:c.instructions+=41;goto B4446f6;
case 0x4446fd:c.instructions+=40;goto B4446fd;
case 0x4446ff:c.instructions+=39;goto B4446ff;
case 0x444700:c.instructions+=38;goto B444700;
case 0x444702:c.instructions+=37;goto B444702;
case 0x44470a:c.instructions+=36;goto B44470a;
case 0x44470c:c.instructions+=35;goto B44470c;
case 0x444714:c.instructions+=34;goto B444714;
case 0x444717:c.instructions+=33;goto B444717;
case 0x44471b:c.instructions+=32;goto B44471b;
case 0x44471e:c.instructions+=31;goto B44471e;
case 0x444722:c.instructions+=30;goto B444722;
case 0x444725:c.instructions+=29;goto B444725;
case 0x444727:c.instructions+=28;goto B444727;
case 0x44472b:c.instructions+=27;goto B44472b;
case 0x44472e:c.instructions+=26;goto B44472e;
case 0x444730:c.instructions+=25;goto B444730;
case 0x444733:c.instructions+=24;goto B444733;
case 0x444737:c.instructions+=23;goto B444737;
case 0x44473a:c.instructions+=22;goto B44473a;
case 0x44473e:c.instructions+=21;goto B44473e;
case 0x444741:c.instructions+=20;goto B444741;
case 0x444743:c.instructions+=19;goto B444743;
case 0x444747:c.instructions+=18;goto B444747;
case 0x44474a:c.instructions+=17;goto B44474a;
case 0x44474c:c.instructions+=16;goto B44474c;
case 0x44474f:c.instructions+=15;goto B44474f;
case 0x444753:c.instructions+=14;goto B444753;
case 0x444755:c.instructions+=13;goto B444755;
case 0x44475c:c.instructions+=12;goto B44475c;
case 0x444760:c.instructions+=11;goto B444760;
case 0x444768:c.instructions+=10;goto B444768;
case 0x44476e:c.instructions+=9;goto B44476e;
case 0x444770:c.instructions+=8;goto B444770;
case 0x444774:c.instructions+=7;goto B444774;
case 0x444776:c.instructions+=6;goto B444776;
case 0x44477a:c.instructions+=5;goto B44477a;
case 0x44477e:c.instructions+=4;goto B44477e;
case 0x444785:c.instructions+=3;goto B444785;
case 0x44478c:c.instructions+=2;goto B44478c;
case 0x444793:c.instructions+=1;goto B444793;
case 0x444798:goto L444798;
case 0x44479a:c.instructions+=11;goto B44479a;
case 0x4447a1:c.instructions+=10;goto B4447a1;
case 0x4447a5:c.instructions+=9;goto B4447a5;
case 0x4447a9:c.instructions+=8;goto B4447a9;
case 0x4447b0:c.instructions+=7;goto B4447b0;
case 0x4447b7:c.instructions+=6;goto B4447b7;
case 0x4447bb:c.instructions+=5;goto B4447bb;
case 0x4447c2:c.instructions+=4;goto B4447c2;
case 0x4447c9:c.instructions+=3;goto B4447c9;
case 0x4447cd:c.instructions+=2;goto B4447cd;
case 0x4447d4:c.instructions+=1;goto B4447d4;
case 0x4447da:goto L4447da;
case 0x4447e1:c.instructions+=26;goto B4447e1;
case 0x4447e5:c.instructions+=25;goto B4447e5;
case 0x4447e9:c.instructions+=24;goto B4447e9;
case 0x4447ea:c.instructions+=23;goto B4447ea;
case 0x4447f1:c.instructions+=22;goto B4447f1;
case 0x4447f8:c.instructions+=21;goto B4447f8;
case 0x4447fc:c.instructions+=20;goto B4447fc;
case 0x4447fd:c.instructions+=19;goto B4447fd;
case 0x444804:c.instructions+=18;goto B444804;
case 0x444806:c.instructions+=17;goto B444806;
case 0x44480a:c.instructions+=16;goto B44480a;
case 0x44480e:c.instructions+=15;goto B44480e;
case 0x444810:c.instructions+=14;goto B444810;
case 0x444812:c.instructions+=13;goto B444812;
case 0x444816:c.instructions+=12;goto B444816;
case 0x444818:c.instructions+=11;goto B444818;
case 0x44481a:c.instructions+=10;goto B44481a;
case 0x44481c:c.instructions+=9;goto B44481c;
case 0x444820:c.instructions+=8;goto B444820;
case 0x444822:c.instructions+=7;goto B444822;
case 0x444826:c.instructions+=6;goto B444826;
case 0x44482a:c.instructions+=5;goto B44482a;
case 0x44482e:c.instructions+=4;goto B44482e;
case 0x444832:c.instructions+=3;goto B444832;
case 0x444834:c.instructions+=2;goto B444834;
case 0x444838:c.instructions+=1;goto B444838;
case 0x44483d:goto L44483d;
case 0x44483f:c.instructions+=1;goto B44483f;
case 0x444844:goto L444844;
case 0x444846:c.instructions+=29;goto B444846;
case 0x444849:c.instructions+=28;goto B444849;
case 0x44484c:c.instructions+=27;goto B44484c;
case 0x444850:c.instructions+=26;goto B444850;
case 0x444854:c.instructions+=25;goto B444854;
case 0x444856:c.instructions+=24;goto B444856;
case 0x44485a:c.instructions+=23;goto B44485a;
case 0x44485e:c.instructions+=22;goto B44485e;
case 0x444860:c.instructions+=21;goto B444860;
case 0x444862:c.instructions+=20;goto B444862;
case 0x444864:c.instructions+=19;goto B444864;
case 0x444868:c.instructions+=18;goto B444868;
case 0x44486c:c.instructions+=17;goto B44486c;
case 0x44486e:c.instructions+=16;goto B44486e;
case 0x444870:c.instructions+=15;goto B444870;
case 0x444872:c.instructions+=14;goto B444872;
case 0x444874:c.instructions+=13;goto B444874;
case 0x444876:c.instructions+=12;goto B444876;
case 0x44487a:c.instructions+=11;goto B44487a;
case 0x44487e:c.instructions+=10;goto B44487e;
case 0x444880:c.instructions+=9;goto B444880;
case 0x444882:c.instructions+=8;goto B444882;
case 0x444884:c.instructions+=7;goto B444884;
case 0x444886:c.instructions+=6;goto B444886;
case 0x44488c:c.instructions+=5;goto B44488c;
case 0x444890:c.instructions+=4;goto B444890;
case 0x444892:c.instructions+=3;goto B444892;
case 0x444894:c.instructions+=2;goto B444894;
case 0x444897:c.instructions+=1;goto B444897;
case 0x444899:goto L444899;
case 0x44489d:c.instructions+=10;goto B44489d;
case 0x4448a1:c.instructions+=9;goto B4448a1;
case 0x4448a3:c.instructions+=8;goto B4448a3;
case 0x4448a5:c.instructions+=7;goto B4448a5;
case 0x4448a7:c.instructions+=6;goto B4448a7;
case 0x4448a9:c.instructions+=5;goto B4448a9;
case 0x4448ab:c.instructions+=4;goto B4448ab;
case 0x4448ad:c.instructions+=3;goto B4448ad;
case 0x4448b1:c.instructions+=2;goto B4448b1;
case 0x4448b8:c.instructions+=1;goto B4448b8;
case 0x4448ba:goto L4448ba;
case 0x4448bc:goto L4448bc;
case 0x4448c0:c.instructions+=8;goto B4448c0;
case 0x4448c1:c.instructions+=7;goto B4448c1;
case 0x4448c5:c.instructions+=6;goto B4448c5;
case 0x4448c6:c.instructions+=5;goto B4448c6;
case 0x4448cd:c.instructions+=4;goto B4448cd;
case 0x4448ce:c.instructions+=3;goto B4448ce;
case 0x4448cf:c.instructions+=2;goto B4448cf;
case 0x4448d1:c.instructions+=1;goto B4448d1;
case 0x4448d6:goto L4448d6;
case 0x4448dd:c.instructions+=2;goto B4448dd;
case 0x4448e8:c.instructions+=1;goto B4448e8;
case 0x4448ed:goto L4448ed;
case 0x4448f4:c.instructions+=8;goto B4448f4;
case 0x4448f8:c.instructions+=7;goto B4448f8;
case 0x4448f9:c.instructions+=6;goto B4448f9;
case 0x4448fa:c.instructions+=5;goto B4448fa;
case 0x444901:c.instructions+=4;goto B444901;
case 0x444902:c.instructions+=3;goto B444902;
case 0x444904:c.instructions+=2;goto B444904;
case 0x444905:c.instructions+=1;goto B444905;
case 0x444910:goto L444910;
case 0x444911:c.instructions+=20;goto B444911;
case 0x444914:c.instructions+=19;goto B444914;
case 0x44491b:c.instructions+=18;goto B44491b;
case 0x444922:c.instructions+=17;goto B444922;
case 0x444926:c.instructions+=16;goto B444926;
case 0x44492a:c.instructions+=15;goto B44492a;
case 0x44492e:c.instructions+=14;goto B44492e;
case 0x444932:c.instructions+=13;goto B444932;
case 0x444937:c.instructions+=12;goto B444937;
case 0x44493b:c.instructions+=11;goto B44493b;
case 0x44493d:c.instructions+=10;goto B44493d;
case 0x444943:c.instructions+=9;goto B444943;
case 0x444945:c.instructions+=8;goto B444945;
case 0x444947:c.instructions+=7;goto B444947;
case 0x44494a:c.instructions+=6;goto B44494a;
case 0x44494e:c.instructions+=5;goto B44494e;
case 0x444950:c.instructions+=4;goto B444950;
case 0x444953:c.instructions+=3;goto B444953;
case 0x444955:c.instructions+=2;goto B444955;
case 0x444958:c.instructions+=1;goto B444958;
case 0x44495a:goto L44495a;
case 0x44495e:goto L44495e;
case 0x444962:c.instructions+=6;goto B444962;
case 0x444966:c.instructions+=5;goto B444966;
case 0x444969:c.instructions+=4;goto B444969;
case 0x44496c:c.instructions+=3;goto B44496c;
case 0x44496e:c.instructions+=2;goto B44496e;
case 0x444971:c.instructions+=1;goto B444971;
case 0x444973:goto L444973;
case 0x444977:goto L444977;
case 0x444978:c.instructions+=1;goto B444978;
case 0x444980:goto L444980;
case 0x444981:c.instructions+=17;goto B444981;
case 0x444983:c.instructions+=16;goto B444983;
case 0x444986:c.instructions+=15;goto B444986;
case 0x444989:c.instructions+=14;goto B444989;
case 0x44498a:c.instructions+=13;goto B44498a;
case 0x44498b:c.instructions+=12;goto B44498b;
case 0x44498d:c.instructions+=11;goto B44498d;
case 0x444990:c.instructions+=10;goto B444990;
case 0x444996:c.instructions+=9;goto B444996;
case 0x444997:c.instructions+=8;goto B444997;
case 0x444998:c.instructions+=7;goto B444998;
case 0x44499e:c.instructions+=6;goto B44499e;
case 0x44499f:c.instructions+=5;goto B44499f;
case 0x4449a2:c.instructions+=4;goto B4449a2;
case 0x4449a3:c.instructions+=3;goto B4449a3;
case 0x4449a7:c.instructions+=2;goto B4449a7;
case 0x4449a8:c.instructions+=1;goto B4449a8;
case 0x4449ad:goto L4449ad;
case 0x4449b0:c.instructions+=3;goto B4449b0;
case 0x4449b3:c.instructions+=2;goto B4449b3;
case 0x4449b5:c.instructions+=1;goto B4449b5;
case 0x4449b7:goto L4449b7;
case 0x4449bb:c.instructions+=5;goto B4449bb;
case 0x4449bc:c.instructions+=4;goto B4449bc;
case 0x4449c0:c.instructions+=3;goto B4449c0;
case 0x4449c1:c.instructions+=2;goto B4449c1;
case 0x4449c2:c.instructions+=1;goto B4449c2;
case 0x4449c7:goto L4449c7;
case 0x4449ca:goto L4449ca;
case 0x4449cd:c.instructions+=4;goto B4449cd;
case 0x4449d1:c.instructions+=3;goto B4449d1;
case 0x4449d2:c.instructions+=2;goto B4449d2;
case 0x4449d4:c.instructions+=1;goto B4449d4;
case 0x4449d9:goto L4449d9;
case 0x4449dc:c.instructions+=8;goto B4449dc;
case 0x4449e2:c.instructions+=7;goto B4449e2;
case 0x4449e7:c.instructions+=6;goto B4449e7;
case 0x4449ea:c.instructions+=5;goto B4449ea;
case 0x4449ed:c.instructions+=4;goto B4449ed;
case 0x4449f0:c.instructions+=3;goto B4449f0;
case 0x4449f2:c.instructions+=2;goto B4449f2;
case 0x4449f6:c.instructions+=1;goto B4449f6;
case 0x4449f8:goto L4449f8;
case 0x4449fa:c.instructions+=6;goto B4449fa;
case 0x4449fc:c.instructions+=5;goto B4449fc;
case 0x4449fe:c.instructions+=4;goto B4449fe;
case 0x444a01:c.instructions+=3;goto B444a01;
case 0x444a04:c.instructions+=2;goto B444a04;
case 0x444a08:c.instructions+=1;goto B444a08;
case 0x444a0c:goto L444a0c;
case 0x444a0e:c.instructions+=12;goto B444a0e;
case 0x444a10:c.instructions+=11;goto B444a10;
case 0x444a13:c.instructions+=10;goto B444a13;
case 0x444a17:c.instructions+=9;goto B444a17;
case 0x444a1b:c.instructions+=8;goto B444a1b;
case 0x444a23:c.instructions+=7;goto B444a23;
case 0x444a27:c.instructions+=6;goto B444a27;
case 0x444a2b:c.instructions+=5;goto B444a2b;
case 0x444a2f:c.instructions+=4;goto B444a2f;
case 0x444a33:c.instructions+=3;goto B444a33;
case 0x444a37:c.instructions+=2;goto B444a37;
case 0x444a3b:c.instructions+=1;goto B444a3b;
case 0x444a3d:goto L444a3d;
case 0x444a41:c.instructions+=5;goto B444a41;
case 0x444a42:c.instructions+=4;goto B444a42;
case 0x444a46:c.instructions+=3;goto B444a46;
case 0x444a47:c.instructions+=2;goto B444a47;
case 0x444a48:c.instructions+=1;goto B444a48;
case 0x444a4d:goto L444a4d;
case 0x444a50:goto L444a50;
case 0x444a54:c.instructions+=3;goto B444a54;
case 0x444a55:c.instructions+=2;goto B444a55;
case 0x444a57:c.instructions+=1;goto B444a57;
case 0x444a5c:goto L444a5c;
case 0x444a5d:c.instructions+=5;goto B444a5d;
case 0x444a5e:c.instructions+=4;goto B444a5e;
case 0x444a5f:c.instructions+=3;goto B444a5f;
case 0x444a61:c.instructions+=2;goto B444a61;
case 0x444a62:c.instructions+=1;goto B444a62;
case 0x444a70:goto L444a70;
case 0x444a71:c.instructions+=17;goto B444a71;
case 0x444a73:c.instructions+=16;goto B444a73;
case 0x444a76:c.instructions+=15;goto B444a76;
case 0x444a79:c.instructions+=14;goto B444a79;
case 0x444a7a:c.instructions+=13;goto B444a7a;
case 0x444a7b:c.instructions+=12;goto B444a7b;
case 0x444a7d:c.instructions+=11;goto B444a7d;
case 0x444a80:c.instructions+=10;goto B444a80;
case 0x444a86:c.instructions+=9;goto B444a86;
case 0x444a87:c.instructions+=8;goto B444a87;
case 0x444a88:c.instructions+=7;goto B444a88;
case 0x444a8e:c.instructions+=6;goto B444a8e;
case 0x444a8f:c.instructions+=5;goto B444a8f;
case 0x444a92:c.instructions+=4;goto B444a92;
case 0x444a93:c.instructions+=3;goto B444a93;
case 0x444a97:c.instructions+=2;goto B444a97;
case 0x444a98:c.instructions+=1;goto B444a98;
case 0x444a9d:goto L444a9d;
case 0x444aa0:c.instructions+=3;goto B444aa0;
case 0x444aa3:c.instructions+=2;goto B444aa3;
case 0x444aa5:c.instructions+=1;goto B444aa5;
case 0x444aa7:goto L444aa7;
case 0x444aab:c.instructions+=5;goto B444aab;
case 0x444aac:c.instructions+=4;goto B444aac;
case 0x444ab0:c.instructions+=3;goto B444ab0;
case 0x444ab1:c.instructions+=2;goto B444ab1;
case 0x444ab2:c.instructions+=1;goto B444ab2;
case 0x444ab7:goto L444ab7;
case 0x444aba:goto L444aba;
case 0x444abd:c.instructions+=4;goto B444abd;
case 0x444ac1:c.instructions+=3;goto B444ac1;
case 0x444ac2:c.instructions+=2;goto B444ac2;
case 0x444ac4:c.instructions+=1;goto B444ac4;
case 0x444ac9:goto L444ac9;
case 0x444acc:c.instructions+=8;goto B444acc;
case 0x444ad2:c.instructions+=7;goto B444ad2;
case 0x444ad7:c.instructions+=6;goto B444ad7;
case 0x444ada:c.instructions+=5;goto B444ada;
case 0x444add:c.instructions+=4;goto B444add;
case 0x444ae0:c.instructions+=3;goto B444ae0;
case 0x444ae2:c.instructions+=2;goto B444ae2;
case 0x444ae6:c.instructions+=1;goto B444ae6;
case 0x444ae8:goto L444ae8;
case 0x444aea:c.instructions+=6;goto B444aea;
case 0x444aec:c.instructions+=5;goto B444aec;
case 0x444aee:c.instructions+=4;goto B444aee;
case 0x444af1:c.instructions+=3;goto B444af1;
case 0x444af4:c.instructions+=2;goto B444af4;
case 0x444af8:c.instructions+=1;goto B444af8;
case 0x444afc:goto L444afc;
case 0x444afe:c.instructions+=12;goto B444afe;
case 0x444b00:c.instructions+=11;goto B444b00;
case 0x444b03:c.instructions+=10;goto B444b03;
case 0x444b07:c.instructions+=9;goto B444b07;
case 0x444b0b:c.instructions+=8;goto B444b0b;
case 0x444b13:c.instructions+=7;goto B444b13;
case 0x444b17:c.instructions+=6;goto B444b17;
case 0x444b1b:c.instructions+=5;goto B444b1b;
case 0x444b1f:c.instructions+=4;goto B444b1f;
case 0x444b23:c.instructions+=3;goto B444b23;
case 0x444b27:c.instructions+=2;goto B444b27;
case 0x444b2b:c.instructions+=1;goto B444b2b;
case 0x444b2d:goto L444b2d;
case 0x444b31:c.instructions+=5;goto B444b31;
case 0x444b32:c.instructions+=4;goto B444b32;
case 0x444b36:c.instructions+=3;goto B444b36;
case 0x444b37:c.instructions+=2;goto B444b37;
case 0x444b38:c.instructions+=1;goto B444b38;
case 0x444b3d:goto L444b3d;
case 0x444b40:goto L444b40;
case 0x444b44:c.instructions+=3;goto B444b44;
case 0x444b45:c.instructions+=2;goto B444b45;
case 0x444b47:c.instructions+=1;goto B444b47;
case 0x444b4c:goto L444b4c;
case 0x444b4d:c.instructions+=5;goto B444b4d;
case 0x444b4e:c.instructions+=4;goto B444b4e;
case 0x444b4f:c.instructions+=3;goto B444b4f;
case 0x444b51:c.instructions+=2;goto B444b51;
case 0x444b52:c.instructions+=1;goto B444b52;
case 0x444b60:goto L444b60;
case 0x444b64:c.instructions+=10;goto B444b64;
case 0x444b65:c.instructions+=9;goto B444b65;
case 0x444b69:c.instructions+=8;goto B444b69;
case 0x444b6a:c.instructions+=7;goto B444b6a;
case 0x444b6b:c.instructions+=6;goto B444b6b;
case 0x444b6f:c.instructions+=5;goto B444b6f;
case 0x444b70:c.instructions+=4;goto B444b70;
case 0x444b71:c.instructions+=3;goto B444b71;
case 0x444b72:c.instructions+=2;goto B444b72;
case 0x444b74:c.instructions+=1;goto B444b74;
case 0x444b79:goto L444b79;
case 0x444b7d:c.instructions+=5;goto B444b7d;
case 0x444b7e:c.instructions+=4;goto B444b7e;
case 0x444b7f:c.instructions+=3;goto B444b7f;
case 0x444b80:c.instructions+=2;goto B444b80;
case 0x444b82:c.instructions+=1;goto B444b82;
case 0x444b87:goto L444b87;
case 0x444b88:c.instructions+=3;goto B444b88;
case 0x444b89:c.instructions+=2;goto B444b89;
case 0x444b8a:c.instructions+=1;goto B444b8a;
case 0x444b90:goto L444b90;
case 0x444b96:c.instructions+=2;goto B444b96;
case 0x444b98:c.instructions+=1;goto B444b98;
case 0x444b9a:goto L444b9a;
case 0x444b9d:c.instructions+=1;goto B444b9d;
case 0x444b9e:goto L444b9e;
case 0x444ba1:c.instructions+=2;goto B444ba1;
case 0x444ba4:c.instructions+=1;goto B444ba4;
case 0x444bb0:goto L444bb0;
case 0x444bb1:c.instructions+=4;goto B444bb1;
case 0x444bb3:c.instructions+=3;goto B444bb3;
case 0x444bb9:c.instructions+=2;goto B444bb9;
case 0x444bbb:c.instructions+=1;goto B444bbb;
case 0x444bc1:goto L444bc1;
case 0x444bc7:c.instructions+=3;goto B444bc7;
case 0x444bc9:c.instructions+=2;goto B444bc9;
case 0x444bca:c.instructions+=1;goto B444bca;
case 0x444bcf:goto L444bcf;
case 0x444bd5:c.instructions+=3;goto B444bd5;
case 0x444bd7:c.instructions+=2;goto B444bd7;
case 0x444bd8:c.instructions+=1;goto B444bd8;
case 0x444bdd:goto L444bdd;
case 0x444be3:c.instructions+=3;goto B444be3;
case 0x444be5:c.instructions+=2;goto B444be5;
case 0x444be6:c.instructions+=1;goto B444be6;
case 0x444beb:goto L444beb;
case 0x444bf1:c.instructions+=3;goto B444bf1;
case 0x444bf3:c.instructions+=2;goto B444bf3;
case 0x444bf4:c.instructions+=1;goto B444bf4;
case 0x444bf9:goto L444bf9;
case 0x444bff:c.instructions+=3;goto B444bff;
case 0x444c01:c.instructions+=2;goto B444c01;
case 0x444c02:c.instructions+=1;goto B444c02;
case 0x444c07:goto L444c07;
case 0x444c0d:c.instructions+=3;goto B444c0d;
case 0x444c0f:c.instructions+=2;goto B444c0f;
case 0x444c10:c.instructions+=1;goto B444c10;
case 0x444c15:goto L444c15;
case 0x444c1b:c.instructions+=3;goto B444c1b;
case 0x444c1d:c.instructions+=2;goto B444c1d;
case 0x444c1e:c.instructions+=1;goto B444c1e;
case 0x444c23:goto L444c23;
case 0x444c29:c.instructions+=3;goto B444c29;
case 0x444c2b:c.instructions+=2;goto B444c2b;
case 0x444c2c:c.instructions+=1;goto B444c2c;
case 0x444c31:goto L444c31;
case 0x444c37:c.instructions+=4;goto B444c37;
case 0x444c3a:c.instructions+=3;goto B444c3a;
case 0x444c3c:c.instructions+=2;goto B444c3c;
case 0x444c3d:c.instructions+=1;goto B444c3d;
case 0x444c42:goto L444c42;
case 0x444c45:c.instructions+=1;goto B444c45;
case 0x444c4f:goto L444c4f;
case 0x444c50:c.instructions+=1;goto B444c50;
case 0x444c60:goto L444c60;
case 0x444c64:c.instructions+=6;goto B444c64;
case 0x444c66:c.instructions+=5;goto B444c66;
case 0x444c67:c.instructions+=4;goto B444c67;
case 0x444c68:c.instructions+=3;goto B444c68;
case 0x444c6a:c.instructions+=2;goto B444c6a;
case 0x444c6f:c.instructions+=1;goto B444c6f;
case 0x444c71:goto L444c71;
case 0x444c73:goto L444c73;
case 0x444c76:c.instructions+=15;goto B444c76;
case 0x444c79:c.instructions+=14;goto B444c79;
case 0x444c7c:c.instructions+=13;goto B444c7c;
case 0x444c7f:c.instructions+=12;goto B444c7f;
case 0x444c82:c.instructions+=11;goto B444c82;
case 0x444c85:c.instructions+=10;goto B444c85;
case 0x444c88:c.instructions+=9;goto B444c88;
case 0x444c8b:c.instructions+=8;goto B444c8b;
case 0x444c8e:c.instructions+=7;goto B444c8e;
case 0x444c90:c.instructions+=6;goto B444c90;
case 0x444c92:c.instructions+=5;goto B444c92;
case 0x444c94:c.instructions+=4;goto B444c94;
case 0x444c98:c.instructions+=3;goto B444c98;
case 0x444c9a:c.instructions+=2;goto B444c9a;
case 0x444c9f:c.instructions+=1;goto B444c9f;
case 0x444ca0:goto L444ca0;
case 0x444ca3:c.instructions+=10;goto B444ca3;
case 0x444ca6:c.instructions+=9;goto B444ca6;
case 0x444ca8:c.instructions+=8;goto B444ca8;
case 0x444cab:c.instructions+=7;goto B444cab;
case 0x444cac:c.instructions+=6;goto B444cac;
case 0x444caf:c.instructions+=5;goto B444caf;
case 0x444cb2:c.instructions+=4;goto B444cb2;
case 0x444cb4:c.instructions+=3;goto B444cb4;
case 0x444cb7:c.instructions+=2;goto B444cb7;
case 0x444cbb:c.instructions+=1;goto B444cbb;
case 0x444cbd:goto L444cbd;
case 0x444cbe:c.instructions+=2;goto B444cbe;
case 0x444cbf:c.instructions+=1;goto B444cbf;
case 0x444cd0:goto L444cd0;
case 0x444cd6:c.instructions+=2;goto B444cd6;
case 0x444cd8:c.instructions+=1;goto B444cd8;
case 0x444cda:goto L444cda;
case 0x444cdd:c.instructions+=1;goto B444cdd;
case 0x444cde:goto L444cde;
case 0x444ce1:c.instructions+=2;goto B444ce1;
case 0x444ce4:c.instructions+=1;goto B444ce4;
case 0x444cf0:goto L444cf0;
case 0x444cf1:c.instructions+=40;goto B444cf1;
case 0x444cf3:c.instructions+=39;goto B444cf3;
case 0x444cf6:c.instructions+=38;goto B444cf6;
case 0x444cf9:c.instructions+=37;goto B444cf9;
case 0x444cfc:c.instructions+=36;goto B444cfc;
case 0x444cff:c.instructions+=35;goto B444cff;
case 0x444d01:c.instructions+=34;goto B444d01;
case 0x444d03:c.instructions+=33;goto B444d03;
case 0x444d06:c.instructions+=32;goto B444d06;
case 0x444d08:c.instructions+=31;goto B444d08;
case 0x444d0c:c.instructions+=30;goto B444d0c;
case 0x444d0f:c.instructions+=29;goto B444d0f;
case 0x444d12:c.instructions+=28;goto B444d12;
case 0x444d14:c.instructions+=27;goto B444d14;
case 0x444d18:c.instructions+=26;goto B444d18;
case 0x444d1b:c.instructions+=25;goto B444d1b;
case 0x444d1d:c.instructions+=24;goto B444d1d;
case 0x444d1f:c.instructions+=23;goto B444d1f;
case 0x444d23:c.instructions+=22;goto B444d23;
case 0x444d26:c.instructions+=21;goto B444d26;
case 0x444d28:c.instructions+=20;goto B444d28;
case 0x444d2c:c.instructions+=19;goto B444d2c;
case 0x444d2f:c.instructions+=18;goto B444d2f;
case 0x444d32:c.instructions+=17;goto B444d32;
case 0x444d34:c.instructions+=16;goto B444d34;
case 0x444d38:c.instructions+=15;goto B444d38;
case 0x444d3a:c.instructions+=14;goto B444d3a;
case 0x444d3e:c.instructions+=13;goto B444d3e;
case 0x444d40:c.instructions+=12;goto B444d40;
case 0x444d42:c.instructions+=11;goto B444d42;
case 0x444d44:c.instructions+=10;goto B444d44;
case 0x444d46:c.instructions+=9;goto B444d46;
case 0x444d4a:c.instructions+=8;goto B444d4a;
case 0x444d4e:c.instructions+=7;goto B444d4e;
case 0x444d51:c.instructions+=6;goto B444d51;
case 0x444d55:c.instructions+=5;goto B444d55;
case 0x444d59:c.instructions+=4;goto B444d59;
case 0x444d5c:c.instructions+=3;goto B444d5c;
case 0x444d5e:c.instructions+=2;goto B444d5e;
case 0x444d5f:c.instructions+=1;goto B444d5f;
case 0x444d70:goto L444d70;
case 0x444d72:c.instructions+=24;goto B444d72;
case 0x444d76:c.instructions+=23;goto B444d76;
case 0x444d78:c.instructions+=22;goto B444d78;
case 0x444d7a:c.instructions+=21;goto B444d7a;
case 0x444d7d:c.instructions+=20;goto B444d7d;
case 0x444d80:c.instructions+=19;goto B444d80;
case 0x444d83:c.instructions+=18;goto B444d83;
case 0x444d86:c.instructions+=17;goto B444d86;
case 0x444d88:c.instructions+=16;goto B444d88;
case 0x444d8b:c.instructions+=15;goto B444d8b;
case 0x444d8e:c.instructions+=14;goto B444d8e;
case 0x444d91:c.instructions+=13;goto B444d91;
case 0x444d94:c.instructions+=12;goto B444d94;
case 0x444d97:c.instructions+=11;goto B444d97;
case 0x444d9a:c.instructions+=10;goto B444d9a;
case 0x444d9c:c.instructions+=9;goto B444d9c;
case 0x444d9f:c.instructions+=8;goto B444d9f;
case 0x444da2:c.instructions+=7;goto B444da2;
case 0x444da5:c.instructions+=6;goto B444da5;
case 0x444da8:c.instructions+=5;goto B444da8;
case 0x444dab:c.instructions+=4;goto B444dab;
case 0x444dae:c.instructions+=3;goto B444dae;
case 0x444db1:c.instructions+=2;goto B444db1;
case 0x444db4:c.instructions+=1;goto B444db4;
case 0x444dc0:goto L444dc0;
case 0x444dc6:c.instructions+=4;goto B444dc6;
case 0x444dcc:c.instructions+=3;goto B444dcc;
case 0x444dce:c.instructions+=2;goto B444dce;
case 0x444dd1:c.instructions+=1;goto B444dd1;
case 0x444dd3:goto L444dd3;
case 0x444dd8:c.instructions+=1;goto B444dd8;
case 0x444dd9:goto L444dd9;
case 0x444ddb:c.instructions+=1;goto B444ddb;
case 0x444de0:goto L444de0;
case 0x444de1:c.instructions+=29;goto B444de1;
case 0x444de3:c.instructions+=28;goto B444de3;
case 0x444de6:c.instructions+=27;goto B444de6;
case 0x444dec:c.instructions+=26;goto B444dec;
case 0x444ded:c.instructions+=25;goto B444ded;
case 0x444dee:c.instructions+=24;goto B444dee;
case 0x444df1:c.instructions+=23;goto B444df1;
case 0x444df4:c.instructions+=22;goto B444df4;
case 0x444df7:c.instructions+=21;goto B444df7;
case 0x444dfe:c.instructions+=20;goto B444dfe;
case 0x444e01:c.instructions+=19;goto B444e01;
case 0x444e08:c.instructions+=18;goto B444e08;
case 0x444e0f:c.instructions+=17;goto B444e0f;
case 0x444e12:c.instructions+=16;goto B444e12;
case 0x444e19:c.instructions+=15;goto B444e19;
case 0x444e1c:c.instructions+=14;goto B444e1c;
case 0x444e1d:c.instructions+=13;goto B444e1d;
case 0x444e20:c.instructions+=12;goto B444e20;
case 0x444e27:c.instructions+=11;goto B444e27;
case 0x444e2e:c.instructions+=10;goto B444e2e;
case 0x444e30:c.instructions+=9;goto B444e30;
case 0x444e31:c.instructions+=8;goto B444e31;
case 0x444e38:c.instructions+=7;goto B444e38;
case 0x444e3f:c.instructions+=6;goto B444e3f;
case 0x444e46:c.instructions+=5;goto B444e46;
case 0x444e4d:c.instructions+=4;goto B444e4d;
case 0x444e54:c.instructions+=3;goto B444e54;
case 0x444e5b:c.instructions+=2;goto B444e5b;
case 0x444e62:c.instructions+=1;goto B444e62;
case 0x444e67:goto L444e67;
case 0x444e6e:c.instructions+=9;goto B444e6e;
case 0x444e6f:c.instructions+=8;goto B444e6f;
case 0x444e76:c.instructions+=7;goto B444e76;
case 0x444e77:c.instructions+=6;goto B444e77;
case 0x444e7e:c.instructions+=5;goto B444e7e;
case 0x444e7f:c.instructions+=4;goto B444e7f;
case 0x444e8a:c.instructions+=3;goto B444e8a;
case 0x444e95:c.instructions+=2;goto B444e95;
case 0x444ea0:c.instructions+=1;goto B444ea0;
case 0x444ea5:goto L444ea5;
case 0x444eac:c.instructions+=6;goto B444eac;
case 0x444ead:c.instructions+=5;goto B444ead;
case 0x444eb4:c.instructions+=4;goto B444eb4;
case 0x444eb5:c.instructions+=3;goto B444eb5;
case 0x444ebc:c.instructions+=2;goto B444ebc;
case 0x444ebd:c.instructions+=1;goto B444ebd;
case 0x444ec2:goto L444ec2;
case 0x444ec9:c.instructions+=4;goto B444ec9;
case 0x444eca:c.instructions+=3;goto B444eca;
case 0x444ed1:c.instructions+=2;goto B444ed1;
case 0x444ed2:c.instructions+=1;goto B444ed2;
case 0x444ed7:goto L444ed7;
case 0x444ede:c.instructions+=4;goto B444ede;
case 0x444edf:c.instructions+=3;goto B444edf;
case 0x444ee6:c.instructions+=2;goto B444ee6;
case 0x444ee7:c.instructions+=1;goto B444ee7;
case 0x444eec:goto L444eec;
case 0x444ef3:c.instructions+=32;goto B444ef3;
case 0x444ef6:c.instructions+=31;goto B444ef6;
case 0x444efd:c.instructions+=30;goto B444efd;
case 0x444eff:c.instructions+=29;goto B444eff;
case 0x444f06:c.instructions+=28;goto B444f06;
case 0x444f09:c.instructions+=27;goto B444f09;
case 0x444f10:c.instructions+=26;goto B444f10;
case 0x444f13:c.instructions+=25;goto B444f13;
case 0x444f1a:c.instructions+=24;goto B444f1a;
case 0x444f1d:c.instructions+=23;goto B444f1d;
case 0x444f24:c.instructions+=22;goto B444f24;
case 0x444f27:c.instructions+=21;goto B444f27;
case 0x444f29:c.instructions+=20;goto B444f29;
case 0x444f2c:c.instructions+=19;goto B444f2c;
case 0x444f33:c.instructions+=18;goto B444f33;
case 0x444f36:c.instructions+=17;goto B444f36;
case 0x444f3d:c.instructions+=16;goto B444f3d;
case 0x444f40:c.instructions+=15;goto B444f40;
case 0x444f43:c.instructions+=14;goto B444f43;
case 0x444f46:c.instructions+=13;goto B444f46;
case 0x444f49:c.instructions+=12;goto B444f49;
case 0x444f50:c.instructions+=11;goto B444f50;
case 0x444f53:c.instructions+=10;goto B444f53;
case 0x444f56:c.instructions+=9;goto B444f56;
case 0x444f59:c.instructions+=8;goto B444f59;
case 0x444f5c:c.instructions+=7;goto B444f5c;
case 0x444f5f:c.instructions+=6;goto B444f5f;
case 0x444f66:c.instructions+=5;goto B444f66;
case 0x444f69:c.instructions+=4;goto B444f69;
case 0x444f6f:c.instructions+=3;goto B444f6f;
case 0x444f71:c.instructions+=2;goto B444f71;
case 0x444f74:c.instructions+=1;goto B444f74;
case 0x444f7a:goto L444f7a;
case 0x444f80:c.instructions+=1;goto B444f80;
case 0x444f85:goto L444f85;
case 0x444f87:c.instructions+=13;goto B444f87;
case 0x444f8c:c.instructions+=12;goto B444f8c;
case 0x444f8e:c.instructions+=11;goto B444f8e;
case 0x444f90:c.instructions+=10;goto B444f90;
case 0x444f93:c.instructions+=9;goto B444f93;
case 0x444f95:c.instructions+=8;goto B444f95;
case 0x444f98:c.instructions+=7;goto B444f98;
case 0x444f9a:c.instructions+=6;goto B444f9a;
case 0x444f9b:c.instructions+=5;goto B444f9b;
case 0x444fa2:c.instructions+=4;goto B444fa2;
case 0x444fa3:c.instructions+=3;goto B444fa3;
case 0x444fa7:c.instructions+=2;goto B444fa7;
case 0x444fa8:c.instructions+=1;goto B444fa8;
case 0x444fad:goto L444fad;
case 0x444fb1:c.instructions+=24;goto B444fb1;
case 0x444fb3:c.instructions+=23;goto B444fb3;
case 0x444fb7:c.instructions+=22;goto B444fb7;
case 0x444fba:c.instructions+=21;goto B444fba;
case 0x444fbc:c.instructions+=20;goto B444fbc;
case 0x444fc0:c.instructions+=19;goto B444fc0;
case 0x444fc3:c.instructions+=18;goto B444fc3;
case 0x444fc5:c.instructions+=17;goto B444fc5;
case 0x444fc9:c.instructions+=16;goto B444fc9;
case 0x444fcc:c.instructions+=15;goto B444fcc;
case 0x444fce:c.instructions+=14;goto B444fce;
case 0x444fd5:c.instructions+=13;goto B444fd5;
case 0x444fd9:c.instructions+=12;goto B444fd9;
case 0x444fdc:c.instructions+=11;goto B444fdc;
case 0x444fe0:c.instructions+=10;goto B444fe0;
case 0x444fe3:c.instructions+=9;goto B444fe3;
case 0x444fe5:c.instructions+=8;goto B444fe5;
case 0x444fe9:c.instructions+=7;goto B444fe9;
case 0x444fec:c.instructions+=6;goto B444fec;
case 0x444fee:c.instructions+=5;goto B444fee;
case 0x444ff2:c.instructions+=4;goto B444ff2;
case 0x444ff5:c.instructions+=3;goto B444ff5;
case 0x444ff7:c.instructions+=2;goto B444ff7;
case 0x444ffe:c.instructions+=1;goto B444ffe;
default:missing_instruction(c.pc);}
B444001:L444001:{c.instructions+=5;NFSU2_TR(0x444001);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444005:{NFSU2_TR(0x444005);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B444007:{NFSU2_TR(0x444007);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B444009:{NFSU2_TR(0x444009);
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
B44400c:{NFSU2_TR(0x44400c);
if(r1(R+514)){{goto L444014;}}
}
B44400e:L44400e:{c.instructions+=2;NFSU2_TR(0x44400e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444010:{NFSU2_TR(0x444010);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444014:L444014:{c.instructions+=6;NFSU2_TR(0x444014);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B444016:{NFSU2_TR(0x444016);
__builtin_memmove((R+0),(R+4),4);
}
B444018:{NFSU2_TR(0x444018);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44401a:{NFSU2_TR(0x44401a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44401d:{NFSU2_TR(0x44401d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444020:{NFSU2_TR(0x444020);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444030:L444030:{c.instructions+=3;NFSU2_TR(0x444030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444033:{NFSU2_TR(0x444033);
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
B444035:{NFSU2_TR(0x444035);
if(r1(R+518)){{goto L44403b;}}
}
B444037:L444037:{c.instructions+=2;NFSU2_TR(0x444037);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44403a:{NFSU2_TR(0x44403a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44403b:L44403b:{c.instructions+=2;NFSU2_TR(0x44403b);
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
B44403d:{NFSU2_TR(0x44403d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444040:L444040:{c.instructions+=5;NFSU2_TR(0x444040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444041:{NFSU2_TR(0x444041);
__builtin_memmove((R+24),(R+4),4);
}
B444043:{NFSU2_TR(0x444043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444046:{NFSU2_TR(0x444046);
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
B444048:{NFSU2_TR(0x444048);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L444091;}}
}
B44404a:L44404a:{c.instructions+=4;NFSU2_TR(0x44404a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444051:{NFSU2_TR(0x444051);
__builtin_memmove((R+0),gp(0x828640),4);
}
B444056:{NFSU2_TR(0x444056);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444058:{NFSU2_TR(0x444058);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44407b;}}
}
B44405a:L44405a:{c.instructions+=6;NFSU2_TR(0x44405a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44405d:{NFSU2_TR(0x44405d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444060:{NFSU2_TR(0x444060);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444066:{NFSU2_TR(0x444066);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44406b:{NFSU2_TR(0x44406b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44406d:{NFSU2_TR(0x44406d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44407b;}}
}
B44406f:L44406f:{c.instructions+=3;NFSU2_TR(0x44406f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444072:{NFSU2_TR(0x444072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444075:{NFSU2_TR(0x444075);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44407b:L44407b:{c.instructions+=3;NFSU2_TR(0x44407b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44407e:{NFSU2_TR(0x44407e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44407f:{NFSU2_TR(0x44407f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444084ull));
TAIL_STATIC(0x48f730u,48f);
}
B444084:L444084:{c.instructions+=2;NFSU2_TR(0x444084);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444087:{NFSU2_TR(0x444087);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444091:L444091:{c.instructions+=2;NFSU2_TR(0x444091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444092:{NFSU2_TR(0x444092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4440a0:L4440a0:{c.instructions+=3;NFSU2_TR(0x4440a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4440a3:{NFSU2_TR(0x4440a3);
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
B4440a5:{NFSU2_TR(0x4440a5);
if(r1(R+518)){{goto L4440cc;}}
}
B4440a7:L4440a7:{c.instructions+=9;NFSU2_TR(0x4440a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4440aa:{NFSU2_TR(0x4440aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4440b1:{NFSU2_TR(0x4440b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4440b7:{NFSU2_TR(0x4440b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4440ba:{NFSU2_TR(0x4440ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4440c0:{NFSU2_TR(0x4440c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4440c3:{NFSU2_TR(0x4440c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4440c4:{NFSU2_TR(0x4440c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4440c7:{NFSU2_TR(0x4440c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4440ccull));
TAIL_STATIC(0x48f760u,48f);
}
B4440cc:L4440cc:{c.instructions+=1;NFSU2_TR(0x4440cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4440d0:L4440d0:{c.instructions+=20;NFSU2_TR(0x4440d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4440d1:{NFSU2_TR(0x4440d1);
__builtin_memmove((R+20),(R+16),4);
}
B4440d3:{NFSU2_TR(0x4440d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4440d6:{NFSU2_TR(0x4440d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B4440d9:{NFSU2_TR(0x4440d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4440dc:{NFSU2_TR(0x4440dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4440df:{NFSU2_TR(0x4440df);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4440e1:{NFSU2_TR(0x4440e1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4440e3:{NFSU2_TR(0x4440e3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4440e7:{NFSU2_TR(0x4440e7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4440ea:{NFSU2_TR(0x4440ea);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4440ed:{NFSU2_TR(0x4440ed);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4440f1:{NFSU2_TR(0x4440f1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4440f4:{NFSU2_TR(0x4440f4);
__builtin_memmove((R+0),(R+16),4);
}
B4440f8:{NFSU2_TR(0x4440f8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4440fb:{NFSU2_TR(0x4440fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4440fc:{NFSU2_TR(0x4440fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444100:{NFSU2_TR(0x444100);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444101:{NFSU2_TR(0x444101);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444105:{NFSU2_TR(0x444105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44410aull));
TAIL_STATIC(0x43cf10u,43c);
}
B44410a:L44410a:{c.instructions+=7;NFSU2_TR(0x44410a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44410d:{NFSU2_TR(0x44410d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44410e:{NFSU2_TR(0x44410e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444112:{NFSU2_TR(0x444112);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444113:{NFSU2_TR(0x444113);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444117:{NFSU2_TR(0x444117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444118:{NFSU2_TR(0x444118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44411dull));
TAIL_STATIC(0x5ba8b0u,5ba);
}
B44411d:L44411d:{c.instructions+=24;NFSU2_TR(0x44411d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444121:{NFSU2_TR(0x444121);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444125:{NFSU2_TR(0x444125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444128:{NFSU2_TR(0x444128);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44412b:{NFSU2_TR(0x44412b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444131:{NFSU2_TR(0x444131);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444135:{NFSU2_TR(0x444135);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444139:{NFSU2_TR(0x444139);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44413d:{NFSU2_TR(0x44413d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444141:{NFSU2_TR(0x444141);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444147:{NFSU2_TR(0x444147);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44414b:{NFSU2_TR(0x44414b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44414f:{NFSU2_TR(0x44414f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444153:{NFSU2_TR(0x444153);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444157:{NFSU2_TR(0x444157);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44415d:{NFSU2_TR(0x44415d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444161:{NFSU2_TR(0x444161);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444165:{NFSU2_TR(0x444165);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B444167:{NFSU2_TR(0x444167);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444169:{NFSU2_TR(0x444169);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44416c:{NFSU2_TR(0x44416c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44416f:{NFSU2_TR(0x44416f);
__builtin_memmove((R+16),(R+20),4);
}
B444171:{NFSU2_TR(0x444171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B444172:{NFSU2_TR(0x444172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444180:L444180:{c.instructions+=2;NFSU2_TR(0x444180);
{u32 ea_=u32(u32(7893136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444186:{NFSU2_TR(0x444186);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444190:L444190:{c.instructions+=12;NFSU2_TR(0x444190);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444191:{NFSU2_TR(0x444191);
__builtin_memmove((R+20),(R+16),4);
}
B444193:{NFSU2_TR(0x444193);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B444196:{NFSU2_TR(0x444196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B444199:{NFSU2_TR(0x444199);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44419a:{NFSU2_TR(0x44419a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44419b:{NFSU2_TR(0x44419b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44419e:{NFSU2_TR(0x44419e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4441a1:{NFSU2_TR(0x4441a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4441a3:{NFSU2_TR(0x4441a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4441a4:{NFSU2_TR(0x4441a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4441a8:{NFSU2_TR(0x4441a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4441b5;}}
}
B4441aa:L4441aa:{c.instructions+=7;NFSU2_TR(0x4441aa);
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
B4441ac:{NFSU2_TR(0x4441ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4441ad:{NFSU2_TR(0x4441ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4441ae:{NFSU2_TR(0x4441ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4441af:{NFSU2_TR(0x4441af);
__builtin_memmove((R+16),(R+20),4);
}
B4441b1:{NFSU2_TR(0x4441b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4441b2:{NFSU2_TR(0x4441b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4441b5:L4441b5:{c.instructions+=18;NFSU2_TR(0x4441b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4441b8:{NFSU2_TR(0x4441b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4441ba:{NFSU2_TR(0x4441ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4441bd:{NFSU2_TR(0x4441bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4441c0:{NFSU2_TR(0x4441c0);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4441c5:{NFSU2_TR(0x4441c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4441c9:{NFSU2_TR(0x4441c9);
__builtin_memmove((R+0),gp(0x7870a0),4);
}
B4441ce:{NFSU2_TR(0x4441ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4441cf:{NFSU2_TR(0x4441cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4441d3:{NFSU2_TR(0x4441d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4441d7:{NFSU2_TR(0x4441d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4441d8:{NFSU2_TR(0x4441d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4441dc:{NFSU2_TR(0x4441dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4441df:{NFSU2_TR(0x4441df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4441e0:{NFSU2_TR(0x4441e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4441e2:{NFSU2_TR(0x4441e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4441e4:{NFSU2_TR(0x4441e4);
__builtin_memmove((R+4),(R+24),4);
}
B4441e6:{NFSU2_TR(0x4441e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4441ebull));
TAIL_STATIC(0x5d39f0u,5d3);
}
B4441eb:L4441eb:{c.instructions+=12;NFSU2_TR(0x4441eb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4441ef:{NFSU2_TR(0x4441ef);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4441f1:{NFSU2_TR(0x4441f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4441f5:{NFSU2_TR(0x4441f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4441fd:{NFSU2_TR(0x4441fd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444201:{NFSU2_TR(0x444201);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444205:{NFSU2_TR(0x444205);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444208:{NFSU2_TR(0x444208);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44420c:{NFSU2_TR(0x44420c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444210:{NFSU2_TR(0x444210);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444213:{NFSU2_TR(0x444213);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444217:{NFSU2_TR(0x444217);
{goto L444220;}
}
B444219:L444219:{c.instructions+=2;NFSU2_TR(0x444219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44421c:{NFSU2_TR(0x44421c);
__builtin_memmove((R+16),(R+16),4);
}
B444220:L444220:{c.instructions+=17;NFSU2_TR(0x444220);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444224:{NFSU2_TR(0x444224);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44422a:{NFSU2_TR(0x44422a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44422c:{NFSU2_TR(0x44422c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44422e:{NFSU2_TR(0x44422e);
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
B444230:{NFSU2_TR(0x444230);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444234:{NFSU2_TR(0x444234);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444238:{NFSU2_TR(0x444238);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44423c:{NFSU2_TR(0x44423c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444240:{NFSU2_TR(0x444240);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444243:{NFSU2_TR(0x444243);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444247:{NFSU2_TR(0x444247);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44424b:{NFSU2_TR(0x44424b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44424f:{NFSU2_TR(0x44424f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444253:{NFSU2_TR(0x444253);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444256:{NFSU2_TR(0x444256);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44425a:{NFSU2_TR(0x44425a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L444357;}}
}
B444260:L444260:{c.instructions+=3;NFSU2_TR(0x444260);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3cull))));
}
B444263:{NFSU2_TR(0x444263);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444267:{NFSU2_TR(0x444267);
{goto L444270;}
}
B444270:L444270:{c.instructions+=6;NFSU2_TR(0x444270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B444272:{NFSU2_TR(0x444272);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B444276:{NFSU2_TR(0x444276);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44427c:{NFSU2_TR(0x44427c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x800eedull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B444282:{NFSU2_TR(0x444282);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B444284:{NFSU2_TR(0x444284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4442fb;}}
}
B444286:L444286:{c.instructions+=6;NFSU2_TR(0x444286);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44428a:{NFSU2_TR(0x44428a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44428b:{NFSU2_TR(0x44428b);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44428f:{NFSU2_TR(0x44428f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444290:{NFSU2_TR(0x444290);
__builtin_memmove((R+4),(R+24),4);
}
B444292:{NFSU2_TR(0x444292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444297ull));
TAIL_STATIC(0x5d35b0u,5d3);
}
B444297:L444297:{c.instructions+=2;NFSU2_TR(0x444297);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B444299:{NFSU2_TR(0x444299);
if(r1(R+518)){{goto L4442fb;}}
}
B44429b:L44429b:{c.instructions+=2;NFSU2_TR(0x44429b);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B44429f:{NFSU2_TR(0x44429f);
if(r1(R+518)){{goto L4442ac;}}
}
B4442a1:L4442a1:{c.instructions+=3;NFSU2_TR(0x4442a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4442a5:{NFSU2_TR(0x4442a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4442a7:{NFSU2_TR(0x4442a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4442aaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4442aa:L4442aa:{c.instructions+=1;NFSU2_TR(0x4442aa);
{goto L4442b2;}
}
B4442ac:L4442ac:{c.instructions+=1;NFSU2_TR(0x4442ac);
{u32 ea_=u32(u32(7893148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4442b2:L4442b2:{c.instructions+=5;NFSU2_TR(0x4442b2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4442b6:{NFSU2_TR(0x4442b6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4442bc:{NFSU2_TR(0x4442bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4442be:{NFSU2_TR(0x4442be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4442c1:{NFSU2_TR(0x4442c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4442f9;}}
}
B4442c3:L4442c3:{c.instructions+=5;NFSU2_TR(0x4442c3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4442c7:{NFSU2_TR(0x4442c7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4442c9:{NFSU2_TR(0x4442c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4442cb:{NFSU2_TR(0x4442cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4442ce:{NFSU2_TR(0x4442ce);
if(r1(R+514)){{goto L4442f9;}}
}
B4442d0:L4442d0:{c.instructions+=10;NFSU2_TR(0x4442d0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4442d4:{NFSU2_TR(0x4442d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4442d5:{NFSU2_TR(0x4442d5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x70ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4442d8:{NFSU2_TR(0x4442d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4442dc:{NFSU2_TR(0x4442dc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4442df:{NFSU2_TR(0x4442df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4442e0:{NFSU2_TR(0x4442e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4442e1:{NFSU2_TR(0x4442e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4442e5:{NFSU2_TR(0x4442e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4442e6:{NFSU2_TR(0x4442e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4442ebull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4442eb:L4442eb:{c.instructions+=5;NFSU2_TR(0x4442eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4442ef:{NFSU2_TR(0x4442ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4442f2:{NFSU2_TR(0x4442f2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4442f3:{NFSU2_TR(0x4442f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4442f7:{NFSU2_TR(0x4442f7);
{goto L4442fb;}
}
B4442f9:L4442f9:{c.instructions+=1;NFSU2_TR(0x4442f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4442fb:L4442fb:{c.instructions+=8;NFSU2_TR(0x4442fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4442ff:{NFSU2_TR(0x4442ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444302:{NFSU2_TR(0x444302);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444308:{NFSU2_TR(0x444308);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B444309:{NFSU2_TR(0x444309);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B44430c:{NFSU2_TR(0x44430c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44430e:{NFSU2_TR(0x44430e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444312:{NFSU2_TR(0x444312);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444270u);}goto L444270;}}
}
B444318:L444318:{c.instructions+=3;NFSU2_TR(0x444318);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44431c:{NFSU2_TR(0x44431c);
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
B44431e:{NFSU2_TR(0x44431e);
if(r1(R+518)){{goto L444357;}}
}
B444320:L444320:{c.instructions+=11;NFSU2_TR(0x444320);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B444324:{NFSU2_TR(0x444324);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444325:{NFSU2_TR(0x444325);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444329:{NFSU2_TR(0x444329);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44432d:{NFSU2_TR(0x44432d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B444333:{NFSU2_TR(0x444333);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444337:{NFSU2_TR(0x444337);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44433a:{NFSU2_TR(0x44433a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44433b:{NFSU2_TR(0x44433b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44433c:{NFSU2_TR(0x44433c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44433d:{NFSU2_TR(0x44433d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444342ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B444342:L444342:{c.instructions+=6;NFSU2_TR(0x444342);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444346:{NFSU2_TR(0x444346);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B444349:{NFSU2_TR(0x444349);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44434a:{NFSU2_TR(0x44434a);
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
B44434d:{NFSU2_TR(0x44434d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444351:{NFSU2_TR(0x444351);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444219u);}goto L444219;}}
}
B444357:L444357:{c.instructions+=15;NFSU2_TR(0x444357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44435a:{NFSU2_TR(0x44435a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44435e:{NFSU2_TR(0x44435e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444362:{NFSU2_TR(0x444362);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444364:{NFSU2_TR(0x444364);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444368:{NFSU2_TR(0x444368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B444369:{NFSU2_TR(0x444369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44436a:{NFSU2_TR(0x44436a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44436d:{NFSU2_TR(0x44436d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444370:{NFSU2_TR(0x444370);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444377:{NFSU2_TR(0x444377);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44437b:{NFSU2_TR(0x44437b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44437c:{NFSU2_TR(0x44437c);
__builtin_memmove((R+16),(R+20),4);
}
B44437e:{NFSU2_TR(0x44437e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44437f:{NFSU2_TR(0x44437f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444390:L444390:{c.instructions+=26;NFSU2_TR(0x444390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444391:{NFSU2_TR(0x444391);
__builtin_memmove((R+20),(R+16),4);
}
B444393:{NFSU2_TR(0x444393);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B444396:{NFSU2_TR(0x444396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc4ull))));
}
B44439c:{NFSU2_TR(0x44439c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44439d:{NFSU2_TR(0x44439d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4443a0:{NFSU2_TR(0x4443a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443a1:{NFSU2_TR(0x4443a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4443a4:{NFSU2_TR(0x4443a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443a5:{NFSU2_TR(0x4443a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4443a8:{NFSU2_TR(0x4443a8);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4443ab:{NFSU2_TR(0x4443ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4443af:{NFSU2_TR(0x4443af);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4443b1:{NFSU2_TR(0x4443b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443b2:{NFSU2_TR(0x4443b2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4443b6:{NFSU2_TR(0x4443b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443b7:{NFSU2_TR(0x4443b7);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4443ba:{NFSU2_TR(0x4443ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4443be:{NFSU2_TR(0x4443be);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4443c0:{NFSU2_TR(0x4443c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443c1:{NFSU2_TR(0x4443c1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4443c5:{NFSU2_TR(0x4443c5);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4443c8:{NFSU2_TR(0x4443c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443c9:{NFSU2_TR(0x4443c9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4443cb:{NFSU2_TR(0x4443cb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4443cf:{NFSU2_TR(0x4443cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4443d4ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B4443d4:L4443d4:{c.instructions+=5;NFSU2_TR(0x4443d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4443d8:{NFSU2_TR(0x4443d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443d9:{NFSU2_TR(0x4443d9);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4443e0:{NFSU2_TR(0x4443e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4443e1:{NFSU2_TR(0x4443e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4443e6ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B4443e6:L4443e6:{c.instructions+=81;NFSU2_TR(0x4443e6);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4443ed:{NFSU2_TR(0x4443ed);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4443f0:{NFSU2_TR(0x4443f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4443f3:{NFSU2_TR(0x4443f3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4443f7:{NFSU2_TR(0x4443f7);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4443fa:{NFSU2_TR(0x4443fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4443fc:{NFSU2_TR(0x4443fc);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444400:{NFSU2_TR(0x444400);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444402:{NFSU2_TR(0x444402);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444404:{NFSU2_TR(0x444404);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44440b:{NFSU2_TR(0x44440b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44440f:{NFSU2_TR(0x44440f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444412:{NFSU2_TR(0x444412);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444419:{NFSU2_TR(0x444419);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44441c:{NFSU2_TR(0x44441c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44441e:{NFSU2_TR(0x44441e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444422:{NFSU2_TR(0x444422);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444424:{NFSU2_TR(0x444424);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444426:{NFSU2_TR(0x444426);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44442d:{NFSU2_TR(0x44442d);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444434:{NFSU2_TR(0x444434);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444437:{NFSU2_TR(0x444437);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44443e:{NFSU2_TR(0x44443e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444441:{NFSU2_TR(0x444441);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444443:{NFSU2_TR(0x444443);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444447:{NFSU2_TR(0x444447);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444449:{NFSU2_TR(0x444449);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44444b:{NFSU2_TR(0x44444b);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444452:{NFSU2_TR(0x444452);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444456:{NFSU2_TR(0x444456);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44445a:{NFSU2_TR(0x44445a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44445c:{NFSU2_TR(0x44445c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444460:{NFSU2_TR(0x444460);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444464:{NFSU2_TR(0x444464);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444468:{NFSU2_TR(0x444468);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44446a:{NFSU2_TR(0x44446a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44446e:{NFSU2_TR(0x44446e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444472:{NFSU2_TR(0x444472);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444476:{NFSU2_TR(0x444476);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444479:{NFSU2_TR(0x444479);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B44447b:{NFSU2_TR(0x44447b);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444482:{NFSU2_TR(0x444482);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B444484:{NFSU2_TR(0x444484);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44448b:{NFSU2_TR(0x44448b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44448f:{NFSU2_TR(0x44448f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444491:{NFSU2_TR(0x444491);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444498:{NFSU2_TR(0x444498);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44449c:{NFSU2_TR(0x44449c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44449e:{NFSU2_TR(0x44449e);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4444a5:{NFSU2_TR(0x4444a5);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4444ac:{NFSU2_TR(0x4444ac);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B4444ae:{NFSU2_TR(0x4444ae);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4444b5:{NFSU2_TR(0x4444b5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4444b9:{NFSU2_TR(0x4444b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4444bd:{NFSU2_TR(0x4444bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4444be:{NFSU2_TR(0x4444be);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4444c2:{NFSU2_TR(0x4444c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4444c4:{NFSU2_TR(0x4444c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4444c5:{NFSU2_TR(0x4444c5);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4444cc:{NFSU2_TR(0x4444cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4444cd:{NFSU2_TR(0x4444cd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4444d1:{NFSU2_TR(0x4444d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4444d2:{NFSU2_TR(0x4444d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4444d4:{NFSU2_TR(0x4444d4);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4444db:{NFSU2_TR(0x4444db);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4444e2:{NFSU2_TR(0x4444e2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4444e4:{NFSU2_TR(0x4444e4);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4444eb:{NFSU2_TR(0x4444eb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4444ef:{NFSU2_TR(0x4444ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4444f1:{NFSU2_TR(0x4444f1);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4444f8:{NFSU2_TR(0x4444f8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4444fc:{NFSU2_TR(0x4444fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4444fe:{NFSU2_TR(0x4444fe);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444505:{NFSU2_TR(0x444505);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444509:{NFSU2_TR(0x444509);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44450d:{NFSU2_TR(0x44450d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44450f:{NFSU2_TR(0x44450f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444513:{NFSU2_TR(0x444513);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444517:{NFSU2_TR(0x444517);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44451b:{NFSU2_TR(0x44451b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44451d:{NFSU2_TR(0x44451d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444522ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B444522:L444522:{c.instructions+=7;NFSU2_TR(0x444522);
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
B444525:{NFSU2_TR(0x444525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B444526:{NFSU2_TR(0x444526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444527:{NFSU2_TR(0x444527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B444528:{NFSU2_TR(0x444528);
__builtin_memmove((R+16),(R+20),4);
}
B44452a:{NFSU2_TR(0x44452a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44452b:{NFSU2_TR(0x44452b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444530:L444530:{c.instructions+=19;NFSU2_TR(0x444530);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444531:{NFSU2_TR(0x444531);
__builtin_memmove((R+20),(R+16),4);
}
B444533:{NFSU2_TR(0x444533);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B444536:{NFSU2_TR(0x444536);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444538:{NFSU2_TR(0x444538);
u8 U[4];
w4(U+0,u32(0x77224bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44453d:{NFSU2_TR(0x44453d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444543:{NFSU2_TR(0x444543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444544:{NFSU2_TR(0x444544);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44454b:{NFSU2_TR(0x44454b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3e8ull))));
}
B444551:{NFSU2_TR(0x444551);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444552:{NFSU2_TR(0x444552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B444555:{NFSU2_TR(0x444555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444556:{NFSU2_TR(0x444556);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444557:{NFSU2_TR(0x444557);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44455e:{NFSU2_TR(0x44455e);
__builtin_memmove((R+28),(R+4),4);
}
B444560:{NFSU2_TR(0x444560);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444561:{NFSU2_TR(0x444561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444562:{NFSU2_TR(0x444562);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444566:{NFSU2_TR(0x444566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44456bull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44456b:L44456b:{c.instructions+=5;NFSU2_TR(0x44456b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44456e:{NFSU2_TR(0x44456e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B444571:{NFSU2_TR(0x444571);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B444574:{NFSU2_TR(0x444574);
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
B444576:{NFSU2_TR(0x444576);
if(r1(R+518)){{goto L44458c;}}
}
B444578:L444578:{c.instructions+=7;NFSU2_TR(0x444578);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44457b:{NFSU2_TR(0x44457b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44457d:{NFSU2_TR(0x44457d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444580:{NFSU2_TR(0x444580);
__builtin_memmove((R+8),(R+4),4);
}
B444582:{NFSU2_TR(0x444582);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444586:{NFSU2_TR(0x444586);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44458a:{NFSU2_TR(0x44458a);
{goto L4445f1;}
}
B44458c:L44458c:{c.instructions+=3;NFSU2_TR(0x44458c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44458f:{NFSU2_TR(0x44458f);
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
B444591:{NFSU2_TR(0x444591);
if(r1(R+518)){{goto L4445de;}}
}
B444593:L444593:{c.instructions+=7;NFSU2_TR(0x444593);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B444598:{NFSU2_TR(0x444598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444599:{NFSU2_TR(0x444599);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44459f:{NFSU2_TR(0x44459f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4445a0:{NFSU2_TR(0x4445a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4445a4:{NFSU2_TR(0x4445a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4445a5:{NFSU2_TR(0x4445a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4445aaull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4445aa:L4445aa:{c.instructions+=16;NFSU2_TR(0x4445aa);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4445ad:{NFSU2_TR(0x4445ad);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4445b0:{NFSU2_TR(0x4445b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4445b3:{NFSU2_TR(0x4445b3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4445b5:{NFSU2_TR(0x4445b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4445b9:{NFSU2_TR(0x4445b9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4445bd:{NFSU2_TR(0x4445bd);
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
B4445c0:{NFSU2_TR(0x4445c0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4445c4:{NFSU2_TR(0x4445c4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4445c8:{NFSU2_TR(0x4445c8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4445ca:{NFSU2_TR(0x4445ca);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4445ce:{NFSU2_TR(0x4445ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4445d0:{NFSU2_TR(0x4445d0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4445d4:{NFSU2_TR(0x4445d4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4445d8:{NFSU2_TR(0x4445d8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4445dc:{NFSU2_TR(0x4445dc);
{goto L4445fb;}
}
B4445de:L4445de:{c.instructions+=6;NFSU2_TR(0x4445de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4445e1:{NFSU2_TR(0x4445e1);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4445e4:{NFSU2_TR(0x4445e4);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4445e7:{NFSU2_TR(0x4445e7);
__builtin_memmove((R+4),(R+0),4);
}
B4445e9:{NFSU2_TR(0x4445e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4445ed:{NFSU2_TR(0x4445ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4445f1:L4445f1:{c.instructions+=3;NFSU2_TR(0x4445f1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4445f3:{NFSU2_TR(0x4445f3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4445f7:{NFSU2_TR(0x4445f7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4445fb:L4445fb:{c.instructions+=17;NFSU2_TR(0x4445fb);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444602:{NFSU2_TR(0x444602);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444607:{NFSU2_TR(0x444607);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44460d:{NFSU2_TR(0x44460d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444611:{NFSU2_TR(0x444611);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444612:{NFSU2_TR(0x444612);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444616:{NFSU2_TR(0x444616);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44461a:{NFSU2_TR(0x44461a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44461b:{NFSU2_TR(0x44461b);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444622:{NFSU2_TR(0x444622);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444626:{NFSU2_TR(0x444626);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44462c:{NFSU2_TR(0x44462c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44462d:{NFSU2_TR(0x44462d);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444631:{NFSU2_TR(0x444631);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444638:{NFSU2_TR(0x444638);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44463e:{NFSU2_TR(0x44463e);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444642:{NFSU2_TR(0x444642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444647ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B444647:L444647:{c.instructions+=5;NFSU2_TR(0x444647);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44464e:{NFSU2_TR(0x44464e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44464f:{NFSU2_TR(0x44464f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444653:{NFSU2_TR(0x444653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444654:{NFSU2_TR(0x444654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444659ull));
TAIL_STATIC(0x43ce10u,43c);
}
B444659:L444659:{c.instructions+=6;NFSU2_TR(0x444659);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44465f:{NFSU2_TR(0x44465f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B444662:{NFSU2_TR(0x444662);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444669:{NFSU2_TR(0x444669);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44466f:{NFSU2_TR(0x44466f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444673:{NFSU2_TR(0x444673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444678ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B444678:L444678:{c.instructions+=3;NFSU2_TR(0x444678);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44467a:{NFSU2_TR(0x44467a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3fcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444685:{NFSU2_TR(0x444685);
if(r1(R+518)){{goto L4446b8;}}
}
B444687:L444687:{c.instructions+=3;NFSU2_TR(0x444687);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44468d:{NFSU2_TR(0x44468d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44468f:{NFSU2_TR(0x44468f);
if(r1(R+518)){{goto L4446b8;}}
}
B444691:L444691:{c.instructions+=4;NFSU2_TR(0x444691);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444697:{NFSU2_TR(0x444697);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444699:{NFSU2_TR(0x444699);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4446a0:{NFSU2_TR(0x4446a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4446b8;}}
}
B4446a2:L4446a2:{c.instructions+=2;NFSU2_TR(0x4446a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4446a8:{NFSU2_TR(0x4446a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ccull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4446af:L4446af:{c.instructions+=1;NFSU2_TR(0x4446af);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4446b1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4446afu);}goto L4446af;}
}
B4446b1:L4446b1:{c.instructions+=2;NFSU2_TR(0x4446b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4446b4:{NFSU2_TR(0x4446b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4446b8:L4446b8:{c.instructions+=7;NFSU2_TR(0x4446b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4446bc:{NFSU2_TR(0x4446bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4446be:{NFSU2_TR(0x4446be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4446bf:{NFSU2_TR(0x4446bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4446c3:{NFSU2_TR(0x4446c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4446c4:{NFSU2_TR(0x4446c4);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4446cb:{NFSU2_TR(0x4446cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4446d0ull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B4446d0:L4446d0:{c.instructions+=53;NFSU2_TR(0x4446d0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4446d4:{NFSU2_TR(0x4446d4);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4446d7:{NFSU2_TR(0x4446d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4446db:{NFSU2_TR(0x4446db);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4446df:{NFSU2_TR(0x4446df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4446e0:{NFSU2_TR(0x4446e0);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4446e3:{NFSU2_TR(0x4446e3);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4446ea:{NFSU2_TR(0x4446ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4446eb:{NFSU2_TR(0x4446eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4446ef:{NFSU2_TR(0x4446ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4446f1:{NFSU2_TR(0x4446f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4446f2:{NFSU2_TR(0x4446f2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4446f6:{NFSU2_TR(0x4446f6);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4446fd:{NFSU2_TR(0x4446fd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4446ff:{NFSU2_TR(0x4446ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444700:{NFSU2_TR(0x444700);
__builtin_memmove((R+4),(R+28),4);
}
B444702:{NFSU2_TR(0x444702);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44470a:{NFSU2_TR(0x44470a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44470c:{NFSU2_TR(0x44470c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444714:{NFSU2_TR(0x444714);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444717:{NFSU2_TR(0x444717);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44471b:{NFSU2_TR(0x44471b);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44471e:{NFSU2_TR(0x44471e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444722:{NFSU2_TR(0x444722);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444725:{NFSU2_TR(0x444725);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444727:{NFSU2_TR(0x444727);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44472b:{NFSU2_TR(0x44472b);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44472e:{NFSU2_TR(0x44472e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444730:{NFSU2_TR(0x444730);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444733:{NFSU2_TR(0x444733);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444737:{NFSU2_TR(0x444737);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44473a:{NFSU2_TR(0x44473a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44473e:{NFSU2_TR(0x44473e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444741:{NFSU2_TR(0x444741);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444743:{NFSU2_TR(0x444743);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444747:{NFSU2_TR(0x444747);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44474a:{NFSU2_TR(0x44474a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44474c:{NFSU2_TR(0x44474c);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44474f:{NFSU2_TR(0x44474f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444753:{NFSU2_TR(0x444753);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444755:{NFSU2_TR(0x444755);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44475c:{NFSU2_TR(0x44475c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444760:{NFSU2_TR(0x444760);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444768:{NFSU2_TR(0x444768);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44476e:{NFSU2_TR(0x44476e);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B444770:{NFSU2_TR(0x444770);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444774:{NFSU2_TR(0x444774);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444776:{NFSU2_TR(0x444776);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44477a:{NFSU2_TR(0x44477a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44477e:{NFSU2_TR(0x44477e);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444785:{NFSU2_TR(0x444785);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44478c:{NFSU2_TR(0x44478c);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444793:{NFSU2_TR(0x444793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444798ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444190u);}goto L444190;}
}
B444798:L444798:{c.instructions+=12;NFSU2_TR(0x444798);
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
B44479a:{NFSU2_TR(0x44479a);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4447a1:{NFSU2_TR(0x4447a1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4447a5:{NFSU2_TR(0x4447a5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4447a9:{NFSU2_TR(0x4447a9);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4447b0:{NFSU2_TR(0x4447b0);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4447b7:{NFSU2_TR(0x4447b7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4447bb:{NFSU2_TR(0x4447bb);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4447c2:{NFSU2_TR(0x4447c2);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4447c9:{NFSU2_TR(0x4447c9);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4447cd:{NFSU2_TR(0x4447cd);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4447d4:{NFSU2_TR(0x4447d4);
if(r1(R+518)){{goto L4448bc;}}
}
B4447da:L4447da:{c.instructions+=27;NFSU2_TR(0x4447da);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4447e1:{NFSU2_TR(0x4447e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4447e5:{NFSU2_TR(0x4447e5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4447e9:{NFSU2_TR(0x4447e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4447ea:{NFSU2_TR(0x4447ea);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4447f1:{NFSU2_TR(0x4447f1);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4447f8:{NFSU2_TR(0x4447f8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4447fc:{NFSU2_TR(0x4447fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4447fd:{NFSU2_TR(0x4447fd);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444804:{NFSU2_TR(0x444804);
__builtin_memmove((R+4),(R+24),4);
}
B444806:{NFSU2_TR(0x444806);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44480a:{NFSU2_TR(0x44480a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44480e:{NFSU2_TR(0x44480e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B444810:{NFSU2_TR(0x444810);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B444812:{NFSU2_TR(0x444812);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444816:{NFSU2_TR(0x444816);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444818:{NFSU2_TR(0x444818);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44481a:{NFSU2_TR(0x44481a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44481c:{NFSU2_TR(0x44481c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444820:{NFSU2_TR(0x444820);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444822:{NFSU2_TR(0x444822);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444826:{NFSU2_TR(0x444826);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44482a:{NFSU2_TR(0x44482a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44482e:{NFSU2_TR(0x44482e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444832:{NFSU2_TR(0x444832);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B444834:{NFSU2_TR(0x444834);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444838:{NFSU2_TR(0x444838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44483dull));
TAIL_STATIC(0x5ec250u,5ec);
}
B44483d:L44483d:{c.instructions+=2;NFSU2_TR(0x44483d);
__builtin_memmove((R+4),(R+24),4);
}
B44483f:{NFSU2_TR(0x44483f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444844ull));
TAIL_STATIC(0x5ec240u,5ec);
}
B444844:L444844:{c.instructions+=30;NFSU2_TR(0x444844);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444846:{NFSU2_TR(0x444846);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444849:{NFSU2_TR(0x444849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44484c:{NFSU2_TR(0x44484c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444850:{NFSU2_TR(0x444850);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444854:{NFSU2_TR(0x444854);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B444856:{NFSU2_TR(0x444856);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44485a:{NFSU2_TR(0x44485a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44485e:{NFSU2_TR(0x44485e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B444860:{NFSU2_TR(0x444860);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B444862:{NFSU2_TR(0x444862);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444864:{NFSU2_TR(0x444864);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444868:{NFSU2_TR(0x444868);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44486c:{NFSU2_TR(0x44486c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44486e:{NFSU2_TR(0x44486e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B444870:{NFSU2_TR(0x444870);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B444872:{NFSU2_TR(0x444872);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B444874:{NFSU2_TR(0x444874);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444876:{NFSU2_TR(0x444876);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44487a:{NFSU2_TR(0x44487a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44487e:{NFSU2_TR(0x44487e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444880:{NFSU2_TR(0x444880);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B444882:{NFSU2_TR(0x444882);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444884:{NFSU2_TR(0x444884);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B444886:{NFSU2_TR(0x444886);
{u32 ea_=u32(u32(7893132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44488c:{NFSU2_TR(0x44488c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444890:{NFSU2_TR(0x444890);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B444892:{NFSU2_TR(0x444892);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B444894:{NFSU2_TR(0x444894);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B444897:{NFSU2_TR(0x444897);
if(r1(R+514)){{goto L4448ba;}}
}
B444899:L444899:{c.instructions+=11;NFSU2_TR(0x444899);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44489d:{NFSU2_TR(0x44489d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4448a1:{NFSU2_TR(0x4448a1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4448a3:{NFSU2_TR(0x4448a3);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B4448a5:{NFSU2_TR(0x4448a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4448a7:{NFSU2_TR(0x4448a7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4448a9:{NFSU2_TR(0x4448a9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4448ab:{NFSU2_TR(0x4448ab);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B4448ad:{NFSU2_TR(0x4448ad);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4448b1:{NFSU2_TR(0x4448b1);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4448b8:{NFSU2_TR(0x4448b8);
{goto L4448bc;}
}
B4448ba:L4448ba:{c.instructions+=1;NFSU2_TR(0x4448ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4448bc:L4448bc:{c.instructions+=9;NFSU2_TR(0x4448bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4448c0:{NFSU2_TR(0x4448c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4448c1:{NFSU2_TR(0x4448c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4448c5:{NFSU2_TR(0x4448c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4448c6:{NFSU2_TR(0x4448c6);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4448cd:{NFSU2_TR(0x4448cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4448ce:{NFSU2_TR(0x4448ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4448cf:{NFSU2_TR(0x4448cf);
__builtin_memmove((R+4),(R+28),4);
}
B4448d1:{NFSU2_TR(0x4448d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4448d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444390u);}goto L444390;}
}
B4448d6:L4448d6:{c.instructions+=3;NFSU2_TR(0x4448d6);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4448dd:{NFSU2_TR(0x4448dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3fcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4448e8:{NFSU2_TR(0x4448e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4448edull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B4448ed:L4448ed:{c.instructions+=9;NFSU2_TR(0x4448ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x3f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4448f4:{NFSU2_TR(0x4448f4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4448f8:{NFSU2_TR(0x4448f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4448f9:{NFSU2_TR(0x4448f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4448fa:{NFSU2_TR(0x4448fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444901:{NFSU2_TR(0x444901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B444902:{NFSU2_TR(0x444902);
__builtin_memmove((R+16),(R+20),4);
}
B444904:{NFSU2_TR(0x444904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B444905:{NFSU2_TR(0x444905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444910:L444910:{c.instructions+=21;NFSU2_TR(0x444910);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444911:{NFSU2_TR(0x444911);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444914:{NFSU2_TR(0x444914);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B44491b:{NFSU2_TR(0x44491b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B444922:{NFSU2_TR(0x444922);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B444926:{NFSU2_TR(0x444926);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44492a:{NFSU2_TR(0x44492a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44492e:{NFSU2_TR(0x44492e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B444932:{NFSU2_TR(0x444932);
w4(R+8,u32(0x2ull));
}
B444937:{NFSU2_TR(0x444937);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44493b:{NFSU2_TR(0x44493b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44493d:{NFSU2_TR(0x44493d);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444943:{NFSU2_TR(0x444943);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444945:{NFSU2_TR(0x444945);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444947:{NFSU2_TR(0x444947);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44494a:{NFSU2_TR(0x44494a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44494e:{NFSU2_TR(0x44494e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B444950:{NFSU2_TR(0x444950);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B444953:{NFSU2_TR(0x444953);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B444955:{NFSU2_TR(0x444955);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B444958:{NFSU2_TR(0x444958);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44495e;}}
}
B44495a:L44495a:{c.instructions+=1;NFSU2_TR(0x44495a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44495e:L44495e:{c.instructions+=7;NFSU2_TR(0x44495e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444962:{NFSU2_TR(0x444962);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444966:{NFSU2_TR(0x444966);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B444969:{NFSU2_TR(0x444969);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44496c:{NFSU2_TR(0x44496c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44496e:{NFSU2_TR(0x44496e);
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
B444971:{NFSU2_TR(0x444971);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L444977;}}
}
B444973:L444973:{c.instructions+=1;NFSU2_TR(0x444973);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B444977:L444977:{c.instructions+=2;NFSU2_TR(0x444977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B444978:{NFSU2_TR(0x444978);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444980:L444980:{c.instructions+=18;NFSU2_TR(0x444980);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444981:{NFSU2_TR(0x444981);
__builtin_memmove((R+20),(R+16),4);
}
B444983:{NFSU2_TR(0x444983);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B444986:{NFSU2_TR(0x444986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B444989:{NFSU2_TR(0x444989);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44498a:{NFSU2_TR(0x44498a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44498b:{NFSU2_TR(0x44498b);
__builtin_memmove((R+24),(R+4),4);
}
B44498d:{NFSU2_TR(0x44498d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444990:{NFSU2_TR(0x444990);
__builtin_memmove((R+4),gp(0x865154),4);
}
B444996:{NFSU2_TR(0x444996);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444997:{NFSU2_TR(0x444997);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444998:{NFSU2_TR(0x444998);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44499e:{NFSU2_TR(0x44499e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44499f:{NFSU2_TR(0x44499f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4449a2:{NFSU2_TR(0x4449a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4449a3:{NFSU2_TR(0x4449a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4449a7:{NFSU2_TR(0x4449a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4449a8:{NFSU2_TR(0x4449a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4449adull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4449ad:L4449ad:{c.instructions+=4;NFSU2_TR(0x4449ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4449b0:{NFSU2_TR(0x4449b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4449b3:{NFSU2_TR(0x4449b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4449b5:{NFSU2_TR(0x4449b5);
if(r1(R+518)){{goto L4449ca;}}
}
B4449b7:L4449b7:{c.instructions+=6;NFSU2_TR(0x4449b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4449bb:{NFSU2_TR(0x4449bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4449bc:{NFSU2_TR(0x4449bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4449c0:{NFSU2_TR(0x4449c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4449c1:{NFSU2_TR(0x4449c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4449c2:{NFSU2_TR(0x4449c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4449c7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4449c7:L4449c7:{c.instructions+=1;NFSU2_TR(0x4449c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4449ca:L4449ca:{c.instructions+=5;NFSU2_TR(0x4449ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4449cd:{NFSU2_TR(0x4449cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4449d1:{NFSU2_TR(0x4449d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4449d2:{NFSU2_TR(0x4449d2);
__builtin_memmove((R+4),(R+28),4);
}
B4449d4:{NFSU2_TR(0x4449d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4449d9ull));
TAIL_STATIC(0x574c90u,574);
}
B4449d9:L4449d9:{c.instructions+=9;NFSU2_TR(0x4449d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4449dc:{NFSU2_TR(0x4449dc);
{u32 ea_=u32(r4(R+0)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4449e2:{NFSU2_TR(0x4449e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
}
B4449e7:{NFSU2_TR(0x4449e7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4449ea:{NFSU2_TR(0x4449ea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4449ed:{NFSU2_TR(0x4449ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4449f0:{NFSU2_TR(0x4449f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4449f2:{NFSU2_TR(0x4449f2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4449f6:{NFSU2_TR(0x4449f6);
if(r1(R+518)){{goto L444a0c;}}
}
B4449f8:L4449f8:{c.instructions+=7;NFSU2_TR(0x4449f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4449fa:{NFSU2_TR(0x4449fa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4449fc:{NFSU2_TR(0x4449fc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4449fe:{NFSU2_TR(0x4449fe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444a01:{NFSU2_TR(0x444a01);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444a04:{NFSU2_TR(0x444a04);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B444a08:{NFSU2_TR(0x444a08);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444a0c:L444a0c:{c.instructions+=13;NFSU2_TR(0x444a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444a0e:{NFSU2_TR(0x444a0e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444a10:{NFSU2_TR(0x444a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444a13:{NFSU2_TR(0x444a13);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444a17:{NFSU2_TR(0x444a17);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444a1b:{NFSU2_TR(0x444a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444a23:{NFSU2_TR(0x444a23);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444a27:{NFSU2_TR(0x444a27);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444a2b:{NFSU2_TR(0x444a2b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444a2f:{NFSU2_TR(0x444a2f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444a33:{NFSU2_TR(0x444a33);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444a37:{NFSU2_TR(0x444a37);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444a3b:{NFSU2_TR(0x444a3b);
if(r1(R+518)){{goto L444a50;}}
}
B444a3d:L444a3d:{c.instructions+=6;NFSU2_TR(0x444a3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444a41:{NFSU2_TR(0x444a41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a42:{NFSU2_TR(0x444a42);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444a46:{NFSU2_TR(0x444a46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a47:{NFSU2_TR(0x444a47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a48:{NFSU2_TR(0x444a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444a4dull));
TAIL_STATIC(0x43c9b0u,43c);
}
B444a4d:L444a4d:{c.instructions+=1;NFSU2_TR(0x444a4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B444a50:L444a50:{c.instructions+=4;NFSU2_TR(0x444a50);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444a54:{NFSU2_TR(0x444a54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a55:{NFSU2_TR(0x444a55);
__builtin_memmove((R+4),(R+28),4);
}
B444a57:{NFSU2_TR(0x444a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444a5cull));
TAIL_STATIC(0x574cb0u,574);
}
B444a5c:L444a5c:{c.instructions+=6;NFSU2_TR(0x444a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B444a5d:{NFSU2_TR(0x444a5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444a5e:{NFSU2_TR(0x444a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B444a5f:{NFSU2_TR(0x444a5f);
__builtin_memmove((R+16),(R+20),4);
}
B444a61:{NFSU2_TR(0x444a61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B444a62:{NFSU2_TR(0x444a62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444a70:L444a70:{c.instructions+=18;NFSU2_TR(0x444a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a71:{NFSU2_TR(0x444a71);
__builtin_memmove((R+20),(R+16),4);
}
B444a73:{NFSU2_TR(0x444a73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B444a76:{NFSU2_TR(0x444a76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B444a79:{NFSU2_TR(0x444a79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a7a:{NFSU2_TR(0x444a7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a7b:{NFSU2_TR(0x444a7b);
__builtin_memmove((R+24),(R+4),4);
}
B444a7d:{NFSU2_TR(0x444a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444a80:{NFSU2_TR(0x444a80);
__builtin_memmove((R+4),gp(0x865154),4);
}
B444a86:{NFSU2_TR(0x444a86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a87:{NFSU2_TR(0x444a87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a88:{NFSU2_TR(0x444a88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
__builtin_memmove((R+8),(U+0),4);
}
B444a8e:{NFSU2_TR(0x444a8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a8f:{NFSU2_TR(0x444a8f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B444a92:{NFSU2_TR(0x444a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a93:{NFSU2_TR(0x444a93);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444a97:{NFSU2_TR(0x444a97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444a98:{NFSU2_TR(0x444a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444a9dull));
TAIL_STATIC(0x43d0c0u,43d);
}
B444a9d:L444a9d:{c.instructions+=4;NFSU2_TR(0x444a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B444aa0:{NFSU2_TR(0x444aa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B444aa3:{NFSU2_TR(0x444aa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444aa5:{NFSU2_TR(0x444aa5);
if(r1(R+518)){{goto L444aba;}}
}
B444aa7:L444aa7:{c.instructions+=6;NFSU2_TR(0x444aa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444aab:{NFSU2_TR(0x444aab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444aac:{NFSU2_TR(0x444aac);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444ab0:{NFSU2_TR(0x444ab0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ab1:{NFSU2_TR(0x444ab1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ab2:{NFSU2_TR(0x444ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444ab7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B444ab7:L444ab7:{c.instructions+=1;NFSU2_TR(0x444ab7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B444aba:L444aba:{c.instructions+=5;NFSU2_TR(0x444aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B444abd:{NFSU2_TR(0x444abd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444ac1:{NFSU2_TR(0x444ac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ac2:{NFSU2_TR(0x444ac2);
__builtin_memmove((R+4),(R+28),4);
}
B444ac4:{NFSU2_TR(0x444ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444ac9ull));
TAIL_STATIC(0x574c90u,574);
}
B444ac9:L444ac9:{c.instructions+=9;NFSU2_TR(0x444ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444acc:{NFSU2_TR(0x444acc);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444ad2:{NFSU2_TR(0x444ad2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
}
B444ad7:{NFSU2_TR(0x444ad7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444ada:{NFSU2_TR(0x444ada);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444add:{NFSU2_TR(0x444add);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444ae0:{NFSU2_TR(0x444ae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444ae2:{NFSU2_TR(0x444ae2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444ae6:{NFSU2_TR(0x444ae6);
if(r1(R+518)){{goto L444afc;}}
}
B444ae8:L444ae8:{c.instructions+=7;NFSU2_TR(0x444ae8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444aea:{NFSU2_TR(0x444aea);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444aec:{NFSU2_TR(0x444aec);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444aee:{NFSU2_TR(0x444aee);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444af1:{NFSU2_TR(0x444af1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444af4:{NFSU2_TR(0x444af4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B444af8:{NFSU2_TR(0x444af8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444afc:L444afc:{c.instructions+=13;NFSU2_TR(0x444afc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444afe:{NFSU2_TR(0x444afe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444b00:{NFSU2_TR(0x444b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444b03:{NFSU2_TR(0x444b03);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444b07:{NFSU2_TR(0x444b07);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444b0b:{NFSU2_TR(0x444b0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444b13:{NFSU2_TR(0x444b13);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444b17:{NFSU2_TR(0x444b17);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444b1b:{NFSU2_TR(0x444b1b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444b1f:{NFSU2_TR(0x444b1f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444b23:{NFSU2_TR(0x444b23);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444b27:{NFSU2_TR(0x444b27);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444b2b:{NFSU2_TR(0x444b2b);
if(r1(R+518)){{goto L444b40;}}
}
B444b2d:L444b2d:{c.instructions+=6;NFSU2_TR(0x444b2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444b31:{NFSU2_TR(0x444b31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b32:{NFSU2_TR(0x444b32);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444b36:{NFSU2_TR(0x444b36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b37:{NFSU2_TR(0x444b37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b38:{NFSU2_TR(0x444b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444b3dull));
TAIL_STATIC(0x43c9b0u,43c);
}
B444b3d:L444b3d:{c.instructions+=1;NFSU2_TR(0x444b3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B444b40:L444b40:{c.instructions+=4;NFSU2_TR(0x444b40);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444b44:{NFSU2_TR(0x444b44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b45:{NFSU2_TR(0x444b45);
__builtin_memmove((R+4),(R+28),4);
}
B444b47:{NFSU2_TR(0x444b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444b4cull));
TAIL_STATIC(0x574cb0u,574);
}
B444b4c:L444b4c:{c.instructions+=6;NFSU2_TR(0x444b4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B444b4d:{NFSU2_TR(0x444b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444b4e:{NFSU2_TR(0x444b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B444b4f:{NFSU2_TR(0x444b4f);
__builtin_memmove((R+16),(R+20),4);
}
B444b51:{NFSU2_TR(0x444b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B444b52:{NFSU2_TR(0x444b52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444b60:L444b60:{c.instructions+=11;NFSU2_TR(0x444b60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444b64:{NFSU2_TR(0x444b64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b65:{NFSU2_TR(0x444b65);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B444b69:{NFSU2_TR(0x444b69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b6a:{NFSU2_TR(0x444b6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b6b:{NFSU2_TR(0x444b6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B444b6f:{NFSU2_TR(0x444b6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b70:{NFSU2_TR(0x444b70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b71:{NFSU2_TR(0x444b71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b72:{NFSU2_TR(0x444b72);
__builtin_memmove((R+24),(R+4),4);
}
B444b74:{NFSU2_TR(0x444b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444b79ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444980u);}goto L444980;}
}
B444b79:L444b79:{c.instructions+=6;NFSU2_TR(0x444b79);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444b7d:{NFSU2_TR(0x444b7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b7e:{NFSU2_TR(0x444b7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b7f:{NFSU2_TR(0x444b7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444b80:{NFSU2_TR(0x444b80);
__builtin_memmove((R+4),(R+24),4);
}
B444b82:{NFSU2_TR(0x444b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444b87ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444a70u);}goto L444a70;}
}
B444b87:L444b87:{c.instructions+=4;NFSU2_TR(0x444b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B444b88:{NFSU2_TR(0x444b88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444b89:{NFSU2_TR(0x444b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B444b8a:{NFSU2_TR(0x444b8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444b90:L444b90:{c.instructions+=3;NFSU2_TR(0x444b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444b96:{NFSU2_TR(0x444b96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444b98:{NFSU2_TR(0x444b98);
if(r1(R+518)){{goto L444b9e;}}
}
B444b9a:L444b9a:{c.instructions+=2;NFSU2_TR(0x444b9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B444b9d:{NFSU2_TR(0x444b9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444b9e:L444b9e:{c.instructions+=3;NFSU2_TR(0x444b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444ba1:{NFSU2_TR(0x444ba1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B444ba4:{NFSU2_TR(0x444ba4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444bb0:L444bb0:{c.instructions+=5;NFSU2_TR(0x444bb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444bb1:{NFSU2_TR(0x444bb1);
__builtin_memmove((R+24),(R+4),4);
}
B444bb3:{NFSU2_TR(0x444bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444bb9:{NFSU2_TR(0x444bb9);
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
B444bbb:{NFSU2_TR(0x444bbb);
if(r1(R+518)){{goto L444c4f;}}
}
B444bc1:L444bc1:{c.instructions+=4;NFSU2_TR(0x444bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444bc7:{NFSU2_TR(0x444bc7);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444bc9:{NFSU2_TR(0x444bc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444bca:{NFSU2_TR(0x444bca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444bcfull));
TAIL_STATIC(0x57c330u,57c);
}
B444bcf:L444bcf:{c.instructions+=4;NFSU2_TR(0x444bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444bd5:{NFSU2_TR(0x444bd5);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444bd7:{NFSU2_TR(0x444bd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444bd8:{NFSU2_TR(0x444bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444bddull));
TAIL_STATIC(0x57c330u,57c);
}
B444bdd:L444bdd:{c.instructions+=4;NFSU2_TR(0x444bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444be3:{NFSU2_TR(0x444be3);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444be5:{NFSU2_TR(0x444be5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444be6:{NFSU2_TR(0x444be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444bebull));
TAIL_STATIC(0x57c330u,57c);
}
B444beb:L444beb:{c.instructions+=4;NFSU2_TR(0x444beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444bf1:{NFSU2_TR(0x444bf1);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444bf3:{NFSU2_TR(0x444bf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444bf4:{NFSU2_TR(0x444bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444bf9ull));
TAIL_STATIC(0x57c330u,57c);
}
B444bf9:L444bf9:{c.instructions+=4;NFSU2_TR(0x444bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444bff:{NFSU2_TR(0x444bff);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c01:{NFSU2_TR(0x444c01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c02:{NFSU2_TR(0x444c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444c07ull));
TAIL_STATIC(0x57c330u,57c);
}
B444c07:L444c07:{c.instructions+=4;NFSU2_TR(0x444c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444c0d:{NFSU2_TR(0x444c0d);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c0f:{NFSU2_TR(0x444c0f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c10:{NFSU2_TR(0x444c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444c15ull));
TAIL_STATIC(0x57c330u,57c);
}
B444c15:L444c15:{c.instructions+=4;NFSU2_TR(0x444c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444c1b:{NFSU2_TR(0x444c1b);
u8 U[4];
w4(U+0,u32(0x53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c1d:{NFSU2_TR(0x444c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c1e:{NFSU2_TR(0x444c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444c23ull));
TAIL_STATIC(0x57c330u,57c);
}
B444c23:L444c23:{c.instructions+=4;NFSU2_TR(0x444c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444c29:{NFSU2_TR(0x444c29);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c2b:{NFSU2_TR(0x444c2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c2c:{NFSU2_TR(0x444c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444c31ull));
TAIL_STATIC(0x57c330u,57c);
}
B444c31:L444c31:{c.instructions+=5;NFSU2_TR(0x444c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444c37:{NFSU2_TR(0x444c37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B444c3a:{NFSU2_TR(0x444c3a);
u8 U[4];
w4(U+0,u32(0x55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c3c:{NFSU2_TR(0x444c3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c3d:{NFSU2_TR(0x444c3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444c42ull));
TAIL_STATIC(0x57c330u,57c);
}
B444c42:L444c42:{c.instructions+=2;NFSU2_TR(0x444c42);
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
B444c45:{NFSU2_TR(0x444c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444c4f:L444c4f:{c.instructions+=2;NFSU2_TR(0x444c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444c50:{NFSU2_TR(0x444c50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444c60:L444c60:{c.instructions+=7;NFSU2_TR(0x444c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444c64:{NFSU2_TR(0x444c64);
__builtin_memmove((R+0),(R+4),4);
}
B444c66:{NFSU2_TR(0x444c66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c67:{NFSU2_TR(0x444c67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444c68:{NFSU2_TR(0x444c68);
__builtin_memmove((R+24),(R+8),4);
}
B444c6a:{NFSU2_TR(0x444c6a);
w4(R+4,u32(0x8ull));
}
B444c6f:{NFSU2_TR(0x444c6f);
__builtin_memmove((R+28),(R+0),4);
}
B444c71:L444c71:{c.instructions+=1;NFSU2_TR(0x444c71);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L444c73;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444c71u);}goto L444c71;}
}
B444c73:L444c73:{c.instructions+=16;NFSU2_TR(0x444c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444c76:{NFSU2_TR(0x444c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444c79:{NFSU2_TR(0x444c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444c7c:{NFSU2_TR(0x444c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444c7f:{NFSU2_TR(0x444c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444c82:{NFSU2_TR(0x444c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444c85:{NFSU2_TR(0x444c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444c88:{NFSU2_TR(0x444c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444c8b:{NFSU2_TR(0x444c8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444c8e:{NFSU2_TR(0x444c8e);
__builtin_memmove((R+4),(R+24),4);
}
B444c90:{NFSU2_TR(0x444c90);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B444c92:{NFSU2_TR(0x444c92);
__builtin_memmove((R+28),(R+0),4);
}
B444c94:{NFSU2_TR(0x444c94);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B444c98:{NFSU2_TR(0x444c98);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B444c9a:{NFSU2_TR(0x444c9a);
w4(R+8,u32(0x20ull));
}
B444c9f:{NFSU2_TR(0x444c9f);
}
B444ca0:L444ca0:{c.instructions+=11;NFSU2_TR(0x444ca0);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444ca3:{NFSU2_TR(0x444ca3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B444ca6:{NFSU2_TR(0x444ca6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444ca8:{NFSU2_TR(0x444ca8);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B444cab:{NFSU2_TR(0x444cab);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B444cac:{NFSU2_TR(0x444cac);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444caf:{NFSU2_TR(0x444caf);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444cb2:{NFSU2_TR(0x444cb2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444cb4:{NFSU2_TR(0x444cb4);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444cb7:{NFSU2_TR(0x444cb7);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444cbb:{NFSU2_TR(0x444cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x444ca0u);}goto L444ca0;}}
}
B444cbd:L444cbd:{c.instructions+=3;NFSU2_TR(0x444cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B444cbe:{NFSU2_TR(0x444cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B444cbf:{NFSU2_TR(0x444cbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444cd0:L444cd0:{c.instructions+=3;NFSU2_TR(0x444cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x438ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444cd6:{NFSU2_TR(0x444cd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B444cd8:{NFSU2_TR(0x444cd8);
if(r1(R+518)){{goto L444cde;}}
}
B444cda:L444cda:{c.instructions+=2;NFSU2_TR(0x444cda);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B444cdd:{NFSU2_TR(0x444cdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444cde:L444cde:{c.instructions+=3;NFSU2_TR(0x444cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444ce1:{NFSU2_TR(0x444ce1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B444ce4:{NFSU2_TR(0x444ce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444cf0:L444cf0:{c.instructions+=41;NFSU2_TR(0x444cf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444cf1:{NFSU2_TR(0x444cf1);
__builtin_memmove((R+20),(R+16),4);
}
B444cf3:{NFSU2_TR(0x444cf3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B444cf6:{NFSU2_TR(0x444cf6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B444cf9:{NFSU2_TR(0x444cf9);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444cfc:{NFSU2_TR(0x444cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444cff:{NFSU2_TR(0x444cff);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B444d01:{NFSU2_TR(0x444d01);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444d03:{NFSU2_TR(0x444d03);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d06:{NFSU2_TR(0x444d06);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B444d08:{NFSU2_TR(0x444d08);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d0c:{NFSU2_TR(0x444d0c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d0f:{NFSU2_TR(0x444d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444d12:{NFSU2_TR(0x444d12);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B444d14:{NFSU2_TR(0x444d14);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d18:{NFSU2_TR(0x444d18);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d1b:{NFSU2_TR(0x444d1b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B444d1d:{NFSU2_TR(0x444d1d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444d1f:{NFSU2_TR(0x444d1f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d23:{NFSU2_TR(0x444d23);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d26:{NFSU2_TR(0x444d26);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B444d28:{NFSU2_TR(0x444d28);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d2c:{NFSU2_TR(0x444d2c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d2f:{NFSU2_TR(0x444d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444d32:{NFSU2_TR(0x444d32);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B444d34:{NFSU2_TR(0x444d34);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d38:{NFSU2_TR(0x444d38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444d3a:{NFSU2_TR(0x444d3a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d3e:{NFSU2_TR(0x444d3e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B444d40:{NFSU2_TR(0x444d40);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d42:{NFSU2_TR(0x444d42);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444d44:{NFSU2_TR(0x444d44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B444d46:{NFSU2_TR(0x444d46);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d4a:{NFSU2_TR(0x444d4a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444d4e:{NFSU2_TR(0x444d4e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d51:{NFSU2_TR(0x444d51);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d55:{NFSU2_TR(0x444d55);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B444d59:{NFSU2_TR(0x444d59);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d5c:{NFSU2_TR(0x444d5c);
__builtin_memmove((R+16),(R+20),4);
}
B444d5e:{NFSU2_TR(0x444d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B444d5f:{NFSU2_TR(0x444d5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444d70:L444d70:{c.instructions+=25;NFSU2_TR(0x444d70);
__builtin_memmove((R+0),(R+4),4);
}
B444d72:{NFSU2_TR(0x444d72);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444d76:{NFSU2_TR(0x444d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B444d78:{NFSU2_TR(0x444d78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B444d7a:{NFSU2_TR(0x444d7a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d7d:{NFSU2_TR(0x444d7d);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d80:{NFSU2_TR(0x444d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444d83:{NFSU2_TR(0x444d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444d86:{NFSU2_TR(0x444d86);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444d88:{NFSU2_TR(0x444d88);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d8b:{NFSU2_TR(0x444d8b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d8e:{NFSU2_TR(0x444d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444d91:{NFSU2_TR(0x444d91);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d94:{NFSU2_TR(0x444d94);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444d97:{NFSU2_TR(0x444d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444d9a:{NFSU2_TR(0x444d9a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444d9c:{NFSU2_TR(0x444d9c);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444d9f:{NFSU2_TR(0x444d9f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444da2:{NFSU2_TR(0x444da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444da5:{NFSU2_TR(0x444da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444da8:{NFSU2_TR(0x444da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444dab:{NFSU2_TR(0x444dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444dae:{NFSU2_TR(0x444dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444db1:{NFSU2_TR(0x444db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444db4:{NFSU2_TR(0x444db4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444dc0:L444dc0:{c.instructions+=5;NFSU2_TR(0x444dc0);
{u32 ea_=u32(r4(R+4)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444dc6:{NFSU2_TR(0x444dc6);
{u32 ea_=u32(r4(R+4)+u32(332u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B444dcc:{NFSU2_TR(0x444dcc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B444dce:{NFSU2_TR(0x444dce);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B444dd1:{NFSU2_TR(0x444dd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L444dd9;}}
}
B444dd3:L444dd3:{c.instructions+=2;NFSU2_TR(0x444dd3);
w4(R+0,u32(0x1ull));
}
B444dd8:{NFSU2_TR(0x444dd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444dd9:L444dd9:{c.instructions+=2;NFSU2_TR(0x444dd9);
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
B444ddb:{NFSU2_TR(0x444ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B444de0:L444de0:{c.instructions+=30;NFSU2_TR(0x444de0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444de1:{NFSU2_TR(0x444de1);
__builtin_memmove((R+20),(R+16),4);
}
B444de3:{NFSU2_TR(0x444de3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B444de6:{NFSU2_TR(0x444de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf8ull))));
}
B444dec:{NFSU2_TR(0x444dec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ded:{NFSU2_TR(0x444ded);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444dee:{NFSU2_TR(0x444dee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B444df1:{NFSU2_TR(0x444df1);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444df4:{NFSU2_TR(0x444df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B444df7:{NFSU2_TR(0x444df7);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444dfe:{NFSU2_TR(0x444dfe);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444e01:{NFSU2_TR(0x444e01);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444e08:{NFSU2_TR(0x444e08);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444e0f:{NFSU2_TR(0x444e0f);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444e12:{NFSU2_TR(0x444e12);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444e19:{NFSU2_TR(0x444e19);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444e1c:{NFSU2_TR(0x444e1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444e1d:{NFSU2_TR(0x444e1d);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444e20:{NFSU2_TR(0x444e20);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444e27:{NFSU2_TR(0x444e27);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444e2e:{NFSU2_TR(0x444e2e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B444e30:{NFSU2_TR(0x444e30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444e31:{NFSU2_TR(0x444e31);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444e38:{NFSU2_TR(0x444e38);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444e3f:{NFSU2_TR(0x444e3f);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444e46:{NFSU2_TR(0x444e46);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444e4d:{NFSU2_TR(0x444e4d);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444e54:{NFSU2_TR(0x444e54);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B444e5b:{NFSU2_TR(0x444e5b);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444e62:{NFSU2_TR(0x444e62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444e67ull));
TAIL_STATIC(0x43cf10u,43c);
}
B444e67:L444e67:{c.instructions+=10;NFSU2_TR(0x444e67);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444e6e:{NFSU2_TR(0x444e6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444e6f:{NFSU2_TR(0x444e6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444e76:{NFSU2_TR(0x444e76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444e77:{NFSU2_TR(0x444e77);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444e7e:{NFSU2_TR(0x444e7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444e7f:{NFSU2_TR(0x444e7f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444e8a:{NFSU2_TR(0x444e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444e95:{NFSU2_TR(0x444e95);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444ea0:{NFSU2_TR(0x444ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444ea5ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B444ea5:L444ea5:{c.instructions+=7;NFSU2_TR(0x444ea5);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444eac:{NFSU2_TR(0x444eac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ead:{NFSU2_TR(0x444ead);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444eb4:{NFSU2_TR(0x444eb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444eb5:{NFSU2_TR(0x444eb5);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444ebc:{NFSU2_TR(0x444ebc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ebd:{NFSU2_TR(0x444ebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444ec2ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B444ec2:L444ec2:{c.instructions+=5;NFSU2_TR(0x444ec2);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444ec9:{NFSU2_TR(0x444ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444eca:{NFSU2_TR(0x444eca);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444ed1:{NFSU2_TR(0x444ed1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ed2:{NFSU2_TR(0x444ed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444ed7ull));
TAIL_STATIC(0x43cf10u,43c);
}
B444ed7:L444ed7:{c.instructions+=5;NFSU2_TR(0x444ed7);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444ede:{NFSU2_TR(0x444ede);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444edf:{NFSU2_TR(0x444edf);
u8 U[4];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B444ee6:{NFSU2_TR(0x444ee6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444ee7:{NFSU2_TR(0x444ee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444eecull));
TAIL_STATIC(0x43cf10u,43c);
}
B444eec:L444eec:{c.instructions+=33;NFSU2_TR(0x444eec);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444ef3:{NFSU2_TR(0x444ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B444ef6:{NFSU2_TR(0x444ef6);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444efd:{NFSU2_TR(0x444efd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444eff:{NFSU2_TR(0x444eff);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444f06:{NFSU2_TR(0x444f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f09:{NFSU2_TR(0x444f09);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444f10:{NFSU2_TR(0x444f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f13:{NFSU2_TR(0x444f13);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444f1a:{NFSU2_TR(0x444f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f1d:{NFSU2_TR(0x444f1d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444f24:{NFSU2_TR(0x444f24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B444f27:{NFSU2_TR(0x444f27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B444f29:{NFSU2_TR(0x444f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f2c:{NFSU2_TR(0x444f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444f33:{NFSU2_TR(0x444f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f36:{NFSU2_TR(0x444f36);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B444f3d:{NFSU2_TR(0x444f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f40:{NFSU2_TR(0x444f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f43:{NFSU2_TR(0x444f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f46:{NFSU2_TR(0x444f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f49:{NFSU2_TR(0x444f49);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B444f50:{NFSU2_TR(0x444f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f53:{NFSU2_TR(0x444f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f56:{NFSU2_TR(0x444f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f59:{NFSU2_TR(0x444f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f5c:{NFSU2_TR(0x444f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B444f5f:{NFSU2_TR(0x444f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B444f66:{NFSU2_TR(0x444f66);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444f69:{NFSU2_TR(0x444f69);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B444f6f:{NFSU2_TR(0x444f6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B444f71:{NFSU2_TR(0x444f71);
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
B444f74:{NFSU2_TR(0x444f74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x44524cu,445);}
}
B444f7a:L444f7a:{c.instructions+=2;NFSU2_TR(0x444f7a);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444f80:{NFSU2_TR(0x444f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444f85ull));
TAIL_STATIC(0x75bed4u,75b);
}
B444f85:L444f85:{c.instructions+=14;NFSU2_TR(0x444f85);
__builtin_memmove((R+4),(R+0),4);
}
B444f87:{NFSU2_TR(0x444f87);
w4(R+0,u32(0xb60b60b7ull));
}
B444f8c:{NFSU2_TR(0x444f8c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B444f8e:{NFSU2_TR(0x444f8e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B444f90:{NFSU2_TR(0x444f90);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B444f93:{NFSU2_TR(0x444f93);
__builtin_memmove((R+0),(R+8),4);
}
B444f95:{NFSU2_TR(0x444f95);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B444f98:{NFSU2_TR(0x444f98);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B444f9a:{NFSU2_TR(0x444f9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444f9b:{NFSU2_TR(0x444f9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B444fa2:{NFSU2_TR(0x444fa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444fa3:{NFSU2_TR(0x444fa3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B444fa7:{NFSU2_TR(0x444fa7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B444fa8:{NFSU2_TR(0x444fa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x444fadull));
TAIL_STATIC(0x5ba8b0u,5ba);
}
B444fad:L444fad:{c.instructions+=25;NFSU2_TR(0x444fad);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444fb1:{NFSU2_TR(0x444fb1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444fb3:{NFSU2_TR(0x444fb3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444fb7:{NFSU2_TR(0x444fb7);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444fba:{NFSU2_TR(0x444fba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444fbc:{NFSU2_TR(0x444fbc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444fc0:{NFSU2_TR(0x444fc0);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444fc3:{NFSU2_TR(0x444fc3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444fc5:{NFSU2_TR(0x444fc5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444fc9:{NFSU2_TR(0x444fc9);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444fcc:{NFSU2_TR(0x444fcc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444fce:{NFSU2_TR(0x444fce);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444fd5:{NFSU2_TR(0x444fd5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444fd9:{NFSU2_TR(0x444fd9);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444fdc:{NFSU2_TR(0x444fdc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444fe0:{NFSU2_TR(0x444fe0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444fe3:{NFSU2_TR(0x444fe3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444fe5:{NFSU2_TR(0x444fe5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444fe9:{NFSU2_TR(0x444fe9);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444fec:{NFSU2_TR(0x444fec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444fee:{NFSU2_TR(0x444fee);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B444ff2:{NFSU2_TR(0x444ff2);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B444ff5:{NFSU2_TR(0x444ff5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B444ff7:{NFSU2_TR(0x444ff7);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B444ffe:{NFSU2_TR(0x444ffe);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x445002u,445);
}
XIT:NFSU2_TR_EXIT(0x444,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
