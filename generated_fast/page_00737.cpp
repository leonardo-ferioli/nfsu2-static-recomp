#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_738(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x737,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x737,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_737(u8* __restrict R,Cpu& c);
u32 page_737(Cpu& c){return body_737(c.regs.data(),c);}
__attribute__((noinline)) u32 body_737(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x737000:goto L737000;
case 0x737002:goto L737002;
case 0x737006:c.instructions+=8;goto B737006;
case 0x73700a:c.instructions+=7;goto B73700a;
case 0x73700b:c.instructions+=6;goto B73700b;
case 0x73700e:c.instructions+=5;goto B73700e;
case 0x737010:c.instructions+=4;goto B737010;
case 0x737015:c.instructions+=3;goto B737015;
case 0x737019:c.instructions+=2;goto B737019;
case 0x73701d:c.instructions+=1;goto B73701d;
case 0x737023:goto L737023;
case 0x737024:c.instructions+=6;goto B737024;
case 0x737025:c.instructions+=5;goto B737025;
case 0x737026:c.instructions+=4;goto B737026;
case 0x737028:c.instructions+=3;goto B737028;
case 0x737029:c.instructions+=2;goto B737029;
case 0x73702c:c.instructions+=1;goto B73702c;
case 0x737030:goto L737030;
case 0x737033:c.instructions+=13;goto B737033;
case 0x737037:c.instructions+=12;goto B737037;
case 0x73703a:c.instructions+=11;goto B73703a;
case 0x73703b:c.instructions+=10;goto B73703b;
case 0x73703e:c.instructions+=9;goto B73703e;
case 0x73703f:c.instructions+=8;goto B73703f;
case 0x737043:c.instructions+=7;goto B737043;
case 0x737045:c.instructions+=6;goto B737045;
case 0x737048:c.instructions+=5;goto B737048;
case 0x73704c:c.instructions+=4;goto B73704c;
case 0x737050:c.instructions+=3;goto B737050;
case 0x737052:c.instructions+=2;goto B737052;
case 0x737056:c.instructions+=1;goto B737056;
case 0x737058:goto L737058;
case 0x737059:c.instructions+=1;goto B737059;
case 0x73705b:goto L73705b;
case 0x73705c:c.instructions+=1;goto B73705c;
case 0x73705e:goto L73705e;
case 0x737062:c.instructions+=3;goto B737062;
case 0x737063:c.instructions+=2;goto B737063;
case 0x737064:c.instructions+=1;goto B737064;
case 0x737069:goto L737069;
case 0x73706c:c.instructions+=5;goto B73706c;
case 0x73706f:c.instructions+=4;goto B73706f;
case 0x737070:c.instructions+=3;goto B737070;
case 0x737071:c.instructions+=2;goto B737071;
case 0x737075:c.instructions+=1;goto B737075;
case 0x73707a:goto L73707a;
case 0x73707d:c.instructions+=2;goto B73707d;
case 0x73707f:c.instructions+=1;goto B73707f;
case 0x737081:goto L737081;
case 0x737085:c.instructions+=2;goto B737085;
case 0x737089:c.instructions+=1;goto B737089;
case 0x73708d:goto L73708d;
case 0x737092:c.instructions+=3;goto B737092;
case 0x737096:c.instructions+=2;goto B737096;
case 0x737098:c.instructions+=1;goto B737098;
case 0x73709a:goto L73709a;
case 0x73709e:c.instructions+=5;goto B73709e;
case 0x7370a2:c.instructions+=4;goto B7370a2;
case 0x7370a3:c.instructions+=3;goto B7370a3;
case 0x7370a4:c.instructions+=2;goto B7370a4;
case 0x7370a5:c.instructions+=1;goto B7370a5;
case 0x7370aa:goto L7370aa;
case 0x7370ae:c.instructions+=3;goto B7370ae;
case 0x7370b2:c.instructions+=2;goto B7370b2;
case 0x7370b5:c.instructions+=1;goto B7370b5;
case 0x7370b7:goto L7370b7;
case 0x7370bb:c.instructions+=3;goto B7370bb;
case 0x7370bc:c.instructions+=2;goto B7370bc;
case 0x7370bd:c.instructions+=1;goto B7370bd;
case 0x7370c2:goto L7370c2;
case 0x7370c6:c.instructions+=2;goto B7370c6;
case 0x7370cb:c.instructions+=1;goto B7370cb;
case 0x7370ce:goto L7370ce;
case 0x7370d0:goto L7370d0;
case 0x7370d3:c.instructions+=1;goto B7370d3;
case 0x7370d5:goto L7370d5;
case 0x7370d6:c.instructions+=4;goto B7370d6;
case 0x7370d8:c.instructions+=3;goto B7370d8;
case 0x7370d9:c.instructions+=2;goto B7370d9;
case 0x7370dc:c.instructions+=1;goto B7370dc;
case 0x7370dd:goto L7370dd;
case 0x7370de:c.instructions+=4;goto B7370de;
case 0x7370e3:c.instructions+=3;goto B7370e3;
case 0x7370e4:c.instructions+=2;goto B7370e4;
case 0x7370e7:c.instructions+=1;goto B7370e7;
case 0x7370f0:goto L7370f0;
case 0x7370f4:c.instructions+=5;goto B7370f4;
case 0x7370f5:c.instructions+=4;goto B7370f5;
case 0x7370f7:c.instructions+=3;goto B7370f7;
case 0x7370fb:c.instructions+=2;goto B7370fb;
case 0x7370fd:c.instructions+=1;goto B7370fd;
case 0x7370ff:goto L7370ff;
case 0x737101:c.instructions+=2;goto B737101;
case 0x737102:c.instructions+=1;goto B737102;
case 0x737103:goto L737103;
case 0x737107:c.instructions+=4;goto B737107;
case 0x73710a:c.instructions+=3;goto B73710a;
case 0x73710b:c.instructions+=2;goto B73710b;
case 0x73710d:c.instructions+=1;goto B73710d;
case 0x737112:goto L737112;
case 0x737114:c.instructions+=10;goto B737114;
case 0x737116:c.instructions+=9;goto B737116;
case 0x737117:c.instructions+=8;goto B737117;
case 0x73711a:c.instructions+=7;goto B73711a;
case 0x73711c:c.instructions+=6;goto B73711c;
case 0x73711f:c.instructions+=5;goto B73711f;
case 0x737123:c.instructions+=4;goto B737123;
case 0x737125:c.instructions+=3;goto B737125;
case 0x737128:c.instructions+=2;goto B737128;
case 0x73712e:c.instructions+=1;goto B73712e;
case 0x737130:goto L737130;
case 0x737131:c.instructions+=2;goto B737131;
case 0x737134:c.instructions+=1;goto B737134;
case 0x737135:goto L737135;
case 0x737137:c.instructions+=5;goto B737137;
case 0x737139:c.instructions+=4;goto B737139;
case 0x73713a:c.instructions+=3;goto B73713a;
case 0x73713d:c.instructions+=2;goto B73713d;
case 0x73713f:c.instructions+=1;goto B73713f;
case 0x737140:goto L737140;
case 0x737141:c.instructions+=4;goto B737141;
case 0x737145:c.instructions+=3;goto B737145;
case 0x737147:c.instructions+=2;goto B737147;
case 0x73714c:c.instructions+=1;goto B73714c;
case 0x73714e:goto L73714e;
case 0x737150:c.instructions+=2;goto B737150;
case 0x737151:c.instructions+=1;goto B737151;
case 0x737152:goto L737152;
case 0x737157:c.instructions+=1;goto B737157;
case 0x737159:goto L737159;
case 0x73715b:c.instructions+=2;goto B73715b;
case 0x73715d:c.instructions+=1;goto B73715d;
case 0x737162:goto L737162;
case 0x737164:c.instructions+=1;goto B737164;
case 0x737166:goto L737166;
case 0x737169:c.instructions+=2;goto B737169;
case 0x73716b:c.instructions+=1;goto B73716b;
case 0x73716d:goto L73716d;
case 0x73716f:c.instructions+=18;goto B73716f;
case 0x737172:c.instructions+=17;goto B737172;
case 0x737173:c.instructions+=16;goto B737173;
case 0x737175:c.instructions+=15;goto B737175;
case 0x737176:c.instructions+=14;goto B737176;
case 0x737179:c.instructions+=13;goto B737179;
case 0x73717b:c.instructions+=12;goto B73717b;
case 0x73717e:c.instructions+=11;goto B73717e;
case 0x737181:c.instructions+=10;goto B737181;
case 0x737184:c.instructions+=9;goto B737184;
case 0x737187:c.instructions+=8;goto B737187;
case 0x73718a:c.instructions+=7;goto B73718a;
case 0x73718c:c.instructions+=6;goto B73718c;
case 0x737190:c.instructions+=5;goto B737190;
case 0x737193:c.instructions+=4;goto B737193;
case 0x737198:c.instructions+=3;goto B737198;
case 0x73719a:c.instructions+=2;goto B73719a;
case 0x7371a0:c.instructions+=1;goto B7371a0;
case 0x7371a2:goto L7371a2;
case 0x7371a3:c.instructions+=2;goto B7371a3;
case 0x7371a6:c.instructions+=1;goto B7371a6;
case 0x7371a7:goto L7371a7;
case 0x7371a9:c.instructions+=4;goto B7371a9;
case 0x7371ab:c.instructions+=3;goto B7371ab;
case 0x7371ac:c.instructions+=2;goto B7371ac;
case 0x7371af:c.instructions+=1;goto B7371af;
case 0x7371b1:goto L7371b1;
case 0x7371b2:c.instructions+=1;goto B7371b2;
case 0x7371c0:goto L7371c0;
case 0x7371c2:c.instructions+=17;goto B7371c2;
case 0x7371c5:c.instructions+=16;goto B7371c5;
case 0x7371c6:c.instructions+=15;goto B7371c6;
case 0x7371ca:c.instructions+=14;goto B7371ca;
case 0x7371cb:c.instructions+=13;goto B7371cb;
case 0x7371cc:c.instructions+=12;goto B7371cc;
case 0x7371d1:c.instructions+=11;goto B7371d1;
case 0x7371d3:c.instructions+=10;goto B7371d3;
case 0x7371d7:c.instructions+=9;goto B7371d7;
case 0x7371da:c.instructions+=8;goto B7371da;
case 0x7371dd:c.instructions+=7;goto B7371dd;
case 0x7371e0:c.instructions+=6;goto B7371e0;
case 0x7371e3:c.instructions+=5;goto B7371e3;
case 0x7371e6:c.instructions+=4;goto B7371e6;
case 0x7371e8:c.instructions+=3;goto B7371e8;
case 0x7371ea:c.instructions+=2;goto B7371ea;
case 0x7371ec:c.instructions+=1;goto B7371ec;
case 0x7371ee:goto L7371ee;
case 0x7371ef:c.instructions+=2;goto B7371ef;
case 0x7371f3:c.instructions+=1;goto B7371f3;
case 0x7371f6:goto L7371f6;
case 0x7371f9:c.instructions+=2;goto B7371f9;
case 0x7371fb:c.instructions+=1;goto B7371fb;
case 0x7371fd:goto L7371fd;
case 0x737203:c.instructions+=1;goto B737203;
case 0x737205:goto L737205;
case 0x73720b:c.instructions+=1;goto B73720b;
case 0x73720d:goto L73720d;
case 0x737210:c.instructions+=2;goto B737210;
case 0x737214:c.instructions+=1;goto B737214;
case 0x737216:goto L737216;
case 0x737217:c.instructions+=3;goto B737217;
case 0x73721a:c.instructions+=2;goto B73721a;
case 0x73721c:c.instructions+=1;goto B73721c;
case 0x73721e:goto L73721e;
case 0x73721f:c.instructions+=5;goto B73721f;
case 0x737220:c.instructions+=4;goto B737220;
case 0x737221:c.instructions+=3;goto B737221;
case 0x737226:c.instructions+=2;goto B737226;
case 0x737227:c.instructions+=1;goto B737227;
case 0x737228:goto L737228;
case 0x73722a:c.instructions+=1;goto B73722a;
case 0x73722b:goto L73722b;
case 0x73722c:c.instructions+=3;goto B73722c;
case 0x73722d:c.instructions+=2;goto B73722d;
case 0x73722e:c.instructions+=1;goto B73722e;
case 0x737230:goto L737230;
case 0x737233:c.instructions+=13;goto B737233;
case 0x737234:c.instructions+=12;goto B737234;
case 0x737235:c.instructions+=11;goto B737235;
case 0x737236:c.instructions+=10;goto B737236;
case 0x73723a:c.instructions+=9;goto B73723a;
case 0x73723e:c.instructions+=8;goto B73723e;
case 0x737240:c.instructions+=7;goto B737240;
case 0x737242:c.instructions+=6;goto B737242;
case 0x737244:c.instructions+=5;goto B737244;
case 0x737248:c.instructions+=4;goto B737248;
case 0x73724c:c.instructions+=3;goto B73724c;
case 0x737254:c.instructions+=2;goto B737254;
case 0x737258:c.instructions+=1;goto B737258;
case 0x73725a:goto L73725a;
case 0x73725d:c.instructions+=1;goto B73725d;
case 0x737260:goto L737260;
case 0x737263:c.instructions+=1;goto B737263;
case 0x737265:goto L737265;
case 0x737266:c.instructions+=3;goto B737266;
case 0x737269:c.instructions+=2;goto B737269;
case 0x73726b:c.instructions+=1;goto B73726b;
case 0x73726d:goto L73726d;
case 0x73726f:goto L73726f;
case 0x737277:goto L737277;
case 0x73727b:c.instructions+=10;goto B73727b;
case 0x73727f:c.instructions+=9;goto B73727f;
case 0x737285:c.instructions+=8;goto B737285;
case 0x737289:c.instructions+=7;goto B737289;
case 0x73728d:c.instructions+=6;goto B73728d;
case 0x737291:c.instructions+=5;goto B737291;
case 0x737292:c.instructions+=4;goto B737292;
case 0x737293:c.instructions+=3;goto B737293;
case 0x737295:c.instructions+=2;goto B737295;
case 0x737299:c.instructions+=1;goto B737299;
case 0x73729e:goto L73729e;
case 0x7372a1:c.instructions+=2;goto B7372a1;
case 0x7372a3:c.instructions+=1;goto B7372a3;
case 0x7372a9:goto L7372a9;
case 0x7372ad:c.instructions+=9;goto B7372ad;
case 0x7372af:c.instructions+=8;goto B7372af;
case 0x7372b2:c.instructions+=7;goto B7372b2;
case 0x7372b3:c.instructions+=6;goto B7372b3;
case 0x7372b6:c.instructions+=5;goto B7372b6;
case 0x7372b9:c.instructions+=4;goto B7372b9;
case 0x7372bc:c.instructions+=3;goto B7372bc;
case 0x7372be:c.instructions+=2;goto B7372be;
case 0x7372c2:c.instructions+=1;goto B7372c2;
case 0x7372c4:goto L7372c4;
case 0x7372c8:goto L7372c8;
case 0x7372c9:c.instructions+=5;goto B7372c9;
case 0x7372ca:c.instructions+=4;goto B7372ca;
case 0x7372cb:c.instructions+=3;goto B7372cb;
case 0x7372cc:c.instructions+=2;goto B7372cc;
case 0x7372cf:c.instructions+=1;goto B7372cf;
case 0x7372d0:goto L7372d0;
case 0x7372d4:goto L7372d4;
case 0x7372d8:c.instructions+=6;goto B7372d8;
case 0x7372dc:c.instructions+=5;goto B7372dc;
case 0x7372dd:c.instructions+=4;goto B7372dd;
case 0x7372de:c.instructions+=3;goto B7372de;
case 0x7372df:c.instructions+=2;goto B7372df;
case 0x7372e1:c.instructions+=1;goto B7372e1;
case 0x7372e6:goto L7372e6;
case 0x7372e9:c.instructions+=2;goto B7372e9;
case 0x7372eb:c.instructions+=1;goto B7372eb;
case 0x7372ed:goto L7372ed;
case 0x7372f1:c.instructions+=2;goto B7372f1;
case 0x7372f3:c.instructions+=1;goto B7372f3;
case 0x7372f8:goto L7372f8;
case 0x7372fa:c.instructions+=1;goto B7372fa;
case 0x7372fc:goto L7372fc;
case 0x7372fd:c.instructions+=2;goto B7372fd;
case 0x7372fe:c.instructions+=1;goto B7372fe;
case 0x737303:goto L737303;
case 0x737306:c.instructions+=2;goto B737306;
case 0x737308:c.instructions+=1;goto B737308;
case 0x73730a:goto L73730a;
case 0x73730e:c.instructions+=1;goto B73730e;
case 0x737310:goto L737310;
case 0x737314:c.instructions+=2;goto B737314;
case 0x737318:c.instructions+=1;goto B737318;
case 0x73731a:goto L73731a;
case 0x73731e:c.instructions+=3;goto B73731e;
case 0x737324:c.instructions+=2;goto B737324;
case 0x737326:c.instructions+=1;goto B737326;
case 0x737328:goto L737328;
case 0x73732b:c.instructions+=7;goto B73732b;
case 0x73732f:c.instructions+=6;goto B73732f;
case 0x737336:c.instructions+=5;goto B737336;
case 0x73733c:c.instructions+=4;goto B73733c;
case 0x73733e:c.instructions+=3;goto B73733e;
case 0x73733f:c.instructions+=2;goto B73733f;
case 0x737345:c.instructions+=1;goto B737345;
case 0x737349:goto L737349;
case 0x73734d:c.instructions+=2;goto B73734d;
case 0x73734f:c.instructions+=1;goto B73734f;
case 0x737351:goto L737351;
case 0x737355:c.instructions+=3;goto B737355;
case 0x737359:c.instructions+=2;goto B737359;
case 0x73735a:c.instructions+=1;goto B73735a;
case 0x73735f:goto L73735f;
case 0x737362:goto L737362;
case 0x737366:c.instructions+=5;goto B737366;
case 0x73736a:c.instructions+=4;goto B73736a;
case 0x73736c:c.instructions+=3;goto B73736c;
case 0x73736d:c.instructions+=2;goto B73736d;
case 0x73736f:c.instructions+=1;goto B73736f;
case 0x737375:goto L737375;
case 0x737379:c.instructions+=2;goto B737379;
case 0x73737b:c.instructions+=1;goto B73737b;
case 0x737381:goto L737381;
case 0x737385:c.instructions+=2;goto B737385;
case 0x737388:c.instructions+=1;goto B737388;
case 0x73738e:goto L73738e;
case 0x737392:c.instructions+=3;goto B737392;
case 0x737398:c.instructions+=2;goto B737398;
case 0x73739a:c.instructions+=1;goto B73739a;
case 0x73739c:goto L73739c;
case 0x73739f:c.instructions+=3;goto B73739f;
case 0x7373a6:c.instructions+=2;goto B7373a6;
case 0x7373ac:c.instructions+=1;goto B7373ac;
case 0x7373b4:goto L7373b4;
case 0x7373b8:c.instructions+=2;goto B7373b8;
case 0x7373ba:c.instructions+=1;goto B7373ba;
case 0x7373c0:goto L7373c0;
case 0x7373c4:c.instructions+=5;goto B7373c4;
case 0x7373c7:c.instructions+=4;goto B7373c7;
case 0x7373cb:c.instructions+=3;goto B7373cb;
case 0x7373cc:c.instructions+=2;goto B7373cc;
case 0x7373d0:c.instructions+=1;goto B7373d0;
case 0x7373d5:goto L7373d5;
case 0x7373d9:c.instructions+=7;goto B7373d9;
case 0x7373dc:c.instructions+=6;goto B7373dc;
case 0x7373dd:c.instructions+=5;goto B7373dd;
case 0x7373de:c.instructions+=4;goto B7373de;
case 0x7373df:c.instructions+=3;goto B7373df;
case 0x7373e0:c.instructions+=2;goto B7373e0;
case 0x7373e3:c.instructions+=1;goto B7373e3;
case 0x7373e4:goto L7373e4;
case 0x7373e5:c.instructions+=5;goto B7373e5;
case 0x7373e6:c.instructions+=4;goto B7373e6;
case 0x7373e8:c.instructions+=3;goto B7373e8;
case 0x7373e9:c.instructions+=2;goto B7373e9;
case 0x7373ec:c.instructions+=1;goto B7373ec;
case 0x7373f0:goto L7373f0;
case 0x7373f4:c.instructions+=6;goto B7373f4;
case 0x7373f7:c.instructions+=5;goto B7373f7;
case 0x7373f8:c.instructions+=4;goto B7373f8;
case 0x7373fb:c.instructions+=3;goto B7373fb;
case 0x7373fd:c.instructions+=2;goto B7373fd;
case 0x7373ff:c.instructions+=1;goto B7373ff;
case 0x737401:goto L737401;
case 0x737402:c.instructions+=4;goto B737402;
case 0x737403:c.instructions+=3;goto B737403;
case 0x737406:c.instructions+=2;goto B737406;
case 0x737408:c.instructions+=1;goto B737408;
case 0x737410:goto L737410;
case 0x737414:c.instructions+=11;goto B737414;
case 0x73741c:c.instructions+=10;goto B73741c;
case 0x73741f:c.instructions+=9;goto B73741f;
case 0x737425:c.instructions+=8;goto B737425;
case 0x737429:c.instructions+=7;goto B737429;
case 0x73742d:c.instructions+=6;goto B73742d;
case 0x73742e:c.instructions+=5;goto B73742e;
case 0x737432:c.instructions+=4;goto B737432;
case 0x737433:c.instructions+=3;goto B737433;
case 0x737434:c.instructions+=2;goto B737434;
case 0x737435:c.instructions+=1;goto B737435;
case 0x73743a:goto L73743a;
case 0x73743d:c.instructions+=2;goto B73743d;
case 0x73743f:c.instructions+=1;goto B73743f;
case 0x737441:goto L737441;
case 0x737445:goto L737445;
case 0x737448:c.instructions+=2;goto B737448;
case 0x737449:c.instructions+=1;goto B737449;
case 0x73744b:goto L73744b;
case 0x73744c:c.instructions+=1;goto B73744c;
case 0x73744d:goto L73744d;
case 0x737453:c.instructions+=3;goto B737453;
case 0x737455:c.instructions+=2;goto B737455;
case 0x737457:c.instructions+=1;goto B737457;
case 0x737459:goto L737459;
case 0x73745b:c.instructions+=3;goto B73745b;
case 0x73745e:c.instructions+=2;goto B73745e;
case 0x73745f:c.instructions+=1;goto B73745f;
case 0x737461:goto L737461;
case 0x737462:c.instructions+=2;goto B737462;
case 0x737465:c.instructions+=1;goto B737465;
case 0x737466:goto L737466;
case 0x737469:goto L737469;
case 0x73746c:goto L73746c;
case 0x73746e:goto L73746e;
case 0x737470:goto L737470;
case 0x737476:c.instructions+=10;goto B737476;
case 0x737477:c.instructions+=9;goto B737477;
case 0x737478:c.instructions+=8;goto B737478;
case 0x73747f:c.instructions+=7;goto B73747f;
case 0x737480:c.instructions+=6;goto B737480;
case 0x737481:c.instructions+=5;goto B737481;
case 0x737485:c.instructions+=4;goto B737485;
case 0x737487:c.instructions+=3;goto B737487;
case 0x737489:c.instructions+=2;goto B737489;
case 0x73748b:c.instructions+=1;goto B73748b;
case 0x73748d:goto L73748d;
case 0x737490:goto L737490;
case 0x737493:c.instructions+=19;goto B737493;
case 0x737497:c.instructions+=18;goto B737497;
case 0x73749b:c.instructions+=17;goto B73749b;
case 0x73749e:c.instructions+=16;goto B73749e;
case 0x7374a0:c.instructions+=15;goto B7374a0;
case 0x7374a3:c.instructions+=14;goto B7374a3;
case 0x7374a6:c.instructions+=13;goto B7374a6;
case 0x7374ae:c.instructions+=12;goto B7374ae;
case 0x7374b5:c.instructions+=11;goto B7374b5;
case 0x7374b9:c.instructions+=10;goto B7374b9;
case 0x7374bc:c.instructions+=9;goto B7374bc;
case 0x7374be:c.instructions+=8;goto B7374be;
case 0x7374c1:c.instructions+=7;goto B7374c1;
case 0x7374c4:c.instructions+=6;goto B7374c4;
case 0x7374cc:c.instructions+=5;goto B7374cc;
case 0x7374ce:c.instructions+=4;goto B7374ce;
case 0x7374cf:c.instructions+=3;goto B7374cf;
case 0x7374d2:c.instructions+=2;goto B7374d2;
case 0x7374d4:c.instructions+=1;goto B7374d4;
case 0x7374d6:goto L7374d6;
case 0x7374d8:c.instructions+=2;goto B7374d8;
case 0x7374da:c.instructions+=1;goto B7374da;
case 0x7374dc:goto L7374dc;
case 0x7374e0:goto L7374e0;
case 0x7374e2:c.instructions+=2;goto B7374e2;
case 0x7374e3:c.instructions+=1;goto B7374e3;
case 0x7374e8:goto L7374e8;
case 0x7374eb:c.instructions+=4;goto B7374eb;
case 0x7374ee:c.instructions+=3;goto B7374ee;
case 0x7374f0:c.instructions+=2;goto B7374f0;
case 0x7374f2:c.instructions+=1;goto B7374f2;
case 0x7374f4:goto L7374f4;
case 0x7374f8:c.instructions+=1;goto B7374f8;
case 0x7374fa:goto L7374fa;
case 0x7374fb:c.instructions+=2;goto B7374fb;
case 0x7374fd:c.instructions+=1;goto B7374fd;
case 0x7374ff:goto L7374ff;
case 0x737506:c.instructions+=8;goto B737506;
case 0x737509:c.instructions+=7;goto B737509;
case 0x73750d:c.instructions+=6;goto B73750d;
case 0x737511:c.instructions+=5;goto B737511;
case 0x737513:c.instructions+=4;goto B737513;
case 0x737514:c.instructions+=3;goto B737514;
case 0x737516:c.instructions+=2;goto B737516;
case 0x73751c:c.instructions+=1;goto B73751c;
case 0x73751e:goto L73751e;
case 0x737520:c.instructions+=2;goto B737520;
case 0x737522:c.instructions+=1;goto B737522;
case 0x737524:goto L737524;
case 0x73752b:c.instructions+=2;goto B73752b;
case 0x73752e:c.instructions+=1;goto B73752e;
case 0x737531:goto L737531;
case 0x737534:c.instructions+=7;goto B737534;
case 0x737539:c.instructions+=6;goto B737539;
case 0x73753b:c.instructions+=5;goto B73753b;
case 0x73753e:c.instructions+=4;goto B73753e;
case 0x737541:c.instructions+=3;goto B737541;
case 0x737549:c.instructions+=2;goto B737549;
case 0x73754b:c.instructions+=1;goto B73754b;
case 0x73754d:goto L73754d;
case 0x73754f:c.instructions+=1;goto B73754f;
case 0x737550:goto L737550;
case 0x737551:c.instructions+=3;goto B737551;
case 0x737554:c.instructions+=2;goto B737554;
case 0x737556:c.instructions+=1;goto B737556;
case 0x737558:goto L737558;
case 0x737559:c.instructions+=5;goto B737559;
case 0x73755a:c.instructions+=4;goto B73755a;
case 0x73755b:c.instructions+=3;goto B73755b;
case 0x73755c:c.instructions+=2;goto B73755c;
case 0x737562:c.instructions+=1;goto B737562;
case 0x73756d:goto L73756d;
case 0x737570:goto L737570;
case 0x737574:c.instructions+=14;goto B737574;
case 0x737578:c.instructions+=13;goto B737578;
case 0x73757b:c.instructions+=12;goto B73757b;
case 0x73757e:c.instructions+=11;goto B73757e;
case 0x737581:c.instructions+=10;goto B737581;
case 0x737588:c.instructions+=9;goto B737588;
case 0x73758a:c.instructions+=8;goto B73758a;
case 0x73758d:c.instructions+=7;goto B73758d;
case 0x73758e:c.instructions+=6;goto B73758e;
case 0x737591:c.instructions+=5;goto B737591;
case 0x737595:c.instructions+=4;goto B737595;
case 0x737597:c.instructions+=3;goto B737597;
case 0x737599:c.instructions+=2;goto B737599;
case 0x73759a:c.instructions+=1;goto B73759a;
case 0x73759c:goto L73759c;
case 0x73759d:c.instructions+=1;goto B73759d;
case 0x7375a0:goto L7375a0;
case 0x7375a7:c.instructions+=4;goto B7375a7;
case 0x7375ab:c.instructions+=3;goto B7375ab;
case 0x7375ac:c.instructions+=2;goto B7375ac;
case 0x7375ae:c.instructions+=1;goto B7375ae;
case 0x7375b0:goto L7375b0;
case 0x7375b1:goto L7375b1;
case 0x7375c0:goto L7375c0;
case 0x7375c1:c.instructions+=6;goto B7375c1;
case 0x7375c2:c.instructions+=5;goto B7375c2;
case 0x7375c6:c.instructions+=4;goto B7375c6;
case 0x7375c8:c.instructions+=3;goto B7375c8;
case 0x7375ca:c.instructions+=2;goto B7375ca;
case 0x7375cf:c.instructions+=1;goto B7375cf;
case 0x7375d1:goto L7375d1;
case 0x7375d2:c.instructions+=1;goto B7375d2;
case 0x7375d5:goto L7375d5;
case 0x7375d9:c.instructions+=1;goto B7375d9;
case 0x7375db:goto L7375db;
case 0x7375de:c.instructions+=2;goto B7375de;
case 0x7375e4:c.instructions+=1;goto B7375e4;
case 0x7375e6:goto L7375e6;
case 0x7375e8:c.instructions+=1;goto B7375e8;
case 0x7375ea:goto L7375ea;
case 0x7375ee:c.instructions+=10;goto B7375ee;
case 0x7375f2:c.instructions+=9;goto B7375f2;
case 0x7375f5:c.instructions+=8;goto B7375f5;
case 0x7375f8:c.instructions+=7;goto B7375f8;
case 0x7375fb:c.instructions+=6;goto B7375fb;
case 0x737602:c.instructions+=5;goto B737602;
case 0x737605:c.instructions+=4;goto B737605;
case 0x737607:c.instructions+=3;goto B737607;
case 0x73760b:c.instructions+=2;goto B73760b;
case 0x73760d:c.instructions+=1;goto B73760d;
case 0x73760f:goto L73760f;
case 0x737612:c.instructions+=2;goto B737612;
case 0x737616:c.instructions+=1;goto B737616;
case 0x737618:goto L737618;
case 0x737619:c.instructions+=3;goto B737619;
case 0x73761c:c.instructions+=2;goto B73761c;
case 0x73761e:c.instructions+=1;goto B73761e;
case 0x737620:goto L737620;
case 0x737621:c.instructions+=4;goto B737621;
case 0x737622:c.instructions+=3;goto B737622;
case 0x737627:c.instructions+=2;goto B737627;
case 0x737628:c.instructions+=1;goto B737628;
case 0x737629:goto L737629;
case 0x73762b:c.instructions+=1;goto B73762b;
case 0x73762c:goto L73762c;
case 0x73762d:c.instructions+=2;goto B73762d;
case 0x73762e:c.instructions+=1;goto B73762e;
case 0x737630:goto L737630;
case 0x737633:c.instructions+=17;goto B737633;
case 0x737634:c.instructions+=16;goto B737634;
case 0x737635:c.instructions+=15;goto B737635;
case 0x737639:c.instructions+=14;goto B737639;
case 0x73763d:c.instructions+=13;goto B73763d;
case 0x737641:c.instructions+=12;goto B737641;
case 0x737648:c.instructions+=11;goto B737648;
case 0x73764b:c.instructions+=10;goto B73764b;
case 0x73764e:c.instructions+=9;goto B73764e;
case 0x737651:c.instructions+=8;goto B737651;
case 0x737654:c.instructions+=7;goto B737654;
case 0x737656:c.instructions+=6;goto B737656;
case 0x73765a:c.instructions+=5;goto B73765a;
case 0x73765b:c.instructions+=4;goto B73765b;
case 0x73765c:c.instructions+=3;goto B73765c;
case 0x73765e:c.instructions+=2;goto B73765e;
case 0x737662:c.instructions+=1;goto B737662;
case 0x737667:goto L737667;
case 0x73766b:c.instructions+=2;goto B73766b;
case 0x73766e:c.instructions+=1;goto B73766e;
case 0x737673:goto L737673;
case 0x737676:c.instructions+=3;goto B737676;
case 0x737679:c.instructions+=2;goto B737679;
case 0x73767a:c.instructions+=1;goto B73767a;
case 0x73767c:goto L73767c;
case 0x737680:c.instructions+=3;goto B737680;
case 0x737683:c.instructions+=2;goto B737683;
case 0x737687:c.instructions+=1;goto B737687;
case 0x737690:goto L737690;
case 0x737692:c.instructions+=4;goto B737692;
case 0x737694:c.instructions+=3;goto B737694;
case 0x73769c:c.instructions+=2;goto B73769c;
case 0x7376a0:c.instructions+=1;goto B7376a0;
case 0x7376a6:goto L7376a6;
case 0x7376aa:c.instructions+=2;goto B7376aa;
case 0x7376ad:c.instructions+=1;goto B7376ad;
case 0x7376b0:goto L7376b0;
case 0x7376b3:c.instructions+=1;goto B7376b3;
case 0x7376b9:goto L7376b9;
case 0x7376bc:c.instructions+=13;goto B7376bc;
case 0x7376c1:c.instructions+=12;goto B7376c1;
case 0x7376c6:c.instructions+=11;goto B7376c6;
case 0x7376ca:c.instructions+=10;goto B7376ca;
case 0x7376ce:c.instructions+=9;goto B7376ce;
case 0x7376d4:c.instructions+=8;goto B7376d4;
case 0x7376d8:c.instructions+=7;goto B7376d8;
case 0x7376dc:c.instructions+=6;goto B7376dc;
case 0x7376e0:c.instructions+=5;goto B7376e0;
case 0x7376e4:c.instructions+=4;goto B7376e4;
case 0x7376ec:c.instructions+=3;goto B7376ec;
case 0x7376ed:c.instructions+=2;goto B7376ed;
case 0x7376ee:c.instructions+=1;goto B7376ee;
case 0x7376f3:goto L7376f3;
case 0x7376f6:c.instructions+=2;goto B7376f6;
case 0x7376f8:c.instructions+=1;goto B7376f8;
case 0x7376fa:goto L7376fa;
case 0x7376fe:c.instructions+=3;goto B7376fe;
case 0x737700:c.instructions+=2;goto B737700;
case 0x737702:c.instructions+=1;goto B737702;
case 0x737704:goto L737704;
case 0x737707:c.instructions+=1;goto B737707;
case 0x737710:goto L737710;
case 0x737714:c.instructions+=2;goto B737714;
case 0x73771a:c.instructions+=1;goto B73771a;
case 0x73771c:goto L73771c;
case 0x73771e:c.instructions+=1;goto B73771e;
case 0x737720:goto L737720;
case 0x737722:c.instructions+=3;goto B737722;
case 0x737725:c.instructions+=2;goto B737725;
case 0x737728:c.instructions+=1;goto B737728;
case 0x73772a:goto L73772a;
case 0x73772e:c.instructions+=3;goto B73772e;
case 0x737731:c.instructions+=2;goto B737731;
case 0x737733:c.instructions+=1;goto B737733;
case 0x737735:goto L737735;
case 0x737737:c.instructions+=2;goto B737737;
case 0x73773b:c.instructions+=1;goto B73773b;
case 0x73773d:goto L73773d;
case 0x737740:c.instructions+=4;goto B737740;
case 0x737745:c.instructions+=3;goto B737745;
case 0x737747:c.instructions+=2;goto B737747;
case 0x737749:c.instructions+=1;goto B737749;
case 0x73774b:goto L73774b;
case 0x73774c:c.instructions+=6;goto B73774c;
case 0x73774d:c.instructions+=5;goto B73774d;
case 0x73774e:c.instructions+=4;goto B73774e;
case 0x737750:c.instructions+=3;goto B737750;
case 0x737751:c.instructions+=2;goto B737751;
case 0x737754:c.instructions+=1;goto B737754;
case 0x737755:goto L737755;
case 0x737758:c.instructions+=1;goto B737758;
case 0x73775a:goto L73775a;
case 0x73775d:c.instructions+=4;goto B73775d;
case 0x737762:c.instructions+=3;goto B737762;
case 0x737764:c.instructions+=2;goto B737764;
case 0x737768:c.instructions+=1;goto B737768;
case 0x73776b:goto L73776b;
case 0x73776f:c.instructions+=4;goto B73776f;
case 0x737770:c.instructions+=3;goto B737770;
case 0x737773:c.instructions+=2;goto B737773;
case 0x737775:c.instructions+=1;goto B737775;
case 0x737777:goto L737777;
case 0x73777b:goto L73777b;
case 0x73777f:c.instructions+=6;goto B73777f;
case 0x737783:c.instructions+=5;goto B737783;
case 0x737784:c.instructions+=4;goto B737784;
case 0x737787:c.instructions+=3;goto B737787;
case 0x737789:c.instructions+=2;goto B737789;
case 0x73778d:c.instructions+=1;goto B73778d;
case 0x737793:goto L737793;
case 0x737797:c.instructions+=2;goto B737797;
case 0x737799:c.instructions+=1;goto B737799;
case 0x73779f:goto L73779f;
case 0x7377a0:c.instructions+=6;goto B7377a0;
case 0x7377a1:c.instructions+=5;goto B7377a1;
case 0x7377a2:c.instructions+=4;goto B7377a2;
case 0x7377a7:c.instructions+=3;goto B7377a7;
case 0x7377a8:c.instructions+=2;goto B7377a8;
case 0x7377ab:c.instructions+=1;goto B7377ab;
case 0x7377b0:goto L7377b0;
case 0x7377b3:c.instructions+=11;goto B7377b3;
case 0x7377b4:c.instructions+=10;goto B7377b4;
case 0x7377b5:c.instructions+=9;goto B7377b5;
case 0x7377b9:c.instructions+=8;goto B7377b9;
case 0x7377bd:c.instructions+=7;goto B7377bd;
case 0x7377bf:c.instructions+=6;goto B7377bf;
case 0x7377c2:c.instructions+=5;goto B7377c2;
case 0x7377c5:c.instructions+=4;goto B7377c5;
case 0x7377c6:c.instructions+=3;goto B7377c6;
case 0x7377cb:c.instructions+=2;goto B7377cb;
case 0x7377cf:c.instructions+=1;goto B7377cf;
case 0x7377d1:goto L7377d1;
case 0x7377d2:c.instructions+=5;goto B7377d2;
case 0x7377d3:c.instructions+=4;goto B7377d3;
case 0x7377d5:c.instructions+=3;goto B7377d5;
case 0x7377d6:c.instructions+=2;goto B7377d6;
case 0x7377d9:c.instructions+=1;goto B7377d9;
case 0x7377da:goto L7377da;
case 0x7377dd:c.instructions+=2;goto B7377dd;
case 0x7377e0:c.instructions+=1;goto B7377e0;
case 0x7377e2:goto L7377e2;
case 0x7377e5:c.instructions+=1;goto B7377e5;
case 0x7377e7:goto L7377e7;
case 0x7377ea:c.instructions+=1;goto B7377ea;
case 0x7377ec:goto L7377ec;
case 0x7377ee:c.instructions+=1;goto B7377ee;
case 0x7377f0:goto L7377f0;
case 0x7377f2:goto L7377f2;
case 0x7377f4:goto L7377f4;
case 0x7377f6:goto L7377f6;
case 0x7377f7:c.instructions+=2;goto B7377f7;
case 0x7377f9:c.instructions+=1;goto B7377f9;
case 0x7377fe:goto L7377fe;
case 0x737802:c.instructions+=1;goto B737802;
case 0x737808:goto L737808;
case 0x73780a:c.instructions+=1;goto B73780a;
case 0x737810:goto L737810;
case 0x737814:c.instructions+=7;goto B737814;
case 0x737815:c.instructions+=6;goto B737815;
case 0x737817:c.instructions+=5;goto B737817;
case 0x737819:c.instructions+=4;goto B737819;
case 0x737821:c.instructions+=3;goto B737821;
case 0x737825:c.instructions+=2;goto B737825;
case 0x737829:c.instructions+=1;goto B737829;
case 0x73782f:goto L73782f;
case 0x737833:c.instructions+=1;goto B737833;
case 0x737836:goto L737836;
case 0x73783b:c.instructions+=3;goto B73783b;
case 0x73783e:c.instructions+=2;goto B73783e;
case 0x737840:c.instructions+=1;goto B737840;
case 0x737845:goto L737845;
case 0x737847:c.instructions+=1;goto B737847;
case 0x737849:goto L737849;
case 0x73784d:c.instructions+=1;goto B73784d;
case 0x73784f:goto L73784f;
case 0x737852:c.instructions+=1;goto B737852;
case 0x737854:goto L737854;
case 0x737858:c.instructions+=6;goto B737858;
case 0x73785e:c.instructions+=5;goto B73785e;
case 0x737862:c.instructions+=4;goto B737862;
case 0x737865:c.instructions+=3;goto B737865;
case 0x737868:c.instructions+=2;goto B737868;
case 0x73786a:c.instructions+=1;goto B73786a;
case 0x73786f:goto L73786f;
case 0x737871:c.instructions+=1;goto B737871;
case 0x737873:goto L737873;
case 0x737877:c.instructions+=8;goto B737877;
case 0x73787b:c.instructions+=7;goto B73787b;
case 0x73787d:c.instructions+=6;goto B73787d;
case 0x73787e:c.instructions+=5;goto B73787e;
case 0x73787f:c.instructions+=4;goto B73787f;
case 0x737880:c.instructions+=3;goto B737880;
case 0x737881:c.instructions+=2;goto B737881;
case 0x737882:c.instructions+=1;goto B737882;
case 0x737887:goto L737887;
case 0x73788a:c.instructions+=2;goto B73788a;
case 0x73788c:c.instructions+=1;goto B73788c;
case 0x73788e:goto L73788e;
case 0x737892:c.instructions+=3;goto B737892;
case 0x737896:c.instructions+=2;goto B737896;
case 0x737899:c.instructions+=1;goto B737899;
case 0x73789c:goto L73789c;
case 0x7378a0:c.instructions+=5;goto B7378a0;
case 0x7378a1:c.instructions+=4;goto B7378a1;
case 0x7378a4:c.instructions+=3;goto B7378a4;
case 0x7378a6:c.instructions+=2;goto B7378a6;
case 0x7378aa:c.instructions+=1;goto B7378aa;
case 0x7378ac:goto L7378ac;
case 0x7378b0:c.instructions+=3;goto B7378b0;
case 0x7378b2:c.instructions+=2;goto B7378b2;
case 0x7378b6:c.instructions+=1;goto B7378b6;
case 0x7378bc:goto L7378bc;
case 0x7378be:goto L7378be;
case 0x7378c0:goto L7378c0;
case 0x7378c1:c.instructions+=6;goto B7378c1;
case 0x7378c2:c.instructions+=5;goto B7378c2;
case 0x7378c3:c.instructions+=4;goto B7378c3;
case 0x7378c8:c.instructions+=3;goto B7378c8;
case 0x7378c9:c.instructions+=2;goto B7378c9;
case 0x7378cc:c.instructions+=1;goto B7378cc;
case 0x7378cd:goto L7378cd;
case 0x7378ce:c.instructions+=6;goto B7378ce;
case 0x7378cf:c.instructions+=5;goto B7378cf;
case 0x7378d0:c.instructions+=4;goto B7378d0;
case 0x7378d2:c.instructions+=3;goto B7378d2;
case 0x7378d3:c.instructions+=2;goto B7378d3;
case 0x7378d6:c.instructions+=1;goto B7378d6;
case 0x7378e0:goto L7378e0;
case 0x7378e1:c.instructions+=4;goto B7378e1;
case 0x7378e5:c.instructions+=3;goto B7378e5;
case 0x7378e8:c.instructions+=2;goto B7378e8;
case 0x7378ea:c.instructions+=1;goto B7378ea;
case 0x7378ec:goto L7378ec;
case 0x7378ed:c.instructions+=5;goto B7378ed;
case 0x7378ee:c.instructions+=4;goto B7378ee;
case 0x7378ef:c.instructions+=3;goto B7378ef;
case 0x7378f2:c.instructions+=2;goto B7378f2;
case 0x7378f6:c.instructions+=1;goto B7378f6;
case 0x737900:goto L737900;
case 0x737904:c.instructions+=4;goto B737904;
case 0x737907:c.instructions+=3;goto B737907;
case 0x73790b:c.instructions+=2;goto B73790b;
case 0x737912:c.instructions+=1;goto B737912;
case 0x737914:goto L737914;
case 0x737916:c.instructions+=2;goto B737916;
case 0x737917:c.instructions+=1;goto B737917;
case 0x73791c:goto L73791c;
case 0x737920:c.instructions+=8;goto B737920;
case 0x737923:c.instructions+=7;goto B737923;
case 0x737926:c.instructions+=6;goto B737926;
case 0x737929:c.instructions+=5;goto B737929;
case 0x73792d:c.instructions+=4;goto B73792d;
case 0x73792e:c.instructions+=3;goto B73792e;
case 0x737931:c.instructions+=2;goto B737931;
case 0x737934:c.instructions+=1;goto B737934;
case 0x737936:goto L737936;
case 0x73793a:c.instructions+=4;goto B73793a;
case 0x73793d:c.instructions+=3;goto B73793d;
case 0x73793e:c.instructions+=2;goto B73793e;
case 0x737942:c.instructions+=1;goto B737942;
case 0x737944:goto L737944;
case 0x737945:c.instructions+=2;goto B737945;
case 0x737946:c.instructions+=1;goto B737946;
case 0x737947:goto L737947;
case 0x737948:c.instructions+=1;goto B737948;
case 0x737950:goto L737950;
case 0x737951:c.instructions+=17;goto B737951;
case 0x737952:c.instructions+=16;goto B737952;
case 0x737953:c.instructions+=15;goto B737953;
case 0x737954:c.instructions+=14;goto B737954;
case 0x737958:c.instructions+=13;goto B737958;
case 0x73795a:c.instructions+=12;goto B73795a;
case 0x73795d:c.instructions+=11;goto B73795d;
case 0x73795e:c.instructions+=10;goto B73795e;
case 0x737961:c.instructions+=9;goto B737961;
case 0x737964:c.instructions+=8;goto B737964;
case 0x737968:c.instructions+=7;goto B737968;
case 0x73796c:c.instructions+=6;goto B73796c;
case 0x73796f:c.instructions+=5;goto B73796f;
case 0x737970:c.instructions+=4;goto B737970;
case 0x737974:c.instructions+=3;goto B737974;
case 0x737976:c.instructions+=2;goto B737976;
case 0x737979:c.instructions+=1;goto B737979;
case 0x737980:goto L737980;
case 0x737983:c.instructions+=5;goto B737983;
case 0x737985:c.instructions+=4;goto B737985;
case 0x737988:c.instructions+=3;goto B737988;
case 0x73798b:c.instructions+=2;goto B73798b;
case 0x73798d:c.instructions+=1;goto B73798d;
case 0x73798f:goto L73798f;
case 0x737991:c.instructions+=5;goto B737991;
case 0x737992:c.instructions+=4;goto B737992;
case 0x737995:c.instructions+=3;goto B737995;
case 0x737997:c.instructions+=2;goto B737997;
case 0x73799a:c.instructions+=1;goto B73799a;
case 0x73799c:goto L73799c;
case 0x7379a1:c.instructions+=1;goto B7379a1;
case 0x7379a5:goto L7379a5;
case 0x7379a9:c.instructions+=6;goto B7379a9;
case 0x7379ac:c.instructions+=5;goto B7379ac;
case 0x7379ae:c.instructions+=4;goto B7379ae;
case 0x7379b0:c.instructions+=3;goto B7379b0;
case 0x7379b3:c.instructions+=2;goto B7379b3;
case 0x7379b5:c.instructions+=1;goto B7379b5;
case 0x7379b7:goto L7379b7;
case 0x7379bb:c.instructions+=6;goto B7379bb;
case 0x7379bc:c.instructions+=5;goto B7379bc;
case 0x7379bd:c.instructions+=4;goto B7379bd;
case 0x7379be:c.instructions+=3;goto B7379be;
case 0x7379bf:c.instructions+=2;goto B7379bf;
case 0x7379c0:c.instructions+=1;goto B7379c0;
case 0x7379d0:goto L7379d0;
case 0x7379d1:c.instructions+=9;goto B7379d1;
case 0x7379d2:c.instructions+=8;goto B7379d2;
case 0x7379d3:c.instructions+=7;goto B7379d3;
case 0x7379d5:c.instructions+=6;goto B7379d5;
case 0x7379d9:c.instructions+=5;goto B7379d9;
case 0x7379dc:c.instructions+=4;goto B7379dc;
case 0x7379de:c.instructions+=3;goto B7379de;
case 0x7379e0:c.instructions+=2;goto B7379e0;
case 0x7379e2:c.instructions+=1;goto B7379e2;
case 0x7379e4:goto L7379e4;
case 0x7379e7:c.instructions+=2;goto B7379e7;
case 0x7379e9:c.instructions+=1;goto B7379e9;
case 0x7379f0:goto L7379f0;
case 0x7379f3:c.instructions+=4;goto B7379f3;
case 0x7379f5:c.instructions+=3;goto B7379f5;
case 0x7379f8:c.instructions+=2;goto B7379f8;
case 0x7379f9:c.instructions+=1;goto B7379f9;
case 0x7379fb:goto L7379fb;
case 0x737a00:goto L737a00;
case 0x737a02:c.instructions+=1;goto B737a02;
case 0x737a04:goto L737a04;
case 0x737a08:c.instructions+=3;goto B737a08;
case 0x737a0a:c.instructions+=2;goto B737a0a;
case 0x737a0f:c.instructions+=1;goto B737a0f;
case 0x737a11:goto L737a11;
case 0x737a13:c.instructions+=1;goto B737a13;
case 0x737a18:goto L737a18;
case 0x737a1c:c.instructions+=1;goto B737a1c;
case 0x737a1e:goto L737a1e;
case 0x737a21:c.instructions+=2;goto B737a21;
case 0x737a23:c.instructions+=1;goto B737a23;
case 0x737a25:goto L737a25;
case 0x737a26:c.instructions+=2;goto B737a26;
case 0x737a27:c.instructions+=1;goto B737a27;
case 0x737a2c:goto L737a2c;
case 0x737a2f:c.instructions+=2;goto B737a2f;
case 0x737a31:c.instructions+=1;goto B737a31;
case 0x737a33:goto L737a33;
case 0x737a35:c.instructions+=3;goto B737a35;
case 0x737a37:c.instructions+=2;goto B737a37;
case 0x737a39:c.instructions+=1;goto B737a39;
case 0x737a3e:goto L737a3e;
case 0x737a40:goto L737a40;
case 0x737a42:c.instructions+=1;goto B737a42;
case 0x737a44:goto L737a44;
case 0x737a45:c.instructions+=4;goto B737a45;
case 0x737a47:c.instructions+=3;goto B737a47;
case 0x737a48:c.instructions+=2;goto B737a48;
case 0x737a49:c.instructions+=1;goto B737a49;
case 0x737a50:goto L737a50;
case 0x737a53:c.instructions+=4;goto B737a53;
case 0x737a57:c.instructions+=3;goto B737a57;
case 0x737a58:c.instructions+=2;goto B737a58;
case 0x737a59:c.instructions+=1;goto B737a59;
case 0x737a5e:goto L737a5e;
case 0x737a61:c.instructions+=2;goto B737a61;
case 0x737a63:c.instructions+=1;goto B737a63;
case 0x737a69:goto L737a69;
case 0x737a6d:c.instructions+=7;goto B737a6d;
case 0x737a71:c.instructions+=6;goto B737a71;
case 0x737a74:c.instructions+=5;goto B737a74;
case 0x737a76:c.instructions+=4;goto B737a76;
case 0x737a78:c.instructions+=3;goto B737a78;
case 0x737a7c:c.instructions+=2;goto B737a7c;
case 0x737a7f:c.instructions+=1;goto B737a7f;
case 0x737a85:goto L737a85;
case 0x737a86:c.instructions+=5;goto B737a86;
case 0x737a87:c.instructions+=4;goto B737a87;
case 0x737a8b:c.instructions+=3;goto B737a8b;
case 0x737a8c:c.instructions+=2;goto B737a8c;
case 0x737a8d:c.instructions+=1;goto B737a8d;
case 0x737a90:goto L737a90;
case 0x737a95:c.instructions+=4;goto B737a95;
case 0x737a98:c.instructions+=3;goto B737a98;
case 0x737a9a:c.instructions+=2;goto B737a9a;
case 0x737a9e:c.instructions+=1;goto B737a9e;
case 0x737aa0:goto L737aa0;
case 0x737aa3:goto L737aa3;
case 0x737aa7:c.instructions+=1;goto B737aa7;
case 0x737aa9:goto L737aa9;
case 0x737aac:c.instructions+=1;goto B737aac;
case 0x737aae:goto L737aae;
case 0x737ab2:c.instructions+=8;goto B737ab2;
case 0x737ab7:c.instructions+=7;goto B737ab7;
case 0x737abb:c.instructions+=6;goto B737abb;
case 0x737abf:c.instructions+=5;goto B737abf;
case 0x737ac3:c.instructions+=4;goto B737ac3;
case 0x737acb:c.instructions+=3;goto B737acb;
case 0x737acc:c.instructions+=2;goto B737acc;
case 0x737acd:c.instructions+=1;goto B737acd;
case 0x737ad2:goto L737ad2;
case 0x737ad5:c.instructions+=2;goto B737ad5;
case 0x737ad7:c.instructions+=1;goto B737ad7;
case 0x737ad9:goto L737ad9;
case 0x737adc:c.instructions+=3;goto B737adc;
case 0x737adf:c.instructions+=2;goto B737adf;
case 0x737ae3:c.instructions+=1;goto B737ae3;
case 0x737ae6:goto L737ae6;
case 0x737aea:c.instructions+=4;goto B737aea;
case 0x737aeb:c.instructions+=3;goto B737aeb;
case 0x737aee:c.instructions+=2;goto B737aee;
case 0x737af0:c.instructions+=1;goto B737af0;
case 0x737af2:goto L737af2;
case 0x737af6:c.instructions+=2;goto B737af6;
case 0x737afa:c.instructions+=1;goto B737afa;
case 0x737afe:goto L737afe;
case 0x737aff:c.instructions+=4;goto B737aff;
case 0x737b02:c.instructions+=3;goto B737b02;
case 0x737b04:c.instructions+=2;goto B737b04;
case 0x737b08:c.instructions+=1;goto B737b08;
case 0x737b0a:goto L737b0a;
case 0x737b0b:c.instructions+=3;goto B737b0b;
case 0x737b0c:c.instructions+=2;goto B737b0c;
case 0x737b0d:c.instructions+=1;goto B737b0d;
case 0x737b0e:goto L737b0e;
case 0x737b11:c.instructions+=1;goto B737b11;
case 0x737b20:goto L737b20;
case 0x737b21:c.instructions+=8;goto B737b21;
case 0x737b22:c.instructions+=7;goto B737b22;
case 0x737b23:c.instructions+=6;goto B737b23;
case 0x737b27:c.instructions+=5;goto B737b27;
case 0x737b28:c.instructions+=4;goto B737b28;
case 0x737b2a:c.instructions+=3;goto B737b2a;
case 0x737b2c:c.instructions+=2;goto B737b2c;
case 0x737b2d:c.instructions+=1;goto B737b2d;
case 0x737b2f:goto L737b2f;
case 0x737b32:c.instructions+=2;goto B737b32;
case 0x737b34:c.instructions+=1;goto B737b34;
case 0x737b36:goto L737b36;
case 0x737b3a:c.instructions+=5;goto B737b3a;
case 0x737b3d:c.instructions+=4;goto B737b3d;
case 0x737b3f:c.instructions+=3;goto B737b3f;
case 0x737b41:c.instructions+=2;goto B737b41;
case 0x737b49:c.instructions+=1;goto B737b49;
case 0x737b4b:goto L737b4b;
case 0x737b4f:c.instructions+=1;goto B737b4f;
case 0x737b52:goto L737b52;
case 0x737b54:c.instructions+=2;goto B737b54;
case 0x737b56:c.instructions+=1;goto B737b56;
case 0x737b58:goto L737b58;
case 0x737b5c:c.instructions+=4;goto B737b5c;
case 0x737b5f:c.instructions+=3;goto B737b5f;
case 0x737b60:c.instructions+=2;goto B737b60;
case 0x737b61:c.instructions+=1;goto B737b61;
case 0x737b66:goto L737b66;
case 0x737b69:c.instructions+=8;goto B737b69;
case 0x737b6c:c.instructions+=7;goto B737b6c;
case 0x737b6e:c.instructions+=6;goto B737b6e;
case 0x737b71:c.instructions+=5;goto B737b71;
case 0x737b74:c.instructions+=4;goto B737b74;
case 0x737b75:c.instructions+=3;goto B737b75;
case 0x737b78:c.instructions+=2;goto B737b78;
case 0x737b7a:c.instructions+=1;goto B737b7a;
case 0x737b7c:goto L737b7c;
case 0x737b7e:goto L737b7e;
case 0x737b7f:c.instructions+=6;goto B737b7f;
case 0x737b80:c.instructions+=5;goto B737b80;
case 0x737b81:c.instructions+=4;goto B737b81;
case 0x737b83:c.instructions+=3;goto B737b83;
case 0x737b84:c.instructions+=2;goto B737b84;
case 0x737b85:c.instructions+=1;goto B737b85;
case 0x737b86:goto L737b86;
case 0x737b8a:c.instructions+=2;goto B737b8a;
case 0x737b8c:c.instructions+=1;goto B737b8c;
case 0x737b91:goto L737b91;
case 0x737b93:c.instructions+=3;goto B737b93;
case 0x737b94:c.instructions+=2;goto B737b94;
case 0x737b96:c.instructions+=1;goto B737b96;
case 0x737b9b:goto L737b9b;
case 0x737b9e:c.instructions+=1;goto B737b9e;
case 0x737ba2:goto L737ba2;
case 0x737ba6:c.instructions+=4;goto B737ba6;
case 0x737baa:c.instructions+=3;goto B737baa;
case 0x737bab:c.instructions+=2;goto B737bab;
case 0x737bac:c.instructions+=1;goto B737bac;
case 0x737bb1:goto L737bb1;
case 0x737bb5:c.instructions+=7;goto B737bb5;
case 0x737bb8:c.instructions+=6;goto B737bb8;
case 0x737bb9:c.instructions+=5;goto B737bb9;
case 0x737bba:c.instructions+=4;goto B737bba;
case 0x737bbb:c.instructions+=3;goto B737bbb;
case 0x737bbc:c.instructions+=2;goto B737bbc;
case 0x737bbd:c.instructions+=1;goto B737bbd;
case 0x737bc0:goto L737bc0;
case 0x737bc5:c.instructions+=3;goto B737bc5;
case 0x737bc8:c.instructions+=2;goto B737bc8;
case 0x737bca:c.instructions+=1;goto B737bca;
case 0x737bd0:goto L737bd0;
case 0x737bd4:c.instructions+=4;goto B737bd4;
case 0x737bd8:c.instructions+=3;goto B737bd8;
case 0x737bd9:c.instructions+=2;goto B737bd9;
case 0x737bda:c.instructions+=1;goto B737bda;
case 0x737bdf:goto L737bdf;
case 0x737be2:c.instructions+=2;goto B737be2;
case 0x737be4:c.instructions+=1;goto B737be4;
case 0x737bea:goto L737bea;
case 0x737bee:c.instructions+=14;goto B737bee;
case 0x737bf0:c.instructions+=13;goto B737bf0;
case 0x737bf1:c.instructions+=12;goto B737bf1;
case 0x737bf2:c.instructions+=11;goto B737bf2;
case 0x737bf5:c.instructions+=10;goto B737bf5;
case 0x737bf9:c.instructions+=9;goto B737bf9;
case 0x737bfd:c.instructions+=8;goto B737bfd;
case 0x737c01:c.instructions+=7;goto B737c01;
case 0x737c04:c.instructions+=6;goto B737c04;
case 0x737c06:c.instructions+=5;goto B737c06;
case 0x737c08:c.instructions+=4;goto B737c08;
case 0x737c0c:c.instructions+=3;goto B737c0c;
case 0x737c10:c.instructions+=2;goto B737c10;
case 0x737c14:c.instructions+=1;goto B737c14;
case 0x737c1a:goto L737c1a;
case 0x737c1b:c.instructions+=3;goto B737c1b;
case 0x737c1c:c.instructions+=2;goto B737c1c;
case 0x737c1e:c.instructions+=1;goto B737c1e;
case 0x737c20:goto L737c20;
case 0x737c25:c.instructions+=6;goto B737c25;
case 0x737c2a:c.instructions+=5;goto B737c2a;
case 0x737c2d:c.instructions+=4;goto B737c2d;
case 0x737c31:c.instructions+=3;goto B737c31;
case 0x737c33:c.instructions+=2;goto B737c33;
case 0x737c37:c.instructions+=1;goto B737c37;
case 0x737c3d:goto L737c3d;
case 0x737c40:c.instructions+=1;goto B737c40;
case 0x737c44:goto L737c44;
case 0x737c47:c.instructions+=2;goto B737c47;
case 0x737c4c:c.instructions+=1;goto B737c4c;
case 0x737c4e:goto L737c4e;
case 0x737c52:c.instructions+=3;goto B737c52;
case 0x737c53:c.instructions+=2;goto B737c53;
case 0x737c54:c.instructions+=1;goto B737c54;
case 0x737c59:goto L737c59;
case 0x737c5b:c.instructions+=10;goto B737c5b;
case 0x737c5e:c.instructions+=9;goto B737c5e;
case 0x737c61:c.instructions+=8;goto B737c61;
case 0x737c64:c.instructions+=7;goto B737c64;
case 0x737c6b:c.instructions+=6;goto B737c6b;
case 0x737c72:c.instructions+=5;goto B737c72;
case 0x737c78:c.instructions+=4;goto B737c78;
case 0x737c7c:c.instructions+=3;goto B737c7c;
case 0x737c7d:c.instructions+=2;goto B737c7d;
case 0x737c7e:c.instructions+=1;goto B737c7e;
case 0x737c83:goto L737c83;
case 0x737c86:c.instructions+=2;goto B737c86;
case 0x737c88:c.instructions+=1;goto B737c88;
case 0x737c8a:goto L737c8a;
case 0x737c8e:c.instructions+=9;goto B737c8e;
case 0x737c8f:c.instructions+=8;goto B737c8f;
case 0x737c92:c.instructions+=7;goto B737c92;
case 0x737c96:c.instructions+=6;goto B737c96;
case 0x737c9b:c.instructions+=5;goto B737c9b;
case 0x737c9d:c.instructions+=4;goto B737c9d;
case 0x737c9e:c.instructions+=3;goto B737c9e;
case 0x737c9f:c.instructions+=2;goto B737c9f;
case 0x737ca0:c.instructions+=1;goto B737ca0;
case 0x737ca6:goto L737ca6;
case 0x737ca9:goto L737ca9;
case 0x737cad:c.instructions+=6;goto B737cad;
case 0x737cb1:c.instructions+=5;goto B737cb1;
case 0x737cb2:c.instructions+=4;goto B737cb2;
case 0x737cb5:c.instructions+=3;goto B737cb5;
case 0x737cb7:c.instructions+=2;goto B737cb7;
case 0x737cbb:c.instructions+=1;goto B737cbb;
case 0x737cbd:goto L737cbd;
case 0x737cc1:c.instructions+=2;goto B737cc1;
case 0x737cc5:c.instructions+=1;goto B737cc5;
case 0x737cc9:goto L737cc9;
case 0x737cca:c.instructions+=4;goto B737cca;
case 0x737ccd:c.instructions+=3;goto B737ccd;
case 0x737ccf:c.instructions+=2;goto B737ccf;
case 0x737cd3:c.instructions+=1;goto B737cd3;
case 0x737cd9:goto L737cd9;
case 0x737cda:c.instructions+=1;goto B737cda;
case 0x737cdb:goto L737cdb;
case 0x737cdc:c.instructions+=1;goto B737cdc;
case 0x737cdd:goto L737cdd;
case 0x737ce0:c.instructions+=1;goto B737ce0;
case 0x737cf0:goto L737cf0;
case 0x737cf3:c.instructions+=8;goto B737cf3;
case 0x737cf8:c.instructions+=7;goto B737cf8;
case 0x737cf9:c.instructions+=6;goto B737cf9;
case 0x737cfb:c.instructions+=5;goto B737cfb;
case 0x737cfc:c.instructions+=4;goto B737cfc;
case 0x737cfe:c.instructions+=3;goto B737cfe;
case 0x737d00:c.instructions+=2;goto B737d00;
case 0x737d04:c.instructions+=1;goto B737d04;
case 0x737d0a:goto L737d0a;
case 0x737d0e:c.instructions+=4;goto B737d0e;
case 0x737d12:c.instructions+=3;goto B737d12;
case 0x737d13:c.instructions+=2;goto B737d13;
case 0x737d14:c.instructions+=1;goto B737d14;
case 0x737d19:goto L737d19;
case 0x737d1c:c.instructions+=2;goto B737d1c;
case 0x737d1e:c.instructions+=1;goto B737d1e;
case 0x737d24:goto L737d24;
case 0x737d28:c.instructions+=13;goto B737d28;
case 0x737d2c:c.instructions+=12;goto B737d2c;
case 0x737d2e:c.instructions+=11;goto B737d2e;
case 0x737d2f:c.instructions+=10;goto B737d2f;
case 0x737d32:c.instructions+=9;goto B737d32;
case 0x737d36:c.instructions+=8;goto B737d36;
case 0x737d37:c.instructions+=7;goto B737d37;
case 0x737d3b:c.instructions+=6;goto B737d3b;
case 0x737d3e:c.instructions+=5;goto B737d3e;
case 0x737d40:c.instructions+=4;goto B737d40;
case 0x737d44:c.instructions+=3;goto B737d44;
case 0x737d48:c.instructions+=2;goto B737d48;
case 0x737d4c:c.instructions+=1;goto B737d4c;
case 0x737d4e:goto L737d4e;
case 0x737d51:c.instructions+=3;goto B737d51;
case 0x737d54:c.instructions+=2;goto B737d54;
case 0x737d5a:c.instructions+=1;goto B737d5a;
case 0x737d60:goto L737d60;
case 0x737d64:c.instructions+=4;goto B737d64;
case 0x737d66:c.instructions+=3;goto B737d66;
case 0x737d6c:c.instructions+=2;goto B737d6c;
case 0x737d6f:c.instructions+=1;goto B737d6f;
case 0x737d71:goto L737d71;
case 0x737d72:c.instructions+=1;goto B737d72;
case 0x737d77:goto L737d77;
case 0x737d7a:c.instructions+=3;goto B737d7a;
case 0x737d7d:c.instructions+=2;goto B737d7d;
case 0x737d81:c.instructions+=1;goto B737d81;
case 0x737d87:goto L737d87;
case 0x737d88:c.instructions+=3;goto B737d88;
case 0x737d8b:c.instructions+=2;goto B737d8b;
case 0x737d8d:c.instructions+=1;goto B737d8d;
case 0x737d8f:goto L737d8f;
case 0x737d91:c.instructions+=3;goto B737d91;
case 0x737d93:c.instructions+=2;goto B737d93;
case 0x737d97:c.instructions+=1;goto B737d97;
case 0x737d9d:goto L737d9d;
case 0x737da0:c.instructions+=3;goto B737da0;
case 0x737da3:c.instructions+=2;goto B737da3;
case 0x737da7:c.instructions+=1;goto B737da7;
case 0x737da9:goto L737da9;
case 0x737dad:c.instructions+=1;goto B737dad;
case 0x737db0:goto L737db0;
case 0x737db4:c.instructions+=10;goto B737db4;
case 0x737dbc:c.instructions+=9;goto B737dbc;
case 0x737dc3:c.instructions+=8;goto B737dc3;
case 0x737dcb:c.instructions+=7;goto B737dcb;
case 0x737dd2:c.instructions+=6;goto B737dd2;
case 0x737dd8:c.instructions+=5;goto B737dd8;
case 0x737ddc:c.instructions+=4;goto B737ddc;
case 0x737de0:c.instructions+=3;goto B737de0;
case 0x737de3:c.instructions+=2;goto B737de3;
case 0x737de5:c.instructions+=1;goto B737de5;
case 0x737de7:goto L737de7;
case 0x737dec:c.instructions+=2;goto B737dec;
case 0x737dee:c.instructions+=1;goto B737dee;
case 0x737df0:goto L737df0;
case 0x737df2:c.instructions+=18;goto B737df2;
case 0x737df5:c.instructions+=17;goto B737df5;
case 0x737df7:c.instructions+=16;goto B737df7;
case 0x737df8:c.instructions+=15;goto B737df8;
case 0x737dfb:c.instructions+=14;goto B737dfb;
case 0x737dfd:c.instructions+=13;goto B737dfd;
case 0x737e01:c.instructions+=12;goto B737e01;
case 0x737e04:c.instructions+=11;goto B737e04;
case 0x737e07:c.instructions+=10;goto B737e07;
case 0x737e0a:c.instructions+=9;goto B737e0a;
case 0x737e0d:c.instructions+=8;goto B737e0d;
case 0x737e10:c.instructions+=7;goto B737e10;
case 0x737e12:c.instructions+=6;goto B737e12;
case 0x737e15:c.instructions+=5;goto B737e15;
case 0x737e18:c.instructions+=4;goto B737e18;
case 0x737e1a:c.instructions+=3;goto B737e1a;
case 0x737e1b:c.instructions+=2;goto B737e1b;
case 0x737e21:c.instructions+=1;goto B737e21;
case 0x737e23:goto L737e23;
case 0x737e24:c.instructions+=2;goto B737e24;
case 0x737e27:c.instructions+=1;goto B737e27;
case 0x737e28:goto L737e28;
case 0x737e2a:c.instructions+=6;goto B737e2a;
case 0x737e2c:c.instructions+=5;goto B737e2c;
case 0x737e2f:c.instructions+=4;goto B737e2f;
case 0x737e31:c.instructions+=3;goto B737e31;
case 0x737e33:c.instructions+=2;goto B737e33;
case 0x737e36:c.instructions+=1;goto B737e36;
case 0x737e3a:goto L737e3a;
case 0x737e3e:c.instructions+=6;goto B737e3e;
case 0x737e3f:c.instructions+=5;goto B737e3f;
case 0x737e43:c.instructions+=4;goto B737e43;
case 0x737e44:c.instructions+=3;goto B737e44;
case 0x737e45:c.instructions+=2;goto B737e45;
case 0x737e46:c.instructions+=1;goto B737e46;
case 0x737e4b:goto L737e4b;
case 0x737e4e:c.instructions+=2;goto B737e4e;
case 0x737e50:c.instructions+=1;goto B737e50;
case 0x737e56:goto L737e56;
case 0x737e5a:c.instructions+=4;goto B737e5a;
case 0x737e5e:c.instructions+=3;goto B737e5e;
case 0x737e62:c.instructions+=2;goto B737e62;
case 0x737e64:c.instructions+=1;goto B737e64;
case 0x737e66:goto L737e66;
case 0x737e6a:c.instructions+=7;goto B737e6a;
case 0x737e6e:c.instructions+=6;goto B737e6e;
case 0x737e6f:c.instructions+=5;goto B737e6f;
case 0x737e72:c.instructions+=4;goto B737e72;
case 0x737e75:c.instructions+=3;goto B737e75;
case 0x737e78:c.instructions+=2;goto B737e78;
case 0x737e7b:c.instructions+=1;goto B737e7b;
case 0x737e7d:goto L737e7d;
case 0x737e81:c.instructions+=18;goto B737e81;
case 0x737e85:c.instructions+=17;goto B737e85;
case 0x737e87:c.instructions+=16;goto B737e87;
case 0x737e89:c.instructions+=15;goto B737e89;
case 0x737e8d:c.instructions+=14;goto B737e8d;
case 0x737e91:c.instructions+=13;goto B737e91;
case 0x737e95:c.instructions+=12;goto B737e95;
case 0x737e99:c.instructions+=11;goto B737e99;
case 0x737e9d:c.instructions+=10;goto B737e9d;
case 0x737e9f:c.instructions+=9;goto B737e9f;
case 0x737ea3:c.instructions+=8;goto B737ea3;
case 0x737ea7:c.instructions+=7;goto B737ea7;
case 0x737eab:c.instructions+=6;goto B737eab;
case 0x737eaf:c.instructions+=5;goto B737eaf;
case 0x737eb3:c.instructions+=4;goto B737eb3;
case 0x737eb7:c.instructions+=3;goto B737eb7;
case 0x737ebb:c.instructions+=2;goto B737ebb;
case 0x737ebf:c.instructions+=1;goto B737ebf;
case 0x737ec1:goto L737ec1;
case 0x737ec5:c.instructions+=6;goto B737ec5;
case 0x737ec7:c.instructions+=5;goto B737ec7;
case 0x737eca:c.instructions+=4;goto B737eca;
case 0x737ecd:c.instructions+=3;goto B737ecd;
case 0x737ed0:c.instructions+=2;goto B737ed0;
case 0x737ed4:c.instructions+=1;goto B737ed4;
case 0x737ed6:goto L737ed6;
case 0x737ede:goto L737ede;
case 0x737ee2:c.instructions+=2;goto B737ee2;
case 0x737ee3:c.instructions+=1;goto B737ee3;
case 0x737ee9:goto L737ee9;
case 0x737eea:c.instructions+=2;goto B737eea;
case 0x737eeb:c.instructions+=1;goto B737eeb;
case 0x737ef0:goto L737ef0;
case 0x737ef3:goto L737ef3;
case 0x737ef7:c.instructions+=4;goto B737ef7;
case 0x737ef8:c.instructions+=3;goto B737ef8;
case 0x737efa:c.instructions+=2;goto B737efa;
case 0x737efe:c.instructions+=1;goto B737efe;
case 0x737f04:goto L737f04;
case 0x737f0a:c.instructions+=3;goto B737f0a;
case 0x737f0c:c.instructions+=2;goto B737f0c;
case 0x737f0e:c.instructions+=1;goto B737f0e;
case 0x737f10:goto L737f10;
case 0x737f14:c.instructions+=9;goto B737f14;
case 0x737f17:c.instructions+=8;goto B737f17;
case 0x737f18:c.instructions+=7;goto B737f18;
case 0x737f19:c.instructions+=6;goto B737f19;
case 0x737f1a:c.instructions+=5;goto B737f1a;
case 0x737f1b:c.instructions+=4;goto B737f1b;
case 0x737f1d:c.instructions+=3;goto B737f1d;
case 0x737f1e:c.instructions+=2;goto B737f1e;
case 0x737f21:c.instructions+=1;goto B737f21;
case 0x737f22:goto L737f22;
case 0x737f24:c.instructions+=4;goto B737f24;
case 0x737f25:c.instructions+=3;goto B737f25;
case 0x737f26:c.instructions+=2;goto B737f26;
case 0x737f29:c.instructions+=1;goto B737f29;
case 0x737f2a:goto L737f2a;
case 0x737f2c:goto L737f2c;
case 0x737f2d:c.instructions+=5;goto B737f2d;
case 0x737f2e:c.instructions+=4;goto B737f2e;
case 0x737f2f:c.instructions+=3;goto B737f2f;
case 0x737f30:c.instructions+=2;goto B737f30;
case 0x737f33:c.instructions+=1;goto B737f33;
case 0x737f40:goto L737f40;
case 0x737f44:c.instructions+=8;goto B737f44;
case 0x737f45:c.instructions+=7;goto B737f45;
case 0x737f46:c.instructions+=6;goto B737f46;
case 0x737f49:c.instructions+=5;goto B737f49;
case 0x737f4c:c.instructions+=4;goto B737f4c;
case 0x737f52:c.instructions+=3;goto B737f52;
case 0x737f54:c.instructions+=2;goto B737f54;
case 0x737f56:c.instructions+=1;goto B737f56;
case 0x737f58:goto L737f58;
case 0x737f59:c.instructions+=1;goto B737f59;
case 0x737f5e:goto L737f5e;
case 0x737f61:c.instructions+=1;goto B737f61;
case 0x737f67:goto L737f67;
case 0x737f6d:c.instructions+=10;goto B737f6d;
case 0x737f73:c.instructions+=9;goto B737f73;
case 0x737f79:c.instructions+=8;goto B737f79;
case 0x737f7f:c.instructions+=7;goto B737f7f;
case 0x737f85:c.instructions+=6;goto B737f85;
case 0x737f8b:c.instructions+=5;goto B737f8b;
case 0x737f91:c.instructions+=4;goto B737f91;
case 0x737f97:c.instructions+=3;goto B737f97;
case 0x737f9c:c.instructions+=2;goto B737f9c;
case 0x737f9f:c.instructions+=1;goto B737f9f;
case 0x737fa0:goto L737fa0;
case 0x737fa3:c.instructions+=6;goto B737fa3;
case 0x737fa6:c.instructions+=5;goto B737fa6;
case 0x737faa:c.instructions+=4;goto B737faa;
case 0x737fae:c.instructions+=3;goto B737fae;
case 0x737fb1:c.instructions+=2;goto B737fb1;
case 0x737fb2:c.instructions+=1;goto B737fb2;
case 0x737fb4:goto L737fb4;
case 0x737fb5:c.instructions+=2;goto B737fb5;
case 0x737fb6:c.instructions+=1;goto B737fb6;
case 0x737fc0:goto L737fc0;
case 0x737fc1:c.instructions+=20;goto B737fc1;
case 0x737fc2:c.instructions+=19;goto B737fc2;
case 0x737fc4:c.instructions+=18;goto B737fc4;
case 0x737fc9:c.instructions+=17;goto B737fc9;
case 0x737fcc:c.instructions+=16;goto B737fcc;
case 0x737fd0:c.instructions+=15;goto B737fd0;
case 0x737fd3:c.instructions+=14;goto B737fd3;
case 0x737fd5:c.instructions+=13;goto B737fd5;
case 0x737fd8:c.instructions+=12;goto B737fd8;
case 0x737fdb:c.instructions+=11;goto B737fdb;
case 0x737fde:c.instructions+=10;goto B737fde;
case 0x737fe1:c.instructions+=9;goto B737fe1;
case 0x737fe4:c.instructions+=8;goto B737fe4;
case 0x737fe7:c.instructions+=7;goto B737fe7;
case 0x737fec:c.instructions+=6;goto B737fec;
case 0x737ff0:c.instructions+=5;goto B737ff0;
case 0x737ff3:c.instructions+=4;goto B737ff3;
case 0x737ff6:c.instructions+=3;goto B737ff6;
case 0x737ffa:c.instructions+=2;goto B737ffa;
case 0x737ffe:c.instructions+=1;goto B737ffe;
default:missing_instruction(c.pc);}
B737000:L737000:{c.instructions+=1;NFSU2_TR(0x737000);
if(r1(R+518)){{goto L737023;}}
}
B737002:L737002:{c.instructions+=9;NFSU2_TR(0x737002);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737006:{NFSU2_TR(0x737006);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73700a:{NFSU2_TR(0x73700a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73700b:{NFSU2_TR(0x73700b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B73700e:{NFSU2_TR(0x73700e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737010:{NFSU2_TR(0x737010);
w4(R+20,u32(0x1ull));
}
B737015:{NFSU2_TR(0x737015);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737019:{NFSU2_TR(0x737019);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73701d:{NFSU2_TR(0x73701d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x736f60u,736);}
}
B737023:L737023:{c.instructions+=7;NFSU2_TR(0x737023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737024:{NFSU2_TR(0x737024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737025:{NFSU2_TR(0x737025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737026:{NFSU2_TR(0x737026);
__builtin_memmove((R+0),(R+20),4);
}
B737028:{NFSU2_TR(0x737028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737029:{NFSU2_TR(0x737029);
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
B73702c:{NFSU2_TR(0x73702c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737030:L737030:{c.instructions+=14;NFSU2_TR(0x737030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B737033:{NFSU2_TR(0x737033);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737037:{NFSU2_TR(0x737037);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B73703a:{NFSU2_TR(0x73703a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73703b:{NFSU2_TR(0x73703b);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B73703e:{NFSU2_TR(0x73703e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73703f:{NFSU2_TR(0x73703f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B737043:{NFSU2_TR(0x737043);
__builtin_memmove((R+0),(R+8),4);
}
B737045:{NFSU2_TR(0x737045);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B737048:{NFSU2_TR(0x737048);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73704c:{NFSU2_TR(0x73704c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737050:{NFSU2_TR(0x737050);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B737052:{NFSU2_TR(0x737052);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737056:{NFSU2_TR(0x737056);
if(r1(R+518)){{goto L7370b7;}}
}
B737058:L737058:{c.instructions+=2;NFSU2_TR(0x737058);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B737059:{NFSU2_TR(0x737059);
if(r1(R+518)){{goto L73709a;}}
}
B73705b:L73705b:{c.instructions+=2;NFSU2_TR(0x73705b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B73705c:{NFSU2_TR(0x73705c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7370d5;}}
}
B73705e:L73705e:{c.instructions+=4;NFSU2_TR(0x73705e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B737062:{NFSU2_TR(0x737062);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737063:{NFSU2_TR(0x737063);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737064:{NFSU2_TR(0x737064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737069ull));
TAIL_STATIC(0x735bd0u,735);
}
B737069:L737069:{c.instructions+=6;NFSU2_TR(0x737069);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B73706c:{NFSU2_TR(0x73706c);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B73706f:{NFSU2_TR(0x73706f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737070:{NFSU2_TR(0x737070);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737071:{NFSU2_TR(0x737071);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737075:{NFSU2_TR(0x737075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73707aull));
TAIL_STATIC(0x735cc0u,735);
}
B73707a:L73707a:{c.instructions+=3;NFSU2_TR(0x73707a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73707d:{NFSU2_TR(0x73707d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73707f:{NFSU2_TR(0x73707f);
if(r1(R+518)){{goto L73708d;}}
}
B737081:L737081:{c.instructions+=3;NFSU2_TR(0x737081);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+8),(U+8),2);
}
B737085:{NFSU2_TR(0x737085);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B737089:{NFSU2_TR(0x737089);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73708d:L73708d:{c.instructions+=4;NFSU2_TR(0x73708d);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B737092:{NFSU2_TR(0x737092);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737096:{NFSU2_TR(0x737096);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B737098:{NFSU2_TR(0x737098);
{goto L7370d0;}
}
B73709a:L73709a:{c.instructions+=6;NFSU2_TR(0x73709a);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(r2(U+8)));
}
B73709e:{NFSU2_TR(0x73709e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7370a2:{NFSU2_TR(0x7370a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7370a3:{NFSU2_TR(0x7370a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7370a4:{NFSU2_TR(0x7370a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7370a5:{NFSU2_TR(0x7370a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7370aaull));
TAIL_STATIC(0x735c30u,735);
}
B7370aa:L7370aa:{c.instructions+=4;NFSU2_TR(0x7370aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7370ae:{NFSU2_TR(0x7370ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7370b2:{NFSU2_TR(0x7370b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7370b5:{NFSU2_TR(0x7370b5);
{goto L7370ce;}
}
B7370b7:L7370b7:{c.instructions+=4;NFSU2_TR(0x7370b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B7370bb:{NFSU2_TR(0x7370bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7370bc:{NFSU2_TR(0x7370bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7370bd:{NFSU2_TR(0x7370bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7370c2ull));
TAIL_STATIC(0x735bd0u,735);
}
B7370c2:L7370c2:{c.instructions+=3;NFSU2_TR(0x7370c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7370c6:{NFSU2_TR(0x7370c6);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B7370cb:{NFSU2_TR(0x7370cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7370ce:L7370ce:{c.instructions+=1;NFSU2_TR(0x7370ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7370d0:L7370d0:{c.instructions+=2;NFSU2_TR(0x7370d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B7370d3:{NFSU2_TR(0x7370d3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7370dd;}}
}
B7370d5:L7370d5:{c.instructions+=5;NFSU2_TR(0x7370d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7370d6:{NFSU2_TR(0x7370d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7370d8:{NFSU2_TR(0x7370d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7370d9:{NFSU2_TR(0x7370d9);
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
B7370dc:{NFSU2_TR(0x7370dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7370dd:L7370dd:{c.instructions+=5;NFSU2_TR(0x7370dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7370de:{NFSU2_TR(0x7370de);
w4(R+0,u32(0x1ull));
}
B7370e3:{NFSU2_TR(0x7370e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7370e4:{NFSU2_TR(0x7370e4);
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
B7370e7:{NFSU2_TR(0x7370e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7370f0:L7370f0:{c.instructions+=6;NFSU2_TR(0x7370f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B7370f4:{NFSU2_TR(0x7370f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7370f5:{NFSU2_TR(0x7370f5);
__builtin_memmove((R+24),(R+8),4);
}
B7370f7:{NFSU2_TR(0x7370f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B7370fb:{NFSU2_TR(0x7370fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7370fd:{NFSU2_TR(0x7370fd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L737103;}}
}
B7370ff:L7370ff:{c.instructions+=3;NFSU2_TR(0x7370ff);
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
B737101:{NFSU2_TR(0x737101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737102:{NFSU2_TR(0x737102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737103:L737103:{c.instructions+=5;NFSU2_TR(0x737103);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737107:{NFSU2_TR(0x737107);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B73710a:{NFSU2_TR(0x73710a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73710b:{NFSU2_TR(0x73710b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B73710d:{NFSU2_TR(0x73710d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737112ull));
TAIL_STATIC(0x736dd0u,736);
}
B737112:L737112:{c.instructions+=11;NFSU2_TR(0x737112);
__builtin_memmove((R+4),(R+0),4);
}
B737114:{NFSU2_TR(0x737114);
__builtin_memmove((R+0),(R+24),4);
}
B737116:{NFSU2_TR(0x737116);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B737117:{NFSU2_TR(0x737117);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B73711a:{NFSU2_TR(0x73711a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B73711c:{NFSU2_TR(0x73711c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73711f:{NFSU2_TR(0x73711f);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B737123:{NFSU2_TR(0x737123);
__builtin_memmove((R+4),(R+24),4);
}
B737125:{NFSU2_TR(0x737125);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B737128:{NFSU2_TR(0x737128);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B73712e:{NFSU2_TR(0x73712e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L737135;}}
}
B737130:L737130:{c.instructions+=3;NFSU2_TR(0x737130);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B737131:{NFSU2_TR(0x737131);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B737134:{NFSU2_TR(0x737134);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B737135:L737135:{c.instructions+=6;NFSU2_TR(0x737135);
w1(R+8,u8(0x1ull));
}
B737137:{NFSU2_TR(0x737137);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B737139:{NFSU2_TR(0x737139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73713a:{NFSU2_TR(0x73713a);
w4(R+4,u32(r1(R+8)));
}
B73713d:{NFSU2_TR(0x73713d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73713f:{NFSU2_TR(0x73713f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737140:L737140:{c.instructions+=5;NFSU2_TR(0x737140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737141:{NFSU2_TR(0x737141);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B737145:{NFSU2_TR(0x737145);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737147:{NFSU2_TR(0x737147);
w4(R+0,u32(0x1ull));
}
B73714c:{NFSU2_TR(0x73714c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737152;}}
}
B73714e:L73714e:{c.instructions+=3;NFSU2_TR(0x73714e);
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
B737150:{NFSU2_TR(0x737150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737151:{NFSU2_TR(0x737151);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737152:L737152:{c.instructions+=2;NFSU2_TR(0x737152);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B737157:{NFSU2_TR(0x737157);
if(r1(R+518)){{goto L737166;}}
}
B737159:L737159:{c.instructions+=3;NFSU2_TR(0x737159);
__builtin_memmove((R+8),(R+28),4);
}
B73715b:{NFSU2_TR(0x73715b);
__builtin_memmove((R+0),(R+24),4);
}
B73715d:{NFSU2_TR(0x73715d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737162ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7370f0u);}goto L7370f0;}
}
B737162:L737162:{c.instructions+=2;NFSU2_TR(0x737162);
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
B737164:{NFSU2_TR(0x737164);
if(r1(R+518)){{goto L7371b1;}}
}
B737166:L737166:{c.instructions+=3;NFSU2_TR(0x737166);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B737169:{NFSU2_TR(0x737169);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73716b:{NFSU2_TR(0x73716b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7371b1;}}
}
B73716d:L73716d:{c.instructions+=19;NFSU2_TR(0x73716d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73716f:{NFSU2_TR(0x73716f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B737172:{NFSU2_TR(0x737172);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737173:{NFSU2_TR(0x737173);
__builtin_memmove((R+0),(R+28),4);
}
B737175:{NFSU2_TR(0x737175);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B737176:{NFSU2_TR(0x737176);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B737179:{NFSU2_TR(0x737179);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B73717b:{NFSU2_TR(0x73717b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B73717e:{NFSU2_TR(0x73717e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737181:{NFSU2_TR(0x737181);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B737184:{NFSU2_TR(0x737184);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xfull))));
}
B737187:{NFSU2_TR(0x737187);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffcull))));
}
B73718a:{NFSU2_TR(0x73718a);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B73718c:{NFSU2_TR(0x73718c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B737190:{NFSU2_TR(0x737190);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B737193:{NFSU2_TR(0x737193);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B737198:{NFSU2_TR(0x737198);
__builtin_memmove((R+4),(R+28),4);
}
B73719a:{NFSU2_TR(0x73719a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B7371a0:{NFSU2_TR(0x7371a0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L7371a7;}}
}
B7371a2:L7371a2:{c.instructions+=3;NFSU2_TR(0x7371a2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B7371a3:{NFSU2_TR(0x7371a3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B7371a6:{NFSU2_TR(0x7371a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7371a7:L7371a7:{c.instructions+=5;NFSU2_TR(0x7371a7);
w1(R+8,u8(0x1ull));
}
B7371a9:{NFSU2_TR(0x7371a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B7371ab:{NFSU2_TR(0x7371ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7371ac:{NFSU2_TR(0x7371ac);
w4(R+4,u32(r1(R+8)));
}
B7371af:{NFSU2_TR(0x7371af);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7371b1:L7371b1:{c.instructions+=2;NFSU2_TR(0x7371b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7371b2:{NFSU2_TR(0x7371b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7371c0:L7371c0:{c.instructions+=18;NFSU2_TR(0x7371c0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7371c2:{NFSU2_TR(0x7371c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7371c5:{NFSU2_TR(0x7371c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7371c6:{NFSU2_TR(0x7371c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7371ca:{NFSU2_TR(0x7371ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7371cb:{NFSU2_TR(0x7371cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7371cc:{NFSU2_TR(0x7371cc);
w4(R+0,u32(0x1ull));
}
B7371d1:{NFSU2_TR(0x7371d1);
__builtin_memmove((R+24),(R+4),4);
}
B7371d3:{NFSU2_TR(0x7371d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7371d7:{NFSU2_TR(0x7371d7);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7full))));
}
B7371da:{NFSU2_TR(0x7371da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7371dd:{NFSU2_TR(0x7371dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7371e0:{NFSU2_TR(0x7371e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfull))));
}
B7371e3:{NFSU2_TR(0x7371e3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B7371e6:{NFSU2_TR(0x7371e6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7371e8:{NFSU2_TR(0x7371e8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7371ea:{NFSU2_TR(0x7371ea);
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
B7371ec:{NFSU2_TR(0x7371ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73722b;}}
}
B7371ee:L7371ee:{c.instructions+=3;NFSU2_TR(0x7371ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7371ef:{NFSU2_TR(0x7371ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7371f3:{NFSU2_TR(0x7371f3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B7371f6:L7371f6:{c.instructions+=3;NFSU2_TR(0x7371f6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+8,u32(r1(U+0)));
}
B7371f9:{NFSU2_TR(0x7371f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7371fb:{NFSU2_TR(0x7371fb);
if(r1(R+518)){{goto L737216;}}
}
B7371fd:L7371fd:{c.instructions+=2;NFSU2_TR(0x7371fd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737203:{NFSU2_TR(0x737203);
if(r1(R+518)){{goto L737216;}}
}
B737205:L737205:{c.instructions+=2;NFSU2_TR(0x737205);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73720b:{NFSU2_TR(0x73720b);
if(r1(R+518)){{goto L737216;}}
}
B73720d:L73720d:{c.instructions+=3;NFSU2_TR(0x73720d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B737210:{NFSU2_TR(0x737210);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B737214:{NFSU2_TR(0x737214);
if(r1(R+518)){{goto L737228;}}
}
B737216:L737216:{c.instructions+=4;NFSU2_TR(0x737216);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B737217:{NFSU2_TR(0x737217);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B73721a:{NFSU2_TR(0x73721a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B73721c:{NFSU2_TR(0x73721c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7371f6u);}goto L7371f6;}}
}
B73721e:L73721e:{c.instructions+=6;NFSU2_TR(0x73721e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73721f:{NFSU2_TR(0x73721f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737220:{NFSU2_TR(0x737220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737221:{NFSU2_TR(0x737221);
w4(R+0,u32(0x1ull));
}
B737226:{NFSU2_TR(0x737226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737227:{NFSU2_TR(0x737227);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737228:L737228:{c.instructions+=2;NFSU2_TR(0x737228);
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
B73722a:{NFSU2_TR(0x73722a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73722b:L73722b:{c.instructions+=4;NFSU2_TR(0x73722b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73722c:{NFSU2_TR(0x73722c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73722d:{NFSU2_TR(0x73722d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73722e:{NFSU2_TR(0x73722e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737230:L737230:{c.instructions+=14;NFSU2_TR(0x737230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B737233:{NFSU2_TR(0x737233);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737234:{NFSU2_TR(0x737234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737235:{NFSU2_TR(0x737235);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737236:{NFSU2_TR(0x737236);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73723a:{NFSU2_TR(0x73723a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B73723e:{NFSU2_TR(0x73723e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B737240:{NFSU2_TR(0x737240);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B737242:{NFSU2_TR(0x737242);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737244:{NFSU2_TR(0x737244);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737248:{NFSU2_TR(0x737248);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73724c:{NFSU2_TR(0x73724c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B737254:{NFSU2_TR(0x737254);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737258:{NFSU2_TR(0x737258);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737277;}}
}
B73725a:L73725a:{c.instructions+=2;NFSU2_TR(0x73725a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B73725d:{NFSU2_TR(0x73725d);
__builtin_memmove((R+4),(R+4),4);
}
B737260:L737260:{c.instructions+=2;NFSU2_TR(0x737260);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xfeull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B737263:{NFSU2_TR(0x737263);
if(r1(R+518)){{goto L73726f;}}
}
B737265:L737265:{c.instructions+=4;NFSU2_TR(0x737265);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B737266:{NFSU2_TR(0x737266);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B737269:{NFSU2_TR(0x737269);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73726b:{NFSU2_TR(0x73726b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737260u);}goto L737260;}}
}
B73726d:L73726d:{c.instructions+=1;NFSU2_TR(0x73726d);
{goto L737277;}
}
B73726f:L73726f:{c.instructions+=1;NFSU2_TR(0x73726f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B737277:L737277:{c.instructions+=11;NFSU2_TR(0x737277);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73727b:{NFSU2_TR(0x73727b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73727f:{NFSU2_TR(0x73727f);
__builtin_memmove((R+8),gp(0x8b5174),4);
}
B737285:{NFSU2_TR(0x737285);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B737289:{NFSU2_TR(0x737289);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73728d:{NFSU2_TR(0x73728d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B737291:{NFSU2_TR(0x737291);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737292:{NFSU2_TR(0x737292);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737293:{NFSU2_TR(0x737293);
__builtin_memmove((R+8),(R+24),4);
}
B737295:{NFSU2_TR(0x737295);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737299:{NFSU2_TR(0x737299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73729eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7371c0u);}goto L7371c0;}
}
B73729e:L73729e:{c.instructions+=3;NFSU2_TR(0x73729e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7372a1:{NFSU2_TR(0x7372a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7372a3:{NFSU2_TR(0x7372a3);
if(r1(R+518)){{goto L7373e4;}}
}
B7372a9:L7372a9:{c.instructions+=10;NFSU2_TR(0x7372a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7372ad:{NFSU2_TR(0x7372ad);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7372af:{NFSU2_TR(0x7372af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7372b2:{NFSU2_TR(0x7372b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7372b3:{NFSU2_TR(0x7372b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((R+20),(U+0),4);
}
B7372b6:{NFSU2_TR(0x7372b6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7full))));
}
B7372b9:{NFSU2_TR(0x7372b9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B7372bc:{NFSU2_TR(0x7372bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7372be:{NFSU2_TR(0x7372be);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7372c2:{NFSU2_TR(0x7372c2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7372d4;}}
}
B7372c4:L7372c4:{c.instructions+=1;NFSU2_TR(0x7372c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7372c8:L7372c8:{c.instructions+=6;NFSU2_TR(0x7372c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7372c9:{NFSU2_TR(0x7372c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7372ca:{NFSU2_TR(0x7372ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7372cb:{NFSU2_TR(0x7372cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7372cc:{NFSU2_TR(0x7372cc);
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
B7372cf:{NFSU2_TR(0x7372cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7372d0:L7372d0:{c.instructions+=1;NFSU2_TR(0x7372d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7372d4:L7372d4:{c.instructions+=7;NFSU2_TR(0x7372d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7372d8:{NFSU2_TR(0x7372d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7372dc:{NFSU2_TR(0x7372dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7372dd:{NFSU2_TR(0x7372dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7372de:{NFSU2_TR(0x7372de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7372df:{NFSU2_TR(0x7372df);
__builtin_memmove((R+0),(R+28),4);
}
B7372e1:{NFSU2_TR(0x7372e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7372e6ull));
TAIL_STATIC(0x736f30u,736);
}
B7372e6:L7372e6:{c.instructions+=3;NFSU2_TR(0x7372e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7372e9:{NFSU2_TR(0x7372e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7372eb:{NFSU2_TR(0x7372eb);
if(r1(R+518)){{goto L737362;}}
}
B7372ed:L7372ed:{c.instructions+=3;NFSU2_TR(0x7372ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7372f1:{NFSU2_TR(0x7372f1);
__builtin_memmove((R+28),(R+12),4);
}
B7372f3:{NFSU2_TR(0x7372f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7372f8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737140u);}goto L737140;}
}
B7372f8:L7372f8:{c.instructions+=2;NFSU2_TR(0x7372f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7372fa:{NFSU2_TR(0x7372fa);
if(r1(R+518)){{goto L737362;}}
}
B7372fc:L7372fc:{c.instructions+=3;NFSU2_TR(0x7372fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7372fd:{NFSU2_TR(0x7372fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7372fe:{NFSU2_TR(0x7372fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737303ull));
TAIL_STATIC(0x735d70u,735);
}
B737303:L737303:{c.instructions+=3;NFSU2_TR(0x737303);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737306:{NFSU2_TR(0x737306);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737308:{NFSU2_TR(0x737308);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73731a;}}
}
B73730a:L73730a:{c.instructions+=2;NFSU2_TR(0x73730a);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73730e:{NFSU2_TR(0x73730e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737362;}}
}
B737310:L737310:{c.instructions+=3;NFSU2_TR(0x737310);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737314:{NFSU2_TR(0x737314);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737318:{NFSU2_TR(0x737318);
{goto L737362;}
}
B73731a:L73731a:{c.instructions+=4;NFSU2_TR(0x73731a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73731e:{NFSU2_TR(0x73731e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x91ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B737324:{NFSU2_TR(0x737324);
w1(R+512,u8((r1(R+0))<(u8(0xc8ull))));
}
B737326:{NFSU2_TR(0x737326);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L737349;}}
}
B737328:L737328:{c.instructions+=8;NFSU2_TR(0x737328);
w4(R+8,u32(r1(R+0)));
}
B73732b:{NFSU2_TR(0x73732b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73732f:{NFSU2_TR(0x73732f);
u8 U[13];
w4(U+0,u32(u32(u32(0x92ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B737336:{NFSU2_TR(0x737336);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x91ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73733c:{NFSU2_TR(0x73733c);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x1ull))));
}
B73733e:{NFSU2_TR(0x73733e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73733f:{NFSU2_TR(0x73733f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x91ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737345:{NFSU2_TR(0x737345);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737349:L737349:{c.instructions+=3;NFSU2_TR(0x737349);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73734d:{NFSU2_TR(0x73734d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73734f:{NFSU2_TR(0x73734f);
if(r1(R+518)){{goto L737362;}}
}
B737351:L737351:{c.instructions+=4;NFSU2_TR(0x737351);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737355:{NFSU2_TR(0x737355);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737359:{NFSU2_TR(0x737359);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73735a:{NFSU2_TR(0x73735a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73735full));
TAIL_STATIC(0x736ed0u,736);
}
B73735f:L73735f:{c.instructions+=1;NFSU2_TR(0x73735f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B737362:L737362:{c.instructions+=6;NFSU2_TR(0x737362);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B737366:{NFSU2_TR(0x737366);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73736a:{NFSU2_TR(0x73736a);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B73736c:{NFSU2_TR(0x73736c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B73736d:{NFSU2_TR(0x73736d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73736f:{NFSU2_TR(0x73736f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7372d0u);}goto L7372d0;}}
}
B737375:L737375:{c.instructions+=3;NFSU2_TR(0x737375);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737379:{NFSU2_TR(0x737379);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73737b:{NFSU2_TR(0x73737b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7372c8u);}goto L7372c8;}}
}
B737381:L737381:{c.instructions+=3;NFSU2_TR(0x737381);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737385:{NFSU2_TR(0x737385);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737388:{NFSU2_TR(0x737388);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7372c8u);}goto L7372c8;}}
}
B73738e:L73738e:{c.instructions+=4;NFSU2_TR(0x73738e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737392:{NFSU2_TR(0x737392);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B737398:{NFSU2_TR(0x737398);
w1(R+512,u8((r1(R+0))<(u8(0xc8ull))));
}
B73739a:{NFSU2_TR(0x73739a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7373b4;}}
}
B73739c:L73739c:{c.instructions+=4;NFSU2_TR(0x73739c);
w4(R+0,u32(r1(R+0)));
}
B73739f:{NFSU2_TR(0x73739f);
u8 U[13];
w4(U+0,u32(u32(u32(0x92ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7373a6:{NFSU2_TR(0x7373a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B7373ac:{NFSU2_TR(0x7373ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7373b4:L7373b4:{c.instructions+=3;NFSU2_TR(0x7373b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7373b8:{NFSU2_TR(0x7373b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7373ba:{NFSU2_TR(0x7373ba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7372c4u);}goto L7372c4;}}
}
B7373c0:L7373c0:{c.instructions+=6;NFSU2_TR(0x7373c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7373c4:{NFSU2_TR(0x7373c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B7373c7:{NFSU2_TR(0x7373c7);
u8 U[12];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7373cb:{NFSU2_TR(0x7373cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7373cc:{NFSU2_TR(0x7373cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7373d0:{NFSU2_TR(0x7373d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7373d5ull));
TAIL_STATIC(0x736ed0u,736);
}
B7373d5:L7373d5:{c.instructions+=8;NFSU2_TR(0x7373d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7373d9:{NFSU2_TR(0x7373d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7373dc:{NFSU2_TR(0x7373dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7373dd:{NFSU2_TR(0x7373dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7373de:{NFSU2_TR(0x7373de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7373df:{NFSU2_TR(0x7373df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7373e0:{NFSU2_TR(0x7373e0);
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
B7373e3:{NFSU2_TR(0x7373e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7373e4:L7373e4:{c.instructions+=6;NFSU2_TR(0x7373e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7373e5:{NFSU2_TR(0x7373e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7373e6:{NFSU2_TR(0x7373e6);
__builtin_memmove((R+0),(R+12),4);
}
B7373e8:{NFSU2_TR(0x7373e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7373e9:{NFSU2_TR(0x7373e9);
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
B7373ec:{NFSU2_TR(0x7373ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7373f0:L7373f0:{c.instructions+=7;NFSU2_TR(0x7373f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7373f4:{NFSU2_TR(0x7373f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B7373f7:{NFSU2_TR(0x7373f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7373f8:{NFSU2_TR(0x7373f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7373fb:{NFSU2_TR(0x7373fb);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7373fd:{NFSU2_TR(0x7373fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7373ff:{NFSU2_TR(0x7373ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73744d;}}
}
B737401:L737401:{c.instructions+=5;NFSU2_TR(0x737401);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737402:{NFSU2_TR(0x737402);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737403:{NFSU2_TR(0x737403);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737406:{NFSU2_TR(0x737406);
__builtin_memmove((R+12),(R+0),4);
}
B737408:{NFSU2_TR(0x737408);
{goto L737410;}
}
B737410:L737410:{c.instructions+=12;NFSU2_TR(0x737410);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B737414:{NFSU2_TR(0x737414);
u8 U[13];
w4(U+0,u32(u32(u32(0x92ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B73741c:{NFSU2_TR(0x73741c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B73741f:{NFSU2_TR(0x73741f);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B737425:{NFSU2_TR(0x737425);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B737429:{NFSU2_TR(0x737429);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B73742d:{NFSU2_TR(0x73742d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73742e:{NFSU2_TR(0x73742e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B737432:{NFSU2_TR(0x737432);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737433:{NFSU2_TR(0x737433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737434:{NFSU2_TR(0x737434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737435:{NFSU2_TR(0x737435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73743aull));
TAIL_STATIC(0x738a20u,738);
}
B73743a:L73743a:{c.instructions+=3;NFSU2_TR(0x73743a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73743d:{NFSU2_TR(0x73743d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73743f:{NFSU2_TR(0x73743f);
if(r1(R+518)){{goto L737445;}}
}
B737441:L737441:{c.instructions+=1;NFSU2_TR(0x737441);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))+u32(r4(U+4))));
}
B737445:L737445:{c.instructions+=3;NFSU2_TR(0x737445);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B737448:{NFSU2_TR(0x737448);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B737449:{NFSU2_TR(0x737449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737410u);}goto L737410;}}
}
B73744b:L73744b:{c.instructions+=2;NFSU2_TR(0x73744b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73744c:{NFSU2_TR(0x73744c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73744d:L73744d:{c.instructions+=4;NFSU2_TR(0x73744d);
__builtin_memmove((R+4),gp(0x8b4f5c),4);
}
B737453:{NFSU2_TR(0x737453);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737455:{NFSU2_TR(0x737455);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737457:{NFSU2_TR(0x737457);
if(r1(R+518)){{goto L737461;}}
}
B737459:L737459:{c.instructions+=4;NFSU2_TR(0x737459);
__builtin_memmove((R+0),(R+20),4);
}
B73745b:{NFSU2_TR(0x73745b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B73745e:{NFSU2_TR(0x73745e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B73745f:{NFSU2_TR(0x73745f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x73745f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x73745f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B737461:L737461:{c.instructions+=3;NFSU2_TR(0x737461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737462:{NFSU2_TR(0x737462);
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
B737465:{NFSU2_TR(0x737465);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737466:L737466:{c.instructions+=1;NFSU2_TR(0x737466);
u8 U[4];
{SPILL();c.pc=0x737466u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B737469:L737469:{c.instructions+=1;NFSU2_TR(0x737469);
u8 U[4];
{SPILL();c.pc=0x737469u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B73746c:L73746c:{c.instructions+=1;NFSU2_TR(0x73746c);
u8 U[4];
{SPILL();c.pc=0x73746cu;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B73746e:L73746e:{c.instructions+=1;NFSU2_TR(0x73746e);
u8 U[4];
{SPILL();c.pc=0x73746eu;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B737470:L737470:{c.instructions+=11;NFSU2_TR(0x737470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x190ull))));
}
B737476:{NFSU2_TR(0x737476);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737477:{NFSU2_TR(0x737477);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737478:{NFSU2_TR(0x737478);
u8 U[8];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73747f:{NFSU2_TR(0x73747f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737480:{NFSU2_TR(0x737480);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737481:{NFSU2_TR(0x737481);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B737485:{NFSU2_TR(0x737485);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B737487:{NFSU2_TR(0x737487);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B737489:{NFSU2_TR(0x737489);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73748b:{NFSU2_TR(0x73748b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7374d6;}}
}
B73748d:L73748d:{c.instructions+=1;NFSU2_TR(0x73748d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B737490:L737490:{c.instructions+=20;NFSU2_TR(0x737490);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(r2(U+0)));
}
B737493:{NFSU2_TR(0x737493);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B737497:{NFSU2_TR(0x737497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73749b:{NFSU2_TR(0x73749b);
w4(R+0,u32(r1(R+8)));
}
B73749e:{NFSU2_TR(0x73749e);
__builtin_memmove((R+20),(R+0),4);
}
B7374a0:{NFSU2_TR(0x7374a0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B7374a3:{NFSU2_TR(0x7374a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+0))));
}
B7374a6:{NFSU2_TR(0x7374a6);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819a94ull))+u32(r4(U+0))));
w8(U+12,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+20,u64(s64(s32(r4(U+8)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+0,u32(r8(U+28)));
}
B7374ae:{NFSU2_TR(0x7374ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7374b5:{NFSU2_TR(0x7374b5);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B7374b9:{NFSU2_TR(0x7374b9);
w4(R+0,u32(r1(R+8)));
}
B7374bc:{NFSU2_TR(0x7374bc);
__builtin_memmove((R+8),(R+0),4);
}
B7374be:{NFSU2_TR(0x7374be);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B7374c1:{NFSU2_TR(0x7374c1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B7374c4:{NFSU2_TR(0x7374c4);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819a94ull))+u32(r4(U+0))));
w8(U+12,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+20,u64(s64(s32(r4(U+8)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+0,u32(r8(U+28)));
}
B7374cc:{NFSU2_TR(0x7374cc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B7374ce:{NFSU2_TR(0x7374ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7374cf:{NFSU2_TR(0x7374cf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B7374d2:{NFSU2_TR(0x7374d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7374d4:{NFSU2_TR(0x7374d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737490u);}goto L737490;}}
}
B7374d6:L7374d6:{c.instructions+=3;NFSU2_TR(0x7374d6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7374d8:{NFSU2_TR(0x7374d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7374da:{NFSU2_TR(0x7374da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73751e;}}
}
B7374dc:L7374dc:{c.instructions+=1;NFSU2_TR(0x7374dc);
__builtin_memmove((R+16),(R+16),4);
}
B7374e0:L7374e0:{c.instructions+=3;NFSU2_TR(0x7374e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7374e2:{NFSU2_TR(0x7374e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7374e3:{NFSU2_TR(0x7374e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7374e8ull));
TAIL_STATIC(0x738860u,738);
}
B7374e8:L7374e8:{c.instructions+=5;NFSU2_TR(0x7374e8);
w4(R+4,u32(r2(R+0)));
}
B7374eb:{NFSU2_TR(0x7374eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7374ee:{NFSU2_TR(0x7374ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7374f0:{NFSU2_TR(0x7374f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7374f2:{NFSU2_TR(0x7374f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7374ff;}}
}
B7374f4:L7374f4:{c.instructions+=2;NFSU2_TR(0x7374f4);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B7374f8:{NFSU2_TR(0x7374f8);
if(r1(R+519)){{goto L7374ff;}}
}
B7374fa:L7374fa:{c.instructions+=3;NFSU2_TR(0x7374fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7374fb:{NFSU2_TR(0x7374fb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7374fd:{NFSU2_TR(0x7374fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7374f4u);}goto L7374f4;}}
}
B7374ff:L7374ff:{c.instructions+=9;NFSU2_TR(0x7374ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737506:{NFSU2_TR(0x737506);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B737509:{NFSU2_TR(0x737509);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B73750d:{NFSU2_TR(0x73750d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B737511:{NFSU2_TR(0x737511);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B737513:{NFSU2_TR(0x737513);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B737514:{NFSU2_TR(0x737514);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737516:{NFSU2_TR(0x737516);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B73751c:{NFSU2_TR(0x73751c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7374e0u);}goto L7374e0;}}
}
B73751e:L73751e:{c.instructions+=3;NFSU2_TR(0x73751e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B737520:{NFSU2_TR(0x737520);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737522:{NFSU2_TR(0x737522);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737558;}}
}
B737524:L737524:{c.instructions+=3;NFSU2_TR(0x737524);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73752b:{NFSU2_TR(0x73752b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B73752e:{NFSU2_TR(0x73752e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B737531:L737531:{c.instructions+=8;NFSU2_TR(0x737531);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B737534:{NFSU2_TR(0x737534);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B737539:{NFSU2_TR(0x737539);
__builtin_memmove((R+12),(R+0),4);
}
B73753b:{NFSU2_TR(0x73753b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B73753e:{NFSU2_TR(0x73753e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B737541:{NFSU2_TR(0x737541);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819a94ull))+u32(r4(U+0))));
w8(U+12,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+20,u64(s64(s32(r4(U+8)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+0,u32(r8(U+28)));
}
B737549:{NFSU2_TR(0x737549);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73754b:{NFSU2_TR(0x73754b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L737550;}}
}
B73754d:L73754d:{c.instructions+=2;NFSU2_TR(0x73754d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B73754f:{NFSU2_TR(0x73754f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B737550:L737550:{c.instructions+=4;NFSU2_TR(0x737550);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B737551:{NFSU2_TR(0x737551);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B737554:{NFSU2_TR(0x737554);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737556:{NFSU2_TR(0x737556);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737531u);}goto L737531;}}
}
B737558:L737558:{c.instructions+=6;NFSU2_TR(0x737558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737559:{NFSU2_TR(0x737559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73755a:{NFSU2_TR(0x73755a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73755b:{NFSU2_TR(0x73755b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73755c:{NFSU2_TR(0x73755c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x190ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x190ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x190ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737562:{NFSU2_TR(0x737562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73756d:L73756d:{c.instructions+=1;NFSU2_TR(0x73756d);
u8 U[4];
{SPILL();c.pc=0x73756du;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B737570:L737570:{c.instructions+=15;NFSU2_TR(0x737570);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B737574:{NFSU2_TR(0x737574);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737578:{NFSU2_TR(0x737578);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73757b:{NFSU2_TR(0x73757b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B73757e:{NFSU2_TR(0x73757e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B737581:{NFSU2_TR(0x737581);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x3ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B737588:{NFSU2_TR(0x737588);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B73758a:{NFSU2_TR(0x73758a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B73758d:{NFSU2_TR(0x73758d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73758e:{NFSU2_TR(0x73758e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B737591:{NFSU2_TR(0x737591);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B737595:{NFSU2_TR(0x737595);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737597:{NFSU2_TR(0x737597);
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
B737599:{NFSU2_TR(0x737599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73759a:{NFSU2_TR(0x73759a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7375b1;}}
}
B73759c:L73759c:{c.instructions+=2;NFSU2_TR(0x73759c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73759d:{NFSU2_TR(0x73759d);
__builtin_memmove((R+4),(R+4),4);
}
B7375a0:L7375a0:{c.instructions+=5;NFSU2_TR(0x7375a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B7375a7:{NFSU2_TR(0x7375a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7375ab:{NFSU2_TR(0x7375ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7375ac:{NFSU2_TR(0x7375ac);
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
B7375ae:{NFSU2_TR(0x7375ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7375a0u);}goto L7375a0;}}
}
B7375b0:L7375b0:{c.instructions+=1;NFSU2_TR(0x7375b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7375b1:L7375b1:{c.instructions+=1;NFSU2_TR(0x7375b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7375c0:L7375c0:{c.instructions+=7;NFSU2_TR(0x7375c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7375c1:{NFSU2_TR(0x7375c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7375c2:{NFSU2_TR(0x7375c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B7375c6:{NFSU2_TR(0x7375c6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7375c8:{NFSU2_TR(0x7375c8);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7375ca:{NFSU2_TR(0x7375ca);
w4(R+0,u32(0x1ull));
}
B7375cf:{NFSU2_TR(0x7375cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73762c;}}
}
B7375d1:L7375d1:{c.instructions+=2;NFSU2_TR(0x7375d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7375d2:{NFSU2_TR(0x7375d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((R+28),(U+0),4);
}
B7375d5:L7375d5:{c.instructions+=2;NFSU2_TR(0x7375d5);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7375d9:{NFSU2_TR(0x7375d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L737618;}}
}
B7375db:L7375db:{c.instructions+=3;NFSU2_TR(0x7375db);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B7375de:{NFSU2_TR(0x7375de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7375e4:{NFSU2_TR(0x7375e4);
if(r1(R+518)){{goto L737618;}}
}
B7375e6:L7375e6:{c.instructions+=2;NFSU2_TR(0x7375e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B7375e8:{NFSU2_TR(0x7375e8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L737618;}}
}
B7375ea:L7375ea:{c.instructions+=11;NFSU2_TR(0x7375ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7375ee:{NFSU2_TR(0x7375ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7375f2:{NFSU2_TR(0x7375f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7375f5:{NFSU2_TR(0x7375f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B7375f8:{NFSU2_TR(0x7375f8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B7375fb:{NFSU2_TR(0x7375fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x3ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B737602:{NFSU2_TR(0x737602);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B737605:{NFSU2_TR(0x737605);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B737607:{NFSU2_TR(0x737607);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B73760b:{NFSU2_TR(0x73760b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73760d:{NFSU2_TR(0x73760d);
if(r1(R+518)){{goto L737618;}}
}
B73760f:L73760f:{c.instructions+=3;NFSU2_TR(0x73760f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B737612:{NFSU2_TR(0x737612);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B737616:{NFSU2_TR(0x737616);
if(r1(R+518)){{goto L737629;}}
}
B737618:L737618:{c.instructions+=4;NFSU2_TR(0x737618);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B737619:{NFSU2_TR(0x737619);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B73761c:{NFSU2_TR(0x73761c);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73761e:{NFSU2_TR(0x73761e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7375d5u);}goto L7375d5;}}
}
B737620:L737620:{c.instructions+=5;NFSU2_TR(0x737620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737621:{NFSU2_TR(0x737621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737622:{NFSU2_TR(0x737622);
w4(R+0,u32(0x1ull));
}
B737627:{NFSU2_TR(0x737627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737628:{NFSU2_TR(0x737628);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737629:L737629:{c.instructions+=2;NFSU2_TR(0x737629);
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
B73762b:{NFSU2_TR(0x73762b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73762c:L73762c:{c.instructions+=3;NFSU2_TR(0x73762c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73762d:{NFSU2_TR(0x73762d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73762e:{NFSU2_TR(0x73762e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737630:L737630:{c.instructions+=18;NFSU2_TR(0x737630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B737633:{NFSU2_TR(0x737633);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737634:{NFSU2_TR(0x737634);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737635:{NFSU2_TR(0x737635);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B737639:{NFSU2_TR(0x737639);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B73763d:{NFSU2_TR(0x73763d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737641:{NFSU2_TR(0x737641);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x3ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B737648:{NFSU2_TR(0x737648);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73764b:{NFSU2_TR(0x73764b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffcull))));
}
B73764e:{NFSU2_TR(0x73764e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B737651:{NFSU2_TR(0x737651);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B737654:{NFSU2_TR(0x737654);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B737656:{NFSU2_TR(0x737656);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B73765a:{NFSU2_TR(0x73765a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73765b:{NFSU2_TR(0x73765b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73765c:{NFSU2_TR(0x73765c);
__builtin_memmove((R+4),(R+20),4);
}
B73765e:{NFSU2_TR(0x73765e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737662:{NFSU2_TR(0x737662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737667ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737570u);}goto L737570;}
}
B737667:L737667:{c.instructions+=3;NFSU2_TR(0x737667);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73766b:{NFSU2_TR(0x73766b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
}
B73766e:{NFSU2_TR(0x73766e);
w4(R+4,u32(0xcull));
}
B737673:L737673:{c.instructions+=4;NFSU2_TR(0x737673);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B737676:{NFSU2_TR(0x737676);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B737679:{NFSU2_TR(0x737679);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B73767a:{NFSU2_TR(0x73767a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737673u);}goto L737673;}}
}
B73767c:L73767c:{c.instructions+=4;NFSU2_TR(0x73767c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B737680:{NFSU2_TR(0x737680);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B737683:{NFSU2_TR(0x737683);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737687:{NFSU2_TR(0x737687);
{goto L737690;}
}
B737690:L737690:{c.instructions+=5;NFSU2_TR(0x737690);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737692:{NFSU2_TR(0x737692);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737694:{NFSU2_TR(0x737694);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73769c:{NFSU2_TR(0x73769c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7376a0:{NFSU2_TR(0x7376a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73779f;}}
}
B7376a6:L7376a6:{c.instructions+=3;NFSU2_TR(0x7376a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7376aa:{NFSU2_TR(0x7376aa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xbull))));
}
B7376ad:{NFSU2_TR(0x7376ad);
__builtin_memmove((R+4),(R+4),4);
}
B7376b0:L7376b0:{c.instructions+=2;NFSU2_TR(0x7376b0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7376b3:{NFSU2_TR(0x7376b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73777b;}}
}
B7376b9:L7376b9:{c.instructions+=14;NFSU2_TR(0x7376b9);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+12)),r1(U+0));
}
B7376bc:{NFSU2_TR(0x7376bc);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B7376c1:{NFSU2_TR(0x7376c1);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B7376c6:{NFSU2_TR(0x7376c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B7376ca:{NFSU2_TR(0x7376ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7376ce:{NFSU2_TR(0x7376ce);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B7376d4:{NFSU2_TR(0x7376d4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7376d8:{NFSU2_TR(0x7376d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7376dc:{NFSU2_TR(0x7376dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7376e0:{NFSU2_TR(0x7376e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7376e4:{NFSU2_TR(0x7376e4);
u8 U[13];
w4(U+0,u32(u32(u32(0x92ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B7376ec:{NFSU2_TR(0x7376ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7376ed:{NFSU2_TR(0x7376ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7376ee:{NFSU2_TR(0x7376ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7376f3ull));
TAIL_STATIC(0x7389f0u,738);
}
B7376f3:L7376f3:{c.instructions+=3;NFSU2_TR(0x7376f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7376f6:{NFSU2_TR(0x7376f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7376f8:{NFSU2_TR(0x7376f8);
if(r1(R+518)){{goto L73774b;}}
}
B7376fa:L7376fa:{c.instructions+=4;NFSU2_TR(0x7376fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7376fe:{NFSU2_TR(0x7376fe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B737700:{NFSU2_TR(0x737700);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737702:{NFSU2_TR(0x737702);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73777b;}}
}
B737704:L737704:{c.instructions+=2;NFSU2_TR(0x737704);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B737707:{NFSU2_TR(0x737707);
{goto L737710;}
}
B737710:L737710:{c.instructions+=3;NFSU2_TR(0x737710);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737714:{NFSU2_TR(0x737714);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73771a:{NFSU2_TR(0x73771a);
if(r1(R+518)){{goto L73776b;}}
}
B73771c:L73771c:{c.instructions+=2;NFSU2_TR(0x73771c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73771e:{NFSU2_TR(0x73771e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L73776b;}}
}
B737720:L737720:{c.instructions+=4;NFSU2_TR(0x737720);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B737722:{NFSU2_TR(0x737722);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7full))));
}
B737725:{NFSU2_TR(0x737725);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B737728:{NFSU2_TR(0x737728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L737755;}}
}
B73772a:L73772a:{c.instructions+=4;NFSU2_TR(0x73772a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73772e:{NFSU2_TR(0x73772e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B737731:{NFSU2_TR(0x737731);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737733:{NFSU2_TR(0x737733);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73773d;}}
}
B737735:L737735:{c.instructions+=3;NFSU2_TR(0x737735);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+12)),r1(U+0));
}
B737737:{NFSU2_TR(0x737737);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73773b:{NFSU2_TR(0x73773b);
{goto L73776b;}
}
B73773d:L73773d:{c.instructions+=5;NFSU2_TR(0x73773d);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B737740:{NFSU2_TR(0x737740);
w4(R+20,u32(0x1ull));
}
B737745:{NFSU2_TR(0x737745);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B737747:{NFSU2_TR(0x737747);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737749:{NFSU2_TR(0x737749);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73776b;}}
}
B73774b:L73774b:{c.instructions+=7;NFSU2_TR(0x73774b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73774c:{NFSU2_TR(0x73774c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73774d:{NFSU2_TR(0x73774d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73774e:{NFSU2_TR(0x73774e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737750:{NFSU2_TR(0x737750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737751:{NFSU2_TR(0x737751);
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
B737754:{NFSU2_TR(0x737754);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737755:L737755:{c.instructions+=2;NFSU2_TR(0x737755);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xfeull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B737758:{NFSU2_TR(0x737758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73776b;}}
}
B73775a:L73775a:{c.instructions+=5;NFSU2_TR(0x73775a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B73775d:{NFSU2_TR(0x73775d);
w4(R+20,u32(0x1ull));
}
B737762:{NFSU2_TR(0x737762);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B737764:{NFSU2_TR(0x737764);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737768:{NFSU2_TR(0x737768);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B73776b:L73776b:{c.instructions+=5;NFSU2_TR(0x73776b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73776f:{NFSU2_TR(0x73776f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B737770:{NFSU2_TR(0x737770);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B737773:{NFSU2_TR(0x737773);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737775:{NFSU2_TR(0x737775);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737710u);}goto L737710;}}
}
B737777:L737777:{c.instructions+=1;NFSU2_TR(0x737777);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73777b:L73777b:{c.instructions+=7;NFSU2_TR(0x73777b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73777f:{NFSU2_TR(0x73777f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737783:{NFSU2_TR(0x737783);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B737784:{NFSU2_TR(0x737784);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B737787:{NFSU2_TR(0x737787);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737789:{NFSU2_TR(0x737789);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73778d:{NFSU2_TR(0x73778d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7376b0u);}goto L7376b0;}}
}
B737793:L737793:{c.instructions+=3;NFSU2_TR(0x737793);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737797:{NFSU2_TR(0x737797);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737799:{NFSU2_TR(0x737799);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737690u);}goto L737690;}}
}
B73779f:L73779f:{c.instructions+=7;NFSU2_TR(0x73779f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7377a0:{NFSU2_TR(0x7377a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7377a1:{NFSU2_TR(0x7377a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7377a2:{NFSU2_TR(0x7377a2);
w4(R+0,u32(0x1ull));
}
B7377a7:{NFSU2_TR(0x7377a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7377a8:{NFSU2_TR(0x7377a8);
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
B7377ab:{NFSU2_TR(0x7377ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7377b0:L7377b0:{c.instructions+=12;NFSU2_TR(0x7377b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B7377b3:{NFSU2_TR(0x7377b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7377b4:{NFSU2_TR(0x7377b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7377b5:{NFSU2_TR(0x7377b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7377b9:{NFSU2_TR(0x7377b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7377bd:{NFSU2_TR(0x7377bd);
__builtin_memmove((R+12),(R+0),4);
}
B7377bf:{NFSU2_TR(0x7377bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B7377c2:{NFSU2_TR(0x7377c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7377c5:{NFSU2_TR(0x7377c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7377c6:{NFSU2_TR(0x7377c6);
w4(R+28,u32(0xc8ull));
}
B7377cb:{NFSU2_TR(0x7377cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7377cf:{NFSU2_TR(0x7377cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7377da;}}
}
B7377d1:L7377d1:{c.instructions+=6;NFSU2_TR(0x7377d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7377d2:{NFSU2_TR(0x7377d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7377d3:{NFSU2_TR(0x7377d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7377d5:{NFSU2_TR(0x7377d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7377d6:{NFSU2_TR(0x7377d6);
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
B7377d9:{NFSU2_TR(0x7377d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7377da:L7377da:{c.instructions+=3;NFSU2_TR(0x7377da);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B7377dd:{NFSU2_TR(0x7377dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7377e0:{NFSU2_TR(0x7377e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7377e7;}}
}
B7377e2:L7377e2:{c.instructions+=2;NFSU2_TR(0x7377e2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7377e5:{NFSU2_TR(0x7377e5);
{goto L7377f4;}
}
B7377e7:L7377e7:{c.instructions+=2;NFSU2_TR(0x7377e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7377ea:{NFSU2_TR(0x7377ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7377f2;}}
}
B7377ec:L7377ec:{c.instructions+=2;NFSU2_TR(0x7377ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7377ee:{NFSU2_TR(0x7377ee);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7377d1u);}goto L7377d1;}}
}
B7377f0:L7377f0:{c.instructions+=1;NFSU2_TR(0x7377f0);
{goto L7377f6;}
}
B7377f2:L7377f2:{c.instructions+=1;NFSU2_TR(0x7377f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7377f4:L7377f4:{c.instructions+=1;NFSU2_TR(0x7377f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7377d1u);}goto L7377d1;}}
}
B7377f6:L7377f6:{c.instructions+=3;NFSU2_TR(0x7377f6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7377f7:{NFSU2_TR(0x7377f7);
__builtin_memmove((R+4),(R+24),4);
}
B7377f9:{NFSU2_TR(0x7377f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7377feull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737570u);}goto L737570;}
}
B7377fe:L7377fe:{c.instructions+=2;NFSU2_TR(0x7377fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737802:{NFSU2_TR(0x737802);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737808:L737808:{c.instructions+=2;NFSU2_TR(0x737808);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73780a:{NFSU2_TR(0x73780a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7378be;}}
}
B737810:L737810:{c.instructions+=8;NFSU2_TR(0x737810);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737814:{NFSU2_TR(0x737814);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B737815:{NFSU2_TR(0x737815);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B737817:{NFSU2_TR(0x737817);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737819:{NFSU2_TR(0x737819);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B737821:{NFSU2_TR(0x737821);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737825:{NFSU2_TR(0x737825);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737829:{NFSU2_TR(0x737829);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7378bc;}}
}
B73782f:L73782f:{c.instructions+=2;NFSU2_TR(0x73782f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B737833:{NFSU2_TR(0x737833);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xbull))));
}
B737836:L737836:{c.instructions+=4;NFSU2_TR(0x737836);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B73783b:{NFSU2_TR(0x73783b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B73783e:{NFSU2_TR(0x73783e);
__builtin_memmove((R+4),(R+20),4);
}
B737840:{NFSU2_TR(0x737840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737845ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7375c0u);}goto L7375c0;}
}
B737845:L737845:{c.instructions+=2;NFSU2_TR(0x737845);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737847:{NFSU2_TR(0x737847);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73784f;}}
}
B737849:L737849:{c.instructions+=2;NFSU2_TR(0x737849);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73784d:{NFSU2_TR(0x73784d);
{goto L73789c;}
}
B73784f:L73784f:{c.instructions+=2;NFSU2_TR(0x73784f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B737852:{NFSU2_TR(0x737852);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73789c;}}
}
B737854:L737854:{c.instructions+=7;NFSU2_TR(0x737854);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737858:{NFSU2_TR(0x737858);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73785e:{NFSU2_TR(0x73785e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B737862:{NFSU2_TR(0x737862);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737865:{NFSU2_TR(0x737865);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff5ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737868:{NFSU2_TR(0x737868);
__builtin_memmove((R+0),(R+20),4);
}
B73786a:{NFSU2_TR(0x73786a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73786full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737030u);}goto L737030;}
}
B73786f:L73786f:{c.instructions+=2;NFSU2_TR(0x73786f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737871:{NFSU2_TR(0x737871);
if(r1(R+518)){{goto L7378cd;}}
}
B737873:L737873:{c.instructions+=9;NFSU2_TR(0x737873);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737877:{NFSU2_TR(0x737877);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73787b:{NFSU2_TR(0x73787b);
__builtin_memmove((R+4),(R+12),4);
}
B73787d:{NFSU2_TR(0x73787d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73787e:{NFSU2_TR(0x73787e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73787f:{NFSU2_TR(0x73787f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737880:{NFSU2_TR(0x737880);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737881:{NFSU2_TR(0x737881);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737882:{NFSU2_TR(0x737882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737887ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737230u);}goto L737230;}
}
B737887:L737887:{c.instructions+=3;NFSU2_TR(0x737887);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B73788a:{NFSU2_TR(0x73788a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73788c:{NFSU2_TR(0x73788c);
if(r1(R+518)){{goto L7378cd;}}
}
B73788e:L73788e:{c.instructions+=4;NFSU2_TR(0x73788e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B737892:{NFSU2_TR(0x737892);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B737896:{NFSU2_TR(0x737896);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737899:{NFSU2_TR(0x737899);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+28)),r1(U+0));
}
B73789c:L73789c:{c.instructions+=6;NFSU2_TR(0x73789c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7378a0:{NFSU2_TR(0x7378a0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7378a1:{NFSU2_TR(0x7378a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B7378a4:{NFSU2_TR(0x7378a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7378a6:{NFSU2_TR(0x7378a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7378aa:{NFSU2_TR(0x7378aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737836u);}goto L737836;}}
}
B7378ac:L7378ac:{c.instructions+=4;NFSU2_TR(0x7378ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7378b0:{NFSU2_TR(0x7378b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7378b2:{NFSU2_TR(0x7378b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7378b6:{NFSU2_TR(0x7378b6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737808u);}goto L737808;}}
}
B7378bc:L7378bc:{c.instructions+=1;NFSU2_TR(0x7378bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7378be:L7378be:{c.instructions+=1;NFSU2_TR(0x7378be);
if(r1(R+518)){{goto L7378cd;}}
}
B7378c0:L7378c0:{c.instructions+=7;NFSU2_TR(0x7378c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7378c1:{NFSU2_TR(0x7378c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7378c2:{NFSU2_TR(0x7378c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7378c3:{NFSU2_TR(0x7378c3);
w4(R+0,u32(0x1ull));
}
B7378c8:{NFSU2_TR(0x7378c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7378c9:{NFSU2_TR(0x7378c9);
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
B7378cc:{NFSU2_TR(0x7378cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7378cd:L7378cd:{c.instructions+=7;NFSU2_TR(0x7378cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7378ce:{NFSU2_TR(0x7378ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7378cf:{NFSU2_TR(0x7378cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7378d0:{NFSU2_TR(0x7378d0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7378d2:{NFSU2_TR(0x7378d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7378d3:{NFSU2_TR(0x7378d3);
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
B7378d6:{NFSU2_TR(0x7378d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7378e0:L7378e0:{c.instructions+=5;NFSU2_TR(0x7378e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7378e1:{NFSU2_TR(0x7378e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7378e5:{NFSU2_TR(0x7378e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7378e8:{NFSU2_TR(0x7378e8);
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
B7378ea:{NFSU2_TR(0x7378ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737947;}}
}
B7378ec:L7378ec:{c.instructions+=6;NFSU2_TR(0x7378ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7378ed:{NFSU2_TR(0x7378ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7378ee:{NFSU2_TR(0x7378ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7378ef:{NFSU2_TR(0x7378ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7378f2:{NFSU2_TR(0x7378f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7378f6:{NFSU2_TR(0x7378f6);
{goto L737900;}
}
B737900:L737900:{c.instructions+=5;NFSU2_TR(0x737900);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+24,u32(r1(U+0)));
}
B737904:{NFSU2_TR(0x737904);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737907:{NFSU2_TR(0x737907);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73790b:{NFSU2_TR(0x73790b);
u8 U[12];
w4(U+0,u32(u32(u32(0x92ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B737912:{NFSU2_TR(0x737912);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737936;}}
}
B737914:L737914:{c.instructions+=3;NFSU2_TR(0x737914);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737916:{NFSU2_TR(0x737916);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737917:{NFSU2_TR(0x737917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73791cull));
TAIL_STATIC(0x738860u,738);
}
B73791c:L73791c:{c.instructions+=9;NFSU2_TR(0x73791c);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B737920:{NFSU2_TR(0x737920);
w4(R+0,u32(r2(R+0)));
}
B737923:{NFSU2_TR(0x737923);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B737926:{NFSU2_TR(0x737926);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737929:{NFSU2_TR(0x737929);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B73792d:{NFSU2_TR(0x73792d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B73792e:{NFSU2_TR(0x73792e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737931:{NFSU2_TR(0x737931);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B737934:{NFSU2_TR(0x737934);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737914u);}goto L737914;}}
}
B737936:L737936:{c.instructions+=5;NFSU2_TR(0x737936);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73793a:{NFSU2_TR(0x73793a);
w1(R+512,carry<u32>(r4(R+20),u32(0xcull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B73793d:{NFSU2_TR(0x73793d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73793e:{NFSU2_TR(0x73793e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737942:{NFSU2_TR(0x737942);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737900u);}goto L737900;}}
}
B737944:L737944:{c.instructions+=3;NFSU2_TR(0x737944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737945:{NFSU2_TR(0x737945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737946:{NFSU2_TR(0x737946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737947:L737947:{c.instructions+=2;NFSU2_TR(0x737947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B737948:{NFSU2_TR(0x737948);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737950:L737950:{c.instructions+=18;NFSU2_TR(0x737950);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737951:{NFSU2_TR(0x737951);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737952:{NFSU2_TR(0x737952);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737953:{NFSU2_TR(0x737953);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737954:{NFSU2_TR(0x737954);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B737958:{NFSU2_TR(0x737958);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73795a:{NFSU2_TR(0x73795a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73795d:{NFSU2_TR(0x73795d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B73795e:{NFSU2_TR(0x73795e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B737961:{NFSU2_TR(0x737961);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B737964:{NFSU2_TR(0x737964);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737968:{NFSU2_TR(0x737968);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B73796c:{NFSU2_TR(0x73796c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73796f:{NFSU2_TR(0x73796f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737970:{NFSU2_TR(0x737970);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737974:{NFSU2_TR(0x737974);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B737976:{NFSU2_TR(0x737976);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737979:{NFSU2_TR(0x737979);
__builtin_memmove((R+16),(R+16),4);
}
B737980:L737980:{c.instructions+=6;NFSU2_TR(0x737980);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B737983:{NFSU2_TR(0x737983);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B737985:{NFSU2_TR(0x737985);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737988:{NFSU2_TR(0x737988);
w4(R+0,u32(r1(R+0)));
}
B73798b:{NFSU2_TR(0x73798b);
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
B73798d:{NFSU2_TR(0x73798d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7379b7;}}
}
B73798f:L73798f:{c.instructions+=6;NFSU2_TR(0x73798f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+8),(U+0),1);
}
B737991:{NFSU2_TR(0x737991);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B737992:{NFSU2_TR(0x737992);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0xcull))));
}
B737995:{NFSU2_TR(0x737995);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B737997:{NFSU2_TR(0x737997);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73799a:{NFSU2_TR(0x73799a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7379a5;}}
}
B73799c:L73799c:{c.instructions+=2;NFSU2_TR(0x73799c);
w4(R+20,u32(0x1ull));
}
B7379a1:{NFSU2_TR(0x7379a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7379a5:L7379a5:{c.instructions+=7;NFSU2_TR(0x7379a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7379a9:{NFSU2_TR(0x7379a9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B7379ac:{NFSU2_TR(0x7379ac);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B7379ae:{NFSU2_TR(0x7379ae);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7379b0:{NFSU2_TR(0x7379b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7379b3:{NFSU2_TR(0x7379b3);
__builtin_memmove((R+12),(R+28),4);
}
B7379b5:{NFSU2_TR(0x7379b5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737980u);}goto L737980;}}
}
B7379b7:L7379b7:{c.instructions+=7;NFSU2_TR(0x7379b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7379bb:{NFSU2_TR(0x7379bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7379bc:{NFSU2_TR(0x7379bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7379bd:{NFSU2_TR(0x7379bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7379be:{NFSU2_TR(0x7379be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7379bf:{NFSU2_TR(0x7379bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7379c0:{NFSU2_TR(0x7379c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7379d0:L7379d0:{c.instructions+=10;NFSU2_TR(0x7379d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7379d1:{NFSU2_TR(0x7379d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7379d2:{NFSU2_TR(0x7379d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7379d3:{NFSU2_TR(0x7379d3);
__builtin_memmove((R+28),(R+0),4);
}
B7379d5:{NFSU2_TR(0x7379d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B7379d9:{NFSU2_TR(0x7379d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7379dc:{NFSU2_TR(0x7379dc);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B7379de:{NFSU2_TR(0x7379de);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7379e0:{NFSU2_TR(0x7379e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7379e2:{NFSU2_TR(0x7379e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737a00;}}
}
B7379e4:L7379e4:{c.instructions+=3;NFSU2_TR(0x7379e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((R+4),(U+0),4);
}
B7379e7:{NFSU2_TR(0x7379e7);
__builtin_memmove((R+24),(R+0),4);
}
B7379e9:{NFSU2_TR(0x7379e9);
__builtin_memmove((R+16),(R+16),4);
}
B7379f0:L7379f0:{c.instructions+=5;NFSU2_TR(0x7379f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B7379f3:{NFSU2_TR(0x7379f3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B7379f5:{NFSU2_TR(0x7379f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B7379f8:{NFSU2_TR(0x7379f8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B7379f9:{NFSU2_TR(0x7379f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7379f0u);}goto L7379f0;}}
}
B7379fb:L7379fb:{c.instructions+=1;NFSU2_TR(0x7379fb);
{goto L737a04;}
}
B737a00:L737a00:{c.instructions+=2;NFSU2_TR(0x737a00);
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
B737a02:{NFSU2_TR(0x737a02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L737a44;}}
}
B737a04:L737a04:{c.instructions+=4;NFSU2_TR(0x737a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737a08:{NFSU2_TR(0x737a08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737a0a:{NFSU2_TR(0x737a0a);
w4(R+24,u32(0x1ull));
}
B737a0f:{NFSU2_TR(0x737a0f);
if(r1(R+518)){{goto L737a1e;}}
}
B737a11:L737a11:{c.instructions+=2;NFSU2_TR(0x737a11);
__builtin_memmove((R+0),(R+12),4);
}
B737a13:{NFSU2_TR(0x737a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737a18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7373f0u);}goto L7373f0;}
}
B737a18:L737a18:{c.instructions+=2;NFSU2_TR(0x737a18);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B737a1c:{NFSU2_TR(0x737a1c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L737a33;}}
}
B737a1e:L737a1e:{c.instructions+=3;NFSU2_TR(0x737a1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B737a21:{NFSU2_TR(0x737a21);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B737a23:{NFSU2_TR(0x737a23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L737a40;}}
}
B737a25:L737a25:{c.instructions+=3;NFSU2_TR(0x737a25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a26:{NFSU2_TR(0x737a26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a27:{NFSU2_TR(0x737a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737a2cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737630u);}goto L737630;}
}
B737a2c:L737a2c:{c.instructions+=3;NFSU2_TR(0x737a2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737a2f:{NFSU2_TR(0x737a2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737a31:{NFSU2_TR(0x737a31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L737a40;}}
}
B737a33:L737a33:{c.instructions+=4;NFSU2_TR(0x737a33);
__builtin_memmove((R+8),(R+28),4);
}
B737a35:{NFSU2_TR(0x737a35);
__builtin_memmove((R+0),(R+12),4);
}
B737a37:{NFSU2_TR(0x737a37);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B737a39:{NFSU2_TR(0x737a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737a3eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737950u);}goto L737950;}
}
B737a3e:L737a3e:{c.instructions+=1;NFSU2_TR(0x737a3e);
__builtin_memmove((R+20),(R+0),4);
}
B737a40:L737a40:{c.instructions+=2;NFSU2_TR(0x737a40);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737a42:{NFSU2_TR(0x737a42);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737a00u);}goto L737a00;}}
}
B737a44:L737a44:{c.instructions+=5;NFSU2_TR(0x737a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737a45:{NFSU2_TR(0x737a45);
__builtin_memmove((R+0),(R+24),4);
}
B737a47:{NFSU2_TR(0x737a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737a48:{NFSU2_TR(0x737a48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737a49:{NFSU2_TR(0x737a49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737a50:L737a50:{c.instructions+=5;NFSU2_TR(0x737a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B737a53:{NFSU2_TR(0x737a53);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B737a57:{NFSU2_TR(0x737a57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a58:{NFSU2_TR(0x737a58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a59:{NFSU2_TR(0x737a59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737a5eull));
TAIL_STATIC(0x736480u,736);
}
B737a5e:L737a5e:{c.instructions+=3;NFSU2_TR(0x737a5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737a61:{NFSU2_TR(0x737a61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737a63:{NFSU2_TR(0x737a63);
if(r1(R+518)){{goto L737b0e;}}
}
B737a69:L737a69:{c.instructions+=8;NFSU2_TR(0x737a69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737a6d:{NFSU2_TR(0x737a6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737a71:{NFSU2_TR(0x737a71);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B737a74:{NFSU2_TR(0x737a74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737a76:{NFSU2_TR(0x737a76);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737a78:{NFSU2_TR(0x737a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737a7c:{NFSU2_TR(0x737a7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B737a7f:{NFSU2_TR(0x737a7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737b0e;}}
}
B737a85:L737a85:{c.instructions+=6;NFSU2_TR(0x737a85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a86:{NFSU2_TR(0x737a86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a87:{NFSU2_TR(0x737a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B737a8b:{NFSU2_TR(0x737a8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a8c:{NFSU2_TR(0x737a8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737a8d:{NFSU2_TR(0x737a8d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xaull))));
}
B737a90:L737a90:{c.instructions+=5;NFSU2_TR(0x737a90);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B737a95:{NFSU2_TR(0x737a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B737a98:{NFSU2_TR(0x737a98);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B737a9a:{NFSU2_TR(0x737a9a);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),u8(0x0ull)));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B737a9e:{NFSU2_TR(0x737a9e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737afe;}}
}
B737aa0:L737aa0:{c.instructions+=1;NFSU2_TR(0x737aa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((R+24),(U+0),4);
}
B737aa3:L737aa3:{c.instructions+=2;NFSU2_TR(0x737aa3);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xfeull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B737aa7:{NFSU2_TR(0x737aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L737ae6;}}
}
B737aa9:L737aa9:{c.instructions+=2;NFSU2_TR(0x737aa9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
}
B737aac:{NFSU2_TR(0x737aac);
if(r1(R+519)){{goto L737ae6;}}
}
B737aae:L737aae:{c.instructions+=9;NFSU2_TR(0x737aae);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B737ab2:{NFSU2_TR(0x737ab2);
__builtin_memmove((R+0),gp(0x8b5174),4);
}
B737ab7:{NFSU2_TR(0x737ab7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B737abb:{NFSU2_TR(0x737abb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+4,u32(r1(U+0)));
}
B737abf:{NFSU2_TR(0x737abf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737ac3:{NFSU2_TR(0x737ac3);
u8 U[13];
w4(U+0,u32(u32(u32(0x92ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B737acb:{NFSU2_TR(0x737acb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737acc:{NFSU2_TR(0x737acc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737acd:{NFSU2_TR(0x737acd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737ad2ull));
TAIL_STATIC(0x7389f0u,738);
}
B737ad2:L737ad2:{c.instructions+=3;NFSU2_TR(0x737ad2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737ad5:{NFSU2_TR(0x737ad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737ad7:{NFSU2_TR(0x737ad7);
if(r1(R+518)){{goto L737ae6;}}
}
B737ad9:L737ad9:{c.instructions+=4;NFSU2_TR(0x737ad9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B737adc:{NFSU2_TR(0x737adc);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B737adf:{NFSU2_TR(0x737adf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737ae3:{NFSU2_TR(0x737ae3);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B737ae6:L737ae6:{c.instructions+=5;NFSU2_TR(0x737ae6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B737aea:{NFSU2_TR(0x737aea);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B737aeb:{NFSU2_TR(0x737aeb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B737aee:{NFSU2_TR(0x737aee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737af0:{NFSU2_TR(0x737af0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737aa3u);}goto L737aa3;}}
}
B737af2:L737af2:{c.instructions+=3;NFSU2_TR(0x737af2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737af6:{NFSU2_TR(0x737af6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737afa:{NFSU2_TR(0x737afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737afe:L737afe:{c.instructions+=5;NFSU2_TR(0x737afe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B737aff:{NFSU2_TR(0x737aff);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B737b02:{NFSU2_TR(0x737b02);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737b04:{NFSU2_TR(0x737b04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737b08:{NFSU2_TR(0x737b08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737a90u);}goto L737a90;}}
}
B737b0a:L737b0a:{c.instructions+=4;NFSU2_TR(0x737b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737b0b:{NFSU2_TR(0x737b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737b0c:{NFSU2_TR(0x737b0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737b0d:{NFSU2_TR(0x737b0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737b0e:L737b0e:{c.instructions+=2;NFSU2_TR(0x737b0e);
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
B737b11:{NFSU2_TR(0x737b11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737b20:L737b20:{c.instructions+=9;NFSU2_TR(0x737b20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b21:{NFSU2_TR(0x737b21);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b22:{NFSU2_TR(0x737b22);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b23:{NFSU2_TR(0x737b23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B737b27:{NFSU2_TR(0x737b27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b28:{NFSU2_TR(0x737b28);
__builtin_memmove((R+24),(R+0),4);
}
B737b2a:{NFSU2_TR(0x737b2a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737b2c:{NFSU2_TR(0x737b2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b2d:{NFSU2_TR(0x737b2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L737b86;}}
}
B737b2f:L737b2f:{c.instructions+=3;NFSU2_TR(0x737b2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B737b32:{NFSU2_TR(0x737b32);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B737b34:{NFSU2_TR(0x737b34);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L737b86;}}
}
B737b36:L737b36:{c.instructions+=6;NFSU2_TR(0x737b36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B737b3a:{NFSU2_TR(0x737b3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B737b3d:{NFSU2_TR(0x737b3d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B737b3f:{NFSU2_TR(0x737b3f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737b41:{NFSU2_TR(0x737b41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B737b49:{NFSU2_TR(0x737b49);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737ba2;}}
}
B737b4b:L737b4b:{c.instructions+=2;NFSU2_TR(0x737b4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B737b4f:{NFSU2_TR(0x737b4f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x9ull))));
}
B737b52:L737b52:{c.instructions+=3;NFSU2_TR(0x737b52);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B737b54:{NFSU2_TR(0x737b54);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B737b56:{NFSU2_TR(0x737b56);
if(r1(R+518)){{goto L737b7e;}}
}
B737b58:L737b58:{c.instructions+=5;NFSU2_TR(0x737b58);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B737b5c:{NFSU2_TR(0x737b5c);
w4(R+8,u32(r1(R+0)));
}
B737b5f:{NFSU2_TR(0x737b5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b60:{NFSU2_TR(0x737b60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b61:{NFSU2_TR(0x737b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737b66ull));
TAIL_STATIC(0x738860u,738);
}
B737b66:L737b66:{c.instructions+=9;NFSU2_TR(0x737b66);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B737b69:{NFSU2_TR(0x737b69);
w4(R+0,u32(r2(R+0)));
}
B737b6c:{NFSU2_TR(0x737b6c);
w1(R+4,u8(u32(r1(R+4))+u32(r1(R+0))));
}
B737b6e:{NFSU2_TR(0x737b6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737b71:{NFSU2_TR(0x737b71);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737b74:{NFSU2_TR(0x737b74);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B737b75:{NFSU2_TR(0x737b75);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B737b78:{NFSU2_TR(0x737b78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737b7a:{NFSU2_TR(0x737b7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737b52u);}goto L737b52;}}
}
B737b7c:L737b7c:{c.instructions+=1;NFSU2_TR(0x737b7c);
{goto L737ba2;}
}
B737b7e:L737b7e:{c.instructions+=7;NFSU2_TR(0x737b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737b7f:{NFSU2_TR(0x737b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737b80:{NFSU2_TR(0x737b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737b81:{NFSU2_TR(0x737b81);
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
B737b83:{NFSU2_TR(0x737b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737b84:{NFSU2_TR(0x737b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B737b85:{NFSU2_TR(0x737b85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737b86:L737b86:{c.instructions+=3;NFSU2_TR(0x737b86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B737b8a:{NFSU2_TR(0x737b8a);
__builtin_memmove((R+0),(R+20),4);
}
B737b8c:{NFSU2_TR(0x737b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737b91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7378e0u);}goto L7378e0;}
}
B737b91:L737b91:{c.instructions+=4;NFSU2_TR(0x737b91);
__builtin_memmove((R+0),(R+12),4);
}
B737b93:{NFSU2_TR(0x737b93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737b94:{NFSU2_TR(0x737b94);
__builtin_memmove((R+12),(R+20),4);
}
B737b96:{NFSU2_TR(0x737b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737b9bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7379d0u);}goto L7379d0;}
}
B737b9b:L737b9b:{c.instructions+=2;NFSU2_TR(0x737b9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B737b9e:{NFSU2_TR(0x737b9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737ba2:L737ba2:{c.instructions+=5;NFSU2_TR(0x737ba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737ba6:{NFSU2_TR(0x737ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737baa:{NFSU2_TR(0x737baa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737bab:{NFSU2_TR(0x737bab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737bac:{NFSU2_TR(0x737bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737bb1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737a50u);}goto L737a50;}
}
B737bb1:L737bb1:{c.instructions+=8;NFSU2_TR(0x737bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737bb5:{NFSU2_TR(0x737bb5);
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
B737bb8:{NFSU2_TR(0x737bb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737bb9:{NFSU2_TR(0x737bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737bba:{NFSU2_TR(0x737bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737bbb:{NFSU2_TR(0x737bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737bbc:{NFSU2_TR(0x737bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B737bbd:{NFSU2_TR(0x737bbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737bc0:L737bc0:{c.instructions+=4;NFSU2_TR(0x737bc0);
__builtin_memmove((R+0),gp(0x8b5150),4);
}
B737bc5:{NFSU2_TR(0x737bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B737bc8:{NFSU2_TR(0x737bc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737bca:{NFSU2_TR(0x737bca);
if(r1(R+518)){{goto L737cdd;}}
}
B737bd0:L737bd0:{c.instructions+=5;NFSU2_TR(0x737bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737bd4:{NFSU2_TR(0x737bd4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B737bd8:{NFSU2_TR(0x737bd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737bd9:{NFSU2_TR(0x737bd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737bda:{NFSU2_TR(0x737bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737bdfull));
TAIL_STATIC(0x736350u,736);
}
B737bdf:L737bdf:{c.instructions+=3;NFSU2_TR(0x737bdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737be2:{NFSU2_TR(0x737be2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737be4:{NFSU2_TR(0x737be4);
if(r1(R+518)){{goto L737cdd;}}
}
B737bea:L737bea:{c.instructions+=15;NFSU2_TR(0x737bea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737bee:{NFSU2_TR(0x737bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B737bf0:{NFSU2_TR(0x737bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737bf1:{NFSU2_TR(0x737bf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737bf2:{NFSU2_TR(0x737bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B737bf5:{NFSU2_TR(0x737bf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B737bf9:{NFSU2_TR(0x737bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737bfd:{NFSU2_TR(0x737bfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B737c01:{NFSU2_TR(0x737c01);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B737c04:{NFSU2_TR(0x737c04);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B737c06:{NFSU2_TR(0x737c06);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737c08:{NFSU2_TR(0x737c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737c0c:{NFSU2_TR(0x737c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737c10:{NFSU2_TR(0x737c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737c14:{NFSU2_TR(0x737c14);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737cdb;}}
}
B737c1a:L737c1a:{c.instructions+=4;NFSU2_TR(0x737c1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c1b:{NFSU2_TR(0x737c1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c1c:{NFSU2_TR(0x737c1c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B737c1e:{NFSU2_TR(0x737c1e);
__builtin_memmove((R+28),(R+28),4);
}
B737c20:L737c20:{c.instructions+=7;NFSU2_TR(0x737c20);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B737c25:{NFSU2_TR(0x737c25);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(s32(s8(r1(U+12)))));
}
B737c2a:{NFSU2_TR(0x737c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B737c2d:{NFSU2_TR(0x737c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737c31:{NFSU2_TR(0x737c31);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B737c33:{NFSU2_TR(0x737c33);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+12)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B737c37:{NFSU2_TR(0x737c37);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737cc9;}}
}
B737c3d:L737c3d:{c.instructions+=2;NFSU2_TR(0x737c3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
}
B737c40:{NFSU2_TR(0x737c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737c44:L737c44:{c.instructions+=3;NFSU2_TR(0x737c44);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B737c47:{NFSU2_TR(0x737c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737c4c:{NFSU2_TR(0x737c4c);
if(r1(R+518)){{goto L737ca9;}}
}
B737c4e:L737c4e:{c.instructions+=4;NFSU2_TR(0x737c4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737c52:{NFSU2_TR(0x737c52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c53:{NFSU2_TR(0x737c53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c54:{NFSU2_TR(0x737c54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737c59ull));
TAIL_STATIC(0x738b20u,738);
}
B737c59:L737c59:{c.instructions+=11;NFSU2_TR(0x737c59);
__builtin_memmove((R+24),(R+0),4);
}
B737c5b:{NFSU2_TR(0x737c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B737c5e:{NFSU2_TR(0x737c5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B737c61:{NFSU2_TR(0x737c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B737c64:{NFSU2_TR(0x737c64);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b51a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B737c6b:{NFSU2_TR(0x737c6b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b519cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B737c72:{NFSU2_TR(0x737c72);
__builtin_memmove((R+8),gp(0x8b5174),4);
}
B737c78:{NFSU2_TR(0x737c78);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B737c7c:{NFSU2_TR(0x737c7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c7d:{NFSU2_TR(0x737c7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c7e:{NFSU2_TR(0x737c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737c83ull));
TAIL_STATIC(0x7389f0u,738);
}
B737c83:L737c83:{c.instructions+=3;NFSU2_TR(0x737c83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B737c86:{NFSU2_TR(0x737c86);
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
B737c88:{NFSU2_TR(0x737c88);
if(r1(R+518)){{goto L737ca9;}}
}
B737c8a:L737c8a:{c.instructions+=10;NFSU2_TR(0x737c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737c8e:{NFSU2_TR(0x737c8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c8f:{NFSU2_TR(0x737c8f);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B737c92:{NFSU2_TR(0x737c92);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737c96:{NFSU2_TR(0x737c96);
w4(R+8,u32(0x1ull));
}
B737c9b:{NFSU2_TR(0x737c9b);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+34))));
w1(U+24,u8((r1(U+34))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+34))-u32(u8(0x1ull))));
w4(U+26,shl<u32>(r4(U+35),u64(r1(U+25))));
w1(U+30,u8(s32(r4(U+26))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+31,u8((r1(U+34))==(u8(0x1ull))));
w1(U+32,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B737c9d:{NFSU2_TR(0x737c9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c9e:{NFSU2_TR(0x737c9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737c9f:{NFSU2_TR(0x737c9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737ca0:{NFSU2_TR(0x737ca0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b5150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737ca6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B737ca6:L737ca6:{c.instructions+=1;NFSU2_TR(0x737ca6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B737ca9:L737ca9:{c.instructions+=7;NFSU2_TR(0x737ca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737cad:{NFSU2_TR(0x737cad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737cb1:{NFSU2_TR(0x737cb1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B737cb2:{NFSU2_TR(0x737cb2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B737cb5:{NFSU2_TR(0x737cb5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737cb7:{NFSU2_TR(0x737cb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737cbb:{NFSU2_TR(0x737cbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737c44u);}goto L737c44;}}
}
B737cbd:L737cbd:{c.instructions+=3;NFSU2_TR(0x737cbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737cc1:{NFSU2_TR(0x737cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B737cc5:{NFSU2_TR(0x737cc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737cc9:L737cc9:{c.instructions+=5;NFSU2_TR(0x737cc9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B737cca:{NFSU2_TR(0x737cca);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B737ccd:{NFSU2_TR(0x737ccd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737ccf:{NFSU2_TR(0x737ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737cd3:{NFSU2_TR(0x737cd3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737c20u);}goto L737c20;}}
}
B737cd9:L737cd9:{c.instructions+=2;NFSU2_TR(0x737cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737cda:{NFSU2_TR(0x737cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737cdb:L737cdb:{c.instructions+=2;NFSU2_TR(0x737cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737cdc:{NFSU2_TR(0x737cdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737cdd:L737cdd:{c.instructions+=2;NFSU2_TR(0x737cdd);
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
B737ce0:{NFSU2_TR(0x737ce0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737cf0:L737cf0:{c.instructions+=9;NFSU2_TR(0x737cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B737cf3:{NFSU2_TR(0x737cf3);
__builtin_memmove((R+0),gp(0x8b5148),4);
}
B737cf8:{NFSU2_TR(0x737cf8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737cf9:{NFSU2_TR(0x737cf9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B737cfb:{NFSU2_TR(0x737cfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737cfc:{NFSU2_TR(0x737cfc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B737cfe:{NFSU2_TR(0x737cfe);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737d00:{NFSU2_TR(0x737d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737d04:{NFSU2_TR(0x737d04);
if(r1(R+518)){{goto L737f22;}}
}
B737d0a:L737d0a:{c.instructions+=5;NFSU2_TR(0x737d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737d0e:{NFSU2_TR(0x737d0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B737d12:{NFSU2_TR(0x737d12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737d13:{NFSU2_TR(0x737d13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737d14:{NFSU2_TR(0x737d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737d19ull));
TAIL_STATIC(0x736350u,736);
}
B737d19:L737d19:{c.instructions+=3;NFSU2_TR(0x737d19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B737d1c:{NFSU2_TR(0x737d1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737d1e:{NFSU2_TR(0x737d1e);
if(r1(R+518)){{goto L737f22;}}
}
B737d24:L737d24:{c.instructions+=14;NFSU2_TR(0x737d24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737d28:{NFSU2_TR(0x737d28);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737d2c:{NFSU2_TR(0x737d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B737d2e:{NFSU2_TR(0x737d2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737d2f:{NFSU2_TR(0x737d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B737d32:{NFSU2_TR(0x737d32);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B737d36:{NFSU2_TR(0x737d36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737d37:{NFSU2_TR(0x737d37);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B737d3b:{NFSU2_TR(0x737d3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B737d3e:{NFSU2_TR(0x737d3e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737d40:{NFSU2_TR(0x737d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737d44:{NFSU2_TR(0x737d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737d48:{NFSU2_TR(0x737d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737d4c:{NFSU2_TR(0x737d4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737d8f;}}
}
B737d4e:L737d4e:{c.instructions+=4;NFSU2_TR(0x737d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B737d51:{NFSU2_TR(0x737d51);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B737d54:{NFSU2_TR(0x737d54);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8b5198ull))));
}
B737d5a:{NFSU2_TR(0x737d5a);
__builtin_memmove((R+12),(R+12),4);
}
B737d60:L737d60:{c.instructions+=5;NFSU2_TR(0x737d60);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B737d64:{NFSU2_TR(0x737d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B737d66:{NFSU2_TR(0x737d66);
__builtin_memmove((R+4),gp(0x8b5174),4);
}
B737d6c:{NFSU2_TR(0x737d6c);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B737d6f:{NFSU2_TR(0x737d6f);
if(r1(R+518)){{goto L737d87;}}
}
B737d71:L737d71:{c.instructions+=2;NFSU2_TR(0x737d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737d72:{NFSU2_TR(0x737d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737d77ull));
TAIL_STATIC(0x735d00u,735);
}
B737d77:L737d77:{c.instructions+=4;NFSU2_TR(0x737d77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B737d7a:{NFSU2_TR(0x737d7a);
u8 U[2];
w1(R+523,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B737d7d:{NFSU2_TR(0x737d7d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737d81:{NFSU2_TR(0x737d81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L737f2a;}}
}
B737d87:L737d87:{c.instructions+=4;NFSU2_TR(0x737d87);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B737d88:{NFSU2_TR(0x737d88);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B737d8b:{NFSU2_TR(0x737d8b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737d8d:{NFSU2_TR(0x737d8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737d60u);}goto L737d60;}}
}
B737d8f:L737d8f:{c.instructions+=4;NFSU2_TR(0x737d8f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B737d91:{NFSU2_TR(0x737d91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737d93:{NFSU2_TR(0x737d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737d97:{NFSU2_TR(0x737d97);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L737f04;}}
}
B737d9d:L737d9d:{c.instructions+=4;NFSU2_TR(0x737d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B737da0:{NFSU2_TR(0x737da0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B737da3:{NFSU2_TR(0x737da3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737da7:{NFSU2_TR(0x737da7);
{goto L737db0;}
}
B737da9:L737da9:{c.instructions+=2;NFSU2_TR(0x737da9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B737dad:{NFSU2_TR(0x737dad);
__builtin_memmove((R+4),(R+4),4);
}
B737db0:L737db0:{c.instructions+=11;NFSU2_TR(0x737db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B737db4:{NFSU2_TR(0x737db4);
u8 U[14];
w4(U+0,u32(u32(u32(0x8b519cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B737dbc:{NFSU2_TR(0x737dbc);
u8 U[16];
w4(U+0,u32(u32(u32(0x8b5198ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B737dc3:{NFSU2_TR(0x737dc3);
u8 U[14];
w4(U+0,u32(u32(u32(0x8b51a0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+12,u32(r2(U+12)));
}
B737dcb:{NFSU2_TR(0x737dcb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8b5198ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B737dd2:{NFSU2_TR(0x737dd2);
__builtin_memmove((R+8),gp(0x8b5174),4);
}
B737dd8:{NFSU2_TR(0x737dd8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B737ddc:{NFSU2_TR(0x737ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737de0:{NFSU2_TR(0x737de0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B737de3:{NFSU2_TR(0x737de3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B737de5:{NFSU2_TR(0x737de5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L737e3a;}}
}
B737de7:L737de7:{c.instructions+=3;NFSU2_TR(0x737de7);
__builtin_memmove((R+0),gp(0x819a90),4);
}
B737dec:{NFSU2_TR(0x737dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737dee:{NFSU2_TR(0x737dee);
if(r1(R+518)){{goto L737e3a;}}
}
B737df0:L737df0:{c.instructions+=19;NFSU2_TR(0x737df0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B737df2:{NFSU2_TR(0x737df2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B737df5:{NFSU2_TR(0x737df5);
__builtin_memmove((R+0),(R+12),4);
}
B737df7:{NFSU2_TR(0x737df7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B737df8:{NFSU2_TR(0x737df8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B737dfb:{NFSU2_TR(0x737dfb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B737dfd:{NFSU2_TR(0x737dfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B737e01:{NFSU2_TR(0x737e01);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B737e04:{NFSU2_TR(0x737e04);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737e07:{NFSU2_TR(0x737e07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B737e0a:{NFSU2_TR(0x737e0a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfull))));
}
B737e0d:{NFSU2_TR(0x737e0d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B737e10:{NFSU2_TR(0x737e10);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B737e12:{NFSU2_TR(0x737e12);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B737e15:{NFSU2_TR(0x737e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B737e18:{NFSU2_TR(0x737e18);
__builtin_memmove((R+4),(R+12),4);
}
B737e1a:{NFSU2_TR(0x737e1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B737e1b:{NFSU2_TR(0x737e1b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B737e21:{NFSU2_TR(0x737e21);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L737e28;}}
}
B737e23:L737e23:{c.instructions+=3;NFSU2_TR(0x737e23);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B737e24:{NFSU2_TR(0x737e24);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B737e27:{NFSU2_TR(0x737e27);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B737e28:L737e28:{c.instructions+=7;NFSU2_TR(0x737e28);
w1(R+8,u8(0x1ull));
}
B737e2a:{NFSU2_TR(0x737e2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B737e2c:{NFSU2_TR(0x737e2c);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B737e2f:{NFSU2_TR(0x737e2f);
w1(R+8,u8(~u32(r1(R+8))));
}
B737e31:{NFSU2_TR(0x737e31);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+8))));
}
B737e33:{NFSU2_TR(0x737e33);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B737e36:{NFSU2_TR(0x737e36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B737e3a:L737e3a:{c.instructions+=7;NFSU2_TR(0x737e3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B737e3e:{NFSU2_TR(0x737e3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737e3f:{NFSU2_TR(0x737e3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B737e43:{NFSU2_TR(0x737e43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737e44:{NFSU2_TR(0x737e44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737e45:{NFSU2_TR(0x737e45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737e46:{NFSU2_TR(0x737e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737e4bull));
TAIL_STATIC(0x738a20u,738);
}
B737e4b:L737e4b:{c.instructions+=3;NFSU2_TR(0x737e4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B737e4e:{NFSU2_TR(0x737e4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737e50:{NFSU2_TR(0x737e50);
if(r1(R+518)){{goto L737ef3;}}
}
B737e56:L737e56:{c.instructions+=5;NFSU2_TR(0x737e56);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B737e5a:{NFSU2_TR(0x737e5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B737e5e:{NFSU2_TR(0x737e5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737e62:{NFSU2_TR(0x737e62);
__builtin_memmove((R+0),(R+4),4);
}
B737e64:{NFSU2_TR(0x737e64);
if(r1(R+518)){{goto L737e7d;}}
}
B737e66:L737e66:{c.instructions+=8;NFSU2_TR(0x737e66);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B737e6a:{NFSU2_TR(0x737e6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B737e6e:{NFSU2_TR(0x737e6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B737e6f:{NFSU2_TR(0x737e6f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B737e72:{NFSU2_TR(0x737e72);
w4(R+8,u32(s32(s16(r2(R+28)))));
}
B737e75:{NFSU2_TR(0x737e75);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B737e78:{NFSU2_TR(0x737e78);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B737e7b:{NFSU2_TR(0x737e7b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B737e7d:L737e7d:{c.instructions+=19;NFSU2_TR(0x737e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B737e81:{NFSU2_TR(0x737e81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737e85:{NFSU2_TR(0x737e85);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B737e87:{NFSU2_TR(0x737e87);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737e89:{NFSU2_TR(0x737e89);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737e8d:{NFSU2_TR(0x737e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737e91:{NFSU2_TR(0x737e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737e95:{NFSU2_TR(0x737e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737e99:{NFSU2_TR(0x737e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737e9d:{NFSU2_TR(0x737e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B737e9f:{NFSU2_TR(0x737e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737ea3:{NFSU2_TR(0x737ea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737ea7:{NFSU2_TR(0x737ea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737eab:{NFSU2_TR(0x737eab);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737eaf:{NFSU2_TR(0x737eaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737eb3:{NFSU2_TR(0x737eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737eb7:{NFSU2_TR(0x737eb7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B737ebb:{NFSU2_TR(0x737ebb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737ebf:{NFSU2_TR(0x737ebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L737ed6;}}
}
B737ec1:L737ec1:{c.instructions+=7;NFSU2_TR(0x737ec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B737ec5:{NFSU2_TR(0x737ec5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737ec7:{NFSU2_TR(0x737ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B737eca:{NFSU2_TR(0x737eca);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B737ecd:{NFSU2_TR(0x737ecd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737ed0:{NFSU2_TR(0x737ed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737ed4:{NFSU2_TR(0x737ed4);
{goto L737ede;}
}
B737ed6:L737ed6:{c.instructions+=1;NFSU2_TR(0x737ed6);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B737ede:L737ede:{c.instructions+=3;NFSU2_TR(0x737ede);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B737ee2:{NFSU2_TR(0x737ee2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737ee3:{NFSU2_TR(0x737ee3);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b5148),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737ee9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B737ee9:L737ee9:{c.instructions+=3;NFSU2_TR(0x737ee9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737eea:{NFSU2_TR(0x737eea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737eeb:{NFSU2_TR(0x737eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737ef0ull));
TAIL_STATIC(0x735d30u,735);
}
B737ef0:L737ef0:{c.instructions+=1;NFSU2_TR(0x737ef0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B737ef3:L737ef3:{c.instructions+=5;NFSU2_TR(0x737ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737ef7:{NFSU2_TR(0x737ef7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B737ef8:{NFSU2_TR(0x737ef8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B737efa:{NFSU2_TR(0x737efa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737efe:{NFSU2_TR(0x737efe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737da9u);}goto L737da9;}}
}
B737f04:L737f04:{c.instructions+=4;NFSU2_TR(0x737f04);
__builtin_memmove((R+4),gp(0x8b4f5c),4);
}
B737f0a:{NFSU2_TR(0x737f0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737f0c:{NFSU2_TR(0x737f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B737f0e:{NFSU2_TR(0x737f0e);
if(r1(R+518)){{goto L737f2c;}}
}
B737f10:L737f10:{c.instructions+=10;NFSU2_TR(0x737f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737f14:{NFSU2_TR(0x737f14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B737f17:{NFSU2_TR(0x737f17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737f18:{NFSU2_TR(0x737f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737f19:{NFSU2_TR(0x737f19);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B737f1a:{NFSU2_TR(0x737f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737f1b:{NFSU2_TR(0x737f1b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x737f1b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x737f1b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B737f1d:{NFSU2_TR(0x737f1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737f1e:{NFSU2_TR(0x737f1e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737f21:{NFSU2_TR(0x737f21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737f22:L737f22:{c.instructions+=5;NFSU2_TR(0x737f22);
__builtin_memmove((R+0),(R+24),4);
}
B737f24:{NFSU2_TR(0x737f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737f25:{NFSU2_TR(0x737f25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737f26:{NFSU2_TR(0x737f26);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737f29:{NFSU2_TR(0x737f29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737f2a:L737f2a:{c.instructions+=1;NFSU2_TR(0x737f2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B737f2c:L737f2c:{c.instructions+=6;NFSU2_TR(0x737f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B737f2d:{NFSU2_TR(0x737f2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737f2e:{NFSU2_TR(0x737f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737f2f:{NFSU2_TR(0x737f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B737f30:{NFSU2_TR(0x737f30);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737f33:{NFSU2_TR(0x737f33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737f40:L737f40:{c.instructions+=9;NFSU2_TR(0x737f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737f44:{NFSU2_TR(0x737f44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737f45:{NFSU2_TR(0x737f45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737f46:{NFSU2_TR(0x737f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B737f49:{NFSU2_TR(0x737f49);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B737f4c:{NFSU2_TR(0x737f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B737f52:{NFSU2_TR(0x737f52);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B737f54:{NFSU2_TR(0x737f54);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B737f56:{NFSU2_TR(0x737f56);
if(r1(R+518)){{goto L737f67;}}
}
B737f58:L737f58:{c.instructions+=2;NFSU2_TR(0x737f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737f59:{NFSU2_TR(0x737f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x737f5eull));
TAIL_STATIC(0x7360a0u,736);
}
B737f5e:L737f5e:{c.instructions+=2;NFSU2_TR(0x737f5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B737f61:{NFSU2_TR(0x737f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5194ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737f67:L737f67:{c.instructions+=11;NFSU2_TR(0x737f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5188ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737f6d:{NFSU2_TR(0x737f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b518cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737f73:{NFSU2_TR(0x737f73);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5190ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737f79:{NFSU2_TR(0x737f79);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5191ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737f7f:{NFSU2_TR(0x737f7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5192ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737f85:{NFSU2_TR(0x737f85);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5193ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737f8b:{NFSU2_TR(0x737f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b5194ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737f91:{NFSU2_TR(0x737f91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b519cull))));
__builtin_memmove((R+0),(U+0),4);
}
B737f97:{NFSU2_TR(0x737f97);
w4(R+4,u32(0xcull));
}
B737f9c:{NFSU2_TR(0x737f9c);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B737f9f:{NFSU2_TR(0x737f9f);
}
B737fa0:L737fa0:{c.instructions+=7;NFSU2_TR(0x737fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737fa3:{NFSU2_TR(0x737fa3);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B737fa6:{NFSU2_TR(0x737fa6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737faa:{NFSU2_TR(0x737faa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737fae:{NFSU2_TR(0x737fae);
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B737fb1:{NFSU2_TR(0x737fb1);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B737fb2:{NFSU2_TR(0x737fb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x737fa0u);}goto L737fa0;}}
}
B737fb4:L737fb4:{c.instructions+=3;NFSU2_TR(0x737fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B737fb5:{NFSU2_TR(0x737fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B737fb6:{NFSU2_TR(0x737fb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B737fc0:L737fc0:{c.instructions+=21;NFSU2_TR(0x737fc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737fc1:{NFSU2_TR(0x737fc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B737fc2:{NFSU2_TR(0x737fc2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B737fc4:{NFSU2_TR(0x737fc4);
w4(R+4,u32(0x8b518cull));
}
B737fc9:{NFSU2_TR(0x737fc9);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B737fcc:{NFSU2_TR(0x737fcc);
__builtin_memmove((R+16),(R+16),4);
}
B737fd0:{NFSU2_TR(0x737fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737fd3:{NFSU2_TR(0x737fd3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B737fd5:{NFSU2_TR(0x737fd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737fd8:{NFSU2_TR(0x737fd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737fdb:{NFSU2_TR(0x737fdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737fde:{NFSU2_TR(0x737fde);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B737fe1:{NFSU2_TR(0x737fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737fe4:{NFSU2_TR(0x737fe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B737fe7:{NFSU2_TR(0x737fe7);
w4(R+24,u32(0xcull));
}
B737fec:{NFSU2_TR(0x737fec);
__builtin_memmove((R+16),(R+16),4);
}
B737ff0:{NFSU2_TR(0x737ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B737ff3:{NFSU2_TR(0x737ff3);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+0)),r2(U+0));
}
B737ff6:{NFSU2_TR(0x737ff6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737ffa:{NFSU2_TR(0x737ffa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B737ffe:{NFSU2_TR(0x737ffe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
TAIL_STATIC(0x738001u,738);
}
XIT:NFSU2_TR_EXIT(0x737,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
