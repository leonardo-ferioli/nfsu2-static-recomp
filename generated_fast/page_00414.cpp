#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_415(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x414,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x414,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_414(u8* __restrict R,Cpu& c);
u32 page_414(Cpu& c){return body_414(c.regs.data(),c);}
__attribute__((noinline)) u32 body_414(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x414003:goto L414003;
case 0x414005:goto L414005;
case 0x41400a:c.instructions+=1;goto B41400a;
case 0x41400e:goto L41400e;
case 0x414010:c.instructions+=3;goto B414010;
case 0x414013:c.instructions+=2;goto B414013;
case 0x414016:c.instructions+=1;goto B414016;
case 0x414018:goto L414018;
case 0x41401d:c.instructions+=1;goto B41401d;
case 0x41401f:goto L41401f;
case 0x414022:c.instructions+=2;goto B414022;
case 0x414025:c.instructions+=1;goto B414025;
case 0x414027:goto L414027;
case 0x41402f:c.instructions+=1;goto B41402f;
case 0x414031:goto L414031;
case 0x414033:c.instructions+=1;goto B414033;
case 0x414035:goto L414035;
case 0x41403d:goto L41403d;
case 0x414043:c.instructions+=2;goto B414043;
case 0x414048:c.instructions+=1;goto B414048;
case 0x41404d:goto L41404d;
case 0x414051:c.instructions+=3;goto B414051;
case 0x414053:c.instructions+=2;goto B414053;
case 0x414056:c.instructions+=1;goto B414056;
case 0x414058:goto L414058;
case 0x414059:c.instructions+=4;goto B414059;
case 0x41405a:c.instructions+=3;goto B41405a;
case 0x41405c:c.instructions+=2;goto B41405c;
case 0x41405d:c.instructions+=1;goto B41405d;
case 0x414060:goto L414060;
case 0x414061:c.instructions+=4;goto B414061;
case 0x414062:c.instructions+=3;goto B414062;
case 0x414064:c.instructions+=2;goto B414064;
case 0x414065:c.instructions+=1;goto B414065;
case 0x414070:goto L414070;
case 0x414071:c.instructions+=8;goto B414071;
case 0x414072:c.instructions+=7;goto B414072;
case 0x414076:c.instructions+=6;goto B414076;
case 0x414077:c.instructions+=5;goto B414077;
case 0x414079:c.instructions+=4;goto B414079;
case 0x41407b:c.instructions+=3;goto B41407b;
case 0x41407d:c.instructions+=2;goto B41407d;
case 0x41407f:c.instructions+=1;goto B41407f;
case 0x414084:goto L414084;
case 0x414086:c.instructions+=1;goto B414086;
case 0x414088:goto L414088;
case 0x414089:c.instructions+=4;goto B414089;
case 0x41408a:c.instructions+=3;goto B41408a;
case 0x41408c:c.instructions+=2;goto B41408c;
case 0x41408d:c.instructions+=1;goto B41408d;
case 0x414090:goto L414090;
case 0x414093:c.instructions+=5;goto B414093;
case 0x414095:c.instructions+=4;goto B414095;
case 0x414097:c.instructions+=3;goto B414097;
case 0x41409a:c.instructions+=2;goto B41409a;
case 0x41409d:c.instructions+=1;goto B41409d;
case 0x41409f:goto L41409f;
case 0x4140a2:c.instructions+=1;goto B4140a2;
case 0x4140a4:goto L4140a4;
case 0x4140a5:c.instructions+=4;goto B4140a5;
case 0x4140a6:c.instructions+=3;goto B4140a6;
case 0x4140a8:c.instructions+=2;goto B4140a8;
case 0x4140a9:c.instructions+=1;goto B4140a9;
case 0x4140ac:goto L4140ac;
case 0x4140ae:c.instructions+=2;goto B4140ae;
case 0x4140b0:c.instructions+=1;goto B4140b0;
case 0x4140b2:goto L4140b2;
case 0x4140b4:c.instructions+=1;goto B4140b4;
case 0x4140b6:goto L4140b6;
case 0x4140b8:c.instructions+=1;goto B4140b8;
case 0x4140ba:goto L4140ba;
case 0x4140be:c.instructions+=4;goto B4140be;
case 0x4140bf:c.instructions+=3;goto B4140bf;
case 0x4140c0:c.instructions+=2;goto B4140c0;
case 0x4140c2:c.instructions+=1;goto B4140c2;
case 0x4140c7:goto L4140c7;
case 0x4140c8:c.instructions+=3;goto B4140c8;
case 0x4140c9:c.instructions+=2;goto B4140c9;
case 0x4140ca:c.instructions+=1;goto B4140ca;
case 0x4140cd:goto L4140cd;
case 0x4140ce:c.instructions+=4;goto B4140ce;
case 0x4140cf:c.instructions+=3;goto B4140cf;
case 0x4140d1:c.instructions+=2;goto B4140d1;
case 0x4140d2:c.instructions+=1;goto B4140d2;
case 0x4140e0:goto L4140e0;
case 0x4140e1:c.instructions+=7;goto B4140e1;
case 0x4140e2:c.instructions+=6;goto B4140e2;
case 0x4140e6:c.instructions+=5;goto B4140e6;
case 0x4140e7:c.instructions+=4;goto B4140e7;
case 0x4140eb:c.instructions+=3;goto B4140eb;
case 0x4140ed:c.instructions+=2;goto B4140ed;
case 0x4140ef:c.instructions+=1;goto B4140ef;
case 0x4140f4:goto L4140f4;
case 0x4140f6:c.instructions+=1;goto B4140f6;
case 0x4140f8:goto L4140f8;
case 0x4140fe:c.instructions+=2;goto B4140fe;
case 0x414101:c.instructions+=1;goto B414101;
case 0x414103:goto L414103;
case 0x41410a:c.instructions+=2;goto B41410a;
case 0x41410c:c.instructions+=1;goto B41410c;
case 0x41410e:goto L41410e;
case 0x414110:c.instructions+=1;goto B414110;
case 0x414115:goto L414115;
case 0x414117:c.instructions+=5;goto B414117;
case 0x41411a:c.instructions+=4;goto B41411a;
case 0x41411b:c.instructions+=3;goto B41411b;
case 0x41411c:c.instructions+=2;goto B41411c;
case 0x41411e:c.instructions+=1;goto B41411e;
case 0x414123:goto L414123;
case 0x414125:c.instructions+=2;goto B414125;
case 0x414127:c.instructions+=1;goto B414127;
case 0x414129:goto L414129;
case 0x41412b:goto L41412b;
case 0x41412c:c.instructions+=3;goto B41412c;
case 0x41412d:c.instructions+=2;goto B41412d;
case 0x41412e:c.instructions+=1;goto B41412e;
case 0x414130:goto L414130;
case 0x414133:c.instructions+=20;goto B414133;
case 0x414137:c.instructions+=19;goto B414137;
case 0x414138:c.instructions+=18;goto B414138;
case 0x414139:c.instructions+=17;goto B414139;
case 0x41413a:c.instructions+=16;goto B41413a;
case 0x41413e:c.instructions+=15;goto B41413e;
case 0x414140:c.instructions+=14;goto B414140;
case 0x414142:c.instructions+=13;goto B414142;
case 0x414149:c.instructions+=12;goto B414149;
case 0x41414c:c.instructions+=11;goto B41414c;
case 0x41414f:c.instructions+=10;goto B41414f;
case 0x414150:c.instructions+=9;goto B414150;
case 0x414152:c.instructions+=8;goto B414152;
case 0x414155:c.instructions+=7;goto B414155;
case 0x414159:c.instructions+=6;goto B414159;
case 0x41415f:c.instructions+=5;goto B41415f;
case 0x414163:c.instructions+=4;goto B414163;
case 0x414165:c.instructions+=3;goto B414165;
case 0x414169:c.instructions+=2;goto B414169;
case 0x41416d:c.instructions+=1;goto B41416d;
case 0x414172:goto L414172;
case 0x414178:c.instructions+=3;goto B414178;
case 0x41417a:c.instructions+=2;goto B41417a;
case 0x41417d:c.instructions+=1;goto B41417d;
case 0x41417f:goto L41417f;
case 0x414181:c.instructions+=1;goto B414181;
case 0x414187:goto L414187;
case 0x41418b:c.instructions+=6;goto B41418b;
case 0x41418d:c.instructions+=5;goto B41418d;
case 0x414193:c.instructions+=4;goto B414193;
case 0x414195:c.instructions+=3;goto B414195;
case 0x414197:c.instructions+=2;goto B414197;
case 0x41419a:c.instructions+=1;goto B41419a;
case 0x4141a0:goto L4141a0;
case 0x4141a6:c.instructions+=2;goto B4141a6;
case 0x4141a7:c.instructions+=1;goto B4141a7;
case 0x4141ac:goto L4141ac;
case 0x4141ae:c.instructions+=1;goto B4141ae;
case 0x4141b4:goto L4141b4;
case 0x4141ba:c.instructions+=8;goto B4141ba;
case 0x4141bd:c.instructions+=7;goto B4141bd;
case 0x4141be:c.instructions+=6;goto B4141be;
case 0x4141c0:c.instructions+=5;goto B4141c0;
case 0x4141c2:c.instructions+=4;goto B4141c2;
case 0x4141c6:c.instructions+=3;goto B4141c6;
case 0x4141ca:c.instructions+=2;goto B4141ca;
case 0x4141ce:c.instructions+=1;goto B4141ce;
case 0x4141d0:goto L4141d0;
case 0x4141d3:c.instructions+=3;goto B4141d3;
case 0x4141d6:c.instructions+=2;goto B4141d6;
case 0x4141da:c.instructions+=1;goto B4141da;
case 0x4141e0:goto L4141e0;
case 0x4141e4:c.instructions+=3;goto B4141e4;
case 0x4141eb:c.instructions+=2;goto B4141eb;
case 0x4141ed:c.instructions+=1;goto B4141ed;
case 0x4141f2:goto L4141f2;
case 0x4141f4:c.instructions+=1;goto B4141f4;
case 0x4141f6:goto L4141f6;
case 0x4141f9:c.instructions+=19;goto B4141f9;
case 0x4141fc:c.instructions+=18;goto B4141fc;
case 0x4141ff:c.instructions+=17;goto B4141ff;
case 0x414201:c.instructions+=16;goto B414201;
case 0x414203:c.instructions+=15;goto B414203;
case 0x414205:c.instructions+=14;goto B414205;
case 0x414207:c.instructions+=13;goto B414207;
case 0x414209:c.instructions+=12;goto B414209;
case 0x41420b:c.instructions+=11;goto B41420b;
case 0x41420d:c.instructions+=10;goto B41420d;
case 0x41420f:c.instructions+=9;goto B41420f;
case 0x414211:c.instructions+=8;goto B414211;
case 0x414213:c.instructions+=7;goto B414213;
case 0x414215:c.instructions+=6;goto B414215;
case 0x414217:c.instructions+=5;goto B414217;
case 0x414219:c.instructions+=4;goto B414219;
case 0x41421f:c.instructions+=3;goto B41421f;
case 0x414221:c.instructions+=2;goto B414221;
case 0x414224:c.instructions+=1;goto B414224;
case 0x414226:goto L414226;
case 0x414229:c.instructions+=4;goto B414229;
case 0x41422a:c.instructions+=3;goto B41422a;
case 0x41422d:c.instructions+=2;goto B41422d;
case 0x41422f:c.instructions+=1;goto B41422f;
case 0x414231:goto L414231;
case 0x414232:c.instructions+=6;goto B414232;
case 0x414233:c.instructions+=5;goto B414233;
case 0x414234:c.instructions+=4;goto B414234;
case 0x414237:c.instructions+=3;goto B414237;
case 0x414238:c.instructions+=2;goto B414238;
case 0x41423b:c.instructions+=1;goto B41423b;
case 0x41423c:goto L41423c;
case 0x41423e:c.instructions+=1;goto B41423e;
case 0x414243:goto L414243;
case 0x414246:c.instructions+=6;goto B414246;
case 0x41424d:c.instructions+=5;goto B41424d;
case 0x414253:c.instructions+=4;goto B414253;
case 0x414255:c.instructions+=3;goto B414255;
case 0x414257:c.instructions+=2;goto B414257;
case 0x41425b:c.instructions+=1;goto B41425b;
case 0x414260:goto L414260;
case 0x414266:c.instructions+=3;goto B414266;
case 0x414268:c.instructions+=2;goto B414268;
case 0x41426b:c.instructions+=1;goto B41426b;
case 0x41426d:goto L41426d;
case 0x414270:c.instructions+=2;goto B414270;
case 0x414272:c.instructions+=1;goto B414272;
case 0x414274:goto L414274;
case 0x414277:goto L414277;
case 0x414279:c.instructions+=5;goto B414279;
case 0x41427a:c.instructions+=4;goto B41427a;
case 0x41427c:c.instructions+=3;goto B41427c;
case 0x414280:c.instructions+=2;goto B414280;
case 0x414282:c.instructions+=1;goto B414282;
case 0x414287:goto L414287;
case 0x41428b:c.instructions+=10;goto B41428b;
case 0x41428f:c.instructions+=9;goto B41428f;
case 0x414292:c.instructions+=8;goto B414292;
case 0x414295:c.instructions+=7;goto B414295;
case 0x414298:c.instructions+=6;goto B414298;
case 0x41429d:c.instructions+=5;goto B41429d;
case 0x4142a1:c.instructions+=4;goto B4142a1;
case 0x4142a8:c.instructions+=3;goto B4142a8;
case 0x4142af:c.instructions+=2;goto B4142af;
case 0x4142b1:c.instructions+=1;goto B4142b1;
case 0x4142b3:goto L4142b3;
case 0x4142b6:c.instructions+=4;goto B4142b6;
case 0x4142ba:c.instructions+=3;goto B4142ba;
case 0x4142bd:c.instructions+=2;goto B4142bd;
case 0x4142c1:c.instructions+=1;goto B4142c1;
case 0x4142c5:goto L4142c5;
case 0x4142c9:c.instructions+=4;goto B4142c9;
case 0x4142cf:c.instructions+=3;goto B4142cf;
case 0x4142d1:c.instructions+=2;goto B4142d1;
case 0x4142d4:c.instructions+=1;goto B4142d4;
case 0x4142da:goto L4142da;
case 0x4142de:c.instructions+=4;goto B4142de;
case 0x4142e4:c.instructions+=3;goto B4142e4;
case 0x4142e6:c.instructions+=2;goto B4142e6;
case 0x4142e9:c.instructions+=1;goto B4142e9;
case 0x4142ef:goto L4142ef;
case 0x4142f2:c.instructions+=3;goto B4142f2;
case 0x4142f4:c.instructions+=2;goto B4142f4;
case 0x4142f8:c.instructions+=1;goto B4142f8;
case 0x4142fd:goto L4142fd;
case 0x414301:c.instructions+=3;goto B414301;
case 0x414303:c.instructions+=2;goto B414303;
case 0x414306:c.instructions+=1;goto B414306;
case 0x41430c:goto L41430c;
case 0x414312:c.instructions+=5;goto B414312;
case 0x414314:c.instructions+=4;goto B414314;
case 0x414318:c.instructions+=3;goto B414318;
case 0x41431a:c.instructions+=2;goto B41431a;
case 0x41431d:c.instructions+=1;goto B41431d;
case 0x414323:goto L414323;
case 0x414327:c.instructions+=4;goto B414327;
case 0x41432d:c.instructions+=3;goto B41432d;
case 0x41432f:c.instructions+=2;goto B41432f;
case 0x414332:c.instructions+=1;goto B414332;
case 0x414338:goto L414338;
case 0x41433c:c.instructions+=4;goto B41433c;
case 0x414342:c.instructions+=3;goto B414342;
case 0x414344:c.instructions+=2;goto B414344;
case 0x414347:c.instructions+=1;goto B414347;
case 0x414349:goto L414349;
case 0x41434d:c.instructions+=5;goto B41434d;
case 0x414351:c.instructions+=4;goto B414351;
case 0x414353:c.instructions+=3;goto B414353;
case 0x414357:c.instructions+=2;goto B414357;
case 0x414359:c.instructions+=1;goto B414359;
case 0x41435b:goto L41435b;
case 0x414361:c.instructions+=1;goto B414361;
case 0x414363:goto L414363;
case 0x414369:goto L414369;
case 0x41436b:c.instructions+=5;goto B41436b;
case 0x41436d:c.instructions+=4;goto B41436d;
case 0x41436f:c.instructions+=3;goto B41436f;
case 0x414371:c.instructions+=2;goto B414371;
case 0x414374:c.instructions+=1;goto B414374;
case 0x414376:goto L414376;
case 0x41437c:c.instructions+=3;goto B41437c;
case 0x41437e:c.instructions+=2;goto B41437e;
case 0x414381:c.instructions+=1;goto B414381;
case 0x414383:goto L414383;
case 0x414385:c.instructions+=1;goto B414385;
case 0x414387:goto L414387;
case 0x414389:goto L414389;
case 0x41438d:goto L41438d;
case 0x414391:c.instructions+=2;goto B414391;
case 0x414393:c.instructions+=1;goto B414393;
case 0x414395:goto L414395;
case 0x414399:c.instructions+=4;goto B414399;
case 0x41439d:c.instructions+=3;goto B41439d;
case 0x41439f:c.instructions+=2;goto B41439f;
case 0x4143a2:c.instructions+=1;goto B4143a2;
case 0x4143a4:goto L4143a4;
case 0x4143a8:goto L4143a8;
case 0x4143aa:c.instructions+=1;goto B4143aa;
case 0x4143ac:goto L4143ac;
case 0x4143b0:c.instructions+=1;goto B4143b0;
case 0x4143b2:goto L4143b2;
case 0x4143b4:c.instructions+=1;goto B4143b4;
case 0x4143ba:goto L4143ba;
case 0x4143be:goto L4143be;
case 0x4143c5:c.instructions+=13;goto B4143c5;
case 0x4143c9:c.instructions+=12;goto B4143c9;
case 0x4143cb:c.instructions+=11;goto B4143cb;
case 0x4143ce:c.instructions+=10;goto B4143ce;
case 0x4143d1:c.instructions+=9;goto B4143d1;
case 0x4143d8:c.instructions+=8;goto B4143d8;
case 0x4143de:c.instructions+=7;goto B4143de;
case 0x4143e5:c.instructions+=6;goto B4143e5;
case 0x4143e6:c.instructions+=5;goto B4143e6;
case 0x4143e7:c.instructions+=4;goto B4143e7;
case 0x4143e8:c.instructions+=3;goto B4143e8;
case 0x4143e9:c.instructions+=2;goto B4143e9;
case 0x4143ec:c.instructions+=1;goto B4143ec;
case 0x4143f0:goto L4143f0;
case 0x4143f1:c.instructions+=7;goto B4143f1;
case 0x4143f3:c.instructions+=6;goto B4143f3;
case 0x4143f6:c.instructions+=5;goto B4143f6;
case 0x4143f9:c.instructions+=4;goto B4143f9;
case 0x4143fa:c.instructions+=3;goto B4143fa;
case 0x4143fd:c.instructions+=2;goto B4143fd;
case 0x4143fe:c.instructions+=1;goto B4143fe;
case 0x414403:goto L414403;
case 0x414406:c.instructions+=9;goto B414406;
case 0x41440c:c.instructions+=8;goto B41440c;
case 0x41440d:c.instructions+=7;goto B41440d;
case 0x41440f:c.instructions+=6;goto B41440f;
case 0x414410:c.instructions+=5;goto B414410;
case 0x414414:c.instructions+=4;goto B414414;
case 0x414417:c.instructions+=3;goto B414417;
case 0x414418:c.instructions+=2;goto B414418;
case 0x41441a:c.instructions+=1;goto B41441a;
case 0x41441f:goto L41441f;
case 0x414423:c.instructions+=8;goto B414423;
case 0x414426:c.instructions+=7;goto B414426;
case 0x41442a:c.instructions+=6;goto B41442a;
case 0x41442c:c.instructions+=5;goto B41442c;
case 0x41442f:c.instructions+=4;goto B41442f;
case 0x414430:c.instructions+=3;goto B414430;
case 0x414432:c.instructions+=2;goto B414432;
case 0x414433:c.instructions+=1;goto B414433;
case 0x414440:goto L414440;
case 0x414443:c.instructions+=9;goto B414443;
case 0x414444:c.instructions+=8;goto B414444;
case 0x414445:c.instructions+=7;goto B414445;
case 0x414449:c.instructions+=6;goto B414449;
case 0x41444a:c.instructions+=5;goto B41444a;
case 0x41444c:c.instructions+=4;goto B41444c;
case 0x41444e:c.instructions+=3;goto B41444e;
case 0x414450:c.instructions+=2;goto B414450;
case 0x414454:c.instructions+=1;goto B414454;
case 0x414459:goto L414459;
case 0x41445f:c.instructions+=3;goto B41445f;
case 0x414461:c.instructions+=2;goto B414461;
case 0x414464:c.instructions+=1;goto B414464;
case 0x41446a:goto L41446a;
case 0x414470:c.instructions+=2;goto B414470;
case 0x414472:c.instructions+=1;goto B414472;
case 0x414474:goto L414474;
case 0x414479:c.instructions+=8;goto B414479;
case 0x41447f:c.instructions+=7;goto B41447f;
case 0x414483:c.instructions+=6;goto B414483;
case 0x414487:c.instructions+=5;goto B414487;
case 0x41448d:c.instructions+=4;goto B41448d;
case 0x414493:c.instructions+=3;goto B414493;
case 0x414495:c.instructions+=2;goto B414495;
case 0x414498:c.instructions+=1;goto B414498;
case 0x41449e:goto L41449e;
case 0x4144a2:c.instructions+=4;goto B4144a2;
case 0x4144a3:c.instructions+=3;goto B4144a3;
case 0x4144a4:c.instructions+=2;goto B4144a4;
case 0x4144a6:c.instructions+=1;goto B4144a6;
case 0x4144ab:goto L4144ab;
case 0x4144ad:c.instructions+=12;goto B4144ad;
case 0x4144b0:c.instructions+=11;goto B4144b0;
case 0x4144b3:c.instructions+=10;goto B4144b3;
case 0x4144b7:c.instructions+=9;goto B4144b7;
case 0x4144bb:c.instructions+=8;goto B4144bb;
case 0x4144bf:c.instructions+=7;goto B4144bf;
case 0x4144c1:c.instructions+=6;goto B4144c1;
case 0x4144c2:c.instructions+=5;goto B4144c2;
case 0x4144c6:c.instructions+=4;goto B4144c6;
case 0x4144c7:c.instructions+=3;goto B4144c7;
case 0x4144cb:c.instructions+=2;goto B4144cb;
case 0x4144cf:c.instructions+=1;goto B4144cf;
case 0x4144d4:goto L4144d4;
case 0x4144d6:c.instructions+=5;goto B4144d6;
case 0x4144dc:c.instructions+=4;goto B4144dc;
case 0x4144dd:c.instructions+=3;goto B4144dd;
case 0x4144e1:c.instructions+=2;goto B4144e1;
case 0x4144e2:c.instructions+=1;goto B4144e2;
case 0x4144e7:goto L4144e7;
case 0x4144eb:c.instructions+=9;goto B4144eb;
case 0x4144ef:c.instructions+=8;goto B4144ef;
case 0x4144f2:c.instructions+=7;goto B4144f2;
case 0x4144f6:c.instructions+=6;goto B4144f6;
case 0x4144fa:c.instructions+=5;goto B4144fa;
case 0x4144fc:c.instructions+=4;goto B4144fc;
case 0x414502:c.instructions+=3;goto B414502;
case 0x414504:c.instructions+=2;goto B414504;
case 0x414507:c.instructions+=1;goto B414507;
case 0x414509:goto L414509;
case 0x41450e:goto L41450e;
case 0x414510:c.instructions+=6;goto B414510;
case 0x414513:c.instructions+=5;goto B414513;
case 0x414516:c.instructions+=4;goto B414516;
case 0x414517:c.instructions+=3;goto B414517;
case 0x414519:c.instructions+=2;goto B414519;
case 0x41451b:c.instructions+=1;goto B41451b;
case 0x41451d:goto L41451d;
case 0x414520:goto L414520;
case 0x414521:c.instructions+=2;goto B414521;
case 0x414523:c.instructions+=1;goto B414523;
case 0x414528:goto L414528;
case 0x41452a:c.instructions+=4;goto B41452a;
case 0x41452c:c.instructions+=3;goto B41452c;
case 0x41452d:c.instructions+=2;goto B41452d;
case 0x41452e:c.instructions+=1;goto B41452e;
case 0x414533:goto L414533;
case 0x414536:c.instructions+=2;goto B414536;
case 0x414538:c.instructions+=1;goto B414538;
case 0x41453a:goto L41453a;
case 0x41453d:c.instructions+=9;goto B41453d;
case 0x414543:c.instructions+=8;goto B414543;
case 0x414545:c.instructions+=7;goto B414545;
case 0x414549:c.instructions+=6;goto B414549;
case 0x41454d:c.instructions+=5;goto B41454d;
case 0x414553:c.instructions+=4;goto B414553;
case 0x414559:c.instructions+=3;goto B414559;
case 0x41455b:c.instructions+=2;goto B41455b;
case 0x41455e:c.instructions+=1;goto B41455e;
case 0x414560:goto L414560;
case 0x414562:c.instructions+=5;goto B414562;
case 0x414568:c.instructions+=4;goto B414568;
case 0x41456e:c.instructions+=3;goto B41456e;
case 0x414570:c.instructions+=2;goto B414570;
case 0x414573:c.instructions+=1;goto B414573;
case 0x414575:goto L414575;
case 0x414579:c.instructions+=3;goto B414579;
case 0x41457a:c.instructions+=2;goto B41457a;
case 0x41457c:c.instructions+=1;goto B41457c;
case 0x41457e:goto L41457e;
case 0x414582:c.instructions+=6;goto B414582;
case 0x414583:c.instructions+=5;goto B414583;
case 0x414584:c.instructions+=4;goto B414584;
case 0x414585:c.instructions+=3;goto B414585;
case 0x414586:c.instructions+=2;goto B414586;
case 0x414589:c.instructions+=1;goto B414589;
case 0x41458c:goto L41458c;
case 0x41458d:c.instructions+=6;goto B41458d;
case 0x41458e:c.instructions+=5;goto B41458e;
case 0x41458f:c.instructions+=4;goto B41458f;
case 0x414591:c.instructions+=3;goto B414591;
case 0x414592:c.instructions+=2;goto B414592;
case 0x414595:c.instructions+=1;goto B414595;
case 0x414598:goto L414598;
case 0x414599:c.instructions+=5;goto B414599;
case 0x41459a:c.instructions+=4;goto B41459a;
case 0x41459c:c.instructions+=3;goto B41459c;
case 0x41459d:c.instructions+=2;goto B41459d;
case 0x4145a0:c.instructions+=1;goto B4145a0;
case 0x4145a3:goto L4145a3;
case 0x4145a4:c.instructions+=5;goto B4145a4;
case 0x4145a5:c.instructions+=4;goto B4145a5;
case 0x4145a7:c.instructions+=3;goto B4145a7;
case 0x4145a8:c.instructions+=2;goto B4145a8;
case 0x4145ab:c.instructions+=1;goto B4145ab;
case 0x4145b0:goto L4145b0;
case 0x4145b1:c.instructions+=18;goto B4145b1;
case 0x4145b2:c.instructions+=17;goto B4145b2;
case 0x4145b3:c.instructions+=16;goto B4145b3;
case 0x4145b7:c.instructions+=15;goto B4145b7;
case 0x4145b8:c.instructions+=14;goto B4145b8;
case 0x4145bc:c.instructions+=13;goto B4145bc;
case 0x4145c3:c.instructions+=12;goto B4145c3;
case 0x4145c5:c.instructions+=11;goto B4145c5;
case 0x4145cb:c.instructions+=10;goto B4145cb;
case 0x4145cc:c.instructions+=9;goto B4145cc;
case 0x4145cf:c.instructions+=8;goto B4145cf;
case 0x4145d6:c.instructions+=7;goto B4145d6;
case 0x4145d9:c.instructions+=6;goto B4145d9;
case 0x4145dc:c.instructions+=5;goto B4145dc;
case 0x4145dd:c.instructions+=4;goto B4145dd;
case 0x4145e1:c.instructions+=3;goto B4145e1;
case 0x4145e9:c.instructions+=2;goto B4145e9;
case 0x4145f1:c.instructions+=1;goto B4145f1;
case 0x4145f6:goto L4145f6;
case 0x4145fa:c.instructions+=10;goto B4145fa;
case 0x4145fb:c.instructions+=9;goto B4145fb;
case 0x4145ff:c.instructions+=8;goto B4145ff;
case 0x414603:c.instructions+=7;goto B414603;
case 0x414607:c.instructions+=6;goto B414607;
case 0x414608:c.instructions+=5;goto B414608;
case 0x414609:c.instructions+=4;goto B414609;
case 0x41460e:c.instructions+=3;goto B41460e;
case 0x41460f:c.instructions+=2;goto B41460f;
case 0x414610:c.instructions+=1;goto B414610;
case 0x414615:goto L414615;
case 0x414617:c.instructions+=4;goto B414617;
case 0x41461a:c.instructions+=3;goto B41461a;
case 0x41461c:c.instructions+=2;goto B41461c;
case 0x41461e:c.instructions+=1;goto B41461e;
case 0x414621:goto L414621;
case 0x414623:c.instructions+=1;goto B414623;
case 0x414625:goto L414625;
case 0x414627:c.instructions+=1;goto B414627;
case 0x414629:goto L414629;
case 0x41462b:c.instructions+=1;goto B41462b;
case 0x414630:goto L414630;
case 0x414632:c.instructions+=1;goto B414632;
case 0x414634:goto L414634;
case 0x414637:c.instructions+=19;goto B414637;
case 0x41463a:c.instructions+=18;goto B41463a;
case 0x41463d:c.instructions+=17;goto B41463d;
case 0x41463f:c.instructions+=16;goto B41463f;
case 0x414641:c.instructions+=15;goto B414641;
case 0x414643:c.instructions+=14;goto B414643;
case 0x414645:c.instructions+=13;goto B414645;
case 0x414647:c.instructions+=12;goto B414647;
case 0x414649:c.instructions+=11;goto B414649;
case 0x41464b:c.instructions+=10;goto B41464b;
case 0x41464d:c.instructions+=9;goto B41464d;
case 0x41464f:c.instructions+=8;goto B41464f;
case 0x414651:c.instructions+=7;goto B414651;
case 0x414653:c.instructions+=6;goto B414653;
case 0x414655:c.instructions+=5;goto B414655;
case 0x414657:c.instructions+=4;goto B414657;
case 0x41465d:c.instructions+=3;goto B41465d;
case 0x41465f:c.instructions+=2;goto B41465f;
case 0x414662:c.instructions+=1;goto B414662;
case 0x414664:goto L414664;
case 0x414666:c.instructions+=1;goto B414666;
case 0x414668:goto L414668;
case 0x41466a:goto L41466a;
case 0x41466c:c.instructions+=1;goto B41466c;
case 0x41466e:goto L41466e;
case 0x414670:c.instructions+=1;goto B414670;
case 0x414672:goto L414672;
case 0x414676:c.instructions+=4;goto B414676;
case 0x41467c:c.instructions+=3;goto B41467c;
case 0x41467e:c.instructions+=2;goto B41467e;
case 0x414681:c.instructions+=1;goto B414681;
case 0x414683:goto L414683;
case 0x414684:c.instructions+=2;goto B414684;
case 0x414685:c.instructions+=1;goto B414685;
case 0x41468a:goto L41468a;
case 0x41468d:c.instructions+=2;goto B41468d;
case 0x41468f:c.instructions+=1;goto B41468f;
case 0x414691:goto L414691;
case 0x414695:c.instructions+=13;goto B414695;
case 0x414699:c.instructions+=12;goto B414699;
case 0x41469d:c.instructions+=11;goto B41469d;
case 0x41469e:c.instructions+=10;goto B41469e;
case 0x4146a1:c.instructions+=9;goto B4146a1;
case 0x4146a3:c.instructions+=8;goto B4146a3;
case 0x4146a7:c.instructions+=7;goto B4146a7;
case 0x4146a8:c.instructions+=6;goto B4146a8;
case 0x4146a9:c.instructions+=5;goto B4146a9;
case 0x4146ab:c.instructions+=4;goto B4146ab;
case 0x4146b0:c.instructions+=3;goto B4146b0;
case 0x4146b1:c.instructions+=2;goto B4146b1;
case 0x4146b2:c.instructions+=1;goto B4146b2;
case 0x4146b3:goto L4146b3;
case 0x4146b4:c.instructions+=6;goto B4146b4;
case 0x4146b5:c.instructions+=5;goto B4146b5;
case 0x4146b6:c.instructions+=4;goto B4146b6;
case 0x4146b9:c.instructions+=3;goto B4146b9;
case 0x4146ba:c.instructions+=2;goto B4146ba;
case 0x4146bb:c.instructions+=1;goto B4146bb;
case 0x4146c0:goto L4146c0;
case 0x4146c1:c.instructions+=16;goto B4146c1;
case 0x4146c2:c.instructions+=15;goto B4146c2;
case 0x4146c3:c.instructions+=14;goto B4146c3;
case 0x4146c7:c.instructions+=13;goto B4146c7;
case 0x4146ce:c.instructions+=12;goto B4146ce;
case 0x4146d0:c.instructions+=11;goto B4146d0;
case 0x4146d1:c.instructions+=10;goto B4146d1;
case 0x4146d4:c.instructions+=9;goto B4146d4;
case 0x4146d7:c.instructions+=8;goto B4146d7;
case 0x4146d8:c.instructions+=7;goto B4146d8;
case 0x4146dc:c.instructions+=6;goto B4146dc;
case 0x4146df:c.instructions+=5;goto B4146df;
case 0x4146e1:c.instructions+=4;goto B4146e1;
case 0x4146e4:c.instructions+=3;goto B4146e4;
case 0x4146eb:c.instructions+=2;goto B4146eb;
case 0x4146ed:c.instructions+=1;goto B4146ed;
case 0x4146f3:goto L4146f3;
case 0x4146f6:c.instructions+=1;goto B4146f6;
case 0x4146fc:goto L4146fc;
case 0x414700:c.instructions+=2;goto B414700;
case 0x414702:c.instructions+=1;goto B414702;
case 0x414704:goto L414704;
case 0x414705:c.instructions+=3;goto B414705;
case 0x414706:c.instructions+=2;goto B414706;
case 0x414707:c.instructions+=1;goto B414707;
case 0x41470c:goto L41470c;
case 0x41470e:c.instructions+=1;goto B41470e;
case 0x414710:goto L414710;
case 0x414716:c.instructions+=10;goto B414716;
case 0x41471a:c.instructions+=9;goto B41471a;
case 0x41471b:c.instructions+=8;goto B41471b;
case 0x41471f:c.instructions+=7;goto B41471f;
case 0x414720:c.instructions+=6;goto B414720;
case 0x414721:c.instructions+=5;goto B414721;
case 0x414722:c.instructions+=4;goto B414722;
case 0x414724:c.instructions+=3;goto B414724;
case 0x414725:c.instructions+=2;goto B414725;
case 0x41472d:c.instructions+=1;goto B41472d;
case 0x414732:goto L414732;
case 0x414734:c.instructions+=3;goto B414734;
case 0x414737:c.instructions+=2;goto B414737;
case 0x414739:c.instructions+=1;goto B414739;
case 0x41473b:goto L41473b;
case 0x41473c:c.instructions+=2;goto B41473c;
case 0x41473d:c.instructions+=1;goto B41473d;
case 0x414742:goto L414742;
case 0x414745:c.instructions+=2;goto B414745;
case 0x414747:c.instructions+=1;goto B414747;
case 0x414749:goto L414749;
case 0x41474d:c.instructions+=4;goto B41474d;
case 0x414753:c.instructions+=3;goto B414753;
case 0x414755:c.instructions+=2;goto B414755;
case 0x414758:c.instructions+=1;goto B414758;
case 0x41475a:goto L41475a;
case 0x41475e:c.instructions+=4;goto B41475e;
case 0x414764:c.instructions+=3;goto B414764;
case 0x414766:c.instructions+=2;goto B414766;
case 0x414769:c.instructions+=1;goto B414769;
case 0x41476b:goto L41476b;
case 0x414771:c.instructions+=3;goto B414771;
case 0x414772:c.instructions+=2;goto B414772;
case 0x414774:c.instructions+=1;goto B414774;
case 0x414779:goto L414779;
case 0x41477b:c.instructions+=1;goto B41477b;
case 0x41477d:goto L41477d;
case 0x41477e:c.instructions+=5;goto B41477e;
case 0x41477f:c.instructions+=4;goto B41477f;
case 0x414780:c.instructions+=3;goto B414780;
case 0x414782:c.instructions+=2;goto B414782;
case 0x414783:c.instructions+=1;goto B414783;
case 0x414786:goto L414786;
case 0x414787:c.instructions+=5;goto B414787;
case 0x414788:c.instructions+=4;goto B414788;
case 0x414789:c.instructions+=3;goto B414789;
case 0x41478b:c.instructions+=2;goto B41478b;
case 0x41478c:c.instructions+=1;goto B41478c;
case 0x414790:goto L414790;
case 0x414791:c.instructions+=11;goto B414791;
case 0x414793:c.instructions+=10;goto B414793;
case 0x414796:c.instructions+=9;goto B414796;
case 0x414799:c.instructions+=8;goto B414799;
case 0x41479a:c.instructions+=7;goto B41479a;
case 0x41479b:c.instructions+=6;goto B41479b;
case 0x41479e:c.instructions+=5;goto B41479e;
case 0x4147a4:c.instructions+=4;goto B4147a4;
case 0x4147a7:c.instructions+=3;goto B4147a7;
case 0x4147ad:c.instructions+=2;goto B4147ad;
case 0x4147ae:c.instructions+=1;goto B4147ae;
case 0x4147b0:goto L4147b0;
case 0x4147b4:c.instructions+=1;goto B4147b4;
case 0x4147b6:goto L4147b6;
case 0x4147b8:goto L4147b8;
case 0x4147bc:c.instructions+=2;goto B4147bc;
case 0x4147c0:c.instructions+=1;goto B4147c0;
case 0x4147c2:goto L4147c2;
case 0x4147c6:c.instructions+=2;goto B4147c6;
case 0x4147ca:c.instructions+=1;goto B4147ca;
case 0x4147cc:goto L4147cc;
case 0x4147cf:c.instructions+=2;goto B4147cf;
case 0x4147d1:c.instructions+=1;goto B4147d1;
case 0x4147d3:goto L4147d3;
case 0x4147da:c.instructions+=1;goto B4147da;
case 0x4147dc:goto L4147dc;
case 0x4147de:goto L4147de;
case 0x4147e1:c.instructions+=3;goto B4147e1;
case 0x4147e4:c.instructions+=2;goto B4147e4;
case 0x4147eb:c.instructions+=1;goto B4147eb;
case 0x4147f0:goto L4147f0;
case 0x4147f4:c.instructions+=1;goto B4147f4;
case 0x4147f6:goto L4147f6;
case 0x4147fe:goto L4147fe;
case 0x414804:c.instructions+=3;goto B414804;
case 0x414808:c.instructions+=2;goto B414808;
case 0x41480d:c.instructions+=1;goto B41480d;
case 0x414810:goto L414810;
case 0x414811:c.instructions+=2;goto B414811;
case 0x414813:c.instructions+=1;goto B414813;
case 0x414818:goto L414818;
case 0x41481a:c.instructions+=1;goto B41481a;
case 0x41481c:goto L41481c;
case 0x41481d:c.instructions+=3;goto B41481d;
case 0x414820:c.instructions+=2;goto B414820;
case 0x414822:c.instructions+=1;goto B414822;
case 0x414824:goto L414824;
case 0x414826:c.instructions+=6;goto B414826;
case 0x414827:c.instructions+=5;goto B414827;
case 0x414828:c.instructions+=4;goto B414828;
case 0x414829:c.instructions+=3;goto B414829;
case 0x41482b:c.instructions+=2;goto B41482b;
case 0x41482c:c.instructions+=1;goto B41482c;
case 0x41482d:goto L41482d;
case 0x414833:c.instructions+=1;goto B414833;
case 0x414835:goto L414835;
case 0x414839:c.instructions+=1;goto B414839;
case 0x41483b:goto L41483b;
case 0x41483f:c.instructions+=4;goto B41483f;
case 0x414840:c.instructions+=3;goto B414840;
case 0x414842:c.instructions+=2;goto B414842;
case 0x414844:c.instructions+=1;goto B414844;
case 0x414849:goto L414849;
case 0x41484d:c.instructions+=14;goto B41484d;
case 0x414851:c.instructions+=13;goto B414851;
case 0x414855:c.instructions+=12;goto B414855;
case 0x414859:c.instructions+=11;goto B414859;
case 0x41485a:c.instructions+=10;goto B41485a;
case 0x41485e:c.instructions+=9;goto B41485e;
case 0x414862:c.instructions+=8;goto B414862;
case 0x414863:c.instructions+=7;goto B414863;
case 0x414867:c.instructions+=6;goto B414867;
case 0x414868:c.instructions+=5;goto B414868;
case 0x41486c:c.instructions+=4;goto B41486c;
case 0x414870:c.instructions+=3;goto B414870;
case 0x414874:c.instructions+=2;goto B414874;
case 0x41487c:c.instructions+=1;goto B41487c;
case 0x414881:goto L414881;
case 0x414885:c.instructions+=5;goto B414885;
case 0x414889:c.instructions+=4;goto B414889;
case 0x41488d:c.instructions+=3;goto B41488d;
case 0x414890:c.instructions+=2;goto B414890;
case 0x414894:c.instructions+=1;goto B414894;
case 0x414896:goto L414896;
case 0x41489b:c.instructions+=1;goto B41489b;
case 0x41489d:goto L41489d;
case 0x4148a0:c.instructions+=2;goto B4148a0;
case 0x4148a2:c.instructions+=1;goto B4148a2;
case 0x4148a4:goto L4148a4;
case 0x4148ab:c.instructions+=1;goto B4148ab;
case 0x4148ad:goto L4148ad;
case 0x4148af:goto L4148af;
case 0x4148b3:c.instructions+=2;goto B4148b3;
case 0x4148b4:c.instructions+=1;goto B4148b4;
case 0x4148b9:goto L4148b9;
case 0x4148bb:c.instructions+=18;goto B4148bb;
case 0x4148bf:c.instructions+=17;goto B4148bf;
case 0x4148c3:c.instructions+=16;goto B4148c3;
case 0x4148c7:c.instructions+=15;goto B4148c7;
case 0x4148cb:c.instructions+=14;goto B4148cb;
case 0x4148cf:c.instructions+=13;goto B4148cf;
case 0x4148d5:c.instructions+=12;goto B4148d5;
case 0x4148d9:c.instructions+=11;goto B4148d9;
case 0x4148df:c.instructions+=10;goto B4148df;
case 0x4148e1:c.instructions+=9;goto B4148e1;
case 0x4148e3:c.instructions+=8;goto B4148e3;
case 0x4148e5:c.instructions+=7;goto B4148e5;
case 0x4148e7:c.instructions+=6;goto B4148e7;
case 0x4148ed:c.instructions+=5;goto B4148ed;
case 0x4148ef:c.instructions+=4;goto B4148ef;
case 0x4148f1:c.instructions+=3;goto B4148f1;
case 0x4148f4:c.instructions+=2;goto B4148f4;
case 0x4148f6:c.instructions+=1;goto B4148f6;
case 0x4148f8:goto L4148f8;
case 0x4148fd:goto L4148fd;
case 0x414900:c.instructions+=6;goto B414900;
case 0x414906:c.instructions+=5;goto B414906;
case 0x41490d:c.instructions+=4;goto B41490d;
case 0x41490f:c.instructions+=3;goto B41490f;
case 0x414912:c.instructions+=2;goto B414912;
case 0x414913:c.instructions+=1;goto B414913;
case 0x414918:goto L414918;
case 0x41491a:c.instructions+=1;goto B41491a;
case 0x414920:goto L414920;
case 0x414921:c.instructions+=6;goto B414921;
case 0x414922:c.instructions+=5;goto B414922;
case 0x414924:c.instructions+=4;goto B414924;
case 0x414925:c.instructions+=3;goto B414925;
case 0x414927:c.instructions+=2;goto B414927;
case 0x414928:c.instructions+=1;goto B414928;
case 0x414930:goto L414930;
case 0x414931:c.instructions+=4;goto B414931;
case 0x414935:c.instructions+=3;goto B414935;
case 0x41493b:c.instructions+=2;goto B41493b;
case 0x41493e:c.instructions+=1;goto B41493e;
case 0x414940:goto L414940;
case 0x414947:c.instructions+=1;goto B414947;
case 0x414949:goto L414949;
case 0x41494b:goto L41494b;
case 0x41494f:c.instructions+=2;goto B41494f;
case 0x414953:c.instructions+=1;goto B414953;
case 0x414955:goto L414955;
case 0x414959:c.instructions+=2;goto B414959;
case 0x41495d:c.instructions+=1;goto B41495d;
case 0x41495f:goto L41495f;
case 0x414962:c.instructions+=2;goto B414962;
case 0x414964:c.instructions+=1;goto B414964;
case 0x414966:goto L414966;
case 0x41496d:c.instructions+=1;goto B41496d;
case 0x41496f:goto L41496f;
case 0x414971:goto L414971;
case 0x414974:c.instructions+=3;goto B414974;
case 0x414977:c.instructions+=2;goto B414977;
case 0x41497e:c.instructions+=1;goto B41497e;
case 0x414983:goto L414983;
case 0x414984:c.instructions+=2;goto B414984;
case 0x41498c:c.instructions+=1;goto B41498c;
case 0x414991:goto L414991;
case 0x414994:c.instructions+=3;goto B414994;
case 0x414996:c.instructions+=2;goto B414996;
case 0x414997:c.instructions+=1;goto B414997;
case 0x414999:goto L414999;
case 0x4149a1:goto L4149a1;
case 0x4149a7:c.instructions+=2;goto B4149a7;
case 0x4149ac:c.instructions+=1;goto B4149ac;
case 0x4149b1:goto L4149b1;
case 0x4149b7:c.instructions+=3;goto B4149b7;
case 0x4149b9:c.instructions+=2;goto B4149b9;
case 0x4149bc:c.instructions+=1;goto B4149bc;
case 0x4149be:goto L4149be;
case 0x4149c0:c.instructions+=2;goto B4149c0;
case 0x4149c5:c.instructions+=1;goto B4149c5;
case 0x4149c6:goto L4149c6;
case 0x4149ca:c.instructions+=4;goto B4149ca;
case 0x4149cc:c.instructions+=3;goto B4149cc;
case 0x4149cf:c.instructions+=2;goto B4149cf;
case 0x4149d4:c.instructions+=1;goto B4149d4;
case 0x4149d6:goto L4149d6;
case 0x4149db:goto L4149db;
case 0x4149e0:goto L4149e0;
case 0x4149e1:c.instructions+=10;goto B4149e1;
case 0x4149e5:c.instructions+=9;goto B4149e5;
case 0x4149e6:c.instructions+=8;goto B4149e6;
case 0x4149ea:c.instructions+=7;goto B4149ea;
case 0x4149eb:c.instructions+=6;goto B4149eb;
case 0x4149ef:c.instructions+=5;goto B4149ef;
case 0x4149f5:c.instructions+=4;goto B4149f5;
case 0x4149fb:c.instructions+=3;goto B4149fb;
case 0x414a01:c.instructions+=2;goto B414a01;
case 0x414a04:c.instructions+=1;goto B414a04;
case 0x414a06:goto L414a06;
case 0x414a0d:c.instructions+=2;goto B414a0d;
case 0x414a0f:c.instructions+=1;goto B414a0f;
case 0x414a11:goto L414a11;
case 0x414a13:c.instructions+=1;goto B414a13;
case 0x414a18:goto L414a18;
case 0x414a19:c.instructions+=2;goto B414a19;
case 0x414a1b:c.instructions+=1;goto B414a1b;
case 0x414a20:goto L414a20;
case 0x414a23:c.instructions+=6;goto B414a23;
case 0x414a24:c.instructions+=5;goto B414a24;
case 0x414a26:c.instructions+=4;goto B414a26;
case 0x414a27:c.instructions+=3;goto B414a27;
case 0x414a2c:c.instructions+=2;goto B414a2c;
case 0x414a2d:c.instructions+=1;goto B414a2d;
case 0x414a2e:goto L414a2e;
case 0x414a2f:c.instructions+=4;goto B414a2f;
case 0x414a30:c.instructions+=3;goto B414a30;
case 0x414a33:c.instructions+=2;goto B414a33;
case 0x414a34:c.instructions+=1;goto B414a34;
case 0x414a40:goto L414a40;
case 0x414a45:c.instructions+=4;goto B414a45;
case 0x414a46:c.instructions+=3;goto B414a46;
case 0x414a48:c.instructions+=2;goto B414a48;
case 0x414a4a:c.instructions+=1;goto B414a4a;
case 0x414a4c:goto L414a4c;
case 0x414a4d:c.instructions+=1;goto B414a4d;
case 0x414a52:goto L414a52;
case 0x414a55:c.instructions+=1;goto B414a55;
case 0x414a5b:goto L414a5b;
case 0x414a60:c.instructions+=2;goto B414a60;
case 0x414a62:c.instructions+=1;goto B414a62;
case 0x414a64:goto L414a64;
case 0x414a65:c.instructions+=1;goto B414a65;
case 0x414a6a:goto L414a6a;
case 0x414a6d:c.instructions+=1;goto B414a6d;
case 0x414a73:goto L414a73;
case 0x414a78:c.instructions+=2;goto B414a78;
case 0x414a7a:c.instructions+=1;goto B414a7a;
case 0x414a7c:goto L414a7c;
case 0x414a7d:c.instructions+=1;goto B414a7d;
case 0x414a82:goto L414a82;
case 0x414a85:c.instructions+=1;goto B414a85;
case 0x414a8b:goto L414a8b;
case 0x414a90:c.instructions+=2;goto B414a90;
case 0x414a92:c.instructions+=1;goto B414a92;
case 0x414a94:goto L414a94;
case 0x414a95:c.instructions+=1;goto B414a95;
case 0x414a9a:goto L414a9a;
case 0x414a9d:c.instructions+=1;goto B414a9d;
case 0x414aa3:goto L414aa3;
case 0x414aa8:c.instructions+=2;goto B414aa8;
case 0x414aaa:c.instructions+=1;goto B414aaa;
case 0x414aac:goto L414aac;
case 0x414aad:c.instructions+=1;goto B414aad;
case 0x414ab2:goto L414ab2;
case 0x414ab5:c.instructions+=1;goto B414ab5;
case 0x414abb:goto L414abb;
case 0x414ac0:c.instructions+=1;goto B414ac0;
case 0x414ac5:goto L414ac5;
case 0x414aca:c.instructions+=1;goto B414aca;
case 0x414acf:goto L414acf;
case 0x414ad4:c.instructions+=2;goto B414ad4;
case 0x414ad6:c.instructions+=1;goto B414ad6;
case 0x414ad8:goto L414ad8;
case 0x414ad9:c.instructions+=1;goto B414ad9;
case 0x414ade:goto L414ade;
case 0x414ae1:c.instructions+=1;goto B414ae1;
case 0x414ae7:goto L414ae7;
case 0x414ae8:c.instructions+=1;goto B414ae8;
case 0x414af0:goto L414af0;
case 0x414af2:c.instructions+=13;goto B414af2;
case 0x414af7:c.instructions+=12;goto B414af7;
case 0x414afd:c.instructions+=11;goto B414afd;
case 0x414afe:c.instructions+=10;goto B414afe;
case 0x414b05:c.instructions+=9;goto B414b05;
case 0x414b08:c.instructions+=8;goto B414b08;
case 0x414b09:c.instructions+=7;goto B414b09;
case 0x414b0a:c.instructions+=6;goto B414b0a;
case 0x414b0c:c.instructions+=5;goto B414b0c;
case 0x414b0f:c.instructions+=4;goto B414b0f;
case 0x414b11:c.instructions+=3;goto B414b11;
case 0x414b13:c.instructions+=2;goto B414b13;
case 0x414b17:c.instructions+=1;goto B414b17;
case 0x414b1d:goto L414b1d;
case 0x414b1e:c.instructions+=4;goto B414b1e;
case 0x414b1f:c.instructions+=3;goto B414b1f;
case 0x414b24:c.instructions+=2;goto B414b24;
case 0x414b2a:c.instructions+=1;goto B414b2a;
case 0x414b30:goto L414b30;
case 0x414b35:c.instructions+=1;goto B414b35;
case 0x414b3a:goto L414b3a;
case 0x414b3d:c.instructions+=3;goto B414b3d;
case 0x414b3f:c.instructions+=2;goto B414b3f;
case 0x414b40:c.instructions+=1;goto B414b40;
case 0x414b45:goto L414b45;
case 0x414b47:c.instructions+=3;goto B414b47;
case 0x414b4a:c.instructions+=2;goto B414b4a;
case 0x414b4c:c.instructions+=1;goto B414b4c;
case 0x414b4e:goto L414b4e;
case 0x414b50:c.instructions+=1;goto B414b50;
case 0x414b57:goto L414b57;
case 0x414b5a:c.instructions+=3;goto B414b5a;
case 0x414b5d:c.instructions+=2;goto B414b5d;
case 0x414b63:c.instructions+=1;goto B414b63;
case 0x414b65:goto L414b65;
case 0x414b68:c.instructions+=1;goto B414b68;
case 0x414b70:goto L414b70;
case 0x414b75:c.instructions+=1;goto B414b75;
case 0x414b80:goto L414b80;
case 0x414b86:c.instructions+=2;goto B414b86;
case 0x414b87:c.instructions+=1;goto B414b87;
case 0x414b8c:goto L414b8c;
case 0x414b8e:c.instructions+=5;goto B414b8e;
case 0x414b91:c.instructions+=4;goto B414b91;
case 0x414b95:c.instructions+=3;goto B414b95;
case 0x414b97:c.instructions+=2;goto B414b97;
case 0x414b9b:c.instructions+=1;goto B414b9b;
case 0x414b9d:goto L414b9d;
case 0x414b9e:c.instructions+=3;goto B414b9e;
case 0x414b9f:c.instructions+=2;goto B414b9f;
case 0x414ba4:c.instructions+=1;goto B414ba4;
case 0x414ba9:goto L414ba9;
case 0x414bac:c.instructions+=3;goto B414bac;
case 0x414bad:c.instructions+=2;goto B414bad;
case 0x414baf:c.instructions+=1;goto B414baf;
case 0x414bb4:goto L414bb4;
case 0x414bb6:goto L414bb6;
case 0x414bb8:goto L414bb8;
case 0x414bba:c.instructions+=5;goto B414bba;
case 0x414bbd:c.instructions+=4;goto B414bbd;
case 0x414bbe:c.instructions+=3;goto B414bbe;
case 0x414bc6:c.instructions+=2;goto B414bc6;
case 0x414bc9:c.instructions+=1;goto B414bc9;
case 0x414bcb:goto L414bcb;
case 0x414bcf:c.instructions+=1;goto B414bcf;
case 0x414bd1:goto L414bd1;
case 0x414bd5:c.instructions+=3;goto B414bd5;
case 0x414bd6:c.instructions+=2;goto B414bd6;
case 0x414bd9:c.instructions+=1;goto B414bd9;
case 0x414bda:goto L414bda;
case 0x414bde:c.instructions+=5;goto B414bde;
case 0x414bdf:c.instructions+=4;goto B414bdf;
case 0x414be0:c.instructions+=3;goto B414be0;
case 0x414be7:c.instructions+=2;goto B414be7;
case 0x414bea:c.instructions+=1;goto B414bea;
case 0x414bf0:goto L414bf0;
case 0x414bf1:c.instructions+=12;goto B414bf1;
case 0x414bf3:c.instructions+=11;goto B414bf3;
case 0x414bf6:c.instructions+=10;goto B414bf6;
case 0x414bf9:c.instructions+=9;goto B414bf9;
case 0x414bfe:c.instructions+=8;goto B414bfe;
case 0x414bff:c.instructions+=7;goto B414bff;
case 0x414c01:c.instructions+=6;goto B414c01;
case 0x414c02:c.instructions+=5;goto B414c02;
case 0x414c04:c.instructions+=4;goto B414c04;
case 0x414c06:c.instructions+=3;goto B414c06;
case 0x414c07:c.instructions+=2;goto B414c07;
case 0x414c0b:c.instructions+=1;goto B414c0b;
case 0x414c0d:goto L414c0d;
case 0x414c0f:c.instructions+=1;goto B414c0f;
case 0x414c15:goto L414c15;
case 0x414c1a:goto L414c1a;
case 0x414c1c:goto L414c1c;
case 0x414c1e:c.instructions+=1;goto B414c1e;
case 0x414c20:goto L414c20;
case 0x414c22:c.instructions+=1;goto B414c22;
case 0x414c27:goto L414c27;
case 0x414c2a:c.instructions+=1;goto B414c2a;
case 0x414c30:goto L414c30;
case 0x414c33:c.instructions+=4;goto B414c33;
case 0x414c35:c.instructions+=3;goto B414c35;
case 0x414c38:c.instructions+=2;goto B414c38;
case 0x414c3b:c.instructions+=1;goto B414c3b;
case 0x414c40:goto L414c40;
case 0x414c47:c.instructions+=2;goto B414c47;
case 0x414c49:c.instructions+=1;goto B414c49;
case 0x414c4b:goto L414c4b;
case 0x414c4e:c.instructions+=2;goto B414c4e;
case 0x414c50:c.instructions+=1;goto B414c50;
case 0x414c52:goto L414c52;
case 0x414c55:c.instructions+=10;goto B414c55;
case 0x414c58:c.instructions+=9;goto B414c58;
case 0x414c5a:c.instructions+=8;goto B414c5a;
case 0x414c5f:c.instructions+=7;goto B414c5f;
case 0x414c61:c.instructions+=6;goto B414c61;
case 0x414c63:c.instructions+=5;goto B414c63;
case 0x414c67:c.instructions+=4;goto B414c67;
case 0x414c68:c.instructions+=3;goto B414c68;
case 0x414c6c:c.instructions+=2;goto B414c6c;
case 0x414c70:c.instructions+=1;goto B414c70;
case 0x414c75:goto L414c75;
case 0x414c78:c.instructions+=2;goto B414c78;
case 0x414c7a:c.instructions+=1;goto B414c7a;
case 0x414c7c:goto L414c7c;
case 0x414c80:c.instructions+=3;goto B414c80;
case 0x414c81:c.instructions+=2;goto B414c81;
case 0x414c82:c.instructions+=1;goto B414c82;
case 0x414c87:goto L414c87;
case 0x414c8a:goto L414c8a;
case 0x414c90:c.instructions+=7;goto B414c90;
case 0x414c91:c.instructions+=6;goto B414c91;
case 0x414c95:c.instructions+=5;goto B414c95;
case 0x414c99:c.instructions+=4;goto B414c99;
case 0x414c9a:c.instructions+=3;goto B414c9a;
case 0x414c9b:c.instructions+=2;goto B414c9b;
case 0x414c9d:c.instructions+=1;goto B414c9d;
case 0x414ca2:goto L414ca2;
case 0x414ca6:c.instructions+=7;goto B414ca6;
case 0x414ca8:c.instructions+=6;goto B414ca8;
case 0x414cab:c.instructions+=5;goto B414cab;
case 0x414cad:c.instructions+=4;goto B414cad;
case 0x414caf:c.instructions+=3;goto B414caf;
case 0x414cb4:c.instructions+=2;goto B414cb4;
case 0x414cb5:c.instructions+=1;goto B414cb5;
case 0x414cba:goto L414cba;
case 0x414cbd:c.instructions+=1;goto B414cbd;
case 0x414cbf:goto L414cbf;
case 0x414cc1:c.instructions+=1;goto B414cc1;
case 0x414cc8:goto L414cc8;
case 0x414cc9:c.instructions+=4;goto B414cc9;
case 0x414ccc:c.instructions+=3;goto B414ccc;
case 0x414ccf:c.instructions+=2;goto B414ccf;
case 0x414cd2:c.instructions+=1;goto B414cd2;
case 0x414cd8:goto L414cd8;
case 0x414cd9:c.instructions+=5;goto B414cd9;
case 0x414cda:c.instructions+=4;goto B414cda;
case 0x414cdb:c.instructions+=3;goto B414cdb;
case 0x414cdd:c.instructions+=2;goto B414cdd;
case 0x414cde:c.instructions+=1;goto B414cde;
case 0x414cf0:goto L414cf0;
case 0x414cf1:c.instructions+=5;goto B414cf1;
case 0x414cf3:c.instructions+=4;goto B414cf3;
case 0x414cf4:c.instructions+=3;goto B414cf4;
case 0x414cfa:c.instructions+=2;goto B414cfa;
case 0x414cff:c.instructions+=1;goto B414cff;
case 0x414d01:goto L414d01;
case 0x414d03:c.instructions+=6;goto B414d03;
case 0x414d06:c.instructions+=5;goto B414d06;
case 0x414d09:c.instructions+=4;goto B414d09;
case 0x414d0c:c.instructions+=3;goto B414d0c;
case 0x414d0f:c.instructions+=2;goto B414d0f;
case 0x414d10:c.instructions+=1;goto B414d10;
case 0x414d12:goto L414d12;
case 0x414d13:c.instructions+=3;goto B414d13;
case 0x414d15:c.instructions+=2;goto B414d15;
case 0x414d16:c.instructions+=1;goto B414d16;
case 0x414d20:goto L414d20;
case 0x414d21:c.instructions+=17;goto B414d21;
case 0x414d23:c.instructions+=16;goto B414d23;
case 0x414d26:c.instructions+=15;goto B414d26;
case 0x414d28:c.instructions+=14;goto B414d28;
case 0x414d2d:c.instructions+=13;goto B414d2d;
case 0x414d33:c.instructions+=12;goto B414d33;
case 0x414d34:c.instructions+=11;goto B414d34;
case 0x414d3b:c.instructions+=10;goto B414d3b;
case 0x414d41:c.instructions+=9;goto B414d41;
case 0x414d46:c.instructions+=8;goto B414d46;
case 0x414d47:c.instructions+=7;goto B414d47;
case 0x414d48:c.instructions+=6;goto B414d48;
case 0x414d49:c.instructions+=5;goto B414d49;
case 0x414d4b:c.instructions+=4;goto B414d4b;
case 0x414d4d:c.instructions+=3;goto B414d4d;
case 0x414d4f:c.instructions+=2;goto B414d4f;
case 0x414d51:c.instructions+=1;goto B414d51;
case 0x414d53:goto L414d53;
case 0x414d55:c.instructions+=1;goto B414d55;
case 0x414d57:goto L414d57;
case 0x414d5c:goto L414d5c;
case 0x414d5e:goto L414d5e;
case 0x414d60:c.instructions+=1;goto B414d60;
case 0x414d62:goto L414d62;
case 0x414d64:c.instructions+=1;goto B414d64;
case 0x414d69:goto L414d69;
case 0x414d6c:c.instructions+=1;goto B414d6c;
case 0x414d72:goto L414d72;
case 0x414d76:c.instructions+=1;goto B414d76;
case 0x414d7b:goto L414d7b;
case 0x414d7e:c.instructions+=8;goto B414d7e;
case 0x414d80:c.instructions+=7;goto B414d80;
case 0x414d83:c.instructions+=6;goto B414d83;
case 0x414d8a:c.instructions+=5;goto B414d8a;
case 0x414d8e:c.instructions+=4;goto B414d8e;
case 0x414d94:c.instructions+=3;goto B414d94;
case 0x414d98:c.instructions+=2;goto B414d98;
case 0x414d9b:c.instructions+=1;goto B414d9b;
case 0x414d9d:goto L414d9d;
case 0x414da3:c.instructions+=6;goto B414da3;
case 0x414da6:c.instructions+=5;goto B414da6;
case 0x414dac:c.instructions+=4;goto B414dac;
case 0x414daf:c.instructions+=3;goto B414daf;
case 0x414db1:c.instructions+=2;goto B414db1;
case 0x414db4:c.instructions+=1;goto B414db4;
case 0x414db9:goto L414db9;
case 0x414dbf:c.instructions+=12;goto B414dbf;
case 0x414dc6:c.instructions+=11;goto B414dc6;
case 0x414dc8:c.instructions+=10;goto B414dc8;
case 0x414dce:c.instructions+=9;goto B414dce;
case 0x414dd2:c.instructions+=8;goto B414dd2;
case 0x414dd4:c.instructions+=7;goto B414dd4;
case 0x414dda:c.instructions+=6;goto B414dda;
case 0x414dde:c.instructions+=5;goto B414dde;
case 0x414de0:c.instructions+=4;goto B414de0;
case 0x414de4:c.instructions+=3;goto B414de4;
case 0x414de8:c.instructions+=2;goto B414de8;
case 0x414dea:c.instructions+=1;goto B414dea;
case 0x414dec:goto L414dec;
case 0x414df2:c.instructions+=4;goto B414df2;
case 0x414df5:c.instructions+=3;goto B414df5;
case 0x414dfb:c.instructions+=2;goto B414dfb;
case 0x414dfc:c.instructions+=1;goto B414dfc;
case 0x414e01:goto L414e01;
case 0x414e07:c.instructions+=5;goto B414e07;
case 0x414e0a:c.instructions+=4;goto B414e0a;
case 0x414e0c:c.instructions+=3;goto B414e0c;
case 0x414e0e:c.instructions+=2;goto B414e0e;
case 0x414e0f:c.instructions+=1;goto B414e0f;
case 0x414e14:goto L414e14;
case 0x414e16:c.instructions+=5;goto B414e16;
case 0x414e19:c.instructions+=4;goto B414e19;
case 0x414e1b:c.instructions+=3;goto B414e1b;
case 0x414e1d:c.instructions+=2;goto B414e1d;
case 0x414e1e:c.instructions+=1;goto B414e1e;
case 0x414e23:goto L414e23;
case 0x414e26:c.instructions+=1;goto B414e26;
case 0x414e2b:goto L414e2b;
case 0x414e2e:c.instructions+=2;goto B414e2e;
case 0x414e30:c.instructions+=1;goto B414e30;
case 0x414e32:goto L414e32;
case 0x414e34:c.instructions+=4;goto B414e34;
case 0x414e37:c.instructions+=3;goto B414e37;
case 0x414e3d:c.instructions+=2;goto B414e3d;
case 0x414e3e:c.instructions+=1;goto B414e3e;
case 0x414e43:goto L414e43;
case 0x414e47:c.instructions+=3;goto B414e47;
case 0x414e49:c.instructions+=2;goto B414e49;
case 0x414e4d:c.instructions+=1;goto B414e4d;
case 0x414e4f:goto L414e4f;
case 0x414e52:c.instructions+=8;goto B414e52;
case 0x414e58:c.instructions+=7;goto B414e58;
case 0x414e5a:c.instructions+=6;goto B414e5a;
case 0x414e60:c.instructions+=5;goto B414e60;
case 0x414e62:c.instructions+=4;goto B414e62;
case 0x414e65:c.instructions+=3;goto B414e65;
case 0x414e67:c.instructions+=2;goto B414e67;
case 0x414e6a:c.instructions+=1;goto B414e6a;
case 0x414e6c:goto L414e6c;
case 0x414e72:goto L414e72;
case 0x414e73:c.instructions+=1;goto B414e73;
case 0x414e78:goto L414e78;
case 0x414e7b:c.instructions+=2;goto B414e7b;
case 0x414e7d:c.instructions+=1;goto B414e7d;
case 0x414e7f:goto L414e7f;
case 0x414e82:c.instructions+=1;goto B414e82;
case 0x414e84:goto L414e84;
case 0x414e88:c.instructions+=3;goto B414e88;
case 0x414e8b:c.instructions+=2;goto B414e8b;
case 0x414e8f:c.instructions+=1;goto B414e8f;
case 0x414e91:goto L414e91;
case 0x414e94:c.instructions+=1;goto B414e94;
case 0x414e96:goto L414e96;
case 0x414e99:c.instructions+=1;goto B414e99;
case 0x414e9b:goto L414e9b;
case 0x414e9f:c.instructions+=3;goto B414e9f;
case 0x414ea3:c.instructions+=2;goto B414ea3;
case 0x414ea7:c.instructions+=1;goto B414ea7;
case 0x414ea9:goto L414ea9;
case 0x414eb1:goto L414eb1;
case 0x414eb5:c.instructions+=3;goto B414eb5;
case 0x414eb7:c.instructions+=2;goto B414eb7;
case 0x414eb8:c.instructions+=1;goto B414eb8;
case 0x414ebb:goto L414ebb;
case 0x414ebf:c.instructions+=7;goto B414ebf;
case 0x414ec1:c.instructions+=6;goto B414ec1;
case 0x414ec3:c.instructions+=5;goto B414ec3;
case 0x414ec5:c.instructions+=4;goto B414ec5;
case 0x414ecb:c.instructions+=3;goto B414ecb;
case 0x414ecd:c.instructions+=2;goto B414ecd;
case 0x414ed0:c.instructions+=1;goto B414ed0;
case 0x414ed2:goto L414ed2;
case 0x414ed8:c.instructions+=3;goto B414ed8;
case 0x414edb:c.instructions+=2;goto B414edb;
case 0x414ee1:c.instructions+=1;goto B414ee1;
case 0x414ee3:goto L414ee3;
case 0x414ee9:c.instructions+=2;goto B414ee9;
case 0x414eec:c.instructions+=1;goto B414eec;
case 0x414ef2:goto L414ef2;
case 0x414ef3:c.instructions+=1;goto B414ef3;
case 0x414ef8:goto L414ef8;
case 0x414efa:c.instructions+=1;goto B414efa;
case 0x414efc:goto L414efc;
case 0x414eff:c.instructions+=1;goto B414eff;
case 0x414f01:goto L414f01;
case 0x414f05:c.instructions+=3;goto B414f05;
case 0x414f08:c.instructions+=2;goto B414f08;
case 0x414f0c:c.instructions+=1;goto B414f0c;
case 0x414f0e:goto L414f0e;
case 0x414f11:c.instructions+=1;goto B414f11;
case 0x414f13:goto L414f13;
case 0x414f16:c.instructions+=1;goto B414f16;
case 0x414f18:goto L414f18;
case 0x414f1c:c.instructions+=3;goto B414f1c;
case 0x414f20:c.instructions+=2;goto B414f20;
case 0x414f24:c.instructions+=1;goto B414f24;
case 0x414f26:goto L414f26;
case 0x414f2e:goto L414f2e;
case 0x414f32:c.instructions+=3;goto B414f32;
case 0x414f34:c.instructions+=2;goto B414f34;
case 0x414f35:c.instructions+=1;goto B414f35;
case 0x414f38:goto L414f38;
case 0x414f3c:c.instructions+=7;goto B414f3c;
case 0x414f3e:c.instructions+=6;goto B414f3e;
case 0x414f40:c.instructions+=5;goto B414f40;
case 0x414f42:c.instructions+=4;goto B414f42;
case 0x414f48:c.instructions+=3;goto B414f48;
case 0x414f4a:c.instructions+=2;goto B414f4a;
case 0x414f4d:c.instructions+=1;goto B414f4d;
case 0x414f4f:goto L414f4f;
case 0x414f55:c.instructions+=3;goto B414f55;
case 0x414f58:c.instructions+=2;goto B414f58;
case 0x414f5e:c.instructions+=1;goto B414f5e;
case 0x414f60:goto L414f60;
case 0x414f66:c.instructions+=2;goto B414f66;
case 0x414f69:c.instructions+=1;goto B414f69;
case 0x414f6f:goto L414f6f;
case 0x414f70:c.instructions+=1;goto B414f70;
case 0x414f75:goto L414f75;
case 0x414f77:c.instructions+=1;goto B414f77;
case 0x414f79:goto L414f79;
case 0x414f7c:c.instructions+=1;goto B414f7c;
case 0x414f7e:goto L414f7e;
case 0x414f82:c.instructions+=3;goto B414f82;
case 0x414f85:c.instructions+=2;goto B414f85;
case 0x414f89:c.instructions+=1;goto B414f89;
case 0x414f8b:goto L414f8b;
case 0x414f8e:c.instructions+=1;goto B414f8e;
case 0x414f90:goto L414f90;
case 0x414f93:c.instructions+=1;goto B414f93;
case 0x414f95:goto L414f95;
case 0x414f99:c.instructions+=3;goto B414f99;
case 0x414f9d:c.instructions+=2;goto B414f9d;
case 0x414fa1:c.instructions+=1;goto B414fa1;
case 0x414fa3:goto L414fa3;
case 0x414fab:goto L414fab;
case 0x414faf:c.instructions+=9;goto B414faf;
case 0x414fb3:c.instructions+=8;goto B414fb3;
case 0x414fb6:c.instructions+=7;goto B414fb6;
case 0x414fb7:c.instructions+=6;goto B414fb7;
case 0x414fb8:c.instructions+=5;goto B414fb8;
case 0x414fb9:c.instructions+=4;goto B414fb9;
case 0x414fbd:c.instructions+=3;goto B414fbd;
case 0x414fbe:c.instructions+=2;goto B414fbe;
case 0x414fc2:c.instructions+=1;goto B414fc2;
case 0x414fc7:goto L414fc7;
case 0x414fc9:c.instructions+=1;goto B414fc9;
case 0x414fcb:goto L414fcb;
case 0x414fce:c.instructions+=1;goto B414fce;
case 0x414fd0:goto L414fd0;
case 0x414fd4:c.instructions+=3;goto B414fd4;
case 0x414fd7:c.instructions+=2;goto B414fd7;
case 0x414fdb:c.instructions+=1;goto B414fdb;
case 0x414fdd:goto L414fdd;
case 0x414fe0:c.instructions+=1;goto B414fe0;
case 0x414fe2:goto L414fe2;
case 0x414fe5:c.instructions+=1;goto B414fe5;
case 0x414fe7:goto L414fe7;
case 0x414feb:c.instructions+=3;goto B414feb;
case 0x414fef:c.instructions+=2;goto B414fef;
case 0x414ff3:c.instructions+=1;goto B414ff3;
case 0x414ff5:goto L414ff5;
case 0x414ffd:goto L414ffd;
default:missing_instruction(c.pc);}
B414003:L414003:{c.instructions+=1;NFSU2_TR(0x414003);
{goto L41400e;}
}
B414005:L414005:{c.instructions+=2;NFSU2_TR(0x414005);
__builtin_memmove((R+0),gp(0x783550),4);
}
B41400a:{NFSU2_TR(0x41400a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41400e:L41400e:{c.instructions+=4;NFSU2_TR(0x41400e);
__builtin_memmove((R+4),(R+12),4);
}
B414010:{NFSU2_TR(0x414010);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B414013:{NFSU2_TR(0x414013);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414016:{NFSU2_TR(0x414016);
if(r1(R+518)){{goto L41403d;}}
}
B414018:L414018:{c.instructions+=2;NFSU2_TR(0x414018);
u8 U[7];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B41401d:{NFSU2_TR(0x41401d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41403d;}}
}
B41401f:L41401f:{c.instructions+=3;NFSU2_TR(0x41401f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B414022:{NFSU2_TR(0x414022);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B414025:{NFSU2_TR(0x414025);
if(r1(R+518)){{goto L414031;}}
}
B414027:L414027:{c.instructions+=2;NFSU2_TR(0x414027);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3eaa7efaull));
s4(u32(r4(U+0)),r4(U+4));
}
B41402f:{NFSU2_TR(0x41402f);
{goto L41403d;}
}
B414031:L414031:{c.instructions+=2;NFSU2_TR(0x414031);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B414033:{NFSU2_TR(0x414033);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41403d;}}
}
B414035:L414035:{c.instructions+=1;NFSU2_TR(0x414035);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41403d:L41403d:{c.instructions+=3;NFSU2_TR(0x41403d);
__builtin_memmove((R+4),gp(0x890080),4);
}
B414043:{NFSU2_TR(0x414043);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414048:{NFSU2_TR(0x414048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41404dull));
TAIL_STATIC(0x5ea500u,5ea);
}
B41404d:L41404d:{c.instructions+=4;NFSU2_TR(0x41404d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414051:{NFSU2_TR(0x414051);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414053:{NFSU2_TR(0x414053);
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
B414056:{NFSU2_TR(0x414056);
if(r1(R+514)){{goto L414060;}}
}
B414058:L414058:{c.instructions+=5;NFSU2_TR(0x414058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414059:{NFSU2_TR(0x414059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41405a:{NFSU2_TR(0x41405a);
w1(R+0,u8(0x1ull));
}
B41405c:{NFSU2_TR(0x41405c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41405d:{NFSU2_TR(0x41405d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414060:L414060:{c.instructions+=5;NFSU2_TR(0x414060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414061:{NFSU2_TR(0x414061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414062:{NFSU2_TR(0x414062);
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
B414064:{NFSU2_TR(0x414064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414065:{NFSU2_TR(0x414065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414070:L414070:{c.instructions+=9;NFSU2_TR(0x414070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414071:{NFSU2_TR(0x414071);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414072:{NFSU2_TR(0x414072);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B414076:{NFSU2_TR(0x414076);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414077:{NFSU2_TR(0x414077);
__builtin_memmove((R+28),(R+4),4);
}
B414079:{NFSU2_TR(0x414079);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41407b:{NFSU2_TR(0x41407b);
__builtin_memmove((R+4),(R+24),4);
}
B41407d:{NFSU2_TR(0x41407d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B41407f:{NFSU2_TR(0x41407f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414084ull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B414084:L414084:{c.instructions+=2;NFSU2_TR(0x414084);
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
B414086:{NFSU2_TR(0x414086);
if(r1(R+518)){{goto L414090;}}
}
B414088:L414088:{c.instructions+=5;NFSU2_TR(0x414088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414089:{NFSU2_TR(0x414089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41408a:{NFSU2_TR(0x41408a);
w1(R+0,u8(0x1ull));
}
B41408c:{NFSU2_TR(0x41408c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41408d:{NFSU2_TR(0x41408d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414090:L414090:{c.instructions+=6;NFSU2_TR(0x414090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414093:{NFSU2_TR(0x414093);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B414095:{NFSU2_TR(0x414095);
__builtin_memmove((R+4),(R+0),1);
}
B414097:{NFSU2_TR(0x414097);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B41409a:{NFSU2_TR(0x41409a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41409d:{NFSU2_TR(0x41409d);
if(r1(R+518)){{goto L4140a4;}}
}
B41409f:L41409f:{c.instructions+=2;NFSU2_TR(0x41409f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4140a2:{NFSU2_TR(0x4140a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4140ac;}}
}
B4140a4:L4140a4:{c.instructions+=5;NFSU2_TR(0x4140a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4140a5:{NFSU2_TR(0x4140a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4140a6:{NFSU2_TR(0x4140a6);
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
B4140a8:{NFSU2_TR(0x4140a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4140a9:{NFSU2_TR(0x4140a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4140ac:L4140ac:{c.instructions+=3;NFSU2_TR(0x4140ac);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B4140ae:{NFSU2_TR(0x4140ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4140b0:{NFSU2_TR(0x4140b0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4140a4u);}goto L4140a4;}}
}
B4140b2:L4140b2:{c.instructions+=2;NFSU2_TR(0x4140b2);
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
B4140b4:{NFSU2_TR(0x4140b4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414088u);}goto L414088;}}
}
B4140b6:L4140b6:{c.instructions+=2;NFSU2_TR(0x4140b6);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4140b8:{NFSU2_TR(0x4140b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4140cd;}}
}
B4140ba:L4140ba:{c.instructions+=5;NFSU2_TR(0x4140ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4140be:{NFSU2_TR(0x4140be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4140bf:{NFSU2_TR(0x4140bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4140c0:{NFSU2_TR(0x4140c0);
__builtin_memmove((R+4),(R+28),4);
}
B4140c2:{NFSU2_TR(0x4140c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4140c7ull));
TAIL_STATIC(0x40da10u,40d);
}
B4140c7:L4140c7:{c.instructions+=4;NFSU2_TR(0x4140c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4140c8:{NFSU2_TR(0x4140c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4140c9:{NFSU2_TR(0x4140c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4140ca:{NFSU2_TR(0x4140ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4140cd:L4140cd:{c.instructions+=5;NFSU2_TR(0x4140cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4140ce:{NFSU2_TR(0x4140ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4140cf:{NFSU2_TR(0x4140cf);
__builtin_memmove((R+0),(R+12),1);
}
B4140d1:{NFSU2_TR(0x4140d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4140d2:{NFSU2_TR(0x4140d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4140e0:L4140e0:{c.instructions+=8;NFSU2_TR(0x4140e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4140e1:{NFSU2_TR(0x4140e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4140e2:{NFSU2_TR(0x4140e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4140e6:{NFSU2_TR(0x4140e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4140e7:{NFSU2_TR(0x4140e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4140eb:{NFSU2_TR(0x4140eb);
__builtin_memmove((R+4),(R+28),4);
}
B4140ed:{NFSU2_TR(0x4140ed);
w1(R+12,u8(0x1ull));
}
B4140ef:{NFSU2_TR(0x4140ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4140f4ull));
TAIL_STATIC(0x6148c0u,614);
}
B4140f4:L4140f4:{c.instructions+=2;NFSU2_TR(0x4140f4);
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
B4140f6:{NFSU2_TR(0x4140f6);
if(r1(R+518)){{goto L414129;}}
}
B4140f8:L4140f8:{c.instructions+=3;NFSU2_TR(0x4140f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4140fe:{NFSU2_TR(0x4140fe);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414101:{NFSU2_TR(0x414101);
if(r1(R+518)){{goto L414129;}}
}
B414103:L414103:{c.instructions+=3;NFSU2_TR(0x414103);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41410a:{NFSU2_TR(0x41410a);
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
B41410c:{NFSU2_TR(0x41410c);
if(r1(R+518)){{goto L414129;}}
}
B41410e:L41410e:{c.instructions+=2;NFSU2_TR(0x41410e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B414110:{NFSU2_TR(0x414110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414115ull));
TAIL_STATIC(0x401f20u,401);
}
B414115:L414115:{c.instructions+=6;NFSU2_TR(0x414115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B414117:{NFSU2_TR(0x414117);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41411a:{NFSU2_TR(0x41411a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41411b:{NFSU2_TR(0x41411b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41411c:{NFSU2_TR(0x41411c);
__builtin_memmove((R+4),(R+0),4);
}
B41411e:{NFSU2_TR(0x41411e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414123ull));
TAIL_STATIC(0x410a50u,410);
}
B414123:L414123:{c.instructions+=3;NFSU2_TR(0x414123);
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
B414125:{NFSU2_TR(0x414125);
w1(R+0,u8(0x1ull));
}
B414127:{NFSU2_TR(0x414127);
if(r1(R+518)){{goto L41412b;}}
}
B414129:L414129:{c.instructions+=1;NFSU2_TR(0x414129);
__builtin_memmove((R+0),(R+12),1);
}
B41412b:L41412b:{c.instructions+=4;NFSU2_TR(0x41412b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41412c:{NFSU2_TR(0x41412c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41412d:{NFSU2_TR(0x41412d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41412e:{NFSU2_TR(0x41412e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414130:L414130:{c.instructions+=21;NFSU2_TR(0x414130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B414133:{NFSU2_TR(0x414133);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414137:{NFSU2_TR(0x414137);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414138:{NFSU2_TR(0x414138);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414139:{NFSU2_TR(0x414139);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41413a:{NFSU2_TR(0x41413a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41413e:{NFSU2_TR(0x41413e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B414140:{NFSU2_TR(0x414140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B414142:{NFSU2_TR(0x414142);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B414149:{NFSU2_TR(0x414149);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41414c:{NFSU2_TR(0x41414c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41414f:{NFSU2_TR(0x41414f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414150:{NFSU2_TR(0x414150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B414152:{NFSU2_TR(0x414152);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414155:{NFSU2_TR(0x414155);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B414159:{NFSU2_TR(0x414159);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41415f:{NFSU2_TR(0x41415f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414163:{NFSU2_TR(0x414163);
__builtin_memmove((R+4),(R+28),4);
}
B414165:{NFSU2_TR(0x414165);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414169:{NFSU2_TR(0x414169);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41416d:{NFSU2_TR(0x41416d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414172ull));
TAIL_STATIC(0x5ec070u,5ec);
}
B414172:L414172:{c.instructions+=4;NFSU2_TR(0x414172);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B414178:{NFSU2_TR(0x414178);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41417a:{NFSU2_TR(0x41417a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41417d:{NFSU2_TR(0x41417d);
if(r1(R+518)){{goto L414187;}}
}
B41417f:L41417f:{c.instructions+=2;NFSU2_TR(0x41417f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414181:{NFSU2_TR(0x414181);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414187:L414187:{c.instructions+=7;NFSU2_TR(0x414187);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41418b:{NFSU2_TR(0x41418b);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B41418d:{NFSU2_TR(0x41418d);
{u32 ea_=u32(u32(7878316u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414193:{NFSU2_TR(0x414193);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414195:{NFSU2_TR(0x414195);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414197:{NFSU2_TR(0x414197);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41419a:{NFSU2_TR(0x41419a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414231;}}
}
B4141a0:L4141a0:{c.instructions+=3;NFSU2_TR(0x4141a0);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4141a6:{NFSU2_TR(0x4141a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4141a7:{NFSU2_TR(0x4141a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4141acull));
TAIL_STATIC(0x5eeff0u,5ee);
}
B4141ac:L4141ac:{c.instructions+=2;NFSU2_TR(0x4141ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4141ae:{NFSU2_TR(0x4141ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414231;}}
}
B4141b4:L4141b4:{c.instructions+=9;NFSU2_TR(0x4141b4);
{u32 ea_=u32(u32(7878296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4141ba:{NFSU2_TR(0x4141ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4141bd:{NFSU2_TR(0x4141bd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4141be:{NFSU2_TR(0x4141be);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4141c0:{NFSU2_TR(0x4141c0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4141c2:{NFSU2_TR(0x4141c2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4141c6:{NFSU2_TR(0x4141c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4141ca:{NFSU2_TR(0x4141ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4141ce:{NFSU2_TR(0x4141ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414231;}}
}
B4141d0:L4141d0:{c.instructions+=4;NFSU2_TR(0x4141d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4141d3:{NFSU2_TR(0x4141d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4141d6:{NFSU2_TR(0x4141d6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4141da:{NFSU2_TR(0x4141da);
__builtin_memmove((R+12),(R+12),4);
}
B4141e0:L4141e0:{c.instructions+=4;NFSU2_TR(0x4141e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4141e4:{NFSU2_TR(0x4141e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B4141eb:{NFSU2_TR(0x4141eb);
__builtin_memmove((R+4),(R+20),4);
}
B4141ed:{NFSU2_TR(0x4141ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4141f2ull));
TAIL_STATIC(0x60bea0u,60b);
}
B4141f2:L4141f2:{c.instructions+=2;NFSU2_TR(0x4141f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4141f4:{NFSU2_TR(0x4141f4);
if(r1(R+518)){{goto L414226;}}
}
B4141f6:L4141f6:{c.instructions+=20;NFSU2_TR(0x4141f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4141f9:{NFSU2_TR(0x4141f9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4141fc:{NFSU2_TR(0x4141fc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4141ff:{NFSU2_TR(0x4141ff);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414201:{NFSU2_TR(0x414201);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B414203:{NFSU2_TR(0x414203);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B414205:{NFSU2_TR(0x414205);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B414207:{NFSU2_TR(0x414207);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B414209:{NFSU2_TR(0x414209);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41420b:{NFSU2_TR(0x41420b);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B41420d:{NFSU2_TR(0x41420d);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41420f:{NFSU2_TR(0x41420f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B414211:{NFSU2_TR(0x414211);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B414213:{NFSU2_TR(0x414213);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B414215:{NFSU2_TR(0x414215);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414217:{NFSU2_TR(0x414217);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414219:{NFSU2_TR(0x414219);
{u32 ea_=u32(u32(7878308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41421f:{NFSU2_TR(0x41421f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414221:{NFSU2_TR(0x414221);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414224:{NFSU2_TR(0x414224);
if(r1(R+518)){{goto L41423c;}}
}
B414226:L414226:{c.instructions+=5;NFSU2_TR(0x414226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414229:{NFSU2_TR(0x414229);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41422a:{NFSU2_TR(0x41422a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B41422d:{NFSU2_TR(0x41422d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41422f:{NFSU2_TR(0x41422f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4141e0u);}goto L4141e0;}}
}
B414231:L414231:{c.instructions+=7;NFSU2_TR(0x414231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414232:{NFSU2_TR(0x414232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414233:{NFSU2_TR(0x414233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414234:{NFSU2_TR(0x414234);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B414237:{NFSU2_TR(0x414237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414238:{NFSU2_TR(0x414238);
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
B41423b:{NFSU2_TR(0x41423b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41423c:L41423c:{c.instructions+=2;NFSU2_TR(0x41423c);
__builtin_memmove((R+4),(R+20),4);
}
B41423e:{NFSU2_TR(0x41423e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414243ull));
TAIL_STATIC(0x614880u,614);
}
B414243:L414243:{c.instructions+=7;NFSU2_TR(0x414243);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414246:{NFSU2_TR(0x414246);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B41424d:{NFSU2_TR(0x41424d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+20),(U+0),4);
}
B414253:{NFSU2_TR(0x414253);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414255:{NFSU2_TR(0x414255);
__builtin_memmove((R+4),(R+28),4);
}
B414257:{NFSU2_TR(0x414257);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41425b:{NFSU2_TR(0x41425b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414260ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B414260:L414260:{c.instructions+=4;NFSU2_TR(0x414260);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B414266:{NFSU2_TR(0x414266);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414268:{NFSU2_TR(0x414268);
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
B41426b:{NFSU2_TR(0x41426b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414274;}}
}
B41426d:L41426d:{c.instructions+=3;NFSU2_TR(0x41426d);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414270:{NFSU2_TR(0x414270);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B414272:{NFSU2_TR(0x414272);
{goto L414277;}
}
B414274:L414274:{c.instructions+=1;NFSU2_TR(0x414274);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414277:L414277:{c.instructions+=6;NFSU2_TR(0x414277);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B414279:{NFSU2_TR(0x414279);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41427a:{NFSU2_TR(0x41427a);
__builtin_memmove((R+4),(R+24),4);
}
B41427c:{NFSU2_TR(0x41427c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414280:{NFSU2_TR(0x414280);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414282:{NFSU2_TR(0x414282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414287ull));
TAIL_STATIC(0x60bff0u,60b);
}
B414287:L414287:{c.instructions+=11;NFSU2_TR(0x414287);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41428b:{NFSU2_TR(0x41428b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41428f:{NFSU2_TR(0x41428f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414292:{NFSU2_TR(0x414292);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414295:{NFSU2_TR(0x414295);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414298:{NFSU2_TR(0x414298);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B41429d:{NFSU2_TR(0x41429d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4142a1:{NFSU2_TR(0x4142a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x902ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4142a8:{NFSU2_TR(0x4142a8);
u8 U[13];
w4(U+0,u32(u32(u32(0x938ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B4142af:{NFSU2_TR(0x4142af);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4142b1:{NFSU2_TR(0x4142b1);
if(r1(R+518)){{goto L4142c5;}}
}
B4142b3:L4142b3:{c.instructions+=5;NFSU2_TR(0x4142b3);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4142b6:{NFSU2_TR(0x4142b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4142ba:{NFSU2_TR(0x4142ba);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4142bd:{NFSU2_TR(0x4142bd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4142c1:{NFSU2_TR(0x4142c1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4142c5:L4142c5:{c.instructions+=5;NFSU2_TR(0x4142c5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4142c9:{NFSU2_TR(0x4142c9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4142cf:{NFSU2_TR(0x4142cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4142d1:{NFSU2_TR(0x4142d1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4142d4:{NFSU2_TR(0x4142d4);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414231u);}goto L414231;}}
}
B4142da:L4142da:{c.instructions+=5;NFSU2_TR(0x4142da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4142de:{NFSU2_TR(0x4142de);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4142e4:{NFSU2_TR(0x4142e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4142e6:{NFSU2_TR(0x4142e6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4142e9:{NFSU2_TR(0x4142e9);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414231u);}goto L414231;}}
}
B4142ef:L4142ef:{c.instructions+=4;NFSU2_TR(0x4142ef);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4142f2:{NFSU2_TR(0x4142f2);
__builtin_memmove((R+4),(R+20),4);
}
B4142f4:{NFSU2_TR(0x4142f4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4142f8:{NFSU2_TR(0x4142f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4142fdull));
TAIL_STATIC(0x401f70u,401);
}
B4142fd:L4142fd:{c.instructions+=4;NFSU2_TR(0x4142fd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414301:{NFSU2_TR(0x414301);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414303:{NFSU2_TR(0x414303);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B414306:{NFSU2_TR(0x414306);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414231u);}goto L414231;}}
}
B41430c:L41430c:{c.instructions+=6;NFSU2_TR(0x41430c);
{u32 ea_=u32(u32(7878304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414312:{NFSU2_TR(0x414312);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B414314:{NFSU2_TR(0x414314);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414318:{NFSU2_TR(0x414318);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41431a:{NFSU2_TR(0x41431a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41431d:{NFSU2_TR(0x41431d);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414231u);}goto L414231;}}
}
B414323:L414323:{c.instructions+=5;NFSU2_TR(0x414323);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414327:{NFSU2_TR(0x414327);
{u32 ea_=u32(u32(7878300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41432d:{NFSU2_TR(0x41432d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41432f:{NFSU2_TR(0x41432f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414332:{NFSU2_TR(0x414332);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414231u);}goto L414231;}}
}
B414338:L414338:{c.instructions+=5;NFSU2_TR(0x414338);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41433c:{NFSU2_TR(0x41433c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414342:{NFSU2_TR(0x414342);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414344:{NFSU2_TR(0x414344);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414347:{NFSU2_TR(0x414347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414389;}}
}
B414349:L414349:{c.instructions+=6;NFSU2_TR(0x414349);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41434d:{NFSU2_TR(0x41434d);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B414351:{NFSU2_TR(0x414351);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414353:{NFSU2_TR(0x414353);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B414357:{NFSU2_TR(0x414357);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B414359:{NFSU2_TR(0x414359);
if(r1(R+518)){{goto L414363;}}
}
B41435b:L41435b:{c.instructions+=2;NFSU2_TR(0x41435b);
{u32 ea_=u32(u32(7878288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414361:{NFSU2_TR(0x414361);
{goto L414369;}
}
B414363:L414363:{c.instructions+=1;NFSU2_TR(0x414363);
{u32 ea_=u32(u32(7878292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414369:L414369:{c.instructions+=6;NFSU2_TR(0x414369);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B41436b:{NFSU2_TR(0x41436b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41436d:{NFSU2_TR(0x41436d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41436f:{NFSU2_TR(0x41436f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414371:{NFSU2_TR(0x414371);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B414374:{NFSU2_TR(0x414374);
if(r1(R+514)){{goto L414387;}}
}
B414376:L414376:{c.instructions+=4;NFSU2_TR(0x414376);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41437c:{NFSU2_TR(0x41437c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41437e:{NFSU2_TR(0x41437e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B414381:{NFSU2_TR(0x414381);
if(r1(R+514)){{goto L414389;}}
}
B414383:L414383:{c.instructions+=2;NFSU2_TR(0x414383);
__builtin_memmove((R+4),(R+28),4);
}
B414385:{NFSU2_TR(0x414385);
{goto L41438d;}
}
B414387:L414387:{c.instructions+=1;NFSU2_TR(0x414387);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414389:L414389:{c.instructions+=1;NFSU2_TR(0x414389);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41438d:L41438d:{c.instructions+=3;NFSU2_TR(0x41438d);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B414391:{NFSU2_TR(0x414391);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414393:{NFSU2_TR(0x414393);
if(r1(R+518)){{goto L4143a4;}}
}
B414395:L414395:{c.instructions+=5;NFSU2_TR(0x414395);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414399:{NFSU2_TR(0x414399);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41439d:{NFSU2_TR(0x41439d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41439f:{NFSU2_TR(0x41439f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4143a2:{NFSU2_TR(0x4143a2);
if(r1(R+518)){{goto L4143a8;}}
}
B4143a4:L4143a4:{c.instructions+=1;NFSU2_TR(0x4143a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4143a8:L4143a8:{c.instructions+=2;NFSU2_TR(0x4143a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4143aa:{NFSU2_TR(0x4143aa);
if(r1(R+518)){{goto L4143b2;}}
}
B4143ac:L4143ac:{c.instructions+=2;NFSU2_TR(0x4143ac);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4143b0:{NFSU2_TR(0x4143b0);
{goto L4143be;}
}
B4143b2:L4143b2:{c.instructions+=2;NFSU2_TR(0x4143b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4143b4:{NFSU2_TR(0x4143b4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414231u);}goto L414231;}}
}
B4143ba:L4143ba:{c.instructions+=1;NFSU2_TR(0x4143ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4143be:L4143be:{c.instructions+=14;NFSU2_TR(0x4143be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4143c5:{NFSU2_TR(0x4143c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4143c9:{NFSU2_TR(0x4143c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4143cb:{NFSU2_TR(0x4143cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4143ce:{NFSU2_TR(0x4143ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4143d1:{NFSU2_TR(0x4143d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x902ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4143d8:{NFSU2_TR(0x4143d8);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B4143de:{NFSU2_TR(0x4143de);
u8 U[16];
w4(U+0,u32(u32(u32(0x934ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4143e5:{NFSU2_TR(0x4143e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4143e6:{NFSU2_TR(0x4143e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4143e7:{NFSU2_TR(0x4143e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4143e8:{NFSU2_TR(0x4143e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4143e9:{NFSU2_TR(0x4143e9);
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
B4143ec:{NFSU2_TR(0x4143ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4143f0:L4143f0:{c.instructions+=8;NFSU2_TR(0x4143f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4143f1:{NFSU2_TR(0x4143f1);
__builtin_memmove((R+20),(R+16),4);
}
B4143f3:{NFSU2_TR(0x4143f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4143f6:{NFSU2_TR(0x4143f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B4143f9:{NFSU2_TR(0x4143f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4143fa:{NFSU2_TR(0x4143fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4143fd:{NFSU2_TR(0x4143fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4143fe:{NFSU2_TR(0x4143fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414403ull));
TAIL_STATIC(0x4032a0u,403);
}
B414403:L414403:{c.instructions+=10;NFSU2_TR(0x414403);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414406:{NFSU2_TR(0x414406);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41440c:{NFSU2_TR(0x41440c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41440d:{NFSU2_TR(0x41440d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41440f:{NFSU2_TR(0x41440f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414410:{NFSU2_TR(0x414410);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B414414:{NFSU2_TR(0x414414);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414417:{NFSU2_TR(0x414417);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414418:{NFSU2_TR(0x414418);
__builtin_memmove((R+4),(R+0),4);
}
B41441a:{NFSU2_TR(0x41441a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41441full));
TAIL_STATIC(0x4122c0u,412);
}
B41441f:L41441f:{c.instructions+=9;NFSU2_TR(0x41441f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414423:{NFSU2_TR(0x414423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414426:{NFSU2_TR(0x414426);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41442a:{NFSU2_TR(0x41442a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41442c:{NFSU2_TR(0x41442c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41442f:{NFSU2_TR(0x41442f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414430:{NFSU2_TR(0x414430);
__builtin_memmove((R+16),(R+20),4);
}
B414432:{NFSU2_TR(0x414432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414433:{NFSU2_TR(0x414433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414440:L414440:{c.instructions+=10;NFSU2_TR(0x414440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B414443:{NFSU2_TR(0x414443);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414444:{NFSU2_TR(0x414444);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414445:{NFSU2_TR(0x414445);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B414449:{NFSU2_TR(0x414449);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41444a:{NFSU2_TR(0x41444a);
__builtin_memmove((R+28),(R+4),4);
}
B41444c:{NFSU2_TR(0x41444c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41444e:{NFSU2_TR(0x41444e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B414450:{NFSU2_TR(0x414450);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B414454:{NFSU2_TR(0x414454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414459ull));
TAIL_STATIC(0x5ed580u,5ed);
}
B414459:L414459:{c.instructions+=4;NFSU2_TR(0x414459);
{u32 ea_=u32(u32(7878392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41445f:{NFSU2_TR(0x41445f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414461:{NFSU2_TR(0x414461);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414464:{NFSU2_TR(0x414464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414598;}}
}
B41446a:L41446a:{c.instructions+=3;NFSU2_TR(0x41446a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B414470:{NFSU2_TR(0x414470);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414472:{NFSU2_TR(0x414472);
if(r1(R+518)){{goto L41449e;}}
}
B414474:L414474:{c.instructions+=9;NFSU2_TR(0x414474);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B414479:{NFSU2_TR(0x414479);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B41447f:{NFSU2_TR(0x41447f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414483:{NFSU2_TR(0x414483);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B414487:{NFSU2_TR(0x414487);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41448d:{NFSU2_TR(0x41448d);
{u32 ea_=u32(r4(R+28)+u32(532u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414493:{NFSU2_TR(0x414493);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414495:{NFSU2_TR(0x414495);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414498:{NFSU2_TR(0x414498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4145a3;}}
}
B41449e:L41449e:{c.instructions+=5;NFSU2_TR(0x41449e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4144a2:{NFSU2_TR(0x4144a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4144a3:{NFSU2_TR(0x4144a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4144a4:{NFSU2_TR(0x4144a4);
__builtin_memmove((R+4),(R+28),4);
}
B4144a6:{NFSU2_TR(0x4144a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4144abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4143f0u);}goto L4143f0;}
}
B4144ab:L4144ab:{c.instructions+=13;NFSU2_TR(0x4144ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4144ad:{NFSU2_TR(0x4144ad);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4144b0:{NFSU2_TR(0x4144b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4144b3:{NFSU2_TR(0x4144b3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4144b7:{NFSU2_TR(0x4144b7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4144bb:{NFSU2_TR(0x4144bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4144bf:{NFSU2_TR(0x4144bf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4144c1:{NFSU2_TR(0x4144c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4144c2:{NFSU2_TR(0x4144c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4144c6:{NFSU2_TR(0x4144c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4144c7:{NFSU2_TR(0x4144c7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4144cb:{NFSU2_TR(0x4144cb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4144cf:{NFSU2_TR(0x4144cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4144d4ull));
TAIL_STATIC(0x43ce50u,43c);
}
B4144d4:L4144d4:{c.instructions+=6;NFSU2_TR(0x4144d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4144d6:{NFSU2_TR(0x4144d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B4144dc:{NFSU2_TR(0x4144dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4144dd:{NFSU2_TR(0x4144dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4144e1:{NFSU2_TR(0x4144e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4144e2:{NFSU2_TR(0x4144e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4144e7ull));
TAIL_STATIC(0x43ce50u,43c);
}
B4144e7:L4144e7:{c.instructions+=10;NFSU2_TR(0x4144e7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4144eb:{NFSU2_TR(0x4144eb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4144ef:{NFSU2_TR(0x4144ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4144f2:{NFSU2_TR(0x4144f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4144f6:{NFSU2_TR(0x4144f6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4144fa:{NFSU2_TR(0x4144fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4144fc:{NFSU2_TR(0x4144fc);
{u32 ea_=u32(u32(7878368u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414502:{NFSU2_TR(0x414502);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414504:{NFSU2_TR(0x414504);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414507:{NFSU2_TR(0x414507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41450e;}}
}
B414509:L414509:{c.instructions+=1;NFSU2_TR(0x414509);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41450e:L41450e:{c.instructions+=7;NFSU2_TR(0x41450e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414510:{NFSU2_TR(0x414510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B414513:{NFSU2_TR(0x414513);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B414516:{NFSU2_TR(0x414516);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414517:{NFSU2_TR(0x414517);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B414519:{NFSU2_TR(0x414519);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41451b:{NFSU2_TR(0x41451b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41457e;}}
}
B41451d:L41451d:{c.instructions+=1;NFSU2_TR(0x41451d);
__builtin_memmove((R+4),(R+4),4);
}
B414520:L414520:{c.instructions+=3;NFSU2_TR(0x414520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414521:{NFSU2_TR(0x414521);
__builtin_memmove((R+4),(R+12),4);
}
B414523:{NFSU2_TR(0x414523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414528ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B414528:L414528:{c.instructions+=5;NFSU2_TR(0x414528);
__builtin_memmove((R+28),(R+0),4);
}
B41452a:{NFSU2_TR(0x41452a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41452c:{NFSU2_TR(0x41452c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41452d:{NFSU2_TR(0x41452d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41452e:{NFSU2_TR(0x41452e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414533ull));
TAIL_STATIC(0x402a40u,402);
}
B414533:L414533:{c.instructions+=3;NFSU2_TR(0x414533);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B414536:{NFSU2_TR(0x414536);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B414538:{NFSU2_TR(0x414538);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414575;}}
}
B41453a:L41453a:{c.instructions+=10;NFSU2_TR(0x41453a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41453d:{NFSU2_TR(0x41453d);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B414543:{NFSU2_TR(0x414543);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B414545:{NFSU2_TR(0x414545);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414549:{NFSU2_TR(0x414549);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41454d:{NFSU2_TR(0x41454d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B414553:{NFSU2_TR(0x414553);
{u32 ea_=u32(u32(7878372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414559:{NFSU2_TR(0x414559);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41455b:{NFSU2_TR(0x41455b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41455e:{NFSU2_TR(0x41455e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414575;}}
}
B414560:L414560:{c.instructions+=6;NFSU2_TR(0x414560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B414562:{NFSU2_TR(0x414562);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414568:{NFSU2_TR(0x414568);
{u32 ea_=u32(u32(7878376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41456e:{NFSU2_TR(0x41456e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414570:{NFSU2_TR(0x414570);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B414573:{NFSU2_TR(0x414573);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41458c;}}
}
B414575:L414575:{c.instructions+=4;NFSU2_TR(0x414575);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B414579:{NFSU2_TR(0x414579);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41457a:{NFSU2_TR(0x41457a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41457c:{NFSU2_TR(0x41457c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414520u);}goto L414520;}}
}
B41457e:L41457e:{c.instructions+=7;NFSU2_TR(0x41457e);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B414582:{NFSU2_TR(0x414582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414583:{NFSU2_TR(0x414583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414584:{NFSU2_TR(0x414584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414585:{NFSU2_TR(0x414585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414586:{NFSU2_TR(0x414586);
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
B414589:{NFSU2_TR(0x414589);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41458c:L41458c:{c.instructions+=7;NFSU2_TR(0x41458c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41458d:{NFSU2_TR(0x41458d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41458e:{NFSU2_TR(0x41458e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41458f:{NFSU2_TR(0x41458f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B414591:{NFSU2_TR(0x414591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414592:{NFSU2_TR(0x414592);
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
B414595:{NFSU2_TR(0x414595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414598:L414598:{c.instructions+=6;NFSU2_TR(0x414598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414599:{NFSU2_TR(0x414599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41459a:{NFSU2_TR(0x41459a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41459c:{NFSU2_TR(0x41459c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41459d:{NFSU2_TR(0x41459d);
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
B4145a0:{NFSU2_TR(0x4145a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4145a3:L4145a3:{c.instructions+=6;NFSU2_TR(0x4145a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4145a4:{NFSU2_TR(0x4145a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4145a5:{NFSU2_TR(0x4145a5);
__builtin_memmove((R+0),(R+12),1);
}
B4145a7:{NFSU2_TR(0x4145a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4145a8:{NFSU2_TR(0x4145a8);
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
B4145ab:{NFSU2_TR(0x4145ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4145b0:L4145b0:{c.instructions+=19;NFSU2_TR(0x4145b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4145b1:{NFSU2_TR(0x4145b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4145b2:{NFSU2_TR(0x4145b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4145b3:{NFSU2_TR(0x4145b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4145b7:{NFSU2_TR(0x4145b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4145b8:{NFSU2_TR(0x4145b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4145bc:{NFSU2_TR(0x4145bc);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B4145c3:{NFSU2_TR(0x4145c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4145c5:{NFSU2_TR(0x4145c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4145cb:{NFSU2_TR(0x4145cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4145cc:{NFSU2_TR(0x4145cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4145cf:{NFSU2_TR(0x4145cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4145d6:{NFSU2_TR(0x4145d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4145d9:{NFSU2_TR(0x4145d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4145dc:{NFSU2_TR(0x4145dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4145dd:{NFSU2_TR(0x4145dd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4145e1:{NFSU2_TR(0x4145e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4145e9:{NFSU2_TR(0x4145e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4145f1:{NFSU2_TR(0x4145f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4145f6ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4145f6:L4145f6:{c.instructions+=11;NFSU2_TR(0x4145f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4145fa:{NFSU2_TR(0x4145fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4145fb:{NFSU2_TR(0x4145fb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4145ff:{NFSU2_TR(0x4145ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414603:{NFSU2_TR(0x414603);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B414607:{NFSU2_TR(0x414607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414608:{NFSU2_TR(0x414608);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414609:{NFSU2_TR(0x414609);
u8 U[4];
w4(U+0,u32(0x47c34f80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41460e:{NFSU2_TR(0x41460e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41460f:{NFSU2_TR(0x41460f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414610:{NFSU2_TR(0x414610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414615ull));
TAIL_STATIC(0x402ed0u,402);
}
B414615:L414615:{c.instructions+=5;NFSU2_TR(0x414615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B414617:{NFSU2_TR(0x414617);
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
B41461a:{NFSU2_TR(0x41461a);
__builtin_memmove((R+4),(R+28),4);
}
B41461c:{NFSU2_TR(0x41461c);
__builtin_memmove((R+12),(R+0),4);
}
B41461e:{NFSU2_TR(0x41461e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414621ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B414621:L414621:{c.instructions+=2;NFSU2_TR(0x414621);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414623:{NFSU2_TR(0x414623);
if(r1(R+518)){{goto L414668;}}
}
B414625:L414625:{c.instructions+=2;NFSU2_TR(0x414625);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B414627:{NFSU2_TR(0x414627);
if(r1(R+518)){{goto L414668;}}
}
B414629:L414629:{c.instructions+=2;NFSU2_TR(0x414629);
__builtin_memmove((R+4),(R+12),4);
}
B41462b:{NFSU2_TR(0x41462b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414630ull));
TAIL_STATIC(0x60bea0u,60b);
}
B414630:L414630:{c.instructions+=2;NFSU2_TR(0x414630);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414632:{NFSU2_TR(0x414632);
if(r1(R+518)){{goto L414668;}}
}
B414634:L414634:{c.instructions+=20;NFSU2_TR(0x414634);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414637:{NFSU2_TR(0x414637);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41463a:{NFSU2_TR(0x41463a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41463d:{NFSU2_TR(0x41463d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41463f:{NFSU2_TR(0x41463f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B414641:{NFSU2_TR(0x414641);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B414643:{NFSU2_TR(0x414643);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B414645:{NFSU2_TR(0x414645);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B414647:{NFSU2_TR(0x414647);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B414649:{NFSU2_TR(0x414649);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B41464b:{NFSU2_TR(0x41464b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41464d:{NFSU2_TR(0x41464d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41464f:{NFSU2_TR(0x41464f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B414651:{NFSU2_TR(0x414651);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B414653:{NFSU2_TR(0x414653);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414655:{NFSU2_TR(0x414655);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B414657:{NFSU2_TR(0x414657);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41465d:{NFSU2_TR(0x41465d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41465f:{NFSU2_TR(0x41465f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414662:{NFSU2_TR(0x414662);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414668;}}
}
B414664:L414664:{c.instructions+=2;NFSU2_TR(0x414664);
w1(R+0,u8(0x1ull));
}
B414666:{NFSU2_TR(0x414666);
{goto L41466a;}
}
B414668:L414668:{c.instructions+=1;NFSU2_TR(0x414668);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41466a:L41466a:{c.instructions+=2;NFSU2_TR(0x41466a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41466c:{NFSU2_TR(0x41466c);
if(r1(R+518)){{goto L4146b3;}}
}
B41466e:L41466e:{c.instructions+=2;NFSU2_TR(0x41466e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414670:{NFSU2_TR(0x414670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4146b3;}}
}
B414672:L414672:{c.instructions+=5;NFSU2_TR(0x414672);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414676:{NFSU2_TR(0x414676);
{u32 ea_=u32(u32(7878464u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41467c:{NFSU2_TR(0x41467c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41467e:{NFSU2_TR(0x41467e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B414681:{NFSU2_TR(0x414681);
if(r1(R+514)){{goto L4146b3;}}
}
B414683:L414683:{c.instructions+=3;NFSU2_TR(0x414683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414684:{NFSU2_TR(0x414684);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414685:{NFSU2_TR(0x414685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41468aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4140e0u);}goto L4140e0;}
}
B41468a:L41468a:{c.instructions+=3;NFSU2_TR(0x41468a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41468d:{NFSU2_TR(0x41468d);
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
B41468f:{NFSU2_TR(0x41468f);
if(r1(R+518)){{goto L4146b3;}}
}
B414691:L414691:{c.instructions+=14;NFSU2_TR(0x414691);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414695:{NFSU2_TR(0x414695);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414699:{NFSU2_TR(0x414699);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41469d:{NFSU2_TR(0x41469d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41469e:{NFSU2_TR(0x41469e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4146a1:{NFSU2_TR(0x4146a1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4146a3:{NFSU2_TR(0x4146a3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4146a7:{NFSU2_TR(0x4146a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4146a8:{NFSU2_TR(0x4146a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4146a9:{NFSU2_TR(0x4146a9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4146ab:{NFSU2_TR(0x4146ab);
w4(R+0,u32(0x12cull));
}
B4146b0:{NFSU2_TR(0x4146b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4146b1:{NFSU2_TR(0x4146b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4146b2:{NFSU2_TR(0x4146b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4146b3:L4146b3:{c.instructions+=7;NFSU2_TR(0x4146b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4146b4:{NFSU2_TR(0x4146b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4146b5:{NFSU2_TR(0x4146b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4146b6:{NFSU2_TR(0x4146b6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4146b9:{NFSU2_TR(0x4146b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4146ba:{NFSU2_TR(0x4146ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4146bb:{NFSU2_TR(0x4146bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4146c0:L4146c0:{c.instructions+=17;NFSU2_TR(0x4146c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4146c1:{NFSU2_TR(0x4146c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4146c2:{NFSU2_TR(0x4146c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4146c3:{NFSU2_TR(0x4146c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4146c7:{NFSU2_TR(0x4146c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4146ce:{NFSU2_TR(0x4146ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4146d0:{NFSU2_TR(0x4146d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4146d1:{NFSU2_TR(0x4146d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4146d4:{NFSU2_TR(0x4146d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4146d7:{NFSU2_TR(0x4146d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4146d8:{NFSU2_TR(0x4146d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4146dc:{NFSU2_TR(0x4146dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4146df:{NFSU2_TR(0x4146df);
__builtin_memmove((R+20),(R+4),4);
}
B4146e1:{NFSU2_TR(0x4146e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4146e4:{NFSU2_TR(0x4146e4);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4146eb:{NFSU2_TR(0x4146eb);
w1(R+12,u8(0x1ull));
}
B4146ed:{NFSU2_TR(0x4146ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41477d;}}
}
B4146f3:L4146f3:{c.instructions+=2;NFSU2_TR(0x4146f3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4146f6:{NFSU2_TR(0x4146f6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41477d;}}
}
B4146fc:L4146fc:{c.instructions+=3;NFSU2_TR(0x4146fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414700:{NFSU2_TR(0x414700);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414702:{NFSU2_TR(0x414702);
if(r1(R+518)){{goto L414710;}}
}
B414704:L414704:{c.instructions+=4;NFSU2_TR(0x414704);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414705:{NFSU2_TR(0x414705);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414706:{NFSU2_TR(0x414706);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414707:{NFSU2_TR(0x414707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41470cull));
TAIL_STATIC(0x412500u,412);
}
B41470c:L41470c:{c.instructions+=2;NFSU2_TR(0x41470c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41470e:{NFSU2_TR(0x41470e);
if(r1(R+518)){{goto L41477d;}}
}
B414710:L414710:{c.instructions+=11;NFSU2_TR(0x414710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414716:{NFSU2_TR(0x414716);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41471a:{NFSU2_TR(0x41471a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41471b:{NFSU2_TR(0x41471b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41471f:{NFSU2_TR(0x41471f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414720:{NFSU2_TR(0x414720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414721:{NFSU2_TR(0x414721);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414722:{NFSU2_TR(0x414722);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414724:{NFSU2_TR(0x414724);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414725:{NFSU2_TR(0x414725);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41472d:{NFSU2_TR(0x41472d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414732ull));
TAIL_STATIC(0x402ed0u,402);
}
B414732:L414732:{c.instructions+=4;NFSU2_TR(0x414732);
__builtin_memmove((R+28),(R+0),4);
}
B414734:{NFSU2_TR(0x414734);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B414737:{NFSU2_TR(0x414737);
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
B414739:{NFSU2_TR(0x414739);
if(r1(R+518)){{goto L414786;}}
}
B41473b:L41473b:{c.instructions+=3;NFSU2_TR(0x41473b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41473c:{NFSU2_TR(0x41473c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41473d:{NFSU2_TR(0x41473d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414742ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4140e0u);}goto L4140e0;}
}
B414742:L414742:{c.instructions+=3;NFSU2_TR(0x414742);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B414745:{NFSU2_TR(0x414745);
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
B414747:{NFSU2_TR(0x414747);
if(r1(R+518)){{goto L414786;}}
}
B414749:L414749:{c.instructions+=5;NFSU2_TR(0x414749);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41474d:{NFSU2_TR(0x41474d);
{u32 ea_=u32(u32(7878464u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414753:{NFSU2_TR(0x414753);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414755:{NFSU2_TR(0x414755);
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
B414758:{NFSU2_TR(0x414758);
if(r1(R+514)){{goto L414786;}}
}
B41475a:L41475a:{c.instructions+=5;NFSU2_TR(0x41475a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41475e:{NFSU2_TR(0x41475e);
{u32 ea_=u32(r4(R+20)+u32(540u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414764:{NFSU2_TR(0x414764);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414766:{NFSU2_TR(0x414766);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B414769:{NFSU2_TR(0x414769);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41477d;}}
}
B41476b:L41476b:{c.instructions+=4;NFSU2_TR(0x41476b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B414771:{NFSU2_TR(0x414771);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414772:{NFSU2_TR(0x414772);
__builtin_memmove((R+4),(R+28),4);
}
B414774:{NFSU2_TR(0x414774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414779ull));
TAIL_STATIC(0x60be90u,60b);
}
B414779:L414779:{c.instructions+=2;NFSU2_TR(0x414779);
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
B41477b:{NFSU2_TR(0x41477b);
if(r1(R+518)){{goto L414786;}}
}
B41477d:L41477d:{c.instructions+=6;NFSU2_TR(0x41477d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41477e:{NFSU2_TR(0x41477e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41477f:{NFSU2_TR(0x41477f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414780:{NFSU2_TR(0x414780);
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
B414782:{NFSU2_TR(0x414782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414783:{NFSU2_TR(0x414783);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414786:L414786:{c.instructions+=6;NFSU2_TR(0x414786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414787:{NFSU2_TR(0x414787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414788:{NFSU2_TR(0x414788);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414789:{NFSU2_TR(0x414789);
__builtin_memmove((R+0),(R+12),1);
}
B41478b:{NFSU2_TR(0x41478b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41478c:{NFSU2_TR(0x41478c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414790:L414790:{c.instructions+=12;NFSU2_TR(0x414790);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414791:{NFSU2_TR(0x414791);
__builtin_memmove((R+20),(R+16),4);
}
B414793:{NFSU2_TR(0x414793);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B414796:{NFSU2_TR(0x414796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B414799:{NFSU2_TR(0x414799);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41479a:{NFSU2_TR(0x41479a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41479b:{NFSU2_TR(0x41479b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41479e:{NFSU2_TR(0x41479e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4147a4:{NFSU2_TR(0x4147a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4147a7:{NFSU2_TR(0x4147a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4147ad:{NFSU2_TR(0x4147ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4147ae:{NFSU2_TR(0x4147ae);
if(r1(R+518)){{goto L4147b6;}}
}
B4147b0:L4147b0:{c.instructions+=2;NFSU2_TR(0x4147b0);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B4147b4:{NFSU2_TR(0x4147b4);
{goto L4147b8;}
}
B4147b6:L4147b6:{c.instructions+=1;NFSU2_TR(0x4147b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4147b8:L4147b8:{c.instructions+=3;NFSU2_TR(0x4147b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4147bc:{NFSU2_TR(0x4147bc);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4147c0:{NFSU2_TR(0x4147c0);
if(r1(R+518)){{goto L4147f6;}}
}
B4147c2:L4147c2:{c.instructions+=3;NFSU2_TR(0x4147c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4147c6:{NFSU2_TR(0x4147c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4147ca:{NFSU2_TR(0x4147ca);
if(r1(R+518)){{goto L4147f6;}}
}
B4147cc:L4147cc:{c.instructions+=3;NFSU2_TR(0x4147cc);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B4147cf:{NFSU2_TR(0x4147cf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4147d1:{NFSU2_TR(0x4147d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4147dc;}}
}
B4147d3:L4147d3:{c.instructions+=2;NFSU2_TR(0x4147d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4147da:{NFSU2_TR(0x4147da);
{goto L4147de;}
}
B4147dc:L4147dc:{c.instructions+=1;NFSU2_TR(0x4147dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4147de:L4147de:{c.instructions+=4;NFSU2_TR(0x4147de);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B4147e1:{NFSU2_TR(0x4147e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4147e4:{NFSU2_TR(0x4147e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4147eb:{NFSU2_TR(0x4147eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4147f0ull));
TAIL_STATIC(0x5d8950u,5d8);
}
B4147f0:L4147f0:{c.instructions+=2;NFSU2_TR(0x4147f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4147f4:{NFSU2_TR(0x4147f4);
{goto L4147fe;}
}
B4147f6:L4147f6:{c.instructions+=1;NFSU2_TR(0x4147f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4147fe:L4147fe:{c.instructions+=4;NFSU2_TR(0x4147fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414804:{NFSU2_TR(0x414804);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414808:{NFSU2_TR(0x414808);
w4(R+24,u32(0x5ull));
}
B41480d:{NFSU2_TR(0x41480d);
__builtin_memmove((R+4),(R+4),4);
}
B414810:L414810:{c.instructions+=3;NFSU2_TR(0x414810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414811:{NFSU2_TR(0x414811);
__builtin_memmove((R+4),(R+12),4);
}
B414813:{NFSU2_TR(0x414813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414818ull));
TAIL_STATIC(0x40aa90u,40a);
}
B414818:L414818:{c.instructions+=2;NFSU2_TR(0x414818);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41481a:{NFSU2_TR(0x41481a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41482d;}}
}
B41481c:L41481c:{c.instructions+=4;NFSU2_TR(0x41481c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B41481d:{NFSU2_TR(0x41481d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B414820:{NFSU2_TR(0x414820);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B414822:{NFSU2_TR(0x414822);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414810u);}goto L414810;}}
}
B414824:L414824:{c.instructions+=7;NFSU2_TR(0x414824);
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
B414826:{NFSU2_TR(0x414826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414827:{NFSU2_TR(0x414827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414828:{NFSU2_TR(0x414828);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414829:{NFSU2_TR(0x414829);
__builtin_memmove((R+16),(R+20),4);
}
B41482b:{NFSU2_TR(0x41482b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41482c:{NFSU2_TR(0x41482c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41482d:L41482d:{c.instructions+=2;NFSU2_TR(0x41482d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414833:{NFSU2_TR(0x414833);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414824u);}goto L414824;}}
}
B414835:L414835:{c.instructions+=2;NFSU2_TR(0x414835);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B414839:{NFSU2_TR(0x414839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414824u);}goto L414824;}}
}
B41483b:L41483b:{c.instructions+=5;NFSU2_TR(0x41483b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41483f:{NFSU2_TR(0x41483f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414840:{NFSU2_TR(0x414840);
__builtin_memmove((R+4),(R+28),4);
}
B414842:{NFSU2_TR(0x414842);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B414844:{NFSU2_TR(0x414844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414849ull));
TAIL_STATIC(0x40add0u,40a);
}
B414849:L414849:{c.instructions+=15;NFSU2_TR(0x414849);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41484d:{NFSU2_TR(0x41484d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414851:{NFSU2_TR(0x414851);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B414855:{NFSU2_TR(0x414855);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414859:{NFSU2_TR(0x414859);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41485a:{NFSU2_TR(0x41485a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41485e:{NFSU2_TR(0x41485e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414862:{NFSU2_TR(0x414862);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414863:{NFSU2_TR(0x414863);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B414867:{NFSU2_TR(0x414867);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414868:{NFSU2_TR(0x414868);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41486c:{NFSU2_TR(0x41486c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414870:{NFSU2_TR(0x414870);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414874:{NFSU2_TR(0x414874);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41487c:{NFSU2_TR(0x41487c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414881ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B414881:L414881:{c.instructions+=6;NFSU2_TR(0x414881);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414885:{NFSU2_TR(0x414885);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B414889:{NFSU2_TR(0x414889);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41488d:{NFSU2_TR(0x41488d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B414890:{NFSU2_TR(0x414890);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B414894:{NFSU2_TR(0x414894);
if(r1(R+518)){{goto L4148ad;}}
}
B414896:L414896:{c.instructions+=2;NFSU2_TR(0x414896);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B41489b:{NFSU2_TR(0x41489b);
if(r1(R+518)){{goto L4148ad;}}
}
B41489d:L41489d:{c.instructions+=3;NFSU2_TR(0x41489d);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B4148a0:{NFSU2_TR(0x4148a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4148a2:{NFSU2_TR(0x4148a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4148ad;}}
}
B4148a4:L4148a4:{c.instructions+=2;NFSU2_TR(0x4148a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4148ab:{NFSU2_TR(0x4148ab);
{goto L4148af;}
}
B4148ad:L4148ad:{c.instructions+=1;NFSU2_TR(0x4148ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4148af:L4148af:{c.instructions+=3;NFSU2_TR(0x4148af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4148b3:{NFSU2_TR(0x4148b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4148b4:{NFSU2_TR(0x4148b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4148b9ull));
TAIL_STATIC(0x410ae0u,410);
}
B4148b9:L4148b9:{c.instructions+=19;NFSU2_TR(0x4148b9);
__builtin_memmove((R+4),(R+0),4);
}
B4148bb:{NFSU2_TR(0x4148bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4148bf:{NFSU2_TR(0x4148bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4148c3:{NFSU2_TR(0x4148c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4148c7:{NFSU2_TR(0x4148c7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4148cb:{NFSU2_TR(0x4148cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4148cf:{NFSU2_TR(0x4148cf);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4148d5:{NFSU2_TR(0x4148d5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4148d9:{NFSU2_TR(0x4148d9);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4148df:{NFSU2_TR(0x4148df);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B4148e1:{NFSU2_TR(0x4148e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4148e3:{NFSU2_TR(0x4148e3);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4148e5:{NFSU2_TR(0x4148e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4148e7:{NFSU2_TR(0x4148e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4148ed:{NFSU2_TR(0x4148ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4148ef:{NFSU2_TR(0x4148ef);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4148f1:{NFSU2_TR(0x4148f1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4148f4:{NFSU2_TR(0x4148f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4148f6:{NFSU2_TR(0x4148f6);
if(r1(R+514)){{goto L4148fd;}}
}
B4148f8:L4148f8:{c.instructions+=1;NFSU2_TR(0x4148f8);
w4(R+24,u32(0x1ull));
}
B4148fd:L4148fd:{c.instructions+=7;NFSU2_TR(0x4148fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414900:{NFSU2_TR(0x414900);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B414906:{NFSU2_TR(0x414906);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B41490d:{NFSU2_TR(0x41490d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41490f:{NFSU2_TR(0x41490f);
__builtin_memmove((R+8),(R+518),1);
}
B414912:{NFSU2_TR(0x414912);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414913:{NFSU2_TR(0x414913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414918ull));
TAIL_STATIC(0x5d4480u,5d4);
}
B414918:L414918:{c.instructions+=2;NFSU2_TR(0x414918);
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
B41491a:{NFSU2_TR(0x41491a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414824u);}goto L414824;}}
}
B414920:L414920:{c.instructions+=7;NFSU2_TR(0x414920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414921:{NFSU2_TR(0x414921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414922:{NFSU2_TR(0x414922);
w1(R+0,u8(0x1ull));
}
B414924:{NFSU2_TR(0x414924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414925:{NFSU2_TR(0x414925);
__builtin_memmove((R+16),(R+20),4);
}
B414927:{NFSU2_TR(0x414927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414928:{NFSU2_TR(0x414928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414930:L414930:{c.instructions+=5;NFSU2_TR(0x414930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414931:{NFSU2_TR(0x414931);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B414935:{NFSU2_TR(0x414935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41493b:{NFSU2_TR(0x41493b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41493e:{NFSU2_TR(0x41493e);
if(r1(R+518)){{goto L414949;}}
}
B414940:L414940:{c.instructions+=2;NFSU2_TR(0x414940);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B414947:{NFSU2_TR(0x414947);
{goto L41494b;}
}
B414949:L414949:{c.instructions+=1;NFSU2_TR(0x414949);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41494b:L41494b:{c.instructions+=3;NFSU2_TR(0x41494b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41494f:{NFSU2_TR(0x41494f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B414953:{NFSU2_TR(0x414953);
if(r1(R+518)){{goto L414983;}}
}
B414955:L414955:{c.instructions+=3;NFSU2_TR(0x414955);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B414959:{NFSU2_TR(0x414959);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41495d:{NFSU2_TR(0x41495d);
if(r1(R+518)){{goto L414983;}}
}
B41495f:L41495f:{c.instructions+=3;NFSU2_TR(0x41495f);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B414962:{NFSU2_TR(0x414962);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B414964:{NFSU2_TR(0x414964);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41496f;}}
}
B414966:L414966:{c.instructions+=2;NFSU2_TR(0x414966);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B41496d:{NFSU2_TR(0x41496d);
{goto L414971;}
}
B41496f:L41496f:{c.instructions+=1;NFSU2_TR(0x41496f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B414971:L414971:{c.instructions+=4;NFSU2_TR(0x414971);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B414974:{NFSU2_TR(0x414974);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B414977:{NFSU2_TR(0x414977);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41497e:{NFSU2_TR(0x41497e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414983ull));
TAIL_STATIC(0x5d8950u,5d8);
}
B414983:L414983:{c.instructions+=3;NFSU2_TR(0x414983);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414984:{NFSU2_TR(0x414984);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41498c:{NFSU2_TR(0x41498c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414991ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414790u);}goto L414790;}
}
B414991:L414991:{c.instructions+=4;NFSU2_TR(0x414991);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414994:{NFSU2_TR(0x414994);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414996:{NFSU2_TR(0x414996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414997:{NFSU2_TR(0x414997);
if(r1(R+518)){{goto L4149a1;}}
}
B414999:L414999:{c.instructions+=1;NFSU2_TR(0x414999);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf2b851eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4149a1:L4149a1:{c.instructions+=3;NFSU2_TR(0x4149a1);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4149a7:{NFSU2_TR(0x4149a7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4149ac:{NFSU2_TR(0x4149ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4149b1ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B4149b1:L4149b1:{c.instructions+=4;NFSU2_TR(0x4149b1);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4149b7:{NFSU2_TR(0x4149b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4149b9:{NFSU2_TR(0x4149b9);
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
B4149bc:{NFSU2_TR(0x4149bc);
if(r1(R+514)){{goto L4149c6;}}
}
B4149be:L4149be:{c.instructions+=3;NFSU2_TR(0x4149be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4149c0:{NFSU2_TR(0x4149c0);
w4(R+0,u32(0x2ull));
}
B4149c5:{NFSU2_TR(0x4149c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4149c6:L4149c6:{c.instructions+=5;NFSU2_TR(0x4149c6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4149ca:{NFSU2_TR(0x4149ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4149cc:{NFSU2_TR(0x4149cc);
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
B4149cf:{NFSU2_TR(0x4149cf);
w4(R+0,u32(0x3ull));
}
B4149d4:{NFSU2_TR(0x4149d4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4149db;}}
}
B4149d6:L4149d6:{c.instructions+=1;NFSU2_TR(0x4149d6);
w4(R+0,u32(0x1ull));
}
B4149db:L4149db:{c.instructions+=1;NFSU2_TR(0x4149db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4149e0:L4149e0:{c.instructions+=11;NFSU2_TR(0x4149e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4149e1:{NFSU2_TR(0x4149e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4149e5:{NFSU2_TR(0x4149e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4149e6:{NFSU2_TR(0x4149e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4149ea:{NFSU2_TR(0x4149ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4149eb:{NFSU2_TR(0x4149eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4149ef:{NFSU2_TR(0x4149ef);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4149f5:{NFSU2_TR(0x4149f5);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4149fb:{NFSU2_TR(0x4149fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414a01:{NFSU2_TR(0x414a01);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414a04:{NFSU2_TR(0x414a04);
if(r1(R+518)){{goto L414a2e;}}
}
B414a06:L414a06:{c.instructions+=3;NFSU2_TR(0x414a06);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B414a0d:{NFSU2_TR(0x414a0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B414a0f:{NFSU2_TR(0x414a0f);
if(r1(R+518)){{goto L414a2e;}}
}
B414a11:L414a11:{c.instructions+=2;NFSU2_TR(0x414a11);
__builtin_memmove((R+4),(R+0),4);
}
B414a13:{NFSU2_TR(0x414a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414a18ull));
TAIL_STATIC(0x401f20u,401);
}
B414a18:L414a18:{c.instructions+=3;NFSU2_TR(0x414a18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414a19:{NFSU2_TR(0x414a19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B414a1b:{NFSU2_TR(0x414a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414a20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414930u);}goto L414930;}
}
B414a20:L414a20:{c.instructions+=7;NFSU2_TR(0x414a20);
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
B414a23:{NFSU2_TR(0x414a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414a24:{NFSU2_TR(0x414a24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B414a26:{NFSU2_TR(0x414a26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414a27:{NFSU2_TR(0x414a27);
w4(R+0,u32(0x258ull));
}
B414a2c:{NFSU2_TR(0x414a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414a2d:{NFSU2_TR(0x414a2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414a2e:L414a2e:{c.instructions+=5;NFSU2_TR(0x414a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414a2f:{NFSU2_TR(0x414a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414a30:{NFSU2_TR(0x414a30);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414a33:{NFSU2_TR(0x414a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414a34:{NFSU2_TR(0x414a34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414a40:L414a40:{c.instructions+=5;NFSU2_TR(0x414a40);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B414a45:{NFSU2_TR(0x414a45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414a46:{NFSU2_TR(0x414a46);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B414a48:{NFSU2_TR(0x414a48);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414a4a:{NFSU2_TR(0x414a4a);
if(r1(R+518)){{goto L414a5b;}}
}
B414a4c:L414a4c:{c.instructions+=2;NFSU2_TR(0x414a4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414a4d:{NFSU2_TR(0x414a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414a52ull));
TAIL_STATIC(0x440e40u,440);
}
B414a52:L414a52:{c.instructions+=2;NFSU2_TR(0x414a52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414a55:{NFSU2_TR(0x414a55);
__builtin_memmove(gp(0x81cb6c),(R+24),4);
}
B414a5b:L414a5b:{c.instructions+=3;NFSU2_TR(0x414a5b);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B414a60:{NFSU2_TR(0x414a60);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414a62:{NFSU2_TR(0x414a62);
if(r1(R+518)){{goto L414a73;}}
}
B414a64:L414a64:{c.instructions+=2;NFSU2_TR(0x414a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414a65:{NFSU2_TR(0x414a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414a6aull));
TAIL_STATIC(0x440e40u,440);
}
B414a6a:L414a6a:{c.instructions+=2;NFSU2_TR(0x414a6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414a6d:{NFSU2_TR(0x414a6d);
__builtin_memmove(gp(0x81cb70),(R+24),4);
}
B414a73:L414a73:{c.instructions+=3;NFSU2_TR(0x414a73);
__builtin_memmove((R+0),gp(0x81cbb4),4);
}
B414a78:{NFSU2_TR(0x414a78);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414a7a:{NFSU2_TR(0x414a7a);
if(r1(R+518)){{goto L414a8b;}}
}
B414a7c:L414a7c:{c.instructions+=2;NFSU2_TR(0x414a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414a7d:{NFSU2_TR(0x414a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414a82ull));
TAIL_STATIC(0x440e40u,440);
}
B414a82:L414a82:{c.instructions+=2;NFSU2_TR(0x414a82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414a85:{NFSU2_TR(0x414a85);
__builtin_memmove(gp(0x81cbb4),(R+24),4);
}
B414a8b:L414a8b:{c.instructions+=3;NFSU2_TR(0x414a8b);
__builtin_memmove((R+0),gp(0x81cbb8),4);
}
B414a90:{NFSU2_TR(0x414a90);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414a92:{NFSU2_TR(0x414a92);
if(r1(R+518)){{goto L414aa3;}}
}
B414a94:L414a94:{c.instructions+=2;NFSU2_TR(0x414a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414a95:{NFSU2_TR(0x414a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414a9aull));
TAIL_STATIC(0x440e40u,440);
}
B414a9a:L414a9a:{c.instructions+=2;NFSU2_TR(0x414a9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414a9d:{NFSU2_TR(0x414a9d);
__builtin_memmove(gp(0x81cbb8),(R+24),4);
}
B414aa3:L414aa3:{c.instructions+=3;NFSU2_TR(0x414aa3);
__builtin_memmove((R+0),gp(0x81cbbc),4);
}
B414aa8:{NFSU2_TR(0x414aa8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414aaa:{NFSU2_TR(0x414aaa);
if(r1(R+518)){{goto L414abb;}}
}
B414aac:L414aac:{c.instructions+=2;NFSU2_TR(0x414aac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414aad:{NFSU2_TR(0x414aad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414ab2ull));
TAIL_STATIC(0x440e40u,440);
}
B414ab2:L414ab2:{c.instructions+=2;NFSU2_TR(0x414ab2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414ab5:{NFSU2_TR(0x414ab5);
__builtin_memmove(gp(0x81cbbc),(R+24),4);
}
B414abb:L414abb:{c.instructions+=2;NFSU2_TR(0x414abb);
w4(R+4,u32(0x81e5b8ull));
}
B414ac0:{NFSU2_TR(0x414ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414ac5ull));
TAIL_STATIC(0x40f070u,40f);
}
B414ac5:L414ac5:{c.instructions+=2;NFSU2_TR(0x414ac5);
w4(R+4,u32(0x81e388ull));
}
B414aca:{NFSU2_TR(0x414aca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414acfull));
TAIL_STATIC(0x40f070u,40f);
}
B414acf:L414acf:{c.instructions+=3;NFSU2_TR(0x414acf);
__builtin_memmove((R+0),gp(0x81cb7c),4);
}
B414ad4:{NFSU2_TR(0x414ad4);
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
B414ad6:{NFSU2_TR(0x414ad6);
if(r1(R+518)){{goto L414ae7;}}
}
B414ad8:L414ad8:{c.instructions+=2;NFSU2_TR(0x414ad8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414ad9:{NFSU2_TR(0x414ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414adeull));
TAIL_STATIC(0x575630u,575);
}
B414ade:L414ade:{c.instructions+=2;NFSU2_TR(0x414ade);
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
B414ae1:{NFSU2_TR(0x414ae1);
__builtin_memmove(gp(0x81cb7c),(R+24),4);
}
B414ae7:L414ae7:{c.instructions+=2;NFSU2_TR(0x414ae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414ae8:{NFSU2_TR(0x414ae8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414af0:L414af0:{c.instructions+=14;NFSU2_TR(0x414af0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414af2:{NFSU2_TR(0x414af2);
u8 U[4];
w4(U+0,u32(0x7714bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414af7:{NFSU2_TR(0x414af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414afd:{NFSU2_TR(0x414afd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414afe:{NFSU2_TR(0x414afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414b05:{NFSU2_TR(0x414b05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B414b08:{NFSU2_TR(0x414b08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b09:{NFSU2_TR(0x414b09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b0a:{NFSU2_TR(0x414b0a);
__builtin_memmove((R+20),(R+4),4);
}
B414b0c:{NFSU2_TR(0x414b0c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B414b0f:{NFSU2_TR(0x414b0f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B414b11:{NFSU2_TR(0x414b11);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B414b13:{NFSU2_TR(0x414b13);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414b17:{NFSU2_TR(0x414b17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414bda;}}
}
B414b1d:L414b1d:{c.instructions+=5;NFSU2_TR(0x414b1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b1e:{NFSU2_TR(0x414b1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b1f:{NFSU2_TR(0x414b1f);
w4(R+28,u32(0x7e8e4cull));
}
B414b24:{NFSU2_TR(0x414b24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1e8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414b2a:{NFSU2_TR(0x414b2a);
__builtin_memmove((R+12),(R+12),4);
}
B414b30:L414b30:{c.instructions+=2;NFSU2_TR(0x414b30);
u8 U[4];
w4(U+0,u32(0x783fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b35:{NFSU2_TR(0x414b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414b3aull));
TAIL_STATIC(0x43db50u,43d);
}
B414b3a:L414b3a:{c.instructions+=4;NFSU2_TR(0x414b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414b3d:{NFSU2_TR(0x414b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414b3f:{NFSU2_TR(0x414b3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b40:{NFSU2_TR(0x414b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414b45ull));
TAIL_STATIC(0x43db50u,43d);
}
B414b45:L414b45:{c.instructions+=4;NFSU2_TR(0x414b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B414b47:{NFSU2_TR(0x414b47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B414b4a:{NFSU2_TR(0x414b4a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414b4c:{NFSU2_TR(0x414b4c);
if(r1(R+518)){{goto L414b57;}}
}
B414b4e:L414b4e:{c.instructions+=2;NFSU2_TR(0x414b4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B414b50:{NFSU2_TR(0x414b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B414b57:L414b57:{c.instructions+=4;NFSU2_TR(0x414b57);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B414b5a:{NFSU2_TR(0x414b5a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B414b5d:{NFSU2_TR(0x414b5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7e8e5cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7e8e5cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414b63:{NFSU2_TR(0x414b63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414b30u);}goto L414b30;}}
}
B414b65:L414b65:{c.instructions+=2;NFSU2_TR(0x414b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414b68:{NFSU2_TR(0x414b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B414b70:L414b70:{c.instructions+=2;NFSU2_TR(0x414b70);
w4(R+20,u32(0x28ull));
}
B414b75:{NFSU2_TR(0x414b75);
{goto L414b80;}
}
B414b80:L414b80:{c.instructions+=3;NFSU2_TR(0x414b80);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B414b86:{NFSU2_TR(0x414b86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b87:{NFSU2_TR(0x414b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414b8cull));
TAIL_STATIC(0x440e50u,440);
}
B414b8c:L414b8c:{c.instructions+=6;NFSU2_TR(0x414b8c);
__builtin_memmove((R+28),(R+0),4);
}
B414b8e:{NFSU2_TR(0x414b8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414b91:{NFSU2_TR(0x414b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414b95:{NFSU2_TR(0x414b95);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414b97:{NFSU2_TR(0x414b97);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414b9b:{NFSU2_TR(0x414b9b);
if(r1(R+518)){{goto L414bb6;}}
}
B414b9d:L414b9d:{c.instructions+=4;NFSU2_TR(0x414b9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b9e:{NFSU2_TR(0x414b9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414b9f:{NFSU2_TR(0x414b9f);
u8 U[4];
w4(U+0,u32(0x784e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414ba4:{NFSU2_TR(0x414ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414ba9ull));
TAIL_STATIC(0x43db50u,43d);
}
B414ba9:L414ba9:{c.instructions+=4;NFSU2_TR(0x414ba9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B414bac:{NFSU2_TR(0x414bac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414bad:{NFSU2_TR(0x414bad);
__builtin_memmove((R+4),(R+28),4);
}
B414baf:{NFSU2_TR(0x414baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414bb4ull));
TAIL_STATIC(0x637db0u,637);
}
B414bb4:L414bb4:{c.instructions+=1;NFSU2_TR(0x414bb4);
{goto L414bb8;}
}
B414bb6:L414bb6:{c.instructions+=1;NFSU2_TR(0x414bb6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B414bb8:L414bb8:{c.instructions+=6;NFSU2_TR(0x414bb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B414bba:{NFSU2_TR(0x414bba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B414bbd:{NFSU2_TR(0x414bbd);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B414bbe:{NFSU2_TR(0x414bbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B414bc6:{NFSU2_TR(0x414bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414bc9:{NFSU2_TR(0x414bc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414b80u);}goto L414b80;}}
}
B414bcb:L414bcb:{c.instructions+=2;NFSU2_TR(0x414bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414bcf:{NFSU2_TR(0x414bcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414b70u);}goto L414b70;}}
}
B414bd1:L414bd1:{c.instructions+=4;NFSU2_TR(0x414bd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414bd5:{NFSU2_TR(0x414bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414bd6:{NFSU2_TR(0x414bd6);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+8)),r1(U+0));
}
B414bd9:{NFSU2_TR(0x414bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414bda:L414bda:{c.instructions+=6;NFSU2_TR(0x414bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414bde:{NFSU2_TR(0x414bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414bdf:{NFSU2_TR(0x414bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414be0:{NFSU2_TR(0x414be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414be7:{NFSU2_TR(0x414be7);
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
B414bea:{NFSU2_TR(0x414bea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414bf0:L414bf0:{c.instructions+=13;NFSU2_TR(0x414bf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414bf1:{NFSU2_TR(0x414bf1);
__builtin_memmove((R+20),(R+16),4);
}
B414bf3:{NFSU2_TR(0x414bf3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B414bf6:{NFSU2_TR(0x414bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B414bf9:{NFSU2_TR(0x414bf9);
__builtin_memmove((R+0),gp(0x81cb80),4);
}
B414bfe:{NFSU2_TR(0x414bfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414bff:{NFSU2_TR(0x414bff);
__builtin_memmove((R+12),(R+4),4);
}
B414c01:{NFSU2_TR(0x414c01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c02:{NFSU2_TR(0x414c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B414c04:{NFSU2_TR(0x414c04);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B414c06:{NFSU2_TR(0x414c06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c07:{NFSU2_TR(0x414c07);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414c0b:{NFSU2_TR(0x414c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414c1c;}}
}
B414c0d:L414c0d:{c.instructions+=2;NFSU2_TR(0x414c0d);
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
B414c0f:{NFSU2_TR(0x414c0f);
if(r1(R+518)){{goto L414cd8;}}
}
B414c15:L414c15:{c.instructions+=1;NFSU2_TR(0x414c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414c1aull));
TAIL_STATIC(0x40f070u,40f);
}
B414c1a:L414c1a:{c.instructions+=1;NFSU2_TR(0x414c1a);
{goto L414c27;}
}
B414c1c:L414c1c:{c.instructions+=2;NFSU2_TR(0x414c1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414c1e:{NFSU2_TR(0x414c1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414c30;}}
}
B414c20:L414c20:{c.instructions+=2;NFSU2_TR(0x414c20);
__builtin_memmove((R+4),(R+12),4);
}
B414c22:{NFSU2_TR(0x414c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414c27ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414af0u);}goto L414af0;}
}
B414c27:L414c27:{c.instructions+=2;NFSU2_TR(0x414c27);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B414c2a:{NFSU2_TR(0x414c2a);
if(r1(R+518)){{goto L414cd8;}}
}
B414c30:L414c30:{c.instructions+=5;NFSU2_TR(0x414c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414c33:{NFSU2_TR(0x414c33);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B414c35:{NFSU2_TR(0x414c35);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B414c38:{NFSU2_TR(0x414c38);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414c3b:{NFSU2_TR(0x414c3b);
{goto L414c40;}
}
B414c40:L414c40:{c.instructions+=3;NFSU2_TR(0x414c40);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B414c47:{NFSU2_TR(0x414c47);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414c49:{NFSU2_TR(0x414c49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414cbf;}}
}
B414c4b:L414c4b:{c.instructions+=3;NFSU2_TR(0x414c4b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B414c4e:{NFSU2_TR(0x414c4e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414c50:{NFSU2_TR(0x414c50);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414cbf;}}
}
B414c52:L414c52:{c.instructions+=11;NFSU2_TR(0x414c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414c55:{NFSU2_TR(0x414c55);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414c58:{NFSU2_TR(0x414c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414c5a:{NFSU2_TR(0x414c5a);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c5f:{NFSU2_TR(0x414c5f);
__builtin_memmove((R+8),(R+4),4);
}
B414c61:{NFSU2_TR(0x414c61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c63:{NFSU2_TR(0x414c63);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414c67:{NFSU2_TR(0x414c67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c68:{NFSU2_TR(0x414c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414c6c:{NFSU2_TR(0x414c6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414c70:{NFSU2_TR(0x414c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414c75ull));
TAIL_STATIC(0x4010c0u,401);
}
B414c75:L414c75:{c.instructions+=3;NFSU2_TR(0x414c75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B414c78:{NFSU2_TR(0x414c78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B414c7a:{NFSU2_TR(0x414c7a);
if(r1(R+518)){{goto L414c8a;}}
}
B414c7c:L414c7c:{c.instructions+=4;NFSU2_TR(0x414c7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B414c80:{NFSU2_TR(0x414c80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c81:{NFSU2_TR(0x414c81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c82:{NFSU2_TR(0x414c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414c87ull));
TAIL_STATIC(0x403780u,403);
}
B414c87:L414c87:{c.instructions+=1;NFSU2_TR(0x414c87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B414c8a:L414c8a:{c.instructions+=8;NFSU2_TR(0x414c8a);
__builtin_memmove((R+4),gp(0x783788),4);
}
B414c90:{NFSU2_TR(0x414c90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c91:{NFSU2_TR(0x414c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414c95:{NFSU2_TR(0x414c95);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B414c99:{NFSU2_TR(0x414c99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c9a:{NFSU2_TR(0x414c9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c9b:{NFSU2_TR(0x414c9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414c9d:{NFSU2_TR(0x414c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414ca2ull));
TAIL_STATIC(0x40f0d0u,40f);
}
B414ca2:L414ca2:{c.instructions+=8;NFSU2_TR(0x414ca2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414ca6:{NFSU2_TR(0x414ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B414ca8:{NFSU2_TR(0x414ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414cab:{NFSU2_TR(0x414cab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414cad:{NFSU2_TR(0x414cad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414caf:{NFSU2_TR(0x414caf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1f4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1f4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414cb4:{NFSU2_TR(0x414cb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414cb5:{NFSU2_TR(0x414cb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414cbaull));
TAIL_STATIC(0x488e20u,488);
}
B414cba:L414cba:{c.instructions+=2;NFSU2_TR(0x414cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414cbd:{NFSU2_TR(0x414cbd);
{goto L414cc8;}
}
B414cbf:L414cbf:{c.instructions+=2;NFSU2_TR(0x414cbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414cc1:{NFSU2_TR(0x414cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B414cc8:L414cc8:{c.instructions+=5;NFSU2_TR(0x414cc8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B414cc9:{NFSU2_TR(0x414cc9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B414ccc:{NFSU2_TR(0x414ccc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B414ccf:{NFSU2_TR(0x414ccf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414cd2:{NFSU2_TR(0x414cd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414c40u);}goto L414c40;}}
}
B414cd8:L414cd8:{c.instructions+=6;NFSU2_TR(0x414cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B414cd9:{NFSU2_TR(0x414cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414cda:{NFSU2_TR(0x414cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414cdb:{NFSU2_TR(0x414cdb);
__builtin_memmove((R+16),(R+20),4);
}
B414cdd:{NFSU2_TR(0x414cdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B414cde:{NFSU2_TR(0x414cde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414cf0:L414cf0:{c.instructions+=6;NFSU2_TR(0x414cf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414cf1:{NFSU2_TR(0x414cf1);
__builtin_memmove((R+0),(R+4),4);
}
B414cf3:{NFSU2_TR(0x414cf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414cf4:{NFSU2_TR(0x414cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414cfa:{NFSU2_TR(0x414cfa);
w4(R+24,u32(0x4ull));
}
B414cff:{NFSU2_TR(0x414cff);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B414d01:L414d01:{c.instructions+=7;NFSU2_TR(0x414d01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B414d03:{NFSU2_TR(0x414d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414d06:{NFSU2_TR(0x414d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414d09:{NFSU2_TR(0x414d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414d0c:{NFSU2_TR(0x414d0c);
w1(R+512,carry<u32>(r4(R+8),u32(0x10ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B414d0f:{NFSU2_TR(0x414d0f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414d10:{NFSU2_TR(0x414d10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414d01u);}goto L414d01;}}
}
B414d12:L414d12:{c.instructions+=4;NFSU2_TR(0x414d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414d13:{NFSU2_TR(0x414d13);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B414d15:{NFSU2_TR(0x414d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414d16:{NFSU2_TR(0x414d16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B414d20:L414d20:{c.instructions+=18;NFSU2_TR(0x414d20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414d21:{NFSU2_TR(0x414d21);
__builtin_memmove((R+20),(R+16),4);
}
B414d23:{NFSU2_TR(0x414d23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B414d26:{NFSU2_TR(0x414d26);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414d28:{NFSU2_TR(0x414d28);
u8 U[4];
w4(U+0,u32(0x77131bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414d2d:{NFSU2_TR(0x414d2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414d33:{NFSU2_TR(0x414d33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414d34:{NFSU2_TR(0x414d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414d3b:{NFSU2_TR(0x414d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x388ull))));
}
B414d41:{NFSU2_TR(0x414d41);
__builtin_memmove((R+0),gp(0x7e8e5c),4);
}
B414d46:{NFSU2_TR(0x414d46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414d47:{NFSU2_TR(0x414d47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414d48:{NFSU2_TR(0x414d48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414d49:{NFSU2_TR(0x414d49);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B414d4b:{NFSU2_TR(0x414d4b);
__builtin_memmove((R+28),(R+4),4);
}
B414d4d:{NFSU2_TR(0x414d4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B414d4f:{NFSU2_TR(0x414d4f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B414d51:{NFSU2_TR(0x414d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414d5e;}}
}
B414d53:L414d53:{c.instructions+=2;NFSU2_TR(0x414d53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414d55:{NFSU2_TR(0x414d55);
if(r1(R+518)){{goto L414d69;}}
}
B414d57:L414d57:{c.instructions+=1;NFSU2_TR(0x414d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414d5cull));
TAIL_STATIC(0x40f070u,40f);
}
B414d5c:L414d5c:{c.instructions+=1;NFSU2_TR(0x414d5c);
{goto L414d69;}
}
B414d5e:L414d5e:{c.instructions+=2;NFSU2_TR(0x414d5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B414d60:{NFSU2_TR(0x414d60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414d69;}}
}
B414d62:L414d62:{c.instructions+=2;NFSU2_TR(0x414d62);
__builtin_memmove((R+4),(R+28),4);
}
B414d64:{NFSU2_TR(0x414d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414d69ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x414af0u);}goto L414af0;}
}
B414d69:L414d69:{c.instructions+=2;NFSU2_TR(0x414d69);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B414d6c:{NFSU2_TR(0x414d6c);
if(r1(R+518)){TAIL_STATIC(0x4150fcu,415);}
}
B414d72:L414d72:{c.instructions+=2;NFSU2_TR(0x414d72);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B414d76:{NFSU2_TR(0x414d76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414d7bull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B414d7b:L414d7b:{c.instructions+=9;NFSU2_TR(0x414d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414d7e:{NFSU2_TR(0x414d7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B414d80:{NFSU2_TR(0x414d80);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B414d83:{NFSU2_TR(0x414d83);
u8 U[8];
w4(U+0,u32(u32(u32(0x39cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414d8a:{NFSU2_TR(0x414d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414d8e:{NFSU2_TR(0x414d8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((R+24),(U+0),4);
}
B414d94:{NFSU2_TR(0x414d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414d98:{NFSU2_TR(0x414d98);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B414d9b:{NFSU2_TR(0x414d9b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414db9;}}
}
B414d9d:L414d9d:{c.instructions+=7;NFSU2_TR(0x414d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffec0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414da3:{NFSU2_TR(0x414da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414da6:{NFSU2_TR(0x414da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414dac:{NFSU2_TR(0x414dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414daf:{NFSU2_TR(0x414daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B414db1:{NFSU2_TR(0x414db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414db4:{NFSU2_TR(0x414db4);
TAIL_STATIC(0x4150ccu,415);
}
B414db9:L414db9:{c.instructions+=13;NFSU2_TR(0x414db9);
{u32 ea_=u32(u32(7878536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414dbf:{NFSU2_TR(0x414dbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B414dc6:{NFSU2_TR(0x414dc6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414dc8:{NFSU2_TR(0x414dc8);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B414dce:{NFSU2_TR(0x414dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414dd2:{NFSU2_TR(0x414dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B414dd4:{NFSU2_TR(0x414dd4);
__builtin_memmove((R+12),gp(0x783788),4);
}
B414dda:{NFSU2_TR(0x414dda);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414dde:{NFSU2_TR(0x414dde);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414de0:{NFSU2_TR(0x414de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414de4:{NFSU2_TR(0x414de4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414de8:{NFSU2_TR(0x414de8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414dea:{NFSU2_TR(0x414dea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L414e2b;}}
}
B414dec:L414dec:{c.instructions+=5;NFSU2_TR(0x414dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffec0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414df2:{NFSU2_TR(0x414df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414df5:{NFSU2_TR(0x414df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x204ull))));
__builtin_memmove((R+12),(U+0),4);
}
B414dfb:{NFSU2_TR(0x414dfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414dfc:{NFSU2_TR(0x414dfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414e01ull));
TAIL_STATIC(0x488e20u,488);
}
B414e01:L414e01:{c.instructions+=6;NFSU2_TR(0x414e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414e07:{NFSU2_TR(0x414e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414e0a:{NFSU2_TR(0x414e0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e0c:{NFSU2_TR(0x414e0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e0e:{NFSU2_TR(0x414e0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e0f:{NFSU2_TR(0x414e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414e14ull));
TAIL_STATIC(0x488e20u,488);
}
B414e14:L414e14:{c.instructions+=6;NFSU2_TR(0x414e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B414e16:{NFSU2_TR(0x414e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414e19:{NFSU2_TR(0x414e19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e1b:{NFSU2_TR(0x414e1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e1d:{NFSU2_TR(0x414e1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e1e:{NFSU2_TR(0x414e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414e23ull));
TAIL_STATIC(0x488e20u,488);
}
B414e23:L414e23:{c.instructions+=2;NFSU2_TR(0x414e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B414e26:{NFSU2_TR(0x414e26);
{goto L414f75;}
}
B414e2b:L414e2b:{c.instructions+=3;NFSU2_TR(0x414e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414e2e:{NFSU2_TR(0x414e2e);
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
B414e30:{NFSU2_TR(0x414e30);
if(r1(R+518)){{goto L414e4f;}}
}
B414e32:L414e32:{c.instructions+=5;NFSU2_TR(0x414e32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414e34:{NFSU2_TR(0x414e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414e37:{NFSU2_TR(0x414e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x204ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414e3d:{NFSU2_TR(0x414e3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e3e:{NFSU2_TR(0x414e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414e43ull));
TAIL_STATIC(0x488e20u,488);
}
B414e43:L414e43:{c.instructions+=4;NFSU2_TR(0x414e43);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414e47:{NFSU2_TR(0x414e47);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B414e49:{NFSU2_TR(0x414e49);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414e4d:{NFSU2_TR(0x414e4d);
{goto L414e78;}
}
B414e4f:L414e4f:{c.instructions+=9;NFSU2_TR(0x414e4f);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414e52:{NFSU2_TR(0x414e52);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414e58:{NFSU2_TR(0x414e58);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B414e5a:{NFSU2_TR(0x414e5a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414e60:{NFSU2_TR(0x414e60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414e62:{NFSU2_TR(0x414e62);
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
B414e65:{NFSU2_TR(0x414e65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414e67:{NFSU2_TR(0x414e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414e6a:{NFSU2_TR(0x414e6a);
if(r1(R+514)){{goto L414e72;}}
}
B414e6c:L414e6c:{c.instructions+=1;NFSU2_TR(0x414e6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414e72:L414e72:{c.instructions+=2;NFSU2_TR(0x414e72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414e73:{NFSU2_TR(0x414e73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414e78ull));
TAIL_STATIC(0x488e20u,488);
}
B414e78:L414e78:{c.instructions+=3;NFSU2_TR(0x414e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B414e7b:{NFSU2_TR(0x414e7b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B414e7d:{NFSU2_TR(0x414e7d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414e91;}}
}
B414e7f:L414e7f:{c.instructions+=2;NFSU2_TR(0x414e7f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B414e82:{NFSU2_TR(0x414e82);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414e91;}}
}
B414e84:L414e84:{c.instructions+=4;NFSU2_TR(0x414e84);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414e88:{NFSU2_TR(0x414e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414e8b:{NFSU2_TR(0x414e8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414e8f:{NFSU2_TR(0x414e8f);
{goto L414eb1;}
}
B414e91:L414e91:{c.instructions+=2;NFSU2_TR(0x414e91);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414e94:{NFSU2_TR(0x414e94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414ea9;}}
}
B414e96:L414e96:{c.instructions+=2;NFSU2_TR(0x414e96);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414e99:{NFSU2_TR(0x414e99);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414ea9;}}
}
B414e9b:L414e9b:{c.instructions+=4;NFSU2_TR(0x414e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414e9f:{NFSU2_TR(0x414e9f);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414ea3:{NFSU2_TR(0x414ea3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414ea7:{NFSU2_TR(0x414ea7);
{goto L414eb1;}
}
B414ea9:L414ea9:{c.instructions+=1;NFSU2_TR(0x414ea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B414eb1:L414eb1:{c.instructions+=4;NFSU2_TR(0x414eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414eb5:{NFSU2_TR(0x414eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414eb7:{NFSU2_TR(0x414eb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414eb8:{NFSU2_TR(0x414eb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414ebbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B414ebb:L414ebb:{c.instructions+=8;NFSU2_TR(0x414ebb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B414ebf:{NFSU2_TR(0x414ebf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414ec1:{NFSU2_TR(0x414ec1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414ec3:{NFSU2_TR(0x414ec3);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B414ec5:{NFSU2_TR(0x414ec5);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414ecb:{NFSU2_TR(0x414ecb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414ecd:{NFSU2_TR(0x414ecd);
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
B414ed0:{NFSU2_TR(0x414ed0);
if(r1(R+514)){{goto L414ee3;}}
}
B414ed2:L414ed2:{c.instructions+=4;NFSU2_TR(0x414ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffec0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414ed8:{NFSU2_TR(0x414ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414edb:{NFSU2_TR(0x414edb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414ee1:{NFSU2_TR(0x414ee1);
{goto L414ef2;}
}
B414ee3:L414ee3:{c.instructions+=3;NFSU2_TR(0x414ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffec0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414ee9:{NFSU2_TR(0x414ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414eec:{NFSU2_TR(0x414eec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414ef2:L414ef2:{c.instructions+=2;NFSU2_TR(0x414ef2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414ef3:{NFSU2_TR(0x414ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414ef8ull));
TAIL_STATIC(0x488e20u,488);
}
B414ef8:L414ef8:{c.instructions+=2;NFSU2_TR(0x414ef8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B414efa:{NFSU2_TR(0x414efa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414f0e;}}
}
B414efc:L414efc:{c.instructions+=2;NFSU2_TR(0x414efc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B414eff:{NFSU2_TR(0x414eff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414f0e;}}
}
B414f01:L414f01:{c.instructions+=4;NFSU2_TR(0x414f01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414f05:{NFSU2_TR(0x414f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414f08:{NFSU2_TR(0x414f08);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414f0c:{NFSU2_TR(0x414f0c);
{goto L414f2e;}
}
B414f0e:L414f0e:{c.instructions+=2;NFSU2_TR(0x414f0e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414f11:{NFSU2_TR(0x414f11);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414f26;}}
}
B414f13:L414f13:{c.instructions+=2;NFSU2_TR(0x414f13);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B414f16:{NFSU2_TR(0x414f16);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414f26;}}
}
B414f18:L414f18:{c.instructions+=4;NFSU2_TR(0x414f18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414f1c:{NFSU2_TR(0x414f1c);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414f20:{NFSU2_TR(0x414f20);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414f24:{NFSU2_TR(0x414f24);
{goto L414f2e;}
}
B414f26:L414f26:{c.instructions+=1;NFSU2_TR(0x414f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B414f2e:L414f2e:{c.instructions+=4;NFSU2_TR(0x414f2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414f32:{NFSU2_TR(0x414f32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B414f34:{NFSU2_TR(0x414f34);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414f35:{NFSU2_TR(0x414f35);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414f38ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B414f38:L414f38:{c.instructions+=8;NFSU2_TR(0x414f38);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B414f3c:{NFSU2_TR(0x414f3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414f3e:{NFSU2_TR(0x414f3e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414f40:{NFSU2_TR(0x414f40);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B414f42:{NFSU2_TR(0x414f42);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B414f48:{NFSU2_TR(0x414f48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B414f4a:{NFSU2_TR(0x414f4a);
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
B414f4d:{NFSU2_TR(0x414f4d);
if(r1(R+514)){{goto L414f60;}}
}
B414f4f:L414f4f:{c.instructions+=4;NFSU2_TR(0x414f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414f55:{NFSU2_TR(0x414f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414f58:{NFSU2_TR(0x414f58);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414f5e:{NFSU2_TR(0x414f5e);
{goto L414f6f;}
}
B414f60:L414f60:{c.instructions+=3;NFSU2_TR(0x414f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414f66:{NFSU2_TR(0x414f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414f69:{NFSU2_TR(0x414f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+8),(U+0),4);
}
B414f6f:L414f6f:{c.instructions+=2;NFSU2_TR(0x414f6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414f70:{NFSU2_TR(0x414f70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414f75ull));
TAIL_STATIC(0x488e20u,488);
}
B414f75:L414f75:{c.instructions+=2;NFSU2_TR(0x414f75);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B414f77:{NFSU2_TR(0x414f77);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414f8b;}}
}
B414f79:L414f79:{c.instructions+=2;NFSU2_TR(0x414f79);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414f7c:{NFSU2_TR(0x414f7c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414f8b;}}
}
B414f7e:L414f7e:{c.instructions+=4;NFSU2_TR(0x414f7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414f82:{NFSU2_TR(0x414f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414f85:{NFSU2_TR(0x414f85);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414f89:{NFSU2_TR(0x414f89);
{goto L414fab;}
}
B414f8b:L414f8b:{c.instructions+=2;NFSU2_TR(0x414f8b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414f8e:{NFSU2_TR(0x414f8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414fa3;}}
}
B414f90:L414f90:{c.instructions+=2;NFSU2_TR(0x414f90);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414f93:{NFSU2_TR(0x414f93);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414fa3;}}
}
B414f95:L414f95:{c.instructions+=4;NFSU2_TR(0x414f95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414f99:{NFSU2_TR(0x414f99);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414f9d:{NFSU2_TR(0x414f9d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414fa1:{NFSU2_TR(0x414fa1);
{goto L414fab;}
}
B414fa3:L414fa3:{c.instructions+=1;NFSU2_TR(0x414fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B414fab:L414fab:{c.instructions+=10;NFSU2_TR(0x414fab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414faf:{NFSU2_TR(0x414faf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414fb3:{NFSU2_TR(0x414fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414fb6:{NFSU2_TR(0x414fb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414fb7:{NFSU2_TR(0x414fb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414fb8:{NFSU2_TR(0x414fb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414fb9:{NFSU2_TR(0x414fb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B414fbd:{NFSU2_TR(0x414fbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B414fbe:{NFSU2_TR(0x414fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414fc2:{NFSU2_TR(0x414fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x414fc7ull));
TAIL_STATIC(0x4122c0u,412);
}
B414fc7:L414fc7:{c.instructions+=2;NFSU2_TR(0x414fc7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B414fc9:{NFSU2_TR(0x414fc9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414fdd;}}
}
B414fcb:L414fcb:{c.instructions+=2;NFSU2_TR(0x414fcb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414fce:{NFSU2_TR(0x414fce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414fdd;}}
}
B414fd0:L414fd0:{c.instructions+=4;NFSU2_TR(0x414fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B414fd4:{NFSU2_TR(0x414fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B414fd7:{NFSU2_TR(0x414fd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B414fdb:{NFSU2_TR(0x414fdb);
{goto L414ffd;}
}
B414fdd:L414fdd:{c.instructions+=2;NFSU2_TR(0x414fdd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414fe0:{NFSU2_TR(0x414fe0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L414ff5;}}
}
B414fe2:L414fe2:{c.instructions+=2;NFSU2_TR(0x414fe2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B414fe5:{NFSU2_TR(0x414fe5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L414ff5;}}
}
B414fe7:L414fe7:{c.instructions+=4;NFSU2_TR(0x414fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B414feb:{NFSU2_TR(0x414feb);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B414fef:{NFSU2_TR(0x414fef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B414ff3:{NFSU2_TR(0x414ff3);
{goto L414ffd;}
}
B414ff5:L414ff5:{c.instructions+=1;NFSU2_TR(0x414ff5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B414ffd:L414ffd:{c.instructions+=1;NFSU2_TR(0x414ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x415001u,415);
}
XIT:NFSU2_TR_EXIT(0x414,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
