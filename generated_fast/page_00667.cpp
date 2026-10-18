#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_668(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x667,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x667,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_667(u8* __restrict R,Cpu& c);
u32 page_667(Cpu& c){return body_667(c.regs.data(),c);}
__attribute__((noinline)) u32 body_667(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x667000:goto L667000;
case 0x667001:c.instructions+=12;goto B667001;
case 0x667002:c.instructions+=11;goto B667002;
case 0x667003:c.instructions+=10;goto B667003;
case 0x667004:c.instructions+=9;goto B667004;
case 0x667008:c.instructions+=8;goto B667008;
case 0x66700c:c.instructions+=7;goto B66700c;
case 0x667010:c.instructions+=6;goto B667010;
case 0x667012:c.instructions+=5;goto B667012;
case 0x667015:c.instructions+=4;goto B667015;
case 0x667016:c.instructions+=3;goto B667016;
case 0x667017:c.instructions+=2;goto B667017;
case 0x66701b:c.instructions+=1;goto B66701b;
case 0x667021:goto L667021;
case 0x667024:c.instructions+=5;goto B667024;
case 0x667027:c.instructions+=4;goto B667027;
case 0x66702a:c.instructions+=3;goto B66702a;
case 0x66702d:c.instructions+=2;goto B66702d;
case 0x667030:c.instructions+=1;goto B667030;
case 0x667036:goto L667036;
case 0x667039:c.instructions+=12;goto B667039;
case 0x66703c:c.instructions+=11;goto B66703c;
case 0x66703d:c.instructions+=10;goto B66703d;
case 0x667040:c.instructions+=9;goto B667040;
case 0x667041:c.instructions+=8;goto B667041;
case 0x667044:c.instructions+=7;goto B667044;
case 0x667045:c.instructions+=6;goto B667045;
case 0x667047:c.instructions+=5;goto B667047;
case 0x66704a:c.instructions+=4;goto B66704a;
case 0x66704b:c.instructions+=3;goto B66704b;
case 0x66704c:c.instructions+=2;goto B66704c;
case 0x66704f:c.instructions+=1;goto B66704f;
case 0x667052:goto L667052;
case 0x667053:c.instructions+=1;goto B667053;
case 0x667058:goto L667058;
case 0x66705a:c.instructions+=2;goto B66705a;
case 0x66705d:c.instructions+=1;goto B66705d;
case 0x667063:goto L667063;
case 0x667066:c.instructions+=12;goto B667066;
case 0x667069:c.instructions+=11;goto B667069;
case 0x66706c:c.instructions+=10;goto B66706c;
case 0x66706f:c.instructions+=9;goto B66706f;
case 0x667072:c.instructions+=8;goto B667072;
case 0x667075:c.instructions+=7;goto B667075;
case 0x667076:c.instructions+=6;goto B667076;
case 0x667079:c.instructions+=5;goto B667079;
case 0x66707a:c.instructions+=4;goto B66707a;
case 0x66707c:c.instructions+=3;goto B66707c;
case 0x667081:c.instructions+=2;goto B667081;
case 0x667082:c.instructions+=1;goto B667082;
case 0x667085:goto L667085;
case 0x667086:c.instructions+=1;goto B667086;
case 0x66708b:goto L66708b;
case 0x66708d:c.instructions+=2;goto B66708d;
case 0x667090:c.instructions+=1;goto B667090;
case 0x667096:goto L667096;
case 0x667098:goto L667098;
case 0x66709e:c.instructions+=7;goto B66709e;
case 0x66709f:c.instructions+=6;goto B66709f;
case 0x6670a2:c.instructions+=5;goto B6670a2;
case 0x6670a3:c.instructions+=4;goto B6670a3;
case 0x6670a8:c.instructions+=3;goto B6670a8;
case 0x6670ab:c.instructions+=2;goto B6670ab;
case 0x6670b2:c.instructions+=1;goto B6670b2;
case 0x6670b7:goto L6670b7;
case 0x6670b9:c.instructions+=1;goto B6670b9;
case 0x6670bf:goto L6670bf;
case 0x6670c2:c.instructions+=9;goto B6670c2;
case 0x6670c3:c.instructions+=8;goto B6670c3;
case 0x6670c6:c.instructions+=7;goto B6670c6;
case 0x6670c7:c.instructions+=6;goto B6670c7;
case 0x6670ca:c.instructions+=5;goto B6670ca;
case 0x6670cb:c.instructions+=4;goto B6670cb;
case 0x6670ce:c.instructions+=3;goto B6670ce;
case 0x6670cf:c.instructions+=2;goto B6670cf;
case 0x6670d2:c.instructions+=1;goto B6670d2;
case 0x6670d7:goto L6670d7;
case 0x6670d9:c.instructions+=2;goto B6670d9;
case 0x6670dc:c.instructions+=1;goto B6670dc;
case 0x6670e2:goto L6670e2;
case 0x6670e5:c.instructions+=1;goto B6670e5;
case 0x6670e7:goto L6670e7;
case 0x6670ec:c.instructions+=5;goto B6670ec;
case 0x6670f0:c.instructions+=4;goto B6670f0;
case 0x6670f1:c.instructions+=3;goto B6670f1;
case 0x6670f4:c.instructions+=2;goto B6670f4;
case 0x6670f9:c.instructions+=1;goto B6670f9;
case 0x6670fb:goto L6670fb;
case 0x667100:c.instructions+=1;goto B667100;
case 0x667102:goto L667102;
case 0x667104:c.instructions+=4;goto B667104;
case 0x667107:c.instructions+=3;goto B667107;
case 0x667108:c.instructions+=2;goto B667108;
case 0x667109:c.instructions+=1;goto B667109;
case 0x66710c:goto L66710c;
case 0x66710f:c.instructions+=2;goto B66710f;
case 0x667112:c.instructions+=1;goto B667112;
case 0x667114:goto L667114;
case 0x66711a:c.instructions+=1;goto B66711a;
case 0x66711c:goto L66711c;
case 0x667121:c.instructions+=2;goto B667121;
case 0x667126:c.instructions+=1;goto B667126;
case 0x667128:goto L667128;
case 0x66712a:c.instructions+=1;goto B66712a;
case 0x66712c:goto L66712c;
case 0x66712e:goto L66712e;
case 0x667134:c.instructions+=2;goto B667134;
case 0x667136:c.instructions+=1;goto B667136;
case 0x667138:goto L667138;
case 0x66713a:c.instructions+=1;goto B66713a;
case 0x66713c:goto L66713c;
case 0x66713e:goto L66713e;
case 0x66713f:c.instructions+=4;goto B66713f;
case 0x667140:c.instructions+=3;goto B667140;
case 0x667141:c.instructions+=2;goto B667141;
case 0x667144:c.instructions+=1;goto B667144;
case 0x667146:goto L667146;
case 0x667148:goto L667148;
case 0x66714b:c.instructions+=8;goto B66714b;
case 0x66714e:c.instructions+=7;goto B66714e;
case 0x667150:c.instructions+=6;goto B667150;
case 0x667152:c.instructions+=5;goto B667152;
case 0x667154:c.instructions+=4;goto B667154;
case 0x667157:c.instructions+=3;goto B667157;
case 0x667158:c.instructions+=2;goto B667158;
case 0x66715b:c.instructions+=1;goto B66715b;
case 0x66715c:goto L66715c;
case 0x667161:c.instructions+=6;goto B667161;
case 0x667164:c.instructions+=5;goto B667164;
case 0x667165:c.instructions+=4;goto B667165;
case 0x667166:c.instructions+=3;goto B667166;
case 0x667167:c.instructions+=2;goto B667167;
case 0x66716a:c.instructions+=1;goto B66716a;
case 0x66716c:goto L66716c;
case 0x66716f:c.instructions+=1;goto B66716f;
case 0x667172:goto L667172;
case 0x667174:c.instructions+=25;goto B667174;
case 0x667177:c.instructions+=24;goto B667177;
case 0x667179:c.instructions+=23;goto B667179;
case 0x66717a:c.instructions+=22;goto B66717a;
case 0x66717c:c.instructions+=21;goto B66717c;
case 0x667180:c.instructions+=20;goto B667180;
case 0x667184:c.instructions+=19;goto B667184;
case 0x667188:c.instructions+=18;goto B667188;
case 0x66718c:c.instructions+=17;goto B66718c;
case 0x667190:c.instructions+=16;goto B667190;
case 0x667194:c.instructions+=15;goto B667194;
case 0x667198:c.instructions+=14;goto B667198;
case 0x66719c:c.instructions+=13;goto B66719c;
case 0x6671a0:c.instructions+=12;goto B6671a0;
case 0x6671a3:c.instructions+=11;goto B6671a3;
case 0x6671a7:c.instructions+=10;goto B6671a7;
case 0x6671ab:c.instructions+=9;goto B6671ab;
case 0x6671ad:c.instructions+=8;goto B6671ad;
case 0x6671b1:c.instructions+=7;goto B6671b1;
case 0x6671b5:c.instructions+=6;goto B6671b5;
case 0x6671b8:c.instructions+=5;goto B6671b8;
case 0x6671bb:c.instructions+=4;goto B6671bb;
case 0x6671bf:c.instructions+=3;goto B6671bf;
case 0x6671c2:c.instructions+=2;goto B6671c2;
case 0x6671c5:c.instructions+=1;goto B6671c5;
case 0x6671cb:goto L6671cb;
case 0x6671ce:c.instructions+=7;goto B6671ce;
case 0x6671d1:c.instructions+=6;goto B6671d1;
case 0x6671d4:c.instructions+=5;goto B6671d4;
case 0x6671d7:c.instructions+=4;goto B6671d7;
case 0x6671da:c.instructions+=3;goto B6671da;
case 0x6671de:c.instructions+=2;goto B6671de;
case 0x6671e0:c.instructions+=1;goto B6671e0;
case 0x6671e6:goto L6671e6;
case 0x6671e8:c.instructions+=4;goto B6671e8;
case 0x6671eb:c.instructions+=3;goto B6671eb;
case 0x6671ee:c.instructions+=2;goto B6671ee;
case 0x6671ef:c.instructions+=1;goto B6671ef;
case 0x6671f4:goto L6671f4;
case 0x6671f6:c.instructions+=2;goto B6671f6;
case 0x6671f7:c.instructions+=1;goto B6671f7;
case 0x6671f9:goto L6671f9;
case 0x6671fe:c.instructions+=6;goto B6671fe;
case 0x6671ff:c.instructions+=5;goto B6671ff;
case 0x667202:c.instructions+=4;goto B667202;
case 0x667204:c.instructions+=3;goto B667204;
case 0x667205:c.instructions+=2;goto B667205;
case 0x667207:c.instructions+=1;goto B667207;
case 0x66720c:goto L66720c;
case 0x66720f:c.instructions+=1;goto B66720f;
case 0x667211:goto L667211;
case 0x667215:goto L667215;
case 0x667219:c.instructions+=1;goto B667219;
case 0x66721f:goto L66721f;
case 0x667222:c.instructions+=14;goto B667222;
case 0x667226:c.instructions+=13;goto B667226;
case 0x667229:c.instructions+=12;goto B667229;
case 0x66722d:c.instructions+=11;goto B66722d;
case 0x667230:c.instructions+=10;goto B667230;
case 0x667233:c.instructions+=9;goto B667233;
case 0x667239:c.instructions+=8;goto B667239;
case 0x66723f:c.instructions+=7;goto B66723f;
case 0x667242:c.instructions+=6;goto B667242;
case 0x667248:c.instructions+=5;goto B667248;
case 0x66724b:c.instructions+=4;goto B66724b;
case 0x66724d:c.instructions+=3;goto B66724d;
case 0x667250:c.instructions+=2;goto B667250;
case 0x667253:c.instructions+=1;goto B667253;
case 0x667254:goto L667254;
case 0x667256:goto L667256;
case 0x667259:c.instructions+=45;goto B667259;
case 0x66725b:c.instructions+=44;goto B66725b;
case 0x66725d:c.instructions+=43;goto B66725d;
case 0x667260:c.instructions+=42;goto B667260;
case 0x667263:c.instructions+=41;goto B667263;
case 0x667266:c.instructions+=40;goto B667266;
case 0x667269:c.instructions+=39;goto B667269;
case 0x66726c:c.instructions+=38;goto B66726c;
case 0x66726f:c.instructions+=37;goto B66726f;
case 0x667272:c.instructions+=36;goto B667272;
case 0x667275:c.instructions+=35;goto B667275;
case 0x667278:c.instructions+=34;goto B667278;
case 0x66727b:c.instructions+=33;goto B66727b;
case 0x66727e:c.instructions+=32;goto B66727e;
case 0x667281:c.instructions+=31;goto B667281;
case 0x667283:c.instructions+=30;goto B667283;
case 0x667286:c.instructions+=29;goto B667286;
case 0x667288:c.instructions+=28;goto B667288;
case 0x66728b:c.instructions+=27;goto B66728b;
case 0x66728e:c.instructions+=26;goto B66728e;
case 0x667291:c.instructions+=25;goto B667291;
case 0x667294:c.instructions+=24;goto B667294;
case 0x667297:c.instructions+=23;goto B667297;
case 0x66729a:c.instructions+=22;goto B66729a;
case 0x66729d:c.instructions+=21;goto B66729d;
case 0x6672a0:c.instructions+=20;goto B6672a0;
case 0x6672a4:c.instructions+=19;goto B6672a4;
case 0x6672a8:c.instructions+=18;goto B6672a8;
case 0x6672ab:c.instructions+=17;goto B6672ab;
case 0x6672af:c.instructions+=16;goto B6672af;
case 0x6672b3:c.instructions+=15;goto B6672b3;
case 0x6672b6:c.instructions+=14;goto B6672b6;
case 0x6672b9:c.instructions+=13;goto B6672b9;
case 0x6672bc:c.instructions+=12;goto B6672bc;
case 0x6672bf:c.instructions+=11;goto B6672bf;
case 0x6672c1:c.instructions+=10;goto B6672c1;
case 0x6672c4:c.instructions+=9;goto B6672c4;
case 0x6672c7:c.instructions+=8;goto B6672c7;
case 0x6672cb:c.instructions+=7;goto B6672cb;
case 0x6672ce:c.instructions+=6;goto B6672ce;
case 0x6672d2:c.instructions+=5;goto B6672d2;
case 0x6672d5:c.instructions+=4;goto B6672d5;
case 0x6672d8:c.instructions+=3;goto B6672d8;
case 0x6672db:c.instructions+=2;goto B6672db;
case 0x6672dd:c.instructions+=1;goto B6672dd;
case 0x6672df:goto L6672df;
case 0x6672e1:c.instructions+=1;goto B6672e1;
case 0x6672e6:goto L6672e6;
case 0x6672ea:c.instructions+=1;goto B6672ea;
case 0x6672ed:goto L6672ed;
case 0x6672f0:c.instructions+=5;goto B6672f0;
case 0x6672f3:c.instructions+=4;goto B6672f3;
case 0x6672f5:c.instructions+=3;goto B6672f5;
case 0x6672f9:c.instructions+=2;goto B6672f9;
case 0x6672fb:c.instructions+=1;goto B6672fb;
case 0x6672ff:goto L6672ff;
case 0x667301:c.instructions+=6;goto B667301;
case 0x667305:c.instructions+=5;goto B667305;
case 0x667307:c.instructions+=4;goto B667307;
case 0x66730b:c.instructions+=3;goto B66730b;
case 0x66730e:c.instructions+=2;goto B66730e;
case 0x667311:c.instructions+=1;goto B667311;
case 0x667313:goto L667313;
case 0x667316:goto L667316;
case 0x667319:c.instructions+=12;goto B667319;
case 0x66731c:c.instructions+=11;goto B66731c;
case 0x66731e:c.instructions+=10;goto B66731e;
case 0x667321:c.instructions+=9;goto B667321;
case 0x667324:c.instructions+=8;goto B667324;
case 0x667327:c.instructions+=7;goto B667327;
case 0x667329:c.instructions+=6;goto B667329;
case 0x66732d:c.instructions+=5;goto B66732d;
case 0x667331:c.instructions+=4;goto B667331;
case 0x667334:c.instructions+=3;goto B667334;
case 0x667337:c.instructions+=2;goto B667337;
case 0x66733a:c.instructions+=1;goto B66733a;
case 0x66733c:goto L66733c;
case 0x66733f:goto L66733f;
case 0x667342:c.instructions+=12;goto B667342;
case 0x667345:c.instructions+=11;goto B667345;
case 0x667347:c.instructions+=10;goto B667347;
case 0x66734a:c.instructions+=9;goto B66734a;
case 0x66734d:c.instructions+=8;goto B66734d;
case 0x667350:c.instructions+=7;goto B667350;
case 0x667352:c.instructions+=6;goto B667352;
case 0x667356:c.instructions+=5;goto B667356;
case 0x66735a:c.instructions+=4;goto B66735a;
case 0x66735d:c.instructions+=3;goto B66735d;
case 0x667360:c.instructions+=2;goto B667360;
case 0x667363:c.instructions+=1;goto B667363;
case 0x667365:goto L667365;
case 0x667368:goto L667368;
case 0x66736b:c.instructions+=14;goto B66736b;
case 0x66736e:c.instructions+=13;goto B66736e;
case 0x667370:c.instructions+=12;goto B667370;
case 0x667372:c.instructions+=11;goto B667372;
case 0x667375:c.instructions+=10;goto B667375;
case 0x667378:c.instructions+=9;goto B667378;
case 0x66737b:c.instructions+=8;goto B66737b;
case 0x66737f:c.instructions+=7;goto B66737f;
case 0x667382:c.instructions+=6;goto B667382;
case 0x667385:c.instructions+=5;goto B667385;
case 0x667388:c.instructions+=4;goto B667388;
case 0x66738b:c.instructions+=3;goto B66738b;
case 0x66738f:c.instructions+=2;goto B66738f;
case 0x667392:c.instructions+=1;goto B667392;
case 0x667398:goto L667398;
case 0x66739a:c.instructions+=21;goto B66739a;
case 0x66739e:c.instructions+=20;goto B66739e;
case 0x6673a1:c.instructions+=19;goto B6673a1;
case 0x6673a4:c.instructions+=18;goto B6673a4;
case 0x6673a7:c.instructions+=17;goto B6673a7;
case 0x6673a8:c.instructions+=16;goto B6673a8;
case 0x6673ac:c.instructions+=15;goto B6673ac;
case 0x6673af:c.instructions+=14;goto B6673af;
case 0x6673b1:c.instructions+=13;goto B6673b1;
case 0x6673b2:c.instructions+=12;goto B6673b2;
case 0x6673b5:c.instructions+=11;goto B6673b5;
case 0x6673b7:c.instructions+=10;goto B6673b7;
case 0x6673b9:c.instructions+=9;goto B6673b9;
case 0x6673bc:c.instructions+=8;goto B6673bc;
case 0x6673c0:c.instructions+=7;goto B6673c0;
case 0x6673c3:c.instructions+=6;goto B6673c3;
case 0x6673c6:c.instructions+=5;goto B6673c6;
case 0x6673c9:c.instructions+=4;goto B6673c9;
case 0x6673ca:c.instructions+=3;goto B6673ca;
case 0x6673cd:c.instructions+=2;goto B6673cd;
case 0x6673ce:c.instructions+=1;goto B6673ce;
case 0x6673d3:goto L6673d3;
case 0x6673d5:c.instructions+=2;goto B6673d5;
case 0x6673d8:c.instructions+=1;goto B6673d8;
case 0x6673de:goto L6673de;
case 0x6673e0:c.instructions+=3;goto B6673e0;
case 0x6673e2:c.instructions+=2;goto B6673e2;
case 0x6673e3:c.instructions+=1;goto B6673e3;
case 0x6673e6:goto L6673e6;
case 0x6673e9:c.instructions+=78;goto B6673e9;
case 0x6673ec:c.instructions+=77;goto B6673ec;
case 0x6673ef:c.instructions+=76;goto B6673ef;
case 0x6673f2:c.instructions+=75;goto B6673f2;
case 0x6673f5:c.instructions+=74;goto B6673f5;
case 0x6673f8:c.instructions+=73;goto B6673f8;
case 0x6673fb:c.instructions+=72;goto B6673fb;
case 0x6673fd:c.instructions+=71;goto B6673fd;
case 0x6673ff:c.instructions+=70;goto B6673ff;
case 0x667402:c.instructions+=69;goto B667402;
case 0x667404:c.instructions+=68;goto B667404;
case 0x667406:c.instructions+=67;goto B667406;
case 0x667409:c.instructions+=66;goto B667409;
case 0x66740c:c.instructions+=65;goto B66740c;
case 0x66740f:c.instructions+=64;goto B66740f;
case 0x667412:c.instructions+=63;goto B667412;
case 0x667414:c.instructions+=62;goto B667414;
case 0x667416:c.instructions+=61;goto B667416;
case 0x667419:c.instructions+=60;goto B667419;
case 0x66741b:c.instructions+=59;goto B66741b;
case 0x66741d:c.instructions+=58;goto B66741d;
case 0x66741f:c.instructions+=57;goto B66741f;
case 0x667421:c.instructions+=56;goto B667421;
case 0x667424:c.instructions+=55;goto B667424;
case 0x667426:c.instructions+=54;goto B667426;
case 0x667428:c.instructions+=53;goto B667428;
case 0x66742b:c.instructions+=52;goto B66742b;
case 0x66742d:c.instructions+=51;goto B66742d;
case 0x66742f:c.instructions+=50;goto B66742f;
case 0x667432:c.instructions+=49;goto B667432;
case 0x667434:c.instructions+=48;goto B667434;
case 0x667437:c.instructions+=47;goto B667437;
case 0x667439:c.instructions+=46;goto B667439;
case 0x66743c:c.instructions+=45;goto B66743c;
case 0x66743e:c.instructions+=44;goto B66743e;
case 0x667440:c.instructions+=43;goto B667440;
case 0x667442:c.instructions+=42;goto B667442;
case 0x667444:c.instructions+=41;goto B667444;
case 0x667446:c.instructions+=40;goto B667446;
case 0x667449:c.instructions+=39;goto B667449;
case 0x66744b:c.instructions+=38;goto B66744b;
case 0x66744d:c.instructions+=37;goto B66744d;
case 0x667450:c.instructions+=36;goto B667450;
case 0x667452:c.instructions+=35;goto B667452;
case 0x667454:c.instructions+=34;goto B667454;
case 0x667457:c.instructions+=33;goto B667457;
case 0x667459:c.instructions+=32;goto B667459;
case 0x66745c:c.instructions+=31;goto B66745c;
case 0x66745e:c.instructions+=30;goto B66745e;
case 0x667461:c.instructions+=29;goto B667461;
case 0x667463:c.instructions+=28;goto B667463;
case 0x667465:c.instructions+=27;goto B667465;
case 0x667467:c.instructions+=26;goto B667467;
case 0x667469:c.instructions+=25;goto B667469;
case 0x66746b:c.instructions+=24;goto B66746b;
case 0x66746f:c.instructions+=23;goto B66746f;
case 0x667472:c.instructions+=22;goto B667472;
case 0x667474:c.instructions+=21;goto B667474;
case 0x667476:c.instructions+=20;goto B667476;
case 0x667479:c.instructions+=19;goto B667479;
case 0x66747b:c.instructions+=18;goto B66747b;
case 0x66747d:c.instructions+=17;goto B66747d;
case 0x667480:c.instructions+=16;goto B667480;
case 0x667482:c.instructions+=15;goto B667482;
case 0x667484:c.instructions+=14;goto B667484;
case 0x667487:c.instructions+=13;goto B667487;
case 0x667489:c.instructions+=12;goto B667489;
case 0x66748c:c.instructions+=11;goto B66748c;
case 0x66748f:c.instructions+=10;goto B66748f;
case 0x667492:c.instructions+=9;goto B667492;
case 0x667495:c.instructions+=8;goto B667495;
case 0x667497:c.instructions+=7;goto B667497;
case 0x66749a:c.instructions+=6;goto B66749a;
case 0x66749c:c.instructions+=5;goto B66749c;
case 0x66749e:c.instructions+=4;goto B66749e;
case 0x6674a1:c.instructions+=3;goto B6674a1;
case 0x6674a4:c.instructions+=2;goto B6674a4;
case 0x6674a7:c.instructions+=1;goto B6674a7;
case 0x6674a9:goto L6674a9;
case 0x6674aa:c.instructions+=1;goto B6674aa;
case 0x6674ad:goto L6674ad;
case 0x6674b0:c.instructions+=6;goto B6674b0;
case 0x6674b2:c.instructions+=5;goto B6674b2;
case 0x6674b5:c.instructions+=4;goto B6674b5;
case 0x6674b7:c.instructions+=3;goto B6674b7;
case 0x6674ba:c.instructions+=2;goto B6674ba;
case 0x6674bd:c.instructions+=1;goto B6674bd;
case 0x6674bf:goto L6674bf;
case 0x6674c0:c.instructions+=1;goto B6674c0;
case 0x6674c3:goto L6674c3;
case 0x6674c6:c.instructions+=6;goto B6674c6;
case 0x6674c8:c.instructions+=5;goto B6674c8;
case 0x6674cb:c.instructions+=4;goto B6674cb;
case 0x6674cd:c.instructions+=3;goto B6674cd;
case 0x6674d0:c.instructions+=2;goto B6674d0;
case 0x6674d3:c.instructions+=1;goto B6674d3;
case 0x6674d5:goto L6674d5;
case 0x6674d6:c.instructions+=1;goto B6674d6;
case 0x6674d9:goto L6674d9;
case 0x6674dc:c.instructions+=86;goto B6674dc;
case 0x6674de:c.instructions+=85;goto B6674de;
case 0x6674e0:c.instructions+=84;goto B6674e0;
case 0x6674e2:c.instructions+=83;goto B6674e2;
case 0x6674e4:c.instructions+=82;goto B6674e4;
case 0x6674e7:c.instructions+=81;goto B6674e7;
case 0x6674e9:c.instructions+=80;goto B6674e9;
case 0x6674eb:c.instructions+=79;goto B6674eb;
case 0x6674ee:c.instructions+=78;goto B6674ee;
case 0x6674f0:c.instructions+=77;goto B6674f0;
case 0x6674f2:c.instructions+=76;goto B6674f2;
case 0x6674f5:c.instructions+=75;goto B6674f5;
case 0x6674f7:c.instructions+=74;goto B6674f7;
case 0x6674f9:c.instructions+=73;goto B6674f9;
case 0x6674fc:c.instructions+=72;goto B6674fc;
case 0x6674fe:c.instructions+=71;goto B6674fe;
case 0x667501:c.instructions+=70;goto B667501;
case 0x667504:c.instructions+=69;goto B667504;
case 0x667506:c.instructions+=68;goto B667506;
case 0x667508:c.instructions+=67;goto B667508;
case 0x66750a:c.instructions+=66;goto B66750a;
case 0x66750c:c.instructions+=65;goto B66750c;
case 0x66750f:c.instructions+=64;goto B66750f;
case 0x667511:c.instructions+=63;goto B667511;
case 0x667513:c.instructions+=62;goto B667513;
case 0x667516:c.instructions+=61;goto B667516;
case 0x667518:c.instructions+=60;goto B667518;
case 0x66751a:c.instructions+=59;goto B66751a;
case 0x66751d:c.instructions+=58;goto B66751d;
case 0x66751f:c.instructions+=57;goto B66751f;
case 0x667521:c.instructions+=56;goto B667521;
case 0x667524:c.instructions+=55;goto B667524;
case 0x667526:c.instructions+=54;goto B667526;
case 0x667529:c.instructions+=53;goto B667529;
case 0x66752c:c.instructions+=52;goto B66752c;
case 0x66752e:c.instructions+=51;goto B66752e;
case 0x667530:c.instructions+=50;goto B667530;
case 0x667532:c.instructions+=49;goto B667532;
case 0x667534:c.instructions+=48;goto B667534;
case 0x667537:c.instructions+=47;goto B667537;
case 0x667539:c.instructions+=46;goto B667539;
case 0x66753b:c.instructions+=45;goto B66753b;
case 0x66753e:c.instructions+=44;goto B66753e;
case 0x667540:c.instructions+=43;goto B667540;
case 0x667542:c.instructions+=42;goto B667542;
case 0x667545:c.instructions+=41;goto B667545;
case 0x667547:c.instructions+=40;goto B667547;
case 0x667549:c.instructions+=39;goto B667549;
case 0x66754c:c.instructions+=38;goto B66754c;
case 0x66754e:c.instructions+=37;goto B66754e;
case 0x667551:c.instructions+=36;goto B667551;
case 0x667554:c.instructions+=35;goto B667554;
case 0x667556:c.instructions+=34;goto B667556;
case 0x667559:c.instructions+=33;goto B667559;
case 0x66755c:c.instructions+=32;goto B66755c;
case 0x66755f:c.instructions+=31;goto B66755f;
case 0x667562:c.instructions+=30;goto B667562;
case 0x667565:c.instructions+=29;goto B667565;
case 0x667568:c.instructions+=28;goto B667568;
case 0x66756b:c.instructions+=27;goto B66756b;
case 0x66756d:c.instructions+=26;goto B66756d;
case 0x667570:c.instructions+=25;goto B667570;
case 0x667573:c.instructions+=24;goto B667573;
case 0x667576:c.instructions+=23;goto B667576;
case 0x667579:c.instructions+=22;goto B667579;
case 0x66757c:c.instructions+=21;goto B66757c;
case 0x66757f:c.instructions+=20;goto B66757f;
case 0x667582:c.instructions+=19;goto B667582;
case 0x667584:c.instructions+=18;goto B667584;
case 0x667587:c.instructions+=17;goto B667587;
case 0x66758a:c.instructions+=16;goto B66758a;
case 0x66758d:c.instructions+=15;goto B66758d;
case 0x667590:c.instructions+=14;goto B667590;
case 0x667593:c.instructions+=13;goto B667593;
case 0x667596:c.instructions+=12;goto B667596;
case 0x667599:c.instructions+=11;goto B667599;
case 0x66759c:c.instructions+=10;goto B66759c;
case 0x66759f:c.instructions+=9;goto B66759f;
case 0x6675a1:c.instructions+=8;goto B6675a1;
case 0x6675a4:c.instructions+=7;goto B6675a4;
case 0x6675a7:c.instructions+=6;goto B6675a7;
case 0x6675aa:c.instructions+=5;goto B6675aa;
case 0x6675ad:c.instructions+=4;goto B6675ad;
case 0x6675b0:c.instructions+=3;goto B6675b0;
case 0x6675b4:c.instructions+=2;goto B6675b4;
case 0x6675b8:c.instructions+=1;goto B6675b8;
case 0x6675bb:goto L6675bb;
case 0x6675be:c.instructions+=9;goto B6675be;
case 0x6675c1:c.instructions+=8;goto B6675c1;
case 0x6675c4:c.instructions+=7;goto B6675c4;
case 0x6675c7:c.instructions+=6;goto B6675c7;
case 0x6675ca:c.instructions+=5;goto B6675ca;
case 0x6675cc:c.instructions+=4;goto B6675cc;
case 0x6675cd:c.instructions+=3;goto B6675cd;
case 0x6675d0:c.instructions+=2;goto B6675d0;
case 0x6675d3:c.instructions+=1;goto B6675d3;
case 0x6675d5:goto L6675d5;
case 0x6675d8:c.instructions+=18;goto B6675d8;
case 0x6675db:c.instructions+=17;goto B6675db;
case 0x6675de:c.instructions+=16;goto B6675de;
case 0x6675e3:c.instructions+=15;goto B6675e3;
case 0x6675e6:c.instructions+=14;goto B6675e6;
case 0x6675e9:c.instructions+=13;goto B6675e9;
case 0x6675ed:c.instructions+=12;goto B6675ed;
case 0x6675f1:c.instructions+=11;goto B6675f1;
case 0x6675f4:c.instructions+=10;goto B6675f4;
case 0x6675f7:c.instructions+=9;goto B6675f7;
case 0x6675fb:c.instructions+=8;goto B6675fb;
case 0x6675ff:c.instructions+=7;goto B6675ff;
case 0x667602:c.instructions+=6;goto B667602;
case 0x667605:c.instructions+=5;goto B667605;
case 0x667608:c.instructions+=4;goto B667608;
case 0x66760b:c.instructions+=3;goto B66760b;
case 0x66760d:c.instructions+=2;goto B66760d;
case 0x667610:c.instructions+=1;goto B667610;
case 0x667612:goto L667612;
case 0x667614:goto L667614;
case 0x667616:c.instructions+=1;goto B667616;
case 0x667619:goto L667619;
case 0x66761b:goto L66761b;
case 0x66761e:c.instructions+=6;goto B66761e;
case 0x667621:c.instructions+=5;goto B667621;
case 0x667622:c.instructions+=4;goto B667622;
case 0x667625:c.instructions+=3;goto B667625;
case 0x667626:c.instructions+=2;goto B667626;
case 0x667627:c.instructions+=1;goto B667627;
case 0x66762c:goto L66762c;
case 0x66762e:c.instructions+=2;goto B66762e;
case 0x667631:c.instructions+=1;goto B667631;
case 0x667637:goto L667637;
case 0x66763b:c.instructions+=6;goto B66763b;
case 0x66763e:c.instructions+=5;goto B66763e;
case 0x667641:c.instructions+=4;goto B667641;
case 0x667642:c.instructions+=3;goto B667642;
case 0x667643:c.instructions+=2;goto B667643;
case 0x667646:c.instructions+=1;goto B667646;
case 0x66764b:goto L66764b;
case 0x66764d:c.instructions+=2;goto B66764d;
case 0x667650:c.instructions+=1;goto B667650;
case 0x667656:goto L667656;
case 0x667659:c.instructions+=9;goto B667659;
case 0x66765f:c.instructions+=8;goto B66765f;
case 0x667666:c.instructions+=7;goto B667666;
case 0x66766a:c.instructions+=6;goto B66766a;
case 0x66766d:c.instructions+=5;goto B66766d;
case 0x667670:c.instructions+=4;goto B667670;
case 0x667673:c.instructions+=3;goto B667673;
case 0x667676:c.instructions+=2;goto B667676;
case 0x667679:c.instructions+=1;goto B667679;
case 0x66767b:goto L66767b;
case 0x667680:c.instructions+=2;goto B667680;
case 0x667683:c.instructions+=1;goto B667683;
case 0x667685:goto L667685;
case 0x667688:c.instructions+=7;goto B667688;
case 0x66768a:c.instructions+=6;goto B66768a;
case 0x66768d:c.instructions+=5;goto B66768d;
case 0x66768f:c.instructions+=4;goto B66768f;
case 0x667691:c.instructions+=3;goto B667691;
case 0x667694:c.instructions+=2;goto B667694;
case 0x667696:c.instructions+=1;goto B667696;
case 0x667698:goto L667698;
case 0x66769b:goto L66769b;
case 0x66769d:c.instructions+=3;goto B66769d;
case 0x6676a0:c.instructions+=2;goto B6676a0;
case 0x6676a1:c.instructions+=1;goto B6676a1;
case 0x6676a3:goto L6676a3;
case 0x6676a6:c.instructions+=4;goto B6676a6;
case 0x6676a9:c.instructions+=3;goto B6676a9;
case 0x6676ac:c.instructions+=2;goto B6676ac;
case 0x6676ae:c.instructions+=1;goto B6676ae;
case 0x6676b0:goto L6676b0;
case 0x6676b2:goto L6676b2;
case 0x6676b7:c.instructions+=5;goto B6676b7;
case 0x6676ba:c.instructions+=4;goto B6676ba;
case 0x6676bd:c.instructions+=3;goto B6676bd;
case 0x6676bf:c.instructions+=2;goto B6676bf;
case 0x6676c1:c.instructions+=1;goto B6676c1;
case 0x6676c3:goto L6676c3;
case 0x6676c5:c.instructions+=1;goto B6676c5;
case 0x6676c7:goto L6676c7;
case 0x6676ca:c.instructions+=1;goto B6676ca;
case 0x6676cc:goto L6676cc;
case 0x6676d0:goto L6676d0;
case 0x6676d4:c.instructions+=5;goto B6676d4;
case 0x6676d8:c.instructions+=4;goto B6676d8;
case 0x6676d9:c.instructions+=3;goto B6676d9;
case 0x6676da:c.instructions+=2;goto B6676da;
case 0x6676dd:c.instructions+=1;goto B6676dd;
case 0x6676df:goto L6676df;
case 0x6676e1:goto L6676e1;
case 0x6676e5:goto L6676e5;
case 0x6676e9:c.instructions+=1;goto B6676e9;
case 0x6676eb:goto L6676eb;
case 0x6676ed:c.instructions+=3;goto B6676ed;
case 0x6676f1:c.instructions+=2;goto B6676f1;
case 0x6676f5:c.instructions+=1;goto B6676f5;
case 0x6676f7:goto L6676f7;
case 0x6676fa:goto L6676fa;
case 0x6676fe:c.instructions+=4;goto B6676fe;
case 0x667700:c.instructions+=3;goto B667700;
case 0x667704:c.instructions+=2;goto B667704;
case 0x667708:c.instructions+=1;goto B667708;
case 0x66770a:goto L66770a;
case 0x66770d:goto L66770d;
case 0x667711:c.instructions+=4;goto B667711;
case 0x667713:c.instructions+=3;goto B667713;
case 0x667717:c.instructions+=2;goto B667717;
case 0x66771b:c.instructions+=1;goto B66771b;
case 0x66771d:goto L66771d;
case 0x667720:goto L667720;
case 0x667724:goto L667724;
case 0x667726:c.instructions+=1;goto B667726;
case 0x66772b:goto L66772b;
case 0x66772d:c.instructions+=2;goto B66772d;
case 0x667730:c.instructions+=1;goto B667730;
case 0x667736:goto L667736;
case 0x66773b:c.instructions+=5;goto B66773b;
case 0x66773e:c.instructions+=4;goto B66773e;
case 0x667741:c.instructions+=3;goto B667741;
case 0x667744:c.instructions+=2;goto B667744;
case 0x667745:c.instructions+=1;goto B667745;
case 0x66774a:goto L66774a;
case 0x66774c:c.instructions+=3;goto B66774c;
case 0x66774d:c.instructions+=2;goto B66774d;
case 0x667750:c.instructions+=1;goto B667750;
case 0x667756:goto L667756;
case 0x667759:c.instructions+=4;goto B667759;
case 0x66775b:c.instructions+=3;goto B66775b;
case 0x66775d:c.instructions+=2;goto B66775d;
case 0x667760:c.instructions+=1;goto B667760;
case 0x667762:goto L667762;
case 0x667765:c.instructions+=4;goto B667765;
case 0x667766:c.instructions+=3;goto B667766;
case 0x667769:c.instructions+=2;goto B667769;
case 0x66776c:c.instructions+=1;goto B66776c;
case 0x66776e:goto L66776e;
case 0x667773:c.instructions+=4;goto B667773;
case 0x667775:c.instructions+=3;goto B667775;
case 0x667778:c.instructions+=2;goto B667778;
case 0x667779:c.instructions+=1;goto B667779;
case 0x66777e:goto L66777e;
case 0x667781:c.instructions+=8;goto B667781;
case 0x667784:c.instructions+=7;goto B667784;
case 0x667786:c.instructions+=6;goto B667786;
case 0x667789:c.instructions+=5;goto B667789;
case 0x66778b:c.instructions+=4;goto B66778b;
case 0x66778d:c.instructions+=3;goto B66778d;
case 0x66778f:c.instructions+=2;goto B66778f;
case 0x667792:c.instructions+=1;goto B667792;
case 0x667794:goto L667794;
case 0x667797:c.instructions+=1;goto B667797;
case 0x66779a:goto L66779a;
case 0x66779d:c.instructions+=2;goto B66779d;
case 0x6677a0:c.instructions+=1;goto B6677a0;
case 0x6677a2:goto L6677a2;
case 0x6677a3:c.instructions+=1;goto B6677a3;
case 0x6677a5:goto L6677a5;
case 0x6677a6:c.instructions+=1;goto B6677a6;
case 0x6677a8:goto L6677a8;
case 0x6677a9:c.instructions+=1;goto B6677a9;
case 0x6677ab:goto L6677ab;
case 0x6677ae:c.instructions+=1;goto B6677ae;
case 0x6677b0:goto L6677b0;
case 0x6677b1:goto L6677b1;
case 0x6677b4:c.instructions+=2;goto B6677b4;
case 0x6677b7:c.instructions+=1;goto B6677b7;
case 0x6677b9:goto L6677b9;
case 0x6677bc:c.instructions+=20;goto B6677bc;
case 0x6677c0:c.instructions+=19;goto B6677c0;
case 0x6677c2:c.instructions+=18;goto B6677c2;
case 0x6677c6:c.instructions+=17;goto B6677c6;
case 0x6677c8:c.instructions+=16;goto B6677c8;
case 0x6677ca:c.instructions+=15;goto B6677ca;
case 0x6677cc:c.instructions+=14;goto B6677cc;
case 0x6677cf:c.instructions+=13;goto B6677cf;
case 0x6677d3:c.instructions+=12;goto B6677d3;
case 0x6677d6:c.instructions+=11;goto B6677d6;
case 0x6677da:c.instructions+=10;goto B6677da;
case 0x6677de:c.instructions+=9;goto B6677de;
case 0x6677e2:c.instructions+=8;goto B6677e2;
case 0x6677e6:c.instructions+=7;goto B6677e6;
case 0x6677ea:c.instructions+=6;goto B6677ea;
case 0x6677ee:c.instructions+=5;goto B6677ee;
case 0x6677f2:c.instructions+=4;goto B6677f2;
case 0x6677f5:c.instructions+=3;goto B6677f5;
case 0x6677f8:c.instructions+=2;goto B6677f8;
case 0x6677fb:c.instructions+=1;goto B6677fb;
case 0x667801:goto L667801;
case 0x667804:c.instructions+=7;goto B667804;
case 0x667807:c.instructions+=6;goto B667807;
case 0x66780a:c.instructions+=5;goto B66780a;
case 0x66780e:c.instructions+=4;goto B66780e;
case 0x667812:c.instructions+=3;goto B667812;
case 0x667815:c.instructions+=2;goto B667815;
case 0x667818:c.instructions+=1;goto B667818;
case 0x66781a:goto L66781a;
case 0x66781b:c.instructions+=1;goto B66781b;
case 0x66781d:goto L66781d;
case 0x66781e:c.instructions+=1;goto B66781e;
case 0x667820:goto L667820;
case 0x667821:c.instructions+=1;goto B667821;
case 0x667823:goto L667823;
case 0x667827:c.instructions+=2;goto B667827;
case 0x66782a:c.instructions+=1;goto B66782a;
case 0x66782c:goto L66782c;
case 0x667830:c.instructions+=2;goto B667830;
case 0x667833:c.instructions+=1;goto B667833;
case 0x667835:goto L667835;
case 0x667839:c.instructions+=2;goto B667839;
case 0x66783c:c.instructions+=1;goto B66783c;
case 0x66783e:goto L66783e;
case 0x667842:c.instructions+=1;goto B667842;
case 0x667845:goto L667845;
case 0x667848:goto L667848;
case 0x66784b:c.instructions+=14;goto B66784b;
case 0x66784f:c.instructions+=13;goto B66784f;
case 0x667852:c.instructions+=12;goto B667852;
case 0x667855:c.instructions+=11;goto B667855;
case 0x667858:c.instructions+=10;goto B667858;
case 0x66785c:c.instructions+=9;goto B66785c;
case 0x667860:c.instructions+=8;goto B667860;
case 0x667864:c.instructions+=7;goto B667864;
case 0x667868:c.instructions+=6;goto B667868;
case 0x66786a:c.instructions+=5;goto B66786a;
case 0x66786d:c.instructions+=4;goto B66786d;
case 0x66786f:c.instructions+=3;goto B66786f;
case 0x667870:c.instructions+=2;goto B667870;
case 0x667873:c.instructions+=1;goto B667873;
case 0x667878:goto L667878;
case 0x66787a:c.instructions+=2;goto B66787a;
case 0x66787d:c.instructions+=1;goto B66787d;
case 0x667883:goto L667883;
case 0x667888:c.instructions+=1;goto B667888;
case 0x66788a:goto L66788a;
case 0x66788c:c.instructions+=1;goto B66788c;
case 0x667891:goto L667891;
case 0x667893:c.instructions+=2;goto B667893;
case 0x667894:c.instructions+=1;goto B667894;
case 0x667896:goto L667896;
case 0x667898:c.instructions+=9;goto B667898;
case 0x66789d:c.instructions+=8;goto B66789d;
case 0x66789e:c.instructions+=7;goto B66789e;
case 0x66789f:c.instructions+=6;goto B66789f;
case 0x6678a1:c.instructions+=5;goto B6678a1;
case 0x6678a4:c.instructions+=4;goto B6678a4;
case 0x6678a6:c.instructions+=3;goto B6678a6;
case 0x6678a7:c.instructions+=2;goto B6678a7;
case 0x6678aa:c.instructions+=1;goto B6678aa;
case 0x6678af:goto L6678af;
case 0x6678b2:c.instructions+=1;goto B6678b2;
case 0x6678b4:goto L6678b4;
case 0x6678b6:goto L6678b6;
case 0x6678b8:c.instructions+=2;goto B6678b8;
case 0x6678bb:c.instructions+=1;goto B6678bb;
case 0x6678c1:goto L6678c1;
case 0x6678c7:goto L6678c7;
case 0x6678ca:c.instructions+=6;goto B6678ca;
case 0x6678cb:c.instructions+=5;goto B6678cb;
case 0x6678ce:c.instructions+=4;goto B6678ce;
case 0x6678d0:c.instructions+=3;goto B6678d0;
case 0x6678d3:c.instructions+=2;goto B6678d3;
case 0x6678d6:c.instructions+=1;goto B6678d6;
case 0x6678db:goto L6678db;
case 0x6678dd:c.instructions+=2;goto B6678dd;
case 0x6678e0:c.instructions+=1;goto B6678e0;
case 0x6678e6:goto L6678e6;
case 0x6678e9:c.instructions+=6;goto B6678e9;
case 0x6678ec:c.instructions+=5;goto B6678ec;
case 0x6678ee:c.instructions+=4;goto B6678ee;
case 0x6678f1:c.instructions+=3;goto B6678f1;
case 0x6678f2:c.instructions+=2;goto B6678f2;
case 0x6678f4:c.instructions+=1;goto B6678f4;
case 0x6678fa:goto L6678fa;
case 0x6678fc:goto L6678fc;
case 0x667900:c.instructions+=4;goto B667900;
case 0x667904:c.instructions+=3;goto B667904;
case 0x667908:c.instructions+=2;goto B667908;
case 0x66790e:c.instructions+=1;goto B66790e;
case 0x667910:goto L667910;
case 0x667913:c.instructions+=2;goto B667913;
case 0x667916:c.instructions+=1;goto B667916;
case 0x667919:goto L667919;
case 0x66791c:c.instructions+=5;goto B66791c;
case 0x66791f:c.instructions+=4;goto B66791f;
case 0x667922:c.instructions+=3;goto B667922;
case 0x667926:c.instructions+=2;goto B667926;
case 0x667929:c.instructions+=1;goto B667929;
case 0x66792f:goto L66792f;
case 0x667930:c.instructions+=1;goto B667930;
case 0x667936:goto L667936;
case 0x667937:c.instructions+=1;goto B667937;
case 0x66793d:goto L66793d;
case 0x66793e:c.instructions+=1;goto B66793e;
case 0x667944:goto L667944;
case 0x667947:c.instructions+=11;goto B667947;
case 0x66794d:c.instructions+=10;goto B66794d;
case 0x667954:c.instructions+=9;goto B667954;
case 0x667958:c.instructions+=8;goto B667958;
case 0x66795e:c.instructions+=7;goto B66795e;
case 0x667962:c.instructions+=6;goto B667962;
case 0x667965:c.instructions+=5;goto B667965;
case 0x667968:c.instructions+=4;goto B667968;
case 0x66796a:c.instructions+=3;goto B66796a;
case 0x66796c:c.instructions+=2;goto B66796c;
case 0x66796e:c.instructions+=1;goto B66796e;
case 0x667970:goto L667970;
case 0x667974:c.instructions+=12;goto B667974;
case 0x667976:c.instructions+=11;goto B667976;
case 0x667979:c.instructions+=10;goto B667979;
case 0x66797b:c.instructions+=9;goto B66797b;
case 0x66797f:c.instructions+=8;goto B66797f;
case 0x667981:c.instructions+=7;goto B667981;
case 0x667984:c.instructions+=6;goto B667984;
case 0x66798a:c.instructions+=5;goto B66798a;
case 0x66798e:c.instructions+=4;goto B66798e;
case 0x667990:c.instructions+=3;goto B667990;
case 0x667994:c.instructions+=2;goto B667994;
case 0x667997:c.instructions+=1;goto B667997;
case 0x667999:goto L667999;
case 0x66799b:goto L66799b;
case 0x66799f:c.instructions+=1;goto B66799f;
case 0x6679a1:goto L6679a1;
case 0x6679a3:c.instructions+=5;goto B6679a3;
case 0x6679a6:c.instructions+=4;goto B6679a6;
case 0x6679aa:c.instructions+=3;goto B6679aa;
case 0x6679ac:c.instructions+=2;goto B6679ac;
case 0x6679af:c.instructions+=1;goto B6679af;
case 0x6679b4:goto L6679b4;
case 0x6679b8:c.instructions+=7;goto B6679b8;
case 0x6679bb:c.instructions+=6;goto B6679bb;
case 0x6679bf:c.instructions+=5;goto B6679bf;
case 0x6679c2:c.instructions+=4;goto B6679c2;
case 0x6679c4:c.instructions+=3;goto B6679c4;
case 0x6679c8:c.instructions+=2;goto B6679c8;
case 0x6679cc:c.instructions+=1;goto B6679cc;
case 0x6679d1:goto L6679d1;
case 0x6679d3:c.instructions+=1;goto B6679d3;
case 0x6679d9:goto L6679d9;
case 0x6679dc:c.instructions+=6;goto B6679dc;
case 0x6679de:c.instructions+=5;goto B6679de;
case 0x6679e1:c.instructions+=4;goto B6679e1;
case 0x6679e3:c.instructions+=3;goto B6679e3;
case 0x6679e4:c.instructions+=2;goto B6679e4;
case 0x6679e7:c.instructions+=1;goto B6679e7;
case 0x6679e9:goto L6679e9;
case 0x6679ec:c.instructions+=1;goto B6679ec;
case 0x6679ee:goto L6679ee;
case 0x6679f1:c.instructions+=2;goto B6679f1;
case 0x6679f4:c.instructions+=1;goto B6679f4;
case 0x6679f7:goto L6679f7;
case 0x6679fa:c.instructions+=7;goto B6679fa;
case 0x6679fd:c.instructions+=6;goto B6679fd;
case 0x667a00:c.instructions+=5;goto B667a00;
case 0x667a03:c.instructions+=4;goto B667a03;
case 0x667a06:c.instructions+=3;goto B667a06;
case 0x667a09:c.instructions+=2;goto B667a09;
case 0x667a0b:c.instructions+=1;goto B667a0b;
case 0x667a11:goto L667a11;
case 0x667a14:c.instructions+=1;goto B667a14;
case 0x667a1a:goto L667a1a;
case 0x667a1d:c.instructions+=1;goto B667a1d;
case 0x667a1f:goto L667a1f;
case 0x667a22:c.instructions+=1;goto B667a22;
case 0x667a28:goto L667a28;
case 0x667a2b:c.instructions+=4;goto B667a2b;
case 0x667a2e:c.instructions+=3;goto B667a2e;
case 0x667a2f:c.instructions+=2;goto B667a2f;
case 0x667a32:c.instructions+=1;goto B667a32;
case 0x667a37:goto L667a37;
case 0x667a39:c.instructions+=1;goto B667a39;
case 0x667a3f:goto L667a3f;
case 0x667a41:c.instructions+=4;goto B667a41;
case 0x667a44:c.instructions+=3;goto B667a44;
case 0x667a45:c.instructions+=2;goto B667a45;
case 0x667a48:c.instructions+=1;goto B667a48;
case 0x667a4d:goto L667a4d;
case 0x667a50:c.instructions+=8;goto B667a50;
case 0x667a54:c.instructions+=7;goto B667a54;
case 0x667a57:c.instructions+=6;goto B667a57;
case 0x667a59:c.instructions+=5;goto B667a59;
case 0x667a5c:c.instructions+=4;goto B667a5c;
case 0x667a5f:c.instructions+=3;goto B667a5f;
case 0x667a63:c.instructions+=2;goto B667a63;
case 0x667a65:c.instructions+=1;goto B667a65;
case 0x667a67:goto L667a67;
case 0x667a69:goto L667a69;
case 0x667a6c:c.instructions+=4;goto B667a6c;
case 0x667a6f:c.instructions+=3;goto B667a6f;
case 0x667a72:c.instructions+=2;goto B667a72;
case 0x667a75:c.instructions+=1;goto B667a75;
case 0x667a77:goto L667a77;
case 0x667a7b:c.instructions+=1;goto B667a7b;
case 0x667a7d:goto L667a7d;
case 0x667a81:c.instructions+=1;goto B667a81;
case 0x667a83:goto L667a83;
case 0x667a86:c.instructions+=2;goto B667a86;
case 0x667a89:c.instructions+=1;goto B667a89;
case 0x667a8b:goto L667a8b;
case 0x667a8f:c.instructions+=5;goto B667a8f;
case 0x667a91:c.instructions+=4;goto B667a91;
case 0x667a94:c.instructions+=3;goto B667a94;
case 0x667a98:c.instructions+=2;goto B667a98;
case 0x667a9b:c.instructions+=1;goto B667a9b;
case 0x667a9d:goto L667a9d;
case 0x667aa0:c.instructions+=1;goto B667aa0;
case 0x667aa2:goto L667aa2;
case 0x667aa6:c.instructions+=1;goto B667aa6;
case 0x667aa8:goto L667aa8;
case 0x667aac:c.instructions+=7;goto B667aac;
case 0x667aae:c.instructions+=6;goto B667aae;
case 0x667ab1:c.instructions+=5;goto B667ab1;
case 0x667ab3:c.instructions+=4;goto B667ab3;
case 0x667ab7:c.instructions+=3;goto B667ab7;
case 0x667aba:c.instructions+=2;goto B667aba;
case 0x667abc:c.instructions+=1;goto B667abc;
case 0x667abe:goto L667abe;
case 0x667ac0:c.instructions+=1;goto B667ac0;
case 0x667ac2:goto L667ac2;
case 0x667ac6:c.instructions+=1;goto B667ac6;
case 0x667ac8:goto L667ac8;
case 0x667acc:c.instructions+=5;goto B667acc;
case 0x667ace:c.instructions+=4;goto B667ace;
case 0x667ad1:c.instructions+=3;goto B667ad1;
case 0x667ad5:c.instructions+=2;goto B667ad5;
case 0x667ad8:c.instructions+=1;goto B667ad8;
case 0x667ada:goto L667ada;
case 0x667add:goto L667add;
case 0x667ae0:c.instructions+=1;goto B667ae0;
case 0x667ae3:goto L667ae3;
case 0x667ae9:c.instructions+=11;goto B667ae9;
case 0x667af0:c.instructions+=10;goto B667af0;
case 0x667af4:c.instructions+=9;goto B667af4;
case 0x667af7:c.instructions+=8;goto B667af7;
case 0x667afa:c.instructions+=7;goto B667afa;
case 0x667afe:c.instructions+=6;goto B667afe;
case 0x667b01:c.instructions+=5;goto B667b01;
case 0x667b03:c.instructions+=4;goto B667b03;
case 0x667b06:c.instructions+=3;goto B667b06;
case 0x667b08:c.instructions+=2;goto B667b08;
case 0x667b0b:c.instructions+=1;goto B667b0b;
case 0x667b0d:goto L667b0d;
case 0x667b10:c.instructions+=4;goto B667b10;
case 0x667b13:c.instructions+=3;goto B667b13;
case 0x667b15:c.instructions+=2;goto B667b15;
case 0x667b17:c.instructions+=1;goto B667b17;
case 0x667b1a:goto L667b1a;
case 0x667b1c:goto L667b1c;
case 0x667b1e:c.instructions+=1;goto B667b1e;
case 0x667b21:goto L667b21;
case 0x667b23:goto L667b23;
case 0x667b25:goto L667b25;
case 0x667b27:c.instructions+=3;goto B667b27;
case 0x667b29:c.instructions+=2;goto B667b29;
case 0x667b2c:c.instructions+=1;goto B667b2c;
case 0x667b2e:goto L667b2e;
case 0x667b30:goto L667b30;
case 0x667b32:c.instructions+=1;goto B667b32;
case 0x667b35:goto L667b35;
case 0x667b37:goto L667b37;
case 0x667b3b:c.instructions+=1;goto B667b3b;
case 0x667b41:goto L667b41;
case 0x667b44:c.instructions+=2;goto B667b44;
case 0x667b46:c.instructions+=1;goto B667b46;
case 0x667b48:goto L667b48;
case 0x667b4c:goto L667b4c;
case 0x667b4f:c.instructions+=1;goto B667b4f;
case 0x667b54:goto L667b54;
case 0x667b58:c.instructions+=8;goto B667b58;
case 0x667b5e:c.instructions+=7;goto B667b5e;
case 0x667b65:c.instructions+=6;goto B667b65;
case 0x667b69:c.instructions+=5;goto B667b69;
case 0x667b6c:c.instructions+=4;goto B667b6c;
case 0x667b6f:c.instructions+=3;goto B667b6f;
case 0x667b72:c.instructions+=2;goto B667b72;
case 0x667b77:c.instructions+=1;goto B667b77;
case 0x667b79:goto L667b79;
case 0x667b7b:goto L667b7b;
case 0x667b7d:c.instructions+=16;goto B667b7d;
case 0x667b80:c.instructions+=15;goto B667b80;
case 0x667b84:c.instructions+=14;goto B667b84;
case 0x667b86:c.instructions+=13;goto B667b86;
case 0x667b89:c.instructions+=12;goto B667b89;
case 0x667b8c:c.instructions+=11;goto B667b8c;
case 0x667b91:c.instructions+=10;goto B667b91;
case 0x667b93:c.instructions+=9;goto B667b93;
case 0x667b96:c.instructions+=8;goto B667b96;
case 0x667b9e:c.instructions+=7;goto B667b9e;
case 0x667ba0:c.instructions+=6;goto B667ba0;
case 0x667ba3:c.instructions+=5;goto B667ba3;
case 0x667ba8:c.instructions+=4;goto B667ba8;
case 0x667bac:c.instructions+=3;goto B667bac;
case 0x667baf:c.instructions+=2;goto B667baf;
case 0x667bb2:c.instructions+=1;goto B667bb2;
case 0x667bb4:goto L667bb4;
case 0x667bb7:c.instructions+=2;goto B667bb7;
case 0x667bb9:c.instructions+=1;goto B667bb9;
case 0x667bbb:goto L667bbb;
case 0x667bbf:c.instructions+=6;goto B667bbf;
case 0x667bc1:c.instructions+=5;goto B667bc1;
case 0x667bc4:c.instructions+=4;goto B667bc4;
case 0x667bc7:c.instructions+=3;goto B667bc7;
case 0x667bc9:c.instructions+=2;goto B667bc9;
case 0x667bcb:c.instructions+=1;goto B667bcb;
case 0x667bce:goto L667bce;
case 0x667bd0:goto L667bd0;
case 0x667bd2:c.instructions+=1;goto B667bd2;
case 0x667bd5:goto L667bd5;
case 0x667bd7:goto L667bd7;
case 0x667bdb:c.instructions+=1;goto B667bdb;
case 0x667bdd:goto L667bdd;
case 0x667be0:c.instructions+=2;goto B667be0;
case 0x667be2:c.instructions+=1;goto B667be2;
case 0x667be4:goto L667be4;
case 0x667be8:goto L667be8;
case 0x667beb:c.instructions+=1;goto B667beb;
case 0x667bed:goto L667bed;
case 0x667bf0:c.instructions+=13;goto B667bf0;
case 0x667bf6:c.instructions+=12;goto B667bf6;
case 0x667bfd:c.instructions+=11;goto B667bfd;
case 0x667c01:c.instructions+=10;goto B667c01;
case 0x667c04:c.instructions+=9;goto B667c04;
case 0x667c07:c.instructions+=8;goto B667c07;
case 0x667c0b:c.instructions+=7;goto B667c0b;
case 0x667c0e:c.instructions+=6;goto B667c0e;
case 0x667c11:c.instructions+=5;goto B667c11;
case 0x667c13:c.instructions+=4;goto B667c13;
case 0x667c16:c.instructions+=3;goto B667c16;
case 0x667c19:c.instructions+=2;goto B667c19;
case 0x667c1b:c.instructions+=1;goto B667c1b;
case 0x667c1d:goto L667c1d;
case 0x667c1f:c.instructions+=2;goto B667c1f;
case 0x667c21:c.instructions+=1;goto B667c21;
case 0x667c24:goto L667c24;
case 0x667c26:goto L667c26;
case 0x667c28:c.instructions+=1;goto B667c28;
case 0x667c2b:goto L667c2b;
case 0x667c2d:goto L667c2d;
case 0x667c2f:goto L667c2f;
case 0x667c31:c.instructions+=2;goto B667c31;
case 0x667c34:c.instructions+=1;goto B667c34;
case 0x667c36:goto L667c36;
case 0x667c38:goto L667c38;
case 0x667c3a:c.instructions+=1;goto B667c3a;
case 0x667c3d:goto L667c3d;
case 0x667c3f:goto L667c3f;
case 0x667c43:c.instructions+=1;goto B667c43;
case 0x667c45:goto L667c45;
case 0x667c48:c.instructions+=2;goto B667c48;
case 0x667c4a:c.instructions+=1;goto B667c4a;
case 0x667c4c:goto L667c4c;
case 0x667c50:goto L667c50;
case 0x667c53:goto L667c53;
case 0x667c56:c.instructions+=4;goto B667c56;
case 0x667c59:c.instructions+=3;goto B667c59;
case 0x667c5c:c.instructions+=2;goto B667c5c;
case 0x667c5f:c.instructions+=1;goto B667c5f;
case 0x667c65:goto L667c65;
case 0x667c68:c.instructions+=2;goto B667c68;
case 0x667c6b:c.instructions+=1;goto B667c6b;
case 0x667c6e:goto L667c6e;
case 0x667c72:c.instructions+=5;goto B667c72;
case 0x667c76:c.instructions+=4;goto B667c76;
case 0x667c7a:c.instructions+=3;goto B667c7a;
case 0x667c7e:c.instructions+=2;goto B667c7e;
case 0x667c82:c.instructions+=1;goto B667c82;
case 0x667c87:goto L667c87;
case 0x667c8e:c.instructions+=1;goto B667c8e;
case 0x667c93:goto L667c93;
case 0x667c97:c.instructions+=1;goto B667c97;
case 0x667c9d:goto L667c9d;
case 0x667ca3:c.instructions+=1;goto B667ca3;
case 0x667ca9:goto L667ca9;
case 0x667cb0:c.instructions+=1;goto B667cb0;
case 0x667cb6:goto L667cb6;
case 0x667cbc:c.instructions+=5;goto B667cbc;
case 0x667cc3:c.instructions+=4;goto B667cc3;
case 0x667cc5:c.instructions+=3;goto B667cc5;
case 0x667cc8:c.instructions+=2;goto B667cc8;
case 0x667ccb:c.instructions+=1;goto B667ccb;
case 0x667ccd:goto L667ccd;
case 0x667cd0:c.instructions+=5;goto B667cd0;
case 0x667cd6:c.instructions+=4;goto B667cd6;
case 0x667cd9:c.instructions+=3;goto B667cd9;
case 0x667cdc:c.instructions+=2;goto B667cdc;
case 0x667cde:c.instructions+=1;goto B667cde;
case 0x667ce0:goto L667ce0;
case 0x667ce3:c.instructions+=8;goto B667ce3;
case 0x667ce9:c.instructions+=7;goto B667ce9;
case 0x667cec:c.instructions+=6;goto B667cec;
case 0x667cef:c.instructions+=5;goto B667cef;
case 0x667cf2:c.instructions+=4;goto B667cf2;
case 0x667cf4:c.instructions+=3;goto B667cf4;
case 0x667cf6:c.instructions+=2;goto B667cf6;
case 0x667cf8:c.instructions+=1;goto B667cf8;
case 0x667cfa:goto L667cfa;
case 0x667cfe:c.instructions+=2;goto B667cfe;
case 0x667d01:c.instructions+=1;goto B667d01;
case 0x667d03:goto L667d03;
case 0x667d05:c.instructions+=1;goto B667d05;
case 0x667d07:goto L667d07;
case 0x667d0a:c.instructions+=2;goto B667d0a;
case 0x667d0c:c.instructions+=1;goto B667d0c;
case 0x667d0e:goto L667d0e;
case 0x667d11:c.instructions+=2;goto B667d11;
case 0x667d13:c.instructions+=1;goto B667d13;
case 0x667d15:goto L667d15;
case 0x667d18:goto L667d18;
case 0x667d1a:c.instructions+=2;goto B667d1a;
case 0x667d1d:c.instructions+=1;goto B667d1d;
case 0x667d1f:goto L667d1f;
case 0x667d23:c.instructions+=4;goto B667d23;
case 0x667d26:c.instructions+=3;goto B667d26;
case 0x667d28:c.instructions+=2;goto B667d28;
case 0x667d2a:c.instructions+=1;goto B667d2a;
case 0x667d2c:goto L667d2c;
case 0x667d2f:goto L667d2f;
case 0x667d32:c.instructions+=2;goto B667d32;
case 0x667d35:c.instructions+=1;goto B667d35;
case 0x667d37:goto L667d37;
case 0x667d3b:goto L667d3b;
case 0x667d3e:goto L667d3e;
case 0x667d41:c.instructions+=1;goto B667d41;
case 0x667d46:goto L667d46;
case 0x667d49:c.instructions+=1;goto B667d49;
case 0x667d4a:goto L667d4a;
case 0x667d4b:c.instructions+=4;goto B667d4b;
case 0x667d4c:c.instructions+=3;goto B667d4c;
case 0x667d4d:c.instructions+=2;goto B667d4d;
case 0x667d4e:c.instructions+=1;goto B667d4e;
case 0x667d51:goto L667d51;
case 0x667d53:c.instructions+=21;goto B667d53;
case 0x667d54:c.instructions+=20;goto B667d54;
case 0x667d56:c.instructions+=19;goto B667d56;
case 0x667d5c:c.instructions+=18;goto B667d5c;
case 0x667d5d:c.instructions+=17;goto B667d5d;
case 0x667d60:c.instructions+=16;goto B667d60;
case 0x667d63:c.instructions+=15;goto B667d63;
case 0x667d64:c.instructions+=14;goto B667d64;
case 0x667d65:c.instructions+=13;goto B667d65;
case 0x667d67:c.instructions+=12;goto B667d67;
case 0x667d6a:c.instructions+=11;goto B667d6a;
case 0x667d70:c.instructions+=10;goto B667d70;
case 0x667d73:c.instructions+=9;goto B667d73;
case 0x667d76:c.instructions+=8;goto B667d76;
case 0x667d79:c.instructions+=7;goto B667d79;
case 0x667d7c:c.instructions+=6;goto B667d7c;
case 0x667d7e:c.instructions+=5;goto B667d7e;
case 0x667d81:c.instructions+=4;goto B667d81;
case 0x667d84:c.instructions+=3;goto B667d84;
case 0x667d87:c.instructions+=2;goto B667d87;
case 0x667d8a:c.instructions+=1;goto B667d8a;
case 0x667d8c:goto L667d8c;
case 0x667d8f:c.instructions+=1;goto B667d8f;
case 0x667d91:goto L667d91;
case 0x667d94:c.instructions+=1;goto B667d94;
case 0x667d97:goto L667d97;
case 0x667d9a:c.instructions+=13;goto B667d9a;
case 0x667da0:c.instructions+=12;goto B667da0;
case 0x667da3:c.instructions+=11;goto B667da3;
case 0x667da6:c.instructions+=10;goto B667da6;
case 0x667da9:c.instructions+=9;goto B667da9;
case 0x667dac:c.instructions+=8;goto B667dac;
case 0x667daf:c.instructions+=7;goto B667daf;
case 0x667db2:c.instructions+=6;goto B667db2;
case 0x667db5:c.instructions+=5;goto B667db5;
case 0x667dbb:c.instructions+=4;goto B667dbb;
case 0x667dbe:c.instructions+=3;goto B667dbe;
case 0x667dc1:c.instructions+=2;goto B667dc1;
case 0x667dc4:c.instructions+=1;goto B667dc4;
case 0x667dc6:goto L667dc6;
case 0x667dc9:c.instructions+=1;goto B667dc9;
case 0x667dcb:goto L667dcb;
case 0x667dce:c.instructions+=1;goto B667dce;
case 0x667dd1:goto L667dd1;
case 0x667dd4:c.instructions+=15;goto B667dd4;
case 0x667dda:c.instructions+=14;goto B667dda;
case 0x667ddd:c.instructions+=13;goto B667ddd;
case 0x667de0:c.instructions+=12;goto B667de0;
case 0x667de3:c.instructions+=11;goto B667de3;
case 0x667de6:c.instructions+=10;goto B667de6;
case 0x667de9:c.instructions+=9;goto B667de9;
case 0x667dec:c.instructions+=8;goto B667dec;
case 0x667def:c.instructions+=7;goto B667def;
case 0x667df5:c.instructions+=6;goto B667df5;
case 0x667df8:c.instructions+=5;goto B667df8;
case 0x667dfb:c.instructions+=4;goto B667dfb;
case 0x667dfe:c.instructions+=3;goto B667dfe;
case 0x667e04:c.instructions+=2;goto B667e04;
case 0x667e07:c.instructions+=1;goto B667e07;
case 0x667e09:goto L667e09;
case 0x667e0c:c.instructions+=1;goto B667e0c;
case 0x667e0e:goto L667e0e;
case 0x667e11:c.instructions+=1;goto B667e11;
case 0x667e13:goto L667e13;
case 0x667e16:c.instructions+=1;goto B667e16;
case 0x667e19:goto L667e19;
case 0x667e1c:c.instructions+=3;goto B667e1c;
case 0x667e1f:c.instructions+=2;goto B667e1f;
case 0x667e22:c.instructions+=1;goto B667e22;
case 0x667e24:goto L667e24;
case 0x667e27:c.instructions+=1;goto B667e27;
case 0x667e29:goto L667e29;
case 0x667e2c:c.instructions+=1;goto B667e2c;
case 0x667e2e:goto L667e2e;
case 0x667e31:c.instructions+=1;goto B667e31;
case 0x667e34:goto L667e34;
case 0x667e3a:c.instructions+=10;goto B667e3a;
case 0x667e3d:c.instructions+=9;goto B667e3d;
case 0x667e40:c.instructions+=8;goto B667e40;
case 0x667e43:c.instructions+=7;goto B667e43;
case 0x667e46:c.instructions+=6;goto B667e46;
case 0x667e49:c.instructions+=5;goto B667e49;
case 0x667e4c:c.instructions+=4;goto B667e4c;
case 0x667e4f:c.instructions+=3;goto B667e4f;
case 0x667e52:c.instructions+=2;goto B667e52;
case 0x667e55:c.instructions+=1;goto B667e55;
case 0x667e58:goto L667e58;
case 0x667e5b:c.instructions+=7;goto B667e5b;
case 0x667e5e:c.instructions+=6;goto B667e5e;
case 0x667e61:c.instructions+=5;goto B667e61;
case 0x667e64:c.instructions+=4;goto B667e64;
case 0x667e66:c.instructions+=3;goto B667e66;
case 0x667e67:c.instructions+=2;goto B667e67;
case 0x667e69:c.instructions+=1;goto B667e69;
case 0x667e6f:goto L667e6f;
case 0x667e72:c.instructions+=1;goto B667e72;
case 0x667e74:goto L667e74;
case 0x667e77:c.instructions+=3;goto B667e77;
case 0x667e7a:c.instructions+=2;goto B667e7a;
case 0x667e7d:c.instructions+=1;goto B667e7d;
case 0x667e7f:goto L667e7f;
case 0x667e80:c.instructions+=2;goto B667e80;
case 0x667e82:c.instructions+=1;goto B667e82;
case 0x667e87:goto L667e87;
case 0x667e89:c.instructions+=2;goto B667e89;
case 0x667e8c:c.instructions+=1;goto B667e8c;
case 0x667e92:goto L667e92;
case 0x667e94:c.instructions+=2;goto B667e94;
case 0x667e96:c.instructions+=1;goto B667e96;
case 0x667e97:goto L667e97;
case 0x667e9b:c.instructions+=3;goto B667e9b;
case 0x667e9f:c.instructions+=2;goto B667e9f;
case 0x667ea2:c.instructions+=1;goto B667ea2;
case 0x667ea8:goto L667ea8;
case 0x667eaf:goto L667eaf;
case 0x667eb2:c.instructions+=5;goto B667eb2;
case 0x667eb5:c.instructions+=4;goto B667eb5;
case 0x667eb9:c.instructions+=3;goto B667eb9;
case 0x667ebe:c.instructions+=2;goto B667ebe;
case 0x667ec1:c.instructions+=1;goto B667ec1;
case 0x667ec3:goto L667ec3;
case 0x667ec8:c.instructions+=1;goto B667ec8;
case 0x667eca:goto L667eca;
case 0x667ece:c.instructions+=1;goto B667ece;
case 0x667ed0:goto L667ed0;
case 0x667ed2:c.instructions+=4;goto B667ed2;
case 0x667ed5:c.instructions+=3;goto B667ed5;
case 0x667ed7:c.instructions+=2;goto B667ed7;
case 0x667eda:c.instructions+=1;goto B667eda;
case 0x667edf:goto L667edf;
case 0x667ee1:c.instructions+=2;goto B667ee1;
case 0x667ee4:c.instructions+=1;goto B667ee4;
case 0x667eea:goto L667eea;
case 0x667eec:goto L667eec;
case 0x667eef:c.instructions+=2;goto B667eef;
case 0x667ef1:c.instructions+=1;goto B667ef1;
case 0x667ef3:goto L667ef3;
case 0x667ef5:c.instructions+=2;goto B667ef5;
case 0x667ef6:c.instructions+=1;goto B667ef6;
case 0x667ef9:goto L667ef9;
case 0x667efc:c.instructions+=2;goto B667efc;
case 0x667f00:c.instructions+=1;goto B667f00;
case 0x667f02:goto L667f02;
case 0x667f06:c.instructions+=2;goto B667f06;
case 0x667f09:c.instructions+=1;goto B667f09;
case 0x667f0b:goto L667f0b;
case 0x667f0e:c.instructions+=4;goto B667f0e;
case 0x667f10:c.instructions+=3;goto B667f10;
case 0x667f13:c.instructions+=2;goto B667f13;
case 0x667f16:c.instructions+=1;goto B667f16;
case 0x667f1b:goto L667f1b;
case 0x667f1d:c.instructions+=2;goto B667f1d;
case 0x667f20:c.instructions+=1;goto B667f20;
case 0x667f26:goto L667f26;
case 0x667f29:c.instructions+=4;goto B667f29;
case 0x667f2d:c.instructions+=3;goto B667f2d;
case 0x667f30:c.instructions+=2;goto B667f30;
case 0x667f33:c.instructions+=1;goto B667f33;
case 0x667f35:goto L667f35;
case 0x667f38:c.instructions+=1;goto B667f38;
case 0x667f3a:goto L667f3a;
case 0x667f3d:c.instructions+=5;goto B667f3d;
case 0x667f41:c.instructions+=4;goto B667f41;
case 0x667f45:c.instructions+=3;goto B667f45;
case 0x667f49:c.instructions+=2;goto B667f49;
case 0x667f4c:c.instructions+=1;goto B667f4c;
case 0x667f52:goto L667f52;
case 0x667f54:c.instructions+=1;goto B667f54;
case 0x667f55:goto L667f55;
case 0x667f57:c.instructions+=14;goto B667f57;
case 0x667f5a:c.instructions+=13;goto B667f5a;
case 0x667f5b:c.instructions+=12;goto B667f5b;
case 0x667f5c:c.instructions+=11;goto B667f5c;
case 0x667f5d:c.instructions+=10;goto B667f5d;
case 0x667f5e:c.instructions+=9;goto B667f5e;
case 0x667f62:c.instructions+=8;goto B667f62;
case 0x667f66:c.instructions+=7;goto B667f66;
case 0x667f6a:c.instructions+=6;goto B667f6a;
case 0x667f6c:c.instructions+=5;goto B667f6c;
case 0x667f6f:c.instructions+=4;goto B667f6f;
case 0x667f70:c.instructions+=3;goto B667f70;
case 0x667f71:c.instructions+=2;goto B667f71;
case 0x667f75:c.instructions+=1;goto B667f75;
case 0x667f7b:goto L667f7b;
case 0x667f7e:c.instructions+=5;goto B667f7e;
case 0x667f81:c.instructions+=4;goto B667f81;
case 0x667f84:c.instructions+=3;goto B667f84;
case 0x667f87:c.instructions+=2;goto B667f87;
case 0x667f8a:c.instructions+=1;goto B667f8a;
case 0x667f90:goto L667f90;
case 0x667f93:c.instructions+=12;goto B667f93;
case 0x667f96:c.instructions+=11;goto B667f96;
case 0x667f97:c.instructions+=10;goto B667f97;
case 0x667f9a:c.instructions+=9;goto B667f9a;
case 0x667f9b:c.instructions+=8;goto B667f9b;
case 0x667f9e:c.instructions+=7;goto B667f9e;
case 0x667f9f:c.instructions+=6;goto B667f9f;
case 0x667fa1:c.instructions+=5;goto B667fa1;
case 0x667fa4:c.instructions+=4;goto B667fa4;
case 0x667fa5:c.instructions+=3;goto B667fa5;
case 0x667fa6:c.instructions+=2;goto B667fa6;
case 0x667fa9:c.instructions+=1;goto B667fa9;
case 0x667fac:goto L667fac;
case 0x667fad:c.instructions+=1;goto B667fad;
case 0x667fb2:goto L667fb2;
case 0x667fb4:c.instructions+=2;goto B667fb4;
case 0x667fb7:c.instructions+=1;goto B667fb7;
case 0x667fbd:goto L667fbd;
case 0x667fc0:c.instructions+=12;goto B667fc0;
case 0x667fc3:c.instructions+=11;goto B667fc3;
case 0x667fc6:c.instructions+=10;goto B667fc6;
case 0x667fc9:c.instructions+=9;goto B667fc9;
case 0x667fcc:c.instructions+=8;goto B667fcc;
case 0x667fcf:c.instructions+=7;goto B667fcf;
case 0x667fd0:c.instructions+=6;goto B667fd0;
case 0x667fd3:c.instructions+=5;goto B667fd3;
case 0x667fd4:c.instructions+=4;goto B667fd4;
case 0x667fd6:c.instructions+=3;goto B667fd6;
case 0x667fdb:c.instructions+=2;goto B667fdb;
case 0x667fdc:c.instructions+=1;goto B667fdc;
case 0x667fdf:goto L667fdf;
case 0x667fe0:c.instructions+=1;goto B667fe0;
case 0x667fe5:goto L667fe5;
case 0x667fe7:c.instructions+=2;goto B667fe7;
case 0x667fea:c.instructions+=1;goto B667fea;
case 0x667ff0:goto L667ff0;
case 0x667ff2:goto L667ff2;
case 0x667ff8:c.instructions+=4;goto B667ff8;
case 0x667ff9:c.instructions+=3;goto B667ff9;
case 0x667ffc:c.instructions+=2;goto B667ffc;
case 0x667ffd:c.instructions+=1;goto B667ffd;
default:missing_instruction(c.pc);}
B667000:L667000:{c.instructions+=13;NFSU2_TR(0x667000);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667001:{NFSU2_TR(0x667001);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667002:{NFSU2_TR(0x667002);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667003:{NFSU2_TR(0x667003);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667004:{NFSU2_TR(0x667004);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667008:{NFSU2_TR(0x667008);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66700c:{NFSU2_TR(0x66700c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667010:{NFSU2_TR(0x667010);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667012:{NFSU2_TR(0x667012);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B667015:{NFSU2_TR(0x667015);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667016:{NFSU2_TR(0x667016);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667017:{NFSU2_TR(0x667017);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66701b:{NFSU2_TR(0x66701b);
if(r1(R+518)){{goto L667d3e;}}
}
B667021:L667021:{c.instructions+=6;NFSU2_TR(0x667021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667024:{NFSU2_TR(0x667024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667027:{NFSU2_TR(0x667027);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66702a:{NFSU2_TR(0x66702a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66702d:{NFSU2_TR(0x66702d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667030:{NFSU2_TR(0x667030);
if(r1(R+518)){{goto L667148;}}
}
B667036:L667036:{c.instructions+=13;NFSU2_TR(0x667036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667039:{NFSU2_TR(0x667039);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66703c:{NFSU2_TR(0x66703c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66703d:{NFSU2_TR(0x66703d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667040:{NFSU2_TR(0x667040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667041:{NFSU2_TR(0x667041);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667044:{NFSU2_TR(0x667044);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667045:{NFSU2_TR(0x667045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667047:{NFSU2_TR(0x667047);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B66704a:{NFSU2_TR(0x66704a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66704b:{NFSU2_TR(0x66704b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66704c:{NFSU2_TR(0x66704c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66704f:{NFSU2_TR(0x66704f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667052ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B667052:L667052:{c.instructions+=2;NFSU2_TR(0x667052);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667053:{NFSU2_TR(0x667053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667058ull));
TAIL_STATIC(0x65b3f7u,65b);
}
B667058:L667058:{c.instructions+=3;NFSU2_TR(0x667058);
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
B66705a:{NFSU2_TR(0x66705a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66705d:{NFSU2_TR(0x66705d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d3e;}}
}
B667063:L667063:{c.instructions+=13;NFSU2_TR(0x667063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667066:{NFSU2_TR(0x667066);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667069:{NFSU2_TR(0x667069);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66706c:{NFSU2_TR(0x66706c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66706f:{NFSU2_TR(0x66706f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667072:{NFSU2_TR(0x667072);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B667075:{NFSU2_TR(0x667075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667076:{NFSU2_TR(0x667076);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B667079:{NFSU2_TR(0x667079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66707a:{NFSU2_TR(0x66707a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66707c:{NFSU2_TR(0x66707c);
u8 U[4];
w4(U+0,u32(0x53455250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667081:{NFSU2_TR(0x667081);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667082:{NFSU2_TR(0x667082);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667085ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B667085:L667085:{c.instructions+=2;NFSU2_TR(0x667085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667086:{NFSU2_TR(0x667086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66708bull));
TAIL_STATIC(0x671db5u,671);
}
B66708b:L66708b:{c.instructions+=3;NFSU2_TR(0x66708b);
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
B66708d:{NFSU2_TR(0x66708d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667090:{NFSU2_TR(0x667090);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d4a;}}
}
B667096:L667096:{c.instructions+=1;NFSU2_TR(0x667096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667102;}}
}
B667098:L667098:{c.instructions+=8;NFSU2_TR(0x667098);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B66709e:{NFSU2_TR(0x66709e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66709f:{NFSU2_TR(0x66709f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6670a2:{NFSU2_TR(0x6670a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6670a3:{NFSU2_TR(0x6670a3);
u8 U[4];
w4(U+0,u32(0x49535250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6670a8:{NFSU2_TR(0x6670a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6670ab:{NFSU2_TR(0x6670ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6670b2:{NFSU2_TR(0x6670b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6670b7ull));
TAIL_STATIC(0x671db5u,671);
}
B6670b7:L6670b7:{c.instructions+=2;NFSU2_TR(0x6670b7);
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
B6670b9:{NFSU2_TR(0x6670b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d4a;}}
}
B6670bf:L6670bf:{c.instructions+=10;NFSU2_TR(0x6670bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6670c2:{NFSU2_TR(0x6670c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6670c3:{NFSU2_TR(0x6670c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6670c6:{NFSU2_TR(0x6670c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6670c7:{NFSU2_TR(0x6670c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6670ca:{NFSU2_TR(0x6670ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6670cb:{NFSU2_TR(0x6670cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6670ce:{NFSU2_TR(0x6670ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6670cf:{NFSU2_TR(0x6670cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6670d2:{NFSU2_TR(0x6670d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6670d7ull));
TAIL_STATIC(0x65b3f7u,65b);
}
B6670d7:L6670d7:{c.instructions+=3;NFSU2_TR(0x6670d7);
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
B6670d9:{NFSU2_TR(0x6670d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6670dc:{NFSU2_TR(0x6670dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d4a;}}
}
B6670e2:L6670e2:{c.instructions+=2;NFSU2_TR(0x6670e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6670e5:{NFSU2_TR(0x6670e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6670e7:L6670e7:{c.instructions+=6;NFSU2_TR(0x6670e7);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B6670ec:{NFSU2_TR(0x6670ec);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w2(R+8,u16(u32(r2(R+8))+u32(r2(U+8))));
}
B6670f0:{NFSU2_TR(0x6670f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6670f1:{NFSU2_TR(0x6670f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6670f4:{NFSU2_TR(0x6670f4);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffdaull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B6670f9:{NFSU2_TR(0x6670f9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6670e7u);}goto L6670e7;}}
}
B6670fb:L6670fb:{c.instructions+=2;NFSU2_TR(0x6670fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B667100:{NFSU2_TR(0x667100);
{goto L66710c;}
}
B667102:L667102:{c.instructions+=5;NFSU2_TR(0x667102);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667104:{NFSU2_TR(0x667104);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B667107:{NFSU2_TR(0x667107);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667108:{NFSU2_TR(0x667108);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667109:{NFSU2_TR(0x667109);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66710c:L66710c:{c.instructions+=3;NFSU2_TR(0x66710c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66710f:{NFSU2_TR(0x66710f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B667112:{NFSU2_TR(0x667112);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B667114:L667114:{c.instructions+=2;NFSU2_TR(0x667114);
u8 U[18];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B66711a:{NFSU2_TR(0x66711a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66712c;}}
}
B66711c:L66711c:{c.instructions+=3;NFSU2_TR(0x66711c);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B667121:{NFSU2_TR(0x667121);
u8 U[18];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(R+4))-u32(r2(U+14))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B667126:{NFSU2_TR(0x667126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66712c;}}
}
B667128:L667128:{c.instructions+=2;NFSU2_TR(0x667128);
w1(R+4,u8(0x1ull));
}
B66712a:{NFSU2_TR(0x66712a);
{goto L66712e;}
}
B66712c:L66712c:{c.instructions+=1;NFSU2_TR(0x66712c);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B66712e:L66712e:{c.instructions+=3;NFSU2_TR(0x66712e);
u8 U[18];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+512,u8((r2(U+14))<(u16(0x0ull))));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B667134:{NFSU2_TR(0x667134);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B667136:{NFSU2_TR(0x667136);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66713e;}}
}
B667138:L667138:{c.instructions+=2;NFSU2_TR(0x667138);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66713a:{NFSU2_TR(0x66713a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66713e;}}
}
B66713c:L66713c:{c.instructions+=1;NFSU2_TR(0x66713c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66713e:L66713e:{c.instructions+=5;NFSU2_TR(0x66713e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66713f:{NFSU2_TR(0x66713f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B667140:{NFSU2_TR(0x667140);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B667141:{NFSU2_TR(0x667141);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B667144:{NFSU2_TR(0x667144);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667114u);}goto L667114;}}
}
B667146:L667146:{c.instructions+=1;NFSU2_TR(0x667146);
{goto L667172;}
}
B667148:L667148:{c.instructions+=9;NFSU2_TR(0x667148);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B66714b:{NFSU2_TR(0x66714b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66714e:{NFSU2_TR(0x66714e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B667150:{NFSU2_TR(0x667150);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B667152:{NFSU2_TR(0x667152);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667154:{NFSU2_TR(0x667154);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B667157:{NFSU2_TR(0x667157);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667158:{NFSU2_TR(0x667158);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B66715b:{NFSU2_TR(0x66715b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B66715c:L66715c:{c.instructions+=7;NFSU2_TR(0x66715c);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B667161:{NFSU2_TR(0x667161);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+4)),r2(U+0));
}
B667164:{NFSU2_TR(0x667164);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B667165:{NFSU2_TR(0x667165);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B667166:{NFSU2_TR(0x667166);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B667167:{NFSU2_TR(0x667167);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B66716a:{NFSU2_TR(0x66716a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66715cu);}goto L66715c;}}
}
B66716c:L66716c:{c.instructions+=2;NFSU2_TR(0x66716c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66716f:{NFSU2_TR(0x66716f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667172:L667172:{c.instructions+=26;NFSU2_TR(0x667172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B667174:{NFSU2_TR(0x667174);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667177:{NFSU2_TR(0x667177);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667179:{NFSU2_TR(0x667179);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66717a:{NFSU2_TR(0x66717a);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B66717c:{NFSU2_TR(0x66717c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667180:{NFSU2_TR(0x667180);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667184:{NFSU2_TR(0x667184);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667188:{NFSU2_TR(0x667188);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66718c:{NFSU2_TR(0x66718c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667190:{NFSU2_TR(0x667190);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667194:{NFSU2_TR(0x667194);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667198:{NFSU2_TR(0x667198);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66719c:{NFSU2_TR(0x66719c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6671a0:{NFSU2_TR(0x6671a0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffaull))));
}
B6671a3:{NFSU2_TR(0x6671a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6671a7:{NFSU2_TR(0x6671a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6671ab:{NFSU2_TR(0x6671ab);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6671ad:{NFSU2_TR(0x6671ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6671b1:{NFSU2_TR(0x6671b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6671b5:{NFSU2_TR(0x6671b5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B6671b8:{NFSU2_TR(0x6671b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6671bb:{NFSU2_TR(0x6671bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6671bf:{NFSU2_TR(0x6671bf);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6671c2:{NFSU2_TR(0x6671c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6671c5:{NFSU2_TR(0x6671c5);
if(r1(R+518)){{goto L667d3e;}}
}
B6671cb:L6671cb:{c.instructions+=8;NFSU2_TR(0x6671cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6671ce:{NFSU2_TR(0x6671ce);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B6671d1:{NFSU2_TR(0x6671d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6671d4:{NFSU2_TR(0x6671d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6671d7:{NFSU2_TR(0x6671d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6671da:{NFSU2_TR(0x6671da);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6671de:{NFSU2_TR(0x6671de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6671e0:{NFSU2_TR(0x6671e0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6672ff;}}
}
B6671e6:L6671e6:{c.instructions+=5;NFSU2_TR(0x6671e6);
__builtin_memmove((R+0),(R+24),4);
}
B6671e8:{NFSU2_TR(0x6671e8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6671eb:{NFSU2_TR(0x6671eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6671ee:{NFSU2_TR(0x6671ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6671ef:{NFSU2_TR(0x6671ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6671f4ull));
TAIL_STATIC(0x575620u,575);
}
B6671f4:L6671f4:{c.instructions+=3;NFSU2_TR(0x6671f4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6671f6:{NFSU2_TR(0x6671f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6671f7:{NFSU2_TR(0x6671f7);
if(r1(R+518)){{goto L667211;}}
}
B6671f9:L6671f9:{c.instructions+=7;NFSU2_TR(0x6671f9);
u8 U[4];
w4(U+0,u32(0x663ec5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6671fe:{NFSU2_TR(0x6671fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6671ff:{NFSU2_TR(0x6671ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B667202:{NFSU2_TR(0x667202);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667204:{NFSU2_TR(0x667204);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667205:{NFSU2_TR(0x667205);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B667207:{NFSU2_TR(0x667207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66720cull));
TAIL_STATIC(0x401650u,401);
}
B66720c:L66720c:{c.instructions+=2;NFSU2_TR(0x66720c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66720f:{NFSU2_TR(0x66720f);
{goto L667215;}
}
B667211:L667211:{c.instructions+=1;NFSU2_TR(0x667211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667215:L667215:{c.instructions+=2;NFSU2_TR(0x667215);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667219:{NFSU2_TR(0x667219);
if(r1(R+518)){{goto L667c87;}}
}
B66721f:L66721f:{c.instructions+=15;NFSU2_TR(0x66721f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667222:{NFSU2_TR(0x667222);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B667226:{NFSU2_TR(0x667226);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667229:{NFSU2_TR(0x667229);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66722d:{NFSU2_TR(0x66722d);
w4(R+4,u32(r2(R+4)));
}
B667230:{NFSU2_TR(0x667230);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B667233:{NFSU2_TR(0x667233);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7b583cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667239:{NFSU2_TR(0x667239);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66723f:{NFSU2_TR(0x66723f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667242:{NFSU2_TR(0x667242);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x56ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B667248:{NFSU2_TR(0x667248);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66724b:{NFSU2_TR(0x66724b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66724d:{NFSU2_TR(0x66724d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B667250:{NFSU2_TR(0x667250);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B667253:{NFSU2_TR(0x667253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667254:L667254:{c.instructions+=1;NFSU2_TR(0x667254);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L667256;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667254u);}goto L667254;}
}
B667256:L667256:{c.instructions+=46;NFSU2_TR(0x667256);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667259:{NFSU2_TR(0x667259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66725b:{NFSU2_TR(0x66725b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66725d:{NFSU2_TR(0x66725d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667260:{NFSU2_TR(0x667260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667263:{NFSU2_TR(0x667263);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B667266:{NFSU2_TR(0x667266);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B667269:{NFSU2_TR(0x667269);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B66726c:{NFSU2_TR(0x66726c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B66726f:{NFSU2_TR(0x66726f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B667272:{NFSU2_TR(0x667272);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B667275:{NFSU2_TR(0x667275);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B667278:{NFSU2_TR(0x667278);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66727b:{NFSU2_TR(0x66727b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B66727e:{NFSU2_TR(0x66727e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B667281:{NFSU2_TR(0x667281);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B667283:{NFSU2_TR(0x667283);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B667286:{NFSU2_TR(0x667286);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B667288:{NFSU2_TR(0x667288);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66728b:{NFSU2_TR(0x66728b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66728e:{NFSU2_TR(0x66728e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667291:{NFSU2_TR(0x667291);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667294:{NFSU2_TR(0x667294);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667297:{NFSU2_TR(0x667297);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66729a:{NFSU2_TR(0x66729a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66729d:{NFSU2_TR(0x66729d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672a0:{NFSU2_TR(0x6672a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6672a4:{NFSU2_TR(0x6672a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6672a8:{NFSU2_TR(0x6672a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672ab:{NFSU2_TR(0x6672ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6672af:{NFSU2_TR(0x6672af);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6672b3:{NFSU2_TR(0x6672b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672b6:{NFSU2_TR(0x6672b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672b9:{NFSU2_TR(0x6672b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6672bc:{NFSU2_TR(0x6672bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672bf:{NFSU2_TR(0x6672bf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6672c1:{NFSU2_TR(0x6672c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6672c4:{NFSU2_TR(0x6672c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672c7:{NFSU2_TR(0x6672c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6672cb:{NFSU2_TR(0x6672cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672ce:{NFSU2_TR(0x6672ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6672d2:{NFSU2_TR(0x6672d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672d5:{NFSU2_TR(0x6672d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6672d8:{NFSU2_TR(0x6672d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6672db:{NFSU2_TR(0x6672db);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6672dd:{NFSU2_TR(0x6672dd);
if(r1(R+518)){{goto L6672ed;}}
}
B6672df:L6672df:{c.instructions+=2;NFSU2_TR(0x6672df);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6672e1:{NFSU2_TR(0x6672e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6672e6ull));
TAIL_STATIC(0x664f63u,664);
}
B6672e6:L6672e6:{c.instructions+=2;NFSU2_TR(0x6672e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6672ea:{NFSU2_TR(0x6672ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6672ed:L6672ed:{c.instructions+=6;NFSU2_TR(0x6672ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6672f0:{NFSU2_TR(0x6672f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6672f3:{NFSU2_TR(0x6672f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6672f5:{NFSU2_TR(0x6672f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6672f9:{NFSU2_TR(0x6672f9);
w2(R+0,u16(u32(r2(R+0))+u32(u16(0x1ull))));
}
B6672fb:{NFSU2_TR(0x6672fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6672ff:L6672ff:{c.instructions+=7;NFSU2_TR(0x6672ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667301:{NFSU2_TR(0x667301);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B667305:{NFSU2_TR(0x667305);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B667307:{NFSU2_TR(0x667307);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66730b:{NFSU2_TR(0x66730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66730e:{NFSU2_TR(0x66730e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667311:{NFSU2_TR(0x667311);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L667316;}}
}
B667313:L667313:{c.instructions+=1;NFSU2_TR(0x667313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667316:L667316:{c.instructions+=13;NFSU2_TR(0x667316);
w4(R+0,u32(r2(R+0)));
}
B667319:{NFSU2_TR(0x667319);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66731c:{NFSU2_TR(0x66731c);
__builtin_memmove((R+4),(R+0),4);
}
B66731e:{NFSU2_TR(0x66731e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667321:{NFSU2_TR(0x667321);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B667324:{NFSU2_TR(0x667324);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B667327:{NFSU2_TR(0x667327);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667329:{NFSU2_TR(0x667329);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66732d:{NFSU2_TR(0x66732d);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B667331:{NFSU2_TR(0x667331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667334:{NFSU2_TR(0x667334);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667337:{NFSU2_TR(0x667337);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66733a:{NFSU2_TR(0x66733a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66733f;}}
}
B66733c:L66733c:{c.instructions+=1;NFSU2_TR(0x66733c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66733f:L66733f:{c.instructions+=13;NFSU2_TR(0x66733f);
w4(R+4,u32(r2(R+4)));
}
B667342:{NFSU2_TR(0x667342);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B667345:{NFSU2_TR(0x667345);
__builtin_memmove((R+4),(R+0),4);
}
B667347:{NFSU2_TR(0x667347);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66734a:{NFSU2_TR(0x66734a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B66734d:{NFSU2_TR(0x66734d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B667350:{NFSU2_TR(0x667350);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667352:{NFSU2_TR(0x667352);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B667356:{NFSU2_TR(0x667356);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66735a:{NFSU2_TR(0x66735a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66735d:{NFSU2_TR(0x66735d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667360:{NFSU2_TR(0x667360);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667363:{NFSU2_TR(0x667363);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L667368;}}
}
B667365:L667365:{c.instructions+=1;NFSU2_TR(0x667365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667368:L667368:{c.instructions+=15;NFSU2_TR(0x667368);
w4(R+4,u32(r2(R+4)));
}
B66736b:{NFSU2_TR(0x66736b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66736e:{NFSU2_TR(0x66736e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B667370:{NFSU2_TR(0x667370);
__builtin_memmove((R+4),(R+0),4);
}
B667372:{NFSU2_TR(0x667372);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667375:{NFSU2_TR(0x667375);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B667378:{NFSU2_TR(0x667378);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66737b:{NFSU2_TR(0x66737b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66737f:{NFSU2_TR(0x66737f);
w4(R+24,u32(r2(R+0)));
}
B667382:{NFSU2_TR(0x667382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667385:{NFSU2_TR(0x667385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B667388:{NFSU2_TR(0x667388);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66738b:{NFSU2_TR(0x66738b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66738f:{NFSU2_TR(0x66738f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667392:{NFSU2_TR(0x667392);
if(r1(R+518)){{goto L667724;}}
}
B667398:L667398:{c.instructions+=22;NFSU2_TR(0x667398);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66739a:{NFSU2_TR(0x66739a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66739e:{NFSU2_TR(0x66739e);
w4(R+0,u32(r2(R+4)));
}
B6673a1:{NFSU2_TR(0x6673a1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6673a4:{NFSU2_TR(0x6673a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6673a7:{NFSU2_TR(0x6673a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6673a8:{NFSU2_TR(0x6673a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6673ac:{NFSU2_TR(0x6673ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6673af:{NFSU2_TR(0x6673af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6673b1:{NFSU2_TR(0x6673b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6673b2:{NFSU2_TR(0x6673b2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff5ull))));
}
B6673b5:{NFSU2_TR(0x6673b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6673b7:{NFSU2_TR(0x6673b7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B6673b9:{NFSU2_TR(0x6673b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6673bc:{NFSU2_TR(0x6673bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6673c0:{NFSU2_TR(0x6673c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6673c3:{NFSU2_TR(0x6673c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6673c6:{NFSU2_TR(0x6673c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6673c9:{NFSU2_TR(0x6673c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6673ca:{NFSU2_TR(0x6673ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
}
B6673cd:{NFSU2_TR(0x6673cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6673ce:{NFSU2_TR(0x6673ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6673d3ull));
TAIL_STATIC(0x670f08u,670);
}
B6673d3:L6673d3:{c.instructions+=3;NFSU2_TR(0x6673d3);
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
B6673d5:{NFSU2_TR(0x6673d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6673d8:{NFSU2_TR(0x6673d8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d3e;}}
}
B6673de:L6673de:{c.instructions+=4;NFSU2_TR(0x6673de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6673e0:{NFSU2_TR(0x6673e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6673e2:{NFSU2_TR(0x6673e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6673e3:{NFSU2_TR(0x6673e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6673e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6673e6:L6673e6:{c.instructions+=79;NFSU2_TR(0x6673e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6673e9:{NFSU2_TR(0x6673e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6673ec:{NFSU2_TR(0x6673ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6673ef:{NFSU2_TR(0x6673ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6673f2:{NFSU2_TR(0x6673f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6673f5:{NFSU2_TR(0x6673f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6673f8:{NFSU2_TR(0x6673f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6673fb:{NFSU2_TR(0x6673fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6673fd:{NFSU2_TR(0x6673fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B6673ff:{NFSU2_TR(0x6673ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667402:{NFSU2_TR(0x667402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B667404:{NFSU2_TR(0x667404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+0))));
}
B667406:{NFSU2_TR(0x667406);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B667409:{NFSU2_TR(0x667409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66740c:{NFSU2_TR(0x66740c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B66740f:{NFSU2_TR(0x66740f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667412:{NFSU2_TR(0x667412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B667414:{NFSU2_TR(0x667414);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
}
B667416:{NFSU2_TR(0x667416);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B667419:{NFSU2_TR(0x667419);
__builtin_memmove((R+28),(R+4),4);
}
B66741b:{NFSU2_TR(0x66741b);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B66741d:{NFSU2_TR(0x66741d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B66741f:{NFSU2_TR(0x66741f);
__builtin_memmove((R+28),(R+4),4);
}
B667421:{NFSU2_TR(0x667421);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667424:{NFSU2_TR(0x667424);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B667426:{NFSU2_TR(0x667426);
__builtin_memmove((R+28),(R+4),4);
}
B667428:{NFSU2_TR(0x667428);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66742b:{NFSU2_TR(0x66742b);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B66742d:{NFSU2_TR(0x66742d);
__builtin_memmove((R+28),(R+4),4);
}
B66742f:{NFSU2_TR(0x66742f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667432:{NFSU2_TR(0x667432);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B667434:{NFSU2_TR(0x667434);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B667437:{NFSU2_TR(0x667437);
__builtin_memmove((R+28),(R+4),4);
}
B667439:{NFSU2_TR(0x667439);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66743c:{NFSU2_TR(0x66743c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B66743e:{NFSU2_TR(0x66743e);
__builtin_memmove((R+28),(R+8),4);
}
B667440:{NFSU2_TR(0x667440);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B667442:{NFSU2_TR(0x667442);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B667444:{NFSU2_TR(0x667444);
__builtin_memmove((R+28),(R+8),4);
}
B667446:{NFSU2_TR(0x667446);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667449:{NFSU2_TR(0x667449);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B66744b:{NFSU2_TR(0x66744b);
__builtin_memmove((R+28),(R+8),4);
}
B66744d:{NFSU2_TR(0x66744d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667450:{NFSU2_TR(0x667450);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B667452:{NFSU2_TR(0x667452);
__builtin_memmove((R+28),(R+8),4);
}
B667454:{NFSU2_TR(0x667454);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667457:{NFSU2_TR(0x667457);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B667459:{NFSU2_TR(0x667459);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B66745c:{NFSU2_TR(0x66745c);
__builtin_memmove((R+28),(R+8),4);
}
B66745e:{NFSU2_TR(0x66745e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667461:{NFSU2_TR(0x667461);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B667463:{NFSU2_TR(0x667463);
__builtin_memmove((R+28),(R+24),4);
}
B667465:{NFSU2_TR(0x667465);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B667467:{NFSU2_TR(0x667467);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667469:{NFSU2_TR(0x667469);
__builtin_memmove((R+28),(R+24),4);
}
B66746b:{NFSU2_TR(0x66746b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66746f:{NFSU2_TR(0x66746f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667472:{NFSU2_TR(0x667472);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667474:{NFSU2_TR(0x667474);
__builtin_memmove((R+28),(R+24),4);
}
B667476:{NFSU2_TR(0x667476);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667479:{NFSU2_TR(0x667479);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B66747b:{NFSU2_TR(0x66747b);
__builtin_memmove((R+28),(R+24),4);
}
B66747d:{NFSU2_TR(0x66747d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667480:{NFSU2_TR(0x667480);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667482:{NFSU2_TR(0x667482);
__builtin_memmove((R+28),(R+24),4);
}
B667484:{NFSU2_TR(0x667484);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667487:{NFSU2_TR(0x667487);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667489:{NFSU2_TR(0x667489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66748c:{NFSU2_TR(0x66748c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66748f:{NFSU2_TR(0x66748f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667492:{NFSU2_TR(0x667492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667495:{NFSU2_TR(0x667495);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B667497:{NFSU2_TR(0x667497);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66749a:{NFSU2_TR(0x66749a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66749c:{NFSU2_TR(0x66749c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B66749e:{NFSU2_TR(0x66749e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6674a1:{NFSU2_TR(0x6674a1);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6674a4:{NFSU2_TR(0x6674a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6674a7:{NFSU2_TR(0x6674a7);
if(r1(R+518)){{goto L6674ad;}}
}
B6674a9:L6674a9:{c.instructions+=2;NFSU2_TR(0x6674a9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6674aa:{NFSU2_TR(0x6674aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6674ad:L6674ad:{c.instructions+=7;NFSU2_TR(0x6674ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6674b0:{NFSU2_TR(0x6674b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6674b2:{NFSU2_TR(0x6674b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6674b5:{NFSU2_TR(0x6674b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6674b7:{NFSU2_TR(0x6674b7);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6674ba:{NFSU2_TR(0x6674ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6674bd:{NFSU2_TR(0x6674bd);
if(r1(R+518)){{goto L6674c3;}}
}
B6674bf:L6674bf:{c.instructions+=2;NFSU2_TR(0x6674bf);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6674c0:{NFSU2_TR(0x6674c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6674c3:L6674c3:{c.instructions+=7;NFSU2_TR(0x6674c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6674c6:{NFSU2_TR(0x6674c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6674c8:{NFSU2_TR(0x6674c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6674cb:{NFSU2_TR(0x6674cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6674cd:{NFSU2_TR(0x6674cd);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B6674d0:{NFSU2_TR(0x6674d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6674d3:{NFSU2_TR(0x6674d3);
if(r1(R+518)){{goto L6674d9;}}
}
B6674d5:L6674d5:{c.instructions+=2;NFSU2_TR(0x6674d5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B6674d6:{NFSU2_TR(0x6674d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6674d9:L6674d9:{c.instructions+=87;NFSU2_TR(0x6674d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6674dc:{NFSU2_TR(0x6674dc);
__builtin_memmove((R+24),(R+28),4);
}
B6674de:{NFSU2_TR(0x6674de);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B6674e0:{NFSU2_TR(0x6674e0);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6674e2:{NFSU2_TR(0x6674e2);
__builtin_memmove((R+28),(R+24),4);
}
B6674e4:{NFSU2_TR(0x6674e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6674e7:{NFSU2_TR(0x6674e7);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6674e9:{NFSU2_TR(0x6674e9);
__builtin_memmove((R+24),(R+28),4);
}
B6674eb:{NFSU2_TR(0x6674eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6674ee:{NFSU2_TR(0x6674ee);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6674f0:{NFSU2_TR(0x6674f0);
__builtin_memmove((R+28),(R+24),4);
}
B6674f2:{NFSU2_TR(0x6674f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6674f5:{NFSU2_TR(0x6674f5);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6674f7:{NFSU2_TR(0x6674f7);
__builtin_memmove((R+24),(R+28),4);
}
B6674f9:{NFSU2_TR(0x6674f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6674fc:{NFSU2_TR(0x6674fc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6674fe:{NFSU2_TR(0x6674fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B667501:{NFSU2_TR(0x667501);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667504:{NFSU2_TR(0x667504);
__builtin_memmove((R+24),(R+28),4);
}
B667506:{NFSU2_TR(0x667506);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B667508:{NFSU2_TR(0x667508);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B66750a:{NFSU2_TR(0x66750a);
__builtin_memmove((R+28),(R+24),4);
}
B66750c:{NFSU2_TR(0x66750c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66750f:{NFSU2_TR(0x66750f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B667511:{NFSU2_TR(0x667511);
__builtin_memmove((R+24),(R+28),4);
}
B667513:{NFSU2_TR(0x667513);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B667516:{NFSU2_TR(0x667516);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667518:{NFSU2_TR(0x667518);
__builtin_memmove((R+28),(R+24),4);
}
B66751a:{NFSU2_TR(0x66751a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66751d:{NFSU2_TR(0x66751d);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B66751f:{NFSU2_TR(0x66751f);
__builtin_memmove((R+24),(R+28),4);
}
B667521:{NFSU2_TR(0x667521);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B667524:{NFSU2_TR(0x667524);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667526:{NFSU2_TR(0x667526);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B667529:{NFSU2_TR(0x667529);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66752c:{NFSU2_TR(0x66752c);
__builtin_memmove((R+24),(R+28),4);
}
B66752e:{NFSU2_TR(0x66752e);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B667530:{NFSU2_TR(0x667530);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667532:{NFSU2_TR(0x667532);
__builtin_memmove((R+28),(R+24),4);
}
B667534:{NFSU2_TR(0x667534);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667537:{NFSU2_TR(0x667537);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B667539:{NFSU2_TR(0x667539);
__builtin_memmove((R+24),(R+28),4);
}
B66753b:{NFSU2_TR(0x66753b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B66753e:{NFSU2_TR(0x66753e);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B667540:{NFSU2_TR(0x667540);
__builtin_memmove((R+28),(R+24),4);
}
B667542:{NFSU2_TR(0x667542);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B667545:{NFSU2_TR(0x667545);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B667547:{NFSU2_TR(0x667547);
__builtin_memmove((R+24),(R+28),4);
}
B667549:{NFSU2_TR(0x667549);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B66754c:{NFSU2_TR(0x66754c);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B66754e:{NFSU2_TR(0x66754e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667551:{NFSU2_TR(0x667551);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667554:{NFSU2_TR(0x667554);
__builtin_memmove((R+28),(R+24),4);
}
B667556:{NFSU2_TR(0x667556);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7ull))));
}
B667559:{NFSU2_TR(0x667559);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B66755c:{NFSU2_TR(0x66755c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66755f:{NFSU2_TR(0x66755f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667562:{NFSU2_TR(0x667562);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667565:{NFSU2_TR(0x667565);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667568:{NFSU2_TR(0x667568);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66756b:{NFSU2_TR(0x66756b);
__builtin_memmove((R+24),(R+4),4);
}
B66756d:{NFSU2_TR(0x66756d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B667570:{NFSU2_TR(0x667570);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B667573:{NFSU2_TR(0x667573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B667576:{NFSU2_TR(0x667576);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667579:{NFSU2_TR(0x667579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66757c:{NFSU2_TR(0x66757c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66757f:{NFSU2_TR(0x66757f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B667582:{NFSU2_TR(0x667582);
__builtin_memmove((R+4),(R+8),4);
}
B667584:{NFSU2_TR(0x667584);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667587:{NFSU2_TR(0x667587);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B66758a:{NFSU2_TR(0x66758a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66758d:{NFSU2_TR(0x66758d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667590:{NFSU2_TR(0x667590);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667593:{NFSU2_TR(0x667593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667596:{NFSU2_TR(0x667596);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B667599:{NFSU2_TR(0x667599);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B66759c:{NFSU2_TR(0x66759c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66759f:{NFSU2_TR(0x66759f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6675a1:{NFSU2_TR(0x6675a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6675a4:{NFSU2_TR(0x6675a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6675a7:{NFSU2_TR(0x6675a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6675aa:{NFSU2_TR(0x6675aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6675ad:{NFSU2_TR(0x6675ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6675b0:{NFSU2_TR(0x6675b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6675b4:{NFSU2_TR(0x6675b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6675b8:{NFSU2_TR(0x6675b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B6675bb:L6675bb:{c.instructions+=10;NFSU2_TR(0x6675bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6675be:{NFSU2_TR(0x6675be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6675c1:{NFSU2_TR(0x6675c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6675c4:{NFSU2_TR(0x6675c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6675c7:{NFSU2_TR(0x6675c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6675ca:{NFSU2_TR(0x6675ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6675cc:{NFSU2_TR(0x6675cc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6675cd:{NFSU2_TR(0x6675cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6675d0:{NFSU2_TR(0x6675d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6675d3:{NFSU2_TR(0x6675d3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6675bbu);}goto L6675bb;}}
}
B6675d5:L6675d5:{c.instructions+=19;NFSU2_TR(0x6675d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6675d8:{NFSU2_TR(0x6675d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6675db:{NFSU2_TR(0x6675db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6675de:{NFSU2_TR(0x6675de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
}
B6675e3:{NFSU2_TR(0x6675e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6675e6:{NFSU2_TR(0x6675e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6675e9:{NFSU2_TR(0x6675e9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6675ed:{NFSU2_TR(0x6675ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6675f1:{NFSU2_TR(0x6675f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6675f4:{NFSU2_TR(0x6675f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6675f7:{NFSU2_TR(0x6675f7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff98ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6675fb:{NFSU2_TR(0x6675fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6675ff:{NFSU2_TR(0x6675ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667602:{NFSU2_TR(0x667602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667605:{NFSU2_TR(0x667605);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B667608:{NFSU2_TR(0x667608);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66760b:{NFSU2_TR(0x66760b);
__builtin_memmove((R+8),(R+4),4);
}
B66760d:{NFSU2_TR(0x66760d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667610:{NFSU2_TR(0x667610);
__builtin_memmove((R+28),(R+0),4);
}
B667612:L667612:{c.instructions+=1;NFSU2_TR(0x667612);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L667614;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667612u);}goto L667612;}
}
B667614:L667614:{c.instructions+=2;NFSU2_TR(0x667614);
__builtin_memmove((R+4),(R+8),4);
}
B667616:{NFSU2_TR(0x667616);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B667619:L667619:{c.instructions+=1;NFSU2_TR(0x667619);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66761b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667619u);}goto L667619;}
}
B66761b:L66761b:{c.instructions+=7;NFSU2_TR(0x66761b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66761e:{NFSU2_TR(0x66761e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((R+8),(U+0),4);
}
B667621:{NFSU2_TR(0x667621);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667622:{NFSU2_TR(0x667622);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B667625:{NFSU2_TR(0x667625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667626:{NFSU2_TR(0x667626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667627:{NFSU2_TR(0x667627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66762cull));
TAIL_STATIC(0x688dc9u,688);
}
B66762c:L66762c:{c.instructions+=3;NFSU2_TR(0x66762c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66762e:{NFSU2_TR(0x66762e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667631:{NFSU2_TR(0x667631);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d3e;}}
}
B667637:L667637:{c.instructions+=7;NFSU2_TR(0x667637);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66763b:{NFSU2_TR(0x66763b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66763e:{NFSU2_TR(0x66763e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667641:{NFSU2_TR(0x667641);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B667642:{NFSU2_TR(0x667642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667643:{NFSU2_TR(0x667643);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667646:{NFSU2_TR(0x667646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66764bull));
TAIL_STATIC(0x660f9cu,660);
}
B66764b:L66764b:{c.instructions+=3;NFSU2_TR(0x66764b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66764d:{NFSU2_TR(0x66764d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667650:{NFSU2_TR(0x667650);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d3e;}}
}
B667656:L667656:{c.instructions+=10;NFSU2_TR(0x667656);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667659:{NFSU2_TR(0x667659);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
w2(U+4,u16(0xb4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66765f:{NFSU2_TR(0x66765f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x10000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B667666:{NFSU2_TR(0x667666);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66766a:{NFSU2_TR(0x66766a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B66766d:{NFSU2_TR(0x66766d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667670:{NFSU2_TR(0x667670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667673:{NFSU2_TR(0x667673);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B667676:{NFSU2_TR(0x667676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667679:{NFSU2_TR(0x667679);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66767b:L66767b:{c.instructions+=3;NFSU2_TR(0x66767b);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+28),(U+12),2);
}
B667680:{NFSU2_TR(0x667680);
u8 U[2];
w2(U+0,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B667683:{NFSU2_TR(0x667683);
if(r1(R+518)){{goto L6676d0;}}
}
B667685:L667685:{c.instructions+=8;NFSU2_TR(0x667685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667688:{NFSU2_TR(0x667688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66768a:{NFSU2_TR(0x66768a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66768d:{NFSU2_TR(0x66768d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66768f:{NFSU2_TR(0x66768f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667691:{NFSU2_TR(0x667691);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B667694:{NFSU2_TR(0x667694);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667696:{NFSU2_TR(0x667696);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6676a3;}}
}
B667698:L667698:{c.instructions+=1;NFSU2_TR(0x667698);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66769b:L66769b:{c.instructions+=4;NFSU2_TR(0x66769b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+0))));
}
B66769d:{NFSU2_TR(0x66769d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6676a0:{NFSU2_TR(0x6676a0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6676a1:{NFSU2_TR(0x6676a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66769bu);}goto L66769b;}}
}
B6676a3:L6676a3:{c.instructions+=5;NFSU2_TR(0x6676a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6676a6:{NFSU2_TR(0x6676a6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B6676a9:{NFSU2_TR(0x6676a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6676ac:{NFSU2_TR(0x6676ac);
__builtin_memmove((R+4),(R+0),4);
}
B6676ae:{NFSU2_TR(0x6676ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6676b2;}}
}
B6676b0:L6676b0:{c.instructions+=1;NFSU2_TR(0x6676b0);
__builtin_memmove((R+4),(R+28),4);
}
B6676b2:L6676b2:{c.instructions+=6;NFSU2_TR(0x6676b2);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B6676b7:{NFSU2_TR(0x6676b7);
w4(R+28,u32(r2(R+0)));
}
B6676ba:{NFSU2_TR(0x6676ba);
w4(R+4,u32(r2(R+4)));
}
B6676bd:{NFSU2_TR(0x6676bd);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6676bf:{NFSU2_TR(0x6676bf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6676c1:{NFSU2_TR(0x6676c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6676e1;}}
}
B6676c3:L6676c3:{c.instructions+=2;NFSU2_TR(0x6676c3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6676c5:{NFSU2_TR(0x6676c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6676d0;}}
}
B6676c7:L6676c7:{c.instructions+=2;NFSU2_TR(0x6676c7);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6676ca:{NFSU2_TR(0x6676ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6676d0;}}
}
B6676cc:L6676cc:{c.instructions+=1;NFSU2_TR(0x6676cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6676d0:L6676d0:{c.instructions+=6;NFSU2_TR(0x6676d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6676d4:{NFSU2_TR(0x6676d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6676d8:{NFSU2_TR(0x6676d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6676d9:{NFSU2_TR(0x6676d9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6676da:{NFSU2_TR(0x6676da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6676dd:{NFSU2_TR(0x6676dd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66767bu);}goto L66767b;}}
}
B6676df:L6676df:{c.instructions+=1;NFSU2_TR(0x6676df);
{goto L6676e5;}
}
B6676e1:L6676e1:{c.instructions+=1;NFSU2_TR(0x6676e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6676e5:L6676e5:{c.instructions+=2;NFSU2_TR(0x6676e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6676e9:{NFSU2_TR(0x6676e9);
if(r1(R+518)){{goto L667724;}}
}
B6676eb:L6676eb:{c.instructions+=4;NFSU2_TR(0x6676eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6676ed:{NFSU2_TR(0x6676ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6676f1:{NFSU2_TR(0x6676f1);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6676f5:{NFSU2_TR(0x6676f5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6676fa;}}
}
B6676f7:L6676f7:{c.instructions+=1;NFSU2_TR(0x6676f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6676fa:L6676fa:{c.instructions+=5;NFSU2_TR(0x6676fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6676fe:{NFSU2_TR(0x6676fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667700:{NFSU2_TR(0x667700);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B667704:{NFSU2_TR(0x667704);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B667708:{NFSU2_TR(0x667708);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66770d;}}
}
B66770a:L66770a:{c.instructions+=1;NFSU2_TR(0x66770a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66770d:L66770d:{c.instructions+=5;NFSU2_TR(0x66770d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667711:{NFSU2_TR(0x667711);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667713:{NFSU2_TR(0x667713);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B667717:{NFSU2_TR(0x667717);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66771b:{NFSU2_TR(0x66771b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L667720;}}
}
B66771d:L66771d:{c.instructions+=1;NFSU2_TR(0x66771d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667720:L667720:{c.instructions+=1;NFSU2_TR(0x667720);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667724:L667724:{c.instructions+=2;NFSU2_TR(0x667724);
__builtin_memmove((R+4),(R+12),4);
}
B667726:{NFSU2_TR(0x667726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66772bull));
TAIL_STATIC(0x65b733u,65b);
}
B66772b:L66772b:{c.instructions+=3;NFSU2_TR(0x66772b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66772d:{NFSU2_TR(0x66772d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667730:{NFSU2_TR(0x667730);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d3e;}}
}
B667736:L667736:{c.instructions+=6;NFSU2_TR(0x667736);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66773b:{NFSU2_TR(0x66773b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66773e:{NFSU2_TR(0x66773e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667741:{NFSU2_TR(0x667741);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B667744:{NFSU2_TR(0x667744);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667745:{NFSU2_TR(0x667745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66774aull));
TAIL_STATIC(0x575620u,575);
}
B66774a:L66774a:{c.instructions+=4;NFSU2_TR(0x66774a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66774c:{NFSU2_TR(0x66774c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66774d:{NFSU2_TR(0x66774d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667750:{NFSU2_TR(0x667750);
if(r1(R+518)){{goto L667c87;}}
}
B667756:L667756:{c.instructions+=5;NFSU2_TR(0x667756);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667759:{NFSU2_TR(0x667759);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66775b:{NFSU2_TR(0x66775b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B66775d:{NFSU2_TR(0x66775d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667760:{NFSU2_TR(0x667760);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66776e;}}
}
B667762:L667762:{c.instructions+=5;NFSU2_TR(0x667762);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B667765:{NFSU2_TR(0x667765);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B667766:{NFSU2_TR(0x667766);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B667769:{NFSU2_TR(0x667769);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B66776c:{NFSU2_TR(0x66776c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667762u);}goto L667762;}}
}
B66776e:L66776e:{c.instructions+=5;NFSU2_TR(0x66776e);
u8 U[4];
w4(U+0,u32(0x65b64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667773:{NFSU2_TR(0x667773);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667775:{NFSU2_TR(0x667775);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667778:{NFSU2_TR(0x667778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667779:{NFSU2_TR(0x667779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66777eull));
TAIL_STATIC(0x75cc70u,75c);
}
B66777e:L66777e:{c.instructions+=9;NFSU2_TR(0x66777e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667781:{NFSU2_TR(0x667781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667784:{NFSU2_TR(0x667784);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B667786:{NFSU2_TR(0x667786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B667789:{NFSU2_TR(0x667789);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66778b:{NFSU2_TR(0x66778b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B66778d:{NFSU2_TR(0x66778d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66778f:{NFSU2_TR(0x66778f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667792:{NFSU2_TR(0x667792);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6677b9;}}
}
B667794:L667794:{c.instructions+=2;NFSU2_TR(0x667794);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B667797:{NFSU2_TR(0x667797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66779a:L66779a:{c.instructions+=3;NFSU2_TR(0x66779a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B66779d:{NFSU2_TR(0x66779d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6677a0:{NFSU2_TR(0x6677a0);
if(r1(R+518)){{goto L6677b0;}}
}
B6677a2:L6677a2:{c.instructions+=2;NFSU2_TR(0x6677a2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6677a3:{NFSU2_TR(0x6677a3);
if(r1(R+518)){{goto L6677ab;}}
}
B6677a5:L6677a5:{c.instructions+=2;NFSU2_TR(0x6677a5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6677a6:{NFSU2_TR(0x6677a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6677b1;}}
}
B6677a8:L6677a8:{c.instructions+=2;NFSU2_TR(0x6677a8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6677a9:{NFSU2_TR(0x6677a9);
{goto L6677b1;}
}
B6677ab:L6677ab:{c.instructions+=2;NFSU2_TR(0x6677ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6677ae:{NFSU2_TR(0x6677ae);
{goto L6677b1;}
}
B6677b0:L6677b0:{c.instructions+=1;NFSU2_TR(0x6677b0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6677b1:L6677b1:{c.instructions+=3;NFSU2_TR(0x6677b1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B6677b4:{NFSU2_TR(0x6677b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6677b7:{NFSU2_TR(0x6677b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66779au);}goto L66779a;}}
}
B6677b9:L6677b9:{c.instructions+=21;NFSU2_TR(0x6677b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6677bc:{NFSU2_TR(0x6677bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6677c0:{NFSU2_TR(0x6677c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6677c2:{NFSU2_TR(0x6677c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6677c6:{NFSU2_TR(0x6677c6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6677c8:{NFSU2_TR(0x6677c8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6677ca:{NFSU2_TR(0x6677ca);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6677cc:{NFSU2_TR(0x6677cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6677cf:{NFSU2_TR(0x6677cf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B6677d3:{NFSU2_TR(0x6677d3);
w2(R+28,u16(u32(r2(R+28))+u32(r2(R+0))));
}
B6677d6:{NFSU2_TR(0x6677d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6677da:{NFSU2_TR(0x6677da);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B6677de:{NFSU2_TR(0x6677de);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6677e2:{NFSU2_TR(0x6677e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6677e6:{NFSU2_TR(0x6677e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6677ea:{NFSU2_TR(0x6677ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6677ee:{NFSU2_TR(0x6677ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6677f2:{NFSU2_TR(0x6677f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6677f5:{NFSU2_TR(0x6677f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6677f8:{NFSU2_TR(0x6677f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6677fb:{NFSU2_TR(0x6677fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L667c6e;}}
}
B667801:L667801:{c.instructions+=8;NFSU2_TR(0x667801);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667804:{NFSU2_TR(0x667804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667807:{NFSU2_TR(0x667807);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B66780a:{NFSU2_TR(0x66780a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66780e:{NFSU2_TR(0x66780e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667812:{NFSU2_TR(0x667812);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B667815:{NFSU2_TR(0x667815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667818:{NFSU2_TR(0x667818);
if(r1(R+518)){{goto L66783e;}}
}
B66781a:L66781a:{c.instructions+=2;NFSU2_TR(0x66781a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66781b:{NFSU2_TR(0x66781b);
if(r1(R+518)){{goto L667835;}}
}
B66781d:L66781d:{c.instructions+=2;NFSU2_TR(0x66781d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66781e:{NFSU2_TR(0x66781e);
if(r1(R+518)){{goto L66782c;}}
}
B667820:L667820:{c.instructions+=2;NFSU2_TR(0x667820);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B667821:{NFSU2_TR(0x667821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667848;}}
}
B667823:L667823:{c.instructions+=3;NFSU2_TR(0x667823);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667827:{NFSU2_TR(0x667827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66782a:{NFSU2_TR(0x66782a);
{goto L667845;}
}
B66782c:L66782c:{c.instructions+=3;NFSU2_TR(0x66782c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667830:{NFSU2_TR(0x667830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667833:{NFSU2_TR(0x667833);
{goto L667845;}
}
B667835:L667835:{c.instructions+=3;NFSU2_TR(0x667835);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667839:{NFSU2_TR(0x667839);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66783c:{NFSU2_TR(0x66783c);
{goto L667845;}
}
B66783e:L66783e:{c.instructions+=2;NFSU2_TR(0x66783e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667842:{NFSU2_TR(0x667842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667845:L667845:{c.instructions+=1;NFSU2_TR(0x667845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667848:L667848:{c.instructions+=15;NFSU2_TR(0x667848);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66784b:{NFSU2_TR(0x66784b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66784f:{NFSU2_TR(0x66784f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B667852:{NFSU2_TR(0x667852);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B667855:{NFSU2_TR(0x667855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667858:{NFSU2_TR(0x667858);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66785c:{NFSU2_TR(0x66785c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B667860:{NFSU2_TR(0x667860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x9ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667864:{NFSU2_TR(0x667864);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667868:{NFSU2_TR(0x667868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66786a:{NFSU2_TR(0x66786a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66786d:{NFSU2_TR(0x66786d);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66786f:{NFSU2_TR(0x66786f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667870:{NFSU2_TR(0x667870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667873:{NFSU2_TR(0x667873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667878ull));
TAIL_STATIC(0x65be0du,65b);
}
B667878:L667878:{c.instructions+=3;NFSU2_TR(0x667878);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66787a:{NFSU2_TR(0x66787a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66787d:{NFSU2_TR(0x66787d);
if(r1(R+518)){{goto L667910;}}
}
B667883:L667883:{c.instructions+=2;NFSU2_TR(0x667883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x1ull))));
}
B667888:{NFSU2_TR(0x667888);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6678c7;}}
}
B66788a:L66788a:{c.instructions+=2;NFSU2_TR(0x66788a);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66788c:{NFSU2_TR(0x66788c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667891ull));
TAIL_STATIC(0x575620u,575);
}
B667891:L667891:{c.instructions+=3;NFSU2_TR(0x667891);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667893:{NFSU2_TR(0x667893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667894:{NFSU2_TR(0x667894);
if(r1(R+518)){{goto L6678b4;}}
}
B667896:L667896:{c.instructions+=10;NFSU2_TR(0x667896);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667898:{NFSU2_TR(0x667898);
u8 U[4];
w4(U+0,u32(0x65b680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66789d:{NFSU2_TR(0x66789d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66789e:{NFSU2_TR(0x66789e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66789f:{NFSU2_TR(0x66789f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6678a1:{NFSU2_TR(0x6678a1);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6678a4:{NFSU2_TR(0x6678a4);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6678a6:{NFSU2_TR(0x6678a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6678a7:{NFSU2_TR(0x6678a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6678aa:{NFSU2_TR(0x6678aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6678afull));
TAIL_STATIC(0x401650u,401);
}
B6678af:L6678af:{c.instructions+=2;NFSU2_TR(0x6678af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6678b2:{NFSU2_TR(0x6678b2);
{goto L6678b6;}
}
B6678b4:L6678b4:{c.instructions+=1;NFSU2_TR(0x6678b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6678b6:L6678b6:{c.instructions+=3;NFSU2_TR(0x6678b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6678b8:{NFSU2_TR(0x6678b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6678bb:{NFSU2_TR(0x6678bb);
if(r1(R+518)){{goto L667c87;}}
}
B6678c1:L6678c1:{c.instructions+=1;NFSU2_TR(0x6678c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6678c7:L6678c7:{c.instructions+=7;NFSU2_TR(0x6678c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6678ca:{NFSU2_TR(0x6678ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6678cb:{NFSU2_TR(0x6678cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6678ce:{NFSU2_TR(0x6678ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6678d0:{NFSU2_TR(0x6678d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6678d3:{NFSU2_TR(0x6678d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6678d6:{NFSU2_TR(0x6678d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6678dbull));
TAIL_STATIC(0x65bd1eu,65b);
}
B6678db:L6678db:{c.instructions+=3;NFSU2_TR(0x6678db);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6678dd:{NFSU2_TR(0x6678dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6678e0:{NFSU2_TR(0x6678e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667d3e;}}
}
B6678e6:L6678e6:{c.instructions+=7;NFSU2_TR(0x6678e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6678e9:{NFSU2_TR(0x6678e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6678ec:{NFSU2_TR(0x6678ec);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6678ee:{NFSU2_TR(0x6678ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6678f1:{NFSU2_TR(0x6678f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6678f2:{NFSU2_TR(0x6678f2);
__builtin_memmove((R+24),(R+0),4);
}
B6678f4:{NFSU2_TR(0x6678f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4eull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6678fa:L6678fa:{c.instructions+=1;NFSU2_TR(0x6678fa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6678fc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6678fau);}goto L6678fa;}
}
B6678fc:L6678fc:{c.instructions+=5;NFSU2_TR(0x6678fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667900:{NFSU2_TR(0x667900);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667904:{NFSU2_TR(0x667904);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667908:{NFSU2_TR(0x667908);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+8)),r4(U+0));
}
B66790e:{NFSU2_TR(0x66790e);
{goto L667919;}
}
B667910:L667910:{c.instructions+=3;NFSU2_TR(0x667910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B667913:{NFSU2_TR(0x667913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667916:{NFSU2_TR(0x667916);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B667919:L667919:{c.instructions+=6;NFSU2_TR(0x667919);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66791c:{NFSU2_TR(0x66791c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66791f:{NFSU2_TR(0x66791f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667922:{NFSU2_TR(0x667922);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B667926:{NFSU2_TR(0x667926);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B667929:{NFSU2_TR(0x667929);
if(r1(R+518)){{goto L667bed;}}
}
B66792f:L66792f:{c.instructions+=2;NFSU2_TR(0x66792f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B667930:{NFSU2_TR(0x667930);
if(r1(R+518)){{goto L667b54;}}
}
B667936:L667936:{c.instructions+=2;NFSU2_TR(0x667936);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B667937:{NFSU2_TR(0x667937);
if(r1(R+518)){{goto L6679d1;}}
}
B66793d:L66793d:{c.instructions+=2;NFSU2_TR(0x66793d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66793e:{NFSU2_TR(0x66793e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667c53;}}
}
B667944:L667944:{c.instructions+=12;NFSU2_TR(0x667944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667947:{NFSU2_TR(0x667947);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0xb2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B66794d:{NFSU2_TR(0x66794d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xf000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B667954:{NFSU2_TR(0x667954);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B667958:{NFSU2_TR(0x667958);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x101ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66795e:{NFSU2_TR(0x66795e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667962:{NFSU2_TR(0x667962);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B667965:{NFSU2_TR(0x667965);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667968:{NFSU2_TR(0x667968);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66796a:{NFSU2_TR(0x66796a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66796c:{NFSU2_TR(0x66796c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B66796e:{NFSU2_TR(0x66796e);
if(r1(R+518)){{goto L6679a1;}}
}
B667970:L667970:{c.instructions+=13;NFSU2_TR(0x667970);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B667974:{NFSU2_TR(0x667974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B667976:{NFSU2_TR(0x667976);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B667979:{NFSU2_TR(0x667979);
w2(R+4,u16(u32(r2(R+4))+u32(u16(0x1ull))));
}
B66797b:{NFSU2_TR(0x66797b);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B66797f:{NFSU2_TR(0x66797f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667981:{NFSU2_TR(0x667981);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667984:{NFSU2_TR(0x667984);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))&u32(u16(0x0ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B66798a:{NFSU2_TR(0x66798a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66798e:{NFSU2_TR(0x66798e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667990:{NFSU2_TR(0x667990);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B667994:{NFSU2_TR(0x667994);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B667997:{NFSU2_TR(0x667997);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66799b;}}
}
B667999:L667999:{c.instructions+=1;NFSU2_TR(0x667999);
__builtin_memmove((R+0),(R+4),4);
}
B66799b:L66799b:{c.instructions+=2;NFSU2_TR(0x66799b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66799f:{NFSU2_TR(0x66799f);
{goto L6679b4;}
}
B6679a1:L6679a1:{c.instructions+=6;NFSU2_TR(0x6679a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6679a3:{NFSU2_TR(0x6679a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6679a6:{NFSU2_TR(0x6679a6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6679aa:{NFSU2_TR(0x6679aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6679ac:{NFSU2_TR(0x6679ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6679af:{NFSU2_TR(0x6679af);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B6679b4:L6679b4:{c.instructions+=8;NFSU2_TR(0x6679b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6679b8:{NFSU2_TR(0x6679b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6679bb:{NFSU2_TR(0x6679bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B6679bf:{NFSU2_TR(0x6679bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6679c2:{NFSU2_TR(0x6679c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6679c4:{NFSU2_TR(0x6679c4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B6679c8:{NFSU2_TR(0x6679c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6679cc:{NFSU2_TR(0x6679cc);
{goto L667c53;}
}
B6679d1:L6679d1:{c.instructions+=2;NFSU2_TR(0x6679d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6679d3:{NFSU2_TR(0x6679d3);
if(r1(R+518)){{goto L667ae3;}}
}
B6679d9:L6679d9:{c.instructions+=7;NFSU2_TR(0x6679d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6679dc:{NFSU2_TR(0x6679dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6679de:{NFSU2_TR(0x6679de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6679e1:{NFSU2_TR(0x6679e1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6679e3:{NFSU2_TR(0x6679e3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6679e4:{NFSU2_TR(0x6679e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6679e7:{NFSU2_TR(0x6679e7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6679ee;}}
}
B6679e9:L6679e9:{c.instructions+=2;NFSU2_TR(0x6679e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6679ec:{NFSU2_TR(0x6679ec);
{goto L6679f7;}
}
B6679ee:L6679ee:{c.instructions+=3;NFSU2_TR(0x6679ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6679f1:{NFSU2_TR(0x6679f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6679f4:{NFSU2_TR(0x6679f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6679f7:L6679f7:{c.instructions+=8;NFSU2_TR(0x6679f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6679fa:{NFSU2_TR(0x6679fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6679fd:{NFSU2_TR(0x6679fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667a00:{NFSU2_TR(0x667a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667a03:{NFSU2_TR(0x667a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667a06:{NFSU2_TR(0x667a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B667a09:{NFSU2_TR(0x667a09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B667a0b:{NFSU2_TR(0x667a0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L667ae3;}}
}
B667a11:L667a11:{c.instructions+=2;NFSU2_TR(0x667a11);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667a14:{NFSU2_TR(0x667a14);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L667ac2;}}
}
B667a1a:L667a1a:{c.instructions+=2;NFSU2_TR(0x667a1a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667a1d:{NFSU2_TR(0x667a1d);
if(r1(R+518)){{goto L667a77;}}
}
B667a1f:L667a1f:{c.instructions+=2;NFSU2_TR(0x667a1f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667a22:{NFSU2_TR(0x667a22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667ae3;}}
}
B667a28:L667a28:{c.instructions+=5;NFSU2_TR(0x667a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667a2b:{NFSU2_TR(0x667a2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B667a2e:{NFSU2_TR(0x667a2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667a2f:{NFSU2_TR(0x667a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667a32:{NFSU2_TR(0x667a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667a37ull));
TAIL_STATIC(0x65b098u,65b);
}
B667a37:L667a37:{c.instructions+=2;NFSU2_TR(0x667a37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667a39:{NFSU2_TR(0x667a39);
if(r1(R+518)){{goto L667ae3;}}
}
B667a3f:L667a3f:{c.instructions+=5;NFSU2_TR(0x667a3f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667a41:{NFSU2_TR(0x667a41);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B667a44:{NFSU2_TR(0x667a44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667a45:{NFSU2_TR(0x667a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667a48:{NFSU2_TR(0x667a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667a4dull));
TAIL_STATIC(0x65b019u,65b);
}
B667a4d:L667a4d:{c.instructions+=9;NFSU2_TR(0x667a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667a50:{NFSU2_TR(0x667a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667a54:{NFSU2_TR(0x667a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B667a57:{NFSU2_TR(0x667a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B667a59:{NFSU2_TR(0x667a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667a5c:{NFSU2_TR(0x667a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B667a5f:{NFSU2_TR(0x667a5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B667a63:{NFSU2_TR(0x667a63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B667a65:{NFSU2_TR(0x667a65);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L667a69;}}
}
B667a67:L667a67:{c.instructions+=1;NFSU2_TR(0x667a67);
__builtin_memmove((R+8),(R+0),4);
}
B667a69:L667a69:{c.instructions+=5;NFSU2_TR(0x667a69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B667a6c:{NFSU2_TR(0x667a6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B667a6f:{NFSU2_TR(0x667a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667a72:{NFSU2_TR(0x667a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B667a75:{NFSU2_TR(0x667a75);
{goto L667ae3;}
}
B667a77:L667a77:{c.instructions+=2;NFSU2_TR(0x667a77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667a7b:{NFSU2_TR(0x667a7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667ae3;}}
}
B667a7d:L667a7d:{c.instructions+=2;NFSU2_TR(0x667a7d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B667a81:{NFSU2_TR(0x667a81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667ae3;}}
}
B667a83:L667a83:{c.instructions+=3;NFSU2_TR(0x667a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667a86:{NFSU2_TR(0x667a86);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667a89:{NFSU2_TR(0x667a89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667aa2;}}
}
B667a8b:L667a8b:{c.instructions+=6;NFSU2_TR(0x667a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667a8f:{NFSU2_TR(0x667a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B667a91:{NFSU2_TR(0x667a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667a94:{NFSU2_TR(0x667a94);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667a98:{NFSU2_TR(0x667a98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B667a9b:{NFSU2_TR(0x667a9b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L667add;}}
}
B667a9d:L667a9d:{c.instructions+=2;NFSU2_TR(0x667a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667aa0:{NFSU2_TR(0x667aa0);
{goto L667add;}
}
B667aa2:L667aa2:{c.instructions+=2;NFSU2_TR(0x667aa2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667aa6:{NFSU2_TR(0x667aa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667ae3;}}
}
B667aa8:L667aa8:{c.instructions+=8;NFSU2_TR(0x667aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667aac:{NFSU2_TR(0x667aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B667aae:{NFSU2_TR(0x667aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ab1:{NFSU2_TR(0x667ab1);
__builtin_memmove((R+0),(R+4),4);
}
B667ab3:{NFSU2_TR(0x667ab3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B667ab7:{NFSU2_TR(0x667ab7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B667aba:{NFSU2_TR(0x667aba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B667abc:{NFSU2_TR(0x667abc);
if(r1(R+512)){{goto L667add;}}
}
B667abe:L667abe:{c.instructions+=2;NFSU2_TR(0x667abe);
__builtin_memmove((R+0),(R+4),4);
}
B667ac0:{NFSU2_TR(0x667ac0);
{goto L667add;}
}
B667ac2:L667ac2:{c.instructions+=2;NFSU2_TR(0x667ac2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667ac6:{NFSU2_TR(0x667ac6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667ae3;}}
}
B667ac8:L667ac8:{c.instructions+=6;NFSU2_TR(0x667ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667acc:{NFSU2_TR(0x667acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B667ace:{NFSU2_TR(0x667ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ad1:{NFSU2_TR(0x667ad1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667ad5:{NFSU2_TR(0x667ad5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B667ad8:{NFSU2_TR(0x667ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L667add;}}
}
B667ada:L667ada:{c.instructions+=1;NFSU2_TR(0x667ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667add:L667add:{c.instructions+=2;NFSU2_TR(0x667add);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B667ae0:{NFSU2_TR(0x667ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ae3:L667ae3:{c.instructions+=12;NFSU2_TR(0x667ae3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0x94ull));
s2(u32(r4(U+0)),r2(U+4));
}
B667ae9:{NFSU2_TR(0x667ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xc000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B667af0:{NFSU2_TR(0x667af0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B667af4:{NFSU2_TR(0x667af4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B667af7:{NFSU2_TR(0x667af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667afa:{NFSU2_TR(0x667afa);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B667afe:{NFSU2_TR(0x667afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667b01:{NFSU2_TR(0x667b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B667b03:{NFSU2_TR(0x667b03);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B667b06:{NFSU2_TR(0x667b06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667b08:{NFSU2_TR(0x667b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667b0b:{NFSU2_TR(0x667b0b);
if(r1(R+518)){{goto L667b25;}}
}
B667b0d:L667b0d:{c.instructions+=5;NFSU2_TR(0x667b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667b10:{NFSU2_TR(0x667b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B667b13:{NFSU2_TR(0x667b13);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B667b15:{NFSU2_TR(0x667b15);
__builtin_memmove((R+0),(R+4),4);
}
B667b17:{NFSU2_TR(0x667b17);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667b1a:L667b1a:{c.instructions+=1;NFSU2_TR(0x667b1a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L667b1c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667b1au);}goto L667b1a;}
}
B667b1c:L667b1c:{c.instructions+=2;NFSU2_TR(0x667b1c);
__builtin_memmove((R+4),(R+0),4);
}
B667b1e:{NFSU2_TR(0x667b1e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B667b21:L667b21:{c.instructions+=1;NFSU2_TR(0x667b21);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L667b23;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667b21u);}goto L667b21;}
}
B667b23:L667b23:{c.instructions+=1;NFSU2_TR(0x667b23);
{goto L667b37;}
}
B667b25:L667b25:{c.instructions+=4;NFSU2_TR(0x667b25);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B667b27:{NFSU2_TR(0x667b27);
__builtin_memmove((R+24),(R+4),4);
}
B667b29:{NFSU2_TR(0x667b29);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667b2c:{NFSU2_TR(0x667b2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667b2e:L667b2e:{c.instructions+=1;NFSU2_TR(0x667b2e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L667b30;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667b2eu);}goto L667b2e;}
}
B667b30:L667b30:{c.instructions+=2;NFSU2_TR(0x667b30);
__builtin_memmove((R+4),(R+24),4);
}
B667b32:{NFSU2_TR(0x667b32);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B667b35:L667b35:{c.instructions+=1;NFSU2_TR(0x667b35);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L667b37;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667b35u);}goto L667b35;}
}
B667b37:L667b37:{c.instructions+=2;NFSU2_TR(0x667b37);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B667b3b:{NFSU2_TR(0x667b3b);
if(r1(R+518)){{goto L667c53;}}
}
B667b41:L667b41:{c.instructions+=3;NFSU2_TR(0x667b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667b44:{NFSU2_TR(0x667b44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667b46:{NFSU2_TR(0x667b46);
if(r1(R+518)){{goto L667b4c;}}
}
B667b48:L667b48:{c.instructions+=1;NFSU2_TR(0x667b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667b4c:L667b4c:{c.instructions+=2;NFSU2_TR(0x667b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667b4f:{NFSU2_TR(0x667b4f);
{goto L667c53;}
}
B667b54:L667b54:{c.instructions+=9;NFSU2_TR(0x667b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667b58:{NFSU2_TR(0x667b58);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0x96ull));
s2(u32(r4(U+0)),r2(U+4));
}
B667b5e:{NFSU2_TR(0x667b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xc020000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B667b65:{NFSU2_TR(0x667b65);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667b69:{NFSU2_TR(0x667b69);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B667b6c:{NFSU2_TR(0x667b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B667b6f:{NFSU2_TR(0x667b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667b72:{NFSU2_TR(0x667b72);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B667b77:{NFSU2_TR(0x667b77);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L667bb4;}}
}
B667b79:L667b79:{c.instructions+=1;NFSU2_TR(0x667b79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667b7b:L667b7b:{c.instructions+=17;NFSU2_TR(0x667b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667b7d:{NFSU2_TR(0x667b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B667b80:{NFSU2_TR(0x667b80);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B667b84:{NFSU2_TR(0x667b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667b86:{NFSU2_TR(0x667b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B667b89:{NFSU2_TR(0x667b89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B667b8c:{NFSU2_TR(0x667b8c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B667b91:{NFSU2_TR(0x667b91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667b93:{NFSU2_TR(0x667b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B667b96:{NFSU2_TR(0x667b96);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B667b9e:{NFSU2_TR(0x667b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667ba0:{NFSU2_TR(0x667ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B667ba3:{NFSU2_TR(0x667ba3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B667ba8:{NFSU2_TR(0x667ba8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B667bac:{NFSU2_TR(0x667bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667baf:{NFSU2_TR(0x667baf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B667bb2:{NFSU2_TR(0x667bb2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667b7bu);}goto L667b7b;}}
}
B667bb4:L667bb4:{c.instructions+=3;NFSU2_TR(0x667bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667bb7:{NFSU2_TR(0x667bb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667bb9:{NFSU2_TR(0x667bb9);
if(r1(R+518)){{goto L667bd7;}}
}
B667bbb:L667bbb:{c.instructions+=7;NFSU2_TR(0x667bbb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B667bbf:{NFSU2_TR(0x667bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B667bc1:{NFSU2_TR(0x667bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B667bc4:{NFSU2_TR(0x667bc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B667bc7:{NFSU2_TR(0x667bc7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B667bc9:{NFSU2_TR(0x667bc9);
__builtin_memmove((R+0),(R+4),4);
}
B667bcb:{NFSU2_TR(0x667bcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667bce:L667bce:{c.instructions+=1;NFSU2_TR(0x667bce);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L667bd0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667bceu);}goto L667bce;}
}
B667bd0:L667bd0:{c.instructions+=2;NFSU2_TR(0x667bd0);
__builtin_memmove((R+4),(R+0),4);
}
B667bd2:{NFSU2_TR(0x667bd2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B667bd5:L667bd5:{c.instructions+=1;NFSU2_TR(0x667bd5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L667bd7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667bd5u);}goto L667bd5;}
}
B667bd7:L667bd7:{c.instructions+=2;NFSU2_TR(0x667bd7);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B667bdb:{NFSU2_TR(0x667bdb);
if(r1(R+518)){{goto L667c53;}}
}
B667bdd:L667bdd:{c.instructions+=3;NFSU2_TR(0x667bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667be0:{NFSU2_TR(0x667be0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667be2:{NFSU2_TR(0x667be2);
if(r1(R+518)){{goto L667be8;}}
}
B667be4:L667be4:{c.instructions+=1;NFSU2_TR(0x667be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667be8:L667be8:{c.instructions+=2;NFSU2_TR(0x667be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667beb:{NFSU2_TR(0x667beb);
{goto L667c53;}
}
B667bed:L667bed:{c.instructions+=14;NFSU2_TR(0x667bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667bf0:{NFSU2_TR(0x667bf0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x52ull))));
w2(U+4,u16(0x95ull));
s2(u32(r4(U+0)),r2(U+4));
}
B667bf6:{NFSU2_TR(0x667bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0xc010000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B667bfd:{NFSU2_TR(0x667bfd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667c01:{NFSU2_TR(0x667c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B667c04:{NFSU2_TR(0x667c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667c07:{NFSU2_TR(0x667c07);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B667c0b:{NFSU2_TR(0x667c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667c0e:{NFSU2_TR(0x667c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667c11:{NFSU2_TR(0x667c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B667c13:{NFSU2_TR(0x667c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B667c16:{NFSU2_TR(0x667c16);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B667c19:{NFSU2_TR(0x667c19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667c1b:{NFSU2_TR(0x667c1b);
if(r1(R+518)){{goto L667c2f;}}
}
B667c1d:L667c1d:{c.instructions+=3;NFSU2_TR(0x667c1d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B667c1f:{NFSU2_TR(0x667c1f);
__builtin_memmove((R+0),(R+4),4);
}
B667c21:{NFSU2_TR(0x667c21);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667c24:L667c24:{c.instructions+=1;NFSU2_TR(0x667c24);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L667c26;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667c24u);}goto L667c24;}
}
B667c26:L667c26:{c.instructions+=2;NFSU2_TR(0x667c26);
__builtin_memmove((R+4),(R+0),4);
}
B667c28:{NFSU2_TR(0x667c28);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B667c2b:L667c2b:{c.instructions+=1;NFSU2_TR(0x667c2b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L667c2d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667c2bu);}goto L667c2b;}
}
B667c2d:L667c2d:{c.instructions+=1;NFSU2_TR(0x667c2d);
{goto L667c3f;}
}
B667c2f:L667c2f:{c.instructions+=3;NFSU2_TR(0x667c2f);
__builtin_memmove((R+24),(R+4),4);
}
B667c31:{NFSU2_TR(0x667c31);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B667c34:{NFSU2_TR(0x667c34);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667c36:L667c36:{c.instructions+=1;NFSU2_TR(0x667c36);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L667c38;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667c36u);}goto L667c36;}
}
B667c38:L667c38:{c.instructions+=2;NFSU2_TR(0x667c38);
__builtin_memmove((R+4),(R+24),4);
}
B667c3a:{NFSU2_TR(0x667c3a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B667c3d:L667c3d:{c.instructions+=1;NFSU2_TR(0x667c3d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L667c3f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667c3du);}goto L667c3d;}
}
B667c3f:L667c3f:{c.instructions+=2;NFSU2_TR(0x667c3f);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B667c43:{NFSU2_TR(0x667c43);
if(r1(R+518)){{goto L667c53;}}
}
B667c45:L667c45:{c.instructions+=3;NFSU2_TR(0x667c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667c48:{NFSU2_TR(0x667c48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B667c4a:{NFSU2_TR(0x667c4a);
if(r1(R+518)){{goto L667c50;}}
}
B667c4c:L667c4c:{c.instructions+=1;NFSU2_TR(0x667c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667c50:L667c50:{c.instructions+=1;NFSU2_TR(0x667c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667c53:L667c53:{c.instructions+=5;NFSU2_TR(0x667c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667c56:{NFSU2_TR(0x667c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667c59:{NFSU2_TR(0x667c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667c5c:{NFSU2_TR(0x667c5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B667c5f:{NFSU2_TR(0x667c5f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667801u);}goto L667801;}}
}
B667c65:L667c65:{c.instructions+=3;NFSU2_TR(0x667c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667c68:{NFSU2_TR(0x667c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B667c6b:{NFSU2_TR(0x667c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667c6e:L667c6e:{c.instructions+=6;NFSU2_TR(0x667c6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667c72:{NFSU2_TR(0x667c72);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B667c76:{NFSU2_TR(0x667c76);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667c7a:{NFSU2_TR(0x667c7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667c7e:{NFSU2_TR(0x667c7e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667c82:{NFSU2_TR(0x667c82);
{goto L667d3e;}
}
B667c87:L667c87:{c.instructions+=2;NFSU2_TR(0x667c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B667c8e:{NFSU2_TR(0x667c8e);
{goto L667d3e;}
}
B667c93:L667c93:{c.instructions+=2;NFSU2_TR(0x667c93);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B667c97:{NFSU2_TR(0x667c97);
if(r1(R+518)){{goto L667d3b;}}
}
B667c9d:L667c9d:{c.instructions+=2;NFSU2_TR(0x667c9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667ca3:{NFSU2_TR(0x667ca3);
if(r1(R+518)){{goto L667d3b;}}
}
B667ca9:L667ca9:{c.instructions+=2;NFSU2_TR(0x667ca9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B667cb0:{NFSU2_TR(0x667cb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667d3b;}}
}
B667cb6:L667cb6:{c.instructions+=6;NFSU2_TR(0x667cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667cbc:{NFSU2_TR(0x667cbc);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B667cc3:{NFSU2_TR(0x667cc3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667cc5:{NFSU2_TR(0x667cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667cc8:{NFSU2_TR(0x667cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ccb:{NFSU2_TR(0x667ccb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L667d37;}}
}
B667ccd:L667ccd:{c.instructions+=6;NFSU2_TR(0x667ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667cd0:{NFSU2_TR(0x667cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667cd6:{NFSU2_TR(0x667cd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B667cd9:{NFSU2_TR(0x667cd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667cdc:{NFSU2_TR(0x667cdc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667cde:{NFSU2_TR(0x667cde);
if(r1(R+518)){{goto L667d2f;}}
}
B667ce0:L667ce0:{c.instructions+=9;NFSU2_TR(0x667ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ce3:{NFSU2_TR(0x667ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667ce9:{NFSU2_TR(0x667ce9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667cec:{NFSU2_TR(0x667cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667cef:{NFSU2_TR(0x667cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667cf2:{NFSU2_TR(0x667cf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B667cf4:{NFSU2_TR(0x667cf4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667cf6:{NFSU2_TR(0x667cf6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667cf8:{NFSU2_TR(0x667cf8);
if(r1(R+518)){{goto L667d2f;}}
}
B667cfa:L667cfa:{c.instructions+=3;NFSU2_TR(0x667cfa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B667cfe:{NFSU2_TR(0x667cfe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667d01:{NFSU2_TR(0x667d01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667d1f;}}
}
B667d03:L667d03:{c.instructions+=2;NFSU2_TR(0x667d03);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667d05:{NFSU2_TR(0x667d05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667d18;}}
}
B667d07:L667d07:{c.instructions+=3;NFSU2_TR(0x667d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667d0a:{NFSU2_TR(0x667d0a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B667d0c:{NFSU2_TR(0x667d0c);
if(r1(R+518)){{goto L667d18;}}
}
B667d0e:L667d0e:{c.instructions+=3;NFSU2_TR(0x667d0e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B667d11:{NFSU2_TR(0x667d11);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B667d13:{NFSU2_TR(0x667d13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667d0eu);}goto L667d0e;}}
}
B667d15:L667d15:{c.instructions+=1;NFSU2_TR(0x667d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667d18:L667d18:{c.instructions+=3;NFSU2_TR(0x667d18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B667d1a:{NFSU2_TR(0x667d1a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B667d1d:{NFSU2_TR(0x667d1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B667d1f:L667d1f:{c.instructions+=5;NFSU2_TR(0x667d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667d23:{NFSU2_TR(0x667d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667d26:{NFSU2_TR(0x667d26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B667d28:{NFSU2_TR(0x667d28);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B667d2a:{NFSU2_TR(0x667d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667cfau);}goto L667cfa;}}
}
B667d2c:L667d2c:{c.instructions+=1;NFSU2_TR(0x667d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667d2f:L667d2f:{c.instructions+=3;NFSU2_TR(0x667d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667d32:{NFSU2_TR(0x667d32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B667d35:{NFSU2_TR(0x667d35);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667ccdu);}goto L667ccd;}}
}
B667d37:L667d37:{c.instructions+=1;NFSU2_TR(0x667d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff7ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667d3b:L667d3b:{c.instructions+=1;NFSU2_TR(0x667d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667d3e:L667d3e:{c.instructions+=2;NFSU2_TR(0x667d3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667d41:{NFSU2_TR(0x667d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667d46ull));
TAIL_STATIC(0x575630u,575);
}
B667d46:L667d46:{c.instructions+=2;NFSU2_TR(0x667d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667d49:{NFSU2_TR(0x667d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667d4a:L667d4a:{c.instructions+=5;NFSU2_TR(0x667d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B667d4b:{NFSU2_TR(0x667d4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B667d4c:{NFSU2_TR(0x667d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B667d4d:{NFSU2_TR(0x667d4d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B667d4e:{NFSU2_TR(0x667d4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B667d51:L667d51:{c.instructions+=22;NFSU2_TR(0x667d51);
__builtin_memmove((R+28),(R+28),4);
}
B667d53:{NFSU2_TR(0x667d53);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667d54:{NFSU2_TR(0x667d54);
__builtin_memmove((R+20),(R+16),4);
}
B667d56:{NFSU2_TR(0x667d56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B667d5c:{NFSU2_TR(0x667d5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667d5d:{NFSU2_TR(0x667d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B667d60:{NFSU2_TR(0x667d60);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B667d63:{NFSU2_TR(0x667d63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667d64:{NFSU2_TR(0x667d64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667d65:{NFSU2_TR(0x667d65);
__builtin_memmove((R+28),(R+4),4);
}
B667d67:{NFSU2_TR(0x667d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B667d6a:{NFSU2_TR(0x667d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667d70:{NFSU2_TR(0x667d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667d73:{NFSU2_TR(0x667d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667d76:{NFSU2_TR(0x667d76);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B667d79:{NFSU2_TR(0x667d79);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B667d7c:{NFSU2_TR(0x667d7c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B667d7e:{NFSU2_TR(0x667d7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667d81:{NFSU2_TR(0x667d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667d84:{NFSU2_TR(0x667d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667d87:{NFSU2_TR(0x667d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667d8a:{NFSU2_TR(0x667d8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667d91;}}
}
B667d8c:L667d8c:{c.instructions+=2;NFSU2_TR(0x667d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667d8f:{NFSU2_TR(0x667d8f);
{goto L667d97;}
}
B667d91:L667d91:{c.instructions+=2;NFSU2_TR(0x667d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667d94:{NFSU2_TR(0x667d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667d97:L667d97:{c.instructions+=14;NFSU2_TR(0x667d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667d9a:{NFSU2_TR(0x667d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667da0:{NFSU2_TR(0x667da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667da3:{NFSU2_TR(0x667da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667da6:{NFSU2_TR(0x667da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B667da9:{NFSU2_TR(0x667da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B667dac:{NFSU2_TR(0x667dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667daf:{NFSU2_TR(0x667daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667db2:{NFSU2_TR(0x667db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667db5:{NFSU2_TR(0x667db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667dbb:{NFSU2_TR(0x667dbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B667dbe:{NFSU2_TR(0x667dbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B667dc1:{NFSU2_TR(0x667dc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667dc4:{NFSU2_TR(0x667dc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667dcb;}}
}
B667dc6:L667dc6:{c.instructions+=2;NFSU2_TR(0x667dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667dc9:{NFSU2_TR(0x667dc9);
{goto L667dd1;}
}
B667dcb:L667dcb:{c.instructions+=2;NFSU2_TR(0x667dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667dce:{NFSU2_TR(0x667dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667dd1:L667dd1:{c.instructions+=16;NFSU2_TR(0x667dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667dd4:{NFSU2_TR(0x667dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667dda:{NFSU2_TR(0x667dda);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667ddd:{NFSU2_TR(0x667ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667de0:{NFSU2_TR(0x667de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B667de3:{NFSU2_TR(0x667de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B667de6:{NFSU2_TR(0x667de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667de9:{NFSU2_TR(0x667de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667dec:{NFSU2_TR(0x667dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667def:{NFSU2_TR(0x667def);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667df5:{NFSU2_TR(0x667df5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B667df8:{NFSU2_TR(0x667df8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B667dfb:{NFSU2_TR(0x667dfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667dfe:{NFSU2_TR(0x667dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667e04:{NFSU2_TR(0x667e04);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667e07:{NFSU2_TR(0x667e07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667e24;}}
}
B667e09:L667e09:{c.instructions+=2;NFSU2_TR(0x667e09);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667e0c:{NFSU2_TR(0x667e0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667e13;}}
}
B667e0e:L667e0e:{c.instructions+=2;NFSU2_TR(0x667e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667e11:{NFSU2_TR(0x667e11);
{goto L667e19;}
}
B667e13:L667e13:{c.instructions+=2;NFSU2_TR(0x667e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667e16:{NFSU2_TR(0x667e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667e19:L667e19:{c.instructions+=4;NFSU2_TR(0x667e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e1c:{NFSU2_TR(0x667e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B667e1f:{NFSU2_TR(0x667e1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667e22:{NFSU2_TR(0x667e22);
{goto L667e58;}
}
B667e24:L667e24:{c.instructions+=2;NFSU2_TR(0x667e24);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667e27:{NFSU2_TR(0x667e27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667e2e;}}
}
B667e29:L667e29:{c.instructions+=2;NFSU2_TR(0x667e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e2c:{NFSU2_TR(0x667e2c);
{goto L667e34;}
}
B667e2e:L667e2e:{c.instructions+=2;NFSU2_TR(0x667e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e31:{NFSU2_TR(0x667e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e34:L667e34:{c.instructions+=11;NFSU2_TR(0x667e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667e3a:{NFSU2_TR(0x667e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667e3d:{NFSU2_TR(0x667e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e40:{NFSU2_TR(0x667e40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667e43:{NFSU2_TR(0x667e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667e46:{NFSU2_TR(0x667e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B667e49:{NFSU2_TR(0x667e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e4c:{NFSU2_TR(0x667e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667e4f:{NFSU2_TR(0x667e4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B667e52:{NFSU2_TR(0x667e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e55:{NFSU2_TR(0x667e55);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B667e58:L667e58:{c.instructions+=8;NFSU2_TR(0x667e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667e5b:{NFSU2_TR(0x667e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B667e5e:{NFSU2_TR(0x667e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B667e61:{NFSU2_TR(0x667e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667e64:{NFSU2_TR(0x667e64);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667e66:{NFSU2_TR(0x667e66);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B667e67:{NFSU2_TR(0x667e67);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B667e69:{NFSU2_TR(0x667e69);
if(r1(R+518)){TAIL_STATIC(0x668c02u,668);}
}
B667e6f:L667e6f:{c.instructions+=2;NFSU2_TR(0x667e6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B667e72:{NFSU2_TR(0x667e72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L667e7f;}}
}
B667e74:L667e74:{c.instructions+=4;NFSU2_TR(0x667e74);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B667e77:{NFSU2_TR(0x667e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667e7a:{NFSU2_TR(0x667e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667e7d:{NFSU2_TR(0x667e7d);
{goto L667e97;}
}
B667e7f:L667e7f:{c.instructions+=3;NFSU2_TR(0x667e7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667e80:{NFSU2_TR(0x667e80);
__builtin_memmove((R+4),(R+28),4);
}
B667e82:{NFSU2_TR(0x667e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667e87ull));
TAIL_STATIC(0x661313u,661);
}
B667e87:L667e87:{c.instructions+=3;NFSU2_TR(0x667e87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B667e89:{NFSU2_TR(0x667e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667e8c:{NFSU2_TR(0x667e8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x668cadu,668);}
}
B667e92:L667e92:{c.instructions+=3;NFSU2_TR(0x667e92);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667e94:{NFSU2_TR(0x667e94);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B667e96:{NFSU2_TR(0x667e96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B667e97:L667e97:{c.instructions+=4;NFSU2_TR(0x667e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667e9b:{NFSU2_TR(0x667e9b);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B667e9f:{NFSU2_TR(0x667e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ea2:{NFSU2_TR(0x667ea2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L667f55;}}
}
B667ea8:L667ea8:{c.instructions+=1;NFSU2_TR(0x667ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B667eaf:L667eaf:{c.instructions+=6;NFSU2_TR(0x667eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667eb2:{NFSU2_TR(0x667eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B667eb5:{NFSU2_TR(0x667eb5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B667eb9:{NFSU2_TR(0x667eb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xb4ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B667ebe:{NFSU2_TR(0x667ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ec1:{NFSU2_TR(0x667ec1);
if(r1(R+518)){{goto L667eec;}}
}
B667ec3:L667ec3:{c.instructions+=2;NFSU2_TR(0x667ec3);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xb5ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B667ec8:{NFSU2_TR(0x667ec8);
if(r1(R+518)){{goto L667eec;}}
}
B667eca:L667eca:{c.instructions+=2;NFSU2_TR(0x667eca);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B667ece:{NFSU2_TR(0x667ece);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L667f3a;}}
}
B667ed0:L667ed0:{c.instructions+=5;NFSU2_TR(0x667ed0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667ed2:{NFSU2_TR(0x667ed2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667ed5:{NFSU2_TR(0x667ed5);
__builtin_memmove((R+4),(R+28),4);
}
B667ed7:{NFSU2_TR(0x667ed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667eda:{NFSU2_TR(0x667eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667edfull));
TAIL_STATIC(0x6611a2u,661);
}
B667edf:L667edf:{c.instructions+=3;NFSU2_TR(0x667edf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B667ee1:{NFSU2_TR(0x667ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667ee4:{NFSU2_TR(0x667ee4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x668cadu,668);}
}
B667eea:L667eea:{c.instructions+=1;NFSU2_TR(0x667eea);
{goto L667f35;}
}
B667eec:L667eec:{c.instructions+=3;NFSU2_TR(0x667eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B667eef:{NFSU2_TR(0x667eef);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B667ef1:{NFSU2_TR(0x667ef1);
if(r1(R+518)){{goto L667f02;}}
}
B667ef3:L667ef3:{c.instructions+=3;NFSU2_TR(0x667ef3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B667ef5:{NFSU2_TR(0x667ef5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667ef6:{NFSU2_TR(0x667ef6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667ef9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B667ef9:L667ef9:{c.instructions+=3;NFSU2_TR(0x667ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667efc:{NFSU2_TR(0x667efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667f00:{NFSU2_TR(0x667f00);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B667f02:L667f02:{c.instructions+=3;NFSU2_TR(0x667f02);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B667f06:{NFSU2_TR(0x667f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667f09:{NFSU2_TR(0x667f09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L667f3a;}}
}
B667f0b:L667f0b:{c.instructions+=5;NFSU2_TR(0x667f0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667f0e:{NFSU2_TR(0x667f0e);
__builtin_memmove((R+4),(R+28),4);
}
B667f10:{NFSU2_TR(0x667f10);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667f13:{NFSU2_TR(0x667f13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B667f16:{NFSU2_TR(0x667f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667f1bull));
TAIL_STATIC(0x6611a2u,661);
}
B667f1b:L667f1b:{c.instructions+=3;NFSU2_TR(0x667f1b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B667f1d:{NFSU2_TR(0x667f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667f20:{NFSU2_TR(0x667f20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x668cadu,668);}
}
B667f26:L667f26:{c.instructions+=5;NFSU2_TR(0x667f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667f29:{NFSU2_TR(0x667f29);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667f2d:{NFSU2_TR(0x667f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667f30:{NFSU2_TR(0x667f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B667f33:{NFSU2_TR(0x667f33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667f0bu);}goto L667f0b;}}
}
B667f35:L667f35:{c.instructions+=2;NFSU2_TR(0x667f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667f38:{NFSU2_TR(0x667f38);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B667f3a:L667f3a:{c.instructions+=6;NFSU2_TR(0x667f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667f3d:{NFSU2_TR(0x667f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x64ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B667f41:{NFSU2_TR(0x667f41);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667f45:{NFSU2_TR(0x667f45);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B667f49:{NFSU2_TR(0x667f49);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B667f4c:{NFSU2_TR(0x667f4c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x667eafu);}goto L667eaf;}}
}
B667f52:L667f52:{c.instructions+=2;NFSU2_TR(0x667f52);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B667f54:{NFSU2_TR(0x667f54);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B667f55:L667f55:{c.instructions+=15;NFSU2_TR(0x667f55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667f57:{NFSU2_TR(0x667f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B667f5a:{NFSU2_TR(0x667f5a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667f5b:{NFSU2_TR(0x667f5b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667f5c:{NFSU2_TR(0x667f5c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667f5d:{NFSU2_TR(0x667f5d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667f5e:{NFSU2_TR(0x667f5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667f62:{NFSU2_TR(0x667f62);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667f66:{NFSU2_TR(0x667f66);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B667f6a:{NFSU2_TR(0x667f6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B667f6c:{NFSU2_TR(0x667f6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B667f6f:{NFSU2_TR(0x667f6f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667f70:{NFSU2_TR(0x667f70);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B667f71:{NFSU2_TR(0x667f71);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B667f75:{NFSU2_TR(0x667f75);
if(r1(R+518)){TAIL_STATIC(0x668cadu,668);}
}
B667f7b:L667f7b:{c.instructions+=6;NFSU2_TR(0x667f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667f7e:{NFSU2_TR(0x667f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667f81:{NFSU2_TR(0x667f81);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B667f84:{NFSU2_TR(0x667f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667f87:{NFSU2_TR(0x667f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667f8a:{NFSU2_TR(0x667f8a);
if(r1(R+518)){TAIL_STATIC(0x6680a2u,668);}
}
B667f90:L667f90:{c.instructions+=13;NFSU2_TR(0x667f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667f93:{NFSU2_TR(0x667f93);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667f96:{NFSU2_TR(0x667f96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667f97:{NFSU2_TR(0x667f97);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667f9a:{NFSU2_TR(0x667f9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667f9b:{NFSU2_TR(0x667f9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B667f9e:{NFSU2_TR(0x667f9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667f9f:{NFSU2_TR(0x667f9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B667fa1:{NFSU2_TR(0x667fa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B667fa4:{NFSU2_TR(0x667fa4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fa5:{NFSU2_TR(0x667fa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fa6:{NFSU2_TR(0x667fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667fa9:{NFSU2_TR(0x667fa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667facull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B667fac:L667fac:{c.instructions+=2;NFSU2_TR(0x667fac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fad:{NFSU2_TR(0x667fad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667fb2ull));
TAIL_STATIC(0x65b3f7u,65b);
}
B667fb2:L667fb2:{c.instructions+=3;NFSU2_TR(0x667fb2);
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
B667fb4:{NFSU2_TR(0x667fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667fb7:{NFSU2_TR(0x667fb7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x668cadu,668);}
}
B667fbd:L667fbd:{c.instructions+=13;NFSU2_TR(0x667fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667fc0:{NFSU2_TR(0x667fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667fc3:{NFSU2_TR(0x667fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B667fc6:{NFSU2_TR(0x667fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667fc9:{NFSU2_TR(0x667fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B667fcc:{NFSU2_TR(0x667fcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B667fcf:{NFSU2_TR(0x667fcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fd0:{NFSU2_TR(0x667fd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B667fd3:{NFSU2_TR(0x667fd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fd4:{NFSU2_TR(0x667fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B667fd6:{NFSU2_TR(0x667fd6);
u8 U[4];
w4(U+0,u32(0x53455250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fdb:{NFSU2_TR(0x667fdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fdc:{NFSU2_TR(0x667fdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667fdfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B667fdf:L667fdf:{c.instructions+=2;NFSU2_TR(0x667fdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667fe0:{NFSU2_TR(0x667fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x667fe5ull));
TAIL_STATIC(0x671db5u,671);
}
B667fe5:L667fe5:{c.instructions+=3;NFSU2_TR(0x667fe5);
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
B667fe7:{NFSU2_TR(0x667fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B667fea:{NFSU2_TR(0x667fea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x668cb9u,668);}
}
B667ff0:L667ff0:{c.instructions+=1;NFSU2_TR(0x667ff0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66805cu,668);}
}
B667ff2:L667ff2:{c.instructions+=5;NFSU2_TR(0x667ff2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B667ff8:{NFSU2_TR(0x667ff8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667ff9:{NFSU2_TR(0x667ff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B667ffc:{NFSU2_TR(0x667ffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B667ffd:{NFSU2_TR(0x667ffd);
u8 U[4];
w4(U+0,u32(0x49535250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x668002u,668);
}
XIT:NFSU2_TR_EXIT(0x667,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
