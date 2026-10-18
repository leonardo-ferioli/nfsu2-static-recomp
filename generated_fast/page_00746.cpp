#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_747(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_755(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x746,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x746,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_746(u8* __restrict R,Cpu& c);
u32 page_746(Cpu& c){return body_746(c.regs.data(),c);}
__attribute__((noinline)) u32 body_746(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x746001:goto L746001;
case 0x746005:c.instructions+=3;goto B746005;
case 0x74600a:c.instructions+=2;goto B74600a;
case 0x74600b:c.instructions+=1;goto B74600b;
case 0x746010:goto L746010;
case 0x746013:c.instructions+=2;goto B746013;
case 0x746014:c.instructions+=1;goto B746014;
case 0x746019:goto L746019;
case 0x74601d:c.instructions+=8;goto B74601d;
case 0x746020:c.instructions+=7;goto B746020;
case 0x746025:c.instructions+=6;goto B746025;
case 0x746027:c.instructions+=5;goto B746027;
case 0x74602a:c.instructions+=4;goto B74602a;
case 0x74602b:c.instructions+=3;goto B74602b;
case 0x746030:c.instructions+=2;goto B746030;
case 0x746031:c.instructions+=1;goto B746031;
case 0x746036:goto L746036;
case 0x746039:c.instructions+=2;goto B746039;
case 0x74603a:c.instructions+=1;goto B74603a;
case 0x74603f:goto L74603f;
case 0x746043:c.instructions+=8;goto B746043;
case 0x746046:c.instructions+=7;goto B746046;
case 0x74604b:c.instructions+=6;goto B74604b;
case 0x746050:c.instructions+=5;goto B746050;
case 0x746053:c.instructions+=4;goto B746053;
case 0x746054:c.instructions+=3;goto B746054;
case 0x746059:c.instructions+=2;goto B746059;
case 0x74605a:c.instructions+=1;goto B74605a;
case 0x74605f:goto L74605f;
case 0x746062:c.instructions+=2;goto B746062;
case 0x746063:c.instructions+=1;goto B746063;
case 0x746068:goto L746068;
case 0x74606c:c.instructions+=5;goto B74606c;
case 0x74606f:c.instructions+=4;goto B74606f;
case 0x746071:c.instructions+=3;goto B746071;
case 0x746076:c.instructions+=2;goto B746076;
case 0x746077:c.instructions+=1;goto B746077;
case 0x74607c:goto L74607c;
case 0x74607f:c.instructions+=2;goto B74607f;
case 0x746080:c.instructions+=1;goto B746080;
case 0x746085:goto L746085;
case 0x746088:c.instructions+=6;goto B746088;
case 0x74608a:c.instructions+=5;goto B74608a;
case 0x74608d:c.instructions+=4;goto B74608d;
case 0x746091:c.instructions+=3;goto B746091;
case 0x746096:c.instructions+=2;goto B746096;
case 0x746097:c.instructions+=1;goto B746097;
case 0x74609c:goto L74609c;
case 0x74609f:c.instructions+=2;goto B74609f;
case 0x7460a0:c.instructions+=1;goto B7460a0;
case 0x7460a5:goto L7460a5;
case 0x7460a8:c.instructions+=6;goto B7460a8;
case 0x7460aa:c.instructions+=5;goto B7460aa;
case 0x7460b0:c.instructions+=4;goto B7460b0;
case 0x7460b4:c.instructions+=3;goto B7460b4;
case 0x7460b9:c.instructions+=2;goto B7460b9;
case 0x7460ba:c.instructions+=1;goto B7460ba;
case 0x7460bf:goto L7460bf;
case 0x7460c2:c.instructions+=2;goto B7460c2;
case 0x7460c3:c.instructions+=1;goto B7460c3;
case 0x7460c8:goto L7460c8;
case 0x7460cb:c.instructions+=6;goto B7460cb;
case 0x7460cd:c.instructions+=5;goto B7460cd;
case 0x7460d0:c.instructions+=4;goto B7460d0;
case 0x7460d4:c.instructions+=3;goto B7460d4;
case 0x7460d9:c.instructions+=2;goto B7460d9;
case 0x7460da:c.instructions+=1;goto B7460da;
case 0x7460df:goto L7460df;
case 0x7460e2:c.instructions+=2;goto B7460e2;
case 0x7460e3:c.instructions+=1;goto B7460e3;
case 0x7460e8:goto L7460e8;
case 0x7460eb:c.instructions+=6;goto B7460eb;
case 0x7460ec:c.instructions+=5;goto B7460ec;
case 0x7460ef:c.instructions+=4;goto B7460ef;
case 0x7460f4:c.instructions+=3;goto B7460f4;
case 0x7460f5:c.instructions+=2;goto B7460f5;
case 0x7460f8:c.instructions+=1;goto B7460f8;
case 0x7460fd:goto L7460fd;
case 0x746100:c.instructions+=4;goto B746100;
case 0x746103:c.instructions+=3;goto B746103;
case 0x746108:c.instructions+=2;goto B746108;
case 0x74610d:c.instructions+=1;goto B74610d;
case 0x74610f:goto L74610f;
case 0x746114:goto L746114;
case 0x746117:goto L746117;
case 0x746119:c.instructions+=5;goto B746119;
case 0x74611a:c.instructions+=4;goto B74611a;
case 0x74611c:c.instructions+=3;goto B74611c;
case 0x74611d:c.instructions+=2;goto B74611d;
case 0x74611f:c.instructions+=1;goto B74611f;
case 0x746121:goto L746121;
case 0x746125:c.instructions+=7;goto B746125;
case 0x74612a:c.instructions+=6;goto B74612a;
case 0x74612c:c.instructions+=5;goto B74612c;
case 0x746132:c.instructions+=4;goto B746132;
case 0x746133:c.instructions+=3;goto B746133;
case 0x746138:c.instructions+=2;goto B746138;
case 0x746139:c.instructions+=1;goto B746139;
case 0x74613e:goto L74613e;
case 0x746141:c.instructions+=2;goto B746141;
case 0x746142:c.instructions+=1;goto B746142;
case 0x746147:goto L746147;
case 0x74614a:c.instructions+=7;goto B74614a;
case 0x746150:c.instructions+=6;goto B746150;
case 0x746152:c.instructions+=5;goto B746152;
case 0x746155:c.instructions+=4;goto B746155;
case 0x746159:c.instructions+=3;goto B746159;
case 0x74615e:c.instructions+=2;goto B74615e;
case 0x74615f:c.instructions+=1;goto B74615f;
case 0x746164:goto L746164;
case 0x746167:c.instructions+=2;goto B746167;
case 0x746168:c.instructions+=1;goto B746168;
case 0x74616d:goto L74616d;
case 0x746170:c.instructions+=2;goto B746170;
case 0x746172:c.instructions+=1;goto B746172;
case 0x746174:goto L746174;
case 0x74617a:c.instructions+=1;goto B74617a;
case 0x74617c:goto L74617c;
case 0x74617e:goto L74617e;
case 0x74617f:c.instructions+=3;goto B74617f;
case 0x746184:c.instructions+=2;goto B746184;
case 0x746185:c.instructions+=1;goto B746185;
case 0x74618a:goto L74618a;
case 0x74618d:goto L74618d;
case 0x74618f:c.instructions+=4;goto B74618f;
case 0x746195:c.instructions+=3;goto B746195;
case 0x746196:c.instructions+=2;goto B746196;
case 0x746197:c.instructions+=1;goto B746197;
case 0x74619c:goto L74619c;
case 0x7461a2:c.instructions+=4;goto B7461a2;
case 0x7461a5:c.instructions+=3;goto B7461a5;
case 0x7461a7:c.instructions+=2;goto B7461a7;
case 0x7461ab:c.instructions+=1;goto B7461ab;
case 0x7461ad:goto L7461ad;
case 0x7461ae:c.instructions+=2;goto B7461ae;
case 0x7461af:c.instructions+=1;goto B7461af;
case 0x7461b4:goto L7461b4;
case 0x7461b6:c.instructions+=3;goto B7461b6;
case 0x7461b9:c.instructions+=2;goto B7461b9;
case 0x7461bb:c.instructions+=1;goto B7461bb;
case 0x7461bd:goto L7461bd;
case 0x7461c3:c.instructions+=3;goto B7461c3;
case 0x7461c5:c.instructions+=2;goto B7461c5;
case 0x7461cb:c.instructions+=1;goto B7461cb;
case 0x7461cd:goto L7461cd;
case 0x7461cf:c.instructions+=1;goto B7461cf;
case 0x7461d1:goto L7461d1;
case 0x7461d3:goto L7461d3;
case 0x7461d5:c.instructions+=4;goto B7461d5;
case 0x7461d8:c.instructions+=3;goto B7461d8;
case 0x7461d9:c.instructions+=2;goto B7461d9;
case 0x7461db:c.instructions+=1;goto B7461db;
case 0x7461dd:goto L7461dd;
case 0x7461de:c.instructions+=1;goto B7461de;
case 0x7461e3:goto L7461e3;
case 0x7461e7:c.instructions+=5;goto B7461e7;
case 0x7461ed:c.instructions+=4;goto B7461ed;
case 0x7461ee:c.instructions+=3;goto B7461ee;
case 0x7461ef:c.instructions+=2;goto B7461ef;
case 0x7461f0:c.instructions+=1;goto B7461f0;
case 0x7461f5:goto L7461f5;
case 0x7461f8:c.instructions+=1;goto B7461f8;
case 0x7461fa:goto L7461fa;
case 0x7461fb:c.instructions+=2;goto B7461fb;
case 0x7461fc:c.instructions+=1;goto B7461fc;
case 0x746201:goto L746201;
case 0x746207:c.instructions+=5;goto B746207;
case 0x746208:c.instructions+=4;goto B746208;
case 0x74620a:c.instructions+=3;goto B74620a;
case 0x74620b:c.instructions+=2;goto B74620b;
case 0x74620c:c.instructions+=1;goto B74620c;
case 0x746211:goto L746211;
case 0x746213:goto L746213;
case 0x746219:c.instructions+=3;goto B746219;
case 0x74621a:c.instructions+=2;goto B74621a;
case 0x74621b:c.instructions+=1;goto B74621b;
case 0x746220:goto L746220;
case 0x746222:c.instructions+=3;goto B746222;
case 0x746225:c.instructions+=2;goto B746225;
case 0x746227:c.instructions+=1;goto B746227;
case 0x746229:goto L746229;
case 0x74622f:c.instructions+=3;goto B74622f;
case 0x746230:c.instructions+=2;goto B746230;
case 0x746231:c.instructions+=1;goto B746231;
case 0x746236:goto L746236;
case 0x74623c:c.instructions+=3;goto B74623c;
case 0x74623d:c.instructions+=2;goto B74623d;
case 0x74623e:c.instructions+=1;goto B74623e;
case 0x746243:goto L746243;
case 0x746244:c.instructions+=1;goto B746244;
case 0x746249:goto L746249;
case 0x74624c:goto L74624c;
case 0x746250:c.instructions+=2;goto B746250;
case 0x746256:c.instructions+=1;goto B746256;
case 0x74625c:goto L74625c;
case 0x746262:c.instructions+=2;goto B746262;
case 0x746264:c.instructions+=1;goto B746264;
case 0x74626a:goto L74626a;
case 0x74626e:c.instructions+=7;goto B74626e;
case 0x746273:c.instructions+=6;goto B746273;
case 0x746278:c.instructions+=5;goto B746278;
case 0x74627f:c.instructions+=4;goto B74627f;
case 0x746280:c.instructions+=3;goto B746280;
case 0x746285:c.instructions+=2;goto B746285;
case 0x746286:c.instructions+=1;goto B746286;
case 0x74628b:goto L74628b;
case 0x74628e:c.instructions+=2;goto B74628e;
case 0x74628f:c.instructions+=1;goto B74628f;
case 0x746294:goto L746294;
case 0x74629b:c.instructions+=4;goto B74629b;
case 0x74629e:c.instructions+=3;goto B74629e;
case 0x7462a0:c.instructions+=2;goto B7462a0;
case 0x7462a7:c.instructions+=1;goto B7462a7;
case 0x7462ad:goto L7462ad;
case 0x7462b0:goto L7462b0;
case 0x7462b2:c.instructions+=4;goto B7462b2;
case 0x7462b4:c.instructions+=3;goto B7462b4;
case 0x7462b6:c.instructions+=2;goto B7462b6;
case 0x7462b8:c.instructions+=1;goto B7462b8;
case 0x7462be:goto L7462be;
case 0x7462c0:goto L7462c0;
case 0x7462c2:c.instructions+=1;goto B7462c2;
case 0x7462c4:goto L7462c4;
case 0x7462c7:c.instructions+=6;goto B7462c7;
case 0x7462ca:c.instructions+=5;goto B7462ca;
case 0x7462cb:c.instructions+=4;goto B7462cb;
case 0x7462ce:c.instructions+=3;goto B7462ce;
case 0x7462d0:c.instructions+=2;goto B7462d0;
case 0x7462d2:c.instructions+=1;goto B7462d2;
case 0x7462d4:goto L7462d4;
case 0x7462d6:c.instructions+=1;goto B7462d6;
case 0x7462dc:goto L7462dc;
case 0x7462df:c.instructions+=1;goto B7462df;
case 0x7462e1:goto L7462e1;
case 0x7462e2:goto L7462e2;
case 0x7462e4:c.instructions+=4;goto B7462e4;
case 0x7462e6:c.instructions+=3;goto B7462e6;
case 0x7462e8:c.instructions+=2;goto B7462e8;
case 0x7462ea:c.instructions+=1;goto B7462ea;
case 0x7462ec:goto L7462ec;
case 0x7462f0:goto L7462f0;
case 0x7462f2:c.instructions+=1;goto B7462f2;
case 0x7462f4:goto L7462f4;
case 0x7462f7:c.instructions+=6;goto B7462f7;
case 0x7462fa:c.instructions+=5;goto B7462fa;
case 0x7462fb:c.instructions+=4;goto B7462fb;
case 0x7462fe:c.instructions+=3;goto B7462fe;
case 0x746300:c.instructions+=2;goto B746300;
case 0x746302:c.instructions+=1;goto B746302;
case 0x746304:goto L746304;
case 0x746307:c.instructions+=1;goto B746307;
case 0x746309:goto L746309;
case 0x74630a:goto L74630a;
case 0x746310:c.instructions+=1;goto B746310;
case 0x746312:goto L746312;
case 0x746318:c.instructions+=2;goto B746318;
case 0x74631a:c.instructions+=1;goto B74631a;
case 0x74631c:goto L74631c;
case 0x74631d:c.instructions+=2;goto B74631d;
case 0x74631e:c.instructions+=1;goto B74631e;
case 0x746323:goto L746323;
case 0x746326:c.instructions+=3;goto B746326;
case 0x746328:c.instructions+=2;goto B746328;
case 0x74632c:c.instructions+=1;goto B74632c;
case 0x74632e:goto L74632e;
case 0x746334:c.instructions+=3;goto B746334;
case 0x746335:c.instructions+=2;goto B746335;
case 0x746336:c.instructions+=1;goto B746336;
case 0x74633b:goto L74633b;
case 0x74633d:c.instructions+=3;goto B74633d;
case 0x746340:c.instructions+=2;goto B746340;
case 0x746342:c.instructions+=1;goto B746342;
case 0x746344:goto L746344;
case 0x746347:c.instructions+=1;goto B746347;
case 0x746349:goto L746349;
case 0x74634a:c.instructions+=5;goto B74634a;
case 0x74634d:c.instructions+=4;goto B74634d;
case 0x746352:c.instructions+=3;goto B746352;
case 0x746353:c.instructions+=2;goto B746353;
case 0x746356:c.instructions+=1;goto B746356;
case 0x74635b:goto L74635b;
case 0x74635f:c.instructions+=5;goto B74635f;
case 0x746365:c.instructions+=4;goto B746365;
case 0x746366:c.instructions+=3;goto B746366;
case 0x746367:c.instructions+=2;goto B746367;
case 0x746368:c.instructions+=1;goto B746368;
case 0x74636d:goto L74636d;
case 0x746370:goto L746370;
case 0x746373:c.instructions+=1;goto B746373;
case 0x746379:goto L746379;
case 0x74637d:c.instructions+=2;goto B74637d;
case 0x746383:c.instructions+=1;goto B746383;
case 0x746389:goto L746389;
case 0x74638f:c.instructions+=2;goto B74638f;
case 0x746391:c.instructions+=1;goto B746391;
case 0x746397:goto L746397;
case 0x74639b:c.instructions+=4;goto B74639b;
case 0x74639d:c.instructions+=3;goto B74639d;
case 0x7463a2:c.instructions+=2;goto B7463a2;
case 0x7463a3:c.instructions+=1;goto B7463a3;
case 0x7463a8:goto L7463a8;
case 0x7463ab:c.instructions+=2;goto B7463ab;
case 0x7463ac:c.instructions+=1;goto B7463ac;
case 0x7463b1:goto L7463b1;
case 0x7463b3:c.instructions+=3;goto B7463b3;
case 0x7463b6:c.instructions+=2;goto B7463b6;
case 0x7463b8:c.instructions+=1;goto B7463b8;
case 0x7463be:goto L7463be;
case 0x7463c2:c.instructions+=3;goto B7463c2;
case 0x7463c7:c.instructions+=2;goto B7463c7;
case 0x7463c8:c.instructions+=1;goto B7463c8;
case 0x7463cd:goto L7463cd;
case 0x7463d0:c.instructions+=2;goto B7463d0;
case 0x7463d2:c.instructions+=1;goto B7463d2;
case 0x7463d8:goto L7463d8;
case 0x7463dd:c.instructions+=1;goto B7463dd;
case 0x7463e2:goto L7463e2;
case 0x7463e4:c.instructions+=3;goto B7463e4;
case 0x7463e6:c.instructions+=2;goto B7463e6;
case 0x7463eb:c.instructions+=1;goto B7463eb;
case 0x7463ed:goto L7463ed;
case 0x7463ef:goto L7463ef;
case 0x7463f3:c.instructions+=3;goto B7463f3;
case 0x7463f4:c.instructions+=2;goto B7463f4;
case 0x7463f5:c.instructions+=1;goto B7463f5;
case 0x7463fa:goto L7463fa;
case 0x7463fd:c.instructions+=4;goto B7463fd;
case 0x746403:c.instructions+=3;goto B746403;
case 0x746404:c.instructions+=2;goto B746404;
case 0x746405:c.instructions+=1;goto B746405;
case 0x74640a:goto L74640a;
case 0x746410:c.instructions+=4;goto B746410;
case 0x746413:c.instructions+=3;goto B746413;
case 0x746415:c.instructions+=2;goto B746415;
case 0x746419:c.instructions+=1;goto B746419;
case 0x74641b:goto L74641b;
case 0x74641d:c.instructions+=3;goto B74641d;
case 0x74641e:c.instructions+=2;goto B74641e;
case 0x74641f:c.instructions+=1;goto B74641f;
case 0x746424:goto L746424;
case 0x746425:c.instructions+=5;goto B746425;
case 0x746427:c.instructions+=4;goto B746427;
case 0x74642b:c.instructions+=3;goto B74642b;
case 0x74642f:c.instructions+=2;goto B74642f;
case 0x746434:c.instructions+=1;goto B746434;
case 0x746436:goto L746436;
case 0x746438:goto L746438;
case 0x74643e:c.instructions+=3;goto B74643e;
case 0x74643f:c.instructions+=2;goto B74643f;
case 0x746440:c.instructions+=1;goto B746440;
case 0x746445:goto L746445;
case 0x746446:c.instructions+=1;goto B746446;
case 0x74644b:goto L74644b;
case 0x74644f:c.instructions+=2;goto B74644f;
case 0x746452:c.instructions+=1;goto B746452;
case 0x746454:goto L746454;
case 0x746455:c.instructions+=2;goto B746455;
case 0x746456:c.instructions+=1;goto B746456;
case 0x74645b:goto L74645b;
case 0x746461:c.instructions+=5;goto B746461;
case 0x746462:c.instructions+=4;goto B746462;
case 0x746465:c.instructions+=3;goto B746465;
case 0x746466:c.instructions+=2;goto B746466;
case 0x746467:c.instructions+=1;goto B746467;
case 0x74646c:goto L74646c;
case 0x74646f:goto L74646f;
case 0x746476:c.instructions+=1;goto B746476;
case 0x746478:goto L746478;
case 0x74647e:c.instructions+=2;goto B74647e;
case 0x746483:c.instructions+=1;goto B746483;
case 0x746485:goto L746485;
case 0x746487:goto L746487;
case 0x746489:goto L746489;
case 0x74648f:c.instructions+=3;goto B74648f;
case 0x746490:c.instructions+=2;goto B746490;
case 0x746491:c.instructions+=1;goto B746491;
case 0x746496:goto L746496;
case 0x746498:c.instructions+=3;goto B746498;
case 0x74649b:c.instructions+=2;goto B74649b;
case 0x74649d:c.instructions+=1;goto B74649d;
case 0x74649f:goto L74649f;
case 0x7464a5:c.instructions+=3;goto B7464a5;
case 0x7464a6:c.instructions+=2;goto B7464a6;
case 0x7464a7:c.instructions+=1;goto B7464a7;
case 0x7464ac:goto L7464ac;
case 0x7464b2:c.instructions+=3;goto B7464b2;
case 0x7464b3:c.instructions+=2;goto B7464b3;
case 0x7464b4:c.instructions+=1;goto B7464b4;
case 0x7464b9:goto L7464b9;
case 0x7464ba:c.instructions+=1;goto B7464ba;
case 0x7464bf:goto L7464bf;
case 0x7464c2:goto L7464c2;
case 0x7464c6:c.instructions+=4;goto B7464c6;
case 0x7464c8:c.instructions+=3;goto B7464c8;
case 0x7464cd:c.instructions+=2;goto B7464cd;
case 0x7464ce:c.instructions+=1;goto B7464ce;
case 0x7464d3:goto L7464d3;
case 0x7464d6:c.instructions+=2;goto B7464d6;
case 0x7464d7:c.instructions+=1;goto B7464d7;
case 0x7464dc:goto L7464dc;
case 0x7464e2:c.instructions+=2;goto B7464e2;
case 0x7464e3:c.instructions+=1;goto B7464e3;
case 0x7464e8:goto L7464e8;
case 0x7464eb:goto L7464eb;
case 0x7464f3:c.instructions+=1;goto B7464f3;
case 0x7464f9:goto L7464f9;
case 0x7464fe:c.instructions+=1;goto B7464fe;
case 0x746503:goto L746503;
case 0x746507:c.instructions+=3;goto B746507;
case 0x74650a:c.instructions+=2;goto B74650a;
case 0x74650c:c.instructions+=1;goto B74650c;
case 0x746511:goto L746511;
case 0x746517:c.instructions+=2;goto B746517;
case 0x746519:c.instructions+=1;goto B746519;
case 0x74651b:goto L74651b;
case 0x74651e:c.instructions+=3;goto B74651e;
case 0x74651f:c.instructions+=2;goto B74651f;
case 0x746520:c.instructions+=1;goto B746520;
case 0x746525:goto L746525;
case 0x746528:c.instructions+=4;goto B746528;
case 0x74652c:c.instructions+=3;goto B74652c;
case 0x74652e:c.instructions+=2;goto B74652e;
case 0x746534:c.instructions+=1;goto B746534;
case 0x746536:goto L746536;
case 0x746537:c.instructions+=2;goto B746537;
case 0x746538:c.instructions+=1;goto B746538;
case 0x74653d:goto L74653d;
case 0x746543:c.instructions+=4;goto B746543;
case 0x746544:c.instructions+=3;goto B746544;
case 0x746545:c.instructions+=2;goto B746545;
case 0x746546:c.instructions+=1;goto B746546;
case 0x74654b:goto L74654b;
case 0x74654e:c.instructions+=1;goto B74654e;
case 0x746550:goto L746550;
case 0x746554:c.instructions+=3;goto B746554;
case 0x746555:c.instructions+=2;goto B746555;
case 0x746556:c.instructions+=1;goto B746556;
case 0x74655b:goto L74655b;
case 0x74655d:c.instructions+=2;goto B74655d;
case 0x746562:c.instructions+=1;goto B746562;
case 0x746564:goto L746564;
case 0x746566:goto L746566;
case 0x74656a:c.instructions+=5;goto B74656a;
case 0x746570:c.instructions+=4;goto B746570;
case 0x746571:c.instructions+=3;goto B746571;
case 0x746572:c.instructions+=2;goto B746572;
case 0x746573:c.instructions+=1;goto B746573;
case 0x746578:goto L746578;
case 0x746579:c.instructions+=1;goto B746579;
case 0x74657e:goto L74657e;
case 0x746581:goto L746581;
case 0x746589:c.instructions+=1;goto B746589;
case 0x74658f:goto L74658f;
case 0x746593:c.instructions+=5;goto B746593;
case 0x746595:c.instructions+=4;goto B746595;
case 0x746596:c.instructions+=3;goto B746596;
case 0x74659b:c.instructions+=2;goto B74659b;
case 0x74659c:c.instructions+=1;goto B74659c;
case 0x7465a1:goto L7465a1;
case 0x7465a4:c.instructions+=2;goto B7465a4;
case 0x7465a5:c.instructions+=1;goto B7465a5;
case 0x7465aa:goto L7465aa;
case 0x7465ae:c.instructions+=4;goto B7465ae;
case 0x7465b3:c.instructions+=3;goto B7465b3;
case 0x7465b4:c.instructions+=2;goto B7465b4;
case 0x7465b6:c.instructions+=1;goto B7465b6;
case 0x7465bb:goto L7465bb;
case 0x7465be:c.instructions+=2;goto B7465be;
case 0x7465c0:c.instructions+=1;goto B7465c0;
case 0x7465c2:goto L7465c2;
case 0x7465c5:c.instructions+=3;goto B7465c5;
case 0x7465c7:c.instructions+=2;goto B7465c7;
case 0x7465cd:c.instructions+=1;goto B7465cd;
case 0x7465d0:goto L7465d0;
case 0x7465d2:c.instructions+=2;goto B7465d2;
case 0x7465d4:c.instructions+=1;goto B7465d4;
case 0x7465d6:goto L7465d6;
case 0x7465d8:goto L7465d8;
case 0x7465da:c.instructions+=1;goto B7465da;
case 0x7465dc:goto L7465dc;
case 0x7465dd:c.instructions+=3;goto B7465dd;
case 0x7465e3:c.instructions+=2;goto B7465e3;
case 0x7465e6:c.instructions+=1;goto B7465e6;
case 0x7465e8:goto L7465e8;
case 0x7465ea:goto L7465ea;
case 0x7465ec:goto L7465ec;
case 0x7465ef:c.instructions+=1;goto B7465ef;
case 0x7465f1:goto L7465f1;
case 0x7465f7:c.instructions+=3;goto B7465f7;
case 0x7465fe:c.instructions+=2;goto B7465fe;
case 0x746602:c.instructions+=1;goto B746602;
case 0x746607:goto L746607;
case 0x746609:goto L746609;
case 0x74660b:c.instructions+=1;goto B74660b;
case 0x746611:goto L746611;
case 0x746613:c.instructions+=1;goto B746613;
case 0x746615:goto L746615;
case 0x746616:c.instructions+=3;goto B746616;
case 0x74661b:c.instructions+=2;goto B74661b;
case 0x74661e:c.instructions+=1;goto B74661e;
case 0x746620:goto L746620;
case 0x746622:goto L746622;
case 0x746624:c.instructions+=3;goto B746624;
case 0x74662a:c.instructions+=2;goto B74662a;
case 0x74662f:c.instructions+=1;goto B74662f;
case 0x746636:goto L746636;
case 0x746638:goto L746638;
case 0x74663c:c.instructions+=7;goto B74663c;
case 0x746640:c.instructions+=6;goto B746640;
case 0x746648:c.instructions+=5;goto B746648;
case 0x746650:c.instructions+=4;goto B746650;
case 0x746654:c.instructions+=3;goto B746654;
case 0x746658:c.instructions+=2;goto B746658;
case 0x74665e:c.instructions+=1;goto B74665e;
case 0x746663:goto L746663;
case 0x746667:c.instructions+=2;goto B746667;
case 0x74666a:c.instructions+=1;goto B74666a;
case 0x74666c:goto L74666c;
case 0x74666f:c.instructions+=5;goto B74666f;
case 0x746670:c.instructions+=4;goto B746670;
case 0x746674:c.instructions+=3;goto B746674;
case 0x746675:c.instructions+=2;goto B746675;
case 0x746676:c.instructions+=1;goto B746676;
case 0x746678:goto L746678;
case 0x74667b:goto L74667b;
case 0x74667e:c.instructions+=2;goto B74667e;
case 0x74667f:c.instructions+=1;goto B74667f;
case 0x746681:goto L746681;
case 0x746689:c.instructions+=1;goto B746689;
case 0x74668f:goto L74668f;
case 0x746693:c.instructions+=4;goto B746693;
case 0x746695:c.instructions+=3;goto B746695;
case 0x74669a:c.instructions+=2;goto B74669a;
case 0x74669b:c.instructions+=1;goto B74669b;
case 0x7466a0:goto L7466a0;
case 0x7466a3:c.instructions+=2;goto B7466a3;
case 0x7466a4:c.instructions+=1;goto B7466a4;
case 0x7466a9:goto L7466a9;
case 0x7466ac:c.instructions+=2;goto B7466ac;
case 0x7466ae:c.instructions+=1;goto B7466ae;
case 0x7466b4:goto L7466b4;
case 0x7466b7:c.instructions+=1;goto B7466b7;
case 0x7466bd:goto L7466bd;
case 0x7466c0:c.instructions+=5;goto B7466c0;
case 0x7466c7:c.instructions+=4;goto B7466c7;
case 0x7466c9:c.instructions+=3;goto B7466c9;
case 0x7466cc:c.instructions+=2;goto B7466cc;
case 0x7466d0:c.instructions+=1;goto B7466d0;
case 0x7466d6:goto L7466d6;
case 0x7466da:c.instructions+=4;goto B7466da;
case 0x7466dc:c.instructions+=3;goto B7466dc;
case 0x7466e1:c.instructions+=2;goto B7466e1;
case 0x7466e2:c.instructions+=1;goto B7466e2;
case 0x7466e7:goto L7466e7;
case 0x7466ea:c.instructions+=2;goto B7466ea;
case 0x7466eb:c.instructions+=1;goto B7466eb;
case 0x7466f0:goto L7466f0;
case 0x7466f2:c.instructions+=4;goto B7466f2;
case 0x7466f6:c.instructions+=3;goto B7466f6;
case 0x7466fb:c.instructions+=2;goto B7466fb;
case 0x7466fc:c.instructions+=1;goto B7466fc;
case 0x746701:goto L746701;
case 0x746704:c.instructions+=2;goto B746704;
case 0x746706:c.instructions+=1;goto B746706;
case 0x74670c:goto L74670c;
case 0x74670e:c.instructions+=1;goto B74670e;
case 0x746713:goto L746713;
case 0x746715:c.instructions+=19;goto B746715;
case 0x746717:c.instructions+=18;goto B746717;
case 0x746719:c.instructions+=17;goto B746719;
case 0x74671b:c.instructions+=16;goto B74671b;
case 0x74671e:c.instructions+=15;goto B74671e;
case 0x746721:c.instructions+=14;goto B746721;
case 0x746724:c.instructions+=13;goto B746724;
case 0x746727:c.instructions+=12;goto B746727;
case 0x74672a:c.instructions+=11;goto B74672a;
case 0x74672f:c.instructions+=10;goto B74672f;
case 0x746732:c.instructions+=9;goto B746732;
case 0x746734:c.instructions+=8;goto B746734;
case 0x746737:c.instructions+=7;goto B746737;
case 0x74673a:c.instructions+=6;goto B74673a;
case 0x74673b:c.instructions+=5;goto B74673b;
case 0x74673e:c.instructions+=4;goto B74673e;
case 0x746742:c.instructions+=3;goto B746742;
case 0x746747:c.instructions+=2;goto B746747;
case 0x746748:c.instructions+=1;goto B746748;
case 0x74674d:goto L74674d;
case 0x746750:c.instructions+=2;goto B746750;
case 0x746751:c.instructions+=1;goto B746751;
case 0x746756:goto L746756;
case 0x74675a:c.instructions+=5;goto B74675a;
case 0x74675d:c.instructions+=4;goto B74675d;
case 0x74675f:c.instructions+=3;goto B74675f;
case 0x746764:c.instructions+=2;goto B746764;
case 0x746765:c.instructions+=1;goto B746765;
case 0x74676a:goto L74676a;
case 0x74676d:c.instructions+=2;goto B74676d;
case 0x74676e:c.instructions+=1;goto B74676e;
case 0x746773:goto L746773;
case 0x746776:c.instructions+=6;goto B746776;
case 0x746778:c.instructions+=5;goto B746778;
case 0x74677b:c.instructions+=4;goto B74677b;
case 0x74677f:c.instructions+=3;goto B74677f;
case 0x746784:c.instructions+=2;goto B746784;
case 0x746785:c.instructions+=1;goto B746785;
case 0x74678a:goto L74678a;
case 0x74678d:c.instructions+=2;goto B74678d;
case 0x74678e:c.instructions+=1;goto B74678e;
case 0x746793:goto L746793;
case 0x746796:c.instructions+=6;goto B746796;
case 0x746799:c.instructions+=5;goto B746799;
case 0x74679b:c.instructions+=4;goto B74679b;
case 0x7467a1:c.instructions+=3;goto B7467a1;
case 0x7467a2:c.instructions+=2;goto B7467a2;
case 0x7467a3:c.instructions+=1;goto B7467a3;
case 0x7467a8:goto L7467a8;
case 0x7467ab:c.instructions+=3;goto B7467ab;
case 0x7467ad:c.instructions+=2;goto B7467ad;
case 0x7467b1:c.instructions+=1;goto B7467b1;
case 0x7467b3:goto L7467b3;
case 0x7467b5:c.instructions+=4;goto B7467b5;
case 0x7467bb:c.instructions+=3;goto B7467bb;
case 0x7467bc:c.instructions+=2;goto B7467bc;
case 0x7467bd:c.instructions+=1;goto B7467bd;
case 0x7467c2:goto L7467c2;
case 0x7467c4:c.instructions+=4;goto B7467c4;
case 0x7467c5:c.instructions+=3;goto B7467c5;
case 0x7467c9:c.instructions+=2;goto B7467c9;
case 0x7467ce:c.instructions+=1;goto B7467ce;
case 0x7467d0:goto L7467d0;
case 0x7467d2:goto L7467d2;
case 0x7467d6:c.instructions+=4;goto B7467d6;
case 0x7467dc:c.instructions+=3;goto B7467dc;
case 0x7467dd:c.instructions+=2;goto B7467dd;
case 0x7467de:c.instructions+=1;goto B7467de;
case 0x7467e3:goto L7467e3;
case 0x7467e4:c.instructions+=1;goto B7467e4;
case 0x7467e9:goto L7467e9;
case 0x7467ec:c.instructions+=1;goto B7467ec;
case 0x7467ee:goto L7467ee;
case 0x7467f4:c.instructions+=3;goto B7467f4;
case 0x7467f5:c.instructions+=2;goto B7467f5;
case 0x7467f6:c.instructions+=1;goto B7467f6;
case 0x7467fb:goto L7467fb;
case 0x7467fe:c.instructions+=5;goto B7467fe;
case 0x746804:c.instructions+=4;goto B746804;
case 0x746805:c.instructions+=3;goto B746805;
case 0x746806:c.instructions+=2;goto B746806;
case 0x746807:c.instructions+=1;goto B746807;
case 0x74680c:goto L74680c;
case 0x74680e:goto L74680e;
case 0x746814:c.instructions+=3;goto B746814;
case 0x746815:c.instructions+=2;goto B746815;
case 0x746816:c.instructions+=1;goto B746816;
case 0x74681b:goto L74681b;
case 0x74681d:c.instructions+=3;goto B74681d;
case 0x746820:c.instructions+=2;goto B746820;
case 0x746822:c.instructions+=1;goto B746822;
case 0x746824:goto L746824;
case 0x74682a:c.instructions+=3;goto B74682a;
case 0x74682b:c.instructions+=2;goto B74682b;
case 0x74682c:c.instructions+=1;goto B74682c;
case 0x746831:goto L746831;
case 0x746837:c.instructions+=3;goto B746837;
case 0x746838:c.instructions+=2;goto B746838;
case 0x746839:c.instructions+=1;goto B746839;
case 0x74683e:goto L74683e;
case 0x74683f:c.instructions+=1;goto B74683f;
case 0x746844:goto L746844;
case 0x746847:goto L746847;
case 0x74684b:c.instructions+=2;goto B74684b;
case 0x746851:c.instructions+=1;goto B746851;
case 0x746857:goto L746857;
case 0x74685d:c.instructions+=2;goto B74685d;
case 0x74685f:c.instructions+=1;goto B74685f;
case 0x746865:goto L746865;
case 0x746869:c.instructions+=4;goto B746869;
case 0x74686b:c.instructions+=3;goto B74686b;
case 0x746870:c.instructions+=2;goto B746870;
case 0x746871:c.instructions+=1;goto B746871;
case 0x746876:goto L746876;
case 0x746879:c.instructions+=2;goto B746879;
case 0x74687a:c.instructions+=1;goto B74687a;
case 0x74687f:goto L74687f;
case 0x746882:c.instructions+=2;goto B746882;
case 0x746885:c.instructions+=1;goto B746885;
case 0x746887:goto L746887;
case 0x74688d:c.instructions+=2;goto B74688d;
case 0x74688e:c.instructions+=1;goto B74688e;
case 0x746893:goto L746893;
case 0x746896:c.instructions+=2;goto B746896;
case 0x746898:c.instructions+=1;goto B746898;
case 0x74689e:goto L74689e;
case 0x7468a0:goto L7468a0;
case 0x7468a6:c.instructions+=3;goto B7468a6;
case 0x7468a7:c.instructions+=2;goto B7468a7;
case 0x7468a8:c.instructions+=1;goto B7468a8;
case 0x7468ad:goto L7468ad;
case 0x7468ae:c.instructions+=1;goto B7468ae;
case 0x7468b3:goto L7468b3;
case 0x7468b9:c.instructions+=2;goto B7468b9;
case 0x7468ba:c.instructions+=1;goto B7468ba;
case 0x7468bf:goto L7468bf;
case 0x7468c2:c.instructions+=2;goto B7468c2;
case 0x7468c4:c.instructions+=1;goto B7468c4;
case 0x7468c6:goto L7468c6;
case 0x7468cb:goto L7468cb;
case 0x7468d0:c.instructions+=1;goto B7468d0;
case 0x7468d5:goto L7468d5;
case 0x7468d8:c.instructions+=9;goto B7468d8;
case 0x7468da:c.instructions+=8;goto B7468da;
case 0x7468dc:c.instructions+=7;goto B7468dc;
case 0x7468dd:c.instructions+=6;goto B7468dd;
case 0x7468e0:c.instructions+=5;goto B7468e0;
case 0x7468e3:c.instructions+=4;goto B7468e3;
case 0x7468e7:c.instructions+=3;goto B7468e7;
case 0x7468ec:c.instructions+=2;goto B7468ec;
case 0x7468ed:c.instructions+=1;goto B7468ed;
case 0x7468f2:goto L7468f2;
case 0x7468f5:c.instructions+=2;goto B7468f5;
case 0x7468f6:c.instructions+=1;goto B7468f6;
case 0x7468fb:goto L7468fb;
case 0x7468fe:c.instructions+=9;goto B7468fe;
case 0x746903:c.instructions+=8;goto B746903;
case 0x746905:c.instructions+=7;goto B746905;
case 0x746908:c.instructions+=6;goto B746908;
case 0x746909:c.instructions+=5;goto B746909;
case 0x74690c:c.instructions+=4;goto B74690c;
case 0x746910:c.instructions+=3;goto B746910;
case 0x746915:c.instructions+=2;goto B746915;
case 0x746916:c.instructions+=1;goto B746916;
case 0x74691b:goto L74691b;
case 0x74691e:c.instructions+=2;goto B74691e;
case 0x74691f:c.instructions+=1;goto B74691f;
case 0x746924:goto L746924;
case 0x746928:c.instructions+=8;goto B746928;
case 0x74692b:c.instructions+=7;goto B74692b;
case 0x746930:c.instructions+=6;goto B746930;
case 0x746935:c.instructions+=5;goto B746935;
case 0x746938:c.instructions+=4;goto B746938;
case 0x746939:c.instructions+=3;goto B746939;
case 0x74693e:c.instructions+=2;goto B74693e;
case 0x74693f:c.instructions+=1;goto B74693f;
case 0x746944:goto L746944;
case 0x746947:c.instructions+=2;goto B746947;
case 0x746948:c.instructions+=1;goto B746948;
case 0x74694d:goto L74694d;
case 0x746953:c.instructions+=3;goto B746953;
case 0x746954:c.instructions+=2;goto B746954;
case 0x746955:c.instructions+=1;goto B746955;
case 0x74695a:goto L74695a;
case 0x74695d:c.instructions+=3;goto B74695d;
case 0x74695f:c.instructions+=2;goto B74695f;
case 0x746963:c.instructions+=1;goto B746963;
case 0x746965:goto L746965;
case 0x746968:c.instructions+=1;goto B746968;
case 0x74696e:goto L74696e;
case 0x746974:c.instructions+=3;goto B746974;
case 0x746975:c.instructions+=2;goto B746975;
case 0x746976:c.instructions+=1;goto B746976;
case 0x74697b:goto L74697b;
case 0x746981:c.instructions+=4;goto B746981;
case 0x746982:c.instructions+=3;goto B746982;
case 0x746983:c.instructions+=2;goto B746983;
case 0x746984:c.instructions+=1;goto B746984;
case 0x746989:goto L746989;
case 0x74698c:c.instructions+=1;goto B74698c;
case 0x74698e:goto L74698e;
case 0x746991:c.instructions+=2;goto B746991;
case 0x746993:c.instructions+=1;goto B746993;
case 0x746995:goto L746995;
case 0x746999:c.instructions+=4;goto B746999;
case 0x74699f:c.instructions+=3;goto B74699f;
case 0x7469a0:c.instructions+=2;goto B7469a0;
case 0x7469a1:c.instructions+=1;goto B7469a1;
case 0x7469a6:goto L7469a6;
case 0x7469a8:c.instructions+=2;goto B7469a8;
case 0x7469ad:c.instructions+=1;goto B7469ad;
case 0x7469af:goto L7469af;
case 0x7469b1:goto L7469b1;
case 0x7469b5:c.instructions+=5;goto B7469b5;
case 0x7469bb:c.instructions+=4;goto B7469bb;
case 0x7469bc:c.instructions+=3;goto B7469bc;
case 0x7469bd:c.instructions+=2;goto B7469bd;
case 0x7469be:c.instructions+=1;goto B7469be;
case 0x7469c3:goto L7469c3;
case 0x7469c4:c.instructions+=1;goto B7469c4;
case 0x7469c9:goto L7469c9;
case 0x7469cc:c.instructions+=1;goto B7469cc;
case 0x7469ce:goto L7469ce;
case 0x7469d1:c.instructions+=1;goto B7469d1;
case 0x7469d3:goto L7469d3;
case 0x7469d9:c.instructions+=3;goto B7469d9;
case 0x7469da:c.instructions+=2;goto B7469da;
case 0x7469db:c.instructions+=1;goto B7469db;
case 0x7469e0:goto L7469e0;
case 0x7469e6:c.instructions+=3;goto B7469e6;
case 0x7469e7:c.instructions+=2;goto B7469e7;
case 0x7469e8:c.instructions+=1;goto B7469e8;
case 0x7469ed:goto L7469ed;
case 0x7469ee:c.instructions+=1;goto B7469ee;
case 0x7469f3:goto L7469f3;
case 0x7469f4:c.instructions+=1;goto B7469f4;
case 0x7469f9:goto L7469f9;
case 0x7469fc:c.instructions+=1;goto B7469fc;
case 0x7469fe:goto L7469fe;
case 0x7469ff:c.instructions+=1;goto B7469ff;
case 0x746a04:goto L746a04;
case 0x746a07:goto L746a07;
case 0x746a0b:c.instructions+=2;goto B746a0b;
case 0x746a11:c.instructions+=1;goto B746a11;
case 0x746a17:goto L746a17;
case 0x746a1d:c.instructions+=2;goto B746a1d;
case 0x746a20:c.instructions+=1;goto B746a20;
case 0x746a26:goto L746a26;
case 0x746a29:c.instructions+=1;goto B746a29;
case 0x746a2f:goto L746a2f;
case 0x746a32:c.instructions+=3;goto B746a32;
case 0x746a39:c.instructions+=2;goto B746a39;
case 0x746a3b:c.instructions+=1;goto B746a3b;
case 0x746a41:goto L746a41;
case 0x746a46:c.instructions+=1;goto B746a46;
case 0x746a4b:goto L746a4b;
case 0x746a4e:c.instructions+=6;goto B746a4e;
case 0x746a50:c.instructions+=5;goto B746a50;
case 0x746a52:c.instructions+=4;goto B746a52;
case 0x746a56:c.instructions+=3;goto B746a56;
case 0x746a5b:c.instructions+=2;goto B746a5b;
case 0x746a5c:c.instructions+=1;goto B746a5c;
case 0x746a61:goto L746a61;
case 0x746a64:c.instructions+=2;goto B746a64;
case 0x746a65:c.instructions+=1;goto B746a65;
case 0x746a6a:goto L746a6a;
case 0x746a6d:c.instructions+=6;goto B746a6d;
case 0x746a6f:c.instructions+=5;goto B746a6f;
case 0x746a72:c.instructions+=4;goto B746a72;
case 0x746a76:c.instructions+=3;goto B746a76;
case 0x746a7b:c.instructions+=2;goto B746a7b;
case 0x746a7c:c.instructions+=1;goto B746a7c;
case 0x746a81:goto L746a81;
case 0x746a84:c.instructions+=2;goto B746a84;
case 0x746a85:c.instructions+=1;goto B746a85;
case 0x746a8a:goto L746a8a;
case 0x746a8d:c.instructions+=7;goto B746a8d;
case 0x746a8f:c.instructions+=6;goto B746a8f;
case 0x746a92:c.instructions+=5;goto B746a92;
case 0x746a99:c.instructions+=4;goto B746a99;
case 0x746a9d:c.instructions+=3;goto B746a9d;
case 0x746aa2:c.instructions+=2;goto B746aa2;
case 0x746aa3:c.instructions+=1;goto B746aa3;
case 0x746aa8:goto L746aa8;
case 0x746aab:c.instructions+=2;goto B746aab;
case 0x746aac:c.instructions+=1;goto B746aac;
case 0x746ab1:goto L746ab1;
case 0x746ab4:c.instructions+=2;goto B746ab4;
case 0x746ab6:c.instructions+=1;goto B746ab6;
case 0x746ab8:goto L746ab8;
case 0x746abc:goto L746abc;
case 0x746ac0:c.instructions+=7;goto B746ac0;
case 0x746ac5:c.instructions+=6;goto B746ac5;
case 0x746ac7:c.instructions+=5;goto B746ac7;
case 0x746aca:c.instructions+=4;goto B746aca;
case 0x746acb:c.instructions+=3;goto B746acb;
case 0x746ad0:c.instructions+=2;goto B746ad0;
case 0x746ad1:c.instructions+=1;goto B746ad1;
case 0x746ad6:goto L746ad6;
case 0x746ad9:c.instructions+=2;goto B746ad9;
case 0x746ada:c.instructions+=1;goto B746ada;
case 0x746adf:goto L746adf;
case 0x746ae3:c.instructions+=8;goto B746ae3;
case 0x746ae6:c.instructions+=7;goto B746ae6;
case 0x746aeb:c.instructions+=6;goto B746aeb;
case 0x746af0:c.instructions+=5;goto B746af0;
case 0x746af3:c.instructions+=4;goto B746af3;
case 0x746af4:c.instructions+=3;goto B746af4;
case 0x746af9:c.instructions+=2;goto B746af9;
case 0x746afa:c.instructions+=1;goto B746afa;
case 0x746aff:goto L746aff;
case 0x746b02:c.instructions+=2;goto B746b02;
case 0x746b03:c.instructions+=1;goto B746b03;
case 0x746b08:goto L746b08;
case 0x746b0e:c.instructions+=3;goto B746b0e;
case 0x746b0f:c.instructions+=2;goto B746b0f;
case 0x746b10:c.instructions+=1;goto B746b10;
case 0x746b15:goto L746b15;
case 0x746b18:c.instructions+=2;goto B746b18;
case 0x746b1a:c.instructions+=1;goto B746b1a;
case 0x746b1c:goto L746b1c;
case 0x746b20:goto L746b20;
case 0x746b26:c.instructions+=5;goto B746b26;
case 0x746b29:c.instructions+=4;goto B746b29;
case 0x746b30:c.instructions+=3;goto B746b30;
case 0x746b31:c.instructions+=2;goto B746b31;
case 0x746b32:c.instructions+=1;goto B746b32;
case 0x746b37:goto L746b37;
case 0x746b3a:c.instructions+=4;goto B746b3a;
case 0x746b3e:c.instructions+=3;goto B746b3e;
case 0x746b40:c.instructions+=2;goto B746b40;
case 0x746b46:c.instructions+=1;goto B746b46;
case 0x746b48:goto L746b48;
case 0x746b4b:c.instructions+=4;goto B746b4b;
case 0x746b52:c.instructions+=3;goto B746b52;
case 0x746b53:c.instructions+=2;goto B746b53;
case 0x746b54:c.instructions+=1;goto B746b54;
case 0x746b59:goto L746b59;
case 0x746b5a:c.instructions+=6;goto B746b5a;
case 0x746b60:c.instructions+=5;goto B746b60;
case 0x746b63:c.instructions+=4;goto B746b63;
case 0x746b6a:c.instructions+=3;goto B746b6a;
case 0x746b6b:c.instructions+=2;goto B746b6b;
case 0x746b6c:c.instructions+=1;goto B746b6c;
case 0x746b71:goto L746b71;
case 0x746b74:c.instructions+=1;goto B746b74;
case 0x746b76:goto L746b76;
case 0x746b7a:c.instructions+=5;goto B746b7a;
case 0x746b7d:c.instructions+=4;goto B746b7d;
case 0x746b84:c.instructions+=3;goto B746b84;
case 0x746b85:c.instructions+=2;goto B746b85;
case 0x746b86:c.instructions+=1;goto B746b86;
case 0x746b8b:goto L746b8b;
case 0x746b8d:c.instructions+=3;goto B746b8d;
case 0x746b8e:c.instructions+=2;goto B746b8e;
case 0x746b93:c.instructions+=1;goto B746b93;
case 0x746b95:goto L746b95;
case 0x746b97:goto L746b97;
case 0x746b9d:c.instructions+=6;goto B746b9d;
case 0x746ba1:c.instructions+=5;goto B746ba1;
case 0x746ba4:c.instructions+=4;goto B746ba4;
case 0x746bab:c.instructions+=3;goto B746bab;
case 0x746bac:c.instructions+=2;goto B746bac;
case 0x746bad:c.instructions+=1;goto B746bad;
case 0x746bb2:goto L746bb2;
case 0x746bb3:c.instructions+=1;goto B746bb3;
case 0x746bb8:goto L746bb8;
case 0x746bbb:goto L746bbb;
case 0x746bbf:c.instructions+=2;goto B746bbf;
case 0x746bc5:c.instructions+=1;goto B746bc5;
case 0x746bcb:goto L746bcb;
case 0x746bd1:c.instructions+=2;goto B746bd1;
case 0x746bd3:c.instructions+=1;goto B746bd3;
case 0x746bd9:goto L746bd9;
case 0x746bdd:c.instructions+=4;goto B746bdd;
case 0x746bdf:c.instructions+=3;goto B746bdf;
case 0x746be4:c.instructions+=2;goto B746be4;
case 0x746be5:c.instructions+=1;goto B746be5;
case 0x746bea:goto L746bea;
case 0x746bed:c.instructions+=2;goto B746bed;
case 0x746bee:c.instructions+=1;goto B746bee;
case 0x746bf3:goto L746bf3;
case 0x746bf5:c.instructions+=3;goto B746bf5;
case 0x746bf8:c.instructions+=2;goto B746bf8;
case 0x746bfa:c.instructions+=1;goto B746bfa;
case 0x746c00:goto L746c00;
case 0x746c04:c.instructions+=3;goto B746c04;
case 0x746c09:c.instructions+=2;goto B746c09;
case 0x746c0a:c.instructions+=1;goto B746c0a;
case 0x746c0f:goto L746c0f;
case 0x746c12:c.instructions+=2;goto B746c12;
case 0x746c14:c.instructions+=1;goto B746c14;
case 0x746c1a:goto L746c1a;
case 0x746c1f:c.instructions+=1;goto B746c1f;
case 0x746c24:goto L746c24;
case 0x746c26:c.instructions+=3;goto B746c26;
case 0x746c28:c.instructions+=2;goto B746c28;
case 0x746c2d:c.instructions+=1;goto B746c2d;
case 0x746c2f:goto L746c2f;
case 0x746c31:goto L746c31;
case 0x746c35:c.instructions+=3;goto B746c35;
case 0x746c36:c.instructions+=2;goto B746c36;
case 0x746c37:c.instructions+=1;goto B746c37;
case 0x746c3c:goto L746c3c;
case 0x746c42:c.instructions+=3;goto B746c42;
case 0x746c43:c.instructions+=2;goto B746c43;
case 0x746c44:c.instructions+=1;goto B746c44;
case 0x746c49:goto L746c49;
case 0x746c4f:c.instructions+=4;goto B746c4f;
case 0x746c52:c.instructions+=3;goto B746c52;
case 0x746c54:c.instructions+=2;goto B746c54;
case 0x746c58:c.instructions+=1;goto B746c58;
case 0x746c5a:goto L746c5a;
case 0x746c5b:c.instructions+=2;goto B746c5b;
case 0x746c5c:c.instructions+=1;goto B746c5c;
case 0x746c61:goto L746c61;
case 0x746c62:c.instructions+=4;goto B746c62;
case 0x746c64:c.instructions+=3;goto B746c64;
case 0x746c68:c.instructions+=2;goto B746c68;
case 0x746c6d:c.instructions+=1;goto B746c6d;
case 0x746c6f:goto L746c6f;
case 0x746c71:goto L746c71;
case 0x746c77:c.instructions+=3;goto B746c77;
case 0x746c78:c.instructions+=2;goto B746c78;
case 0x746c79:c.instructions+=1;goto B746c79;
case 0x746c7e:goto L746c7e;
case 0x746c7f:c.instructions+=1;goto B746c7f;
case 0x746c84:goto L746c84;
case 0x746c87:c.instructions+=1;goto B746c87;
case 0x746c89:goto L746c89;
case 0x746c8a:c.instructions+=2;goto B746c8a;
case 0x746c8b:c.instructions+=1;goto B746c8b;
case 0x746c90:goto L746c90;
case 0x746c91:c.instructions+=4;goto B746c91;
case 0x746c97:c.instructions+=3;goto B746c97;
case 0x746c98:c.instructions+=2;goto B746c98;
case 0x746c99:c.instructions+=1;goto B746c99;
case 0x746c9e:goto L746c9e;
case 0x746ca0:goto L746ca0;
case 0x746ca6:c.instructions+=3;goto B746ca6;
case 0x746ca7:c.instructions+=2;goto B746ca7;
case 0x746ca8:c.instructions+=1;goto B746ca8;
case 0x746cad:goto L746cad;
case 0x746caf:c.instructions+=3;goto B746caf;
case 0x746cb2:c.instructions+=2;goto B746cb2;
case 0x746cb4:c.instructions+=1;goto B746cb4;
case 0x746cb6:goto L746cb6;
case 0x746cbc:c.instructions+=3;goto B746cbc;
case 0x746cbd:c.instructions+=2;goto B746cbd;
case 0x746cbe:c.instructions+=1;goto B746cbe;
case 0x746cc3:goto L746cc3;
case 0x746cc9:c.instructions+=3;goto B746cc9;
case 0x746cca:c.instructions+=2;goto B746cca;
case 0x746ccb:c.instructions+=1;goto B746ccb;
case 0x746cd0:goto L746cd0;
case 0x746cd1:c.instructions+=1;goto B746cd1;
case 0x746cd6:goto L746cd6;
case 0x746cd9:goto L746cd9;
case 0x746cdd:c.instructions+=2;goto B746cdd;
case 0x746ce3:c.instructions+=1;goto B746ce3;
case 0x746ce9:goto L746ce9;
case 0x746cef:c.instructions+=2;goto B746cef;
case 0x746cf1:c.instructions+=1;goto B746cf1;
case 0x746cf7:goto L746cf7;
case 0x746cfb:c.instructions+=3;goto B746cfb;
case 0x746d00:c.instructions+=2;goto B746d00;
case 0x746d01:c.instructions+=1;goto B746d01;
case 0x746d06:goto L746d06;
case 0x746d09:c.instructions+=2;goto B746d09;
case 0x746d0b:c.instructions+=1;goto B746d0b;
case 0x746d11:goto L746d11;
case 0x746d16:c.instructions+=1;goto B746d16;
case 0x746d1b:goto L746d1b;
case 0x746d1d:c.instructions+=3;goto B746d1d;
case 0x746d1f:c.instructions+=2;goto B746d1f;
case 0x746d24:c.instructions+=1;goto B746d24;
case 0x746d26:goto L746d26;
case 0x746d28:goto L746d28;
case 0x746d2c:c.instructions+=3;goto B746d2c;
case 0x746d2d:c.instructions+=2;goto B746d2d;
case 0x746d2e:c.instructions+=1;goto B746d2e;
case 0x746d33:goto L746d33;
case 0x746d36:c.instructions+=4;goto B746d36;
case 0x746d3c:c.instructions+=3;goto B746d3c;
case 0x746d3d:c.instructions+=2;goto B746d3d;
case 0x746d3e:c.instructions+=1;goto B746d3e;
case 0x746d43:goto L746d43;
case 0x746d49:c.instructions+=4;goto B746d49;
case 0x746d4c:c.instructions+=3;goto B746d4c;
case 0x746d4e:c.instructions+=2;goto B746d4e;
case 0x746d52:c.instructions+=1;goto B746d52;
case 0x746d54:goto L746d54;
case 0x746d55:c.instructions+=2;goto B746d55;
case 0x746d56:c.instructions+=1;goto B746d56;
case 0x746d5b:goto L746d5b;
case 0x746d5c:c.instructions+=4;goto B746d5c;
case 0x746d5e:c.instructions+=3;goto B746d5e;
case 0x746d62:c.instructions+=2;goto B746d62;
case 0x746d67:c.instructions+=1;goto B746d67;
case 0x746d69:goto L746d69;
case 0x746d6b:goto L746d6b;
case 0x746d71:c.instructions+=3;goto B746d71;
case 0x746d72:c.instructions+=2;goto B746d72;
case 0x746d73:c.instructions+=1;goto B746d73;
case 0x746d78:goto L746d78;
case 0x746d79:c.instructions+=1;goto B746d79;
case 0x746d7e:goto L746d7e;
case 0x746d81:c.instructions+=1;goto B746d81;
case 0x746d83:goto L746d83;
case 0x746d84:c.instructions+=2;goto B746d84;
case 0x746d85:c.instructions+=1;goto B746d85;
case 0x746d8a:goto L746d8a;
case 0x746d90:c.instructions+=5;goto B746d90;
case 0x746d91:c.instructions+=4;goto B746d91;
case 0x746d94:c.instructions+=3;goto B746d94;
case 0x746d95:c.instructions+=2;goto B746d95;
case 0x746d96:c.instructions+=1;goto B746d96;
case 0x746d9b:goto L746d9b;
case 0x746d9d:goto L746d9d;
case 0x746da1:c.instructions+=4;goto B746da1;
case 0x746da3:c.instructions+=3;goto B746da3;
case 0x746da8:c.instructions+=2;goto B746da8;
case 0x746da9:c.instructions+=1;goto B746da9;
case 0x746dae:goto L746dae;
case 0x746db1:c.instructions+=2;goto B746db1;
case 0x746db2:c.instructions+=1;goto B746db2;
case 0x746db7:goto L746db7;
case 0x746db9:c.instructions+=4;goto B746db9;
case 0x746dbf:c.instructions+=3;goto B746dbf;
case 0x746dc0:c.instructions+=2;goto B746dc0;
case 0x746dc1:c.instructions+=1;goto B746dc1;
case 0x746dc6:goto L746dc6;
case 0x746dc8:c.instructions+=3;goto B746dc8;
case 0x746dcb:c.instructions+=2;goto B746dcb;
case 0x746dcd:c.instructions+=1;goto B746dcd;
case 0x746dcf:goto L746dcf;
case 0x746dd5:c.instructions+=3;goto B746dd5;
case 0x746dd6:c.instructions+=2;goto B746dd6;
case 0x746dd7:c.instructions+=1;goto B746dd7;
case 0x746ddc:goto L746ddc;
case 0x746de2:c.instructions+=3;goto B746de2;
case 0x746de3:c.instructions+=2;goto B746de3;
case 0x746de4:c.instructions+=1;goto B746de4;
case 0x746de9:goto L746de9;
case 0x746dea:c.instructions+=1;goto B746dea;
case 0x746def:goto L746def;
case 0x746df2:goto L746df2;
case 0x746dfa:c.instructions+=1;goto B746dfa;
case 0x746e00:goto L746e00;
case 0x746e06:c.instructions+=6;goto B746e06;
case 0x746e0a:c.instructions+=5;goto B746e0a;
case 0x746e0b:c.instructions+=4;goto B746e0b;
case 0x746e10:c.instructions+=3;goto B746e10;
case 0x746e11:c.instructions+=2;goto B746e11;
case 0x746e1b:c.instructions+=1;goto B746e1b;
case 0x746e20:goto L746e20;
case 0x746e23:c.instructions+=2;goto B746e23;
case 0x746e24:c.instructions+=1;goto B746e24;
case 0x746e29:goto L746e29;
case 0x746e2f:c.instructions+=7;goto B746e2f;
case 0x746e32:c.instructions+=6;goto B746e32;
case 0x746e33:c.instructions+=5;goto B746e33;
case 0x746e39:c.instructions+=4;goto B746e39;
case 0x746e3d:c.instructions+=3;goto B746e3d;
case 0x746e42:c.instructions+=2;goto B746e42;
case 0x746e43:c.instructions+=1;goto B746e43;
case 0x746e48:goto L746e48;
case 0x746e4b:c.instructions+=2;goto B746e4b;
case 0x746e4c:c.instructions+=1;goto B746e4c;
case 0x746e51:goto L746e51;
case 0x746e57:c.instructions+=7;goto B746e57;
case 0x746e5b:c.instructions+=6;goto B746e5b;
case 0x746e5e:c.instructions+=5;goto B746e5e;
case 0x746e5f:c.instructions+=4;goto B746e5f;
case 0x746e64:c.instructions+=3;goto B746e64;
case 0x746e65:c.instructions+=2;goto B746e65;
case 0x746e6b:c.instructions+=1;goto B746e6b;
case 0x746e70:goto L746e70;
case 0x746e73:c.instructions+=2;goto B746e73;
case 0x746e74:c.instructions+=1;goto B746e74;
case 0x746e79:goto L746e79;
case 0x746e7d:c.instructions+=7;goto B746e7d;
case 0x746e80:c.instructions+=6;goto B746e80;
case 0x746e86:c.instructions+=5;goto B746e86;
case 0x746e8c:c.instructions+=4;goto B746e8c;
case 0x746e8d:c.instructions+=3;goto B746e8d;
case 0x746e92:c.instructions+=2;goto B746e92;
case 0x746e93:c.instructions+=1;goto B746e93;
case 0x746e98:goto L746e98;
case 0x746e9b:c.instructions+=2;goto B746e9b;
case 0x746e9c:c.instructions+=1;goto B746e9c;
case 0x746ea1:goto L746ea1;
case 0x746ea7:c.instructions+=7;goto B746ea7;
case 0x746eaa:c.instructions+=6;goto B746eaa;
case 0x746eab:c.instructions+=5;goto B746eab;
case 0x746eb1:c.instructions+=4;goto B746eb1;
case 0x746eb5:c.instructions+=3;goto B746eb5;
case 0x746eba:c.instructions+=2;goto B746eba;
case 0x746ebb:c.instructions+=1;goto B746ebb;
case 0x746ec0:goto L746ec0;
case 0x746ec3:c.instructions+=2;goto B746ec3;
case 0x746ec4:c.instructions+=1;goto B746ec4;
case 0x746ec9:goto L746ec9;
case 0x746ecf:c.instructions+=7;goto B746ecf;
case 0x746ed3:c.instructions+=6;goto B746ed3;
case 0x746ed6:c.instructions+=5;goto B746ed6;
case 0x746ed7:c.instructions+=4;goto B746ed7;
case 0x746edc:c.instructions+=3;goto B746edc;
case 0x746edd:c.instructions+=2;goto B746edd;
case 0x746ee3:c.instructions+=1;goto B746ee3;
case 0x746ee8:goto L746ee8;
case 0x746eeb:c.instructions+=2;goto B746eeb;
case 0x746eec:c.instructions+=1;goto B746eec;
case 0x746ef1:goto L746ef1;
case 0x746ef7:c.instructions+=10;goto B746ef7;
case 0x746efa:c.instructions+=9;goto B746efa;
case 0x746efc:c.instructions+=8;goto B746efc;
case 0x746f00:c.instructions+=7;goto B746f00;
case 0x746f04:c.instructions+=6;goto B746f04;
case 0x746f08:c.instructions+=5;goto B746f08;
case 0x746f10:c.instructions+=4;goto B746f10;
case 0x746f18:c.instructions+=3;goto B746f18;
case 0x746f1c:c.instructions+=2;goto B746f1c;
case 0x746f22:c.instructions+=1;goto B746f22;
case 0x746f27:goto L746f27;
case 0x746f2b:c.instructions+=2;goto B746f2b;
case 0x746f2e:c.instructions+=1;goto B746f2e;
case 0x746f30:goto L746f30;
case 0x746f33:c.instructions+=5;goto B746f33;
case 0x746f34:c.instructions+=4;goto B746f34;
case 0x746f38:c.instructions+=3;goto B746f38;
case 0x746f39:c.instructions+=2;goto B746f39;
case 0x746f3a:c.instructions+=1;goto B746f3a;
case 0x746f3c:goto L746f3c;
case 0x746f3f:goto L746f3f;
case 0x746f42:c.instructions+=2;goto B746f42;
case 0x746f43:c.instructions+=1;goto B746f43;
case 0x746f45:goto L746f45;
case 0x746f49:c.instructions+=2;goto B746f49;
case 0x746f4e:c.instructions+=1;goto B746f4e;
case 0x746f50:goto L746f50;
case 0x746f55:c.instructions+=1;goto B746f55;
case 0x746f5b:goto L746f5b;
case 0x746f5f:c.instructions+=2;goto B746f5f;
case 0x746f61:c.instructions+=1;goto B746f61;
case 0x746f67:goto L746f67;
case 0x746f6b:c.instructions+=4;goto B746f6b;
case 0x746f6d:c.instructions+=3;goto B746f6d;
case 0x746f72:c.instructions+=2;goto B746f72;
case 0x746f73:c.instructions+=1;goto B746f73;
case 0x746f78:goto L746f78;
case 0x746f7b:c.instructions+=2;goto B746f7b;
case 0x746f7c:c.instructions+=1;goto B746f7c;
case 0x746f81:goto L746f81;
case 0x746f83:c.instructions+=3;goto B746f83;
case 0x746f86:c.instructions+=2;goto B746f86;
case 0x746f88:c.instructions+=1;goto B746f88;
case 0x746f8a:goto L746f8a;
case 0x746f8e:c.instructions+=4;goto B746f8e;
case 0x746f90:c.instructions+=3;goto B746f90;
case 0x746f95:c.instructions+=2;goto B746f95;
case 0x746f96:c.instructions+=1;goto B746f96;
case 0x746f9b:goto L746f9b;
case 0x746f9e:c.instructions+=2;goto B746f9e;
case 0x746f9f:c.instructions+=1;goto B746f9f;
case 0x746fa4:goto L746fa4;
case 0x746fa5:c.instructions+=2;goto B746fa5;
case 0x746fa7:c.instructions+=1;goto B746fa7;
case 0x746fac:goto L746fac;
case 0x746faf:goto L746faf;
case 0x746fb3:c.instructions+=4;goto B746fb3;
case 0x746fb5:c.instructions+=3;goto B746fb5;
case 0x746fba:c.instructions+=2;goto B746fba;
case 0x746fbb:c.instructions+=1;goto B746fbb;
case 0x746fc0:goto L746fc0;
case 0x746fc3:c.instructions+=2;goto B746fc3;
case 0x746fc4:c.instructions+=1;goto B746fc4;
case 0x746fc9:goto L746fc9;
case 0x746fcd:c.instructions+=6;goto B746fcd;
case 0x746fd0:c.instructions+=5;goto B746fd0;
case 0x746fd2:c.instructions+=4;goto B746fd2;
case 0x746fd7:c.instructions+=3;goto B746fd7;
case 0x746fd8:c.instructions+=2;goto B746fd8;
case 0x746fda:c.instructions+=1;goto B746fda;
case 0x746fdf:goto L746fdf;
case 0x746fe2:c.instructions+=2;goto B746fe2;
case 0x746fe3:c.instructions+=1;goto B746fe3;
case 0x746fe8:goto L746fe8;
case 0x746fea:c.instructions+=4;goto B746fea;
case 0x746ff0:c.instructions+=3;goto B746ff0;
case 0x746ff3:c.instructions+=2;goto B746ff3;
case 0x746ff5:c.instructions+=1;goto B746ff5;
case 0x746ff7:goto L746ff7;
case 0x746ffb:c.instructions+=1;goto B746ffb;
default:missing_instruction(c.pc);}
B746001:L746001:{c.instructions+=4;NFSU2_TR(0x746001);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746005:{NFSU2_TR(0x746005);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74600a:{NFSU2_TR(0x74600a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74600b:{NFSU2_TR(0x74600b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746010ull));
TAIL_STATIC(0x7414a0u,741);
}
B746010:L746010:{c.instructions+=3;NFSU2_TR(0x746010);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746013:{NFSU2_TR(0x746013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746014:{NFSU2_TR(0x746014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746019ull));
TAIL_STATIC(0x742360u,742);
}
B746019:L746019:{c.instructions+=9;NFSU2_TR(0x746019);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74601d:{NFSU2_TR(0x74601d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B746020:{NFSU2_TR(0x746020);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746025:{NFSU2_TR(0x746025);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746027:{NFSU2_TR(0x746027);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74602a:{NFSU2_TR(0x74602a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74602b:{NFSU2_TR(0x74602b);
u8 U[4];
w4(U+0,u32(0x7d2a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746030:{NFSU2_TR(0x746030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746031:{NFSU2_TR(0x746031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746036ull));
TAIL_STATIC(0x7414a0u,741);
}
B746036:L746036:{c.instructions+=3;NFSU2_TR(0x746036);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746039:{NFSU2_TR(0x746039);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74603a:{NFSU2_TR(0x74603a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74603full));
TAIL_STATIC(0x742360u,742);
}
B74603f:L74603f:{c.instructions+=9;NFSU2_TR(0x74603f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746043:{NFSU2_TR(0x746043);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B746046:{NFSU2_TR(0x746046);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74604b:{NFSU2_TR(0x74604b);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746050:{NFSU2_TR(0x746050);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B746053:{NFSU2_TR(0x746053);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746054:{NFSU2_TR(0x746054);
u8 U[4];
w4(U+0,u32(0x7d28e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746059:{NFSU2_TR(0x746059);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74605a:{NFSU2_TR(0x74605a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74605full));
TAIL_STATIC(0x7414a0u,741);
}
B74605f:L74605f:{c.instructions+=3;NFSU2_TR(0x74605f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746062:{NFSU2_TR(0x746062);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746063:{NFSU2_TR(0x746063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746068ull));
TAIL_STATIC(0x742360u,742);
}
B746068:L746068:{c.instructions+=6;NFSU2_TR(0x746068);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74606c:{NFSU2_TR(0x74606c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74606f:{NFSU2_TR(0x74606f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746071:{NFSU2_TR(0x746071);
u8 U[4];
w4(U+0,u32(0x7a0bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746076:{NFSU2_TR(0x746076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746077:{NFSU2_TR(0x746077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74607cull));
TAIL_STATIC(0x7414a0u,741);
}
B74607c:L74607c:{c.instructions+=3;NFSU2_TR(0x74607c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74607f:{NFSU2_TR(0x74607f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746080:{NFSU2_TR(0x746080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746085ull));
TAIL_STATIC(0x742100u,742);
}
B746085:L746085:{c.instructions+=7;NFSU2_TR(0x746085);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746088:{NFSU2_TR(0x746088);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74608a:{NFSU2_TR(0x74608a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74608d:{NFSU2_TR(0x74608d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746091:{NFSU2_TR(0x746091);
u8 U[4];
w4(U+0,u32(0x7c34b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746096:{NFSU2_TR(0x746096);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746097:{NFSU2_TR(0x746097);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74609cull));
TAIL_STATIC(0x7414a0u,741);
}
B74609c:L74609c:{c.instructions+=3;NFSU2_TR(0x74609c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74609f:{NFSU2_TR(0x74609f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460a0:{NFSU2_TR(0x7460a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7460a5ull));
TAIL_STATIC(0x742140u,742);
}
B7460a5:L7460a5:{c.instructions+=7;NFSU2_TR(0x7460a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7460a8:{NFSU2_TR(0x7460a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460aa:{NFSU2_TR(0x7460aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7460b0:{NFSU2_TR(0x7460b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7460b4:{NFSU2_TR(0x7460b4);
u8 U[4];
w4(U+0,u32(0x7a1784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460b9:{NFSU2_TR(0x7460b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460ba:{NFSU2_TR(0x7460ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7460bfull));
TAIL_STATIC(0x7414a0u,741);
}
B7460bf:L7460bf:{c.instructions+=3;NFSU2_TR(0x7460bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7460c2:{NFSU2_TR(0x7460c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460c3:{NFSU2_TR(0x7460c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7460c8ull));
TAIL_STATIC(0x7420b0u,742);
}
B7460c8:L7460c8:{c.instructions+=7;NFSU2_TR(0x7460c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7460cb:{NFSU2_TR(0x7460cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460cd:{NFSU2_TR(0x7460cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7460d0:{NFSU2_TR(0x7460d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7460d4:{NFSU2_TR(0x7460d4);
u8 U[4];
w4(U+0,u32(0x7d2a0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460d9:{NFSU2_TR(0x7460d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460da:{NFSU2_TR(0x7460da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7460dfull));
TAIL_STATIC(0x7414a0u,741);
}
B7460df:L7460df:{c.instructions+=3;NFSU2_TR(0x7460df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7460e2:{NFSU2_TR(0x7460e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460e3:{NFSU2_TR(0x7460e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7460e8ull));
TAIL_STATIC(0x7420b0u,742);
}
B7460e8:L7460e8:{c.instructions+=7;NFSU2_TR(0x7460e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7460eb:{NFSU2_TR(0x7460eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460ec:{NFSU2_TR(0x7460ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7460ef:{NFSU2_TR(0x7460ef);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460f4:{NFSU2_TR(0x7460f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7460f5:{NFSU2_TR(0x7460f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7460f8:{NFSU2_TR(0x7460f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7460fdull));
TAIL_STATIC(0x75c784u,75c);
}
B7460fd:L7460fd:{c.instructions+=5;NFSU2_TR(0x7460fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746100:{NFSU2_TR(0x746100);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746103:{NFSU2_TR(0x746103);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746108:{NFSU2_TR(0x746108);
w4(R+4,u32(0x7d2a08ull));
}
B74610d:{NFSU2_TR(0x74610d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746114;}}
}
B74610f:L74610f:{c.instructions+=1;NFSU2_TR(0x74610f);
w4(R+4,u32(0x7d2a04ull));
}
B746114:L746114:{c.instructions+=1;NFSU2_TR(0x746114);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B746117:L746117:{c.instructions+=6;NFSU2_TR(0x746117);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B746119:{NFSU2_TR(0x746119);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B74611a:{NFSU2_TR(0x74611a);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B74611c:{NFSU2_TR(0x74611c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B74611d:{NFSU2_TR(0x74611d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74611f:{NFSU2_TR(0x74611f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746117u);}goto L746117;}}
}
B746121:L746121:{c.instructions+=8;NFSU2_TR(0x746121);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746125:{NFSU2_TR(0x746125);
u8 U[4];
w4(U+0,u32(0x794e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74612a:{NFSU2_TR(0x74612a);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74612c:{NFSU2_TR(0x74612c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B746132:{NFSU2_TR(0x746132);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746133:{NFSU2_TR(0x746133);
u8 U[4];
w4(U+0,u32(0x7a1314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746138:{NFSU2_TR(0x746138);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746139:{NFSU2_TR(0x746139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74613eull));
TAIL_STATIC(0x7414a0u,741);
}
B74613e:L74613e:{c.instructions+=3;NFSU2_TR(0x74613e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746141:{NFSU2_TR(0x746141);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746142:{NFSU2_TR(0x746142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746147ull));
TAIL_STATIC(0x7425d0u,742);
}
B746147:L746147:{c.instructions+=8;NFSU2_TR(0x746147);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74614a:{NFSU2_TR(0x74614a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B746150:{NFSU2_TR(0x746150);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746152:{NFSU2_TR(0x746152);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B746155:{NFSU2_TR(0x746155);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746159:{NFSU2_TR(0x746159);
u8 U[4];
w4(U+0,u32(0x7d28e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74615e:{NFSU2_TR(0x74615e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74615f:{NFSU2_TR(0x74615f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746164ull));
TAIL_STATIC(0x7414a0u,741);
}
B746164:L746164:{c.instructions+=3;NFSU2_TR(0x746164);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746167:{NFSU2_TR(0x746167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746168:{NFSU2_TR(0x746168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74616dull));
TAIL_STATIC(0x7420b0u,742);
}
B74616d:L74616d:{c.instructions+=3;NFSU2_TR(0x74616d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746170:{NFSU2_TR(0x746170);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746172:{NFSU2_TR(0x746172);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74617c;}}
}
B746174:L746174:{c.instructions+=2;NFSU2_TR(0x746174);
u8 U[4];
w4(U+0,u32(0x2d2d2dull));
s4(u32(r4(R+28)),r4(U+0));
}
B74617a:{NFSU2_TR(0x74617a);
{goto L74618d;}
}
B74617c:L74617c:{c.instructions+=1;NFSU2_TR(0x74617c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74618d;}}
}
B74617e:L74617e:{c.instructions+=4;NFSU2_TR(0x74617e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74617f:{NFSU2_TR(0x74617f);
u8 U[4];
w4(U+0,u32(0x7d29fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746184:{NFSU2_TR(0x746184);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746185:{NFSU2_TR(0x746185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74618aull));
TAIL_STATIC(0x75c784u,75c);
}
B74618a:L74618a:{c.instructions+=1;NFSU2_TR(0x74618a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74618d:L74618d:{c.instructions+=5;NFSU2_TR(0x74618d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74618f:{NFSU2_TR(0x74618f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746195:{NFSU2_TR(0x746195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746196:{NFSU2_TR(0x746196);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746197:{NFSU2_TR(0x746197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74619cull));
TAIL_STATIC(0x755090u,755);
}
B74619c:L74619c:{c.instructions+=5;NFSU2_TR(0x74619c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7461a2:{NFSU2_TR(0x7461a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7461a5:{NFSU2_TR(0x7461a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7461a7:{NFSU2_TR(0x7461a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7461ab:{NFSU2_TR(0x7461ab);
if(r1(R+518)){{goto L7461fa;}}
}
B7461ad:L7461ad:{c.instructions+=3;NFSU2_TR(0x7461ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461ae:{NFSU2_TR(0x7461ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461af:{NFSU2_TR(0x7461af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7461b4ull));
TAIL_STATIC(0x73d810u,73d);
}
B7461b4:L7461b4:{c.instructions+=4;NFSU2_TR(0x7461b4);
__builtin_memmove((R+20),(R+0),4);
}
B7461b6:{NFSU2_TR(0x7461b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7461b9:{NFSU2_TR(0x7461b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7461bb:{NFSU2_TR(0x7461bb);
if(r1(R+518)){{goto L7461dd;}}
}
B7461bd:L7461bd:{c.instructions+=4;NFSU2_TR(0x7461bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7461c3:{NFSU2_TR(0x7461c3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7461c5:{NFSU2_TR(0x7461c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7461cb:{NFSU2_TR(0x7461cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7461dd;}}
}
B7461cd:L7461cd:{c.instructions+=2;NFSU2_TR(0x7461cd);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7461cf:{NFSU2_TR(0x7461cf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7461dd;}}
}
B7461d1:L7461d1:{c.instructions+=1;NFSU2_TR(0x7461d1);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B7461d3:L7461d3:{c.instructions+=5;NFSU2_TR(0x7461d3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7461d5:{NFSU2_TR(0x7461d5);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7461d8:{NFSU2_TR(0x7461d8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7461d9:{NFSU2_TR(0x7461d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7461db:{NFSU2_TR(0x7461db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7461d3u);}goto L7461d3;}}
}
B7461dd:L7461dd:{c.instructions+=2;NFSU2_TR(0x7461dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461de:{NFSU2_TR(0x7461de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7461e3ull));
TAIL_STATIC(0x598ec0u,598);
}
B7461e3:L7461e3:{c.instructions+=6;NFSU2_TR(0x7461e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7461e7:{NFSU2_TR(0x7461e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7461ed:{NFSU2_TR(0x7461ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461ee:{NFSU2_TR(0x7461ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461ef:{NFSU2_TR(0x7461ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461f0:{NFSU2_TR(0x7461f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7461f5ull));
TAIL_STATIC(0x73d7c0u,73d);
}
B7461f5:L7461f5:{c.instructions+=2;NFSU2_TR(0x7461f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7461f8:{NFSU2_TR(0x7461f8);
{goto L74624c;}
}
B7461fa:L7461fa:{c.instructions+=3;NFSU2_TR(0x7461fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461fb:{NFSU2_TR(0x7461fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7461fc:{NFSU2_TR(0x7461fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746201ull));
TAIL_STATIC(0x73d750u,73d);
}
B746201:L746201:{c.instructions+=6;NFSU2_TR(0x746201);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746207:{NFSU2_TR(0x746207);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746208:{NFSU2_TR(0x746208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74620a:{NFSU2_TR(0x74620a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74620b:{NFSU2_TR(0x74620b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74620c:{NFSU2_TR(0x74620c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746211ull));
TAIL_STATIC(0x755020u,755);
}
B746211:L746211:{c.instructions+=1;NFSU2_TR(0x746211);
{goto L746249;}
}
B746213:L746213:{c.instructions+=4;NFSU2_TR(0x746213);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746219:{NFSU2_TR(0x746219);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74621a:{NFSU2_TR(0x74621a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74621b:{NFSU2_TR(0x74621b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746220ull));
TAIL_STATIC(0x755090u,755);
}
B746220:L746220:{c.instructions+=4;NFSU2_TR(0x746220);
__builtin_memmove((R+24),(R+0),4);
}
B746222:{NFSU2_TR(0x746222);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746225:{NFSU2_TR(0x746225);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746227:{NFSU2_TR(0x746227);
if(r1(R+518)){{goto L74624c;}}
}
B746229:L746229:{c.instructions+=4;NFSU2_TR(0x746229);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74622f:{NFSU2_TR(0x74622f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746230:{NFSU2_TR(0x746230);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746231:{NFSU2_TR(0x746231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746236ull));
TAIL_STATIC(0x7550d0u,755);
}
B746236:L746236:{c.instructions+=4;NFSU2_TR(0x746236);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74623c:{NFSU2_TR(0x74623c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74623d:{NFSU2_TR(0x74623d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74623e:{NFSU2_TR(0x74623e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746243ull));
TAIL_STATIC(0x73d890u,73d);
}
B746243:L746243:{c.instructions+=2;NFSU2_TR(0x746243);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746244:{NFSU2_TR(0x746244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746249ull));
TAIL_STATIC(0x598ec0u,598);
}
B746249:L746249:{c.instructions+=1;NFSU2_TR(0x746249);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74624c:L74624c:{c.instructions+=3;NFSU2_TR(0x74624c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746250:{NFSU2_TR(0x746250);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b706f70ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746256:{NFSU2_TR(0x746256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746379;}}
}
B74625c:L74625c:{c.instructions+=3;NFSU2_TR(0x74625c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746262:{NFSU2_TR(0x746262);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746264:{NFSU2_TR(0x746264);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B74626a:L74626a:{c.instructions+=8;NFSU2_TR(0x74626a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74626e:{NFSU2_TR(0x74626e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746273:{NFSU2_TR(0x746273);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746278:{NFSU2_TR(0x746278);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74627f:{NFSU2_TR(0x74627f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746280:{NFSU2_TR(0x746280);
u8 U[4];
w4(U+0,u32(0x7d29f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746285:{NFSU2_TR(0x746285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746286:{NFSU2_TR(0x746286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74628bull));
TAIL_STATIC(0x7414a0u,741);
}
B74628b:L74628b:{c.instructions+=3;NFSU2_TR(0x74628b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74628e:{NFSU2_TR(0x74628e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74628f:{NFSU2_TR(0x74628f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746294ull));
TAIL_STATIC(0x742360u,742);
}
B746294:L746294:{c.instructions+=5;NFSU2_TR(0x746294);
u8 U[5];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B74629b:{NFSU2_TR(0x74629b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74629e:{NFSU2_TR(0x74629e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7462a0:{NFSU2_TR(0x7462a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B7462a7:{NFSU2_TR(0x7462a7);
if(r1(R+518)){{goto L746379;}}
}
B7462ad:L7462ad:{c.instructions+=1;NFSU2_TR(0x7462ad);
__builtin_memmove((R+4),(R+4),4);
}
B7462b0:L7462b0:{c.instructions+=5;NFSU2_TR(0x7462b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7462b2:{NFSU2_TR(0x7462b2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7462b4:{NFSU2_TR(0x7462b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7462b6:{NFSU2_TR(0x7462b6);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7462b8:{NFSU2_TR(0x7462b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L746379;}}
}
B7462be:L7462be:{c.instructions+=1;NFSU2_TR(0x7462be);
__builtin_memmove((R+28),(R+28),4);
}
B7462c0:L7462c0:{c.instructions+=2;NFSU2_TR(0x7462c0);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7462c2:{NFSU2_TR(0x7462c2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7462d4;}}
}
B7462c4:L7462c4:{c.instructions+=7;NFSU2_TR(0x7462c4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B7462c7:{NFSU2_TR(0x7462c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7462ca:{NFSU2_TR(0x7462ca);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7462cb:{NFSU2_TR(0x7462cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7462ce:{NFSU2_TR(0x7462ce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7462d0:{NFSU2_TR(0x7462d0);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7462d2:{NFSU2_TR(0x7462d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7462c0u);}goto L7462c0;}}
}
B7462d4:L7462d4:{c.instructions+=2;NFSU2_TR(0x7462d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7462d6:{NFSU2_TR(0x7462d6);
if(r1(R+518)){{goto L746379;}}
}
B7462dc:L7462dc:{c.instructions+=2;NFSU2_TR(0x7462dc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7462df:{NFSU2_TR(0x7462df);
if(r1(R+518)){{goto L7462e2;}}
}
B7462e1:L7462e1:{c.instructions+=1;NFSU2_TR(0x7462e1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7462e2:L7462e2:{c.instructions+=5;NFSU2_TR(0x7462e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7462e4:{NFSU2_TR(0x7462e4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B7462e6:{NFSU2_TR(0x7462e6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7462e8:{NFSU2_TR(0x7462e8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7462ea:{NFSU2_TR(0x7462ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L746304;}}
}
B7462ec:L7462ec:{c.instructions+=1;NFSU2_TR(0x7462ec);
__builtin_memmove((R+16),(R+16),4);
}
B7462f0:L7462f0:{c.instructions+=2;NFSU2_TR(0x7462f0);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7462f2:{NFSU2_TR(0x7462f2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L746304;}}
}
B7462f4:L7462f4:{c.instructions+=7;NFSU2_TR(0x7462f4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B7462f7:{NFSU2_TR(0x7462f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7462fa:{NFSU2_TR(0x7462fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7462fb:{NFSU2_TR(0x7462fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7462fe:{NFSU2_TR(0x7462fe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B746300:{NFSU2_TR(0x746300);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B746302:{NFSU2_TR(0x746302);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7462f0u);}goto L7462f0;}}
}
B746304:L746304:{c.instructions+=2;NFSU2_TR(0x746304);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B746307:{NFSU2_TR(0x746307);
if(r1(R+518)){{goto L74630a;}}
}
B746309:L746309:{c.instructions+=1;NFSU2_TR(0x746309);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74630a:L74630a:{c.instructions+=2;NFSU2_TR(0x74630a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B746310:{NFSU2_TR(0x746310);
if(r1(R+518)){{goto L746370;}}
}
B746312:L746312:{c.instructions+=3;NFSU2_TR(0x746312);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746318:{NFSU2_TR(0x746318);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74631a:{NFSU2_TR(0x74631a);
if(r1(R+518)){{goto L746370;}}
}
B74631c:L74631c:{c.instructions+=3;NFSU2_TR(0x74631c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74631d:{NFSU2_TR(0x74631d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74631e:{NFSU2_TR(0x74631e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746323ull));
TAIL_STATIC(0x755090u,755);
}
B746323:L746323:{c.instructions+=4;NFSU2_TR(0x746323);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746326:{NFSU2_TR(0x746326);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746328:{NFSU2_TR(0x746328);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74632c:{NFSU2_TR(0x74632c);
if(r1(R+518)){{goto L746370;}}
}
B74632e:L74632e:{c.instructions+=4;NFSU2_TR(0x74632e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746334:{NFSU2_TR(0x746334);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746335:{NFSU2_TR(0x746335);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746336:{NFSU2_TR(0x746336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74633bull));
TAIL_STATIC(0x73d810u,73d);
}
B74633b:L74633b:{c.instructions+=4;NFSU2_TR(0x74633b);
__builtin_memmove((R+20),(R+0),4);
}
B74633d:{NFSU2_TR(0x74633d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746340:{NFSU2_TR(0x746340);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746342:{NFSU2_TR(0x746342);
if(r1(R+518)){{goto L746370;}}
}
B746344:L746344:{c.instructions+=2;NFSU2_TR(0x746344);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B746347:{NFSU2_TR(0x746347);
if(r1(R+518)){{goto L746370;}}
}
B746349:L746349:{c.instructions+=6;NFSU2_TR(0x746349);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74634a:{NFSU2_TR(0x74634a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74634d:{NFSU2_TR(0x74634d);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746352:{NFSU2_TR(0x746352);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746353:{NFSU2_TR(0x746353);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746356:{NFSU2_TR(0x746356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74635bull));
TAIL_STATIC(0x75c784u,75c);
}
B74635b:L74635b:{c.instructions+=6;NFSU2_TR(0x74635b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74635f:{NFSU2_TR(0x74635f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746365:{NFSU2_TR(0x746365);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746366:{NFSU2_TR(0x746366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746367:{NFSU2_TR(0x746367);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746368:{NFSU2_TR(0x746368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74636dull));
TAIL_STATIC(0x73d7c0u,73d);
}
B74636d:L74636d:{c.instructions+=1;NFSU2_TR(0x74636d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B746370:L746370:{c.instructions+=2;NFSU2_TR(0x746370);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B746373:{NFSU2_TR(0x746373);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7462b0u);}goto L7462b0;}}
}
B746379:L746379:{c.instructions+=3;NFSU2_TR(0x746379);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74637d:{NFSU2_TR(0x74637d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b757372ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746383:{NFSU2_TR(0x746383);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7464eb;}}
}
B746389:L746389:{c.instructions+=3;NFSU2_TR(0x746389);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74638f:{NFSU2_TR(0x74638f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746391:{NFSU2_TR(0x746391);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B746397:L746397:{c.instructions+=5;NFSU2_TR(0x746397);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74639b:{NFSU2_TR(0x74639b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74639d:{NFSU2_TR(0x74639d);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463a2:{NFSU2_TR(0x7463a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463a3:{NFSU2_TR(0x7463a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7463a8ull));
TAIL_STATIC(0x7414a0u,741);
}
B7463a8:L7463a8:{c.instructions+=3;NFSU2_TR(0x7463a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7463ab:{NFSU2_TR(0x7463ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463ac:{NFSU2_TR(0x7463ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7463b1ull));
TAIL_STATIC(0x7420b0u,742);
}
B7463b1:L7463b1:{c.instructions+=4;NFSU2_TR(0x7463b1);
__builtin_memmove((R+24),(R+0),4);
}
B7463b3:{NFSU2_TR(0x7463b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7463b6:{NFSU2_TR(0x7463b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7463b8:{NFSU2_TR(0x7463b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7464eb;}}
}
B7463be:L7463be:{c.instructions+=4;NFSU2_TR(0x7463be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7463c2:{NFSU2_TR(0x7463c2);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463c7:{NFSU2_TR(0x7463c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463c8:{NFSU2_TR(0x7463c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7463cdull));
TAIL_STATIC(0x7414a0u,741);
}
B7463cd:L7463cd:{c.instructions+=3;NFSU2_TR(0x7463cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7463d0:{NFSU2_TR(0x7463d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7463d2:{NFSU2_TR(0x7463d2);
if(r1(R+518)){{goto L746489;}}
}
B7463d8:L7463d8:{c.instructions+=2;NFSU2_TR(0x7463d8);
u8 U[4];
w4(U+0,u32(0x3b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463dd:{NFSU2_TR(0x7463dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7463e2ull));
TAIL_STATIC(0x5836d0u,583);
}
B7463e2:L7463e2:{c.instructions+=4;NFSU2_TR(0x7463e2);
__builtin_memmove((R+20),(R+0),4);
}
B7463e4:{NFSU2_TR(0x7463e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7463e6:{NFSU2_TR(0x7463e6);
w4(R+4,u32(0xecull));
}
B7463eb:{NFSU2_TR(0x7463eb);
__builtin_memmove((R+28),(R+20),4);
}
B7463ed:L7463ed:{c.instructions+=1;NFSU2_TR(0x7463ed);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7463ef;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7463edu);}goto L7463ed;}
}
B7463ef:L7463ef:{c.instructions+=4;NFSU2_TR(0x7463ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7463f3:{NFSU2_TR(0x7463f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463f4:{NFSU2_TR(0x7463f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7463f5:{NFSU2_TR(0x7463f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7463faull));
TAIL_STATIC(0x745250u,745);
}
B7463fa:L7463fa:{c.instructions+=5;NFSU2_TR(0x7463fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7463fd:{NFSU2_TR(0x7463fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746403:{NFSU2_TR(0x746403);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746404:{NFSU2_TR(0x746404);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746405:{NFSU2_TR(0x746405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74640aull));
TAIL_STATIC(0x755090u,755);
}
B74640a:L74640a:{c.instructions+=5;NFSU2_TR(0x74640a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746410:{NFSU2_TR(0x746410);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746413:{NFSU2_TR(0x746413);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746415:{NFSU2_TR(0x746415);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746419:{NFSU2_TR(0x746419);
if(r1(R+518)){{goto L746454;}}
}
B74641b:L74641b:{c.instructions+=4;NFSU2_TR(0x74641b);
__builtin_memmove((R+4),(R+0),4);
}
B74641d:{NFSU2_TR(0x74641d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74641e:{NFSU2_TR(0x74641e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74641f:{NFSU2_TR(0x74641f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746424ull));
TAIL_STATIC(0x73d810u,73d);
}
B746424:L746424:{c.instructions+=6;NFSU2_TR(0x746424);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746425:{NFSU2_TR(0x746425);
__builtin_memmove((R+28),(R+0),4);
}
B746427:{NFSU2_TR(0x746427);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74642b:{NFSU2_TR(0x74642b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74642f:{NFSU2_TR(0x74642f);
w4(R+4,u32(0xecull));
}
B746434:{NFSU2_TR(0x746434);
__builtin_memmove((R+24),(R+20),4);
}
B746436:L746436:{c.instructions+=1;NFSU2_TR(0x746436);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L746438;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746436u);}goto L746436;}
}
B746438:L746438:{c.instructions+=4;NFSU2_TR(0x746438);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74643e:{NFSU2_TR(0x74643e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74643f:{NFSU2_TR(0x74643f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746440:{NFSU2_TR(0x746440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746445ull));
TAIL_STATIC(0x73d7c0u,73d);
}
B746445:L746445:{c.instructions+=2;NFSU2_TR(0x746445);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746446:{NFSU2_TR(0x746446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74644bull));
TAIL_STATIC(0x598ec0u,598);
}
B74644b:L74644b:{c.instructions+=3;NFSU2_TR(0x74644b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74644f:{NFSU2_TR(0x74644f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B746452:{NFSU2_TR(0x746452);
{goto L74646f;}
}
B746454:L746454:{c.instructions+=3;NFSU2_TR(0x746454);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746455:{NFSU2_TR(0x746455);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746456:{NFSU2_TR(0x746456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74645bull));
TAIL_STATIC(0x73d750u,73d);
}
B74645b:L74645b:{c.instructions+=6;NFSU2_TR(0x74645b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746461:{NFSU2_TR(0x746461);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746462:{NFSU2_TR(0x746462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B746465:{NFSU2_TR(0x746465);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746466:{NFSU2_TR(0x746466);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746467:{NFSU2_TR(0x746467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74646cull));
TAIL_STATIC(0x755020u,755);
}
B74646c:L74646c:{c.instructions+=1;NFSU2_TR(0x74646c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74646f:L74646f:{c.instructions+=2;NFSU2_TR(0x74646f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x200000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B746476:{NFSU2_TR(0x746476);
if(r1(R+518)){{goto L7464c2;}}
}
B746478:L746478:{c.instructions+=3;NFSU2_TR(0x746478);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74647e:{NFSU2_TR(0x74647e);
w4(R+4,u32(0xecull));
}
B746483:{NFSU2_TR(0x746483);
__builtin_memmove((R+24),(R+20),4);
}
B746485:L746485:{c.instructions+=1;NFSU2_TR(0x746485);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L746487;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746485u);}goto L746485;}
}
B746487:L746487:{c.instructions+=1;NFSU2_TR(0x746487);
{goto L7464c2;}
}
B746489:L746489:{c.instructions+=4;NFSU2_TR(0x746489);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74648f:{NFSU2_TR(0x74648f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746490:{NFSU2_TR(0x746490);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746491:{NFSU2_TR(0x746491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746496ull));
TAIL_STATIC(0x755090u,755);
}
B746496:L746496:{c.instructions+=4;NFSU2_TR(0x746496);
__builtin_memmove((R+28),(R+0),4);
}
B746498:{NFSU2_TR(0x746498);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74649b:{NFSU2_TR(0x74649b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74649d:{NFSU2_TR(0x74649d);
if(r1(R+518)){{goto L7464c2;}}
}
B74649f:L74649f:{c.instructions+=4;NFSU2_TR(0x74649f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7464a5:{NFSU2_TR(0x7464a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464a6:{NFSU2_TR(0x7464a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464a7:{NFSU2_TR(0x7464a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7464acull));
TAIL_STATIC(0x7550d0u,755);
}
B7464ac:L7464ac:{c.instructions+=4;NFSU2_TR(0x7464ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7464b2:{NFSU2_TR(0x7464b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464b3:{NFSU2_TR(0x7464b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464b4:{NFSU2_TR(0x7464b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7464b9ull));
TAIL_STATIC(0x73d890u,73d);
}
B7464b9:L7464b9:{c.instructions+=2;NFSU2_TR(0x7464b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464ba:{NFSU2_TR(0x7464ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7464bfull));
TAIL_STATIC(0x598ec0u,598);
}
B7464bf:L7464bf:{c.instructions+=1;NFSU2_TR(0x7464bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7464c2:L7464c2:{c.instructions+=5;NFSU2_TR(0x7464c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7464c6:{NFSU2_TR(0x7464c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464c8:{NFSU2_TR(0x7464c8);
u8 U[4];
w4(U+0,u32(0x7a1784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464cd:{NFSU2_TR(0x7464cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464ce:{NFSU2_TR(0x7464ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7464d3ull));
TAIL_STATIC(0x7414a0u,741);
}
B7464d3:L7464d3:{c.instructions+=3;NFSU2_TR(0x7464d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7464d6:{NFSU2_TR(0x7464d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464d7:{NFSU2_TR(0x7464d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7464dcull));
TAIL_STATIC(0x7420b0u,742);
}
B7464dc:L7464dc:{c.instructions+=3;NFSU2_TR(0x7464dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7464e2:{NFSU2_TR(0x7464e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464e3:{NFSU2_TR(0x7464e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7464e8ull));
TAIL_STATIC(0x743d20u,743);
}
B7464e8:L7464e8:{c.instructions+=1;NFSU2_TR(0x7464e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7464eb:L7464eb:{c.instructions+=2;NFSU2_TR(0x7464eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b757373ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7464f3:{NFSU2_TR(0x7464f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746581;}}
}
B7464f9:L7464f9:{c.instructions+=2;NFSU2_TR(0x7464f9);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7464fe:{NFSU2_TR(0x7464fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746503ull));
TAIL_STATIC(0x5836d0u,583);
}
B746503:L746503:{c.instructions+=4;NFSU2_TR(0x746503);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B746507:{NFSU2_TR(0x746507);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74650a:{NFSU2_TR(0x74650a);
__builtin_memmove((R+20),(R+0),4);
}
B74650c:{NFSU2_TR(0x74650c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746511ull));
TAIL_STATIC(0x744180u,744);
}
B746511:L746511:{c.instructions+=3;NFSU2_TR(0x746511);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746517:{NFSU2_TR(0x746517);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746519:{NFSU2_TR(0x746519);
if(r1(R+518)){{goto L746581;}}
}
B74651b:L74651b:{c.instructions+=4;NFSU2_TR(0x74651b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74651e:{NFSU2_TR(0x74651e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74651f:{NFSU2_TR(0x74651f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746520:{NFSU2_TR(0x746520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746525ull));
TAIL_STATIC(0x754f70u,754);
}
B746525:L746525:{c.instructions+=5;NFSU2_TR(0x746525);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746528:{NFSU2_TR(0x746528);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74652c:{NFSU2_TR(0x74652c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74652e:{NFSU2_TR(0x74652e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746534:{NFSU2_TR(0x746534);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746550;}}
}
B746536:L746536:{c.instructions+=3;NFSU2_TR(0x746536);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746537:{NFSU2_TR(0x746537);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746538:{NFSU2_TR(0x746538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74653dull));
TAIL_STATIC(0x73d750u,73d);
}
B74653d:L74653d:{c.instructions+=5;NFSU2_TR(0x74653d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746543:{NFSU2_TR(0x746543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746544:{NFSU2_TR(0x746544);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746545:{NFSU2_TR(0x746545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746546:{NFSU2_TR(0x746546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74654bull));
TAIL_STATIC(0x754f00u,754);
}
B74654b:L74654b:{c.instructions+=2;NFSU2_TR(0x74654b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74654e:{NFSU2_TR(0x74654e);
{goto L746581;}
}
B746550:L746550:{c.instructions+=4;NFSU2_TR(0x746550);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746554:{NFSU2_TR(0x746554);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746555:{NFSU2_TR(0x746555);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746556:{NFSU2_TR(0x746556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74655bull));
TAIL_STATIC(0x73d810u,73d);
}
B74655b:L74655b:{c.instructions+=3;NFSU2_TR(0x74655b);
__builtin_memmove((R+28),(R+0),4);
}
B74655d:{NFSU2_TR(0x74655d);
w4(R+4,u32(0x2full));
}
B746562:{NFSU2_TR(0x746562);
__builtin_memmove((R+24),(R+20),4);
}
B746564:L746564:{c.instructions+=1;NFSU2_TR(0x746564);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L746566;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746564u);}goto L746564;}
}
B746566:L746566:{c.instructions+=6;NFSU2_TR(0x746566);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74656a:{NFSU2_TR(0x74656a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746570:{NFSU2_TR(0x746570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746571:{NFSU2_TR(0x746571);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746572:{NFSU2_TR(0x746572);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746573:{NFSU2_TR(0x746573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746578ull));
TAIL_STATIC(0x73d7c0u,73d);
}
B746578:L746578:{c.instructions+=2;NFSU2_TR(0x746578);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746579:{NFSU2_TR(0x746579);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74657eull));
TAIL_STATIC(0x598ec0u,598);
}
B74657e:L74657e:{c.instructions+=1;NFSU2_TR(0x74657e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B746581:L746581:{c.instructions+=2;NFSU2_TR(0x746581);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b757374ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B746589:{NFSU2_TR(0x746589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746681;}}
}
B74658f:L74658f:{c.instructions+=6;NFSU2_TR(0x74658f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746593:{NFSU2_TR(0x746593);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B746595:{NFSU2_TR(0x746595);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746596:{NFSU2_TR(0x746596);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74659b:{NFSU2_TR(0x74659b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74659c:{NFSU2_TR(0x74659c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7465a1ull));
TAIL_STATIC(0x7414a0u,741);
}
B7465a1:L7465a1:{c.instructions+=3;NFSU2_TR(0x7465a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7465a4:{NFSU2_TR(0x7465a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7465a5:{NFSU2_TR(0x7465a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7465aaull));
TAIL_STATIC(0x7420b0u,742);
}
B7465aa:L7465aa:{c.instructions+=5;NFSU2_TR(0x7465aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7465ae:{NFSU2_TR(0x7465ae);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7465b3:{NFSU2_TR(0x7465b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7465b4:{NFSU2_TR(0x7465b4);
__builtin_memmove((R+28),(R+0),4);
}
B7465b6:{NFSU2_TR(0x7465b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7465bbull));
TAIL_STATIC(0x7414a0u,741);
}
B7465bb:L7465bb:{c.instructions+=3;NFSU2_TR(0x7465bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7465be:{NFSU2_TR(0x7465be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7465c0:{NFSU2_TR(0x7465c0);
if(r1(R+518)){{goto L746609;}}
}
B7465c2:L7465c2:{c.instructions+=4;NFSU2_TR(0x7465c2);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B7465c5:{NFSU2_TR(0x7465c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7465c7:{NFSU2_TR(0x7465c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1638ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7465cd:{NFSU2_TR(0x7465cd);
__builtin_memmove((R+4),(R+4),4);
}
B7465d0:L7465d0:{c.instructions+=3;NFSU2_TR(0x7465d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7465d2:{NFSU2_TR(0x7465d2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7465d4:{NFSU2_TR(0x7465d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7465d8;}}
}
B7465d6:L7465d6:{c.instructions+=1;NFSU2_TR(0x7465d6);
__builtin_memmove((R+24),(R+0),4);
}
B7465d8:L7465d8:{c.instructions+=2;NFSU2_TR(0x7465d8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7465da:{NFSU2_TR(0x7465da);
if(r1(R+518)){{goto L7465ea;}}
}
B7465dc:L7465dc:{c.instructions+=4;NFSU2_TR(0x7465dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7465dd:{NFSU2_TR(0x7465dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xbcull))));
}
B7465e3:{NFSU2_TR(0x7465e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7465e6:{NFSU2_TR(0x7465e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7465d0u);}goto L7465d0;}}
}
B7465e8:L7465e8:{c.instructions+=1;NFSU2_TR(0x7465e8);
{goto L7465ec;}
}
B7465ea:L7465ea:{c.instructions+=1;NFSU2_TR(0x7465ea);
__builtin_memmove((R+24),(R+0),4);
}
B7465ec:L7465ec:{c.instructions+=2;NFSU2_TR(0x7465ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7465ef:{NFSU2_TR(0x7465ef);
if(r1(R+518)){{goto L746638;}}
}
B7465f1:L7465f1:{c.instructions+=4;NFSU2_TR(0x7465f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xbcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B7465f7:{NFSU2_TR(0x7465f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x1638ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B7465fe:{NFSU2_TR(0x7465fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B746602:{NFSU2_TR(0x746602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746607ull));
TAIL_STATIC(0x744180u,744);
}
B746607:L746607:{c.instructions+=1;NFSU2_TR(0x746607);
{goto L746638;}
}
B746609:L746609:{c.instructions+=2;NFSU2_TR(0x746609);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B74660b:{NFSU2_TR(0x74660b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1638ull))));
__builtin_memmove((R+0),(U+0),4);
}
B746611:L746611:{c.instructions+=2;NFSU2_TR(0x746611);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B746613:{NFSU2_TR(0x746613);
if(r1(R+518)){{goto L746622;}}
}
B746615:L746615:{c.instructions+=4;NFSU2_TR(0x746615);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B746616:{NFSU2_TR(0x746616);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
}
B74661b:{NFSU2_TR(0x74661b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74661e:{NFSU2_TR(0x74661e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746611u);}goto L746611;}}
}
B746620:L746620:{c.instructions+=1;NFSU2_TR(0x746620);
{goto L746638;}
}
B746622:L746622:{c.instructions+=4;NFSU2_TR(0x746622);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B746624:{NFSU2_TR(0x746624);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xbcull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B74662a:{NFSU2_TR(0x74662a);
w4(R+4,u32(0x2full));
}
B74662f:{NFSU2_TR(0x74662f);
u8 U[12];
w4(U+0,u32(u32(u32(0x1638ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B746636:L746636:{c.instructions+=1;NFSU2_TR(0x746636);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L746638;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746636u);}goto L746636;}
}
B746638:L746638:{c.instructions+=8;NFSU2_TR(0x746638);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74663c:{NFSU2_TR(0x74663c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746640:{NFSU2_TR(0x746640);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B746648:{NFSU2_TR(0x746648);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x75736574ull));
s4(u32(r4(U+0)),r4(U+4));
}
B746650:{NFSU2_TR(0x746650);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746654:{NFSU2_TR(0x746654);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746658:{NFSU2_TR(0x746658);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x149cull))));
__builtin_memmove((R+24),(U+0),4);
}
B74665e:{NFSU2_TR(0x74665e);
w4(R+28,u32(0x20ull));
}
B746663:L746663:{c.instructions+=3;NFSU2_TR(0x746663);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746667:{NFSU2_TR(0x746667);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B74666a:{NFSU2_TR(0x74666a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74667b;}}
}
B74666c:L74666c:{c.instructions+=6;NFSU2_TR(0x74666c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74666f:{NFSU2_TR(0x74666f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746670:{NFSU2_TR(0x746670);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B746674:{NFSU2_TR(0x746674);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746675:{NFSU2_TR(0x746675);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746676:{NFSU2_TR(0x746676);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746678ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B746678:L746678:{c.instructions+=1;NFSU2_TR(0x746678);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74667b:L74667b:{c.instructions+=3;NFSU2_TR(0x74667b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B74667e:{NFSU2_TR(0x74667e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B74667f:{NFSU2_TR(0x74667f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746663u);}goto L746663;}}
}
B746681:L746681:{c.instructions+=2;NFSU2_TR(0x746681);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b75736dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B746689:{NFSU2_TR(0x746689);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746847;}}
}
B74668f:L74668f:{c.instructions+=5;NFSU2_TR(0x74668f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746693:{NFSU2_TR(0x746693);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746695:{NFSU2_TR(0x746695);
u8 U[4];
w4(U+0,u32(0x7d28ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74669a:{NFSU2_TR(0x74669a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74669b:{NFSU2_TR(0x74669b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7466a0ull));
TAIL_STATIC(0x7414a0u,741);
}
B7466a0:L7466a0:{c.instructions+=3;NFSU2_TR(0x7466a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7466a3:{NFSU2_TR(0x7466a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7466a4:{NFSU2_TR(0x7466a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7466a9ull));
TAIL_STATIC(0x7420b0u,742);
}
B7466a9:L7466a9:{c.instructions+=3;NFSU2_TR(0x7466a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7466ac:{NFSU2_TR(0x7466ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7466ae:{NFSU2_TR(0x7466ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L746847;}}
}
B7466b4:L7466b4:{c.instructions+=2;NFSU2_TR(0x7466b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7466b7:{NFSU2_TR(0x7466b7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L746847;}}
}
B7466bd:L7466bd:{c.instructions+=6;NFSU2_TR(0x7466bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7466c0:{NFSU2_TR(0x7466c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x13ccull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7466c7:{NFSU2_TR(0x7466c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7466c9:{NFSU2_TR(0x7466c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B7466cc:{NFSU2_TR(0x7466cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7466d0:{NFSU2_TR(0x7466d0);
if(r1(R+518)){{goto L746847;}}
}
B7466d6:L7466d6:{c.instructions+=5;NFSU2_TR(0x7466d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7466da:{NFSU2_TR(0x7466da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7466dc:{NFSU2_TR(0x7466dc);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7466e1:{NFSU2_TR(0x7466e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7466e2:{NFSU2_TR(0x7466e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7466e7ull));
TAIL_STATIC(0x7414a0u,741);
}
B7466e7:L7466e7:{c.instructions+=3;NFSU2_TR(0x7466e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7466ea:{NFSU2_TR(0x7466ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7466eb:{NFSU2_TR(0x7466eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7466f0ull));
TAIL_STATIC(0x7420b0u,742);
}
B7466f0:L7466f0:{c.instructions+=5;NFSU2_TR(0x7466f0);
__builtin_memmove((R+24),(R+0),4);
}
B7466f2:{NFSU2_TR(0x7466f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7466f6:{NFSU2_TR(0x7466f6);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7466fb:{NFSU2_TR(0x7466fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7466fc:{NFSU2_TR(0x7466fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746701ull));
TAIL_STATIC(0x7414a0u,741);
}
B746701:L746701:{c.instructions+=3;NFSU2_TR(0x746701);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B746704:{NFSU2_TR(0x746704);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746706:{NFSU2_TR(0x746706);
if(r1(R+518)){{goto L74680e;}}
}
B74670c:L74670c:{c.instructions+=2;NFSU2_TR(0x74670c);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74670e:{NFSU2_TR(0x74670e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746713ull));
TAIL_STATIC(0x5836d0u,583);
}
B746713:L746713:{c.instructions+=20;NFSU2_TR(0x746713);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B746715:{NFSU2_TR(0x746715);
__builtin_memmove((R+20),(R+0),4);
}
B746717:{NFSU2_TR(0x746717);
__builtin_memmove((R+8),(R+20),4);
}
B746719:{NFSU2_TR(0x746719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B74671b:{NFSU2_TR(0x74671b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74671e:{NFSU2_TR(0x74671e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746721:{NFSU2_TR(0x746721);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746724:{NFSU2_TR(0x746724);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B746727:{NFSU2_TR(0x746727);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74672a:{NFSU2_TR(0x74672a);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74672f:{NFSU2_TR(0x74672f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746732:{NFSU2_TR(0x746732);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746734:{NFSU2_TR(0x746734);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B746737:{NFSU2_TR(0x746737);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74673a:{NFSU2_TR(0x74673a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74673b:{NFSU2_TR(0x74673b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B74673e:{NFSU2_TR(0x74673e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746742:{NFSU2_TR(0x746742);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746747:{NFSU2_TR(0x746747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746748:{NFSU2_TR(0x746748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74674dull));
TAIL_STATIC(0x7414a0u,741);
}
B74674d:L74674d:{c.instructions+=3;NFSU2_TR(0x74674d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746750:{NFSU2_TR(0x746750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746751:{NFSU2_TR(0x746751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746756ull));
TAIL_STATIC(0x742360u,742);
}
B746756:L746756:{c.instructions+=6;NFSU2_TR(0x746756);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74675a:{NFSU2_TR(0x74675a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74675d:{NFSU2_TR(0x74675d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74675f:{NFSU2_TR(0x74675f);
u8 U[4];
w4(U+0,u32(0x7a0bb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746764:{NFSU2_TR(0x746764);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746765:{NFSU2_TR(0x746765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74676aull));
TAIL_STATIC(0x7414a0u,741);
}
B74676a:L74676a:{c.instructions+=3;NFSU2_TR(0x74676a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74676d:{NFSU2_TR(0x74676d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74676e:{NFSU2_TR(0x74676e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746773ull));
TAIL_STATIC(0x742100u,742);
}
B746773:L746773:{c.instructions+=7;NFSU2_TR(0x746773);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746776:{NFSU2_TR(0x746776);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746778:{NFSU2_TR(0x746778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74677b:{NFSU2_TR(0x74677b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74677f:{NFSU2_TR(0x74677f);
u8 U[4];
w4(U+0,u32(0x7c34acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746784:{NFSU2_TR(0x746784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746785:{NFSU2_TR(0x746785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74678aull));
TAIL_STATIC(0x7414a0u,741);
}
B74678a:L74678a:{c.instructions+=3;NFSU2_TR(0x74678a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74678d:{NFSU2_TR(0x74678d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74678e:{NFSU2_TR(0x74678e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746793ull));
TAIL_STATIC(0x7420b0u,742);
}
B746793:L746793:{c.instructions+=7;NFSU2_TR(0x746793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B746796:{NFSU2_TR(0x746796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746799:{NFSU2_TR(0x746799);
__builtin_memmove((R+24),(R+28),4);
}
B74679b:{NFSU2_TR(0x74679b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7467a1:{NFSU2_TR(0x7467a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467a2:{NFSU2_TR(0x7467a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467a3:{NFSU2_TR(0x7467a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7467a8ull));
TAIL_STATIC(0x755090u,755);
}
B7467a8:L7467a8:{c.instructions+=4;NFSU2_TR(0x7467a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7467ab:{NFSU2_TR(0x7467ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7467ad:{NFSU2_TR(0x7467ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7467b1:{NFSU2_TR(0x7467b1);
if(r1(R+518)){{goto L7467ee;}}
}
B7467b3:L7467b3:{c.instructions+=5;NFSU2_TR(0x7467b3);
__builtin_memmove((R+4),(R+28),4);
}
B7467b5:{NFSU2_TR(0x7467b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7467bb:{NFSU2_TR(0x7467bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467bc:{NFSU2_TR(0x7467bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467bd:{NFSU2_TR(0x7467bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7467c2ull));
TAIL_STATIC(0x73d810u,73d);
}
B7467c2:L7467c2:{c.instructions+=5;NFSU2_TR(0x7467c2);
__builtin_memmove((R+28),(R+0),4);
}
B7467c4:{NFSU2_TR(0x7467c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467c5:{NFSU2_TR(0x7467c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7467c9:{NFSU2_TR(0x7467c9);
w4(R+4,u32(0x7ull));
}
B7467ce:{NFSU2_TR(0x7467ce);
__builtin_memmove((R+24),(R+20),4);
}
B7467d0:L7467d0:{c.instructions+=1;NFSU2_TR(0x7467d0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7467d2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7467d0u);}goto L7467d0;}
}
B7467d2:L7467d2:{c.instructions+=5;NFSU2_TR(0x7467d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7467d6:{NFSU2_TR(0x7467d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7467dc:{NFSU2_TR(0x7467dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467dd:{NFSU2_TR(0x7467dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467de:{NFSU2_TR(0x7467de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7467e3ull));
TAIL_STATIC(0x73d7c0u,73d);
}
B7467e3:L7467e3:{c.instructions+=2;NFSU2_TR(0x7467e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467e4:{NFSU2_TR(0x7467e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7467e9ull));
TAIL_STATIC(0x598ec0u,598);
}
B7467e9:L7467e9:{c.instructions+=2;NFSU2_TR(0x7467e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7467ec:{NFSU2_TR(0x7467ec);
{goto L746847;}
}
B7467ee:L7467ee:{c.instructions+=4;NFSU2_TR(0x7467ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7467f4:{NFSU2_TR(0x7467f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467f5:{NFSU2_TR(0x7467f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7467f6:{NFSU2_TR(0x7467f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7467fbull));
TAIL_STATIC(0x73d750u,73d);
}
B7467fb:L7467fb:{c.instructions+=6;NFSU2_TR(0x7467fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7467fe:{NFSU2_TR(0x7467fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746804:{NFSU2_TR(0x746804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746805:{NFSU2_TR(0x746805);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746806:{NFSU2_TR(0x746806);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746807:{NFSU2_TR(0x746807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74680cull));
TAIL_STATIC(0x755020u,755);
}
B74680c:L74680c:{c.instructions+=1;NFSU2_TR(0x74680c);
{goto L746844;}
}
B74680e:L74680e:{c.instructions+=4;NFSU2_TR(0x74680e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746814:{NFSU2_TR(0x746814);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746815:{NFSU2_TR(0x746815);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746816:{NFSU2_TR(0x746816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74681bull));
TAIL_STATIC(0x755090u,755);
}
B74681b:L74681b:{c.instructions+=4;NFSU2_TR(0x74681b);
__builtin_memmove((R+20),(R+0),4);
}
B74681d:{NFSU2_TR(0x74681d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746820:{NFSU2_TR(0x746820);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746822:{NFSU2_TR(0x746822);
if(r1(R+518)){{goto L746847;}}
}
B746824:L746824:{c.instructions+=4;NFSU2_TR(0x746824);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74682a:{NFSU2_TR(0x74682a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74682b:{NFSU2_TR(0x74682b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74682c:{NFSU2_TR(0x74682c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746831ull));
TAIL_STATIC(0x7550d0u,755);
}
B746831:L746831:{c.instructions+=4;NFSU2_TR(0x746831);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746837:{NFSU2_TR(0x746837);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746838:{NFSU2_TR(0x746838);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746839:{NFSU2_TR(0x746839);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74683eull));
TAIL_STATIC(0x73d890u,73d);
}
B74683e:L74683e:{c.instructions+=2;NFSU2_TR(0x74683e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74683f:{NFSU2_TR(0x74683f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746844ull));
TAIL_STATIC(0x598ec0u,598);
}
B746844:L746844:{c.instructions+=1;NFSU2_TR(0x746844);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746847:L746847:{c.instructions+=3;NFSU2_TR(0x746847);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74684b:{NFSU2_TR(0x74684b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b726e6bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746851:{NFSU2_TR(0x746851);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746a07;}}
}
B746857:L746857:{c.instructions+=3;NFSU2_TR(0x746857);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74685d:{NFSU2_TR(0x74685d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74685f:{NFSU2_TR(0x74685f);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B746865:L746865:{c.instructions+=5;NFSU2_TR(0x746865);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746869:{NFSU2_TR(0x746869);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74686b:{NFSU2_TR(0x74686b);
u8 U[4];
w4(U+0,u32(0x7d28e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746870:{NFSU2_TR(0x746870);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746871:{NFSU2_TR(0x746871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746876ull));
TAIL_STATIC(0x7414a0u,741);
}
B746876:L746876:{c.instructions+=3;NFSU2_TR(0x746876);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746879:{NFSU2_TR(0x746879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74687a:{NFSU2_TR(0x74687a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74687full));
TAIL_STATIC(0x7420b0u,742);
}
B74687f:L74687f:{c.instructions+=3;NFSU2_TR(0x74687f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746882:{NFSU2_TR(0x746882);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746885:{NFSU2_TR(0x746885);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7468cb;}}
}
B746887:L746887:{c.instructions+=3;NFSU2_TR(0x746887);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74688d:{NFSU2_TR(0x74688d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74688e:{NFSU2_TR(0x74688e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746893ull));
TAIL_STATIC(0x754e10u,754);
}
B746893:L746893:{c.instructions+=3;NFSU2_TR(0x746893);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B746896:{NFSU2_TR(0x746896);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746898:{NFSU2_TR(0x746898);
if(r1(R+518)){{goto L746a07;}}
}
B74689e:L74689e:{c.instructions+=1;NFSU2_TR(0x74689e);
__builtin_memmove((R+28),(R+28),4);
}
B7468a0:L7468a0:{c.instructions+=4;NFSU2_TR(0x7468a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7468a6:{NFSU2_TR(0x7468a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468a7:{NFSU2_TR(0x7468a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468a8:{NFSU2_TR(0x7468a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7468adull));
TAIL_STATIC(0x73d890u,73d);
}
B7468ad:L7468ad:{c.instructions+=2;NFSU2_TR(0x7468ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468ae:{NFSU2_TR(0x7468ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7468b3ull));
TAIL_STATIC(0x598ec0u,598);
}
B7468b3:L7468b3:{c.instructions+=3;NFSU2_TR(0x7468b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7468b9:{NFSU2_TR(0x7468b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468ba:{NFSU2_TR(0x7468ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7468bfull));
TAIL_STATIC(0x754e10u,754);
}
B7468bf:L7468bf:{c.instructions+=3;NFSU2_TR(0x7468bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7468c2:{NFSU2_TR(0x7468c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7468c4:{NFSU2_TR(0x7468c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7468a0u);}goto L7468a0;}}
}
B7468c6:L7468c6:{c.instructions+=1;NFSU2_TR(0x7468c6);
{goto L746a07;}
}
B7468cb:L7468cb:{c.instructions+=2;NFSU2_TR(0x7468cb);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468d0:{NFSU2_TR(0x7468d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7468d5ull));
TAIL_STATIC(0x5836d0u,583);
}
B7468d5:L7468d5:{c.instructions+=10;NFSU2_TR(0x7468d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7468d8:{NFSU2_TR(0x7468d8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7468da:{NFSU2_TR(0x7468da);
__builtin_memmove((R+20),(R+0),4);
}
B7468dc:{NFSU2_TR(0x7468dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468dd:{NFSU2_TR(0x7468dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7468e0:{NFSU2_TR(0x7468e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7468e3:{NFSU2_TR(0x7468e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7468e7:{NFSU2_TR(0x7468e7);
u8 U[4];
w4(U+0,u32(0x7c34b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468ec:{NFSU2_TR(0x7468ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468ed:{NFSU2_TR(0x7468ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7468f2ull));
TAIL_STATIC(0x7414a0u,741);
}
B7468f2:L7468f2:{c.instructions+=3;NFSU2_TR(0x7468f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7468f5:{NFSU2_TR(0x7468f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7468f6:{NFSU2_TR(0x7468f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7468fbull));
TAIL_STATIC(0x7420b0u,742);
}
B7468fb:L7468fb:{c.instructions+=10;NFSU2_TR(0x7468fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7468fe:{NFSU2_TR(0x7468fe);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746903:{NFSU2_TR(0x746903);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746905:{NFSU2_TR(0x746905);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B746908:{NFSU2_TR(0x746908);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746909:{NFSU2_TR(0x746909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B74690c:{NFSU2_TR(0x74690c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746910:{NFSU2_TR(0x746910);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746915:{NFSU2_TR(0x746915);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746916:{NFSU2_TR(0x746916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74691bull));
TAIL_STATIC(0x7414a0u,741);
}
B74691b:L74691b:{c.instructions+=3;NFSU2_TR(0x74691b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74691e:{NFSU2_TR(0x74691e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74691f:{NFSU2_TR(0x74691f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746924ull));
TAIL_STATIC(0x742360u,742);
}
B746924:L746924:{c.instructions+=9;NFSU2_TR(0x746924);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746928:{NFSU2_TR(0x746928);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74692b:{NFSU2_TR(0x74692b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746930:{NFSU2_TR(0x746930);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746935:{NFSU2_TR(0x746935);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B746938:{NFSU2_TR(0x746938);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746939:{NFSU2_TR(0x746939);
u8 U[4];
w4(U+0,u32(0x7d28ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74693e:{NFSU2_TR(0x74693e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74693f:{NFSU2_TR(0x74693f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746944ull));
TAIL_STATIC(0x7414a0u,741);
}
B746944:L746944:{c.instructions+=3;NFSU2_TR(0x746944);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746947:{NFSU2_TR(0x746947);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746948:{NFSU2_TR(0x746948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74694dull));
TAIL_STATIC(0x742360u,742);
}
B74694d:L74694d:{c.instructions+=4;NFSU2_TR(0x74694d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746953:{NFSU2_TR(0x746953);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746954:{NFSU2_TR(0x746954);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746955:{NFSU2_TR(0x746955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74695aull));
TAIL_STATIC(0x754f70u,754);
}
B74695a:L74695a:{c.instructions+=4;NFSU2_TR(0x74695a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74695d:{NFSU2_TR(0x74695d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74695f:{NFSU2_TR(0x74695f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746963:{NFSU2_TR(0x746963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74698e;}}
}
B746965:L746965:{c.instructions+=2;NFSU2_TR(0x746965);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+28)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B746968:{NFSU2_TR(0x746968);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7469fe;}}
}
B74696e:L74696e:{c.instructions+=4;NFSU2_TR(0x74696e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746974:{NFSU2_TR(0x746974);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746975:{NFSU2_TR(0x746975);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746976:{NFSU2_TR(0x746976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74697bull));
TAIL_STATIC(0x73d750u,73d);
}
B74697b:L74697b:{c.instructions+=5;NFSU2_TR(0x74697b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746981:{NFSU2_TR(0x746981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746982:{NFSU2_TR(0x746982);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746983:{NFSU2_TR(0x746983);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746984:{NFSU2_TR(0x746984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746989ull));
TAIL_STATIC(0x754f00u,754);
}
B746989:L746989:{c.instructions+=2;NFSU2_TR(0x746989);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74698c:{NFSU2_TR(0x74698c);
{goto L746a07;}
}
B74698e:L74698e:{c.instructions+=3;NFSU2_TR(0x74698e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B746991:{NFSU2_TR(0x746991);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746993:{NFSU2_TR(0x746993);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7469ce;}}
}
B746995:L746995:{c.instructions+=5;NFSU2_TR(0x746995);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746999:{NFSU2_TR(0x746999);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74699f:{NFSU2_TR(0x74699f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469a0:{NFSU2_TR(0x7469a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469a1:{NFSU2_TR(0x7469a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7469a6ull));
TAIL_STATIC(0x73d810u,73d);
}
B7469a6:L7469a6:{c.instructions+=3;NFSU2_TR(0x7469a6);
__builtin_memmove((R+28),(R+0),4);
}
B7469a8:{NFSU2_TR(0x7469a8);
w4(R+4,u32(0x48ull));
}
B7469ad:{NFSU2_TR(0x7469ad);
__builtin_memmove((R+24),(R+20),4);
}
B7469af:L7469af:{c.instructions+=1;NFSU2_TR(0x7469af);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7469b1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7469afu);}goto L7469af;}
}
B7469b1:L7469b1:{c.instructions+=6;NFSU2_TR(0x7469b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7469b5:{NFSU2_TR(0x7469b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7469bb:{NFSU2_TR(0x7469bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469bc:{NFSU2_TR(0x7469bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469bd:{NFSU2_TR(0x7469bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469be:{NFSU2_TR(0x7469be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7469c3ull));
TAIL_STATIC(0x73d7c0u,73d);
}
B7469c3:L7469c3:{c.instructions+=2;NFSU2_TR(0x7469c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469c4:{NFSU2_TR(0x7469c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7469c9ull));
TAIL_STATIC(0x598ec0u,598);
}
B7469c9:L7469c9:{c.instructions+=2;NFSU2_TR(0x7469c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7469cc:{NFSU2_TR(0x7469cc);
{goto L746a07;}
}
B7469ce:L7469ce:{c.instructions+=2;NFSU2_TR(0x7469ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7469d1:{NFSU2_TR(0x7469d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7469fe;}}
}
B7469d3:L7469d3:{c.instructions+=4;NFSU2_TR(0x7469d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7469d9:{NFSU2_TR(0x7469d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469da:{NFSU2_TR(0x7469da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469db:{NFSU2_TR(0x7469db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7469e0ull));
TAIL_STATIC(0x754fc0u,754);
}
B7469e0:L7469e0:{c.instructions+=4;NFSU2_TR(0x7469e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7469e6:{NFSU2_TR(0x7469e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469e7:{NFSU2_TR(0x7469e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469e8:{NFSU2_TR(0x7469e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7469edull));
TAIL_STATIC(0x73d890u,73d);
}
B7469ed:L7469ed:{c.instructions+=2;NFSU2_TR(0x7469ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469ee:{NFSU2_TR(0x7469ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7469f3ull));
TAIL_STATIC(0x598ec0u,598);
}
B7469f3:L7469f3:{c.instructions+=2;NFSU2_TR(0x7469f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469f4:{NFSU2_TR(0x7469f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7469f9ull));
TAIL_STATIC(0x598ec0u,598);
}
B7469f9:L7469f9:{c.instructions+=2;NFSU2_TR(0x7469f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7469fc:{NFSU2_TR(0x7469fc);
{goto L746a07;}
}
B7469fe:L7469fe:{c.instructions+=2;NFSU2_TR(0x7469fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7469ff:{NFSU2_TR(0x7469ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746a04ull));
TAIL_STATIC(0x598ec0u,598);
}
B746a04:L746a04:{c.instructions+=1;NFSU2_TR(0x746a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B746a07:L746a07:{c.instructions+=3;NFSU2_TR(0x746a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746a0b:{NFSU2_TR(0x746a0b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b736e70ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746a11:{NFSU2_TR(0x746a11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746bbb;}}
}
B746a17:L746a17:{c.instructions+=3;NFSU2_TR(0x746a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746a1d:{NFSU2_TR(0x746a1d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B746a20:{NFSU2_TR(0x746a20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x7470b2u,747);}
}
B746a26:L746a26:{c.instructions+=2;NFSU2_TR(0x746a26);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1dull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746a29:{NFSU2_TR(0x746a29);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x7470b2u,747);}
}
B746a2f:L746a2f:{c.instructions+=4;NFSU2_TR(0x746a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B746a32:{NFSU2_TR(0x746a32);
u8 U[16];
w4(U+0,u32(u32(u32(0x1160ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B746a39:{NFSU2_TR(0x746a39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746a3b:{NFSU2_TR(0x746a3b);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B746a41:L746a41:{c.instructions+=2;NFSU2_TR(0x746a41);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a46:{NFSU2_TR(0x746a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746a4bull));
TAIL_STATIC(0x5836d0u,583);
}
B746a4b:L746a4b:{c.instructions+=7;NFSU2_TR(0x746a4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B746a4e:{NFSU2_TR(0x746a4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a50:{NFSU2_TR(0x746a50);
__builtin_memmove((R+20),(R+0),4);
}
B746a52:{NFSU2_TR(0x746a52);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746a56:{NFSU2_TR(0x746a56);
u8 U[4];
w4(U+0,u32(0x7a1104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a5b:{NFSU2_TR(0x746a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a5c:{NFSU2_TR(0x746a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746a61ull));
TAIL_STATIC(0x7414a0u,741);
}
B746a61:L746a61:{c.instructions+=3;NFSU2_TR(0x746a61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746a64:{NFSU2_TR(0x746a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a65:{NFSU2_TR(0x746a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746a6aull));
TAIL_STATIC(0x7420b0u,742);
}
B746a6a:L746a6a:{c.instructions+=7;NFSU2_TR(0x746a6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746a6d:{NFSU2_TR(0x746a6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a6f:{NFSU2_TR(0x746a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746a72:{NFSU2_TR(0x746a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746a76:{NFSU2_TR(0x746a76);
u8 U[4];
w4(U+0,u32(0x7d28e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a7b:{NFSU2_TR(0x746a7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a7c:{NFSU2_TR(0x746a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746a81ull));
TAIL_STATIC(0x7414a0u,741);
}
B746a81:L746a81:{c.instructions+=3;NFSU2_TR(0x746a81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746a84:{NFSU2_TR(0x746a84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a85:{NFSU2_TR(0x746a85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746a8aull));
TAIL_STATIC(0x7420b0u,742);
}
B746a8a:L746a8a:{c.instructions+=8;NFSU2_TR(0x746a8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746a8d:{NFSU2_TR(0x746a8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746a8f:{NFSU2_TR(0x746a8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B746a92:{NFSU2_TR(0x746a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B746a99:{NFSU2_TR(0x746a99);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746a9d:{NFSU2_TR(0x746a9d);
u8 U[4];
w4(U+0,u32(0x7d28f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746aa2:{NFSU2_TR(0x746aa2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746aa3:{NFSU2_TR(0x746aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746aa8ull));
TAIL_STATIC(0x7414a0u,741);
}
B746aa8:L746aa8:{c.instructions+=3;NFSU2_TR(0x746aa8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746aab:{NFSU2_TR(0x746aab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746aac:{NFSU2_TR(0x746aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ab1ull));
TAIL_STATIC(0x7420b0u,742);
}
B746ab1:L746ab1:{c.instructions+=3;NFSU2_TR(0x746ab1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746ab4:{NFSU2_TR(0x746ab4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746ab6:{NFSU2_TR(0x746ab6);
if(r1(R+518)){{goto L746abc;}}
}
B746ab8:L746ab8:{c.instructions+=1;NFSU2_TR(0x746ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B746abc:L746abc:{c.instructions+=8;NFSU2_TR(0x746abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746ac0:{NFSU2_TR(0x746ac0);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ac5:{NFSU2_TR(0x746ac5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ac7:{NFSU2_TR(0x746ac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B746aca:{NFSU2_TR(0x746aca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746acb:{NFSU2_TR(0x746acb);
u8 U[4];
w4(U+0,u32(0x7a15f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ad0:{NFSU2_TR(0x746ad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ad1:{NFSU2_TR(0x746ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ad6ull));
TAIL_STATIC(0x7414a0u,741);
}
B746ad6:L746ad6:{c.instructions+=3;NFSU2_TR(0x746ad6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746ad9:{NFSU2_TR(0x746ad9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ada:{NFSU2_TR(0x746ada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746adfull));
TAIL_STATIC(0x742360u,742);
}
B746adf:L746adf:{c.instructions+=9;NFSU2_TR(0x746adf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746ae3:{NFSU2_TR(0x746ae3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B746ae6:{NFSU2_TR(0x746ae6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746aeb:{NFSU2_TR(0x746aeb);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746af0:{NFSU2_TR(0x746af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B746af3:{NFSU2_TR(0x746af3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746af4:{NFSU2_TR(0x746af4);
u8 U[4];
w4(U+0,u32(0x7d28ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746af9:{NFSU2_TR(0x746af9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746afa:{NFSU2_TR(0x746afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746affull));
TAIL_STATIC(0x7414a0u,741);
}
B746aff:L746aff:{c.instructions+=3;NFSU2_TR(0x746aff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746b02:{NFSU2_TR(0x746b02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b03:{NFSU2_TR(0x746b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746b08ull));
TAIL_STATIC(0x742360u,742);
}
B746b08:L746b08:{c.instructions+=4;NFSU2_TR(0x746b08);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B746b0e:{NFSU2_TR(0x746b0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b0f:{NFSU2_TR(0x746b0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b10:{NFSU2_TR(0x746b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746b15ull));
TAIL_STATIC(0x74bb90u,74b);
}
B746b15:L746b15:{c.instructions+=3;NFSU2_TR(0x746b15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B746b18:{NFSU2_TR(0x746b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746b1a:{NFSU2_TR(0x746b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746b20;}}
}
B746b1c:L746b1c:{c.instructions+=1;NFSU2_TR(0x746b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B746b20:L746b20:{c.instructions+=6;NFSU2_TR(0x746b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746b26:{NFSU2_TR(0x746b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B746b29:{NFSU2_TR(0x746b29);
u8 U[16];
w4(U+0,u32(u32(u32(0x1160ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B746b30:{NFSU2_TR(0x746b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b31:{NFSU2_TR(0x746b31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b32:{NFSU2_TR(0x746b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746b37ull));
TAIL_STATIC(0x754f70u,754);
}
B746b37:L746b37:{c.instructions+=5;NFSU2_TR(0x746b37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746b3a:{NFSU2_TR(0x746b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746b3e:{NFSU2_TR(0x746b3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746b40:{NFSU2_TR(0x746b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746b46:{NFSU2_TR(0x746b46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746b76;}}
}
B746b48:L746b48:{c.instructions+=5;NFSU2_TR(0x746b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B746b4b:{NFSU2_TR(0x746b4b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1164ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B746b52:{NFSU2_TR(0x746b52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b53:{NFSU2_TR(0x746b53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b54:{NFSU2_TR(0x746b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746b59ull));
TAIL_STATIC(0x73d750u,73d);
}
B746b59:L746b59:{c.instructions+=7;NFSU2_TR(0x746b59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b5a:{NFSU2_TR(0x746b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746b60:{NFSU2_TR(0x746b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B746b63:{NFSU2_TR(0x746b63);
u8 U[16];
w4(U+0,u32(u32(u32(0x1160ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B746b6a:{NFSU2_TR(0x746b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b6b:{NFSU2_TR(0x746b6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b6c:{NFSU2_TR(0x746b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746b71ull));
TAIL_STATIC(0x754f00u,754);
}
B746b71:L746b71:{c.instructions+=2;NFSU2_TR(0x746b71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746b74:{NFSU2_TR(0x746b74);
{goto L746bbb;}
}
B746b76:L746b76:{c.instructions+=6;NFSU2_TR(0x746b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746b7a:{NFSU2_TR(0x746b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B746b7d:{NFSU2_TR(0x746b7d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1164ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B746b84:{NFSU2_TR(0x746b84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b85:{NFSU2_TR(0x746b85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b86:{NFSU2_TR(0x746b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746b8bull));
TAIL_STATIC(0x73d810u,73d);
}
B746b8b:L746b8b:{c.instructions+=4;NFSU2_TR(0x746b8b);
__builtin_memmove((R+28),(R+0),4);
}
B746b8d:{NFSU2_TR(0x746b8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746b8e:{NFSU2_TR(0x746b8e);
w4(R+4,u32(0x48ull));
}
B746b93:{NFSU2_TR(0x746b93);
__builtin_memmove((R+24),(R+20),4);
}
B746b95:L746b95:{c.instructions+=1;NFSU2_TR(0x746b95);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L746b97;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746b95u);}goto L746b95;}
}
B746b97:L746b97:{c.instructions+=7;NFSU2_TR(0x746b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x148cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746b9d:{NFSU2_TR(0x746b9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746ba1:{NFSU2_TR(0x746ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B746ba4:{NFSU2_TR(0x746ba4);
u8 U[16];
w4(U+0,u32(u32(u32(0x1164ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B746bab:{NFSU2_TR(0x746bab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746bac:{NFSU2_TR(0x746bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746bad:{NFSU2_TR(0x746bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746bb2ull));
TAIL_STATIC(0x73d7c0u,73d);
}
B746bb2:L746bb2:{c.instructions+=2;NFSU2_TR(0x746bb2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746bb3:{NFSU2_TR(0x746bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746bb8ull));
TAIL_STATIC(0x598ec0u,598);
}
B746bb8:L746bb8:{c.instructions+=1;NFSU2_TR(0x746bb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B746bbb:L746bbb:{c.instructions+=3;NFSU2_TR(0x746bbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746bbf:{NFSU2_TR(0x746bbf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b61676dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746bc5:{NFSU2_TR(0x746bc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746cd9;}}
}
B746bcb:L746bcb:{c.instructions+=3;NFSU2_TR(0x746bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746bd1:{NFSU2_TR(0x746bd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746bd3:{NFSU2_TR(0x746bd3);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B746bd9:L746bd9:{c.instructions+=5;NFSU2_TR(0x746bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746bdd:{NFSU2_TR(0x746bdd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746bdf:{NFSU2_TR(0x746bdf);
u8 U[4];
w4(U+0,u32(0x7a15b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746be4:{NFSU2_TR(0x746be4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746be5:{NFSU2_TR(0x746be5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746beaull));
TAIL_STATIC(0x7414a0u,741);
}
B746bea:L746bea:{c.instructions+=3;NFSU2_TR(0x746bea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746bed:{NFSU2_TR(0x746bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746bee:{NFSU2_TR(0x746bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746bf3ull));
TAIL_STATIC(0x7420b0u,742);
}
B746bf3:L746bf3:{c.instructions+=4;NFSU2_TR(0x746bf3);
__builtin_memmove((R+24),(R+0),4);
}
B746bf5:{NFSU2_TR(0x746bf5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746bf8:{NFSU2_TR(0x746bf8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B746bfa:{NFSU2_TR(0x746bfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L746cd9;}}
}
B746c00:L746c00:{c.instructions+=4;NFSU2_TR(0x746c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746c04:{NFSU2_TR(0x746c04);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c09:{NFSU2_TR(0x746c09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c0a:{NFSU2_TR(0x746c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c0full));
TAIL_STATIC(0x7414a0u,741);
}
B746c0f:L746c0f:{c.instructions+=3;NFSU2_TR(0x746c0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746c12:{NFSU2_TR(0x746c12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746c14:{NFSU2_TR(0x746c14);
if(r1(R+518)){{goto L746ca0;}}
}
B746c1a:L746c1a:{c.instructions+=2;NFSU2_TR(0x746c1a);
u8 U[4];
w4(U+0,u32(0x4e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c1f:{NFSU2_TR(0x746c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c24ull));
TAIL_STATIC(0x5836d0u,583);
}
B746c24:L746c24:{c.instructions+=4;NFSU2_TR(0x746c24);
__builtin_memmove((R+20),(R+0),4);
}
B746c26:{NFSU2_TR(0x746c26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B746c28:{NFSU2_TR(0x746c28);
w4(R+4,u32(0x138ull));
}
B746c2d:{NFSU2_TR(0x746c2d);
__builtin_memmove((R+28),(R+20),4);
}
B746c2f:L746c2f:{c.instructions+=1;NFSU2_TR(0x746c2f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L746c31;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746c2fu);}goto L746c2f;}
}
B746c31:L746c31:{c.instructions+=4;NFSU2_TR(0x746c31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746c35:{NFSU2_TR(0x746c35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c36:{NFSU2_TR(0x746c36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c37:{NFSU2_TR(0x746c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c3cull));
TAIL_STATIC(0x7449f0u,744);
}
B746c3c:L746c3c:{c.instructions+=4;NFSU2_TR(0x746c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746c42:{NFSU2_TR(0x746c42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c43:{NFSU2_TR(0x746c43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c44:{NFSU2_TR(0x746c44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c49ull));
TAIL_STATIC(0x755090u,755);
}
B746c49:L746c49:{c.instructions+=5;NFSU2_TR(0x746c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746c4f:{NFSU2_TR(0x746c4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746c52:{NFSU2_TR(0x746c52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746c54:{NFSU2_TR(0x746c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746c58:{NFSU2_TR(0x746c58);
if(r1(R+518)){{goto L746c89;}}
}
B746c5a:L746c5a:{c.instructions+=3;NFSU2_TR(0x746c5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c5b:{NFSU2_TR(0x746c5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c5c:{NFSU2_TR(0x746c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c61ull));
TAIL_STATIC(0x73d810u,73d);
}
B746c61:L746c61:{c.instructions+=5;NFSU2_TR(0x746c61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c62:{NFSU2_TR(0x746c62);
__builtin_memmove((R+28),(R+0),4);
}
B746c64:{NFSU2_TR(0x746c64);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746c68:{NFSU2_TR(0x746c68);
w4(R+4,u32(0x138ull));
}
B746c6d:{NFSU2_TR(0x746c6d);
__builtin_memmove((R+24),(R+20),4);
}
B746c6f:L746c6f:{c.instructions+=1;NFSU2_TR(0x746c6f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L746c71;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746c6fu);}goto L746c6f;}
}
B746c71:L746c71:{c.instructions+=4;NFSU2_TR(0x746c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746c77:{NFSU2_TR(0x746c77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c78:{NFSU2_TR(0x746c78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c79:{NFSU2_TR(0x746c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c7eull));
TAIL_STATIC(0x73d7c0u,73d);
}
B746c7e:L746c7e:{c.instructions+=2;NFSU2_TR(0x746c7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c7f:{NFSU2_TR(0x746c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c84ull));
TAIL_STATIC(0x598ec0u,598);
}
B746c84:L746c84:{c.instructions+=2;NFSU2_TR(0x746c84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B746c87:{NFSU2_TR(0x746c87);
{goto L746cd9;}
}
B746c89:L746c89:{c.instructions+=3;NFSU2_TR(0x746c89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c8a:{NFSU2_TR(0x746c8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c8b:{NFSU2_TR(0x746c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c90ull));
TAIL_STATIC(0x73d750u,73d);
}
B746c90:L746c90:{c.instructions+=5;NFSU2_TR(0x746c90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c91:{NFSU2_TR(0x746c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746c97:{NFSU2_TR(0x746c97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c98:{NFSU2_TR(0x746c98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746c99:{NFSU2_TR(0x746c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746c9eull));
TAIL_STATIC(0x755020u,755);
}
B746c9e:L746c9e:{c.instructions+=1;NFSU2_TR(0x746c9e);
{goto L746cd6;}
}
B746ca0:L746ca0:{c.instructions+=4;NFSU2_TR(0x746ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746ca6:{NFSU2_TR(0x746ca6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ca7:{NFSU2_TR(0x746ca7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ca8:{NFSU2_TR(0x746ca8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746cadull));
TAIL_STATIC(0x755090u,755);
}
B746cad:L746cad:{c.instructions+=4;NFSU2_TR(0x746cad);
__builtin_memmove((R+28),(R+0),4);
}
B746caf:{NFSU2_TR(0x746caf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746cb2:{NFSU2_TR(0x746cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746cb4:{NFSU2_TR(0x746cb4);
if(r1(R+518)){{goto L746cd9;}}
}
B746cb6:L746cb6:{c.instructions+=4;NFSU2_TR(0x746cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746cbc:{NFSU2_TR(0x746cbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746cbd:{NFSU2_TR(0x746cbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746cbe:{NFSU2_TR(0x746cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746cc3ull));
TAIL_STATIC(0x7550d0u,755);
}
B746cc3:L746cc3:{c.instructions+=4;NFSU2_TR(0x746cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746cc9:{NFSU2_TR(0x746cc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746cca:{NFSU2_TR(0x746cca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ccb:{NFSU2_TR(0x746ccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746cd0ull));
TAIL_STATIC(0x73d890u,73d);
}
B746cd0:L746cd0:{c.instructions+=2;NFSU2_TR(0x746cd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746cd1:{NFSU2_TR(0x746cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746cd6ull));
TAIL_STATIC(0x598ec0u,598);
}
B746cd6:L746cd6:{c.instructions+=1;NFSU2_TR(0x746cd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746cd9:L746cd9:{c.instructions+=3;NFSU2_TR(0x746cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746cdd:{NFSU2_TR(0x746cdd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b67616dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746ce3:{NFSU2_TR(0x746ce3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746df2;}}
}
B746ce9:L746ce9:{c.instructions+=3;NFSU2_TR(0x746ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746cef:{NFSU2_TR(0x746cef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746cf1:{NFSU2_TR(0x746cf1);
if(r1(R+518)){TAIL_STATIC(0x7470b2u,747);}
}
B746cf7:L746cf7:{c.instructions+=4;NFSU2_TR(0x746cf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746cfb:{NFSU2_TR(0x746cfb);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d00:{NFSU2_TR(0x746d00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d01:{NFSU2_TR(0x746d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d06ull));
TAIL_STATIC(0x7414a0u,741);
}
B746d06:L746d06:{c.instructions+=3;NFSU2_TR(0x746d06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746d09:{NFSU2_TR(0x746d09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746d0b:{NFSU2_TR(0x746d0b);
if(r1(R+518)){{goto L746d9d;}}
}
B746d11:L746d11:{c.instructions+=2;NFSU2_TR(0x746d11);
u8 U[4];
w4(U+0,u32(0x4e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d16:{NFSU2_TR(0x746d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d1bull));
TAIL_STATIC(0x5836d0u,583);
}
B746d1b:L746d1b:{c.instructions+=4;NFSU2_TR(0x746d1b);
__builtin_memmove((R+20),(R+0),4);
}
B746d1d:{NFSU2_TR(0x746d1d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B746d1f:{NFSU2_TR(0x746d1f);
w4(R+4,u32(0x138ull));
}
B746d24:{NFSU2_TR(0x746d24);
__builtin_memmove((R+28),(R+20),4);
}
B746d26:L746d26:{c.instructions+=1;NFSU2_TR(0x746d26);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L746d28;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746d26u);}goto L746d26;}
}
B746d28:L746d28:{c.instructions+=4;NFSU2_TR(0x746d28);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746d2c:{NFSU2_TR(0x746d2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d2d:{NFSU2_TR(0x746d2d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d2e:{NFSU2_TR(0x746d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d33ull));
TAIL_STATIC(0x7449f0u,744);
}
B746d33:L746d33:{c.instructions+=5;NFSU2_TR(0x746d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B746d36:{NFSU2_TR(0x746d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746d3c:{NFSU2_TR(0x746d3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d3d:{NFSU2_TR(0x746d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d3e:{NFSU2_TR(0x746d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d43ull));
TAIL_STATIC(0x755090u,755);
}
B746d43:L746d43:{c.instructions+=5;NFSU2_TR(0x746d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746d49:{NFSU2_TR(0x746d49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746d4c:{NFSU2_TR(0x746d4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746d4e:{NFSU2_TR(0x746d4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746d52:{NFSU2_TR(0x746d52);
if(r1(R+518)){{goto L746d83;}}
}
B746d54:L746d54:{c.instructions+=3;NFSU2_TR(0x746d54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d55:{NFSU2_TR(0x746d55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d56:{NFSU2_TR(0x746d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d5bull));
TAIL_STATIC(0x73d810u,73d);
}
B746d5b:L746d5b:{c.instructions+=5;NFSU2_TR(0x746d5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d5c:{NFSU2_TR(0x746d5c);
__builtin_memmove((R+28),(R+0),4);
}
B746d5e:{NFSU2_TR(0x746d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746d62:{NFSU2_TR(0x746d62);
w4(R+4,u32(0x138ull));
}
B746d67:{NFSU2_TR(0x746d67);
__builtin_memmove((R+24),(R+20),4);
}
B746d69:L746d69:{c.instructions+=1;NFSU2_TR(0x746d69);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L746d6b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746d69u);}goto L746d69;}
}
B746d6b:L746d6b:{c.instructions+=4;NFSU2_TR(0x746d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746d71:{NFSU2_TR(0x746d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d72:{NFSU2_TR(0x746d72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d73:{NFSU2_TR(0x746d73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d78ull));
TAIL_STATIC(0x73d7c0u,73d);
}
B746d78:L746d78:{c.instructions+=2;NFSU2_TR(0x746d78);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d79:{NFSU2_TR(0x746d79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d7eull));
TAIL_STATIC(0x598ec0u,598);
}
B746d7e:L746d7e:{c.instructions+=2;NFSU2_TR(0x746d7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B746d81:{NFSU2_TR(0x746d81);
{goto L746df2;}
}
B746d83:L746d83:{c.instructions+=3;NFSU2_TR(0x746d83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d84:{NFSU2_TR(0x746d84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d85:{NFSU2_TR(0x746d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d8aull));
TAIL_STATIC(0x73d750u,73d);
}
B746d8a:L746d8a:{c.instructions+=6;NFSU2_TR(0x746d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746d90:{NFSU2_TR(0x746d90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d91:{NFSU2_TR(0x746d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B746d94:{NFSU2_TR(0x746d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d95:{NFSU2_TR(0x746d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746d96:{NFSU2_TR(0x746d96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746d9bull));
TAIL_STATIC(0x755020u,755);
}
B746d9b:L746d9b:{c.instructions+=1;NFSU2_TR(0x746d9b);
{goto L746def;}
}
B746d9d:L746d9d:{c.instructions+=5;NFSU2_TR(0x746d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746da1:{NFSU2_TR(0x746da1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746da3:{NFSU2_TR(0x746da3);
u8 U[4];
w4(U+0,u32(0x7a15b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746da8:{NFSU2_TR(0x746da8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746da9:{NFSU2_TR(0x746da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746daeull));
TAIL_STATIC(0x7414a0u,741);
}
B746dae:L746dae:{c.instructions+=3;NFSU2_TR(0x746dae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746db1:{NFSU2_TR(0x746db1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746db2:{NFSU2_TR(0x746db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746db7ull));
TAIL_STATIC(0x7420b0u,742);
}
B746db7:L746db7:{c.instructions+=5;NFSU2_TR(0x746db7);
__builtin_memmove((R+24),(R+0),4);
}
B746db9:{NFSU2_TR(0x746db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746dbf:{NFSU2_TR(0x746dbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746dc0:{NFSU2_TR(0x746dc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746dc1:{NFSU2_TR(0x746dc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746dc6ull));
TAIL_STATIC(0x755090u,755);
}
B746dc6:L746dc6:{c.instructions+=4;NFSU2_TR(0x746dc6);
__builtin_memmove((R+28),(R+0),4);
}
B746dc8:{NFSU2_TR(0x746dc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B746dcb:{NFSU2_TR(0x746dcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746dcd:{NFSU2_TR(0x746dcd);
if(r1(R+518)){{goto L746df2;}}
}
B746dcf:L746dcf:{c.instructions+=4;NFSU2_TR(0x746dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746dd5:{NFSU2_TR(0x746dd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746dd6:{NFSU2_TR(0x746dd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746dd7:{NFSU2_TR(0x746dd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ddcull));
TAIL_STATIC(0x7550d0u,755);
}
B746ddc:L746ddc:{c.instructions+=4;NFSU2_TR(0x746ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746de2:{NFSU2_TR(0x746de2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746de3:{NFSU2_TR(0x746de3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746de4:{NFSU2_TR(0x746de4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746de9ull));
TAIL_STATIC(0x73d890u,73d);
}
B746de9:L746de9:{c.instructions+=2;NFSU2_TR(0x746de9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746dea:{NFSU2_TR(0x746dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746defull));
TAIL_STATIC(0x598ec0u,598);
}
B746def:L746def:{c.instructions+=1;NFSU2_TR(0x746def);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B746df2:L746df2:{c.instructions+=2;NFSU2_TR(0x746df2);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2b737374ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B746dfa:{NFSU2_TR(0x746dfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746f45;}}
}
B746e00:L746e00:{c.instructions+=7;NFSU2_TR(0x746e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746e06:{NFSU2_TR(0x746e06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746e0a:{NFSU2_TR(0x746e0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e0b:{NFSU2_TR(0x746e0b);
u8 U[4];
w4(U+0,u32(0x7d29f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e10:{NFSU2_TR(0x746e10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e11:{NFSU2_TR(0x746e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x192cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B746e1b:{NFSU2_TR(0x746e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746e20ull));
TAIL_STATIC(0x7414a0u,741);
}
B746e20:L746e20:{c.instructions+=3;NFSU2_TR(0x746e20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746e23:{NFSU2_TR(0x746e23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e24:{NFSU2_TR(0x746e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746e29ull));
TAIL_STATIC(0x7420b0u,742);
}
B746e29:L746e29:{c.instructions+=8;NFSU2_TR(0x746e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746e2f:{NFSU2_TR(0x746e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746e32:{NFSU2_TR(0x746e32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e33:{NFSU2_TR(0x746e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1930ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746e39:{NFSU2_TR(0x746e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746e3d:{NFSU2_TR(0x746e3d);
u8 U[4];
w4(U+0,u32(0x7d29f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e42:{NFSU2_TR(0x746e42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e43:{NFSU2_TR(0x746e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746e48ull));
TAIL_STATIC(0x7414a0u,741);
}
B746e48:L746e48:{c.instructions+=3;NFSU2_TR(0x746e48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746e4b:{NFSU2_TR(0x746e4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e4c:{NFSU2_TR(0x746e4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746e51ull));
TAIL_STATIC(0x7420b0u,742);
}
B746e51:L746e51:{c.instructions+=8;NFSU2_TR(0x746e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746e57:{NFSU2_TR(0x746e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746e5b:{NFSU2_TR(0x746e5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746e5e:{NFSU2_TR(0x746e5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e5f:{NFSU2_TR(0x746e5f);
u8 U[4];
w4(U+0,u32(0x7d29ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e64:{NFSU2_TR(0x746e64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e65:{NFSU2_TR(0x746e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1934ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746e6b:{NFSU2_TR(0x746e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746e70ull));
TAIL_STATIC(0x7414a0u,741);
}
B746e70:L746e70:{c.instructions+=3;NFSU2_TR(0x746e70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746e73:{NFSU2_TR(0x746e73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e74:{NFSU2_TR(0x746e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746e79ull));
TAIL_STATIC(0x7420b0u,742);
}
B746e79:L746e79:{c.instructions+=8;NFSU2_TR(0x746e79);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746e7d:{NFSU2_TR(0x746e7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746e80:{NFSU2_TR(0x746e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1938ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746e86:{NFSU2_TR(0x746e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x193cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746e8c:{NFSU2_TR(0x746e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e8d:{NFSU2_TR(0x746e8d);
u8 U[4];
w4(U+0,u32(0x7d29e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e92:{NFSU2_TR(0x746e92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e93:{NFSU2_TR(0x746e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746e98ull));
TAIL_STATIC(0x7414a0u,741);
}
B746e98:L746e98:{c.instructions+=3;NFSU2_TR(0x746e98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746e9b:{NFSU2_TR(0x746e9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746e9c:{NFSU2_TR(0x746e9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ea1ull));
TAIL_STATIC(0x7420b0u,742);
}
B746ea1:L746ea1:{c.instructions+=8;NFSU2_TR(0x746ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1940ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746ea7:{NFSU2_TR(0x746ea7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746eaa:{NFSU2_TR(0x746eaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746eab:{NFSU2_TR(0x746eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x193cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746eb1:{NFSU2_TR(0x746eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746eb5:{NFSU2_TR(0x746eb5);
u8 U[4];
w4(U+0,u32(0x7d29e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746eba:{NFSU2_TR(0x746eba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ebb:{NFSU2_TR(0x746ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ec0ull));
TAIL_STATIC(0x7414a0u,741);
}
B746ec0:L746ec0:{c.instructions+=3;NFSU2_TR(0x746ec0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746ec3:{NFSU2_TR(0x746ec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ec4:{NFSU2_TR(0x746ec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ec9ull));
TAIL_STATIC(0x7420b0u,742);
}
B746ec9:L746ec9:{c.instructions+=8;NFSU2_TR(0x746ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746ecf:{NFSU2_TR(0x746ecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746ed3:{NFSU2_TR(0x746ed3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746ed6:{NFSU2_TR(0x746ed6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746ed7:{NFSU2_TR(0x746ed7);
u8 U[4];
w4(U+0,u32(0x7d29e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746edc:{NFSU2_TR(0x746edc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746edd:{NFSU2_TR(0x746edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1940ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746ee3:{NFSU2_TR(0x746ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ee8ull));
TAIL_STATIC(0x7414a0u,741);
}
B746ee8:L746ee8:{c.instructions+=3;NFSU2_TR(0x746ee8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746eeb:{NFSU2_TR(0x746eeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746eec:{NFSU2_TR(0x746eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746ef1ull));
TAIL_STATIC(0x7420b0u,742);
}
B746ef1:L746ef1:{c.instructions+=11;NFSU2_TR(0x746ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1944ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746ef7:{NFSU2_TR(0x746ef7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746efa:{NFSU2_TR(0x746efa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B746efc:{NFSU2_TR(0x746efc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746f00:{NFSU2_TR(0x746f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746f04:{NFSU2_TR(0x746f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746f08:{NFSU2_TR(0x746f08);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B746f10:{NFSU2_TR(0x746f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x73746174ull));
s4(u32(r4(U+0)),r4(U+4));
}
B746f18:{NFSU2_TR(0x746f18);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B746f1c:{NFSU2_TR(0x746f1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x149cull))));
__builtin_memmove((R+24),(U+0),4);
}
B746f22:{NFSU2_TR(0x746f22);
w4(R+28,u32(0x20ull));
}
B746f27:L746f27:{c.instructions+=3;NFSU2_TR(0x746f27);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746f2b:{NFSU2_TR(0x746f2b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B746f2e:{NFSU2_TR(0x746f2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L746f3f;}}
}
B746f30:L746f30:{c.instructions+=6;NFSU2_TR(0x746f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746f33:{NFSU2_TR(0x746f33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f34:{NFSU2_TR(0x746f34);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B746f38:{NFSU2_TR(0x746f38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f39:{NFSU2_TR(0x746f39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f3a:{NFSU2_TR(0x746f3a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746f3cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B746f3c:L746f3c:{c.instructions+=1;NFSU2_TR(0x746f3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B746f3f:L746f3f:{c.instructions+=3;NFSU2_TR(0x746f3f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B746f42:{NFSU2_TR(0x746f42);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B746f43:{NFSU2_TR(0x746f43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x746f27u);}goto L746f27;}}
}
B746f45:L746f45:{c.instructions+=3;NFSU2_TR(0x746f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746f49:{NFSU2_TR(0x746f49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x6d6f7665ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746f4e:{NFSU2_TR(0x746f4e);
if(r1(R+518)){{goto L746f5b;}}
}
B746f50:L746f50:{c.instructions+=2;NFSU2_TR(0x746f50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x726f6f6dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746f55:{NFSU2_TR(0x746f55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74704cu,747);}
}
B746f5b:L746f5b:{c.instructions+=3;NFSU2_TR(0x746f5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746f5f:{NFSU2_TR(0x746f5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B746f61:{NFSU2_TR(0x746f61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x74704cu,747);}
}
B746f67:L746f67:{c.instructions+=5;NFSU2_TR(0x746f67);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746f6b:{NFSU2_TR(0x746f6b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f6d:{NFSU2_TR(0x746f6d);
u8 U[4];
w4(U+0,u32(0x7d29d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f72:{NFSU2_TR(0x746f72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f73:{NFSU2_TR(0x746f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746f78ull));
TAIL_STATIC(0x7414a0u,741);
}
B746f78:L746f78:{c.instructions+=3;NFSU2_TR(0x746f78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746f7b:{NFSU2_TR(0x746f7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f7c:{NFSU2_TR(0x746f7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746f81ull));
TAIL_STATIC(0x7420b0u,742);
}
B746f81:L746f81:{c.instructions+=4;NFSU2_TR(0x746f81);
__builtin_memmove((R+24),(R+0),4);
}
B746f83:{NFSU2_TR(0x746f83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746f86:{NFSU2_TR(0x746f86);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B746f88:{NFSU2_TR(0x746f88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L746faf;}}
}
B746f8a:L746f8a:{c.instructions+=5;NFSU2_TR(0x746f8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B746f8e:{NFSU2_TR(0x746f8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f90:{NFSU2_TR(0x746f90);
u8 U[4];
w4(U+0,u32(0x7d29d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f95:{NFSU2_TR(0x746f95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f96:{NFSU2_TR(0x746f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746f9bull));
TAIL_STATIC(0x7414a0u,741);
}
B746f9b:L746f9b:{c.instructions+=3;NFSU2_TR(0x746f9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746f9e:{NFSU2_TR(0x746f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746f9f:{NFSU2_TR(0x746f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746fa4ull));
TAIL_STATIC(0x7420b0u,742);
}
B746fa4:L746fa4:{c.instructions+=3;NFSU2_TR(0x746fa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fa5:{NFSU2_TR(0x746fa5);
__builtin_memmove((R+4),(R+24),4);
}
B746fa7:{NFSU2_TR(0x746fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746facull));
TAIL_STATIC(0x743d20u,743);
}
B746fac:L746fac:{c.instructions+=1;NFSU2_TR(0x746fac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B746faf:L746faf:{c.instructions+=5;NFSU2_TR(0x746faf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746fb3:{NFSU2_TR(0x746fb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fb5:{NFSU2_TR(0x746fb5);
u8 U[4];
w4(U+0,u32(0x7a15b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fba:{NFSU2_TR(0x746fba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fbb:{NFSU2_TR(0x746fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746fc0ull));
TAIL_STATIC(0x7414a0u,741);
}
B746fc0:L746fc0:{c.instructions+=3;NFSU2_TR(0x746fc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746fc3:{NFSU2_TR(0x746fc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fc4:{NFSU2_TR(0x746fc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746fc9ull));
TAIL_STATIC(0x7420b0u,742);
}
B746fc9:L746fc9:{c.instructions+=7;NFSU2_TR(0x746fc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B746fcd:{NFSU2_TR(0x746fcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746fd0:{NFSU2_TR(0x746fd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fd2:{NFSU2_TR(0x746fd2);
u8 U[4];
w4(U+0,u32(0x7a15d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fd7:{NFSU2_TR(0x746fd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fd8:{NFSU2_TR(0x746fd8);
__builtin_memmove((R+24),(R+0),4);
}
B746fda:{NFSU2_TR(0x746fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746fdfull));
TAIL_STATIC(0x7414a0u,741);
}
B746fdf:L746fdf:{c.instructions+=3;NFSU2_TR(0x746fdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746fe2:{NFSU2_TR(0x746fe2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B746fe3:{NFSU2_TR(0x746fe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x746fe8ull));
TAIL_STATIC(0x7420b0u,742);
}
B746fe8:L746fe8:{c.instructions+=5;NFSU2_TR(0x746fe8);
__builtin_memmove((R+28),(R+0),4);
}
B746fea:{NFSU2_TR(0x746fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746ff0:{NFSU2_TR(0x746ff0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B746ff3:{NFSU2_TR(0x746ff3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B746ff5:{NFSU2_TR(0x746ff5);
if(r1(R+518)){TAIL_STATIC(0x74704cu,747);}
}
B746ff7:L746ff7:{c.instructions+=2;NFSU2_TR(0x746ff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B746ffb:{NFSU2_TR(0x746ffb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x747000u,747);
}
XIT:NFSU2_TR_EXIT(0x746,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
