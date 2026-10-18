#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_609(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_748(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x585,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x585,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_585(u8* __restrict R,Cpu& c);
u32 page_585(Cpu& c){return body_585(c.regs.data(),c);}
__attribute__((noinline)) u32 body_585(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x585004:goto L585004;
case 0x585007:c.instructions+=4;goto B585007;
case 0x58500b:c.instructions+=3;goto B58500b;
case 0x58500c:c.instructions+=2;goto B58500c;
case 0x58500e:c.instructions+=1;goto B58500e;
case 0x585013:goto L585013;
case 0x585015:c.instructions+=2;goto B585015;
case 0x58501a:c.instructions+=1;goto B58501a;
case 0x58501f:goto L58501f;
case 0x585022:c.instructions+=6;goto B585022;
case 0x585023:c.instructions+=5;goto B585023;
case 0x585024:c.instructions+=4;goto B585024;
case 0x58502e:c.instructions+=3;goto B58502e;
case 0x58502f:c.instructions+=2;goto B58502f;
case 0x585032:c.instructions+=1;goto B585032;
case 0x585040:goto L585040;
case 0x585041:c.instructions+=6;goto B585041;
case 0x585045:c.instructions+=5;goto B585045;
case 0x585046:c.instructions+=4;goto B585046;
case 0x58504a:c.instructions+=3;goto B58504a;
case 0x58504d:c.instructions+=2;goto B58504d;
case 0x58504f:c.instructions+=1;goto B58504f;
case 0x585051:goto L585051;
case 0x585053:c.instructions+=2;goto B585053;
case 0x585055:c.instructions+=1;goto B585055;
case 0x585058:goto L585058;
case 0x58505b:c.instructions+=1;goto B58505b;
case 0x58505d:goto L58505d;
case 0x58505e:c.instructions+=3;goto B58505e;
case 0x585061:c.instructions+=2;goto B585061;
case 0x585064:c.instructions+=1;goto B585064;
case 0x585066:goto L585066;
case 0x585068:goto L585068;
case 0x58506b:c.instructions+=7;goto B58506b;
case 0x58506d:c.instructions+=6;goto B58506d;
case 0x585070:c.instructions+=5;goto B585070;
case 0x585073:c.instructions+=4;goto B585073;
case 0x585074:c.instructions+=3;goto B585074;
case 0x585076:c.instructions+=2;goto B585076;
case 0x585077:c.instructions+=1;goto B585077;
case 0x58507c:goto L58507c;
case 0x58507f:goto L58507f;
case 0x585083:c.instructions+=4;goto B585083;
case 0x585085:c.instructions+=3;goto B585085;
case 0x585088:c.instructions+=2;goto B585088;
case 0x58508a:c.instructions+=1;goto B58508a;
case 0x58508c:goto L58508c;
case 0x58508f:c.instructions+=2;goto B58508f;
case 0x585091:c.instructions+=1;goto B585091;
case 0x585093:goto L585093;
case 0x585096:c.instructions+=3;goto B585096;
case 0x585097:c.instructions+=2;goto B585097;
case 0x585098:c.instructions+=1;goto B585098;
case 0x58509a:goto L58509a;
case 0x58509d:goto L58509d;
case 0x5850a0:c.instructions+=2;goto B5850a0;
case 0x5850a2:c.instructions+=1;goto B5850a2;
case 0x5850a4:goto L5850a4;
case 0x5850a6:c.instructions+=1;goto B5850a6;
case 0x5850ab:goto L5850ab;
case 0x5850ac:c.instructions+=1;goto B5850ac;
case 0x5850b1:goto L5850b1;
case 0x5850b4:goto L5850b4;
case 0x5850bb:goto L5850bb;
case 0x5850bc:c.instructions+=2;goto B5850bc;
case 0x5850bd:c.instructions+=1;goto B5850bd;
case 0x5850c0:goto L5850c0;
case 0x5850c1:c.instructions+=6;goto B5850c1;
case 0x5850c5:c.instructions+=5;goto B5850c5;
case 0x5850c8:c.instructions+=4;goto B5850c8;
case 0x5850ca:c.instructions+=3;goto B5850ca;
case 0x5850cb:c.instructions+=2;goto B5850cb;
case 0x5850cc:c.instructions+=1;goto B5850cc;
case 0x5850d2:goto L5850d2;
case 0x5850d3:c.instructions+=5;goto B5850d3;
case 0x5850d7:c.instructions+=4;goto B5850d7;
case 0x5850d8:c.instructions+=3;goto B5850d8;
case 0x5850da:c.instructions+=2;goto B5850da;
case 0x5850dd:c.instructions+=1;goto B5850dd;
case 0x5850e2:goto L5850e2;
case 0x5850e4:c.instructions+=4;goto B5850e4;
case 0x5850e6:c.instructions+=3;goto B5850e6;
case 0x5850e7:c.instructions+=2;goto B5850e7;
case 0x5850e8:c.instructions+=1;goto B5850e8;
case 0x5850ed:goto L5850ed;
case 0x5850f0:c.instructions+=2;goto B5850f0;
case 0x5850f2:c.instructions+=1;goto B5850f2;
case 0x5850f4:goto L5850f4;
case 0x5850f7:c.instructions+=3;goto B5850f7;
case 0x5850f8:c.instructions+=2;goto B5850f8;
case 0x5850fe:c.instructions+=1;goto B5850fe;
case 0x585100:goto L585100;
case 0x585102:goto L585102;
case 0x585104:c.instructions+=3;goto B585104;
case 0x585107:c.instructions+=2;goto B585107;
case 0x58510a:c.instructions+=1;goto B58510a;
case 0x58510e:goto L58510e;
case 0x585110:c.instructions+=3;goto B585110;
case 0x585118:c.instructions+=2;goto B585118;
case 0x58511d:c.instructions+=1;goto B58511d;
case 0x585122:goto L585122;
case 0x585126:c.instructions+=5;goto B585126;
case 0x585128:c.instructions+=4;goto B585128;
case 0x58512b:c.instructions+=3;goto B58512b;
case 0x58512e:c.instructions+=2;goto B58512e;
case 0x585131:c.instructions+=1;goto B585131;
case 0x585133:goto L585133;
case 0x585134:c.instructions+=2;goto B585134;
case 0x585137:c.instructions+=1;goto B585137;
case 0x585139:goto L585139;
case 0x58513c:c.instructions+=1;goto B58513c;
case 0x58513e:goto L58513e;
case 0x58513f:c.instructions+=2;goto B58513f;
case 0x585140:c.instructions+=1;goto B585140;
case 0x585145:goto L585145;
case 0x585148:c.instructions+=3;goto B585148;
case 0x585149:c.instructions+=2;goto B585149;
case 0x58514c:c.instructions+=1;goto B58514c;
case 0x58514f:goto L58514f;
case 0x585153:c.instructions+=1;goto B585153;
case 0x585156:goto L585156;
case 0x58515a:c.instructions+=1;goto B58515a;
case 0x58515c:goto L58515c;
case 0x58515d:c.instructions+=1;goto B58515d;
case 0x58515e:goto L58515e;
case 0x585162:c.instructions+=5;goto B585162;
case 0x585164:c.instructions+=4;goto B585164;
case 0x585168:c.instructions+=3;goto B585168;
case 0x58516b:c.instructions+=2;goto B58516b;
case 0x58516d:c.instructions+=1;goto B58516d;
case 0x58516f:goto L58516f;
case 0x585172:c.instructions+=2;goto B585172;
case 0x585174:c.instructions+=1;goto B585174;
case 0x585176:goto L585176;
case 0x585179:c.instructions+=4;goto B585179;
case 0x58517d:c.instructions+=3;goto B58517d;
case 0x58517e:c.instructions+=2;goto B58517e;
case 0x58517f:c.instructions+=1;goto B58517f;
case 0x585181:goto L585181;
case 0x585184:goto L585184;
case 0x585187:c.instructions+=2;goto B585187;
case 0x585189:c.instructions+=1;goto B585189;
case 0x58518b:goto L58518b;
case 0x58518d:c.instructions+=1;goto B58518d;
case 0x585192:goto L585192;
case 0x585193:c.instructions+=1;goto B585193;
case 0x585198:goto L585198;
case 0x58519b:goto L58519b;
case 0x5851a2:goto L5851a2;
case 0x5851a3:c.instructions+=3;goto B5851a3;
case 0x5851a4:c.instructions+=2;goto B5851a4;
case 0x5851a5:c.instructions+=1;goto B5851a5;
case 0x5851b0:goto L5851b0;
case 0x5851b6:c.instructions+=38;goto B5851b6;
case 0x5851bc:c.instructions+=37;goto B5851bc;
case 0x5851be:c.instructions+=36;goto B5851be;
case 0x5851c4:c.instructions+=35;goto B5851c4;
case 0x5851c5:c.instructions+=34;goto B5851c5;
case 0x5851cb:c.instructions+=33;goto B5851cb;
case 0x5851ce:c.instructions+=32;goto B5851ce;
case 0x5851d0:c.instructions+=31;goto B5851d0;
case 0x5851d3:c.instructions+=30;goto B5851d3;
case 0x5851d5:c.instructions+=29;goto B5851d5;
case 0x5851d8:c.instructions+=28;goto B5851d8;
case 0x5851da:c.instructions+=27;goto B5851da;
case 0x5851dd:c.instructions+=26;goto B5851dd;
case 0x5851df:c.instructions+=25;goto B5851df;
case 0x5851e2:c.instructions+=24;goto B5851e2;
case 0x5851e4:c.instructions+=23;goto B5851e4;
case 0x5851e7:c.instructions+=22;goto B5851e7;
case 0x5851e9:c.instructions+=21;goto B5851e9;
case 0x5851ec:c.instructions+=20;goto B5851ec;
case 0x5851ee:c.instructions+=19;goto B5851ee;
case 0x5851f1:c.instructions+=18;goto B5851f1;
case 0x5851f3:c.instructions+=17;goto B5851f3;
case 0x5851f9:c.instructions+=16;goto B5851f9;
case 0x5851fb:c.instructions+=15;goto B5851fb;
case 0x585201:c.instructions+=14;goto B585201;
case 0x585203:c.instructions+=13;goto B585203;
case 0x585209:c.instructions+=12;goto B585209;
case 0x58520f:c.instructions+=11;goto B58520f;
case 0x585212:c.instructions+=10;goto B585212;
case 0x585215:c.instructions+=9;goto B585215;
case 0x585218:c.instructions+=8;goto B585218;
case 0x58521b:c.instructions+=7;goto B58521b;
case 0x58521e:c.instructions+=6;goto B58521e;
case 0x585221:c.instructions+=5;goto B585221;
case 0x585224:c.instructions+=4;goto B585224;
case 0x585227:c.instructions+=3;goto B585227;
case 0x585229:c.instructions+=2;goto B585229;
case 0x58522a:c.instructions+=1;goto B58522a;
case 0x585230:goto L585230;
case 0x585231:c.instructions+=1;goto B585231;
case 0x585236:goto L585236;
case 0x585238:c.instructions+=1;goto B585238;
case 0x58523a:goto L58523a;
case 0x585240:c.instructions+=2;goto B585240;
case 0x585241:c.instructions+=1;goto B585241;
case 0x585242:goto L585242;
case 0x585248:c.instructions+=15;goto B585248;
case 0x58524e:c.instructions+=14;goto B58524e;
case 0x585254:c.instructions+=13;goto B585254;
case 0x58525a:c.instructions+=12;goto B58525a;
case 0x58525d:c.instructions+=11;goto B58525d;
case 0x585260:c.instructions+=10;goto B585260;
case 0x585263:c.instructions+=9;goto B585263;
case 0x585266:c.instructions+=8;goto B585266;
case 0x585269:c.instructions+=7;goto B585269;
case 0x58526c:c.instructions+=6;goto B58526c;
case 0x58526f:c.instructions+=5;goto B58526f;
case 0x585272:c.instructions+=4;goto B585272;
case 0x585274:c.instructions+=3;goto B585274;
case 0x585278:c.instructions+=2;goto B585278;
case 0x58527c:c.instructions+=1;goto B58527c;
case 0x58527e:goto L58527e;
case 0x585284:goto L585284;
case 0x585286:c.instructions+=3;goto B585286;
case 0x58528a:c.instructions+=2;goto B58528a;
case 0x58528e:c.instructions+=1;goto B58528e;
case 0x585290:goto L585290;
case 0x585296:goto L585296;
case 0x585298:c.instructions+=3;goto B585298;
case 0x58529e:c.instructions+=2;goto B58529e;
case 0x58529f:c.instructions+=1;goto B58529f;
case 0x5852a0:goto L5852a0;
case 0x5852a1:c.instructions+=22;goto B5852a1;
case 0x5852a7:c.instructions+=21;goto B5852a7;
case 0x5852ad:c.instructions+=20;goto B5852ad;
case 0x5852af:c.instructions+=19;goto B5852af;
case 0x5852b2:c.instructions+=18;goto B5852b2;
case 0x5852b3:c.instructions+=17;goto B5852b3;
case 0x5852b6:c.instructions+=16;goto B5852b6;
case 0x5852b9:c.instructions+=15;goto B5852b9;
case 0x5852bb:c.instructions+=14;goto B5852bb;
case 0x5852be:c.instructions+=13;goto B5852be;
case 0x5852c0:c.instructions+=12;goto B5852c0;
case 0x5852c6:c.instructions+=11;goto B5852c6;
case 0x5852c8:c.instructions+=10;goto B5852c8;
case 0x5852ce:c.instructions+=9;goto B5852ce;
case 0x5852d0:c.instructions+=8;goto B5852d0;
case 0x5852d3:c.instructions+=7;goto B5852d3;
case 0x5852d6:c.instructions+=6;goto B5852d6;
case 0x5852d9:c.instructions+=5;goto B5852d9;
case 0x5852dc:c.instructions+=4;goto B5852dc;
case 0x5852de:c.instructions+=3;goto B5852de;
case 0x5852e0:c.instructions+=2;goto B5852e0;
case 0x5852e1:c.instructions+=1;goto B5852e1;
case 0x5852e3:goto L5852e3;
case 0x5852e9:c.instructions+=2;goto B5852e9;
case 0x5852ea:c.instructions+=1;goto B5852ea;
case 0x5852eb:goto L5852eb;
case 0x5852ee:c.instructions+=4;goto B5852ee;
case 0x5852f0:c.instructions+=3;goto B5852f0;
case 0x5852f4:c.instructions+=2;goto B5852f4;
case 0x5852f8:c.instructions+=1;goto B5852f8;
case 0x5852fa:goto L5852fa;
case 0x585300:goto L585300;
case 0x585302:c.instructions+=3;goto B585302;
case 0x585306:c.instructions+=2;goto B585306;
case 0x58530a:c.instructions+=1;goto B58530a;
case 0x58530c:goto L58530c;
case 0x585312:goto L585312;
case 0x585314:c.instructions+=3;goto B585314;
case 0x58531a:c.instructions+=2;goto B58531a;
case 0x58531b:c.instructions+=1;goto B58531b;
case 0x585320:goto L585320;
case 0x585321:c.instructions+=22;goto B585321;
case 0x585327:c.instructions+=21;goto B585327;
case 0x58532d:c.instructions+=20;goto B58532d;
case 0x58532f:c.instructions+=19;goto B58532f;
case 0x585332:c.instructions+=18;goto B585332;
case 0x585333:c.instructions+=17;goto B585333;
case 0x585336:c.instructions+=16;goto B585336;
case 0x585339:c.instructions+=15;goto B585339;
case 0x58533b:c.instructions+=14;goto B58533b;
case 0x58533e:c.instructions+=13;goto B58533e;
case 0x585340:c.instructions+=12;goto B585340;
case 0x585346:c.instructions+=11;goto B585346;
case 0x585348:c.instructions+=10;goto B585348;
case 0x58534e:c.instructions+=9;goto B58534e;
case 0x585350:c.instructions+=8;goto B585350;
case 0x585353:c.instructions+=7;goto B585353;
case 0x585356:c.instructions+=6;goto B585356;
case 0x585359:c.instructions+=5;goto B585359;
case 0x58535c:c.instructions+=4;goto B58535c;
case 0x58535e:c.instructions+=3;goto B58535e;
case 0x585360:c.instructions+=2;goto B585360;
case 0x585361:c.instructions+=1;goto B585361;
case 0x585363:goto L585363;
case 0x585369:c.instructions+=2;goto B585369;
case 0x58536a:c.instructions+=1;goto B58536a;
case 0x58536b:goto L58536b;
case 0x58536e:c.instructions+=4;goto B58536e;
case 0x585370:c.instructions+=3;goto B585370;
case 0x585374:c.instructions+=2;goto B585374;
case 0x585378:c.instructions+=1;goto B585378;
case 0x58537a:goto L58537a;
case 0x585380:goto L585380;
case 0x585382:c.instructions+=3;goto B585382;
case 0x585386:c.instructions+=2;goto B585386;
case 0x58538a:c.instructions+=1;goto B58538a;
case 0x58538c:goto L58538c;
case 0x585392:goto L585392;
case 0x585394:c.instructions+=3;goto B585394;
case 0x58539a:c.instructions+=2;goto B58539a;
case 0x58539b:c.instructions+=1;goto B58539b;
case 0x5853a0:goto L5853a0;
case 0x5853a1:c.instructions+=4;goto B5853a1;
case 0x5853a4:c.instructions+=3;goto B5853a4;
case 0x5853a7:c.instructions+=2;goto B5853a7;
case 0x5853a9:c.instructions+=1;goto B5853a9;
case 0x5853ab:goto L5853ab;
case 0x5853b1:goto L5853b1;
case 0x5853b7:c.instructions+=3;goto B5853b7;
case 0x5853bd:c.instructions+=2;goto B5853bd;
case 0x5853c3:c.instructions+=1;goto B5853c3;
case 0x5853c8:goto L5853c8;
case 0x5853ca:c.instructions+=4;goto B5853ca;
case 0x5853cf:c.instructions+=3;goto B5853cf;
case 0x5853d3:c.instructions+=2;goto B5853d3;
case 0x5853d7:c.instructions+=1;goto B5853d7;
case 0x5853dc:goto L5853dc;
case 0x5853e1:c.instructions+=2;goto B5853e1;
case 0x5853e2:c.instructions+=1;goto B5853e2;
case 0x5853f0:goto L5853f0;
case 0x5853f1:c.instructions+=4;goto B5853f1;
case 0x5853f4:c.instructions+=3;goto B5853f4;
case 0x5853f7:c.instructions+=2;goto B5853f7;
case 0x5853f9:c.instructions+=1;goto B5853f9;
case 0x5853fb:goto L5853fb;
case 0x585401:goto L585401;
case 0x585407:c.instructions+=3;goto B585407;
case 0x58540d:c.instructions+=2;goto B58540d;
case 0x585413:c.instructions+=1;goto B585413;
case 0x585418:goto L585418;
case 0x58541a:c.instructions+=4;goto B58541a;
case 0x58541f:c.instructions+=3;goto B58541f;
case 0x585423:c.instructions+=2;goto B585423;
case 0x585427:c.instructions+=1;goto B585427;
case 0x58542c:goto L58542c;
case 0x585431:c.instructions+=2;goto B585431;
case 0x585432:c.instructions+=1;goto B585432;
case 0x585440:goto L585440;
case 0x585441:c.instructions+=3;goto B585441;
case 0x585442:c.instructions+=2;goto B585442;
case 0x585444:c.instructions+=1;goto B585444;
case 0x585449:goto L585449;
case 0x58544b:c.instructions+=2;goto B58544b;
case 0x58544f:c.instructions+=1;goto B58544f;
case 0x585451:goto L585451;
case 0x585452:c.instructions+=4;goto B585452;
case 0x585453:c.instructions+=3;goto B585453;
case 0x585457:c.instructions+=2;goto B585457;
case 0x585458:c.instructions+=1;goto B585458;
case 0x585460:goto L585460;
case 0x585466:c.instructions+=3;goto B585466;
case 0x585468:c.instructions+=2;goto B585468;
case 0x58546a:c.instructions+=1;goto B58546a;
case 0x58546c:goto L58546c;
case 0x585472:goto L585472;
case 0x585475:c.instructions+=3;goto B585475;
case 0x585476:c.instructions+=2;goto B585476;
case 0x585477:c.instructions+=1;goto B585477;
case 0x58547c:goto L58547c;
case 0x58547f:c.instructions+=2;goto B58547f;
case 0x585481:c.instructions+=1;goto B585481;
case 0x585483:goto L585483;
case 0x585489:c.instructions+=4;goto B585489;
case 0x58548a:c.instructions+=3;goto B58548a;
case 0x58548d:c.instructions+=2;goto B58548d;
case 0x58548f:c.instructions+=1;goto B58548f;
case 0x585491:goto L585491;
case 0x585494:c.instructions+=5;goto B585494;
case 0x585496:c.instructions+=4;goto B585496;
case 0x585498:c.instructions+=3;goto B585498;
case 0x585499:c.instructions+=2;goto B585499;
case 0x58549c:c.instructions+=1;goto B58549c;
case 0x5854a1:goto L5854a1;
case 0x5854a4:c.instructions+=1;goto B5854a4;
case 0x5854a6:goto L5854a6;
case 0x5854a8:c.instructions+=2;goto B5854a8;
case 0x5854ac:c.instructions+=1;goto B5854ac;
case 0x5854ae:goto L5854ae;
case 0x5854af:c.instructions+=2;goto B5854af;
case 0x5854b0:c.instructions+=1;goto B5854b0;
case 0x5854b1:goto L5854b1;
case 0x5854b2:c.instructions+=2;goto B5854b2;
case 0x5854b3:c.instructions+=1;goto B5854b3;
case 0x5854c0:goto L5854c0;
case 0x5854c1:c.instructions+=11;goto B5854c1;
case 0x5854c3:c.instructions+=10;goto B5854c3;
case 0x5854c6:c.instructions+=9;goto B5854c6;
case 0x5854cc:c.instructions+=8;goto B5854cc;
case 0x5854cd:c.instructions+=7;goto B5854cd;
case 0x5854ce:c.instructions+=6;goto B5854ce;
case 0x5854cf:c.instructions+=5;goto B5854cf;
case 0x5854d1:c.instructions+=4;goto B5854d1;
case 0x5854d3:c.instructions+=3;goto B5854d3;
case 0x5854d7:c.instructions+=2;goto B5854d7;
case 0x5854dc:c.instructions+=1;goto B5854dc;
case 0x5854e0:goto L5854e0;
case 0x5854e2:goto L5854e2;
case 0x5854e5:c.instructions+=10;goto B5854e5;
case 0x5854e7:c.instructions+=9;goto B5854e7;
case 0x5854ec:c.instructions+=8;goto B5854ec;
case 0x5854ed:c.instructions+=7;goto B5854ed;
case 0x5854f2:c.instructions+=6;goto B5854f2;
case 0x5854f6:c.instructions+=5;goto B5854f6;
case 0x5854f7:c.instructions+=4;goto B5854f7;
case 0x5854fd:c.instructions+=3;goto B5854fd;
case 0x585502:c.instructions+=2;goto B585502;
case 0x585503:c.instructions+=1;goto B585503;
case 0x585508:goto L585508;
case 0x58550b:c.instructions+=2;goto B58550b;
case 0x58550c:c.instructions+=1;goto B58550c;
case 0x585511:goto L585511;
case 0x585515:c.instructions+=2;goto B585515;
case 0x585516:c.instructions+=1;goto B585516;
case 0x58551b:goto L58551b;
case 0x58551e:c.instructions+=2;goto B58551e;
case 0x585521:c.instructions+=1;goto B585521;
case 0x585527:goto L585527;
case 0x58552d:c.instructions+=15;goto B58552d;
case 0x585533:c.instructions+=14;goto B585533;
case 0x585538:c.instructions+=13;goto B585538;
case 0x58553c:c.instructions+=12;goto B58553c;
case 0x585541:c.instructions+=11;goto B585541;
case 0x585545:c.instructions+=10;goto B585545;
case 0x585547:c.instructions+=9;goto B585547;
case 0x58554b:c.instructions+=8;goto B58554b;
case 0x58554d:c.instructions+=7;goto B58554d;
case 0x58554e:c.instructions+=6;goto B58554e;
case 0x585552:c.instructions+=5;goto B585552;
case 0x585557:c.instructions+=4;goto B585557;
case 0x585558:c.instructions+=3;goto B585558;
case 0x58555d:c.instructions+=2;goto B58555d;
case 0x585561:c.instructions+=1;goto B585561;
case 0x585566:goto L585566;
case 0x585568:c.instructions+=5;goto B585568;
case 0x58556c:c.instructions+=4;goto B58556c;
case 0x58556d:c.instructions+=3;goto B58556d;
case 0x585571:c.instructions+=2;goto B585571;
case 0x585572:c.instructions+=1;goto B585572;
case 0x585577:goto L585577;
case 0x58557b:c.instructions+=2;goto B58557b;
case 0x58557c:c.instructions+=1;goto B58557c;
case 0x585581:goto L585581;
case 0x585583:c.instructions+=3;goto B585583;
case 0x585587:c.instructions+=2;goto B585587;
case 0x585588:c.instructions+=1;goto B585588;
case 0x58558d:goto L58558d;
case 0x585590:c.instructions+=3;goto B585590;
case 0x585593:c.instructions+=2;goto B585593;
case 0x585595:c.instructions+=1;goto B585595;
case 0x585597:goto L585597;
case 0x585599:c.instructions+=6;goto B585599;
case 0x58559a:c.instructions+=5;goto B58559a;
case 0x58559b:c.instructions+=4;goto B58559b;
case 0x58559c:c.instructions+=3;goto B58559c;
case 0x58559e:c.instructions+=2;goto B58559e;
case 0x58559f:c.instructions+=1;goto B58559f;
case 0x5855a2:goto L5855a2;
case 0x5855a6:c.instructions+=2;goto B5855a6;
case 0x5855a7:c.instructions+=1;goto B5855a7;
case 0x5855ac:goto L5855ac;
case 0x5855af:c.instructions+=3;goto B5855af;
case 0x5855b2:c.instructions+=2;goto B5855b2;
case 0x5855b4:c.instructions+=1;goto B5855b4;
case 0x5855b6:goto L5855b6;
case 0x5855b9:c.instructions+=6;goto B5855b9;
case 0x5855ba:c.instructions+=5;goto B5855ba;
case 0x5855bb:c.instructions+=4;goto B5855bb;
case 0x5855bc:c.instructions+=3;goto B5855bc;
case 0x5855be:c.instructions+=2;goto B5855be;
case 0x5855bf:c.instructions+=1;goto B5855bf;
case 0x5855c2:goto L5855c2;
case 0x5855c7:c.instructions+=6;goto B5855c7;
case 0x5855ce:c.instructions+=5;goto B5855ce;
case 0x5855cf:c.instructions+=4;goto B5855cf;
case 0x5855d3:c.instructions+=3;goto B5855d3;
case 0x5855d4:c.instructions+=2;goto B5855d4;
case 0x5855d5:c.instructions+=1;goto B5855d5;
case 0x5855da:goto L5855da;
case 0x5855dd:c.instructions+=9;goto B5855dd;
case 0x5855de:c.instructions+=8;goto B5855de;
case 0x5855e5:c.instructions+=7;goto B5855e5;
case 0x5855e6:c.instructions+=6;goto B5855e6;
case 0x5855ed:c.instructions+=5;goto B5855ed;
case 0x5855f4:c.instructions+=4;goto B5855f4;
case 0x5855fb:c.instructions+=3;goto B5855fb;
case 0x585602:c.instructions+=2;goto B585602;
case 0x58560a:c.instructions+=1;goto B58560a;
case 0x58560f:goto L58560f;
case 0x585612:c.instructions+=6;goto B585612;
case 0x585614:c.instructions+=5;goto B585614;
case 0x58561b:c.instructions+=4;goto B58561b;
case 0x58561c:c.instructions+=3;goto B58561c;
case 0x58561d:c.instructions+=2;goto B58561d;
case 0x585622:c.instructions+=1;goto B585622;
case 0x585627:goto L585627;
case 0x585628:c.instructions+=6;goto B585628;
case 0x585629:c.instructions+=5;goto B585629;
case 0x58562e:c.instructions+=4;goto B58562e;
case 0x58562f:c.instructions+=3;goto B58562f;
case 0x585631:c.instructions+=2;goto B585631;
case 0x585632:c.instructions+=1;goto B585632;
case 0x585640:goto L585640;
case 0x585643:c.instructions+=6;goto B585643;
case 0x585644:c.instructions+=5;goto B585644;
case 0x585646:c.instructions+=4;goto B585646;
case 0x585647:c.instructions+=3;goto B585647;
case 0x585648:c.instructions+=2;goto B585648;
case 0x58564d:c.instructions+=1;goto B58564d;
case 0x585652:goto L585652;
case 0x585655:c.instructions+=2;goto B585655;
case 0x585658:c.instructions+=1;goto B585658;
case 0x58565e:goto L58565e;
case 0x585663:c.instructions+=2;goto B585663;
case 0x58566d:c.instructions+=1;goto B58566d;
case 0x585672:goto L585672;
case 0x585674:c.instructions+=15;goto B585674;
case 0x585678:c.instructions+=14;goto B585678;
case 0x585679:c.instructions+=13;goto B585679;
case 0x58567d:c.instructions+=12;goto B58567d;
case 0x585681:c.instructions+=11;goto B585681;
case 0x585683:c.instructions+=10;goto B585683;
case 0x585684:c.instructions+=9;goto B585684;
case 0x58568b:c.instructions+=8;goto B58568b;
case 0x585690:c.instructions+=7;goto B585690;
case 0x585694:c.instructions+=6;goto B585694;
case 0x585698:c.instructions+=5;goto B585698;
case 0x58569d:c.instructions+=4;goto B58569d;
case 0x5856a2:c.instructions+=3;goto B5856a2;
case 0x5856a7:c.instructions+=2;goto B5856a7;
case 0x5856ac:c.instructions+=1;goto B5856ac;
case 0x5856b1:goto L5856b1;
case 0x5856b4:c.instructions+=2;goto B5856b4;
case 0x5856b6:c.instructions+=1;goto B5856b6;
case 0x5856b8:goto L5856b8;
case 0x5856b9:c.instructions+=3;goto B5856b9;
case 0x5856ba:c.instructions+=2;goto B5856ba;
case 0x5856bf:c.instructions+=1;goto B5856bf;
case 0x5856c4:goto L5856c4;
case 0x5856c7:c.instructions+=2;goto B5856c7;
case 0x5856ca:c.instructions+=1;goto B5856ca;
case 0x5856cc:goto L5856cc;
case 0x5856cd:c.instructions+=1;goto B5856cd;
case 0x5856d2:goto L5856d2;
case 0x5856d5:goto L5856d5;
case 0x5856df:c.instructions+=4;goto B5856df;
case 0x5856e1:c.instructions+=3;goto B5856e1;
case 0x5856e2:c.instructions+=2;goto B5856e2;
case 0x5856e5:c.instructions+=1;goto B5856e5;
case 0x5856e6:goto L5856e6;
case 0x5856eb:c.instructions+=11;goto B5856eb;
case 0x5856f0:c.instructions+=10;goto B5856f0;
case 0x5856f5:c.instructions+=9;goto B5856f5;
case 0x5856f8:c.instructions+=8;goto B5856f8;
case 0x5856fa:c.instructions+=7;goto B5856fa;
case 0x5856ff:c.instructions+=6;goto B5856ff;
case 0x585702:c.instructions+=5;goto B585702;
case 0x585704:c.instructions+=4;goto B585704;
case 0x585707:c.instructions+=3;goto B585707;
case 0x585709:c.instructions+=2;goto B585709;
case 0x58570f:c.instructions+=1;goto B58570f;
case 0x585719:goto L585719;
case 0x58571b:c.instructions+=3;goto B58571b;
case 0x58571c:c.instructions+=2;goto B58571c;
case 0x58571f:c.instructions+=1;goto B58571f;
case 0x585720:goto L585720;
case 0x585721:c.instructions+=2;goto B585721;
case 0x585722:c.instructions+=1;goto B585722;
case 0x585727:goto L585727;
case 0x585729:c.instructions+=9;goto B585729;
case 0x58572f:c.instructions+=8;goto B58572f;
case 0x585735:c.instructions+=7;goto B585735;
case 0x58573b:c.instructions+=6;goto B58573b;
case 0x585741:c.instructions+=5;goto B585741;
case 0x585747:c.instructions+=4;goto B585747;
case 0x58574d:c.instructions+=3;goto B58574d;
case 0x585753:c.instructions+=2;goto B585753;
case 0x585758:c.instructions+=1;goto B585758;
case 0x585760:goto L585760;
case 0x585763:c.instructions+=5;goto B585763;
case 0x585765:c.instructions+=4;goto B585765;
case 0x58576c:c.instructions+=3;goto B58576c;
case 0x58576f:c.instructions+=2;goto B58576f;
case 0x585772:c.instructions+=1;goto B585772;
case 0x585774:goto L585774;
case 0x585775:c.instructions+=1;goto B585775;
case 0x58577a:goto L58577a;
case 0x58577d:goto L58577d;
case 0x58577f:c.instructions+=2;goto B58577f;
case 0x585781:c.instructions+=1;goto B585781;
case 0x585783:goto L585783;
case 0x585784:c.instructions+=1;goto B585784;
case 0x585789:goto L585789;
case 0x58578c:goto L58578c;
case 0x58578e:c.instructions+=4;goto B58578e;
case 0x585791:c.instructions+=3;goto B585791;
case 0x585794:c.instructions+=2;goto B585794;
case 0x58579a:c.instructions+=1;goto B58579a;
case 0x58579c:goto L58579c;
case 0x58579d:c.instructions+=2;goto B58579d;
case 0x58579e:c.instructions+=1;goto B58579e;
case 0x5857a0:goto L5857a0;
case 0x5857a2:c.instructions+=1;goto B5857a2;
case 0x5857a7:goto L5857a7;
case 0x5857aa:c.instructions+=1;goto B5857aa;
case 0x5857ac:goto L5857ac;
case 0x5857af:c.instructions+=3;goto B5857af;
case 0x5857b0:c.instructions+=2;goto B5857b0;
case 0x5857b5:c.instructions+=1;goto B5857b5;
case 0x5857b7:goto L5857b7;
case 0x5857b8:goto L5857b8;
case 0x5857b9:c.instructions+=4;goto B5857b9;
case 0x5857bc:c.instructions+=3;goto B5857bc;
case 0x5857c3:c.instructions+=2;goto B5857c3;
case 0x5857c5:c.instructions+=1;goto B5857c5;
case 0x5857c7:goto L5857c7;
case 0x5857cb:c.instructions+=5;goto B5857cb;
case 0x5857cf:c.instructions+=4;goto B5857cf;
case 0x5857d1:c.instructions+=3;goto B5857d1;
case 0x5857d2:c.instructions+=2;goto B5857d2;
case 0x5857d3:c.instructions+=1;goto B5857d3;
case 0x5857d8:goto L5857d8;
case 0x5857de:c.instructions+=8;goto B5857de;
case 0x5857e1:c.instructions+=7;goto B5857e1;
case 0x5857e4:c.instructions+=6;goto B5857e4;
case 0x5857ea:c.instructions+=5;goto B5857ea;
case 0x5857f0:c.instructions+=4;goto B5857f0;
case 0x5857f6:c.instructions+=3;goto B5857f6;
case 0x5857fc:c.instructions+=2;goto B5857fc;
case 0x585802:c.instructions+=1;goto B585802;
case 0x585807:goto L585807;
case 0x58580a:goto L58580a;
case 0x58580b:c.instructions+=1;goto B58580b;
case 0x585810:goto L585810;
case 0x585816:c.instructions+=5;goto B585816;
case 0x585817:c.instructions+=4;goto B585817;
case 0x58581b:c.instructions+=3;goto B58581b;
case 0x585821:c.instructions+=2;goto B585821;
case 0x585822:c.instructions+=1;goto B585822;
case 0x585827:goto L585827;
case 0x585828:c.instructions+=2;goto B585828;
case 0x58582d:c.instructions+=1;goto B58582d;
case 0x585832:goto L585832;
case 0x585836:c.instructions+=3;goto B585836;
case 0x585838:c.instructions+=2;goto B585838;
case 0x58583d:c.instructions+=1;goto B58583d;
case 0x585840:goto L585840;
case 0x585842:c.instructions+=1;goto B585842;
case 0x585844:goto L585844;
case 0x585847:c.instructions+=3;goto B585847;
case 0x585848:c.instructions+=2;goto B585848;
case 0x58584d:c.instructions+=1;goto B58584d;
case 0x58584f:goto L58584f;
case 0x585851:goto L585851;
case 0x585855:c.instructions+=7;goto B585855;
case 0x585859:c.instructions+=6;goto B585859;
case 0x58585c:c.instructions+=5;goto B58585c;
case 0x58585d:c.instructions+=4;goto B58585d;
case 0x58585e:c.instructions+=3;goto B58585e;
case 0x58585f:c.instructions+=2;goto B58585f;
case 0x585860:c.instructions+=1;goto B585860;
case 0x585865:goto L585865;
case 0x585868:c.instructions+=2;goto B585868;
case 0x585869:c.instructions+=1;goto B585869;
case 0x58586a:goto L58586a;
case 0x58586d:c.instructions+=2;goto B58586d;
case 0x585874:c.instructions+=1;goto B585874;
case 0x585880:goto L585880;
case 0x585884:c.instructions+=4;goto B585884;
case 0x585886:c.instructions+=3;goto B585886;
case 0x58588b:c.instructions+=2;goto B58588b;
case 0x58588c:c.instructions+=1;goto B58588c;
case 0x585890:goto L585890;
case 0x585892:c.instructions+=1;goto B585892;
case 0x585894:goto L585894;
case 0x585897:c.instructions+=3;goto B585897;
case 0x585898:c.instructions+=2;goto B585898;
case 0x58589d:c.instructions+=1;goto B58589d;
case 0x58589f:goto L58589f;
case 0x5858a1:goto L5858a1;
case 0x5858a4:c.instructions+=5;goto B5858a4;
case 0x5858a6:c.instructions+=4;goto B5858a6;
case 0x5858ad:c.instructions+=3;goto B5858ad;
case 0x5858b3:c.instructions+=2;goto B5858b3;
case 0x5858ba:c.instructions+=1;goto B5858ba;
case 0x5858bc:goto L5858bc;
case 0x5858bd:c.instructions+=1;goto B5858bd;
case 0x5858c2:goto L5858c2;
case 0x5858c5:goto L5858c5;
case 0x5858c8:c.instructions+=2;goto B5858c8;
case 0x5858ca:c.instructions+=1;goto B5858ca;
case 0x5858cc:goto L5858cc;
case 0x5858cd:c.instructions+=1;goto B5858cd;
case 0x5858d2:goto L5858d2;
case 0x5858d5:goto L5858d5;
case 0x5858da:c.instructions+=6;goto B5858da;
case 0x5858db:c.instructions+=5;goto B5858db;
case 0x5858e2:c.instructions+=4;goto B5858e2;
case 0x5858e9:c.instructions+=3;goto B5858e9;
case 0x5858ee:c.instructions+=2;goto B5858ee;
case 0x5858ef:c.instructions+=1;goto B5858ef;
case 0x5858f0:goto L5858f0;
case 0x5858f3:c.instructions+=2;goto B5858f3;
case 0x5858fa:c.instructions+=1;goto B5858fa;
case 0x585900:goto L585900;
case 0x585903:c.instructions+=13;goto B585903;
case 0x585905:c.instructions+=12;goto B585905;
case 0x585909:c.instructions+=11;goto B585909;
case 0x58590d:c.instructions+=10;goto B58590d;
case 0x58590e:c.instructions+=9;goto B58590e;
case 0x585912:c.instructions+=8;goto B585912;
case 0x585916:c.instructions+=7;goto B585916;
case 0x58591a:c.instructions+=6;goto B58591a;
case 0x58591b:c.instructions+=5;goto B58591b;
case 0x58591f:c.instructions+=4;goto B58591f;
case 0x585920:c.instructions+=3;goto B585920;
case 0x585924:c.instructions+=2;goto B585924;
case 0x585928:c.instructions+=1;goto B585928;
case 0x58592d:goto L58592d;
case 0x58592f:c.instructions+=6;goto B58592f;
case 0x585935:c.instructions+=5;goto B585935;
case 0x585937:c.instructions+=4;goto B585937;
case 0x58593b:c.instructions+=3;goto B58593b;
case 0x58593c:c.instructions+=2;goto B58593c;
case 0x58593d:c.instructions+=1;goto B58593d;
case 0x585942:goto L585942;
case 0x585946:c.instructions+=5;goto B585946;
case 0x585949:c.instructions+=4;goto B585949;
case 0x58594f:c.instructions+=3;goto B58594f;
case 0x585952:c.instructions+=2;goto B585952;
case 0x585954:c.instructions+=1;goto B585954;
case 0x585956:goto L585956;
case 0x585958:c.instructions+=1;goto B585958;
case 0x58595a:goto L58595a;
case 0x585960:c.instructions+=6;goto B585960;
case 0x585966:c.instructions+=5;goto B585966;
case 0x58596c:c.instructions+=4;goto B58596c;
case 0x585972:c.instructions+=3;goto B585972;
case 0x585978:c.instructions+=2;goto B585978;
case 0x58597e:c.instructions+=1;goto B58597e;
case 0x585983:goto L585983;
case 0x585986:goto L585986;
case 0x585987:c.instructions+=2;goto B585987;
case 0x58598a:c.instructions+=1;goto B58598a;
case 0x585990:goto L585990;
case 0x585991:c.instructions+=4;goto B585991;
case 0x585995:c.instructions+=3;goto B585995;
case 0x585998:c.instructions+=2;goto B585998;
case 0x585999:c.instructions+=1;goto B585999;
case 0x58599e:goto L58599e;
case 0x5859a1:c.instructions+=3;goto B5859a1;
case 0x5859a3:c.instructions+=2;goto B5859a3;
case 0x5859a6:c.instructions+=1;goto B5859a6;
case 0x5859a8:goto L5859a8;
case 0x5859ae:c.instructions+=11;goto B5859ae;
case 0x5859b1:c.instructions+=10;goto B5859b1;
case 0x5859b6:c.instructions+=9;goto B5859b6;
case 0x5859bc:c.instructions+=8;goto B5859bc;
case 0x5859bd:c.instructions+=7;goto B5859bd;
case 0x5859be:c.instructions+=6;goto B5859be;
case 0x5859c3:c.instructions+=5;goto B5859c3;
case 0x5859c9:c.instructions+=4;goto B5859c9;
case 0x5859cc:c.instructions+=3;goto B5859cc;
case 0x5859cd:c.instructions+=2;goto B5859cd;
case 0x5859d3:c.instructions+=1;goto B5859d3;
case 0x5859d9:goto L5859d9;
case 0x5859dc:c.instructions+=3;goto B5859dc;
case 0x5859e3:c.instructions+=2;goto B5859e3;
case 0x5859e4:c.instructions+=1;goto B5859e4;
case 0x5859e5:goto L5859e5;
case 0x5859ea:c.instructions+=2;goto B5859ea;
case 0x5859ed:c.instructions+=1;goto B5859ed;
case 0x5859ef:goto L5859ef;
case 0x5859f5:goto L5859f5;
case 0x5859fc:goto L5859fc;
case 0x5859fd:c.instructions+=1;goto B5859fd;
case 0x585a00:goto L585a00;
case 0x585a06:c.instructions+=5;goto B585a06;
case 0x585a07:c.instructions+=4;goto B585a07;
case 0x585a0e:c.instructions+=3;goto B585a0e;
case 0x585a11:c.instructions+=2;goto B585a11;
case 0x585a12:c.instructions+=1;goto B585a12;
case 0x585a17:goto L585a17;
case 0x585a1a:c.instructions+=3;goto B585a1a;
case 0x585a1d:c.instructions+=2;goto B585a1d;
case 0x585a1f:c.instructions+=1;goto B585a1f;
case 0x585a25:goto L585a25;
case 0x585a28:c.instructions+=2;goto B585a28;
case 0x585a2d:c.instructions+=1;goto B585a2d;
case 0x585a33:goto L585a33;
case 0x585a34:goto L585a34;
case 0x585a37:c.instructions+=6;goto B585a37;
case 0x585a3b:c.instructions+=5;goto B585a3b;
case 0x585a3c:c.instructions+=4;goto B585a3c;
case 0x585a40:c.instructions+=3;goto B585a40;
case 0x585a41:c.instructions+=2;goto B585a41;
case 0x585a42:c.instructions+=1;goto B585a42;
case 0x585a47:goto L585a47;
case 0x585a4a:c.instructions+=2;goto B585a4a;
case 0x585a4c:c.instructions+=1;goto B585a4c;
case 0x585a52:goto L585a52;
case 0x585a58:c.instructions+=3;goto B585a58;
case 0x585a5d:c.instructions+=2;goto B585a5d;
case 0x585a63:c.instructions+=1;goto B585a63;
case 0x585a68:goto L585a68;
case 0x585a6e:c.instructions+=5;goto B585a6e;
case 0x585a74:c.instructions+=4;goto B585a74;
case 0x585a76:c.instructions+=3;goto B585a76;
case 0x585a78:c.instructions+=2;goto B585a78;
case 0x585a7a:c.instructions+=1;goto B585a7a;
case 0x585a7c:goto L585a7c;
case 0x585a7e:c.instructions+=14;goto B585a7e;
case 0x585a7f:c.instructions+=13;goto B585a7f;
case 0x585a81:c.instructions+=12;goto B585a81;
case 0x585a87:c.instructions+=11;goto B585a87;
case 0x585a8a:c.instructions+=10;goto B585a8a;
case 0x585a8c:c.instructions+=9;goto B585a8c;
case 0x585a8e:c.instructions+=8;goto B585a8e;
case 0x585a91:c.instructions+=7;goto B585a91;
case 0x585a96:c.instructions+=6;goto B585a96;
case 0x585a99:c.instructions+=5;goto B585a99;
case 0x585a9f:c.instructions+=4;goto B585a9f;
case 0x585aa9:c.instructions+=3;goto B585aa9;
case 0x585aaa:c.instructions+=2;goto B585aaa;
case 0x585aac:c.instructions+=1;goto B585aac;
case 0x585ab2:goto L585ab2;
case 0x585ab8:c.instructions+=8;goto B585ab8;
case 0x585abc:c.instructions+=7;goto B585abc;
case 0x585abf:c.instructions+=6;goto B585abf;
case 0x585ac0:c.instructions+=5;goto B585ac0;
case 0x585ac1:c.instructions+=4;goto B585ac1;
case 0x585ac5:c.instructions+=3;goto B585ac5;
case 0x585ac6:c.instructions+=2;goto B585ac6;
case 0x585ac7:c.instructions+=1;goto B585ac7;
case 0x585acd:goto L585acd;
case 0x585acf:c.instructions+=3;goto B585acf;
case 0x585ad2:c.instructions+=2;goto B585ad2;
case 0x585ad5:c.instructions+=1;goto B585ad5;
case 0x585adb:goto L585adb;
case 0x585adc:c.instructions+=3;goto B585adc;
case 0x585add:c.instructions+=2;goto B585add;
case 0x585ae3:c.instructions+=1;goto B585ae3;
case 0x585ae4:goto L585ae4;
case 0x585ae7:c.instructions+=1;goto B585ae7;
case 0x585ae9:goto L585ae9;
case 0x585aec:c.instructions+=2;goto B585aec;
case 0x585aed:c.instructions+=1;goto B585aed;
case 0x585af2:goto L585af2;
case 0x585af4:c.instructions+=4;goto B585af4;
case 0x585af7:c.instructions+=3;goto B585af7;
case 0x585afa:c.instructions+=2;goto B585afa;
case 0x585b00:c.instructions+=1;goto B585b00;
case 0x585b02:goto L585b02;
case 0x585b05:c.instructions+=2;goto B585b05;
case 0x585b06:c.instructions+=1;goto B585b06;
case 0x585b0b:goto L585b0b;
case 0x585b0c:c.instructions+=1;goto B585b0c;
case 0x585b12:goto L585b12;
case 0x585b15:goto L585b15;
case 0x585b16:goto L585b16;
case 0x585b17:c.instructions+=2;goto B585b17;
case 0x585b1d:c.instructions+=1;goto B585b1d;
case 0x585b20:goto L585b20;
case 0x585b26:c.instructions+=2;goto B585b26;
case 0x585b27:c.instructions+=1;goto B585b27;
case 0x585b2c:goto L585b2c;
case 0x585b31:c.instructions+=2;goto B585b31;
case 0x585b33:c.instructions+=1;goto B585b33;
case 0x585b39:goto L585b39;
case 0x585b3a:c.instructions+=1;goto B585b3a;
case 0x585b3f:goto L585b3f;
case 0x585b42:c.instructions+=3;goto B585b42;
case 0x585b45:c.instructions+=2;goto B585b45;
case 0x585b47:c.instructions+=1;goto B585b47;
case 0x585b4d:goto L585b4d;
case 0x585b52:c.instructions+=3;goto B585b52;
case 0x585b54:c.instructions+=2;goto B585b54;
case 0x585b59:c.instructions+=1;goto B585b59;
case 0x585b5f:goto L585b5f;
case 0x585b60:goto L585b60;
case 0x585b64:c.instructions+=5;goto B585b64;
case 0x585b65:c.instructions+=4;goto B585b65;
case 0x585b69:c.instructions+=3;goto B585b69;
case 0x585b6a:c.instructions+=2;goto B585b6a;
case 0x585b6b:c.instructions+=1;goto B585b6b;
case 0x585b70:goto L585b70;
case 0x585b73:c.instructions+=2;goto B585b73;
case 0x585b75:c.instructions+=1;goto B585b75;
case 0x585b77:goto L585b77;
case 0x585b7d:c.instructions+=4;goto B585b7d;
case 0x585b82:c.instructions+=3;goto B585b82;
case 0x585b83:c.instructions+=2;goto B585b83;
case 0x585b89:c.instructions+=1;goto B585b89;
case 0x585b8e:goto L585b8e;
case 0x585b8f:c.instructions+=2;goto B585b8f;
case 0x585b94:c.instructions+=1;goto B585b94;
case 0x585b99:goto L585b99;
case 0x585b9d:c.instructions+=5;goto B585b9d;
case 0x585b9e:c.instructions+=4;goto B585b9e;
case 0x585ba2:c.instructions+=3;goto B585ba2;
case 0x585ba3:c.instructions+=2;goto B585ba3;
case 0x585ba4:c.instructions+=1;goto B585ba4;
case 0x585baa:goto L585baa;
case 0x585baf:c.instructions+=3;goto B585baf;
case 0x585bb2:c.instructions+=2;goto B585bb2;
case 0x585bb4:c.instructions+=1;goto B585bb4;
case 0x585bb6:goto L585bb6;
case 0x585bb7:c.instructions+=2;goto B585bb7;
case 0x585bbd:c.instructions+=1;goto B585bbd;
case 0x585bbe:goto L585bbe;
case 0x585bc3:c.instructions+=2;goto B585bc3;
case 0x585bc5:c.instructions+=1;goto B585bc5;
case 0x585bcb:goto L585bcb;
case 0x585bcc:c.instructions+=1;goto B585bcc;
case 0x585bd1:goto L585bd1;
case 0x585bd3:c.instructions+=4;goto B585bd3;
case 0x585bd6:c.instructions+=3;goto B585bd6;
case 0x585bd9:c.instructions+=2;goto B585bd9;
case 0x585bdf:c.instructions+=1;goto B585bdf;
case 0x585be5:goto L585be5;
case 0x585be6:c.instructions+=2;goto B585be6;
case 0x585bec:c.instructions+=1;goto B585bec;
case 0x585bf2:goto L585bf2;
case 0x585bf8:c.instructions+=2;goto B585bf8;
case 0x585bfa:c.instructions+=1;goto B585bfa;
case 0x585bfc:goto L585bfc;
case 0x585c01:c.instructions+=2;goto B585c01;
case 0x585c03:c.instructions+=1;goto B585c03;
case 0x585c05:goto L585c05;
case 0x585c0a:c.instructions+=1;goto B585c0a;
case 0x585c0c:goto L585c0c;
case 0x585c12:c.instructions+=3;goto B585c12;
case 0x585c18:c.instructions+=2;goto B585c18;
case 0x585c1e:c.instructions+=1;goto B585c1e;
case 0x585c23:goto L585c23;
case 0x585c28:goto L585c28;
case 0x585c29:c.instructions+=1;goto B585c29;
case 0x585c2e:goto L585c2e;
case 0x585c31:c.instructions+=3;goto B585c31;
case 0x585c33:c.instructions+=2;goto B585c33;
case 0x585c38:c.instructions+=1;goto B585c38;
case 0x585c3a:goto L585c3a;
case 0x585c3b:c.instructions+=2;goto B585c3b;
case 0x585c41:c.instructions+=1;goto B585c41;
case 0x585c47:goto L585c47;
case 0x585c4c:c.instructions+=2;goto B585c4c;
case 0x585c4e:c.instructions+=1;goto B585c4e;
case 0x585c50:goto L585c50;
case 0x585c55:c.instructions+=1;goto B585c55;
case 0x585c57:goto L585c57;
case 0x585c5d:c.instructions+=1;goto B585c5d;
case 0x585c5f:goto L585c5f;
case 0x585c61:c.instructions+=1;goto B585c61;
case 0x585c67:goto L585c67;
case 0x585c6a:goto L585c6a;
case 0x585c6b:c.instructions+=2;goto B585c6b;
case 0x585c71:c.instructions+=1;goto B585c71;
case 0x585c80:goto L585c80;
case 0x585c81:c.instructions+=8;goto B585c81;
case 0x585c82:c.instructions+=7;goto B585c82;
case 0x585c86:c.instructions+=6;goto B585c86;
case 0x585c88:c.instructions+=5;goto B585c88;
case 0x585c8c:c.instructions+=4;goto B585c8c;
case 0x585c8d:c.instructions+=3;goto B585c8d;
case 0x585c8f:c.instructions+=2;goto B585c8f;
case 0x585c97:c.instructions+=1;goto B585c97;
case 0x585c9c:goto L585c9c;
case 0x585ca0:c.instructions+=2;goto B585ca0;
case 0x585ca6:c.instructions+=1;goto B585ca6;
case 0x585ca8:goto L585ca8;
case 0x585ca9:c.instructions+=3;goto B585ca9;
case 0x585cae:c.instructions+=2;goto B585cae;
case 0x585cb3:c.instructions+=1;goto B585cb3;
case 0x585cb8:goto L585cb8;
case 0x585cb9:c.instructions+=2;goto B585cb9;
case 0x585cba:c.instructions+=1;goto B585cba;
case 0x585cc0:goto L585cc0;
case 0x585cc3:c.instructions+=8;goto B585cc3;
case 0x585cc4:c.instructions+=7;goto B585cc4;
case 0x585cc8:c.instructions+=6;goto B585cc8;
case 0x585cca:c.instructions+=5;goto B585cca;
case 0x585cce:c.instructions+=4;goto B585cce;
case 0x585ccf:c.instructions+=3;goto B585ccf;
case 0x585cd1:c.instructions+=2;goto B585cd1;
case 0x585cd9:c.instructions+=1;goto B585cd9;
case 0x585cde:goto L585cde;
case 0x585ce0:c.instructions+=5;goto B585ce0;
case 0x585ce4:c.instructions+=4;goto B585ce4;
case 0x585ce5:c.instructions+=3;goto B585ce5;
case 0x585ce7:c.instructions+=2;goto B585ce7;
case 0x585cef:c.instructions+=1;goto B585cef;
case 0x585cf4:goto L585cf4;
case 0x585cf9:c.instructions+=6;goto B585cf9;
case 0x585cfd:c.instructions+=5;goto B585cfd;
case 0x585d00:c.instructions+=4;goto B585d00;
case 0x585d05:c.instructions+=3;goto B585d05;
case 0x585d06:c.instructions+=2;goto B585d06;
case 0x585d07:c.instructions+=1;goto B585d07;
case 0x585d0c:goto L585d0c;
case 0x585d0d:c.instructions+=2;goto B585d0d;
case 0x585d10:c.instructions+=1;goto B585d10;
case 0x585d20:goto L585d20;
case 0x585d21:c.instructions+=6;goto B585d21;
case 0x585d25:c.instructions+=5;goto B585d25;
case 0x585d27:c.instructions+=4;goto B585d27;
case 0x585d2b:c.instructions+=3;goto B585d2b;
case 0x585d2c:c.instructions+=2;goto B585d2c;
case 0x585d34:c.instructions+=1;goto B585d34;
case 0x585d39:goto L585d39;
case 0x585d3d:c.instructions+=3;goto B585d3d;
case 0x585d3e:c.instructions+=2;goto B585d3e;
case 0x585d43:c.instructions+=1;goto B585d43;
case 0x585d48:goto L585d48;
case 0x585d49:c.instructions+=1;goto B585d49;
case 0x585d50:goto L585d50;
case 0x585d51:c.instructions+=8;goto B585d51;
case 0x585d52:c.instructions+=7;goto B585d52;
case 0x585d53:c.instructions+=6;goto B585d53;
case 0x585d54:c.instructions+=5;goto B585d54;
case 0x585d58:c.instructions+=4;goto B585d58;
case 0x585d5e:c.instructions+=3;goto B585d5e;
case 0x585d64:c.instructions+=2;goto B585d64;
case 0x585d68:c.instructions+=1;goto B585d68;
case 0x585d6d:goto L585d6d;
case 0x585d71:c.instructions+=5;goto B585d71;
case 0x585d75:c.instructions+=4;goto B585d75;
case 0x585d79:c.instructions+=3;goto B585d79;
case 0x585d7b:c.instructions+=2;goto B585d7b;
case 0x585d7e:c.instructions+=1;goto B585d7e;
case 0x585d80:goto L585d80;
case 0x585d86:goto L585d86;
case 0x585d8b:goto L585d8b;
case 0x585d91:c.instructions+=4;goto B585d91;
case 0x585d93:c.instructions+=3;goto B585d93;
case 0x585d94:c.instructions+=2;goto B585d94;
case 0x585d9a:c.instructions+=1;goto B585d9a;
case 0x585d9f:goto L585d9f;
case 0x585da0:c.instructions+=2;goto B585da0;
case 0x585da5:c.instructions+=1;goto B585da5;
case 0x585daa:goto L585daa;
case 0x585dae:c.instructions+=6;goto B585dae;
case 0x585db3:c.instructions+=5;goto B585db3;
case 0x585db4:c.instructions+=4;goto B585db4;
case 0x585db5:c.instructions+=3;goto B585db5;
case 0x585db6:c.instructions+=2;goto B585db6;
case 0x585db7:c.instructions+=1;goto B585db7;
case 0x585dbc:goto L585dbc;
case 0x585dbf:c.instructions+=2;goto B585dbf;
case 0x585dc1:c.instructions+=1;goto B585dc1;
case 0x585dc3:goto L585dc3;
case 0x585dc9:c.instructions+=3;goto B585dc9;
case 0x585dcf:c.instructions+=2;goto B585dcf;
case 0x585dd3:c.instructions+=1;goto B585dd3;
case 0x585dd8:goto L585dd8;
case 0x585ddc:c.instructions+=5;goto B585ddc;
case 0x585de0:c.instructions+=4;goto B585de0;
case 0x585de4:c.instructions+=3;goto B585de4;
case 0x585de6:c.instructions+=2;goto B585de6;
case 0x585de9:c.instructions+=1;goto B585de9;
case 0x585deb:goto L585deb;
case 0x585df1:goto L585df1;
case 0x585df2:c.instructions+=1;goto B585df2;
case 0x585df7:goto L585df7;
case 0x585dfb:c.instructions+=3;goto B585dfb;
case 0x585dfc:c.instructions+=2;goto B585dfc;
case 0x585dfd:c.instructions+=1;goto B585dfd;
case 0x585e02:goto L585e02;
case 0x585e05:goto L585e05;
case 0x585e06:c.instructions+=4;goto B585e06;
case 0x585e07:c.instructions+=3;goto B585e07;
case 0x585e08:c.instructions+=2;goto B585e08;
case 0x585e09:c.instructions+=1;goto B585e09;
case 0x585e10:goto L585e10;
case 0x585e16:c.instructions+=5;goto B585e16;
case 0x585e17:c.instructions+=4;goto B585e17;
case 0x585e1e:c.instructions+=3;goto B585e1e;
case 0x585e21:c.instructions+=2;goto B585e21;
case 0x585e27:c.instructions+=1;goto B585e27;
case 0x585e29:goto L585e29;
case 0x585e2b:c.instructions+=8;goto B585e2b;
case 0x585e2d:c.instructions+=7;goto B585e2d;
case 0x585e2f:c.instructions+=6;goto B585e2f;
case 0x585e33:c.instructions+=5;goto B585e33;
case 0x585e37:c.instructions+=4;goto B585e37;
case 0x585e3e:c.instructions+=3;goto B585e3e;
case 0x585e45:c.instructions+=2;goto B585e45;
case 0x585e4d:c.instructions+=1;goto B585e4d;
case 0x585e52:goto L585e52;
case 0x585e54:c.instructions+=3;goto B585e54;
case 0x585e55:c.instructions+=2;goto B585e55;
case 0x585e59:c.instructions+=1;goto B585e59;
case 0x585e5e:goto L585e5e;
case 0x585e60:c.instructions+=4;goto B585e60;
case 0x585e64:c.instructions+=3;goto B585e64;
case 0x585e65:c.instructions+=2;goto B585e65;
case 0x585e67:c.instructions+=1;goto B585e67;
case 0x585e6c:goto L585e6c;
case 0x585e6f:goto L585e6f;
case 0x585e70:c.instructions+=2;goto B585e70;
case 0x585e76:c.instructions+=1;goto B585e76;
case 0x585e80:goto L585e80;
case 0x585e83:c.instructions+=6;goto B585e83;
case 0x585e84:c.instructions+=5;goto B585e84;
case 0x585e85:c.instructions+=4;goto B585e85;
case 0x585e86:c.instructions+=3;goto B585e86;
case 0x585e87:c.instructions+=2;goto B585e87;
case 0x585e8c:c.instructions+=1;goto B585e8c;
case 0x585e91:goto L585e91;
case 0x585e93:c.instructions+=3;goto B585e93;
case 0x585e96:c.instructions+=2;goto B585e96;
case 0x585e98:c.instructions+=1;goto B585e98;
case 0x585e9a:goto L585e9a;
case 0x585e9d:c.instructions+=5;goto B585e9d;
case 0x585ea3:c.instructions+=4;goto B585ea3;
case 0x585ea9:c.instructions+=3;goto B585ea9;
case 0x585eb0:c.instructions+=2;goto B585eb0;
case 0x585eb2:c.instructions+=1;goto B585eb2;
case 0x585eb4:goto L585eb4;
case 0x585eb6:goto L585eb6;
case 0x585eba:c.instructions+=6;goto B585eba;
case 0x585ebc:c.instructions+=5;goto B585ebc;
case 0x585ec0:c.instructions+=4;goto B585ec0;
case 0x585ec1:c.instructions+=3;goto B585ec1;
case 0x585ec3:c.instructions+=2;goto B585ec3;
case 0x585ec7:c.instructions+=1;goto B585ec7;
case 0x585ecc:goto L585ecc;
case 0x585ed0:c.instructions+=7;goto B585ed0;
case 0x585ed2:c.instructions+=6;goto B585ed2;
case 0x585ed9:c.instructions+=5;goto B585ed9;
case 0x585edc:c.instructions+=4;goto B585edc;
case 0x585edd:c.instructions+=3;goto B585edd;
case 0x585edf:c.instructions+=2;goto B585edf;
case 0x585ee6:c.instructions+=1;goto B585ee6;
case 0x585eeb:goto L585eeb;
case 0x585eef:c.instructions+=7;goto B585eef;
case 0x585ef1:c.instructions+=6;goto B585ef1;
case 0x585ef8:c.instructions+=5;goto B585ef8;
case 0x585ef9:c.instructions+=4;goto B585ef9;
case 0x585efb:c.instructions+=3;goto B585efb;
case 0x585efe:c.instructions+=2;goto B585efe;
case 0x585f05:c.instructions+=1;goto B585f05;
case 0x585f0a:goto L585f0a;
case 0x585f0f:c.instructions+=4;goto B585f0f;
case 0x585f11:c.instructions+=3;goto B585f11;
case 0x585f15:c.instructions+=2;goto B585f15;
case 0x585f1a:c.instructions+=1;goto B585f1a;
case 0x585f1e:goto L585f1e;
case 0x585f20:goto L585f20;
case 0x585f22:c.instructions+=10;goto B585f22;
case 0x585f26:c.instructions+=9;goto B585f26;
case 0x585f2c:c.instructions+=8;goto B585f2c;
case 0x585f2d:c.instructions+=7;goto B585f2d;
case 0x585f33:c.instructions+=6;goto B585f33;
case 0x585f35:c.instructions+=5;goto B585f35;
case 0x585f39:c.instructions+=4;goto B585f39;
case 0x585f3d:c.instructions+=3;goto B585f3d;
case 0x585f43:c.instructions+=2;goto B585f43;
case 0x585f47:c.instructions+=1;goto B585f47;
case 0x585f4c:goto L585f4c;
case 0x585f50:c.instructions+=5;goto B585f50;
case 0x585f54:c.instructions+=4;goto B585f54;
case 0x585f58:c.instructions+=3;goto B585f58;
case 0x585f5a:c.instructions+=2;goto B585f5a;
case 0x585f5d:c.instructions+=1;goto B585f5d;
case 0x585f5f:goto L585f5f;
case 0x585f65:goto L585f65;
case 0x585f6a:goto L585f6a;
case 0x585f6c:c.instructions+=2;goto B585f6c;
case 0x585f6e:c.instructions+=1;goto B585f6e;
case 0x585f70:goto L585f70;
case 0x585f71:c.instructions+=4;goto B585f71;
case 0x585f75:c.instructions+=3;goto B585f75;
case 0x585f76:c.instructions+=2;goto B585f76;
case 0x585f78:c.instructions+=1;goto B585f78;
case 0x585f7d:goto L585f7d;
case 0x585f7e:c.instructions+=4;goto B585f7e;
case 0x585f82:c.instructions+=3;goto B585f82;
case 0x585f83:c.instructions+=2;goto B585f83;
case 0x585f86:c.instructions+=1;goto B585f86;
case 0x585f8b:goto L585f8b;
case 0x585f91:c.instructions+=3;goto B585f91;
case 0x585f97:c.instructions+=2;goto B585f97;
case 0x585f9a:c.instructions+=1;goto B585f9a;
case 0x585f9c:goto L585f9c;
case 0x585f9d:c.instructions+=5;goto B585f9d;
case 0x585fa4:c.instructions+=4;goto B585fa4;
case 0x585fa5:c.instructions+=3;goto B585fa5;
case 0x585fa7:c.instructions+=2;goto B585fa7;
case 0x585fae:c.instructions+=1;goto B585fae;
case 0x585fb3:goto L585fb3;
case 0x585fb8:c.instructions+=3;goto B585fb8;
case 0x585fb9:c.instructions+=2;goto B585fb9;
case 0x585fba:c.instructions+=1;goto B585fba;
case 0x585fbc:goto L585fbc;
case 0x585fbe:c.instructions+=1;goto B585fbe;
case 0x585fc0:goto L585fc0;
case 0x585fc1:c.instructions+=5;goto B585fc1;
case 0x585fc8:c.instructions+=4;goto B585fc8;
case 0x585fc9:c.instructions+=3;goto B585fc9;
case 0x585fcb:c.instructions+=2;goto B585fcb;
case 0x585fd2:c.instructions+=1;goto B585fd2;
case 0x585fd7:goto L585fd7;
case 0x585fdb:c.instructions+=2;goto B585fdb;
case 0x585fdc:c.instructions+=1;goto B585fdc;
case 0x585fdd:goto L585fdd;
case 0x585fe0:c.instructions+=1;goto B585fe0;
case 0x585fe5:goto L585fe5;
case 0x585fec:c.instructions+=8;goto B585fec;
case 0x585fef:c.instructions+=7;goto B585fef;
case 0x585ff1:c.instructions+=6;goto B585ff1;
case 0x585ff4:c.instructions+=5;goto B585ff4;
case 0x585ff7:c.instructions+=4;goto B585ff7;
case 0x585ff9:c.instructions+=3;goto B585ff9;
case 0x585ffc:c.instructions+=2;goto B585ffc;
case 0x585ffe:c.instructions+=1;goto B585ffe;
default:missing_instruction(c.pc);}
B585004:L585004:{c.instructions+=5;NFSU2_TR(0x585004);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585007:{NFSU2_TR(0x585007);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58500b:{NFSU2_TR(0x58500b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58500c:{NFSU2_TR(0x58500c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58500e:{NFSU2_TR(0x58500e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585013ull));
TAIL_STATIC(0x50cee0u,50c);
}
B585013:L585013:{c.instructions+=3;NFSU2_TR(0x585013);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585015:{NFSU2_TR(0x585015);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58501a:{NFSU2_TR(0x58501a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58501full));
TAIL_STATIC(0x55dde0u,55d);
}
B58501f:L58501f:{c.instructions+=7;NFSU2_TR(0x58501f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B585022:{NFSU2_TR(0x585022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B585023:{NFSU2_TR(0x585023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B585024:{NFSU2_TR(0x585024);
s4(0x83637c,u32(0x1ull));
}
B58502e:{NFSU2_TR(0x58502e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58502f:{NFSU2_TR(0x58502f);
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
B585032:{NFSU2_TR(0x585032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585040:L585040:{c.instructions+=7;NFSU2_TR(0x585040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585041:{NFSU2_TR(0x585041);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585045:{NFSU2_TR(0x585045);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585046:{NFSU2_TR(0x585046);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58504a:{NFSU2_TR(0x58504a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58504d:{NFSU2_TR(0x58504d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58504f:{NFSU2_TR(0x58504f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58507f;}}
}
B585051:L585051:{c.instructions+=3;NFSU2_TR(0x585051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B585053:{NFSU2_TR(0x585053);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B585055:{NFSU2_TR(0x585055);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B585058:L585058:{c.instructions+=2;NFSU2_TR(0x585058);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58505b:{NFSU2_TR(0x58505b);
if(r1(R+518)){{goto L585068;}}
}
B58505d:L58505d:{c.instructions+=4;NFSU2_TR(0x58505d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58505e:{NFSU2_TR(0x58505e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B585061:{NFSU2_TR(0x585061);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B585064:{NFSU2_TR(0x585064);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585058u);}goto L585058;}}
}
B585066:L585066:{c.instructions+=1;NFSU2_TR(0x585066);
{goto L58507f;}
}
B585068:L585068:{c.instructions+=8;NFSU2_TR(0x585068);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B58506b:{NFSU2_TR(0x58506b);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58506d:{NFSU2_TR(0x58506d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B585070:{NFSU2_TR(0x585070);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B585073:{NFSU2_TR(0x585073);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585074:{NFSU2_TR(0x585074);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B585076:{NFSU2_TR(0x585076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585077:{NFSU2_TR(0x585077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58507cull));
TAIL_STATIC(0x43dc00u,43d);
}
B58507c:L58507c:{c.instructions+=1;NFSU2_TR(0x58507c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58507f:L58507f:{c.instructions+=5;NFSU2_TR(0x58507f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B585083:{NFSU2_TR(0x585083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B585085:{NFSU2_TR(0x585085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585088:{NFSU2_TR(0x585088);
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
B58508a:{NFSU2_TR(0x58508a);
if(r1(R+518)){{goto L5850bb;}}
}
B58508c:L58508c:{c.instructions+=3;NFSU2_TR(0x58508c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58508f:{NFSU2_TR(0x58508f);
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
B585091:{NFSU2_TR(0x585091);
if(r1(R+518)){{goto L58509d;}}
}
B585093:L585093:{c.instructions+=4;NFSU2_TR(0x585093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585096:{NFSU2_TR(0x585096);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585097:{NFSU2_TR(0x585097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585098:{NFSU2_TR(0x585098);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58509aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B58509a:L58509a:{c.instructions+=1;NFSU2_TR(0x58509a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58509d:L58509d:{c.instructions+=3;NFSU2_TR(0x58509d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5850a0:{NFSU2_TR(0x5850a0);
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
B5850a2:{NFSU2_TR(0x5850a2);
if(r1(R+518)){{goto L5850b4;}}
}
B5850a4:L5850a4:{c.instructions+=2;NFSU2_TR(0x5850a4);
__builtin_memmove((R+4),(R+28),4);
}
B5850a6:{NFSU2_TR(0x5850a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5850abull));
TAIL_STATIC(0x584140u,584);
}
B5850ab:L5850ab:{c.instructions+=2;NFSU2_TR(0x5850ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850ac:{NFSU2_TR(0x5850ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5850b1ull));
TAIL_STATIC(0x575630u,575);
}
B5850b1:L5850b1:{c.instructions+=1;NFSU2_TR(0x5850b1);
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
B5850b4:L5850b4:{c.instructions+=1;NFSU2_TR(0x5850b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5850bb:L5850bb:{c.instructions+=3;NFSU2_TR(0x5850bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5850bc:{NFSU2_TR(0x5850bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5850bd:{NFSU2_TR(0x5850bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5850c0:L5850c0:{c.instructions+=7;NFSU2_TR(0x5850c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850c1:{NFSU2_TR(0x5850c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5850c5:{NFSU2_TR(0x5850c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5850c8:{NFSU2_TR(0x5850c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5850ca:{NFSU2_TR(0x5850ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850cb:{NFSU2_TR(0x5850cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850cc:{NFSU2_TR(0x5850cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58515e;}}
}
B5850d2:L5850d2:{c.instructions+=6;NFSU2_TR(0x5850d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850d3:{NFSU2_TR(0x5850d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5850d7:{NFSU2_TR(0x5850d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850d8:{NFSU2_TR(0x5850d8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5850da:{NFSU2_TR(0x5850da);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5850dd:{NFSU2_TR(0x5850dd);
w4(R+24,u32(0x50ull));
}
B5850e2:L5850e2:{c.instructions+=5;NFSU2_TR(0x5850e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5850e4:{NFSU2_TR(0x5850e4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B5850e6:{NFSU2_TR(0x5850e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850e7:{NFSU2_TR(0x5850e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5850e8:{NFSU2_TR(0x5850e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5850edull));
TAIL_STATIC(0x43dc30u,43d);
}
B5850ed:L5850ed:{c.instructions+=3;NFSU2_TR(0x5850ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5850f0:{NFSU2_TR(0x5850f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5850f2:{NFSU2_TR(0x5850f2);
if(r1(R+518)){{goto L585102;}}
}
B5850f4:L5850f4:{c.instructions+=4;NFSU2_TR(0x5850f4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5850f7:{NFSU2_TR(0x5850f7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5850f8:{NFSU2_TR(0x5850f8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x90ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5850fe:{NFSU2_TR(0x5850fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5850e2u);}goto L5850e2;}}
}
B585100:L585100:{c.instructions+=1;NFSU2_TR(0x585100);
{goto L58510e;}
}
B585102:L585102:{c.instructions+=4;NFSU2_TR(0x585102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B585104:{NFSU2_TR(0x585104);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5ull))));
}
B585107:{NFSU2_TR(0x585107);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B58510a:{NFSU2_TR(0x58510a);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B58510e:L58510e:{c.instructions+=4;NFSU2_TR(0x58510e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B585110:{NFSU2_TR(0x585110);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B585118:{NFSU2_TR(0x585118);
w4(R+20,u32(0x80ull));
}
B58511d:{NFSU2_TR(0x58511d);
w4(R+28,u32(0x50ull));
}
B585122:L585122:{c.instructions+=6;NFSU2_TR(0x585122);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585126:{NFSU2_TR(0x585126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B585128:{NFSU2_TR(0x585128);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B58512b:{NFSU2_TR(0x58512b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B58512e:{NFSU2_TR(0x58512e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B585131:{NFSU2_TR(0x585131);
if(r1(R+518)){{goto L585139;}}
}
B585133:L585133:{c.instructions+=3;NFSU2_TR(0x585133);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B585134:{NFSU2_TR(0x585134);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B585137:{NFSU2_TR(0x585137);
{goto L585156;}
}
B585139:L585139:{c.instructions+=2;NFSU2_TR(0x585139);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B58513c:{NFSU2_TR(0x58513c);
if(r1(R+518)){{goto L58514f;}}
}
B58513e:L58513e:{c.instructions+=3;NFSU2_TR(0x58513e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58513f:{NFSU2_TR(0x58513f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585140:{NFSU2_TR(0x585140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585145ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B585145:L585145:{c.instructions+=4;NFSU2_TR(0x585145);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B585148:{NFSU2_TR(0x585148);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B585149:{NFSU2_TR(0x585149);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B58514c:{NFSU2_TR(0x58514c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B58514f:L58514f:{c.instructions+=2;NFSU2_TR(0x58514f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B585153:{NFSU2_TR(0x585153);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x10ull))));
}
B585156:L585156:{c.instructions+=2;NFSU2_TR(0x585156);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B58515a:{NFSU2_TR(0x58515a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585122u);}goto L585122;}}
}
B58515c:L58515c:{c.instructions+=2;NFSU2_TR(0x58515c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58515d:{NFSU2_TR(0x58515d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58515e:L58515e:{c.instructions+=6;NFSU2_TR(0x58515e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585162:{NFSU2_TR(0x585162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B585164:{NFSU2_TR(0x585164);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B585168:{NFSU2_TR(0x585168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58516b:{NFSU2_TR(0x58516b);
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
B58516d:{NFSU2_TR(0x58516d);
if(r1(R+518)){{goto L5851a2;}}
}
B58516f:L58516f:{c.instructions+=3;NFSU2_TR(0x58516f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585172:{NFSU2_TR(0x585172);
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
B585174:{NFSU2_TR(0x585174);
if(r1(R+518)){{goto L585184;}}
}
B585176:L585176:{c.instructions+=5;NFSU2_TR(0x585176);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585179:{NFSU2_TR(0x585179);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58517d:{NFSU2_TR(0x58517d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58517e:{NFSU2_TR(0x58517e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58517f:{NFSU2_TR(0x58517f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585181ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B585181:L585181:{c.instructions+=1;NFSU2_TR(0x585181);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B585184:L585184:{c.instructions+=3;NFSU2_TR(0x585184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B585187:{NFSU2_TR(0x585187);
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
B585189:{NFSU2_TR(0x585189);
if(r1(R+518)){{goto L58519b;}}
}
B58518b:L58518b:{c.instructions+=2;NFSU2_TR(0x58518b);
__builtin_memmove((R+4),(R+28),4);
}
B58518d:{NFSU2_TR(0x58518d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585192ull));
TAIL_STATIC(0x584140u,584);
}
B585192:L585192:{c.instructions+=2;NFSU2_TR(0x585192);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585193:{NFSU2_TR(0x585193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585198ull));
TAIL_STATIC(0x575630u,575);
}
B585198:L585198:{c.instructions+=1;NFSU2_TR(0x585198);
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
B58519b:L58519b:{c.instructions+=1;NFSU2_TR(0x58519b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5851a2:L5851a2:{c.instructions+=4;NFSU2_TR(0x5851a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5851a3:{NFSU2_TR(0x5851a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5851a4:{NFSU2_TR(0x5851a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5851a5:{NFSU2_TR(0x5851a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5851b0:L5851b0:{c.instructions+=39;NFSU2_TR(0x5851b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5851b6:{NFSU2_TR(0x5851b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5851bc:{NFSU2_TR(0x5851bc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5851be:{NFSU2_TR(0x5851be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5851c4:{NFSU2_TR(0x5851c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5851c5:{NFSU2_TR(0x5851c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5851cb:{NFSU2_TR(0x5851cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5851ce:{NFSU2_TR(0x5851ce);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5851d0:{NFSU2_TR(0x5851d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5851d3:{NFSU2_TR(0x5851d3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5851d5:{NFSU2_TR(0x5851d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5851d8:{NFSU2_TR(0x5851d8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5851da:{NFSU2_TR(0x5851da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5851dd:{NFSU2_TR(0x5851dd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5851df:{NFSU2_TR(0x5851df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5851e2:{NFSU2_TR(0x5851e2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5851e4:{NFSU2_TR(0x5851e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5851e7:{NFSU2_TR(0x5851e7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5851e9:{NFSU2_TR(0x5851e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5851ec:{NFSU2_TR(0x5851ec);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5851ee:{NFSU2_TR(0x5851ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5851f1:{NFSU2_TR(0x5851f1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5851f3:{NFSU2_TR(0x5851f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5851f9:{NFSU2_TR(0x5851f9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5851fb:{NFSU2_TR(0x5851fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585201:{NFSU2_TR(0x585201);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B585203:{NFSU2_TR(0x585203);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585209:{NFSU2_TR(0x585209);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58520f:{NFSU2_TR(0x58520f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585212:{NFSU2_TR(0x585212);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585215:{NFSU2_TR(0x585215);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585218:{NFSU2_TR(0x585218);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58521b:{NFSU2_TR(0x58521b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58521e:{NFSU2_TR(0x58521e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585221:{NFSU2_TR(0x585221);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585224:{NFSU2_TR(0x585224);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585227:{NFSU2_TR(0x585227);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585229:{NFSU2_TR(0x585229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58522a:{NFSU2_TR(0x58522a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585230:L585230:{c.instructions+=2;NFSU2_TR(0x585230);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585231:{NFSU2_TR(0x585231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585236ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5851b0u);}goto L5851b0;}
}
B585236:L585236:{c.instructions+=2;NFSU2_TR(0x585236);
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
B585238:{NFSU2_TR(0x585238);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L585242;}}
}
B58523a:L58523a:{c.instructions+=3;NFSU2_TR(0x58523a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B585240:{NFSU2_TR(0x585240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B585241:{NFSU2_TR(0x585241);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585242:L585242:{c.instructions+=16;NFSU2_TR(0x585242);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585248:{NFSU2_TR(0x585248);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58524e:{NFSU2_TR(0x58524e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585254:{NFSU2_TR(0x585254);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58525a:{NFSU2_TR(0x58525a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58525d:{NFSU2_TR(0x58525d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585260:{NFSU2_TR(0x585260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585263:{NFSU2_TR(0x585263);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585266:{NFSU2_TR(0x585266);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585269:{NFSU2_TR(0x585269);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58526c:{NFSU2_TR(0x58526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58526f:{NFSU2_TR(0x58526f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585272:{NFSU2_TR(0x585272);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B585274:{NFSU2_TR(0x585274);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B585278:{NFSU2_TR(0x585278);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58527c:{NFSU2_TR(0x58527c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L585284;}}
}
B58527e:L58527e:{c.instructions+=1;NFSU2_TR(0x58527e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585284:L585284:{c.instructions+=4;NFSU2_TR(0x585284);
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
B585286:{NFSU2_TR(0x585286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B58528a:{NFSU2_TR(0x58528a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58528e:{NFSU2_TR(0x58528e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L585296;}}
}
B585290:L585290:{c.instructions+=1;NFSU2_TR(0x585290);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585296:L585296:{c.instructions+=4;NFSU2_TR(0x585296);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B585298:{NFSU2_TR(0x585298);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58529e:{NFSU2_TR(0x58529e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58529f:{NFSU2_TR(0x58529f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5852a0:L5852a0:{c.instructions+=23;NFSU2_TR(0x5852a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5852a1:{NFSU2_TR(0x5852a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5852a7:{NFSU2_TR(0x5852a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5852ad:{NFSU2_TR(0x5852ad);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5852af:{NFSU2_TR(0x5852af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5852b2:{NFSU2_TR(0x5852b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5852b3:{NFSU2_TR(0x5852b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5852b6:{NFSU2_TR(0x5852b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5852b9:{NFSU2_TR(0x5852b9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5852bb:{NFSU2_TR(0x5852bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5852be:{NFSU2_TR(0x5852be);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5852c0:{NFSU2_TR(0x5852c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5852c6:{NFSU2_TR(0x5852c6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5852c8:{NFSU2_TR(0x5852c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5852ce:{NFSU2_TR(0x5852ce);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5852d0:{NFSU2_TR(0x5852d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B5852d3:{NFSU2_TR(0x5852d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B5852d6:{NFSU2_TR(0x5852d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B5852d9:{NFSU2_TR(0x5852d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B5852dc:{NFSU2_TR(0x5852dc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5852de:{NFSU2_TR(0x5852de);
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
B5852e0:{NFSU2_TR(0x5852e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5852e1:{NFSU2_TR(0x5852e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5852eb;}}
}
B5852e3:L5852e3:{c.instructions+=3;NFSU2_TR(0x5852e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5852e9:{NFSU2_TR(0x5852e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5852ea:{NFSU2_TR(0x5852ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5852eb:L5852eb:{c.instructions+=5;NFSU2_TR(0x5852eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5852ee:{NFSU2_TR(0x5852ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5852f0:{NFSU2_TR(0x5852f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5852f4:{NFSU2_TR(0x5852f4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5852f8:{NFSU2_TR(0x5852f8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L585300;}}
}
B5852fa:L5852fa:{c.instructions+=1;NFSU2_TR(0x5852fa);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585300:L585300:{c.instructions+=4;NFSU2_TR(0x585300);
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
B585302:{NFSU2_TR(0x585302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B585306:{NFSU2_TR(0x585306);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58530a:{NFSU2_TR(0x58530a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L585312;}}
}
B58530c:L58530c:{c.instructions+=1;NFSU2_TR(0x58530c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585312:L585312:{c.instructions+=4;NFSU2_TR(0x585312);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B585314:{NFSU2_TR(0x585314);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58531a:{NFSU2_TR(0x58531a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58531b:{NFSU2_TR(0x58531b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585320:L585320:{c.instructions+=23;NFSU2_TR(0x585320);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585321:{NFSU2_TR(0x585321);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585327:{NFSU2_TR(0x585327);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58532d:{NFSU2_TR(0x58532d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B58532f:{NFSU2_TR(0x58532f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585332:{NFSU2_TR(0x585332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585333:{NFSU2_TR(0x585333);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B585336:{NFSU2_TR(0x585336);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585339:{NFSU2_TR(0x585339);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B58533b:{NFSU2_TR(0x58533b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58533e:{NFSU2_TR(0x58533e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B585340:{NFSU2_TR(0x585340);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585346:{NFSU2_TR(0x585346);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B585348:{NFSU2_TR(0x585348);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58534e:{NFSU2_TR(0x58534e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B585350:{NFSU2_TR(0x585350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585353:{NFSU2_TR(0x585353);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585356:{NFSU2_TR(0x585356);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B585359:{NFSU2_TR(0x585359);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B58535c:{NFSU2_TR(0x58535c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B58535e:{NFSU2_TR(0x58535e);
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
B585360:{NFSU2_TR(0x585360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585361:{NFSU2_TR(0x585361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58536b;}}
}
B585363:L585363:{c.instructions+=3;NFSU2_TR(0x585363);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B585369:{NFSU2_TR(0x585369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58536a:{NFSU2_TR(0x58536a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58536b:L58536b:{c.instructions+=5;NFSU2_TR(0x58536b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58536e:{NFSU2_TR(0x58536e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B585370:{NFSU2_TR(0x585370);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B585374:{NFSU2_TR(0x585374);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585378:{NFSU2_TR(0x585378);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L585380;}}
}
B58537a:L58537a:{c.instructions+=1;NFSU2_TR(0x58537a);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585380:L585380:{c.instructions+=4;NFSU2_TR(0x585380);
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
B585382:{NFSU2_TR(0x585382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B585386:{NFSU2_TR(0x585386);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58538a:{NFSU2_TR(0x58538a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L585392;}}
}
B58538c:L58538c:{c.instructions+=1;NFSU2_TR(0x58538c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585392:L585392:{c.instructions+=4;NFSU2_TR(0x585392);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B585394:{NFSU2_TR(0x585394);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58539a:{NFSU2_TR(0x58539a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58539b:{NFSU2_TR(0x58539b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5853a0:L5853a0:{c.instructions+=5;NFSU2_TR(0x5853a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5853a1:{NFSU2_TR(0x5853a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5853a4:{NFSU2_TR(0x5853a4);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5853a7:{NFSU2_TR(0x5853a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5853a9:{NFSU2_TR(0x5853a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5853b1;}}
}
B5853ab:L5853ab:{c.instructions+=1;NFSU2_TR(0x5853ab);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5853b1:L5853b1:{c.instructions+=4;NFSU2_TR(0x5853b1);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5853b7:{NFSU2_TR(0x5853b7);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5853bd:{NFSU2_TR(0x5853bd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5853c3:{NFSU2_TR(0x5853c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5853c8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5853c8:L5853c8:{c.instructions+=5;NFSU2_TR(0x5853c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5853ca:{NFSU2_TR(0x5853ca);
u8 U[4];
w4(U+0,u32(0x86a32cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5853cf:{NFSU2_TR(0x5853cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5853d3:{NFSU2_TR(0x5853d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5853d7:{NFSU2_TR(0x5853d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5853dcull));
TAIL_STATIC(0x577240u,577);
}
B5853dc:L5853dc:{c.instructions+=3;NFSU2_TR(0x5853dc);
w4(R+0,u32(0x86a32cull));
}
B5853e1:{NFSU2_TR(0x5853e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5853e2:{NFSU2_TR(0x5853e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5853f0:L5853f0:{c.instructions+=5;NFSU2_TR(0x5853f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5853f1:{NFSU2_TR(0x5853f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5853f4:{NFSU2_TR(0x5853f4);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5853f7:{NFSU2_TR(0x5853f7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5853f9:{NFSU2_TR(0x5853f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L585401;}}
}
B5853fb:L5853fb:{c.instructions+=1;NFSU2_TR(0x5853fb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585401:L585401:{c.instructions+=4;NFSU2_TR(0x585401);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585407:{NFSU2_TR(0x585407);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58540d:{NFSU2_TR(0x58540d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585413:{NFSU2_TR(0x585413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585418ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585418:L585418:{c.instructions+=5;NFSU2_TR(0x585418);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58541a:{NFSU2_TR(0x58541a);
u8 U[4];
w4(U+0,u32(0x86a34cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58541f:{NFSU2_TR(0x58541f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585423:{NFSU2_TR(0x585423);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585427:{NFSU2_TR(0x585427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58542cull));
TAIL_STATIC(0x577240u,577);
}
B58542c:L58542c:{c.instructions+=3;NFSU2_TR(0x58542c);
w4(R+0,u32(0x86a34cull));
}
B585431:{NFSU2_TR(0x585431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B585432:{NFSU2_TR(0x585432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585440:L585440:{c.instructions+=4;NFSU2_TR(0x585440);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585441:{NFSU2_TR(0x585441);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585442:{NFSU2_TR(0x585442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B585444:{NFSU2_TR(0x585444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585449ull));
TAIL_STATIC(0x502fd0u,502);
}
B585449:L585449:{c.instructions+=3;NFSU2_TR(0x585449);
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
B58544b:{NFSU2_TR(0x58544b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58544f:{NFSU2_TR(0x58544f);
if(r1(R+518)){{goto L5854b1;}}
}
B585451:L585451:{c.instructions+=5;NFSU2_TR(0x585451);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585452:{NFSU2_TR(0x585452);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585453:{NFSU2_TR(0x585453);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B585457:{NFSU2_TR(0x585457);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585458:{NFSU2_TR(0x585458);
{goto L585460;}
}
B585460:L585460:{c.instructions+=4;NFSU2_TR(0x585460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585466:{NFSU2_TR(0x585466);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B585468:{NFSU2_TR(0x585468);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58546a:{NFSU2_TR(0x58546a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L585491;}}
}
B58546c:L58546c:{c.instructions+=1;NFSU2_TR(0x58546c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B585472:L585472:{c.instructions+=4;NFSU2_TR(0x585472);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B585475:{NFSU2_TR(0x585475);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585476:{NFSU2_TR(0x585476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585477:{NFSU2_TR(0x585477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58547cull));
TAIL_STATIC(0x43dc30u,43d);
}
B58547c:L58547c:{c.instructions+=3;NFSU2_TR(0x58547c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58547f:{NFSU2_TR(0x58547f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585481:{NFSU2_TR(0x585481);
if(r1(R+518)){{goto L5854a6;}}
}
B585483:L585483:{c.instructions+=5;NFSU2_TR(0x585483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585489:{NFSU2_TR(0x585489);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B58548a:{NFSU2_TR(0x58548a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x64ull))));
}
B58548d:{NFSU2_TR(0x58548d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58548f:{NFSU2_TR(0x58548f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585472u);}goto L585472;}}
}
B585491:L585491:{c.instructions+=6;NFSU2_TR(0x585491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B585494:{NFSU2_TR(0x585494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B585496:{NFSU2_TR(0x585496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B585498:{NFSU2_TR(0x585498);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585499:{NFSU2_TR(0x585499);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58549c:{NFSU2_TR(0x58549c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5854a1ull));
TAIL_STATIC(0x575630u,575);
}
B5854a1:L5854a1:{c.instructions+=2;NFSU2_TR(0x5854a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5854a4:{NFSU2_TR(0x5854a4);
__builtin_memmove((R+24),(R+28),4);
}
B5854a6:L5854a6:{c.instructions+=3;NFSU2_TR(0x5854a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5854a8:{NFSU2_TR(0x5854a8);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5854ac:{NFSU2_TR(0x5854ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585460u);}goto L585460;}}
}
B5854ae:L5854ae:{c.instructions+=3;NFSU2_TR(0x5854ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5854af:{NFSU2_TR(0x5854af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5854b0:{NFSU2_TR(0x5854b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5854b1:L5854b1:{c.instructions+=3;NFSU2_TR(0x5854b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5854b2:{NFSU2_TR(0x5854b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5854b3:{NFSU2_TR(0x5854b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5854c0:L5854c0:{c.instructions+=12;NFSU2_TR(0x5854c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5854c1:{NFSU2_TR(0x5854c1);
__builtin_memmove((R+20),(R+16),4);
}
B5854c3:{NFSU2_TR(0x5854c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5854c6:{NFSU2_TR(0x5854c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x834ull))));
}
B5854cc:{NFSU2_TR(0x5854cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5854cd:{NFSU2_TR(0x5854cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5854ce:{NFSU2_TR(0x5854ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5854cf:{NFSU2_TR(0x5854cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5854d1:{NFSU2_TR(0x5854d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5854d3:{NFSU2_TR(0x5854d3);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5854d7:{NFSU2_TR(0x5854d7);
w4(R+4,u32(0x80ull));
}
B5854dc:{NFSU2_TR(0x5854dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5854e0:L5854e0:{c.instructions+=1;NFSU2_TR(0x5854e0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5854e2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5854e0u);}goto L5854e0;}
}
B5854e2:L5854e2:{c.instructions+=11;NFSU2_TR(0x5854e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5854e5:{NFSU2_TR(0x5854e5);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5854e7:{NFSU2_TR(0x5854e7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5854ec:{NFSU2_TR(0x5854ec);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5854ed:{NFSU2_TR(0x5854ed);
u8 U[4];
w4(U+0,u32(0x204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5854f2:{NFSU2_TR(0x5854f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5854f6:{NFSU2_TR(0x5854f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5854f7:{NFSU2_TR(0x5854f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x12cull))));
}
B5854fd:{NFSU2_TR(0x5854fd);
u8 U[4];
w4(U+0,u32(0x7a1314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585502:{NFSU2_TR(0x585502);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585503:{NFSU2_TR(0x585503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585508ull));
TAIL_STATIC(0x7414a0u,741);
}
B585508:L585508:{c.instructions+=3;NFSU2_TR(0x585508);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58550b:{NFSU2_TR(0x58550b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58550c:{NFSU2_TR(0x58550c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585511ull));
TAIL_STATIC(0x742360u,742);
}
B585511:L585511:{c.instructions+=3;NFSU2_TR(0x585511);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B585515:{NFSU2_TR(0x585515);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585516:{NFSU2_TR(0x585516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58551bull));
TAIL_STATIC(0x43dbb0u,43d);
}
B58551b:L58551b:{c.instructions+=3;NFSU2_TR(0x58551b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B58551e:{NFSU2_TR(0x58551e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B585521:{NFSU2_TR(0x585521);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5855b6;}}
}
B585527:L585527:{c.instructions+=16;NFSU2_TR(0x585527);
__builtin_memmove((R+4),gp(0x7a1312),1);
}
B58552d:{NFSU2_TR(0x58552d);
__builtin_memmove((R+0),gp(0x7a1310),2);
}
B585533:{NFSU2_TR(0x585533);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B585538:{NFSU2_TR(0x585538);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58553c:{NFSU2_TR(0x58553c);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B585541:{NFSU2_TR(0x585541);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B585545:{NFSU2_TR(0x585545);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585547:{NFSU2_TR(0x585547);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58554b:{NFSU2_TR(0x58554b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58554d:{NFSU2_TR(0x58554d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58554e:{NFSU2_TR(0x58554e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B585552:{NFSU2_TR(0x585552);
u8 U[6];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B585557:{NFSU2_TR(0x585557);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585558:{NFSU2_TR(0x585558);
u8 U[6];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B58555d:{NFSU2_TR(0x58555d);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B585561:{NFSU2_TR(0x585561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585566ull));
TAIL_STATIC(0x43dc00u,43d);
}
B585566:L585566:{c.instructions+=6;NFSU2_TR(0x585566);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585568:{NFSU2_TR(0x585568);
u8 U[4];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58556c:{NFSU2_TR(0x58556c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58556d:{NFSU2_TR(0x58556d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585571:{NFSU2_TR(0x585571);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585572:{NFSU2_TR(0x585572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585577ull));
TAIL_STATIC(0x43dc00u,43d);
}
B585577:L585577:{c.instructions+=3;NFSU2_TR(0x585577);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58557b:{NFSU2_TR(0x58557b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58557c:{NFSU2_TR(0x58557c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585581ull));
TAIL_STATIC(0x43de50u,43d);
}
B585581:L585581:{c.instructions+=4;NFSU2_TR(0x585581);
__builtin_memmove((R+28),(R+0),4);
}
B585583:{NFSU2_TR(0x585583);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585587:{NFSU2_TR(0x585587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585588:{NFSU2_TR(0x585588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58558dull));
TAIL_STATIC(0x43de50u,43d);
}
B58558d:L58558d:{c.instructions+=4;NFSU2_TR(0x58558d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B585590:{NFSU2_TR(0x585590);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585593:{NFSU2_TR(0x585593);
__builtin_memmove((R+24),(R+0),4);
}
B585595:{NFSU2_TR(0x585595);
if(r1(R+518)){{goto L5855a2;}}
}
B585597:L585597:{c.instructions+=7;NFSU2_TR(0x585597);
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
B585599:{NFSU2_TR(0x585599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58559a:{NFSU2_TR(0x58559a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58559b:{NFSU2_TR(0x58559b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58559c:{NFSU2_TR(0x58559c);
__builtin_memmove((R+16),(R+20),4);
}
B58559e:{NFSU2_TR(0x58559e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58559f:{NFSU2_TR(0x58559f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5855a2:L5855a2:{c.instructions+=3;NFSU2_TR(0x5855a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5855a6:{NFSU2_TR(0x5855a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5855a7:{NFSU2_TR(0x5855a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5855acull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5855ac:L5855ac:{c.instructions+=4;NFSU2_TR(0x5855ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5855af:{NFSU2_TR(0x5855af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5855b2:{NFSU2_TR(0x5855b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5855b4:{NFSU2_TR(0x5855b4);
if(r1(R+518)){{goto L5855c2;}}
}
B5855b6:L5855b6:{c.instructions+=7;NFSU2_TR(0x5855b6);
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
B5855b9:{NFSU2_TR(0x5855b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5855ba:{NFSU2_TR(0x5855ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5855bb:{NFSU2_TR(0x5855bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5855bc:{NFSU2_TR(0x5855bc);
__builtin_memmove((R+16),(R+20),4);
}
B5855be:{NFSU2_TR(0x5855be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5855bf:{NFSU2_TR(0x5855bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5855c2:L5855c2:{c.instructions+=7;NFSU2_TR(0x5855c2);
u8 U[4];
w4(U+0,u32(0x204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5855c7:{NFSU2_TR(0x5855c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x63cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5855ce:{NFSU2_TR(0x5855ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5855cf:{NFSU2_TR(0x5855cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2dull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5855d3:{NFSU2_TR(0x5855d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5855d4:{NFSU2_TR(0x5855d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5855d5:{NFSU2_TR(0x5855d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5855daull));
TAIL_STATIC(0x576260u,576);
}
B5855da:L5855da:{c.instructions+=10;NFSU2_TR(0x5855da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5855dd:{NFSU2_TR(0x5855dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5855de:{NFSU2_TR(0x5855de);
u8 U[4];
w4(U+0,u32(u32(u32(0x63cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5855e5:{NFSU2_TR(0x5855e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5855e6:{NFSU2_TR(0x5855e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5855ed:{NFSU2_TR(0x5855ed);
u8 U[5];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5855f4:{NFSU2_TR(0x5855f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x630ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5855fb:{NFSU2_TR(0x5855fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x634ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585602:{NFSU2_TR(0x585602);
u8 U[5];
w4(U+0,u32(u32(u32(0x638ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58560a:{NFSU2_TR(0x58560a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58560full));
TAIL_STATIC(0x5840c0u,584);
}
B58560f:L58560f:{c.instructions+=7;NFSU2_TR(0x58560f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585612:{NFSU2_TR(0x585612);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585614:{NFSU2_TR(0x585614);
u8 U[4];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58561b:{NFSU2_TR(0x58561b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58561c:{NFSU2_TR(0x58561c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58561d:{NFSU2_TR(0x58561d);
w4(R+4,u32(0x89cf48ull));
}
B585622:{NFSU2_TR(0x585622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585627ull));
TAIL_STATIC(0x5f04d0u,5f0);
}
B585627:L585627:{c.instructions+=7;NFSU2_TR(0x585627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B585628:{NFSU2_TR(0x585628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585629:{NFSU2_TR(0x585629);
w4(R+0,u32(0x1ull));
}
B58562e:{NFSU2_TR(0x58562e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58562f:{NFSU2_TR(0x58562f);
__builtin_memmove((R+16),(R+20),4);
}
B585631:{NFSU2_TR(0x585631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B585632:{NFSU2_TR(0x585632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585640:L585640:{c.instructions+=7;NFSU2_TR(0x585640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B585643:{NFSU2_TR(0x585643);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585644:{NFSU2_TR(0x585644);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B585646:{NFSU2_TR(0x585646);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585647:{NFSU2_TR(0x585647);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585648:{NFSU2_TR(0x585648);
u8 U[4];
w4(U+0,u32(0x6f70656eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58564d:{NFSU2_TR(0x58564d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585652ull));
TAIL_STATIC(0x742b60u,742);
}
B585652:L585652:{c.instructions+=3;NFSU2_TR(0x585652);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B585655:{NFSU2_TR(0x585655);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585658:{NFSU2_TR(0x585658);
if(r1(R+518)){{goto L585719;}}
}
B58565e:L58565e:{c.instructions+=3;NFSU2_TR(0x58565e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585663:{NFSU2_TR(0x585663);
s4(0x7fbe54,u32(0x5832e0ull));
}
B58566d:{NFSU2_TR(0x58566d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585672ull));
TAIL_STATIC(0x742b20u,742);
}
B585672:L585672:{c.instructions+=16;NFSU2_TR(0x585672);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585674:{NFSU2_TR(0x585674);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585678:{NFSU2_TR(0x585678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585679:{NFSU2_TR(0x585679);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58567d:{NFSU2_TR(0x58567d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585681:{NFSU2_TR(0x585681);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585683:{NFSU2_TR(0x585683);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585684:{NFSU2_TR(0x585684);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B58568b:{NFSU2_TR(0x58568b);
u8 U[6];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B585690:{NFSU2_TR(0x585690);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585694:{NFSU2_TR(0x585694);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585698:{NFSU2_TR(0x585698);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58569d:{NFSU2_TR(0x58569d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5856a2:{NFSU2_TR(0x5856a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5856a7:{NFSU2_TR(0x5856a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x18ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5856ac:{NFSU2_TR(0x5856ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5856b1ull));
TAIL_STATIC(0x74ab20u,74a);
}
B5856b1:L5856b1:{c.instructions+=3;NFSU2_TR(0x5856b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5856b4:{NFSU2_TR(0x5856b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5856b6:{NFSU2_TR(0x5856b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5856e6;}}
}
B5856b8:L5856b8:{c.instructions+=4;NFSU2_TR(0x5856b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5856b9:{NFSU2_TR(0x5856b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5856ba:{NFSU2_TR(0x5856ba);
u8 U[4];
w4(U+0,u32(0x6f70656eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5856bf:{NFSU2_TR(0x5856bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5856c4ull));
TAIL_STATIC(0x742b60u,742);
}
B5856c4:L5856c4:{c.instructions+=3;NFSU2_TR(0x5856c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5856c7:{NFSU2_TR(0x5856c7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5856ca:{NFSU2_TR(0x5856ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5856d5;}}
}
B5856cc:L5856cc:{c.instructions+=2;NFSU2_TR(0x5856cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5856cd:{NFSU2_TR(0x5856cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5856d2ull));
TAIL_STATIC(0x742c60u,742);
}
B5856d2:L5856d2:{c.instructions+=1;NFSU2_TR(0x5856d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5856d5:L5856d5:{c.instructions+=5;NFSU2_TR(0x5856d5);
s4(0x7fbe54,u32(0x5832d0ull));
}
B5856df:{NFSU2_TR(0x5856df);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5856e1:{NFSU2_TR(0x5856e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5856e2:{NFSU2_TR(0x5856e2);
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
B5856e5:{NFSU2_TR(0x5856e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5856e6:L5856e6:{c.instructions+=12;NFSU2_TR(0x5856e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5856eb:{NFSU2_TR(0x5856eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5856f0:{NFSU2_TR(0x5856f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5856f5:{NFSU2_TR(0x5856f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5856f8:{NFSU2_TR(0x5856f8);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B5856fa:{NFSU2_TR(0x5856fa);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5856ff:{NFSU2_TR(0x5856ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B585702:{NFSU2_TR(0x585702);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B585704:{NFSU2_TR(0x585704);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B585707:{NFSU2_TR(0x585707);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B585709:{NFSU2_TR(0x585709);
__builtin_memmove(gp(0x866770),(R+8),4);
}
B58570f:{NFSU2_TR(0x58570f);
s4(0x7fbe54,u32(0x5832d0ull));
}
B585719:L585719:{c.instructions+=4;NFSU2_TR(0x585719);
w1(R+0,u8(0x1ull));
}
B58571b:{NFSU2_TR(0x58571b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58571c:{NFSU2_TR(0x58571c);
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
B58571f:{NFSU2_TR(0x58571f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585720:L585720:{c.instructions+=3;NFSU2_TR(0x585720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585721:{NFSU2_TR(0x585721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585722:{NFSU2_TR(0x585722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585727ull));
TAIL_STATIC(0x583490u,583);
}
B585727:L585727:{c.instructions+=10;NFSU2_TR(0x585727);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B585729:{NFSU2_TR(0x585729);
__builtin_memmove(gp(0x866764),(R+28),4);
}
B58572f:{NFSU2_TR(0x58572f);
__builtin_memmove(gp(0x866740),(R+28),4);
}
B585735:{NFSU2_TR(0x585735);
__builtin_memmove(gp(0x866744),(R+28),4);
}
B58573b:{NFSU2_TR(0x58573b);
__builtin_memmove(gp(0x866754),(R+28),4);
}
B585741:{NFSU2_TR(0x585741);
__builtin_memmove(gp(0x866760),(R+28),4);
}
B585747:{NFSU2_TR(0x585747);
__builtin_memmove(gp(0x86664c),(R+28),4);
}
B58574d:{NFSU2_TR(0x58574d);
__builtin_memmove(gp(0x866748),(R+28),4);
}
B585753:{NFSU2_TR(0x585753);
w4(R+24,u32(0x8691d8ull));
}
B585758:{NFSU2_TR(0x585758);
{goto L585760;}
}
B585760:L585760:{c.instructions+=6;NFSU2_TR(0x585760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585763:{NFSU2_TR(0x585763);
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
B585765:{NFSU2_TR(0x585765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58576c:{NFSU2_TR(0x58576c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58576f:{NFSU2_TR(0x58576f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585772:{NFSU2_TR(0x585772);
if(r1(R+518)){{goto L58577d;}}
}
B585774:L585774:{c.instructions+=2;NFSU2_TR(0x585774);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585775:{NFSU2_TR(0x585775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58577aull));
TAIL_STATIC(0x748650u,748);
}
B58577a:L58577a:{c.instructions+=1;NFSU2_TR(0x58577a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58577d:L58577d:{c.instructions+=3;NFSU2_TR(0x58577d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58577f:{NFSU2_TR(0x58577f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585781:{NFSU2_TR(0x585781);
if(r1(R+518)){{goto L58578c;}}
}
B585783:L585783:{c.instructions+=2;NFSU2_TR(0x585783);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585784:{NFSU2_TR(0x585784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585789ull));
TAIL_STATIC(0x743b30u,743);
}
B585789:L585789:{c.instructions+=1;NFSU2_TR(0x585789);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58578c:L58578c:{c.instructions+=5;NFSU2_TR(0x58578c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58578e:{NFSU2_TR(0x58578e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585791:{NFSU2_TR(0x585791);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B585794:{NFSU2_TR(0x585794);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x86923cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86923cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86923cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58579a:{NFSU2_TR(0x58579a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585760u);}goto L585760;}}
}
B58579c:L58579c:{c.instructions+=3;NFSU2_TR(0x58579c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58579d:{NFSU2_TR(0x58579d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58579e:{NFSU2_TR(0x58579e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5857a0:L5857a0:{c.instructions+=2;NFSU2_TR(0x5857a0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5857a2:{NFSU2_TR(0x5857a2);
w4(R+0,u32(0x8691d0ull));
}
B5857a7:L5857a7:{c.instructions+=2;NFSU2_TR(0x5857a7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5857aa:{NFSU2_TR(0x5857aa);
if(r1(R+518)){{goto L5857b8;}}
}
B5857ac:L5857ac:{c.instructions+=4;NFSU2_TR(0x5857ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B5857af:{NFSU2_TR(0x5857af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5857b0:{NFSU2_TR(0x5857b0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x869234ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869234ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x869234ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5857b5:{NFSU2_TR(0x5857b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5857a7u);}goto L5857a7;}}
}
B5857b7:L5857b7:{c.instructions+=1;NFSU2_TR(0x5857b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5857b8:L5857b8:{c.instructions+=5;NFSU2_TR(0x5857b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5857b9:{NFSU2_TR(0x5857b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5857bc:{NFSU2_TR(0x5857bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8691d0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5857c3:{NFSU2_TR(0x5857c3);
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
B5857c5:{NFSU2_TR(0x5857c5);
if(r1(R+518)){{goto L58580a;}}
}
B5857c7:L5857c7:{c.instructions+=6;NFSU2_TR(0x5857c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5857cb:{NFSU2_TR(0x5857cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5857cf:{NFSU2_TR(0x5857cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5857d1:{NFSU2_TR(0x5857d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5857d2:{NFSU2_TR(0x5857d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5857d3:{NFSU2_TR(0x5857d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5857d8ull));
TAIL_STATIC(0x5834e0u,583);
}
B5857d8:L5857d8:{c.instructions+=9;NFSU2_TR(0x5857d8);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5857de:{NFSU2_TR(0x5857de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5857e1:{NFSU2_TR(0x5857e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5857e4:{NFSU2_TR(0x5857e4);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5857ea:{NFSU2_TR(0x5857ea);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5857f0:{NFSU2_TR(0x5857f0);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5857f6:{NFSU2_TR(0x5857f6);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5857fc:{NFSU2_TR(0x5857fc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585802:{NFSU2_TR(0x585802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585807ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585807:L585807:{c.instructions+=1;NFSU2_TR(0x585807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58580a:L58580a:{c.instructions+=2;NFSU2_TR(0x58580a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58580b:{NFSU2_TR(0x58580b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585810:L585810:{c.instructions+=6;NFSU2_TR(0x585810);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585816:{NFSU2_TR(0x585816);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585817:{NFSU2_TR(0x585817);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58581b:{NFSU2_TR(0x58581b);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585821:{NFSU2_TR(0x585821);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585822:{NFSU2_TR(0x585822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585827ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585827:L585827:{c.instructions+=3;NFSU2_TR(0x585827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585828:{NFSU2_TR(0x585828);
w4(R+4,u32(0x7fbe98ull));
}
B58582d:{NFSU2_TR(0x58582d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585832ull));
TAIL_STATIC(0x583300u,583);
}
B585832:L585832:{c.instructions+=4;NFSU2_TR(0x585832);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585836:{NFSU2_TR(0x585836);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B585838:{NFSU2_TR(0x585838);
w4(R+0,u32(0x8691d4ull));
}
B58583d:{NFSU2_TR(0x58583d);
__builtin_memmove((R+4),(R+4),4);
}
B585840:L585840:{c.instructions+=2;NFSU2_TR(0x585840);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B585842:{NFSU2_TR(0x585842);
if(r1(R+518)){{goto L58586a;}}
}
B585844:L585844:{c.instructions+=4;NFSU2_TR(0x585844);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B585847:{NFSU2_TR(0x585847);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B585848:{NFSU2_TR(0x585848);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869238ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x869238ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58584d:{NFSU2_TR(0x58584d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585840u);}goto L585840;}}
}
B58584f:L58584f:{c.instructions+=1;NFSU2_TR(0x58584f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B585851:L585851:{c.instructions+=8;NFSU2_TR(0x585851);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585855:{NFSU2_TR(0x585855);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585859:{NFSU2_TR(0x585859);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58585c:{NFSU2_TR(0x58585c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58585d:{NFSU2_TR(0x58585d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58585e:{NFSU2_TR(0x58585e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58585f:{NFSU2_TR(0x58585f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585860:{NFSU2_TR(0x585860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585865ull));
TAIL_STATIC(0x583670u,583);
}
B585865:L585865:{c.instructions+=3;NFSU2_TR(0x585865);
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
B585868:{NFSU2_TR(0x585868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585869:{NFSU2_TR(0x585869);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58586a:L58586a:{c.instructions+=3;NFSU2_TR(0x58586a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B58586d:{NFSU2_TR(0x58586d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8691d0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B585874:{NFSU2_TR(0x585874);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585851u);}goto L585851;}
}
B585880:L585880:{c.instructions+=5;NFSU2_TR(0x585880);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585884:{NFSU2_TR(0x585884);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B585886:{NFSU2_TR(0x585886);
w4(R+0,u32(0x8691d4ull));
}
B58588b:{NFSU2_TR(0x58588b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58588c:{NFSU2_TR(0x58588c);
__builtin_memmove((R+16),(R+16),4);
}
B585890:L585890:{c.instructions+=2;NFSU2_TR(0x585890);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B585892:{NFSU2_TR(0x585892);
if(r1(R+518)){{goto L5858f0;}}
}
B585894:L585894:{c.instructions+=4;NFSU2_TR(0x585894);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B585897:{NFSU2_TR(0x585897);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B585898:{NFSU2_TR(0x585898);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869238ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x869238ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58589d:{NFSU2_TR(0x58589d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585890u);}goto L585890;}}
}
B58589f:L58589f:{c.instructions+=1;NFSU2_TR(0x58589f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5858a1:L5858a1:{c.instructions+=6;NFSU2_TR(0x5858a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5858a4:{NFSU2_TR(0x5858a4);
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
B5858a6:{NFSU2_TR(0x5858a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5858ad:{NFSU2_TR(0x5858ad);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5858b3:{NFSU2_TR(0x5858b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5858ba:{NFSU2_TR(0x5858ba);
if(r1(R+518)){{goto L5858c5;}}
}
B5858bc:L5858bc:{c.instructions+=2;NFSU2_TR(0x5858bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5858bd:{NFSU2_TR(0x5858bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5858c2ull));
TAIL_STATIC(0x748650u,748);
}
B5858c2:L5858c2:{c.instructions+=1;NFSU2_TR(0x5858c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5858c5:L5858c5:{c.instructions+=3;NFSU2_TR(0x5858c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5858c8:{NFSU2_TR(0x5858c8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5858ca:{NFSU2_TR(0x5858ca);
if(r1(R+518)){{goto L5858d5;}}
}
B5858cc:L5858cc:{c.instructions+=2;NFSU2_TR(0x5858cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5858cd:{NFSU2_TR(0x5858cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5858d2ull));
TAIL_STATIC(0x743b30u,743);
}
B5858d2:L5858d2:{c.instructions+=1;NFSU2_TR(0x5858d2);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5858d5:L5858d5:{c.instructions+=7;NFSU2_TR(0x5858d5);
__builtin_memmove((R+0),gp(0x866760),4);
}
B5858da:{NFSU2_TR(0x5858da);
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
B5858db:{NFSU2_TR(0x5858db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5858e2:{NFSU2_TR(0x5858e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5858e9:{NFSU2_TR(0x5858e9);
__builtin_memmove(gp(0x866760),(R+0),4);
}
B5858ee:{NFSU2_TR(0x5858ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5858ef:{NFSU2_TR(0x5858ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5858f0:L5858f0:{c.instructions+=3;NFSU2_TR(0x5858f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5858f3:{NFSU2_TR(0x5858f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8691d0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5858fa:{NFSU2_TR(0x5858fa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5858a1u);}goto L5858a1;}
}
B585900:L585900:{c.instructions+=14;NFSU2_TR(0x585900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B585903:{NFSU2_TR(0x585903);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B585905:{NFSU2_TR(0x585905);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585909:{NFSU2_TR(0x585909);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58590d:{NFSU2_TR(0x58590d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58590e:{NFSU2_TR(0x58590e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585912:{NFSU2_TR(0x585912);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585916:{NFSU2_TR(0x585916);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58591a:{NFSU2_TR(0x58591a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58591b:{NFSU2_TR(0x58591b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58591f:{NFSU2_TR(0x58591f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585920:{NFSU2_TR(0x585920);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585924:{NFSU2_TR(0x585924);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585928:{NFSU2_TR(0x585928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58592dull));
TAIL_STATIC(0x742e60u,742);
}
B58592d:L58592d:{c.instructions+=7;NFSU2_TR(0x58592d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58592f:{NFSU2_TR(0x58592f);
__builtin_memmove((R+0),gp(0x866748),2);
}
B585935:{NFSU2_TR(0x585935);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585937:{NFSU2_TR(0x585937);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58593b:{NFSU2_TR(0x58593b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58593c:{NFSU2_TR(0x58593c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58593d:{NFSU2_TR(0x58593d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585942ull));
TAIL_STATIC(0x5834e0u,583);
}
B585942:L585942:{c.instructions+=6;NFSU2_TR(0x585942);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585946:{NFSU2_TR(0x585946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585949:{NFSU2_TR(0x585949);
__builtin_memmove((R+4),gp(0x866774),4);
}
B58594f:{NFSU2_TR(0x58594f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B585952:{NFSU2_TR(0x585952);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585954:{NFSU2_TR(0x585954);
if(r1(R+518)){{goto L58595a;}}
}
B585956:L585956:{c.instructions+=2;NFSU2_TR(0x585956);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585958:{NFSU2_TR(0x585958);
if(r1(R+518)){{goto L585986;}}
}
B58595a:L58595a:{c.instructions+=7;NFSU2_TR(0x58595a);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B585960:{NFSU2_TR(0x585960);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585966:{NFSU2_TR(0x585966);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58596c:{NFSU2_TR(0x58596c);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585972:{NFSU2_TR(0x585972);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585978:{NFSU2_TR(0x585978);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58597e:{NFSU2_TR(0x58597e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585983ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585983:L585983:{c.instructions+=1;NFSU2_TR(0x585983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585986:L585986:{c.instructions+=3;NFSU2_TR(0x585986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585987:{NFSU2_TR(0x585987);
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
B58598a:{NFSU2_TR(0x58598a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585990:L585990:{c.instructions+=5;NFSU2_TR(0x585990);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585991:{NFSU2_TR(0x585991);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585995:{NFSU2_TR(0x585995);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585998:{NFSU2_TR(0x585998);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585999:{NFSU2_TR(0x585999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58599eull));
TAIL_STATIC(0x5835d0u,583);
}
B58599e:L58599e:{c.instructions+=4;NFSU2_TR(0x58599e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5859a1:{NFSU2_TR(0x5859a1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5859a3:{NFSU2_TR(0x5859a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5859a6:{NFSU2_TR(0x5859a6);
if(r1(R+518)){{goto L5859e5;}}
}
B5859a8:L5859a8:{c.instructions+=12;NFSU2_TR(0x5859a8);
__builtin_memmove((R+4),gp(0x86664c),4);
}
B5859ae:{NFSU2_TR(0x5859ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5859b1:{NFSU2_TR(0x5859b1);
__builtin_memmove((R+0),gp(0x86664c),4);
}
B5859b6:{NFSU2_TR(0x5859b6);
__builtin_memmove((R+8),gp(0x866760),4);
}
B5859bc:{NFSU2_TR(0x5859bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5859bd:{NFSU2_TR(0x5859bd);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5859be:{NFSU2_TR(0x5859be);
__builtin_memmove(gp(0x86664c),(R+0),4);
}
B5859c3:{NFSU2_TR(0x5859c3);
__builtin_memmove(gp(0x866760),(R+8),4);
}
B5859c9:{NFSU2_TR(0x5859c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5859cc:{NFSU2_TR(0x5859cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5859cd:{NFSU2_TR(0x5859cd);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5859d3:{NFSU2_TR(0x5859d3);
u8 U[4];
__builtin_memmove((U+0),gp(0x866764),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5859d9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5859d9:L5859d9:{c.instructions+=4;NFSU2_TR(0x5859d9);
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
B5859dc:{NFSU2_TR(0x5859dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5859e3:{NFSU2_TR(0x5859e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5859e4:{NFSU2_TR(0x5859e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5859e5:L5859e5:{c.instructions+=3;NFSU2_TR(0x5859e5);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5859ea:{NFSU2_TR(0x5859ea);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5859ed:{NFSU2_TR(0x5859ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5859fc;}}
}
B5859ef:L5859ef:{c.instructions+=1;NFSU2_TR(0x5859ef);
u8 U[4];
__builtin_memmove((U+0),gp(0x866744),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5859f5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5859f5:L5859f5:{c.instructions+=1;NFSU2_TR(0x5859f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5859fc:L5859fc:{c.instructions+=2;NFSU2_TR(0x5859fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5859fd:{NFSU2_TR(0x5859fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585a00:L585a00:{c.instructions+=6;NFSU2_TR(0x585a00);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x21cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585a06:{NFSU2_TR(0x585a06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585a07:{NFSU2_TR(0x585a07);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585a0e:{NFSU2_TR(0x585a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585a11:{NFSU2_TR(0x585a11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585a12:{NFSU2_TR(0x585a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585a17ull));
TAIL_STATIC(0x7486a0u,748);
}
B585a17:L585a17:{c.instructions+=4;NFSU2_TR(0x585a17);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B585a1a:{NFSU2_TR(0x585a1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585a1d:{NFSU2_TR(0x585a1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B585a1f:{NFSU2_TR(0x585a1f);
if(r1(R+518)){{goto L585b16;}}
}
B585a25:L585a25:{c.instructions+=3;NFSU2_TR(0x585a25);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B585a28:{NFSU2_TR(0x585a28);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B585a2d:{NFSU2_TR(0x585a2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L585b16;}}
}
B585a33:L585a33:{c.instructions+=1;NFSU2_TR(0x585a33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585a34:L585a34:{c.instructions+=7;NFSU2_TR(0x585a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585a37:{NFSU2_TR(0x585a37);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585a3b:{NFSU2_TR(0x585a3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585a3c:{NFSU2_TR(0x585a3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B585a40:{NFSU2_TR(0x585a40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585a41:{NFSU2_TR(0x585a41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585a42:{NFSU2_TR(0x585a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585a47ull));
TAIL_STATIC(0x583630u,583);
}
B585a47:L585a47:{c.instructions+=3;NFSU2_TR(0x585a47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B585a4a:{NFSU2_TR(0x585a4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B585a4c:{NFSU2_TR(0x585a4c);
if(r1(R+518)){{goto L585ae4;}}
}
B585a52:L585a52:{c.instructions+=4;NFSU2_TR(0x585a52);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585a58:{NFSU2_TR(0x585a58);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B585a5d:{NFSU2_TR(0x585a5d);
{u32 ea_=u32(u32(7887724u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585a63:{NFSU2_TR(0x585a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585a68ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585a68:L585a68:{c.instructions+=6;NFSU2_TR(0x585a68);
__builtin_memmove((R+8),gp(0x7fbe8c),4);
}
B585a6e:{NFSU2_TR(0x585a6e);
__builtin_memmove((R+4),gp(0x7fbe88),4);
}
B585a74:{NFSU2_TR(0x585a74);
w4(R+8,u32(0-u32(r4(R+8))));
}
B585a76:{NFSU2_TR(0x585a76);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B585a78:{NFSU2_TR(0x585a78);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B585a7a:{NFSU2_TR(0x585a7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L585ab2;}}
}
B585a7c:L585a7c:{c.instructions+=15;NFSU2_TR(0x585a7c);
__builtin_memmove((R+0),(R+8),4);
}
B585a7e:{NFSU2_TR(0x585a7e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B585a7f:{NFSU2_TR(0x585a7f);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x585a7f);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x585a7f);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B585a81:{NFSU2_TR(0x585a81);
__builtin_memmove((R+8),gp(0x7fbe8c),4);
}
B585a87:{NFSU2_TR(0x585a87);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B585a8a:{NFSU2_TR(0x585a8a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B585a8c:{NFSU2_TR(0x585a8c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B585a8e:{NFSU2_TR(0x585a8e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585a91:{NFSU2_TR(0x585a91);
__builtin_memmove((R+0),gp(0x7fbe90),4);
}
B585a96:{NFSU2_TR(0x585a96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B585a99:{NFSU2_TR(0x585a99);
__builtin_memmove(gp(0x7fbe8c),(R+8),4);
}
B585a9f:{NFSU2_TR(0x585a9f);
s4(0x7fbe90,u32(0x0ull));
}
B585aa9:{NFSU2_TR(0x585aa9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B585aaa:{NFSU2_TR(0x585aaa);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B585aac:{NFSU2_TR(0x585aac);
__builtin_memmove(gp(0x7fbe94),(R+4),4);
}
B585ab2:L585ab2:{c.instructions+=9;NFSU2_TR(0x585ab2);
u8 U[6];
w1(R+512,carry<u32>(m4(0x7fbe90),r4(R+28)));
w1(R+523,scarry<u32>(m4(0x7fbe90),r4(R+28)));
s4(0x7fbe90,u32(u32(m4(0x7fbe90))+u32(r4(R+28))));
w1(R+519,u8(s32(m4(0x7fbe90))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x7fbe90))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x7fbe90))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585ab8:{NFSU2_TR(0x585ab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585abc:{NFSU2_TR(0x585abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585abf:{NFSU2_TR(0x585abf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ac0:{NFSU2_TR(0x585ac0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ac1:{NFSU2_TR(0x585ac1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585ac5:{NFSU2_TR(0x585ac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ac6:{NFSU2_TR(0x585ac6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ac7:{NFSU2_TR(0x585ac7);
u8 U[4];
__builtin_memmove((U+0),gp(0x866754),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585acdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B585acd:L585acd:{c.instructions+=4;NFSU2_TR(0x585acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B585acf:{NFSU2_TR(0x585acf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B585ad2:{NFSU2_TR(0x585ad2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585ad5:{NFSU2_TR(0x585ad5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585a34u);}goto L585a34;}}
}
B585adb:L585adb:{c.instructions+=4;NFSU2_TR(0x585adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B585adc:{NFSU2_TR(0x585adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585add:{NFSU2_TR(0x585add);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585ae3:{NFSU2_TR(0x585ae3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585ae4:L585ae4:{c.instructions+=2;NFSU2_TR(0x585ae4);
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
B585ae7:{NFSU2_TR(0x585ae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L585b15;}}
}
B585ae9:L585ae9:{c.instructions+=3;NFSU2_TR(0x585ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B585aec:{NFSU2_TR(0x585aec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585aed:{NFSU2_TR(0x585aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585af2ull));
TAIL_STATIC(0x7486a0u,748);
}
B585af2:L585af2:{c.instructions+=5;NFSU2_TR(0x585af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B585af4:{NFSU2_TR(0x585af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B585af7:{NFSU2_TR(0x585af7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585afa:{NFSU2_TR(0x585afa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2710ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2710ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585b00:{NFSU2_TR(0x585b00);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L585b15;}}
}
B585b02:L585b02:{c.instructions+=3;NFSU2_TR(0x585b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585b05:{NFSU2_TR(0x585b05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b06:{NFSU2_TR(0x585b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585b0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585880u);}goto L585880;}
}
B585b0b:L585b0b:{c.instructions+=2;NFSU2_TR(0x585b0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b0c:{NFSU2_TR(0x585b0c);
u8 U[4];
__builtin_memmove((U+0),gp(0x866740),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585b12ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B585b12:L585b12:{c.instructions+=1;NFSU2_TR(0x585b12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B585b15:L585b15:{c.instructions+=1;NFSU2_TR(0x585b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B585b16:L585b16:{c.instructions+=3;NFSU2_TR(0x585b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585b17:{NFSU2_TR(0x585b17);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585b1d:{NFSU2_TR(0x585b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585b20:L585b20:{c.instructions+=3;NFSU2_TR(0x585b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x21cull))));
}
B585b26:{NFSU2_TR(0x585b26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b27:{NFSU2_TR(0x585b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585b2cull));
TAIL_STATIC(0x742db0u,742);
}
B585b2c:L585b2c:{c.instructions+=3;NFSU2_TR(0x585b2c);
__builtin_memmove((R+0),gp(0x8667ec),4);
}
B585b31:{NFSU2_TR(0x585b31);
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
B585b33:{NFSU2_TR(0x585b33);
if(r1(R+518)){{goto L585bf2;}}
}
B585b39:L585b39:{c.instructions+=2;NFSU2_TR(0x585b39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b3a:{NFSU2_TR(0x585b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585b3full));
TAIL_STATIC(0x7486a0u,748);
}
B585b3f:L585b3f:{c.instructions+=4;NFSU2_TR(0x585b3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B585b42:{NFSU2_TR(0x585b42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585b45:{NFSU2_TR(0x585b45);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B585b47:{NFSU2_TR(0x585b47);
if(r1(R+518)){{goto L585c6a;}}
}
B585b4d:L585b4d:{c.instructions+=4;NFSU2_TR(0x585b4d);
__builtin_memmove((R+0),gp(0x8667ec),4);
}
B585b52:{NFSU2_TR(0x585b52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585b54:{NFSU2_TR(0x585b54);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B585b59:{NFSU2_TR(0x585b59);
if(r1(R+518)){{goto L585c6a;}}
}
B585b5f:L585b5f:{c.instructions+=1;NFSU2_TR(0x585b5f);
}
B585b60:L585b60:{c.instructions+=6;NFSU2_TR(0x585b60);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585b64:{NFSU2_TR(0x585b64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b65:{NFSU2_TR(0x585b65);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B585b69:{NFSU2_TR(0x585b69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b6a:{NFSU2_TR(0x585b6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b6b:{NFSU2_TR(0x585b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585b70ull));
TAIL_STATIC(0x583630u,583);
}
B585b70:L585b70:{c.instructions+=3;NFSU2_TR(0x585b70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B585b73:{NFSU2_TR(0x585b73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B585b75:{NFSU2_TR(0x585b75);
if(r1(R+518)){{goto L585bbe;}}
}
B585b77:L585b77:{c.instructions+=5;NFSU2_TR(0x585b77);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585b7d:{NFSU2_TR(0x585b7d);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B585b82:{NFSU2_TR(0x585b82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b83:{NFSU2_TR(0x585b83);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585b89:{NFSU2_TR(0x585b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585b8eull));
TAIL_STATIC(0x75bed4u,75b);
}
B585b8e:L585b8e:{c.instructions+=3;NFSU2_TR(0x585b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b8f:{NFSU2_TR(0x585b8f);
w4(R+4,u32(0x7fbea8ull));
}
B585b94:{NFSU2_TR(0x585b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585b99ull));
TAIL_STATIC(0x583300u,583);
}
B585b99:L585b99:{c.instructions+=6;NFSU2_TR(0x585b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585b9d:{NFSU2_TR(0x585b9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585b9e:{NFSU2_TR(0x585b9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585ba2:{NFSU2_TR(0x585ba2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ba3:{NFSU2_TR(0x585ba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ba4:{NFSU2_TR(0x585ba4);
u8 U[4];
__builtin_memmove((U+0),gp(0x866750),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585baaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B585baa:L585baa:{c.instructions+=4;NFSU2_TR(0x585baa);
__builtin_memmove((R+0),gp(0x8667ec),4);
}
B585baf:{NFSU2_TR(0x585baf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B585bb2:{NFSU2_TR(0x585bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585bb4:{NFSU2_TR(0x585bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585b60u);}goto L585b60;}}
}
B585bb6:L585bb6:{c.instructions+=3;NFSU2_TR(0x585bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585bb7:{NFSU2_TR(0x585bb7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585bbd:{NFSU2_TR(0x585bbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585bbe:L585bbe:{c.instructions+=3;NFSU2_TR(0x585bbe);
__builtin_memmove((R+0),gp(0x8667ec),4);
}
B585bc3:{NFSU2_TR(0x585bc3);
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
B585bc5:{NFSU2_TR(0x585bc5);
if(r1(R+518)){{goto L585c6a;}}
}
B585bcb:L585bcb:{c.instructions+=2;NFSU2_TR(0x585bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585bcc:{NFSU2_TR(0x585bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585bd1ull));
TAIL_STATIC(0x7486a0u,748);
}
B585bd1:L585bd1:{c.instructions+=5;NFSU2_TR(0x585bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B585bd3:{NFSU2_TR(0x585bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B585bd6:{NFSU2_TR(0x585bd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585bd9:{NFSU2_TR(0x585bd9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x2710ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2710ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585bdf:{NFSU2_TR(0x585bdf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L585c6a;}}
}
B585be5:L585be5:{c.instructions+=3;NFSU2_TR(0x585be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585be6:{NFSU2_TR(0x585be6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585bec:{NFSU2_TR(0x585bec);
{u32 t_=u32(m4(0x866768));TAIL_DYNAMIC(t_);}
}
B585bf2:L585bf2:{c.instructions+=3;NFSU2_TR(0x585bf2);
__builtin_memmove((R+24),gp(0x8667e4),4);
}
B585bf8:{NFSU2_TR(0x585bf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585bfa:{NFSU2_TR(0x585bfa);
if(r1(R+518)){{goto L585c6a;}}
}
B585bfc:L585bfc:{c.instructions+=3;NFSU2_TR(0x585bfc);
__builtin_memmove((R+0),gp(0x869678),4);
}
B585c01:{NFSU2_TR(0x585c01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585c03:{NFSU2_TR(0x585c03);
if(r1(R+518)){{goto L585c0c;}}
}
B585c05:L585c05:{c.instructions+=2;NFSU2_TR(0x585c05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585c0a:{NFSU2_TR(0x585c0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L585c28;}}
}
B585c0c:L585c0c:{c.instructions+=4;NFSU2_TR(0x585c0c);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585c12:{NFSU2_TR(0x585c12);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585c18:{NFSU2_TR(0x585c18);
{u32 ea_=u32(u32(8000280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585c1e:{NFSU2_TR(0x585c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585c23ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585c23:L585c23:{c.instructions+=1;NFSU2_TR(0x585c23);
__builtin_memmove(gp(0x869678),(R+0),4);
}
B585c28:L585c28:{c.instructions+=2;NFSU2_TR(0x585c28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585c29:{NFSU2_TR(0x585c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585c2eull));
TAIL_STATIC(0x5835d0u,583);
}
B585c2e:L585c2e:{c.instructions+=4;NFSU2_TR(0x585c2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585c31:{NFSU2_TR(0x585c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585c33:{NFSU2_TR(0x585c33);
__builtin_memmove(gp(0x8667ec),(R+0),4);
}
B585c38:{NFSU2_TR(0x585c38);
if(r1(R+518)){{goto L585c47;}}
}
B585c3a:L585c3a:{c.instructions+=3;NFSU2_TR(0x585c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585c3b:{NFSU2_TR(0x585c3b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585c41:{NFSU2_TR(0x585c41);
{u32 t_=u32(m4(0x86674c));TAIL_DYNAMIC(t_);}
}
B585c47:L585c47:{c.instructions+=3;NFSU2_TR(0x585c47);
__builtin_memmove((R+0),gp(0x869678),4);
}
B585c4c:{NFSU2_TR(0x585c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585c4e:{NFSU2_TR(0x585c4e);
if(r1(R+518)){{goto L585c6a;}}
}
B585c50:L585c50:{c.instructions+=2;NFSU2_TR(0x585c50);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B585c55:{NFSU2_TR(0x585c55);
if(r1(R+518)){{goto L585c6a;}}
}
B585c57:L585c57:{c.instructions+=2;NFSU2_TR(0x585c57);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585c5d:{NFSU2_TR(0x585c5d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L585c6a;}}
}
B585c5f:L585c5f:{c.instructions+=2;NFSU2_TR(0x585c5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585c61:{NFSU2_TR(0x585c61);
u8 U[4];
__builtin_memmove((U+0),gp(0x866648),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585c67ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B585c67:L585c67:{c.instructions+=1;NFSU2_TR(0x585c67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585c6a:L585c6a:{c.instructions+=3;NFSU2_TR(0x585c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585c6b:{NFSU2_TR(0x585c6b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x21cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585c71:{NFSU2_TR(0x585c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585c80:L585c80:{c.instructions+=9;NFSU2_TR(0x585c80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585c81:{NFSU2_TR(0x585c81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585c82:{NFSU2_TR(0x585c82);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585c86:{NFSU2_TR(0x585c86);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585c88:{NFSU2_TR(0x585c88);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585c8c:{NFSU2_TR(0x585c8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585c8d:{NFSU2_TR(0x585c8d);
__builtin_memmove((R+4),(R+24),4);
}
B585c8f:{NFSU2_TR(0x585c8f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B585c97:{NFSU2_TR(0x585c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585c9cull));
TAIL_STATIC(0x581d90u,581);
}
B585c9c:L585c9c:{c.instructions+=3;NFSU2_TR(0x585c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585ca0:{NFSU2_TR(0x585ca0);
u8 U[14];
__builtin_memmove((U+6),gp(0x866a10),4);
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
B585ca6:{NFSU2_TR(0x585ca6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L585cb8;}}
}
B585ca8:L585ca8:{c.instructions+=4;NFSU2_TR(0x585ca8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ca9:{NFSU2_TR(0x585ca9);
w4(R+4,u32(0x89cf48ull));
}
B585cae:{NFSU2_TR(0x585cae);
__builtin_memmove(gp(0x866a10),(R+0),4);
}
B585cb3:{NFSU2_TR(0x585cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585cb8ull));
TAIL_STATIC(0x4031c0u,403);
}
B585cb8:L585cb8:{c.instructions+=3;NFSU2_TR(0x585cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585cb9:{NFSU2_TR(0x585cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B585cba:{NFSU2_TR(0x585cba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585cc0:L585cc0:{c.instructions+=9;NFSU2_TR(0x585cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B585cc3:{NFSU2_TR(0x585cc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585cc4:{NFSU2_TR(0x585cc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585cc8:{NFSU2_TR(0x585cc8);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585cca:{NFSU2_TR(0x585cca);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585cce:{NFSU2_TR(0x585cce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ccf:{NFSU2_TR(0x585ccf);
__builtin_memmove((R+4),(R+24),4);
}
B585cd1:{NFSU2_TR(0x585cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B585cd9:{NFSU2_TR(0x585cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585cdeull));
TAIL_STATIC(0x581d90u,581);
}
B585cde:L585cde:{c.instructions+=6;NFSU2_TR(0x585cde);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ce0:{NFSU2_TR(0x585ce0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585ce4:{NFSU2_TR(0x585ce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ce5:{NFSU2_TR(0x585ce5);
__builtin_memmove((R+4),(R+24),4);
}
B585ce7:{NFSU2_TR(0x585ce7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B585cef:{NFSU2_TR(0x585cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585cf4ull));
TAIL_STATIC(0x581d90u,581);
}
B585cf4:L585cf4:{c.instructions+=7;NFSU2_TR(0x585cf4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B585cf9:{NFSU2_TR(0x585cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585cfd:{NFSU2_TR(0x585cfd);
__builtin_memmove((R+8),(R+518),1);
}
B585d00:{NFSU2_TR(0x585d00);
w4(R+4,u32(0x89cf48ull));
}
B585d05:{NFSU2_TR(0x585d05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d06:{NFSU2_TR(0x585d06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d07:{NFSU2_TR(0x585d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585d0cull));
TAIL_STATIC(0x6099c0u,609);
}
B585d0c:L585d0c:{c.instructions+=3;NFSU2_TR(0x585d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585d0d:{NFSU2_TR(0x585d0d);
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
B585d10:{NFSU2_TR(0x585d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585d20:L585d20:{c.instructions+=7;NFSU2_TR(0x585d20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d21:{NFSU2_TR(0x585d21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585d25:{NFSU2_TR(0x585d25);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d27:{NFSU2_TR(0x585d27);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585d2b:{NFSU2_TR(0x585d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d2c:{NFSU2_TR(0x585d2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B585d34:{NFSU2_TR(0x585d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585d39ull));
TAIL_STATIC(0x581d90u,581);
}
B585d39:L585d39:{c.instructions+=4;NFSU2_TR(0x585d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B585d3d:{NFSU2_TR(0x585d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d3e:{NFSU2_TR(0x585d3e);
w4(R+4,u32(0x89cf48ull));
}
B585d43:{NFSU2_TR(0x585d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585d48ull));
TAIL_STATIC(0x5f07e0u,5f0);
}
B585d48:L585d48:{c.instructions+=2;NFSU2_TR(0x585d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B585d49:{NFSU2_TR(0x585d49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585d50:L585d50:{c.instructions+=9;NFSU2_TR(0x585d50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d51:{NFSU2_TR(0x585d51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d52:{NFSU2_TR(0x585d52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d53:{NFSU2_TR(0x585d53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d54:{NFSU2_TR(0x585d54);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B585d58:{NFSU2_TR(0x585d58);
{u32 ea_=u32(r4(R+28)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585d5e:{NFSU2_TR(0x585d5e);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585d64:{NFSU2_TR(0x585d64);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B585d68:{NFSU2_TR(0x585d68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585d6dull));
TAIL_STATIC(0x75bed4u,75b);
}
B585d6d:L585d6d:{c.instructions+=6;NFSU2_TR(0x585d6d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585d71:{NFSU2_TR(0x585d71);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585d75:{NFSU2_TR(0x585d75);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B585d79:{NFSU2_TR(0x585d79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B585d7b:{NFSU2_TR(0x585d7b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B585d7e:{NFSU2_TR(0x585d7e);
if(r1(R+514)){{goto L585d86;}}
}
B585d80:L585d80:{c.instructions+=1;NFSU2_TR(0x585d80);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585d86:L585d86:{c.instructions+=1;NFSU2_TR(0x585d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585d8bull));
TAIL_STATIC(0x75bed4u,75b);
}
B585d8b:L585d8b:{c.instructions+=5;NFSU2_TR(0x585d8b);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585d91:{NFSU2_TR(0x585d91);
__builtin_memmove((R+24),(R+0),4);
}
B585d93:{NFSU2_TR(0x585d93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585d94:{NFSU2_TR(0x585d94);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585d9a:{NFSU2_TR(0x585d9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585d9full));
TAIL_STATIC(0x75bed4u,75b);
}
B585d9f:L585d9f:{c.instructions+=3;NFSU2_TR(0x585d9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585da0:{NFSU2_TR(0x585da0);
w4(R+4,u32(0x7fbeb8ull));
}
B585da5:{NFSU2_TR(0x585da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585daaull));
TAIL_STATIC(0x583300u,583);
}
B585daa:L585daa:{c.instructions+=7;NFSU2_TR(0x585daa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B585dae:{NFSU2_TR(0x585dae);
__builtin_memmove((R+0),gp(0x8667ec),4);
}
B585db3:{NFSU2_TR(0x585db3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585db4:{NFSU2_TR(0x585db4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585db5:{NFSU2_TR(0x585db5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585db6:{NFSU2_TR(0x585db6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585db7:{NFSU2_TR(0x585db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585dbcull));
TAIL_STATIC(0x583670u,583);
}
B585dbc:L585dbc:{c.instructions+=3;NFSU2_TR(0x585dbc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B585dbf:{NFSU2_TR(0x585dbf);
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
B585dc1:{NFSU2_TR(0x585dc1);
if(r1(R+518)){{goto L585e05;}}
}
B585dc3:L585dc3:{c.instructions+=4;NFSU2_TR(0x585dc3);
{u32 ea_=u32(r4(R+28)+u32(1024u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585dc9:{NFSU2_TR(0x585dc9);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585dcf:{NFSU2_TR(0x585dcf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B585dd3:{NFSU2_TR(0x585dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585dd8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585dd8:L585dd8:{c.instructions+=6;NFSU2_TR(0x585dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585ddc:{NFSU2_TR(0x585ddc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585de0:{NFSU2_TR(0x585de0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B585de4:{NFSU2_TR(0x585de4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B585de6:{NFSU2_TR(0x585de6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B585de9:{NFSU2_TR(0x585de9);
if(r1(R+514)){{goto L585df1;}}
}
B585deb:L585deb:{c.instructions+=1;NFSU2_TR(0x585deb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585df1:L585df1:{c.instructions+=2;NFSU2_TR(0x585df1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585df2:{NFSU2_TR(0x585df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585df7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B585df7:L585df7:{c.instructions+=4;NFSU2_TR(0x585df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585dfb:{NFSU2_TR(0x585dfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585dfc:{NFSU2_TR(0x585dfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585dfd:{NFSU2_TR(0x585dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585e02ull));
TAIL_STATIC(0x5838c0u,583);
}
B585e02:L585e02:{c.instructions+=1;NFSU2_TR(0x585e02);
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
B585e05:L585e05:{c.instructions+=5;NFSU2_TR(0x585e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B585e06:{NFSU2_TR(0x585e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585e07:{NFSU2_TR(0x585e07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B585e08:{NFSU2_TR(0x585e08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B585e09:{NFSU2_TR(0x585e09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585e10:L585e10:{c.instructions+=6;NFSU2_TR(0x585e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B585e16:{NFSU2_TR(0x585e16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e17:{NFSU2_TR(0x585e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B585e1e:{NFSU2_TR(0x585e1e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585e21:{NFSU2_TR(0x585e21);
__builtin_memmove(gp(0x8669f4),(R+24),4);
}
B585e27:{NFSU2_TR(0x585e27);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L585e6f;}}
}
B585e29:L585e29:{c.instructions+=9;NFSU2_TR(0x585e29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B585e2b:{NFSU2_TR(0x585e2b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e2d:{NFSU2_TR(0x585e2d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e2f:{NFSU2_TR(0x585e2f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585e33:{NFSU2_TR(0x585e33);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B585e37:{NFSU2_TR(0x585e37);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585e3e:{NFSU2_TR(0x585e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585e45:{NFSU2_TR(0x585e45);
u8 U[5];
w4(U+0,u32(u32(u32(0x414ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B585e4d:{NFSU2_TR(0x585e4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585e52ull));
TAIL_STATIC(0x581d00u,581);
}
B585e52:L585e52:{c.instructions+=4;NFSU2_TR(0x585e52);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e54:{NFSU2_TR(0x585e54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e55:{NFSU2_TR(0x585e55);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585e59:{NFSU2_TR(0x585e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585e5eull));
TAIL_STATIC(0x581d00u,581);
}
B585e5e:L585e5e:{c.instructions+=5;NFSU2_TR(0x585e5e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e60:{NFSU2_TR(0x585e60);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585e64:{NFSU2_TR(0x585e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e65:{NFSU2_TR(0x585e65);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e67:{NFSU2_TR(0x585e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585e6cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585d50u);}goto L585d50;}
}
B585e6c:L585e6c:{c.instructions+=1;NFSU2_TR(0x585e6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B585e6f:L585e6f:{c.instructions+=3;NFSU2_TR(0x585e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B585e70:{NFSU2_TR(0x585e70);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B585e76:{NFSU2_TR(0x585e76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B585e80:L585e80:{c.instructions+=7;NFSU2_TR(0x585e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B585e83:{NFSU2_TR(0x585e83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e84:{NFSU2_TR(0x585e84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e85:{NFSU2_TR(0x585e85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e86:{NFSU2_TR(0x585e86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e87:{NFSU2_TR(0x585e87);
u8 U[4];
w4(U+0,u32(0x418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585e8c:{NFSU2_TR(0x585e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585e91ull));
TAIL_STATIC(0x575620u,575);
}
B585e91:L585e91:{c.instructions+=4;NFSU2_TR(0x585e91);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B585e93:{NFSU2_TR(0x585e93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B585e96:{NFSU2_TR(0x585e96);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585e98:{NFSU2_TR(0x585e98);
if(r1(R+518)){{goto L585eb4;}}
}
B585e9a:L585e9a:{c.instructions+=6;NFSU2_TR(0x585e9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B585e9d:{NFSU2_TR(0x585e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585ea3:{NFSU2_TR(0x585ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x410ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585ea9:{NFSU2_TR(0x585ea9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x414ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B585eb0:{NFSU2_TR(0x585eb0);
__builtin_memmove((R+24),(R+0),4);
}
B585eb2:{NFSU2_TR(0x585eb2);
{goto L585eb6;}
}
B585eb4:L585eb4:{c.instructions+=1;NFSU2_TR(0x585eb4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B585eb6:L585eb6:{c.instructions+=7;NFSU2_TR(0x585eb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B585eba:{NFSU2_TR(0x585eba);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ebc:{NFSU2_TR(0x585ebc);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585ec0:{NFSU2_TR(0x585ec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ec1:{NFSU2_TR(0x585ec1);
__builtin_memmove((R+4),(R+20),4);
}
B585ec3:{NFSU2_TR(0x585ec3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585ec7:{NFSU2_TR(0x585ec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585eccull));
TAIL_STATIC(0x581d90u,581);
}
B585ecc:L585ecc:{c.instructions+=8;NFSU2_TR(0x585ecc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B585ed0:{NFSU2_TR(0x585ed0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ed2:{NFSU2_TR(0x585ed2);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B585ed9:{NFSU2_TR(0x585ed9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B585edc:{NFSU2_TR(0x585edc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585edd:{NFSU2_TR(0x585edd);
__builtin_memmove((R+4),(R+20),4);
}
B585edf:{NFSU2_TR(0x585edf);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585ee6:{NFSU2_TR(0x585ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585eebull));
TAIL_STATIC(0x581d90u,581);
}
B585eeb:L585eeb:{c.instructions+=8;NFSU2_TR(0x585eeb);
u8 U[5];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B585eef:{NFSU2_TR(0x585eef);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ef1:{NFSU2_TR(0x585ef1);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585ef8:{NFSU2_TR(0x585ef8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585ef9:{NFSU2_TR(0x585ef9);
__builtin_memmove((R+4),(R+20),4);
}
B585efb:{NFSU2_TR(0x585efb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B585efe:{NFSU2_TR(0x585efe);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585f05:{NFSU2_TR(0x585f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585f0aull));
TAIL_STATIC(0x581d90u,581);
}
B585f0a:L585f0a:{c.instructions+=5;NFSU2_TR(0x585f0a);
u8 U[6];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B585f0f:{NFSU2_TR(0x585f0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B585f11:{NFSU2_TR(0x585f11);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B585f15:{NFSU2_TR(0x585f15);
w4(R+4,u32(0x18ull));
}
B585f1a:{NFSU2_TR(0x585f1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B585f1e:L585f1e:{c.instructions+=1;NFSU2_TR(0x585f1e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L585f20;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x585f1eu);}goto L585f1e;}
}
B585f20:L585f20:{c.instructions+=11;NFSU2_TR(0x585f20);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B585f22:{NFSU2_TR(0x585f22);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B585f26:{NFSU2_TR(0x585f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585f2c:{NFSU2_TR(0x585f2c);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B585f2d:{NFSU2_TR(0x585f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585f33:{NFSU2_TR(0x585f33);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B585f35:{NFSU2_TR(0x585f35);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585f39:{NFSU2_TR(0x585f39);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585f3d:{NFSU2_TR(0x585f3d);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B585f43:{NFSU2_TR(0x585f43);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B585f47:{NFSU2_TR(0x585f47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585f4cull));
TAIL_STATIC(0x75bed4u,75b);
}
B585f4c:L585f4c:{c.instructions+=6;NFSU2_TR(0x585f4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585f50:{NFSU2_TR(0x585f50);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B585f54:{NFSU2_TR(0x585f54);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B585f58:{NFSU2_TR(0x585f58);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B585f5a:{NFSU2_TR(0x585f5a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B585f5d:{NFSU2_TR(0x585f5d);
if(r1(R+514)){{goto L585f65;}}
}
B585f5f:L585f5f:{c.instructions+=1;NFSU2_TR(0x585f5f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B585f65:L585f65:{c.instructions+=1;NFSU2_TR(0x585f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585f6aull));
TAIL_STATIC(0x75bed4u,75b);
}
B585f6a:L585f6a:{c.instructions+=3;NFSU2_TR(0x585f6a);
__builtin_memmove((R+28),(R+0),4);
}
B585f6c:{NFSU2_TR(0x585f6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585f6e:{NFSU2_TR(0x585f6e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L585f8b;}}
}
B585f70:L585f70:{c.instructions+=5;NFSU2_TR(0x585f70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585f71:{NFSU2_TR(0x585f71);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B585f75:{NFSU2_TR(0x585f75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585f76:{NFSU2_TR(0x585f76);
__builtin_memmove((R+4),(R+20),4);
}
B585f78:{NFSU2_TR(0x585f78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585f7dull));
TAIL_STATIC(0x5840f0u,584);
}
B585f7d:L585f7d:{c.instructions+=5;NFSU2_TR(0x585f7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585f7e:{NFSU2_TR(0x585f7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B585f82:{NFSU2_TR(0x585f82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585f83:{NFSU2_TR(0x585f83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B585f86:{NFSU2_TR(0x585f86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585f8bull));
TAIL_STATIC(0x5840c0u,584);
}
B585f8b:L585f8b:{c.instructions+=4;NFSU2_TR(0x585f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B585f91:{NFSU2_TR(0x585f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B585f97:{NFSU2_TR(0x585f97);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585f9a:{NFSU2_TR(0x585f9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L585fbc;}}
}
B585f9c:L585f9c:{c.instructions+=6;NFSU2_TR(0x585f9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585f9d:{NFSU2_TR(0x585f9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B585fa4:{NFSU2_TR(0x585fa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585fa5:{NFSU2_TR(0x585fa5);
__builtin_memmove((R+4),(R+20),4);
}
B585fa7:{NFSU2_TR(0x585fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585fae:{NFSU2_TR(0x585fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585fb3ull));
TAIL_STATIC(0x581d90u,581);
}
B585fb3:L585fb3:{c.instructions+=4;NFSU2_TR(0x585fb3);
u8 U[5];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B585fb8:{NFSU2_TR(0x585fb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585fb9:{NFSU2_TR(0x585fb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585fba:{NFSU2_TR(0x585fba);
{goto L585fdd;}
}
B585fbc:L585fbc:{c.instructions+=2;NFSU2_TR(0x585fbc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B585fbe:{NFSU2_TR(0x585fbe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L585fe5;}}
}
B585fc0:L585fc0:{c.instructions+=6;NFSU2_TR(0x585fc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585fc1:{NFSU2_TR(0x585fc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B585fc8:{NFSU2_TR(0x585fc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585fc9:{NFSU2_TR(0x585fc9);
__builtin_memmove((R+4),(R+20),4);
}
B585fcb:{NFSU2_TR(0x585fcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585fd2:{NFSU2_TR(0x585fd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585fd7ull));
TAIL_STATIC(0x581d90u,581);
}
B585fd7:L585fd7:{c.instructions+=3;NFSU2_TR(0x585fd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585fdb:{NFSU2_TR(0x585fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585fdc:{NFSU2_TR(0x585fdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B585fdd:L585fdd:{c.instructions+=2;NFSU2_TR(0x585fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B585fe0:{NFSU2_TR(0x585fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x585fe5ull));
TAIL_STATIC(0x581d00u,581);
}
B585fe5:L585fe5:{c.instructions+=9;NFSU2_TR(0x585fe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B585fec:{NFSU2_TR(0x585fec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B585fef:{NFSU2_TR(0x585fef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B585ff1:{NFSU2_TR(0x585ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B585ff4:{NFSU2_TR(0x585ff4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B585ff7:{NFSU2_TR(0x585ff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B585ff9:{NFSU2_TR(0x585ff9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B585ffc:{NFSU2_TR(0x585ffc);
w1(R+0,u8(u32(r1(R+0))-u32(r1(R+12))));
}
B585ffe:{NFSU2_TR(0x585ffe);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
TAIL_STATIC(0x586000u,586);
}
XIT:NFSU2_TR_EXIT(0x585,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
