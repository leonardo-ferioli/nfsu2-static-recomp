#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_649(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x648,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x648,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_648(u8* __restrict R,Cpu& c);
u32 page_648(Cpu& c){return body_648(c.regs.data(),c);}
__attribute__((noinline)) u32 body_648(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x648001:goto L648001;
case 0x648003:goto L648003;
case 0x648006:c.instructions+=6;goto B648006;
case 0x648009:c.instructions+=5;goto B648009;
case 0x64800b:c.instructions+=4;goto B64800b;
case 0x64800c:c.instructions+=3;goto B64800c;
case 0x64800e:c.instructions+=2;goto B64800e;
case 0x648010:c.instructions+=1;goto B648010;
case 0x648012:goto L648012;
case 0x648014:goto L648014;
case 0x648017:c.instructions+=1;goto B648017;
case 0x648019:goto L648019;
case 0x64801c:c.instructions+=2;goto B64801c;
case 0x64801e:c.instructions+=1;goto B64801e;
case 0x648020:goto L648020;
case 0x648024:c.instructions+=1;goto B648024;
case 0x648026:goto L648026;
case 0x648029:c.instructions+=1;goto B648029;
case 0x64802b:goto L64802b;
case 0x64802e:c.instructions+=2;goto B64802e;
case 0x648030:c.instructions+=1;goto B648030;
case 0x648032:goto L648032;
case 0x648036:c.instructions+=1;goto B648036;
case 0x648038:goto L648038;
case 0x64803b:c.instructions+=2;goto B64803b;
case 0x64803d:c.instructions+=1;goto B64803d;
case 0x64803f:goto L64803f;
case 0x648042:c.instructions+=6;goto B648042;
case 0x648043:c.instructions+=5;goto B648043;
case 0x648046:c.instructions+=4;goto B648046;
case 0x648047:c.instructions+=3;goto B648047;
case 0x648048:c.instructions+=2;goto B648048;
case 0x64804b:c.instructions+=1;goto B64804b;
case 0x648050:goto L648050;
case 0x648052:c.instructions+=2;goto B648052;
case 0x648055:c.instructions+=1;goto B648055;
case 0x648057:goto L648057;
case 0x64805a:c.instructions+=5;goto B64805a;
case 0x64805e:c.instructions+=4;goto B64805e;
case 0x648060:c.instructions+=3;goto B648060;
case 0x648063:c.instructions+=2;goto B648063;
case 0x648065:c.instructions+=1;goto B648065;
case 0x648067:goto L648067;
case 0x648069:goto L648069;
case 0x648070:goto L648070;
case 0x648073:c.instructions+=5;goto B648073;
case 0x648074:c.instructions+=4;goto B648074;
case 0x648075:c.instructions+=3;goto B648075;
case 0x648076:c.instructions+=2;goto B648076;
case 0x648077:c.instructions+=1;goto B648077;
case 0x6480b0:goto L6480b0;
case 0x6480b2:c.instructions+=13;goto B6480b2;
case 0x6480b3:c.instructions+=12;goto B6480b3;
case 0x6480b5:c.instructions+=11;goto B6480b5;
case 0x6480b6:c.instructions+=10;goto B6480b6;
case 0x6480b7:c.instructions+=9;goto B6480b7;
case 0x6480b8:c.instructions+=8;goto B6480b8;
case 0x6480bb:c.instructions+=7;goto B6480bb;
case 0x6480bc:c.instructions+=6;goto B6480bc;
case 0x6480be:c.instructions+=5;goto B6480be;
case 0x6480c1:c.instructions+=4;goto B6480c1;
case 0x6480c3:c.instructions+=3;goto B6480c3;
case 0x6480c4:c.instructions+=2;goto B6480c4;
case 0x6480c7:c.instructions+=1;goto B6480c7;
case 0x6480cd:goto L6480cd;
case 0x6480d0:c.instructions+=1;goto B6480d0;
case 0x6480d2:goto L6480d2;
case 0x6480d3:c.instructions+=1;goto B6480d3;
case 0x6480d5:goto L6480d5;
case 0x6480d8:c.instructions+=2;goto B6480d8;
case 0x6480da:c.instructions+=1;goto B6480da;
case 0x6480dc:goto L6480dc;
case 0x6480df:c.instructions+=1;goto B6480df;
case 0x6480e1:goto L6480e1;
case 0x6480e4:c.instructions+=1;goto B6480e4;
case 0x6480e6:goto L6480e6;
case 0x6480e8:c.instructions+=2;goto B6480e8;
case 0x6480e9:c.instructions+=1;goto B6480e9;
case 0x6480eb:goto L6480eb;
case 0x6480ee:c.instructions+=1;goto B6480ee;
case 0x6480f2:goto L6480f2;
case 0x6480f5:c.instructions+=2;goto B6480f5;
case 0x6480f8:c.instructions+=1;goto B6480f8;
case 0x6480fa:goto L6480fa;
case 0x648101:c.instructions+=2;goto B648101;
case 0x648104:c.instructions+=1;goto B648104;
case 0x64810b:goto L64810b;
case 0x648111:c.instructions+=8;goto B648111;
case 0x648113:c.instructions+=7;goto B648113;
case 0x648119:c.instructions+=6;goto B648119;
case 0x64811b:c.instructions+=5;goto B64811b;
case 0x64811d:c.instructions+=4;goto B64811d;
case 0x64811f:c.instructions+=3;goto B64811f;
case 0x648122:c.instructions+=2;goto B648122;
case 0x648124:c.instructions+=1;goto B648124;
case 0x648125:goto L648125;
case 0x648128:c.instructions+=2;goto B648128;
case 0x64812a:c.instructions+=1;goto B64812a;
case 0x64812c:goto L64812c;
case 0x64812e:c.instructions+=1;goto B64812e;
case 0x648130:goto L648130;
case 0x648135:c.instructions+=1;goto B648135;
case 0x648137:goto L648137;
case 0x648139:c.instructions+=2;goto B648139;
case 0x64813c:c.instructions+=1;goto B64813c;
case 0x64813e:goto L64813e;
case 0x648141:c.instructions+=3;goto B648141;
case 0x648143:c.instructions+=2;goto B648143;
case 0x648146:c.instructions+=1;goto B648146;
case 0x64814b:goto L64814b;
case 0x64814d:c.instructions+=1;goto B64814d;
case 0x64814f:goto L64814f;
case 0x648150:c.instructions+=2;goto B648150;
case 0x648153:c.instructions+=1;goto B648153;
case 0x648155:goto L648155;
case 0x648157:goto L648157;
case 0x64815a:c.instructions+=5;goto B64815a;
case 0x64815d:c.instructions+=4;goto B64815d;
case 0x648160:c.instructions+=3;goto B648160;
case 0x648163:c.instructions+=2;goto B648163;
case 0x648165:c.instructions+=1;goto B648165;
case 0x64816a:goto L64816a;
case 0x64816c:c.instructions+=1;goto B64816c;
case 0x64816e:goto L64816e;
case 0x648171:c.instructions+=2;goto B648171;
case 0x648173:c.instructions+=1;goto B648173;
case 0x648175:goto L648175;
case 0x648176:c.instructions+=4;goto B648176;
case 0x648177:c.instructions+=3;goto B648177;
case 0x648178:c.instructions+=2;goto B648178;
case 0x648179:c.instructions+=1;goto B648179;
case 0x6481aa:goto L6481aa;
case 0x6481ac:c.instructions+=18;goto B6481ac;
case 0x6481ad:c.instructions+=17;goto B6481ad;
case 0x6481af:c.instructions+=16;goto B6481af;
case 0x6481b2:c.instructions+=15;goto B6481b2;
case 0x6481b3:c.instructions+=14;goto B6481b3;
case 0x6481b4:c.instructions+=13;goto B6481b4;
case 0x6481b7:c.instructions+=12;goto B6481b7;
case 0x6481ba:c.instructions+=11;goto B6481ba;
case 0x6481bb:c.instructions+=10;goto B6481bb;
case 0x6481bd:c.instructions+=9;goto B6481bd;
case 0x6481be:c.instructions+=8;goto B6481be;
case 0x6481c0:c.instructions+=7;goto B6481c0;
case 0x6481c2:c.instructions+=6;goto B6481c2;
case 0x6481c3:c.instructions+=5;goto B6481c3;
case 0x6481c6:c.instructions+=4;goto B6481c6;
case 0x6481c9:c.instructions+=3;goto B6481c9;
case 0x6481cc:c.instructions+=2;goto B6481cc;
case 0x6481cf:c.instructions+=1;goto B6481cf;
case 0x6481d5:goto L6481d5;
case 0x6481d8:c.instructions+=1;goto B6481d8;
case 0x6481de:goto L6481de;
case 0x6481df:c.instructions+=1;goto B6481df;
case 0x6481e5:goto L6481e5;
case 0x6481e8:c.instructions+=4;goto B6481e8;
case 0x6481ea:c.instructions+=3;goto B6481ea;
case 0x6481ec:c.instructions+=2;goto B6481ec;
case 0x6481ed:c.instructions+=1;goto B6481ed;
case 0x6481ef:goto L6481ef;
case 0x6481f0:c.instructions+=1;goto B6481f0;
case 0x6481f2:goto L6481f2;
case 0x6481f3:c.instructions+=1;goto B6481f3;
case 0x6481f5:goto L6481f5;
case 0x6481f6:c.instructions+=1;goto B6481f6;
case 0x6481fc:goto L6481fc;
case 0x6481ff:c.instructions+=1;goto B6481ff;
case 0x648201:goto L648201;
case 0x648206:c.instructions+=1;goto B648206;
case 0x64820b:goto L64820b;
case 0x648212:c.instructions+=3;goto B648212;
case 0x648215:c.instructions+=2;goto B648215;
case 0x648218:c.instructions+=1;goto B648218;
case 0x64821a:goto L64821a;
case 0x64821d:c.instructions+=4;goto B64821d;
case 0x648220:c.instructions+=3;goto B648220;
case 0x648223:c.instructions+=2;goto B648223;
case 0x648226:c.instructions+=1;goto B648226;
case 0x648228:goto L648228;
case 0x64822b:c.instructions+=4;goto B64822b;
case 0x64822e:c.instructions+=3;goto B64822e;
case 0x648231:c.instructions+=2;goto B648231;
case 0x648238:c.instructions+=1;goto B648238;
case 0x64823a:goto L64823a;
case 0x64823c:c.instructions+=3;goto B64823c;
case 0x64823d:c.instructions+=2;goto B64823d;
case 0x648240:c.instructions+=1;goto B648240;
case 0x648243:goto L648243;
case 0x648246:goto L648246;
case 0x648249:c.instructions+=2;goto B648249;
case 0x64824c:c.instructions+=1;goto B64824c;
case 0x648252:goto L648252;
case 0x648259:goto L648259;
case 0x648260:goto L648260;
case 0x648263:c.instructions+=6;goto B648263;
case 0x648266:c.instructions+=5;goto B648266;
case 0x648268:c.instructions+=4;goto B648268;
case 0x64826b:c.instructions+=3;goto B64826b;
case 0x64826c:c.instructions+=2;goto B64826c;
case 0x64826e:c.instructions+=1;goto B64826e;
case 0x648273:goto L648273;
case 0x648275:c.instructions+=1;goto B648275;
case 0x64827b:goto L64827b;
case 0x64827c:c.instructions+=5;goto B64827c;
case 0x64827e:c.instructions+=4;goto B64827e;
case 0x648281:c.instructions+=3;goto B648281;
case 0x648282:c.instructions+=2;goto B648282;
case 0x648284:c.instructions+=1;goto B648284;
case 0x648289:goto L648289;
case 0x64828b:c.instructions+=1;goto B64828b;
case 0x648291:goto L648291;
case 0x648294:c.instructions+=3;goto B648294;
case 0x648296:c.instructions+=2;goto B648296;
case 0x648299:c.instructions+=1;goto B648299;
case 0x64829f:goto L64829f;
case 0x6482a1:c.instructions+=1;goto B6482a1;
case 0x6482a7:goto L6482a7;
case 0x6482aa:c.instructions+=4;goto B6482aa;
case 0x6482ab:c.instructions+=3;goto B6482ab;
case 0x6482ae:c.instructions+=2;goto B6482ae;
case 0x6482b0:c.instructions+=1;goto B6482b0;
case 0x6482b5:goto L6482b5;
case 0x6482b7:c.instructions+=1;goto B6482b7;
case 0x6482bd:goto L6482bd;
case 0x6482be:c.instructions+=3;goto B6482be;
case 0x6482c1:c.instructions+=2;goto B6482c1;
case 0x6482c3:c.instructions+=1;goto B6482c3;
case 0x6482c8:goto L6482c8;
case 0x6482ca:c.instructions+=1;goto B6482ca;
case 0x6482d0:goto L6482d0;
case 0x6482d3:c.instructions+=1;goto B6482d3;
case 0x6482d9:goto L6482d9;
case 0x6482db:c.instructions+=1;goto B6482db;
case 0x6482e1:goto L6482e1;
case 0x6482e4:c.instructions+=4;goto B6482e4;
case 0x6482e5:c.instructions+=3;goto B6482e5;
case 0x6482e8:c.instructions+=2;goto B6482e8;
case 0x6482ea:c.instructions+=1;goto B6482ea;
case 0x6482ef:goto L6482ef;
case 0x6482f1:c.instructions+=1;goto B6482f1;
case 0x6482f7:goto L6482f7;
case 0x6482f8:c.instructions+=3;goto B6482f8;
case 0x6482fb:c.instructions+=2;goto B6482fb;
case 0x6482fd:c.instructions+=1;goto B6482fd;
case 0x648302:goto L648302;
case 0x648304:c.instructions+=1;goto B648304;
case 0x64830a:goto L64830a;
case 0x64830b:c.instructions+=5;goto B64830b;
case 0x64830d:c.instructions+=4;goto B64830d;
case 0x648310:c.instructions+=3;goto B648310;
case 0x648311:c.instructions+=2;goto B648311;
case 0x648313:c.instructions+=1;goto B648313;
case 0x648318:goto L648318;
case 0x64831a:c.instructions+=1;goto B64831a;
case 0x648320:goto L648320;
case 0x648323:c.instructions+=1;goto B648323;
case 0x648329:goto L648329;
case 0x64832d:c.instructions+=1;goto B64832d;
case 0x648333:goto L648333;
case 0x648334:c.instructions+=5;goto B648334;
case 0x648336:c.instructions+=4;goto B648336;
case 0x648339:c.instructions+=3;goto B648339;
case 0x64833a:c.instructions+=2;goto B64833a;
case 0x64833c:c.instructions+=1;goto B64833c;
case 0x648341:goto L648341;
case 0x648343:c.instructions+=1;goto B648343;
case 0x648349:goto L648349;
case 0x64834a:c.instructions+=5;goto B64834a;
case 0x64834c:c.instructions+=4;goto B64834c;
case 0x64834f:c.instructions+=3;goto B64834f;
case 0x648350:c.instructions+=2;goto B648350;
case 0x648352:c.instructions+=1;goto B648352;
case 0x648357:goto L648357;
case 0x64835c:goto L64835c;
case 0x64835f:c.instructions+=1;goto B64835f;
case 0x648364:goto L648364;
case 0x64836b:c.instructions+=1;goto B64836b;
case 0x648370:goto L648370;
case 0x648377:c.instructions+=1;goto B648377;
case 0x64837c:goto L64837c;
case 0x64837f:c.instructions+=1;goto B64837f;
case 0x648384:goto L648384;
case 0x64838b:c.instructions+=1;goto B64838b;
case 0x648390:goto L648390;
case 0x648397:c.instructions+=1;goto B648397;
case 0x648399:goto L648399;
case 0x6483a0:c.instructions+=1;goto B6483a0;
case 0x6483a2:goto L6483a2;
case 0x6483a9:c.instructions+=1;goto B6483a9;
case 0x6483ab:goto L6483ab;
case 0x6483b2:c.instructions+=1;goto B6483b2;
case 0x6483b7:goto L6483b7;
case 0x6483be:c.instructions+=1;goto B6483be;
case 0x6483c3:goto L6483c3;
case 0x6483ca:c.instructions+=1;goto B6483ca;
case 0x6483cf:goto L6483cf;
case 0x6483d6:c.instructions+=1;goto B6483d6;
case 0x6483db:goto L6483db;
case 0x6483e2:c.instructions+=1;goto B6483e2;
case 0x6483e7:goto L6483e7;
case 0x6483ee:c.instructions+=1;goto B6483ee;
case 0x6483f0:goto L6483f0;
case 0x6483f7:c.instructions+=1;goto B6483f7;
case 0x6483fc:goto L6483fc;
case 0x648403:c.instructions+=1;goto B648403;
case 0x648408:goto L648408;
case 0x64840f:c.instructions+=1;goto B64840f;
case 0x648411:goto L648411;
case 0x648418:goto L648418;
case 0x64841b:c.instructions+=1;goto B64841b;
case 0x648421:goto L648421;
case 0x648426:goto L648426;
case 0x648427:c.instructions+=4;goto B648427;
case 0x64842a:c.instructions+=3;goto B64842a;
case 0x64842d:c.instructions+=2;goto B64842d;
case 0x64842e:c.instructions+=1;goto B64842e;
case 0x648433:goto L648433;
case 0x648436:goto L648436;
case 0x64843b:goto L64843b;
case 0x64843c:c.instructions+=4;goto B64843c;
case 0x64843d:c.instructions+=3;goto B64843d;
case 0x64843e:c.instructions+=2;goto B64843e;
case 0x64843f:c.instructions+=1;goto B64843f;
case 0x648442:goto L648442;
case 0x648443:c.instructions+=5;goto B648443;
case 0x648445:c.instructions+=4;goto B648445;
case 0x648448:c.instructions+=3;goto B648448;
case 0x648449:c.instructions+=2;goto B648449;
case 0x64844b:c.instructions+=1;goto B64844b;
case 0x648450:goto L648450;
case 0x648455:goto L648455;
case 0x648456:c.instructions+=5;goto B648456;
case 0x648458:c.instructions+=4;goto B648458;
case 0x64845b:c.instructions+=3;goto B64845b;
case 0x64845c:c.instructions+=2;goto B64845c;
case 0x64845e:c.instructions+=1;goto B64845e;
case 0x648463:goto L648463;
case 0x648468:goto L648468;
case 0x64846b:c.instructions+=2;goto B64846b;
case 0x64846d:c.instructions+=1;goto B64846d;
case 0x64846f:goto L64846f;
case 0x648471:c.instructions+=1;goto B648471;
case 0x648472:goto L648472;
case 0x648475:c.instructions+=11;goto B648475;
case 0x648476:c.instructions+=10;goto B648476;
case 0x648479:c.instructions+=9;goto B648479;
case 0x64847c:c.instructions+=8;goto B64847c;
case 0x64847e:c.instructions+=7;goto B64847e;
case 0x648481:c.instructions+=6;goto B648481;
case 0x648484:c.instructions+=5;goto B648484;
case 0x648485:c.instructions+=4;goto B648485;
case 0x648488:c.instructions+=3;goto B648488;
case 0x64848b:c.instructions+=2;goto B64848b;
case 0x64848e:c.instructions+=1;goto B64848e;
case 0x648493:goto L648493;
case 0x648495:goto L648495;
case 0x648498:c.instructions+=7;goto B648498;
case 0x64849b:c.instructions+=6;goto B64849b;
case 0x64849d:c.instructions+=5;goto B64849d;
case 0x64849e:c.instructions+=4;goto B64849e;
case 0x64849f:c.instructions+=3;goto B64849f;
case 0x6484a2:c.instructions+=2;goto B6484a2;
case 0x6484a3:c.instructions+=1;goto B6484a3;
case 0x6484a8:goto L6484a8;
case 0x6484aa:c.instructions+=1;goto B6484aa;
case 0x6484ac:goto L6484ac;
case 0x6484af:c.instructions+=5;goto B6484af;
case 0x6484b0:c.instructions+=4;goto B6484b0;
case 0x6484b1:c.instructions+=3;goto B6484b1;
case 0x6484b4:c.instructions+=2;goto B6484b4;
case 0x6484b5:c.instructions+=1;goto B6484b5;
case 0x6484ba:goto L6484ba;
case 0x6484bc:c.instructions+=1;goto B6484bc;
case 0x6484c2:goto L6484c2;
case 0x6484c5:c.instructions+=1;goto B6484c5;
case 0x6484c8:goto L6484c8;
case 0x6484cb:c.instructions+=3;goto B6484cb;
case 0x6484ce:c.instructions+=2;goto B6484ce;
case 0x6484d0:c.instructions+=1;goto B6484d0;
case 0x6484d2:goto L6484d2;
case 0x6484d5:c.instructions+=2;goto B6484d5;
case 0x6484d7:c.instructions+=1;goto B6484d7;
case 0x6484dd:goto L6484dd;
case 0x6484e0:c.instructions+=1;goto B6484e0;
case 0x6484e6:goto L6484e6;
case 0x6484e9:c.instructions+=4;goto B6484e9;
case 0x6484ea:c.instructions+=3;goto B6484ea;
case 0x6484ed:c.instructions+=2;goto B6484ed;
case 0x6484f0:c.instructions+=1;goto B6484f0;
case 0x6484f5:goto L6484f5;
case 0x6484f7:c.instructions+=1;goto B6484f7;
case 0x6484fd:goto L6484fd;
case 0x648500:c.instructions+=3;goto B648500;
case 0x648501:c.instructions+=2;goto B648501;
case 0x648504:c.instructions+=1;goto B648504;
case 0x648509:goto L648509;
case 0x64850b:c.instructions+=1;goto B64850b;
case 0x648511:goto L648511;
case 0x648514:c.instructions+=1;goto B648514;
case 0x648516:goto L648516;
case 0x648519:c.instructions+=2;goto B648519;
case 0x64851b:c.instructions+=1;goto B64851b;
case 0x64851d:goto L64851d;
case 0x648520:c.instructions+=3;goto B648520;
case 0x648521:c.instructions+=2;goto B648521;
case 0x648524:c.instructions+=1;goto B648524;
case 0x648529:goto L648529;
case 0x64852b:c.instructions+=1;goto B64852b;
case 0x648531:goto L648531;
case 0x648534:c.instructions+=3;goto B648534;
case 0x648535:c.instructions+=2;goto B648535;
case 0x648538:c.instructions+=1;goto B648538;
case 0x64853d:goto L64853d;
case 0x64853f:c.instructions+=1;goto B64853f;
case 0x648545:goto L648545;
case 0x648548:c.instructions+=5;goto B648548;
case 0x648549:c.instructions+=4;goto B648549;
case 0x64854a:c.instructions+=3;goto B64854a;
case 0x64854d:c.instructions+=2;goto B64854d;
case 0x64854e:c.instructions+=1;goto B64854e;
case 0x648553:goto L648553;
case 0x648555:c.instructions+=1;goto B648555;
case 0x64855b:goto L64855b;
case 0x64855e:c.instructions+=5;goto B64855e;
case 0x64855f:c.instructions+=4;goto B64855f;
case 0x648560:c.instructions+=3;goto B648560;
case 0x648563:c.instructions+=2;goto B648563;
case 0x648564:c.instructions+=1;goto B648564;
case 0x648569:goto L648569;
case 0x64856b:c.instructions+=1;goto B64856b;
case 0x648571:goto L648571;
case 0x648574:c.instructions+=1;goto B648574;
case 0x648579:goto L648579;
case 0x64857c:c.instructions+=5;goto B64857c;
case 0x64857d:c.instructions+=4;goto B64857d;
case 0x64857e:c.instructions+=3;goto B64857e;
case 0x648581:c.instructions+=2;goto B648581;
case 0x648582:c.instructions+=1;goto B648582;
case 0x648587:goto L648587;
case 0x648589:goto L648589;
case 0x64858c:c.instructions+=5;goto B64858c;
case 0x64858d:c.instructions+=4;goto B64858d;
case 0x64858e:c.instructions+=3;goto B64858e;
case 0x648591:c.instructions+=2;goto B648591;
case 0x648592:c.instructions+=1;goto B648592;
case 0x648597:goto L648597;
case 0x648599:goto L648599;
case 0x64859d:c.instructions+=1;goto B64859d;
case 0x6485a3:goto L6485a3;
case 0x6485a6:c.instructions+=2;goto B6485a6;
case 0x6485a8:c.instructions+=1;goto B6485a8;
case 0x6485ae:goto L6485ae;
case 0x6485b2:c.instructions+=1;goto B6485b2;
case 0x6485b8:goto L6485b8;
case 0x6485bb:c.instructions+=2;goto B6485bb;
case 0x6485bd:c.instructions+=1;goto B6485bd;
case 0x6485c3:goto L6485c3;
case 0x6485c7:c.instructions+=1;goto B6485c7;
case 0x6485cd:goto L6485cd;
case 0x6485d0:c.instructions+=2;goto B6485d0;
case 0x6485d3:c.instructions+=1;goto B6485d3;
case 0x6485d9:goto L6485d9;
case 0x6485dc:c.instructions+=1;goto B6485dc;
case 0x6485e2:goto L6485e2;
case 0x6485e6:c.instructions+=1;goto B6485e6;
case 0x6485ec:goto L6485ec;
case 0x6485ef:c.instructions+=2;goto B6485ef;
case 0x6485f1:c.instructions+=1;goto B6485f1;
case 0x6485f7:goto L6485f7;
case 0x6485fb:c.instructions+=1;goto B6485fb;
case 0x648601:goto L648601;
case 0x648604:c.instructions+=2;goto B648604;
case 0x648606:c.instructions+=1;goto B648606;
case 0x64860c:goto L64860c;
case 0x64860f:c.instructions+=3;goto B64860f;
case 0x648611:c.instructions+=2;goto B648611;
case 0x648613:c.instructions+=1;goto B648613;
case 0x648615:goto L648615;
case 0x648619:c.instructions+=1;goto B648619;
case 0x64861f:goto L64861f;
case 0x648623:c.instructions+=1;goto B648623;
case 0x648629:goto L648629;
case 0x64862c:goto L64862c;
case 0x64862e:c.instructions+=9;goto B64862e;
case 0x64862f:c.instructions+=8;goto B64862f;
case 0x648632:c.instructions+=7;goto B648632;
case 0x648635:c.instructions+=6;goto B648635;
case 0x648636:c.instructions+=5;goto B648636;
case 0x648637:c.instructions+=4;goto B648637;
case 0x64863a:c.instructions+=3;goto B64863a;
case 0x64863b:c.instructions+=2;goto B64863b;
case 0x64863c:c.instructions+=1;goto B64863c;
case 0x648641:goto L648641;
case 0x648643:c.instructions+=1;goto B648643;
case 0x648649:goto L648649;
case 0x64864c:goto L64864c;
case 0x64864e:c.instructions+=1;goto B64864e;
case 0x648654:goto L648654;
case 0x6486d1:goto L6486d1;
case 0x6486d3:c.instructions+=16;goto B6486d3;
case 0x6486d4:c.instructions+=15;goto B6486d4;
case 0x6486d6:c.instructions+=14;goto B6486d6;
case 0x6486d9:c.instructions+=13;goto B6486d9;
case 0x6486da:c.instructions+=12;goto B6486da;
case 0x6486db:c.instructions+=11;goto B6486db;
case 0x6486de:c.instructions+=10;goto B6486de;
case 0x6486e1:c.instructions+=9;goto B6486e1;
case 0x6486e2:c.instructions+=8;goto B6486e2;
case 0x6486e4:c.instructions+=7;goto B6486e4;
case 0x6486e6:c.instructions+=6;goto B6486e6;
case 0x6486e9:c.instructions+=5;goto B6486e9;
case 0x6486ec:c.instructions+=4;goto B6486ec;
case 0x6486ef:c.instructions+=3;goto B6486ef;
case 0x6486f2:c.instructions+=2;goto B6486f2;
case 0x6486f5:c.instructions+=1;goto B6486f5;
case 0x6486f7:goto L6486f7;
case 0x6486f9:goto L6486f9;
case 0x6486fb:c.instructions+=1;goto B6486fb;
case 0x6486fd:goto L6486fd;
case 0x648701:c.instructions+=1;goto B648701;
case 0x648707:goto L648707;
case 0x64870a:c.instructions+=2;goto B64870a;
case 0x64870d:c.instructions+=1;goto B64870d;
case 0x648713:goto L648713;
case 0x648716:c.instructions+=2;goto B648716;
case 0x648718:c.instructions+=1;goto B648718;
case 0x64871a:goto L64871a;
case 0x64871c:c.instructions+=17;goto B64871c;
case 0x64871f:c.instructions+=16;goto B64871f;
case 0x648722:c.instructions+=15;goto B648722;
case 0x648725:c.instructions+=14;goto B648725;
case 0x648728:c.instructions+=13;goto B648728;
case 0x64872b:c.instructions+=12;goto B64872b;
case 0x64872e:c.instructions+=11;goto B64872e;
case 0x648731:c.instructions+=10;goto B648731;
case 0x648734:c.instructions+=9;goto B648734;
case 0x648737:c.instructions+=8;goto B648737;
case 0x64873a:c.instructions+=7;goto B64873a;
case 0x64873d:c.instructions+=6;goto B64873d;
case 0x648740:c.instructions+=5;goto B648740;
case 0x648743:c.instructions+=4;goto B648743;
case 0x648746:c.instructions+=3;goto B648746;
case 0x648747:c.instructions+=2;goto B648747;
case 0x64874a:c.instructions+=1;goto B64874a;
case 0x648750:goto L648750;
case 0x648753:c.instructions+=1;goto B648753;
case 0x648755:goto L648755;
case 0x648758:c.instructions+=9;goto B648758;
case 0x64875b:c.instructions+=8;goto B64875b;
case 0x648761:c.instructions+=7;goto B648761;
case 0x648766:c.instructions+=6;goto B648766;
case 0x648769:c.instructions+=5;goto B648769;
case 0x64876b:c.instructions+=4;goto B64876b;
case 0x64876e:c.instructions+=3;goto B64876e;
case 0x648771:c.instructions+=2;goto B648771;
case 0x648772:c.instructions+=1;goto B648772;
case 0x648777:goto L648777;
case 0x64877a:c.instructions+=1;goto B64877a;
case 0x64877f:goto L64877f;
case 0x648782:c.instructions+=1;goto B648782;
case 0x648784:goto L648784;
case 0x648787:c.instructions+=1;goto B648787;
case 0x648789:goto L648789;
case 0x64878c:c.instructions+=1;goto B64878c;
case 0x648792:goto L648792;
case 0x648795:c.instructions+=1;goto B648795;
case 0x648797:goto L648797;
case 0x64879d:c.instructions+=1;goto B64879d;
case 0x64879f:goto L64879f;
case 0x6487a2:c.instructions+=1;goto B6487a2;
case 0x6487a7:goto L6487a7;
case 0x6487a9:c.instructions+=3;goto B6487a9;
case 0x6487aa:c.instructions+=2;goto B6487aa;
case 0x6487ad:c.instructions+=1;goto B6487ad;
case 0x6487b3:goto L6487b3;
case 0x6487b6:c.instructions+=4;goto B6487b6;
case 0x6487b9:c.instructions+=3;goto B6487b9;
case 0x6487bb:c.instructions+=2;goto B6487bb;
case 0x6487be:c.instructions+=1;goto B6487be;
case 0x6487c0:goto L6487c0;
case 0x6487c2:goto L6487c2;
case 0x6487c4:c.instructions+=1;goto B6487c4;
case 0x6487c7:goto L6487c7;
case 0x6487c9:goto L6487c9;
case 0x6487cc:c.instructions+=5;goto B6487cc;
case 0x6487cf:c.instructions+=4;goto B6487cf;
case 0x6487d0:c.instructions+=3;goto B6487d0;
case 0x6487d1:c.instructions+=2;goto B6487d1;
case 0x6487d4:c.instructions+=1;goto B6487d4;
case 0x6487d9:goto L6487d9;
case 0x6487db:c.instructions+=2;goto B6487db;
case 0x6487dd:c.instructions+=1;goto B6487dd;
case 0x6487e3:goto L6487e3;
case 0x6487e5:c.instructions+=1;goto B6487e5;
case 0x6487ea:goto L6487ea;
case 0x6487ec:c.instructions+=2;goto B6487ec;
case 0x6487ed:c.instructions+=1;goto B6487ed;
case 0x6487ef:goto L6487ef;
case 0x6487f3:c.instructions+=2;goto B6487f3;
case 0x6487f6:c.instructions+=1;goto B6487f6;
case 0x6487f8:goto L6487f8;
case 0x6487fe:goto L6487fe;
case 0x648801:c.instructions+=7;goto B648801;
case 0x648804:c.instructions+=6;goto B648804;
case 0x648805:c.instructions+=5;goto B648805;
case 0x648808:c.instructions+=4;goto B648808;
case 0x64880d:c.instructions+=3;goto B64880d;
case 0x64880f:c.instructions+=2;goto B64880f;
case 0x648810:c.instructions+=1;goto B648810;
case 0x648815:goto L648815;
case 0x648817:c.instructions+=2;goto B648817;
case 0x648819:c.instructions+=1;goto B648819;
case 0x64881f:goto L64881f;
case 0x648822:c.instructions+=3;goto B648822;
case 0x648827:c.instructions+=2;goto B648827;
case 0x648829:c.instructions+=1;goto B648829;
case 0x64882b:goto L64882b;
case 0x64882e:c.instructions+=6;goto B64882e;
case 0x648831:c.instructions+=5;goto B648831;
case 0x648832:c.instructions+=4;goto B648832;
case 0x648834:c.instructions+=3;goto B648834;
case 0x648837:c.instructions+=2;goto B648837;
case 0x648838:c.instructions+=1;goto B648838;
case 0x64883d:goto L64883d;
case 0x64883f:c.instructions+=2;goto B64883f;
case 0x648841:c.instructions+=1;goto B648841;
case 0x648847:goto L648847;
case 0x648849:goto L648849;
case 0x64884d:c.instructions+=1;goto B64884d;
case 0x648850:goto L648850;
case 0x648852:c.instructions+=1;goto B648852;
case 0x648858:goto L648858;
case 0x64885b:c.instructions+=12;goto B64885b;
case 0x64885d:c.instructions+=11;goto B64885d;
case 0x648860:c.instructions+=10;goto B648860;
case 0x648863:c.instructions+=9;goto B648863;
case 0x648866:c.instructions+=8;goto B648866;
case 0x648869:c.instructions+=7;goto B648869;
case 0x64886c:c.instructions+=6;goto B64886c;
case 0x64886f:c.instructions+=5;goto B64886f;
case 0x648872:c.instructions+=4;goto B648872;
case 0x648874:c.instructions+=3;goto B648874;
case 0x648877:c.instructions+=2;goto B648877;
case 0x64887a:c.instructions+=1;goto B64887a;
case 0x64887f:goto L64887f;
case 0x648882:c.instructions+=2;goto B648882;
case 0x648884:c.instructions+=1;goto B648884;
case 0x64888a:goto L64888a;
case 0x64888d:c.instructions+=2;goto B64888d;
case 0x648890:c.instructions+=1;goto B648890;
case 0x648896:goto L648896;
case 0x648899:c.instructions+=1;goto B648899;
case 0x64889f:goto L64889f;
case 0x6488a2:c.instructions+=1;goto B6488a2;
case 0x6488a7:goto L6488a7;
case 0x6488a9:c.instructions+=4;goto B6488a9;
case 0x6488ab:c.instructions+=3;goto B6488ab;
case 0x6488ac:c.instructions+=2;goto B6488ac;
case 0x6488af:c.instructions+=1;goto B6488af;
case 0x6488b1:goto L6488b1;
case 0x6488b6:c.instructions+=1;goto B6488b6;
case 0x6488bb:goto L6488bb;
case 0x6488be:c.instructions+=4;goto B6488be;
case 0x6488c1:c.instructions+=3;goto B6488c1;
case 0x6488c3:c.instructions+=2;goto B6488c3;
case 0x6488c6:c.instructions+=1;goto B6488c6;
case 0x6488c8:goto L6488c8;
case 0x6488ca:goto L6488ca;
case 0x6488cc:c.instructions+=1;goto B6488cc;
case 0x6488cf:goto L6488cf;
case 0x6488d1:goto L6488d1;
case 0x6488d4:c.instructions+=3;goto B6488d4;
case 0x6488d6:c.instructions+=2;goto B6488d6;
case 0x6488d9:c.instructions+=1;goto B6488d9;
case 0x6488df:goto L6488df;
case 0x6488e2:goto L6488e2;
case 0x6488e6:c.instructions+=1;goto B6488e6;
case 0x6488ec:goto L6488ec;
case 0x6488ef:c.instructions+=2;goto B6488ef;
case 0x6488f1:c.instructions+=1;goto B6488f1;
case 0x6488f7:goto L6488f7;
case 0x6488fb:c.instructions+=1;goto B6488fb;
case 0x648901:goto L648901;
case 0x648905:c.instructions+=2;goto B648905;
case 0x648908:c.instructions+=1;goto B648908;
case 0x64890a:goto L64890a;
case 0x64890d:c.instructions+=2;goto B64890d;
case 0x64890f:c.instructions+=1;goto B64890f;
case 0x648911:goto L648911;
case 0x648915:c.instructions+=1;goto B648915;
case 0x648917:goto L648917;
case 0x64891e:c.instructions+=1;goto B64891e;
case 0x648920:goto L648920;
case 0x648923:c.instructions+=2;goto B648923;
case 0x648925:c.instructions+=1;goto B648925;
case 0x648927:goto L648927;
case 0x64892b:c.instructions+=1;goto B64892b;
case 0x64892d:goto L64892d;
case 0x648930:c.instructions+=2;goto B648930;
case 0x648932:c.instructions+=1;goto B648932;
case 0x648934:goto L648934;
case 0x648938:c.instructions+=1;goto B648938;
case 0x64893a:goto L64893a;
case 0x64893c:c.instructions+=2;goto B64893c;
case 0x64893f:c.instructions+=1;goto B64893f;
case 0x648941:goto L648941;
case 0x648944:c.instructions+=1;goto B648944;
case 0x64894a:goto L64894a;
case 0x64894d:c.instructions+=2;goto B64894d;
case 0x64894f:c.instructions+=1;goto B64894f;
case 0x648955:goto L648955;
case 0x648959:c.instructions+=1;goto B648959;
case 0x64895f:goto L64895f;
case 0x648962:c.instructions+=2;goto B648962;
case 0x648964:c.instructions+=1;goto B648964;
case 0x64896a:goto L64896a;
case 0x64896e:c.instructions+=1;goto B64896e;
case 0x648974:goto L648974;
case 0x648978:c.instructions+=1;goto B648978;
case 0x64897e:goto L64897e;
case 0x648981:c.instructions+=4;goto B648981;
case 0x648984:c.instructions+=3;goto B648984;
case 0x64898a:c.instructions+=2;goto B64898a;
case 0x64898b:c.instructions+=1;goto B64898b;
case 0x648991:goto L648991;
case 0x648992:c.instructions+=1;goto B648992;
case 0x648994:goto L648994;
case 0x648995:c.instructions+=1;goto B648995;
case 0x648997:goto L648997;
case 0x64899d:c.instructions+=1;goto B64899d;
case 0x6489a3:goto L6489a3;
case 0x6489a6:c.instructions+=2;goto B6489a6;
case 0x6489a8:c.instructions+=1;goto B6489a8;
case 0x6489aa:goto L6489aa;
case 0x6489ab:c.instructions+=1;goto B6489ab;
case 0x6489ad:goto L6489ad;
case 0x6489ae:c.instructions+=1;goto B6489ae;
case 0x6489b0:goto L6489b0;
case 0x6489b1:c.instructions+=1;goto B6489b1;
case 0x6489b7:goto L6489b7;
case 0x6489ba:c.instructions+=1;goto B6489ba;
case 0x6489bc:goto L6489bc;
case 0x6489bf:c.instructions+=4;goto B6489bf;
case 0x6489c1:c.instructions+=3;goto B6489c1;
case 0x6489c4:c.instructions+=2;goto B6489c4;
case 0x6489c7:c.instructions+=1;goto B6489c7;
case 0x6489c9:goto L6489c9;
case 0x6489cf:c.instructions+=1;goto B6489cf;
case 0x6489d1:goto L6489d1;
case 0x6489d4:c.instructions+=1;goto B6489d4;
case 0x6489d6:goto L6489d6;
case 0x6489d8:c.instructions+=4;goto B6489d8;
case 0x6489db:c.instructions+=3;goto B6489db;
case 0x6489de:c.instructions+=2;goto B6489de;
case 0x6489e1:c.instructions+=1;goto B6489e1;
case 0x6489e4:goto L6489e4;
case 0x6489e7:c.instructions+=2;goto B6489e7;
case 0x6489e9:c.instructions+=1;goto B6489e9;
case 0x6489ef:goto L6489ef;
case 0x6489f1:c.instructions+=3;goto B6489f1;
case 0x6489f3:c.instructions+=2;goto B6489f3;
case 0x6489f5:c.instructions+=1;goto B6489f5;
case 0x6489f7:goto L6489f7;
case 0x6489fa:c.instructions+=2;goto B6489fa;
case 0x6489fc:c.instructions+=1;goto B6489fc;
case 0x6489fe:goto L6489fe;
case 0x6489ff:c.instructions+=1;goto B6489ff;
case 0x648a01:goto L648a01;
case 0x648a02:c.instructions+=1;goto B648a02;
case 0x648a04:goto L648a04;
case 0x648a05:c.instructions+=1;goto B648a05;
case 0x648a0b:goto L648a0b;
case 0x648a0e:c.instructions+=1;goto B648a0e;
case 0x648a13:goto L648a13;
case 0x648a16:c.instructions+=2;goto B648a16;
case 0x648a18:c.instructions+=1;goto B648a18;
case 0x648a1a:goto L648a1a;
case 0x648a1d:c.instructions+=2;goto B648a1d;
case 0x648a1f:c.instructions+=1;goto B648a1f;
case 0x648a21:goto L648a21;
case 0x648a23:c.instructions+=3;goto B648a23;
case 0x648a26:c.instructions+=2;goto B648a26;
case 0x648a29:c.instructions+=1;goto B648a29;
case 0x648a2b:goto L648a2b;
case 0x648a2e:c.instructions+=1;goto B648a2e;
case 0x648a30:goto L648a30;
case 0x648a32:c.instructions+=1;goto B648a32;
case 0x648a34:goto L648a34;
case 0x648a37:c.instructions+=2;goto B648a37;
case 0x648a39:c.instructions+=1;goto B648a39;
case 0x648a3b:goto L648a3b;
case 0x648a3c:c.instructions+=1;goto B648a3c;
case 0x648a3e:goto L648a3e;
case 0x648a3f:c.instructions+=1;goto B648a3f;
case 0x648a41:goto L648a41;
case 0x648a42:c.instructions+=1;goto B648a42;
case 0x648a48:goto L648a48;
case 0x648a4b:c.instructions+=5;goto B648a4b;
case 0x648a51:c.instructions+=4;goto B648a51;
case 0x648a53:c.instructions+=3;goto B648a53;
case 0x648a55:c.instructions+=2;goto B648a55;
case 0x648a58:c.instructions+=1;goto B648a58;
case 0x648a5a:goto L648a5a;
case 0x648a5c:c.instructions+=2;goto B648a5c;
case 0x648a5d:c.instructions+=1;goto B648a5d;
case 0x648a5f:goto L648a5f;
case 0x648a61:goto L648a61;
case 0x648a63:c.instructions+=1;goto B648a63;
case 0x648a65:goto L648a65;
case 0x648a67:c.instructions+=3;goto B648a67;
case 0x648a6a:c.instructions+=2;goto B648a6a;
case 0x648a6d:c.instructions+=1;goto B648a6d;
case 0x648a6f:goto L648a6f;
case 0x648a72:c.instructions+=4;goto B648a72;
case 0x648a75:c.instructions+=3;goto B648a75;
case 0x648a77:c.instructions+=2;goto B648a77;
case 0x648a7a:c.instructions+=1;goto B648a7a;
case 0x648a80:goto L648a80;
case 0x648a83:c.instructions+=4;goto B648a83;
case 0x648a86:c.instructions+=3;goto B648a86;
case 0x648a89:c.instructions+=2;goto B648a89;
case 0x648a93:c.instructions+=1;goto B648a93;
case 0x648a99:goto L648a99;
case 0x648a9b:c.instructions+=14;goto B648a9b;
case 0x648a9e:c.instructions+=13;goto B648a9e;
case 0x648aa4:c.instructions+=12;goto B648aa4;
case 0x648aa7:c.instructions+=11;goto B648aa7;
case 0x648aaa:c.instructions+=10;goto B648aaa;
case 0x648aad:c.instructions+=9;goto B648aad;
case 0x648aaf:c.instructions+=8;goto B648aaf;
case 0x648ab2:c.instructions+=7;goto B648ab2;
case 0x648ab5:c.instructions+=6;goto B648ab5;
case 0x648abb:c.instructions+=5;goto B648abb;
case 0x648abe:c.instructions+=4;goto B648abe;
case 0x648ac3:c.instructions+=3;goto B648ac3;
case 0x648ac5:c.instructions+=2;goto B648ac5;
case 0x648ac8:c.instructions+=1;goto B648ac8;
case 0x648aca:goto L648aca;
case 0x648acd:c.instructions+=1;goto B648acd;
case 0x648acf:goto L648acf;
case 0x648ad4:c.instructions+=1;goto B648ad4;
case 0x648ad6:goto L648ad6;
case 0x648adb:c.instructions+=1;goto B648adb;
case 0x648add:goto L648add;
case 0x648ae2:goto L648ae2;
case 0x648ae5:c.instructions+=5;goto B648ae5;
case 0x648ae6:c.instructions+=4;goto B648ae6;
case 0x648ae9:c.instructions+=3;goto B648ae9;
case 0x648aec:c.instructions+=2;goto B648aec;
case 0x648aed:c.instructions+=1;goto B648aed;
case 0x648af2:goto L648af2;
case 0x648af5:goto L648af5;
case 0x648afa:c.instructions+=1;goto B648afa;
case 0x648aff:goto L648aff;
case 0x648b02:c.instructions+=4;goto B648b02;
case 0x648b04:c.instructions+=3;goto B648b04;
case 0x648b06:c.instructions+=2;goto B648b06;
case 0x648b09:c.instructions+=1;goto B648b09;
case 0x648b0b:goto L648b0b;
case 0x648b0e:c.instructions+=1;goto B648b0e;
case 0x648b10:goto L648b10;
case 0x648b13:c.instructions+=3;goto B648b13;
case 0x648b19:c.instructions+=2;goto B648b19;
case 0x648b1f:c.instructions+=1;goto B648b1f;
case 0x648b24:goto L648b24;
case 0x648b27:goto L648b27;
case 0x648b2a:c.instructions+=4;goto B648b2a;
case 0x648b2c:c.instructions+=3;goto B648b2c;
case 0x648b2e:c.instructions+=2;goto B648b2e;
case 0x648b31:c.instructions+=1;goto B648b31;
case 0x648b33:goto L648b33;
case 0x648b36:c.instructions+=1;goto B648b36;
case 0x648b38:goto L648b38;
case 0x648b3b:c.instructions+=4;goto B648b3b;
case 0x648b3d:c.instructions+=3;goto B648b3d;
case 0x648b3f:c.instructions+=2;goto B648b3f;
case 0x648b42:c.instructions+=1;goto B648b42;
case 0x648b44:goto L648b44;
case 0x648b47:c.instructions+=1;goto B648b47;
case 0x648b49:goto L648b49;
case 0x648b4c:c.instructions+=3;goto B648b4c;
case 0x648b52:c.instructions+=2;goto B648b52;
case 0x648b58:c.instructions+=1;goto B648b58;
case 0x648b5d:goto L648b5d;
case 0x648b60:goto L648b60;
case 0x648b63:c.instructions+=4;goto B648b63;
case 0x648b65:c.instructions+=3;goto B648b65;
case 0x648b67:c.instructions+=2;goto B648b67;
case 0x648b6a:c.instructions+=1;goto B648b6a;
case 0x648b6c:goto L648b6c;
case 0x648b6e:c.instructions+=2;goto B648b6e;
case 0x648b70:c.instructions+=1;goto B648b70;
case 0x648b72:goto L648b72;
case 0x648b75:c.instructions+=4;goto B648b75;
case 0x648b77:c.instructions+=3;goto B648b77;
case 0x648b79:c.instructions+=2;goto B648b79;
case 0x648b7c:c.instructions+=1;goto B648b7c;
case 0x648b7e:goto L648b7e;
case 0x648b80:c.instructions+=1;goto B648b80;
case 0x648b82:goto L648b82;
case 0x648b85:c.instructions+=3;goto B648b85;
case 0x648b8b:c.instructions+=2;goto B648b8b;
case 0x648b91:c.instructions+=1;goto B648b91;
case 0x648b96:goto L648b96;
case 0x648b98:goto L648b98;
case 0x648b9a:c.instructions+=4;goto B648b9a;
case 0x648b9c:c.instructions+=3;goto B648b9c;
case 0x648b9e:c.instructions+=2;goto B648b9e;
case 0x648ba1:c.instructions+=1;goto B648ba1;
case 0x648ba3:goto L648ba3;
case 0x648ba5:c.instructions+=2;goto B648ba5;
case 0x648ba7:c.instructions+=1;goto B648ba7;
case 0x648ba9:goto L648ba9;
case 0x648baf:c.instructions+=3;goto B648baf;
case 0x648bb1:c.instructions+=2;goto B648bb1;
case 0x648bb4:c.instructions+=1;goto B648bb4;
case 0x648bb6:goto L648bb6;
case 0x648bb8:c.instructions+=2;goto B648bb8;
case 0x648bba:c.instructions+=1;goto B648bba;
case 0x648bbc:goto L648bbc;
case 0x648bc2:c.instructions+=2;goto B648bc2;
case 0x648bc8:c.instructions+=1;goto B648bc8;
case 0x648bcd:goto L648bcd;
case 0x648bd0:c.instructions+=18;goto B648bd0;
case 0x648bd3:c.instructions+=17;goto B648bd3;
case 0x648bd6:c.instructions+=16;goto B648bd6;
case 0x648bd9:c.instructions+=15;goto B648bd9;
case 0x648bdc:c.instructions+=14;goto B648bdc;
case 0x648be3:c.instructions+=13;goto B648be3;
case 0x648be6:c.instructions+=12;goto B648be6;
case 0x648be8:c.instructions+=11;goto B648be8;
case 0x648beb:c.instructions+=10;goto B648beb;
case 0x648bed:c.instructions+=9;goto B648bed;
case 0x648bee:c.instructions+=8;goto B648bee;
case 0x648bf1:c.instructions+=7;goto B648bf1;
case 0x648bf4:c.instructions+=6;goto B648bf4;
case 0x648bf7:c.instructions+=5;goto B648bf7;
case 0x648bf8:c.instructions+=4;goto B648bf8;
case 0x648bfa:c.instructions+=3;goto B648bfa;
case 0x648bfd:c.instructions+=2;goto B648bfd;
case 0x648bfe:c.instructions+=1;goto B648bfe;
case 0x648c03:goto L648c03;
case 0x648c05:c.instructions+=2;goto B648c05;
case 0x648c07:c.instructions+=1;goto B648c07;
case 0x648c09:goto L648c09;
case 0x648c0c:c.instructions+=5;goto B648c0c;
case 0x648c0f:c.instructions+=4;goto B648c0f;
case 0x648c10:c.instructions+=3;goto B648c10;
case 0x648c13:c.instructions+=2;goto B648c13;
case 0x648c16:c.instructions+=1;goto B648c16;
case 0x648c1b:goto L648c1b;
case 0x648c1d:c.instructions+=1;goto B648c1d;
case 0x648c1f:goto L648c1f;
case 0x648c25:goto L648c25;
case 0x648c28:c.instructions+=1;goto B648c28;
case 0x648c2d:goto L648c2d;
case 0x648c31:c.instructions+=2;goto B648c31;
case 0x648c32:c.instructions+=1;goto B648c32;
case 0x648c37:goto L648c37;
case 0x648c3a:c.instructions+=2;goto B648c3a;
case 0x648c3d:c.instructions+=1;goto B648c3d;
case 0x648c3f:goto L648c3f;
case 0x648c42:c.instructions+=1;goto B648c42;
case 0x648c44:goto L648c44;
case 0x648c47:c.instructions+=5;goto B648c47;
case 0x648c4a:c.instructions+=4;goto B648c4a;
case 0x648c4b:c.instructions+=3;goto B648c4b;
case 0x648c4e:c.instructions+=2;goto B648c4e;
case 0x648c51:c.instructions+=1;goto B648c51;
case 0x648c56:goto L648c56;
case 0x648c5a:c.instructions+=2;goto B648c5a;
case 0x648c5c:c.instructions+=1;goto B648c5c;
case 0x648c61:goto L648c61;
case 0x648c65:c.instructions+=1;goto B648c65;
case 0x648c6b:goto L648c6b;
case 0x648c6e:c.instructions+=2;goto B648c6e;
case 0x648c70:c.instructions+=1;goto B648c70;
case 0x648c76:goto L648c76;
case 0x648c7a:c.instructions+=1;goto B648c7a;
case 0x648c80:goto L648c80;
case 0x648c83:c.instructions+=2;goto B648c83;
case 0x648c86:c.instructions+=1;goto B648c86;
case 0x648c8c:goto L648c8c;
case 0x648c8f:c.instructions+=1;goto B648c8f;
case 0x648c91:goto L648c91;
case 0x648c94:c.instructions+=1;goto B648c94;
case 0x648c9a:goto L648c9a;
case 0x648c9e:c.instructions+=1;goto B648c9e;
case 0x648ca4:goto L648ca4;
case 0x648ca7:c.instructions+=6;goto B648ca7;
case 0x648caa:c.instructions+=5;goto B648caa;
case 0x648cb0:c.instructions+=4;goto B648cb0;
case 0x648cb2:c.instructions+=3;goto B648cb2;
case 0x648cb4:c.instructions+=2;goto B648cb4;
case 0x648cb7:c.instructions+=1;goto B648cb7;
case 0x648cbd:goto L648cbd;
case 0x648cc1:c.instructions+=2;goto B648cc1;
case 0x648cc4:c.instructions+=1;goto B648cc4;
case 0x648cc6:goto L648cc6;
case 0x648cc9:c.instructions+=3;goto B648cc9;
case 0x648ccc:c.instructions+=2;goto B648ccc;
case 0x648ccf:c.instructions+=1;goto B648ccf;
case 0x648cd4:goto L648cd4;
case 0x648cd6:c.instructions+=3;goto B648cd6;
case 0x648cd7:c.instructions+=2;goto B648cd7;
case 0x648cd8:c.instructions+=1;goto B648cd8;
case 0x648cda:goto L648cda;
case 0x648cdd:c.instructions+=5;goto B648cdd;
case 0x648ce0:c.instructions+=4;goto B648ce0;
case 0x648ce2:c.instructions+=3;goto B648ce2;
case 0x648ce5:c.instructions+=2;goto B648ce5;
case 0x648ce9:c.instructions+=1;goto B648ce9;
case 0x648ceb:goto L648ceb;
case 0x648cee:goto L648cee;
case 0x648cf0:c.instructions+=5;goto B648cf0;
case 0x648cf3:c.instructions+=4;goto B648cf3;
case 0x648cf6:c.instructions+=3;goto B648cf6;
case 0x648cf9:c.instructions+=2;goto B648cf9;
case 0x648cfc:c.instructions+=1;goto B648cfc;
case 0x648d02:goto L648d02;
case 0x648d05:c.instructions+=1;goto B648d05;
case 0x648d07:goto L648d07;
case 0x648d0a:goto L648d0a;
case 0x648d0d:c.instructions+=1;goto B648d0d;
case 0x648d10:goto L648d10;
case 0x648d12:c.instructions+=2;goto B648d12;
case 0x648d15:c.instructions+=1;goto B648d15;
case 0x648d1b:goto L648d1b;
case 0x648d1e:c.instructions+=6;goto B648d1e;
case 0x648d21:c.instructions+=5;goto B648d21;
case 0x648d27:c.instructions+=4;goto B648d27;
case 0x648d2c:c.instructions+=3;goto B648d2c;
case 0x648d2e:c.instructions+=2;goto B648d2e;
case 0x648d30:c.instructions+=1;goto B648d30;
case 0x648d36:goto L648d36;
case 0x648d3c:c.instructions+=1;goto B648d3c;
case 0x648d42:goto L648d42;
case 0x648d48:c.instructions+=1;goto B648d48;
case 0x648d4e:goto L648d4e;
case 0x648d54:c.instructions+=1;goto B648d54;
case 0x648d5a:goto L648d5a;
case 0x648d60:c.instructions+=1;goto B648d60;
case 0x648d66:goto L648d66;
case 0x648d6c:c.instructions+=1;goto B648d6c;
case 0x648d72:goto L648d72;
case 0x648d75:c.instructions+=2;goto B648d75;
case 0x648d76:c.instructions+=1;goto B648d76;
case 0x648d79:goto L648d79;
case 0x648d7c:c.instructions+=3;goto B648d7c;
case 0x648d7e:c.instructions+=2;goto B648d7e;
case 0x648d7f:c.instructions+=1;goto B648d7f;
case 0x648d84:goto L648d84;
case 0x648d86:c.instructions+=2;goto B648d86;
case 0x648d88:c.instructions+=1;goto B648d88;
case 0x648d8e:goto L648d8e;
case 0x648d91:c.instructions+=2;goto B648d91;
case 0x648d93:c.instructions+=1;goto B648d93;
case 0x648d99:goto L648d99;
case 0x648d9f:goto L648d9f;
case 0x648da1:c.instructions+=3;goto B648da1;
case 0x648da2:c.instructions+=2;goto B648da2;
case 0x648da4:c.instructions+=1;goto B648da4;
case 0x648daa:goto L648daa;
case 0x648dad:c.instructions+=1;goto B648dad;
case 0x648db3:goto L648db3;
case 0x648db6:c.instructions+=1;goto B648db6;
case 0x648dbc:goto L648dbc;
case 0x648dbe:c.instructions+=9;goto B648dbe;
case 0x648dbf:c.instructions+=8;goto B648dbf;
case 0x648dc2:c.instructions+=7;goto B648dc2;
case 0x648dc3:c.instructions+=6;goto B648dc3;
case 0x648dc6:c.instructions+=5;goto B648dc6;
case 0x648dc7:c.instructions+=4;goto B648dc7;
case 0x648dca:c.instructions+=3;goto B648dca;
case 0x648dcd:c.instructions+=2;goto B648dcd;
case 0x648dce:c.instructions+=1;goto B648dce;
case 0x648dd3:goto L648dd3;
case 0x648dd5:c.instructions+=2;goto B648dd5;
case 0x648dd7:c.instructions+=1;goto B648dd7;
case 0x648ddd:goto L648ddd;
case 0x648de0:c.instructions+=5;goto B648de0;
case 0x648de2:c.instructions+=4;goto B648de2;
case 0x648de4:c.instructions+=3;goto B648de4;
case 0x648de7:c.instructions+=2;goto B648de7;
case 0x648de8:c.instructions+=1;goto B648de8;
case 0x648ded:goto L648ded;
case 0x648def:c.instructions+=2;goto B648def;
case 0x648df1:c.instructions+=1;goto B648df1;
case 0x648df7:goto L648df7;
case 0x648dfa:c.instructions+=5;goto B648dfa;
case 0x648dfc:c.instructions+=4;goto B648dfc;
case 0x648dfe:c.instructions+=3;goto B648dfe;
case 0x648e01:c.instructions+=2;goto B648e01;
case 0x648e02:c.instructions+=1;goto B648e02;
case 0x648e07:goto L648e07;
case 0x648e09:c.instructions+=2;goto B648e09;
case 0x648e0b:c.instructions+=1;goto B648e0b;
case 0x648e11:goto L648e11;
case 0x648e14:c.instructions+=5;goto B648e14;
case 0x648e16:c.instructions+=4;goto B648e16;
case 0x648e18:c.instructions+=3;goto B648e18;
case 0x648e1b:c.instructions+=2;goto B648e1b;
case 0x648e1c:c.instructions+=1;goto B648e1c;
case 0x648e21:goto L648e21;
case 0x648e23:c.instructions+=2;goto B648e23;
case 0x648e25:c.instructions+=1;goto B648e25;
case 0x648e2b:goto L648e2b;
case 0x648e2e:c.instructions+=5;goto B648e2e;
case 0x648e31:c.instructions+=4;goto B648e31;
case 0x648e33:c.instructions+=3;goto B648e33;
case 0x648e35:c.instructions+=2;goto B648e35;
case 0x648e36:c.instructions+=1;goto B648e36;
case 0x648e3b:goto L648e3b;
case 0x648e3d:c.instructions+=2;goto B648e3d;
case 0x648e3f:c.instructions+=1;goto B648e3f;
case 0x648e45:goto L648e45;
case 0x648e48:c.instructions+=6;goto B648e48;
case 0x648e4a:c.instructions+=5;goto B648e4a;
case 0x648e4c:c.instructions+=4;goto B648e4c;
case 0x648e4f:c.instructions+=3;goto B648e4f;
case 0x648e50:c.instructions+=2;goto B648e50;
case 0x648e52:c.instructions+=1;goto B648e52;
case 0x648e57:goto L648e57;
case 0x648e59:c.instructions+=2;goto B648e59;
case 0x648e5b:c.instructions+=1;goto B648e5b;
case 0x648e61:goto L648e61;
case 0x648e63:c.instructions+=5;goto B648e63;
case 0x648e65:c.instructions+=4;goto B648e65;
case 0x648e68:c.instructions+=3;goto B648e68;
case 0x648e69:c.instructions+=2;goto B648e69;
case 0x648e6b:c.instructions+=1;goto B648e6b;
case 0x648e70:goto L648e70;
case 0x648e72:c.instructions+=2;goto B648e72;
case 0x648e74:c.instructions+=1;goto B648e74;
case 0x648e7a:goto L648e7a;
case 0x648e7c:c.instructions+=3;goto B648e7c;
case 0x648e7f:c.instructions+=2;goto B648e7f;
case 0x648e81:c.instructions+=1;goto B648e81;
case 0x648e86:goto L648e86;
case 0x648e88:c.instructions+=2;goto B648e88;
case 0x648e8a:c.instructions+=1;goto B648e8a;
case 0x648e90:goto L648e90;
case 0x648e93:c.instructions+=4;goto B648e93;
case 0x648e95:c.instructions+=3;goto B648e95;
case 0x648e96:c.instructions+=2;goto B648e96;
case 0x648e98:c.instructions+=1;goto B648e98;
case 0x648e9d:goto L648e9d;
case 0x648e9f:c.instructions+=2;goto B648e9f;
case 0x648ea1:c.instructions+=1;goto B648ea1;
case 0x648ea7:goto L648ea7;
case 0x648eaa:c.instructions+=2;goto B648eaa;
case 0x648eac:c.instructions+=1;goto B648eac;
case 0x648eae:goto L648eae;
case 0x648eb1:c.instructions+=8;goto B648eb1;
case 0x648eb4:c.instructions+=7;goto B648eb4;
case 0x648eb7:c.instructions+=6;goto B648eb7;
case 0x648ebd:c.instructions+=5;goto B648ebd;
case 0x648ec1:c.instructions+=4;goto B648ec1;
case 0x648ec4:c.instructions+=3;goto B648ec4;
case 0x648ec6:c.instructions+=2;goto B648ec6;
case 0x648ec9:c.instructions+=1;goto B648ec9;
case 0x648ecb:goto L648ecb;
case 0x648ece:c.instructions+=3;goto B648ece;
case 0x648ed0:c.instructions+=2;goto B648ed0;
case 0x648ed4:c.instructions+=1;goto B648ed4;
case 0x648eda:goto L648eda;
case 0x648edc:c.instructions+=10;goto B648edc;
case 0x648edd:c.instructions+=9;goto B648edd;
case 0x648ee0:c.instructions+=8;goto B648ee0;
case 0x648ee1:c.instructions+=7;goto B648ee1;
case 0x648ee4:c.instructions+=6;goto B648ee4;
case 0x648ee5:c.instructions+=5;goto B648ee5;
case 0x648ee8:c.instructions+=4;goto B648ee8;
case 0x648eeb:c.instructions+=3;goto B648eeb;
case 0x648eec:c.instructions+=2;goto B648eec;
case 0x648ef3:c.instructions+=1;goto B648ef3;
case 0x648ef8:goto L648ef8;
case 0x648efa:c.instructions+=2;goto B648efa;
case 0x648efc:c.instructions+=1;goto B648efc;
case 0x648f02:goto L648f02;
case 0x648f05:c.instructions+=5;goto B648f05;
case 0x648f07:c.instructions+=4;goto B648f07;
case 0x648f09:c.instructions+=3;goto B648f09;
case 0x648f0c:c.instructions+=2;goto B648f0c;
case 0x648f0d:c.instructions+=1;goto B648f0d;
case 0x648f12:goto L648f12;
case 0x648f14:c.instructions+=2;goto B648f14;
case 0x648f16:c.instructions+=1;goto B648f16;
case 0x648f1c:goto L648f1c;
case 0x648f1f:c.instructions+=5;goto B648f1f;
case 0x648f21:c.instructions+=4;goto B648f21;
case 0x648f23:c.instructions+=3;goto B648f23;
case 0x648f26:c.instructions+=2;goto B648f26;
case 0x648f27:c.instructions+=1;goto B648f27;
case 0x648f2c:goto L648f2c;
case 0x648f2e:c.instructions+=2;goto B648f2e;
case 0x648f30:c.instructions+=1;goto B648f30;
case 0x648f36:goto L648f36;
case 0x648f39:c.instructions+=5;goto B648f39;
case 0x648f3b:c.instructions+=4;goto B648f3b;
case 0x648f3d:c.instructions+=3;goto B648f3d;
case 0x648f40:c.instructions+=2;goto B648f40;
case 0x648f41:c.instructions+=1;goto B648f41;
case 0x648f46:goto L648f46;
case 0x648f48:c.instructions+=2;goto B648f48;
case 0x648f4a:c.instructions+=1;goto B648f4a;
case 0x648f50:goto L648f50;
case 0x648f53:c.instructions+=5;goto B648f53;
case 0x648f55:c.instructions+=4;goto B648f55;
case 0x648f57:c.instructions+=3;goto B648f57;
case 0x648f5a:c.instructions+=2;goto B648f5a;
case 0x648f5b:c.instructions+=1;goto B648f5b;
case 0x648f60:goto L648f60;
case 0x648f62:c.instructions+=2;goto B648f62;
case 0x648f64:c.instructions+=1;goto B648f64;
case 0x648f66:goto L648f66;
case 0x648f68:c.instructions+=3;goto B648f68;
case 0x648f6e:c.instructions+=2;goto B648f6e;
case 0x648f71:c.instructions+=1;goto B648f71;
case 0x648f73:goto L648f73;
case 0x648f78:goto L648f78;
case 0x648f7f:c.instructions+=1;goto B648f7f;
case 0x648f81:goto L648f81;
case 0x648f84:c.instructions+=3;goto B648f84;
case 0x648f87:c.instructions+=2;goto B648f87;
case 0x648f89:c.instructions+=1;goto B648f89;
case 0x648f8b:goto L648f8b;
case 0x648f8c:c.instructions+=5;goto B648f8c;
case 0x648f8e:c.instructions+=4;goto B648f8e;
case 0x648f91:c.instructions+=3;goto B648f91;
case 0x648f92:c.instructions+=2;goto B648f92;
case 0x648f94:c.instructions+=1;goto B648f94;
case 0x648f99:goto L648f99;
case 0x648f9b:c.instructions+=2;goto B648f9b;
case 0x648f9d:c.instructions+=1;goto B648f9d;
case 0x648f9f:goto L648f9f;
case 0x648fa1:c.instructions+=5;goto B648fa1;
case 0x648fa3:c.instructions+=4;goto B648fa3;
case 0x648fa6:c.instructions+=3;goto B648fa6;
case 0x648fa7:c.instructions+=2;goto B648fa7;
case 0x648fa9:c.instructions+=1;goto B648fa9;
case 0x648fae:goto L648fae;
case 0x648fb0:c.instructions+=2;goto B648fb0;
case 0x648fb2:c.instructions+=1;goto B648fb2;
case 0x648fb4:goto L648fb4;
case 0x648fb6:c.instructions+=3;goto B648fb6;
case 0x648fb9:c.instructions+=2;goto B648fb9;
case 0x648fbb:c.instructions+=1;goto B648fbb;
case 0x648fc0:goto L648fc0;
case 0x648fc2:c.instructions+=2;goto B648fc2;
case 0x648fc4:c.instructions+=1;goto B648fc4;
case 0x648fc6:goto L648fc6;
case 0x648fc8:c.instructions+=5;goto B648fc8;
case 0x648fca:c.instructions+=4;goto B648fca;
case 0x648fcd:c.instructions+=3;goto B648fcd;
case 0x648fce:c.instructions+=2;goto B648fce;
case 0x648fd0:c.instructions+=1;goto B648fd0;
case 0x648fd5:goto L648fd5;
case 0x648fd7:c.instructions+=2;goto B648fd7;
case 0x648fd9:c.instructions+=1;goto B648fd9;
case 0x648fdb:goto L648fdb;
case 0x648fde:c.instructions+=1;goto B648fde;
case 0x648fe0:goto L648fe0;
case 0x648fe3:c.instructions+=2;goto B648fe3;
case 0x648fe5:c.instructions+=1;goto B648fe5;
case 0x648fe7:goto L648fe7;
case 0x648fe9:c.instructions+=1;goto B648fe9;
case 0x648fee:goto L648fee;
case 0x648ff2:c.instructions+=1;goto B648ff2;
case 0x648ff4:goto L648ff4;
case 0x648ff7:c.instructions+=1;goto B648ff7;
case 0x648ffc:goto L648ffc;
case 0x648ffd:goto L648ffd;
case 0x648fff:c.instructions+=1;goto B648fff;
default:missing_instruction(c.pc);}
B648001:L648001:{c.instructions+=1;NFSU2_TR(0x648001);
{goto L648070;}
}
B648003:L648003:{c.instructions+=7;NFSU2_TR(0x648003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648006:{NFSU2_TR(0x648006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B648009:{NFSU2_TR(0x648009);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64800b:{NFSU2_TR(0x64800b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64800c:{NFSU2_TR(0x64800c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64800e:{NFSU2_TR(0x64800e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B648010:{NFSU2_TR(0x648010);
{goto L648014;}
}
B648012:L648012:{c.instructions+=1;NFSU2_TR(0x648012);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B648014:L648014:{c.instructions+=2;NFSU2_TR(0x648014);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648017:{NFSU2_TR(0x648017);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648069;}}
}
B648019:L648019:{c.instructions+=3;NFSU2_TR(0x648019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64801c:{NFSU2_TR(0x64801c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B64801e:{NFSU2_TR(0x64801e);
if(r1(R+518)){{goto L648069;}}
}
B648020:L648020:{c.instructions+=2;NFSU2_TR(0x648020);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648024:{NFSU2_TR(0x648024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648069;}}
}
B648026:L648026:{c.instructions+=2;NFSU2_TR(0x648026);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648029:{NFSU2_TR(0x648029);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648069;}}
}
B64802b:L64802b:{c.instructions+=3;NFSU2_TR(0x64802b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64802e:{NFSU2_TR(0x64802e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B648030:{NFSU2_TR(0x648030);
if(r1(R+518)){{goto L648069;}}
}
B648032:L648032:{c.instructions+=2;NFSU2_TR(0x648032);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648036:{NFSU2_TR(0x648036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648069;}}
}
B648038:L648038:{c.instructions+=3;NFSU2_TR(0x648038);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64803b:{NFSU2_TR(0x64803b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B64803d:{NFSU2_TR(0x64803d);
if(r1(R+518)){{goto L648069;}}
}
B64803f:L64803f:{c.instructions+=7;NFSU2_TR(0x64803f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648042:{NFSU2_TR(0x648042);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648043:{NFSU2_TR(0x648043);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648046:{NFSU2_TR(0x648046);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648047:{NFSU2_TR(0x648047);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648048:{NFSU2_TR(0x648048);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64804b:{NFSU2_TR(0x64804b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648050ull));
TAIL_STATIC(0x647ebau,647);
}
B648050:L648050:{c.instructions+=3;NFSU2_TR(0x648050);
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
B648052:{NFSU2_TR(0x648052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648055:{NFSU2_TR(0x648055);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648070;}}
}
B648057:L648057:{c.instructions+=6;NFSU2_TR(0x648057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64805a:{NFSU2_TR(0x64805a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B64805e:{NFSU2_TR(0x64805e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B648060:{NFSU2_TR(0x648060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B648063:{NFSU2_TR(0x648063);
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
B648065:{NFSU2_TR(0x648065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648012u);}goto L648012;}}
}
B648067:L648067:{c.instructions+=1;NFSU2_TR(0x648067);
{goto L648070;}
}
B648069:L648069:{c.instructions+=1;NFSU2_TR(0x648069);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648070:L648070:{c.instructions+=6;NFSU2_TR(0x648070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648073:{NFSU2_TR(0x648073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B648074:{NFSU2_TR(0x648074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B648075:{NFSU2_TR(0x648075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B648076:{NFSU2_TR(0x648076);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B648077:{NFSU2_TR(0x648077);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6480b0:L6480b0:{c.instructions+=14;NFSU2_TR(0x6480b0);
__builtin_memmove((R+28),(R+28),4);
}
B6480b2:{NFSU2_TR(0x6480b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6480b3:{NFSU2_TR(0x6480b3);
__builtin_memmove((R+20),(R+16),4);
}
B6480b5:{NFSU2_TR(0x6480b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6480b6:{NFSU2_TR(0x6480b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6480b7:{NFSU2_TR(0x6480b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6480b8:{NFSU2_TR(0x6480b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6480bb:{NFSU2_TR(0x6480bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6480bc:{NFSU2_TR(0x6480bc);
__builtin_memmove((R+28),(R+4),4);
}
B6480be:{NFSU2_TR(0x6480be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6480c1:{NFSU2_TR(0x6480c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6480c3:{NFSU2_TR(0x6480c3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6480c4:{NFSU2_TR(0x6480c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6480c7:{NFSU2_TR(0x6480c7);
if(r1(R+518)){{goto L648157;}}
}
B6480cd:L6480cd:{c.instructions+=2;NFSU2_TR(0x6480cd);
w1(R+512,u8((r4(R+4))<(u32(0x7ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x7ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6480d0:{NFSU2_TR(0x6480d0);
if(r1(R+518)){{goto L648137;}}
}
B6480d2:L6480d2:{c.instructions+=2;NFSU2_TR(0x6480d2);
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
B6480d3:{NFSU2_TR(0x6480d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648130;}}
}
B6480d5:L6480d5:{c.instructions+=3;NFSU2_TR(0x6480d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6480d8:{NFSU2_TR(0x6480d8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6480da:{NFSU2_TR(0x6480da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648130;}}
}
B6480dc:L6480dc:{c.instructions+=2;NFSU2_TR(0x6480dc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6480df:{NFSU2_TR(0x6480df);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6480eb;}}
}
B6480e1:L6480e1:{c.instructions+=2;NFSU2_TR(0x6480e1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6480e4:{NFSU2_TR(0x6480e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648130;}}
}
B6480e6:L6480e6:{c.instructions+=3;NFSU2_TR(0x6480e6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6480e8:{NFSU2_TR(0x6480e8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6480e9:{NFSU2_TR(0x6480e9);
{goto L6480f2;}
}
B6480eb:L6480eb:{c.instructions+=2;NFSU2_TR(0x6480eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6480ee:{NFSU2_TR(0x6480ee);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B6480f2:L6480f2:{c.instructions+=3;NFSU2_TR(0x6480f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6480f5:{NFSU2_TR(0x6480f5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6480f8:{NFSU2_TR(0x6480f8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L648130;}}
}
B6480fa:L6480fa:{c.instructions+=3;NFSU2_TR(0x6480fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64818cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B648101:{NFSU2_TR(0x648101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B648104:{NFSU2_TR(0x648104);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x64817cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64810b:L64810b:{c.instructions+=9;NFSU2_TR(0x64810b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x334ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B648111:{NFSU2_TR(0x648111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B648113:{NFSU2_TR(0x648113);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x330ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648119:{NFSU2_TR(0x648119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64811b:{NFSU2_TR(0x64811b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64811d:{NFSU2_TR(0x64811d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B64811f:{NFSU2_TR(0x64811f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648122:{NFSU2_TR(0x648122);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648124:{NFSU2_TR(0x648124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B648125:L648125:{c.instructions+=3;NFSU2_TR(0x648125);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B648128:{NFSU2_TR(0x648128);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64812a:{NFSU2_TR(0x64812a);
{goto L648175;}
}
B64812c:L64812c:{c.instructions+=2;NFSU2_TR(0x64812c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64812e:{NFSU2_TR(0x64812e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648125u);}goto L648125;}
}
B648130:L648130:{c.instructions+=2;NFSU2_TR(0x648130);
w4(R+0,u32(0x80004005ull));
}
B648135:{NFSU2_TR(0x648135);
{goto L648175;}
}
B648137:L648137:{c.instructions+=3;NFSU2_TR(0x648137);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B648139:{NFSU2_TR(0x648139);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
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
B64813c:{NFSU2_TR(0x64813c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L648175;}}
}
B64813e:L64813e:{c.instructions+=4;NFSU2_TR(0x64813e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648141:{NFSU2_TR(0x648141);
__builtin_memmove((R+4),(R+28),4);
}
B648143:{NFSU2_TR(0x648143);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648146:{NFSU2_TR(0x648146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64814bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6480b0u);}goto L6480b0;}
}
B64814b:L64814b:{c.instructions+=2;NFSU2_TR(0x64814b);
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
B64814d:{NFSU2_TR(0x64814d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648175;}}
}
B64814f:L64814f:{c.instructions+=3;NFSU2_TR(0x64814f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B648150:{NFSU2_TR(0x648150);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648153:{NFSU2_TR(0x648153);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64813eu);}goto L64813e;}}
}
B648155:L648155:{c.instructions+=1;NFSU2_TR(0x648155);
{goto L648175;}
}
B648157:L648157:{c.instructions+=6;NFSU2_TR(0x648157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64815a:{NFSU2_TR(0x64815a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64815d:{NFSU2_TR(0x64815d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648160:{NFSU2_TR(0x648160);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648163:{NFSU2_TR(0x648163);
__builtin_memmove((R+4),(R+28),4);
}
B648165:{NFSU2_TR(0x648165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64816aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6480b0u);}goto L6480b0;}
}
B64816a:L64816a:{c.instructions+=2;NFSU2_TR(0x64816a);
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
B64816c:{NFSU2_TR(0x64816c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648175;}}
}
B64816e:L64816e:{c.instructions+=3;NFSU2_TR(0x64816e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B648171:{NFSU2_TR(0x648171);
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
B648173:{NFSU2_TR(0x648173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648157u);}goto L648157;}}
}
B648175:L648175:{c.instructions+=5;NFSU2_TR(0x648175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B648176:{NFSU2_TR(0x648176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B648177:{NFSU2_TR(0x648177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B648178:{NFSU2_TR(0x648178);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B648179:{NFSU2_TR(0x648179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6481aa:L6481aa:{c.instructions+=19;NFSU2_TR(0x6481aa);
__builtin_memmove((R+28),(R+28),4);
}
B6481ac:{NFSU2_TR(0x6481ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6481ad:{NFSU2_TR(0x6481ad);
__builtin_memmove((R+20),(R+16),4);
}
B6481af:{NFSU2_TR(0x6481af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6481b2:{NFSU2_TR(0x6481b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6481b3:{NFSU2_TR(0x6481b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6481b4:{NFSU2_TR(0x6481b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6481b7:{NFSU2_TR(0x6481b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6481ba:{NFSU2_TR(0x6481ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6481bb:{NFSU2_TR(0x6481bb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6481bd:{NFSU2_TR(0x6481bd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6481be:{NFSU2_TR(0x6481be);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6481c0:{NFSU2_TR(0x6481c0);
__builtin_memmove((R+8),(R+4),4);
}
B6481c2:{NFSU2_TR(0x6481c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6481c3:{NFSU2_TR(0x6481c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6481c6:{NFSU2_TR(0x6481c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6481c9:{NFSU2_TR(0x6481c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6481cc:{NFSU2_TR(0x6481cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6481cf:{NFSU2_TR(0x6481cf);
if(r1(R+518)){{goto L648495;}}
}
B6481d5:L6481d5:{c.instructions+=2;NFSU2_TR(0x6481d5);
w1(R+512,u8((r4(R+0))<(u32(0x7ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6481d8:{NFSU2_TR(0x6481d8);
if(r1(R+518)){{goto L648468;}}
}
B6481de:L6481de:{c.instructions+=2;NFSU2_TR(0x6481de);
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
B6481df:{NFSU2_TR(0x6481df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648436;}}
}
B6481e5:L6481e5:{c.instructions+=5;NFSU2_TR(0x6481e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6481e8:{NFSU2_TR(0x6481e8);
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6481ea:{NFSU2_TR(0x6481ea);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6481ec:{NFSU2_TR(0x6481ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6481ed:{NFSU2_TR(0x6481ed);
if(r1(R+518)){{goto L64823a;}}
}
B6481ef:L6481ef:{c.instructions+=2;NFSU2_TR(0x6481ef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6481f0:{NFSU2_TR(0x6481f0);
if(r1(R+518)){{goto L648228;}}
}
B6481f2:L6481f2:{c.instructions+=2;NFSU2_TR(0x6481f2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6481f3:{NFSU2_TR(0x6481f3);
if(r1(R+518)){{goto L64821a;}}
}
B6481f5:L6481f5:{c.instructions+=2;NFSU2_TR(0x6481f5);
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
B6481f6:{NFSU2_TR(0x6481f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648436;}}
}
B6481fc:L6481fc:{c.instructions+=2;NFSU2_TR(0x6481fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6481ff:{NFSU2_TR(0x6481ff);
if(r1(R+518)){{goto L64820b;}}
}
B648201:L648201:{c.instructions+=2;NFSU2_TR(0x648201);
u8 U[4];
w4(U+0,u32(0x7aed28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648206:{NFSU2_TR(0x648206);
{goto L648426;}
}
B64820b:L64820b:{c.instructions+=4;NFSU2_TR(0x64820b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648212:{NFSU2_TR(0x648212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648215:{NFSU2_TR(0x648215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648218:{NFSU2_TR(0x648218);
{goto L648246;}
}
B64821a:L64821a:{c.instructions+=5;NFSU2_TR(0x64821a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64821d:{NFSU2_TR(0x64821d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648220:{NFSU2_TR(0x648220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648223:{NFSU2_TR(0x648223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648226:{NFSU2_TR(0x648226);
{goto L648243;}
}
B648228:L648228:{c.instructions+=5;NFSU2_TR(0x648228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64822b:{NFSU2_TR(0x64822b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64822e:{NFSU2_TR(0x64822e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648231:{NFSU2_TR(0x648231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648238:{NFSU2_TR(0x648238);
{goto L648243;}
}
B64823a:L64823a:{c.instructions+=4;NFSU2_TR(0x64823a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64823c:{NFSU2_TR(0x64823c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64823d:{NFSU2_TR(0x64823d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648240:{NFSU2_TR(0x648240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648243:L648243:{c.instructions+=1;NFSU2_TR(0x648243);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648246:L648246:{c.instructions+=3;NFSU2_TR(0x648246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B648249:{NFSU2_TR(0x648249);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64824c:{NFSU2_TR(0x64824c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L648436;}}
}
B648252:L648252:{c.instructions+=1;NFSU2_TR(0x648252);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x648659ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B648259:L648259:{c.instructions+=1;NFSU2_TR(0x648259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648260:L648260:{c.instructions+=7;NFSU2_TR(0x648260);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648263:{NFSU2_TR(0x648263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B648266:{NFSU2_TR(0x648266);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648268:{NFSU2_TR(0x648268);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64826b:{NFSU2_TR(0x64826b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64826c:{NFSU2_TR(0x64826c);
__builtin_memmove((R+4),(R+24),4);
}
B64826e:{NFSU2_TR(0x64826e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648273ull));
TAIL_STATIC(0x647827u,647);
}
B648273:L648273:{c.instructions+=2;NFSU2_TR(0x648273);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B648275:{NFSU2_TR(0x648275);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B64827b:L64827b:{c.instructions+=6;NFSU2_TR(0x64827b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64827c:{NFSU2_TR(0x64827c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64827e:{NFSU2_TR(0x64827e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648281:{NFSU2_TR(0x648281);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648282:{NFSU2_TR(0x648282);
__builtin_memmove((R+4),(R+24),4);
}
B648284:{NFSU2_TR(0x648284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648289ull));
TAIL_STATIC(0x647827u,647);
}
B648289:L648289:{c.instructions+=2;NFSU2_TR(0x648289);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64828b:{NFSU2_TR(0x64828b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B648291:L648291:{c.instructions+=4;NFSU2_TR(0x648291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648294:{NFSU2_TR(0x648294);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648296:{NFSU2_TR(0x648296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B648299:{NFSU2_TR(0x648299);
if(r1(R+518)){{goto L648442;}}
}
B64829f:L64829f:{c.instructions+=2;NFSU2_TR(0x64829f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6482a1:{NFSU2_TR(0x6482a1);
if(r1(R+518)){{goto L648442;}}
}
B6482a7:L6482a7:{c.instructions+=5;NFSU2_TR(0x6482a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6482aa:{NFSU2_TR(0x6482aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6482ab:{NFSU2_TR(0x6482ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6482ae:{NFSU2_TR(0x6482ae);
__builtin_memmove((R+4),(R+12),4);
}
B6482b0:{NFSU2_TR(0x6482b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6482b5ull));
TAIL_STATIC(0x6478deu,647);
}
B6482b5:L6482b5:{c.instructions+=2;NFSU2_TR(0x6482b5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6482b7:{NFSU2_TR(0x6482b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B6482bd:L6482bd:{c.instructions+=4;NFSU2_TR(0x6482bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6482be:{NFSU2_TR(0x6482be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6482c1:{NFSU2_TR(0x6482c1);
__builtin_memmove((R+4),(R+24),4);
}
B6482c3:{NFSU2_TR(0x6482c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6482c8ull));
TAIL_STATIC(0x647930u,647);
}
B6482c8:L6482c8:{c.instructions+=2;NFSU2_TR(0x6482c8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6482ca:{NFSU2_TR(0x6482ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B6482d0:L6482d0:{c.instructions+=2;NFSU2_TR(0x6482d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6482d3:{NFSU2_TR(0x6482d3);
if(r1(R+518)){{goto L648455;}}
}
B6482d9:L6482d9:{c.instructions+=2;NFSU2_TR(0x6482d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6482db:{NFSU2_TR(0x6482db);
if(r1(R+518)){{goto L648455;}}
}
B6482e1:L6482e1:{c.instructions+=5;NFSU2_TR(0x6482e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6482e4:{NFSU2_TR(0x6482e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6482e5:{NFSU2_TR(0x6482e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6482e8:{NFSU2_TR(0x6482e8);
__builtin_memmove((R+4),(R+12),4);
}
B6482ea:{NFSU2_TR(0x6482ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6482efull));
TAIL_STATIC(0x6478deu,647);
}
B6482ef:L6482ef:{c.instructions+=2;NFSU2_TR(0x6482ef);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6482f1:{NFSU2_TR(0x6482f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B6482f7:L6482f7:{c.instructions+=4;NFSU2_TR(0x6482f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6482f8:{NFSU2_TR(0x6482f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6482fb:{NFSU2_TR(0x6482fb);
__builtin_memmove((R+4),(R+24),4);
}
B6482fd:{NFSU2_TR(0x6482fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648302ull));
TAIL_STATIC(0x647930u,647);
}
B648302:L648302:{c.instructions+=2;NFSU2_TR(0x648302);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B648304:{NFSU2_TR(0x648304);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B64830a:L64830a:{c.instructions+=6;NFSU2_TR(0x64830a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64830b:{NFSU2_TR(0x64830b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64830d:{NFSU2_TR(0x64830d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648310:{NFSU2_TR(0x648310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648311:{NFSU2_TR(0x648311);
__builtin_memmove((R+4),(R+24),4);
}
B648313:{NFSU2_TR(0x648313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648318ull));
TAIL_STATIC(0x647827u,647);
}
B648318:L648318:{c.instructions+=2;NFSU2_TR(0x648318);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64831a:{NFSU2_TR(0x64831a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B648320:L648320:{c.instructions+=2;NFSU2_TR(0x648320);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648323:{NFSU2_TR(0x648323);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64843b;}}
}
B648329:L648329:{c.instructions+=2;NFSU2_TR(0x648329);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64832d:{NFSU2_TR(0x64832d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64843b;}}
}
B648333:L648333:{c.instructions+=6;NFSU2_TR(0x648333);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648334:{NFSU2_TR(0x648334);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648336:{NFSU2_TR(0x648336);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B648339:{NFSU2_TR(0x648339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64833a:{NFSU2_TR(0x64833a);
__builtin_memmove((R+4),(R+24),4);
}
B64833c:{NFSU2_TR(0x64833c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648341ull));
TAIL_STATIC(0x647827u,647);
}
B648341:L648341:{c.instructions+=2;NFSU2_TR(0x648341);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B648343:{NFSU2_TR(0x648343);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64843b;}}
}
B648349:L648349:{c.instructions+=6;NFSU2_TR(0x648349);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64834a:{NFSU2_TR(0x64834a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64834c:{NFSU2_TR(0x64834c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64834f:{NFSU2_TR(0x64834f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648350:{NFSU2_TR(0x648350);
__builtin_memmove((R+4),(R+24),4);
}
B648352:{NFSU2_TR(0x648352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648357ull));
TAIL_STATIC(0x647827u,647);
}
B648357:L648357:{c.instructions+=1;NFSU2_TR(0x648357);
{goto L64843b;}
}
B64835c:L64835c:{c.instructions+=2;NFSU2_TR(0x64835c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64835f:{NFSU2_TR(0x64835f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B648364:L648364:{c.instructions+=2;NFSU2_TR(0x648364);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64836b:{NFSU2_TR(0x64836b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B648370:L648370:{c.instructions+=2;NFSU2_TR(0x648370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648377:{NFSU2_TR(0x648377);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B64837c:L64837c:{c.instructions+=2;NFSU2_TR(0x64837c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64837f:{NFSU2_TR(0x64837f);
{goto L648418;}
}
B648384:L648384:{c.instructions+=2;NFSU2_TR(0x648384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64838b:{NFSU2_TR(0x64838b);
{goto L648418;}
}
B648390:L648390:{c.instructions+=2;NFSU2_TR(0x648390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648397:{NFSU2_TR(0x648397);
{goto L648418;}
}
B648399:L648399:{c.instructions+=2;NFSU2_TR(0x648399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483a0:{NFSU2_TR(0x6483a0);
{goto L648418;}
}
B6483a2:L6483a2:{c.instructions+=2;NFSU2_TR(0x6483a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483a9:{NFSU2_TR(0x6483a9);
{goto L648418;}
}
B6483ab:L6483ab:{c.instructions+=2;NFSU2_TR(0x6483ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483b2:{NFSU2_TR(0x6483b2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B6483b7:L6483b7:{c.instructions+=2;NFSU2_TR(0x6483b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483be:{NFSU2_TR(0x6483be);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B6483c3:L6483c3:{c.instructions+=2;NFSU2_TR(0x6483c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483ca:{NFSU2_TR(0x6483ca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B6483cf:L6483cf:{c.instructions+=2;NFSU2_TR(0x6483cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483d6:{NFSU2_TR(0x6483d6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B6483db:L6483db:{c.instructions+=2;NFSU2_TR(0x6483db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483e2:{NFSU2_TR(0x6483e2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B6483e7:L6483e7:{c.instructions+=2;NFSU2_TR(0x6483e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xf30000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483ee:{NFSU2_TR(0x6483ee);
{goto L648418;}
}
B6483f0:L6483f0:{c.instructions+=2;NFSU2_TR(0x6483f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B6483f7:{NFSU2_TR(0x6483f7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B6483fc:L6483fc:{c.instructions+=2;NFSU2_TR(0x6483fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648403:{NFSU2_TR(0x648403);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}
}
B648408:L648408:{c.instructions+=2;NFSU2_TR(0x648408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64840f:{NFSU2_TR(0x64840f);
{goto L648418;}
}
B648411:L648411:{c.instructions+=1;NFSU2_TR(0x648411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648418:L648418:{c.instructions+=2;NFSU2_TR(0x648418);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64841b:{NFSU2_TR(0x64841b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648260u);}goto L648260;}}
}
B648421:L648421:{c.instructions+=1;NFSU2_TR(0x648421);
u8 U[4];
w4(U+0,u32(0x7aecd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648426:L648426:{c.instructions+=5;NFSU2_TR(0x648426);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648427:{NFSU2_TR(0x648427);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64842a:{NFSU2_TR(0x64842a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x28ull))));
}
B64842d:{NFSU2_TR(0x64842d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64842e:{NFSU2_TR(0x64842e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648433ull));
TAIL_STATIC(0x64307cu,643);
}
B648433:L648433:{c.instructions+=1;NFSU2_TR(0x648433);
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
B648436:L648436:{c.instructions+=1;NFSU2_TR(0x648436);
w4(R+0,u32(0x80004005ull));
}
B64843b:L64843b:{c.instructions+=5;NFSU2_TR(0x64843b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64843c:{NFSU2_TR(0x64843c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64843d:{NFSU2_TR(0x64843d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64843e:{NFSU2_TR(0x64843e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64843f:{NFSU2_TR(0x64843f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B648442:L648442:{c.instructions+=6;NFSU2_TR(0x648442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648443:{NFSU2_TR(0x648443);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648445:{NFSU2_TR(0x648445);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648448:{NFSU2_TR(0x648448);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648449:{NFSU2_TR(0x648449);
__builtin_memmove((R+4),(R+24),4);
}
B64844b:{NFSU2_TR(0x64844b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648450ull));
TAIL_STATIC(0x647827u,647);
}
B648450:L648450:{c.instructions+=1;NFSU2_TR(0x648450);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6482c8u);}goto L6482c8;}
}
B648455:L648455:{c.instructions+=6;NFSU2_TR(0x648455);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648456:{NFSU2_TR(0x648456);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648458:{NFSU2_TR(0x648458);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64845b:{NFSU2_TR(0x64845b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64845c:{NFSU2_TR(0x64845c);
__builtin_memmove((R+4),(R+24),4);
}
B64845e:{NFSU2_TR(0x64845e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648463ull));
TAIL_STATIC(0x647827u,647);
}
B648463:L648463:{c.instructions+=1;NFSU2_TR(0x648463);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648302u);}goto L648302;}
}
B648468:L648468:{c.instructions+=3;NFSU2_TR(0x648468);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64846b:{NFSU2_TR(0x64846b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64846d:{NFSU2_TR(0x64846d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648472;}}
}
B64846f:L64846f:{c.instructions+=2;NFSU2_TR(0x64846f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B648471:{NFSU2_TR(0x648471);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B648472:L648472:{c.instructions+=12;NFSU2_TR(0x648472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648475:{NFSU2_TR(0x648475);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648476:{NFSU2_TR(0x648476);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B648479:{NFSU2_TR(0x648479);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64847c:{NFSU2_TR(0x64847c);
__builtin_memmove((R+4),(R+8),4);
}
B64847e:{NFSU2_TR(0x64847e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648481:{NFSU2_TR(0x648481);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648484:{NFSU2_TR(0x648484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648485:{NFSU2_TR(0x648485);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648488:{NFSU2_TR(0x648488);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64848b:{NFSU2_TR(0x64848b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64848e:{NFSU2_TR(0x64848e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648493ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6481aau);}goto L6481aa;}
}
B648493:L648493:{c.instructions+=1;NFSU2_TR(0x648493);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}
}
B648495:L648495:{c.instructions+=8;NFSU2_TR(0x648495);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648498:{NFSU2_TR(0x648498);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64849b:{NFSU2_TR(0x64849b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64849d:{NFSU2_TR(0x64849d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64849e:{NFSU2_TR(0x64849e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64849f:{NFSU2_TR(0x64849f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6484a2:{NFSU2_TR(0x6484a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6484a3:{NFSU2_TR(0x6484a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6484a8ull));
TAIL_STATIC(0x647827u,647);
}
B6484a8:L6484a8:{c.instructions+=2;NFSU2_TR(0x6484a8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6484aa:{NFSU2_TR(0x6484aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B6484ac:L6484ac:{c.instructions+=6;NFSU2_TR(0x6484ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6484af:{NFSU2_TR(0x6484af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6484b0:{NFSU2_TR(0x6484b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6484b1:{NFSU2_TR(0x6484b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6484b4:{NFSU2_TR(0x6484b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6484b5:{NFSU2_TR(0x6484b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6484baull));
TAIL_STATIC(0x647827u,647);
}
B6484ba:L6484ba:{c.instructions+=2;NFSU2_TR(0x6484ba);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6484bc:{NFSU2_TR(0x6484bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B6484c2:L6484c2:{c.instructions+=2;NFSU2_TR(0x6484c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6484c5:{NFSU2_TR(0x6484c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6484c8:L6484c8:{c.instructions+=4;NFSU2_TR(0x6484c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6484cb:{NFSU2_TR(0x6484cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6484ce:{NFSU2_TR(0x6484ce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6484d0:{NFSU2_TR(0x6484d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6484c8u);}goto L6484c8;}}
}
B6484d2:L6484d2:{c.instructions+=3;NFSU2_TR(0x6484d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6484d5:{NFSU2_TR(0x6484d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6484d7:{NFSU2_TR(0x6484d7);
if(r1(R+518)){{goto L648579;}}
}
B6484dd:L6484dd:{c.instructions+=2;NFSU2_TR(0x6484dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6484e0:{NFSU2_TR(0x6484e0);
if(r1(R+518)){{goto L648579;}}
}
B6484e6:L6484e6:{c.instructions+=5;NFSU2_TR(0x6484e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6484e9:{NFSU2_TR(0x6484e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6484ea:{NFSU2_TR(0x6484ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6484ed:{NFSU2_TR(0x6484ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6484f0:{NFSU2_TR(0x6484f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6484f5ull));
TAIL_STATIC(0x6478deu,647);
}
B6484f5:L6484f5:{c.instructions+=2;NFSU2_TR(0x6484f5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6484f7:{NFSU2_TR(0x6484f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B6484fd:L6484fd:{c.instructions+=4;NFSU2_TR(0x6484fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648500:{NFSU2_TR(0x648500);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648501:{NFSU2_TR(0x648501);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648504:{NFSU2_TR(0x648504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648509ull));
TAIL_STATIC(0x647930u,647);
}
B648509:L648509:{c.instructions+=2;NFSU2_TR(0x648509);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64850b:{NFSU2_TR(0x64850b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B648511:L648511:{c.instructions+=2;NFSU2_TR(0x648511);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648514:{NFSU2_TR(0x648514);
if(r1(R+518)){{goto L648589;}}
}
B648516:L648516:{c.instructions+=3;NFSU2_TR(0x648516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648519:{NFSU2_TR(0x648519);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64851b:{NFSU2_TR(0x64851b);
if(r1(R+518)){{goto L648589;}}
}
B64851d:L64851d:{c.instructions+=4;NFSU2_TR(0x64851d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B648520:{NFSU2_TR(0x648520);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648521:{NFSU2_TR(0x648521);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648524:{NFSU2_TR(0x648524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648529ull));
TAIL_STATIC(0x6478deu,647);
}
B648529:L648529:{c.instructions+=2;NFSU2_TR(0x648529);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64852b:{NFSU2_TR(0x64852b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B648531:L648531:{c.instructions+=4;NFSU2_TR(0x648531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648534:{NFSU2_TR(0x648534);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648535:{NFSU2_TR(0x648535);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648538:{NFSU2_TR(0x648538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64853dull));
TAIL_STATIC(0x647930u,647);
}
B64853d:L64853d:{c.instructions+=2;NFSU2_TR(0x64853d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64853f:{NFSU2_TR(0x64853f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B648545:L648545:{c.instructions+=6;NFSU2_TR(0x648545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648548:{NFSU2_TR(0x648548);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648549:{NFSU2_TR(0x648549);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64854a:{NFSU2_TR(0x64854a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64854d:{NFSU2_TR(0x64854d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64854e:{NFSU2_TR(0x64854e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648553ull));
TAIL_STATIC(0x647827u,647);
}
B648553:L648553:{c.instructions+=2;NFSU2_TR(0x648553);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B648555:{NFSU2_TR(0x648555);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B64855b:L64855b:{c.instructions+=6;NFSU2_TR(0x64855b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64855e:{NFSU2_TR(0x64855e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64855f:{NFSU2_TR(0x64855f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648560:{NFSU2_TR(0x648560);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648563:{NFSU2_TR(0x648563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648564:{NFSU2_TR(0x648564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648569ull));
TAIL_STATIC(0x647827u,647);
}
B648569:L648569:{c.instructions+=2;NFSU2_TR(0x648569);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64856b:{NFSU2_TR(0x64856b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B648571:L648571:{c.instructions+=2;NFSU2_TR(0x648571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B648574:{NFSU2_TR(0x648574);
{goto L64864c;}
}
B648579:L648579:{c.instructions+=6;NFSU2_TR(0x648579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64857c:{NFSU2_TR(0x64857c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64857d:{NFSU2_TR(0x64857d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64857e:{NFSU2_TR(0x64857e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648581:{NFSU2_TR(0x648581);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648582:{NFSU2_TR(0x648582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648587ull));
TAIL_STATIC(0x647827u,647);
}
B648587:L648587:{c.instructions+=1;NFSU2_TR(0x648587);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648509u);}goto L648509;}
}
B648589:L648589:{c.instructions+=6;NFSU2_TR(0x648589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64858c:{NFSU2_TR(0x64858c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64858d:{NFSU2_TR(0x64858d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64858e:{NFSU2_TR(0x64858e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648591:{NFSU2_TR(0x648591);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648592:{NFSU2_TR(0x648592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648597ull));
TAIL_STATIC(0x647827u,647);
}
B648597:L648597:{c.instructions+=1;NFSU2_TR(0x648597);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64853du);}goto L64853d;}
}
B648599:L648599:{c.instructions+=2;NFSU2_TR(0x648599);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64859d:{NFSU2_TR(0x64859d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485a3:L6485a3:{c.instructions+=3;NFSU2_TR(0x6485a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6485a6:{NFSU2_TR(0x6485a6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6485a8:{NFSU2_TR(0x6485a8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485ae:L6485ae:{c.instructions+=2;NFSU2_TR(0x6485ae);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6485b2:{NFSU2_TR(0x6485b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485b8:L6485b8:{c.instructions+=3;NFSU2_TR(0x6485b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6485bb:{NFSU2_TR(0x6485bb);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6485bd:{NFSU2_TR(0x6485bd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485c3:L6485c3:{c.instructions+=2;NFSU2_TR(0x6485c3);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6485c7:{NFSU2_TR(0x6485c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485cd:L6485cd:{c.instructions+=3;NFSU2_TR(0x6485cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6485d0:{NFSU2_TR(0x6485d0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x9ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6485d3:{NFSU2_TR(0x6485d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485d9:L6485d9:{c.instructions+=2;NFSU2_TR(0x6485d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6485dc:{NFSU2_TR(0x6485dc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485e2:L6485e2:{c.instructions+=2;NFSU2_TR(0x6485e2);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6485e6:{NFSU2_TR(0x6485e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485ec:L6485ec:{c.instructions+=3;NFSU2_TR(0x6485ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6485ef:{NFSU2_TR(0x6485ef);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6485f1:{NFSU2_TR(0x6485f1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B6485f7:L6485f7:{c.instructions+=2;NFSU2_TR(0x6485f7);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6485fb:{NFSU2_TR(0x6485fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B648601:L648601:{c.instructions+=3;NFSU2_TR(0x648601);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B648604:{NFSU2_TR(0x648604);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B648606:{NFSU2_TR(0x648606);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B64860c:L64860c:{c.instructions+=4;NFSU2_TR(0x64860c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64860f:{NFSU2_TR(0x64860f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B648611:{NFSU2_TR(0x648611);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648613:{NFSU2_TR(0x648613);
if(r1(R+518)){{goto L64862c;}}
}
B648615:L648615:{c.instructions+=2;NFSU2_TR(0x648615);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648619:{NFSU2_TR(0x648619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B64861f:L64861f:{c.instructions+=2;NFSU2_TR(0x64861f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x9ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648623:{NFSU2_TR(0x648623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648436u);}goto L648436;}}
}
B648629:L648629:{c.instructions+=1;NFSU2_TR(0x648629);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64862c:L64862c:{c.instructions+=10;NFSU2_TR(0x64862c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64862e:{NFSU2_TR(0x64862e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64862f:{NFSU2_TR(0x64862f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648632:{NFSU2_TR(0x648632);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648635:{NFSU2_TR(0x648635);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648636:{NFSU2_TR(0x648636);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648637:{NFSU2_TR(0x648637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64863a:{NFSU2_TR(0x64863a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64863b:{NFSU2_TR(0x64863b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64863c:{NFSU2_TR(0x64863c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648641ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6481aau);}goto L6481aa;}
}
B648641:L648641:{c.instructions+=2;NFSU2_TR(0x648641);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B648643:{NFSU2_TR(0x648643);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}}
}
B648649:L648649:{c.instructions+=1;NFSU2_TR(0x648649);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64864c:L64864c:{c.instructions+=2;NFSU2_TR(0x64864c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64864e:{NFSU2_TR(0x64864e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648599u);}goto L648599;}}
}
B648654:L648654:{c.instructions+=1;NFSU2_TR(0x648654);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64843bu);}goto L64843b;}
}
B6486d1:L6486d1:{c.instructions+=17;NFSU2_TR(0x6486d1);
__builtin_memmove((R+28),(R+28),4);
}
B6486d3:{NFSU2_TR(0x6486d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6486d4:{NFSU2_TR(0x6486d4);
__builtin_memmove((R+20),(R+16),4);
}
B6486d6:{NFSU2_TR(0x6486d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6486d9:{NFSU2_TR(0x6486d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6486da:{NFSU2_TR(0x6486da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6486db:{NFSU2_TR(0x6486db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6486de:{NFSU2_TR(0x6486de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6486e1:{NFSU2_TR(0x6486e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6486e2:{NFSU2_TR(0x6486e2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6486e4:{NFSU2_TR(0x6486e4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6486e6:{NFSU2_TR(0x6486e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6486e9:{NFSU2_TR(0x6486e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6486ec:{NFSU2_TR(0x6486ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6486ef:{NFSU2_TR(0x6486ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6486f2:{NFSU2_TR(0x6486f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6486f5:{NFSU2_TR(0x6486f5);
if(r1(R+518)){{goto L64871a;}}
}
B6486f7:L6486f7:{c.instructions+=1;NFSU2_TR(0x6486f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6486f9:L6486f9:{c.instructions+=2;NFSU2_TR(0x6486f9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6486fb:{NFSU2_TR(0x6486fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648713;}}
}
B6486fd:L6486fd:{c.instructions+=2;NFSU2_TR(0x6486fd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648701:{NFSU2_TR(0x648701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648ffd;}}
}
B648707:L648707:{c.instructions+=3;NFSU2_TR(0x648707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64870a:{NFSU2_TR(0x64870a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64870d:{NFSU2_TR(0x64870d);
if(r1(R+518)){{goto L648ffd;}}
}
B648713:L648713:{c.instructions+=3;NFSU2_TR(0x648713);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648716:{NFSU2_TR(0x648716);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648718:{NFSU2_TR(0x648718);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6486f9u);}goto L6486f9;}}
}
B64871a:L64871a:{c.instructions+=18;NFSU2_TR(0x64871a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64871c:{NFSU2_TR(0x64871c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64871f:{NFSU2_TR(0x64871f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B648722:{NFSU2_TR(0x648722);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648725:{NFSU2_TR(0x648725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648728:{NFSU2_TR(0x648728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64872b:{NFSU2_TR(0x64872b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64872e:{NFSU2_TR(0x64872e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648731:{NFSU2_TR(0x648731);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648734:{NFSU2_TR(0x648734);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648737:{NFSU2_TR(0x648737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64873a:{NFSU2_TR(0x64873a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64873d:{NFSU2_TR(0x64873d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648740:{NFSU2_TR(0x648740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648743:{NFSU2_TR(0x648743);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648746:{NFSU2_TR(0x648746);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B648747:{NFSU2_TR(0x648747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64874a:{NFSU2_TR(0x64874a);
if(r1(R+518)){{goto L64887f;}}
}
B648750:L648750:{c.instructions+=2;NFSU2_TR(0x648750);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B648753:{NFSU2_TR(0x648753);
if(r1(R+518)){{goto L64877f;}}
}
B648755:L648755:{c.instructions+=10;NFSU2_TR(0x648755);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648758:{NFSU2_TR(0x648758);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B64875b:{NFSU2_TR(0x64875b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648761:{NFSU2_TR(0x648761);
u8 U[4];
w4(U+0,u32(0x7aefb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648766:{NFSU2_TR(0x648766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648769:{NFSU2_TR(0x648769);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64876b:{NFSU2_TR(0x64876b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64876e:{NFSU2_TR(0x64876e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B648771:{NFSU2_TR(0x648771);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648772:{NFSU2_TR(0x648772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648777ull));
TAIL_STATIC(0x64307cu,643);
}
B648777:L648777:{c.instructions+=2;NFSU2_TR(0x648777);
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
B64877a:{NFSU2_TR(0x64877a);
TAIL_STATIC(0x6490b8u,649);
}
B64877f:L64877f:{c.instructions+=2;NFSU2_TR(0x64877f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B648782:{NFSU2_TR(0x648782);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64879f;}}
}
B648784:L648784:{c.instructions+=2;NFSU2_TR(0x648784);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648787:{NFSU2_TR(0x648787);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6487fe;}}
}
B648789:L648789:{c.instructions+=2;NFSU2_TR(0x648789);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64878c:{NFSU2_TR(0x64878c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64882b;}}
}
B648792:L648792:{c.instructions+=2;NFSU2_TR(0x648792);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648795:{NFSU2_TR(0x648795);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6487f8;}}
}
B648797:L648797:{c.instructions+=2;NFSU2_TR(0x648797);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf30000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64879d:{NFSU2_TR(0x64879d);
if(r1(R+518)){{goto L6487e3;}}
}
B64879f:L64879f:{c.instructions+=2;NFSU2_TR(0x64879f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6487a2:{NFSU2_TR(0x6487a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6487a7ull));
TAIL_STATIC(0x575620u,575);
}
B6487a7:L6487a7:{c.instructions+=4;NFSU2_TR(0x6487a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6487a9:{NFSU2_TR(0x6487a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6487aa:{NFSU2_TR(0x6487aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6487ad:{NFSU2_TR(0x6487ad);
if(r1(R+518)){{goto L6488b1;}}
}
B6487b3:L6487b3:{c.instructions+=5;NFSU2_TR(0x6487b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6487b6:{NFSU2_TR(0x6487b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6487b9:{NFSU2_TR(0x6487b9);
__builtin_memmove((R+8),(R+4),4);
}
B6487bb:{NFSU2_TR(0x6487bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6487be:{NFSU2_TR(0x6487be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6487c0:L6487c0:{c.instructions+=1;NFSU2_TR(0x6487c0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6487c2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6487c0u);}goto L6487c0;}
}
B6487c2:L6487c2:{c.instructions+=2;NFSU2_TR(0x6487c2);
__builtin_memmove((R+4),(R+8),4);
}
B6487c4:{NFSU2_TR(0x6487c4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6487c7:L6487c7:{c.instructions+=1;NFSU2_TR(0x6487c7);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6487c9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6487c7u);}goto L6487c7;}
}
B6487c9:L6487c9:{c.instructions+=6;NFSU2_TR(0x6487c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6487cc:{NFSU2_TR(0x6487cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6487cf:{NFSU2_TR(0x6487cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6487d0:{NFSU2_TR(0x6487d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6487d1:{NFSU2_TR(0x6487d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6487d4:{NFSU2_TR(0x6487d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6487d9ull));
TAIL_STATIC(0x647827u,647);
}
B6487d9:L6487d9:{c.instructions+=3;NFSU2_TR(0x6487d9);
__builtin_memmove((R+28),(R+0),4);
}
B6487db:{NFSU2_TR(0x6487db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6487dd:{NFSU2_TR(0x6487dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fee;}}
}
B6487e3:L6487e3:{c.instructions+=2;NFSU2_TR(0x6487e3);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6487e5:{NFSU2_TR(0x6487e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6487eaull));
TAIL_STATIC(0x575620u,575);
}
B6487ea:L6487ea:{c.instructions+=3;NFSU2_TR(0x6487ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6487ec:{NFSU2_TR(0x6487ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6487ed:{NFSU2_TR(0x6487ed);
if(r1(R+518)){{goto L648849;}}
}
B6487ef:L6487ef:{c.instructions+=3;NFSU2_TR(0x6487ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6487f3:{NFSU2_TR(0x6487f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6487f6:{NFSU2_TR(0x6487f6);
{goto L648850;}
}
B6487f8:L6487f8:{c.instructions+=1;NFSU2_TR(0x6487f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x334ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6487fe:L6487fe:{c.instructions+=8;NFSU2_TR(0x6487fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648801:{NFSU2_TR(0x648801);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648804:{NFSU2_TR(0x648804);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648805:{NFSU2_TR(0x648805);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648808:{NFSU2_TR(0x648808);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x330ull))));
}
B64880d:{NFSU2_TR(0x64880d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64880f:{NFSU2_TR(0x64880f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648810:{NFSU2_TR(0x648810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648815ull));
TAIL_STATIC(0x647827u,647);
}
B648815:L648815:{c.instructions+=3;NFSU2_TR(0x648815);
__builtin_memmove((R+28),(R+0),4);
}
B648817:{NFSU2_TR(0x648817);
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
B648819:{NFSU2_TR(0x648819);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648ffd;}}
}
B64881f:L64881f:{c.instructions+=4;NFSU2_TR(0x64881f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648822:{NFSU2_TR(0x648822);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x330ull))));
}
B648827:{NFSU2_TR(0x648827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B648829:{NFSU2_TR(0x648829);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6487e3u);}goto L6487e3;}
}
B64882b:L64882b:{c.instructions+=7;NFSU2_TR(0x64882b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64882e:{NFSU2_TR(0x64882e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648831:{NFSU2_TR(0x648831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648832:{NFSU2_TR(0x648832);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648834:{NFSU2_TR(0x648834);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648837:{NFSU2_TR(0x648837);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648838:{NFSU2_TR(0x648838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64883dull));
TAIL_STATIC(0x647827u,647);
}
B64883d:L64883d:{c.instructions+=3;NFSU2_TR(0x64883d);
__builtin_memmove((R+28),(R+0),4);
}
B64883f:{NFSU2_TR(0x64883f);
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
B648841:{NFSU2_TR(0x648841);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648ffd;}}
}
B648847:L648847:{c.instructions+=1;NFSU2_TR(0x648847);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6487e3u);}goto L6487e3;}
}
B648849:L648849:{c.instructions+=2;NFSU2_TR(0x648849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64884d:{NFSU2_TR(0x64884d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648850:L648850:{c.instructions+=2;NFSU2_TR(0x648850);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B648852:{NFSU2_TR(0x648852);
if(r1(R+518)){{goto L648af5;}}
}
B648858:L648858:{c.instructions+=13;NFSU2_TR(0x648858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64885b:{NFSU2_TR(0x64885b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64885d:{NFSU2_TR(0x64885d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648860:{NFSU2_TR(0x648860);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648863:{NFSU2_TR(0x648863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648866:{NFSU2_TR(0x648866);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648869:{NFSU2_TR(0x648869);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64886c:{NFSU2_TR(0x64886c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64886f:{NFSU2_TR(0x64886f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648872:{NFSU2_TR(0x648872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B648874:{NFSU2_TR(0x648874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648877:{NFSU2_TR(0x648877);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64887a:{NFSU2_TR(0x64887a);
{goto L648d8e;}
}
B64887f:L64887f:{c.instructions+=3;NFSU2_TR(0x64887f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648882:{NFSU2_TR(0x648882);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B648884:{NFSU2_TR(0x648884);
if(r1(R+518)){TAIL_STATIC(0x6490b8u,649);}
}
B64888a:L64888a:{c.instructions+=3;NFSU2_TR(0x64888a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64888d:{NFSU2_TR(0x64888d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648890:{NFSU2_TR(0x648890);
if(r1(R+518)){{goto L648c37;}}
}
B648896:L648896:{c.instructions+=2;NFSU2_TR(0x648896);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648899:{NFSU2_TR(0x648899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648d8e;}}
}
B64889f:L64889f:{c.instructions+=2;NFSU2_TR(0x64889f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6488a2:{NFSU2_TR(0x6488a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6488a7ull));
TAIL_STATIC(0x575620u,575);
}
B6488a7:L6488a7:{c.instructions+=5;NFSU2_TR(0x6488a7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6488a9:{NFSU2_TR(0x6488a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6488ab:{NFSU2_TR(0x6488ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6488ac:{NFSU2_TR(0x6488ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6488af:{NFSU2_TR(0x6488af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6488bb;}}
}
B6488b1:L6488b1:{c.instructions+=2;NFSU2_TR(0x6488b1);
w4(R+28,u32(0x8007000eull));
}
B6488b6:{NFSU2_TR(0x6488b6);
{goto L648fee;}
}
B6488bb:L6488bb:{c.instructions+=5;NFSU2_TR(0x6488bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6488be:{NFSU2_TR(0x6488be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6488c1:{NFSU2_TR(0x6488c1);
__builtin_memmove((R+8),(R+4),4);
}
B6488c3:{NFSU2_TR(0x6488c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6488c6:{NFSU2_TR(0x6488c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6488c8:L6488c8:{c.instructions+=1;NFSU2_TR(0x6488c8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6488ca;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6488c8u);}goto L6488c8;}
}
B6488ca:L6488ca:{c.instructions+=2;NFSU2_TR(0x6488ca);
__builtin_memmove((R+4),(R+8),4);
}
B6488cc:{NFSU2_TR(0x6488cc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6488cf:L6488cf:{c.instructions+=1;NFSU2_TR(0x6488cf);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6488d1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6488cfu);}goto L6488cf;}
}
B6488d1:L6488d1:{c.instructions+=4;NFSU2_TR(0x6488d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6488d4:{NFSU2_TR(0x6488d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6488d6:{NFSU2_TR(0x6488d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6488d9:{NFSU2_TR(0x6488d9);
if(r1(R+518)){{goto L648a80;}}
}
B6488df:L6488df:{c.instructions+=1;NFSU2_TR(0x6488df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6488e2:L6488e2:{c.instructions+=2;NFSU2_TR(0x6488e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6488e6:{NFSU2_TR(0x6488e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648af5;}}
}
B6488ec:L6488ec:{c.instructions+=3;NFSU2_TR(0x6488ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6488ef:{NFSU2_TR(0x6488ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6488f1:{NFSU2_TR(0x6488f1);
if(r1(R+518)){{goto L648af5;}}
}
B6488f7:L6488f7:{c.instructions+=2;NFSU2_TR(0x6488f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6488fb:{NFSU2_TR(0x6488fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648af5;}}
}
B648901:L648901:{c.instructions+=3;NFSU2_TR(0x648901);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648905:{NFSU2_TR(0x648905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648908:{NFSU2_TR(0x648908);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648941;}}
}
B64890a:L64890a:{c.instructions+=3;NFSU2_TR(0x64890a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64890d:{NFSU2_TR(0x64890d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64890f:{NFSU2_TR(0x64890f);
if(r1(R+518)){{goto L648941;}}
}
B648911:L648911:{c.instructions+=2;NFSU2_TR(0x648911);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648915:{NFSU2_TR(0x648915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648941;}}
}
B648917:L648917:{c.instructions+=2;NFSU2_TR(0x648917);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64891e:{NFSU2_TR(0x64891e);
{goto L64893a;}
}
B648920:L648920:{c.instructions+=3;NFSU2_TR(0x648920);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648923:{NFSU2_TR(0x648923);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648925:{NFSU2_TR(0x648925);
if(r1(R+518)){{goto L648941;}}
}
B648927:L648927:{c.instructions+=2;NFSU2_TR(0x648927);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64892b:{NFSU2_TR(0x64892b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648941;}}
}
B64892d:L64892d:{c.instructions+=3;NFSU2_TR(0x64892d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648930:{NFSU2_TR(0x648930);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648932:{NFSU2_TR(0x648932);
if(r1(R+518)){{goto L648941;}}
}
B648934:L648934:{c.instructions+=2;NFSU2_TR(0x648934);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648938:{NFSU2_TR(0x648938);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648941;}}
}
B64893a:L64893a:{c.instructions+=3;NFSU2_TR(0x64893a);
__builtin_memmove((R+0),(R+4),4);
}
B64893c:{NFSU2_TR(0x64893c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64893f:{NFSU2_TR(0x64893f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648920u);}goto L648920;}}
}
B648941:L648941:{c.instructions+=2;NFSU2_TR(0x648941);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648944:{NFSU2_TR(0x648944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648add;}}
}
B64894a:L64894a:{c.instructions+=3;NFSU2_TR(0x64894a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64894d:{NFSU2_TR(0x64894d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64894f:{NFSU2_TR(0x64894f);
if(r1(R+518)){{goto L648add;}}
}
B648955:L648955:{c.instructions+=2;NFSU2_TR(0x648955);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648959:{NFSU2_TR(0x648959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648add;}}
}
B64895f:L64895f:{c.instructions+=3;NFSU2_TR(0x64895f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648962:{NFSU2_TR(0x648962);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648964:{NFSU2_TR(0x648964);
if(r1(R+518)){{goto L648add;}}
}
B64896a:L64896a:{c.instructions+=2;NFSU2_TR(0x64896a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64896e:{NFSU2_TR(0x64896e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648add;}}
}
B648974:L648974:{c.instructions+=2;NFSU2_TR(0x648974);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648978:{NFSU2_TR(0x648978);
if(r1(R+518)){{goto L648add;}}
}
B64897e:L64897e:{c.instructions+=5;NFSU2_TR(0x64897e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648981:{NFSU2_TR(0x648981);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B648984:{NFSU2_TR(0x648984);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ac34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64898a:{NFSU2_TR(0x64898a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64898b:{NFSU2_TR(0x64898b);
if(r1(R+518)){{goto L648a34;}}
}
B648991:L648991:{c.instructions+=2;NFSU2_TR(0x648991);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648992:{NFSU2_TR(0x648992);
if(r1(R+518)){{goto L6489f7;}}
}
B648994:L648994:{c.instructions+=2;NFSU2_TR(0x648994);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648995:{NFSU2_TR(0x648995);
if(r1(R+518)){{goto L6489a3;}}
}
B648997:L648997:{c.instructions+=2;NFSU2_TR(0x648997);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xf1fffdull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64899d:{NFSU2_TR(0x64899d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648acf;}}
}
B6489a3:L6489a3:{c.instructions+=3;NFSU2_TR(0x6489a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6489a6:{NFSU2_TR(0x6489a6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6489a8:{NFSU2_TR(0x6489a8);
if(r1(R+518)){{goto L6489d6;}}
}
B6489aa:L6489aa:{c.instructions+=2;NFSU2_TR(0x6489aa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6489ab:{NFSU2_TR(0x6489ab);
if(r1(R+518)){{goto L6489d1;}}
}
B6489ad:L6489ad:{c.instructions+=2;NFSU2_TR(0x6489ad);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6489ae:{NFSU2_TR(0x6489ae);
if(r1(R+518)){{goto L6489bc;}}
}
B6489b0:L6489b0:{c.instructions+=2;NFSU2_TR(0x6489b0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6489b1:{NFSU2_TR(0x6489b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648ad6;}}
}
B6489b7:L6489b7:{c.instructions+=2;NFSU2_TR(0x6489b7);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6489ba:{NFSU2_TR(0x6489ba);
{goto L6489e4;}
}
B6489bc:L6489bc:{c.instructions+=5;NFSU2_TR(0x6489bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6489bf:{NFSU2_TR(0x6489bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6489c1:{NFSU2_TR(0x6489c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6489c4:{NFSU2_TR(0x6489c4);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6489c7:{NFSU2_TR(0x6489c7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6489e4;}}
}
B6489c9:L6489c9:{c.instructions+=2;NFSU2_TR(0x6489c9);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6489cf:{NFSU2_TR(0x6489cf);
{goto L6489e4;}
}
B6489d1:L6489d1:{c.instructions+=2;NFSU2_TR(0x6489d1);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6489d4:{NFSU2_TR(0x6489d4);
{goto L6489e4;}
}
B6489d6:L6489d6:{c.instructions+=5;NFSU2_TR(0x6489d6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6489d8:{NFSU2_TR(0x6489d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6489db:{NFSU2_TR(0x6489db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6489de:{NFSU2_TR(0x6489de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6489e1:{NFSU2_TR(0x6489e1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6489e4:L6489e4:{c.instructions+=3;NFSU2_TR(0x6489e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6489e7:{NFSU2_TR(0x6489e7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6489e9:{NFSU2_TR(0x6489e9);
if(r1(R+518)){{goto L648a6f;}}
}
B6489ef:L6489ef:{c.instructions+=4;NFSU2_TR(0x6489ef);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6489f1:{NFSU2_TR(0x6489f1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6489f3:{NFSU2_TR(0x6489f3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6489f5:{NFSU2_TR(0x6489f5);
{goto L648a6f;}
}
B6489f7:L6489f7:{c.instructions+=3;NFSU2_TR(0x6489f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6489fa:{NFSU2_TR(0x6489fa);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6489fc:{NFSU2_TR(0x6489fc);
if(r1(R+518)){{goto L648a21;}}
}
B6489fe:L6489fe:{c.instructions+=2;NFSU2_TR(0x6489fe);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6489ff:{NFSU2_TR(0x6489ff);
if(r1(R+518)){{goto L648a1a;}}
}
B648a01:L648a01:{c.instructions+=2;NFSU2_TR(0x648a01);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648a02:{NFSU2_TR(0x648a02);
if(r1(R+518)){{goto L648a1a;}}
}
B648a04:L648a04:{c.instructions+=2;NFSU2_TR(0x648a04);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648a05:{NFSU2_TR(0x648a05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648ad6;}}
}
B648a0b:L648a0b:{c.instructions+=2;NFSU2_TR(0x648a0b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B648a0e:{NFSU2_TR(0x648a0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648a13ull));
TAIL_STATIC(0x75dd28u,75d);
}
B648a13:L648a13:{c.instructions+=3;NFSU2_TR(0x648a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B648a16:{NFSU2_TR(0x648a16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B648a18:{NFSU2_TR(0x648a18);
{goto L648a2b;}
}
B648a1a:L648a1a:{c.instructions+=3;NFSU2_TR(0x648a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648a1d:{NFSU2_TR(0x648a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B648a1f:{NFSU2_TR(0x648a1f);
{goto L648a2b;}
}
B648a21:L648a21:{c.instructions+=4;NFSU2_TR(0x648a21);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B648a23:{NFSU2_TR(0x648a23);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648a26:{NFSU2_TR(0x648a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B648a29:{NFSU2_TR(0x648a29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B648a2b:L648a2b:{c.instructions+=2;NFSU2_TR(0x648a2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648a2e:{NFSU2_TR(0x648a2e);
if(r1(R+518)){{goto L648a6f;}}
}
B648a30:L648a30:{c.instructions+=2;NFSU2_TR(0x648a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(0-u32(r4(U+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B648a32:{NFSU2_TR(0x648a32);
{goto L648a6f;}
}
B648a34:L648a34:{c.instructions+=3;NFSU2_TR(0x648a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648a37:{NFSU2_TR(0x648a37);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648a39:{NFSU2_TR(0x648a39);
if(r1(R+518)){{goto L648a65;}}
}
B648a3b:L648a3b:{c.instructions+=2;NFSU2_TR(0x648a3b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648a3c:{NFSU2_TR(0x648a3c);
if(r1(R+518)){{goto L648a65;}}
}
B648a3e:L648a3e:{c.instructions+=2;NFSU2_TR(0x648a3e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648a3f:{NFSU2_TR(0x648a3f);
if(r1(R+518)){{goto L648a65;}}
}
B648a41:L648a41:{c.instructions+=2;NFSU2_TR(0x648a41);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B648a42:{NFSU2_TR(0x648a42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648ad6;}}
}
B648a48:L648a48:{c.instructions+=6;NFSU2_TR(0x648a48);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B648a4b:{NFSU2_TR(0x648a4b);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B648a51:{NFSU2_TR(0x648a51);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B648a53:{NFSU2_TR(0x648a53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648a55:{NFSU2_TR(0x648a55);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B648a58:{NFSU2_TR(0x648a58);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L648a5f;}}
}
B648a5a:L648a5a:{c.instructions+=3;NFSU2_TR(0x648a5a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B648a5c:{NFSU2_TR(0x648a5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B648a5d:{NFSU2_TR(0x648a5d);
{goto L648a61;}
}
B648a5f:L648a5f:{c.instructions+=1;NFSU2_TR(0x648a5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B648a61:L648a61:{c.instructions+=2;NFSU2_TR(0x648a61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B648a63:{NFSU2_TR(0x648a63);
{goto L648a6f;}
}
B648a65:L648a65:{c.instructions+=4;NFSU2_TR(0x648a65);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B648a67:{NFSU2_TR(0x648a67);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648a6a:{NFSU2_TR(0x648a6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B648a6d:{NFSU2_TR(0x648a6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B648a6f:L648a6f:{c.instructions+=5;NFSU2_TR(0x648a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B648a72:{NFSU2_TR(0x648a72);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B648a75:{NFSU2_TR(0x648a75);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648a77:{NFSU2_TR(0x648a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648a7a:{NFSU2_TR(0x648a7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6488e2u);}goto L6488e2;}}
}
B648a80:L648a80:{c.instructions+=5;NFSU2_TR(0x648a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648a83:{NFSU2_TR(0x648a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648a86:{NFSU2_TR(0x648a86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B648a89:{NFSU2_TR(0x648a89);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ac34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xf20000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648a93:{NFSU2_TR(0x648a93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648c09;}}
}
B648a99:L648a99:{c.instructions+=15;NFSU2_TR(0x648a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B648a9b:{NFSU2_TR(0x648a9b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648a9e:{NFSU2_TR(0x648a9e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648aa4:{NFSU2_TR(0x648aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648aa7:{NFSU2_TR(0x648aa7);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648aaa:{NFSU2_TR(0x648aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648aad:{NFSU2_TR(0x648aad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B648aaf:{NFSU2_TR(0x648aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648ab2:{NFSU2_TR(0x648ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648ab5:{NFSU2_TR(0x648ab5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648abb:{NFSU2_TR(0x648abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648abe:{NFSU2_TR(0x648abe);
w4(R+28,u32(0xffull));
}
B648ac3:{NFSU2_TR(0x648ac3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648ac5:{NFSU2_TR(0x648ac5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B648ac8:{NFSU2_TR(0x648ac8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648aff;}}
}
B648aca:L648aca:{c.instructions+=2;NFSU2_TR(0x648aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648acd:{NFSU2_TR(0x648acd);
{goto L648b27;}
}
B648acf:L648acf:{c.instructions+=2;NFSU2_TR(0x648acf);
u8 U[4];
w4(U+0,u32(0x7aef84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648ad4:{NFSU2_TR(0x648ad4);
{goto L648ae2;}
}
B648ad6:L648ad6:{c.instructions+=2;NFSU2_TR(0x648ad6);
u8 U[4];
w4(U+0,u32(0x7aef5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648adb:{NFSU2_TR(0x648adb);
{goto L648ae2;}
}
B648add:L648add:{c.instructions+=1;NFSU2_TR(0x648add);
u8 U[4];
w4(U+0,u32(0x7aef00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648ae2:L648ae2:{c.instructions+=6;NFSU2_TR(0x648ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648ae5:{NFSU2_TR(0x648ae5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648ae6:{NFSU2_TR(0x648ae6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648ae9:{NFSU2_TR(0x648ae9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B648aec:{NFSU2_TR(0x648aec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648aed:{NFSU2_TR(0x648aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648af2ull));
TAIL_STATIC(0x64307cu,643);
}
B648af2:L648af2:{c.instructions+=1;NFSU2_TR(0x648af2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B648af5:L648af5:{c.instructions+=2;NFSU2_TR(0x648af5);
w4(R+28,u32(0x80004005ull));
}
B648afa:{NFSU2_TR(0x648afa);
{goto L648fee;}
}
B648aff:L648aff:{c.instructions+=5;NFSU2_TR(0x648aff);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b02:{NFSU2_TR(0x648b02);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B648b04:{NFSU2_TR(0x648b04);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648b06:{NFSU2_TR(0x648b06);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B648b09:{NFSU2_TR(0x648b09);
if(r1(R+514)){{goto L648b10;}}
}
B648b0b:L648b0b:{c.instructions+=2;NFSU2_TR(0x648b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648b0e:{NFSU2_TR(0x648b0e);
{goto L648b27;}
}
B648b10:L648b10:{c.instructions+=4;NFSU2_TR(0x648b10);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b13:{NFSU2_TR(0x648b13);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B648b19:{NFSU2_TR(0x648b19);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B648b1f:{NFSU2_TR(0x648b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648b24ull));
TAIL_STATIC(0x75dd28u,75d);
}
B648b24:L648b24:{c.instructions+=1;NFSU2_TR(0x648b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648b27:L648b27:{c.instructions+=5;NFSU2_TR(0x648b27);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b2a:{NFSU2_TR(0x648b2a);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B648b2c:{NFSU2_TR(0x648b2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648b2e:{NFSU2_TR(0x648b2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B648b31:{NFSU2_TR(0x648b31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648b38;}}
}
B648b33:L648b33:{c.instructions+=2;NFSU2_TR(0x648b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648b36:{NFSU2_TR(0x648b36);
{goto L648b60;}
}
B648b38:L648b38:{c.instructions+=5;NFSU2_TR(0x648b38);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b3b:{NFSU2_TR(0x648b3b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B648b3d:{NFSU2_TR(0x648b3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648b3f:{NFSU2_TR(0x648b3f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B648b42:{NFSU2_TR(0x648b42);
if(r1(R+514)){{goto L648b49;}}
}
B648b44:L648b44:{c.instructions+=2;NFSU2_TR(0x648b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648b47:{NFSU2_TR(0x648b47);
{goto L648b60;}
}
B648b49:L648b49:{c.instructions+=4;NFSU2_TR(0x648b49);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b4c:{NFSU2_TR(0x648b4c);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B648b52:{NFSU2_TR(0x648b52);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B648b58:{NFSU2_TR(0x648b58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648b5dull));
TAIL_STATIC(0x75dd28u,75d);
}
B648b5d:L648b5d:{c.instructions+=1;NFSU2_TR(0x648b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648b60:L648b60:{c.instructions+=5;NFSU2_TR(0x648b60);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b63:{NFSU2_TR(0x648b63);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B648b65:{NFSU2_TR(0x648b65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648b67:{NFSU2_TR(0x648b67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B648b6a:{NFSU2_TR(0x648b6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648b72;}}
}
B648b6c:L648b6c:{c.instructions+=3;NFSU2_TR(0x648b6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B648b6e:{NFSU2_TR(0x648b6e);
__builtin_memmove((R+12),(R+28),4);
}
B648b70:{NFSU2_TR(0x648b70);
{goto L648b98;}
}
B648b72:L648b72:{c.instructions+=5;NFSU2_TR(0x648b72);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b75:{NFSU2_TR(0x648b75);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B648b77:{NFSU2_TR(0x648b77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648b79:{NFSU2_TR(0x648b79);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B648b7c:{NFSU2_TR(0x648b7c);
if(r1(R+514)){{goto L648b82;}}
}
B648b7e:L648b7e:{c.instructions+=2;NFSU2_TR(0x648b7e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B648b80:{NFSU2_TR(0x648b80);
{goto L648b98;}
}
B648b82:L648b82:{c.instructions+=4;NFSU2_TR(0x648b82);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B648b85:{NFSU2_TR(0x648b85);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B648b8b:{NFSU2_TR(0x648b8b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B648b91:{NFSU2_TR(0x648b91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648b96ull));
TAIL_STATIC(0x75dd28u,75d);
}
B648b96:L648b96:{c.instructions+=1;NFSU2_TR(0x648b96);
__builtin_memmove((R+12),(R+0),4);
}
B648b98:L648b98:{c.instructions+=5;NFSU2_TR(0x648b98);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B648b9a:{NFSU2_TR(0x648b9a);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B648b9c:{NFSU2_TR(0x648b9c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648b9e:{NFSU2_TR(0x648b9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B648ba1:{NFSU2_TR(0x648ba1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L648ba9;}}
}
B648ba3:L648ba3:{c.instructions+=3;NFSU2_TR(0x648ba3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B648ba5:{NFSU2_TR(0x648ba5);
__builtin_memmove((R+0),(R+28),4);
}
B648ba7:{NFSU2_TR(0x648ba7);
{goto L648bcd;}
}
B648ba9:L648ba9:{c.instructions+=4;NFSU2_TR(0x648ba9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B648baf:{NFSU2_TR(0x648baf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B648bb1:{NFSU2_TR(0x648bb1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B648bb4:{NFSU2_TR(0x648bb4);
if(r1(R+514)){{goto L648bbc;}}
}
B648bb6:L648bb6:{c.instructions+=3;NFSU2_TR(0x648bb6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B648bb8:{NFSU2_TR(0x648bb8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B648bba:{NFSU2_TR(0x648bba);
{goto L648bcd;}
}
B648bbc:L648bbc:{c.instructions+=3;NFSU2_TR(0x648bbc);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B648bc2:{NFSU2_TR(0x648bc2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B648bc8:{NFSU2_TR(0x648bc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648bcdull));
TAIL_STATIC(0x75dd28u,75d);
}
B648bcd:L648bcd:{c.instructions+=19;NFSU2_TR(0x648bcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B648bd0:{NFSU2_TR(0x648bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B648bd3:{NFSU2_TR(0x648bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648bd6:{NFSU2_TR(0x648bd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B648bd9:{NFSU2_TR(0x648bd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B648bdc:{NFSU2_TR(0x648bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648be3:{NFSU2_TR(0x648be3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B648be6:{NFSU2_TR(0x648be6);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B648be8:{NFSU2_TR(0x648be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648beb:{NFSU2_TR(0x648beb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B648bed:{NFSU2_TR(0x648bed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B648bee:{NFSU2_TR(0x648bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648bf1:{NFSU2_TR(0x648bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648bf4:{NFSU2_TR(0x648bf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648bf7:{NFSU2_TR(0x648bf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648bf8:{NFSU2_TR(0x648bf8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648bfa:{NFSU2_TR(0x648bfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648bfd:{NFSU2_TR(0x648bfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648bfe:{NFSU2_TR(0x648bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648c03ull));
TAIL_STATIC(0x647827u,647);
}
B648c03:L648c03:{c.instructions+=3;NFSU2_TR(0x648c03);
__builtin_memmove((R+28),(R+0),4);
}
B648c05:{NFSU2_TR(0x648c05);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648c07:{NFSU2_TR(0x648c07);
{goto L648c1f;}
}
B648c09:L648c09:{c.instructions+=6;NFSU2_TR(0x648c09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648c0c:{NFSU2_TR(0x648c0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648c0f:{NFSU2_TR(0x648c0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648c10:{NFSU2_TR(0x648c10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648c13:{NFSU2_TR(0x648c13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648c16:{NFSU2_TR(0x648c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648c1bull));
TAIL_STATIC(0x647827u,647);
}
B648c1b:L648c1b:{c.instructions+=2;NFSU2_TR(0x648c1b);
__builtin_memmove((R+28),(R+0),4);
}
B648c1d:{NFSU2_TR(0x648c1d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B648c1f:L648c1f:{c.instructions+=1;NFSU2_TR(0x648c1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fee;}}
}
B648c25:L648c25:{c.instructions+=2;NFSU2_TR(0x648c25);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648c28:{NFSU2_TR(0x648c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648c2dull));
TAIL_STATIC(0x575630u,575);
}
B648c2d:L648c2d:{c.instructions+=3;NFSU2_TR(0x648c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B648c31:{NFSU2_TR(0x648c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648c32:{NFSU2_TR(0x648c32);
{goto L648d8e;}
}
B648c37:L648c37:{c.instructions+=3;NFSU2_TR(0x648c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648c3a:{NFSU2_TR(0x648c3a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B648c3d:{NFSU2_TR(0x648c3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648c56;}}
}
B648c3f:L648c3f:{c.instructions+=2;NFSU2_TR(0x648c3f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648c42:{NFSU2_TR(0x648c42);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L648c56;}}
}
B648c44:L648c44:{c.instructions+=6;NFSU2_TR(0x648c44);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B648c47:{NFSU2_TR(0x648c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648c4a:{NFSU2_TR(0x648c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648c4b:{NFSU2_TR(0x648c4b);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B648c4e:{NFSU2_TR(0x648c4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648c51:{NFSU2_TR(0x648c51);
{goto L648d79;}
}
B648c56:L648c56:{c.instructions+=3;NFSU2_TR(0x648c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B648c5a:{NFSU2_TR(0x648c5a);
__builtin_memmove((R+8),(R+12),4);
}
B648c5c:{NFSU2_TR(0x648c5c);
{goto L648d10;}
}
B648c61:L648c61:{c.instructions+=2;NFSU2_TR(0x648c61);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648c65:{NFSU2_TR(0x648c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6490b8u,649);}
}
B648c6b:L648c6b:{c.instructions+=3;NFSU2_TR(0x648c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B648c6e:{NFSU2_TR(0x648c6e);
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
B648c70:{NFSU2_TR(0x648c70);
if(r1(R+518)){TAIL_STATIC(0x6490b8u,649);}
}
B648c76:L648c76:{c.instructions+=2;NFSU2_TR(0x648c76);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B648c7a:{NFSU2_TR(0x648c7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6490b8u,649);}
}
B648c80:L648c80:{c.instructions+=3;NFSU2_TR(0x648c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648c83:{NFSU2_TR(0x648c83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B648c86:{NFSU2_TR(0x648c86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x649033u,649);}
}
B648c8c:L648c8c:{c.instructions+=2;NFSU2_TR(0x648c8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648c8f:{NFSU2_TR(0x648c8f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L648d07;}}
}
B648c91:L648c91:{c.instructions+=2;NFSU2_TR(0x648c91);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648c94:{NFSU2_TR(0x648c94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x649033u,649);}
}
B648c9a:L648c9a:{c.instructions+=2;NFSU2_TR(0x648c9a);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
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
B648c9e:{NFSU2_TR(0x648c9e);
if(r1(R+518)){TAIL_STATIC(0x6490b8u,649);}
}
B648ca4:L648ca4:{c.instructions+=7;NFSU2_TR(0x648ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648ca7:{NFSU2_TR(0x648ca7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B648caa:{NFSU2_TR(0x648caa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ac360ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648cb0:{NFSU2_TR(0x648cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B648cb2:{NFSU2_TR(0x648cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B648cb4:{NFSU2_TR(0x648cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648cb7:{NFSU2_TR(0x648cb7);
if(r1(R+518)){TAIL_STATIC(0x649006u,649);}
}
B648cbd:L648cbd:{c.instructions+=3;NFSU2_TR(0x648cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B648cc1:{NFSU2_TR(0x648cc1);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B648cc4:{NFSU2_TR(0x648cc4);
if(r1(R+518)){{goto L648cee;}}
}
B648cc6:L648cc6:{c.instructions+=4;NFSU2_TR(0x648cc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648cc9:{NFSU2_TR(0x648cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648ccc:{NFSU2_TR(0x648ccc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B648ccf:{NFSU2_TR(0x648ccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648cd4ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B648cd4:L648cd4:{c.instructions+=4;NFSU2_TR(0x648cd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B648cd6:{NFSU2_TR(0x648cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648cd7:{NFSU2_TR(0x648cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648cd8:{NFSU2_TR(0x648cd8);
if(r1(R+518)){{goto L648ceb;}}
}
B648cda:L648cda:{c.instructions+=6;NFSU2_TR(0x648cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B648cdd:{NFSU2_TR(0x648cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648ce0:{NFSU2_TR(0x648ce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B648ce2:{NFSU2_TR(0x648ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648ce5:{NFSU2_TR(0x648ce5);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0x0ull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B648ce9:{NFSU2_TR(0x648ce9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648cc6u);}goto L648cc6;}}
}
B648ceb:L648ceb:{c.instructions+=1;NFSU2_TR(0x648ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648cee:L648cee:{c.instructions+=6;NFSU2_TR(0x648cee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B648cf0:{NFSU2_TR(0x648cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648cf3:{NFSU2_TR(0x648cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B648cf6:{NFSU2_TR(0x648cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B648cf9:{NFSU2_TR(0x648cf9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B648cfc:{NFSU2_TR(0x648cfc);
if(r1(R+518)){TAIL_STATIC(0x649006u,649);}
}
B648d02:L648d02:{c.instructions+=2;NFSU2_TR(0x648d02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648d05:{NFSU2_TR(0x648d05);
{goto L648d0a;}
}
B648d07:L648d07:{c.instructions+=1;NFSU2_TR(0x648d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648d0a:L648d0a:{c.instructions+=2;NFSU2_TR(0x648d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B648d0d:{NFSU2_TR(0x648d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B648d10:L648d10:{c.instructions+=3;NFSU2_TR(0x648d10);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B648d12:{NFSU2_TR(0x648d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648d15:{NFSU2_TR(0x648d15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648c61u);}goto L648c61;}}
}
B648d1b:L648d1b:{c.instructions+=7;NFSU2_TR(0x648d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648d1e:{NFSU2_TR(0x648d1e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B648d21:{NFSU2_TR(0x648d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648d27:{NFSU2_TR(0x648d27);
w4(R+8,u32(0x5000000ull));
}
B648d2c:{NFSU2_TR(0x648d2c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B648d2e:{NFSU2_TR(0x648d2e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648d30:{NFSU2_TR(0x648d30);
if(r1(R+518)){TAIL_STATIC(0x649096u,649);}
}
B648d36:L648d36:{c.instructions+=2;NFSU2_TR(0x648d36);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648d3c:{NFSU2_TR(0x648d3c);
if(r1(R+518)){TAIL_STATIC(0x64907du,649);}
}
B648d42:L648d42:{c.instructions+=2;NFSU2_TR(0x648d42);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648d48:{NFSU2_TR(0x648d48);
if(r1(R+518)){TAIL_STATIC(0x649049u,649);}
}
B648d4e:L648d4e:{c.instructions+=2;NFSU2_TR(0x648d4e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648d54:{NFSU2_TR(0x648d54);
if(r1(R+518)){TAIL_STATIC(0x64907du,649);}
}
B648d5a:L648d5a:{c.instructions+=2;NFSU2_TR(0x648d5a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xe000000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe000000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B648d60:{NFSU2_TR(0x648d60);
if(r1(R+518)){{goto L648ffd;}}
}
B648d66:L648d66:{c.instructions+=2;NFSU2_TR(0x648d66);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xf000000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xf000000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xf000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B648d6c:{NFSU2_TR(0x648d6c);
if(r1(R+518)){{goto L648ffd;}}
}
B648d72:L648d72:{c.instructions+=3;NFSU2_TR(0x648d72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648d75:{NFSU2_TR(0x648d75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648d76:{NFSU2_TR(0x648d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648d79:L648d79:{c.instructions+=4;NFSU2_TR(0x648d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648d7c:{NFSU2_TR(0x648d7c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648d7e:{NFSU2_TR(0x648d7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648d7f:{NFSU2_TR(0x648d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648d84ull));
TAIL_STATIC(0x647827u,647);
}
B648d84:L648d84:{c.instructions+=3;NFSU2_TR(0x648d84);
__builtin_memmove((R+28),(R+0),4);
}
B648d86:{NFSU2_TR(0x648d86);
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
B648d88:{NFSU2_TR(0x648d88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648ffd;}}
}
B648d8e:L648d8e:{c.instructions+=3;NFSU2_TR(0x648d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648d91:{NFSU2_TR(0x648d91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B648d93:{NFSU2_TR(0x648d93);
if(r1(R+518)){TAIL_STATIC(0x6491dbu,649);}
}
B648d99:L648d99:{c.instructions+=1;NFSU2_TR(0x648d99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6491b8u,649);}
}
B648d9f:L648d9f:{c.instructions+=4;NFSU2_TR(0x648d9f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648da1:{NFSU2_TR(0x648da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648da2:{NFSU2_TR(0x648da2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648da4:{NFSU2_TR(0x648da4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6490c2u,649);}
}
B648daa:L648daa:{c.instructions+=2;NFSU2_TR(0x648daa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648dad:{NFSU2_TR(0x648dad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6491b8u,649);}
}
B648db3:L648db3:{c.instructions+=2;NFSU2_TR(0x648db3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648db6:{NFSU2_TR(0x648db6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x6491b8u,649);}
}
B648dbc:L648dbc:{c.instructions+=10;NFSU2_TR(0x648dbc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648dbe:{NFSU2_TR(0x648dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648dbf:{NFSU2_TR(0x648dbf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648dc2:{NFSU2_TR(0x648dc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648dc3:{NFSU2_TR(0x648dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648dc6:{NFSU2_TR(0x648dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648dc7:{NFSU2_TR(0x648dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648dca:{NFSU2_TR(0x648dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B648dcd:{NFSU2_TR(0x648dcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648dce:{NFSU2_TR(0x648dce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648dd3ull));
TAIL_STATIC(0x647827u,647);
}
B648dd3:L648dd3:{c.instructions+=3;NFSU2_TR(0x648dd3);
__builtin_memmove((R+28),(R+0),4);
}
B648dd5:{NFSU2_TR(0x648dd5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648dd7:{NFSU2_TR(0x648dd7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648ddd:L648ddd:{c.instructions+=6;NFSU2_TR(0x648ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648de0:{NFSU2_TR(0x648de0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648de2:{NFSU2_TR(0x648de2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648de4:{NFSU2_TR(0x648de4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648de7:{NFSU2_TR(0x648de7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648de8:{NFSU2_TR(0x648de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648dedull));
TAIL_STATIC(0x647827u,647);
}
B648ded:L648ded:{c.instructions+=3;NFSU2_TR(0x648ded);
__builtin_memmove((R+28),(R+0),4);
}
B648def:{NFSU2_TR(0x648def);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648df1:{NFSU2_TR(0x648df1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648df7:L648df7:{c.instructions+=6;NFSU2_TR(0x648df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648dfa:{NFSU2_TR(0x648dfa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648dfc:{NFSU2_TR(0x648dfc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648dfe:{NFSU2_TR(0x648dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648e01:{NFSU2_TR(0x648e01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e02:{NFSU2_TR(0x648e02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648e07ull));
TAIL_STATIC(0x647827u,647);
}
B648e07:L648e07:{c.instructions+=3;NFSU2_TR(0x648e07);
__builtin_memmove((R+28),(R+0),4);
}
B648e09:{NFSU2_TR(0x648e09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648e0b:{NFSU2_TR(0x648e0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648e11:L648e11:{c.instructions+=6;NFSU2_TR(0x648e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648e14:{NFSU2_TR(0x648e14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e16:{NFSU2_TR(0x648e16);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e18:{NFSU2_TR(0x648e18);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648e1b:{NFSU2_TR(0x648e1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e1c:{NFSU2_TR(0x648e1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648e21ull));
TAIL_STATIC(0x647827u,647);
}
B648e21:L648e21:{c.instructions+=3;NFSU2_TR(0x648e21);
__builtin_memmove((R+28),(R+0),4);
}
B648e23:{NFSU2_TR(0x648e23);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648e25:{NFSU2_TR(0x648e25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648e2b:L648e2b:{c.instructions+=6;NFSU2_TR(0x648e2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648e2e:{NFSU2_TR(0x648e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648e31:{NFSU2_TR(0x648e31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e33:{NFSU2_TR(0x648e33);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e35:{NFSU2_TR(0x648e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e36:{NFSU2_TR(0x648e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648e3bull));
TAIL_STATIC(0x647827u,647);
}
B648e3b:L648e3b:{c.instructions+=3;NFSU2_TR(0x648e3b);
__builtin_memmove((R+28),(R+0),4);
}
B648e3d:{NFSU2_TR(0x648e3d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648e3f:{NFSU2_TR(0x648e3f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648e45:L648e45:{c.instructions+=7;NFSU2_TR(0x648e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B648e48:{NFSU2_TR(0x648e48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e4a:{NFSU2_TR(0x648e4a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e4c:{NFSU2_TR(0x648e4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648e4f:{NFSU2_TR(0x648e4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e50:{NFSU2_TR(0x648e50);
__builtin_memmove((R+4),(R+12),4);
}
B648e52:{NFSU2_TR(0x648e52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648e57ull));
TAIL_STATIC(0x647827u,647);
}
B648e57:L648e57:{c.instructions+=3;NFSU2_TR(0x648e57);
__builtin_memmove((R+28),(R+0),4);
}
B648e59:{NFSU2_TR(0x648e59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648e5b:{NFSU2_TR(0x648e5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648e61:L648e61:{c.instructions+=6;NFSU2_TR(0x648e61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e63:{NFSU2_TR(0x648e63);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e65:{NFSU2_TR(0x648e65);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648e68:{NFSU2_TR(0x648e68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e69:{NFSU2_TR(0x648e69);
__builtin_memmove((R+4),(R+12),4);
}
B648e6b:{NFSU2_TR(0x648e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648e70ull));
TAIL_STATIC(0x647827u,647);
}
B648e70:L648e70:{c.instructions+=3;NFSU2_TR(0x648e70);
__builtin_memmove((R+28),(R+0),4);
}
B648e72:{NFSU2_TR(0x648e72);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648e74:{NFSU2_TR(0x648e74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648e7a:L648e7a:{c.instructions+=4;NFSU2_TR(0x648e7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e7c:{NFSU2_TR(0x648e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648e7f:{NFSU2_TR(0x648e7f);
__builtin_memmove((R+4),(R+12),4);
}
B648e81:{NFSU2_TR(0x648e81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648e86ull));
TAIL_STATIC(0x647930u,647);
}
B648e86:L648e86:{c.instructions+=3;NFSU2_TR(0x648e86);
__builtin_memmove((R+28),(R+0),4);
}
B648e88:{NFSU2_TR(0x648e88);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648e8a:{NFSU2_TR(0x648e8a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648e90:L648e90:{c.instructions+=5;NFSU2_TR(0x648e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B648e93:{NFSU2_TR(0x648e93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e95:{NFSU2_TR(0x648e95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648e96:{NFSU2_TR(0x648e96);
__builtin_memmove((R+4),(R+12),4);
}
B648e98:{NFSU2_TR(0x648e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648e9dull));
TAIL_STATIC(0x647930u,647);
}
B648e9d:L648e9d:{c.instructions+=3;NFSU2_TR(0x648e9d);
__builtin_memmove((R+28),(R+0),4);
}
B648e9f:{NFSU2_TR(0x648e9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648ea1:{NFSU2_TR(0x648ea1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648ea7:L648ea7:{c.instructions+=3;NFSU2_TR(0x648ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648eaa:{NFSU2_TR(0x648eaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B648eac:{NFSU2_TR(0x648eac);
if(r1(R+518)){{goto L648ecb;}}
}
B648eae:L648eae:{c.instructions+=9;NFSU2_TR(0x648eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648eb1:{NFSU2_TR(0x648eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648eb4:{NFSU2_TR(0x648eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648eb7:{NFSU2_TR(0x648eb7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x354ull))));
}
B648ebd:{NFSU2_TR(0x648ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B648ec1:{NFSU2_TR(0x648ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648ec4:{NFSU2_TR(0x648ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B648ec6:{NFSU2_TR(0x648ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648ec9:{NFSU2_TR(0x648ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B648ecb:L648ecb:{c.instructions+=4;NFSU2_TR(0x648ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648ece:{NFSU2_TR(0x648ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B648ed0:{NFSU2_TR(0x648ed0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648ed4:{NFSU2_TR(0x648ed4);
if(r1(R+518)){{goto L648fe0;}}
}
B648eda:L648eda:{c.instructions+=11;NFSU2_TR(0x648eda);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648edc:{NFSU2_TR(0x648edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648edd:{NFSU2_TR(0x648edd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648ee0:{NFSU2_TR(0x648ee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648ee1:{NFSU2_TR(0x648ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648ee4:{NFSU2_TR(0x648ee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648ee5:{NFSU2_TR(0x648ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648ee8:{NFSU2_TR(0x648ee8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B648eeb:{NFSU2_TR(0x648eeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648eec:{NFSU2_TR(0x648eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B648ef3:{NFSU2_TR(0x648ef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648ef8ull));
TAIL_STATIC(0x647827u,647);
}
B648ef8:L648ef8:{c.instructions+=3;NFSU2_TR(0x648ef8);
__builtin_memmove((R+28),(R+0),4);
}
B648efa:{NFSU2_TR(0x648efa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648efc:{NFSU2_TR(0x648efc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648f02:L648f02:{c.instructions+=6;NFSU2_TR(0x648f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648f05:{NFSU2_TR(0x648f05);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f07:{NFSU2_TR(0x648f07);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f09:{NFSU2_TR(0x648f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648f0c:{NFSU2_TR(0x648f0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f0d:{NFSU2_TR(0x648f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648f12ull));
TAIL_STATIC(0x647827u,647);
}
B648f12:L648f12:{c.instructions+=3;NFSU2_TR(0x648f12);
__builtin_memmove((R+28),(R+0),4);
}
B648f14:{NFSU2_TR(0x648f14);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648f16:{NFSU2_TR(0x648f16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648f1c:L648f1c:{c.instructions+=6;NFSU2_TR(0x648f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648f1f:{NFSU2_TR(0x648f1f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f21:{NFSU2_TR(0x648f21);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f23:{NFSU2_TR(0x648f23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648f26:{NFSU2_TR(0x648f26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f27:{NFSU2_TR(0x648f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648f2cull));
TAIL_STATIC(0x647827u,647);
}
B648f2c:L648f2c:{c.instructions+=3;NFSU2_TR(0x648f2c);
__builtin_memmove((R+28),(R+0),4);
}
B648f2e:{NFSU2_TR(0x648f2e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648f30:{NFSU2_TR(0x648f30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648f36:L648f36:{c.instructions+=6;NFSU2_TR(0x648f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648f39:{NFSU2_TR(0x648f39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f3b:{NFSU2_TR(0x648f3b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f3d:{NFSU2_TR(0x648f3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648f40:{NFSU2_TR(0x648f40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f41:{NFSU2_TR(0x648f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648f46ull));
TAIL_STATIC(0x647827u,647);
}
B648f46:L648f46:{c.instructions+=3;NFSU2_TR(0x648f46);
__builtin_memmove((R+28),(R+0),4);
}
B648f48:{NFSU2_TR(0x648f48);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648f4a:{NFSU2_TR(0x648f4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648f50:L648f50:{c.instructions+=6;NFSU2_TR(0x648f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648f53:{NFSU2_TR(0x648f53);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f55:{NFSU2_TR(0x648f55);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f57:{NFSU2_TR(0x648f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648f5a:{NFSU2_TR(0x648f5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f5b:{NFSU2_TR(0x648f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648f60ull));
TAIL_STATIC(0x647827u,647);
}
B648f60:L648f60:{c.instructions+=3;NFSU2_TR(0x648f60);
__builtin_memmove((R+28),(R+0),4);
}
B648f62:{NFSU2_TR(0x648f62);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648f64:{NFSU2_TR(0x648f64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648f66:L648f66:{c.instructions+=4;NFSU2_TR(0x648f66);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B648f68:{NFSU2_TR(0x648f68);
u8 U[8];
__builtin_memmove((U+0),gp(0x7ac348),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B648f6e:{NFSU2_TR(0x648f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B648f71:{NFSU2_TR(0x648f71);
if(r1(R+518)){{goto L648f8b;}}
}
B648f73:L648f73:{c.instructions+=1;NFSU2_TR(0x648f73);
w4(R+0,u32(0x7ac348ull));
}
B648f78:L648f78:{c.instructions+=2;NFSU2_TR(0x648f78);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B648f7f:{NFSU2_TR(0x648f7f);
if(r1(R+518)){{goto L648f8b;}}
}
B648f81:L648f81:{c.instructions+=4;NFSU2_TR(0x648f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B648f84:{NFSU2_TR(0x648f84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B648f87:{NFSU2_TR(0x648f87);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B648f89:{NFSU2_TR(0x648f89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x648f78u);}goto L648f78;}}
}
B648f8b:L648f8b:{c.instructions+=6;NFSU2_TR(0x648f8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f8c:{NFSU2_TR(0x648f8c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f8e:{NFSU2_TR(0x648f8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648f91:{NFSU2_TR(0x648f91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648f92:{NFSU2_TR(0x648f92);
__builtin_memmove((R+4),(R+12),4);
}
B648f94:{NFSU2_TR(0x648f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648f99ull));
TAIL_STATIC(0x647827u,647);
}
B648f99:L648f99:{c.instructions+=3;NFSU2_TR(0x648f99);
__builtin_memmove((R+28),(R+0),4);
}
B648f9b:{NFSU2_TR(0x648f9b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B648f9d:{NFSU2_TR(0x648f9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648f9f:L648f9f:{c.instructions+=6;NFSU2_TR(0x648f9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fa1:{NFSU2_TR(0x648fa1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fa3:{NFSU2_TR(0x648fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648fa6:{NFSU2_TR(0x648fa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fa7:{NFSU2_TR(0x648fa7);
__builtin_memmove((R+4),(R+12),4);
}
B648fa9:{NFSU2_TR(0x648fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648faeull));
TAIL_STATIC(0x647827u,647);
}
B648fae:L648fae:{c.instructions+=3;NFSU2_TR(0x648fae);
__builtin_memmove((R+28),(R+0),4);
}
B648fb0:{NFSU2_TR(0x648fb0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648fb2:{NFSU2_TR(0x648fb2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648fb4:L648fb4:{c.instructions+=4;NFSU2_TR(0x648fb4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fb6:{NFSU2_TR(0x648fb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648fb9:{NFSU2_TR(0x648fb9);
__builtin_memmove((R+4),(R+12),4);
}
B648fbb:{NFSU2_TR(0x648fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648fc0ull));
TAIL_STATIC(0x647930u,647);
}
B648fc0:L648fc0:{c.instructions+=3;NFSU2_TR(0x648fc0);
__builtin_memmove((R+28),(R+0),4);
}
B648fc2:{NFSU2_TR(0x648fc2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648fc4:{NFSU2_TR(0x648fc4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648fc6:L648fc6:{c.instructions+=6;NFSU2_TR(0x648fc6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fc8:{NFSU2_TR(0x648fc8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fca:{NFSU2_TR(0x648fca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B648fcd:{NFSU2_TR(0x648fcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fce:{NFSU2_TR(0x648fce);
__builtin_memmove((R+4),(R+12),4);
}
B648fd0:{NFSU2_TR(0x648fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648fd5ull));
TAIL_STATIC(0x647827u,647);
}
B648fd5:L648fd5:{c.instructions+=3;NFSU2_TR(0x648fd5);
__builtin_memmove((R+28),(R+0),4);
}
B648fd7:{NFSU2_TR(0x648fd7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B648fd9:{NFSU2_TR(0x648fd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L648fe0;}}
}
B648fdb:L648fdb:{c.instructions+=2;NFSU2_TR(0x648fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B648fde:{NFSU2_TR(0x648fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B648fe0:L648fe0:{c.instructions+=3;NFSU2_TR(0x648fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B648fe3:{NFSU2_TR(0x648fe3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B648fe5:{NFSU2_TR(0x648fe5);
if(r1(R+518)){{goto L648fee;}}
}
B648fe7:L648fe7:{c.instructions+=2;NFSU2_TR(0x648fe7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B648fe9:{NFSU2_TR(0x648fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648feeull));
TAIL_STATIC(0x64778au,647);
}
B648fee:L648fee:{c.instructions+=2;NFSU2_TR(0x648fee);
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
B648ff2:{NFSU2_TR(0x648ff2);
if(r1(R+518)){{goto L648ffd;}}
}
B648ff4:L648ff4:{c.instructions+=2;NFSU2_TR(0x648ff4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B648ff7:{NFSU2_TR(0x648ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x648ffcull));
TAIL_STATIC(0x575630u,575);
}
B648ffc:L648ffc:{c.instructions+=1;NFSU2_TR(0x648ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B648ffd:L648ffd:{c.instructions+=2;NFSU2_TR(0x648ffd);
__builtin_memmove((R+0),(R+28),4);
}
B648fff:{NFSU2_TR(0x648fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
TAIL_STATIC(0x649000u,649);
}
XIT:NFSU2_TR_EXIT(0x648,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
